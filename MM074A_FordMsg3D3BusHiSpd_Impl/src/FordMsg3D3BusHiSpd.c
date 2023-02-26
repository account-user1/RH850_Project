/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FordMsg3D3BusHiSpd.c
 *        Config:  C:/Users/nz3541/Documents/SynergyWorkingEA4/MM074A_FordMsg3D3BusHiSpd_Impl/tools/Component.dpa
 *     SW-C Type:  FordMsg3D3BusHiSpd
 *  Generated at:  Fri May  4 15:09:35 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FordMsg3D3BusHiSpd>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2018 Nexteer Confidential
*
* Module File Name  : FordMsg3D3BusHiSpd.c
* Module Description: Ford Message 3D3 Bus High Speed
* Project           : CBD 
* Author            : Kathirkamu A
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       nz3541 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 04/23/18  1        AKK(TATA)    Initial version                                                              EA4#20125  
* 05/04/18  2        SPP          Corrections requested by integration team; changed port datatypes            EA4#23307
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
 *
 * Component Types:
 * ================
 * FordMsg3D3BusHiSpd
 *   The purpose of the Ford Message 3D3 Bus High Speed function is to provide the Electric Power Steering system with signal values for the Traffic Jam Assist and Lane Center Assist functions from CAN. The Ford Message 3D3 function will perform the missing message as well as provide a validity flag for the signal values and received message.
 *
 *
 * Port Prototypes:
 * ================
 * ClrDiagcFlgProxy
 *   This Signal should be zero for the Diagnostics to function
 *
 * FordCanDtcInhb
 *   This signal should be set to 0 to enable the diagnostics.Data Type: Boolean with Minvalue False(0), Init value True(1) and Max value True(1)
 *
 * FordEpsLifeCycMod
 *   This signal is used to decide threshold value to FAIL the NTC
 *
 * FordLaneCentrAssiEnad
 *   This signal should be set to 1 in order to Test Diagnostic NTC. Data Type: Boolean with Minvalue False(0), Init value False(0) and Max value True(1)
 *
 * FordTrfcJamAssiEnad
 *   This signal should be set to 1 in order to Test Diagnostic NTC. Data Type: Boolean with Minvalue False(0), Init value False(0) and Max value True(1)
 *
 * FordVehLatCtrlCrvt
 *   Processed value of Lateral Control Curvature
 *
 * FordVehLatCtrlCrvtRate
 *   Processed value of Lateral Control Curvature Rate
 *
 * FordVehLatCtrlCrvtRateRaw
 *   Processed value of Lateral Control Curvature Rate
 *
 * FordVehLatCtrlCrvtRaw
 *   Processed value of Lateral Control Curvature
 *
 * FordVehLatCtrlHandsOffDetnTqStimlsReq
 *   Processed value of Lateral Control Hands Off Detection Torque Stimulus Request'
 *
 * FordVehLatCtrlImgProcrModlAVld
 *   This output tells if the value for Ford Vehicle Lateral Control Image Processor Module A Valid is valid or not'
 *
 * FordVehLatCtrlPah
 *   Processed value of Lateral Control Path
 *
 * FordVehLatCtrlPahOffs
 *   Processed value of Lateral Control Path Offset
 *
 * FordVehLatCtrlPahOffsRaw
 *   Processed Value of Lateral Control Path Offset
 *
 * FordVehLatCtrlPahRaw
 *   Processed value of Lateral Control Path
 *
 * FordVehLatCtrlPrcsn
 *   Processed value of Lateral Control Precision
 *
 * FordVehLatCtrlRampTyp
 *   Processed Value of Lateral Control Ramp Type
 *
 * FordVehLatCtrlReq
 *   Processed Value of Lateral Control Request
 *
 * FordVehLatCtrlRingMax
 *   Processed Value of Lateral Control Ring Max
 *
 * Ford_HandsOffCnfm_B_Rq
 *   It is a message signal which is received from CAN bus,which will be processed and used in EPS.Customer Data type : Ford_HandsOffCnfm_B_Rq,Sourcesignal range:[0,1], Cx0_Inactive,Cx1_Active
 *
 * Ford_LatCtlCurv_NoRate_Actl
 *   It is a message signal which is received from CAN bus,which will be processed and used in EPS
 *
 * Ford_LatCtlCurv_No_Actl
 *   It is a message signal which is received from CAN bus,which will be processed and used in EPS
 *
 * Ford_LatCtlPathOffst_L_Actl
 *   It is a message signal which is received from CAN bus,which will be processed and used in EPS
 *
 * Ford_LatCtlPath_An_Actl
 *   It is a message signal which is received from CAN bus,which will be processed and used in EPS
 *
 * Ford_LatCtlPrecision_D_Rq
 *   It is a message signal which is received from CAN bus,which will be pr'ocessed and used in EPS. Customer Data type : Ford_BrkTot_Tq_Act,Sourcesignal range:[0,3], Cx0_Comfortable,Cx1_Precise,Cx3_NotUsed2,Cx3_NotUsed2'
 *
 * Ford_LatCtlRampType_D_Rq
 *   It is a message signal which is received from CAN bus,which will be processed and used in EPS.Customer Data type : Ford_LatCtlRampType_D_Rq,Sourcesignal range:[0,3], Cx0_Slow,Cx1_Medium,Cx2_Fast,Cx3_Immediately
 *
 * Ford_LatCtlRng_L_Max
 *   It is a message signal which is received from CAN bus,which will be processed and used in EPS
 *
 * Ford_LatCtl_D_Rq
 *   It is a message signal which is received from CAN bus,which will be processed and used in EPS.Customer Data type : Ford_LatCtl_D_Rq,Sourcesignal range:[0,7], Cx0_NoLateralControl,Cx1_ContinuousPathFollowingCx2_InterventionLeft,Cx3_InterventionRight,Cx4_NotUsed1,Cx5_NotUsed2Cx6_NotUsed3,Cx7_NotUsed4
 *
 * GetRefTmr100MicroSec32bit
 *   It captures simulation time from the SimnTi value obtained at root layer of model and gives the RefTmr.
 *
 * GetTiSpan100MicroSec32bit
 *   It Captures simulation time fromSimnTi value, handles counter wrapping, and subtracts RefTmr,provides the TiSpan
 *
 * SetNtcSts
 *   Set the NTC status
 *
 *
 * Runnable Entities:
 * ==================
 * FordMsg3D3BusHiSpdInit1
 *   Initialization Runnable
 *
 * FordMsg3D3BusHiSpdPer1
 *   Periodic Runnable at 10 milli-seconds
 *
 *
 * Per-Instance Memory:
 * ====================
 * ClrDiagcFlgProxyPrev
 *   Clear Diagc Flag Proxy
 *
 * FirstTranVldFlg
 *   This flag is used to indicate the reception of first message
 *      
 *
 * FordVehLatCtrlCrvtPrev
 *   It is used to hold the previous value of FordVehLatCtrlCrvt
 *
 * FordVehLatCtrlCrvtRatePrev
 *   It is used to hold the previous value of FordVehLatCtrlCrvtRate
 *
 * FordVehLatCtrlCrvtRateRawPrev
 *   It is used to hold the previous value of FordVehLatCtrlCrvtRateRaw
 *
 * FordVehLatCtrlCrvtRawPrev
 *   It is used to hold the previous value of FordVehLatCtrlCrvtRaw
 *
 * FordVehLatCtrlHandsOffDetnTqStimlsReqPrev
 *   It is used to hold the previous value of FordVehLatCtrlHandsOffDetnTqStmlsReq
 *
 * FordVehLatCtrlImgProcrModlAVldPrev
 *   It is used to hold the previous value of FordVehLatCtrlImgProcrModlAVld
 *
 * FordVehLatCtrlPahOffsPrev
 *   It is used to hold the previous value of FordVehLatCtrlPahOffs
 *
 * FordVehLatCtrlPahOffsRawPrev
 *   It is used to hold the previous value of FordVehLatCtrlPahOffsRaw
 *
 * FordVehLatCtrlPahPrev
 *   It is used to hold the previous value of FordVehLatCtrlPah
 *
 * FordVehLatCtrlPahRawPrev
 *   It is used to hold the previous value of FordVehLatCtrlPahRaw
 *
 * FordVehLatCtrlPrcsnPrev
 *   It is used to hold the previous value of FordVehLatCtrlPrcsn
 *
 * FordVehLatCtrlRampTypPrev
 *   It is used to hold the previous value of FordVehLatCtrlRampTyp
 *
 * FordVehLatCtrlReqPrev
 *   It is used to hold the previous value of FordVehLatCtrlReq
 *
 * FordVehLatCtrlRingMaxPrev
 *   It is used to hold the previous value of FordVehLatCtrlRingMax
 *
 * FordVehMsg3D3Miss
 *   Used to hold value of Ford Vehicle message 3D3 miss
 *
 * ImgProcrModlAVldFaildRefTi
 *   Timer for Valid Failed Reference Time will increment or reset based on the conditions
 *
 * ImgProcrModlAVldPassdRefTi
 *   Timer for Valid Passed Reference Time will increment or reset based on  the conditions
 *
 * MissMsgFaildRefTi
 *   Timer for misisng message will increment or reset based on the conditi'ons'
 *
 * MissMsgPassdRefTi
 *   Timer for misisng message will increment or reset based on the conditions
 *
 *********************************************************************************************************************/

#include "Rte_FordMsg3D3BusHiSpd.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value of RTE reads, RTE writes, and SetNtcSts */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void function; Rte generation adds standard return type but no error information is returned.
                                              [GetRefTmr100MicroSec32bit, GetTiSpan100MicroSec32bit] */

/********************************************* Embedded Local Constants **********************************************/
#define BUSHISPDFIXDTITHD_MILLISEC_U16 	        ((uint16)5000U)
#define CNVMILLISECTOCNT_CNTPERMILLISEC_U16     ((uint16)10U)
#define FORDVEHYAWSATBYRAWMIN_CNT_U16           ((uint16)0U)
#define DEBSTEP_CNT_U16                         ((uint16)65535U)
#define FORDLATCTRLPAHOFFS_MTR_F32				(5.12F)
#define FORDVEHLATCTRLCRVTMAX_IVSMTR_F32        (0.02094F)
#define FORDVEHLATCTRLCRVTMIN_IVSMTR_F32        (-0.2F)
#define FORDVEHLATCTRLCRVTRATEMAX_IVSMTR_F32    (0.00102375F)
#define FORDVEHLATCTRLCRVTRATEMIN_IVSMTR_F32    (-0.001024F)
#define FORDVEHLATCTRLCRVTRATERAWMAX_CNT_U16    ((uint16)8191U)
#define FORDVEHLATCTRLCRVTRATERAWMIN_CNT_U16    ((uint16)0U)
#define FORDVEHLATCTRLCRVTRAWMAX_CNT_U16        ((uint16)2047U)
#define FORDVEHLATCTRLCRVTRAWMIN_CNT_U16        ((uint16)0U)
#define FORDVEHLATCTRLPAHMAX_RAD_F32            (0.5235F)
#define FORDVEHLATCTRLPAHMIN_RAD_F32            (-0.5F)
#define FORDVEHLATCTRLPAHOFFSMAX_MTR_F32        (5.11F)
#define FORDVEHLATCTRLPAHOFFSMIN_MTR_F32        (-5.12F)
#define FORDVEHLATCTRLPAHOFFSRAWMAX_CNT_U16     ((uint16)1023U)
#define FORDVEHLATCTRLPAHOFFSRAWMIN_CNT_U16     ((uint16)0U)
#define FORDVEHLATCTRLPAHRAWMAX_CNT_U16         ((uint16)2047U)
#define FORDVEHLATCTRLPAHRAWMIN_CNT_U16         ((uint16)0U)
#define FORDVEHLATCTRLRINGMAXMAX_CNT_U08        ((uint8)126U)
#define FORDVEHLATCTRLRINGMAXMIN_CNT_U08        ((uint8)0U)
#define LATCTRLCRVTOFFS_IVSMTR_F32              (0.02F)
#define LATCTRLCRVTRATEOFFS_IVSMTR_F32          (0.001024F)
#define LATCTRLCRVTRATERAW_CNT_U16              ((uint16)4096U)
#define LATCTRLCRVTRATESCAGFAC_IVSMTRCNT_F32    (0.00000025F)
#define LATCTRLCRVTRAW_CNT_U16                  ((uint16)1000U)
#define LATCTRLCRVTSCAGFAC_IVSMTRCNT_F32        (0.00002F)
#define LATCTRLPAHOFFSCAGFAC_MTRPERCNT_F32      (0.01F)
#define LATCTRLPAHOFFS_CNT_U16                  ((uint16)512U)
#define LATCTRLPAHOFFS_RAD_F32                  (0.5F)
#define LATCTRLPAHSCAGFAC_RADPERCNT_F32         (0.0005F)
#define LATCTRLRINGMAXSCAGFAC_MTRPERCNT_U08     ((uint8)2U)
#define MODSEL_CNT_U08                          ((uint8)1U)
/******************************************** Module Specific Variables **********************************************/

/******************************************** Local Function Prototypes **********************************************/
static FUNC(void, FordMsg3D3BusHiSpd_CODE)DiagEna(VAR(boolean, AUTOMATIC) FordCanDtcInhb_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC) FordLaneCentrAssiEnad_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC) FordTrfcJamAssiEnad_Cnt_T_logl,
												  VAR(uint8, AUTOMATIC) ClrDiagcFlgProxy_Cnt_T_u08,
												  P2VAR(boolean, AUTOMATIC,RTE_FORDMSG3D3BUSHISPD_APPL_VAR)MissMsgDiagEna_Cnt_T_logl,
												  P2VAR(boolean, AUTOMATIC,RTE_FORDMSG3D3BUSHISPD_APPL_VAR)ClrDiagcFlgProxyEna_Cnt_logl);

static FUNC(void, FordMsg3D3BusHiSpd_CODE)FordMsg3D3MissMsgFail(VAR(uint16, AUTOMATIC) BusHiSpdMissThd_Cnt_T_u16,
															    VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl,
															    VAR(boolean, AUTOMATIC) ClrDiagcFlgProxyEna_Cnt_logl); 

static FUNC(void, FordMsg3D3BusHiSpd_CODE)FordMsg3D3MissMsgPass(VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl,
															    VAR(boolean, AUTOMATIC) ClrDiagcFlgProxyEna_Cnt_logl);														 

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
 * Ford_HandsOffCnfm_B_Rq: Boolean
 * Ford_LatCtlCurv_NoRate_Actl: Integer in interval [0...8191]
 *   Unit: [1/meter], Factor: 2.5e-007, Offset: -0.001024
 * Ford_LatCtlCurv_No_Actl: Integer in interval [0...2047]
 *   Unit: [1/meter], Factor: 2e-005, Offset: -0.02
 * Ford_LatCtlPathOffst_L_Actl: Integer in interval [0...1023]
 *   Unit: [meter], Factor: 0.01, Offset: -5.12
 * Ford_LatCtlPath_An_Actl: Integer in interval [0...2047]
 *   Unit: [radians], Factor: 0.0005, Offset: -0.5
 * Ford_LatCtlRng_L_Max: Integer in interval [0...63]
 *   Unit: [meter], Factor: 2, Offset: 0
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Ford_LatCtlPrecision_D_Rq: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Comfortable (0U)
 *   Cx1_Precise (1U)
 *   Cx2_NotUsed1 (2U)
 *   Cx3_NotUsed2 (3U)
 * Ford_LatCtlRampType_D_Rq: Enumeration of integer in interval [0...3] with enumerators
 *   Cx0_Slow (0U)
 *   Cx1_Medium (1U)
 *   Cx2_Fast (2U)
 *   Cx3_Immediately (3U)
 * Ford_LatCtl_D_Rq: Enumeration of integer in interval [0...7] with enumerators
 *   Cx0_NoLateralControl (0U)
 *   Cx1_ContinuousPathFollowing (1U)
 *   Cx2_InterventionLeft (2U)
 *   Cx3_InterventionRight (3U)
 *   Cx4_NotUsed1 (4U)
 *   Cx5_NotUsed2 (5U)
 *   Cx6_NotUsed3 (6U)
 *   Cx7_NotUsed4 (7U)
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
 *   float32 *Rte_Pim_FordVehLatCtrlCrvtPrev(void)
 *   float32 *Rte_Pim_FordVehLatCtrlCrvtRatePrev(void)
 *   float32 *Rte_Pim_FordVehLatCtrlPahOffsPrev(void)
 *   float32 *Rte_Pim_FordVehLatCtrlPahPrev(void)
 *   uint32 *Rte_Pim_ImgProcrModlAVldFaildRefTi(void)
 *   uint32 *Rte_Pim_ImgProcrModlAVldPassdRefTi(void)
 *   uint32 *Rte_Pim_MissMsgFaildRefTi(void)
 *   uint32 *Rte_Pim_MissMsgPassdRefTi(void)
 *   uint16 *Rte_Pim_FordVehLatCtrlCrvtRateRawPrev(void)
 *   uint16 *Rte_Pim_FordVehLatCtrlCrvtRawPrev(void)
 *   uint16 *Rte_Pim_FordVehLatCtrlPahOffsRawPrev(void)
 *   uint16 *Rte_Pim_FordVehLatCtrlPahRawPrev(void)
 *   uint8 *Rte_Pim_ClrDiagcFlgProxyPrev(void)
 *   Ford_LatCtlPrecision_D_Rq *Rte_Pim_FordVehLatCtrlPrcsnPrev(void)
 *   Ford_LatCtlRampType_D_Rq *Rte_Pim_FordVehLatCtrlRampTypPrev(void)
 *   Ford_LatCtl_D_Rq *Rte_Pim_FordVehLatCtrlReqPrev(void)
 *   uint8 *Rte_Pim_FordVehLatCtrlRingMaxPrev(void)
 *   boolean *Rte_Pim_FirstTranVldFlg(void)
 *   Ford_HandsOffCnfm_B_Rq *Rte_Pim_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev(void)
 *   boolean *Rte_Pim_FordVehLatCtrlImgProcrModlAVldPrev(void)
 *   boolean *Rte_Pim_FordVehMsg3D3Miss(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D3BusHiSpdMissMsgFaildThd_Val(void)
 *   uint16 Rte_Prm_FordMsg3D3BusHiSpdMissMsgPassdThd_Val(void)
 *
 *********************************************************************************************************************/


#define FordMsg3D3BusHiSpd_START_SEC_CODE
#include "FordMsg3D3BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3D3BusHiSpdInit1
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
 * Symbol: FordMsg3D3BusHiSpdInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg3D3BusHiSpd_CODE) FordMsg3D3BusHiSpdInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg3D3BusHiSpdInit1
 *********************************************************************************************************************/
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32; 
	
	(void) Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
	*Rte_Pim_MissMsgPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_MissMsgFaildRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_ImgProcrModlAVldPassdRefTi() = GetRefTmr_Cnt_T_u32;
	*Rte_Pim_ImgProcrModlAVldFaildRefTi() = GetRefTmr_Cnt_T_u32;
	 
	*Rte_Pim_FordVehLatCtrlCrvtRawPrev() = LATCTRLCRVTRAW_CNT_U16;
	*Rte_Pim_FordVehLatCtrlPahRawPrev() = LATCTRLCRVTRAW_CNT_U16; 
	*Rte_Pim_FordVehLatCtrlPahOffsRawPrev() = LATCTRLPAHOFFS_CNT_U16;
	*Rte_Pim_FordVehLatCtrlCrvtRateRawPrev() = LATCTRLCRVTRATERAW_CNT_U16;
	*Rte_Pim_FirstTranVldFlg() = TRUE;
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FordMsg3D3BusHiSpdPer1
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
 *   Std_ReturnType Rte_Read_FordLaneCentrAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_FordTrfcJamAssiEnad_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_Ford_HandsOffCnfm_B_Rq_Ford_HandsOffCnfm_B_Rq(Ford_HandsOffCnfm_B_Rq *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlCurv_NoRate_Actl_Ford_LatCtlCurv_NoRate_Actl(Ford_LatCtlCurv_NoRate_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlCurv_No_Actl_Ford_LatCtlCurv_No_Actl(Ford_LatCtlCurv_No_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlPathOffst_L_Actl_Ford_LatCtlPathOffst_L_Actl(Ford_LatCtlPathOffst_L_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlPath_An_Actl_Ford_LatCtlPath_An_Actl(Ford_LatCtlPath_An_Actl *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlPrecision_D_Rq_Ford_LatCtlPrecision_D_Rq(Ford_LatCtlPrecision_D_Rq *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlRampType_D_Rq_Ford_LatCtlRampType_D_Rq(Ford_LatCtlRampType_D_Rq *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtlRng_L_Max_Ford_LatCtlRng_L_Max(Ford_LatCtlRng_L_Max *data)
 *   Std_ReturnType Rte_Read_Ford_LatCtl_D_Rq_Ford_LatCtl_D_Rq(Ford_LatCtl_D_Rq *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_FordVehLatCtrlCrvt_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlCrvtRate_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlCrvtRateRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlCrvtRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlImgProcrModlAVld_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlPah_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlPahOffs_Val(float32 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlPahOffsRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlPahRaw_Val(uint16 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlPrcsn_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlRampTyp_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlReq_Val(uint8 data)
 *   Std_ReturnType Rte_Write_FordVehLatCtrlRingMax_Val(uint8 data)
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
 * Symbol: FordMsg3D3BusHiSpdPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, FordMsg3D3BusHiSpd_CODE) FordMsg3D3BusHiSpdPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FordMsg3D3BusHiSpdPer1
 *********************************************************************************************************************/
    VAR(uint8, AUTOMATIC)   ClrDiagcFlgProxy_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)   FordEpsLifeCycMod_Cnt_T_u08;
	VAR(Ford_LatCtlRng_L_Max, AUTOMATIC)   Ford_LatCtlRng_L_Max_Cnt_T_enum;
	VAR(uint8, AUTOMATIC)   FordVehLatCtrlRingMax_Cnt_T_u08;
	
	VAR(boolean, AUTOMATIC) FordCanDtcInhb_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordLaneCentrAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) FordTrfcJamAssiEnad_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl = FALSE;
	VAR(boolean, AUTOMATIC) ClrDiagcFlgProxyEna_Cnt_logl = FALSE;
	
	VAR(Ford_HandsOffCnfm_B_Rq, AUTOMATIC)    Ford_HandsOffCnfm_B_Rq_Cnt_T_enum;
	VAR(Ford_LatCtlPrecision_D_Rq, AUTOMATIC) Ford_LatCtlPrecision_D_Rq_Cnt_enum;
	VAR(Ford_LatCtlRampType_D_Rq, AUTOMATIC)  Ford_LatCtlRampType_D_Rq_Cnt_enum;
	VAR(Ford_LatCtl_D_Rq, AUTOMATIC)          Ford_LatCtl_D_Rq_Cnt_T_enum;
	VAR(uint8, AUTOMATIC)    FordVehLatCtrlHandsOffDetnTqStimlsReq_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) FordVehLatCtrlPrcsn_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)  FordVehLatCtrlRampTyp_Cnt_T_u08;
	VAR(uint8, AUTOMATIC)          FordVehLatCtrlReq_Cnt_T_u08;
	
	VAR(Ford_LatCtlCurv_NoRate_Actl, AUTOMATIC)  Ford_LatCtlCurv_NoRate_Actl_Cnt_T_enum;
	VAR(Ford_LatCtlCurv_No_Actl, AUTOMATIC)  Ford_LatCtlCurv_No_Actl_Cnt_T_enum;
	VAR(Ford_LatCtlPathOffst_L_Actl, AUTOMATIC)  Ford_LatCtlPathOffst_L_Actl_Cnt_T_enum;
	VAR(Ford_LatCtlPath_An_Actl, AUTOMATIC)  Ford_LatCtlPath_An_Actl_Cnt_T_enum;
	VAR(uint16, AUTOMATIC)  FordVehLatCtrlCrvtRateRaw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC)  FordVehLatCtrlCrvtRaw_Cnt_T_u16;
	VAR(boolean, AUTOMATIC) FordVehLatCtrlImgProcrModlAVld_Cnt_T_logl;
	VAR(uint16, AUTOMATIC)  FordVehLatCtrlPahOffsRaw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC)  FordVehLatCtrlPahRaw_Cnt_T_u16;
	VAR(uint16, AUTOMATIC)  BusHiSpdMissThd_Cnt_T_u16;
	
	
	VAR(float32, AUTOMATIC) FordVehLatCtrlCrvt_IvsMtr_T_f32;
	VAR(float32, AUTOMATIC) FordVehLatCtrlCrvtRate_IvsMtr_T_f32;
	VAR(float32, AUTOMATIC) FordVehLatCtrlPah_Rad_T_f32;
	VAR(float32, AUTOMATIC) FordVehLatCtrlPahOffs_Mtr_T_f32;
	
	VAR(uint32, AUTOMATIC) GetRefTmr_Cnt_T_u32; 
	VAR(uint32, AUTOMATIC) TiSpan_Cnt_T_u32;
	
	/*** Read Inputs from RTE ***/
	(void) Rte_Read_ClrDiagcFlgProxy_Val(&ClrDiagcFlgProxy_Cnt_T_u08);
	(void) Rte_Read_FordCanDtcInhb_Logl(&FordCanDtcInhb_Cnt_T_logl);
	(void) Rte_Read_FordEpsLifeCycMod_Val(&FordEpsLifeCycMod_Cnt_T_u08);
	(void) Rte_Read_FordLaneCentrAssiEnad_Logl(&FordLaneCentrAssiEnad_Cnt_T_logl);
	(void) Rte_Read_FordTrfcJamAssiEnad_Logl(&FordTrfcJamAssiEnad_Cnt_T_logl);
	(void) Rte_Read_Ford_HandsOffCnfm_B_Rq_Ford_HandsOffCnfm_B_Rq(&Ford_HandsOffCnfm_B_Rq_Cnt_T_enum);
	(void) Rte_Read_Ford_LatCtlCurv_NoRate_Actl_Ford_LatCtlCurv_NoRate_Actl(&Ford_LatCtlCurv_NoRate_Actl_Cnt_T_enum);
	(void) Rte_Read_Ford_LatCtlCurv_No_Actl_Ford_LatCtlCurv_No_Actl(&Ford_LatCtlCurv_No_Actl_Cnt_T_enum);
	(void) Rte_Read_Ford_LatCtlPathOffst_L_Actl_Ford_LatCtlPathOffst_L_Actl(&Ford_LatCtlPathOffst_L_Actl_Cnt_T_enum);
	(void) Rte_Read_Ford_LatCtlPath_An_Actl_Ford_LatCtlPath_An_Actl(&Ford_LatCtlPath_An_Actl_Cnt_T_enum);
	(void) Rte_Read_Ford_LatCtlPrecision_D_Rq_Ford_LatCtlPrecision_D_Rq(&Ford_LatCtlPrecision_D_Rq_Cnt_enum);
	(void) Rte_Read_Ford_LatCtlRampType_D_Rq_Ford_LatCtlRampType_D_Rq(&Ford_LatCtlRampType_D_Rq_Cnt_enum);
	(void) Rte_Read_Ford_LatCtlRng_L_Max_Ford_LatCtlRng_L_Max(&Ford_LatCtlRng_L_Max_Cnt_T_enum);
	(void) Rte_Read_Ford_LatCtl_D_Rq_Ford_LatCtl_D_Rq(&Ford_LatCtl_D_Rq_Cnt_T_enum);
	
	/*** Start of DiagEna ***/
    DiagEna (FordCanDtcInhb_Cnt_T_logl,
	 		 FordLaneCentrAssiEnad_Cnt_T_logl,
			 FordTrfcJamAssiEnad_Cnt_T_logl,
			 ClrDiagcFlgProxy_Cnt_T_u08,	       
	    	 &MissMsgDiagEna_Cnt_T_logl,
			 &ClrDiagcFlgProxyEna_Cnt_logl);
    /*** End of DiagEna ***/
	
	if (TRUE == *Rte_Pim_FordVehMsg3D3Miss())
	{  
	/*** Start of MsgMiss ***/
	
		/*** Start of CalSeln ***/
		if (FordEpsLifeCycMod_Cnt_T_u08 == MODSEL_CNT_U08)
		{
			/*** Start of FixdTi ***/
			BusHiSpdMissThd_Cnt_T_u16 = BUSHISPDFIXDTITHD_MILLISEC_U16;
			/*** End of FixdTi ***/
		}
		else
		{
			/*** Start of CalTi ***/
			BusHiSpdMissThd_Cnt_T_u16  = Rte_Prm_FordMsg3D3BusHiSpdMissMsgFaildThd_Val();
			/*** End of CalTi ***/
		}
	   
		/*** End of CalSeln ***/
	
		/*** Start of FordMsg3D3MissMsgFail ***/
		FordMsg3D3MissMsgFail(BusHiSpdMissThd_Cnt_T_u16,
							  MissMsgDiagEna_Cnt_T_logl,
							  ClrDiagcFlgProxyEna_Cnt_logl);
						  
		FordVehLatCtrlRampTyp_Cnt_T_u08 					= (uint8)*Rte_Pim_FordVehLatCtrlRampTypPrev();
		FordVehLatCtrlPrcsn_Cnt_T_u08 						= (uint8)*Rte_Pim_FordVehLatCtrlPrcsnPrev();
		FordVehLatCtrlCrvt_IvsMtr_T_f32 					= *Rte_Pim_FordVehLatCtrlCrvtPrev();
		FordVehLatCtrlCrvtRaw_Cnt_T_u16 					= *Rte_Pim_FordVehLatCtrlCrvtRawPrev();
		FordVehLatCtrlPah_Rad_T_f32 						= *Rte_Pim_FordVehLatCtrlPahPrev();
		FordVehLatCtrlPahRaw_Cnt_T_u16 						= *Rte_Pim_FordVehLatCtrlPahRawPrev();
		FordVehLatCtrlPahOffs_Mtr_T_f32 					= *Rte_Pim_FordVehLatCtrlPahOffsPrev();
		FordVehLatCtrlPahOffsRaw_Cnt_T_u16 					= *Rte_Pim_FordVehLatCtrlPahOffsRawPrev();
		FordVehLatCtrlCrvtRate_IvsMtr_T_f32 				= *Rte_Pim_FordVehLatCtrlCrvtRatePrev();
		FordVehLatCtrlCrvtRateRaw_Cnt_T_u16 				= *Rte_Pim_FordVehLatCtrlCrvtRateRawPrev();
		FordVehLatCtrlReq_Cnt_T_u08 						= (uint8)*Rte_Pim_FordVehLatCtrlReqPrev();
		FordVehLatCtrlRingMax_Cnt_T_u08 					= *Rte_Pim_FordVehLatCtrlRingMaxPrev();
		FordVehLatCtrlHandsOffDetnTqStimlsReq_Cnt_T_u08 	= (uint8)*Rte_Pim_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev();
	
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_ImgProcrModlAVldFaildRefTi(),&TiSpan_Cnt_T_u32);
		if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D3BusHiSpdImgProcrModlAVldFaildThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
			FordVehLatCtrlImgProcrModlAVld_Cnt_T_logl = FALSE;
		}
		else
		{
			FordVehLatCtrlImgProcrModlAVld_Cnt_T_logl = *Rte_Pim_FordVehLatCtrlImgProcrModlAVldPrev();
		}
		/*** End of FordMsg3D3MissMsgFail ***/	
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_MissMsgPassdRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_ImgProcrModlAVldPassdRefTi() = GetRefTmr_Cnt_T_u32;  
		/*** End of MsgMiss ***/
	}
	else
	{
	/*** Start of Msg_Present ***/

		FordMsg3D3MissMsgPass(MissMsgDiagEna_Cnt_T_logl,
							  ClrDiagcFlgProxyEna_Cnt_logl);
        /** Start of OutputProcessing  **/
		/** Start of FordVehicleControlRampTypeProcessing **/
		FordVehLatCtrlRampTyp_Cnt_T_u08 = (uint8)Ford_LatCtlRampType_D_Rq_Cnt_enum;
		/** End of FordVehicleControlRampTypeProcessing **/
		
		/** Start of FordVehicleLateralControlPrecisionProcessing **/
		FordVehLatCtrlPrcsn_Cnt_T_u08 = (uint8)Ford_LatCtlPrecision_D_Rq_Cnt_enum;
		/** End of FordVehicleLateralControlPrecisionProcessing **/
		
		/** Start of FordVehicleLateralControlCurvatureProcessing **/
		FordVehLatCtrlCrvt_IvsMtr_T_f32 = (((FixdToFloat_f32_u16((uint16)Ford_LatCtlCurv_No_Actl_Cnt_T_enum, NXTRFIXDPT_P0TOFLOAT_ULS_F32)) * LATCTRLCRVTSCAGFAC_IVSMTRCNT_F32) - LATCTRLCRVTOFFS_IVSMTR_F32);
		FordVehLatCtrlCrvtRaw_Cnt_T_u16 = (uint16)Ford_LatCtlCurv_No_Actl_Cnt_T_enum;
		/** End of FordVehicleLateralControlCurvatureProcessing **/
		
		/** Start of FordVehicleLateralControlPathProcessing **/
		FordVehLatCtrlPah_Rad_T_f32 = (((FixdToFloat_f32_u16((uint16)Ford_LatCtlPath_An_Actl_Cnt_T_enum, NXTRFIXDPT_P0TOFLOAT_ULS_F32)) * LATCTRLPAHSCAGFAC_RADPERCNT_F32) - LATCTRLPAHOFFS_RAD_F32);
		FordVehLatCtrlPahRaw_Cnt_T_u16 = (uint16)Ford_LatCtlPath_An_Actl_Cnt_T_enum;
		/** End of FordVehicleLateralControlPathProcessing **/
		
		/** Start of FordVehicleLateralControlPathOffsetProcessing **/
		FordVehLatCtrlPahOffs_Mtr_T_f32 = (((FixdToFloat_f32_u16((uint16)Ford_LatCtlPathOffst_L_Actl_Cnt_T_enum, NXTRFIXDPT_P0TOFLOAT_ULS_F32)) * LATCTRLPAHOFFSCAGFAC_MTRPERCNT_F32) - FORDLATCTRLPAHOFFS_MTR_F32);
		FordVehLatCtrlPahOffsRaw_Cnt_T_u16 = (uint16)Ford_LatCtlPathOffst_L_Actl_Cnt_T_enum;	
		/** End of FordVehicleLateralControlPathOffsetProcessing **/
		
		/** Start of FordVehicleLateralControlCurvatureRateProcessing **/
		FordVehLatCtrlCrvtRate_IvsMtr_T_f32 = (((FixdToFloat_f32_u16((uint16)Ford_LatCtlCurv_NoRate_Actl_Cnt_T_enum, NXTRFIXDPT_P0TOFLOAT_ULS_F32)) * LATCTRLCRVTRATESCAGFAC_IVSMTRCNT_F32) - LATCTRLCRVTRATEOFFS_IVSMTR_F32);
		FordVehLatCtrlCrvtRateRaw_Cnt_T_u16 = (uint16)Ford_LatCtlCurv_NoRate_Actl_Cnt_T_enum;	
		/** End of FordVehicleLateralControlCurvatureRateProcessing **/
		
		/** Start of FordVehicleLateralControlRequestProcessing **/
		FordVehLatCtrlReq_Cnt_T_u08 = (uint8)Ford_LatCtl_D_Rq_Cnt_T_enum;
		/** End of FordVehicleLateralControlRequestProcessing **/
		
		/** Start of FordVehicleLateralControlRingMaxProcessing **/
		FordVehLatCtrlRingMax_Cnt_T_u08 = (uint8)Ford_LatCtlRng_L_Max_Cnt_T_enum * LATCTRLRINGMAXSCAGFAC_MTRPERCNT_U08;
		/** End of FordVehicleLateralControlRingMaxProcessing **/
		
		/** Start of FordVehicleLateralControlHandsOffDetentionTorqueStimulusRequestProcessing **/
		FordVehLatCtrlHandsOffDetnTqStimlsReq_Cnt_T_u08 = (uint8)Ford_HandsOffCnfm_B_Rq_Cnt_T_enum;
		/** End of FordVehicleLateralControlHandsOffDetentionTorqueStimulusRequestProcessing **/
		
		/** Start of FordVehicleControlImageProcessingModuleAValidProcessing **/
		if (TRUE == *Rte_Pim_FirstTranVldFlg())
		{
			/** Start of FirstTran **/
			*Rte_Pim_FirstTranVldFlg() = FALSE;
			FordVehLatCtrlImgProcrModlAVld_Cnt_T_logl = TRUE;
			/** End of FirstTran **/
		}
		else
		{
			/** Start of ChkElpdTi **/
			(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_ImgProcrModlAVldPassdRefTi(),&TiSpan_Cnt_T_u32);
			if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D3BusHiSpdImgProcrModlAVldPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
			{
				FordVehLatCtrlImgProcrModlAVld_Cnt_T_logl = TRUE;
			}
			else
			{
				FordVehLatCtrlImgProcrModlAVld_Cnt_T_logl = *Rte_Pim_FordVehLatCtrlImgProcrModlAVldPrev();
			}	
			/** End of ChkElpdTi **/
		}
		/** End of FordVehicleControlImageProcessingModuleAValidProcessing **/

		
		/** End of OutputProcessing  **/	
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&GetRefTmr_Cnt_T_u32);
		*Rte_Pim_MissMsgFaildRefTi() = GetRefTmr_Cnt_T_u32;
		*Rte_Pim_ImgProcrModlAVldFaildRefTi() = GetRefTmr_Cnt_T_u32; 	
		
	 /*** End of Msg_Present ***/
	}
	                                                     
	*Rte_Pim_FordVehLatCtrlRampTypPrev()                 = (Ford_LatCtlRampType_D_Rq)FordVehLatCtrlRampTyp_Cnt_T_u08;
	*Rte_Pim_FordVehLatCtrlPrcsnPrev()                   = (Ford_LatCtlPrecision_D_Rq)FordVehLatCtrlPrcsn_Cnt_T_u08;
	
	FordVehLatCtrlCrvt_IvsMtr_T_f32                      = Lim_f32(FordVehLatCtrlCrvt_IvsMtr_T_f32,FORDVEHLATCTRLCRVTMIN_IVSMTR_F32,FORDVEHLATCTRLCRVTMAX_IVSMTR_F32);
	*Rte_Pim_FordVehLatCtrlCrvtPrev()                    = FordVehLatCtrlCrvt_IvsMtr_T_f32;
	
	FordVehLatCtrlCrvtRaw_Cnt_T_u16                      = Lim_u16(FordVehLatCtrlCrvtRaw_Cnt_T_u16,FORDVEHLATCTRLCRVTRAWMIN_CNT_U16,FORDVEHLATCTRLCRVTRAWMAX_CNT_U16);
	*Rte_Pim_FordVehLatCtrlCrvtRawPrev()                 = FordVehLatCtrlCrvtRaw_Cnt_T_u16;
	
	FordVehLatCtrlPah_Rad_T_f32                          = Lim_f32(FordVehLatCtrlPah_Rad_T_f32,FORDVEHLATCTRLPAHMIN_RAD_F32,FORDVEHLATCTRLPAHMAX_RAD_F32);
	*Rte_Pim_FordVehLatCtrlPahPrev()                     = FordVehLatCtrlPah_Rad_T_f32;
	
	FordVehLatCtrlPahRaw_Cnt_T_u16                       = Lim_u16(FordVehLatCtrlPahRaw_Cnt_T_u16,FORDVEHLATCTRLPAHRAWMIN_CNT_U16,FORDVEHLATCTRLPAHRAWMAX_CNT_U16);
	*Rte_Pim_FordVehLatCtrlPahRawPrev()                  = FordVehLatCtrlPahRaw_Cnt_T_u16;	
	
	FordVehLatCtrlPahOffs_Mtr_T_f32                      = Lim_f32(FordVehLatCtrlPahOffs_Mtr_T_f32,FORDVEHLATCTRLPAHOFFSMIN_MTR_F32,FORDVEHLATCTRLPAHOFFSMAX_MTR_F32);
	*Rte_Pim_FordVehLatCtrlPahOffsPrev()                 = FordVehLatCtrlPahOffs_Mtr_T_f32;
	
	FordVehLatCtrlPahOffsRaw_Cnt_T_u16                   = Lim_u16(FordVehLatCtrlPahOffsRaw_Cnt_T_u16,FORDVEHLATCTRLPAHOFFSRAWMIN_CNT_U16,FORDVEHLATCTRLPAHOFFSRAWMAX_CNT_U16);
	*Rte_Pim_FordVehLatCtrlPahOffsRawPrev()              = FordVehLatCtrlPahOffsRaw_Cnt_T_u16;	
	
	FordVehLatCtrlCrvtRate_IvsMtr_T_f32                  = Lim_f32(FordVehLatCtrlCrvtRate_IvsMtr_T_f32,FORDVEHLATCTRLCRVTRATEMIN_IVSMTR_F32,FORDVEHLATCTRLCRVTRATEMAX_IVSMTR_F32);
	*Rte_Pim_FordVehLatCtrlCrvtRatePrev()                = FordVehLatCtrlCrvtRate_IvsMtr_T_f32;
	
	FordVehLatCtrlCrvtRateRaw_Cnt_T_u16                  = Lim_u16(FordVehLatCtrlCrvtRateRaw_Cnt_T_u16,FORDVEHLATCTRLCRVTRATERAWMIN_CNT_U16,FORDVEHLATCTRLCRVTRATERAWMAX_CNT_U16);
	*Rte_Pim_FordVehLatCtrlCrvtRateRawPrev()             = FordVehLatCtrlCrvtRateRaw_Cnt_T_u16;
	
	*Rte_Pim_FordVehLatCtrlReqPrev()                     = (Ford_LatCtl_D_Rq)FordVehLatCtrlReq_Cnt_T_u08;
	
	FordVehLatCtrlRingMax_Cnt_T_u08                      = Lim_u08(FordVehLatCtrlRingMax_Cnt_T_u08,FORDVEHLATCTRLRINGMAXMIN_CNT_U08,FORDVEHLATCTRLRINGMAXMAX_CNT_U08);
	*Rte_Pim_FordVehLatCtrlRingMaxPrev()                 = FordVehLatCtrlRingMax_Cnt_T_u08;
	
	*Rte_Pim_FordVehLatCtrlHandsOffDetnTqStimlsReqPrev() = (Ford_HandsOffCnfm_B_Rq)FordVehLatCtrlHandsOffDetnTqStimlsReq_Cnt_T_u08;
	*Rte_Pim_FordVehLatCtrlImgProcrModlAVldPrev()        = FordVehLatCtrlImgProcrModlAVld_Cnt_T_logl;
	
	/*** Write Outputs to RTE ***/
	(void) Rte_Write_FordVehLatCtrlCrvt_Val(FordVehLatCtrlCrvt_IvsMtr_T_f32);
	(void) Rte_Write_FordVehLatCtrlCrvtRate_Val(FordVehLatCtrlCrvtRate_IvsMtr_T_f32);
	(void) Rte_Write_FordVehLatCtrlCrvtRateRaw_Val(FordVehLatCtrlCrvtRateRaw_Cnt_T_u16);
	(void) Rte_Write_FordVehLatCtrlCrvtRaw_Val(FordVehLatCtrlCrvtRaw_Cnt_T_u16);
	(void) Rte_Write_FordVehLatCtrlHandsOffDetnTqStimlsReq_Val(FordVehLatCtrlHandsOffDetnTqStimlsReq_Cnt_T_u08);
	(void) Rte_Write_FordVehLatCtrlImgProcrModlAVld_Logl(FordVehLatCtrlImgProcrModlAVld_Cnt_T_logl);
	(void) Rte_Write_FordVehLatCtrlPah_Val(FordVehLatCtrlPah_Rad_T_f32);
	(void) Rte_Write_FordVehLatCtrlPahOffs_Val(FordVehLatCtrlPahOffs_Mtr_T_f32);
	(void) Rte_Write_FordVehLatCtrlPahOffsRaw_Val(FordVehLatCtrlPahOffsRaw_Cnt_T_u16);
	(void) Rte_Write_FordVehLatCtrlPahRaw_Val(FordVehLatCtrlPahRaw_Cnt_T_u16);
	(void) Rte_Write_FordVehLatCtrlPrcsn_Val(FordVehLatCtrlPrcsn_Cnt_T_u08);
	(void) Rte_Write_FordVehLatCtrlRampTyp_Val(FordVehLatCtrlRampTyp_Cnt_T_u08);
	(void) Rte_Write_FordVehLatCtrlReq_Val(FordVehLatCtrlReq_Cnt_T_u08);
	(void) Rte_Write_FordVehLatCtrlRingMax_Val(FordVehLatCtrlRingMax_Cnt_T_u08);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FordMsg3D3BusHiSpd_STOP_SEC_CODE
#include "FordMsg3D3BusHiSpd_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************************************************
  * Name         :  DiagEna
  * Description  :  Implementation of 'DiagEna' Subsystem
  * Input        :  FordCanDtcInhb_Cnt_T_logl,FordLaneCentrAssiEnad_Cnt_T_logl,FordTrfcJamAssiEnad_Cnt_T_logl
  *			        ClrDiagcFlgProxy_Cnt_T_u08		
  * Output       :  *MissMsgDiagEna_Cnt_T_logl
  *                 *ClrDiagcFlgProxyEna_Cnt_logl
  * Usage Notes  :  None
 *****************************************************************************************************************/	 
static FUNC(void, FordMsg3D3BusHiSpd_CODE)DiagEna(VAR(boolean, AUTOMATIC) FordCanDtcInhb_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC) FordLaneCentrAssiEnad_Cnt_T_logl,
												  VAR(boolean, AUTOMATIC) FordTrfcJamAssiEnad_Cnt_T_logl,
												  VAR(uint8, AUTOMATIC) ClrDiagcFlgProxy_Cnt_T_u08,
												  P2VAR(boolean, AUTOMATIC,RTE_FORDMSG3D3BUSHISPD_APPL_VAR)MissMsgDiagEna_Cnt_T_logl,
												  P2VAR(boolean, AUTOMATIC,RTE_FORDMSG3D3BUSHISPD_APPL_VAR)ClrDiagcFlgProxyEna_Cnt_logl)
{
	if ((FALSE == FordCanDtcInhb_Cnt_T_logl) &&
       ((TRUE == FordLaneCentrAssiEnad_Cnt_T_logl) ||
       (TRUE == FordTrfcJamAssiEnad_Cnt_T_logl)))
    {
		*MissMsgDiagEna_Cnt_T_logl = TRUE;
    }
    else
    {
		*MissMsgDiagEna_Cnt_T_logl = FALSE;
    }
   
    if(ClrDiagcFlgProxy_Cnt_T_u08 != *Rte_Pim_ClrDiagcFlgProxyPrev())
	{
	    *ClrDiagcFlgProxyEna_Cnt_logl = TRUE;
	}
	else
	{
	    *ClrDiagcFlgProxyEna_Cnt_logl = FALSE;
	}
      *Rte_Pim_ClrDiagcFlgProxyPrev() = ClrDiagcFlgProxy_Cnt_T_u08;
}

/*****************************************************************************************************************
  * Name         :  FordMsg3D3MissMsgFail
  * Description  :  Implementation of 'FordMsg3D3MissMsgFail' Subsystem
  * Input        :  BusHiSpdMissThd_Cnt_T_u16,MissMsgDiagEna_Cnt_T_logl
  *			        ClrDiagcFlgProxyEna_Cnt_logl		
  * Output       :  None
  * Usage Notes  :  None
*****************************************************************************************************************/	 
static FUNC(void, FordMsg3D3BusHiSpd_CODE)FordMsg3D3MissMsgFail(VAR(uint16, AUTOMATIC) BusHiSpdMissThd_Cnt_T_u16,
															    VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl,
															    VAR(boolean, AUTOMATIC) ClrDiagcFlgProxyEna_Cnt_logl)
{
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32 = 0U;
	
	if (TRUE == MissMsgDiagEna_Cnt_T_logl)
	{ 
		/** Start of MissMsgNtcFail**/
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgFaildRefTi(),&TiSpan_Cnt_T_u32);
		if (TiSpan_Cnt_T_u32 > ((uint32)BusHiSpdMissThd_Cnt_T_u16 * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
		  (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X151,0U,NTCSTS_FAILD,DEBSTEP_CNT_U16);
		}
	  /** End of  of MissMsgNtcFail**/
	}
	else
	{
		/** Start of NtcPassTimerReset **/			
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X151,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
	   /** End of NtcPassTimerReset **/
	}   
	
	if (TRUE == ClrDiagcFlgProxyEna_Cnt_logl)
	{ 
		/** Start of TmrRst**/
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgFaildRefTi());
	  /** End of  of TmrRst**/
	}
	else
	{
	   /* Do Nothing */
	}

} 

/*****************************************************************************************************************
  * Name         :  FordMsg3D3MissMsgPass
  * Description  :  Implementation of 'FordMsg3D3MissMsgPass' Subsystem
  * Input        :  MissMsgDiagEna_Cnt_T_logl
  *			        ClrDiagcFlgProxyEna_Cnt_logl		
  * Output       :  None
  * Usage Notes  :  None
*****************************************************************************************************************/	 
static FUNC(void, FordMsg3D3BusHiSpd_CODE)FordMsg3D3MissMsgPass(VAR(boolean, AUTOMATIC) MissMsgDiagEna_Cnt_T_logl,
															    VAR(boolean, AUTOMATIC) ClrDiagcFlgProxyEna_Cnt_logl)
{																	
	VAR(uint32, AUTOMATIC)  TiSpan_Cnt_T_u32;
	
	if (TRUE == MissMsgDiagEna_Cnt_T_logl)
	{ 
		/** Start of FordMsg3D3MissMsgPass**/
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(*Rte_Pim_MissMsgPassdRefTi(),&TiSpan_Cnt_T_u32);
		if (TiSpan_Cnt_T_u32 > ((uint32)Rte_Prm_FordMsg3D3BusHiSpdMissMsgPassdThd_Val() * (uint32)CNVMILLISECTOCNT_CNTPERMILLISEC_U16))
		{
		  (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X151,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
		}
	  /** End of  of FordMsg3D3MissMsgPass**/
	}
	else
	{
		/** Start of NtcPassTimerReset **/			
		(void)Rte_Call_SetNtcSts_Oper(NTCNR_0X151,0U,NTCSTS_PASSD,DEBSTEP_CNT_U16);
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgPassdRefTi());
	   /** End of NtcPassTimerReset **/
	} 
	
	if (TRUE == ClrDiagcFlgProxyEna_Cnt_logl)
	{ 
		/** Start of TmrRst**/
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(Rte_Pim_MissMsgPassdRefTi());
	  /** End of  of TmrRst**/
	}
	else
	{
	   /* Do Nothing */
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
