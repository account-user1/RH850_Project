/**********************************************************************************************************************
* Copyright 2017 Nexteer 
* Nexteer Confidential
*
* Module File Name  : NxtrStrtUp.c
* Module Description: Low level microcontroller startup library
* Project           : CBD
* Author            : Jared Julien
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       kzdyfh %
*----------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author    Change Description                                                              SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     --------
* 12/10/15  1        JWJ       Initial Version                                                                 EA4#9023
* 12/21/15  2        JWJ       Fixed attempted QAC warning correction resulting in endless loop                EA4#9023
* 05/10/17  3        LWW       Fixes required for new compiler settings                                        EA4#11805
* 05/26/17  4        JWJ       Changed the RAM clear function to use linker symbols instead of magic numbers   EA4#12342
**********************************************************************************************************************/

#include <string.h>

#include "NxtrStrtUp.h"
#include "Std_Types.h"


/* MISRA-C:2004 Rule 11.3 [NXTRDEV 11.3.4] Cast of a variable address to an integer type is required for address range
 * checking.
 */
/* MISRA-C:2004 Rule 11.4 [NXTRDEV 11.4.6] Cast of a pointer to a pointer of a structure type is allowed for code
 * readability when accessing linker table data.
 */


/************************************************ Global Functions ****************************************************/
/*----------------------------------------------------------------------*/
/* Entry Point nxtr_strt_up - called from NxtrStrtUp.850 */
/*----------------------------------------------------------------------*/
void nxtr_strt_up(void)
{
/*----------------------------------------------------------------------*/
/* Clear BSS */
/*----------------------------------------------------------------------*/
	{
		VAR(uint32, AUTOMATIC) Len_Cnt_T_u32;
		VAR(uint32, AUTOMATIC) Idx_Cnt_T_u32;

		/* Initialization of LRAM self area with '0' */
		Len_Cnt_T_u32 = ((uint32)clearedRamEnd - (uint32)clearedRamStart) >> 2;
		for (Idx_Cnt_T_u32 = 0U; Idx_Cnt_T_u32 < Len_Cnt_T_u32; Idx_Cnt_T_u32++)
		{
			clearedRamStart[Idx_Cnt_T_u32] = 0UL;
		}
	}

/*----------------------------------------------------------------------*/
/* Copy from ROM to RAM */
/*----------------------------------------------------------------------*/
	{
		VAR(uint16, AUTOMATIC) TblSize_Cnt_T_u16;
		VAR(uint16, AUTOMATIC) BlkOffs_Cnt_T_u16;
		P2VAR(RomBlkDftRec1, AUTOMATIC, AUTOMATIC) BlkPtr_Cnt_T_u32;

		TblSize_Cnt_T_u16 = (uint16)((uint32)__ghseinfo_copy - (uint32)__ghsbinfo_copy);

		/* Iterate over the blocks in the table until the end is reached. */
		for (BlkOffs_Cnt_T_u16 = 0U; BlkOffs_Cnt_T_u16 < TblSize_Cnt_T_u16; BlkOffs_Cnt_T_u16 += (uint16)sizeof(RomBlkDftRec1))
		{
			BlkPtr_Cnt_T_u32 = (RomBlkDftRec1*)&__ghsbinfo_copy[BlkOffs_Cnt_T_u16];

			/* Perform a copy of the block using the library function. */
			(void)memcpy(BlkPtr_Cnt_T_u32->TarPtr, BlkPtr_Cnt_T_u32->SrcPtr, (uint16)BlkPtr_Cnt_T_u32->Size);
		}
	}

	/* Initialization complete - call main function to start application code */
	(void)main();

	while (1)
	{
		/* Main should never return - capture it if it does.
		 * Note: The exit() function has been removed as Nexteer has no need for it and because the compiler
		 * qualification requires that it not be used.
		 */
	}
}

/************************************************* End of Functions ***************************************************/
