/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg217BusHiSpd.c
 *        Config:  C:/_Synergy_Projects/Working/MM065A_FordMsg217BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg217BusHiSpd
 *  Generated at:  Tue Feb 20 16:31:04 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg217BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer
* Nexteer Confidential
*
* Module File Name  : FordMsg217BusHiSpd.c
* Module Description: FordMsg217BusHiSpd - MM065A
* Project           : CBD
* Author            : Guru Seshadhri (TATA Elxsi)
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       nz2796 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* --------  -------  --------  --------------------------------------------------------------------------  ------------
* 11/27/17   1       GS(TATA)  Initial Version                                                               EA4#17241
* 01/03/18   2       KK	       Updated some inputs to use Ford specific datatypes                            EA4#18704
* 02/20/18   3       ML        Updated Input Data types                                                      EA4#20810
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
 *
 * Component Types:
 * ================
 * FordMsg217BusHiSpd
 *   The purpose of the Ford Message 217 Bus High Speed function is to provide the Electric Power Steering system with signal values for vehicle speed, Active Nibble Control,TSC, Brake Oscillation Reduction, and Trailer Back Up Assist functions from CAN. The Ford Message 217Bus High Speed function will perform the missing message and signal invalid diagnostics as well as providea validity signal for the signal values and received message.
 *
 *
 * Port Prototypes:
 * ================
 * GetRefTmr100MicroSec32bit
 *   It captures simulation time fromthe SimnTi value obtained at root layer of model and gives the RefTmr.
 *
 * GetTiSpan100MicroSec32bit
 *   It Captures simulation time fromSimnTi value, handles counter wrapping, and subtracts RefTmr, provides the TiSpan.
 *
 * SetNtcSts
 *   Returns the NTC Qualifier status.
 *
 *
 * Runnable Entities:
 * ==================
 * FordMsg217BusHiSpdInit1
 *   Initialization Runnable
 *
 * FordMsg217BusHiSpdPer1
 *   Periodic Runnable at 10 millisec
 *
 *********************************************************************************************************************/

#include "Rte_FordMsg217BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

 #include "NxtrFixdPt.h"
 #include "NxtrMath.h"
 /******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return values for Rte_Read and Rte_Write */

/********************************************* Embedded Local Constants **********************************************/
 #define BUSHISPDFIXDTITHD_MILLISEC_U16                    (5000U)
 #define CNVMILLISECTOCNT_CNTPERMILLISEC_U16               (10U)
 #define DEBSTEP_CNT_U16                                   (65535U)
 #define DIAGENA_CNT_U08                                   (0U)
 #define FAULTHLSPD_RADPERSEC_U16                          (32767U)
 #define FORDVEHFRNTLEWHLSPDMAX_RADPERSEC_F32              (327.65F)
 #define FORDVEHFRNTLEWHLSPDMIN_RADPERSEC_F32              (0.0F)
 #define FORDVEHFRNTLEWHLSPDRAWMAX_CNT_U16                 (32767U)
 #define FORDVEHFRNTLEWHLSPDRAWMIN_CNT_U16                 (0U)
 #define FORDVEHFRNTRIWHLSPDMAX_RADPERSEC_F32              (327.65F)
 #define FORDVEHFRNTRIWHLSPDMIN_RADPERSEC_F32              (0.0F)
 #define FORDVEHFRNTRIWHLSPDRAWMAX_CNT_U16                 (32767U)
 #define FORDVEHFRNTRIWHLSPDRAWMIN_CNT_U16                 (0U)
 #define FORDVEHRELEWHLSPDMAX_RADPERSEC_F32                (327.65F)
 #define FORDVEHRELEWHLSPDMIN_RADPERSEC_F32                (0.0F)
 #define FORDVEHRELEWHLSPDRAWMAX_CNT_U16                   (32767U)
 #define FORDVEHRELEWHLSPDRAWMIN_CNT_U16                   (0U)
 #define FORDVEHRERIWHLSPDMAX_RADPERSEC_F32                (327.65F)
 #define FORDVEHRERIWHLSPDMIN_RADPERSEC_F32                (0.0F)
 #define FORDVEHRERIWHLSPDRAWMAX_CNT_U16                   (32767U)
 #define FORDVEHRERIWHLSPDRAWMIN_CNT_U16                   (0U)
 #define MODSEL_CNT_U08                                    (1U)
 #define UKWNWHLSPD_RADPERSEC_U16                          (32766U)
 #define WHLSPDSCAGVAL_RADPERSECPERCNT_F32                 (0.01F)

/******************************************** Local Function Prototypes **********************************************/
 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) DiagEna(VAR(uint8,AUTOMATIC) FordMissMsgDiagcInhb_Cnt_T_u08,
                                                             VAR(uint8,AUTOMATIC) FordInvldMsgDiagcInhb_Cnt_T_u08,
                                                             VAR(uint8,AUTOMATIC) ClrDiagcFlgProxy_Cnt_T_u08,
                                                             VAR(uint8,AUTOMATIC) FordMfgDiagcInhb_Cnt_T_u08,
                                                             VAR(uint8,AUTOMATIC) FordCanDtcInhb_Cnt_T_u08,
                                                             VAR(boolean,AUTOMATIC) FordAbsPrsnt_Cnt_T_logl,
                                                             VAR(boolean,AUTOMATIC) FordActvNiblCtrlEnad_Cnt_T_logl,
                                                             VAR(boolean,AUTOMATIC) FordBrkOscnRednEnad_Cnt_T_logl,
                                                             VAR(boolean,AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl,
                                                             VAR(boolean,AUTOMATIC) FordTrlrBackupAssiEnad_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) MissMsgDiagEna_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FrntWhlSpdDiagEna_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) ReWhlSpdDiagEna_Cnt_T_logl);

 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) CalSeln(VAR(uint8,AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) BusHiSpdMissMsgFaildThd_MilliSec_T_u16p0,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FrntLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FrntRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) ReRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0);

 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) VldFalse(P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntLeWhlSpdVld_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntRiWhlSpdVld_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReLeWhlSpdVld_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReRiWhlSpdVld_Cnt_T_logl);

 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) SigProcg(VAR(uint16,AUTOMATIC) Ford_WhlFl_W_Meas_Cnt_T_enum,
                                                             VAR(uint16,AUTOMATIC) Ford_WhlFr_W_Meas_Cnt_T_enum,
                                                             VAR(uint16,AUTOMATIC) Ford_WhlRl_W_Meas_Cnt_T_enum,
                                                             VAR(uint16,AUTOMATIC) Ford_WhlRr_W_Meas_Cnt_T_enum,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntLeWhlSpdRaw_Cnt_T_u16,
                                                             P2VAR(float32,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntLeWhlSpd_RadPerSec_T_f32,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntRiWhlSpdRaw_Cnt_T_u16,
                                                             P2VAR(float32,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntRiWhlSpd_RadPerSec_T_f32,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReLeWhlSpdRaw_Cnt_T_u16,
                                                             P2VAR(float32,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReLeWhlSpd_RadPerSec_T_f32,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReRiWhlSpdRaw_Cnt_T_u16,
                                                             P2VAR(float32,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReRiWhlSpd_RadPerSec_T_f32,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntLeWhlSpdVld_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntRiWhlSpdVld_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReLeWhlSpdVld_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReRiWhlSpdVld_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntRiWhlSpdVldInp_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntLeWhlSpdVldInp_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReRiWhlSpdVldInp_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReLeWhlSpdVldInp_Cnt_T_logl);

 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) VldChk(VAR(boolean,AUTOMATIC) FordVehFrntLeWhlSpd_Cnt_T_logl,
                                                            VAR(boolean,AUTOMATIC) FordVehFrntRiWhlSpd_Cnt_T_logl,
                                                            VAR(boolean,AUTOMATIC) FordVehReLeWhlSpd_Cnt_T_logl,
                                                            VAR(boolean,AUTOMATIC) FordVehReRiWhlSpd_Cnt_T_logl,
                                                            P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntLeWhlSpdVld_Cnt_T_logl,
                                                            P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntRiWhlSpdVld_Cnt_T_logl,
                                                            P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReLeWhlSpdVld_Cnt_T_logl,
                                                            P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReRiWhlSpdVld_Cnt_T_logl);
															
 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) FrntWhlSpdDiagEnaChk(VAR(boolean,AUTOMATIC) FrntWhlSpdDiagEna_Cnt_T_logl,
																		  VAR(uint16,AUTOMATIC) FrntLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
																		  VAR(uint16,AUTOMATIC) FrntRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
																		  VAR(boolean,AUTOMATIC) FordVehFrntLeWhlSpdVldInp_Cnt_T_logl,
																		  VAR(boolean,AUTOMATIC) FordVehFrntRiWhlSpdVldInp_Cnt_T_logl);
																		  
 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) ReWhlSpdDiagEnaChk(VAR(boolean,AUTOMATIC) ReWhlSpdDiagEna_Cnt_T_logl,
																		VAR(uint16,AUTOMATIC) ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
																		VAR(uint16,AUTOMATIC) ReRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
																		VAR(boolean,AUTOMATIC) FordVehReLeWhlSpdVldInp_Cnt_T_logl,
																		VAR(boolean,AUTOMATIC) FordVehReRiWhlSpdVldInp_Cnt_T_logl);
																		
 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) MissMsgDiagEnaChk(VAR(boolean,AUTOMATIC) MissMsgDiagEna_Cnt_T_logl);

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
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Ford_WhlFl_W_Meas: Enumeration of integer in interval [0...32767] with enumerators
 *   Cx7FFE_Unknown (32766U)
 *   Cx7FFF_Fault (32767U)
 *   Unit: [rad/s], Factor: 0.01, Offset: 0
 * Ford_WhlFr_W_Meas: Enumeration of integer in interval [0...32767] with enumerators
 *   Cx7FFE_Unknown (32766U)
 *   Cx7FFF_Fault (32767U)
 *   Unit: [rad/s], Factor: 0.01, Offset: 0
 * Ford_WhlRl_W_Meas: Enumeration of integer in interval [0...32767] with enumerators
 *   Cx7FFE_Unknown (32766U)
 *   Cx7FFF_Fault (32767U)
 *   Unit: [rad/s], Factor: 0.01, Offset: 0
 * Ford_WhlRr_W_Meas: Enumeration of integer in interval [0...32767] with enumerators
 *   Cx7FFE_Unknown (32766U)
 *   Cx7FFF_Fault (32767U)
 *   Unit: [rad/s], Factor: 0.01, Offset: 0
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
 *   float32 *Rte_Pim_FordVehFrntLeWhlSpdPrev(void)
 *   float32 *Rte_Pim_FordVehFrntRiWhlSpdPrev(void)
 *   float32 *Rte_Pim_FordVehReLeWhlSpdPrev(void)
 *   float32 *Rte_Pim_FordVehReRiWhlSpdPrev(void)
 *   uint32 *Rte_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntLeWhlSpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntLeWhlSpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntLeWhlSpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntRiWhlSpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntRiWhlSpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehFrntRiWhlSpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehReLeWhlSpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehReLeWhlSpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehReLeWhlSpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehReLeWhlSpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehReLeWhlSpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehReRiWhlSpdInvldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehReRiWhlSpdInvldPassdRefTi(void)
 *   uint32 *Rte_Pim_FordVehReRiWhlSpdVldFaildRefTi(void)
 *   uint32 *Rte_Pim_FordVehReRiWhlSpdVldMissRefTi(void)
 *   uint32 *Rte_Pim_FordVehReRiWhlSpdVldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehFrntLeWhlSpdRawPrev(void)
 *   uint16 *Rte_Pim_FordVehFrntRiWhlSpdRawPrev(void)
 *   uint16 *Rte_Pim_FordVehReLeWhlSpdRawPrev(void)
 *   uint16 *Rte_Pim_FordVehReRiWhlSpdRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   boolean *Rte_Pim_FordVehFrntLeWhlSpdVldPrev(void)
 *   boolean *Rte_Pim_FordVehFrntRiWhlSpdVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg217Miss(void)
 *   boolean *Rte_Pim_FordVehMsg217Rxd(void)
 *   boolean *Rte_Pim_FordVehReLeWhlSpdVldPrev(void)
 *   boolean *Rte_Pim_FordVehReRiWhlSpdVldPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdMissMsgFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdMissMsgPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReLeWhlVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReLeWhlVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReLeWhlVldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReRiWhlVldFaildThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReRiWhlVldMissThd_Val(void)
 *   u16p0 Rte_Prm_FordMsg217BusHiSpdReRiWhlVldPassdThd_Val(void)
 *
 *********************************************************************************************************************/


#define FordMsg217BusHiSpd_START_SEC_CODE
#include "FordMsg217BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg217BusHiSpdInit1
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
 * Symbol: FordMsg217BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg217BusHiSpd_CODE) FordMsg217BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg217BusHiSpdInit1
 *********************************************************************************************************************/
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdInvldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdInvldPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdInvldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdInvldPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdVldMissRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdVldMissRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdVldMissRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdVldMissRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdVldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdVldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdVldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdVldFaildRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdVldPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdVldPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdVldPassdRefTi());
 (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdVldPassdRefTi());

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg217BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordActvNiblCtrlEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordBrkOscnRednEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordCanDtcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordEpsLifeCycMod_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordInvldMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMfgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordMissMsgDiagcInhb_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_FordTqSteerCmpEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrlrBackupAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_WhlFl_W_Meas_Ford_WhlFl_W_Meas(Ford_WhlFl_W_Meas *data)
 *   Std_ReturnType Rte_Read_Ford_WhlFr_W_Meas_Ford_WhlFr_W_Meas(Ford_WhlFr_W_Meas *data)
 *   Std_ReturnType Rte_Read_Ford_WhlRl_W_Meas_Ford_WhlRl_W_Meas(Ford_WhlRl_W_Meas *data)
 *   Std_ReturnType Rte_Read_Ford_WhlRr_W_Meas_Ford_WhlRr_W_Meas(Ford_WhlRr_W_Meas *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehFrntLeWhlSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehFrntLeWhlSpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehFrntLeWhlSpdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehFrntRiWhlSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehFrntRiWhlSpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehFrntRiWhlSpdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehReLeWhlSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehReLeWhlSpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehReLeWhlSpdVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehReRiWhlSpd_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehReRiWhlSpdRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehReRiWhlSpdVld_Logl(boolean data)
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
 * Symbol: FordMsg217BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg217BusHiSpd_CODE) FordMsg217BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg217BusHiSpdPer1
 *********************************************************************************************************************/

 VAR(uint8,AUTOMATIC) FordMissMsgDiagcInhb_Cnt_T_u08;
 VAR(uint8,AUTOMATIC) FordInvldMsgDiagcInhb_Cnt_T_u08;
 VAR(uint8,AUTOMATIC) ClrDiagcFlgProxy_Cnt_T_u08;
 VAR(uint8,AUTOMATIC) FordMfgDiagcInhb_Cnt_T_u08;
 VAR(uint8,AUTOMATIC) FordCanDtcInhb_Cnt_T_u08;
 VAR(boolean,AUTOMATIC) FordAbsPrsnt_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FordActvNiblCtrlEnad_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FordBrkOscnRednEnad_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FordTrlrBackupAssiEnad_Cnt_T_logl;
 VAR(uint8,AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08;

 VAR(uint16,AUTOMATIC) BusHiSpdMissMsgFaildThd_MilliSec_T_u16p0;
 VAR(uint16,AUTOMATIC) FrntLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0;
 VAR(uint16,AUTOMATIC) FrntRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0;
 VAR(uint16,AUTOMATIC) ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0;
 VAR(uint16,AUTOMATIC) ReRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0;
 VAR(uint16,AUTOMATIC) FordVehFrntLeWhlSpdRaw_Cnt_T_u16;
 VAR(uint16,AUTOMATIC) FordVehFrntRiWhlSpdRaw_Cnt_T_u16;
 VAR(uint16,AUTOMATIC) FordVehReLeWhlSpdRaw_Cnt_T_u16;
 VAR(uint16,AUTOMATIC) FordVehReRiWhlSpdRaw_Cnt_T_u16;
 VAR(uint16,AUTOMATIC) Ford_WhlFl_W_Meas_Cnt_T_enum;
 VAR(uint16,AUTOMATIC) Ford_WhlFr_W_Meas_Cnt_T_enum;
 VAR(uint16,AUTOMATIC) Ford_WhlRl_W_Meas_Cnt_T_enum;
 VAR(uint16,AUTOMATIC) Ford_WhlRr_W_Meas_Cnt_T_enum;

 VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;

 VAR(float32,AUTOMATIC) FordVehFrntLeWhlSpd_RadPerSec_T_f32;
 VAR(float32,AUTOMATIC) FordVehFrntRiWhlSpd_RadPerSec_T_f32;
 VAR(float32,AUTOMATIC) FordVehReLeWhlSpd_RadPerSec_T_f32;
 VAR(float32,AUTOMATIC) FordVehReRiWhlSpd_RadPerSec_T_f32;

 VAR(boolean,AUTOMATIC) MissMsgDiagEna_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FrntWhlSpdDiagEna_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) ReWhlSpdDiagEna_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FordVehFrntLeWhlSpdVld_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FordVehFrntRiWhlSpdVld_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FordVehReLeWhlSpdVld_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FordVehReRiWhlSpdVld_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FordVehFrntRiWhlSpdVldInp_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FordVehFrntLeWhlSpdVldInp_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FordVehReRiWhlSpdVldInp_Cnt_T_logl;
 VAR(boolean,AUTOMATIC) FordVehReLeWhlSpdVldInp_Cnt_T_logl;

 /*Reading inputs from RTE*/
 (void)Rte_Read_ClrDiagcFlgProxy_Val(&ClrDiagcFlgProxy_Cnt_T_u08);
 (void)Rte_Read_FordAbsPrsnt_Logl(&FordAbsPrsnt_Cnt_T_logl);
 (void)Rte_Read_FordActvNiblCtrlEnad_Logl(&FordActvNiblCtrlEnad_Cnt_T_logl);
 (void)Rte_Read_FordBrkOscnRednEnad_Logl(&FordBrkOscnRednEnad_Cnt_T_logl);
 (void)Rte_Read_FordCanDtcInhb_Val(&FordCanDtcInhb_Cnt_T_u08);
 (void)Rte_Read_FordEpsLifeCycMod_Val(&FordEpsLifeCycMod_Cnt_T_u08);
 (void)Rte_Read_FordInvldMsgDiagcInhb_Val(&FordInvldMsgDiagcInhb_Cnt_T_u08);
 (void)Rte_Read_FordMfgDiagcInhb_Val(&FordMfgDiagcInhb_Cnt_T_u08);
 (void)Rte_Read_FordMissMsgDiagcInhb_Val(&FordMissMsgDiagcInhb_Cnt_T_u08);
 (void)Rte_Read_FordTqSteerCmpEnad_Logl(&FordTqSteerCmpEnad_Cnt_T_logl);
 (void)Rte_Read_FordTrlrBackupAssiEnad_Logl(&FordTrlrBackupAssiEnad_Cnt_T_logl);
 (void)Rte_Read_Ford_WhlFl_W_Meas_Ford_WhlFl_W_Meas(&Ford_WhlFl_W_Meas_Cnt_T_enum);
 (void)Rte_Read_Ford_WhlFr_W_Meas_Ford_WhlFr_W_Meas(&Ford_WhlFr_W_Meas_Cnt_T_enum);
 (void)Rte_Read_Ford_WhlRl_W_Meas_Ford_WhlRl_W_Meas(&Ford_WhlRl_W_Meas_Cnt_T_enum);
 (void)Rte_Read_Ford_WhlRr_W_Meas_Ford_WhlRr_W_Meas(&Ford_WhlRr_W_Meas_Cnt_T_enum);

 /*** Start of DiagEna ***/
 DiagEna(FordMissMsgDiagcInhb_Cnt_T_u08,
         FordInvldMsgDiagcInhb_Cnt_T_u08,
         ClrDiagcFlgProxy_Cnt_T_u08,
         FordMfgDiagcInhb_Cnt_T_u08,
         FordCanDtcInhb_Cnt_T_u08,
         FordAbsPrsnt_Cnt_T_logl,
         FordActvNiblCtrlEnad_Cnt_T_logl,
         FordBrkOscnRednEnad_Cnt_T_logl,
         FordTqSteerCmpEnad_Cnt_T_logl,
         FordTrlrBackupAssiEnad_Cnt_T_logl,
         &MissMsgDiagEna_Cnt_T_logl,
         &FrntWhlSpdDiagEna_Cnt_T_logl,
         &ReWhlSpdDiagEna_Cnt_T_logl);
 /*** End of DiagEna ***/

 /*** Start of CalSeln ***/
 CalSeln(FordEpsLifeCycMod_Cnt_T_u08,
         &BusHiSpdMissMsgFaildThd_MilliSec_T_u16p0,
         &FrntLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
         &FrntRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
         &ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
         &ReRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0);
 /*** End of CalSeln ***/

 if(TRUE == *Rte_Pim_FordVehMsg217Miss())
 {
     /*** Start of FordMsg217MsgMiss ***/
     if(TRUE == MissMsgDiagEna_Cnt_T_logl)
     {
         /*** Start of FordMsg217MissMsgFail ***/
         (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgFaildRefTi(),&TiSpan_Cnt_T_u32);
         if(TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdMissMsgFaildThd_MilliSec_T_u16p0 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
         {
             (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13C, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
         }
         /*** End of FordMsg217MissMsgFail ***/
     }
     else
     {
         /*** Start of TimerReset ***/
         (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
         (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13C, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
         /*** End of TimerReset ***/
     }

     FordVehFrntLeWhlSpdRaw_Cnt_T_u16 = *Rte_Pim_FordVehFrntLeWhlSpdRawPrev();
     FordVehFrntLeWhlSpd_RadPerSec_T_f32 = *Rte_Pim_FordVehFrntLeWhlSpdPrev();
     FordVehFrntRiWhlSpdRaw_Cnt_T_u16 = *Rte_Pim_FordVehFrntRiWhlSpdRawPrev();
     FordVehFrntRiWhlSpd_RadPerSec_T_f32 = *Rte_Pim_FordVehFrntRiWhlSpdPrev();
     FordVehReLeWhlSpdRaw_Cnt_T_u16 = *Rte_Pim_FordVehReLeWhlSpdRawPrev();
     FordVehReLeWhlSpd_RadPerSec_T_f32 = *Rte_Pim_FordVehReLeWhlSpdPrev();
     FordVehReRiWhlSpdRaw_Cnt_T_u16 = *Rte_Pim_FordVehReRiWhlSpdRawPrev();
     FordVehReRiWhlSpd_RadPerSec_T_f32 = *Rte_Pim_FordVehReRiWhlSpdPrev();

     /*** Start of VldFalse ***/
     VldFalse(&FordVehFrntLeWhlSpdVld_Cnt_T_logl,
              &FordVehFrntRiWhlSpdVld_Cnt_T_logl,
              &FordVehReLeWhlSpdVld_Cnt_T_logl,
              &FordVehReRiWhlSpdVld_Cnt_T_logl);
     /*** End of VldFalse ***/

     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgPassdRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdInvldFaildRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdInvldPassdRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdInvldFaildRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdInvldPassdRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdVldFaildRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdVldFaildRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdVldFaildRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdVldFaildRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdVldPassdRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdVldPassdRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdVldPassdRefTi());
     (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdVldPassdRefTi());

     (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13D, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
     (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13E, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
     (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13F, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
     (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X140, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);

     /*** End of FordMsg217MsgMiss ***/
 }
 else if(TRUE == *Rte_Pim_FordVehMsg217Rxd())
 {
     /*** Start of FordMsg217MsgPrsnt ***/
        /*** Start of SignalProcessing ***/
        SigProcg(Ford_WhlFl_W_Meas_Cnt_T_enum,
                Ford_WhlFr_W_Meas_Cnt_T_enum,
                Ford_WhlRl_W_Meas_Cnt_T_enum,
                Ford_WhlRr_W_Meas_Cnt_T_enum,
                &FordVehFrntLeWhlSpdRaw_Cnt_T_u16,
                &FordVehFrntLeWhlSpd_RadPerSec_T_f32,
                &FordVehFrntRiWhlSpdRaw_Cnt_T_u16,
                &FordVehFrntRiWhlSpd_RadPerSec_T_f32,
                &FordVehReLeWhlSpdRaw_Cnt_T_u16,
                &FordVehReLeWhlSpd_RadPerSec_T_f32,
                &FordVehReRiWhlSpdRaw_Cnt_T_u16,
                &FordVehReRiWhlSpd_RadPerSec_T_f32,
                &FordVehFrntLeWhlSpdVld_Cnt_T_logl,
                &FordVehFrntRiWhlSpdVld_Cnt_T_logl,
                &FordVehReLeWhlSpdVld_Cnt_T_logl,
                &FordVehReRiWhlSpdVld_Cnt_T_logl,
                &FordVehFrntRiWhlSpdVldInp_Cnt_T_logl,
                &FordVehFrntLeWhlSpdVldInp_Cnt_T_logl,
                &FordVehReRiWhlSpdVldInp_Cnt_T_logl,
                &FordVehReLeWhlSpdVldInp_Cnt_T_logl);
        /*** End of SignalProcessing ***/
		
		/*** Start of FrntWhlSpdDiagEnaChk ***/
		FrntWhlSpdDiagEnaChk(FrntWhlSpdDiagEna_Cnt_T_logl,
							 FrntLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
							 FrntRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
							 FordVehFrntLeWhlSpdVldInp_Cnt_T_logl,
							 FordVehFrntRiWhlSpdVldInp_Cnt_T_logl);
		/*** End of FrntWhlSpdDiagEnaChk ***/

   		/*** Start of ReWhlSpdDiagEnaChk ***/
		ReWhlSpdDiagEnaChk(ReWhlSpdDiagEna_Cnt_T_logl,
		                   ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
						   ReRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
						   FordVehReLeWhlSpdVldInp_Cnt_T_logl,
						   FordVehReRiWhlSpdVldInp_Cnt_T_logl);
   		/*** End of ReWhlSpdDiagEnaChk ***/

		/*** Start of MissMsgDiagEnaChk ***/
		MissMsgDiagEnaChk(MissMsgDiagEna_Cnt_T_logl);
		/*** End of MissMsgDiagEnaChk ***/
		
		*Rte_Pim_FordVehMsg217Rxd() = FALSE;
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdVldMissRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdVldMissRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdVldMissRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdVldMissRefTi());

     /*** End of FordMsg217MsgPrsnt ***/
 }
 else
 {
     /** Start of LastStored_Value **/
    FordVehFrntLeWhlSpdRaw_Cnt_T_u16 = *Rte_Pim_FordVehFrntLeWhlSpdRawPrev();
    FordVehFrntLeWhlSpd_RadPerSec_T_f32 = *Rte_Pim_FordVehFrntLeWhlSpdPrev();
    FordVehFrntLeWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehFrntLeWhlSpdVldPrev();
    FordVehFrntRiWhlSpdRaw_Cnt_T_u16 = *Rte_Pim_FordVehFrntRiWhlSpdRawPrev();
    FordVehFrntRiWhlSpd_RadPerSec_T_f32 = *Rte_Pim_FordVehFrntRiWhlSpdPrev();
    FordVehFrntRiWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehFrntRiWhlSpdVldPrev();
    FordVehReLeWhlSpdRaw_Cnt_T_u16 = *Rte_Pim_FordVehReLeWhlSpdRawPrev();
    FordVehReLeWhlSpd_RadPerSec_T_f32 = *Rte_Pim_FordVehReLeWhlSpdPrev();
    FordVehReLeWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehReLeWhlSpdVldPrev();
    FordVehReRiWhlSpdRaw_Cnt_T_u16 = *Rte_Pim_FordVehReRiWhlSpdRawPrev();
    FordVehReRiWhlSpd_RadPerSec_T_f32 = *Rte_Pim_FordVehReRiWhlSpdPrev();
    FordVehReRiWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehReRiWhlSpdVldPrev();
	 /** End of LastStored_Value **/
 }

 FordVehFrntLeWhlSpdRaw_Cnt_T_u16 = Lim_u16(FordVehFrntLeWhlSpdRaw_Cnt_T_u16, FORDVEHFRNTLEWHLSPDRAWMIN_CNT_U16, FORDVEHFRNTLEWHLSPDRAWMAX_CNT_U16);
 *Rte_Pim_FordVehFrntLeWhlSpdRawPrev() = FordVehFrntLeWhlSpdRaw_Cnt_T_u16;

 FordVehFrntLeWhlSpd_RadPerSec_T_f32 = Lim_f32(FordVehFrntLeWhlSpd_RadPerSec_T_f32, FORDVEHFRNTLEWHLSPDMIN_RADPERSEC_F32, FORDVEHFRNTLEWHLSPDMAX_RADPERSEC_F32);
 *Rte_Pim_FordVehFrntLeWhlSpdPrev() = FordVehFrntLeWhlSpd_RadPerSec_T_f32;

 *Rte_Pim_FordVehFrntLeWhlSpdVldPrev() = FordVehFrntLeWhlSpdVld_Cnt_T_logl;

 FordVehFrntRiWhlSpdRaw_Cnt_T_u16 = Lim_u16(FordVehFrntRiWhlSpdRaw_Cnt_T_u16, FORDVEHFRNTRIWHLSPDRAWMIN_CNT_U16, FORDVEHFRNTRIWHLSPDRAWMAX_CNT_U16);
 *Rte_Pim_FordVehFrntRiWhlSpdRawPrev() = FordVehFrntRiWhlSpdRaw_Cnt_T_u16;

 FordVehFrntRiWhlSpd_RadPerSec_T_f32 = Lim_f32(FordVehFrntRiWhlSpd_RadPerSec_T_f32, FORDVEHFRNTRIWHLSPDMIN_RADPERSEC_F32, FORDVEHFRNTRIWHLSPDMAX_RADPERSEC_F32);
 *Rte_Pim_FordVehFrntRiWhlSpdPrev() = FordVehFrntRiWhlSpd_RadPerSec_T_f32;

 *Rte_Pim_FordVehFrntRiWhlSpdVldPrev() = FordVehFrntRiWhlSpdVld_Cnt_T_logl;

 FordVehReLeWhlSpdRaw_Cnt_T_u16 = Lim_u16(FordVehReLeWhlSpdRaw_Cnt_T_u16, FORDVEHRELEWHLSPDRAWMIN_CNT_U16, FORDVEHRELEWHLSPDRAWMAX_CNT_U16);
 *Rte_Pim_FordVehReLeWhlSpdRawPrev() = FordVehReLeWhlSpdRaw_Cnt_T_u16;

 FordVehReLeWhlSpd_RadPerSec_T_f32 = Lim_f32(FordVehReLeWhlSpd_RadPerSec_T_f32, FORDVEHRELEWHLSPDMIN_RADPERSEC_F32, FORDVEHRELEWHLSPDMAX_RADPERSEC_F32);
 *Rte_Pim_FordVehReLeWhlSpdPrev() = FordVehReLeWhlSpd_RadPerSec_T_f32;

 *Rte_Pim_FordVehReLeWhlSpdVldPrev() = FordVehReLeWhlSpdVld_Cnt_T_logl;

 FordVehReRiWhlSpdRaw_Cnt_T_u16 = Lim_u16(FordVehReRiWhlSpdRaw_Cnt_T_u16, FORDVEHRERIWHLSPDRAWMIN_CNT_U16, FORDVEHRERIWHLSPDRAWMAX_CNT_U16);
 *Rte_Pim_FordVehReRiWhlSpdRawPrev() = FordVehReRiWhlSpdRaw_Cnt_T_u16;

 FordVehReRiWhlSpd_RadPerSec_T_f32 = Lim_f32(FordVehReRiWhlSpd_RadPerSec_T_f32, FORDVEHRERIWHLSPDMIN_RADPERSEC_F32, FORDVEHRERIWHLSPDMAX_RADPERSEC_F32);
 *Rte_Pim_FordVehReRiWhlSpdPrev() = FordVehReRiWhlSpd_RadPerSec_T_f32;

 *Rte_Pim_FordVehReRiWhlSpdVldPrev() = FordVehReRiWhlSpdVld_Cnt_T_logl;

 /** Range Limit and Writing outputs to RTE **/
 (void)Rte_Write_FordVehFrntLeWhlSpd_Val(FordVehFrntLeWhlSpd_RadPerSec_T_f32);
 (void)Rte_Write_FordVehFrntLeWhlSpdRaw_Val(FordVehFrntLeWhlSpdRaw_Cnt_T_u16);
 (void)Rte_Write_FordVehFrntLeWhlSpdVld_Logl(FordVehFrntLeWhlSpdVld_Cnt_T_logl);
 (void)Rte_Write_FordVehFrntRiWhlSpd_Val(FordVehFrntRiWhlSpd_RadPerSec_T_f32);
 (void)Rte_Write_FordVehFrntRiWhlSpdRaw_Val(FordVehFrntRiWhlSpdRaw_Cnt_T_u16);
 (void)Rte_Write_FordVehFrntRiWhlSpdVld_Logl(FordVehFrntRiWhlSpdVld_Cnt_T_logl);
 (void)Rte_Write_FordVehReLeWhlSpd_Val(FordVehReLeWhlSpd_RadPerSec_T_f32);
 (void)Rte_Write_FordVehReLeWhlSpdRaw_Val(FordVehReLeWhlSpdRaw_Cnt_T_u16);
 (void)Rte_Write_FordVehReLeWhlSpdVld_Logl(FordVehReLeWhlSpdVld_Cnt_T_logl);
 (void)Rte_Write_FordVehReRiWhlSpd_Val(FordVehReRiWhlSpd_RadPerSec_T_f32);
 (void)Rte_Write_FordVehReRiWhlSpdRaw_Val(FordVehReRiWhlSpdRaw_Cnt_T_u16);
 (void)Rte_Write_FordVehReRiWhlSpdVld_Logl(FordVehReRiWhlSpdVld_Cnt_T_logl);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg217BusHiSpd_STOP_SEC_CODE
#include "FordMsg217BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************
  * Name            : DiagEna
  * Description     : Implementation of "DiagEna" subsystem in model.
  * Inputs          : FordMissMsgDiagcInhb_Cnt_T_u08,
  *                   FordInvldMsgDiagcInhb_Cnt_T_u08,
  *                   ClrDiagcFlgProxy_Cnt_T_u08,
  *                   FordMfgDiagcInhb_Cnt_T_u08,
  *                   FordCanDtcInhb_Cnt_T_u08,
  *                   FordAbsPrsnt_Cnt_T_logl,
  *                   FordActvNiblCtrlEnad_Cnt_T_logl,
  *                   FordBrkOscnRednEnad_Cnt_T_logl,
  *                   FordTqSteerCmpEnad_Cnt_T_logl,
  *                   FordTrlrBackupAssiEnad_Cnt_T_logl,
  * Outputs         : *MissMsgDiagEna_Cnt_T_logl,
  *                   *FrntWhlSpdDiagEna_Cnt_T_logl,
  *                   *ReWhlSpdDiagEna_Cnt_T_logl
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) DiagEna(VAR(uint8,AUTOMATIC) FordMissMsgDiagcInhb_Cnt_T_u08,
                                                             VAR(uint8,AUTOMATIC) FordInvldMsgDiagcInhb_Cnt_T_u08,
                                                             VAR(uint8,AUTOMATIC) ClrDiagcFlgProxy_Cnt_T_u08,
                                                             VAR(uint8,AUTOMATIC) FordMfgDiagcInhb_Cnt_T_u08,
                                                             VAR(uint8,AUTOMATIC) FordCanDtcInhb_Cnt_T_u08,
                                                             VAR(boolean,AUTOMATIC) FordAbsPrsnt_Cnt_T_logl,
                                                             VAR(boolean,AUTOMATIC) FordActvNiblCtrlEnad_Cnt_T_logl,
                                                             VAR(boolean,AUTOMATIC) FordBrkOscnRednEnad_Cnt_T_logl,
                                                             VAR(boolean,AUTOMATIC) FordTqSteerCmpEnad_Cnt_T_logl,
                                                             VAR(boolean,AUTOMATIC) FordTrlrBackupAssiEnad_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) MissMsgDiagEna_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FrntWhlSpdDiagEna_Cnt_T_logl,
                                                             P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) ReWhlSpdDiagEna_Cnt_T_logl)
 {
    VAR(boolean,AUTOMATIC) ReFeatActvEna_Cnt_T_logl;
    VAR(boolean,AUTOMATIC) FeatActvEna_Cnt_T_logl;
    VAR(boolean,AUTOMATIC) CompAnd_Cnt_T_logl;
    
	/** Start of DiagEna **/
    if((FordAbsPrsnt_Cnt_T_logl == TRUE) ||
       (FordBrkOscnRednEnad_Cnt_T_logl == TRUE) ||
       (FordTqSteerCmpEnad_Cnt_T_logl == TRUE) ||
       (FordTrlrBackupAssiEnad_Cnt_T_logl == TRUE))
    {
        ReFeatActvEna_Cnt_T_logl = TRUE;
    }
    else
    {
        ReFeatActvEna_Cnt_T_logl = FALSE;
    }

    if((TRUE == ReFeatActvEna_Cnt_T_logl) ||
       (FordActvNiblCtrlEnad_Cnt_T_logl == TRUE))
    {
        FeatActvEna_Cnt_T_logl = TRUE;
    }
    else
    {
        FeatActvEna_Cnt_T_logl = FALSE;
    }

    if((FordCanDtcInhb_Cnt_T_u08 == DIAGENA_CNT_U08) &&
       (FordMfgDiagcInhb_Cnt_T_u08 == DIAGENA_CNT_U08) &&
       (ClrDiagcFlgProxy_Cnt_T_u08 == *Rte_Pim_ClrDiagcFlgProxyPrev()))
    {
        CompAnd_Cnt_T_logl = TRUE;
    }
    else
    {
        CompAnd_Cnt_T_logl = FALSE;
    }
    *Rte_Pim_ClrDiagcFlgProxyPrev() = ClrDiagcFlgProxy_Cnt_T_u08;

    if((FordMissMsgDiagcInhb_Cnt_T_u08 == DIAGENA_CNT_U08)&&
       (TRUE == FeatActvEna_Cnt_T_logl)&&
       (TRUE == CompAnd_Cnt_T_logl))
    {
        *MissMsgDiagEna_Cnt_T_logl = TRUE;
    }
    else
    {
        *MissMsgDiagEna_Cnt_T_logl = FALSE;
    }

    if((TRUE == CompAnd_Cnt_T_logl)&&
	   (TRUE == FeatActvEna_Cnt_T_logl)&&
       (FordInvldMsgDiagcInhb_Cnt_T_u08 == DIAGENA_CNT_U08))
    {
        *FrntWhlSpdDiagEna_Cnt_T_logl = TRUE;
    }
    else
    {
        *FrntWhlSpdDiagEna_Cnt_T_logl = FALSE;
    }

    if((FordInvldMsgDiagcInhb_Cnt_T_u08 == DIAGENA_CNT_U08)&&
       (TRUE == CompAnd_Cnt_T_logl)&&
       (TRUE == ReFeatActvEna_Cnt_T_logl))
    {
        *ReWhlSpdDiagEna_Cnt_T_logl = TRUE;
    }
    else
    {
        *ReWhlSpdDiagEna_Cnt_T_logl = FALSE;
    }
	   /** End of DiagEna **/
 }

/*****************************************************************************
  * Name            : CalSeln
  * Description     : Implementation of "CalSeln" subsystem in model.
  * Inputs          : FordEpsLifeCycMod_Cnt_T_u08.
  * Outputs         : *BusHiSpdMissMsgFaildThd_MilliSec_T_u16p0,
  *                   *FrntLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
  *                   *FrntRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
  *                   *ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
  *                   *ReRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) CalSeln(VAR(uint8,AUTOMATIC) FordEpsLifeCycMod_Cnt_T_u08,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) BusHiSpdMissMsgFaildThd_MilliSec_T_u16p0,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FrntLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FrntRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
                                                             P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) ReRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0)
 {
    /** Start of CalSeln **/
    if(FordEpsLifeCycMod_Cnt_T_u08 == MODSEL_CNT_U08)
    {
        *BusHiSpdMissMsgFaildThd_MilliSec_T_u16p0 = BUSHISPDFIXDTITHD_MILLISEC_U16;
        *FrntLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0 = BUSHISPDFIXDTITHD_MILLISEC_U16;
        *FrntRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0 = BUSHISPDFIXDTITHD_MILLISEC_U16;
        *ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0 = BUSHISPDFIXDTITHD_MILLISEC_U16;
        *ReRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0 = BUSHISPDFIXDTITHD_MILLISEC_U16;
    }
    else
    {
        *BusHiSpdMissMsgFaildThd_MilliSec_T_u16p0 = Rte_Prm_FordMsg217BusHiSpdMissMsgFaildThd_Val();
        *FrntLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0 = Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldFaildThd_Val();
        *FrntRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0 = Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldFaildThd_Val();
        *ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0 = Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldFaildThd_Val();
        *ReRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0 = Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldFaildThd_Val();
    }
	/** End of CalSeln **/
 }

/*****************************************************************************
  * Name            : VldFalse
  * Description     : Implementation of "VldFalse" subsystem in model.
  * Inputs          : NA.
  * Outputs         : *FordVehFrntLeWhlSpdVld_Cnt_T_logl,
  *                   *FordVehFrntRiWhlSpdVld_Cnt_T_logl,
  *                   *FordVehReLeWhlSpdVld_Cnt_T_logl,
  *                   *FordVehReRiWhlSpdVld_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) VldFalse(P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntLeWhlSpdVld_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntRiWhlSpdVld_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReLeWhlSpdVld_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReRiWhlSpdVld_Cnt_T_logl)
 {
    VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
	/** Start of VldFalse **/
    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehFrntLeWhlSpdVldMissRefTi(),&TiSpan_Cnt_T_u32);
    if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldMissThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
    {
        *FordVehFrntLeWhlSpdVld_Cnt_T_logl = FALSE;
    }
    else
    {
        *FordVehFrntLeWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehFrntLeWhlSpdVldPrev();
    }

    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehFrntRiWhlSpdVldMissRefTi(),&TiSpan_Cnt_T_u32);
    if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldMissThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
    {
        *FordVehFrntRiWhlSpdVld_Cnt_T_logl = FALSE;
    }
    else
    {
        *FordVehFrntRiWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehFrntRiWhlSpdVldPrev();
    }

    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehReLeWhlSpdVldMissRefTi(),&TiSpan_Cnt_T_u32);
    if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdReLeWhlVldMissThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
    {
        *FordVehReLeWhlSpdVld_Cnt_T_logl = FALSE;
    }
    else
    {
        *FordVehReLeWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehReLeWhlSpdVldPrev();
    }

    (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehReRiWhlSpdVldMissRefTi(),&TiSpan_Cnt_T_u32);
    if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdReRiWhlVldMissThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
    {
        *FordVehReRiWhlSpdVld_Cnt_T_logl = FALSE;
    }
    else
    {
        *FordVehReRiWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehReRiWhlSpdVldPrev();
    }
   /** End of VldFalse **/
 }

/*****************************************************************************
  * Name            : SigProcg
  * Description     : Implementation of "SignalProcessing" subsystem in model.
  * Inputs          : Ford_WhlFl_W_Meas_Cnt_T_enum,
  *                   Ford_WhlFr_W_Meas_Cnt_T_enum,
  *                   Ford_WhlRl_W_Meas_Cnt_T_enum,
  *                   Ford_WhlRr_W_Meas_Cnt_T_enum.
  * Outputs         : *FordVehFrntLeWhlSpdRaw_Cnt_T_u16,
  *                   *FordVehFrntLeWhlSpd_RadPerSec_T_f32,
  *                   *FordVehFrntRiWhlSpdRaw_Cnt_T_u16,
  *                   *FordVehFrntRiWhlSpd_RadPerSec_T_f32,
  *                   *FordVehReLeWhlSpdRaw_Cnt_T_u16,
  *                   *FordVehReLeWhlSpd_RadPerSec_T_f32,
  *                   *FordVehReRiWhlSpdRaw_Cnt_T_u16,
  *                   *FordVehReRiWhlSpd_RadPerSec_T_f32,
  *                   *FordVehFrntLeWhlSpdVld_Cnt_T_logl,
  *                   *FordVehFrntRiWhlSpdVld_Cnt_T_logl,
  *                   *FordVehReLeWhlSpdVld_Cnt_T_logl,
  *                   *FordVehReRiWhlSpdVld_Cnt_T_logl,
  *                   *FordVehFrntRiWhlSpdVldInp_Cnt_T_logl,
  *                   *FordVehFrntLeWhlSpdVldInp_Cnt_T_logl,
  *                   *FordVehReRiWhlSpdVldInp_Cnt_T_logl,
  *                   *FordVehReLeWhlSpdVldInp_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) SigProcg(VAR(uint16,AUTOMATIC) Ford_WhlFl_W_Meas_Cnt_T_enum,
                                                              VAR(uint16,AUTOMATIC) Ford_WhlFr_W_Meas_Cnt_T_enum,
                                                              VAR(uint16,AUTOMATIC) Ford_WhlRl_W_Meas_Cnt_T_enum,
                                                              VAR(uint16,AUTOMATIC) Ford_WhlRr_W_Meas_Cnt_T_enum,
                                                              P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntLeWhlSpdRaw_Cnt_T_u16,
                                                              P2VAR(float32,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntLeWhlSpd_RadPerSec_T_f32,
                                                              P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntRiWhlSpdRaw_Cnt_T_u16,
                                                              P2VAR(float32,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntRiWhlSpd_RadPerSec_T_f32,
                                                              P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReLeWhlSpdRaw_Cnt_T_u16,
                                                              P2VAR(float32,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReLeWhlSpd_RadPerSec_T_f32,
                                                              P2VAR(uint16,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReRiWhlSpdRaw_Cnt_T_u16,
                                                              P2VAR(float32,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReRiWhlSpd_RadPerSec_T_f32,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntLeWhlSpdVld_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntRiWhlSpdVld_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReLeWhlSpdVld_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReRiWhlSpdVld_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntRiWhlSpdVldInp_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntLeWhlSpdVldInp_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReRiWhlSpdVldInp_Cnt_T_logl,
                                                              P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReLeWhlSpdVldInp_Cnt_T_logl)
 {
     /** Start of SignalProcessing**/
     *FordVehFrntRiWhlSpdRaw_Cnt_T_u16 = Ford_WhlFr_W_Meas_Cnt_T_enum;
     *FordVehFrntRiWhlSpd_RadPerSec_T_f32 = FixdToFloat_f32_u16(Ford_WhlFr_W_Meas_Cnt_T_enum,NXTRFIXDPT_P0TOFLOAT_ULS_F32) * WHLSPDSCAGVAL_RADPERSECPERCNT_F32;
    if((Ford_WhlFr_W_Meas_Cnt_T_enum != UKWNWHLSPD_RADPERSEC_U16) &&
        (Ford_WhlFr_W_Meas_Cnt_T_enum != FAULTHLSPD_RADPERSEC_U16))
    {
        *FordVehFrntRiWhlSpdVldInp_Cnt_T_logl = TRUE;
    }
    else
    {
        *FordVehFrntRiWhlSpdVldInp_Cnt_T_logl = FALSE;
    }

     *FordVehFrntLeWhlSpdRaw_Cnt_T_u16 = Ford_WhlFl_W_Meas_Cnt_T_enum;
     *FordVehFrntLeWhlSpd_RadPerSec_T_f32 = FixdToFloat_f32_u16(Ford_WhlFl_W_Meas_Cnt_T_enum,NXTRFIXDPT_P0TOFLOAT_ULS_F32) * WHLSPDSCAGVAL_RADPERSECPERCNT_F32;
     if((Ford_WhlFl_W_Meas_Cnt_T_enum != UKWNWHLSPD_RADPERSEC_U16) &&
        (Ford_WhlFl_W_Meas_Cnt_T_enum != FAULTHLSPD_RADPERSEC_U16))
    {
        *FordVehFrntLeWhlSpdVldInp_Cnt_T_logl = TRUE;
    }
    else
    {
        *FordVehFrntLeWhlSpdVldInp_Cnt_T_logl = FALSE;
    }

     *FordVehReRiWhlSpdRaw_Cnt_T_u16 = Ford_WhlRr_W_Meas_Cnt_T_enum;
     *FordVehReRiWhlSpd_RadPerSec_T_f32 = FixdToFloat_f32_u16(Ford_WhlRr_W_Meas_Cnt_T_enum,NXTRFIXDPT_P0TOFLOAT_ULS_F32) * WHLSPDSCAGVAL_RADPERSECPERCNT_F32;
    if((Ford_WhlRr_W_Meas_Cnt_T_enum != UKWNWHLSPD_RADPERSEC_U16) &&
        (Ford_WhlRr_W_Meas_Cnt_T_enum != FAULTHLSPD_RADPERSEC_U16))
    {
        *FordVehReRiWhlSpdVldInp_Cnt_T_logl = TRUE;
    }
    else
    {
        *FordVehReRiWhlSpdVldInp_Cnt_T_logl = FALSE;
    }

     *FordVehReLeWhlSpdRaw_Cnt_T_u16 = Ford_WhlRl_W_Meas_Cnt_T_enum;
     *FordVehReLeWhlSpd_RadPerSec_T_f32 = FixdToFloat_f32_u16(Ford_WhlRl_W_Meas_Cnt_T_enum,NXTRFIXDPT_P0TOFLOAT_ULS_F32) * WHLSPDSCAGVAL_RADPERSECPERCNT_F32;
    if((Ford_WhlRl_W_Meas_Cnt_T_enum != UKWNWHLSPD_RADPERSEC_U16) &&
       (Ford_WhlRl_W_Meas_Cnt_T_enum != FAULTHLSPD_RADPERSEC_U16))
    {
        *FordVehReLeWhlSpdVldInp_Cnt_T_logl = TRUE;
    }
    else
    {
        *FordVehReLeWhlSpdVldInp_Cnt_T_logl = FALSE;
    }
     /*** Start of VldChk ***/
         VldChk(*FordVehFrntLeWhlSpdVldInp_Cnt_T_logl,
                *FordVehFrntRiWhlSpdVldInp_Cnt_T_logl,
                *FordVehReLeWhlSpdVldInp_Cnt_T_logl,
                *FordVehReRiWhlSpdVldInp_Cnt_T_logl,
                FordVehFrntLeWhlSpdVld_Cnt_T_logl,
                FordVehFrntRiWhlSpdVld_Cnt_T_logl,
                FordVehReLeWhlSpdVld_Cnt_T_logl,
                FordVehReRiWhlSpdVld_Cnt_T_logl);
     /*** End of VldChk ***/
	 /** End of SignalProcessing**/
 }

/*****************************************************************************
  * Name            : FrntWhlSpdDiagEnaChk
  * Description     : Implementation of "FordVehFrntWhlSpdInvldSts" and 
  *                   "FordVehFrntWhlSpdInvldNtcReset" subsystems in model.
  * Inputs          : FrntWhlSpdDiagEna_Cnt_T_logl,
  *                   FrntLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
  *                   FrntRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
  *                   FordVehFrntLeWhlSpdVldInp_Cnt_T_logl,
  *                   FordVehFrntRiWhlSpdVldInp_Cnt_T_logl.
  * Outputs         : NA.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) FrntWhlSpdDiagEnaChk(VAR(boolean,AUTOMATIC) FrntWhlSpdDiagEna_Cnt_T_logl,
																		  VAR(uint16,AUTOMATIC) FrntLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
																		  VAR(uint16,AUTOMATIC) FrntRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
																		  VAR(boolean,AUTOMATIC) FordVehFrntLeWhlSpdVldInp_Cnt_T_logl,
																		  VAR(boolean,AUTOMATIC) FordVehFrntRiWhlSpdVldInp_Cnt_T_logl)
 {
	VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
    
    if(TRUE == FrntWhlSpdDiagEna_Cnt_T_logl)
       {
	       /** Start of FordVehFrntWhlSpdInvldSts **/
           if(TRUE == FordVehFrntLeWhlSpdVldInp_Cnt_T_logl)
           {
		       /** FrntLeWhlSpdInvldPass **/
               (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
               if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdFrntLeWhlSpdInvldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
               {
                   (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13D, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
               }
               (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi());
           }
           else
           {    
		       /** FrntLeWhlSpdInvldFail **/
               (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
               if(TiSpan_Cnt_T_u32 > ((uint32)FrntLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
               {
                   (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13D, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
               }
               (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi());
           }

           if(TRUE == FordVehFrntRiWhlSpdVldInp_Cnt_T_logl)
           {
		       /** FrntRiWhlSpdInvldPass **/
               (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
               if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdFrntRiWhlSpdInvldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
               {
                   (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13E, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
               }
               (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi());
           }
           else
           {   
		       /** FrntRiWhlSpdInvldFail **/
               (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
               if(TiSpan_Cnt_T_u32 > ((uint32)FrntRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
               {
                   (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13E, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
               }
               (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi());
           }
		   /** End of FordVehFrntWhlSpdInvldSts **/
       }
       else
       { 
	       /** Start of /FordVehFrntWhlSpdInvldNtcReset **/
           (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13D, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
           (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13E, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
           (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdInvldFaildRefTi());
           (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdInvldPassdRefTi());
           (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdInvldFaildRefTi());
           (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdInvldPassdRefTi());
		   /** End of /FordVehFrntWhlSpdInvldNtcReset **/
       }
 }

/*****************************************************************************
  * Name            : ReWhlSpdDiagEnaChk
  * Description     : Implementation of "FordVehReWhlSpdInvldSts" and 
  *                   "FordVehReWhlSpdInvldNtcReset" subsystems in model.
  * Inputs          : ReWhlSpdDiagEna_Cnt_T_logl,
  *                   ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
  *                   ReRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
  *                   FordVehReLeWhlSpdVldInp_Cnt_T_logl,
  *                   FordVehReRiWhlSpdVldInp_Cnt_T_logl.
  * Outputs         : NA.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) ReWhlSpdDiagEnaChk(VAR(boolean,AUTOMATIC) ReWhlSpdDiagEna_Cnt_T_logl,
																		VAR(uint16,AUTOMATIC) ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
																		VAR(uint16,AUTOMATIC) ReRiWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0,
																		VAR(boolean,AUTOMATIC) FordVehReLeWhlSpdVldInp_Cnt_T_logl,
																		VAR(boolean,AUTOMATIC) FordVehReRiWhlSpdVldInp_Cnt_T_logl)
 {
	VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
	
	if(TRUE == ReWhlSpdDiagEna_Cnt_T_logl)
    {
	    /** Start of FordVehReWhlSpdInvldSts **/
        if(TRUE == FordVehReLeWhlSpdVldInp_Cnt_T_logl)
        {
		    /** ReLeWhlSpdInvldPass **/
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehReLeWhlSpdInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
            if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdReLeWhlSpdInvldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
            {
                (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13F, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
            }
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdInvldFaildRefTi());
        }
        else
        {
		    /**  ReLeWhlSpdInvldFail **/
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehReLeWhlSpdInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
            if(TiSpan_Cnt_T_u32 > ((uint32)ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
            {
                (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13F, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
            }
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdInvldPassdRefTi());
        }
  
        if(TRUE == FordVehReRiWhlSpdVldInp_Cnt_T_logl)
        {
		    /** ReRiWhlSpdInvldPass **/
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehReRiWhlSpdInvldPassdRefTi(),&TiSpan_Cnt_T_u32);
            if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdReRiWhlSpdInvldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
            {
                (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X140, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
            }
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdInvldFaildRefTi());
        }
        else
        {
		    /** ReRiWhlSpdInvldFail **/
            (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehReRiWhlSpdInvldFaildRefTi(),&TiSpan_Cnt_T_u32);
            if(TiSpan_Cnt_T_u32 > ((uint32)ReLeWhlBusHiSpdInvldFaildThd_MilliSec_T_u16p0 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
            {
                (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X140, 0U, NTCSTS_FAILD, DEBSTEP_CNT_U16);
            }
            (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdInvldPassdRefTi());
        }
		/** End of FordVehReWhlSpdInvldSts **/
    }
    else
    {
	    /** Start of FordVehReWhlSpdInvldNtcReset **/
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13F, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X140, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdInvldFaildRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdInvldPassdRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdInvldFaildRefTi());
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdInvldPassdRefTi());
		/** End of FordVehReWhlSpdInvldNtcReset **/
    }
 } 

/*****************************************************************************
  * Name            : MissMsgDiagEnaChk
  * Description     : Implementation of "FordMsg217MissMsgPass" and "Reset" subsystem in model.
  * Inputs          : MissMsgDiagEna_Cnt_T_logl.
  * Outputs         : NA.
  * Usage Notes     : NA.
*****************************************************************************/ 
 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) MissMsgDiagEnaChk(VAR(boolean,AUTOMATIC) MissMsgDiagEna_Cnt_T_logl)
 {
	VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
 
	if( TRUE == MissMsgDiagEna_Cnt_T_logl)
	{
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgPassdRefTi(),&TiSpan_Cnt_T_u32);
		if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdMissMsgPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13C, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		}
	}
	else
	{
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X13C, 0U, NTCSTS_PASSD, DEBSTEP_CNT_U16);
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgPassdRefTi());
	}
 }
 
 /*****************************************************************************
  * Name            : VldChk
  * Description     : Implementation of "VldChk" subsystem in model.
  * Inputs          : FordVehFrntLeWhlSpd_Cnt_T_logl,
  *                   FordVehFrntRiWhlSpd_Cnt_T_logl,
  *                   FordVehReLeWhlSpd_Cnt_T_logl,
  *                   FordVehReRiWhlSpd_Cnt_T_logl.
  * Outputs         : *FordVehFrntLeWhlSpdVld_Cnt_T_logl,
  *                   *FordVehFrntRiWhlSpdVld_Cnt_T_logl,
  *                   *FordVehReLeWhlSpdVld_Cnt_T_logl,
  *                   *FordVehReRiWhlSpdVld_Cnt_T_logl.
  * Usage Notes     : NA.
*****************************************************************************/
 static FUNC(void, RTE_FORDMSG217BUSHISPD_APPL_CODE) VldChk(VAR(boolean,AUTOMATIC) FordVehFrntLeWhlSpd_Cnt_T_logl,
                                                            VAR(boolean,AUTOMATIC) FordVehFrntRiWhlSpd_Cnt_T_logl,
                                                            VAR(boolean,AUTOMATIC) FordVehReLeWhlSpd_Cnt_T_logl,
                                                            VAR(boolean,AUTOMATIC) FordVehReRiWhlSpd_Cnt_T_logl,
                                                            P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntLeWhlSpdVld_Cnt_T_logl,
                                                            P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehFrntRiWhlSpdVld_Cnt_T_logl,
                                                            P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReLeWhlSpdVld_Cnt_T_logl,
                                                            P2VAR(boolean,AUTOMATIC,RTE_FORDMSG217BUSHISPD_APPL_VAR) FordVehReRiWhlSpdVld_Cnt_T_logl)
 {
     VAR(uint32,AUTOMATIC) TiSpan_Cnt_T_u32;
    /** Start of VldChk **/
    if(TRUE == FordVehFrntLeWhlSpd_Cnt_T_logl)
    {
        /*** Start of FrntLeWhlSpdVldPass ***/
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehFrntLeWhlSpdVldPassdRefTi(),&TiSpan_Cnt_T_u32);
        if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
        {
            *FordVehFrntLeWhlSpdVld_Cnt_T_logl = TRUE;
        }
        else
        {
            *FordVehFrntLeWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehFrntLeWhlSpdVldPrev();
        }
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdVldFaildRefTi());
        /*** End of FrntLeWhlSpdVldPass ***/
    }
    else
    {
        /*** Start of FrntLeWhlSpdvldFail ***/
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehFrntLeWhlSpdVldFaildRefTi(),&TiSpan_Cnt_T_u32);
        if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdFrntLeWhlVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
        {
            *FordVehFrntLeWhlSpdVld_Cnt_T_logl = FALSE;
        }
        else
        {
            *FordVehFrntLeWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehFrntLeWhlSpdVldPrev();
        }
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntLeWhlSpdVldPassdRefTi());
        /*** End of FrntLeWhlSpdvldFail ***/
    }

    if(TRUE == FordVehFrntRiWhlSpd_Cnt_T_logl)
    {
        /*** Start of FrntRiWhlSpdvldPass ***/
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehFrntRiWhlSpdVldPassdRefTi(),&TiSpan_Cnt_T_u32);
        if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
        {
            *FordVehFrntRiWhlSpdVld_Cnt_T_logl = TRUE;
        }
        else
        {
            *FordVehFrntRiWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehFrntRiWhlSpdVldPrev();
        }
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdVldFaildRefTi());
        /*** End of FrntRiWhlSpdvldPass ***/
    }
    else
    {
        /*** Start of FrntRiWhlSpdInvldFail ***/
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehFrntRiWhlSpdVldFaildRefTi(),&TiSpan_Cnt_T_u32);
        if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdFrntRiWhlVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
        {
            *FordVehFrntRiWhlSpdVld_Cnt_T_logl = FALSE;
        }
        else
        {
            *FordVehFrntRiWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehFrntRiWhlSpdVldPrev();
        }
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehFrntRiWhlSpdVldPassdRefTi());
        /*** End of FrntRiWhlSpdInvldFail ***/
    }

    if(TRUE == FordVehReLeWhlSpd_Cnt_T_logl)
    {
        /*** Start of ReLeWhlSpdInvldPass ***/
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehReLeWhlSpdVldPassdRefTi(),&TiSpan_Cnt_T_u32);
        if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdReLeWhlVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
        {
            *FordVehReLeWhlSpdVld_Cnt_T_logl = TRUE;
        }
        else
        {
            *FordVehReLeWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehReLeWhlSpdVldPrev();
        }
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdVldFaildRefTi());
        /*** End of ReLeWhlSpdInvldPass ***/
    }
    else
    {
        /*** Start of ReLeWhlSpdInvldFail ***/
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehReLeWhlSpdVldFaildRefTi(),&TiSpan_Cnt_T_u32);
        if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdReLeWhlVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
        {
            *FordVehReLeWhlSpdVld_Cnt_T_logl = FALSE;
        }
        else
        {
            *FordVehReLeWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehReLeWhlSpdVldPrev();
        }
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReLeWhlSpdVldPassdRefTi());
        /*** End of ReLeWhlSpdInvldFail ***/
    }

    if(TRUE == FordVehReRiWhlSpd_Cnt_T_logl)
    {
        /*** Start of ReRiWhlSpdInvldPass ***/
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehReRiWhlSpdVldPassdRefTi(),&TiSpan_Cnt_T_u32);
        if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdReRiWhlVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
        {
            *FordVehReRiWhlSpdVld_Cnt_T_logl = TRUE;
        }
        else
        {
            *FordVehReRiWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehReRiWhlSpdVldPrev();
        }
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdVldFaildRefTi());
        /*** End of ReRiWhlSpdInvldPass ***/
    }
    else
    {
        /*** Start of ReRiWhlSpdInvldFail ***/
        (void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_FordVehReRiWhlSpdVldFaildRefTi(),&TiSpan_Cnt_T_u32);
        if(TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg217BusHiSpdReRiWhlVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
        {
            *FordVehReRiWhlSpdVld_Cnt_T_logl = FALSE;
        }
        else
        {
            *FordVehReRiWhlSpdVld_Cnt_T_logl = *Rte_Pim_FordVehReRiWhlSpdVldPrev();
        }
        (void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_FordVehReRiWhlSpdVldPassdRefTi());
        /*** End of ReRiWhlSpdInvldFail ***/
    }
	/** End of VldChk **/
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
