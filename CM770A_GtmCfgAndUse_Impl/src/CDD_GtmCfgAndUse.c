/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  CDD_GtmCfgAndUse.c
 *        Config:  E:/EA4NewTemplate/CM770A_GtmCfgAndUse_Impl/tools/Component.dpa
 *     SW-C Type:  CDD_GtmCfgAndUse
 *  Generated at:  Wed Feb 28 10:09:53 2018
 *
 *     Generator:  MICROSAR RTE Generator Version 4.13.0
 *                 RTE Core Version 1.13.0
 *       License:  Unlimited license CBD1400351 for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <CDD_GtmCfgAndUse>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2017, 2018 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_GtmCfgAndUse.c
* Module Description: Gtm Configuration And Use
* Project           : CBD
* Author            : Avinash James
***********************************************************************************************************************
* Version Control:
* %version:          6 %
* %derived_by:       rzk04c %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 07/25/17  1        AJM       Initial version                                                                EA4#10684
* 12/07/17  2        AJM       Corrective action as per anomaly EA4#16366                                     EA4#17774
* 01/11/18  3        AJM       Corrected memory alignment in the server runnables on MCS RAM reads            EA4#18856
* 01/15/18  4        AJM       Corrected prt interface for the server runnables                               EA4#18856
* 02/26/18  5        AJM       Added checks for FET faults,corrected ATOM configuration for FET switching     EA4#20211
                               polarity
* 03/12/18  6        AJM       Corrected the timer roll over constant                                         EA4#21611
**********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */

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
 * MotCurrEolCalSt2
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

#include "Rte_CDD_GtmCfgAndUse.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "GTM0_RegDefns.h"
#include "NxtrFixdPt.h"
#include "NxtrMath.h"
#include "CDD_GtmCfgAndUse_private.h"

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.3]: Cast of an integer to a pointer is required for reading from computed addresses 
                                            as needed for microcontroller diagnostics */
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte reads and writes,
                                            IoHwAb_SetFctPeriph, IoHwAb_SetFctGpio, IoHwAb_SetGpio */
                                          
#define SENTBUFSIZE_CNT_U08                 ((uint8)32U)
#define PHAONTIMEASDMAX_NANOSEC_U32         ((uint32)16777215UL)
#define PHAFBDELTACNTMIN_CNT_U32            ((uint32)0UL)
#define PHAFBDELTACNTMAX_CNT_U32            ((uint32)320000UL)
#define GTMTIPERCNT_NANOSECPERCNT_U15P1     ((uint16)(NXTRFIXDPT_FLOATTOP1_ULS_F32 * 12.5F))
#define SHIFTBYWORD_CNT_U08                 ((uint8)16U)
#define GTMSENTRAMBASADR0_CNT_U32           ((uint32)0xFFE38040UL)
#define GTMSENTRAMBASADR1_CNT_U32           ((uint32)0xFFE380C0UL)
#define GTMSENTRAMBASADR_CNT_U32            ((uint32)0xFFE38000UL)
#define GTMSENTRAMALGNDBYTE_CNT_U08         ((uint8)4U)

static FUNC (void, CDD_GtmCfgAndUse_CODE) MapPinsToGpio (void);
static FUNC (void, CDD_GtmCfgAndUse_CODE) MapFetCtrlSigToGpioAndSetLow (void);
static FUNC (void, CDD_GtmCfgAndUse_CODE) NoTranSysStNotEn (void);
static FUNC (void, CDD_GtmCfgAndUse_CODE) TranToEn (void);
static FUNC (void, CDD_GtmCfgAndUse_CODE) TranFromEn (void);
static FUNC (void, CDD_GtmCfgAndUse_CODE) NoTranSysStIsEn (MotCurrEolCalSt2 MotCurrEolCalSt_Cnt_T_enum,
                                IvtrFetFltPha1 IvtrFetFltPha_Cnt_T_enum);
static FUNC (void, CDD_GtmCfgAndUse_CODE) ChkForFetFlt (IvtrFetFltPha1 IvtrFetFltPha_Cnt_T_enum);
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
 * IvtrFetFltPha1: Enumeration of integer in interval [0...255] with enumerators
 *   IVTRFETFLTPHA_NOPHASNGFETFLT (0U)
 *   IVTRFETFLTPHA_PHAASNGFETFLT (1U)
 *   IVTRFETFLTPHA_PHABSNGFETFLT (2U)
 *   IVTRFETFLTPHA_PHACSNGFETFLT (4U)
 * MotCurrEolCalSt2: Enumeration of integer in interval [0...255] with enumerators
 *   MCECS_OFFSCMDSTRT (0U)
 *   MCECS_OFFSCMDHI (1U)
 *   MCECS_OFFSCMDLO (2U)
 *   MCECS_OFFSCMDZERO (3U)
 *   MCECS_OFFSCMDEND (4U)
 *   MCECS_GAINCMDAD (5U)
 *   MCECS_GAINCMDBE (6U)
 *   MCECS_GAINCMDCF (7U)
 *   MCECS_CMDSAFEST (8U)
 * SysSt1: Enumeration of integer in interval [0...255] with enumerators
 *   SYSST_DI (0U)
 *   SYSST_OFF (1U)
 *   SYSST_ENA (2U)
 *   SYSST_WRMININ (3U)
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   uint32 *Rte_Pim_AdcStrtOfCnvn2(void)
 *   uint32 *Rte_Pim_AdcStrtOfCnvnPeak(void)
 *   uint32 *Rte_Pim_Dma2MilliSecToMotCtrlTrig(void)
 *   uint32 *Rte_Pim_DmaMotAgATrig(void)
 *   uint32 *Rte_Pim_DmaMotCtrlTo2MilliSecTrig(void)
 *   uint32 *Rte_Pim_PhaOnTiCntrAPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiCntrBPrev(void)
 *   uint32 *Rte_Pim_PhaOnTiCntrCPrev(void)
 *   uint16 *Rte_Pim_MissUpdCntr(void)
 *   uint8 *Rte_Pim_MissUpdIninCntr(void)
 *   boolean *Rte_Pim_PhaAFetFldSts(void)
 *   boolean *Rte_Pim_PhaBFetFldSts(void)
 *   boolean *Rte_Pim_PhaCFetFldSts(void)
 *   boolean *Rte_Pim_SysStEnaPrev(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   uint32 Rte_Prm_CurrMeasEolFixdPwmPerd_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolOffsHiCmuOffs_Val(void)
 *   uint32 Rte_Prm_CurrMeasEolOffsLoCmuOffs_Val(void)
 *   uint32 Rte_Prm_GtmCfgAndUseAdcStrtOfCnvn2Offs_Val(void)
 *   uint32 Rte_Prm_GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val(void)
 *   uint32 Rte_Prm_GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val(void)
 *   uint32 Rte_Prm_GtmCfgAndUseDmaMotAgATrig_Val(void)
 *   uint32 Rte_Prm_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val(void)
 *   uint32 Rte_Prm_GtmCfgAndUsePwmDbnd_Val(void)
 *
 *********************************************************************************************************************/


#define CDD_GtmCfgAndUse_START_SEC_CODE
#include "CDD_GtmCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GtmCfgAndUseInit1
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
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaALowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaAUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaBLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaBUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaCLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaCUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GtmCfgAndUseInit1_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_GtmCfgAndUse_CODE) GtmCfgAndUseInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GtmCfgAndUseInit1
 *********************************************************************************************************************/
    VAR(uint32, AUTOMATIC)  GTM0ATOM00RegVal_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  GTM0ATOM01RegVal_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  GTM0ATOM02RegVal_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  GTM0ATOM03RegVal_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  GTM0ATOM04RegVal_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  GTM0ATOM05RegVal_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  GTM0ATOM06RegVal_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  GTM0ATOM07RegVal_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  GTM0DTM24RegVal_Cnt_T_u32;
    P2VAR(uint32, AUTOMATIC, AUTOMATIC)  MCSBaseAdrPtr_Cnt_T_u32;
    VAR(uint8, AUTOMATIC)   RamBufSize_Cnt_T_u08;

    /* Map Pins to GPIO and set to low*/
    MapFetCtrlSigToGpioAndSetLow();
    
    GTM0GTMCTRL = 0x0UL;
    GTM0GTMRST = 0x0UL;
    GTM0GTMCTRL |= 0x1UL;

    /* CMU Init */
    GTM0CMUCLK0CTRL = 0x0UL;       /* divide SYS_CLK by 1 (80 MHz)  - Used for PWM Outputs */
    GTM0CMUCLK1CTRL = 0x4FUL;      /* divide SYS_CLK1 by 80 (1 MHz) - Used by software */
    GTM0CMUCLK2CTRL = 0x1F3FUL;    /* divide SYS_CLK2 by 8000 (10 KHz) - Used by software */
    GTM0CMUCLK3CTRL = 0x0UL;       /* divide SYS_CLK3 by 1 (80 MHz) - Used for Phase reasonableness */
    
    GTM0CMUCLKEN = 0x0UL
                    | (uint32)((uint32)0x02U << 6U)     /* enable clock prescalers (CMU_CLK0,CMU_CLK1,CMU_CLK2&CMU_CLK3) */
                    | (uint32)((uint32)0x02U << 4U)
                    | (uint32)((uint32)0x02U << 2U)
                    | (uint32)((uint32)0x02U << 0U);
                    
    /* ATOM Config */
    /* Motor Phase A - ATOM0 Channel 0- Config*/
    GTM0ATOM00RegVal_Cnt_T_u32 = CnvNanoSecToTmrCnt(ELECGLBPRM_PWMPERDMIN_NANOSEC_U32);
    GTM0ATOM00CN0 = 0x0UL;
    GTM0ATOM00CM0 = GTM0ATOM00RegVal_Cnt_T_u32;
    GTM0ATOM00CM1 = GTM0ATOM00RegVal_Cnt_T_u32;
    GTM0ATOM00SR0 = GTM0ATOM00RegVal_Cnt_T_u32;
    GTM0ATOM00SR1 = GTM0ATOM00RegVal_Cnt_T_u32;
    GTM0ATOM00CTRL = 0x1000802UL;
    
    /* Motor Phase B - ATOM0 Channel 2- Config*/
    GTM0ATOM02RegVal_Cnt_T_u32 = CnvNanoSecToTmrCnt(ELECGLBPRM_PWMPERDMIN_NANOSEC_U32);
    GTM0ATOM02CN0 = 0x0UL;
    GTM0ATOM02CM0 = 0x0UL;
    GTM0ATOM02CM1 = GTM0ATOM02RegVal_Cnt_T_u32;
    GTM0ATOM02SR0 = 0x0UL;
    GTM0ATOM02SR1 = GTM0ATOM02RegVal_Cnt_T_u32;
    GTM0ATOM02CTRL = 0x100802UL;
    
    /* Motor Phase C - ATOM0 Channel 3- Config*/
    GTM0ATOM03RegVal_Cnt_T_u32 = CnvNanoSecToTmrCnt(ELECGLBPRM_PWMPERDMIN_NANOSEC_U32);
    GTM0ATOM03CN0 = 0x0UL; 
    GTM0ATOM03CM0 = 0x0UL;
    GTM0ATOM03CM1 = GTM0ATOM03RegVal_Cnt_T_u32;
    GTM0ATOM01SR0 = 0x0UL;
    GTM0ATOM03SR1 = GTM0ATOM03RegVal_Cnt_T_u32;
    GTM0ATOM03CTRL = 0x100802UL;

    /* ATOM0 Channel 1 Config */
    GTM0ATOM01RegVal_Cnt_T_u32 = CnvNanoSecToTmrCnt(Rte_Prm_GtmCfgAndUseAdcStrtOfCnvnPeakOffs_Val());
    GTM0ATOM01CN0 = 0x0UL;
    GTM0ATOM01CM0 = 0x0UL; 
    GTM0ATOM01CM1 = GTM0ATOM01RegVal_Cnt_T_u32;
    GTM0ATOM01SR0 = 0x0UL; 
    GTM0ATOM01SR1 = GTM0ATOM01RegVal_Cnt_T_u32;
    GTM0ATOM01CTRL = 0x100002UL;
    *Rte_Pim_AdcStrtOfCnvnPeak() = GTM0ATOM01RegVal_Cnt_T_u32;
    
    /* ATOM0 Channel 4 Config */
    GTM0ATOM04RegVal_Cnt_T_u32 = CnvNanoSecToTmrCnt(Rte_Prm_GtmCfgAndUseDmaMotCtrlTo2MilliSecTrig_Val());
    GTM0ATOM04CN0 = 0x0UL;
    GTM0ATOM04CM0 = 0x0UL; 
    GTM0ATOM04CM1 = GTM0ATOM04RegVal_Cnt_T_u32;
    GTM0ATOM04SR0 = 0x0UL; 
    GTM0ATOM04SR1 = GTM0ATOM04RegVal_Cnt_T_u32;
    GTM0ATOM04CTRL = 0x100002UL;
    *Rte_Pim_DmaMotCtrlTo2MilliSecTrig() = GTM0ATOM04RegVal_Cnt_T_u32;

    /* ATOM0 Channel 5 Config */
    GTM0ATOM05RegVal_Cnt_T_u32 = CnvNanoSecToTmrCnt(Rte_Prm_GtmCfgAndUseAdcStrtOfCnvn2Offs_Val());
    GTM0ATOM05CN0 = 0x0UL;
    GTM0ATOM05CM0 = 0x0UL; 
    GTM0ATOM05CM1 = GTM0ATOM05RegVal_Cnt_T_u32;
    GTM0ATOM05SR0 = 0x0UL; 
    GTM0ATOM05SR1 = GTM0ATOM05RegVal_Cnt_T_u32;
    GTM0ATOM05CTRL = 0x100002UL;
    *Rte_Pim_AdcStrtOfCnvn2() = GTM0ATOM05RegVal_Cnt_T_u32;

    /* ATOM0 Channel 6 Config */
    GTM0ATOM06RegVal_Cnt_T_u32 = CnvNanoSecToTmrCnt(Rte_Prm_GtmCfgAndUseDmaMotAgATrig_Val());
    GTM0ATOM06CN0 = 0x0UL;
    GTM0ATOM06CM0 = 0x0UL; 
    GTM0ATOM06CM1 = GTM0ATOM06RegVal_Cnt_T_u32;
    GTM0ATOM06SR0 = 0x0UL; 
    GTM0ATOM06SR1 = GTM0ATOM06RegVal_Cnt_T_u32;
    GTM0ATOM06CTRL = 0x100002UL;
    *Rte_Pim_DmaMotAgATrig() = GTM0ATOM06RegVal_Cnt_T_u32;

    /* ATOM0 Channel 7 Config */
    GTM0ATOM07RegVal_Cnt_T_u32 = CnvNanoSecToTmrCnt(Rte_Prm_GtmCfgAndUseDma2MilliSecToMotCtrlTrig_Val());
    GTM0ATOM07CN0 = 0x0UL;
    GTM0ATOM07CM0 = 0x0UL; 
    GTM0ATOM07CM1 = GTM0ATOM07RegVal_Cnt_T_u32;
    GTM0ATOM07SR0 = 0x0UL; 
    GTM0ATOM07SR1 = GTM0ATOM07RegVal_Cnt_T_u32;
    GTM0ATOM07CTRL = 0x100002UL;
    *Rte_Pim_Dma2MilliSecToMotCtrlTrig() = GTM0ATOM07RegVal_Cnt_T_u32;
    GTM0ATOM07IRQEN = 2U;

    /* ATOM1 Channel 0 Config */
    GTM0ATOM10CN0 = 0x0UL;
    GTM0ATOM10CM0 = 0xFA0UL; 
    GTM0ATOM10CM1 = 0x7D0UL;
    GTM0ATOM10SR0 = 0xFA0UL; 
    GTM0ATOM10SR1 = 0x7D0UL;
    GTM0ATOM10CTRL = 0x0000002UL;

    GTM0ATOM1AGCGLBCTRL = 0x20001UL;
    GTM0ATOM1AGCENDISSTAT = 0x02UL;
    GTM0ATOM1AGCOUTENSTAT = 0x02UL;
    
    GTM0ATOM0AGCGLBCTRL = 0xAAAA0001UL;
    GTM0ATOM0AGCENDISSTAT = 0xAAAAUL;
    GTM0ATOM0AGCOUTENSTAT = 0xAAAAUL;
   
    /* DTM Config */
    GTM0DTM24CTRL = 0x0UL;
    GTM0DTM24CHCTRL2 = 0x88880088UL;
    GTM0DTM24CHCTRL2SR = 0x88880088UL;
    GTM0DTM24RegVal_Cnt_T_u32 = CnvNanoSecToTmrCnt(Rte_Prm_GtmCfgAndUsePwmDbnd_Val());
    GTM0DTM24RegVal_Cnt_T_u32 = (GTM0DTM24RegVal_Cnt_T_u32 | (GTM0DTM24RegVal_Cnt_T_u32 << SHIFTBYWORD_CNT_U08));
    GTM0DTM240DTV = GTM0DTM24RegVal_Cnt_T_u32;
    GTM0DTM242DTV = GTM0DTM24RegVal_Cnt_T_u32;
    GTM0DTM243DTV = GTM0DTM24RegVal_Cnt_T_u32;

    /* TBU Config */
    GTM0TBUCHEN = 0x2UL;

    /* TIM Config */    
    GTM0TIM10CTRL = 0x3003003UL;
    GTM0TIM11CTRL = 0x3003003UL;
    GTM0TIM12CTRL = 0x3003003UL;
    GTM0TIM13CTRL = 0x121UL;
    GTM0TIM14CTRL = 0x121UL;
    GTM0TIM15CTRL = 0x121UL;
    GTM0TIM16CTRL = 0x121UL;
    GTM0TIM01CTRL = 0xC21UL;
    GTM0TIM04CTRL = 0xC21UL;
    
    /* MCS Init */
    MCSBaseAdrPtr_Cnt_T_u32 = (uint32*)GTMSENTRAMBASADR_CNT_U32;
    for(RamBufSize_Cnt_T_u08 = 0U; RamBufSize_Cnt_T_u08 < TblSize_m(GTMCFGANDUSECODANDDATAARY_CNT_U32);RamBufSize_Cnt_T_u08++)
    {
        MCSBaseAdrPtr_Cnt_T_u32[RamBufSize_Cnt_T_u08] = GTMCFGANDUSECODANDDATAARY_CNT_U32[RamBufSize_Cnt_T_u08];
    }
    GTM0MCS0CTRLSTAT = (7UL<<8U);   /* set last channel to 7 and select "accelerated schedule" mode */
    GTM0MCS00CTRL = 1U;             /* enable channel 0 */
    GTM0MCS01CTRL = 1U;             /* enable channel 1 */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GtmCfgAndUsePer2
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
 *   Std_ReturnType Rte_Read_IvtrFetFltPha_Val(IvtrFetFltPha1 *data)
 *   Std_ReturnType Rte_Read_MotCurrEolCalSt_Val(MotCurrEolCalSt2 *data)
 *   Std_ReturnType Rte_Read_SysSt_Val(SysSt1 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdA_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdB_Val(uint32 data)
 *   Std_ReturnType Rte_Write_PhaOnTiMeasdC_Val(uint32 data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaALowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaAUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaBLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaBUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaCLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctGpioPhaCUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaALowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaAUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaBLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaBUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaCLowrCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetFctPeriphPhaCUpprCmd_Oper(void)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetFctPeriph_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *   Std_ReturnType Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(boolean PinSt_Arg)
 *     Synchronous Server Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_SetGpio_PortIf1_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GtmCfgAndUsePer2_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, CDD_GtmCfgAndUse_CODE) GtmCfgAndUsePer2(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GtmCfgAndUsePer2
 *********************************************************************************************************************/
    VAR(uint32, AUTOMATIC)  Tmr0_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  Tmr1_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  Tmr3_Cnt_T_u32;
    VAR(uint32, AUTOMATIC)  PhaOnTiMeasdA_NanoSec_T_u32;
    VAR(uint32, AUTOMATIC)  PhaOnTiMeasdB_NanoSec_T_u32;
    VAR(uint32, AUTOMATIC)  PhaOnTiMeasdC_NanoSec_T_u32;
    VAR(uint32, AUTOMATIC) DeltaA_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) DeltaB_Cnt_T_u32;
    VAR(uint32, AUTOMATIC) DeltaC_Cnt_T_u32;
    VAR (SysSt1, AUTOMATIC) SysSt_Cnt_T_enum;
    VAR (MotCurrEolCalSt2, AUTOMATIC) MotCurrEolCalSt_Cnt_T_enum;
    VAR (boolean, AUTOMATIC) SysStEn_Cnt_T_lgc;
    VAR (IvtrFetFltPha1, AUTOMATIC) IvtrFetFltPha_Cnt_T_enum;
    
    (void) Rte_Read_SysSt_Val(&SysSt_Cnt_T_enum);  
    (void) Rte_Read_MotCurrEolCalSt_Val(&MotCurrEolCalSt_Cnt_T_enum);
    (void) Rte_Read_IvtrFetFltPha_Val(&IvtrFetFltPha_Cnt_T_enum);

    /* Check for FET fault */
    ChkForFetFlt(IvtrFetFltPha_Cnt_T_enum);
    
    /* Relational Operator */
    if (SysSt_Cnt_T_enum == SYSST_ENA)
    {
        SysStEn_Cnt_T_lgc = TRUE;
    }
    else
    {
        SysStEn_Cnt_T_lgc = FALSE;
    }
    
    /* Truth Table */
    if (SysStEn_Cnt_T_lgc == TRUE)
    {
        if (*Rte_Pim_SysStEnaPrev() == TRUE)
        {
            /* No Transition; SysState = Enable */
            NoTranSysStIsEn(MotCurrEolCalSt_Cnt_T_enum,IvtrFetFltPha_Cnt_T_enum);
        }
        else
        {
            /* Transition to Enable */
            TranToEn();
        }
    }
    else
    {
        if (*Rte_Pim_SysStEnaPrev() == TRUE)
        {
            /* Transition from Enable */
            TranFromEn();
        }
        else
        {
            /* No Transition; SysSt != Enable */
            NoTranSysStNotEn();
        }
    }
    
    /* Unit Delay */
    *Rte_Pim_SysStEnaPrev() = SysStEn_Cnt_T_lgc;
    
    Tmr0_Cnt_T_u32 = GTM0TIM10CNT;
    Tmr1_Cnt_T_u32 = GTM0TIM11CNT;
    Tmr3_Cnt_T_u32 = GTM0TIM12CNT;

    /* Phase A Time Measurement */
    if(Tmr0_Cnt_T_u32 >= *Rte_Pim_PhaOnTiCntrAPrev())
    {
        /* Delta >= 0 */
        DeltaA_Cnt_T_u32 = Tmr0_Cnt_T_u32 - *Rte_Pim_PhaOnTiCntrAPrev();
    }
    else
    {
        /* Delta < 0 */
        DeltaA_Cnt_T_u32 = (PHAONTIMEASDMAX_NANOSEC_U32 - *Rte_Pim_PhaOnTiCntrAPrev()) + Tmr0_Cnt_T_u32;
    }
    
    DeltaA_Cnt_T_u32 = Lim_u32(DeltaA_Cnt_T_u32,PHAFBDELTACNTMIN_CNT_U32,PHAFBDELTACNTMAX_CNT_U32);
    
    PhaOnTiMeasdA_NanoSec_T_u32 = ((uint32)GTMTIPERCNT_NANOSECPERCNT_U15P1 * DeltaA_Cnt_T_u32);
    
    PhaOnTiMeasdA_NanoSec_T_u32 = (uint32)(PhaOnTiMeasdA_NanoSec_T_u32 >> 1u);
    
    *Rte_Pim_PhaOnTiCntrAPrev() = Tmr0_Cnt_T_u32;
    
    /* Phase B Time Measurement */
    if(Tmr1_Cnt_T_u32 >= *Rte_Pim_PhaOnTiCntrBPrev())
    {
        /* Delta >= 0 */
        DeltaB_Cnt_T_u32 = Tmr1_Cnt_T_u32 - *Rte_Pim_PhaOnTiCntrBPrev();
    }
    else
    {
        /* Delta < 0 */
        DeltaB_Cnt_T_u32 = (PHAONTIMEASDMAX_NANOSEC_U32 - *Rte_Pim_PhaOnTiCntrBPrev()) + Tmr1_Cnt_T_u32;
    }
    
    DeltaB_Cnt_T_u32 = Lim_u32(DeltaB_Cnt_T_u32,PHAFBDELTACNTMIN_CNT_U32,PHAFBDELTACNTMAX_CNT_U32);
    
    PhaOnTiMeasdB_NanoSec_T_u32 = ((uint32)GTMTIPERCNT_NANOSECPERCNT_U15P1 * DeltaB_Cnt_T_u32);
    
    PhaOnTiMeasdB_NanoSec_T_u32 = (uint32)(PhaOnTiMeasdB_NanoSec_T_u32 >> 1u);
    
    *Rte_Pim_PhaOnTiCntrBPrev() = Tmr1_Cnt_T_u32;

    /* Phase C Time Measurement */
    if(Tmr3_Cnt_T_u32 >= *Rte_Pim_PhaOnTiCntrCPrev())
    {
        /* Delta >= 0 */
        DeltaC_Cnt_T_u32 = Tmr3_Cnt_T_u32 - *Rte_Pim_PhaOnTiCntrCPrev();
    }
    else
    {
        /* Delta < 0 */
        DeltaC_Cnt_T_u32 = (PHAONTIMEASDMAX_NANOSEC_U32 - *Rte_Pim_PhaOnTiCntrCPrev()) + Tmr3_Cnt_T_u32;
    }
    
    DeltaC_Cnt_T_u32 = Lim_u32(DeltaC_Cnt_T_u32,PHAFBDELTACNTMIN_CNT_U32,PHAFBDELTACNTMAX_CNT_U32);
    
    PhaOnTiMeasdC_NanoSec_T_u32 = ((uint32)GTMTIPERCNT_NANOSECPERCNT_U15P1 * DeltaC_Cnt_T_u32);
    
    PhaOnTiMeasdC_NanoSec_T_u32 = (uint32)(PhaOnTiMeasdC_NanoSec_T_u32 >> 1u);

    *Rte_Pim_PhaOnTiCntrCPrev() = Tmr3_Cnt_T_u32;
    
    (void)Rte_Write_PhaOnTiMeasdA_Val(PhaOnTiMeasdA_NanoSec_T_u32);
    (void)Rte_Write_PhaOnTiMeasdB_Val(PhaOnTiMeasdB_NanoSec_T_u32);
    (void)Rte_Write_PhaOnTiMeasdC_Val(PhaOnTiMeasdC_NanoSec_T_u32);
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GtmGetSent0Data_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GtmGetSent0Data>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GtmGetSent0Data_Oper(uint32 *BufStrt_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GtmGetSentData_PortIf2_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GtmGetSent0Data_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_GtmCfgAndUse_CODE) GtmGetSent0Data_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_GTMCFGANDUSE_APPL_VAR) BufStrt_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GtmGetSent0Data_Oper (returns application error)
 *********************************************************************************************************************/
  VAR(uint8, AUTOMATIC)  LoopCntr_Cnt_T_u08;
  
  for(LoopCntr_Cnt_T_u08 = 0U;LoopCntr_Cnt_T_u08 < SENTBUFSIZE_CNT_U08; LoopCntr_Cnt_T_u08++)
  {
      BufStrt_Arg[LoopCntr_Cnt_T_u08] = ((*(uint32*)(GTMSENTRAMBASADR0_CNT_U32 + ((uint32)LoopCntr_Cnt_T_u08 * (uint32)GTMSENTRAMALGNDBYTE_CNT_U08)))
                                                        * GTMTIPERCNT_NANOSECPERCNT_U15P1) >> 1U;
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GtmGetSent1Data_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GtmGetSent1Data>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType GtmGetSent1Data_Oper(uint32 *BufStrt_Arg)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_GtmGetSentData_PortIf2_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GtmGetSent1Data_Oper_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, CDD_GtmCfgAndUse_CODE) GtmGetSent1Data_Oper(P2VAR(uint32, AUTOMATIC, RTE_CDD_GTMCFGANDUSE_APPL_VAR) BufStrt_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GtmGetSent1Data_Oper (returns application error)
 *********************************************************************************************************************/
  VAR(uint8, AUTOMATIC)  LoopCntr_Cnt_T_u08;
  
  for(LoopCntr_Cnt_T_u08 = 0U;LoopCntr_Cnt_T_u08 < SENTBUFSIZE_CNT_U08; LoopCntr_Cnt_T_u08++)
  {
      BufStrt_Arg[LoopCntr_Cnt_T_u08] = ((*(uint32*)(GTMSENTRAMBASADR1_CNT_U32 + ((uint32)LoopCntr_Cnt_T_u08 * (uint32)GTMSENTRAMALGNDBYTE_CNT_U08))) 
                                                    * GTMTIPERCNT_NANOSECPERCNT_U15P1) >> 1U;
  }

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define CDD_GtmCfgAndUse_STOP_SEC_CODE
#include "CDD_GtmCfgAndUse_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
 /******************************************************************************
  * Name:        NoTranSysStIsEn
  * Description: Action for the "No Transition; SysSt = Enable" case in
  *              GtmCfgAndUsePer2
  * Inputs:      MotCurrEolCalSt_Cnt_T_enum - Eol Calibration State
                 IvtrFetFltPha_Cnt_T_enum - Fet Fault phase
  * Outputs:     NONE 
  * Usage Notes: NONE 
  ****************************************************************************/
static FUNC (void, CDD_GtmCfgAndUse_CODE) NoTranSysStIsEn (MotCurrEolCalSt2 MotCurrEolCalSt_Cnt_T_enum,IvtrFetFltPha1 IvtrFetFltPha_Cnt_T_enum)
{
    /* No Transition; SysSt = Enable */
    /* Switch Case */
    
    if(MotCurrEolCalSt_Cnt_T_enum == MCECS_OFFSCMDSTRT)
    {
        /* Do Nothing */
    }
    else if(IvtrFetFltPha_Cnt_T_enum == IVTRFETFLTPHA_NOPHASNGFETFLT) 
    {
        switch (MotCurrEolCalSt_Cnt_T_enum)
        {
            case MCECS_OFFSCMDEND:
            case MCECS_GAINCMDAD:
                /* Map Pins to GPIO */
                MapPinsToGpio();
                /* Set GPIO Level */
                (void) Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(STD_HIGH);
                (void) Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(STD_LOW);
            break;
            
            case MCECS_GAINCMDBE:
                /* Map Pins to GPIO */
                MapPinsToGpio();
                /* Set GPIO Level */
                (void) Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(STD_HIGH);
                (void) Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(STD_LOW);
            break;
            
            case MCECS_GAINCMDCF:
                /* Map Pins to GPIO */
                MapPinsToGpio();
                /* Set GPIO Level */
                (void) Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(STD_HIGH);
                (void) Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(STD_LOW);
            break;

            case MCECS_CMDSAFEST:
                /* Map Pins to GPIO */
                MapPinsToGpio();
                /* Set GPIO Level */
                (void) Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(STD_LOW);
                (void) Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(STD_LOW);
            break;
            
            default:
                /* Do nothing */
            break;
        }
    }
    else
    {
        MapFetCtrlSigToGpioAndSetLow();
        *Rte_Pim_PhaAFetFldSts() = TRUE;
        *Rte_Pim_PhaBFetFldSts() = TRUE;
        *Rte_Pim_PhaCFetFldSts() = TRUE;
    }

    
}

/******************************************************************************
  * Name:        TranFromEn
  * Description: Action for the "Transition from Enable" case in
  *              GtmCfgAndUsePer2
  * Inputs:      NONE     
  * Outputs:     NONE 
  * Usage Notes: NONE 
  ****************************************************************************/
static FUNC (void, CDD_GtmCfgAndUse_CODE) TranFromEn (void)
{
    /* Transition From Enable */
    /* Map FET Ctrl Signals to GPIO and Set Low */
    MapFetCtrlSigToGpioAndSetLow();
    
}

/******************************************************************************
  * Name:        TranToEn
  * Description: Action for the "Transition to Enable" case in
  *              GtmCfgAndUsePer2
  * Inputs:      NONE     
  * Outputs:     NONE 
  * Usage Notes: NONE 
  ****************************************************************************/
static FUNC (void, CDD_GtmCfgAndUse_CODE) TranToEn (void)
{
    /* Transition to Enable */
    /* Map Pins to Peripheral */
    if(*Rte_Pim_PhaAFetFldSts() == FALSE)
    {
        (void) Rte_Call_IoHwAb_SetFctPeriphPhaALowrCmd_Oper();
        (void) Rte_Call_IoHwAb_SetFctPeriphPhaAUpprCmd_Oper();
    }
    if(*Rte_Pim_PhaBFetFldSts() == FALSE)
    {
        (void) Rte_Call_IoHwAb_SetFctPeriphPhaBLowrCmd_Oper();
        (void) Rte_Call_IoHwAb_SetFctPeriphPhaBUpprCmd_Oper();
    }
    if(*Rte_Pim_PhaCFetFldSts() == FALSE)
    {
        (void) Rte_Call_IoHwAb_SetFctPeriphPhaCLowrCmd_Oper();
        (void) Rte_Call_IoHwAb_SetFctPeriphPhaCUpprCmd_Oper();
    }    

}

/******************************************************************************
  * Name:        NoTranSysStNotEn
  * Description: Action for the "No Transition; SysSt != Enable" case in
  *              GtmCfgAndUsePer2
  * Inputs:      NONE     
  * Outputs:     NONE 
  * Usage Notes: NONE 
  ****************************************************************************/
static FUNC (void, CDD_GtmCfgAndUse_CODE) NoTranSysStNotEn (void)
{
    /* No Transition; SysState != Enable */
    /* Do Nothing */
}

/******************************************************************************
  * Name:        MapFetCtrlSigToGpioAndSetLow
  * Description: Maps the PhaXUpprCmd and PhaXLowrCmd pins (for phases A, B, and C) 
  *              for use as GPIO pins and set their output value LOW
  * Inputs:      NONE     
  * Outputs:     NONE 
  * Usage Notes: NONE 
  ****************************************************************************/
static FUNC (void, CDD_GtmCfgAndUse_CODE) MapFetCtrlSigToGpioAndSetLow (void)
{
    /* Map Pins to GPIO */
    MapPinsToGpio();

    /* Set GPIO Level */
    (void) Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(STD_LOW);
    (void) Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(STD_LOW);
    (void) Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(STD_LOW);
    (void) Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(STD_LOW);
    (void) Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(STD_LOW);
    (void) Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(STD_LOW);
}

/******************************************************************************
  * Name:        MapPinsToGpio
  * Description: Maps the PhaXUpprCmd and PhaXLowrCmd pins (for phases A, B, and C) 
  *              for use as GPIO pins
  * Inputs:      NONE     
  * Outputs:     NONE 
  * Usage Notes: NONE 
  ****************************************************************************/
static FUNC (void, CDD_GtmCfgAndUse_CODE) MapPinsToGpio (void)
{
    /* Map Pins to GPIO */
    (void) Rte_Call_IoHwAb_SetFctGpioPhaALowrCmd_Oper();
    (void) Rte_Call_IoHwAb_SetFctGpioPhaAUpprCmd_Oper();
    (void) Rte_Call_IoHwAb_SetFctGpioPhaBLowrCmd_Oper();
    (void) Rte_Call_IoHwAb_SetFctGpioPhaBUpprCmd_Oper();
    (void) Rte_Call_IoHwAb_SetFctGpioPhaCLowrCmd_Oper();
    (void) Rte_Call_IoHwAb_SetFctGpioPhaCUpprCmd_Oper();
}

/******************************************************************************
  * Name:        ChkForFetFlt
  * Description: Checks for FET fault on phase A,B and C and sets the pins  
  *              for use as GPIO pins and sets it to low
  * Inputs:      IvtrFetFltPha_Cnt_T_enum - FET fault status
  * Outputs:     NONE 
  * Usage Notes: NONE 
  ****************************************************************************/
static FUNC (void, CDD_GtmCfgAndUse_CODE) ChkForFetFlt (IvtrFetFltPha1 IvtrFetFltPha_Cnt_T_enum)
{
    /* Check for FET fault */
    if(IvtrFetFltPha_Cnt_T_enum == IVTRFETFLTPHA_PHAASNGFETFLT)
    {
        /* Map Pins to GPIO */
        (void) Rte_Call_IoHwAb_SetFctGpioPhaALowrCmd_Oper();
        (void) Rte_Call_IoHwAb_SetFctGpioPhaAUpprCmd_Oper();
        /* Set GPIO Level */
        (void) Rte_Call_IoHwAb_SetGpioPhaALowrCmd_Oper(STD_LOW);
        (void) Rte_Call_IoHwAb_SetGpioPhaAUpprCmd_Oper(STD_LOW);
        
        *Rte_Pim_PhaAFetFldSts() = TRUE;
    }
    
    if(IvtrFetFltPha_Cnt_T_enum == IVTRFETFLTPHA_PHABSNGFETFLT)
    {
        /* Map Pins to GPIO */
        (void) Rte_Call_IoHwAb_SetFctGpioPhaBLowrCmd_Oper();
        (void) Rte_Call_IoHwAb_SetFctGpioPhaBUpprCmd_Oper();
        /* Set GPIO Level */
        (void) Rte_Call_IoHwAb_SetGpioPhaBLowrCmd_Oper(STD_LOW);
        (void) Rte_Call_IoHwAb_SetGpioPhaBUpprCmd_Oper(STD_LOW);
        
        *Rte_Pim_PhaBFetFldSts() = TRUE;
    }
    
    if(IvtrFetFltPha_Cnt_T_enum == IVTRFETFLTPHA_PHACSNGFETFLT)
    {
        /* Map Pins to GPIO */
        (void) Rte_Call_IoHwAb_SetFctGpioPhaCLowrCmd_Oper();
        (void) Rte_Call_IoHwAb_SetFctGpioPhaCUpprCmd_Oper();
        /* Set GPIO Level */
        (void) Rte_Call_IoHwAb_SetGpioPhaCLowrCmd_Oper(STD_LOW);
        (void) Rte_Call_IoHwAb_SetGpioPhaCUpprCmd_Oper(STD_LOW);
        
        *Rte_Pim_PhaCFetFldSts() = TRUE;
    }
    /* End of FET fault */
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
