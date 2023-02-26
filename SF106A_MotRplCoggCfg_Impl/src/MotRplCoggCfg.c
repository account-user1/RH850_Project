/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  MotRplCoggCfg.c
 *     SW-C Type:  MotRplCoggCfg
 *  Generated at:  Tue May 17 12:06:38 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <MotRplCoggCfg>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/****************************************************************************
* Copyright 2016 Nexteer
* Nexteer Confidential
*
* Module File Name: MotRplCoggCfg.c
* Module Description: Motor Ripple Cogging Configuration
* Project           : CBD 
* Author            : Selva Sengottaiyan
***********************************************************************************************************************
* Version Control:
* %version          : 3 %
* %derived_by       : nz4qtt %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                        SCR #
* -------   -------  --------  ---------------------------------------------------------------------------  ----------
* 02/08/16   1       Selva           SF106 v1 Initial Creation                                               EA4#2997
* 04/14/16   2       KK              SF106 Updates in FDD v1.3.0 and v1.4.0									 EA4#4477
* 05/12/16   3       KK              SF106 Updates in FDD v1.5.0 and v1.6.0									 EA4#5702
*---------------------------------------------------------------------------------------------------------------------
*/

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
  s1p14
    SInt16 represents integers with a minimum value of -32768 and a maximum value 
     of 32767. The order-relation on sint16 is: x < y if y - x is positive.
     sint16 has a lexical representation consisting of an optional sign followed
     by a finite-length sequence of decimal digits (#x30-#x39). If the sign is
     omitted, "+" is assumed. 
     
     For example: -1, 0, -12678, +10000, 2500

  u0p16
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

  u16p0
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

  u5p11
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

 *********************************************************************************************************************/

#include "Rte_MotRplCoggCfg.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
#include "NxtrMath.h"
#include "NxtrFixdPt.h"
#include "ArchGlbPrm.h"
#include "NxtrIntrpn.h" 



#define COGGHILIM_MOTNWTMTR_S1P14   						(FloatToFixd_s16_f32(0.0997F, NXTRFIXDPT_FLOATTOP14_ULS_F32))
#define COGGLOLIM_MOTNWTMTR_S1P14   						(FloatToFixd_s16_f32((-0.0997F), NXTRFIXDPT_FLOATTOP14_ULS_F32))
#define COGGORDER1_CNT_U16   								(6U)
#define COGGORDER2_CNT_U16   								(12U)
#define COGGORDER3_CNT_U16   								(18U)
#define MOTAGELECDLYRPLHILIM_MOTRAD_F32   					(1.62F)
#define MOTAGELECDLYRPLLOLIM_MOTRAD_F32   					(-1.62F)
#define MOTCURRQAXTOMOTTQGAINHILIM_VOLTPERMOTRADPERSEC_F32  (0.406952F)
#define MOTCURRQAXTOMOTTQGAINLOLIM_VOLTPERMOTRADPERSEC_F32  (0.021651F)
#define MOTTQRPLHILIM_MOTNWTMTR_F32   						(0.5F)
#define MOTTQRPLLOLIM_MOTNWTMTR_F32   						(-0.5F)
#define ONEOVER2_ULS_F32               						(0.5F)
#define THREEOVER8_ULS_F32             						(0.375F)
#define SCADMOTVELLOLIM_MOTRADPERSEC_F32					(0.0F)
#define SCADMOTVELHILIM_MOTRADPERSEC_F32					(65535.0F)


/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.1]: Calibration port pointers to array base types are cast back to their array type for code readability and to allow use of "sizeof". */  
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


static FUNC(void, AUTOMATIC )  CalcCoggTqTbl( void);


#define   	PimMotTqRplOrder1X  (*(Ary2D_s1p14_10_12 *) (Rte_Pim_MotTqRplOrder1X()))
#define   	PimMotTqRplOrder1Y  (*(Ary2D_s1p14_10_12 *) (Rte_Pim_MotTqRplOrder1Y()))
#define   	PimMotTqRplOrder2X  (*(Ary2D_s1p14_10_12 *) (Rte_Pim_MotTqRplOrder2X()))
#define   	PimMotTqRplOrder2Y  (*(Ary2D_s1p14_10_12 *) (Rte_Pim_MotTqRplOrder2Y()))
#define   	PimMotTqRplOrder3X  (*(Ary2D_s1p14_10_12 *) (Rte_Pim_MotTqRplOrder3X()))
#define   	PimMotTqRplOrder3Y  (*(Ary2D_s1p14_10_12 *) (Rte_Pim_MotTqRplOrder3Y()))

#define PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln        (*(const Ary1D_u9p7_10 *) (Rte_Prm_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D()))
#define PrmMotRplCoggCfgMotCurrQaxRpl                  (*(const Ary1D_u9p7_12 *) (Rte_Prm_MotRplCoggCfgMotCurrQaxRpl_Ary1D()))
#define PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY     (*(const Ary2D_u3p13_20_8 *) (Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D()))
#define PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY     (*(const Ary2D_u0p16_20_8 *) (Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D()))
#define PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX        (*(const Ary1D_u5p11_8 *) (Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D()))
#define PrmMotRplCoggCfgMotTqRplOrder1X                (*(const Ary2D_s1p14_10_12 *) (Rte_Prm_MotRplCoggCfgMotTqRplOrder1X_Ary2D()))
#define PrmMotRplCoggCfgMotTqRplOrder1Y                (*(const Ary2D_s1p14_10_12 *) (Rte_Prm_MotRplCoggCfgMotTqRplOrder1Y_Ary2D()))
#define PrmMotRplCoggCfgMotTqRplOrder2X                (*(const Ary2D_s1p14_10_12 *) (Rte_Prm_MotRplCoggCfgMotTqRplOrder2X_Ary2D()))
#define PrmMotRplCoggCfgMotTqRplOrder2Y                (*(const Ary2D_s1p14_10_12 *) (Rte_Prm_MotRplCoggCfgMotTqRplOrder2Y_Ary2D()))
#define PrmMotRplCoggCfgMotTqRplOrder3X                (*(const Ary2D_s1p14_10_12 *) (Rte_Prm_MotRplCoggCfgMotTqRplOrder3X_Ary2D()))
#define PrmMotRplCoggCfgMotTqRplOrder3Y                (*(const Ary2D_s1p14_10_12 *) (Rte_Prm_MotRplCoggCfgMotTqRplOrder3Y_Ary2D()))
#define PrmMotRplCoggCfgMotVelBilnrSeln                (*(const Ary1D_u16p0_20  *) (Rte_Prm_MotRplCoggCfgMotVelBilnrSeln_Ary1D()))
 
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
 * u0p16: Integer in interval [0...65535]
 * u16p0: Integer in interval [0...65535]
 * u3p13: Integer in interval [0...65535]
 * u5p11: Integer in interval [0...65535]
 * u9p7: Integer in interval [0...65535]
 *
 * Enumeration Types:
 * ==================
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
 *
 * Array Types:
 * ============
 * Ary1D_s1p14_12: Array with 12 element(s) of type s1p14
 * Ary1D_u0p16_8: Array with 8 element(s) of type u0p16
 * Ary1D_u16p0_20: Array with 20 element(s) of type u16p0
 * Ary1D_u3p13_8: Array with 8 element(s) of type u3p13
 * Ary1D_u5p11_8: Array with 8 element(s) of type u5p11
 * Ary1D_u9p7_10: Array with 10 element(s) of type u9p7
 * Ary1D_u9p7_12: Array with 12 element(s) of type u9p7
 * Ary2D_s1p14_10_12: Array with 10 element(s) of type Ary1D_s1p14_12
 * Ary2D_u0p16_20_8: Array with 20 element(s) of type Ary1D_u0p16_8
 * Ary2D_u3p13_20_8: Array with 20 element(s) of type Ary1D_u3p13_8
 *
 * Record Types:
 * =============
 * MotRplCoggPrmRec2: Record with elements
 *   CoggOrder1 of type uint16
 *   CoggOrder1X of type s1p14
 *   CoggOrder1Y of type s1p14
 *   CoggOrder2 of type uint16
 *   CoggOrder2X of type s1p14
 *   CoggOrder2Y of type s1p14
 *   CoggOrder3 of type uint16
 *   CoggOrder3X of type s1p14
 *   CoggOrder3Y of type s1p14
 *
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * APIs which are accessible from all runnable entities of the SW-C
 *
 **********************************************************************************************************************
 * Per-Instance Memory:
 * ====================
 *   float32 *Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn(void)
 *   float32 *Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder1X(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder1Y(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder2X(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder2Y(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder3X(void)
 *   s1p14 *Rte_Pim_MotTqRplOrder3Y(void)
 *   MotRplCoggPrmRec2 *Rte_Pim_MotRplCoggPrm(void)
 *
 * Calibration Parameters:
 * =======================
 *   Calibration Component Calibration Parameters:
 *   ---------------------------------------------
 *   float32 Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val(void)
 *   float32 Rte_Prm_MotRplCoggCfgMotAgTiDly_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val(void)
 *   uint8 Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val(void)
 *   uint8 Rte_Prm_SysGlbPrmMotPoleCnt_Val(void)
 *   u9p7 *Rte_Prm_MotRplCoggCfgMotCurrDaxRplBilnrSeln_Ary1D(void)
 *   u9p7 *Rte_Prm_MotRplCoggCfgMotCurrQaxRpl_Ary1D(void)
 *   u3p13 *Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(void)
 *   u0p16 *Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(void)
 *   u5p11 *Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpX_Ary1D(void)
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder1X_Ary2D(void)
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder1Y_Ary2D(void)
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder2X_Ary2D(void)
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder2Y_Ary2D(void)
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder3X_Ary2D(void)
 *   s1p14 *Rte_Prm_MotRplCoggCfgMotTqRplOrder3Y_Ary2D(void)
 *   u16p0 *Rte_Prm_MotRplCoggCfgMotVelBilnrSeln_Ary1D(void)
 *
 *********************************************************************************************************************/


#define MotRplCoggCfg_START_SEC_CODE
#include "MotRplCoggCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMotRplCoggPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <GetMotRplCoggPrm>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void GetMotRplCoggPrm_Oper(uint16 *CoggOrder1_Arg, s1p14 *CoggOrder1X_Arg, s1p14 *CoggOrder1Y_Arg, uint16 *CoggOrder2_Arg, s1p14 *CoggOrder2X_Arg, s1p14 *CoggOrder2Y_Arg, uint16 *CoggOrder3_Arg, s1p14 *CoggOrder3X_Arg, s1p14 *CoggOrder3Y_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, MotRplCoggCfg_CODE) GetMotRplCoggPrm_Oper(P2VAR(uint16, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder1_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder1X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder1Y_Arg, P2VAR(uint16, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder2_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder2X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder2Y_Arg, P2VAR(uint16, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder3_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder3X_Arg, P2VAR(s1p14, AUTOMATIC, RTE_MOTRPLCOGGCFG_APPL_VAR) CoggOrder3Y_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMotRplCoggPrm_Oper
 *********************************************************************************************************************/
   /* REQ: SF106A #33 I */
  *CoggOrder1_Arg  =   Rte_Pim_MotRplCoggPrm()->CoggOrder1;
  *CoggOrder1X_Arg =   Rte_Pim_MotRplCoggPrm()->CoggOrder1X;
  *CoggOrder1Y_Arg =   Rte_Pim_MotRplCoggPrm()->CoggOrder1Y;
  *CoggOrder2_Arg  =   Rte_Pim_MotRplCoggPrm()->CoggOrder2;
  *CoggOrder2X_Arg =   Rte_Pim_MotRplCoggPrm()->CoggOrder2X;
  *CoggOrder2Y_Arg =   Rte_Pim_MotRplCoggPrm()->CoggOrder2Y;
  *CoggOrder3_Arg  =   Rte_Pim_MotRplCoggPrm()->CoggOrder3;   
  *CoggOrder3X_Arg =   Rte_Pim_MotRplCoggPrm()->CoggOrder3X;
  *CoggOrder3Y_Arg =   Rte_Pim_MotRplCoggPrm()->CoggOrder3Y;
    /* ENDREQ: SF106A #33 I */ 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRplCoggCfgInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotRplCoggPrm_GetErrorStatus(NvM_RequestResultType *ErrorStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *   Std_ReturnType Rte_Call_MotRplCoggPrm_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 *********************************************************************************************************************/

FUNC(void, MotRplCoggCfg_CODE) MotRplCoggCfgInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRplCoggCfgInit1
 *********************************************************************************************************************/
   
   VAR(NvM_RequestResultType,AUTOMATIC) NVMStatusReqRes_Cnt_T_enum;
   
   /* REQ: SF106A #32 I */
   /* REQ: SF106A #56 I */    
   (void)Rte_Call_MotRplCoggPrm_GetErrorStatus(&NVMStatusReqRes_Cnt_T_enum);
   if(NVMStatusReqRes_Cnt_T_enum !=  NVM_REQ_OK)
   {
	   Rte_Pim_MotRplCoggPrm()->CoggOrder1         =  COGGORDER1_CNT_U16;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder1X         =  0;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder1Y         =  0;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder2         =  COGGORDER2_CNT_U16;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder2X         =  0;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder2Y         =  0;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder3         =  COGGORDER3_CNT_U16;	   
	   Rte_Pim_MotRplCoggPrm()->CoggOrder3X         =  0;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder3Y         =  0;
	   (void)Rte_Call_MotRplCoggPrm_SetRamBlockStatus(TRUE);
   }
   /* ENDREQ: SF106A #32 I */  
   /* ENDREQ: SF106A #56 I */ 
   CalcCoggTqTbl(); /* REQ: SF106A #33 I */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: MotRplCoggCfgPer1
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
 *   Std_ReturnType Rte_Read_MotBackEmfConEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrDaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotCurrQaxCmd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduDaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotInduQaxEstimd_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotTqCmdMrfScad_Val(float32 *data)
 *   Std_ReturnType Rte_Read_MotVelMrf_Val(float32 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_MotAgElecDlyRpl_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotCurrQaxToMotTqGain_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder1Mgn_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder1Pha_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder2Mgn_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder2Pha_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder3Mgn_Val(float32 data)
 *   Std_ReturnType Rte_Write_MotTqRplCoggOrder3Pha_Val(float32 data)
 *
 *********************************************************************************************************************/

FUNC(void, MotRplCoggCfg_CODE) MotRplCoggCfgPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: MotRplCoggCfgPer1
 *********************************************************************************************************************/
	VAR(float32, AUTOMATIC) MotVelMrf_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrDaxCmd_Ampr_T_f32;
	VAR(float32, AUTOMATIC)  MotCurrQaxCmd_Ampr_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplCoggOrder1X_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplCoggOrder1Y_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplCoggOrder2X_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplCoggOrder2Y_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplCoggOrder3X_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplCoggOrder3Y_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplCoggOrder1Mgn_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplCoggOrder2Mgn_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplCoggOrder3Mgn_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC) MotVelOrder1Harm_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) MotVelOrder2Harm_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) MotVelOrder3Harm_MotRadPerSec_T_f32;
	VAR(float32, AUTOMATIC)	MotTqOrder1MagRP_Uls_T_f32;
	VAR(float32, AUTOMATIC)	MotTqOrder2MagRP_Uls_T_f32;
	VAR(float32, AUTOMATIC)	MotTqOrder3MagRP_Uls_T_f32;
	VAR(uint16, AUTOMATIC) MotVelOrder1Harm_MotRadPerSec_T_u16;
	VAR(uint16, AUTOMATIC) MotVelOrder2Harm_MotRadPerSec_T_u16;
	VAR(uint16, AUTOMATIC) MotVelOrder3Harm_MotRadPerSec_T_u16;

	VAR(uint16, AUTOMATIC)	MotTqOrder1MagRP_Uls_T_u3p13;
	VAR(uint16, AUTOMATIC)	MotTqOrder1PhRP_Rev_T_u0p16;
	VAR(uint16, AUTOMATIC)	MotTqOrder2MagRP_Uls_T_u3p13;
	VAR(uint16, AUTOMATIC)	MotTqOrder2PhRP_Rev_T_u0p16;
	VAR(float32, AUTOMATIC)	 MotTqRplCoggOrder1MgnInt_MotNwtMtr_T_f32;
	VAR(float32, AUTOMATIC)	 MotTqRplCoggOrder2MgnInt_MotNwtMtr_T_f32;
	VAR(uint16, AUTOMATIC)	MotTqOrder3MagRP_Uls_T_u3p13;
	VAR(uint16, AUTOMATIC)	MotTqOrder3PhRP_Rev_T_u0p16;
	VAR(float32, AUTOMATIC)	 MotTqRplCoggOrder3MgnInt_MotNwtMtr_T_f32;

	VAR(uint16, AUTOMATIC) MotCurrDaxCmd_Ampr_T_u9p7;
	VAR(uint16, AUTOMATIC) MotCurrQaxCmd_Ampr_T_u9p7;
	VAR(sint16, AUTOMATIC) MotTqRplCoggOrder1X_MotNwtMtr_T_s1p14;
	VAR(sint16, AUTOMATIC) MotTqRplCoggOrder1Y_MotNwtMtr_T_s1p14;
	VAR(sint16, AUTOMATIC) MotTqRplCoggOrder2X_MotNwtMtr_T_s1p14;
	VAR(sint16, AUTOMATIC) MotTqRplCoggOrder2Y_MotNwtMtr_T_s1p14;
	VAR(sint16, AUTOMATIC) MotTqRplCoggOrder3X_MotNwtMtr_T_s1p14;
	VAR(sint16, AUTOMATIC) MotTqRplCoggOrder3Y_MotNwtMtr_T_s1p14;
	VAR(float32, AUTOMATIC) MotTqRplOrder1PhaTemp_Rad_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplOrder2PhaTemp_Rad_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplOrder3PhaTemp_Rad_T_f32;
	VAR(float32, AUTOMATIC) MotTqOrder1BwCmpPha_Rev_T_f32;
	VAR(float32, AUTOMATIC) MotTqOrder2BwCmpPha_Rev_T_f32;
	VAR(float32, AUTOMATIC) MotTqOrder3BwCmpPha_Rev_T_f32;
	VAR(float32, AUTOMATIC) MotTqOrder1BwCmpPha_Rad_T_f32;
	VAR(float32, AUTOMATIC) MotTqOrder2BwCmpPha_Rad_T_f32;
	VAR(float32, AUTOMATIC) MotTqOrder3BwCmpPha_Rad_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplOrder1Phs_Rad_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplOrder2Phs_Rad_T_f32;
	VAR(float32, AUTOMATIC) MotTqRplOrder3Phs_Rad_T_f32;
	VAR(float32,AUTOMATIC) 	MotInduDaxEstimd_Henry_T_f32      ;
	VAR(float32,AUTOMATIC) 	MotInduQaxEstimd_Henry_T_f32      ;
	VAR(float32,AUTOMATIC) 	MotTqCmdMrfScad_MotNwtMtr_T_f32;
	VAR(float32,AUTOMATIC) 	MotCurrQaxToMotTqGain_VpRadpS_T_f32;
	VAR(uint16, AUTOMATIC) MotTqCmdMrfScad_MotNwtMtr_T_u5p11;
	VAR(float32,AUTOMATIC) MotBackEmfConEstimd_VpRadpS_T_f32;
	VAR(float32,AUTOMATIC) MotAgElecDlyRpl_MotRad_T_f32;
	
    /* REQ: SF106A #52 I */
	/********** Read inputs******/ 
	(void)Rte_Read_MotBackEmfConEstimd_Val(&MotBackEmfConEstimd_VpRadpS_T_f32); /* REQ: SF106A #39 I */
	(void)Rte_Read_MotCurrDaxCmd_Val(&MotCurrDaxCmd_Ampr_T_f32); /* REQ: SF106A #27 I */
	(void)Rte_Read_MotCurrQaxCmd_Val(&MotCurrQaxCmd_Ampr_T_f32);  /* REQ: SF106A #42 I */
	(void)Rte_Read_MotInduDaxEstimd_Val(&MotInduDaxEstimd_Henry_T_f32);  /* REQ: SF106A #43 I */
	(void)Rte_Read_MotInduQaxEstimd_Val(&MotInduQaxEstimd_Henry_T_f32);   /* REQ: SF106A #41 I */
	(void)Rte_Read_MotTqCmdMrfScad_Val(&MotTqCmdMrfScad_MotNwtMtr_T_f32);    /* REQ: SF106A #45 I */
	(void)Rte_Read_MotVelMrf_Val(&MotVelMrf_MotRadPerSec_T_f32); /* REQ: SF106A #44 I */
	
	/********Position Delay***********/
	/* REQ: SF106A #79 I */
	MotAgElecDlyRpl_MotRad_T_f32 = MotVelMrf_MotRadPerSec_T_f32*Rte_Prm_MotRplCoggCfgMotAgTiDly_Val()*(float32)Rte_Prm_SysGlbPrmMotPoleCnt_Val()*ONEOVER2_ULS_F32;
	MotAgElecDlyRpl_MotRad_T_f32 = Lim_f32(MotAgElecDlyRpl_MotRad_T_f32, MOTAGELECDLYRPLLOLIM_MOTRAD_F32, MOTAGELECDLYRPLHILIM_MOTRAD_F32);
	*Rte_Pim_dMotRplCoggCfgMotAgElecDlyRpl() = MotAgElecDlyRpl_MotRad_T_f32;
	/* ENDREQ: SF106A #79 I */
	
	
    /***** Magnitude and Phase Computation*****/
	/**********Current Regulator Bandwidth Compensation*******/
	/* REQ: SF106A #81 I */
	MotVelOrder1Harm_MotRadPerSec_T_f32 = Lim_f32( (Abslt_f32_f32(MotVelMrf_MotRadPerSec_T_f32)* (float32)Rte_Prm_MotRplCoggCmdHrmncOrder1Elec_Val()*((float32)Rte_Prm_SysGlbPrmMotPoleCnt_Val() * ONEOVER2_ULS_F32)), 
												   (SCADMOTVELLOLIM_MOTRADPERSEC_F32), 
												   (SCADMOTVELHILIM_MOTRADPERSEC_F32) );
	MotVelOrder2Harm_MotRadPerSec_T_f32 = Lim_f32( (Abslt_f32_f32(MotVelMrf_MotRadPerSec_T_f32)* (float32)Rte_Prm_MotRplCoggCmdHrmncOrder2Elec_Val()*((float32)Rte_Prm_SysGlbPrmMotPoleCnt_Val() * ONEOVER2_ULS_F32)),
												   (SCADMOTVELLOLIM_MOTRADPERSEC_F32), 
												   (SCADMOTVELHILIM_MOTRADPERSEC_F32) );
	MotVelOrder3Harm_MotRadPerSec_T_f32 = Lim_f32( (Abslt_f32_f32(MotVelMrf_MotRadPerSec_T_f32)* (float32)Rte_Prm_MotRplCoggCmdHrmncOrder3Elec_Val()*((float32)Rte_Prm_SysGlbPrmMotPoleCnt_Val() * ONEOVER2_ULS_F32)),
												   (SCADMOTVELLOLIM_MOTRADPERSEC_F32), 
												   (SCADMOTVELHILIM_MOTRADPERSEC_F32) );
	
	
	MotVelOrder1Harm_MotRadPerSec_T_u16  = FloatToFixd_u16_f32((Abslt_f32_f32(MotVelOrder1Harm_MotRadPerSec_T_f32)), NXTRFIXDPT_FLOATTOP0_ULS_F32);    
	MotVelOrder2Harm_MotRadPerSec_T_u16 = FloatToFixd_u16_f32((Abslt_f32_f32(MotVelOrder2Harm_MotRadPerSec_T_f32)), NXTRFIXDPT_FLOATTOP0_ULS_F32);    
	MotVelOrder3Harm_MotRadPerSec_T_u16 = FloatToFixd_u16_f32((Abslt_f32_f32(MotVelOrder3Harm_MotRadPerSec_T_f32)), NXTRFIXDPT_FLOATTOP0_ULS_F32);	  
	/* ENDREQ: SF106A #81 I */
	MotTqCmdMrfScad_MotNwtMtr_T_u5p11 = FloatToFixd_u16_f32(Abslt_f32_f32(MotTqCmdMrfScad_MotNwtMtr_T_f32),NXTRFIXDPT_FLOATTOP11_ULS_F32);  
		
	/*****  PI Magnitude and phase response compensation table Start *****/
	/*******Order 1  Response*********/
	MotTqOrder1MagRP_Uls_T_u3p13=	BilnrIntrpnWithRound_u16_u16CmnXu16MplY(
													MotVelOrder1Harm_MotRadPerSec_T_u16,
													MotTqCmdMrfScad_MotNwtMtr_T_u5p11,                  
													PrmMotRplCoggCfgMotVelBilnrSeln,
													(uint16)TblSize_m(PrmMotRplCoggCfgMotVelBilnrSeln),
													PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX,
													Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(),
													(uint16)TblSize_m(PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX));

	MotTqOrder1PhRP_Rev_T_u0p16	=  BilnrIntrpnWithRound_u16_u16CmnXu16MplY(
													MotVelOrder1Harm_MotRadPerSec_T_u16,
													MotTqCmdMrfScad_MotNwtMtr_T_u5p11,                   
													PrmMotRplCoggCfgMotVelBilnrSeln,
													(uint16)TblSize_m(PrmMotRplCoggCfgMotVelBilnrSeln),
													PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX,
													Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(),
													(uint16)TblSize_m(PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX));


	/*******Order 2  Response*********/
	MotTqOrder2MagRP_Uls_T_u3p13	=BilnrIntrpnWithRound_u16_u16CmnXu16MplY(
													MotVelOrder2Harm_MotRadPerSec_T_u16,
													MotTqCmdMrfScad_MotNwtMtr_T_u5p11,                  
													PrmMotRplCoggCfgMotVelBilnrSeln,
													(uint16)TblSize_m(PrmMotRplCoggCfgMotVelBilnrSeln),
													PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX,
													Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(),
													(uint16)TblSize_m(PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX));

	MotTqOrder2PhRP_Rev_T_u0p16	=BilnrIntrpnWithRound_u16_u16CmnXu16MplY(
													MotVelOrder2Harm_MotRadPerSec_T_u16,
													MotTqCmdMrfScad_MotNwtMtr_T_u5p11,                   
													PrmMotRplCoggCfgMotVelBilnrSeln,
													(uint16)TblSize_m(PrmMotRplCoggCfgMotVelBilnrSeln),
													PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX,
													Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(),
													(uint16)TblSize_m(PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX));
	
	/*******Order 3 Response*********/
	MotTqOrder3MagRP_Uls_T_u3p13	=BilnrIntrpnWithRound_u16_u16CmnXu16MplY(
													MotVelOrder3Harm_MotRadPerSec_T_u16,
													(MotTqCmdMrfScad_MotNwtMtr_T_u5p11),                  
													PrmMotRplCoggCfgMotVelBilnrSeln,
													(uint16)TblSize_m(PrmMotRplCoggCfgMotVelBilnrSeln),
													PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX,
													Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpMgnY_Ary2D(),
													(uint16)TblSize_m(PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX));

	MotTqOrder3PhRP_Rev_T_u0p16	=BilnrIntrpnWithRound_u16_u16CmnXu16MplY(
													MotVelOrder3Harm_MotRadPerSec_T_u16,
													MotTqCmdMrfScad_MotNwtMtr_T_u5p11,                   
													PrmMotRplCoggCfgMotVelBilnrSeln,
													(uint16)TblSize_m(PrmMotRplCoggCfgMotVelBilnrSeln),
													PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX,
													Rte_Prm_MotRplCoggCfgMotTqCmdCurrRgltrBwCmpPhaY_Ary2D(),
													(uint16)TblSize_m(PrmMotRplCoggCfgMotTqCmdCurrRgltrBwCmpX));

	MotTqOrder1MagRP_Uls_T_f32=FixdToFloat_f32_u16(MotTqOrder1MagRP_Uls_T_u3p13,NXTRFIXDPT_P13TOFLOAT_ULS_F32);
	MotTqOrder2MagRP_Uls_T_f32=FixdToFloat_f32_u16(MotTqOrder2MagRP_Uls_T_u3p13,NXTRFIXDPT_P13TOFLOAT_ULS_F32);
	MotTqOrder3MagRP_Uls_T_f32=FixdToFloat_f32_u16(MotTqOrder3MagRP_Uls_T_u3p13,NXTRFIXDPT_P13TOFLOAT_ULS_F32);
															   
	MotTqOrder1BwCmpPha_Rev_T_f32	=FixdToFloat_f32_u16(MotTqOrder1PhRP_Rev_T_u0p16, NXTRFIXDPT_P16TOFLOAT_ULS_F32);
	MotTqOrder2BwCmpPha_Rev_T_f32	=FixdToFloat_f32_u16(MotTqOrder2PhRP_Rev_T_u0p16,NXTRFIXDPT_P16TOFLOAT_ULS_F32);
	MotTqOrder3BwCmpPha_Rev_T_f32	=FixdToFloat_f32_u16(MotTqOrder3PhRP_Rev_T_u0p16,NXTRFIXDPT_P16TOFLOAT_ULS_F32);
    

	MotTqOrder1BwCmpPha_Rad_T_f32=MotTqOrder1BwCmpPha_Rev_T_f32*(float32)Sign_s08_f32(MotVelMrf_MotRadPerSec_T_f32)*ARCHGLBPRM_2PI_ULS_F32;
	MotTqOrder2BwCmpPha_Rad_T_f32=MotTqOrder2BwCmpPha_Rev_T_f32*(float32)Sign_s08_f32(MotVelMrf_MotRadPerSec_T_f32)*ARCHGLBPRM_2PI_ULS_F32;
	MotTqOrder3BwCmpPha_Rad_T_f32=MotTqOrder3BwCmpPha_Rev_T_f32*(float32)Sign_s08_f32(MotVelMrf_MotRadPerSec_T_f32)*ARCHGLBPRM_2PI_ULS_F32;
    
		
	MotCurrDaxCmd_Ampr_T_u9p7             =  FloatToFixd_u16_f32(Abslt_f32_f32(MotCurrDaxCmd_Ampr_T_f32),NXTRFIXDPT_FLOATTOP7_ULS_F32);     
	MotCurrQaxCmd_Ampr_T_u9p7             =  FloatToFixd_u16_f32(Abslt_f32_f32(MotCurrQaxCmd_Ampr_T_f32),NXTRFIXDPT_FLOATTOP7_ULS_F32);   
	
	/* Order1Mag_TrqRipple */
	MotTqRplCoggOrder1X_MotNwtMtr_T_s1p14 = BilnrIntrpnWithRound_s16_u16CmnXs16MplY(
		MotCurrDaxCmd_Ampr_T_u9p7,                     
		MotCurrQaxCmd_Ampr_T_u9p7,                      
		PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln,
		(uint16)TblSize_m(PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln),   
		PrmMotRplCoggCfgMotCurrQaxRpl,
		Rte_Pim_MotTqRplOrder1X(),
		(uint16)TblSize_m(PrmMotRplCoggCfgMotCurrQaxRpl));
	
	/* Order1Phase_TrqRipple */
	MotTqRplCoggOrder1Y_MotNwtMtr_T_s1p14 = BilnrIntrpnWithRound_s16_u16CmnXs16MplY(
		MotCurrDaxCmd_Ampr_T_u9p7,                     
		MotCurrQaxCmd_Ampr_T_u9p7,                      
		PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln,
		(uint16)TblSize_m(PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln),   
		PrmMotRplCoggCfgMotCurrQaxRpl,
		Rte_Pim_MotTqRplOrder1Y(),
		(uint16)TblSize_m(PrmMotRplCoggCfgMotCurrQaxRpl));
	
	/* Order2Mag_TrqRipple */
	MotTqRplCoggOrder2X_MotNwtMtr_T_s1p14 = BilnrIntrpnWithRound_s16_u16CmnXs16MplY(
		MotCurrDaxCmd_Ampr_T_u9p7,                     
		MotCurrQaxCmd_Ampr_T_u9p7,                      
		PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln,
		(uint16)TblSize_m(PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln),   
		PrmMotRplCoggCfgMotCurrQaxRpl,
		Rte_Pim_MotTqRplOrder2X(),
		(uint16)TblSize_m(PrmMotRplCoggCfgMotCurrQaxRpl));
	
	/* Order2Phase_TrqRipple */
	MotTqRplCoggOrder2Y_MotNwtMtr_T_s1p14 = BilnrIntrpnWithRound_s16_u16CmnXs16MplY(
		MotCurrDaxCmd_Ampr_T_u9p7,                     
		MotCurrQaxCmd_Ampr_T_u9p7,                      
		PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln,
		(uint16)TblSize_m(PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln),   
		PrmMotRplCoggCfgMotCurrQaxRpl,
		Rte_Pim_MotTqRplOrder2Y(),
		(uint16)TblSize_m(PrmMotRplCoggCfgMotCurrQaxRpl));
	
/* Order3Mag_TrqRipple */
	MotTqRplCoggOrder3X_MotNwtMtr_T_s1p14 = BilnrIntrpnWithRound_s16_u16CmnXs16MplY(
		MotCurrDaxCmd_Ampr_T_u9p7,                     
		MotCurrQaxCmd_Ampr_T_u9p7,                      
		PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln,
		(uint16)TblSize_m(PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln),   
		PrmMotRplCoggCfgMotCurrQaxRpl,
		Rte_Pim_MotTqRplOrder3X(),
		(uint16)TblSize_m(PrmMotRplCoggCfgMotCurrQaxRpl));
	
	/* Order3Phase_TrqRipple */
	MotTqRplCoggOrder3Y_MotNwtMtr_T_s1p14 = BilnrIntrpnWithRound_s16_u16CmnXs16MplY(
		MotCurrDaxCmd_Ampr_T_u9p7,                     
		MotCurrQaxCmd_Ampr_T_u9p7,                      
		PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln,
		(uint16)TblSize_m(PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln),   
		PrmMotRplCoggCfgMotCurrQaxRpl,
		Rte_Pim_MotTqRplOrder3Y(),
		(uint16)TblSize_m(PrmMotRplCoggCfgMotCurrQaxRpl));	
	
	
	MotTqRplCoggOrder1X_MotNwtMtr_T_f32 = FixdToFloat_f32_s16(MotTqRplCoggOrder1X_MotNwtMtr_T_s1p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
	MotTqRplCoggOrder1Y_MotNwtMtr_T_f32 = FixdToFloat_f32_s16(MotTqRplCoggOrder1Y_MotNwtMtr_T_s1p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
	MotTqRplCoggOrder2X_MotNwtMtr_T_f32 = FixdToFloat_f32_s16(MotTqRplCoggOrder2X_MotNwtMtr_T_s1p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
	MotTqRplCoggOrder2Y_MotNwtMtr_T_f32 = FixdToFloat_f32_s16(MotTqRplCoggOrder2Y_MotNwtMtr_T_s1p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
	MotTqRplCoggOrder3X_MotNwtMtr_T_f32 = FixdToFloat_f32_s16(MotTqRplCoggOrder3X_MotNwtMtr_T_s1p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
	MotTqRplCoggOrder3Y_MotNwtMtr_T_f32 = FixdToFloat_f32_s16(MotTqRplCoggOrder3Y_MotNwtMtr_T_s1p14, NXTRFIXDPT_P14TOFLOAT_ULS_F32);
	
	/***********XY to Magnitude and Phase**********/
	/* REQ: SF106A #61 I */
	MotTqRplCoggOrder1MgnInt_MotNwtMtr_T_f32 = Sqrt_f32((MotTqRplCoggOrder1X_MotNwtMtr_T_f32 * MotTqRplCoggOrder1X_MotNwtMtr_T_f32) + (MotTqRplCoggOrder1Y_MotNwtMtr_T_f32 * MotTqRplCoggOrder1Y_MotNwtMtr_T_f32));
	MotTqRplCoggOrder2MgnInt_MotNwtMtr_T_f32 = Sqrt_f32((MotTqRplCoggOrder2X_MotNwtMtr_T_f32 * MotTqRplCoggOrder2X_MotNwtMtr_T_f32) + (MotTqRplCoggOrder2Y_MotNwtMtr_T_f32 * MotTqRplCoggOrder2Y_MotNwtMtr_T_f32));
	MotTqRplCoggOrder3MgnInt_MotNwtMtr_T_f32 = Sqrt_f32((MotTqRplCoggOrder3X_MotNwtMtr_T_f32 * MotTqRplCoggOrder3X_MotNwtMtr_T_f32) + (MotTqRplCoggOrder3Y_MotNwtMtr_T_f32 * MotTqRplCoggOrder3Y_MotNwtMtr_T_f32));
	
	MotTqRplOrder1PhaTemp_Rad_T_f32 = ((float32)Sign_s08_f32(MotCurrQaxCmd_Ampr_T_f32)) * (Arctan2_f32(MotTqRplCoggOrder1Y_MotNwtMtr_T_f32, MotTqRplCoggOrder1X_MotNwtMtr_T_f32));
	MotTqRplOrder2PhaTemp_Rad_T_f32 = ((float32)Sign_s08_f32(MotCurrQaxCmd_Ampr_T_f32)) * (Arctan2_f32(MotTqRplCoggOrder2Y_MotNwtMtr_T_f32, MotTqRplCoggOrder2X_MotNwtMtr_T_f32));
	MotTqRplOrder3PhaTemp_Rad_T_f32 = ((float32)Sign_s08_f32(MotCurrQaxCmd_Ampr_T_f32)) * (Arctan2_f32(MotTqRplCoggOrder3Y_MotNwtMtr_T_f32, MotTqRplCoggOrder3X_MotNwtMtr_T_f32));
	/*ENDREQ: SF106A #61 I */
	
	/******Magnitude and Phase Computation ******/
     /* REQ: SF106A #71 I */
	MotTqRplCoggOrder1Mgn_MotNwtMtr_T_f32=Lim_f32((MotTqOrder1MagRP_Uls_T_f32*MotTqRplCoggOrder1MgnInt_MotNwtMtr_T_f32), MOTTQRPLLOLIM_MOTNWTMTR_F32, MOTTQRPLHILIM_MOTNWTMTR_F32);
	*Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Mgn()=MotTqRplCoggOrder1Mgn_MotNwtMtr_T_f32;
	
	MotTqRplCoggOrder2Mgn_MotNwtMtr_T_f32=Lim_f32((MotTqOrder2MagRP_Uls_T_f32*MotTqRplCoggOrder2MgnInt_MotNwtMtr_T_f32), MOTTQRPLLOLIM_MOTNWTMTR_F32, MOTTQRPLHILIM_MOTNWTMTR_F32);
	*Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Mgn()=MotTqRplCoggOrder2Mgn_MotNwtMtr_T_f32;
	
	MotTqRplCoggOrder3Mgn_MotNwtMtr_T_f32=Lim_f32((MotTqOrder3MagRP_Uls_T_f32*MotTqRplCoggOrder3MgnInt_MotNwtMtr_T_f32), MOTTQRPLLOLIM_MOTNWTMTR_F32, MOTTQRPLHILIM_MOTNWTMTR_F32);
	*Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Mgn()=MotTqRplCoggOrder3Mgn_MotNwtMtr_T_f32;
	/* ENDREQ: SF106A #71 I */

	/* REQ: SF106A #70 I */
	MotTqRplOrder1Phs_Rad_T_f32= MotTqOrder1BwCmpPha_Rad_T_f32 + MotTqRplOrder1PhaTemp_Rad_T_f32;
	MotTqRplOrder2Phs_Rad_T_f32= MotTqOrder2BwCmpPha_Rad_T_f32 + MotTqRplOrder2PhaTemp_Rad_T_f32;
	MotTqRplOrder3Phs_Rad_T_f32= MotTqOrder3BwCmpPha_Rad_T_f32 + MotTqRplOrder3PhaTemp_Rad_T_f32;
    
	/* REQ: SF106A #72 I */
	if(MotTqRplOrder1Phs_Rad_T_f32 < 0.0F)
	{
		MotTqRplOrder1Phs_Rad_T_f32=MotTqRplOrder1Phs_Rad_T_f32+ARCHGLBPRM_2PI_ULS_F32;
	}
	else if(MotTqRplOrder1Phs_Rad_T_f32 > ARCHGLBPRM_2PI_ULS_F32)
	{
		MotTqRplOrder1Phs_Rad_T_f32=MotTqRplOrder1Phs_Rad_T_f32-ARCHGLBPRM_2PI_ULS_F32;
	}
	else
	{
		/***********Do nothing********/
	}
	MotTqRplOrder1Phs_Rad_T_f32 = Lim_f32(MotTqRplOrder1Phs_Rad_T_f32,0.0F, ARCHGLBPRM_2PI_ULS_F32);
	
	if(MotTqRplOrder2Phs_Rad_T_f32 < 0.0F)
	{
		MotTqRplOrder2Phs_Rad_T_f32=MotTqRplOrder2Phs_Rad_T_f32+ARCHGLBPRM_2PI_ULS_F32;
	}
	else if(MotTqRplOrder2Phs_Rad_T_f32 > ARCHGLBPRM_2PI_ULS_F32)
	{
		MotTqRplOrder2Phs_Rad_T_f32=MotTqRplOrder2Phs_Rad_T_f32-ARCHGLBPRM_2PI_ULS_F32;
	}
	else
	{
		/***********Do nothing********/
	}
	MotTqRplOrder2Phs_Rad_T_f32 = Lim_f32(MotTqRplOrder2Phs_Rad_T_f32,0.0F, ARCHGLBPRM_2PI_ULS_F32);
	
	if(MotTqRplOrder3Phs_Rad_T_f32 <0.0F)
	{
		MotTqRplOrder3Phs_Rad_T_f32=MotTqRplOrder3Phs_Rad_T_f32+ARCHGLBPRM_2PI_ULS_F32;
	}
	else if(MotTqRplOrder3Phs_Rad_T_f32 > ARCHGLBPRM_2PI_ULS_F32)
	{
		MotTqRplOrder3Phs_Rad_T_f32=MotTqRplOrder3Phs_Rad_T_f32-ARCHGLBPRM_2PI_ULS_F32;
	}
	else
	{
		/***********Do nothing********/
	}
	MotTqRplOrder3Phs_Rad_T_f32 = Lim_f32(MotTqRplOrder3Phs_Rad_T_f32,0.0F, ARCHGLBPRM_2PI_ULS_F32);
	
	/* ENDREQ: SF106A #72 I */
	*Rte_Pim_dMotRplCoggCfgMotTqRplOrder1Pha()=MotTqRplOrder1Phs_Rad_T_f32;
	*Rte_Pim_dMotRplCoggCfgMotTqRplOrder2Pha()=MotTqRplOrder2Phs_Rad_T_f32;
	*Rte_Pim_dMotRplCoggCfgMotTqRplOrder3Pha()=MotTqRplOrder3Phs_Rad_T_f32;
	
	/* ENDREQ: SF106A #70 I */
	
	/***** PI Magnitude and phase response compensation table End *****/

	/**************** MotCurrToMotTqGain Calc*******************/
	/* REQ: SF106A #54 I */
	/* REQ: SF106A #56 I */
	MotCurrQaxToMotTqGain_VpRadpS_T_f32= (MotBackEmfConEstimd_VpRadpS_T_f32 * ARCHGLBPRM_HALFSQRT3_ULS_F32) + ((((MotInduQaxEstimd_Henry_T_f32-MotInduDaxEstimd_Henry_T_f32))* MotCurrDaxCmd_Ampr_T_f32) * ((float32)Rte_Prm_SysGlbPrmMotPoleCnt_Val() * THREEOVER8_ULS_F32));
	if( Abslt_f32_f32(MotCurrQaxToMotTqGain_VpRadpS_T_f32) <  ARCHGLBPRM_FLOATZEROTHD_ULS_F32)
	{
		/* REQ: SF106A #115 I */
		MotCurrQaxToMotTqGain_VpRadpS_T_f32 =  Rte_Prm_MotCtrlPrmEstimnMotBackEmfConNom_Val() * ARCHGLBPRM_HALFSQRT3_ULS_F32;
	}
	MotCurrQaxToMotTqGain_VpRadpS_T_f32 = Lim_f32(MotCurrQaxToMotTqGain_VpRadpS_T_f32,MOTCURRQAXTOMOTTQGAINLOLIM_VOLTPERMOTRADPERSEC_F32, MOTCURRQAXTOMOTTQGAINHILIM_VOLTPERMOTRADPERSEC_F32);
	*Rte_Pim_dMotRplCoggCfgMotCurrQaxToMotTqGain() =MotCurrQaxToMotTqGain_VpRadpS_T_f32;
    /* ENDREQ: SF106A #54 I */
	/* ENDREQ: SF106A #56 I */
    /**********Write Outputs**************/
	(void)Rte_Write_MotAgElecDlyRpl_Val(MotAgElecDlyRpl_MotRad_T_f32); /* REQ: SF106A #77 I */
	(void)Rte_Write_MotCurrQaxToMotTqGain_Val(MotCurrQaxToMotTqGain_VpRadpS_T_f32);  /* REQ: SF106A #46 I */
	(void)Rte_Write_MotTqRplCoggOrder1Mgn_Val(MotTqRplCoggOrder1Mgn_MotNwtMtr_T_f32);  /* REQ: SF106A #28 I */
	(void)Rte_Write_MotTqRplCoggOrder1Pha_Val(MotTqRplOrder1Phs_Rad_T_f32);   /* REQ: SF106A #51 I */
	(void)Rte_Write_MotTqRplCoggOrder2Mgn_Val(MotTqRplCoggOrder2Mgn_MotNwtMtr_T_f32);  /* REQ: SF106A #47 I */
	(void)Rte_Write_MotTqRplCoggOrder2Pha_Val(MotTqRplOrder2Phs_Rad_T_f32);  /* REQ: SF106A #48 I */
	(void)Rte_Write_MotTqRplCoggOrder3Mgn_Val(MotTqRplCoggOrder3Mgn_MotNwtMtr_T_f32);  /* REQ: SF106A #50 I */
	(void)Rte_Write_MotTqRplCoggOrder3Pha_Val(MotTqRplOrder3Phs_Rad_T_f32);/* REQ: SF106A #49 I */
	
	/* ENDREQ: SF106A #52 I */
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetMotRplCoggPrm_Oper
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <SetMotRplCoggPrm>
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_MotRplCoggPrm_SetRamBlockStatus(Boolean RamBlockStatus)
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_NvMService_AC3_SRBS_E_NOT_OK
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void SetMotRplCoggPrm_Oper(uint16 CoggOrder1_Arg, s1p14 CoggOrder1X_Arg, s1p14 CoggOrder1Y_Arg, uint16 CoggOrder2_Arg, s1p14 CoggOrder2X_Arg, s1p14 CoggOrder2Y_Arg, uint16 CoggOrder3_Arg, s1p14 CoggOrder3X_Arg, s1p14 CoggOrder3Y_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, MotRplCoggCfg_CODE) SetMotRplCoggPrm_Oper(uint16 CoggOrder1_Arg, s1p14 CoggOrder1X_Arg, s1p14 CoggOrder1Y_Arg, uint16 CoggOrder2_Arg, s1p14 CoggOrder2X_Arg, s1p14 CoggOrder2Y_Arg, uint16 CoggOrder3_Arg, s1p14 CoggOrder3X_Arg, s1p14 CoggOrder3Y_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SetMotRplCoggPrm_Oper
 *********************************************************************************************************************/

       /* REQ: SF106A #32 I */ 
       Rte_Pim_MotRplCoggPrm()->CoggOrder1          =  CoggOrder1_Arg;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder1X         =  CoggOrder1X_Arg;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder1Y         =  CoggOrder1Y_Arg;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder2          =  CoggOrder2_Arg;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder2X         =  CoggOrder2X_Arg;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder2Y         =  CoggOrder2Y_Arg;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder3          =  CoggOrder3_Arg;	   
	   Rte_Pim_MotRplCoggPrm()->CoggOrder3X         =  CoggOrder3X_Arg;
	   Rte_Pim_MotRplCoggPrm()->CoggOrder3Y         =  CoggOrder3Y_Arg;
	   (void)Rte_Call_MotRplCoggPrm_SetRamBlockStatus(TRUE);
       CalcCoggTqTbl();
	   /* ENDREQ: SF106A #32 I */ 
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define MotRplCoggCfg_STOP_SEC_CODE
#include "MotRplCoggCfg_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/*****************************************************************************
*
* Function Name:     CalcCoggTqTbl
*	
* Description:       CalcCoggTqTbl
*
* Inputs:           none
*
* Outputs:          none
* Usage Notes:      Function shall only be called by MotRplCoggCfg functions .              
*****************************************************************************/
static FUNC(void, AUTOMATIC )  CalcCoggTqTbl( void)
{
	VAR(sint16,  AUTOMATIC) CogTrqCalX1_MotNwtMtr_T_s1p14;
	VAR(sint16,  AUTOMATIC) CogTrqCalY1_MotNwtMtr_T_s1p14;
	VAR(sint16,  AUTOMATIC) CogTrqCalX2_MotNwtMtr_T_s1p14;
	VAR(sint16,  AUTOMATIC) CogTrqCalY2_MotNwtMtr_T_s1p14;
	VAR(sint16,  AUTOMATIC) CogTrqCalX3_MotNwtMtr_T_s1p14;
	VAR(sint16,  AUTOMATIC) CogTrqCalY3_MotNwtMtr_T_s1p14;
	VAR(uint16,  AUTOMATIC) i,j;
	


	
	CogTrqCalX1_MotNwtMtr_T_s1p14 = Lim_s16(Rte_Pim_MotRplCoggPrm()->CoggOrder1X, COGGLOLIM_MOTNWTMTR_S1P14, COGGHILIM_MOTNWTMTR_S1P14);
	CogTrqCalY1_MotNwtMtr_T_s1p14 = Lim_s16(Rte_Pim_MotRplCoggPrm()->CoggOrder1Y, COGGLOLIM_MOTNWTMTR_S1P14, COGGHILIM_MOTNWTMTR_S1P14);
	CogTrqCalX2_MotNwtMtr_T_s1p14 = Lim_s16(Rte_Pim_MotRplCoggPrm()->CoggOrder2X, COGGLOLIM_MOTNWTMTR_S1P14, COGGHILIM_MOTNWTMTR_S1P14);
	CogTrqCalY2_MotNwtMtr_T_s1p14 = Lim_s16(Rte_Pim_MotRplCoggPrm()->CoggOrder2Y, COGGLOLIM_MOTNWTMTR_S1P14, COGGHILIM_MOTNWTMTR_S1P14);	
	CogTrqCalX3_MotNwtMtr_T_s1p14 = Lim_s16(Rte_Pim_MotRplCoggPrm()->CoggOrder3X, COGGLOLIM_MOTNWTMTR_S1P14, COGGHILIM_MOTNWTMTR_S1P14);
	CogTrqCalY3_MotNwtMtr_T_s1p14 = Lim_s16(Rte_Pim_MotRplCoggPrm()->CoggOrder3Y, COGGLOLIM_MOTNWTMTR_S1P14, COGGHILIM_MOTNWTMTR_S1P14);

	
	for (i=0u;i<TblSize_m(PrmMotRplCoggCfgMotCurrDaxRplBilnrSeln);i++)
	{
		for (j=0u; j<TblSize_m(PrmMotRplCoggCfgMotCurrQaxRpl);j++)
		{
			PimMotTqRplOrder1X[i][j] =   PrmMotRplCoggCfgMotTqRplOrder1X[i][j] + CogTrqCalX1_MotNwtMtr_T_s1p14;
			PimMotTqRplOrder1Y[i][j] =   PrmMotRplCoggCfgMotTqRplOrder1Y[i][j] + CogTrqCalY1_MotNwtMtr_T_s1p14;
			PimMotTqRplOrder2X[i][j] =   PrmMotRplCoggCfgMotTqRplOrder2X[i][j] + CogTrqCalX2_MotNwtMtr_T_s1p14;
			PimMotTqRplOrder2Y[i][j] =   PrmMotRplCoggCfgMotTqRplOrder2Y[i][j] + CogTrqCalY2_MotNwtMtr_T_s1p14;
			PimMotTqRplOrder3X[i][j] =   PrmMotRplCoggCfgMotTqRplOrder3X[i][j] + CogTrqCalX3_MotNwtMtr_T_s1p14;
			PimMotTqRplOrder3Y[i][j] =   PrmMotRplCoggCfgMotTqRplOrder3Y[i][j] + CogTrqCalY3_MotNwtMtr_T_s1p14;
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
