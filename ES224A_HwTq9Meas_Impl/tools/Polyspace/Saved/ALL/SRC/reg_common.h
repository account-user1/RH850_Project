/**********************************************************************************************************************
* Module File Name  : reg_common.h
* Module Description: Common defines for register headers
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          4 %
* %derived_by:       mzjphh %
*----------------------------------------------------------------------------
* Date      Rev      Author         Change Description
* -------   -------  --------  ----------------------------------------------
* 12/16/14  1        LWW       Initial version derived from dr7f701311.dvf.h v1 in tools directory
* 06/09/15  2        KMC       Added typedefs missing from initial file, common to csig and csih -- new content copied 
*                              from dr7f701311.dvf.h v1 in tools directory
* 06/17/15  3        MS        Added typedefs missing from initial file, common to csig and csih -- new content copied 
*                              from dr7f701311.dvf.h v1 in tools directory
* 09/15/15  4        NJS       Updated typedef numbers to match dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef REG_COMMON_H
#define REG_COMMON_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"

#ifndef _GHS_PRAGMA_IO_TYPEDEF_
#define _GHS_PRAGMA_IO_TYPEDEF_
#define REGPRAGMA(x) _Pragma(#x)
#define __READ volatile const
#define __WRITE volatile
#define __READ_WRITE volatile
#define __IOREG(reg, addr, attrib, type) REGPRAGMA(ghs io reg addr) \
extern attrib type reg
#define __IOREGARRAY(reg, array, addr, attrib, type) REGPRAGMA(ghs io reg addr) \
extern attrib type reg[array]
#endif

typedef struct
{
    uint8 bit00:1;
    uint8 bit01:1;
    uint8 bit02:1;
    uint8 bit03:1;
    uint8 bit04:1;
    uint8 bit05:1;
    uint8 bit06:1;
    uint8 bit07:1;
} __bitf_T;

#define  L 0
#define  H 1
#define LL 0
#define LH 1
#define HL 2
#define HH 3

typedef struct 
{                                                          /* Bit Access       */
    const uint8  PRERR:1;                                  /* PRERR            */
    uint8  :7;                                             /* Reserved Bits    */
} __type468;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TE:1;                                     /* TE               */
    uint8  :7;                                             /* Reserved Bits    */
} __type538;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TS:1;                                           /* TS               */
    uint8  :7;                                             /* Reserved Bits    */
} __type539;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TT:1;                                           /* TT               */
    uint8  :7;                                             /* Reserved Bits    */
} __type540;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MD0:1;                                          /* MD0              */
    uint8  MD1:1;                                          /* MD1              */
    uint8  :6;                                             /* Reserved Bits    */
} __type541;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TX:16;                                          /* TX[15:0]         */
} __type552;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 RX:16;                                    /* RX[15:0]         */
} __type554;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TIS:2;                                          /* TIS[1:0]         */
    uint8  :6;                                             /* Reserved Bits    */
} __type721;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CLOV:1;                                         /* CLOV             */
    uint8  :7;                                             /* Reserved Bits    */
} __type723;
typedef struct 
{                                                          /* Bit Access       */
    uint16 MD:5;                                           /* MD[4:0]          */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 COS:2;                                          /* COS[7:6]         */
    uint16 STS:3;                                          /* STS[10:8]        */
    uint16 MAS:1;                                          /* MAS              */
    uint16 CCS:2;                                          /* CCS[13:12]       */
    uint16 CKS:2;                                          /* CKS[15:14]       */
} __type727;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PRS0:4;                                         /* PRS0[3:0]        */
    uint16 PRS1:4;                                         /* PRS1[7:4]        */
    uint16 PRS2:4;                                         /* PRS2[11:8]       */
    uint16 PRS3:4;                                         /* PRS3[15:12]      */
} __type728;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type468 BIT;                                   /* Bit Access       */
} __type1747;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type538 BIT;                                   /* Bit Access       */
} __type1817;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type539 BIT;                                         /* Bit Access       */
} __type1818;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type540 BIT;                                         /* Bit Access       */
} __type1819;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type541 BIT;                                         /* Bit Access       */
} __type1820;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type552 BIT;                                         /* Bit Access       */
} __type1831;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type554 BIT;                                   /* Bit Access       */
} __type1833;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type721 BIT;                                         /* Bit Access       */
} __type2000;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type723 BIT;                                         /* Bit Access       */
} __type2002;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type727 BIT;                                         /* Bit Access       */
} __type2006;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type728 BIT;                                         /* Bit Access       */
} __type2007;
#endif
