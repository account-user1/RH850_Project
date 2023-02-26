/**********************************************************************************************************************
* Copyright 2015, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : NxtrMcuSuprtLib.h
* Module Description: Nexteer Microcontroller Unit Support Library Header
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       rzk04c %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 10/08/15  1        LWW       Initial Version                                                                 EA4#1907
* 02/02/17  2        AJM       Updated to make error out pin to low in NxtrSwRstFromExcpn().                   EA4#9576
* 02/02/17  3        AJM       Updated to make error out pin to low in NxtrSwRstFromExcpn() using              EA4#9780
                               register writes instead of client call.                   
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef NXTRMCUSUPRTLIB_H
#define NXTRMCUSUPRTLIB_H

/************************************************ Include Statements *************************************************/
#include <v800_ghs.h>
#include "Std_Types.h"
#include "Os.h"
#include "Mcu.h"
#include "ecm_regs.h"
#include "sys_regs.h"
#include "clma_regs.h"
#include "port_regs.h"
#include "flash_regs.h"
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
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPortJ_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPort0_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPort1_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPort2_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPort3_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPort4_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPort5_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegSys_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegSys_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegSysClmac_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegClma0_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegClma1_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegClma2_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegClma3_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcmm_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcmc_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcm_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcm_u16(uint16 WrVal_Arg, P2VAR(volatile uint16, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcm_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegFlmd_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) NxtrSwRst(McuDiagc1 McuDiagcData0_Arg, uint32 McuDiagcData1_Arg);
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) NxtrSwRstFromExcpn(McuDiagc1 McuDiagcData0_Arg, uint32 McuDiagcData1_Arg);

/********************************************************************************************************
*  Name:           WrProtdRegPortJ_u32
*  Description:    Write Protected Register Library Function: Port J 
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPortJ_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFC24014U: /* PORTJJPODC0 */
			case 0xFFC24018U: /* PORTJJPDSC0 */
			case 0xFFC24028U: /* PORTJJPUCC0 */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 0U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    PORTJJPPCMD0 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (PORTJJPPROTS0 != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		PORTJJPPCMD0 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (PORTJJPPROTS0 != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			PORTJJPPCMD0 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (PORTJJPPROTS0 != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 0U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegPort0_u32
*  Description:    Write Protected Register Library Function: Port 0
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPort0_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFC14014U: /* PORTPODC0 */
			case 0xFFC14018U: /* PORTPDSC0 */
			case 0xFFC1403CU: /* PORTPODCE0 */
			case 0xFFC14028U: /* PORTPUCC0 */
			case 0xFFC10030U: /* PORTPINV0 */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 1U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    PORTPPCMD0 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (PORTPPROTS0 != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		PORTPPCMD0 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (PORTPPROTS0 != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			PORTPPCMD0 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (PORTPPROTS0 != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 1U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegPort1_u32
*  Description:    Write Protected Register Library Function: Port 1
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPort1_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFC14054U: /* PORTPODC1 */
			case 0xFFC14058U: /* PORTPDSC1 */
			case 0xFFC1407CU: /* PORTPODCE1 */
			case 0xFFC14068U: /* PORTPUCC1 */
			case 0xFFC10070U: /* PORTPINV1 */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 2U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    PORTPPCMD1 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (PORTPPROTS1 != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		PORTPPCMD1 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (PORTPPROTS1 != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			PORTPPCMD1 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (PORTPPROTS1 != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 2U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegPort2_u32
*  Description:    Write Protected Register Library Function: Port 2
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPort2_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFC14094U: /* PORTPODC2 */
			case 0xFFC14098U: /* PORTPDSC2 */
			case 0xFFC140BCU: /* PORTPODCE2 */
			case 0xFFC140A8U: /* PORTPUCC2 */
			case 0xFFC100B0U: /* PORTPINV2 */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 3U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    PORTPPCMD2 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (PORTPPROTS2 != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		PORTPPCMD2 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (PORTPPROTS2 != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			PORTPPCMD2 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (PORTPPROTS2 != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 3U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegPort3_u32
*  Description:    Write Protected Register Library Function: Port 3
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPort3_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFC140D4U: /* PORTPODC3 */
			case 0xFFC140D8U: /* PORTPDSC3 */
			case 0xFFC140FCU: /* PORTPODCE3 */
			case 0xFFC140E8U: /* PORTPUCC3 */
			case 0xFFC100F0U: /* PORTPINV3 */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 4U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    PORTPPCMD3 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (PORTPPROTS3 != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		PORTPPCMD3 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (PORTPPROTS3 != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			PORTPPCMD3 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (PORTPPROTS3 != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 4U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegPort4_u32
*  Description:    Write Protected Register Library Function: Port 4
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/	
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPort4_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFC14114U: /* PORTPODC4 */
			case 0xFFC14118U: /* PORTPDSC4 */
			case 0xFFC1413CU: /* PORTPODCE4 */
			case 0xFFC14128U: /* PORTPUCC4 */
			case 0xFFC10130U: /* PORTPINV4 */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 5U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    PORTPPCMD4 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (PORTPPROTS4 != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		PORTPPCMD4 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (PORTPPROTS4 != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			PORTPPCMD4 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (PORTPPROTS4 != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 5U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegPort5_u32
*  Description:    Write Protected Register Library Function: Port 5
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegPort5_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFC14154U: /* PORTPODC5 */
			case 0xFFC14158U: /* PORTPDSC5 */
			case 0xFFC1417CU: /* PORTPODCE5 */
			case 0xFFC14168U: /* PORTPUCC5 */
			case 0xFFC10170U: /* PORTPINV5 */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 6U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    PORTPPCMD5 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (PORTPPROTS5 != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		PORTPPCMD5 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (PORTPPROTS5 != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			PORTPPCMD5 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (PORTPPROTS5 != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 6U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegSys_u08
*  Description:    Write Protected Register Library Function: Sys
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegSys_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFF82838U: /* SYSCVMFC */
			case 0xFFF82830U: /* SYSCVMDIAG */
			case 0xFFF8282CU: /* SYSCVMDMASK */
			case 0xFFF8283CU: /* SYSCVMDEW */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 7U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    SYSPROTCMDCVM = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (SYSPROTSCVM != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		SYSPROTCMDCVM = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (SYSPROTSCVM != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			SYSPROTCMDCVM = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (SYSPROTSCVM != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 7U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegSys_u32
*  Description:    Write Protected Register Library Function: Sys
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegSys_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFF82840U: /* SYSCVMREN */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 8U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    SYSPROTCMDCVM = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (SYSPROTSCVM != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		SYSPROTCMDCVM = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (SYSPROTSCVM != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			SYSPROTCMDCVM = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (SYSPROTSCVM != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 8U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegSysClmac_u32
*  Description:    Write Protected Register Library Function: Sys and Clmac
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegSysClmac_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFF82C00U: /* SYSLVICNT */
			case 0xFFF8AC18U: /* SYSSWRESA */
			case 0xFFF89080U: /* SYSCKSC0CTL */
			case 0xFFF890C0U: /* SYSCKSC1CTL */
			case 0xFFF89200U: /* SYSADCKSC0CTL */
			case 0xFFF8A440U: /* SYSBSEQ0CTL */
			case 0xFFF88204U: /* CLMACCLMATEST */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 9U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    SYSPROT1PHCMD = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (SYSPROT1PS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		SYSPROT1PHCMD = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (SYSPROT1PS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			SYSPROT1PHCMD = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (SYSPROT1PS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 9U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegClma0_u08
*  Description:    Write Protected Register Library Function: Clma0
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegClma0_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFF88400U: /* CLMA0CTL0 */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 10U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    CLMA0PCMD = 0xA5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (CLMA0PS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		CLMA0PCMD = 0xA5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (CLMA0PS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			CLMA0PCMD = 0xA5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (CLMA0PS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 10U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegClma1_u08
*  Description:    Write Protected Register Library Function: Clma1
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegClma1_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFF88420U: /* CLMA1CTL0 */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 11U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    CLMA1PCMD = 0xA5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (CLMA1PS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		CLMA1PCMD = 0xA5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (CLMA1PS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			CLMA1PCMD = 0xA5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (CLMA1PS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 11U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegClma2_u08
*  Description:    Write Protected Register Library Function: Clma2
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegClma2_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFF88440U: /* CLMA2CTL0 */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 12U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    CLMA2PCMD = 0xA5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (CLMA2PS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		CLMA2PCMD = 0xA5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (CLMA2PS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			CLMA2PCMD = 0xA5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (CLMA2PS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 12U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegClma3_u08
*  Description:    Write Protected Register Library Function: Clma3
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegClma3_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFF88460U: /* CLMA3CTL0 */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 13U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    CLMA3PCMD = 0xA5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (CLMA3PS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		CLMA3PCMD = 0xA5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (CLMA3PS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			CLMA3PCMD = 0xA5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (CLMA3PS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 13U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegEcmm_u08
*  Description:    Write Protected Register Library Function: Ecmm
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcmm_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFD60000U: /* ECMMESET */
			case 0xFFD60004U: /* ECMMECLR */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 14U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    ECMMPCMD0 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (ECMPS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		ECMMPCMD0 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (ECMPS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			ECMMPCMD0 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (ECMPS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 14U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegEcmc_u08
*  Description:    Write Protected Register Library Function: Ecmc
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcmc_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFD61000U: /* ECMCESET */
			case 0xFFD61004U: /* ECMCECLR */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 15U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    ECMCPCMD0 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (ECMPS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		ECMCPCMD0 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (ECMPS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			ECMCPCMD0 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (ECMPS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 15U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegEcm_u08
*  Description:    Write Protected Register Library Function: Ecm
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcm_u08(uint8 WrVal_Arg, P2VAR(volatile uint8, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFD62000U: /* ECMEPCFG */
			case 0xFFD6203CU: /* ECMDTMCTL */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 16U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    ECMPCMD1 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (ECMPS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		ECMPCMD1 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (ECMPS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			ECMPCMD1 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (ECMPS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 16U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegEcm_u16
*  Description:    Write Protected Register Library Function: Ecm
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcm_u16(uint16 WrVal_Arg, P2VAR(volatile uint16, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFD62044U: /* ECMDTMCMP */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 17U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    ECMPCMD1 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (ECMPS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		ECMPCMD1 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (ECMPS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			ECMPCMD1 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (ECMPS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 17U, 255U);
				}
			#endif
		}
    }
}

/********************************************************************************************************
*  Name:           WrProtdRegEcm_u32
*  Description:    Write Protected Register Library Function: Ecm
*  Inputs:         WrVal_Arg - Value to write
*                  WrAddr_Arg - Address of register to write
*  Outputs:        None
*  Usage Notes:    API versus WrAddr_Arg compatibly check is done when Det error checking is turned on
********************************************************************************************************/
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) WrProtdRegEcm_u32(uint32 WrVal_Arg, P2VAR(volatile uint32, AUTOMATIC, NxtrMcuSuprtLib_APPL_VAR) WrAddr_Arg)
{
	#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
		switch ( (uint32)WrAddr_Arg )
		{
			case 0xFFD62004U: /* ECMMICFG0 */
			case 0xFFD62008U: /* ECMMICFG1 */
			case 0xFFD6200CU: /* ECMNMICFG0 */
			case 0xFFD62010U: /* ECMNMICFG1 */
			case 0xFFD62014U: /* ECMIRCFG0 */
			case 0xFFD62018U: /* ECMIRCFG1 */
			case 0xFFD6201CU: /* ECMEMK0 */
			case 0xFFD62020U: /* ECMEMK1 */
			case 0xFFD62024U: /* ECMESSTC0 */
			case 0xFFD62028U: /* ECMESSTC1 */
			case 0xFFD62034U: /* ECMPE0 */
			case 0xFFD62038U: /* ECMPE1 */
			case 0xFFD62048U: /* ECMDTMCFG0 */
			case 0xFFD6204CU: /* ECMDTMCFG1 */
			case 0xFFD62050U: /* ECMDTMCFG2 */
			case 0xFFD62054U: /* ECMDTMCFG3 */
				break;
			default:
				(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 18U, 0U);
				break;
		}
	#endif
	
	/* Attempt protected write sequence without interrupts being disabled */
    ECMPCMD1 = 0x000000A5U;
    *WrAddr_Arg = WrVal_Arg;
    *WrAddr_Arg = ~WrVal_Arg;
    *WrAddr_Arg = WrVal_Arg;
    if (ECMPS != 0U)
    {
		/* Attempt protected write sequence with O/S interrupts being disabled */
		SuspendOSInterrupts();
		ECMPCMD1 = 0x000000A5U;
		*WrAddr_Arg = WrVal_Arg;
		*WrAddr_Arg = ~WrVal_Arg;
		*WrAddr_Arg = WrVal_Arg;
		ResumeOSInterrupts();

		if (ECMPS != 0U)
		{
			/* Attempt protected write sequence with all interrupts being disabled */
			SuspendAllInterrupts();
			ECMPCMD1 = 0x000000A5U;
			*WrAddr_Arg = WrVal_Arg;
			*WrAddr_Arg = ~WrVal_Arg;
			*WrAddr_Arg = WrVal_Arg;
			ResumeAllInterrupts();
			#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
				if (ECMPS != 0U)
				{
					(void)Det_ReportError(NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16, 0U, 18U, 255U);
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
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) NxtrSwRst(McuDiagc1 McuDiagcData0_Arg, uint32 McuDiagcData1_Arg)
{
	SetMcuDiagcIdnData(McuDiagcData0_Arg, McuDiagcData1_Arg);
	
	/* Reset RESF per SAN-808 prior to each SW reset */
	SYSRESFC = 0x00000007U;
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
INLINE FUNC(void, NxtrMcuSuprtLib_CODE) NxtrSwRstFromExcpn(McuDiagc1 McuDiagcData0_Arg, uint32 McuDiagcData1_Arg)
{
	/* Clear ECM Status Registers */
	WrProtdRegEcm_u32(0xFDFFDFF3U, &ECMESSTC0);
	WrProtdRegEcm_u32(0x600007F7U, &ECMESSTC1);
	
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
	WrProtdRegEcmm_u08(0x01U, &ECMMESET);
	WrProtdRegEcmc_u08(0x01U, &ECMCESET);
	
	/* Reset RESF per SAN-808 prior to each SW reset */
	SYSRESFC = 0x00000007U;
	Mcu_PerformReset();
	
	while(1){}
}

#endif
