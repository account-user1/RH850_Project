/**********************************************************************************************************************
* Module File Name  : lockstep_regs.h
* Module Description: Lockstep (DMA and CPU) Peripheral Registers
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

#ifndef LOCKSTEP_REGS_H
#define LOCKSTEP_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint32 DMACMPERR:30;                                   /* DMACMPERR[29:0]  */
    uint32 PROT:2;                                         /* PROT[31:30]      */
} __type345;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type345 BIT;                                         /* Bit Access       */
} __type1624;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
} __type2263;

typedef struct 
{                                                          /* Module           */
    __type1624 PDMA_COMP_CNTRL;                            /* PDMA_COMP_CNTRL  */
} __type2579;
typedef struct 
{                                                          /* Module           */
    __type2263 REG0;                                       /* REG0             */
    __type2263 REG1;                                       /* REG1             */
} __type2623;

__IOREG(PDMACOMP, 0xFFC4CA00, __READ_WRITE, __type2579);              /* PDMACOMP */
__IOREG(TESTCOMP, 0xFFFEED00, __READ_WRITE, __type2623);              /* TESTCOMP */

#define PDMACOMPPDMA_COMP_CNTRL PDMACOMP.PDMA_COMP_CNTRL.UINT32
#define PDMACOMPDMACMPERR PDMACOMP.PDMA_COMP_CNTRL.BIT.DMACMPERR
#define PDMACOMPPROT PDMACOMP.PDMA_COMP_CNTRL.BIT.PROT
#define TESTCOMPREG0 TESTCOMP.REG0.UINT32
#define TESTCOMPREG0L TESTCOMP.REG0.UINT16[L]
#define TESTCOMPREG0LL TESTCOMP.REG0.UINT8[LL]
#define TESTCOMPREG0LH TESTCOMP.REG0.UINT8[LH]
#define TESTCOMPREG0H TESTCOMP.REG0.UINT16[H]
#define TESTCOMPREG0HL TESTCOMP.REG0.UINT8[HL]
#define TESTCOMPREG0HH TESTCOMP.REG0.UINT8[HH]
#define TESTCOMPREG1 TESTCOMP.REG1.UINT32
#define TESTCOMPREG1L TESTCOMP.REG1.UINT16[L]
#define TESTCOMPREG1LL TESTCOMP.REG1.UINT8[LL]
#define TESTCOMPREG1LH TESTCOMP.REG1.UINT8[LH]
#define TESTCOMPREG1H TESTCOMP.REG1.UINT16[H]
#define TESTCOMPREG1HL TESTCOMP.REG1.UINT8[HL]
#define TESTCOMPREG1HH TESTCOMP.REG1.UINT8[HH]

#endif
