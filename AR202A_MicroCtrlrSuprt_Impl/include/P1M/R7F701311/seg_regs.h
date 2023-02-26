/**********************************************************************************************************************
* Module File Name  : seg_regs.h
* Module Description: System Error Notification Function Peripheral Registers
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

#ifndef SEG_REGS_H
#define SEG_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint16 :2;                                             /* Reserved Bits    */
    uint16 ICCE:1;                                         /* ICCE             */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 VCIE:1;                                         /* VCIE             */
    uint16 ROME:1;                                         /* ROME             */
    uint16 TCME:1;                                         /* TCME             */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 VCRE:1;                                         /* VCRE             */
    uint16 VPGE:1;                                         /* VPGE             */
    uint16 :6;                                             /* Reserved Bits    */
} __type959;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :2;                                             /* Reserved Bits    */
    uint16 ICCF:1;                                         /* ICCF             */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 VCIF:1;                                         /* VCIF             */
    uint16 ROMF:1;                                         /* ROMF             */
    uint16 TCMF:1;                                         /* TCMF             */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 VCRF:1;                                         /* VCRF             */
    uint16 VPGF:1;                                         /* VPGF             */
    uint16 :6;                                             /* Reserved Bits    */
} __type960;

typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type959 BIT;                                         /* Bit Access       */
} __type2238;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type960 BIT;                                         /* Bit Access       */
} __type2239;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
} __type2240;

typedef struct 
{                                                          /* Module           */
    __type2238 CONT;                                       /* CONT             */
    __type2239 FLAG;                                       /* FLAG             */
    uint8  dummy826[4];                                    /* Reserved         */
    __type2240 ADDR;                                       /* ADDR             */
} __type2621;

__IOREG(SEG, 0xFFFEE980, __READ_WRITE, __type2621);                   /* SEG */

#define SEGCONT SEG.CONT.UINT16
#define SEGICCE SEG.CONT.BIT.ICCE
#define SEGVCIE SEG.CONT.BIT.VCIE
#define SEGROME SEG.CONT.BIT.ROME
#define SEGTCME SEG.CONT.BIT.TCME
#define SEGVCRE SEG.CONT.BIT.VCRE
#define SEGVPGE SEG.CONT.BIT.VPGE
#define SEGFLAG SEG.FLAG.UINT16
#define SEGICCF SEG.FLAG.BIT.ICCF
#define SEGVCIF SEG.FLAG.BIT.VCIF
#define SEGROMF SEG.FLAG.BIT.ROMF
#define SEGTCMF SEG.FLAG.BIT.TCMF
#define SEGVCRF SEG.FLAG.BIT.VCRF
#define SEGVPGF SEG.FLAG.BIT.VPGF
#define SEGADDR SEG.ADDR.UINT32
#define SEGADDRL SEG.ADDR.UINT16[L]
#define SEGADDRH SEG.ADDR.UINT16[H]

#endif
