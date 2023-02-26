/**********************************************************************************************************************
* Module File Name  : ram_regs.h
* Module Description: RAM Registers
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

#ifndef RAM_REGS_H
#define RAM_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint32 DT0:32;                                         /* DT0[31:0]        */
} __type138;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DT1:32;                                         /* DT1[31:0]        */
} __type139;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DT2:32;                                         /* DT2[31:0]        */
} __type140;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DT3:32;                                         /* DT3[31:0]        */
} __type141;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type138 BIT;                                         /* Bit Access       */
} __type1417;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type139 BIT;                                         /* Bit Access       */
} __type1418;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type140 BIT;                                         /* Bit Access       */
} __type1419;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type141 BIT;                                         /* Bit Access       */
} __type1420;

typedef struct 
{                                                          /* Module           */
    __type1417 DAT0;                                       /* DAT0             */
    __type1418 DAT1;                                       /* DAT1             */
    __type1419 DAT2;                                       /* DAT2             */
    __type1420 DAT3;                                       /* DAT3             */
} __type2564;

__IOREG(BRAM, 0xFFC0A000, __READ_WRITE, __type2564);                  /* BRAM */

#define BRAMDAT0 BRAM.DAT0.UINT32
#define BRAMDT0 BRAM.DAT0.BIT.DT0
#define BRAMDAT1 BRAM.DAT1.UINT32
#define BRAMDT1 BRAM.DAT1.BIT.DT1
#define BRAMDAT2 BRAM.DAT2.UINT32
#define BRAMDT2 BRAM.DAT2.BIT.DT2
#define BRAMDAT3 BRAM.DAT3.UINT32
#define BRAMDT3 BRAM.DAT3.BIT.DT3

#endif
