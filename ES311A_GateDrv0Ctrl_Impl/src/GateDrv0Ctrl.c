/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  GateDrv0Ctrl.c
 *        Config:  C:/_EA4SynWrkgCpy/ES311A_GateDrv0Ctrl_Impl/tools/Component.dpa
 *     SW-C Type:  GateDrv0Ctrl
 *  Generated at:  Tue Feb 27 10:21:57 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <GateDrv0Ctrl>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
* Copyright 2016, 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : GateDrv0Ctrl.c
* Module Description: Gate Drive 0 Control function responsible for configuration, deactivation and determination of fault status for Gate Drive 0.
* Project           : CBD
* Author            : Rijvi Ahmed
***********************************************************************************************************************
* Version Control:
* %version:          12 %
* %derived_by:       nz2554 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author     Change Description                                                             SCR #
* --------  -------  --------- ---------------------------------------------------------------------------  ----------
* 07/01/16   1       Rijvi      Initial Version                                                              EA4#6388
* 19/09/16   2       Rijvi      Updated per design rev. 1.5.0. And removed the requirement tags.             EA4#7437
* 11/22/16   3       AJM        Updated per design rev 1.7.0                                                 EA4#8257
* 01/21/17   4       AJM        Updated per design rev 1.8.0                                                 EA4#9357                       
* 02/14/17   5       Shruthi.R  Updated per design rev 2.0.0                                                 EA4#9470
* 02/23/17   6       Shruthi.R  Updated per design rev 2.1.0                                                 EA4#9992
* 03/13/17   7       Shruthi.R  Updated for SPI Tx/Rx update acc. to MCAL update in FDD 2.3.0                EA4#10320
* 03/24/17   8       Shruthi.R  Fixed phase reasonableness issues found during integration                   EA4#10677
* 05/24/17   9       Shruthi.R  Added NxtrMath include which is required. Removed cast of FilLpInit
*                               function return to void because it does not return anything. Removed
*                               unused inputs from function OperFltMonrSt. GateDrv0SpiErrSecAtmpt
*                               PIM is now reset in Gate drive disable to match with the model. Added
*                               FDD change to optimize GSU Flt Active subsystem in GateDrvDetermineVgsUvFlt  EA4#12201
* 09/01/2017 10      Shruthi.R  Add more functionality in the gate drive IC function to indicate FET fault
*                               type and phase. Phase reasonableness will also need to be disabled on
*                               a phase with a shorted FET. Added Snapshot data to NTCs as per the design.
*                               GateDrvDetermineVgsUvFlt functionality moved to calling fuction. Fixed magic
*                               numbers used for parameter bytes.Added GateDrvCfgSt enum type to eliminate
*                               magic numbers used to transition to different Cfg States                     EA4#13148
* 01/11/2018 11      SPP        Updated per design 3.1.0; rewrote/removed code causing low-path coverage.    EA4#19186
* 02/27/2018 12      Shruthi.R  Added display variables in DeltaCompu block as in design v3.3.0              EA4#20591
*                               Modify 'Set Inverter Status' to not disable the inverter when NTC 0x051
*                               is set if FET Fault Mitigation is enabled                                    EA4#20770
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
 * IvtrFetFltPha1
 *   uint8 represents integers with a minimum value of 0 and a maximum value of 255.
 *      The order-relation on uint8 is: x < y if y - x is positive.
 *      uint8 has a lexical representation consisting of a finite-length sequence 
 *      of decimal digits (#x30-#x39).
 *      
 *      For example: 1, 0, 126, +10.
 *
 * IvtrFetFltTyp1
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
 *********************************************************************************************************************/

#include "Rte_GateDrv0Ctrl.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "ArchGlbPrm.h"
#include "ElecGlbPrm.h" 
#include "Spi.h"
#include "Os.h"
#include "NxtrFil.h"
#include "NxtrMath.h"
#include "GateDrv0Ctrl_Cfg_private.h"

/* MISRA-C:2004 Rule 1.1  [NXTRDEV 1.1.1]: Inline functions are used to allow throughput optimization */
/* MISRA-C:2004 Rule 13.7 [NXTRDEV 13.7.1]: Allowed in cases of comparisons involving configuration parameters/configurable 
                                            constants. GATEDRV0FETFLTMTGTNENA_ULS_LOGL can be set to TRUE/FALSE in configuration
                                            but this rule will be deviated in either case because it is fixed for a given project */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return valueof 
                                              Spi_ReadIB, Spi_WriteIB, Rte_Read,Rte_Write, Rte_IrvWrite, Rte_Call_IoHwAb*
                                              Call_Spi_AsyncTransmit, Rte_Call_GetNtcQlfrSts_Oper, Rte_Call_SetNtcSts_Oper  */ 


typedef enum {
    GATEDRVCFGST_RSTGATEDRV = 0U,   /* 0U */
    GATEDRVCFGST_WAIT2MS,           /* 1U */
    GATEDRVCFGST_CFGREG,            /* 2U */
    GATEDRVCFGST_SETUPSPIREGREAD,   /* 3U */
    GATEDRVCFGST_READBACKREGS       /* 4U */
}GateDrvCfgSt;

#define  GATEDRV0CFG0READVAL_CNT_U16     	((uint16)0U)    
#define  GATEDRV0CFG0WRVAL_CNT_U16     	 	((uint16)512U)   
#define  GATEDRV0CFG1WRVAL_CNT_U16     	 	((uint16)1791U)  
#define  GATEDRV0CFG5WRVAL_CNT_U16       	((uint16)5824U)   
#define  GATEDRV0CFG6WRVAL_CNT_U16       	((uint16)6816U)    
#define  GATEDRV0CTRLVAL_CNT_U16         	((uint16)32320U)   
#define  GATEDRV0MASK0VAL_CNT_U16        	((uint16)26175U)   
#define  GATEDRV0MASK1VAL_CNT_U16        	((uint16)27392U)   
#define  GATEDRV0MASK2VAL_CNT_U16        	((uint16)28320U)  
#define  GATEDRV0CFG1READVAL_CNT_U16     	((uint16)1279U) 
#define  GATEDRV0CFG2READVAL_CNT_U16   		((uint16)2320U) 
#define  GATEDRV0CFG3READVAL_CNT_U16   		((uint16)3086U) 
#define  GATEDRV0CFG4READVAL_CNT_U16   		((uint16)4110U) 
#define  GATEDRV0CFG5READVAL_CNT_U16   		((uint16)5312U) 
#define  GATEDRV0CFG6READVAL_CNT_U16   		((uint16)6304U) 
#define  GATEDRV0CFG7READVAL_CNT_U16   		((uint16)7413U) 
#define  GATEDRV0CTRLREADVAL_CNT_U16   		((uint16)31808U) 
#define  GATEDRV0DIAG0READVAL_CNT_U16   	((uint16)28672U) 
#define  GATEDRV0DIAG1READVAL_CNT_U16   	((uint16)29696U) 
#define  GATEDRV0DIAG2READVAL_CNT_U16   	((uint16)30720U) 
#define  GATEDRV0MASK1READVAL_CNT_U16   	((uint16)26880U) 
#define  GATEDRV0MASK2READVAL_CNT_U16   	((uint16)27776U) 
#define  GATEDRV0VRFYCMD0WRVAL_CNT_U16   	((uint16)20992U) 
#define  GATEDRV0VRFYCMD1WRVAL_CNT_U16   	((uint16)22016U) 
#define  GATEDRV0VRFYRES0READVAL_CNT_U16   	((uint16)23552U)  
#define  GATEDRV0VRFYRES1READVAL_CNT_U16   	((uint16)24576U) 
#define  GATEDRV0CHKVALMASK_CNT_U16   		((uint16)511U)

#define  GATEDRVOFFSTCHKSIZE_CNT_U08 		((uint8)TblSize_m(ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16) - 1U)
#define BITMASK0_CNT_U08	                ((uint8)0x01U)
#define BITMASK2_CNT_U08	                ((uint8)0x04U)
#define BITMASK4_CNT_U08	                ((uint8)0x10U)
#define PHAONTISUMMAX_NANOSEC_U32           ((uint32)4294967295U)
#define WORDSHIFT_CNT_U08                   ((uint8)16U)

#define MOTDRVERRMIN_NANOSEC_F32  0.0F
#define MOTDRVERRMAX_NANOSEC_F32  40000000.0F

#define OVERTFLTPRM_CNT_U08                          ((uint8)1U)
#define GENGATEDRVFLTPRM_CNT_U08                     ((uint8)2U)
#define GATEDRVPWRSPLYFLTPRM_CNT_U08                 ((uint8)4U)
#define GATEDRVSERLCOMFLTPRM_CNT_U08                 ((uint8)8U)
#define OVERCURRANDOPENLOADFLTPRM_CNT_U08            ((uint8)16U)
#define MULTIFETFLTPRM_CNT_U08                       ((uint8)32U)

#define CHRGPMPUNDERVLTGFLTPRM_CNT_U08               ((uint8)1U)

#define CFG0REGFLTPRMBYTEOFFS_CNT_U08                ((uint8)1U)
#define CFG1REGFLTPRMBYTEOFFS_CNT_U08                ((uint8)2U)
#define CFG2REGFLTPRMBYTEOFFS_CNT_U08                ((uint8)3U)
#define CFG3REGFLTPRMBYTEOFFS_CNT_U08                ((uint8)4U)
#define CFG4REGFLTPRMBYTEOFFS_CNT_U08                ((uint8)5U)
#define CFG5REGFLTPRMBYTEOFFS_CNT_U08                ((uint8)6U)
#define CFG6REGFLTPRMBYTEOFFS_CNT_U08                ((uint8)7U)
#define CFG7REGFLTPRMBYTEOFFS_CNT_U08                ((uint8)8U)
#define CTRLREGFLTPRMBYTEOFFS_CNT_U08                ((uint8)9U)
#define MASKREG1FLTPRMBYTEOFFS_CNT_U08               ((uint8)10U)
#define MASKREG2FLTPRMBYTEOFFS_CNT_U08               ((uint8)11U)
#define SPIBUSCFGFLTPRMBYTEOFFS_CNT_U08              ((uint8)12U)
#define SPIBUSSETUPREADBACKCFGFLTPRMBYTEOFFS_CNT_U08 ((uint8)13U)
#define SPIBUSREADBACKCFGFLTPRMBYTEOFFS_CNT_U08      ((uint8)14U)

#define PHAALOSIDEVDSOVERVLTG_CNT_U08                ((uint8)1U)
#define PHAAHISIDEVDSOVERVLTG_CNT_U08                ((uint8)2U)
#define PHABLOSIDEVDSOVERVLTG_CNT_U08                ((uint8)4U)
#define PHABHISIDEVDSOVERVLTG_CNT_U08                ((uint8)8U)
#define PHACLOSIDEVDSOVERVLTG_CNT_U08                ((uint8)16U)
#define PHACHISIDEVDSOVERVLTG_CNT_U08                ((uint8)32U)

#define DIAG2REGBOOTSTRPSPLYFLTSTRTPOS_CNT_U08       ((uint8)5U)

/* SPI transmit function */
static INLINE FUNC(void, GateDrv0Ctrl_CODE) SpiAsyncTx( Spi_ChannelType Channel_Cnt_T_u08, 
													    Spi_DataType TxData_Cnt_T_u16,
												        Spi_SequenceType Sequence_Cnt_T_u08 );
														
/*** Off state verification functions ***/
static FUNC(void, GateDrv0Ctrl_CODE) OffStVrfySt( void );
static FUNC(boolean, GateDrv0Ctrl_CODE) OffStVrfyData( void );

/*** Configuration state functions ***/
static FUNC(void, GateDrv0Ctrl_CODE) CfgSt( void ); 
static FUNC(void, GateDrv0Ctrl_CODE) ReadBackRegs( void );

/*** Operate Fault Monitor state functions ***/
static FUNC(void, GateDrv0Ctrl_CODE) OperFltMonrSt( VAR(uint32, AUTOMATIC) PhaOnTiMeasdA_NanoSec_T_u32,
                                                    VAR(uint32, AUTOMATIC) PhaOnTiMeasdB_NanoSec_T_u32,
                                                    VAR(uint32, AUTOMATIC) PhaOnTiMeasdC_NanoSec_T_u32,
                                                    VAR(uint32, AUTOMATIC) PhaOnTiSumAExp_NanoSec_T_u32,
                                                    VAR(uint32, AUTOMATIC) PhaOnTiSumBExp_NanoSec_T_u32,
                                                    VAR(uint32, AUTOMATIC) PhaOnTiSumCExp_NanoSec_T_u32);
static FUNC(boolean, GateDrv0Ctrl_CODE) GateDrvDetermineOnStSngFETFlt(P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData0_Cnt_T_u32,
                                                                      P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData1_Cnt_T_u32,
                                                                      P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData2_Cnt_T_u32);
static FUNC(boolean, GateDrv0Ctrl_CODE) GateDrvDetermineVltgFlt( P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData0_Cnt_T_u32,
                                                                 P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData1_Cnt_T_u32,
                                                                 P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData2_Cnt_T_u32);
static FUNC(boolean, GateDrv0Ctrl_CODE) GateDrvDetermineGenericFlt(uint16 GateDrvAllSts_Cnt_T_u16,
                                                                   P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData0_Cnt_T_u32,
                                                                   P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData1_Cnt_T_u32,
                                                                   P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData2_Cnt_T_u32);
static FUNC(boolean, GateDrv0Ctrl_CODE) SetNtcStInfo(VAR(uint32 , AUTOMATIC) PhaOnTiMeasd_NanoSec_T_u32,
                                                     VAR(uint32 , AUTOMATIC) PhaOnTiSumExp_NanoSec_T_u32,
                                                     VAR(float32, AUTOMATIC) AbsltErr_NanoSec_T_f32,
                                                     VAR(uint8  , AUTOMATIC) BitMask_Cnt_u08,
                                                   P2VAR(uint8  , AUTOMATIC, AUTOMATIC) NtcStInfo_Uls_T_u08);

static FUNC(void, GateDrv0Ctrl_CODE) ChkResVrfyRegs(VAR(uint8, AUTOMATIC) PrmByte_Cnt_T_u08);
static FUNC(void, GateDrv0Ctrl_CODE) WriteOutput(void);

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
 * boolean: Boolean (standard type)
 * float32: Real in interval [-FLT_MAX...FLT_MAX] with single precision (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * IvtrFetFltPha1: Enumeration of integer in interval [0...255] with enumerators
 *   IVTRFETFLTPHA_NOPHASNGFETFLT (0U)
 *   IVTRFETFLTPHA_PHAASNGFETFLT (1U)
 *   IVTRFETFLTPHA_PHABSNGFETFLT (2U)
 *   IVTRFETFLTPHA_PHACSNGFETFLT (4U)
 * IvtrFetFltTyp1: Enumeration of integer in interval [0...255] with enumerators
 *   IVTRFETFLTTYP_NOFETFLT (0U)
 *   IVTRFETFLTTYP_LOWRFETFLT (1U)
 *   IVTRFETFLTTYP_UPPRFETFLT (2U)
 *   IVTRFETFLTTYP_MPLFETFLT (4U)
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
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 * Record Types:
 * =============
 * FilLpRec1: Record with elements
 *   FilSt of type float32
 *   FilGain of type float32
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_GateDrv0PhaOnTiSumAPrev(void)
 *   uint32 *Rte_Pim_GateDrv0PhaOnTiSumBPrev(void)
 *   uint32 *Rte_Pim_GateDrv0PhaOnTiSumCPrev(void)
 *   uint32 *Rte_Pim_GateDrv0SpiTrsmErrCntr(void)
 *   uint32 *Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumAExp(void)
 *   uint32 *Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumBExp(void)
 *   uint32 *Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumCExp(void)
 *   uint16 *Rte_Pim_GateDrv0Diag0Val(void)
 *   uint16 *Rte_Pim_GateDrv0Diag1Val(void)
 *   uint16 *Rte_Pim_GateDrv0Diag2Val(void)
 *   uint16 *Rte_Pim_GateDrv0StsVal(void)
 *   uint16 *Rte_Pim_GateDrv0VrfyRes0Val(void)
 *   uint16 *Rte_Pim_GateDrv0VrfyRes1Val(void)
 *   uint16 *Rte_Pim_dGateDrv0CtrlGateDrv0Diag0Val(void)
 *   uint16 *Rte_Pim_dGateDrv0CtrlGateDrv0Diag1Val(void)
 *   uint16 *Rte_Pim_dGateDrv0CtrlGateDrv0Diag2Val(void)
 *   uint16 *Rte_Pim_dGateDrv0CtrlGateDrv0StsVal(void)
 *   uint16 *Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val(void)
 *   uint16 *Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val(void)
 *   uint8 *Rte_Pim_GateDrv0CfgCnt(void)
 *   uint8 *Rte_Pim_GateDrv0OffStChkIdx(void)
 *   uint8 *Rte_Pim_GateDrv0OffStCnt(void)
 *   uint8 *Rte_Pim_GateDrv0St(void)
 *   uint8 *Rte_Pim_Ivtr0BootstrpSplyFltPrmVal(void)
 *   uint8 *Rte_Pim_Ivtr0GenericFltPrmVal(void)
 *   IvtrFetFltPha1 *Rte_Pim_IvtrFetFltPhaDataStore(void)
 *   IvtrFetFltTyp1 *Rte_Pim_IvtrFetFltTypDataStore(void)
 *   uint8 *Rte_Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx(void)
 *   boolean *Rte_Pim_GateDrv0CfgSecAtmpt(void)
 *   boolean *Rte_Pim_GateDrv0OffStChkSecAtmpt(void)
 *   boolean *Rte_Pim_GateDrv0SpiErrSecAtmpt(void)
 *   boolean *Rte_Pim_Ivtr0InactvSts(void)
 *   boolean *Rte_Pim_Ivtr0OffStChkCmpl(void)
 *   FilLpRec1 *Rte_Pim_GateDrv0PhaAFilLp(void)
 *   FilLpRec1 *Rte_Pim_GateDrv0PhaBFilLp(void)
 *   FilLpRec1 *Rte_Pim_GateDrv0PhaCFilLp(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_GateDrv0CtrlErrFilFrq_Val(void)
 *   uint32 Rte_Prm_GateDrv0CtrlErrOffs_Val(void)
 *   uint32 Rte_Prm_GateDrv0CtrlErrThd_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlNtcNr0x050FailStep_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlNtcNr0x050PassStep_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlNtcNr0x051FailStep_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlNtcNr0x051PassStep_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlNtcNr0x055FailStep_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlNtcNr0x055PassStep_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlUnit0Cfg2WrVal_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlUnit0Cfg3WrVal_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlUnit0Cfg4WrVal_Val(void)
 *   uint16 Rte_Prm_GateDrv0CtrlUnit0Cfg7WrVal_Val(void)
 *
 *********************************************************************************************************************/


#define GateDrv0Ctrl_START_SEC_CODE
#include "GateDrv0Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GateDrv0CtrlInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GateDrv0CtrlInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GateDrv0Ctrl_CODE) GateDrv0CtrlInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GateDrv0CtrlInit1
 *********************************************************************************************************************/

    VAR(Spi_DataType     , AUTOMATIC) DataBufferPtr_Cnt_T_u16;

	*Rte_Pim_GateDrv0St() = ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08; 
    (void)FilLpInit(0.0F,Rte_Prm_GateDrv0CtrlErrFilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_GateDrv0PhaAFilLp());
    (void)FilLpInit(0.0F,Rte_Prm_GateDrv0CtrlErrFilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_GateDrv0PhaBFilLp());
    (void)FilLpInit(0.0F,Rte_Prm_GateDrv0CtrlErrFilFrq_Val(),ARCHGLBPRM_2MILLISEC_SEC_F32,Rte_Pim_GateDrv0PhaCFilLp());

    /*Mask 0 Register dummy write command to get/read the status register*/
    DataBufferPtr_Cnt_T_u16 = GATEDRV0MASK0VAL_CNT_U16;
    (void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Mask0Ch   , &DataBufferPtr_Cnt_T_u16);
    
    /*Diag 0 Register read command*/
    DataBufferPtr_Cnt_T_u16 = GATEDRV0DIAG0READVAL_CNT_U16;
    (void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Diag0Ch   , &DataBufferPtr_Cnt_T_u16);
    
    /*Diag 1 Register read command*/
    DataBufferPtr_Cnt_T_u16 = GATEDRV0DIAG1READVAL_CNT_U16;
    (void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Diag1Ch   , &DataBufferPtr_Cnt_T_u16);
    
    /*Diag 2 Register read command*/
    DataBufferPtr_Cnt_T_u16 = GATEDRV0DIAG2READVAL_CNT_U16;
    (void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Diag2Ch   , &DataBufferPtr_Cnt_T_u16);
    
    /*Verify Result 0 register read command*/
    DataBufferPtr_Cnt_T_u16 = GATEDRV0VRFYRES0READVAL_CNT_U16;
    (void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0VrfyRes0Ch, &DataBufferPtr_Cnt_T_u16);
    
    /*Verify Result 1 register read command*/
    DataBufferPtr_Cnt_T_u16 = GATEDRV0VRFYRES1READVAL_CNT_U16;
    (void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0VrfyRes1Ch, &DataBufferPtr_Cnt_T_u16);

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GateDrv0CtrlPer1
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
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Write Access:
 *   ----------------------
 *   void Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0Ena(boolean data)
 *   void Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0PhaReasbnDiagcEna(boolean data)
 *   void Rte_IrvWrite_GateDrv0CtrlPer1_Ivtr0PhyFltInpActv(boolean data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_GetGpioMotDrvr0Diag_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioGateDrv0Rst_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GateDrv0CtrlPer1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GateDrv0Ctrl_CODE) GateDrv0CtrlPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GateDrv0CtrlPer1
 *********************************************************************************************************************/

	VAR(uint8,    AUTOMATIC)  StrtUpSt_Cnt_T_u08;
	VAR(SysSt1,   AUTOMATIC)  SysSt_Cnt_T_enum;
	VAR(boolean,  AUTOMATIC)  MotDrvr0Diag_Cnt_T_logl;
    VAR(Spi_SeqResultType, AUTOMATIC) GateDrv0CmnDiagSeqRes_Cnt_T_enum;
	
	
	/* Read module i/p */
    (void) Rte_Read_StrtUpSt_Val( &StrtUpSt_Cnt_T_u08 );
    (void) Rte_Read_SysSt_Val( &SysSt_Cnt_T_enum );
	
	
	if( ( (SysSt_Cnt_T_enum == SYSST_ENA) || ((SysSt_Cnt_T_enum == SYSST_WRMININ) && (StrtUpSt_Cnt_T_u08 >= ELECGLBPRM_STRTUPSTMTRDRVRININSTRT_CNT_U08)) )
		&& ((*Rte_Pim_Ivtr0InactvSts()) == FALSE) )
	{
		Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0Ena( TRUE );

        if(*Rte_Pim_GateDrv0St() != ELECGLBPRM_GATEDRVCFGST_CNT_U08)
        {
            GateDrv0CmnDiagSeqRes_Cnt_T_enum = Spi_GetSequenceResult(SpiConf_SpiSequence_GateDrv0CmnDiagSeq);
            if(GateDrv0CmnDiagSeqRes_Cnt_T_enum != SPI_SEQ_PENDING)
            {
                /*** SPI Tx ***/
                (void) Call_Spi_AsyncTransmit(SpiConf_SpiSequence_GateDrv0CmnDiagSeq);
            }
            else
            {
                /*** ErrCntr++ ***/
                /*Rollover is intentional*/
                *Rte_Pim_GateDrv0SpiTrsmErrCntr() = (*Rte_Pim_GateDrv0SpiTrsmErrCntr()) + 1UL;
            }
        }
        
		/* Monitor Gate Drv physical fault pin */
		(void) Rte_Call_IoHwAb_GetGpioMotDrvr0Diag_Oper( &MotDrvr0Diag_Cnt_T_logl );
		if( MotDrvr0Diag_Cnt_T_logl == STD_LOW )
		{	/* Physcial Fault Pin Active */
			Rte_IrvWrite_GateDrv0CtrlPer1_Ivtr0PhyFltInpActv( TRUE );
		}
		else
		{	/* Physical Fault Pin Inactive */
			Rte_IrvWrite_GateDrv0CtrlPer1_Ivtr0PhyFltInpActv( FALSE );
		}
	}
	else
	{
		Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0Ena( FALSE );
	}
    
    if((SysSt_Cnt_T_enum == SYSST_ENA) && ((*Rte_Pim_Ivtr0InactvSts()) == FALSE))
    {
        (void)Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0PhaReasbnDiagcEna(TRUE);
    }
    else
    {
        (void)Rte_IrvWrite_GateDrv0CtrlPer1_GateDrv0PhaReasbnDiagcEna(FALSE);
    }
 
 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GateDrv0CtrlPer2
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
 *   Std_ReturnType Rte_Read_Ivtr1PwrDiscnctFltSts_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_PhaOnTiMeasdA_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiMeasdB_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiMeasdC_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiSumA_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiSumB_Val(uint32 *data)
 *   Std_ReturnType Rte_Read_PhaOnTiSumC_Val(uint32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DiagcStsIvtr1Inactv_Logl(boolean data)
 *   Std_ReturnType Rte_Write_IvtrFetFltPha_Val(IvtrFetFltPha1 data)
 *   Std_ReturnType Rte_Write_IvtrFetFltTyp_Val(IvtrFetFltTyp1 data)
 *   Std_ReturnType Rte_Write_MotDrvErrA_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDrvErrB_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDrvErrC_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotDrvr0IninTestCmpl_Logl(boolean data)
 *
 * Inter Runnable Variables:
 * =========================
 *   Explicit Read Access:
 *   ---------------------
 *   boolean Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0Ena(void)
 *   boolean Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0PhaReasbnDiagcEna(void)
 *   boolean Rte_IrvRead_GateDrv0CtrlPer2_Ivtr0PhyFltInpActv(void)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetNtcQlfrSts_Oper(NtcNr1 NtcNr_Arg, SigQlfr1 *NtcQlfr_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetNtcQlfrSts_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_GetGpioMotDrvr0Diag_Oper(boolean *PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_GetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioGateDrv0Rst_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioSysFlt2A_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
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
 * Symbol: GateDrv0CtrlPer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, GateDrv0Ctrl_CODE) GateDrv0CtrlPer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GateDrv0CtrlPer2
 *********************************************************************************************************************/

	VAR(boolean , AUTOMATIC) Ivtr1PwrDiscnctFltSts_Cnt_T_logl;
	VAR(boolean , AUTOMATIC) GateDrv0Ena_Cnt_T_logl;
    VAR(uint32  , AUTOMATIC) PhaOnTiMeasdA_NanoSec_T_u32;
    VAR(uint32  , AUTOMATIC) PhaOnTiMeasdB_NanoSec_T_u32;
    VAR(uint32  , AUTOMATIC) PhaOnTiMeasdC_NanoSec_T_u32;
    VAR(uint32  , AUTOMATIC) PhaOnTiSumA_NanoSec_T_u32;
    VAR(uint32  , AUTOMATIC) PhaOnTiSumB_NanoSec_T_u32;
    VAR(uint32  , AUTOMATIC) PhaOnTiSumC_NanoSec_T_u32;
    VAR(uint32  , AUTOMATIC) PhaOnTiSumAExp_NanoSec_T_u32;
    VAR(uint32  , AUTOMATIC) PhaOnTiSumBExp_NanoSec_T_u32;
    VAR(uint32  , AUTOMATIC) PhaOnTiSumCExp_NanoSec_T_u32;
    VAR(SigQlfr1, AUTOMATIC) GateDrv0PhaABCFltQlfr_Cnt_T_enum;
    VAR(SigQlfr1, AUTOMATIC) GateDrv0GenericFltQlfr_Cnt_T_enum;
    VAR(SigQlfr1, AUTOMATIC) GateDrv0StrtUpTestFltQlfr_Cnt_T_enum;
    VAR(SigQlfr1, AUTOMATIC) GateDrv0OnStSngPhaFltQlfr_Cnt_T_enum;
    VAR(SigQlfr1, AUTOMATIC) GateDrv0VltgRgltrBootstrpSplyFltQlfr_Cnt_T_enum;
    VAR(Spi_SeqResultType, AUTOMATIC) GateDrv0CmnDiagSeqRes_Cnt_T_enum;
	
	/* Read module i/p */
	(void) Rte_Read_Ivtr1PwrDiscnctFltSts_Logl( &Ivtr1PwrDiscnctFltSts_Cnt_T_logl );
    (void) Rte_Read_PhaOnTiMeasdA_Val(&PhaOnTiMeasdA_NanoSec_T_u32);
    (void) Rte_Read_PhaOnTiMeasdB_Val(&PhaOnTiMeasdB_NanoSec_T_u32);
    (void) Rte_Read_PhaOnTiMeasdC_Val(&PhaOnTiMeasdC_NanoSec_T_u32);
    (void) Rte_Read_PhaOnTiSumA_Val(&PhaOnTiSumA_NanoSec_T_u32);
    (void) Rte_Read_PhaOnTiSumB_Val(&PhaOnTiSumB_NanoSec_T_u32);
    (void) Rte_Read_PhaOnTiSumC_Val(&PhaOnTiSumC_NanoSec_T_u32);
	
	/* Read IRVs */
	GateDrv0Ena_Cnt_T_logl = Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0Ena();

    /*** DeltaCompu ***/
    /* Compute the PhaOnTi delta every cycle, even during warm init */
    if( *Rte_Pim_GateDrv0PhaOnTiSumAPrev() <= PhaOnTiSumA_NanoSec_T_u32)
    {
         PhaOnTiSumAExp_NanoSec_T_u32 = PhaOnTiSumA_NanoSec_T_u32 - (*Rte_Pim_GateDrv0PhaOnTiSumAPrev());		
    }
    else
    {
        PhaOnTiSumAExp_NanoSec_T_u32 = (PHAONTISUMMAX_NANOSEC_U32 - (*Rte_Pim_GateDrv0PhaOnTiSumAPrev()))+ PhaOnTiSumA_NanoSec_T_u32;
    }

    if( *Rte_Pim_GateDrv0PhaOnTiSumBPrev() <= PhaOnTiSumB_NanoSec_T_u32)
    {
         PhaOnTiSumBExp_NanoSec_T_u32 = PhaOnTiSumB_NanoSec_T_u32 - (*Rte_Pim_GateDrv0PhaOnTiSumBPrev());		
    }
    else
    {
        PhaOnTiSumBExp_NanoSec_T_u32 = (PHAONTISUMMAX_NANOSEC_U32 - (*Rte_Pim_GateDrv0PhaOnTiSumBPrev()))+ PhaOnTiSumB_NanoSec_T_u32;
    }

    if( *Rte_Pim_GateDrv0PhaOnTiSumCPrev() <= PhaOnTiSumC_NanoSec_T_u32)
    {
         PhaOnTiSumCExp_NanoSec_T_u32 = PhaOnTiSumC_NanoSec_T_u32 - (*Rte_Pim_GateDrv0PhaOnTiSumCPrev());		
    }
    else
    {
        PhaOnTiSumCExp_NanoSec_T_u32 = (PHAONTISUMMAX_NANOSEC_U32 - (*Rte_Pim_GateDrv0PhaOnTiSumCPrev()))+ PhaOnTiSumC_NanoSec_T_u32;
    }

    *Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumAExp() = PhaOnTiSumAExp_NanoSec_T_u32;
    *Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumBExp() = PhaOnTiSumBExp_NanoSec_T_u32;
    *Rte_Pim_dGateDrv0CtrlGateDrv0PhaOnTiSumCExp() = PhaOnTiSumCExp_NanoSec_T_u32;

    *Rte_Pim_GateDrv0PhaOnTiSumAPrev() = PhaOnTiSumA_NanoSec_T_u32;
    *Rte_Pim_GateDrv0PhaOnTiSumBPrev() = PhaOnTiSumB_NanoSec_T_u32;
    *Rte_Pim_GateDrv0PhaOnTiSumCPrev() = PhaOnTiSumC_NanoSec_T_u32;	

    /*** GateDrv Enable/Disable ***/
	if( GateDrv0Ena_Cnt_T_logl == TRUE )
	{	/* Gate Drive Enable */
		
		/*** Read Status & Diag Registers ***/
        if(*Rte_Pim_GateDrv0St() != ELECGLBPRM_GATEDRVCFGST_CNT_U08)
        {
            /*** Read the 6 registers ***/
            GateDrv0CmnDiagSeqRes_Cnt_T_enum = Spi_GetSequenceResult(SpiConf_SpiSequence_GateDrv0CmnDiagSeq);
            if(GateDrv0CmnDiagSeqRes_Cnt_T_enum != SPI_SEQ_PENDING)
            {
                /*** Read Reg ***/
                (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Mask0Ch   ,  Rte_Pim_GateDrv0StsVal()      );
                (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Diag0Ch   ,  Rte_Pim_GateDrv0Diag0Val()    );
                (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Diag1Ch   ,  Rte_Pim_GateDrv0Diag1Val()    );
                (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Diag2Ch   ,  Rte_Pim_GateDrv0Diag2Val()    );
                (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0VrfyRes0Ch,  Rte_Pim_GateDrv0VrfyRes0Val() );
                (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0VrfyRes1Ch,  Rte_Pim_GateDrv0VrfyRes1Val() );
            }
            else
            {
                /*** ErrCntr++ ***/
                /*Rollover is intentional*/
                *Rte_Pim_GateDrv0SpiTrsmErrCntr() = (*Rte_Pim_GateDrv0SpiTrsmErrCntr()) + 1UL;
            }
        }

		/* Gate Drive State */
		switch( *Rte_Pim_GateDrv0St() )
		{
			case ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08:
				OffStVrfySt();
			break;
			
			case ELECGLBPRM_GATEDRVCFGST_CNT_U08:
				CfgSt();
			break;
			
			case ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08:
			default :
				OperFltMonrSt(PhaOnTiMeasdA_NanoSec_T_u32,
                              PhaOnTiMeasdB_NanoSec_T_u32,
                              PhaOnTiMeasdC_NanoSec_T_u32,
                              PhaOnTiSumAExp_NanoSec_T_u32,
                              PhaOnTiSumBExp_NanoSec_T_u32,
                              PhaOnTiSumCExp_NanoSec_T_u32);
			break;
		}
		
	}
	else
	{	/* Gate Drive Disable */

		(void) Rte_Call_IoHwAb_SetGpioGateDrv0Rst_Oper( STD_LOW );

		(void) Rte_Write_MotDrvr0IninTestCmpl_Logl( (*Rte_Pim_Ivtr0InactvSts()) );  /* Write module o/p */
		
		*Rte_Pim_GateDrv0CfgCnt()           = GATEDRVCFGST_RSTGATEDRV;
		*Rte_Pim_GateDrv0OffStCnt()         = 0U;
		*Rte_Pim_GateDrv0CfgSecAtmpt()      = FALSE;
		*Rte_Pim_GateDrv0OffStChkSecAtmpt() = FALSE;
        *Rte_Pim_GateDrv0SpiErrSecAtmpt()   = FALSE;
		
		if( *Rte_Pim_Ivtr0OffStChkCmpl() == FALSE )
		{
			*Rte_Pim_GateDrv0St() = ELECGLBPRM_GATEDRVOFFSTVRFYST_CNT_U08;
		}
		else
		{
			*Rte_Pim_GateDrv0St() = ELECGLBPRM_GATEDRVCFGST_CNT_U08;
		}

	}
    
    /*Set Inverter Status*/
    (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X054,&GateDrv0PhaABCFltQlfr_Cnt_T_enum);
    (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X050,&GateDrv0GenericFltQlfr_Cnt_T_enum);
    (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X053,&GateDrv0StrtUpTestFltQlfr_Cnt_T_enum);
    (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X051,&GateDrv0OnStSngPhaFltQlfr_Cnt_T_enum);
    (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X055,&GateDrv0VltgRgltrBootstrpSplyFltQlfr_Cnt_T_enum);
    if((GateDrv0PhaABCFltQlfr_Cnt_T_enum      == SIGQLFR_FAILD) ||
       (GateDrv0GenericFltQlfr_Cnt_T_enum     == SIGQLFR_FAILD) ||
       (GateDrv0StrtUpTestFltQlfr_Cnt_T_enum  == SIGQLFR_FAILD) ||
       ((GateDrv0OnStSngPhaFltQlfr_Cnt_T_enum == SIGQLFR_FAILD) && (GATEDRV0FETFLTMTGTNENA_ULS_LOGL == FALSE)) ||
       (GateDrv0VltgRgltrBootstrpSplyFltQlfr_Cnt_T_enum == SIGQLFR_FAILD) ||
       (Ivtr1PwrDiscnctFltSts_Cnt_T_logl      == TRUE))
    {
        *Rte_Pim_Ivtr0InactvSts() = TRUE;
        (void)Rte_Write_DiagcStsIvtr1Inactv_Logl(TRUE);
    }
    else
    {
        *Rte_Pim_Ivtr0InactvSts() = FALSE;
        (void)Rte_Write_DiagcStsIvtr1Inactv_Logl(FALSE);
    }

    /*Write Output*/
    WriteOutput();
    
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define GateDrv0Ctrl_STOP_SEC_CODE
#include "GateDrv0Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#define GateDrv0Ctrl_START_SEC_CODE
#include "GateDrv0Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
* Name:        WriteOutput
* Description: Implements 'Write Output' block in Per2
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, GateDrv0Ctrl_CODE) WriteOutput(void)
{
    VAR(IvtrFetFltPha1, AUTOMATIC) IvtrFetFltPha_Cnt_T_enum;
    VAR(IvtrFetFltTyp1, AUTOMATIC) IvtrFetFltTyp_Cnt_T_enum;
    VAR(SigQlfr1      , AUTOMATIC) GateDrv0OnStSngPhaFltQlfr_Cnt_T_enum;
    VAR(SigQlfr1      , AUTOMATIC) GateDrv0GenericFltQlfr_Cnt_T_enum;

    (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X051,&GateDrv0OnStSngPhaFltQlfr_Cnt_T_enum);
    (void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X050,&GateDrv0GenericFltQlfr_Cnt_T_enum);

    /** Note: MotDrvr0IninTestCmpl is written whenever updated in model. Else, it retains previous value*/

    if((GATEDRV0FETFLTMTGTNENA_ULS_LOGL==TRUE) &&
       ((GateDrv0OnStSngPhaFltQlfr_Cnt_T_enum == SIGQLFR_FAILD) /*Single FET Fault NTC Active*/ ||
        ((GateDrv0GenericFltQlfr_Cnt_T_enum    == SIGQLFR_FAILD) && ((*Rte_Pim_Ivtr0GenericFltPrmVal() & MULTIFETFLTPRM_CNT_U08)!=0)) /*Multi FET Fault NTC Active*/
       ))
    {
        /* Update FET fault mitigation outputs */
        IvtrFetFltPha_Cnt_T_enum = *Rte_Pim_IvtrFetFltPhaDataStore();
        IvtrFetFltTyp_Cnt_T_enum = *Rte_Pim_IvtrFetFltTypDataStore();
    }
    else
    {
        IvtrFetFltPha_Cnt_T_enum = IVTRFETFLTPHA_NOPHASNGFETFLT;
        IvtrFetFltTyp_Cnt_T_enum = IVTRFETFLTTYP_NOFETFLT;
    }
    (void)Rte_Write_IvtrFetFltPha_Val(IvtrFetFltPha_Cnt_T_enum);
    (void)Rte_Write_IvtrFetFltTyp_Val(IvtrFetFltTyp_Cnt_T_enum);
}

/**********************************************************************************************************************
* Name:        SpiAsyncTx
* Description: Trigger any spi transmission
* Inputs:      Channel_Cnt_T_u08  : SPI channel ID
*              TxData_Cnt_T_u16   : Data to be written to the Spi tx buffer
*              Sequence_Cnt_T_u08 : SPI sequence ID
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static INLINE FUNC(void, GateDrv0Ctrl_CODE) SpiAsyncTx( Spi_ChannelType Channel_Cnt_T_u08, 
													    Spi_DataType TxData_Cnt_T_u16,
												        Spi_SequenceType Sequence_Cnt_T_u08 )
{
	
	/* NOTE: Spi_WriteIB() is a Synchronous Reentrant function. So it's okay to use temporary variable's address 
			 as a 2nd parameter of Spi_WriteIB() function. */

	(void) Spi_WriteIB( Channel_Cnt_T_u08, &TxData_Cnt_T_u16 );
	(void) Call_Spi_AsyncTransmit( Sequence_Cnt_T_u08 );  
	
}




/**********************************************************************************************************************
* Name:        OffStVrfySt
* Description: Off state verification
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, GateDrv0Ctrl_CODE) OffStVrfySt( void )
{
	VAR(boolean,  AUTOMATIC)  Flt_Cnt_T_logl;
	VAR(boolean,  AUTOMATIC)  AtFltAndRep_Cnt_T_logl = FALSE;
	
	if( *Rte_Pim_GateDrv0OffStCnt() == 0U )
	{
		/* Enable Hardware Pin */
		(void) Rte_Call_IoHwAb_SetGpioGateDrv0Rst_Oper( STD_HIGH );
		*Rte_Pim_GateDrv0OffStCnt() = *Rte_Pim_GateDrv0OffStCnt() + 1U;
	}
	else if( *Rte_Pim_GateDrv0OffStCnt() == 1U )
	{
		*Rte_Pim_GateDrv0OffStCnt() = *Rte_Pim_GateDrv0OffStCnt() + 1U;
	}
	else
	{	/* OffSt Verification Chk and Transition to Config State */
		if((*Rte_Pim_GateDrv0OffStChkIdx() <= GATEDRVOFFSTCHKSIZE_CNT_U08))
		{
			if( *Rte_Pim_Ivtr0OffStChkCmpl() == FALSE )
			{	/* OffStChk Incomplete */
				/* Offstate Verification */
				/* OffStVrfyData */
				
				Flt_Cnt_T_logl = OffStVrfyData();
				
				if( (Flt_Cnt_T_logl == FALSE) && (*Rte_Pim_GateDrv0OffStChkIdx() == GATEDRVOFFSTCHKSIZE_CNT_U08) )
				{	/* No fault and Complete */
					
					(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X053, 0U, NTCSTS_PASSD, 0U ); 
					*Rte_Pim_Ivtr0OffStChkCmpl()  = TRUE;
				}
				else if( Flt_Cnt_T_logl == FALSE )
				{	/* No fault */
					*Rte_Pim_GateDrv0OffStChkIdx() = *Rte_Pim_GateDrv0OffStChkIdx() + 1U;
				}
				else
				{	/* At Fault and Retry */
					AtFltAndRep_Cnt_T_logl = TRUE;
				}
			}
			else
			{	/* Transition ConfigState */
		
				*Rte_Pim_GateDrv0St() = ELECGLBPRM_GATEDRVCFGST_CNT_U08;
			}
		}
		else
		{
			AtFltAndRep_Cnt_T_logl = TRUE;
		}
		
		if(AtFltAndRep_Cnt_T_logl == TRUE)
		{
			/* At Fault and Retry */
			
			if( *Rte_Pim_GateDrv0OffStChkSecAtmpt() == FALSE )
			{	/* Retry Once */
				*Rte_Pim_GateDrv0OffStCnt() = 0U;
				*Rte_Pim_GateDrv0OffStChkIdx() = 0U;
				*Rte_Pim_GateDrv0OffStChkSecAtmpt() = TRUE;
				
				(void) Rte_Call_IoHwAb_SetGpioGateDrv0Rst_Oper( STD_LOW );
			}
			else
			{	/* Failed - Move on to Config */
		
				(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X053, *Rte_Pim_GateDrv0OffStChkIdx(), NTCSTS_FAILD, 0U ); 
				*Rte_Pim_Ivtr0OffStChkCmpl() = TRUE;
			}
			
			/* Display variables in case of fault */
			*Rte_Pim_dGateDrv0CtrlGateDrv0StsVal() 				= *Rte_Pim_GateDrv0StsVal();
			*Rte_Pim_dGateDrv0CtrlGateDrv0Diag0Val() 			= *Rte_Pim_GateDrv0Diag0Val();
			*Rte_Pim_dGateDrv0CtrlGateDrv0Diag1Val() 			= *Rte_Pim_GateDrv0Diag1Val();
			*Rte_Pim_dGateDrv0CtrlGateDrv0Diag2Val() 			= *Rte_Pim_GateDrv0Diag2Val();
			*Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes0Val() 		= *Rte_Pim_GateDrv0VrfyRes0Val();
			*Rte_Pim_dGateDrv0CtrlGateDrv0VrfyRes1Val() 		= *Rte_Pim_GateDrv0VrfyRes1Val();
			*Rte_Pim_dGateDrv0CtrlGateDrv0OffsStVrfyPrmBitIdx() = *Rte_Pim_GateDrv0OffStChkIdx();
		}

	}
	
}




/**********************************************************************************************************************
* Name:        OffStVrfyData
* Description: Off state verification Data
* Inputs:      None
* Outputs:     Flt_Cnt_T_logl : Returns true if OffSt data verification failed
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(boolean, GateDrv0Ctrl_CODE) OffStVrfyData( void )
{
	VAR(uint16,    AUTOMATIC)  Tx0_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  Tx1_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  MotDrv0Diag_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  StsChk_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  Diag1Chk_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  Diag2Chk_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  VrfyRes0_Cnt_T_u16; 
	VAR(uint16,    AUTOMATIC)  VrfyRes1_Cnt_T_u16;
	
	VAR(boolean,  AUTOMATIC)  MotDrvr0Diag_Cnt_T_logl;
	VAR(boolean,  AUTOMATIC)  Flt_Cnt_T_logl = FALSE;

    VAR(Spi_SeqResultType, AUTOMATIC) GateDrv0VrfyCmd0SeqRes_Cnt_T_enum;
    VAR(Spi_SeqResultType, AUTOMATIC) GateDrv0CtrlSeqRes_Cnt_T_enum;
	
	Tx0_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv0OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKREGWR1COL_CNT_U08];
	Tx1_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv0OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKREGWR2COL_CNT_U08];
	MotDrv0Diag_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv0OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKDIGPINVRFYCOL_CNT_U08];
	StsChk_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv0OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKSTSREGCOL_CNT_U08];
	Diag1Chk_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv0OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKDIAG1REGCOL_CNT_U08];
	Diag2Chk_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv0OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKDIAG2REGCOL_CNT_U08];
	VrfyRes0_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv0OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES0COL_CNT_U08];
	VrfyRes1_Cnt_T_u16 = ELECGLBPRM_GATEDRVOFFSTCHKDATA_CNT_U16[*Rte_Pim_GateDrv0OffStChkIdx()][ELECGLBPRM_GATEDRVOFFSTCHKVRFYRES1COL_CNT_U08];
	
	if( Tx0_Cnt_T_u16 != 0U )
	{
        GateDrv0VrfyCmd0SeqRes_Cnt_T_enum = Spi_GetSequenceResult(SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq);
        if(GateDrv0VrfyCmd0SeqRes_Cnt_T_enum != SPI_SEQ_PENDING)
        {
            SpiAsyncTx( SpiConf_SpiChannel_GateDrv0VrfyCmd0Ch, Tx0_Cnt_T_u16, SpiConf_SpiSequence_GateDrv0VrfyCmd0Seq );
        }
        else
        {
            /*** ErrCntr++ ***/
            /*Rollover is intentional*/
            *Rte_Pim_GateDrv0SpiTrsmErrCntr() = (*Rte_Pim_GateDrv0SpiTrsmErrCntr()) + 1UL;
        }
	}
	
	if( Tx1_Cnt_T_u16 != 0U )
	{
        GateDrv0CtrlSeqRes_Cnt_T_enum = Spi_GetSequenceResult(SpiConf_SpiSequence_GateDrv0CtrlSeq);
        if(GateDrv0CtrlSeqRes_Cnt_T_enum != SPI_SEQ_PENDING)
        {
            SpiAsyncTx( SpiConf_SpiChannel_GateDrv0CtrlCh, Tx1_Cnt_T_u16, SpiConf_SpiSequence_GateDrv0CtrlSeq );
        }
        else
        {
            /*** ErrCntr++ ***/
            /*Rollover is intentional*/
            *Rte_Pim_GateDrv0SpiTrsmErrCntr() = (*Rte_Pim_GateDrv0SpiTrsmErrCntr()) + 1UL;
        }
	}
	
	if( MotDrv0Diag_Cnt_T_u16 != 0U )
	{
		(void) Rte_Call_IoHwAb_GetGpioMotDrvr0Diag_Oper( &MotDrvr0Diag_Cnt_T_logl );
		if( MotDrvr0Diag_Cnt_T_logl == STD_LOW )
		{	/* Physcial Fault Pin Active */
			Flt_Cnt_T_logl = TRUE;
		}
	}
	
	if( (StsChk_Cnt_T_u16 != 0U) && ( ((*Rte_Pim_GateDrv0StsVal()) & StsChk_Cnt_T_u16) != StsChk_Cnt_T_u16 ) ) 
	{
		Flt_Cnt_T_logl = TRUE;
	}
	else if( (Diag1Chk_Cnt_T_u16 != 0U) && ( ((*Rte_Pim_GateDrv0Diag1Val()) & Diag1Chk_Cnt_T_u16) != Diag1Chk_Cnt_T_u16 ) )
	{
		Flt_Cnt_T_logl = TRUE;
	}
	else if( (Diag2Chk_Cnt_T_u16 != 0U) && ( ((*Rte_Pim_GateDrv0Diag2Val()) & Diag2Chk_Cnt_T_u16) != Diag2Chk_Cnt_T_u16 ) )
	{
		Flt_Cnt_T_logl = TRUE;
	}
	else if( (VrfyRes0_Cnt_T_u16 != 0U) && ( ((*Rte_Pim_GateDrv0VrfyRes0Val()) & VrfyRes0_Cnt_T_u16) != 0U ) )
	{
		Flt_Cnt_T_logl = TRUE;
	}
	else if( (VrfyRes1_Cnt_T_u16 != 0U) && ( ((*Rte_Pim_GateDrv0VrfyRes1Val()) & VrfyRes1_Cnt_T_u16) != VrfyRes1_Cnt_T_u16 ) )
	{
		Flt_Cnt_T_logl = TRUE;
	}
	else
	{
		/* Do nothing */
	}
	
	return Flt_Cnt_T_logl;
}




/**********************************************************************************************************************
* Name:        CfgSt
* Description: Configure gate drive
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, GateDrv0Ctrl_CODE) CfgSt( void )
{
    VAR(Spi_SeqResultType, AUTOMATIC) GateDrv0AllCfgSeqRes_Cnt_T_enum;
    VAR(Spi_DataType     , AUTOMATIC) DataBufferPtr_Cnt_T_u16;
	switch( *Rte_Pim_GateDrv0CfgCnt()  )
	{
		case GATEDRVCFGST_RSTGATEDRV: /* Enable Hardware Pin */
			(void) Rte_Call_IoHwAb_SetGpioGateDrv0Rst_Oper( STD_HIGH );
			*Rte_Pim_GateDrv0CfgCnt() = GATEDRVCFGST_WAIT2MS;
		break;
		
		case GATEDRVCFGST_WAIT2MS:
			*Rte_Pim_GateDrv0CfgCnt() = GATEDRVCFGST_CFGREG;
		break;
			
		case GATEDRVCFGST_CFGREG: /* Configure Registers */
        
            GateDrv0AllCfgSeqRes_Cnt_T_enum = Spi_GetSequenceResult(SpiConf_SpiSequence_GateDrv0AllCfgSeq);
            if(GateDrv0AllCfgSeqRes_Cnt_T_enum != SPI_SEQ_PENDING)
            {
				*Rte_Pim_GateDrv0SpiErrSecAtmpt() = FALSE;
                /*** SPI Tx ***/
                
                /* Config 0 Register Write */
                DataBufferPtr_Cnt_T_u16 = GATEDRV0CFG0WRVAL_CNT_U16;
                (void)Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg0Ch, &DataBufferPtr_Cnt_T_u16);
                
                /* Config 1 Register Write */
                DataBufferPtr_Cnt_T_u16 = GATEDRV0CFG1WRVAL_CNT_U16;
                (void)Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg1Ch, &DataBufferPtr_Cnt_T_u16);
                
                /* Config 2 Register Write */
                DataBufferPtr_Cnt_T_u16 = Rte_Prm_GateDrv0CtrlUnit0Cfg2WrVal_Val();
                (void)Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg2Ch, &DataBufferPtr_Cnt_T_u16);
                
                /* Config 3 Register Write */
                DataBufferPtr_Cnt_T_u16 = Rte_Prm_GateDrv0CtrlUnit0Cfg3WrVal_Val();
                (void)Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg3Ch, &DataBufferPtr_Cnt_T_u16);
                
                /* Config 4 Register Write */
                DataBufferPtr_Cnt_T_u16 = Rte_Prm_GateDrv0CtrlUnit0Cfg4WrVal_Val();
                (void)Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg4Ch, &DataBufferPtr_Cnt_T_u16);
                
                /* Config 5 Register Write */
                DataBufferPtr_Cnt_T_u16 = GATEDRV0CFG5WRVAL_CNT_U16;
                (void)Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg5Ch, &DataBufferPtr_Cnt_T_u16);
                
                /* Config 6 Register Write */
                DataBufferPtr_Cnt_T_u16 = GATEDRV0CFG6WRVAL_CNT_U16;
                (void)Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg6Ch, &DataBufferPtr_Cnt_T_u16);
                
                /* Config 7 Register Write */
                DataBufferPtr_Cnt_T_u16 = Rte_Prm_GateDrv0CtrlUnit0Cfg7WrVal_Val();
                (void)Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg7Ch, &DataBufferPtr_Cnt_T_u16);
                
                /* Control Register Write */
                DataBufferPtr_Cnt_T_u16 = GATEDRV0CTRLVAL_CNT_U16;
                (void)Spi_WriteIB( SpiConf_SpiChannel_GateDrv0CtrlCh, &DataBufferPtr_Cnt_T_u16);
                
                /* Mask 1 Register Write */
                DataBufferPtr_Cnt_T_u16 = GATEDRV0MASK1VAL_CNT_U16;
                (void)Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Mask1Ch, &DataBufferPtr_Cnt_T_u16);
                
                /* Mask 2 Register Write */
                DataBufferPtr_Cnt_T_u16 = GATEDRV0MASK2VAL_CNT_U16;
                (void)Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Mask2Ch, &DataBufferPtr_Cnt_T_u16);
                
                (void) Call_Spi_AsyncTransmit(SpiConf_SpiSequence_GateDrv0AllCfgSeq);
                *Rte_Pim_GateDrv0CfgCnt() = GATEDRVCFGST_SETUPSPIREGREAD;
            }
            else
            {
                /*** Retry ***/
                if( *Rte_Pim_GateDrv0SpiErrSecAtmpt() == FALSE)
                {
                    /*** Retry Once ***/
                    *Rte_Pim_GateDrv0SpiErrSecAtmpt() = TRUE;
                    *Rte_Pim_GateDrv0CfgCnt() = GATEDRVCFGST_CFGREG; /* Stay in same state for second Attempt */
                }
                else
                {
                    /*** Set Fault ***/
                    (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X053,(ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08+SPIBUSCFGFLTPRMBYTEOFFS_CNT_U08), NTCSTS_FAILD, 0U);
                    *Rte_Pim_GateDrv0St() = ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08;
                    *Rte_Pim_GateDrv0CfgCnt() = GATEDRVCFGST_SETUPSPIREGREAD; /*To Match with the model : no effect*/
                    (void) Rte_Write_MotDrvr0IninTestCmpl_Logl( TRUE );  /* Write module o/p */
                }
            }
		break;
		
		case GATEDRVCFGST_SETUPSPIREGREAD: /* Set up read back of Registers */
        /*** Setup Readback of Gate Drv 0 ***/
        GateDrv0AllCfgSeqRes_Cnt_T_enum = Spi_GetSequenceResult(SpiConf_SpiSequence_GateDrv0AllCfgSeq);
        if(GateDrv0AllCfgSeqRes_Cnt_T_enum != SPI_SEQ_PENDING)
        {
            /*** Send Tx ***/
            *Rte_Pim_GateDrv0SpiErrSecAtmpt() = FALSE;
            
            /* Config 0 Register read command */
            DataBufferPtr_Cnt_T_u16 = GATEDRV0CFG0READVAL_CNT_U16;
			(void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg0Ch, &DataBufferPtr_Cnt_T_u16);
            
			/* Config 1 Register read command */
            DataBufferPtr_Cnt_T_u16 = GATEDRV0CFG1READVAL_CNT_U16;
			(void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg1Ch, &DataBufferPtr_Cnt_T_u16);
            
			/* Config 2 Register read command */
            DataBufferPtr_Cnt_T_u16 = GATEDRV0CFG2READVAL_CNT_U16;
			(void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg2Ch, &DataBufferPtr_Cnt_T_u16);
            
			/* Config 3 Register read command */
            DataBufferPtr_Cnt_T_u16 = GATEDRV0CFG3READVAL_CNT_U16;
			(void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg3Ch, &DataBufferPtr_Cnt_T_u16);
            
			/* Config 4 Register read command */
            DataBufferPtr_Cnt_T_u16 = GATEDRV0CFG4READVAL_CNT_U16;
			(void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg4Ch, &DataBufferPtr_Cnt_T_u16);
            
			/* Config 5 Register read command */
            DataBufferPtr_Cnt_T_u16 = GATEDRV0CFG5READVAL_CNT_U16;
			(void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg5Ch, &DataBufferPtr_Cnt_T_u16);
            
			/* Config 6 Register read command */
            DataBufferPtr_Cnt_T_u16 = GATEDRV0CFG6READVAL_CNT_U16;
			(void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg6Ch, &DataBufferPtr_Cnt_T_u16);
            
			/* Config 7 Register read command */
            DataBufferPtr_Cnt_T_u16 = GATEDRV0CFG7READVAL_CNT_U16;
			(void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Cfg7Ch, &DataBufferPtr_Cnt_T_u16);
            
			/* Control Register read command */
            DataBufferPtr_Cnt_T_u16 = GATEDRV0CTRLREADVAL_CNT_U16;
			(void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0CtrlCh, &DataBufferPtr_Cnt_T_u16);
            
			/* Mask 1 Register read command */
            DataBufferPtr_Cnt_T_u16 = GATEDRV0MASK1READVAL_CNT_U16;
			(void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Mask1Ch, &DataBufferPtr_Cnt_T_u16);
            
			/* Mask 2 Register read command */
            DataBufferPtr_Cnt_T_u16 = GATEDRV0MASK2READVAL_CNT_U16;
			(void) Spi_WriteIB( SpiConf_SpiChannel_GateDrv0Mask2Ch, &DataBufferPtr_Cnt_T_u16);
            
            (void) Call_Spi_AsyncTransmit(SpiConf_SpiSequence_GateDrv0AllCfgSeq);
            *Rte_Pim_GateDrv0CfgCnt() = GATEDRVCFGST_READBACKREGS;
        }
        else
        {
            /*** Retry ***/
            if( *Rte_Pim_GateDrv0SpiErrSecAtmpt() == FALSE)
            {
                /*** Retry Once ***/
                *Rte_Pim_GateDrv0SpiErrSecAtmpt() = TRUE;
                *Rte_Pim_GateDrv0CfgCnt() = GATEDRVCFGST_SETUPSPIREGREAD; /*To return to this same case */
            }
            else
            {
                /*** Set Fault ***/
                (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X053,(ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08+SPIBUSSETUPREADBACKCFGFLTPRMBYTEOFFS_CNT_U08), NTCSTS_FAILD, 0U);
                *Rte_Pim_GateDrv0St() = ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08;
                *Rte_Pim_GateDrv0CfgCnt() = GATEDRVCFGST_READBACKREGS; /* To Match with model : no effect*/
                (void) Rte_Write_MotDrvr0IninTestCmpl_Logl( TRUE );  /* Write module o/p */
            }
        }
		break;
		
		default : /* GATEDRVCFGST_READBACKREGS : Read back Registers */
			ReadBackRegs();
		break;
	}
}




/**********************************************************************************************************************
* Name:        ReadBackRegs
* Description: Read back the gate drive registers and retry
* Inputs:      None
* Outputs:     None
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, GateDrv0Ctrl_CODE) ReadBackRegs( void )
{
	VAR(uint16,  AUTOMATIC)  Cfg0RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg1RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg2RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg3RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg4RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg5RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg6RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Cfg7RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  CtrlRxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Mask1RxBuf_Cnt_T_u16;
	VAR(uint16,  AUTOMATIC)  Mask2RxBuf_Cnt_T_u16;
	
	VAR(uint8,   AUTOMATIC)  PrmByte_Cnt_T_u08;

    VAR(Spi_SeqResultType, AUTOMATIC) GateDrv0AllCfgSeqRes_Cnt_T_enum;
	
	/* Read Gate Drive 0 registers */
    GateDrv0AllCfgSeqRes_Cnt_T_enum = Spi_GetSequenceResult(SpiConf_SpiSequence_GateDrv0AllCfgSeq);
    if(GateDrv0AllCfgSeqRes_Cnt_T_enum != SPI_SEQ_PENDING)
    {
        *Rte_Pim_GateDrv0SpiErrSecAtmpt() = FALSE;
        /*** Read ***/
        (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Cfg0Ch,  &Cfg0RxBuf_Cnt_T_u16 );
        (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Cfg1Ch,  &Cfg1RxBuf_Cnt_T_u16 );
        (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Cfg2Ch,  &Cfg2RxBuf_Cnt_T_u16 );
        (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Cfg3Ch,  &Cfg3RxBuf_Cnt_T_u16 );
        (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Cfg4Ch,  &Cfg4RxBuf_Cnt_T_u16 );
        (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Cfg5Ch,  &Cfg5RxBuf_Cnt_T_u16 );
        (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Cfg6Ch,  &Cfg6RxBuf_Cnt_T_u16 );
        (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Cfg7Ch,  &Cfg7RxBuf_Cnt_T_u16 );
        (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0CtrlCh,  &CtrlRxBuf_Cnt_T_u16 );
        (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Mask1Ch, &Mask1RxBuf_Cnt_T_u16 );
        (void) Spi_ReadIB( SpiConf_SpiChannel_GateDrv0Mask2Ch, &Mask2RxBuf_Cnt_T_u16 );

        /* Verify Gate Drive registers */
        if( (Cfg0RxBuf_Cnt_T_u16 & GATEDRV0CHKVALMASK_CNT_U16) != (GATEDRV0CFG0WRVAL_CNT_U16 & GATEDRV0CHKVALMASK_CNT_U16) )
        {
            PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + CFG0REGFLTPRMBYTEOFFS_CNT_U08;
        }
        else if( (Cfg1RxBuf_Cnt_T_u16 & GATEDRV0CHKVALMASK_CNT_U16) != (GATEDRV0CFG1WRVAL_CNT_U16 & GATEDRV0CHKVALMASK_CNT_U16) )
        {
            PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + CFG1REGFLTPRMBYTEOFFS_CNT_U08;
        }
        else if( (Cfg2RxBuf_Cnt_T_u16 & GATEDRV0CHKVALMASK_CNT_U16) != (Rte_Prm_GateDrv0CtrlUnit0Cfg2WrVal_Val() & GATEDRV0CHKVALMASK_CNT_U16) )
        {
            PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + CFG2REGFLTPRMBYTEOFFS_CNT_U08;
        }
        else if( (Cfg3RxBuf_Cnt_T_u16 & GATEDRV0CHKVALMASK_CNT_U16) != (Rte_Prm_GateDrv0CtrlUnit0Cfg3WrVal_Val() & GATEDRV0CHKVALMASK_CNT_U16) )
        {
            PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + CFG3REGFLTPRMBYTEOFFS_CNT_U08;
        }
        else if( (Cfg4RxBuf_Cnt_T_u16 & GATEDRV0CHKVALMASK_CNT_U16) != (Rte_Prm_GateDrv0CtrlUnit0Cfg4WrVal_Val() & GATEDRV0CHKVALMASK_CNT_U16) )
        {
            PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + CFG4REGFLTPRMBYTEOFFS_CNT_U08;
        }
        else if( (Cfg5RxBuf_Cnt_T_u16 & GATEDRV0CHKVALMASK_CNT_U16) != (GATEDRV0CFG5WRVAL_CNT_U16 & GATEDRV0CHKVALMASK_CNT_U16) )
        {
            PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + CFG5REGFLTPRMBYTEOFFS_CNT_U08;
        }
        else if( (Cfg6RxBuf_Cnt_T_u16 & GATEDRV0CHKVALMASK_CNT_U16) != (GATEDRV0CFG6WRVAL_CNT_U16 & GATEDRV0CHKVALMASK_CNT_U16) )
        {
            PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + CFG6REGFLTPRMBYTEOFFS_CNT_U08;
        }
        else if( (Cfg7RxBuf_Cnt_T_u16 & GATEDRV0CHKVALMASK_CNT_U16) != (Rte_Prm_GateDrv0CtrlUnit0Cfg7WrVal_Val() & GATEDRV0CHKVALMASK_CNT_U16) )
        {
            PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + CFG7REGFLTPRMBYTEOFFS_CNT_U08;
        }
        else if( (CtrlRxBuf_Cnt_T_u16 & GATEDRV0CHKVALMASK_CNT_U16) != (GATEDRV0CTRLVAL_CNT_U16 & GATEDRV0CHKVALMASK_CNT_U16) )
        {
            PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + CTRLREGFLTPRMBYTEOFFS_CNT_U08;
        }
        else if( (Mask1RxBuf_Cnt_T_u16 & GATEDRV0CHKVALMASK_CNT_U16) != (GATEDRV0MASK1VAL_CNT_U16 & GATEDRV0CHKVALMASK_CNT_U16) )
        {
            PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + MASKREG1FLTPRMBYTEOFFS_CNT_U08;
        }
        else if( (Mask2RxBuf_Cnt_T_u16 & GATEDRV0CHKVALMASK_CNT_U16) != (GATEDRV0MASK2VAL_CNT_U16 & GATEDRV0CHKVALMASK_CNT_U16) )
        {
            PrmByte_Cnt_T_u08 = ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08 + MASKREG2FLTPRMBYTEOFFS_CNT_U08;
        }
        else
        {
            PrmByte_Cnt_T_u08 = 0U;
        }

        /*Check Result of Readback*/
        ChkResVrfyRegs(PrmByte_Cnt_T_u08);
    }
    else
    {
        /*** Retry ***/
        if( *Rte_Pim_GateDrv0SpiErrSecAtmpt() == FALSE)
        {
            /*** Retry Once ***/
            *Rte_Pim_GateDrv0SpiErrSecAtmpt() = TRUE;
            *Rte_Pim_GateDrv0CfgCnt() = GATEDRVCFGST_READBACKREGS;
        }
        else
        {
            /*** Set Fault ***/
            (void) Rte_Call_SetNtcSts_Oper( NTCNR_0X053, (ELECGLBPRM_GATEDRVCFGSTPRMBITSTRTGIDX_CNT_U08+SPIBUSREADBACKCFGFLTPRMBYTEOFFS_CNT_U08), NTCSTS_FAILD, 0U);
            *Rte_Pim_GateDrv0St() = ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08;
            (void) Rte_Write_MotDrvr0IninTestCmpl_Logl( TRUE ); /* Write Module o/p */
        }
    }		
}

/**********************************************************************************************************************
* Name:        ChkResVrfyRegs
* Description: Check Results of Verify GateDrive0 Registers based on
*              calculated parameter byte and take appropriate action
* Inputs:      PrmByte_Cnt_T_u08: Parameter byte for NTCNR_0X053
*              Rte_Pim_GateDrv0CfgSecAtmpt : Gate Drive 0 Off State Verification Check Second Attempt Flag
* Outputs:     Rte_Pim_GateDrv0CfgSecAtmpt : Gate Drive 0 Off State Verification Check Second Attempt Flag
*              Rte_Pim_GateDrv0CfgCnt      : Configuration Step or Count Number associated with Gate Drive 0 init
*              Rte_Pim_GateDrv0St          : Operating State of the Gate Drive function when System State is in
*                                            WARM INIT/ENABLE.
*              MotDrvr0IninTestCmpl_Logl   : Warm Init configuration and verification test complete flag RTE output
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(void, GateDrv0Ctrl_CODE) ChkResVrfyRegs(VAR(uint8, AUTOMATIC) PrmByte_Cnt_T_u08)
{
    if( PrmByte_Cnt_T_u08 != 0U )
	{
		if( *Rte_Pim_GateDrv0CfgSecAtmpt() == FALSE )
		{ /* Retry once */
			*Rte_Pim_GateDrv0CfgCnt() = GATEDRVCFGST_RSTGATEDRV;
			*Rte_Pim_GateDrv0CfgSecAtmpt() = TRUE;
			
			/* Reset GateDrive. Or disable Hardware Pin */
			(void) Rte_Call_IoHwAb_SetGpioGateDrv0Rst_Oper( STD_LOW );
		}
		else
		{	/* Failed - Move on to Operate */
			*Rte_Pim_GateDrv0St() = ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08;
			(void) Rte_Write_MotDrvr0IninTestCmpl_Logl( TRUE );  /* Write module o/p */
			(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X053, PrmByte_Cnt_T_u08, NTCSTS_FAILD, 0U ); 
		}
	}
	else
	{	/* Passed - Move on to Operate */
		*Rte_Pim_GateDrv0St() = ELECGLBPRM_GATEDRVOPERFLTMONRST_CNT_U08;
		(void) Rte_Write_MotDrvr0IninTestCmpl_Logl( TRUE );  /* Write module o/p */
	}
}

/*****************************************************************************************************************************
* Name:        OperFltMonrSt
* Description: Runtime diagnostics for the gate drive
* Inputs:      PhaOnTiMeasdA_NanoSec_T_u32: Phase on Time Measured A RTE Input
*              PhaOnTiMeasdB_NanoSec_T_u32: Phase on Time Measured B RTE Input
*              PhaOnTiMeasdC_NanoSec_T_u32: Phase on Time Measured C RTE Input
*              PhaOnTiSumAExp_NanoSec_T_u32: Phase on Time Summation A RTE Input
*              PhaOnTiSumBExp_NanoSec_T_u32: Phase on Time Summation B RTE Input
*              PhaOnTiSumCExp_NanoSec_T_u32: Phase on Time Summation C RTE Input
*              Rte_Pim_GateDrv0Diag0Val : Gate Drive 0 Diagnostic Register 0 Value
*              Rte_Pim_GateDrv0Diag1Val : Gate Drive 0 Diagnostic Register 1 Value
*              Rte_Pim_GateDrv0Diag2Val : Gate Drive 0 Diagnostic Register 2 Value
*              Rte_Pim_GateDrv0StsVal   : Gate Drive 0 Status Register Value
*              Rte_Pim_GateDrv0VrfyRes0Val : Gate Drive 0 Verify Result 0 Value
*              Rte_Pim_GateDrv0VrfyRes1Val : Gate Drive 0 Verify Result 1 Value
* Outputs:     Rte_Pim_GateDrv0CfgSecAtmpt : Gate Drive 0 Off State Verification Check Second Attempt
*              Rte_Pim_GateDrv0CfgCnt      : Configuration Step or Count Number associated with Gate Drive 0 Initialization
*              Rte_Pim_GateDrv0St          : Operating State of the Gate Drive function when System State is in WARM INIT/ENABLE
*              Rte_Pim_Ivtr0GenericFltPrmVal : Inverter 0 NTC Number 0x50 Parameter Value
*              Rte_Pim_Ivtr0BootstrpSplyFltPrmVal : Inverter 0 NTC Number 0x55 Parameter Value
*              MotDrvErrA : Filtered value of difference between PhaOnTiSumAExp with GateDrv0ErrOffs and PhaOnTiMeasdA
*              MotDrvErrB : Filtered value of difference between PhaOnTiSumBExp with GateDrv0ErrOffs and PhaOnTiMeasdB
*              MotDrvErrC : Filtered value of difference between PhaOnTiSumCExp with GateDrv0ErrOffs and PhaOnTiMeasdC
* In/Outs:     Rte_Pim_GateDrv0PhaAFilLp : Status of phase voltage on time for Lowpass filter for Phase A
*              Rte_Pim_GateDrv0PhaBFilLp : Status of phase voltage on time for Lowpass filter for Phase B
*              Rte_Pim_GateDrv0PhaCFilLp : Status of phase voltage on time for Lowpass filter for Phase C
* Usage Notes: None
******************************************************************************************************************************/
static FUNC(void, GateDrv0Ctrl_CODE) OperFltMonrSt( VAR(uint32, AUTOMATIC) PhaOnTiMeasdA_NanoSec_T_u32,
                                                    VAR(uint32, AUTOMATIC) PhaOnTiMeasdB_NanoSec_T_u32,
                                                    VAR(uint32, AUTOMATIC) PhaOnTiMeasdC_NanoSec_T_u32,
                                                    VAR(uint32, AUTOMATIC) PhaOnTiSumAExp_NanoSec_T_u32,
                                                    VAR(uint32, AUTOMATIC) PhaOnTiSumBExp_NanoSec_T_u32,
                                                    VAR(uint32, AUTOMATIC) PhaOnTiSumCExp_NanoSec_T_u32)
{
	
	VAR(boolean, AUTOMATIC) GenGateDrvFlt1_Cnt_T_logl = FALSE;
	VAR(boolean, AUTOMATIC) GenGateDrvFlt2_Cnt_T_logl = FALSE;
	VAR(boolean, AUTOMATIC) GenGateDrvFlt3_Cnt_T_logl = FALSE;
	VAR(boolean, AUTOMATIC) Ivtr0PhyFltInpActv_Cnt_T_logl;
	VAR(uint16 , AUTOMATIC) GateDrvAllSts_Cnt_T_u16;
    VAR(boolean, AUTOMATIC) GateDrv0PhaReasbnDiagcEna_Cnt_T_logl;
    VAR(uint8  , AUTOMATIC) NtcStInfoABC_Uls_T_u08 = 0U;
    VAR(float32, AUTOMATIC) AbsltErrA_NanoSec_T_f32;
    VAR(float32, AUTOMATIC) AbsltErrB_NanoSec_T_f32;
    VAR(float32, AUTOMATIC) AbsltErrC_NanoSec_T_f32;
    VAR(boolean, AUTOMATIC) FltA_Uls_T_logl;
    VAR(boolean, AUTOMATIC) FltB_Uls_T_logl;
    VAR(boolean, AUTOMATIC) FltC_Uls_T_logl;
    VAR(uint32 , AUTOMATIC) SpclSnpshtData0_Cnt_T_u32 = 0U;
    VAR(uint32 , AUTOMATIC) SpclSnpshtData1_Cnt_T_u32 = 0U;
    VAR(uint32 , AUTOMATIC) SpclSnpshtData2_Cnt_T_u32 = 0U;

	/* Read IRV */
	Ivtr0PhyFltInpActv_Cnt_T_logl = Rte_IrvRead_GateDrv0CtrlPer2_Ivtr0PhyFltInpActv();
    GateDrv0PhaReasbnDiagcEna_Cnt_T_logl = Rte_IrvRead_GateDrv0CtrlPer2_GateDrv0PhaReasbnDiagcEna();
	
	/***********************************************************************************/
	/*** --------------------- START: Determine Gate Drive fault ------------------- ***/
	/***********************************************************************************/
	
	GateDrvAllSts_Cnt_T_u16 =  (*Rte_Pim_GateDrv0Diag0Val() |
								*Rte_Pim_GateDrv0Diag1Val() |
								*Rte_Pim_GateDrv0Diag2Val() |
								*Rte_Pim_GateDrv0StsVal()   |
								*Rte_Pim_GateDrv0VrfyRes0Val() |
								*Rte_Pim_GateDrv0VrfyRes1Val());
	
	if((GateDrvAllSts_Cnt_T_u16 & 0x2000U) != 0U)
	{
		/*** Rerun Config State ***/
		*Rte_Pim_GateDrv0CfgSecAtmpt() 	= FALSE;
		*Rte_Pim_GateDrv0CfgCnt()       = GATEDRVCFGST_RSTGATEDRV;
		*Rte_Pim_GateDrv0St() = ELECGLBPRM_GATEDRVCFGST_CNT_U08;
		*Rte_Pim_Ivtr0GenericFltPrmVal() |= GENGATEDRVFLTPRM_CNT_U08;
		GenGateDrvFlt1_Cnt_T_logl = TRUE;
        SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) | (*Rte_Pim_GateDrv0StsVal()));
        SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) | (*Rte_Pim_GateDrv0Diag1Val()));
        SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) | (*Rte_Pim_GateDrv0VrfyRes0Val()));
	}
	else if((GateDrvAllSts_Cnt_T_u16 & 0x5E00U) != 0U)
	{
        /*** Status Register indicates Fault ***/
		/* Determine OnState Single FET Fault */
		GenGateDrvFlt1_Cnt_T_logl = GateDrvDetermineOnStSngFETFlt(&SpclSnpshtData0_Cnt_T_u32,
                                                                  &SpclSnpshtData1_Cnt_T_u32,
                                                                  &SpclSnpshtData2_Cnt_T_u32);
		/* Determine VREG/Bootstrap Voltage Fault */
		GenGateDrvFlt2_Cnt_T_logl = GateDrvDetermineVltgFlt(&SpclSnpshtData0_Cnt_T_u32,
                                                            &SpclSnpshtData1_Cnt_T_u32,
                                                            &SpclSnpshtData2_Cnt_T_u32);
		/* Determine Generic Gate Drive Fault */
		GenGateDrvFlt3_Cnt_T_logl = GateDrvDetermineGenericFlt(GateDrvAllSts_Cnt_T_u16,
                                                               &SpclSnpshtData0_Cnt_T_u32,
                                                               &SpclSnpshtData1_Cnt_T_u32,
                                                               &SpclSnpshtData2_Cnt_T_u32);
	}
	else if( Ivtr0PhyFltInpActv_Cnt_T_logl == TRUE ) 
	{	/* Only Physical Fault Pin Active */
		
		*Rte_Pim_Ivtr0GenericFltPrmVal() |= GENGATEDRVFLTPRM_CNT_U08;
        GenGateDrvFlt1_Cnt_T_logl = TRUE;
        SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) | (*Rte_Pim_GateDrv0StsVal()));
        SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) | (*Rte_Pim_GateDrv0Diag1Val()));
        SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) | (*Rte_Pim_GateDrv0VrfyRes0Val()));
	}
	else
	{	/* No Faults */
		*Rte_Pim_Ivtr0BootstrpSplyFltPrmVal() 	= 0U;
		
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X051, 0U, 
										NTCSTS_PREPASSD, Rte_Prm_GateDrv0CtrlNtcNr0x051PassStep_Val() );
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X055, 0U,   
										NTCSTS_PREPASSD, Rte_Prm_GateDrv0CtrlNtcNr0x055PassStep_Val() );	
        /*Check for Phase Reasonableness*/
        if(GateDrv0PhaReasbnDiagcEna_Cnt_T_logl == TRUE)
        {
            /***MeasdPhaFltChkABC***/
            /*-- Error Computation --*/
            if((GATEDRV0FETFLTMTGTNENA_ULS_LOGL == TRUE) && (*Rte_Pim_IvtrFetFltPhaDataStore() == IVTRFETFLTPHA_PHAASNGFETFLT))
            {
                /* Phase A FET Fault. Defeat Phase A Reasonableness*/
                AbsltErrA_NanoSec_T_f32 = 0.0F;
                FltA_Uls_T_logl         = FALSE;
            }
            else
            {
                /*No Phase A FET Fault (or) FetFltMtgn Disabled*/
                AbsltErrA_NanoSec_T_f32 = Abslt_f32_f32(FilLpUpdOutp_f32(((float32)PhaOnTiSumAExp_NanoSec_T_u32 - 
                                                        (float32)PhaOnTiMeasdA_NanoSec_T_u32  - 
                                                        (float32)Rte_Prm_GateDrv0CtrlErrOffs_Val()),
                                                        Rte_Pim_GateDrv0PhaAFilLp()));

                FltA_Uls_T_logl = SetNtcStInfo(PhaOnTiMeasdA_NanoSec_T_u32,
                                            PhaOnTiSumAExp_NanoSec_T_u32,
                                            AbsltErrA_NanoSec_T_f32,
                                            BITMASK0_CNT_U08,
                                            &NtcStInfoABC_Uls_T_u08);
            }

            if((GATEDRV0FETFLTMTGTNENA_ULS_LOGL == TRUE) && (*Rte_Pim_IvtrFetFltPhaDataStore() == IVTRFETFLTPHA_PHABSNGFETFLT))
            {
                /* Phase B FET Fault. Defeat Phase B Reasonableness*/
                AbsltErrB_NanoSec_T_f32 = 0.0F;
                FltB_Uls_T_logl         = FALSE;
            }
            else
            {
                /*No Phase B FET Fault (or) FetFltMtgn Disabled*/
                AbsltErrB_NanoSec_T_f32 = Abslt_f32_f32(FilLpUpdOutp_f32(((float32)PhaOnTiSumBExp_NanoSec_T_u32 - 
                                                        (float32)PhaOnTiMeasdB_NanoSec_T_u32  - 
                                                        (float32)Rte_Prm_GateDrv0CtrlErrOffs_Val()),
                                                        Rte_Pim_GateDrv0PhaBFilLp()));

                FltB_Uls_T_logl = SetNtcStInfo(PhaOnTiMeasdB_NanoSec_T_u32,
                                           PhaOnTiSumBExp_NanoSec_T_u32,
                                           AbsltErrB_NanoSec_T_f32,
                                           BITMASK2_CNT_U08,
                                           &NtcStInfoABC_Uls_T_u08);
            }

            if((GATEDRV0FETFLTMTGTNENA_ULS_LOGL == TRUE) && (*Rte_Pim_IvtrFetFltPhaDataStore() == IVTRFETFLTPHA_PHACSNGFETFLT))
            {
                /* Phase C FET Fault. Defeat Phase C Reasonableness*/
                AbsltErrC_NanoSec_T_f32 = 0.0F;
                FltC_Uls_T_logl         = FALSE;
            }
            else
            {
                /*No Phase C FET Fault (or) FetFltMtgn Disabled*/
                AbsltErrC_NanoSec_T_f32 = Abslt_f32_f32(FilLpUpdOutp_f32(((float32)PhaOnTiSumCExp_NanoSec_T_u32 - 
                                                        (float32)PhaOnTiMeasdC_NanoSec_T_u32  - 
                                                        (float32)Rte_Prm_GateDrv0CtrlErrOffs_Val()),
                                                        Rte_Pim_GateDrv0PhaCFilLp()));

                FltC_Uls_T_logl = SetNtcStInfo(PhaOnTiMeasdC_NanoSec_T_u32,
                                            PhaOnTiSumCExp_NanoSec_T_u32,
                                            AbsltErrC_NanoSec_T_f32,
                                            BITMASK4_CNT_U08,
                                            &NtcStInfoABC_Uls_T_u08);
            }

            /*-- Set Fault Info --*/
            if((FltA_Uls_T_logl == TRUE) || (FltB_Uls_T_logl == TRUE) || (FltC_Uls_T_logl == TRUE))
            {
                (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X054, NtcStInfoABC_Uls_T_u08, NTCSTS_FAILD, 0U);   
            }
            else
            {
                (void)Rte_Call_SetNtcSts_Oper(NTCNR_0X054, NtcStInfoABC_Uls_T_u08, NTCSTS_PASSD , 0U); 
            }
            
            (void)Rte_Write_MotDrvErrA_Val(Lim_f32(AbsltErrA_NanoSec_T_f32, MOTDRVERRMIN_NANOSEC_F32, MOTDRVERRMAX_NANOSEC_F32));
            (void)Rte_Write_MotDrvErrB_Val(Lim_f32(AbsltErrB_NanoSec_T_f32, MOTDRVERRMIN_NANOSEC_F32, MOTDRVERRMAX_NANOSEC_F32));
            (void)Rte_Write_MotDrvErrC_Val(Lim_f32(AbsltErrC_NanoSec_T_f32, MOTDRVERRMIN_NANOSEC_F32, MOTDRVERRMAX_NANOSEC_F32));
        }
	}
	
	if( (GenGateDrvFlt1_Cnt_T_logl == TRUE) || (GenGateDrvFlt2_Cnt_T_logl == TRUE) || (GenGateDrvFlt3_Cnt_T_logl == TRUE) )
	{
		(void) Rte_Call_SetNtcStsAndSnpshtData_Oper( NTCNR_0X050,
                                                    *Rte_Pim_Ivtr0GenericFltPrmVal(),
                                                    NTCSTS_PREFAILD,
                                                    Rte_Prm_GateDrv0CtrlNtcNr0x050FailStep_Val(),
                                                    SpclSnpshtData0_Cnt_T_u32,
                                                    SpclSnpshtData1_Cnt_T_u32,
                                                    SpclSnpshtData2_Cnt_T_u32);
	}
	else
	{
		*Rte_Pim_Ivtr0GenericFltPrmVal() = 0U;
		(void) Rte_Call_SetNtcStsAndSnpshtData_Oper( NTCNR_0X050,
                                                     0U,
                                                     NTCSTS_PREPASSD,
                                                     Rte_Prm_GateDrv0CtrlNtcNr0x050PassStep_Val(),
                                                     SpclSnpshtData0_Cnt_T_u32,
                                                     SpclSnpshtData1_Cnt_T_u32,
                                                     SpclSnpshtData2_Cnt_T_u32);
	}
	/***********************************************************************************/
	/*** ---------------------   END: Determine Gate Drive fault ------------------- ***/
	/***********************************************************************************/
}

/**********************************************************************************************************************
* Name:        GateDrvDetermineOnStSngFETFlt
* Description: Gate drive determine ON state single FET fault. Returns TRUE if general fault present, else return FALSE.
* Inputs:      None
* Outputs:     GenGateDrvFlt_Cnt_T_logl   : TRUE if generic gate drive fault is present
*              *SpclSnpshtData0_Cnt_T_u32 : Special Snapshot data 0 for SetNtcStsWithSnpshtData
*              *SpclSnpshtData1_Cnt_T_u32 : Special Snapshot data 1 for SetNtcStsWithSnpshtData
*              *SpclSnpshtData2_Cnt_T_u32 : Special Snapshot data 2 for SetNtcStsWithSnpshtData
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(boolean, GateDrv0Ctrl_CODE) GateDrvDetermineOnStSngFETFlt(P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData0_Cnt_T_u32,
                                                                      P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData1_Cnt_T_u32,
                                                                      P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData2_Cnt_T_u32)
{
	
	VAR(uint8   , AUTOMATIC) Ntc0x51StInfo_Cnt_T_u08;
	VAR(boolean , AUTOMATIC) GenGateDrvFlt_Cnt_T_logl;
	VAR(SigQlfr1, AUTOMATIC) GateDrv0OnStSngPhaFltQlfr_Cnt_T_enum;
	
	if( ((*Rte_Pim_GateDrv0StsVal()) & 0x0001U) != 0U )
	{
        /*** On-State Single FET Flt Active ***/
		(void)Rte_Call_GetNtcQlfrSts_Oper(NTCNR_0X051,&GateDrv0OnStSngPhaFltQlfr_Cnt_T_enum);
        
        /*Check ALO, BLO,CLO, ALU, BLU, CLU bits*/
		Ntc0x51StInfo_Cnt_T_u08 = (uint8)(*Rte_Pim_GateDrv0Diag1Val() & 0x003FU);
        *Rte_Pim_dGateDrv0CtrlGateDrv0Diag1Val() = *Rte_Pim_GateDrv0Diag1Val();
		
		if((GateDrv0OnStSngPhaFltQlfr_Cnt_T_enum != SIGQLFR_FAILD) &&
           (Ntc0x51StInfo_Cnt_T_u08 > 0U))
		{
            /** Determine Single FET Fault **/
            switch(Ntc0x51StInfo_Cnt_T_u08)
            {
                case PHAALOSIDEVDSOVERVLTG_CNT_U08:
                    /* ALO Bit */
                    GenGateDrvFlt_Cnt_T_logl = FALSE;
                    *Rte_Pim_IvtrFetFltPhaDataStore() = IVTRFETFLTPHA_PHAASNGFETFLT;
                    *Rte_Pim_IvtrFetFltTypDataStore() = IVTRFETFLTTYP_UPPRFETFLT;
                break;

                case PHAAHISIDEVDSOVERVLTG_CNT_U08:
                    /* AHO Bit */
                    GenGateDrvFlt_Cnt_T_logl = FALSE;
                    *Rte_Pim_IvtrFetFltPhaDataStore() = IVTRFETFLTPHA_PHAASNGFETFLT;
                    *Rte_Pim_IvtrFetFltTypDataStore() = IVTRFETFLTTYP_LOWRFETFLT;
                break;

                case PHABLOSIDEVDSOVERVLTG_CNT_U08:
                    /* BLO Bit */
                    GenGateDrvFlt_Cnt_T_logl = FALSE;
                    *Rte_Pim_IvtrFetFltPhaDataStore() = IVTRFETFLTPHA_PHABSNGFETFLT;
                    *Rte_Pim_IvtrFetFltTypDataStore() = IVTRFETFLTTYP_UPPRFETFLT;
                break;

                case PHABHISIDEVDSOVERVLTG_CNT_U08:
                    /* BHO Bit */
                    GenGateDrvFlt_Cnt_T_logl = FALSE;
                    *Rte_Pim_IvtrFetFltPhaDataStore() = IVTRFETFLTPHA_PHABSNGFETFLT;
                    *Rte_Pim_IvtrFetFltTypDataStore() = IVTRFETFLTTYP_LOWRFETFLT;
                break;

                case PHACLOSIDEVDSOVERVLTG_CNT_U08:
                    /* CLO Bit */
                    GenGateDrvFlt_Cnt_T_logl = FALSE;
                    *Rte_Pim_IvtrFetFltPhaDataStore() = IVTRFETFLTPHA_PHACSNGFETFLT;
                    *Rte_Pim_IvtrFetFltTypDataStore() = IVTRFETFLTTYP_UPPRFETFLT;
                break;

                case PHACHISIDEVDSOVERVLTG_CNT_U08:
                    /* CHO Bit */
                    GenGateDrvFlt_Cnt_T_logl = FALSE;
                    *Rte_Pim_IvtrFetFltPhaDataStore() = IVTRFETFLTPHA_PHACSNGFETFLT;
                    *Rte_Pim_IvtrFetFltTypDataStore() = IVTRFETFLTTYP_LOWRFETFLT;
                break;

                default:
                    /* Multiple FET Fault */
                    GenGateDrvFlt_Cnt_T_logl = TRUE;
                    *Rte_Pim_IvtrFetFltPhaDataStore() = IVTRFETFLTPHA_NOPHASNGFETFLT;
                    *Rte_Pim_IvtrFetFltTypDataStore() = IVTRFETFLTTYP_MPLFETFLT;
                    *Rte_Pim_Ivtr0GenericFltPrmVal() |= MULTIFETFLTPRM_CNT_U08;
                    *SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) |
                                                                  (*Rte_Pim_GateDrv0StsVal()));
                    *SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) |
                                                                  (*Rte_Pim_GateDrv0Diag1Val()));
                    *SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) |
                                                                  (*Rte_Pim_GateDrv0VrfyRes0Val()));

                break;
                
            }
            if(GenGateDrvFlt_Cnt_T_logl == FALSE)
            {
                (void) Rte_Call_SetNtcSts_Oper(NTCNR_0X051,
                                               Ntc0x51StInfo_Cnt_T_u08,
                                               NTCSTS_PREFAILD,
                                               Rte_Prm_GateDrv0CtrlNtcNr0x051FailStep_Val());
            }
		}
		else if(Ntc0x51StInfo_Cnt_T_u08 == 0U)
		{
            /** General Gate Drive Fault **/
			GenGateDrvFlt_Cnt_T_logl = TRUE;
			*Rte_Pim_Ivtr0GenericFltPrmVal() = *Rte_Pim_Ivtr0GenericFltPrmVal() | GENGATEDRVFLTPRM_CNT_U08;
            *SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) |
                                                          (*Rte_Pim_GateDrv0StsVal()));
            *SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) |
                                                          (*Rte_Pim_GateDrv0Diag1Val()));
            *SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) |
                                                          (*Rte_Pim_GateDrv0VrfyRes0Val()));
		}
        else
        {
            /** Multiple FET Fault **/
            GenGateDrvFlt_Cnt_T_logl = TRUE;
            *Rte_Pim_IvtrFetFltPhaDataStore() = IVTRFETFLTPHA_NOPHASNGFETFLT;
            *Rte_Pim_IvtrFetFltTypDataStore() = IVTRFETFLTTYP_MPLFETFLT;
            *Rte_Pim_Ivtr0GenericFltPrmVal() |= MULTIFETFLTPRM_CNT_U08;
            *SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) |
                                                          (*Rte_Pim_GateDrv0StsVal()));
            *SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) |
                                                          (*Rte_Pim_GateDrv0Diag1Val()));
            *SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) |
                                                          (*Rte_Pim_GateDrv0VrfyRes0Val()));
        }
		
	}
	else
	{
        /*** On-State Single FET Flt not Active ***/
        GenGateDrvFlt_Cnt_T_logl = FALSE;
		(void) Rte_Call_SetNtcSts_Oper(NTCNR_0X051,
                                       0U,
                                       NTCSTS_PREPASSD,
                                       Rte_Prm_GateDrv0CtrlNtcNr0x051PassStep_Val());
	}
	
	return GenGateDrvFlt_Cnt_T_logl;
	
}

/**********************************************************************************************************************
* Name:        GateDrvDetermineVltgFlt
* Description: Gate drive determine VREG/Bootstrap voltage fault. Returns TRUE if general fault present, else return FALSE.
* Inputs:      None
* Outputs:     GenGateDrvFlt_Cnt_T_logl   : TRUE if generic gate drive fault is present
*              *SpclSnpshtData0_Cnt_T_u32 : Special Snapshot data 0 for SetNtcStsWithSnpshtData
*              *SpclSnpshtData1_Cnt_T_u32 : Special Snapshot data 1 for SetNtcStsWithSnpshtData
*              *SpclSnpshtData2_Cnt_T_u32 : Special Snapshot data 2 for SetNtcStsWithSnpshtData
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(boolean, GateDrv0Ctrl_CODE) GateDrvDetermineVltgFlt( P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData0_Cnt_T_u32,
                                                                 P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData1_Cnt_T_u32,
                                                                 P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData2_Cnt_T_u32)
{
	VAR(boolean, AUTOMATIC) GenGateDrvFlt_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) GenGateDrvFlt1_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) GenGateDrvFlt2_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) BSUvFltActv_Cnt_T_logl;
	VAR(boolean, AUTOMATIC) VRUvFlt_Cnt_T_logl;
	
	if( ((*Rte_Pim_GateDrv0StsVal()) & 0x0004U) != 0U )
	{
        /** BSU Flt Active **/
		*Rte_Pim_Ivtr0BootstrpSplyFltPrmVal() = (uint8)(((*Rte_Pim_GateDrv0Diag2Val()) & 0x01C0U) >> DIAG2REGBOOTSTRPSPLYFLTSTRTPOS_CNT_U08); 
		
		if( *Rte_Pim_Ivtr0BootstrpSplyFltPrmVal() > 0U )
		{
            /* Set Fault bit */
            GenGateDrvFlt1_Cnt_T_logl = FALSE;
			BSUvFltActv_Cnt_T_logl    = TRUE;
		}
		else
		{
			GenGateDrvFlt1_Cnt_T_logl = TRUE;
            BSUvFltActv_Cnt_T_logl    = FALSE;
			*Rte_Pim_Ivtr0GenericFltPrmVal() = *Rte_Pim_Ivtr0GenericFltPrmVal() | GENGATEDRVFLTPRM_CNT_U08;
            *SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) |
                                                          (*Rte_Pim_GateDrv0StsVal()));
            *SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) |
                                                          (*Rte_Pim_GateDrv0Diag1Val()));
            *SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) |
                                                          (*Rte_Pim_GateDrv0VrfyRes0Val()));
		}
	}
    else
    {
        /** BSU Flt Not Active **/
        GenGateDrvFlt1_Cnt_T_logl = FALSE;
        BSUvFltActv_Cnt_T_logl    = FALSE;
    }
	
	
	if( ((*Rte_Pim_GateDrv0StsVal()) & 0x0020U) != 0U )
	{
        /** VR Flt Active **/
		if( ((*Rte_Pim_GateDrv0Diag1Val()) & 0x0080U) != 0U )
		{
            /* Set Fault bit */
			VRUvFlt_Cnt_T_logl        = TRUE;
            GenGateDrvFlt2_Cnt_T_logl = FALSE;
		}
		else
		{
            VRUvFlt_Cnt_T_logl        = FALSE;
			GenGateDrvFlt2_Cnt_T_logl = TRUE;
			*Rte_Pim_Ivtr0GenericFltPrmVal() = *Rte_Pim_Ivtr0GenericFltPrmVal() | GENGATEDRVFLTPRM_CNT_U08;
            *SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) |
                                                          (*Rte_Pim_GateDrv0StsVal()));
            *SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) |
                                                          (*Rte_Pim_GateDrv0Diag1Val()));
            *SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) |
                                                          (*Rte_Pim_GateDrv0VrfyRes0Val()));
		}
        *Rte_Pim_Ivtr0BootstrpSplyFltPrmVal() = *Rte_Pim_Ivtr0BootstrpSplyFltPrmVal() | CHRGPMPUNDERVLTGFLTPRM_CNT_U08;
	}
    else
    {
        /** VR Flt Not Active **/
        VRUvFlt_Cnt_T_logl        = FALSE;
        GenGateDrvFlt2_Cnt_T_logl = FALSE;
    }
	
	
	
	if( (BSUvFltActv_Cnt_T_logl == TRUE) || (VRUvFlt_Cnt_T_logl == TRUE) )
	{
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X055, *Rte_Pim_Ivtr0BootstrpSplyFltPrmVal(), 
										NTCSTS_PREFAILD, Rte_Prm_GateDrv0CtrlNtcNr0x055FailStep_Val() );
	}
	else
	{
		*Rte_Pim_Ivtr0BootstrpSplyFltPrmVal() = 0U;
		(void) Rte_Call_SetNtcSts_Oper( NTCNR_0X055, *Rte_Pim_Ivtr0BootstrpSplyFltPrmVal(), 
										NTCSTS_PREPASSD, Rte_Prm_GateDrv0CtrlNtcNr0x055PassStep_Val() );
	}

    if((GenGateDrvFlt1_Cnt_T_logl == TRUE) || (GenGateDrvFlt2_Cnt_T_logl == TRUE))
    {
        GenGateDrvFlt_Cnt_T_logl = TRUE;
    }
    else
    {
        GenGateDrvFlt_Cnt_T_logl = FALSE;
    }
	
	return GenGateDrvFlt_Cnt_T_logl;
	 
}

/**********************************************************************************************************************
* Name:        GateDrvDetermineGenericFlt
* Description: Gate drive determine generic fault. Returns TRUE if fault present, else return FALSE.
* Inputs:      GateDrvAllSts_Cnt_T_u16    : ORed value of diag, status and vrfyres regs calculated in OperFltMonrSt
* Outputs:     GenGateDrvFlt_Cnt_T_logl   : TRUE if generic gate drive fault is present
*              *SpclSnpshtData0_Cnt_T_u32 : Special Snapshot data 0 for SetNtcStsWithSnpshtData
*              *SpclSnpshtData1_Cnt_T_u32 : Special Snapshot data 1 for SetNtcStsWithSnpshtData
*              *SpclSnpshtData2_Cnt_T_u32 : Special Snapshot data 2 for SetNtcStsWithSnpshtData
* Usage Notes: None
**********************************************************************************************************************/
static FUNC(boolean, GateDrv0Ctrl_CODE) GateDrvDetermineGenericFlt(uint16 GateDrvAllSts_Cnt_T_u16,
                                                                   P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData0_Cnt_T_u32,
                                                                   P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData1_Cnt_T_u32,
                                                                   P2VAR(uint32 , AUTOMATIC, AUTOMATIC) SpclSnpshtData2_Cnt_T_u32)
{
	
	VAR(boolean, AUTOMATIC) GenGateDrvFlt_Cnt_T_logl = FALSE;

	/*** ---------------- START: Determine General Gate Drive Fault ---------------- ***/
    
    /** START: Determine EEPROM Fault **/
	if( (GateDrvAllSts_Cnt_T_u16 & 0x0800U) != 0U )
	{
		GenGateDrvFlt_Cnt_T_logl = TRUE;
		*Rte_Pim_Ivtr0GenericFltPrmVal() = *Rte_Pim_Ivtr0GenericFltPrmVal() | GENGATEDRVFLTPRM_CNT_U08; 
        *SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0StsVal()));
        *SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0Diag1Val()));
        *SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0VrfyRes0Val()));
	}
    /**  END : Determine EEPROM Fault **/

    /** START: Determine Serial Comm Fault **/
	if( (GateDrvAllSts_Cnt_T_u16 & 0x1000U) != 0U )
	{
		GenGateDrvFlt_Cnt_T_logl = TRUE;
        *Rte_Pim_Ivtr0GenericFltPrmVal() = *Rte_Pim_Ivtr0GenericFltPrmVal() | GATEDRVSERLCOMFLTPRM_CNT_U08;
        /*Capture registers in case of fault*/
        *SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0StsVal()));
        *SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0Diag1Val()));
        *SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0VrfyRes0Val()));
	}
    /**  END : Determine Serial Comm Fault **/

    /** START: Determine Temperature Fault **/
	if( (GateDrvAllSts_Cnt_T_u16 & 0x0400U) != 0U )  
	{
		GenGateDrvFlt_Cnt_T_logl = TRUE;
        *Rte_Pim_Ivtr0GenericFltPrmVal() = *Rte_Pim_Ivtr0GenericFltPrmVal() | OVERTFLTPRM_CNT_U08;
        /*Capture registers in case of fault*/
        *SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0StsVal()));
        *SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0Diag1Val()));
        *SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0VrfyRes0Val()));
	}
    /**  END : Determine Temperature Fault **/
    /*** ----------------   END: Determine General Gate Drive Fault ---------------- ***/


	/*** ------------- START: Determine Gate Drv VBB Pwr Supply Fault -------------- ***/
	if( ((*Rte_Pim_GateDrv0StsVal()) & 0x0100U) != 0U )
	{
		GenGateDrvFlt_Cnt_T_logl = TRUE;
        *Rte_Pim_Ivtr0GenericFltPrmVal() = *Rte_Pim_Ivtr0GenericFltPrmVal() | GATEDRVPWRSPLYFLTPRM_CNT_U08;
        /*Capture registers in case of fault*/
        *SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0StsVal()));
        *SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0Diag1Val()));
        *SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0VrfyRes0Val()));
	}
	/*** -------------   END: Determine Gate Drv VBB Pwr Supply Fault -------------- ***/

	/*** ------------- START: Determine OverCurrent & Open Load Fault -------------- ***/
	if( ((*Rte_Pim_GateDrv0StsVal()) & 0x0008U) != 0U )
	{
		GenGateDrvFlt_Cnt_T_logl = TRUE;
        *Rte_Pim_Ivtr0GenericFltPrmVal() = *Rte_Pim_Ivtr0GenericFltPrmVal() | OVERCURRANDOPENLOADFLTPRM_CNT_U08;
        /*Capture registers in case of fault*/
        *SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0StsVal()));
        *SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0Diag1Val()));
        *SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) |
                                                       (*Rte_Pim_GateDrv0VrfyRes0Val()));
	}
	/*** -------------   END: Determine OverCurrent & Open Load Fault -------------- ***/
	
	
	
	/*** ---------------- START: Determine VGS Under Voltage Fault ----------------- ***/
    /** GSU Flt Active **/
	if( ((*Rte_Pim_GateDrv0StsVal()) & 0x0002U) != 0U )  
	{
     /* Vgs UV Active */

	    GenGateDrvFlt_Cnt_T_logl = TRUE;
	    *Rte_Pim_Ivtr0GenericFltPrmVal() = *Rte_Pim_Ivtr0GenericFltPrmVal() | GENGATEDRVFLTPRM_CNT_U08;
	    /*Capture registers in case of fault*/
	    *SpclSnpshtData0_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag0Val()) << WORDSHIFT_CNT_U08) |
												(*Rte_Pim_GateDrv0StsVal()));
	    *SpclSnpshtData1_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0Diag2Val()) << WORDSHIFT_CNT_U08) |
												(*Rte_Pim_GateDrv0Diag1Val()));
	    *SpclSnpshtData2_Cnt_T_u32 = (uint32)(((uint32)(*Rte_Pim_GateDrv0VrfyRes1Val()) << WORDSHIFT_CNT_U08) |
												(*Rte_Pim_GateDrv0VrfyRes0Val()));			            
        /* Trap Gate Drv Flt - No Diag Bits set*/
		/* GenGateDrvFlt_Cnt_T_logl remains FALSE so no need for else case. */
	}
	/*** ----------------   END: Determine VGS Under Voltage Fault ----------------- ***/
	
	return GenGateDrvFlt_Cnt_T_logl;
	
}


/*****************************************************************************************************************
* Name        :   SetNtcStInfo
* Description :   Determines NTC State Info for Phase on time signals. Corresponds to implementation of  
*                 'MeasdPhaFltChkABC' and 'MeasdPhaFltChkDEF' functional blocks.
* Inputs      :   PhaOnTiMeasd_NanoSec_T_u32  : Phase On Time Measured
*                 PhaOnTiSumExp_NanoSec_T_u32 : Phase on Time Summation
*                 AbsltErr_NanoSec_T_f32      : Absolute Error in Phase calculated in Phase reasonableness
*                 BitMask_Cnt_u08             : Fault bit mask for Phase for which function is called
* Outputs     :   NtcStInfo_Uls_T_u08         : Parameter Byte for NTC call with fault bits for phase set if needed
* Returns     :   Flt_Uls_T_lgc               : TRUE if there is a fault for On-Time for this phase.
* Usage Notes :   None
****************************************************************************************************************/
static FUNC(boolean, GateDrv0Ctrl_CODE) SetNtcStInfo(VAR(uint32 , AUTOMATIC) PhaOnTiMeasd_NanoSec_T_u32,
                                                     VAR(uint32 , AUTOMATIC) PhaOnTiSumExp_NanoSec_T_u32,
                                                     VAR(float32, AUTOMATIC) AbsltErr_NanoSec_T_f32,
                                                     VAR(uint8  , AUTOMATIC) BitMask_Cnt_u08,
                                                   P2VAR(uint8, AUTOMATIC, AUTOMATIC) NtcStInfo_Uls_T_u08)
{
	VAR(boolean, AUTOMATIC)  Flt_Uls_T_lgc = FALSE;
	
	if(AbsltErr_NanoSec_T_f32 > (float32)Rte_Prm_GateDrv0CtrlErrThd_Val())
	{
		Flt_Uls_T_lgc = TRUE;	
		
		if (PhaOnTiMeasd_NanoSec_T_u32 < PhaOnTiSumExp_NanoSec_T_u32)
		{
			*NtcStInfo_Uls_T_u08 |= BitMask_Cnt_u08;
		}
		else
		{			
			*NtcStInfo_Uls_T_u08 |= (uint8)(BitMask_Cnt_u08 << 1U);
		}		
	}

	return Flt_Uls_T_lgc;
}
#define GateDrv0Ctrl_STOP_SEC_CODE
#include "GateDrv0Ctrl_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
