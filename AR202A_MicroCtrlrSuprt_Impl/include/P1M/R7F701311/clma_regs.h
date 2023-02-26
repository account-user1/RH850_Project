/**********************************************************************************************************************
* Module File Name  : clma_regs.h
* Module Description: Clock Monitor Peripheral Registers
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
* 09/15/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef CLMA_REGS_H
#define CLMA_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint32 RESCLM:1;                                       /* RESCLM           */
    uint32 MONCLKMSK:1;                                    /* MONCLKMSK        */
    uint32 ERRMSK:1;                                       /* ERRMSK           */
    uint32 CLMA0TESTEN:1;                                  /* CLMA0TESTEN      */
    uint32 CLMA1TESTEN:1;                                  /* CLMA1TESTEN      */
    uint32 CLMA2TESTEN:1;                                  /* CLMA2TESTEN      */
    uint32 CLMA3TESTEN:1;                                  /* CLMA3TESTEN      */
    uint32 :25;                                            /* Reserved Bits    */
} __type922;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLMA0ERRS:1;                              /* CLMA0ERRS        */
    const uint32 CLMA1ERRS:1;                              /* CLMA1ERRS        */
    const uint32 CLMA2ERRS:1;                              /* CLMA2ERRS        */
    const uint32 CLMA3ERRS:1;                              /* CLMA3ERRS        */
    uint32 :28;                                            /* Reserved Bits    */
} __type923;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CLME:1;                                         /* CLME             */
    uint8  :7;                                             /* Reserved Bits    */
} __type924;
typedef struct 
{                                                          /* Bit Access       */
    uint16 CMPL:12;                                        /* CMPL[11:0]       */
    uint16 :4;                                             /* Reserved Bits    */
} __type925;
typedef struct 
{                                                          /* Bit Access       */
    uint16 CMPH:12;                                        /* CMPH[11:0]       */
    uint16 :4;                                             /* Reserved Bits    */
} __type926;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type922 BIT;                                         /* Bit Access       */
} __type2201;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type923 BIT;                                   /* Bit Access       */
} __type2202;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type924 BIT;                                         /* Bit Access       */
} __type2203;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type925 BIT;                                         /* Bit Access       */
} __type2204;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type926 BIT;                                         /* Bit Access       */
} __type2205;

typedef struct 
{                                                          /* Module           */
    __type2201 CLMATEST;                                   /* CLMATEST         */
    const __type2202 CLMATESTS;                            /* CLMATESTS        */
} __type2616;
typedef struct 
{                                                          /* Module           */
    __type2203 CTL0;                                       /* CTL0             */
    uint8  dummy812[7];                                    /* Reserved         */
    __type2204 CMPL;                                       /* CMPL             */
    uint8  dummy813[2];                                    /* Reserved         */
    __type2205 CMPH;                                       /* CMPH             */
    uint8  dummy814[2];                                    /* Reserved         */
    uint8  PCMD;                                           /* PCMD             */
    uint8  dummy815[3];                                    /* Reserved         */
    const __type1747 PS;                                   /* PS               */
    uint8  dummy816[11];                                   /* Reserved         */
} __type2617;

__IOREG(CLMAC, 0xFFF88204, __READ_WRITE, __type2616);                 /* CLMAC */
__IOREG(CLMA0, 0xFFF88400, __READ_WRITE, __type2617);                 /* CLMA0 */
__IOREG(CLMA1, 0xFFF88420, __READ_WRITE, __type2617);                 /* CLMA1 */
__IOREG(CLMA2, 0xFFF88440, __READ_WRITE, __type2617);                 /* CLMA2 */
__IOREG(CLMA3, 0xFFF88460, __READ_WRITE, __type2617);                 /* CLMA3 */
__IOREGARRAY(CLMA, 4, 0xFFF88400, __READ_WRITE, __type2617);          /* CLMA[4] */

#define CLMACCLMATEST CLMAC.CLMATEST.UINT32
#define CLMACRESCLM CLMAC.CLMATEST.BIT.RESCLM
#define CLMACMONCLKMSK CLMAC.CLMATEST.BIT.MONCLKMSK
#define CLMACERRMSK CLMAC.CLMATEST.BIT.ERRMSK
#define CLMACCLMA0TESTEN CLMAC.CLMATEST.BIT.CLMA0TESTEN
#define CLMACCLMA1TESTEN CLMAC.CLMATEST.BIT.CLMA1TESTEN
#define CLMACCLMA2TESTEN CLMAC.CLMATEST.BIT.CLMA2TESTEN
#define CLMACCLMA3TESTEN CLMAC.CLMATEST.BIT.CLMA3TESTEN
#define CLMACCLMATESTS CLMAC.CLMATESTS.UINT32
#define CLMACCLMA0ERRS CLMAC.CLMATESTS.BIT.CLMA0ERRS
#define CLMACCLMA1ERRS CLMAC.CLMATESTS.BIT.CLMA1ERRS
#define CLMACCLMA2ERRS CLMAC.CLMATESTS.BIT.CLMA2ERRS
#define CLMACCLMA3ERRS CLMAC.CLMATESTS.BIT.CLMA3ERRS
#define CLMA0CTL0 CLMA0.CTL0.UINT8
#define CLMA0CLME CLMA0.CTL0.BIT.CLME
#define CLMA0CMPL CLMA0.CMPL.UINT16
#define CLMA0CMPH CLMA0.CMPH.UINT16
#define CLMA0PCMD CLMA0.PCMD
#define CLMA0PS CLMA0.PS.UINT8
#define CLMA0PRERR CLMA0.PS.BIT.PRERR
#define CLMA1CTL0 CLMA1.CTL0.UINT8
#define CLMA1CLME CLMA1.CTL0.BIT.CLME
#define CLMA1CMPL CLMA1.CMPL.UINT16
#define CLMA1CMPH CLMA1.CMPH.UINT16
#define CLMA1PCMD CLMA1.PCMD
#define CLMA1PS CLMA1.PS.UINT8
#define CLMA1PRERR CLMA1.PS.BIT.PRERR
#define CLMA2CTL0 CLMA2.CTL0.UINT8
#define CLMA2CLME CLMA2.CTL0.BIT.CLME
#define CLMA2CMPL CLMA2.CMPL.UINT16
#define CLMA2CMPH CLMA2.CMPH.UINT16
#define CLMA2PCMD CLMA2.PCMD
#define CLMA2PS CLMA2.PS.UINT8
#define CLMA2PRERR CLMA2.PS.BIT.PRERR
#define CLMA3CTL0 CLMA3.CTL0.UINT8
#define CLMA3CLME CLMA3.CTL0.BIT.CLME
#define CLMA3CMPL CLMA3.CMPL.UINT16
#define CLMA3CMPH CLMA3.CMPH.UINT16
#define CLMA3PCMD CLMA3.PCMD
#define CLMA3PS CLMA3.PS.UINT8
#define CLMA3PRERR CLMA3.PS.BIT.PRERR

#endif
