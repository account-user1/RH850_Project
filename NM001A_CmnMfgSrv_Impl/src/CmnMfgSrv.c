/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CmnMfgSrv.c
 *     SW-C Type:  CmnMfgSrv
 *  Generated at:  Mon Nov 20 10:27:33 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CmnMfgSrv>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: CmnMfgSrv.c
* Module Description: Common Manufacturing Services Main Functions
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         27 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 04/20/15  1        JWJ       Initial file creation                                                        EA4#550
* 06/10/15  2        JWJ       Added support for trusted function calls to the main function                EA4#881
* 06/22/15  3        JWJ       Updated Main Function to set default positive response for NT services       EA4#881
* 07/17/15  4        JWJ       Regenerated to support additions of new RTE client/server functions          EA4#881
* 07/24/15  5        JWJ       Generated updates to support new services                                    EA4#1187
* 08/17/15  6        JWJ       Generated updates for added services                                         EA4#1332
* 08/24/15  7        JWJ       Generated to support addition of NTC clear service                           EA4#1390
* 08/31/15  8        JWJ       Generated updates in support of F100 and FDC8                                EA4#1441
* 09/08/15  9        JWJ       Generated updates for DiagcMgr server runnable updates                       EA4#1533
* 10/21/15  12       JWJ       Generated updates for pull comp services                                     EA4#2174
* 11/02/15  13       JWJ       Corrected anomaly EA4#2351 - writing of Disable PIMs to outputs              EA4#2351
* 11/11/15  14       JWJ       Moved disable table into here from config file                               EA4#2518
* 02/26/16  15       JWJ       Updates for new services                                                     EA4#2585
* 03.24/16  16       JWJ       Added new services for SF032A, SF051A, and updates for ES241A                EA4#4909
* 05/02/16  17       JWJ       Updated to include SF007A services and updates to ES200A, SF053A, ES101A     EA4#5582
* 07/13/16  18       JWJ       Added new defeats for SF007A and SF049A                                      EA4#6219
* 07/21/16  19       JWJ       Set the controller to be unlocked in test and manufacturing modes            EA4#6651
* 12/13/16  20       JWJ       Added support for reset service positive response at init                    EA4#8626
*                              Added support for handwheel torque 4 and 5 services                          EA4#8626
*                              Added condition to only allow read services when NMEC reaches zero           EA4#8626
*                              Added build switch to restore NMEC to non-zero value                         EA4#8626
* 03/09/17  21       JWJ       Generation update to add service 0xF200 for McuErrInj (DF003A)               EA4#10156
*                              EA4#9206: Adjusted the outputs from the init function to write immediately   EA4#10156
* 05/05/17  22       JWJ       Generated updates for new 0xFD90 and 0xFD91 services for HwAgXClrLtch funcs  EA4#11673
* 06/07/17  23       JWJ       Updated to use non-trusted function function name for new OS                 EA4#11834
* 07/07/17  24       JWJ       Updated non-trusted function table to include application ID number          EA4#13539
* 07/27/17  25       JWJ       Refactored main function into multiple local functions to reduce complexity  EA4#14061
*                              Added support for periodic read services (type 0x2A)                         EA4#14061
* 08/25/17  26       JWJ       Generated RTE changes only for new Gear Identification read service          EA4#14784
* 11/20/17  27       JWJ       Added several new services as well as the SwBasedCal callback server         EA4#17640
***********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************

 Data Types:
 ===========
  MfgEnaSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  NtcNr1
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  NtcNrWithResd1
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  SysFricLrngOperMod1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  SysSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

  s1p14
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  s2p13
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  s5p10
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  s8p7
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  sm6p13
    sint8 represents integers with a minimum value of -128 and a maximum value of 127.
     The order-relation on sint8 is: x < y if y - x is positive.
     sint8 has a lexical representation consisting of an optional sign followed 
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is 
     omitted, "+" is assumed. 
     
     For example: -1, 0, 12678, +10000.

  u0p16
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u1p15
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u3p13
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u6p10
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u9p7
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.


 Operation Prototypes:
 =====================
  Oper of Port Interface ReadSnpshtData_PortIf1
    OBSOLETE

 *********************************************************************************************************************/

#include "Rte_CmnMfgSrv.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* ================================================================================================================== */
/* Includes */
/* ------------------------------------------------------------------------------------------------------------------ */
#include "CmnMfgSrv.h"
#include "CmnMfgSrvTyp.h"
#include "CmnMfgSrvFct.h"
#include "MfgSrvCfg.h"
#include "NxtrMath.h"
#include "os.h"
#include "CDD_ExcpnHndlg.h"


/* ================================================================================================================== */
/* Local Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */
#define MECHARDLOCK_CNT_U08    0x00U
#define MECPRDNMODTHD_CNT_U08  0x05U
#define MECTESTMOD_CNT_U08     0xFFU

/* Determines the maximum number of simultaneous PID requests that can be made in a single service request. */
#define PIDTBLLEN_CNT_U08 16U

#define MAIFCTSTEPLOOKUP_CNT_U08  0x00U
#define MAIFCTSTEPLEN_CNT_U08     0x01U
#define MAIFCTSTEPENVCHK_CNT_U08  0x02U
#define MAIFCTSTEPCALLSRV_CNT_U08 0x03U
#define MAIFCTSTEPPROCRSP_CNT_U08 0x04U

#define CMFMFGSRVDFLTSESSION_CNT_U08     0x00U
#define CMFMFGSRVNXTRSESSION_CNT_U08     0x7EU
#define CMNMFGSRVSESSIONTIOUT_100US_U32  50000U


/* ================================================================================================================== */
/* Response Code Buffer */
/* ================================================================================================================== */
#define GlobalShared_START_SEC_VAR_NOINIT_8
#include "MemMap.h"
VAR(NegRespCodEnum, CmnMfgSrv_VAR) CmnMfgSrvRetBuf_G;
#define GlobalShared_STOP_SEC_VAR_NOINIT_8
#include "MemMap.h"


/* ================================================================================================================== */
/* Local Function Prototypes */
/* ------------------------------------------------------------------------------------------------------------------ */
static FUNC(NegRespCodEnum, CmnMfgSrv_CODE) LoadPidTbl(VAR(uint8, AUTOMATIC) SrvId_Cnt_T_u08, VAR(uint16, AUTOMATIC) PrmId_Cnt_T_u16, P2VAR(uint16, AUTOMATIC, AUTOMATIC) ReqLenPtr_Cnt_T_u16, VAR(uint8, AUTOMATIC) DataBuf_Cnt_T_u08[], VAR(uint16, AUTOMATIC) PidTbl_Cnt_T_u16[], P2VAR(uint8, AUTOMATIC, AUTOMATIC) PidCntPtr_Cnt_T_u08);
static FUNC(NegRespCodEnum, CmnMfgSrv_CODE) PerfLookup(VAR(uint8, AUTOMATIC) SrvTyp_Cnt_T_u08, VAR(uint8, AUTOMATIC) SubTyp_Cnt_T_u08, VAR(uint16, AUTOMATIC) SrvId_Cnt_T_u16, P2VAR(MfgSrvTblRec, AUTOMATIC, AUTOMATIC) *SrvPtrPtr_Cnt_T_rec);
static FUNC(NegRespCodEnum, CmnMfgSrv_CODE) PerfLenChk(P2VAR(MfgSrvTblRec, AUTOMATIC, AUTOMATIC) SrvPtr_Cnt_T_rec, VAR(uint16, AUTOMATIC) ReqLen_Cnt_T_u16);
static FUNC(NegRespCodEnum, CmnMfgSrv_CODE) PerfEnvChk(P2VAR(MfgSrvTblRec, AUTOMATIC, AUTOMATIC) SrvPtr_Cnt_T_rec);
static FUNC(NegRespCodEnum, CmnMfgSrv_CODE) PerfSrv(P2VAR(MfgSrvTblRec, AUTOMATIC, AUTOMATIC) SrvPtr_Cnt_T_rec, P2VAR(uint8, AUTOMATIC, AUTOMATIC) DataBufPtr_Cnt_T_u08[], P2VAR(uint16, AUTOMATIC, AUTOMATIC) RespLenPtr_Cnt_T_u16);
static FUNC(NegRespCodEnum, CmnMfgSrv_CODE) ProcRspCod(P2VAR(MfgSrvTblRec, AUTOMATIC, AUTOMATIC) SrvPtr_Cnt_T_rec, VAR(uint8, AUTOMATIC) SubFct_Cnt_T_u08);



/* ================================================================================================================== */
/* Disable Mapping Table */
/* ------------------------------------------------------------------------------------------------------------------ */
CONSTP2VAR(boolean, AUTOMATIC, AUTOMATIC) CmnMfgSrv_DiTbl[64U] = {
	Rte_Pim_SysStReqEnaOvrd(), /* F100 */
	Rte_Pim_DiSysMotTqCmdRampRate(), /* F101 */
	NULL_PTR, /* F102 */
	NULL_PTR, /* F103 */
	NULL_PTR, /* F104 */
	NULL_PTR, /* F105 */
	NULL_PTR, /* F106 */
	NULL_PTR, /* F107 */
	NULL_PTR, /* F108 */
	NULL_PTR, /* F109 */
	NULL_PTR, /* F10A */
	NULL_PTR, /* F10B */
	NULL_PTR, /* F10C */
	NULL_PTR, /* F10D */
	NULL_PTR, /* F10E */
	NULL_PTR, /* F10F */
	Rte_Pim_DiRtn(), /* F110 */
	Rte_Pim_DiDampg(), /* F111 */
	Rte_Pim_DiHysCmp(), /* F112 */
	Rte_Pim_DiInertiaCmp(), /* F113 */
	Rte_Pim_DiStallMotTqLim(), /* F114 */
	Rte_Pim_DiEotProtn(), /* F115 */
	Rte_Pim_DiAssiMechTEstimn(), /* F116 */
	Rte_Pim_DiPullCmpActvCmd(), /* F117 */
	Rte_Pim_DiPullCmpActvLrng(), /* F118 */
	Rte_Pim_DiDutyCycThermProtn(), /* F119 */
	Rte_Pim_DiSysFricLrng(), /* F11A */
	NULL_PTR, /* F11B */
	NULL_PTR, /* F11C */
	NULL_PTR, /* F11D */
	NULL_PTR, /* F11E */
	NULL_PTR, /* F11F */
	NULL_PTR, /* F120 */
	NULL_PTR, /* F121 */
	NULL_PTR, /* F122 */
	NULL_PTR, /* F123 */
	NULL_PTR, /* F124 */
	NULL_PTR, /* F125 */
	NULL_PTR, /* F126 */
	NULL_PTR, /* F127 */
	NULL_PTR, /* F128 */
	NULL_PTR, /* F129 */
	NULL_PTR, /* F12A */
	NULL_PTR, /* F12B */
	NULL_PTR, /* F12C */
	NULL_PTR, /* F12D */
	NULL_PTR, /* F12E */
	NULL_PTR, /* F12F */
	NULL_PTR, /* F130 */
	NULL_PTR, /* F131 */
	NULL_PTR, /* F132 */
	NULL_PTR, /* F133 */
	NULL_PTR, /* F134 */
	NULL_PTR, /* F135 */
	NULL_PTR, /* F136 */
	NULL_PTR, /* F137 */
	NULL_PTR, /* F138 */
	NULL_PTR, /* F139 */
	NULL_PTR, /* F13A */
	NULL_PTR, /* F13B */
	NULL_PTR, /* F13C */
	NULL_PTR, /* F13D */
	NULL_PTR, /* F13E */
	NULL_PTR, /* F13F */
};


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
 * s1p14: Integer in interval [-32768...32767]
 * s2p13: Integer in interval [-32768...32767]
 * s5p10: Integer in interval [-32768...32767]
 * s8p7: Integer in interval [-32768...32767]
 * sm6p13: Integer in interval [-128...127]
 * u0p16: Integer in interval [0...65535]
 * u1p15: Integer in interval [0...65535]
 * u3p13: Integer in interval [0...65535]
 * u6p10: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
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
 * SysFricLrngOperMod1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSFRICLRNGOPERMOD_CALIBRATION (0U)
 *   SYSFRICLRNGOPERMOD_NORMAL (1U)
 *   SYSFRICLRNGOPERMOD_CLEAR (2U)
 *   SYSFRICLRNGOPERMOD_IDLE (3U)
 *   SYSFRICLRNGOPERMOD_BASELINE (4U)
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Array Types:
 * ============
 * Ary1D_ReadFltInfoRec1_20: Array with 20 element(s) of type ReadFltInfoRec1
 * Ary1D_SnpshtDataRec1_8: Array with 8 element(s) of type SnpshtDataRec1
 * Ary1D_SnpshtDataRec2_8: Array with 8 element(s) of type SnpshtDataRec2
 * Ary1D_f32_26: Array with 26 element(s) of type float32
 * Ary1D_f32_4: Array with 4 element(s) of type float32
 * Ary1D_s1p14_128: Array with 128 element(s) of type s1p14
 * Ary1D_sm6p13_144: Array with 144 element(s) of type sm6p13
 * Ary1D_u08_20: Array with 20 element(s) of type uint8
 * Ary1D_u16_12: Array with 12 element(s) of type uint16
 * Ary1D_u16_16: Array with 16 element(s) of type uint16
 * Ary1D_u16_3: Array with 3 element(s) of type uint16
 * Ary1D_u32_2: Array with 2 element(s) of type uint32
 * Ary1D_u8_10: Array with 10 element(s) of type uint8
 * Ary1D_u8_16: Array with 16 element(s) of type uint8
 * Ary1D_u8_20: Array with 20 element(s) of type uint8
 * Ary1D_u8_48: Array with 48 element(s) of type uint8
 * Ary1D_u8_6: Array with 6 element(s) of type uint8
 * Ary1D_u8_8: Array with 8 element(s) of type uint8
 * Ary2D_f32_8_4: Array with 8 element(s) of type Ary1D_f32_4
 * Ary2D_u16_8_3: Array with 8 element(s) of type Ary1D_u16_3
 *
 * Record Types:
 * =============
 * MotAgEolPrmRec1: Record with elements
 *   SinOffs of type u3p13
 *   CosOffs of type u3p13
 *   SinAmpRecpr of type u3p13
 *   CosAmpRecpr of type u3p13
 *   SinDelta of type s2p13
 *   SinHrmncTbl of type Ary1D_sm6p13_144
 *   CosHrmncTbl of type Ary1D_sm6p13_144
 *   SinGainCorrd of type u1p15
 *   CosGainCorrd of type u1p15
 *   SinOffsCorrd of type s2p13
 *   CosOffsCorrd of type s2p13
 *   CosDeltaRecpr of type u3p13
 * MotAgMeasEolPrmRec1: Record with elements
 *   SinOffs of type float32
 *   CosOffs of type float32
 *   SinAmpRecpr of type float32
 *   CosAmpRecpr of type float32
 *   SinDelta of type float32
 * ReadFltInfoRec1: Record with elements
 *   NtcNr of type NtcNrWithResd1
 *   AgiCntr of type uint8
 *   Sts of type uint8
 *   NtcStInfo of type uint8
 * SnpshtDataRec1: Record with elements
 *   MicroDiagcData of type uint32
 *   HwTq of type s5p10
 *   MotTq of type s5p10
 *   IgnCntr of type uint32
 *   BrdgVltg of type u6p10
 *   EcuT of type s8p7
 *   NtcNr of type uint16
 *   NtcStInfo of type uint8
 *   SysSt of type SysSt1
 *   VehSpd of type u9p7
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
 *   float32 *Rte_Pim_InpOutpCtrlAssiGain(void)
 *   float32 *Rte_Pim_InpOutpCtrlVehSpdOvrd(void)
 *   uint32 *Rte_Pim_IgnCntr(void)
 *   uint32 *Rte_Pim_SecuAcsAtmptTmr(void)
 *   uint32 *Rte_Pim_SessionTiOut(void)
 *   uint16 *Rte_Pim_PerCyc(void)
 *   uint16 *Rte_Pim_PerDivdr(void)
 *   uint16 *Rte_Pim_ReqLen(void)
 *   uint8 *Rte_Pim_NxtrMfgEnaCntr(void)
 *   uint8 *Rte_Pim_PerPidTblLen(void)
 *   uint8 *Rte_Pim_SecuAcsAtmptCntr(void)
 *   uint8 *Rte_Pim_SessionCurr(void)
 *   boolean *Rte_Pim_DiAssiMechTEstimn(void)
 *   boolean *Rte_Pim_DiDampg(void)
 *   boolean *Rte_Pim_DiDutyCycThermProtn(void)
 *   boolean *Rte_Pim_DiEotProtn(void)
 *   boolean *Rte_Pim_DiHysCmp(void)
 *   boolean *Rte_Pim_DiInertiaCmp(void)
 *   boolean *Rte_Pim_DiLoaSca(void)
 *   boolean *Rte_Pim_DiPullCmpActvCmd(void)
 *   boolean *Rte_Pim_DiPullCmpActvLrng(void)
 *   boolean *Rte_Pim_DiRtn(void)
 *   boolean *Rte_Pim_DiStallMotTqLim(void)
 *   boolean *Rte_Pim_DiSysFricLrng(void)
 *   boolean *Rte_Pim_DiSysMotTqCmdRampRate(void)
 *   boolean *Rte_Pim_MfgDiagcInhb(void)
 *   boolean *Rte_Pim_PerRunng(void)
 *   boolean *Rte_Pim_SecuAcsSeedReqCmpl(void)
 *   boolean *Rte_Pim_SecuAcsUnlckd(void)
 *   boolean *Rte_Pim_SysStReqEnaOvrd(void)
 *   uint8 *Rte_Pim_CcaHwPartNr(void)
 *   uint8 *Rte_Pim_CcaSerlNr(void)
 *   uint8 *Rte_Pim_DiRestore(void)
 *   uint8 *Rte_Pim_EpsSysSerlNr(void)
 *   uint8 *Rte_Pim_MfgTmpBuf0(void)
 *   uint8 *Rte_Pim_MfgTmpBuf1(void)
 *   uint8 *Rte_Pim_MfgTmpBuf2(void)
 *   uint8 *Rte_Pim_MfgTmpBuf3(void)
 *   uint8 *Rte_Pim_MfgTmpBuf4(void)
 *   uint16 *Rte_Pim_PerPidTbl(void)
 *   uint32 *Rte_Pim_SeedKey(void)
 *
 * Calibration Parameters:
 * =======================
 *   SW-C local Calibration Parameters:
 *   ----------------------------------
 *   uint32 Rte_CData_NvmIgnCntr_DefaultValue(void)
 *   uint8 Rte_CData_NvmMfgEnaCntr_DefaultValue(void)
 *   uint8 *Rte_CData_NvmNxtrSeedKey_DefaultValue(void)
 *   uint32 *Rte_CData_SeedKeyDft(void)
 *
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint16 Rte_Prm_CmnMfgSrvSecuAcsAtmptTiOut_Val(void)
 *   uint8 Rte_Prm_CmnMfgSrvSecuAcsMaxNrAtmpt_Val(void)
 *
 *********************************************************************************************************************/


#define CmnMfgSrv_START_SEC_CODE
#include "CmnMfgSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmnMfgSrvCmnMfgSrvMaiFct_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <CmnMfgSrvCmnMfgSrvMaiFct>
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg0_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq0_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq2_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq3_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg0Mecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAg1Mecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAg2Mecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAgCumvAlgndMrf_Val(sint32 *data)
 *   Std_ReturnType Rte_Read_MotAgMecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotCurrDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiLnrGain_Val(float32 data)
 *   Std_ReturnType Rte_Write_AssiLnrGainEna_Logl(boolean data)
 *   Std_ReturnType Rte_Write_IgnCntr_Val(uint32 data)
 *   Std_ReturnType Rte_Write_MfgEnaSt_Val(MfgEnaSt1 data)
 *   Std_ReturnType Rte_Write_SysStImdtTranReqOff_Logl(boolean data)
 *   Std_ReturnType Rte_Write_VehSpdOvrd_Val(float32 data)
 *   Std_ReturnType Rte_Write_VehSpdOvrdEna_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_ClrAllDiagc_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrFricLrngOperMod_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrHwAgTrimVal_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrLtchCntrData_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ClrSnpshtData_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasEolGainReq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasEolGainStReq_Oper(uint8 *CurrMeasEolGainSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasEolOffsReq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasEolOffsStReq_Oper(uint8 *CurrMeasEolOffsSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasGainReadReq_Oper(float32 *CurrMeasMotCurrGainA_Arg, float32 *CurrMeasMotCurrGainB_Arg, float32 *CurrMeasMotCurrGainC_Arg, float32 *CurrMeasMotCurrGainD_Arg, float32 *CurrMeasMotCurrGainE_Arg, float32 *CurrMeasMotCurrGainF_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasGainReadReqSngIvtr_Oper(float32 *CurrMeasMotCurrGainA_Arg, float32 *CurrMeasMotCurrGainB_Arg, float32 *CurrMeasMotCurrGainC_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasGainWrReq_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, float32 CurrMeasMotCurrGainD_Arg, float32 CurrMeasMotCurrGainE_Arg, float32 CurrMeasMotCurrGainF_Arg, uint8 *CurrMeasGainWrReqSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasGainWrReqSngIvtr_Oper(float32 CurrMeasMotCurrGainA_Arg, float32 CurrMeasMotCurrGainB_Arg, float32 CurrMeasMotCurrGainC_Arg, uint8 *CurrMeasGainWrReqSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasOffsReadReq_Oper(float32 *CurrMeasEolOffsHiBrdgVltg_Arg, float32 *CurrMeasMotCurrOffsDifA_Arg, float32 *CurrMeasMotCurrOffsDifB_Arg, float32 *CurrMeasMotCurrOffsDifC_Arg, float32 *CurrMeasMotCurrOffsDifD_Arg, float32 *CurrMeasMotCurrOffsDifE_Arg, float32 *CurrMeasMotCurrOffsDifF_Arg, float32 *CurrMeasMotCurrOffsLoAvrgA_Arg, float32 *CurrMeasMotCurrOffsLoAvrgB_Arg, float32 *CurrMeasMotCurrOffsLoAvrgC_Arg, float32 *CurrMeasMotCurrOffsLoAvrgD_Arg, float32 *CurrMeasMotCurrOffsLoAvrgE_Arg, float32 *CurrMeasMotCurrOffsLoAvrgF_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasOffsReadReqSngIvtr_Oper(float32 *CurrMeasEolOffsHiBrdgVltg_Arg, float32 *CurrMeasMotCurrOffsDifA_Arg, float32 *CurrMeasMotCurrOffsDifB_Arg, float32 *CurrMeasMotCurrOffsDifC_Arg, float32 *CurrMeasMotCurrOffsLoAvrgA_Arg, float32 *CurrMeasMotCurrOffsLoAvrgB_Arg, float32 *CurrMeasMotCurrOffsLoAvrgC_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasOffsWrReq_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsDifD_Arg, float32 CurrMeasMotCurrOffsDifE_Arg, float32 CurrMeasMotCurrOffsDifF_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, float32 CurrMeasMotCurrOffsLoAvrgD_Arg, float32 CurrMeasMotCurrOffsLoAvrgE_Arg, float32 CurrMeasMotCurrOffsLoAvrgF_Arg, uint8 *CurrMeasOffsWrReqSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_CurrMeasOffsWrReqSngIvtr_Oper(float32 CurrMeasEolOffsHiBrdgVltg_Arg, float32 CurrMeasMotCurrOffsDifA_Arg, float32 CurrMeasMotCurrOffsDifB_Arg, float32 CurrMeasMotCurrOffsDifC_Arg, float32 CurrMeasMotCurrOffsLoAvrgA_Arg, float32 CurrMeasMotCurrOffsLoAvrgB_Arg, float32 CurrMeasMotCurrOffsLoAvrgC_Arg, uint8 *CurrMeasOffsWrReqSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_FSnsrlsHwCentr_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetCtrlPrm_Oper(float32 *MotVelCtrlPropGain_Arg, float32 *MotVelCtrlIntgtrGain_Arg, float32 *MotVelCtrlDerivtvGain_Arg, float32 *MotVelCtrlAntiWdupLim_Arg, float32 *MotVelCtrlAntiWdupGain_Arg, float32 *MotVelCtrlDerivtvLpFilTiCon_Arg, float32 *MotVelCtrlTqCmdLim_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetFricData_Oper(float32 *FricOffs_Arg, float32 *BasLineFric_Arg, float32 *VehLrndFric_Arg, float32 *Hys_Arg, uint16 *RngCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetFricLrngData_Oper(boolean *FricLrngEna_Arg, boolean *FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 *FricLrngOperMod_Arg, float32 *EolFric_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetFricOffsOutpDi_Oper(boolean *FricOffsOutpDi_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetGearIdn_Oper(uint8 *GearIdn_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetHwAgOffs_Oper(float32 *HwAgOffs_Arg, boolean *HwAgLrngStRst_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetHwAgOverTrvlCnt_Oper(uint8 *HwAgOverTrvlCnt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetHwAgTrimVal_Oper(float32 *HwAgTrimVal_Arg, boolean *HwAgTrimPrfmd_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetHwTqOffs_Oper(float32 *HwTqOffs_Arg, boolean *HwTqLrngStRst_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetMotCoggCmdPrm_Oper(s1p14 *MotCoggCmdY_Arg, uint8 Idx_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetMotPrmNomEol_Oper(float32 *MotKeNom, float32 *MotRNom)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetMotPrmNomEol1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetMotRplCoggPrm_Oper(uint16 *CoggOrder1_Arg, s1p14 *CoggOrder1X_Arg, s1p14 *CoggOrder1Y_Arg, uint16 *CoggOrder2_Arg, s1p14 *CoggOrder2X_Arg, s1p14 *CoggOrder2Y_Arg, uint16 *CoggOrder3_Arg, s1p14 *CoggOrder3X_Arg, s1p14 *CoggOrder3Y_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetMotTqCmdSca_Oper(float32 *MotTqCmdSca_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetNtcSts_Oper(NtcNr1 NtcNr_Arg, uint8 *NtcInfoSts_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_GetPullCmpPrm_Oper(float32 *PullCmpCmdTot_Arg, float32 *PullCmpShoTerm_Arg, float32 *PullCmpLongTerm_Arg, boolean *LrngEnad_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit1_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit1_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetYawRateOffs_Oper(float32 *VehYawRateOffs_Arg, boolean *VehYawRateLrngStRst_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg0ClrLtch_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg0MeasHwAg0AutoTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg0MeasHwAg0ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg0MeasHwAg0ReadTrim_Oper(float32 *HwAg0MeasHwAg0WrOffsTrimData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg0MeasHwAg0TrimPrfmdSts_Oper(boolean *HwAg0MeasHwAg0OffsTrimPrfmdStsData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg0MeasHwAg0WrTrim_Oper(float32 HwAg0MeasHwAg0WrTrimData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg1ClrLtch_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg1MeasHwAg1AutoTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg1MeasHwAg1ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg1MeasHwAg1ReadTrim_Oper(float32 *HwAg1MeasHwAg1WrOffsTrimData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg1MeasHwAg1TrimPrfmdSts_Oper(boolean *HwAg1MeasHwAg1OffsTrimPrfmdStsData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwAg1MeasHwAg1WrTrim_Oper(float32 HwAg1MeasHwAg1WrTrimData)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq0MeasHwTq0AutTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq0MeasHwTq0ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq0MeasHwTq0ReadTrim_Oper(float32 *HwTq0MeasHwTq0ReadTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq0MeasHwTq0TrimPrfmdSts_Oper(boolean *HwTq0MeasHwTq0OffsTrimPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq0MeasHwTq0WrTrim_Oper(float32 HwTq0MeasHwTq0WrOffsTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq1MeasHwTq1AutTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq1MeasHwTq1ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq1MeasHwTq1ReadTrim_Oper(float32 *HwTq1MeasHwTq1ReadTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq1MeasHwTq1TrimPrfmdSts_Oper(boolean *HwTq1MeasHwTq1OffsTrimPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq1MeasHwTq1WrTrim_Oper(float32 HwTq1MeasHwTq1WrOffsTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq2MeasHwTq2AutTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq2MeasHwTq2ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq2MeasHwTq2ReadTrim_Oper(float32 *HwTq2MeasHwTq2ReadTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq2MeasHwTq2TrimPrfmdSts_Oper(boolean *HwTq2MeasHwTq2OffsTrimPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq2MeasHwTq2WrTrim_Oper(float32 HwTq2MeasHwTq2WrOffsTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq3MeasHwTq3AutTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq3MeasHwTq3ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq3MeasHwTq3ReadTrim_Oper(float32 *HwTq3MeasHwTq3ReadTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq3MeasHwTq3TrimPrfmdSts_Oper(boolean *HwTq3MeasHwTq3OffsTrimPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq3MeasHwTq3WrTrim_Oper(float32 HwTq3MeasHwTq3WrOffsTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4AutTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4ClrSnsrSca_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4ReadSnsrSca_Oper(float32 *HwTqReadScaData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4ReadTrim_Oper(float32 *HwTqReadTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4SnsrScaPrfmdSts_Oper(boolean *HwTqScaPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4TrimPrfmdSts_Oper(boolean *HwTqOffsTrimPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4WrSnsrSca_Oper(float32 HwTqScaVal_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq4WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5AutTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5ClrSnsrSca_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5ClrTrim_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5ReadSnsrSca_Oper(float32 *HwTqReadScaData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5ReadTrim_Oper(float32 *HwTqReadTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5SnsrScaPrfmdSts_Oper(boolean *HwTqScaPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5TrimPrfmdSts_Oper(boolean *HwTqOffsTrimPrfmdStsData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5WrSnsrSca_Oper(float32 HwTqScaVal_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_HwTq5WrTrim_Oper(float32 HwTqWrOffsTrimData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_InitFricLrngTbl_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg0MeasMotAg0CoeffTblRead_Oper(float32 *MotAgCoeffTbl_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg0MeasMotAg0CoeffTblWr_Oper(const float32 *MotAgCoeffTbl_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg1MeasMotAg1CoeffTblRead_Oper(float32 *MotAgCoeffTbl_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg1MeasMotAg1CoeffTblWr_Oper(const float32 *MotAgCoeffTbl_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg5EolPrmRead_Oper(MotAgEolPrmRec1 *MotAgEolPrmData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg5EolPrmWr_Oper(const MotAgEolPrmRec1 *MotAgEolPrmData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg6EolPrmRead_Oper(MotAgEolPrmRec1 *MotAgEolPrmData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAg6EolPrmWr_Oper(const MotAgEolPrmRec1 *MotAgEolPrmData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAgCmpBackEmfRead_Oper(u0p16 *MotAgBackEmfRead)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_MotAgCmpBackEmfRead1_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotAgCmpBackEmfWr_Oper(u0p16 MotAgCmpBackEmfWrData)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_MotAgCmpBackEmfWr1_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotAgMeasEolPrmRead_Oper(MotAgMeasEolPrmRec1 *MotAgEolPrmRead_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_MotAgMeasEolPrmWr_Oper(const MotAgMeasEolPrmRec1 *MotAgSinCosEolCalData_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_NxtrCalIdsCalDevlpRd_Oper(uint8 CalRegn, uint8 *CalAuthor, uint8 *CalVers, uint32 *CalTiStamp, uint8 *CalDescr)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrCalIdsCalDevlpRd_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_NxtrCalIdsCalRelRd_Oper(uint8 CalRegn, uint32 *RelNr, uint8 *RelSt)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_NxtrSwIdsPsrInfoRd_Oper(uint32 *PsrId, uint8 *PsrRev)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NxtrSwIdsPsrInfoRd_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_NxtrSwIdsSwBuildDateTiRd_Oper(uint8 *SwBuildDateTi)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_NxtrSwIdsSwRelInfoRd_Oper(uint8 *SwOrigin, uint8 *SwAuthor)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_NxtrSwIdsSwRelNrRd_Oper(uint8 *SwRelNr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_NxtrSwIdsSwRelVerRd_Oper(uint8 *SwRelVer)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_PolarityCfgRead_Oper(uint32 *PolarityCfgSaved)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PolarityCfgRead1_E_NOT_OK
 *   Std_ReturnType Rte_Call_PolarityCfgWr_Oper(uint32 PolarityCfgSaved)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_PolarityCfgWr1_E_NOT_OK
 *   Std_ReturnType Rte_Call_ReadExtdSnpshtData_Oper(SnpshtDataRec2 *ReadSnpshtDataAry_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ReadLtchCntrData_Oper(uint8 *ReadLtchCntrAry_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ReadNtcFltAry_Oper(ReadFltInfoRec1 *DiagcMgrReadFltInfo_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ReadNtcInfoAndDebCntr_Oper(NtcNr1 NtcNr_Arg, NtcInfoRec4 *NtcInfo_Arg, sint16 *DebCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_ReadSnpshtData_Oper(SnpshtDataRec1 *ReadSnpshtDataAry_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RstHwAgOverTrvlCnt_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RstHwTq_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RstMaxHwAgCwAndCcw_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RstPullCmp_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RstSnsrlsHwCentr_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RstYawAndAg_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_RtnMaxHwAgCwAndCcw_Oper(float32 *HwAgCcwMax_Arg, float32 *HwAgCwMax_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SerlComRstEot_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetCtrlPrm_Oper(float32 MotVelCtrlPropGain_Arg, float32 MotVelCtrlIntgtrGain_Arg, float32 MotVelCtrlDerivtvGain_Arg, float32 MotVelCtrlAntiWdupLim_Arg, float32 MotVelCtrlAntiWdupGain_Arg, float32 MotVelCtrlDerivtvLpFilTiCon_Arg, float32 MotVelCtrlTqCmdLim_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetFricData_Oper(float32 FricOffs_Arg, const float32 *BasLineFric_Arg, const float32 *VehLrndFric_Arg, const float32 *Hys_Arg, const uint16 *RngCntr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetFricLrngData_Oper(boolean FricLrngEna_Arg, boolean FricLrngOffsOutpEna_Arg, SysFricLrngOperMod1 FricLrngOperMod_Arg, float32 EolFric_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetFricOffsOutpDi_Oper(boolean FricOffsOutpDi_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetHwAgOffs_Oper(float32 HwAgOffs_Arg, boolean HwAgLrngStRst_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetHwAgOverTrvlCnt_Oper(uint8 HwAgOverTrvlCnt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetHwAgTrimVal_Oper(float32 HwAgTrimVal_Arg, boolean HwAgTrimPrfmd_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetHwTqOffs_Oper(float32 HwTqOffs_Arg, boolean HwTqLrngStRst_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetManTqCmd_Oper(float32 ManTqCmd, boolean ManTqCmdEna)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetManTqCmd1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetMotCoggCmdPrm_Oper(const s1p14 *MotCoggCmdY_Arg, uint8 Idx_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetMotPrmNomEol_Oper(float32 MotKeNom, float32 MotRNom)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetMotPrmNomEol1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SetMotRplCoggPrm_Oper(uint16 CoggOrder1_Arg, s1p14 CoggOrder1X_Arg, s1p14 CoggOrder1Y_Arg, uint16 CoggOrder2_Arg, s1p14 CoggOrder2X_Arg, s1p14 CoggOrder2Y_Arg, uint16 CoggOrder3_Arg, s1p14 CoggOrder3X_Arg, s1p14 CoggOrder3Y_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetMotTqCmdSca_Oper(float32 MotTqCmdSca_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetPullCmpLongTerm_Oper(float32 PullCmpLongTerm_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetPullCmpShoTerm_Oper(float32 PullCmpShoTerm_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetYawRateOffs_Oper(float32 VehYawRateOffs_Arg, boolean VehYawRateLrngStRst_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_StopCtrl_Oper(float32 MotVelCtrlVelSlewRate_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_StrtCtrl_Oper(float32 MotVelCtrlMotVelTar_Arg, float32 MotVelCtrlVelSlewRate_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SwCalGetPrm_Oper(float32 *BoostModlnIdx_Arg, float32 *HldModlnIdx_Arg, float32 *CoolDwnModlnIdx_Arg, uint8 *Ramp1Ti_Arg, uint8 *Ramp2Ti_Arg, uint8 *Ramp3Ti_Arg, uint8 *BoostTi_Arg, uint16 *HldTi_Arg, uint16 *CoolDwnTi_Arg, u0p16 *PosnStepSize_Arg, uint8 *ElecRevCnt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SwCalSetPrm_Oper(float32 BoostModlnIdx_Arg, float32 HldModlnIdx_Arg, float32 CoolDwnModlnIdx_Arg, uint8 Ramp1Ti_Arg, uint8 Ramp2Ti_Arg, uint8 Ramp3Ti_Arg, uint8 BoostTi_Arg, uint16 HldTi_Arg, uint16 CoolDwnTi_Arg, u0p16 PosnStepSize_Arg, uint8 ElecRevCnt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SwCalSetPrm_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_SwCalStop_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SwCalStrt_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_UpdErrInjReg_Oper(uint16 NtcNr_Arg, uint8 NtcStInfo_Arg, uint8 ErrInjNr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_UpdHwAgTrimVal_Oper(uint8 *UpdHwAgTrimValSrvResp_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvmCcaHwPartNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmCcaSerlNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmDiRestore_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmEpsSysSerlNr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmIgnCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgEnaCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgTmpBuf0_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgTmpBuf1_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgTmpBuf2_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgTmpBuf3_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgTmpBuf4_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmSeedKey_EraseBlock(void)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmSeedKey_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmSeedKey_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_Defs_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, uint16 *CmnMfgSrvCmnMfgSrvRespLen, uint8 *CmnMfgSrvCmnMfgSrvRespCod)
 *
 *********************************************************************************************************************/

FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvCmnMfgSrvMaiFct_Oper(uint8 CmnMfgSrvCmnMfgSrvSrvId, uint8 CmnMfgSrvCmnMfgSrvSubFct, uint16 CmnMfgSrvCmnMfgSrvPrmId, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvReqLen, P2VAR(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvRespLen, P2VAR(uint8, AUTOMATIC, RTE_CMNMFGSRV_APPL_VAR) CmnMfgSrvCmnMfgSrvRespCod) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CmnMfgSrvCmnMfgSrvMaiFct_Oper
 *********************************************************************************************************************/

	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum;
	VAR(uint16, AUTOMATIC) PidTbl_Cnt_T_u16[PIDTBLLEN_CNT_U08];
	VAR(uint8, AUTOMATIC) PidCnt_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) PidIdx_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) Step_Cnt_T_u08;
	P2VAR(MfgSrvTblRec, AUTOMATIC, AUTOMATIC) SrvPtr_Cnt_T_rec;

	/* No data to be returned unless the service is actually executed, so start with zero response length */
	*Rte_Pim_ReqLen() = CmnMfgSrvCmnMfgSrvReqLen;
	*CmnMfgSrvCmnMfgSrvRespLen = 0U;

	/* Only type 0x22 read services, session control and tester preset services are allowed once the MEC reaches zero.
	 * Block everything else with NRC 0x22 - Conditions not Correct.
	 */
	if ((*Rte_Pim_NxtrMfgEnaCntr() == MECHARDLOCK_CNT_U08) &&
		(CmnMfgSrvCmnMfgSrvSrvId != 0x10U) &&
		(CmnMfgSrvCmnMfgSrvSrvId != 0x22U) &&
		(CmnMfgSrvCmnMfgSrvSrvId != 0x2AU) &&
		(CmnMfgSrvCmnMfgSrvSrvId != 0x3EU))
	{
		RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
	}
	else
	{
		/* Parse a list of service PIDs (if more than one was provided) for 0x22 and 0x2A services. */
		RespCod_Cnt_T_enum = LoadPidTbl(
				CmnMfgSrvCmnMfgSrvSrvId,
				CmnMfgSrvCmnMfgSrvPrmId,
				&CmnMfgSrvCmnMfgSrvReqLen,
				CmnMfgSrvCmnMfgSrvDataBufferPtr,
				PidTbl_Cnt_T_u16,
				&PidCnt_Cnt_T_u08
		);

		/* For each PID in the request table... */
		for (PidIdx_Cnt_T_u08 = 0U;
		    ((PidIdx_Cnt_T_u08 < PidCnt_Cnt_T_u08) && (RespCod_Cnt_T_enum == MFGSRVNRCPOSRSP));
			PidIdx_Cnt_T_u08 += 1U)
		{
			for (Step_Cnt_T_u08 = MAIFCTSTEPLOOKUP_CNT_U08;
			    ((Step_Cnt_T_u08 <= MAIFCTSTEPPROCRSP_CNT_U08) && (RespCod_Cnt_T_enum == MFGSRVNRCPOSRSP));
				Step_Cnt_T_u08 += 1U)
			{
				/* For each cycle after the first, append the PID to the buffer before the data. */
				if (PidIdx_Cnt_T_u08 > 0U)
				{
					CmnMfgSrvFct_Decompose16(PidTbl_Cnt_T_u16[PidIdx_Cnt_T_u08], CmnMfgSrvCmnMfgSrvDataBufferPtr);
					CmnMfgSrvCmnMfgSrvDataBufferPtr += 2;
				}

				switch (Step_Cnt_T_u08)
				{
					case MAIFCTSTEPLOOKUP_CNT_U08:
						/* Perform service lookup */
						RespCod_Cnt_T_enum = PerfLookup(
								CmnMfgSrvCmnMfgSrvSrvId,
								CmnMfgSrvCmnMfgSrvSubFct,
								PidTbl_Cnt_T_u16[PidIdx_Cnt_T_u08],
								&SrvPtr_Cnt_T_rec
						);
						break;
					case MAIFCTSTEPLEN_CNT_U08:
						/* Check request length against configured length */
						RespCod_Cnt_T_enum = PerfLenChk(SrvPtr_Cnt_T_rec, CmnMfgSrvCmnMfgSrvReqLen);
						break;
					case MAIFCTSTEPENVCHK_CNT_U08:
						/* Check environmental conditions */
						RespCod_Cnt_T_enum = PerfEnvChk(SrvPtr_Cnt_T_rec);
						break;
					case MAIFCTSTEPCALLSRV_CNT_U08:
						/* Invoke the service */
						RespCod_Cnt_T_enum = PerfSrv(
								SrvPtr_Cnt_T_rec,
								&CmnMfgSrvCmnMfgSrvDataBufferPtr,
								CmnMfgSrvCmnMfgSrvRespLen
						);
						break;
					case MAIFCTSTEPPROCRSP_CNT_U08:
						/* Process the response code */
						RespCod_Cnt_T_enum = ProcRspCod(SrvPtr_Cnt_T_rec, CmnMfgSrvCmnMfgSrvSubFct);
						/* This should be the last step in the sequence as it may alter the positive response
						 * code in a good way but will cause the step loop to terminate. */
						break;
					default:
						/* Unexpected - should never reach this point as the steps are hard coded. */
						break;
				}
			}
		}
	}

	*CmnMfgSrvCmnMfgSrvRespCod = (uint8)RespCod_Cnt_T_enum;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmnMfgSrvInit1
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
 *   Std_ReturnType Rte_Write_IgnCntr_Val(uint32 data)
 *   Std_ReturnType Rte_Write_MfgEnaSt_Val(MfgEnaSt1 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(const uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen)
 *     Synchronous Server Invocation. Timeout: None
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_NvmIgnCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_NvmMfgEnaCntr_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CmnMfgSrvInit1
 *********************************************************************************************************************/

	VAR(MfgEnaSt1, AUTOMATIC) MfgEnaSt_Cnt_T_enum;
	VAR(McuDiagc1, AUTOMATIC) RstSrc_Cnt_T_enum;
	VAR(uint8, AUTOMATIC) DataBuf_Cnt_T_u08[2U];

	/* ============================================================================================================== */
	/* Ignition Cycle Counter Processing */
	/* -------------------------------------------------------------------------------------------------------------- */
	/* Increment the ignition counter */
	if (*Rte_Pim_IgnCntr() < 0xFFFFFFFFU)
	{
		*Rte_Pim_IgnCntr() += 1U;
		(void)Rte_Call_NvmIgnCntr_SetRamBlockStatus(TRUE);
	}
	(void)Rte_Write_IgnCntr_Val(*Rte_Pim_IgnCntr());


#if (CMNMFGSRVNXTRMFGENACNTRUNLCK == STD_ON)
	*Rte_Pim_NxtrMfgEnaCntr() = 0xFEU;
	(void)Rte_Call_NvmMfgEnaCntr_SetRamBlockStatus(TRUE);
#else
	/* Decrement the Nexteer MEC counter */
	if ((*Rte_Pim_NxtrMfgEnaCntr() > 0x00U) && (*Rte_Pim_NxtrMfgEnaCntr() != 0xFFU))
	{
		*Rte_Pim_NxtrMfgEnaCntr() -= 1U;
		(void)Rte_Call_NvmMfgEnaCntr_SetRamBlockStatus(TRUE);
	}
#endif


	if (*Rte_Pim_NxtrMfgEnaCntr() <= MECPRDNMODTHD_CNT_U08)
	{
		MfgEnaSt_Cnt_T_enum = MFGENAST_PRDNMOD;
	}
	else if (*Rte_Pim_NxtrMfgEnaCntr() == MECTESTMOD_CNT_U08)
	{
		MfgEnaSt_Cnt_T_enum = MFGENAST_TESTMOD;
	}
	else
	{
		MfgEnaSt_Cnt_T_enum = MFGENAST_MFGMOD;
	}
	(void)Rte_Write_MfgEnaSt_Val(MfgEnaSt_Cnt_T_enum);


	/* When not in production mode...*/
	if (MfgEnaSt_Cnt_T_enum != MFGENAST_PRDNMOD)
	{
		/* Restore the previously stored disables so long as the NMEC is non-zero */
		CmnMfgSrv_SynthesizeDiBits(Rte_Pim_DiRestore());

		/* Unlock the controller so seed/key is not required for access */
		*Rte_Pim_SecuAcsUnlckd() = TRUE;
	}


	/* Check if the reset cause was a hard or soft reset request */
	GetMcuDiagcIdnData(&RstSrc_Cnt_T_enum);
	if ((RstSrc_Cnt_T_enum == MCUDIAGC_SOFTRST) || (RstSrc_Cnt_T_enum == MCUDIAGC_HARDRST))
	{
		/* Return a positive response for the reset service */
		DataBuf_Cnt_T_u08[0U] = 0x51U;
		DataBuf_Cnt_T_u08[1U] = (RstSrc_Cnt_T_enum == MCUDIAGC_HARDRST) ? 0x61U : 0x60U;
		(void)Rte_Call_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(DataBuf_Cnt_T_u08, 2U);

		/* Set the current session to Nexteer session (needed to issue this reset request) and reset session timer */
		*Rte_Pim_SessionCurr() = CMFMFGSRVNXTRSESSION_CNT_U08;
		(void)Rte_Call_GetRefTmr100MicroSec32bit1_Oper(Rte_Pim_SessionTiOut());
	}


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: CmnMfgSrvPer1
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
 *   Std_ReturnType Rte_Read_BrdgVltg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_EcuTFild_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg0_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwAg1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq0_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq1_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq2_Val(float32 *data)
 *   Std_ReturnType Rte_Read_HwTq3_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotAg0Mecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAg1Mecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAg2Mecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotAgCumvAlgndMrf_Val(sint32 *data)
 *   Std_ReturnType Rte_Read_MotAgMecl_Val(uint16 *data)
 *   Std_ReturnType Rte_Read_MotCurrDax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQax_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *   Std_ReturnType Rte_Read_PinionAg_Val(float32 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_AssiMechTEstimnDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DampgCmdBasDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_DutyCycThermProtnDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_EotProtnDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_FricLrngDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_HysCmpCmdDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_InertiaCmpVelCmdDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_LoaScaDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_MfgDiagcInhb_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PullCmpCmdDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_PullCmpLrngDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_RtnCmdDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_StallMotTqLimDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SysMotTqCmdRampRateDi_Logl(boolean data)
 *   Std_ReturnType Rte_Write_SysStReqEnaOvrd_Logl(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit1_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_SetManTqCmd_Oper(float32 ManTqCmd, boolean ManTqCmdEna)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetManTqCmd1_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, CmnMfgSrv_CODE) CmnMfgSrvPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: CmnMfgSrvPer1
 *********************************************************************************************************************/

	VAR(uint32, AUTOMATIC) ElapsedTime_100uS_T_u32;
	/* Buffer length calculation:
	 * - Positive response: 1 byte
	 * - Maximum of 16 PIDs, each with:
	 *     - ID: 1 byte
	 *     - Data: maximum of 4 bytes (but possibly less)
	 */
	VAR(uint8, AUTOMATIC) DataBuf_Cnt_T_u08[81];
	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
	P2VAR(uint8, AUTOMATIC, AUTOMATIC) DataBufPtr_Cnt_T_u08;
	P2VAR(MfgSrvTblRec, AUTOMATIC, AUTOMATIC) SrvPtr_Cnt_T_rec;
	VAR(uint16, AUTOMATIC) RespLen_Cnt_T_u16;
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum;

	if (*Rte_Pim_SessionCurr() != CMFMFGSRVDFLTSESSION_CNT_U08)
	{
		(void)Rte_Call_GetTiSpan100MicroSec32bit1_Oper(*Rte_Pim_SessionTiOut(), &ElapsedTime_100uS_T_u32);

		if (ElapsedTime_100uS_T_u32 > CMNMFGSRVSESSIONTIOUT_100US_U32)
		{
			*Rte_Pim_SessionCurr() = CMFMFGSRVDFLTSESSION_CNT_U08;
		}
	}

	/* Determine if a periodic DID is enabled. */
	if (*Rte_Pim_PerRunng() == TRUE)
	{
		/* See if it's time to send another sample. */
		if (*Rte_Pim_PerCyc() == 0U)
		{
			/* Reload the counter for the next transmission once all of the PDIDs have been transmitted. */
			*Rte_Pim_PerCyc() = *Rte_Pim_PerDivdr();

			/* The first byte in the buffer will always be 0x6A indicating a positive response for the 0x2A service
			 * that started the periodic processing. */
			DataBuf_Cnt_T_u08[0] = 0x6AU;

			/* Initialize the response length for the first byte. */
			RespLen_Cnt_T_u16 = 1U;

			/* Loop until we reach the end of the list or there's a transmission error. */
			for (Idx_Cnt_T_u08 = 0U; Idx_Cnt_T_u08 < *Rte_Pim_PerPidTblLen(); Idx_Cnt_T_u08 += 1U)
			{
				/* Lookup the service as if it were a type 0x22 read. */
				RespCod_Cnt_T_enum = PerfLookup(0x22U, 0xFFU, Rte_Pim_PerPidTbl()[Idx_Cnt_T_u08], &SrvPtr_Cnt_T_rec);

				/* Only proceed if the service was found - if not then move on and ignore this PID. */
				if (RespCod_Cnt_T_enum == MFGSRVNRCPOSRSP)
				{
					/* Insert the ID number corresponding to this PID.  This is only the lower byte of what would
					 * otherwise be a type 0x22 service (for example, a read of 0xF201 this byte would be 0x01). */
					DataBuf_Cnt_T_u08[RespLen_Cnt_T_u16] = (uint8)(Rte_Pim_PerPidTbl()[Idx_Cnt_T_u08] & 0xFFU);
					RespLen_Cnt_T_u16 += 1U;

					/* Call the same service function that would be called on a 0x22 read operation to populate the
					 * buffer with data for this PID. */
					DataBufPtr_Cnt_T_u08 = &DataBuf_Cnt_T_u08[RespLen_Cnt_T_u16];
					(void)PerfSrv(SrvPtr_Cnt_T_rec, &DataBufPtr_Cnt_T_u08, &RespLen_Cnt_T_u16);
				}
			}

			(void)Rte_Call_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(DataBuf_Cnt_T_u08, RespLen_Cnt_T_u16);
		}
		else
		{
			/* Not time yet, decrement the counter. */
			*Rte_Pim_PerCyc() -= 1U;
		}
	}

	(void)Rte_Write_AssiMechTEstimnDi_Logl(*Rte_Pim_DiAssiMechTEstimn());
	(void)Rte_Write_DampgCmdBasDi_Logl(*Rte_Pim_DiDampg());
	(void)Rte_Write_EotProtnDi_Logl(*Rte_Pim_DiEotProtn());
	(void)Rte_Write_HysCmpCmdDi_Logl(*Rte_Pim_DiHysCmp());
	(void)Rte_Write_InertiaCmpVelCmdDi_Logl(*Rte_Pim_DiInertiaCmp());
	(void)Rte_Write_MfgDiagcInhb_Logl(*Rte_Pim_MfgDiagcInhb());
	(void)Rte_Write_PullCmpCmdDi_Logl(*Rte_Pim_DiPullCmpActvCmd());
	(void)Rte_Write_PullCmpLrngDi_Logl(*Rte_Pim_DiPullCmpActvLrng());
	(void)Rte_Write_RtnCmdDi_Logl(*Rte_Pim_DiRtn());
	(void)Rte_Write_StallMotTqLimDi_Logl(*Rte_Pim_DiStallMotTqLim());
	(void)Rte_Write_SysStReqEnaOvrd_Logl(*Rte_Pim_SysStReqEnaOvrd());
	(void)Rte_Write_DutyCycThermProtnDi_Logl(*Rte_Pim_DiDutyCycThermProtn());
	(void)Rte_Write_SysMotTqCmdRampRateDi_Logl(*Rte_Pim_DiSysMotTqCmdRampRate());
	(void)Rte_Write_FricLrngDi_Logl(*Rte_Pim_DiSysFricLrng());
	(void)Rte_Write_LoaScaDi_Logl(*Rte_Pim_DiLoaSca());

#if (CMNMFGSRVNXTRMFGENACNTRUNLCK == STD_ON)
	/* The following forces the torque command to a zero value which is intentional to remove assist when the
	 * CMNMFGSRVNXTRMFGENACNTRUNLCK build switch is set to STD_ON.  The manual torque command service was selected
	 * because CmnMfgSrv already owned that "output" and there should never be overlap with other functionality.
	 */
	(void)Os_CallNonTrustedFunction(NtWrapS_CmnMfgSrv_DiAssi, NULL_PTR);
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SwCalStsCallBack_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SwCalStsCallBack>
 *
 **********************************************************************************************************************
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(const uint8 *CmnMfgSrvCmnMfgSrvDataBufferPtr, uint16 CmnMfgSrvCmnMfgSrvDataLen)
 *     Synchronous Server Invocation. Timeout: None
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, const uint16 *SnsrData_Arg)
 *
 *********************************************************************************************************************/

#ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(void, CmnMfgSrv_CODE) SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, P2CONST(uint16, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) SnsrData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#else
FUNC(void, CmnMfgSrv_CODE) SwCalStsCallBack_Oper(uint8 ElecRev_Arg, uint16 PosIdx_Arg, P2CONST(Ary1D_u16_12, AUTOMATIC, RTE_CMNMFGSRV_APPL_DATA) SnsrData_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
#endif
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SwCalStsCallBack_Oper
 *********************************************************************************************************************/

	VAR(uint8, AUTOMATIC) Idx_Cnt_T_u08;
	VAR(uint8, AUTOMATIC) DataBuf_Cnt_T_u08[31];

	DataBuf_Cnt_T_u08[0] = 0x71U;
	DataBuf_Cnt_T_u08[1] = 0x03U;
	DataBuf_Cnt_T_u08[2] = 0xFDU;
	DataBuf_Cnt_T_u08[3] = 0xC2U;
	DataBuf_Cnt_T_u08[4] = ElecRev_Arg;
	CmnMfgSrvFct_Decompose16(PosIdx_Arg, &DataBuf_Cnt_T_u08[5]);
	for (Idx_Cnt_T_u08 = 0U;  Idx_Cnt_T_u08 < 12U; Idx_Cnt_T_u08++)
	{
		CmnMfgSrvFct_Decompose16((uint16)SnsrData_Arg[Idx_Cnt_T_u08], &DataBuf_Cnt_T_u08[(Idx_Cnt_T_u08 * 2U) + 7U]);
	}
	(void)Rte_Call_CmnMfgSrvIfCmnMfgSrvIfImdtTx_Oper(DataBuf_Cnt_T_u08, 31U);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CmnMfgSrv_STOP_SEC_CODE
#include "CmnMfgSrv_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  LoadPidTbl
 * Description:  Load a table of PIDs to execute.  This may be as few as one in most cases but for type 22 service can
 *               be greater.
 *      Inputs:  SrvId_Cnt_T_u08 : Service type ID as input from the CAN bus.
 *               PrmId_Cnt_T_u16 : Service PID as input from the CAN bus (used to initialize the table with it's first
 *               entry.
 *               ReqLenPtr_Cnt_T_u16 : Number of bytes in the data buffer - used to determine how many additional PIDs
 *               reside in it.
 *               DataBuf_Cnt_T_u08 : Pointer to the buffer containing additional PIDs in the instance where more than
 *               one PID is supported.  Ignored if only one PID is supported by service type.
 *               PidTbl_Cnt_T_u16 : Pointer to the table to be populated with PID data.
 *               PidCntPtr_Cnt_T_u08 : Pointer to the counter that will be updated to match the number of PIDs parsed
 *               from the data buffer or one if no additional PIDs were found.
 *     Outputs:  RespCod_Cnt_T_enum : Positive or negative response code indicating if a problem was found during the
 *               construction of the table related to length issues.
 * Usage Notes:  None
 * ------------------------------------------------------------------------------------------------------------------ */
static FUNC(NegRespCodEnum, CmnMfgSrv_CODE) LoadPidTbl(
		VAR(uint8, AUTOMATIC) SrvId_Cnt_T_u08,
		VAR(uint16, AUTOMATIC) PrmId_Cnt_T_u16,
		P2VAR(uint16, AUTOMATIC, AUTOMATIC) ReqLenPtr_Cnt_T_u16,
		VAR(uint8, AUTOMATIC) DataBuf_Cnt_T_u08[],
		VAR(uint16, AUTOMATIC) PidTbl_Cnt_T_u16[],
		P2VAR(uint8, AUTOMATIC, AUTOMATIC) PidCntPtr_Cnt_T_u08
)
{
	VAR(uint8, AUTOMATIC) Offs_Cnt_T_u08 = 0U;
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	/* We know we have at least one PID to begin with so populate the table with that. */
	PidTbl_Cnt_T_u16[0] = PrmId_Cnt_T_u16;
	*PidCntPtr_Cnt_T_u08 = 1U;

	/* Parse additional PIDs for type 0x22 services. */
	if ((*ReqLenPtr_Cnt_T_u16 > 0U) && (SrvId_Cnt_T_u08 == 0x22U))
	{
		/* If more than one 0x22 PID is given, they must be 16-bit IDs. */
		if (((*ReqLenPtr_Cnt_T_u16 % 2U) != 0U) || (*ReqLenPtr_Cnt_T_u16 > (2U * (PIDTBLLEN_CNT_U08 - 1U))))
		{
			RespCod_Cnt_T_enum = MFGSRVNRCINCORRECTLENGTH;
		}
		else
		{
			while (*ReqLenPtr_Cnt_T_u16 > 0U)
			{
				PidTbl_Cnt_T_u16[*PidCntPtr_Cnt_T_u08] = CmnMfgSrvFct_Synthesize16(&DataBuf_Cnt_T_u08[Offs_Cnt_T_u08]);
				Offs_Cnt_T_u08 += 2U;
				*PidCntPtr_Cnt_T_u08 += 1U;
				*ReqLenPtr_Cnt_T_u16 -= 2U;
			}
		}
	}

	return RespCod_Cnt_T_enum;
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  PerfLookup
 * Description:  Perform a sequential search lookup for the requested service.  If the service exists, the index is
 *               returned, if the service does not exist, then the appropriate negative response code is returned.
 *      Inputs:  SrvTyp_Cnt_T_u08 : Service type (i.e. 0x22, 0x2E, 0x2F, 0x31, etc.)
 *               SubTyp_Cnt_T_u08 : Service sub-function (specific to service type - 0x01, 0x02, 0x03, 0x04, etc.).
 *               SrvId_Cnt_T_u16  : Service ID number as defined by Manufacturing Services Specification.
 *     Outputs:  SrcPtr_Cnt_T_u16   : Pointer to the service located in the lookup table.
 *               RespCod_Cnt_T_enum : Negative/positive response code indicating success/failure of lookup.  Success
 *                                    indicated by positive response (0x00).
 * ------------------------------------------------------------------------------------------------------------------ */
static FUNC(NegRespCodEnum, CmnMfgSrv_CODE) PerfLookup(
		VAR(uint8, AUTOMATIC) SrvTyp_Cnt_T_u08,
		VAR(uint8, AUTOMATIC) SubTyp_Cnt_T_u08,
		VAR(uint16, AUTOMATIC) SrvId_Cnt_T_u16,
		P2VAR(MfgSrvTblRec, AUTOMATIC, AUTOMATIC) *SrvPtrPtr_Cnt_T_rec
)
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum;
	VAR(boolean, AUTOMATIC) TypeFound_Cnt_T_lgc = FALSE;
	VAR(boolean, AUTOMATIC) IdFound_Cnt_T_lgc = FALSE;
	VAR(boolean, AUTOMATIC) SubFound_Cnt_T_lgc = FALSE;
	VAR(uint16, AUTOMATIC) Idx_Cnt_T_u16;

	/* Mask off upper bit  of sub-function (used to suppress positive responses) */
	SubTyp_Cnt_T_u08 &= 0x7Fu;

	for (Idx_Cnt_T_u16 = 0U;
		((Idx_Cnt_T_u16 < TblSize_m(CmnMfgSrv_MfgSrvTbl_Cnt_str)) && (SubFound_Cnt_T_lgc == FALSE));
		Idx_Cnt_T_u16 += 1U)
	{
		if (CmnMfgSrv_MfgSrvTbl_Cnt_str[Idx_Cnt_T_u16].SvcTyp == SrvTyp_Cnt_T_u08)
		{
			TypeFound_Cnt_T_lgc = TRUE;

			if ((CmnMfgSrv_MfgSrvTbl_Cnt_str[Idx_Cnt_T_u16].SvcId == 0xFFFFU) ||
				(CmnMfgSrv_MfgSrvTbl_Cnt_str[Idx_Cnt_T_u16].SvcId == SrvId_Cnt_T_u16))
			{
				IdFound_Cnt_T_lgc = TRUE;

				if ((CmnMfgSrv_MfgSrvTbl_Cnt_str[Idx_Cnt_T_u16].SubFct == 0xFFU) ||
					(CmnMfgSrv_MfgSrvTbl_Cnt_str[Idx_Cnt_T_u16].SubFct == SubTyp_Cnt_T_u08))
				{
					SubFound_Cnt_T_lgc = TRUE;
					*SrvPtrPtr_Cnt_T_rec = (MfgSrvTblRec*)&CmnMfgSrv_MfgSrvTbl_Cnt_str[Idx_Cnt_T_u16];
				}
			}
		}
	}

	if (TypeFound_Cnt_T_lgc == FALSE)
	{
		/* If there wasn't even a match for the service type, then this service REALLY isn't supported */
		RespCod_Cnt_T_enum = MFGSRVNRCSERVICENOTSUPPORTED;
	}
	else if (IdFound_Cnt_T_lgc == FALSE)
	{
		/* This is the case when the service ID simply isn't in the table */
		RespCod_Cnt_T_enum = MFGSRVNRCSERVICENOTSUPPORTED;
	}
	else if (SubFound_Cnt_T_lgc == FALSE)
	{
		/* We get here if a sub function is important, and the requested sub function isn't supported */
		RespCod_Cnt_T_enum = MFGSRVNRCSUBFUNCNOTSUPPORTED;
	}
	else
	{
		RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	}

	return RespCod_Cnt_T_enum;
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  PerfLenChk
 * Description:  Perform a length check for the specified service.
 *      Inputs:  SrvPtr_Cnt_T_rec : Pointer to the service configuration in the lookup table.
 *               ReqLen_Cnt_T_u16 : Length of data in the request as supplied by Com driver.
 *     Outputs:  RespCod_Cnt_T_enum : Negative/positive response code indicating success/failure of check.  Success
 *                                    indicated by positive response (0x00).
 * Usage Notes:  None
 * ------------------------------------------------------------------------------------------------------------------ */
static FUNC(NegRespCodEnum, CmnMfgSrv_CODE) PerfLenChk(
		P2VAR(MfgSrvTblRec, AUTOMATIC, AUTOMATIC) SrvPtr_Cnt_T_rec,
		VAR(uint16, AUTOMATIC) ReqLen_Cnt_T_u16
)
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	if ((SrvPtr_Cnt_T_rec->ReqLen != 0xFFFFU) && (SrvPtr_Cnt_T_rec->ReqLen != ReqLen_Cnt_T_u16))
	{
		RespCod_Cnt_T_enum = MFGSRVNRCINCORRECTLENGTH;
	}

	return RespCod_Cnt_T_enum;
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  PerfEnvChk
 * Description:  Perform a series of configurable "environmental" condition checks for the specified service.
 *      Inputs:  SrvPtr_Cnt_T_rec : Pointer to the service configuration in the lookup table.
 *     Outputs:  RespCod_Cnt_T_enum : Negative/positive response code indicating success/failure of check(s).  Success
 *                                    indicated by positive response (0x00), failure indicated by specific negative
 *                                    response code.
 * Usage Notes:  None
 * ------------------------------------------------------------------------------------------------------------------ */
static FUNC(NegRespCodEnum, CmnMfgSrv_CODE) PerfEnvChk(P2VAR(MfgSrvTblRec, AUTOMATIC, AUTOMATIC) SrvPtr_Cnt_T_rec)
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	if (SrvPtr_Cnt_T_rec->Chk.NxtrSession == 1U)
	{
		if (*Rte_Pim_SessionCurr() != CMFMFGSRVNXTRSESSION_CNT_U08)
		{
			RespCod_Cnt_T_enum = MFGSRVNRCSERVICENOTINSESSION;
		}
	}

	if (SrvPtr_Cnt_T_rec->Chk.SecuAcs == 1U)
	{
		if (*Rte_Pim_SecuAcsUnlckd() != TRUE)
		{
			RespCod_Cnt_T_enum = MFGSRVNRCSECURITYACCESSDENIED;
		}
	}

	return RespCod_Cnt_T_enum;
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  PerfSrv
 * Description:  Perform a service function.  This is the meat and potatoes of any given service.
 *      Inputs:  SrvPtr_Cnt_T_rec : Pointer to the service configuration in the lookup table.
 *               DataBufPtr_Cnt_T_u08 : Pointer to an array for reading/writing data either in or out of the service.
 *     Outputs:  RespCod_Cnt_T_enum : Positive or negative response code indicating if the service was successful.
 *               RespLenPtr_Cnt_T_u16 : Pointer to the response length to be update upon successful completion of the
 *               service.
 * Usage Notes:  All environmental and length checks should be performed before calling this function.
 * ------------------------------------------------------------------------------------------------------------------ */
static FUNC(NegRespCodEnum, CmnMfgSrv_CODE) PerfSrv(
		P2VAR(MfgSrvTblRec, AUTOMATIC, AUTOMATIC) SrvPtr_Cnt_T_rec,
		P2VAR(uint8, AUTOMATIC, AUTOMATIC) DataBufPtr_Cnt_T_u08[],
		P2VAR(uint16, AUTOMATIC, AUTOMATIC) RespLenPtr_Cnt_T_u16
)
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;
	VAR(uint16, AUTOMATIC) Offset_Cnt_T_u16;
	VAR(NtMfgSrvRec, AUTOMATIC) Prm_Cnt_T_str;
	VAR(NonTrustdFctApplIdxRec, AUTOMATIC) NonTrustdFctIdx_Cnt_T_Rec;

	/* Tester present is setup to not call a function - it should simply reset the timer */
	if (SrvPtr_Cnt_T_rec->SvcFunc != 0U)
	{
		/* Empty the buffer for outgoing data without overwriting incoming data */
		for (Offset_Cnt_T_u16 = SrvPtr_Cnt_T_rec->ReqLen;
			Offset_Cnt_T_u16 < SrvPtr_Cnt_T_rec->RespLen;
			Offset_Cnt_T_u16 += 1U)
		{
			(*DataBufPtr_Cnt_T_u08)[Offset_Cnt_T_u16] = 0U;
		}

		if (SrvPtr_Cnt_T_rec->Appl < TblSize_m(CmnMfgSrvCfg_NonTrustdFctPtrTbl))
		{
			NonTrustdFctIdx_Cnt_T_Rec = CmnMfgSrvCfg_NonTrustdFctPtrTbl[SrvPtr_Cnt_T_rec->Appl];

			/* If the configured application is 0xFF (don't care) or the current application matches the
			 * requested application then invoke the service without issuing a non-trusted function call.
			 */
			if (NonTrustdFctIdx_Cnt_T_Rec.ApplIdn == (uint8)GetApplicationID())
			{
				/* Call service function directly, without switching contexts */
				RespCod_Cnt_T_enum = SrvPtr_Cnt_T_rec->SvcFunc(*DataBufPtr_Cnt_T_u08);
			}
			else
			{
				/* Perform an application context switch before calling the service function */
				if (NonTrustdFctIdx_Cnt_T_Rec.NonTrustdFctIdx != 0xFFFFU)
				{
					Prm_Cnt_T_str.SrvFct = SrvPtr_Cnt_T_rec->SvcFunc;
					Prm_Cnt_T_str.DataBuf = *DataBufPtr_Cnt_T_u08;
					CmnMfgSrvRetBuf_G = MFGSRVNRCPOSRSP;
					(void)Os_CallNonTrustedFunction(
							(Os_NonTrustedFunctionIndexType)NonTrustdFctIdx_Cnt_T_Rec.NonTrustdFctIdx,
							&Prm_Cnt_T_str
					);
					RespCod_Cnt_T_enum = CmnMfgSrvRetBuf_G;
				}
				else
				{
					RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
				}
			}
		}
		else
		{
			RespCod_Cnt_T_enum = MFGSRVNRCCONDITIONSNOTCORRECT;
		}
	}

	/* Reset the session timer for all valid service requests. */
	(void)Rte_Call_GetRefTmr100MicroSec32bit1_Oper(Rte_Pim_SessionTiOut());

	/* Set the proper response length now that the service has been run, use addition
	 * to support 0x22 services with more than one PID requested. */
	*RespLenPtr_Cnt_T_u16 += SrvPtr_Cnt_T_rec->RespLen;

	/* Move the response buffer pointer forward the number of bytes in this response to allow
	 * additional PIDs (if any) to append their data to the buffer. */
	*DataBufPtr_Cnt_T_u08 += SrvPtr_Cnt_T_rec->RespLen;

	return RespCod_Cnt_T_enum;
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  ProcRspCod
 * Description:  Perform a check to determine if the positive response should be suppressed for this service request.
 *      Inputs:  SrvPtr_Cnt_T_rec : Pointer to the service configuration in the lookup table.
 *               SubFct_Cnt_T_u08 : Sub-function request as input from the CAN bus possibly with MSB set.
 *     Outputs:  RespCod_Cnt_T_enum : Either a positive response code should a response be returned or a special code
 *               indicating suppression should the response be suppressed.
 * Usage Notes:  It is expected that if this function is called the response is already positive up until that point.
 * ------------------------------------------------------------------------------------------------------------------ */
static FUNC(NegRespCodEnum, CmnMfgSrv_CODE) ProcRspCod(
		P2VAR(MfgSrvTblRec, AUTOMATIC, AUTOMATIC) SrvPtr_Cnt_T_rec,
		VAR(uint8, AUTOMATIC) SubFct_Cnt_T_u08
)
{
	VAR(NegRespCodEnum, AUTOMATIC) RespCod_Cnt_T_enum = MFGSRVNRCPOSRSP;

	/* If sub function is supported, suppress a positive response if requested */
	if ((SubFct_Cnt_T_u08 != 0xFFu) &&
		((SubFct_Cnt_T_u08 & 0x80u) != 0u))
	{
		RespCod_Cnt_T_enum = MFGSRVNRCSUPPRSP;
	}

	return RespCod_Cnt_T_enum;
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  NONTRUSTED_NtWrapS_CmnMfgSrvInit
 * Description:  Non Trusted function definition for CmnMfgSrvInit1 to be used on restart (quick ignition cycle).
 *      Inputs:  FunctionIndex : Index of the Non Trusted function
 *     Outputs:  FunctionParams : Empty - no parameters.
 * Usage Notes:  None
 * ------------------------------------------------------------------------------------------------------------------ */
FUNC(void, CmnMfgSrv_CODE) NONTRUSTED_NtWrapS_CmnMfgSrv_Init(
		Os_NonTrustedFunctionIndexType FunctionIndex,
		Os_NonTrustedFunctionParameterRefType FunctionParams)
{
	CmnMfgSrvInit1();
}

/* ---------------------------------------------------------------------------------------------------------------------
 *        Name:  NONTRUSTED_NtWrapS_CmnMfgSrvDiAssi
 * Description:  Non Trusted function definition to disable assist.  Intended for use with special build to restore the
 *               NMEC to non-zero value such that the build cannot be used as a production build for security reasons.
 *      Inputs:  FunctionIndex : Index of the Non Trusted function
 *     Outputs:  FunctionParams : Empty - no parameters.
 * Usage Notes:  None
 * ------------------------------------------------------------------------------------------------------------------ */
FUNC(void, CmnMfgSrv_CODE) NONTRUSTED_NtWrapS_CmnMfgSrv_DiAssi(
		Os_NonTrustedFunctionIndexType FunctionIndex,
		Os_NonTrustedFunctionParameterRefType FunctionParams)
{
	(void)Rte_Call_SetManTqCmd_Oper(0.0f, TRUE);
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
