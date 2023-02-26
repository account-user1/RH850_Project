/**********************************************************************************************************************
* Module File Name  : mode_regs.h
* Module Description: Operating Mode Peripheral Registers
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------
* Date      Rev      Author         Change Description
* -------   -------  --------  ----------------------------------------------
* 12/16/14  1        LWW       Initial version derived from dr7f701311.dvf.h v1 in tools directory
* 09/14/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef MODE_REGS_H
#define MODE_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    const uint8  MODE:4;                                   /* MODE[3:0]        */
    uint8  :4;                                             /* Reserved Bits    */
} __type385;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type385 BIT;                                   /* Bit Access       */
} __type1664;

typedef struct 
{                                                          /* Module           */
    const __type1664 MODER;                                /* MODER            */
} __type2586;

__IOREG(MODC, 0xFFCD13F4, __READ_WRITE, __type2586);                  /* MODC */

#define MODCMODER MODC.MODER.UINT8
#define MODCMODE MODC.MODER.BIT.MODE

#endif
