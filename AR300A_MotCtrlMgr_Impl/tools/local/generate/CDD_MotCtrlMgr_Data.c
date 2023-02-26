
/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : CDD_MotCtrlMgr_Data.c
* Module Description: Motor Control Manager Data
* Project           : CBD
* Author            : Lucas Wendling
* Generator         : artt 2.0.2.0
* Generation Time   : 15.09.2016 08:34:06
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/05/15  1        LWW       Initial Version                                                                 EA4#511
* 10/29/15  2        LWW       Template update for signal mapping changes and memory map change                EA4#3428
* 08/08/16  3        LWW       Template update for compatibility with MotCtrlMgr Configuration Tool            EA4#6787
**********************************************************************************************************************/
/************************************************ Include Statements *************************************************/
#include "CDD_MotCtrlMgr_Data.h"
/******************************************** File Level Rule Deviations *********************************************/

/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */

/************************************************** Global Signals ***************************************************/

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(MotCtrlToTwoMilliSecRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlToTwoMilliSec_Rec = 
{
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}, 
	1.0F, 
	-2147483647, 
	4294967295U, 
	1.0F, 
	-2147483647, 
	4294967295U, 
	{0U, 4294967295U}, 
	TestEnum_u16_Element3, 
	-32768, 
	65535U, 
	{0U, 65535U}, 
	TestEnum_u16_Element3, 
	-32768, 
	65535U, 
	-128, 
	-128, 
	-128, 
	FALSE, 
	-128, 
	255U, 
	TRUE, 
	-128, 
	255U, 
	{0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"


#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(TwoMilliSecFromMotCtrlRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_TwoMilliSecFromMotCtrl_Rec = 
{
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}, 
	1.0F, 
	-2147483647, 
	4294967295U, 
	1.0F, 
	-2147483647, 
	4294967295U, 
	{0U, 4294967295U}, 
	TestEnum_u16_Element3, 
	-32768, 
	65535U, 
	{0U, 65535U}, 
	TestEnum_u16_Element3, 
	-32768, 
	65535U, 
	-128, 
	-128, 
	-128, 
	FALSE, 
	-128, 
	255U, 
	TRUE, 
	-128, 
	255U, 
	{0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(TwoMilliSecToMotCtrlRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_TwoMilliSecToMotCtrl_Rec = 
{
	TestEnum_u32_Element3, 
	1.0F, 
	-2147483647, 
	{-2147483647, 2147483647}, 
	4294967295U, 
	-32768, 
	65535U, 
	FALSE, 
	-128, 
	255U, 
	FALSE, 
	FALSE, 
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(MotCtrlFromTwoMilliSecRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlFromTwoMilliSec_Rec = 
{
	TestEnum_u32_Element3, 
	1.0F, 
	-2147483647, 
	{-2147483647, 2147483647}, 
	4294967295U, 
	-32768, 
	65535U, 
	FALSE, 
	-128, 
	255U, 
	FALSE, 
	FALSE, 
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

#define CDD_MotCtrlMgr_DmaWrite_START_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

VAR(MotCtrlIntRec1, CDD_MotCtrlMgr_VAR_INIT) MotCtrlMgr_MotCtrlInt_Rec = 
{
	{0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U,0U}, 
	1.0F, 
	{1.0F, 2.0F, 3.0F, 4.0F}, 
	-2147483647, 
	4294967295U, 
	TestEnum_u32_Element3, 
	1.0F, 
	-2147483647, 
	4294967295U, 
	1.0F, 
	-2147483647, 
	4294967295U, 
	-32768, 
	65535U, 
	-32768, 
	{-32768, 32767}, 
	65535U, 
	-32768, 
	65535U, 
	65535U, 
	TestEnum_u08_Element3, 
	FALSE, 
	-128, 
	{-128, 127}, 
	255U, 
	TRUE, 
	-128, 
	255U, 
	TestEnum_u08_Element3, 
	TRUE, 
	-128, 
	255U, 
	{0U, 255U}, 
	{0U,0U,0U,0U,0U,0U,0U}
};

#define CDD_MotCtrlMgr_DmaWrite_STOP_SEC_VAR_INIT_128
#include "MotCtrlMgr_MemMap.h"

