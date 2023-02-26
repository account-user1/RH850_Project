/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: CmnMfgSrv.h
* Module Description: Common Manufacturing Services Header
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
* 06/09/15  2        JWJ       Removed macro functions - made into actual function in CmnMfgSrvFct.c        EA4#
* 10/21/15  3        JWJ       Updates made to bootloader, part number location was adjusted                EA4#2174
* 11/30/15  4        JWJ       Removed the ENAD and DISAD definitions, moved to CmnMfgSrvTyp                EA4#2518
* 12/19/16  5        JWJ       Added a build switch to allow NMEC reset via reflashing                      EA4#8626
* 07/26/17  6        JWJ       Added definitions for PID periodic data rate dividers                        EA4#14061
***********************************************************************************************************************/
#ifndef CMNMFGSRV_H
#define CMNMFGSRV_H

#include "CmnMfgSrvTyp.h"

/* ================================================================================================================== */
/* Definitions */
/* ------------------------------------------------------------------------------------------------------------------ */
/* Set this flag to STD_ON to enable a special build where motor torque output will be disabled but the Nexteer
 * Manufacturing Enable Counter (MEC) will be forced to a value of 0xFE.  This can be used to restore the NMEC to a
 * non-zero value if it has decremented to zero.
 */
#define CMNMFGSRVNXTRMFGENACNTRUNLCK  STD_OFF


/* Periodic rate divider definitions in multiples of the periodic loop rate.
 * Calculated as: divider = max(((period) / 10ms) - 1, 0)
 * Example for 100ms period: ((100) / 10) - 1) = 9
 * 10ms is achievable, but the divider value should be zero (not -1) as that will trigger the periodic to run each loop.
 */
#define CMNMFGSRVPERDIVDRFAST_CNT_U08 0U  /* 10ms */
#define CMNMFGSRVPERDIVDRMED_CNT_U08  9U  /* 100ms */
#define CMNMFGSRVPERDIVDRSLOW_CNT_U08 99U /* 1000ms */


/* ================================================================================================================== */
/* External Variables */
/* ------------------------------------------------------------------------------------------------------------------ */
extern CONSTP2VAR(boolean, AUTOMATIC, AUTOMATIC) CmnMfgSrv_DiTbl[64U];
extern VAR(NegRespCodEnum, CmnMfgSrv_VAR) CmnMfgSrvRetBuf_G;


#endif
/* End of File: CmnMfgSrv.h */
