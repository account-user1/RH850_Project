/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  SysStMod.c
 *     SW-C Type:  SysStMod
 *  Generated at:  Mon Apr  4 12:38:52 2016
 *
 *     Generator:  MICROSAR RTE Generator Version 4.3.0
 *                 RTE Core Version 1.3.0
 *       License:  Unlimited license CBD1400351 (THE ECU PRODUCT "STEERING SYSTEMS", THE ECU SUPPLIER "NEXTEER", THE VEHICLE MANUFACTURER "GENERAL MOTORS CORPORATION") for Nexteer Automotive Corporation
 *
 *   Description:  C-Code implementation template for SW-C <SysStMod>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : SysStMod.c
* Module Description: System States and Modes
* Project           : CBD
* Author            : Owen Tosh
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       pznywf %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* --------  -------  --------  -----------------------------------------------------------------------------  -------
* 03/16/15   1       OT        Initial version                                                                EA4#145
* 04/11/15   2       KMC       Import latest standard definitions and make associated code changes            EA4#145
* 03/14/16   3       KK        Updates made for linking of requirements (Fix for EA4#2427)                    EA4#2456
* 04/04/16   4       SV        Updates for FDD version 1.3.0    							                  EA4#5086
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
  SysSt1
    uint8 represents integers with a minimum value of 0 and a maximum value of 255.
     The order-relation on uint8 is: x < y if y - x is positive.
     uint8 has a lexical representation consisting of a finite-length sequence 
     of decimal digits (#x30-#x39).
     
     For example: 1, 0, 126, +10.

 *********************************************************************************************************************/

#include "Rte_SysStMod.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/* MISRA-C:2004 Rule 16.10 [NXTRDEV 16.10.1]: There is no appropriate action to take on the return value */
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */


#include "ElecGlbPrm.h"


#define SYSSTREQENBIT_CNT_U16			0x04u
#define PWRSPLYENREQBIT_CNT_U16			0x10u
#define SYSSTFLTOUTPREQDIBIT_CNT_U16	0x08u
#define SYSSTREQDIBIT_CNT_U16			0x02u
#define SYSSTWRMININCMPLBIT_CNT_U16		0x01u


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Enumeration Types:
 * ==================
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
 *   uint16 *Rte_Pim_dSysStModTranVect(void)
 *   SysSt1 *Rte_Pim_SysStModPrevSysSt(void)
 *
 *********************************************************************************************************************/


#define SysStMod_START_SEC_CODE
#include "SysStMod_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SysStModInit1
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

FUNC(void, SysStMod_CODE) SysStModInit1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SysStModInit1
 *********************************************************************************************************************/
	
	/* REQ: ES100A #87 I */
	*(Rte_Pim_SysStModPrevSysSt()) = SYSST_WRMININ;
	/* ENDREQ: ES100A #87 */
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SysStModPer1
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
 *   Std_ReturnType Rte_Read_PwrSplyEnaReq_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_StrtUpSt_Val(uint8 *data)
 *   Std_ReturnType Rte_Read_SysStFltOutpReqDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStImdtTranReqOff_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStReqDi_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStReqEna_Logl(boolean *data)
 *   Std_ReturnType Rte_Read_SysStWrmIninCmpl_Logl(boolean *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_SysSt_Val(SysSt1 data)
 *
 *********************************************************************************************************************/

FUNC(void, SysStMod_CODE) SysStModPer1(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: SysStModPer1
 *********************************************************************************************************************/
	
	
	/* REQ: ES100A #77 P : Integration dependent - periodic is scheduled at 2ms in Developer model */
	/* REQ: ES100A #78 P : Integration dependent - runnable placement should be noted in integration manual */
	
	
	CONST(SysSt1, AUTOMATIC) SYSSTMODPRSNTSTDI_CNT_U16[32u] =
	{
		SYSST_OFF, SYSST_OFF, SYSST_OFF, SYSST_OFF, SYSST_OFF,     SYSST_OFF,     SYSST_OFF,     SYSST_OFF,
		SYSST_OFF, SYSST_OFF, SYSST_OFF, SYSST_OFF, SYSST_OFF,     SYSST_OFF,     SYSST_OFF,     SYSST_OFF,
		SYSST_DI,  SYSST_DI,  SYSST_DI,  SYSST_DI,  SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ,
		SYSST_DI,  SYSST_DI,  SYSST_DI,  SYSST_DI,  SYSST_DI,      SYSST_DI,      SYSST_DI,      SYSST_DI
	};
	
	/* REQ: ES100A #89 I */
	CONST(SysSt1, AUTOMATIC) SYSSTMODPRSNTSTENA_CNT_U16[32u] =
	{
		SYSST_ENA, SYSST_ENA, SYSST_DI, SYSST_DI, SYSST_ENA, SYSST_ENA, SYSST_DI, SYSST_DI,
		SYSST_ENA, SYSST_ENA, SYSST_DI, SYSST_DI, SYSST_ENA, SYSST_ENA, SYSST_DI, SYSST_DI,
		SYSST_ENA, SYSST_ENA, SYSST_DI, SYSST_DI, SYSST_ENA, SYSST_ENA, SYSST_DI, SYSST_DI,
		SYSST_ENA, SYSST_ENA, SYSST_DI, SYSST_DI, SYSST_ENA, SYSST_ENA, SYSST_DI, SYSST_DI
	};
	/* ENDREQ: ES100A #89 */
	
	/* REQ: ES100A #85 I */
	CONST(SysSt1, AUTOMATIC) SYSSTMODPRSNTSTOFF_CNT_U16[32u] =
	{
		SYSST_OFF,     SYSST_OFF,     SYSST_OFF,     SYSST_OFF,     SYSST_OFF,     SYSST_OFF,     SYSST_OFF,     SYSST_OFF,
		SYSST_OFF,     SYSST_OFF,     SYSST_OFF,     SYSST_OFF,     SYSST_OFF,     SYSST_OFF,     SYSST_OFF,     SYSST_OFF,
		SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ,
		SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ
	};
	/* ENDREQ: ES100A #85 */
	
	/* REQ: ES100A #88 I */
	CONST(SysSt1, AUTOMATIC) SYSSTMODPRSNTSTWRMININ_CNT_U16[32u] =
	{
		SYSST_DI,      SYSST_DI,      SYSST_DI,      SYSST_DI,      SYSST_DI,      SYSST_DI,  SYSST_DI,      SYSST_DI,
		SYSST_DI,      SYSST_DI,      SYSST_DI,      SYSST_DI,      SYSST_DI,      SYSST_DI,  SYSST_DI,      SYSST_DI,
		SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_WRMININ, SYSST_ENA, SYSST_WRMININ, SYSST_WRMININ,
		SYSST_DI,      SYSST_DI,      SYSST_DI,      SYSST_DI,      SYSST_DI,      SYSST_DI,  SYSST_DI,      SYSST_DI
	};
	/* ENDREQ: ES100A #88 */
	
	
	VAR(boolean, AUTOMATIC) PwrSplyEnaReq_Cnt_T_Logl;
	VAR(uint8,   AUTOMATIC) StrtUpSt_Cnt_T_u08;
	VAR(boolean, AUTOMATIC) SysStFltOutpReqDi_Cnt_T_Logl;
	VAR(boolean, AUTOMATIC) SysStImdtTranReqOff_Cnt_T_Logl;
	VAR(boolean, AUTOMATIC) SysStReqDi_Cnt_T_Logl;
	VAR(boolean, AUTOMATIC) SysStReqEna_Cnt_T_Logl;
	VAR(boolean, AUTOMATIC) SysStWrmIninCmpl_Cnt_T_Logl;
	VAR(SysSt1,  AUTOMATIC) PrevSysSt_Cnt_T_enum;
	
	VAR(uint16,  AUTOMATIC) TranVect_Cnt_T_u16;
	VAR(SysSt1,  AUTOMATIC) SysSt_Cnt_T_enum;
	
	
	(void)Rte_Read_PwrSplyEnaReq_Logl(&PwrSplyEnaReq_Cnt_T_Logl); /* REQ: ES100A #48 I */
	(void)Rte_Read_StrtUpSt_Val(&StrtUpSt_Cnt_T_u08); /* REQ: ES100A #70 I */
	(void)Rte_Read_SysStFltOutpReqDi_Logl(&SysStFltOutpReqDi_Cnt_T_Logl); /* REQ: ES100A #65 I */
	(void)Rte_Read_SysStImdtTranReqOff_Logl(&SysStImdtTranReqOff_Cnt_T_Logl); /* REQ: ES100A #69 I */
	(void)Rte_Read_SysStReqDi_Logl(&SysStReqDi_Cnt_T_Logl); /* REQ: ES100A #67 I */
	(void)Rte_Read_SysStReqEna_Logl(&SysStReqEna_Cnt_T_Logl); /* REQ: ES100A #66 I */
	(void)Rte_Read_SysStWrmIninCmpl_Logl(&SysStWrmIninCmpl_Cnt_T_Logl); /* REQ: ES100A #68 I */
	PrevSysSt_Cnt_T_enum = *(Rte_Pim_SysStModPrevSysSt());
	
	
	/* Build Transition Vector */
	/* REQ: ES100A #73 I */ /* REQ: ES100A #76 I */
	
	/* Some static analysis tools flag the following initial "|=" statement as redundant.  This is not a MISRA violation,
	*  but a tool-specific interpretation.  The code is written this way to maintain consistency among the following
	*  statements.  Explanation given here for future reference during code reviews. */
	
	TranVect_Cnt_T_u16 = 0u;
	
	if( SysStReqEna_Cnt_T_Logl == TRUE )
	{
		TranVect_Cnt_T_u16 |= SYSSTREQENBIT_CNT_U16; /* Not a MISRA violation - see comment above */
	}
	
	if( PwrSplyEnaReq_Cnt_T_Logl == TRUE )
	{
		TranVect_Cnt_T_u16 |= PWRSPLYENREQBIT_CNT_U16;
	}
	
	if( SysStFltOutpReqDi_Cnt_T_Logl == TRUE )
	{
		TranVect_Cnt_T_u16 |= SYSSTFLTOUTPREQDIBIT_CNT_U16;
	}
	
	if( SysStReqDi_Cnt_T_Logl == TRUE )
	{
		TranVect_Cnt_T_u16 |= SYSSTREQDIBIT_CNT_U16;
	}
	
	if( SysStWrmIninCmpl_Cnt_T_Logl == TRUE )
	{
		TranVect_Cnt_T_u16 |= SYSSTWRMININCMPLBIT_CNT_U16;
	}
	
	/* ENDREQ: ES100A #73 */ /* ENDREQ: ES100A #76 */
	
	
	/* Determine Next State */
	/* REQ: ES100A #77 I */ /* REQ: ES100A #78 I */
	if( SysStImdtTranReqOff_Cnt_T_Logl == TRUE ) /* REQ: ES100A #91 I */ /* REQ: ES100A #93 I */ /* REQ: ES100A #92 I */ /* REQ: ES100A #96 I */ /* REQ: ES100A #98 I */ /* REQ: ES100A #97 I */
	{
		SysSt_Cnt_T_enum = SYSST_OFF; /* REQ: ES100A #91 I */ /* REQ: ES100A #93 I */ /* REQ: ES100A #92 I */ /* REQ: ES100A #96 I */ /* REQ: ES100A #98 I */ /* REQ: ES100A #97 I */
	}
	else if( PrevSysSt_Cnt_T_enum == SYSST_DI )
	{
		SysSt_Cnt_T_enum = SYSSTMODPRSNTSTDI_CNT_U16[TranVect_Cnt_T_u16]; /* REQ: ES100A #90 I */ /* REQ: ES100A #94 I */
	}
	else if( PrevSysSt_Cnt_T_enum == SYSST_OFF )
	{
		SysSt_Cnt_T_enum = SYSSTMODPRSNTSTOFF_CNT_U16[TranVect_Cnt_T_u16]; /* REQ: ES100A #85 I */
	}
	else if( PrevSysSt_Cnt_T_enum == SYSST_ENA )
	{
		SysSt_Cnt_T_enum = SYSSTMODPRSNTSTENA_CNT_U16[TranVect_Cnt_T_u16]; /* REQ: ES100A #89 I */
	}
	else if( PrevSysSt_Cnt_T_enum == SYSST_WRMININ )
	{
		SysSt_Cnt_T_enum = SYSSTMODPRSNTSTWRMININ_CNT_U16[TranVect_Cnt_T_u16]; /* REQ: ES100A #88 I */ /* REQ: ES100A #187 I */ /* REQ: ES100A #188 I */
		
		/* REQ: ES100A #95 I */
		if( (SysSt_Cnt_T_enum == SYSST_DI) &&
			(StrtUpSt_Cnt_T_u08 < ELECGLBPRM_STRTUPSTTMPLMONININTESTCMPL_CNT_U08) )
		{
			SysSt_Cnt_T_enum = SYSST_WRMININ;
		}
		/* ENDREQ: ES100A #95 */
	}
	else
	{
		SysSt_Cnt_T_enum = SYSST_DI; /* REQ: ES100A #99 I */
	}
	
	
	*(Rte_Pim_dSysStModTranVect()) = TranVect_Cnt_T_u16; /* REQ: ES100A #53 I */
	*(Rte_Pim_SysStModPrevSysSt()) = SysSt_Cnt_T_enum;
	/* ENDREQ: ES100A #77 */ /* ENDREQ: ES100A #78 */
	
	(void) Rte_Write_SysSt_Val(SysSt_Cnt_T_enum); /* REQ: ES100A #51 I */ /* REQ: ES100A #32 I */
	
	
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define SysStMod_STOP_SEC_CODE
#include "SysStMod_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


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
