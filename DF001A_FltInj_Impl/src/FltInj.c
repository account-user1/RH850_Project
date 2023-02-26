/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  FltInj.c
 *     SW-C Type:  FltInj
 *  Generated at:  Tue Aug 25 11:25:38 2015
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <FltInj>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
/**********************************************************************************************************************
* Copyright 2015, 2016 Nexteer
* Nexteer Confidential
*
* Module File Name: FltInj.c
* Module Description: Fault Injection 
* Project           : CBD
* Author            : Darryl Greathouse
***********************************************************************************************************************
* Version Control:
* %version:           2 %
* %derived_by:        nz4qtt %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                         SCR #
* -------   -------  --------  ------------------------------------------------------------------------     ----------
* 08/27/15  1        DG       Initial version                                                                EA4#952
* 04/29/16  2        KK       Updates are per FDD v2.1.0                                                     EA4#5321
**********************************************************************************************************************/
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
  u0p16
    uint16 represents integers with a minimum value of 0 and a maximum value of 65535.
     The order-relation on uint16 is: x < y if y - x is positive.
     uint16 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 1267, +10000.

 *********************************************************************************************************************/

#include "Rte_FltInj.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value for Rte_Read_*, Rte_Write_* */ 
/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.2]: Server runnable is a void function; Rte generation adds standard return type but no error information is returned. */ 
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


#include "FltInj.h"
#if(STD_ON == FLTINJENA)

#include "ArchGlbPrm.h"
#include "NxtrFixdPt.h"
#include "NxtrMath.h"

/* Time Conversion */
/* System Time services are in units of Counts.  1 count = 100 microsec. */
#define TICNVN_MILLISECPERCNT_F32                 (0.1F)

/* Time Conversion */
/* System Time services are in units of Counts.  1 count = 100 microsec. */
#define TICNVN_MICROTOMILLI_F32                   (0.001F)

/* Uint16 Maximum */
#define UINT16MAX_ULS_F32 						  (65535.0F)

/* Float To u0p16 Multiplier */
#define FLOATTOU0P16MULT_ULS_F32                  (65536.0F)

/* UINT8MAX_ULS_F32 */
#define UINT8MAX_ULS_F32						  (255.0F)

typedef struct 
{
	float32 	FltGain;
	float32 	FltOffs;
	float32 	SinFrq;
	float32 	SinAmp;
	float32		HwVelThd;
	float32 	FltDurn;
	uint16		FltLocn;
	boolean		LoglFlt;
	boolean		FltInjEna;
}FltInjUsrPrmRec1;

/* Map variables to code section so only one set of memory map statement needs to be modified in integration project to map variables to global shared data.
   This will need to be done regardless for mapping of the function scope variables in Per1.  Technically only FltInjUsrPrm_M needs to map to global shared, 
   but all will be mapped for simplicity */
   
#define FltInj_START_SEC_CODE
#include "FltInj_MemMap.h"/* PRQA S 5087 */
   
static volatile VAR(FltInjUsrPrmRec1, FltInj_VAR) FltInjUsrPrm_M;
static VAR(float32, FltInj_VAR) FltInjPahGain_M;
static VAR(float32, FltInj_VAR) FltInjPahOffs_M;
static VAR(boolean, FltInj_VAR) FltInjFltEna_M;

#define FltInj_STOP_SEC_CODE
#include "FltInj_MemMap.h"/* PRQA S 5087 */
   
#endif
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
 * u0p16: Integer in interval [0...65535]
 *
 *********************************************************************************************************************/


#define FltInj_START_SEC_CODE
#include "FltInj_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FltInjPer1
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
 *   Std_ReturnType Rte_Read_HwVel_Val(float32 *data)
 *
 * Client/Server Interfaces:
 * =========================
 *   Server Invocation:
 *   ------------------
 *   Std_ReturnType Rte_Call_GetRefTmr100MicroSec32bit_Oper(uint32 *RefTmr)
 *     Synchronous Server Invocation. Timeout: None
 *   Std_ReturnType Rte_Call_GetTiSpan100MicroSec32bit_Oper(uint32 RefTmr, uint32 *TiSpan)
 *     Synchronous Server Invocation. Timeout: None
 *
 *********************************************************************************************************************/

FUNC(void, FltInj_CODE) FltInjPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInjPer1
 *********************************************************************************************************************/
#if(STD_ON == FLTINJENA)

	
	static VAR(uint32, FltInj_VAR) FltInjRefTmr_F;
	static volatile VAR(float32, FltInj_VAR) dFltInjHwVel_F;

	VAR(float32, AUTOMATIC) HwVel_HwRadPerSec_T_f32;
	VAR(float32, AUTOMATIC) PahGain_Uls_T_f32;
	VAR(float32, AUTOMATIC) PahOffs_Uls_T_f32;
	VAR(float32, AUTOMATIC) HwVelAbs_HwDegPerSec_T_f32;
	VAR(uint32, AUTOMATIC) FltInjRefTmr_Uls_T_u32;
	VAR(uint32, AUTOMATIC) RefTmrTiSpan_Uls_T_u32;
	VAR(float32, AUTOMATIC) ElpdTi_MilliSec_T_f32;
	VAR(boolean, AUTOMATIC) FltInjFltEna_Cnt_T_logl;
	VAR(FltInjUsrPrmRec1, AUTOMATIC) FltInjUsrPrm_Cnt_T_rec;

	/* Read Inputs */
	(void)Rte_Read_HwVel_Val(&HwVel_HwRadPerSec_T_f32);
	FltInjFltEna_Cnt_T_logl = FltInjFltEna_M;
	FltInjUsrPrm_Cnt_T_rec = FltInjUsrPrm_M;
	FltInjRefTmr_Uls_T_u32 = FltInjRefTmr_F;
	HwVelAbs_HwDegPerSec_T_f32 = Abslt_f32_f32(HwVel_HwRadPerSec_T_f32 * ARCHGLBPRM_180OVERPI_ULS_F32);
	dFltInjHwVel_F = HwVelAbs_HwDegPerSec_T_f32;

	if(FALSE == FltInjUsrPrm_Cnt_T_rec.FltInjEna)
	{ /* Disable_FltInj */
		FltInjFltEna_Cnt_T_logl = FALSE;
		PahGain_Uls_T_f32 = 1.0F;
		PahOffs_Uls_T_f32 = 0.0F;
	}
	else if((HwVelAbs_HwDegPerSec_T_f32 >= FltInjUsrPrm_Cnt_T_rec.HwVelThd) && (FALSE == FltInjFltEna_Cnt_T_logl))
	{ /* Begin_FltInj */
		(void)Rte_Call_GetRefTmr100MicroSec32bit_Oper(&FltInjRefTmr_Uls_T_u32);
		FltInjFltEna_Cnt_T_logl = TRUE;
		PahGain_Uls_T_f32 = FltInjUsrPrm_Cnt_T_rec.FltGain;
		PahOffs_Uls_T_f32 = FltInjUsrPrm_Cnt_T_rec.FltOffs;
	}
	else 
	{ /* Continue_FltInj */
		(void)Rte_Call_GetTiSpan100MicroSec32bit_Oper(FltInjRefTmr_Uls_T_u32,&RefTmrTiSpan_Uls_T_u32);
		ElpdTi_MilliSec_T_f32 = FixdToFloat_f32_u32(RefTmrTiSpan_Uls_T_u32, TICNVN_MILLISECPERCNT_F32);
		if(ElpdTi_MilliSec_T_f32 > FltInjUsrPrm_Cnt_T_rec.FltDurn)
		{
			FltInjFltEna_Cnt_T_logl = FALSE;
			PahGain_Uls_T_f32 = 1.0F;
			PahOffs_Uls_T_f32 = 0.0F;
			FltInjUsrPrm_Cnt_T_rec.FltInjEna = FALSE;
		}
		else
		{
			PahOffs_Uls_T_f32 = ElpdTi_MilliSec_T_f32 * ARCHGLBPRM_2PI_ULS_F32 * FltInjUsrPrm_Cnt_T_rec.SinFrq * TICNVN_MICROTOMILLI_F32;
			PahOffs_Uls_T_f32 = (Sin_f32(PahOffs_Uls_T_f32) * FltInjUsrPrm_Cnt_T_rec.SinAmp) + FltInjUsrPrm_Cnt_T_rec.FltOffs;
			PahGain_Uls_T_f32 = FltInjUsrPrm_Cnt_T_rec.FltGain;

		}
	}

	/* Set Outputs */
	FltInjFltEna_M = FltInjFltEna_Cnt_T_logl;
	FltInjRefTmr_F = FltInjRefTmr_Uls_T_u32;
	FltInjPahGain_M = PahGain_Uls_T_f32;
	FltInjPahOffs_M = PahOffs_Uls_T_f32;
	FltInjUsrPrm_M.FltInjEna = FltInjUsrPrm_Cnt_T_rec.FltInjEna;
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FltInj_f32_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <FltInj_f32>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void FltInj_f32_Oper(float32 *SigPah_Arg, uint16 LocnKey_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, FltInj_CODE) FltInj_f32_Oper(P2VAR(float32, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_f32_Oper
 *********************************************************************************************************************/
#if(STD_ON == FLTINJENA)
	if((TRUE == FltInjFltEna_M) && (LocnKey_Arg == FltInjUsrPrm_M.FltLocn))
	{
		*SigPah_Arg = ((*SigPah_Arg) * FltInjPahGain_M) + FltInjPahOffs_M;
	}
	else 
	{
		/* do nothing, do not modify the variable */
	}
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FltInj_logl_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <FltInj_logl>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void FltInj_logl_Oper(boolean *SigPah_Arg, uint16 LocnKey_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, FltInj_CODE) FltInj_logl_Oper(P2VAR(boolean, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_logl_Oper
 *********************************************************************************************************************/
#if(STD_ON == FLTINJENA)
	if((TRUE == FltInjFltEna_M) && (LocnKey_Arg == FltInjUsrPrm_M.FltLocn))
	{
		*SigPah_Arg = FltInjUsrPrm_M.LoglFlt;
	}
	else 
	{
		/* do nothing, do not modify the variable */
	}
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FltInj_u08_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <FltInj_u08>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void FltInj_u08_Oper(uint8 *SigPah_Arg, uint16 LocnKey_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, FltInj_CODE) FltInj_u08_Oper(P2VAR(uint8, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_u08_Oper
 *********************************************************************************************************************/
#if(STD_ON == FLTINJENA)
	if((TRUE == FltInjFltEna_M) && (LocnKey_Arg == FltInjUsrPrm_M.FltLocn))
	{
		/* Canape must protect that this variable must be unsigned */
		*SigPah_Arg = (uint8)Lim_f32((((float32)(*SigPah_Arg) * FltInjPahGain_M) + FltInjPahOffs_M),0.0F,UINT8MAX_ULS_F32);
	}
	else 
	{
		/* do nothing, do not modify the variable */
	}
#endif

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: FltInj_u0p16_Oper
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <Oper> of PortPrototype <FltInj_u0p16>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   void FltInj_u0p16_Oper(u0p16 *SigPah_Arg, uint16 LocnKey_Arg)
 *
 *********************************************************************************************************************/

FUNC(void, FltInj_CODE) FltInj_u0p16_Oper(P2VAR(u0p16, AUTOMATIC, RTE_FLTINJ_APPL_VAR) SigPah_Arg, uint16 LocnKey_Arg) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: FltInj_u0p16_Oper
 *********************************************************************************************************************/
#if(STD_ON == FLTINJENA)
	if((TRUE == FltInjFltEna_M) && (LocnKey_Arg == FltInjUsrPrm_M.FltLocn))
	{
		*SigPah_Arg = (uint16)Lim_f32((((float32)(*SigPah_Arg) * FltInjPahGain_M) + (FLOATTOU0P16MULT_ULS_F32 * FltInjPahOffs_M)),0.0F,UINT16MAX_ULS_F32);
	}
	else 
	{
		/* do nothing, do not modify the variable */
	}
#endif
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define FltInj_STOP_SEC_CODE
#include "FltInj_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
