
/**********************************************************************************************************************
* Copyright 2015, 2016, 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : DiagcMgr_Cfg.c
* Module Description: DiagcMgr
* Project           : CBD
* Author            : Spandana Balani
* Generator         : artt 2.0.2.0
* Generation Time   : 26.10.2017 09:59:15
***********************************************************************************************************************
* Version Control:
* %version:          8 %
* %derived_by:       nz2554 %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                         SCR #
* -------   -------  --------  ---------------------------------------------------------------------------   ----------
* 02/26/16  1        SB         ES101A_DiagcMgr_Design version 2 implementation                              EA4#3421
* 04/19/16  2        SB         ES101A_DiagcMgr_Design version 3 implementation                              EA4#5110
* 05/23/16  3        SB         Updated to fix anomaly EA4#5865  NTC BF not setting                          EA4#5905
* 06/20/16  4        SB         ES101A_DiagcMgr_Design version 4 implementation                              EA4#6251
* 08/30/16  5        SB         Updated logic for DEMDTCEVEIDMAP                                             EA4#6368
* 09/23/16  6        SB         Added error codes                                                            EA4#7191
* 04/10/17  7        SR         Added NtcPPtyAry definition. Also added CONST definitions for the config
*                               params DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM and DIAGCMGRNTCLTCHCNTRTHD_CNT_U08    EA4#10779
*                               Added Enviroment.Exit codes 13/14/15 for invalid config at generation.
* 08/04/17  8        SR         Fix for Anomaly EA4#12478                                                    EA4#13175
**********************************************************************************************************************/


/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#define DIAGCMGR_C 
#include "DiagcMgr_Cfg.h"
#include "Dem.h"

/*******************************************************************************
**                      Module Private Data                                   **
*******************************************************************************/
/* MISRA-C:2004 Rule 19.1 [NXTRDEV 19.1.1]: AUTOSAR requires deviation from this rule for Memory Mapping include statements */ 

#define DiagcMgr_START_SEC_CODE
#include "DiagcMgr_MemMap.h"

    /* 
     * Description: NTC to Application Index and Info Index aint with DebCntrIdx Map 
     * Usage:       Index into the table with the desired NTC (1 to 512)
     *              An application value 0xFFU indicates no mapping exists for the NTC
     */
    CONST(NtcMapRec1, DiagcMgr_CODE) DIAGCMGRNTCMAP_CNT_REC[D_MAXNUMBEROFNTCS_CNT_U16]= {
    /*  ApplIdx , NtcInfoIdx, DebCntrIdx  */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X000 */
        { 0x09U,     0x00U,        0x01U }, /* NTCNR_0X001 */
        { 0x0AU,     0x00U,        0x00U }, /* NTCNR_0X002 */
        { 0x0AU,     0x01U,        0x01U }, /* NTCNR_0X003 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X004 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X005 */
        { 0x0AU,     0x02U,        0x00U }, /* NTCNR_0X006 */
        { 0x0AU,     0x03U,        0x00U }, /* NTCNR_0X007 */
        { 0x0AU,     0x04U,        0x00U }, /* NTCNR_0X008 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X009 */
        { 0x00U,     0x00U,        0x01U }, /* NTCNR_0X00A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X00B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X00C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X00D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X00E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X00F */
        { 0x0AU,     0x05U,        0x00U }, /* NTCNR_0X010 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X011 */
        { 0x0AU,     0x06U,        0x00U }, /* NTCNR_0X012 */
        { 0x0AU,     0x07U,        0x00U }, /* NTCNR_0X013 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X014 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X015 */
        { 0x0AU,     0x08U,        0x02U }, /* NTCNR_0X016 */
        { 0x05U,     0x00U,        0x00U }, /* NTCNR_0X017 */
        { 0x05U,     0x01U,        0x01U }, /* NTCNR_0X018 */
        { 0x05U,     0x02U,        0x00U }, /* NTCNR_0X019 */
        { 0x05U,     0x03U,        0x00U }, /* NTCNR_0X01A */
        { 0x05U,     0x04U,        0x00U }, /* NTCNR_0X01B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X01C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X01D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X01E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X01F */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X020 */
        { 0x03U,     0x00U,        0x00U }, /* NTCNR_0X021 */
        { 0x04U,     0x00U,        0x00U }, /* NTCNR_0X022 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X023 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X024 */
        { 0x05U,     0x05U,        0x00U }, /* NTCNR_0X025 */
        { 0x05U,     0x06U,        0x00U }, /* NTCNR_0X026 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X027 */
        { 0x0AU,     0x09U,        0x00U }, /* NTCNR_0X028 */
        { 0x0AU,     0x0AU,        0x00U }, /* NTCNR_0X029 */
        { 0x0AU,     0x0BU,        0x00U }, /* NTCNR_0X02A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X02B */
        { 0x0AU,     0x0CU,        0x00U }, /* NTCNR_0X02C */
        { 0x0AU,     0x0DU,        0x00U }, /* NTCNR_0X02D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X02E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X02F */
        { 0x07U,     0x00U,        0x00U }, /* NTCNR_0X030 */
        { 0x04U,     0x01U,        0x01U }, /* NTCNR_0X031 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X032 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X033 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X034 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X035 */
        { 0x03U,     0x01U,        0x01U }, /* NTCNR_0X036 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X037 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X038 */
        { 0x0AU,     0x0EU,        0x00U }, /* NTCNR_0X039 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X03A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X03B */
        { 0x0AU,     0x0FU,        0x00U }, /* NTCNR_0X03C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X03D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X03E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X03F */
        { 0x07U,     0x01U,        0x01U }, /* NTCNR_0X040 */
        { 0x0AU,     0x10U,        0x00U }, /* NTCNR_0X041 */
        { 0x0AU,     0x11U,        0x00U }, /* NTCNR_0X042 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X043 */
        { 0x05U,     0x07U,        0x00U }, /* NTCNR_0X044 */
        { 0x07U,     0x02U,        0x00U }, /* NTCNR_0X045 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X046 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X047 */
        { 0x09U,     0x01U,        0x00U }, /* NTCNR_0X048 */
        { 0x09U,     0x02U,        0x02U }, /* NTCNR_0X049 */
        { 0x09U,     0x03U,        0x00U }, /* NTCNR_0X04A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X04B */
        { 0x09U,     0x04U,        0x00U }, /* NTCNR_0X04C */
        { 0x08U,     0x00U,        0x00U }, /* NTCNR_0X04D */
        { 0x09U,     0x05U,        0x00U }, /* NTCNR_0X04E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X04F */
        { 0x07U,     0x03U,        0x00U }, /* NTCNR_0X050 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X051 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X052 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X053 */
        { 0x09U,     0x06U,        0x00U }, /* NTCNR_0X054 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X055 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X056 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X057 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X058 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X059 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X05A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X05B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X05C */
        { 0x09U,     0x07U,        0x00U }, /* NTCNR_0X05D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X05E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X05F */
        { 0x04U,     0x02U,        0x00U }, /* NTCNR_0X060 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X061 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X062 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X063 */
        { 0x09U,     0x08U,        0x00U }, /* NTCNR_0X064 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X065 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X066 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X067 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X068 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X069 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X06A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X06B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X06C */
        { 0x09U,     0x09U,        0x00U }, /* NTCNR_0X06D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X06E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X06F */
        { 0x08U,     0x01U,        0x01U }, /* NTCNR_0X070 */
        { 0x08U,     0x02U,        0x00U }, /* NTCNR_0X071 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X072 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X073 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X074 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X075 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X076 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X077 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X078 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X079 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X07A */
        { 0x08U,     0x03U,        0x00U }, /* NTCNR_0X07B */
        { 0x08U,     0x04U,        0x00U }, /* NTCNR_0X07C */
        { 0x08U,     0x05U,        0x00U }, /* NTCNR_0X07D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X07E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X07F */
        { 0x08U,     0x06U,        0x00U }, /* NTCNR_0X080 */
        { 0x04U,     0x03U,        0x00U }, /* NTCNR_0X081 */
        { 0x04U,     0x04U,        0x00U }, /* NTCNR_0X082 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X083 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X084 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X085 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X086 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X087 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X088 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X089 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X08A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X08B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X08C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X08D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X08E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X08F */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X090 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X091 */
        { 0x03U,     0x02U,        0x00U }, /* NTCNR_0X092 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X093 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X094 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X095 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X096 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X097 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X098 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X099 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X09A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X09B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X09C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X09D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X09E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X09F */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0A0 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0A1 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0A2 */
        { 0x01U,     0x00U,        0x00U }, /* NTCNR_0X0A3 */
        { 0x02U,     0x00U,        0x00U }, /* NTCNR_0X0A4 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0A5 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0A6 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0A7 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0A8 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0A9 */
        { 0x03U,     0x03U,        0x00U }, /* NTCNR_0X0AA */
        { 0x04U,     0x05U,        0x00U }, /* NTCNR_0X0AB */
        { 0x05U,     0x08U,        0x00U }, /* NTCNR_0X0AC */
        { 0x07U,     0x04U,        0x00U }, /* NTCNR_0X0AD */
        { 0x08U,     0x07U,        0x00U }, /* NTCNR_0X0AE */
        { 0x08U,     0x08U,        0x00U }, /* NTCNR_0X0AF */
        { 0x00U,     0x01U,        0x02U }, /* NTCNR_0X0B0 */
        { 0x01U,     0x01U,        0x01U }, /* NTCNR_0X0B1 */
        { 0x02U,     0x01U,        0x01U }, /* NTCNR_0X0B2 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0B3 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0B4 */
        { 0x03U,     0x04U,        0x00U }, /* NTCNR_0X0B5 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0B6 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0B7 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0B8 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0B9 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0BA */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0BB */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0BC */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0BD */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0BE */
        { 0x04U,     0x06U,        0x00U }, /* NTCNR_0X0BF */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0C0 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0C1 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0C2 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0C3 */
        { 0x05U,     0x09U,        0x02U }, /* NTCNR_0X0C4 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0C5 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0C6 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0C7 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0C8 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0C9 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0CA */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0CB */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0CC */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0CD */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0CE */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0CF */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0D0 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0D1 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0D2 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0D3 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0D4 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0D5 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0D6 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0D7 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0D8 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0D9 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0DA */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0DB */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0DC */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0DD */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0DE */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0DF */
        { 0x07U,     0x05U,        0x00U }, /* NTCNR_0X0E0 */
        { 0x08U,     0x09U,        0x02U }, /* NTCNR_0X0E1 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0E2 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0E3 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0E4 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0E5 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0E6 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0E7 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0E8 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0E9 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0EA */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0EB */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0EC */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0ED */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0EE */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0EF */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0F0 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0F1 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0F2 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0F3 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0F4 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0F5 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0F6 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0F7 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0F8 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0F9 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0FA */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0FB */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0FC */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0FD */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0FE */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X0FF */
        { 0x06U,     0x00U,        0x00U }, /* NTCNR_0X100 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X101 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X102 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X103 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X104 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X105 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X106 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X107 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X108 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X109 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X10A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X10B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X10C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X10D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X10E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X10F */
        { 0x06U,     0x01U,        0x00U }, /* NTCNR_0X110 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X111 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X112 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X113 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X114 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X115 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X116 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X117 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X118 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X119 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X11A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X11B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X11C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X11D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X11E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X11F */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X120 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X121 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X122 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X123 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X124 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X125 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X126 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X127 */
        { 0x06U,     0x02U,        0x00U }, /* NTCNR_0X128 */
        { 0x06U,     0x03U,        0x01U }, /* NTCNR_0X129 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X12A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X12B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X12C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X12D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X12E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X12F */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X130 */
        { 0x07U,     0x06U,        0x00U }, /* NTCNR_0X131 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X132 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X133 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X134 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X135 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X136 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X137 */
        { 0x07U,     0x07U,        0x00U }, /* NTCNR_0X138 */
        { 0x00U,     0x02U,        0x00U }, /* NTCNR_0X139 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X13A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X13B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X13C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X13D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X13E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X13F */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X140 */
        { 0x07U,     0x08U,        0x00U }, /* NTCNR_0X141 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X142 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X143 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X144 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X145 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X146 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X147 */
        { 0x00U,     0x03U,        0x00U }, /* NTCNR_0X148 */
        { 0x00U,     0x04U,        0x00U }, /* NTCNR_0X149 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X14A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X14B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X14C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X14D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X14E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X14F */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X150 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X151 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X152 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X153 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X154 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X155 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X156 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X157 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X158 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X159 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X15A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X15B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X15C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X15D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X15E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X15F */
        { 0x00U,     0x05U,        0x00U }, /* NTCNR_0X160 */
        { 0x00U,     0x06U,        0x00U }, /* NTCNR_0X161 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X162 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X163 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X164 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X165 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X166 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X167 */
        { 0x00U,     0x07U,        0x00U }, /* NTCNR_0X168 */
        { 0x01U,     0x02U,        0x00U }, /* NTCNR_0X169 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X16A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X16B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X16C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X16D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X16E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X16F */
        { 0x00U,     0x08U,        0x00U }, /* NTCNR_0X170 */
        { 0x02U,     0x02U,        0x00U }, /* NTCNR_0X171 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X172 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X173 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X174 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X175 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X176 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X177 */
        { 0x00U,     0x09U,        0x03U }, /* NTCNR_0X178 */
        { 0x02U,     0x03U,        0x00U }, /* NTCNR_0X179 */
        { 0x03U,     0x05U,        0x00U }, /* NTCNR_0X17A */
        { 0x01U,     0x03U,        0x00U }, /* NTCNR_0X17B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X17C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X17D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X17E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X17F */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X180 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X181 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X182 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X183 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X184 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X185 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X186 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X187 */
        { 0x01U,     0x04U,        0x00U }, /* NTCNR_0X188 */
        { 0x01U,     0x05U,        0x00U }, /* NTCNR_0X189 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X18A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X18B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X18C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X18D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X18E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X18F */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X190 */
        { 0x02U,     0x04U,        0x00U }, /* NTCNR_0X191 */
        { 0x01U,     0x06U,        0x00U }, /* NTCNR_0X192 */
        { 0x06U,     0x04U,        0x00U }, /* NTCNR_0X193 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X194 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X195 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X196 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X197 */
        { 0x06U,     0x05U,        0x02U }, /* NTCNR_0X198 */
        { 0x06U,     0x06U,        0x00U }, /* NTCNR_0X199 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X19A */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X19B */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X19C */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X19D */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X19E */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X19F */
        { 0x06U,     0x07U,        0x00U }, /* NTCNR_0X1A0 */
        { 0x06U,     0x08U,        0x00U }, /* NTCNR_0X1A1 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1A2 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1A3 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1A4 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1A5 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1A6 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1A7 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1A8 */
        { 0x01U,     0x07U,        0x00U }, /* NTCNR_0X1A9 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1AA */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1AB */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1AC */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1AD */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1AE */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1AF */
        { 0x01U,     0x08U,        0x00U }, /* NTCNR_0X1B0 */
        { 0x01U,     0x09U,        0x02U }, /* NTCNR_0X1B1 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1B2 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1B3 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1B4 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1B5 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1B6 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1B7 */
        { 0x07U,     0x09U,        0x02U }, /* NTCNR_0X1B8 */
        { 0x02U,     0x05U,        0x00U }, /* NTCNR_0X1B9 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1BA */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1BB */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1BC */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1BD */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1BE */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1BF */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1C0 */
        { 0x03U,     0x06U,        0x00U }, /* NTCNR_0X1C1 */
        { 0x02U,     0x06U,        0x00U }, /* NTCNR_0X1C2 */
        { 0x02U,     0x07U,        0x00U }, /* NTCNR_0X1C3 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1C4 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1C5 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1C6 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1C7 */
        { 0x02U,     0x08U,        0x00U }, /* NTCNR_0X1C8 */
        { 0x02U,     0x09U,        0x02U }, /* NTCNR_0X1C9 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1CA */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1CB */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1CC */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1CD */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1CE */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1CF */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1D0 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1D1 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1D2 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1D3 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1D4 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1D5 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1D6 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1D7 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1D8 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1D9 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1DA */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1DB */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1DC */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1DD */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1DE */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1DF */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1E0 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1E1 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1E2 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1E3 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1E4 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1E5 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1E6 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1E7 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1E8 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1E9 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1EA */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1EB */
        { 0x03U,     0x07U,        0x00U }, /* NTCNR_0X1EC */
        { 0x03U,     0x08U,        0x00U }, /* NTCNR_0X1ED */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1EE */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1EF */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1F0 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1F1 */
        { 0x03U,     0x09U,        0x02U }, /* NTCNR_0X1F2 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1F3 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1F4 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1F5 */
        { 0x04U,     0x07U,        0x00U }, /* NTCNR_0X1F6 */
        { 0x04U,     0x08U,        0x00U }, /* NTCNR_0X1F7 */
        { 0x04U,     0x09U,        0x02U }, /* NTCNR_0X1F8 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1F9 */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1FA */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1FB */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1FC */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1FD */
        { 0xFFU,     0xFFU,        0x00U }, /* NTCNR_0X1FE */
        { 0x06U,     0x09U,        0x00U }, /* NTCNR_0X1FF */
    };

/* 
     * Description: Configuration for the properties for each of the 512 NTCs in system
     *              based on the NTC master list of the project
     * Usage:       Every active NTC should be configured as per NTC Master List
     */
CONST(uint8, DiagcMgr_CODE) DIAGCMGRNTCPPTYARY_CNT_U08[D_MAXNUMBEROFNTCS_CNT_U16]= {0X00U,0X07U,0X00U,0X01U,0X00U,0X00U,0X04U,0X02U,0X03U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X000 - NTCNR_0X00F*/
                                                                                    0X05U,0X00U,0X07U,0X00U,0X00U,0X00U,0X07U,0X00U,0X01U,0X04U,0X02U,0X06U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X010 - NTCNR_0X01F*/
                                                                                    0X00U,0X00U,0X00U,0X00U,0X00U,0X03U,0X05U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X020 - NTCNR_0X02F*/
                                                                                    0X00U,0X01U,0X00U,0X00U,0X00U,0X00U,0X01U,0X00U,0X00U,0X00U,0X00U,0X00U,0X06U,0X00U,0X00U,0X00U,  /*NTCNR_0X030 - NTCNR_0X03F*/
                                                                                    0X01U,0X00U,0X00U,0X00U,0X07U,0X04U,0X00U,0X00U,0X00U,0X01U,0X04U,0X00U,0X02U,0X00U,0X06U,0X00U,  /*NTCNR_0X040 - NTCNR_0X04F*/
                                                                                    0X02U,0X00U,0X00U,0X00U,0X03U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X05U,0X00U,0X00U,  /*NTCNR_0X050 - NTCNR_0X05F*/
                                                                                    0X04U,0X00U,0X00U,0X00U,0X07U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X060 - NTCNR_0X06F*/
                                                                                    0X01U,0X04U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X02U,0X06U,0X03U,0X00U,0X00U,  /*NTCNR_0X070 - NTCNR_0X07F*/
                                                                                    0X05U,0X02U,0X06U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X080 - NTCNR_0X08F*/
                                                                                    0X00U,0X00U,0X04U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X090 - NTCNR_0X09F*/
                                                                                    0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X02U,0X03U,0X00U,0X06U,0X07U,0X01U,  /*NTCNR_0X0A0 - NTCNR_0X0AF*/
                                                                                    0X01U,0X01U,0X01U,0X00U,0X00U,0X06U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X05U,  /*NTCNR_0X0B0 - NTCNR_0X0BF*/
                                                                                    0X00U,0X00U,0X00U,0X00U,0X07U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X0C0 - NTCNR_0X0CF*/
                                                                                    0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X0D0 - NTCNR_0X0DF*/
                                                                                    0X03U,0X07U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X0E0 - NTCNR_0X0EF*/
                                                                                    0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X0F0 - NTCNR_0X0FF*/
                                                                                    0X07U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X100 - NTCNR_0X10F*/
                                                                                    0X07U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X110 - NTCNR_0X11F*/
                                                                                    0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X07U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X120 - NTCNR_0X12F*/
                                                                                    0X00U,0X05U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X07U,0X04U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X130 - NTCNR_0X13F*/
                                                                                    0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X02U,0X06U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X140 - NTCNR_0X14F*/
                                                                                    0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X150 - NTCNR_0X15F*/
                                                                                    0X03U,0X05U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X07U,0X04U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X160 - NTCNR_0X16F*/
                                                                                    0X00U,0X04U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X07U,0X02U,0X03U,0X02U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X170 - NTCNR_0X17F*/
                                                                                    0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X06U,0X03U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X180 - NTCNR_0X18F*/
                                                                                    0X00U,0X06U,0X05U,0X00U,0X00U,0X00U,0X00U,0X00U,0X01U,0X04U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X190 - NTCNR_0X19F*/
                                                                                    0X02U,0X06U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X07U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X1A0 - NTCNR_0X1AF*/
                                                                                    0X00U,0X07U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X07U,0X03U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X1B0 - NTCNR_0X1BF*/
                                                                                    0X00U,0X05U,0X05U,0X07U,0X00U,0X00U,0X00U,0X00U,0X00U,0X07U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X1C0 - NTCNR_0X1CF*/
                                                                                    0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,  /*NTCNR_0X1D0 - NTCNR_0X1DF*/
                                                                                    0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X07U,0X00U,0X00U,0X00U,  /*NTCNR_0X1E0 - NTCNR_0X1EF*/
                                                                                    0X00U,0X00U,0X06U,0X00U,0X00U,0X00U,0X07U,0X00U,0X07U,0X00U,0X00U,0X00U,0X00U,0X00U,0X00U,0X03U}; /*NTCNR_0X1F0 - NTCNR_0X1FF*/


    /* 
     * Description: List of the NTC numbers for Latch-Capable NTCs of this project. 
     * Usage:       Upto 20 NTCs for a project can be configured as latch capable.
     *              The NTCs for which LtchgEna is set to true will be reflected here.
     *              Any remaining unconfigured elements are set to NTC_RESD(0X000U)
     */
    CONST(uint16,DiagcMgr_CODE) DIAGCMGRLISTOFLTCHGNTC_CNT_ENUM[D_MAXNUMOFLTCHGNTCS_CNT_U16] = {0X001U,0X002U,0X016U,0X017U,0X021U, 
                                                                                                0X022U,0X030U,0X04DU,0X0A4U,0X0C4U, 
                                                                                                0X0E1U,0X129U,0X178U,0X193U,0X1B1U, 
                                                                                                0X1B8U,0X1C9U,0X1F2U,0X1F8U,0x000U};

    /* 
     * Description: List of the Thresholds for latch capable NTCs 
     * Usage:       Each latch capable NTC must have a threshold set from 1-255
     *              If LtchEna is false but threshold is set it wont appear here.
     */
    CONST(uint8,DiagcMgr_CODE) DIAGCMGRNTCLTCHCNTRTHD_CNT_U08[D_MAXNUMOFLTCHGNTCS_CNT_U16] = {0X91U,0X01U,0XA7U,0X01U,0XE1U,0X13U,
                                                                                              0X04U,0XDEU,0X67U,0X9AU,0X01U,
                                                                                              0XFAU,0XFEU,0XFDU,0X40U,0X0BU,
                                                                                              0X63U,0XC8U,0X5FU,0XFFU};

    /** Ntc Info Arrays **/
    /* 
     * Description: NtcNr reference for NtcInfoAry 
     */
  
  
    CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL0_CNT_U16[NTCCNTAPPL0_CNT_U16] = 
    { 0X00AU ,    0X0B0U ,    0X139U ,    0X148U ,    0X149U ,    0X160U ,    0X161U ,    0X168U ,    0X170U ,    0X178U }; /* 10 */ 
  
  
    CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL1_CNT_U16[NTCCNTAPPL1_CNT_U16] = 
    { 0X0A3U ,    0X0B1U ,    0X169U ,    0X17BU ,    0X188U ,    0X189U ,    0X192U ,    0X1A9U ,    0X1B0U ,    0X1B1U }; /* 10 */ 
  
  
    CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL2_CNT_U16[NTCCNTAPPL2_CNT_U16] = 
    { 0X0A4U ,    0X0B2U ,    0X171U ,    0X179U ,    0X191U ,    0X1B9U ,    0X1C2U ,    0X1C3U ,    0X1C8U ,    0X1C9U }; /* 10 */ 
  
  
    CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL3_CNT_U16[NTCCNTAPPL3_CNT_U16] = 
    { 0X021U ,    0X036U ,    0X092U ,    0X0AAU ,    0X0B5U ,    0X17AU ,    0X1C1U ,    0X1ECU ,    0X1EDU ,    0X1F2U }; /* 10 */ 
  
  
    CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL4_CNT_U16[NTCCNTAPPL4_CNT_U16] = 
    { 0X022U ,    0X031U ,    0X060U ,    0X081U ,    0X082U ,    0X0ABU ,    0X0BFU ,    0X1F6U ,    0X1F7U ,    0X1F8U }; /* 10 */ 
  
  
    CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL5_CNT_U16[NTCCNTAPPL5_CNT_U16] = 
    { 0X017U ,    0X018U ,    0X019U ,    0X01AU ,    0X01BU ,    0X025U ,    0X026U ,    0X044U ,    0X0ACU ,    0X0C4U }; /* 10 */ 
  
  
    CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL6_CNT_U16[NTCCNTAPPL6_CNT_U16] = 
    { 0X100U ,    0X110U ,    0X128U ,    0X129U ,    0X193U ,    0X198U ,    0X199U ,    0X1A0U ,    0X1A1U ,    0X1FFU }; /* 10 */ 
  
  
    CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL7_CNT_U16[NTCCNTAPPL7_CNT_U16] = 
    { 0X030U ,    0X040U ,    0X045U ,    0X050U ,    0X0ADU ,    0X0E0U ,    0X131U ,    0X138U ,    0X141U ,    0X1B8U }; /* 10 */ 
  
  
    CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL8_CNT_U16[NTCCNTAPPL8_CNT_U16] = 
    { 0X04DU ,    0X070U ,    0X071U ,    0X07BU ,    0X07CU ,    0X07DU ,    0X080U ,    0X0AEU ,    0X0AFU ,    0X0E1U }; /* 10 */ 
  
  
    CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL9_CNT_U16[NTCCNTAPPL9_CNT_U16] = 
    { 0X001U ,    0X048U ,    0X049U ,    0X04AU ,    0X04CU ,    0X04EU ,    0X054U ,    0X05DU ,    0X064U ,    0X06DU }; /* 10 */ 
  
  
    CONST(uint16, DiagcMgr_CODE) NTCNRARYAPPL10_CNT_U16[NTCCNTAPPL10_CNT_U16] = 
    { 0X002U ,    0X003U ,    0X006U ,    0X007U ,    0X008U ,    0X010U ,    0X012U ,    0X013U ,    0X016U ,    0X028U ,    0X029U ,    0X02AU ,    0X02CU ,    0X02DU ,    0X039U ,    0X03CU ,    0X041U ,    0X042U }; /* 18 */ 

    /* Table Contents: DTCENAMASK */
    CONST(uint16, DiagcMgr_CODE) DTCENAMASK[TOTNROFDTC_CNT_U08 +1U] = {
    0x0000U,
    0x800BU,
    0x0010U,
    0xAAAAU,
    0x5555U,
    0x0000U,
    0xFFFFU,
    };

    /* Table Contents: DEMDTCEVEIDMAP */
    CONST(uint16, DiagcMgr_CODE) DEMDTCEVEIDMAP[TOTNROFDTC_CNT_U08 +1U]= {
    0x0000U,
    DemConf_DemEventParameter_TestEvent1,
    DemConf_DemEventParameter_TestEvent2,
    DemConf_DemEventParameter_TestEvent3,
    DemConf_DemEventParameter_TestEvent3,
    DemConf_DemEventParameter_TestEvent3,
    DemConf_DemEventParameter_TestEvent3,
    };
#define DiagcMgr_STOP_SEC_CODE
#include "DiagcMgr_MemMap.h"

