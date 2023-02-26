/**********************************************************************************************************************
* Module File Name  : peg_regs.h
* Module Description: Processor Element Guard Peripheral Registers
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

#ifndef PEG_REGS_H
#define PEG_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  SPEN:1;                                         /* SPEN             */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type950;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :4;                                             /* Reserved Bits    */
    uint32 G0MASK:20;                                      /* G0MASK[31:12]    */
} __type951;
typedef struct 
{                                                          /* Bit Access       */
    uint8  G0EN:1;                                         /* G0EN             */
    uint8  G0RD:1;                                         /* G0RD             */
    uint8  G0WR:1;                                         /* G0WR             */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  G0SP0:1;                                        /* G0SP0            */
    uint8  G0SP1:1;                                        /* G0SP1            */
    uint8  G0SP2:1;                                        /* G0SP2            */
    uint8  G0SP3:1;                                        /* G0SP3            */
    uint8  :4;                                             /* Reserved Bits    */
    uint32 G0BASE:20;                                      /* G0BASE[31:12]    */
} __type952;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :4;                                             /* Reserved Bits    */
    uint32 G1MASK:20;                                      /* G1MASK[31:12]    */
} __type953;
typedef struct 
{                                                          /* Bit Access       */
    uint8  G1EN:1;                                         /* G1EN             */
    uint8  G1RD:1;                                         /* G1RD             */
    uint8  G1WR:1;                                         /* G1WR             */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  G1SP0:1;                                        /* G1SP0            */
    uint8  G1SP1:1;                                        /* G1SP1            */
    uint8  G1SP2:1;                                        /* G1SP2            */
    uint8  G1SP3:1;                                        /* G1SP3            */
    uint8  :4;                                             /* Reserved Bits    */
    uint32 G1BASE:20;                                      /* G1BASE[31:12]    */
} __type954;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :4;                                             /* Reserved Bits    */
    uint32 G2MASK:20;                                      /* G2MASK[31:12]    */
} __type955;
typedef struct 
{                                                          /* Bit Access       */
    uint8  G2EN:1;                                         /* G2EN             */
    uint8  G2RD:1;                                         /* G2RD             */
    uint8  G2WR:1;                                         /* G2WR             */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  G2SP0:1;                                        /* G2SP0            */
    uint8  G2SP1:1;                                        /* G2SP1            */
    uint8  G2SP2:1;                                        /* G2SP2            */
    uint8  G2SP3:1;                                        /* G2SP3            */
    uint8  :4;                                             /* Reserved Bits    */
    uint32 G2BASE:20;                                      /* G2BASE[31:12]    */
} __type956;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :4;                                             /* Reserved Bits    */
    uint32 G3MASK:20;                                      /* G3MASK[31:12]    */
} __type957;
typedef struct 
{                                                          /* Bit Access       */
    uint8  G3EN:1;                                         /* G3EN             */
    uint8  G3RD:1;                                         /* G3RD             */
    uint8  G3WR:1;                                         /* G3WR             */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  G3SP0:1;                                        /* G3SP0            */
    uint8  G3SP1:1;                                        /* G3SP1            */
    uint8  G3SP2:1;                                        /* G3SP2            */
    uint8  G3SP3:1;                                        /* G3SP3            */
    uint8  :4;                                             /* Reserved Bits    */
    uint32 G3BASE:20;                                      /* G3BASE[31:12]    */
} __type958;

typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type950 BIT;                                         /* Bit Access       */
} __type2229;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type951 BIT;                                         /* Bit Access       */
} __type2230;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type952 BIT;                                         /* Bit Access       */
} __type2231;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type953 BIT;                                         /* Bit Access       */
} __type2232;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type954 BIT;                                         /* Bit Access       */
} __type2233;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type955 BIT;                                         /* Bit Access       */
} __type2234;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type956 BIT;                                         /* Bit Access       */
} __type2235;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type957 BIT;                                         /* Bit Access       */
} __type2236;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type958 BIT;                                         /* Bit Access       */
} __type2237;

typedef struct 
{                                                          /* Module           */
    __type2229 SP;                                         /* SP               */
    uint8  dummy822[114];                                  /* Reserved         */
    __type2230 G0MK;                                       /* G0MK             */
    __type2231 G0BA;                                       /* G0BA             */
    uint8  dummy823[8];                                    /* Reserved         */
    __type2232 G1MK;                                       /* G1MK             */
    __type2233 G1BA;                                       /* G1BA             */
    uint8  dummy824[8];                                    /* Reserved         */
    __type2234 G2MK;                                       /* G2MK             */
    __type2235 G2BA;                                       /* G2BA             */
    uint8  dummy825[8];                                    /* Reserved         */
    __type2236 G3MK;                                       /* G3MK             */
    __type2237 G3BA;                                       /* G3BA             */
} __type2620;

__IOREG(PEG, 0xFFFEE60C, __READ_WRITE, __type2620);                   /* PEG */

#define PEGSP PEG.SP.UINT16
#define PEGSPL PEG.SP.UINT8[L]
#define PEGSPH PEG.SP.UINT8[H]
#define PEGSPEN PEG.SP.BIT.SPEN
#define PEGG0MK PEG.G0MK.UINT32
#define PEGG0MKL PEG.G0MK.UINT16[L]
#define PEGG0MKLL PEG.G0MK.UINT8[LL]
#define PEGG0MKLH PEG.G0MK.UINT8[LH]
#define PEGG0MKH PEG.G0MK.UINT16[H]
#define PEGG0MKHL PEG.G0MK.UINT8[HL]
#define PEGG0MKHH PEG.G0MK.UINT8[HH]
#define PEGG0MASK PEG.G0MK.BIT.G0MASK
#define PEGG0BA PEG.G0BA.UINT32
#define PEGG0BAL PEG.G0BA.UINT16[L]
#define PEGG0BALL PEG.G0BA.UINT8[LL]
#define PEGG0BALH PEG.G0BA.UINT8[LH]
#define PEGG0BAH PEG.G0BA.UINT16[H]
#define PEGG0BAHL PEG.G0BA.UINT8[HL]
#define PEGG0BAHH PEG.G0BA.UINT8[HH]
#define PEGG0EN PEG.G0BA.BIT.G0EN
#define PEGG0RD PEG.G0BA.BIT.G0RD
#define PEGG0WR PEG.G0BA.BIT.G0WR
#define PEGG0SP0 PEG.G0BA.BIT.G0SP0
#define PEGG0SP1 PEG.G0BA.BIT.G0SP1
#define PEGG0SP2 PEG.G0BA.BIT.G0SP2
#define PEGG0SP3 PEG.G0BA.BIT.G0SP3
#define PEGG0BASE PEG.G0BA.BIT.G0BASE
#define PEGG1MK PEG.G1MK.UINT32
#define PEGG1MKL PEG.G1MK.UINT16[L]
#define PEGG1MKLL PEG.G1MK.UINT8[LL]
#define PEGG1MKLH PEG.G1MK.UINT8[LH]
#define PEGG1MKH PEG.G1MK.UINT16[H]
#define PEGG1MKHL PEG.G1MK.UINT8[HL]
#define PEGG1MKHH PEG.G1MK.UINT8[HH]
#define PEGG1MASK PEG.G1MK.BIT.G1MASK
#define PEGG1BA PEG.G1BA.UINT32
#define PEGG1BAL PEG.G1BA.UINT16[L]
#define PEGG1BALL PEG.G1BA.UINT8[LL]
#define PEGG1BALH PEG.G1BA.UINT8[LH]
#define PEGG1BAH PEG.G1BA.UINT16[H]
#define PEGG1BAHL PEG.G1BA.UINT8[HL]
#define PEGG1BAHH PEG.G1BA.UINT8[HH]
#define PEGG1EN PEG.G1BA.BIT.G1EN
#define PEGG1RD PEG.G1BA.BIT.G1RD
#define PEGG1WR PEG.G1BA.BIT.G1WR
#define PEGG1SP0 PEG.G1BA.BIT.G1SP0
#define PEGG1SP1 PEG.G1BA.BIT.G1SP1
#define PEGG1SP2 PEG.G1BA.BIT.G1SP2
#define PEGG1SP3 PEG.G1BA.BIT.G1SP3
#define PEGG1BASE PEG.G1BA.BIT.G1BASE
#define PEGG2MK PEG.G2MK.UINT32
#define PEGG2MKL PEG.G2MK.UINT16[L]
#define PEGG2MKLL PEG.G2MK.UINT8[LL]
#define PEGG2MKLH PEG.G2MK.UINT8[LH]
#define PEGG2MKH PEG.G2MK.UINT16[H]
#define PEGG2MKHL PEG.G2MK.UINT8[HL]
#define PEGG2MKHH PEG.G2MK.UINT8[HH]
#define PEGG2MASK PEG.G2MK.BIT.G2MASK
#define PEGG2BA PEG.G2BA.UINT32
#define PEGG2BAL PEG.G2BA.UINT16[L]
#define PEGG2BALL PEG.G2BA.UINT8[LL]
#define PEGG2BALH PEG.G2BA.UINT8[LH]
#define PEGG2BAH PEG.G2BA.UINT16[H]
#define PEGG2BAHL PEG.G2BA.UINT8[HL]
#define PEGG2BAHH PEG.G2BA.UINT8[HH]
#define PEGG2EN PEG.G2BA.BIT.G2EN
#define PEGG2RD PEG.G2BA.BIT.G2RD
#define PEGG2WR PEG.G2BA.BIT.G2WR
#define PEGG2SP0 PEG.G2BA.BIT.G2SP0
#define PEGG2SP1 PEG.G2BA.BIT.G2SP1
#define PEGG2SP2 PEG.G2BA.BIT.G2SP2
#define PEGG2SP3 PEG.G2BA.BIT.G2SP3
#define PEGG2BASE PEG.G2BA.BIT.G2BASE
#define PEGG3MK PEG.G3MK.UINT32
#define PEGG3MKL PEG.G3MK.UINT16[L]
#define PEGG3MKLL PEG.G3MK.UINT8[LL]
#define PEGG3MKLH PEG.G3MK.UINT8[LH]
#define PEGG3MKH PEG.G3MK.UINT16[H]
#define PEGG3MKHL PEG.G3MK.UINT8[HL]
#define PEGG3MKHH PEG.G3MK.UINT8[HH]
#define PEGG3MASK PEG.G3MK.BIT.G3MASK
#define PEGG3BA PEG.G3BA.UINT32
#define PEGG3BAL PEG.G3BA.UINT16[L]
#define PEGG3BALL PEG.G3BA.UINT8[LL]
#define PEGG3BALH PEG.G3BA.UINT8[LH]
#define PEGG3BAH PEG.G3BA.UINT16[H]
#define PEGG3BAHL PEG.G3BA.UINT8[HL]
#define PEGG3BAHH PEG.G3BA.UINT8[HH]
#define PEGG3EN PEG.G3BA.BIT.G3EN
#define PEGG3RD PEG.G3BA.BIT.G3RD
#define PEGG3WR PEG.G3BA.BIT.G3WR
#define PEGG3SP0 PEG.G3BA.BIT.G3SP0
#define PEGG3SP1 PEG.G3BA.BIT.G3SP1
#define PEGG3SP2 PEG.G3BA.BIT.G3SP2
#define PEGG3SP3 PEG.G3BA.BIT.G3SP3
#define PEGG3BASE PEG.G3BA.BIT.G3BASE

#endif
