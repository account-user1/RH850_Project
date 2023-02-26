/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_ExcpnHndlg.c
 *        Config:  E:/EA4NewTemplate/CM101B_ExcpnHndlg_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_ExcpnHndlg
 *  Generated at:  Mon Dec 11 17:43:29 2017
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_ExcpnHndlg>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_ExcpnHndlg.c
* Module Description: Implements the RTE functionality of CM101B Exception Handling RH850
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  ----------------------------------------------------------------------------- ---------
* 11/21/17  1        AJM       Initial Version                                                               EA4#12706,EA4#16355
* 03/11/18  2        AJM       Removed switch cases related to ECMCHKRSTRTUPFLT,FEINTRPTSTRTUPFLT,           EA4#21569
                               CHKRERROUTPCTRLFLT,CODFLSSNGBITHARDFLT.Updated ECMMSTSTRTUPFLT to 
                               ECMMSTCHKRSTRTUPFLT,MSTERROUTPCTRLFLT to MSTCHKRERROUTPCTRLFLT

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

#include "Rte_CDD_ExcpnHndlg.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "CDD_ExcpnHndlg.h"
#include "CDD_ExcpnHndlg_private.h"
#include "BIST_RegDefns.h"

/* MISRA-C:2004 Rule 1.1 [NXTRDEV 1.1.1]: Inline functions are used for Nexteer Mcu Support library functions to allow for throughput optimization */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for 
                                              Rte_Call_SetNtcSts_Oper(),Rte_Call_SetNtcStsAndSnpshtData_Oper() */


/* NtcStInfo values */

/* NTCNR_0X003 CodFlsHardFlt */
#define CODFLSECCDBLBITORADRPARERR_CNT_U08      ((uint8)2U)     /* bit 1 - Code Flash ECC Double Bit Detection or address parity error*/
#define CODFLSSEQERR_CNT_U08                    ((uint8)4U)     /* bit 2 - Code Flash Sequencer error */

/* NTCNR_0X010 MemBistStrtUpFlt */
#define MEMBISTSTRTUPTESTFAILR_CNT_U08          ((uint8)1U)     /* bit 0 - MBIST Startup Test Failure */

/* NTCNR_0X013 LclRamHardFlt */
#define LCLRAMECCDBLBIT_CNT_U08                 ((uint8)2U)     /* bit 1 - Local RAM ECC Double Bit (Hard Fault) */
#define GBLRAMECCDBLBIT_CNT_U08                 ((uint8)4U)     /* bit 2 - Global RAM ECC Double Bit (Hard Fault) */
#define GTMRAMRAMECCDBLBIT_CNT_U08              ((uint8)8U)     /* bit 3 - GTM RAM ECC Double Bit (Hard Fault) */
#define INVLDRAMAREA_CNT_U08                    ((uint8)128U)   /* bit 7 - Invalid RAM area access (Hard Fault) */

#define LCLRAMECCADROVFFLT_CNT_U08              ((uint8)1U)     /* bit 0 - Local Ram ecc error address overflow fault */
#define GLBRAMECCADROVFFLT_CNT_U08              ((uint8)2U)     /* bit 1 - Global Ram ecc error address overflow fault*/
#define CODFLSECCADROVFFLT_CNT_U08              ((uint8)4U)     /* bit 2 - Code flash ecc error address overflow fault */
#define FRRAMECCOVFFLT_CNT_U08                  ((uint8)8U)     /* bit 3 - Flex Ray Ram ecc error address overflow fault */
#define CSIHRAMECCOVFFLT_CNT_U08                ((uint8)16U)    /* bit 4 - CSIH Ram ecc error address overflow fault */
#define CANRAMECCOVFFLT_CNT_U08                 ((uint8)32U)    /* bit 5 - CAN Ram ecc error address overflow fault */
#define GTMRAMECCOVFFLT_CNT_U08                 ((uint8)64U)    /* bit 6 - GTM Ram ecc error address overflow fault */

/* NTCNR_0X015 Illegal Access */
#define GBLRAMILLGLACSBYPROCRFLT_CNT_U08        ((uint8)1U)     /* Global RAM Illegal Access by Processor */
#define CODFLSILLGLACSBYSYSBUSFLT_CNT_U08       ((uint8)2U)     /* Code flash illegal Access by system bus */
#define GBLRAMILLGLACSBYSYSBUS_CNT_U08          ((uint8)4U)     /* Global RAM Illegal Access by system bus */
#define RESDAREAILLGLACSBYHISPDBUS_CNT_U08      ((uint8)8U)     /* Reserved area Illegal Access by Hi Speed Bus */

/* NTCNR_0X016 DtsRamDblBitFlt */
#define DTSDBLBIT_CNT_U08                       ((uint8)2U)     /* bit 1 - DTS ECC Double Bit (Hard Fault) */

/* NTCNR_0X021 LoglBistStrtUpFlt */
#define BISTCODECCFAILR_CNT_U08                 ((uint8)1U)     /* bit 0 - BIST Code ECC Failure */
#define BISTNOTCMPL_CNT_U08                     ((uint8)2U)     /* bit 1 - BIST Not Complete */
#define LOGLBISTSTRTUPTESTFAILR_CNT_U08         ((uint8)4U)     /* bit 2 - LBIST Startup Test Failure */
#define FACIRSTTRFERR_CNT_U08                   ((uint8)128U)   /* bit 7 - FACI Reset Transfer Error  */

/* NTCNR_0X022 Runtime Fault - Includes lock step, alignment and reserved instruction */ 
#define LOCKSTEPCOMP_CNT_U08                    ((uint8)1U)     /* bit 0 - CPU Core Mis-compare */
#define PROCLOCKSTEPRTERR_CNT_U08               ((uint8)2U)     /* bit 1 - Processor Lock Step Error Run time Failure */
#define DMALOCKSTEPRTORGBLRAMWRBUFERR_CNT_U08   ((uint8)4U)     /* bit 2 - DMA Lock Step Error run time or Global Ram write through buffer Failure */
#define ALGNWR_CNT_U08                          ((uint8)8U)     /* bit 3 - Misalignment Exception - Write */
#define ALGNREAD_CNT_U08                        ((uint8)16U)    /* bit 4 - Misalignment Exception - Read */
#define RESDOPER_CNT_U08                        ((uint8)32U)    /* bit 5 - Reserved Instruction Exception */
#define CODFLSINSTRFETCH_CNT_U08                ((uint8)64U)    /* bit 6 - Double Bit ECC Error on Instruction Fetch  */
#define NONCODFLSINSTRFETCH_CNT_U08             ((uint8)128U)   /* bit 7 - Interconnect reserved area access fault  */

/* NTCNR_0X023 CClock Monitor Fault */
#define CLKMONR0RTFLT_CNT_U08                   ((uint8)1U)     /* bit 0 - Clock Monitor 0 Fault */
#define CLKMONR1RTFLT_CNT_U08                   ((uint8)2U)     /* bit 1 - Clock Monitor 1 Fault */
#define CLKMONR2RTFLT_CNT_U08                   ((uint8)4U)     /* bit 2 - Clock Monitor 2 Fault */
#define CLKMONR3RTFLT_CNT_U08                   ((uint8)8U)     /* bit 3 - Clock Monitor 3 Fault */ 
#define CLKMONR5RTFLT_CNT_U08                   ((uint8)32U)    /* bit 5 - Clock Monitor 5 Fault */ 

/* NTCNR_0X024 Mode Errors */
#define MODERRUSRMODINACTV_CNT_U08              ((uint8)1U)     /* bit 0 - User Mode Unintended Inactive */ 
#define MODERRPROGMMODACTV_CNT_U08              ((uint8)2U)     /* bit 1 - Unintended Programming Mode Active */ 
#define MODERRDBGACTV_CNT_U08                   ((uint8)4U)     /* bit 2 - Unintended Debug Mode Active */ 
#define MODERRTESTMODACTV_CNT_U08               ((uint8)8U)     /* bit 3 - Unintended Test Mode Active */ 

/* NTCNR_0X025 MemProtnFlt */
#define DATAANDINSTRPROTNERR_CNT_U08            ((uint8)1U)     /* bit 0 - MPU Violation (this covers MDP and MIP Exception) */
#define PRVLGDINSTREXCPN_CNT_U08                ((uint8)2U)     /* bit 1 - Privilege Instruction Execution */

/* NTCNR_0X026 EcmMstChkrFlt */
#define ECMMSTCHKRSTRTUPTESTFAILR_CNT_U08       ((uint8)1U)    /* bit 0 - ECM Master Checker Status Bit Set Prior to ECM Init */
#define ECMCONFIGOUTPCTRLFLT_CNT_U08            ((uint8)4U)    /* bit 2 - ECM Configure Output Control Fault */
#define EIINTRPTSTRTUPTESTFAILR_CNT_U08         ((uint8)8U)    /* bit 3 - EI Interrupt Start Up Fault */
#define ECMMSTCHKROUTPCTRLFAILR_CNT_U08         ((uint8)32U)   /* bit 5 - ECM Startup Master checker nERROR Output Control Fault */
#define ECMRTMSTCHKRCOMPFLT_CNT_U08             ((uint8)128U)  /* bit 7 - ECM Runtime Master-Checker Compare Fault */

/* NTCNR_0X028 FpuFlt */
#define FPUINVLDOPEREXCPN_CNT_U08               ((uint8)2U)    /* bit 1 - FPU Invalid Operation (V Bit) */
#define FPUDIVBYZEROEXCPN_CNT_U08               ((uint8)4U)    /* bit 2 - FPU Divide by Zero (Z Bit) */
#define FPUOVFEXCPN_CNT_U08                     ((uint8)8U)    /* bit 3 - FPU Overflow (O Bit) */
#define FPUUKWNEXCPN_CNT_U08                    ((uint8)16U)   /* bit 4 - FPU Unknown Error */

/* NTCNR_0X029 UkwnStrtUpDetdFlt */
#define UKWNECMRST_CNT_U08                      ((uint8)1U)    /* bit 0 - Unknown ECM Reset */
#define UKWNRST_CNT_U08                         ((uint8)2U)    /* bit 1 - Unknown Reset */
#define FLSBTLDRPREOSSRTUPEXCPN_CNT_U08         ((uint8)4U)    /* bit 2 - FBL Pre-OS Startup Exception */
#define STRTUPRSTINFOFAILD_CNT_U08              ((uint8)8U)    /* bit 3 - Corrupt Start up / Reset Information */
#define UKWNSWRST_CNT_U08                       ((uint8)16U)   /* bit 4 - Unknown Software Reset */

/* NTCNR_0X02A ProgSeqFlt */
#define PROGFLOW_CNT_U08                        ((uint8)1U)    /* bit 0 - Program Flow */
#define DEADLINEMONR_CNT_U08                    ((uint8)2U)    /* bit 1 - Deadline Monitor */
#define ALVMONR_CNT_U08                         ((uint8)4U)    /* bit 2 - Alive Monitor */

/* NTCNR_0X02C WdgFlt */
#define WDGTOUT_CNT_U08                         ((uint8)1U)    /* bit 0 - Watchdog Timeout */

/* NTCNR_0X02D PrphlGuardFlt */
#define PBGGUARDWRERR_CNT_U08                   ((uint8)1U)    /* bit 0 - PBG Guard RunTime Write error */
#define IPGRTFLT_CNT_U08                        ((uint8)2U)    /* bit 1 - IPG RunTime error */
#define PBGGUARDREADERR_CNT_U08                 ((uint8)4U)    /* bit 2 - PEG RunTime Read error */
#define HISPDBUSGUARDERR_CNT_U08                ((uint8)8U)    /* bit 3 - Hi Speed Bus Guard error */
#define CODFLSGUARDERR_CNT_U08                  ((uint8)16U)   /* bit 4 - Code flash Guard Error */
#define GBLRAMGUARDERR_CNT_U08                  ((uint8)32U)   /* bit 5 - Global RAM Guard Error */
#define PEGERR_CNT_U08                          ((uint8)64U)   /* bit 6 - PEG Error */

/* NTCNR_0X02E PrphlGuardFlt */
#define SYSERRGENREGWRINUSRMODE_CNT_U08         ((uint8)1U)    /* bit 0 - SEG Register Error write in user mode Error */
#define IPGPROTNREGWRINUSRMODE_CNT_U08          ((uint8)2U)    /* bit 1 - IPG Protection register write in user mode Error */

/* NTCNR_0X02F Debug Reset */
#define DBGRST_CNT_U08                          ((uint8)1U)    /* bit 0 - Debug Reset */

/* NTCNR_0X030 OsPrmntGenericFlt */
#define OSCRITFLT_CNT_U08                       ((uint8)1U)    /* bit 0 - General OS fatal error */ 
#define UKWNEXCPN_CNT_U08                       ((uint8)2U)    /* bit 1 - Unhandled Exception */  

/* NTCNR_0X031 OsTmpGenericFlt */
#define OSNONCRITFLT_CNT_U08                    ((uint8)1U)    /* bit 0 - General OS non-fatal (temporary) error */ 

/* NTCNR_0X036 DmaFlt */
#define DMATRFERR_CNT_U08                       ((uint8)1U)    /* bit 0 - DMA Transfer Error */
#define DMAREGACSPROTCNERR_CNT_U08              ((uint8)2U)    /* bit 1 - DMA Register Access Protection Violation */

/* NTCNR_0X037 PrphlBusDataParFlt */
#define PRPHLBUSADRDATAECCFLT_CNT_U08           ((uint8)1U)     /* bit 0 - Peripheral Bus Address Data ECC Error */
#define PRPHLUMAPDAREAACS_CNT_U08               ((uint8)2U)     /* bit 1 - Peripheral Unmapped Area Access error */
#define HISPDBUSUMAPDAREAACS_CNT_U08            ((uint8)4U)     /* bit 2 - H Bus Error Or Peripheral Unmapped Area Access Error */
#define BUSBRDGARBNERR_CNT_U08                  ((uint8)8U)     /* bit 3 - Bus Bride Error – Arbiter Error */
#define BUSSNGBITECCERR_CNT_U08                 ((uint8)16U)    /* bit 4 - Bus Single Bit ECC Error */

/* NTCNR_0X049 McuVltgMonrFlt */
#define INTCVMOVERVLTGMONR_CNT_U08              ((uint8)1U)     /* bit 0 - Internal CVM Over Voltage Monitor Fault */
#define INTCVMUNDERVLTGMONR_CNT_U08             ((uint8)2U)     /* bit 1 - Internal CVM Under Voltage Monitor Fault */
#define EXTVLTGMONRFLT_CNT_U08                  ((uint8)128U)   /* bit 7 - External Voltage Monitor Fault */

/* Miscellaneous constants */
#define UPPR16BITMASK_CNT_U32             ((uint32)(0xFFFF0000U))
#define LOWR16BITMASK_CNT_U32             ((uint32)(0x0000FFFFU))

#define GlobalShared_START_SEC_VAR_CLEARED_16
#include "MemMap.h"
VAR (uint16, CDD_ExcpnHndlg_VAR) ExcpnHndlgOsErrCod_C; /* ExcpnHndlg component level variable for OS Error Code */
#define GlobalShared_STOP_SEC_VAR_CLEARED_16
#include "MemMap.h"

#define BackUpRam_START_SEC_VAR_CLEARED_32
#include "MemMap.h"
VAR (uint32, CDD_ExcpnHndlg_VAR) BackUpRam_C[MAXBACKUPRAMSIZE_CNT_U16]; /* ExcpnHndlg component level variable for Back up RAM */
#define BackUpRam_STOP_SEC_VAR_CLEARED_32
#include "MemMap.h"


static FUNC(void, CDD_ExcpnHndlg_CODE) ProcStrtUpOrSwRst(void);
static INLINE FUNC(boolean, CDD_ExcpnHndlg_CODE)  McuDiagcRstChk(P1mcDiagc1 RstInfo_Cnt_T_enum);
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
 * Array Types:
 * ============
 * Ary1D_u32_4: Array with 4 element(s) of type uint32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_McuDiagcData(void)
 *     Returnvalue: uint32* is of type Ary1D_u32_4
 *
 *********************************************************************************************************************/


#define CDD_ExcpnHndlg_START_SEC_CODE
#include "CDD_ExcpnHndlg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ChkForStrtUpTest_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <ChkForStrtUpTest>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void ChkForStrtUpTest_Oper(boolean *ExecStrtUpTest_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ChkForStrtUpTest_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_ExcpnHndlg_CODE) ChkForStrtUpTest_Oper(P2VAR(boolean, AUTOMATIC, RTE_CDD_EXCPNHNDLG_APPL_VAR) ExecStrtUpTest_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ChkForStrtUpTest_Oper
 *********************************************************************************************************************/
     VAR(P1mcDiagc1, AUTOMATIC) RstInfo_Cnt_T_enum;
    /* copy register values to temporary variables to avoid MISRA rule 12.2 and/or 12.4 warnings */
    RstInfo_Cnt_T_enum = (P1mcDiagc1)BACKUPRAM0;  

    *ExecStrtUpTest_Arg = McuDiagcRstChk(RstInfo_Cnt_T_enum);
    

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ExcpnHndlgInit2
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
 *   Std_ReturnType Rte_Call_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ExcpnHndlgInit2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_ExcpnHndlg_CODE) ExcpnHndlgInit2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ExcpnHndlgInit2
 *********************************************************************************************************************/

 /*** This function implements subfunction "Reset Source Determination" of the CM101B Exception Handling RH850 FDD ***/

    VAR(P1mcDiagc1, AUTOMATIC) RstInfo_Cnt_T_enum;
    VAR(uint32, AUTOMATIC) BistSeqSts_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) BistSeqStsB_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) MemBistFlg_Cnt_T_u32;
    
    /* copy register values to temporary variables to avoid MISRA rule 12.2 and/or 12.4 warnings */
    RstInfo_Cnt_T_enum = (P1mcDiagc1)BACKUPRAM0;  
    BistSeqSts_Cnt_T_u32 = BSEQ0ST;
    BistSeqStsB_Cnt_T_u32 = BSEQ0STB ;
    MemBistFlg_Cnt_T_u32 = MBISTFTAGL1;
    
    /* Pass all NTCs controlled by this component */
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X003, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X010, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X013, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X014, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X015, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X016, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X021, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X022, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X023, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X024, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X025, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X026, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X028, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X029, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X02A, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X02C, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X02D, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X02E, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X030, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X031, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X036, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X037, 0U, NTCSTS_PASSD, 0U);
    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X049, 0U, NTCSTS_PASSD, 0U);
    
    /*Check if the Debugger is attached*/
    if ((MemBistFlg_Cnt_T_u32 == 0xFFFFFFFFU) && (BistSeqSts_Cnt_T_u32 == 2U) && (BistSeqStsB_Cnt_T_u32 == 1U)) 
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X02F, DBGRST_CNT_U08, NTCSTS_FAILD, 0U);
    }
    else
    {
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X02F, 0U, NTCSTS_PASSD, 0U);
    }

    if ((((RstInfo_Cnt_T_enum & UPPR16BITMASK_CNT_U32) >> 16) ^ (RstInfo_Cnt_T_enum & LOWR16BITMASK_CNT_U32)) != LOWR16BITMASK_CNT_U32)
    {
        /* set fault -- BRAMDAT0 is corrupt */
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X029, STRTUPRSTINFOFAILD_CNT_U08, NTCSTS_FAILD, 0U);
    }
    else if (RstInfo_Cnt_T_enum == P1MCDIAGC_QUICKIGNRST)
    {
        /* No checks needed in Quick Ignition reset */        
    }
    else if (McuDiagcRstChk(RstInfo_Cnt_T_enum) == TRUE)
    {
        /* No checks needed - normal power on start up or flash programming event */
    }
    else if (RstInfo_Cnt_T_enum == P1MCDIAGC_DBGRST) 
    {
        /* No checks needed in debug mode */
    }
    /* MCAL code clears the ECM Status Register after an ECM Reset. Therefore, on an ECM Reset,
    the bootloader shall check the ECM status register and load the value of BackUpRam as LockStepErr 
    if the ECM bit for CPU lock step error was set. Otherwise, unknown System Reset is diagnosed.*/
    else if (RstInfo_Cnt_T_enum == P1MCDIAGC_LOCKSTEPECMRST)
    {
        /* Check for lock step fault in either core */
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X022, LOCKSTEPCOMP_CNT_U08, NTCSTS_FAILD, 0U); 
    }
    else if(RstInfo_Cnt_T_enum == P1MCDIAGC_ECMRST)
    {
        /* Check for any other ECM Reset */
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X029, UKWNECMRST_CNT_U08, NTCSTS_FAILD, 0U); 
    }
    else if (RstInfo_Cnt_T_enum == P1MCDIAGC_PINRST)
    {
        /* Reset from External Pin (Power Supply) */
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X049, EXTVLTGMONRFLT_CNT_U08, NTCSTS_FAILD, 0U);  
    }
    else if (RstInfo_Cnt_T_enum == P1MCDIAGC_COREVLTGMONRHI)
    {
        /* Overvoltage internal to uC */
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X049, INTCVMOVERVLTGMONR_CNT_U08, NTCSTS_FAILD, 0U);    
    }
    else if (RstInfo_Cnt_T_enum == P1MCDIAGC_COREVLTGMONRLO)
    {
        /* Low voltage internal to uC */
        (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X049, INTCVMUNDERVLTGMONR_CNT_U08, NTCSTS_FAILD, 0U);    
    }
    else
    {
        /* process startup non-reset faults and software resets */
        ProcStrtUpOrSwRst();  
    }

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ExcpnHndlgPer1
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
 *   Std_ReturnType Rte_Call_SetNtcStsAndSnpshtData_Oper(NtcNr1 NtcNr_Arg, uint8 NtcStInfo_Arg, NtcSts1 NtcSts_Arg, uint16 DebStep_Arg, uint32 SpclSnpshtData0_Arg, uint32 SpclSnpshtData1_Arg, uint32 SpclSnpshtData2_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetNtcStsAndSnpshtData_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ExcpnHndlgPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_ExcpnHndlg_CODE) ExcpnHndlgPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: ExcpnHndlgPer1
 *********************************************************************************************************************/
    if (ExcpnHndlgOsErrCod_C != 0x0000U)
    {
        (void)Rte_Call_SetNtcStsAndSnpshtData_Oper (NTCNR_0X031, OSNONCRITFLT_CNT_U08, NTCSTS_FAILD, 0U, 
            (uint32)ExcpnHndlgOsErrCod_C,0U,0U);
    }
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMcuDiagcSpplData_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetMcuDiagcSpplData>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetMcuDiagcSpplData_Oper(uint32 *McuDiagcData1_Arg)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMcuDiagcSpplData_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_ExcpnHndlg_CODE) GetMcuDiagcSpplData_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_EXCPNHNDLG_APPL_VAR) McuDiagcData1_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMcuDiagcSpplData_Oper
 *********************************************************************************************************************/

    *McuDiagcData1_Arg = BACKUPRAM1;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_ExcpnHndlg_STOP_SEC_CODE
#include "CDD_ExcpnHndlg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#define CDD_ExcpnHndlg_START_SEC_CODE 
#include "CDD_ExcpnHndlg_MemMap.h"

/*****************************************************************************************************************
 * Name        :   ProcStrtUpOrSwRst
 * Description :   Processes a startup non-reset diagnostic failure or a swoftware reset
 * Inputs      :   BACKUPRAM0 - global input containing the reset reason/startup failure information
 * Outputs     :   None
 * Usage Notes :   Sets NTCs based on information in BACKUPRAM0
 ****************************************************************************************************************/
static FUNC(void, CDD_ExcpnHndlg_CODE) ProcStrtUpOrSwRst(void)
{
    VAR(P1mcDiagc1, AUTOMATIC) RstInfo_Cnt_T_enum; 
    
    RstInfo_Cnt_T_enum = (P1mcDiagc1)BACKUPRAM0;
    switch (RstInfo_Cnt_T_enum)
    {
        /* cases for pre-OS failures, non-reset */
        case P1MCDIAGC_MEMBISTERR:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X010, MEMBISTSTRTUPTESTFAILR_CNT_U08, NTCSTS_FAILD, 0U);
        break;
        
        case P1MCDIAGC_BISTECCERR:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X021, BISTCODECCFAILR_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_BISTNOTCMPLERR:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X021, BISTNOTCMPL_CNT_U08, NTCSTS_FAILD, 0U);
        break;
        
        case P1MCDIAGC_LOGLBISTERR:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X021, LOGLBISTSTRTUPTESTFAILR_CNT_U08, NTCSTS_FAILD, 0U);
        break;
        
        case P1MCDIAGC_FACIRSTTRFERR:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X021, FACIRSTTRFERR_CNT_U08, NTCSTS_FAILD, 0U);
        break;
                        
        case P1MCDIAGC_PROCRLOCKSTEPERR:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X022, PROCLOCKSTEPRTERR_CNT_U08, NTCSTS_FAILD, 0U);
        break;
        
        case P1MCDIAGC_DMALOCKSTEPORGBLRAMWRBUFERR:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X022, DMALOCKSTEPRTORGBLRAMWRBUFERR_CNT_U08, NTCSTS_FAILD, 0U);
        break;
        
        case P1MCDIAGC_ECMMSTCHKRSTRTUPFLT:/* ECM Master checker Start Up Fault */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X026, ECMMSTCHKRSTRTUPTESTFAILR_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_CONFIGOUTPCTRLFLT:/* ECM Configure Output Control Fault */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X026, ECMCONFIGOUTPCTRLFLT_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_EIINTRPTSTRTUPFLT:/* ECM EI Interrupt Start Up Fault */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X026, EIINTRPTSTRTUPTESTFAILR_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_MSTCHKRERROUTPCTRLFLT:/* ECM Master Output Control Fault */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X026, ECMMSTCHKROUTPCTRLFAILR_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_RSTUKWN: /* Unknown Reset */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X029, UKWNRST_CNT_U08, NTCSTS_FAILD, 0U); 
        break;
        
        case P1MCDIAGC_CODFLSADRPARORDATAECCERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X003, CODFLSECCDBLBITORADRPARERR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_FLSSEQERR:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X003, CODFLSSEQERR_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_LCLRAMDBLBIT:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X013, LCLRAMECCDBLBIT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_GBLRAMECCERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X013, GBLRAMECCDBLBIT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_GTMRAMDBLBITECCERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X013, GTMRAMRAMECCDBLBIT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_INVLDRAMAREA:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X013, INVLDRAMAREA_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;

        case P1MCDIAGC_LCLRAMECCERRADROVF:
                    (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X014, LCLRAMECCADROVFFLT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_GLBRAMECCERRADROVF:
                    (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X014, GLBRAMECCADROVFFLT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_CODFLSECCERRADROVF:
                    (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X014, CODFLSECCADROVFFLT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_FRRAMECCERROVF:
                    (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X014, FRRAMECCOVFFLT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_CSIHRAMECCERROVF:
                    (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X014, CSIHRAMECCOVFFLT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;

        case P1MCDIAGC_CANRAMECCERROVF:
                    (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X014, CANRAMECCOVFFLT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_GTMRAMECCERROVF:
                    (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X014, GTMRAMECCOVFFLT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_DTSRAMDBLBITECCERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X016, DTSDBLBIT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;

        case P1MCDIAGC_GBLRAMILLGLACSBYPROCR:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X015, GBLRAMILLGLACSBYPROCRFLT_CNT_U08, NTCSTS_FAILD, 0U);
        break;
        
        case P1MCDIAGC_CODFLSILLGLACSBYSYSBUS:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X015, CODFLSILLGLACSBYSYSBUSFLT_CNT_U08, NTCSTS_FAILD, 0U); 
        break;

        case P1MCDIAGC_GBLRAMILLGLACSBYSYSBUS:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X015, GBLRAMILLGLACSBYSYSBUS_CNT_U08, NTCSTS_FAILD, 0U);
        break;
        
        case P1MCDIAGC_RESDAREAILLGLACSBYHISPDBUS:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X015, RESDAREAILLGLACSBYHISPDBUS_CNT_U08, NTCSTS_FAILD, 0U); 
        break;
        
    
        case P1MCDIAGC_RESDOPER:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X022, RESDOPER_CNT_U08, NTCSTS_FAILD, 0U);
        break;
        
        case P1MCDIAGC_ALGNREAD:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X022, ALGNREAD_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_ALGNWR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X022, ALGNWR_CNT_U08, NTCSTS_FAILD, 
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_CODFLSINSTRFETCHERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X022, CODFLSINSTRFETCH_CNT_U08, NTCSTS_FAILD, 
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_NONCODFLSINSTRFETCHERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X022, NONCODFLSINSTRFETCH_CNT_U08, NTCSTS_FAILD, 
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_CLKMONR0RTFLT:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X023, CLKMONR0RTFLT_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_CLKMONR1RTFLT:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X023, CLKMONR1RTFLT_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_CLKMONR2RTFLT:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X023, CLKMONR2RTFLT_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_CLKMONR3RTFLT:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X023, CLKMONR3RTFLT_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_CLKMONR5RTFLT:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X023, CLKMONR5RTFLT_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_MODERRUSRMODINACTV: /* Mode Error: User Mode Unintended Inactive */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X024, MODERRUSRMODINACTV_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_MODERRPROGMMODACTV: /* Mode Error: User Mode Unintended Programming Mode Active */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X024, MODERRPROGMMODACTV_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_MODERRDBGACTV: /* Mode Error: User Mode Unintended Debug Mode Active */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X024, MODERRDBGACTV_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_MODERRTESTMODACTV:/* Mode Error: User Mode Unintended Test Mode Active */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X024, MODERRTESTMODACTV_CNT_U08, NTCSTS_FAILD, 0U);
        break;

        case P1MCDIAGC_MPUEXCPNERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X025, DATAANDINSTRPROTNERR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_PRVLGDINSTREXCPN:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X025, PRVLGDINSTREXCPN_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_ECMMSTCHKRERR:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X026, ECMRTMSTCHKRCOMPFLT_CNT_U08, NTCSTS_FAILD, 0U);
        break;
        
        case P1MCDIAGC_FPUERRINVLDOPER:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X028, FPUINVLDOPEREXCPN_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_FPUERRDIVBYZERO:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X028, FPUDIVBYZEROEXCPN_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_FPUERROVF:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X028, FPUOVFEXCPN_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_FPUERRUKWN:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X028, FPUUKWNEXCPN_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;

        case P1MCDIAGC_PREOSEXCPN:
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X029, FLSBTLDRPREOSSRTUPEXCPN_CNT_U08, NTCSTS_FAILD, 0U);
        break;
        
        case P1MCDIAGC_FENMIPROGFLOW:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02A, PROGFLOW_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_FENMIDEADLINEMONR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02A, DEADLINEMONR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_FENMIALVMONR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02A, ALVMONR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_FENMIWDG:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02C, WDGTOUT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        

        case P1MCDIAGC_PRPHLBUSGUARDWRERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02D, PBGGUARDWRERR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_INTPRPHLGUARDERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02D, IPGRTFLT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_PRPHLBUSGUARDREADERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02D, PBGGUARDREADERR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;    

        case P1MCDIAGC_HISPDBUSGUARDERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02D, HISPDBUSGUARDERR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_CODFLSGUARDERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02D, CODFLSGUARDERR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_GBLRAMGUARDERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02D, GBLRAMGUARDERR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break; 
        
        case P1MCDIAGC_PEGERR:
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02D, PEGERR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;


        case P1MCDIAGC_SYSERRGENREGWRINUSRMODE: /* Guard Error: SEG Register Access Error  */
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02E, SYSERRGENREGWRINUSRMODE_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;

        case P1MCDIAGC_INTPRPHLGUARDPROTNREGWRINUSRMODE: /* Guard Error: IPG Error  */
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X02E, IPGPROTNREGWRINUSRMODE_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_PRMNTOSERR: /* Permanent OS Error */
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X030, OSCRITFLT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_UKWNEXCPN: /* Unknown OS Exception */
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X030, UKWNEXCPN_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_DMATRFERR: /* Dma Transfer Error */
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X036, DMATRFERR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_DMAILLGLACSERR: /* Dma Illegal access Error */
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X036, DMAREGACSPROTCNERR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;

        case P1MCDIAGC_PRPHLBUSADRDATAECCERR: /* Peripheral Bus Address Data ECC Error */
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X037, PRPHLBUSADRDATAECCFLT_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_PRPHLUMAPDAREA: /* Peripheral Unmapped Area Access error */
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X037, PRPHLUMAPDAREAACS_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;
        
        case P1MCDIAGC_HISPDBUSUMAPDAREAERR: /* H Bus Error Or Peripheral Unmapped Area Access Error */
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X037, HISPDBUSUMAPDAREAACS_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3); 
        break;
        
        case P1MCDIAGC_BUSBRDGERR: /* Bus Bride Error – Arbiter Error */
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X037, BUSBRDGARBNERR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3); 
        break;

        case P1MCDIAGC_BUSSNGBITECCERR: /* Bus Single Bit ECC Error */
            (void)Rte_Call_SetNtcStsAndSnpshtData_Oper(NTCNR_0X037, BUSSNGBITECCERR_CNT_U08, NTCSTS_FAILD,
                0U, BACKUPRAM1, BACKUPRAM2, BACKUPRAM3);
        break;

        default: /* Unknown SW Reset */
            (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X029, UKWNSWRST_CNT_U08, NTCSTS_FAILD, 0U);
        break;
    }
}

/*****************************************************************************************************************
 * Name        :   McuDiagcRstChk
 * Description :   Checks and returns boolean based on Mcu Diagnostic Reset
 * Inputs      :   RstInfo_Cnt_T_enum
 * Outputs     :   McuDiagcRstChk_Cnt_T_lgc
 * Usage Notes :   None
 ****************************************************************************************************************/
static INLINE FUNC(boolean, CDD_ExcpnHndlg_CODE)  McuDiagcRstChk(P1mcDiagc1 RstInfo_Cnt_T_enum)
{
    
    VAR(boolean, AUTOMATIC) McuDiagcRstChk_Cnt_T_lgc;
    
    if((RstInfo_Cnt_T_enum == P1MCDIAGC_PWRONRST) || (RstInfo_Cnt_T_enum == P1MCDIAGC_FLSPROGMCMPL)  || (RstInfo_Cnt_T_enum == P1MCDIAGC_HARDRST)
            || (RstInfo_Cnt_T_enum == P1MCDIAGC_SOFTRST))
    {
        McuDiagcRstChk_Cnt_T_lgc = TRUE;    
    }
    else
    {
        McuDiagcRstChk_Cnt_T_lgc = FALSE;
    }
    return(McuDiagcRstChk_Cnt_T_lgc) ;
}

#define CDD_ExcpnHndlg_STOP_SEC_CODE
#include "CDD_ExcpnHndlg_MemMap.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
