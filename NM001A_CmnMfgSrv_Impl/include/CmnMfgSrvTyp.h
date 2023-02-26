/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: CmnMfgSrvEnum.h
* Module Description: Manufacturing Services Types
* Project           : Common Manufacturing Services
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         6 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 04/20/15  1        JWJ       Initial file creation                                                        EA4#550
* 11/30/15  4        JWJ       Added ENAD and DISAD definitions from CmnMfgSrv.h                            EA4#2518
* 07/07/17  5        JWJ       Added new structure type to hold non-trusted function index and application  EA4#13539
* 07/26/17  6        JWJ       Corrected the abbreviation for sub function in service type                  EA4#14061
***********************************************************************************************************************/
#ifndef CMNMFGSRVTYP_H
#define CMNMFGSRVTYP_H

#include "Rte_Type.h"

#define CMNMFGSRV_ENAD_CNT_LGC	TRUE
#define CMNMFGSRV_DISAD_CNT_LGC	FALSE

/* Available service types */
typedef enum
{
	MFGSRVTYPEPIDREAD   = 0x22U,
	MFGSRVTYPEPIDWRITE  = 0x2EU,
	MFGSRVTYPERID       = 0x31U,
	MFGSRVTYPEIOC       = 0x2FU,
	MFGSRVTYPERESET     = 0x11U,
	MFGSRVTYPESESSION   = 0x10U,
	MFGSRVTYPESECURITY  = 0x27U
} MfgSrvEnum;


/* Available sub-function types */
typedef enum
{
	MFGSRVSUBSTART   = 0x01U,
	MFGSRVSUBSTOP    = 0x02U,
	MFGSRVSUBSTATUS  = 0x03U,
	MFGSRVSUBREAD    = 0x22U,
	MFGSRVSUBWRITE   = 0x2EU,
	MFGSRVSUBRETURN  = 0x00U,
	MFGSRVSUBDEFAULT = 0x01U,
	MFGSRVSUBFREEZE  = 0x02U,
	MFGSRVSUMVALUE   = 0x03U
} MfgSrvSubFuncEnum;


/* Available negative response code (follows ISO-14229 standard) */
typedef enum
{
	MFGSRVNRCPOSRSP                = 0x00U,
	MFGSRVNRCSERVICENOTSUPPORTED   = 0x11U,
	MFGSRVNRCSUBFUNCNOTSUPPORTED   = 0x12U,
	MFGSRVNRCINCORRECTLENGTH       = 0x13U,
	MFGSRVNRCCONDITIONSNOTCORRECT  = 0x22U,
	MFGSRVNRCREQSEQUENCERROR       = 0x24U,
	MFGSRVNRCREQUESTOUTOFRANGE     = 0x31U,
	MFGSRVNRCSECURITYACCESSDENIED  = 0x33U,
	MFGSRVNRCINVALIDKEY            = 0x35U,
	MFGSRVNRCEXCEEDEDNUMOFATTEMPTS = 0x36U,
	MFGSRVNRCTIMEDELAYNOTEXPIRED   = 0x37U,
	MFGSRVNRCRESPONSEPENDING       = 0x78U,
	MFGSRVNRCSUBFUNCNOTINSESSION   = 0x7EU,
	MFGSRVNRCSERVICENOTINSESSION   = 0x7FU,
	MFGSRVNRCRPMTOOHIGH            = 0x81U,
	MFGSRVNRCRPMTOOLOW             = 0x82U,
	MFGSRVNRCENGINERUNNING         = 0x83U,
	MFGSRVNRCENGINENOTRUNNING      = 0x84U,
	MFGSRVNRCENGINERUNTIMELOW      = 0x85U,
	MFGSRVNRCTEMPERATURETOOHIGH    = 0x86U,
	MFGSRVNRCTEMPERATURETOOLOW     = 0x87U,
	MFGSRVNRCVEHICLESPEEDTOOHIGH   = 0x88U,
	MFGSRVNRCVEHICLESPEEDTOOLOW    = 0x89U,
	MFGSRVNRCTHROTTLETOOHIGH       = 0x8AU,
	MFGSRVNRCTHROTTLETOOLOW        = 0x8BU,
	MFGSRVNRCTRANSNOTINNEUTRAL     = 0x8CU,
	MFGSRVNRCTRANSNOTINGEAR        = 0x8DU,
	MFGSRVNRCBRAKENOTAPPLIED       = 0x8FU,
	MFGSRVNRCTRANSNOTINPARK        = 0x90U,
	MFGSRVNRCVOLTAGETOOHIGH        = 0x92U,
	MFGSRVNRCVOLTAGETOOLOW         = 0x93U,
	MFGSRVNRCSUPPRSP               = 0xFFU
} NegRespCodEnum;


/* Environmental check structure */
typedef struct
{
	uint16 NxtrSession : 1;
	uint16 SecuAcs : 1;
	uint16 Unused : 14;
} MfgSrvChkRec;


/* Service function type - all manufacturing services with entries in the LUT shall use this structure */
typedef NegRespCodEnum (*MfgSrvFuncRef)(P2VAR(uint8, CmnMfgSrv_VAR, CmnMfgSrv_VAR) DataBuffer_Uls_T_u08);


/* Service lookup table structure */
typedef struct
{
	uint8          SvcTyp;
	uint16         SvcId;
	uint8          SubFct;
	uint16         ReqLen;
	uint16         RespLen;
	MfgSrvChkRec   Chk;
	uint8          Appl;
	MfgSrvFuncRef  SvcFunc;
} MfgSrvTblRec;


/* Non-Trusted function call lookup table structure */
typedef struct
{
	uint16   NonTrustdFctIdx;
	uint8    ApplIdn;
} NonTrustdFctApplIdxRec;

/* Non-Trusted function call parameter type structure */
typedef struct
{
	MfgSrvFuncRef   SrvFct;
	uint8*          DataBuf;
	NegRespCodEnum  NegRespCod;
} NtMfgSrvRec;


#endif
/* End of File: CmnMfgSrvTyp.h */
