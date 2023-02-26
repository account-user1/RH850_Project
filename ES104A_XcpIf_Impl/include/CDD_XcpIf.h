/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name:   CDD_XcpIf.h
* Module Description: Header file for XCP Interface ES 104A
* Project           : CBD 
* Author            : Kevin Smith
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       cz7lt6 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 06/16/15  1        KJS       Initial Version                                                                 EA4#851
* 10/09/15  2        KJS       Updates for online calibration support                                          EA4#1842
* 04/21/16  3        KJS       Additional includes added for changes made to ES400A                            EA4#5466
* 07/06/17  4        KJS       Updates to support CANbedded and AUTOSAR drivers                               EA4#11830
**********************************************************************************************************************/

/******************************************* Multiple Include Protection *********************************************/
#ifndef CDD_XCPIF_H
#define CDD_XCPIF_H

#include "Std_Types.h"
#include "CDD_XcpIf_Cfg.h"

/************************************************ Embedded Constants *************************************************/
#define XCPIF_FLSPAGE_CNT_U08   0U
#define XCPIF_RAMPAGE_CNT_U08   1U

#define XCPIF_ONLINECALNOACS_CNT_U08        0U
#define XCPIF_ONLINECALECUACS_CNT_U08       CAL_ECU
#define XCPIF_ONLINECALXCPACS_CNT_U08       CAL_XCP
#define XCPIF_ONLINECALXCPANDECUACS_CNT_U08 (CAL_XCP | CAL_ECU)

/* Not used by the XCP driver, but included to match the XCP protocol spec */
#define XCPIF_ONLINECALALLACS_CNT_U08       CAL_ALL

#define XCPIF_MAXCALSEG_CNT_U08         kXcpMaxSegment
#define XCPIF_MAXCALPAGE_CNT_U08        kXcpMaxPages
#define XCPIF_RESPBUF_CNT_U08           xcp.Crm.b
#define XCPIF_RESPBUFBYTE_CNT_U08(x)    CRM_BYTE(x)


#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
    #define XCPIF_XCPCTRLDI_CNT_U08         kXcp_Control_Disable
    #define XCPIF_XCPCTRLENA_CNT_U08        kXcp_Control_Enable
    #define XCPIF_XCPCNTRLDI()              XCP_DEACTIVATE()
    #define XCPIF_XCPCNTRLENA()             XCP_ACTIVATE()
    #define XCPIF_XCPEVE(x)                 Xcp_Event(x)
    #define XCPIF_RESPBUFLEN_CNT_U08        xcp[XCP_CHANNEL_IDX].CrmLen
#else
    #define XCPIF_XCPCTRLDI_CNT_U08         kXcpControl_Disable
    #define XCPIF_XCPCTRLENA_CNT_U08        kXcpControl_Enable
    #define XCPIF_XCPCNTRLDI()              XcpControl(XCPIF_XCPCTRLDI_CNT_U08)
    #define XCPIF_XCPCNTRLENA()             XcpControl(XCPIF_XCPCTRLENA_CNT_U08)
    #define XCPIF_XCPEVE(x)                 XcpEvent(x)
    #define XCPIF_XCPEVECH2MILLISEC         XcpEventChannel_2ms_DAQ_2
    #define XCPIF_RESPBUFLEN_CNT_U08        xcp.CrmLen
#endif

/* Custom XCP commands */
#define GETSEGINFO_CNT_U08          0xE8U
#define GETPAGEPROCRINFO_CNT_U08    0xE9U
#define APPLXCPUSRSRV_CNT_U08       0xF1U
#define ACTVTUNSTSREQ_CNT_U16       0xEF00U

/* XCP Error Abstraction */
#define XCPIF_XCPCMDOK_CNT_U08          XCP_CMD_OK
#define XCPIF_XCPCMDSYNTAX_CNT_U08      XCP_CMD_SYNTAX

#define XCPIF_CRCPAGEMODNOTVLD_CNT_U08  CRC_PAGE_MODE_NOT_VALID
#define XCPIF_SEGNOTVLD_CNT_U08         CRC_SEGMENT_NOT_VALID
#define XCPIF_OUTOFRNG_CNT_U08          CRC_OUT_OF_RANGE

#define XCPIF_MAXFLSADR_CNT_U32         0x001FFFFFUL

#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
typedef uint8 vuint8;
#endif

/******************************************** File Level Rule Deviations *********************************************/

/****************************************************** Macros *******************************************************/

/*********************************************** Exported Declarations ***********************************************/

extern FUNC(void, CDD_XcpIf_CODE) ApplXcpWrCmn(uint8 addr[], vuint8 size, const uint8 data[]);

/* From XcpProf.c */
#if (XCPIF_XCPARDRVR_CNT_U08 == STD_ON)
extern VAR(tXcpData, XCP_VAR_NOINIT) xcp[XCP_NUMBER_OF_CHANNELS];
#else
extern RAM tXcpData xcp;
#endif
extern void XcpControl( vuint8 command );

/**************************************** End Of Multiple Include Protection *****************************************/
#endif /* CDD_XCPIF_H */
