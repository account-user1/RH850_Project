/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : NxtrMcuSuprtLib.h
* Module Description: Nexteer Microcontroller Unit Support Library Header
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 07/13/17  1        LWW       Initial Version                                                                 EA4#13868                 
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef NXTRMCUSUPRTLIB_H
#define NXTRMCUSUPRTLIB_H

/************************************************ Include Statements *************************************************/
#include <v800_ghs.h>
#include "Std_Types.h"
#include "Os.h"
#include "Mcu.h"
#include "ECM0_RegDefns.h"
#include "ECMM0_RegDefns.h"
#include "ECMC0_RegDefns.h"
#include "FLMD_RegDefns.h"
#include "SYSCTL_RegDefns.h"
#include "NxtrDet.h"
#include "CDD_ExcpnHndlg.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 1.1 [NXTRDEV 1.1.1]: Inline functions are used for Nexteer Mcu Support library macros to allow for throughput optimization */
/* MISRA-C:2004 Rule 8.5 [NXTRDEV 8.5.1]: Function definitions are required to be in a header for inline function usage */

/****************************************************** Macros *******************************************************/
#define FEPCREGID_CNT_S32 		(2)	/* register ID of FEPC */
#define FEPCSELNID_CNT_S32 		(0)	/* selection ID of FEPC */
#define EIPCREGID_CNT_S32 		(0)	/* register ID of EIPC */
#define EIPCSELNID_CNT_S32 		(0)	/* selection ID of EIPC */

/*********************************************** Exported Declarations ***********************************************/

INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcmm0_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcmc0_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcm0_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegFlmd_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) NxtrSwRst(P1mcDiagc1 McuDiagcData0_Arg, uint32 McuDiagcData1_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) NxtrSwRstFromExcpn(P1mcDiagc1 McuDiagcData0_Arg, uint32 McuDiagcData1_Arg);

/********************************************************************************************************
* CLMA Control registers need a protected sequence for enabling CLMA, however, it is assumed the MCAL 
* will be handling this, so this file does not include a sequence for these registers
********************************************************************************************************/

/********************************************************************************************************
*  Name:           WrProtdRegEcmm0_u32
*  Description:    Write Protected Register Library Function: Ecmm0
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcmm0_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFD60000U: /* ECMM0ESET */
			case 0xFFD60004U: /* ECMM0ECLR */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 14U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    ECMM0PCMD0 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (ECM0PS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		ECMM0PCMD0 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (ECM0PS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			ECMM0PCMD0 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (ECM0PS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 14U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegEcmc0_u32
*  Description:    Write Protected Register Library Function: Ecmc0
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcmc0_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFD61000U: /* ECMC0ESET */
			case 0xFFD61004U: /* ECMC0ECLR */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 15U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    ECMC0PCMD0 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (ECM0PS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		ECMC0PCMD0 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (ECM0PS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			ECMC0PCMD0 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (ECM0PS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 15U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegEcm0_u32
*  Description:    Write Protected Register Library Function: Ecm0
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcm0_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFD62000U: /* ECM0EPCFG */
			case 0xFFD62004U: /* ECM0MICFG0 */
			case 0xFFD62008U: /* ECM0MICFG1 */
			case 0xFFD6200CU: /* ECM0MICFG2 */
			case 0xFFD62010U: /* ECM0NMICFG0 */
			case 0xFFD62014U: /* ECM0NMICFG1 */
			case 0xFFD62018U: /* ECM0NMICFG2 */
			case 0xFFD6201CU: /* ECM0IRCFG0 */
			case 0xFFD62020U: /* ECM0IRCFG1 */
			case 0xFFD62024U: /* ECM0IRCFG2 */
			case 0xFFD62028U: /* ECM0EMK0 */
			case 0xFFD6202CU: /* ECM0EMK1 */
			case 0xFFD62030U: /* ECM0EMK2 */
			case 0xFFD62034U: /* ECM0ESSTC0 */
			case 0xFFD62038U: /* ECM0ESSTC1 */
			case 0xFFD6203CU: /* ECM0ESSTC2 */
			case 0xFFD62048U: /* ECM0PE0 */
			case 0xFFD6204CU: /* ECM0PE1 */
			case 0xFFD62050U: /* ECM0PE2 */
			case 0xFFD62054U: /* ECM0DTMCTL */
			case 0xFFD6205CU: /* ECM0DTMCMP */
			case 0xFFD62060U: /* ECM0DTMCFG0 */
			case 0xFFD62064U: /* ECM0DTMCFG1 */
			case 0xFFD62068U: /* ECM0DTMCFG2 */
			case 0xFFD6206CU: /* ECM0DTMCFG3 */
			case 0xFFD62070U: /* ECM0DTMCFG4 */
			case 0xFFD62074U: /* ECM0DTMCFG5 */
			case 0xFFD62078U: /* ECM0EOCCFG */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 16U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    ECM0PCMD1 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (ECM0PS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		ECM0PCMD1 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (ECM0PS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			ECM0PCMD1 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (ECM0PS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 16U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegFlmd_u32
*  Description:    Write Protected Register Library Function: Flmd
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegFlmd_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFA00000U: /* FLMDCNT */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 19U, 0U);
				break;
		}
	#endif

	/* Attempt protected write sequence without interrupts being disabled */
    FLMDPCMD = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (FLMDPS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		FLMDPCMD = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (FLMDPS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			FLMDPCMD = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (FLMDPS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 19U, 255U);
				}
			#endif
		}
    }
}

/*****************************************************************************
*  Name:           NxtrSwRst
*  Description:    Nexteer Software Reset
*  Inputs:         McuDiagcData0_Arg - Enumeration value for Diagnostic Data 0
*                  McuDiagcData1_Arg - Raw value for Diagnostic Data 1
*  Outputs:        None
*  Usage Notes:    Nexteer standard function to reset
*****************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) NxtrSwRst(P1mcDiagc1 McuDiagcData0_Arg, uint32 McuDiagcData1_Arg)
{
	SetMcuDiagcIdnData(McuDiagcData0_Arg, McuDiagcData1_Arg);
	
	/* Reset RESF per SAN prior to each SW reset */
	RESFC = 0x000007BFU;
	Mcu_PerformReset();

	while(1){}
}

/*****************************************************************************
*  Name:           NxtrSwRstFromExcpn
*  Description:    Nexteer Software Reset from exception
*  Inputs:         McuDiagcData0_Arg - Enumeration value for Diagnostic Data 0
*                  McuDiagcData1_Arg - Raw value for Diagnostic Data 1
*  Outputs:        None
*  Usage Notes:    Nexteer standard function to reset when coming from an exception handler
*****************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) NxtrSwRstFromExcpn(P1mcDiagc1 McuDiagcData0_Arg, uint32 McuDiagcData1_Arg)
{
	/* Clear ECM Status Registers */
	WrProtdRegEcm0_u32(0xFFFFFFFFU, &ECM0ESSTC0);
	WrProtdRegEcm0_u32(0xFFFFFFFFU, &ECM0ESSTC1);
	WrProtdRegEcm0_u32(0x7FFFFFFFU, &ECM0ESSTC2);
		
	/* Store PC at time of exception if no other data is to be stored */
	if (McuDiagcData1_Arg == 0x00000000U)
	{
		McuDiagcData1_Arg = __STSR(FEPCREGID_CNT_S32, FEPCSELNID_CNT_S32);
	}
	else if (McuDiagcData1_Arg == 0xFFFFFFFFU)
	{
		McuDiagcData1_Arg = __STSR(EIPCREGID_CNT_S32, EIPCSELNID_CNT_S32);
	}
	else
	{
	}
	
	SetMcuDiagcIdnData(McuDiagcData0_Arg, McuDiagcData1_Arg);
	
	/* Set Error out pin to low before reset */
	WrProtdRegEcmm0_u32(0x00000001U, &ECMM0ESET);
	WrProtdRegEcmc0_u32(0x00000001U, &ECMC0ESET);
	
	/* Reset RESF per SAN prior to each SW reset */
	RESFC = 0x000007BFU;
	Mcu_PerformReset();
	
	while(1){}
}

#endif
