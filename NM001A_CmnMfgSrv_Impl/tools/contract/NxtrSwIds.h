/***********************************************************************************************************************
* Copyright 2015 Nexteer
* Nexteer Confidential
*
* Module File Name: NxtrSwIds.h
* Module Description: Nexteer Software Identifiers
* Project           : Component Based Design
* Author            : Jared Julien
************************************************************************************************************************
* Version Control:
* %version:         3 %
* %derived_by:      kzdyfh %
* ---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                           SCR #
* --------  -------  --------  ---------------------------------------------------------------------------  ----------
* 12/04/15  1        JWJ       Initial file creation                                                        EA4#2518
***********************************************************************************************************************/
#ifndef NXTRSWIDS_H
#define NXTRSWIDS_H

#include "Rte_Type.h"

/* Software release number structure - holds name a version information */
typedef struct
{
	uint8 Nr[16U];
	uint8 Ver[16U];
} SwRelNrRec;

/* Software origin flag - used by F195 service to indicate the source of the software */
typedef enum {
	SWORIGIN_PROD = 0U,
	SWORIGIN_DEV = 1U,
	SWORIGIN_PSR = 2U
} SwOriginRec;


extern CONST(SwRelNrRec, NxtrSwIds_CONST) NxtrSwIds_SwRelNr_Cnt_str;
extern CONST(uint32, NxtrSwIds_CONST) NxtrSwIds_PsrId_Cnt_u32;
extern CONST(uint8, NxtrSwIds_CONST) NxtrSwIds_PsrRev_Cnt_u08;
extern CONST(uint8, NxtrSwIds_CONST) NxtrSwIds_SwAuthor_Cnt_u08[6U];
extern CONST(SwOriginRec, NxtrSwIds_CONST) NxtrSwIds_SwOrigin_Cnt_enum;


/* Bootloader */
#define NxtrSwIds_BootSwRelNrPtr_Cnt_str ((SwRelNrRec*)(0x200U))


#endif
/* End of File: NxtrSwIds.h */
