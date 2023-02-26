
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Data.h
* Module Description: Motor Control Manager Data
* Project           : CBD
* Author            : Lucas Wendling
* Generator         : artt 2.0.2.0
* Generation Time   : 15.09.2016 08:34:07
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/05/15  1        LWW       Initial Version                                                                 EA4#511
* 06/10/15  2        LWW       Template update for macro name fix                                              EA4#765
* 10/29/15  3        LWW       Template update for signal mapping changes                                      EA4#3428
* 08/08/16  4        LWW       Template update for compatibility with MotCtrlMgr Configuration Tool            EA4#6787
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_MOTCTRLMGR_DATA_H
#define CDD_MOTCTRLMGR_DATA_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"

/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */
/* MISRA-C:2004 Rule 5.3 [NXTRDEV 5.3.1]:  Typedef of enumerations the RTE may define may be duplicated in CDD_MotCtrlMgr_Data.h 
                                           for use by non-RTE functions since the RTE definition cannot be guaranteed to be visible 
										   to these non-RTE functions.  The typedef definitions, however, will be the same in 
										   both definitions and therefore will not impact functionality */

/***************************************** Non-Rte Enumeration Definitions *******************************************/
#ifndef Rte_TypeDef_TestEnum_u08
	typedef uint8 TestEnum_u08;
#endif

#ifndef TestEnum_u08_Element1
	#define TestEnum_u08_Element1 (0U)
#endif
#ifndef TestEnum_u08_Element2
	#define TestEnum_u08_Element2 (7U)
#endif
#ifndef TestEnum_u08_Element3
	#define TestEnum_u08_Element3 (255U)
#endif

#ifndef Rte_TypeDef_TestEnum_u16
	typedef uint16 TestEnum_u16;
#endif

#ifndef TestEnum_u16_Element1
	#define TestEnum_u16_Element1 (0U)
#endif
#ifndef TestEnum_u16_Element2
	#define TestEnum_u16_Element2 (256U)
#endif
#ifndef TestEnum_u16_Element3
	#define TestEnum_u16_Element3 (65535U)
#endif

#ifndef Rte_TypeDef_TestEnum_u32
	typedef uint32 TestEnum_u32;
#endif

#ifndef TestEnum_u32_Element1
	#define TestEnum_u32_Element1 (0U)
#endif
#ifndef TestEnum_u32_Element2
	#define TestEnum_u32_Element2 (65535U)
#endif
#ifndef TestEnum_u32_Element3
	#define TestEnum_u32_Element3 (2147483647U)
#endif

/*********************************************** Exported Declarations ***********************************************/
/* Type Declarations */
typedef struct
{ 
	VAR(uint16, TYPEDEF)     MotCtrlAdc1RawRes[24];
	VAR(float32, TYPEDEF)     MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32;
	VAR(sint32, TYPEDEF)     MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32;
	VAR(uint32, TYPEDEF)     MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32;
	VAR(float32, TYPEDEF)     MotCtrlWriteMotCtrlReadTwoMsf32;
	VAR(sint32, TYPEDEF)     MotCtrlWriteMotCtrlReadTwoMss32;
	VAR(uint32, TYPEDEF)     MotCtrlWriteMotCtrlReadTwoMsu32;
	VAR(uint32, TYPEDEF)     MotCtrlWriteMotCtrlReadTwoMsu32Ary[2];
	VAR(TestEnum_u16, TYPEDEF)     MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum;
	VAR(sint16, TYPEDEF)     MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16;
	VAR(uint16, TYPEDEF)     MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16;
	VAR(uint16, TYPEDEF)     MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary[2];
	VAR(TestEnum_u16, TYPEDEF)     MotCtrlWriteMotCtrlReadTwoMsEnum;
	VAR(sint16, TYPEDEF)     MotCtrlWriteMotCtrlReadTwoMss16;
	VAR(uint16, TYPEDEF)     MotCtrlWriteMotCtrlReadTwoMsu16;
	VAR(sint8, TYPEDEF)     MotCtrlSignal2;
	VAR(sint8, TYPEDEF)     MotCtrlSignal3;
	VAR(sint8, TYPEDEF)     MotCtrlSignal4;
	VAR(boolean, TYPEDEF)     MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool;
	VAR(sint8, TYPEDEF)     MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08;
	VAR(uint8, TYPEDEF)     MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08;
	VAR(boolean, TYPEDEF)     MotCtrlWriteMotCtrlReadTwoMsbool;
	VAR(sint8, TYPEDEF)     MotCtrlWriteMotCtrlReadTwoMss08;
	VAR(uint8, TYPEDEF)     MotCtrlWriteMotCtrlReadTwoMsu08;
	VAR(uint8, TYPEDEF)     AlgnResd1[7]; 
}MotCtrlToTwoMilliSecRec1;

typedef struct
{ 
	VAR(uint16, TYPEDEF)     Adc1RawRes[24];
	VAR(float32, TYPEDEF)     WriteMotCtrlReadMotCtrlReadTwoMsf32;
	VAR(sint32, TYPEDEF)     WriteMotCtrlReadMotCtrlReadTwoMss32;
	VAR(uint32, TYPEDEF)     WriteMotCtrlReadMotCtrlReadTwoMsu32;
	VAR(float32, TYPEDEF)     WriteMotCtrlReadTwoMsf32;
	VAR(sint32, TYPEDEF)     WriteMotCtrlReadTwoMss32;
	VAR(uint32, TYPEDEF)     WriteMotCtrlReadTwoMsu32;
	VAR(uint32, TYPEDEF)     WriteMotCtrlReadTwoMsu32Ary[2];
	VAR(TestEnum_u16, TYPEDEF)     WriteMotCtrlReadMotCtrlReadTwoMsEnum;
	VAR(sint16, TYPEDEF)     WriteMotCtrlReadMotCtrlReadTwoMss16;
	VAR(uint16, TYPEDEF)     WriteMotCtrlReadMotCtrlReadTwoMsu16;
	VAR(uint16, TYPEDEF)     WriteMotCtrlReadMotCtrlReadTwoMsu16Ary[2];
	VAR(TestEnum_u16, TYPEDEF)     WriteMotCtrlReadTwoMsEnum;
	VAR(sint16, TYPEDEF)     WriteMotCtrlReadTwoMss16;
	VAR(uint16, TYPEDEF)     WriteMotCtrlReadTwoMsu16;
	VAR(sint8, TYPEDEF)     Signal2;
	VAR(sint8, TYPEDEF)     Signal3;
	VAR(sint8, TYPEDEF)     Signal4;
	VAR(boolean, TYPEDEF)     WriteMotCtrlReadMotCtrlReadTwoMsbool;
	VAR(sint8, TYPEDEF)     WriteMotCtrlReadMotCtrlReadTwoMss08;
	VAR(uint8, TYPEDEF)     WriteMotCtrlReadMotCtrlReadTwoMsu08;
	VAR(boolean, TYPEDEF)     WriteMotCtrlReadTwoMsbool;
	VAR(sint8, TYPEDEF)     WriteMotCtrlReadTwoMss08;
	VAR(uint8, TYPEDEF)     WriteMotCtrlReadTwoMsu08;
	VAR(uint8, TYPEDEF)     AlgnResd2[7]; 
}TwoMilliSecFromMotCtrlRec1;

typedef struct
{ 
	VAR(TestEnum_u32, TYPEDEF)     ReadMotCtrlWriteTwoMsEnum;
	VAR(float32, TYPEDEF)     ReadMotCtrlWriteTwoMsf32;
	VAR(sint32, TYPEDEF)     ReadMotCtrlWriteTwoMss32;
	VAR(sint32, TYPEDEF)     ReadMotCtrlWriteTwoMss32Ary[2];
	VAR(uint32, TYPEDEF)     ReadMotCtrlWriteTwoMsu32;
	VAR(sint16, TYPEDEF)     ReadMotCtrlWriteTwoMss16;
	VAR(uint16, TYPEDEF)     ReadMotCtrlWriteTwoMsu16;
	VAR(boolean, TYPEDEF)     ReadMotCtrlWriteTwoMsbool;
	VAR(sint8, TYPEDEF)     ReadMotCtrlWriteTwoMss08;
	VAR(uint8, TYPEDEF)     ReadMotCtrlWriteTwoMsu08;
	VAR(boolean, TYPEDEF)     Signal0;
	VAR(boolean, TYPEDEF)     Signal5;
	VAR(uint8, TYPEDEF)     AlgnResd3[15]; 
}TwoMilliSecToMotCtrlRec1;

typedef struct
{ 
	VAR(TestEnum_u32, TYPEDEF)     MotCtrlReadMotCtrlWriteTwoMsEnum;
	VAR(float32, TYPEDEF)     MotCtrlReadMotCtrlWriteTwoMsf32;
	VAR(sint32, TYPEDEF)     MotCtrlReadMotCtrlWriteTwoMss32;
	VAR(sint32, TYPEDEF)     MotCtrlReadMotCtrlWriteTwoMss32Ary[2];
	VAR(uint32, TYPEDEF)     MotCtrlReadMotCtrlWriteTwoMsu32;
	VAR(sint16, TYPEDEF)     MotCtrlReadMotCtrlWriteTwoMss16;
	VAR(uint16, TYPEDEF)     MotCtrlReadMotCtrlWriteTwoMsu16;
	VAR(boolean, TYPEDEF)     MotCtrlReadMotCtrlWriteTwoMsbool;
	VAR(sint8, TYPEDEF)     MotCtrlReadMotCtrlWriteTwoMss08;
	VAR(uint8, TYPEDEF)     MotCtrlReadMotCtrlWriteTwoMsu08;
	VAR(boolean, TYPEDEF)     MotCtrlSignal0;
	VAR(boolean, TYPEDEF)     MotCtrlSignal5;
	VAR(uint8, TYPEDEF)     AlgnResd4[15]; 
}MotCtrlFromTwoMilliSecRec1;

typedef struct
{ 
	VAR(uint16, TYPEDEF)     MotCtrlAdc0RawRes[24];
	VAR(float32, TYPEDEF)     MotCtrlReadMotCtrlWriteMotCtrlf32;
	VAR(float32, TYPEDEF)     MotCtrlReadMotCtrlWriteMotCtrlf32Ary[4];
	VAR(sint32, TYPEDEF)     MotCtrlReadMotCtrlWriteMotCtrls32;
	VAR(uint32, TYPEDEF)     MotCtrlReadMotCtrlWriteMotCtrlu32;
	VAR(TestEnum_u32, TYPEDEF)     MotCtrlReadMotCtrlWriteNoneEnum;
	VAR(float32, TYPEDEF)     MotCtrlReadMotCtrlWriteNonef32;
	VAR(sint32, TYPEDEF)     MotCtrlReadMotCtrlWriteNones32;
	VAR(uint32, TYPEDEF)     MotCtrlReadMotCtrlWriteNoneu32;
	VAR(float32, TYPEDEF)     MotCtrlReadNoneWriteMotCtrlf32;
	VAR(sint32, TYPEDEF)     MotCtrlReadNoneWriteMotCtrls32;
	VAR(uint32, TYPEDEF)     MotCtrlReadNoneWriteMotCtrlu32;
	VAR(sint16, TYPEDEF)     MotCtrlReadMotCtrlWriteMotCtrls16;
	VAR(uint16, TYPEDEF)     MotCtrlReadMotCtrlWriteMotCtrlu16;
	VAR(sint16, TYPEDEF)     MotCtrlReadMotCtrlWriteNones16;
	VAR(sint16, TYPEDEF)     MotCtrlReadMotCtrlWriteNones16Ary[2];
	VAR(uint16, TYPEDEF)     MotCtrlReadMotCtrlWriteNoneu16;
	VAR(sint16, TYPEDEF)     MotCtrlReadNoneWriteMotCtrls16;
	VAR(uint16, TYPEDEF)     MotCtrlReadNoneWriteMotCtrlu16;
	VAR(uint16, TYPEDEF)     MotCtrlSignal1;
	VAR(TestEnum_u08, TYPEDEF)     MotCtrlReadMotCtrlWriteMotCtrlEnum;
	VAR(boolean, TYPEDEF)     MotCtrlReadMotCtrlWriteMotCtrlbool;
	VAR(sint8, TYPEDEF)     MotCtrlReadMotCtrlWriteMotCtrls08;
	VAR(sint8, TYPEDEF)     MotCtrlReadMotCtrlWriteMotCtrls08Ary[2];
	VAR(uint8, TYPEDEF)     MotCtrlReadMotCtrlWriteMotCtrlu08;
	VAR(boolean, TYPEDEF)     MotCtrlReadMotCtrlWriteNonebool;
	VAR(sint8, TYPEDEF)     MotCtrlReadMotCtrlWriteNones08;
	VAR(uint8, TYPEDEF)     MotCtrlReadMotCtrlWriteNoneu08;
	VAR(TestEnum_u08, TYPEDEF)     MotCtrlReadNoneWriteMotCtrlEnum;
	VAR(boolean, TYPEDEF)     MotCtrlReadNoneWriteMotCtrlbool;
	VAR(sint8, TYPEDEF)     MotCtrlReadNoneWriteMotCtrls08;
	VAR(uint8, TYPEDEF)     MotCtrlReadNoneWriteMotCtrlu08;
	VAR(uint8, TYPEDEF)     MotCtrlReadNoneWriteMotCtrlu08Ary[2];
	VAR(uint8, TYPEDEF)     AlgnResd5[7]; 
}MotCtrlIntRec1;

/* Global Variable Declarations */
#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(MotCtrlToTwoMilliSecRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlToTwoMilliSec_Rec;
#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(TwoMilliSecFromMotCtrlRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec;
#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(TwoMilliSecToMotCtrlRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_TwoMilliSecToMotCtrl_Rec;
#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(MotCtrlFromTwoMilliSecRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec;
#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"
extern VAR(MotCtrlIntRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlInt_Rec;
#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

/* Macro Definitions */
#define MOTCTRLMGR_MotCtrlAdc0RawRes     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlAdc0RawRes)
#define MOTCTRLMGR_MotCtrlAdc1RawRes     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlAdc1RawRes)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteMotCtrlEnum     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteMotCtrlEnum)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteMotCtrlbool     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteMotCtrlbool)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteMotCtrlf32     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteMotCtrlf32)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteMotCtrlf32Ary     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteMotCtrlf32Ary)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteMotCtrls08     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteMotCtrls08)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteMotCtrls08Ary     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteMotCtrls08Ary)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteMotCtrls16     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteMotCtrls16)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteMotCtrls32     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteMotCtrls32)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteMotCtrlu08     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteMotCtrlu08)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteMotCtrlu16     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteMotCtrlu16)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteMotCtrlu32     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteMotCtrlu32)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteNoneEnum     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteNoneEnum)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteNonebool     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteNonebool)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteNonef32     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteNonef32)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteNones08     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteNones08)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteNones16     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteNones16)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteNones16Ary     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteNones16Ary)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteNones32     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteNones32)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteNoneu08     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteNoneu08)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteNoneu16     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteNoneu16)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteNoneu32     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadMotCtrlWriteNoneu32)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteTwoMsEnum     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlReadMotCtrlWriteTwoMsEnum)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteTwoMsbool     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlReadMotCtrlWriteTwoMsbool)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteTwoMsf32     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlReadMotCtrlWriteTwoMsf32)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteTwoMss08     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlReadMotCtrlWriteTwoMss08)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteTwoMss16     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlReadMotCtrlWriteTwoMss16)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteTwoMss32     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlReadMotCtrlWriteTwoMss32)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteTwoMss32Ary     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlReadMotCtrlWriteTwoMss32Ary)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteTwoMsu08     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlReadMotCtrlWriteTwoMsu08)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteTwoMsu16     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlReadMotCtrlWriteTwoMsu16)
#define MOTCTRLMGR_MotCtrlReadMotCtrlWriteTwoMsu32     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlReadMotCtrlWriteTwoMsu32)
#define MOTCTRLMGR_MotCtrlReadNoneWriteMotCtrlEnum     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadNoneWriteMotCtrlEnum)
#define MOTCTRLMGR_MotCtrlReadNoneWriteMotCtrlbool     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadNoneWriteMotCtrlbool)
#define MOTCTRLMGR_MotCtrlReadNoneWriteMotCtrlf32     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadNoneWriteMotCtrlf32)
#define MOTCTRLMGR_MotCtrlReadNoneWriteMotCtrls08     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadNoneWriteMotCtrls08)
#define MOTCTRLMGR_MotCtrlReadNoneWriteMotCtrls16     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadNoneWriteMotCtrls16)
#define MOTCTRLMGR_MotCtrlReadNoneWriteMotCtrls32     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadNoneWriteMotCtrls32)
#define MOTCTRLMGR_MotCtrlReadNoneWriteMotCtrlu08     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadNoneWriteMotCtrlu08)
#define MOTCTRLMGR_MotCtrlReadNoneWriteMotCtrlu08Ary     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadNoneWriteMotCtrlu08Ary)
#define MOTCTRLMGR_MotCtrlReadNoneWriteMotCtrlu16     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadNoneWriteMotCtrlu16)
#define MOTCTRLMGR_MotCtrlReadNoneWriteMotCtrlu32     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlReadNoneWriteMotCtrlu32)
#define MOTCTRLMGR_MotCtrlSignal0     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlSignal0)
#define MOTCTRLMGR_MotCtrlSignal1     (MotCtrlMgr_MotCtrlInt_Rec.MotCtrlSignal1)
#define MOTCTRLMGR_MotCtrlSignal2     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlSignal2)
#define MOTCTRLMGR_MotCtrlSignal3     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlSignal3)
#define MOTCTRLMGR_MotCtrlSignal4     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlSignal4)
#define MOTCTRLMGR_MotCtrlSignal5     (MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec.MotCtrlSignal5)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsEnum)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsbool)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsf32)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss08)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss16)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadMotCtrlReadTwoMss32)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu08)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu16Ary)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadMotCtrlReadTwoMsu32)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadTwoMsEnum     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadTwoMsEnum)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadTwoMsbool     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadTwoMsbool)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadTwoMsf32     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadTwoMsf32)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadTwoMss08     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadTwoMss08)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadTwoMss16     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadTwoMss16)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadTwoMss32     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadTwoMss32)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadTwoMsu08     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadTwoMsu08)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadTwoMsu16     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadTwoMsu16)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadTwoMsu32     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadTwoMsu32)
#define MOTCTRLMGR_MotCtrlWriteMotCtrlReadTwoMsu32Ary     (MotCtrlMgr_MotCtrlToTwoMilliSec_Rec.MotCtrlWriteMotCtrlReadTwoMsu32Ary)
#define MOTCTRLMGR_MotCtrlSignalA     (MOTCTRLMGR_MotCtrlSignal0)
#define MOTCTRLMGR_MotCtrlSignalB     (MOTCTRLMGR_MotCtrlSignal0)
#define MOTCTRLMGR_MotCtrlSignalZ     (MOTCTRLMGR_MotCtrlSignal1)
#define MOTCTRLMGR_MotCtrlSignalX     (MOTCTRLMGR_MotCtrlSignal2)
#define MOTCTRLMGR_MotCtrlSignalY     (MOTCTRLMGR_MotCtrlSignal2)
#define MOTCTRLMGR_MotCtrlSignalW     (MOTCTRLMGR_MotCtrlSignal3)
#define MOTCTRLMGR_MotCtrlSignalV     (MOTCTRLMGR_MotCtrlSignal4)
#define MOTCTRLMGR_MotCtrlSignalU     (MOTCTRLMGR_MotCtrlSignal5)

/**************************************** End Of Multiple Include Protection *****************************************/
#endif
