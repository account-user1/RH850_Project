/**********************************************************************************************************************
* Copyright 2017 Nexteer
* Nexteer Confidential
*
* Module File Name  : FordHeader.c
* Module Description: Ford Header Information
* Project           : Ford T3T6
* Author            : Xin Liu
***********************************************************************************************************************
* Version Control:
* %version:          5 %
* %derived_by:       gz324f %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 11/22/17   1       XL       Initial version                                                                  EA4#17612
* 02/03/18   2       XL       Updated memory allocation                                                        EA4#20290
* 03/22/18   3       XL       Added Ford Part Number for DID F188                                              EA4#21938
* 04/10/18   4       XL       Updated part number                                                              EA4#22505
**********************************************************************************************************************/

#define FORD_HEADER_DATA

/******************************************************************************/
/* Include files                                                              */
/******************************************************************************/
#include "FordHeader.h"

const uint8 FordPartNr[24] = "ML34-14D003-BA01";

/* Presence Pattern */
#pragma ghs section rosdata =".N_PresPattAppSeg"
const uint32 PresencePatternApp = 0x3E296A73;
#pragma ghs section

#pragma ghs section rosdata =".N_PresPattNxtrCalSeg"
const uint32 PresencePatternNxtrCal = 0x3E296A73;
#pragma ghs section

#pragma ghs section rosdata =".N_PresPattFordCalSeg"
const uint32 PresencePatternFordCal = 0x3E296A73;
#pragma ghs section


/* Dummy CRC */
#pragma ghs section rosdata=".APPLCRC"
const uint32 DummyApplCrc = 0x00000000U;
#pragma ghs section

#pragma ghs section rosdata=".CAL1CRC"
const uint32 DummyCal1Crc = 0x00000000U;
#pragma ghs section

#pragma ghs section rosdata=".CAL2CRC"
const uint32 DummyCal2Crc = 0x00000000U;
#pragma ghs section