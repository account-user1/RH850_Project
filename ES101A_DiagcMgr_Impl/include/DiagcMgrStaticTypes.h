/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name: DiagcMgrStaticTypes.h
* Module Description: Ststic Types header file for the DiagcMgr and DiagcMgrProxy components
* Project           : CBD   
* Author            : Spandana Balani
***********************************************************************************************************************
* Version Control:
* %version:             4 %
* %derived_by:          nz2554 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                         SCR #
* -------   -------  --------  ----------------------------------------------------------------------------  ----------
* 02/26/16  1        SB         ES101A_DiagcMgr_Design version 2 implementation								 EA4#3421
* 04/19/16  2        SB         ES101A_DiagcMgr_Design version 3 implementation								 EA4#5110
* 04/18/17  3        SR         Added NtcPptyAry and embedded constant definition for MaxNumOfNTCs           EA4#10779
* 09/12/17  4        SR         DIAGCMGRNTCLTCHCNTRTHD_CNT_U08 and DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM array
*                               declarations and D_MAXNUMOFLTCHGNTCS_CNT_U16 moved here from DiagcMgr_Cfg.h
                                since they are not configurable                                              EA4#14411
**********************************************************************************************************************/
#ifndef DIAGCMGRSTATICTYPES_H
#define DIAGCMGRSTATICTYPES_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h" 

#define D_MAXNUMBEROFNTCS_CNT_U16   512U
#define D_MAXNUMOFLTCHGNTCS_CNT_U16 20U

typedef struct
{
  uint8 NtcStInfo;
  uint8 Sts;
  uint8 AgiCntr;
} NtcInfoRec4;

typedef NtcInfoRec4 Ary1D_NtcInfoRec4_DiagcMgr[65535];

typedef struct 
{
    uint8 ApplIdx; 
    uint8 NtcInfoIdx;
	uint8 DebCntrIdx;
} NtcMapRec1;


extern CONST(uint16,DiagcMgr_CODE) DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM[D_MAXNUMOFLTCHGNTCS_CNT_U16];
extern CONST(uint8 ,DiagcMgr_CODE) DIAGCMGRNTCLTCHCNTRTHD_CNT_U08[D_MAXNUMOFLTCHGNTCS_CNT_U16];

extern CONST(NtcMapRec1, DiagcMgr_CODE) DIAGCMGRNTCMAP_CNT_REC[D_MAXNUMBEROFNTCS_CNT_U16];
extern CONST(uint8, DiagcMgr_CODE) DIAGCMGRNTCPPTYARY_CNT_U08[D_MAXNUMBEROFNTCS_CNT_U16];


#endif
