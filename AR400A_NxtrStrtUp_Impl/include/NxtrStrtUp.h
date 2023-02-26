/**********************************************************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name  : NxtrStrtUp.h
* Module Description: Low level microcontroller startup library
* Project           : CBD
* Author            : Jared Julien
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       kzdyfh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                             SCR #
* -------   -------  --------  -----------------------------------------------------------------------------  ---------
* 12/10/15  1        JWJ       Initial Version                                                                EA4#9023
* 05/31/17  2        JWJ       Added linker symbols for cleared RAM ranges and cleaned up unused statements   EA4#12342
**********************************************************************************************************************/

#ifndef NXTRSTRTUP_H
#define NXTRSTRTUP_H

#include "Std_Types.h"

/* MISRA-C:2004 Rule 6.3 [NXTRDEV 6.3.1] Prototype for main function must use int data type in order to avoid compiler
 * warning.
 */
/* MISRA-C:2004 Rule 8.12 [NXTRDEV 8.12.2] The GHS compiler requires the [] notation in extern declarations of linker
 * symbols and the size of the sections is unknown when generating the extern declarations.  The size of the array is
 * computed using a pair of symbols denoting the beginning and end.
 */
/* MISRA-C:2004 Rule 8.9 [NXTRDEV 8.9.1] Deviation allowed for use of linker symbols, because the linker symbols are
 * not defined in any source code file.
 */

/********************************************** Local Type Definitions ************************************************/
typedef struct {
	P2VAR(uint32, AUTOMATIC, AUTOMATIC) TarPtr;
	P2VAR(uint32, AUTOMATIC, AUTOMATIC) SrcPtr;
	VAR(uint32, AUTOMATIC) Size;
} RomBlkDftRec1;


/********************************************* Function Prototypes ****************************************************/
extern void nxtr_strt_up(void);


/*********************************************** Extern Statements ****************************************************/
void __nxtr_strt_up(void);
extern int main(void);

extern VAR(uint32, AUTOMATIC) clearedRamStart[];
extern VAR(uint32, AUTOMATIC) clearedRamEnd[];

extern VAR(uint8, AUTOMATIC) __ghsbinfo_copy[];
extern VAR(uint8, AUTOMATIC) __ghseinfo_copy[];


#endif
