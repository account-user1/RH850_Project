/**********************************************************************************************************************
* Module File Name  : audr_regs.h
* Module Description: AUD-RAM Peripheral Registers
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
* 09/11/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef AUDR_REGS_H
#define AUDR_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    const uint16 DATA:4;                                   /* DATA[3:0]        */
    uint16 :12;                                            /* Reserved Bits    */
} __type95;

typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type95 BIT;                                    /* Bit Access       */
} __type1374;

typedef struct 
{                                                          /* Module           */
    const __type1374 ISR;                                  /* ISR              */
    uint8  dummy14[2];                                     /* Reserved         */
    uint16 MBR;                                            /* MBR              */
    uint8  dummy15[2];                                     /* Reserved         */
    uint16 MBRC;                                           /* MBRC             */
} __type2559;

__IOREG(AUD, 0xFA005000, __READ_WRITE, __type2559);                   /* AUD */

#define AUDISR AUD.ISR.UINT16
#define AUDDATA AUD.ISR.BIT.DATA
#define AUDMBR AUD.MBR
#define AUDMBRC AUD.MBRC

#endif
