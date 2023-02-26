/**********************************************************************************************************************
* Module File Name  : sys_regs.h
* Module Description: System Peripheral Registers
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

#ifndef SYS_REGS_H
#define SYS_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    const uint32 NMIFEIF:1;                                /* NMIFEIF          */
    const uint32 INTOSTM3FEIF:1;                           /* INTOSTM3FEIF     */
    const uint32 INTOSTM4FEIF:1;                           /* INTOSTM4FEIF     */
    const uint32 INTOSTM5FEIF:1;                           /* INTOSTM5FEIF     */
    const uint32 INTOSTM6FEIF:1;                           /* INTOSTM6FEIF     */
    const uint32 INTOSTM7FEIF:1;                           /* INTOSTM7FEIF     */
    uint32 :26;                                            /* Reserved Bits    */
} __type477;
typedef struct 
{                                                          /* Bit Access       */
    uint32 NMIFEIFC:1;                                     /* NMIFEIFC         */
    uint32 OSTM3FEIFC:1;                                   /* OSTM3FEIFC       */
    uint32 OSTM4FEIFC:1;                                   /* OSTM4FEIFC       */
    uint32 OSTM5FEIFC:1;                                   /* OSTM5FEIFC       */
    uint32 OSTM6FEIFC:1;                                   /* OSTM6FEIFC       */
    uint32 OSTM7FEIFC:1;                                   /* OSTM7FEIFC       */
    uint32 :26;                                            /* Reserved Bits    */
} __type478;
typedef struct 
{                                                          /* Bit Access       */
    uint32 LBISTREF1:20;                                   /* LBISTREF1[19:0]  */
    uint32 :12;                                            /* Reserved Bits    */
} __type479;
typedef struct 
{                                                          /* Bit Access       */
    uint32 LBISTREF2:20;                                   /* LBISTREF2[19:0]  */
    uint32 :12;                                            /* Reserved Bits    */
} __type480;
typedef struct 
{                                                          /* Bit Access       */
    uint32 MBISTREF:20;                                    /* MBISTREF[19:0]   */
    uint32 :12;                                            /* Reserved Bits    */
} __type481;
typedef struct 
{                                                          /* Bit Access       */
    uint32 LBISTSIG1:20;                                   /* LBISTSIG1[19:0]  */
    uint32 :12;                                            /* Reserved Bits    */
} __type482;
typedef struct 
{                                                          /* Bit Access       */
    uint32 LBISTSIG2:20;                                   /* LBISTSIG2[19:0]  */
    uint32 :12;                                            /* Reserved Bits    */
} __type483;
typedef struct 
{                                                          /* Bit Access       */
    uint32 MBISTSIG:20;                                    /* MBISTSIG[19:0]   */
    uint32 :12;                                            /* Reserved Bits    */
} __type484;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 BIST_RESULT:3;                            /* BIST_RESULT[2:0] */
    const uint32 DEBUGMODE:1;                              /* DEBUGMODE        */
    uint32 :28;                                            /* Reserved Bits    */
} __type485;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 BIST_RESULTB:3;                           /* BIST_RESULTB[2:0] */
    const uint32 DEBUGMODEB:1;                             /* DEBUGMODEB       */
    uint32 :28;                                            /* Reserved Bits    */
} __type486;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RESF0:1;                                  /* RESF0            */
    const uint32 RESF1:1;                                  /* RESF1            */
    const uint32 RESF2:1;                                  /* RESF2            */
    uint32 :29;                                            /* Reserved Bits    */
} __type487;
typedef struct 
{                                                          /* Bit Access       */
    uint32 RESFC0:1;                                       /* RESFC0           */
    uint32 RESFC1:1;                                       /* RESFC1           */
    uint32 RESFC2:1;                                       /* RESFC2           */
    uint32 :29;                                            /* Reserved Bits    */
} __type488;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  CVMLVFF:1;                                /* CVMLVFF          */
    const uint8  CVMHVFF:1;                                /* CVMHVFF          */
    uint8  :5;                                             /* Reserved Bits    */
    const uint8  CVMOFLG:1;                                /* CVMOFLG          */
} __type489;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  CVMDIAGME:1;                              /* CVMDIAGME        */
    const uint8  CVMFLTEN:1;                               /* CVMFLTEN         */
    const uint8  CVMFBISTME:1;                             /* CVMFBISTME       */
    uint8  :3;                                             /* Reserved Bits    */
} __type490;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CVMCRMD:1;                                      /* CVMCRMD          */
    uint8  :7;                                             /* Reserved Bits    */
} __type491;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  CVMDIAGL:1;                                     /* CVMDIAGL         */
    uint8  CVMDIAGH:1;                                     /* CVMDIAGH         */
    uint8  :4;                                             /* Reserved Bits    */
} __type492;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  CVMOUT:1;                                 /* CVMOUT           */
    uint8  :7;                                             /* Reserved Bits    */
} __type493;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CVMLVFFC:1;                                     /* CVMLVFFC         */
    uint8  CVMHVFFC:1;                                     /* CVMHVFFC         */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  CVMOFLGC:1;                                     /* CVMOFLGC         */
} __type494;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  CVMFBISTMEW:1;                                  /* CVMFBISTMEW      */
    uint8  CVMDIAGMEW:1;                                   /* CVMDIAGMEW       */
    uint8  CVMFLTENW:1;                                    /* CVMFLTENW        */
    uint8  :3;                                             /* Reserved Bits    */
} __type495;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CVMCIRREN:2;                                    /* CVMCIRREN[1:0]   */
    uint32 :30;                                            /* Reserved Bits    */
} __type496;
typedef struct 
{                                                          /* Bit Access       */
    uint32 LVICNT:2;                                       /* LVICNT[1:0]      */
    uint32 LVIRESMK:1;                                     /* LVIRESMK         */
    uint32 :29;                                            /* Reserved Bits    */
} __type497;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PCMD:8;                                         /* PCMD[7:0]        */
    uint32 :24;                                            /* Reserved Bits    */
} __type498;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 PROTERR:1;                                /* PROTERR          */
    uint32 :31;                                            /* Reserved Bits    */
} __type499;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKCS:2;                                         /* CKCS[2:1]        */
    uint32 :29;                                            /* Reserved Bits    */
} __type500;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT:1;                                 /* CLKACT           */
    const uint32 CLKSEL:2;                                 /* CLKSEL[2:1]      */
    uint32 :29;                                            /* Reserved Bits    */
} __type501;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC100:2;                                      /* CKSC100[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type502;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT100:1;                              /* CLKACT100        */
    const uint32 CLKSEL100:2;                              /* CLKSEL100[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type503;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC101:2;                                      /* CKSC101[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type504;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT101:1;                              /* CLKACT101        */
    const uint32 CLKSEL101:2;                              /* CLKSEL101[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type505;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC106:2;                                      /* CKSC106[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type506;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT106:1;                              /* CLKACT106        */
    const uint32 CLKSEL106:2;                              /* CLKSEL106[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type507;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC107:2;                                      /* CKSC107[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type508;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT107:1;                              /* CLKACT107        */
    const uint32 CLKSEL107:2;                              /* CLKSEL107[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type509;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC108:2;                                      /* CKSC108[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type510;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT108:1;                              /* CLKACT108        */
    const uint32 CLKSEL108:2;                              /* CLKSEL108[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type511;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC109:2;                                      /* CKSC109[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type512;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT109:1;                              /* CLKACT109        */
    const uint32 CLKSEL109:2;                              /* CLKSEL109[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type513;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC110:2;                                      /* CKSC110[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type514;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT110:1;                              /* CLKACT110        */
    const uint32 CLKSEL110:2;                              /* CLKSEL110[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type515;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC112:2;                                      /* CKSC112[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type516;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT112:1;                              /* CLKACT112        */
    const uint32 CLKSEL112:2;                              /* CLKSEL112[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type517;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC113:2;                                      /* CKSC113[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type518;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT113:1;                              /* CLKACT113        */
    const uint32 CLKSEL113:2;                              /* CLKSEL113[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type519;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC114:2;                                      /* CKSC114[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type520;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT114:1;                              /* CLKACT114        */
    const uint32 CLKSEL114:2;                              /* CLKSEL114[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type521;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC104:2;                                      /* CKSC104[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type522;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT104:1;                              /* CLKACT104        */
    const uint32 CLKSEL104:2;                              /* CLKSEL104[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type523;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC105:2;                                      /* CKSC105[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type524;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT105:1;                              /* CLKACT105        */
    const uint32 CLKSEL105:2;                              /* CLKSEL105[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type525;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CKSC102:2;                                      /* CKSC102[2:1]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type526;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKACT102:1;                              /* CLKACT102        */
    const uint32 CLKSEL102:2;                              /* CLKSEL102[2:1]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type527;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CLKD0DIV:9;                                     /* CLKD0DIV[8:0]    */
    uint32 :23;                                            /* Reserved Bits    */
} __type528;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKD0SYNC:1;                              /* CLKD0SYNC        */
    const uint32 CLKD0CLKACT:1;                            /* CLKD0CLKACT      */
    uint32 :30;                                            /* Reserved Bits    */
} __type529;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CLKD1DIV:9;                                     /* CLKD1DIV[8:0]    */
    uint32 :23;                                            /* Reserved Bits    */
} __type530;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CLKD1SYNC:1;                              /* CLKD1SYNC        */
    const uint32 CLKD1CLKACT:1;                            /* CLKD1CLKACT      */
    uint32 :30;                                            /* Reserved Bits    */
} __type531;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 ADCKCS:2;                                       /* ADCKCS[2:1]      */
    uint32 :29;                                            /* Reserved Bits    */
} __type532;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 ADCLKACT:1;                               /* ADCLKACT         */
    const uint32 ADCKCSEL:2;                               /* ADCKCSEL[2:1]    */
    uint32 :29;                                            /* Reserved Bits    */
} __type533;
typedef struct 
{                                                          /* Bit Access       */
    uint32 HWBISTEXE:1;                                    /* HWBISTEXE        */
    uint32 :31;                                            /* Reserved Bits    */
} __type534;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 POF:1;                                    /* POF              */
    uint32 :31;                                            /* Reserved Bits    */
} __type535;
typedef struct 
{                                                          /* Bit Access       */
    uint32 POFC:1;                                         /* POFC             */
    uint32 :31;                                            /* Reserved Bits    */
} __type536;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SWRESA:1;                                       /* SWRESA           */
    uint32 :31;                                            /* Reserved Bits    */
} __type537;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type477 BIT;                                   /* Bit Access       */
} __type1756;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type478 BIT;                                         /* Bit Access       */
} __type1757;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type479 BIT;                                         /* Bit Access       */
} __type1758;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type480 BIT;                                         /* Bit Access       */
} __type1759;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type481 BIT;                                         /* Bit Access       */
} __type1760;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type482 BIT;                                         /* Bit Access       */
} __type1761;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type483 BIT;                                         /* Bit Access       */
} __type1762;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type484 BIT;                                         /* Bit Access       */
} __type1763;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type485 BIT;                                   /* Bit Access       */
} __type1764;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type486 BIT;                                   /* Bit Access       */
} __type1765;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type487 BIT;                                   /* Bit Access       */
} __type1766;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type488 BIT;                                         /* Bit Access       */
} __type1767;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type489 BIT;                                   /* Bit Access       */
} __type1768;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type490 BIT;                                   /* Bit Access       */
} __type1769;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type491 BIT;                                         /* Bit Access       */
} __type1770;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type492 BIT;                                         /* Bit Access       */
} __type1771;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type493 BIT;                                   /* Bit Access       */
} __type1772;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type494 BIT;                                         /* Bit Access       */
} __type1773;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type495 BIT;                                         /* Bit Access       */
} __type1774;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type496 BIT;                                         /* Bit Access       */
} __type1775;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type497 BIT;                                         /* Bit Access       */
} __type1776;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type498 BIT;                                         /* Bit Access       */
} __type1777;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type499 BIT;                                   /* Bit Access       */
} __type1778;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type500 BIT;                                         /* Bit Access       */
} __type1779;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type501 BIT;                                   /* Bit Access       */
} __type1780;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type502 BIT;                                         /* Bit Access       */
} __type1781;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type503 BIT;                                   /* Bit Access       */
} __type1782;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type504 BIT;                                         /* Bit Access       */
} __type1783;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type505 BIT;                                   /* Bit Access       */
} __type1784;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type506 BIT;                                         /* Bit Access       */
} __type1785;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type507 BIT;                                   /* Bit Access       */
} __type1786;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type508 BIT;                                         /* Bit Access       */
} __type1787;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type509 BIT;                                   /* Bit Access       */
} __type1788;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type510 BIT;                                         /* Bit Access       */
} __type1789;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type511 BIT;                                   /* Bit Access       */
} __type1790;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type512 BIT;                                         /* Bit Access       */
} __type1791;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type513 BIT;                                   /* Bit Access       */
} __type1792;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type514 BIT;                                         /* Bit Access       */
} __type1793;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type515 BIT;                                   /* Bit Access       */
} __type1794;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type516 BIT;                                         /* Bit Access       */
} __type1795;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type517 BIT;                                   /* Bit Access       */
} __type1796;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type518 BIT;                                         /* Bit Access       */
} __type1797;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type519 BIT;                                   /* Bit Access       */
} __type1798;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type520 BIT;                                         /* Bit Access       */
} __type1799;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type521 BIT;                                   /* Bit Access       */
} __type1800;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type522 BIT;                                         /* Bit Access       */
} __type1801;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type523 BIT;                                   /* Bit Access       */
} __type1802;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type524 BIT;                                         /* Bit Access       */
} __type1803;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type525 BIT;                                   /* Bit Access       */
} __type1804;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type526 BIT;                                         /* Bit Access       */
} __type1805;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type527 BIT;                                   /* Bit Access       */
} __type1806;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type528 BIT;                                         /* Bit Access       */
} __type1807;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type529 BIT;                                   /* Bit Access       */
} __type1808;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type530 BIT;                                         /* Bit Access       */
} __type1809;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type531 BIT;                                   /* Bit Access       */
} __type1810;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type532 BIT;                                         /* Bit Access       */
} __type1811;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type533 BIT;                                   /* Bit Access       */
} __type1812;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type534 BIT;                                         /* Bit Access       */
} __type1813;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type535 BIT;                                   /* Bit Access       */
} __type1814;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type536 BIT;                                         /* Bit Access       */
} __type1815;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type537 BIT;                                         /* Bit Access       */
} __type1816;

typedef struct 
{                                                          /* Module           */
    const __type1756 FEINTF;                               /* FEINTF           */
    uint8  dummy271[4];                                    /* Reserved         */
    __type1757 FEINTFC;                                    /* FEINTFC          */
    uint8  dummy272[8180];                                 /* Reserved         */
    __type1758 LBISTREF1;                                  /* LBISTREF1        */
    __type1759 LBISTREF2;                                  /* LBISTREF2        */
    __type1760 MBISTREF;                                   /* MBISTREF         */
    __type1761 LBISTSIG1;                                  /* LBISTSIG1        */
    __type1762 LBISTSIG2;                                  /* LBISTSIG2        */
    __type1763 MBISTSIG;                                   /* MBISTSIG         */
    uint8  dummy273[8];                                    /* Reserved         */
    const __type1764 BSEQ0ST;                              /* BSEQ0ST          */
    const __type1765 BSEQ0STB;                             /* BSEQ0STB         */
    uint8  dummy274[2201560];                              /* Reserved         */
    const __type1766 RESF;                                 /* RESF             */
    uint8  dummy275[4];                                    /* Reserved         */
    __type1767 RESFC;                                      /* RESFC            */
    uint8  dummy276[20];                                   /* Reserved         */
    const __type1768 CVMF;                                 /* CVMF             */
    uint8  dummy277[3];                                    /* Reserved         */
    const __type1769 CVMDE;                                /* CVMDE            */
    uint8  dummy278[7];                                    /* Reserved         */
    __type1770 CVMDMASK;                                   /* CVMDMASK         */
    uint8  dummy279[3];                                    /* Reserved         */
    __type1771 CVMDIAG;                                    /* CVMDIAG          */
    uint8  dummy280[3];                                    /* Reserved         */
    const __type1772 CVMMON;                               /* CVMMON           */
    uint8  dummy281[3];                                    /* Reserved         */
    __type1773 CVMFC;                                      /* CVMFC            */
    uint8  dummy282[3];                                    /* Reserved         */
    __type1774 CVMDEW;                                     /* CVMDEW           */
    uint8  dummy283[3];                                    /* Reserved         */
    __type1775 CVMREN;                                     /* CVMREN           */
    uint8  dummy284[956];                                  /* Reserved         */
    __type1776 LVICNT;                                     /* LVICNT           */
    uint8  dummy285[1036];                                 /* Reserved         */
    __type1777 PROTCMDCVM;                                 /* PROTCMDCVM       */
    const __type1778 PROTSCVM;                             /* PROTSCVM         */
    uint8  dummy286[24680];                                /* Reserved         */
    __type1779 CKSC0CTL;                                   /* CKSC0CTL         */
    const __type1780 CSC0STAT;                             /* CSC0STAT         */
    uint8  dummy287[56];                                   /* Reserved         */
    __type1779 CKSC1CTL;                                   /* CKSC1CTL         */
    const __type1780 CSC1STAT;                             /* CSC1STAT         */
    uint8  dummy288[56];                                   /* Reserved         */
    __type1781 DNFCKS100C;                                 /* DNFCKS100C       */
    const __type1782 DNFCSC100STAT;                        /* DNFCSC100STAT    */
    __type1783 DNFCKS101C;                                 /* DNFCKS101C       */
    const __type1784 DNFCSC101STAT;                        /* DNFCSC101STAT    */
    __type1785 DNFCKS106C;                                 /* DNFCKS106C       */
    const __type1786 DNFCSC106STAT;                        /* DNFCSC106STAT    */
    __type1787 DNFCKS107C;                                 /* DNFCKS107C       */
    const __type1788 DNFCSC107STAT;                        /* DNFCSC107STAT    */
    __type1789 DNFCKS108C;                                 /* DNFCKS108C       */
    const __type1790 DNFCSC108STAT;                        /* DNFCSC108STAT    */
    __type1791 DNFCKS109C;                                 /* DNFCKS109C       */
    const __type1792 DNFCSC109STAT;                        /* DNFCSC109STAT    */
    __type1793 DNFCKS110C;                                 /* DNFCKS110C       */
    const __type1794 DNFCSC110STAT;                        /* DNFCSC110STAT    */
    __type1795 DNFCKS112C;                                 /* DNFCKS112C       */
    const __type1796 DNFCSC112STAT;                        /* DNFCSC112STAT    */
    __type1797 DNFCKS113C;                                 /* DNFCKS113C       */
    const __type1798 DNFCSC113STAT;                        /* DNFCSC113STAT    */
    __type1799 DNFCKS114C;                                 /* DNFCKS114C       */
    const __type1800 DNFCSC114STAT;                        /* DNFCSC114STAT    */
    __type1801 DNFCKS104C;                                 /* DNFCKS104C       */
    const __type1802 DNFCSC104STAT;                        /* DNFCSC104STAT    */
    __type1803 DNFCKS105C;                                 /* DNFCKS105C       */
    const __type1804 DNFCSC105STAT;                        /* DNFCSC105STAT    */
    __type1805 DNFCKS102C;                                 /* DNFCKS102C       */
    const __type1806 DNFCSC102STAT;                        /* DNFCSC102STAT    */
    uint8  dummy289[24];                                   /* Reserved         */
    __type1807 CLKD0DIV;                                   /* CLKD0DIV         */
    const __type1808 CLKD0STAT;                            /* CLKD0STAT        */
    __type1809 CLKD1DIV;                                   /* CLKD1DIV         */
    const __type1810 CLKD1STAT;                            /* CLKD1STAT        */
    uint8  dummy290[112];                                  /* Reserved         */
    __type1811 ADCKSC0CTL;                                 /* ADCKSC0CTL       */
    const __type1812 ADCSC0STAT;                           /* ADCSC0STAT       */
    uint8  dummy291[4664];                                 /* Reserved         */
    __type1813 BSEQ0CTL;                                   /* BSEQ0CTL         */
    uint8  dummy292[1996];                                 /* Reserved         */
    const __type1814 POF;                                  /* POF              */
    __type1815 POFC;                                       /* POFC             */
    __type1816 SWRESA;                                     /* SWRESA           */
    uint8  dummy293[996];                                  /* Reserved         */
    __type1777 PROT1PHCMD;                                 /* PROT1PHCMD       */
    const __type1778 PROT1PS;                              /* PROT1PS          */
} __type2591;

__IOREG(SYS, 0xFFD67000, __READ_WRITE, __type2591);                   /* SYS */

#define SYSFEINTF SYS.FEINTF.UINT32
#define SYSNMIFEIF SYS.FEINTF.BIT.NMIFEIF
#define SYSINTOSTM3FEIF SYS.FEINTF.BIT.INTOSTM3FEIF
#define SYSINTOSTM4FEIF SYS.FEINTF.BIT.INTOSTM4FEIF
#define SYSINTOSTM5FEIF SYS.FEINTF.BIT.INTOSTM5FEIF
#define SYSINTOSTM6FEIF SYS.FEINTF.BIT.INTOSTM6FEIF
#define SYSINTOSTM7FEIF SYS.FEINTF.BIT.INTOSTM7FEIF
#define SYSFEINTFC SYS.FEINTFC.UINT32
#define SYSNMIFEIFC SYS.FEINTFC.BIT.NMIFEIFC
#define SYSOSTM3FEIFC SYS.FEINTFC.BIT.OSTM3FEIFC
#define SYSOSTM4FEIFC SYS.FEINTFC.BIT.OSTM4FEIFC
#define SYSOSTM5FEIFC SYS.FEINTFC.BIT.OSTM5FEIFC
#define SYSOSTM6FEIFC SYS.FEINTFC.BIT.OSTM6FEIFC
#define SYSOSTM7FEIFC SYS.FEINTFC.BIT.OSTM7FEIFC
#define SYSLBISTREF1 SYS.LBISTREF1.UINT32
#define SYSLBISTREF2 SYS.LBISTREF2.UINT32
#define SYSMBISTREF SYS.MBISTREF.UINT32
#define SYSLBISTSIG1 SYS.LBISTSIG1.UINT32
#define SYSLBISTSIG2 SYS.LBISTSIG2.UINT32
#define SYSMBISTSIG SYS.MBISTSIG.UINT32
#define SYSBSEQ0ST SYS.BSEQ0ST.UINT32
#define SYSBIST_RESULT SYS.BSEQ0ST.BIT.BIST_RESULT
#define SYSDEBUGMODE SYS.BSEQ0ST.BIT.DEBUGMODE
#define SYSBSEQ0STB SYS.BSEQ0STB.UINT32
#define SYSBIST_RESULTB SYS.BSEQ0STB.BIT.BIST_RESULTB
#define SYSDEBUGMODEB SYS.BSEQ0STB.BIT.DEBUGMODEB
#define SYSRESF SYS.RESF.UINT32
#define SYSRESF0 SYS.RESF.BIT.RESF0
#define SYSRESF1 SYS.RESF.BIT.RESF1
#define SYSRESF2 SYS.RESF.BIT.RESF2
#define SYSRESFC SYS.RESFC.UINT32
#define SYSRESFC0 SYS.RESFC.BIT.RESFC0
#define SYSRESFC1 SYS.RESFC.BIT.RESFC1
#define SYSRESFC2 SYS.RESFC.BIT.RESFC2
#define SYSCVMF SYS.CVMF.UINT8
#define SYSCVMLVFF SYS.CVMF.BIT.CVMLVFF
#define SYSCVMHVFF SYS.CVMF.BIT.CVMHVFF
#define SYSCVMOFLG SYS.CVMF.BIT.CVMOFLG
#define SYSCVMDE SYS.CVMDE.UINT8
#define SYSCVMDIAGME SYS.CVMDE.BIT.CVMDIAGME
#define SYSCVMFLTEN SYS.CVMDE.BIT.CVMFLTEN
#define SYSCVMFBISTME SYS.CVMDE.BIT.CVMFBISTME
#define SYSCVMDMASK SYS.CVMDMASK.UINT8
#define SYSCVMCRMD SYS.CVMDMASK.BIT.CVMCRMD
#define SYSCVMDIAG SYS.CVMDIAG.UINT8
#define SYSCVMDIAGL SYS.CVMDIAG.BIT.CVMDIAGL
#define SYSCVMDIAGH SYS.CVMDIAG.BIT.CVMDIAGH
#define SYSCVMMON SYS.CVMMON.UINT8
#define SYSCVMOUT SYS.CVMMON.BIT.CVMOUT
#define SYSCVMFC SYS.CVMFC.UINT8
#define SYSCVMLVFFC SYS.CVMFC.BIT.CVMLVFFC
#define SYSCVMHVFFC SYS.CVMFC.BIT.CVMHVFFC
#define SYSCVMOFLGC SYS.CVMFC.BIT.CVMOFLGC
#define SYSCVMDEW SYS.CVMDEW.UINT8
#define SYSCVMFBISTMEW SYS.CVMDEW.BIT.CVMFBISTMEW
#define SYSCVMDIAGMEW SYS.CVMDEW.BIT.CVMDIAGMEW
#define SYSCVMFLTENW SYS.CVMDEW.BIT.CVMFLTENW
#define SYSCVMREN SYS.CVMREN.UINT32
#define SYSCVMCIRREN SYS.CVMREN.BIT.CVMCIRREN
#define SYSLVICNT SYS.LVICNT.UINT32
#define SYSLVIRESMK SYS.LVICNT.BIT.LVIRESMK
#define SYSPROTCMDCVM SYS.PROTCMDCVM.UINT32
#define SYSPCMD SYS.PROTCMDCVM.BIT.PCMD
#define SYSPROTSCVM SYS.PROTSCVM.UINT32
#define SYSPROTERR SYS.PROTSCVM.BIT.PROTERR
#define SYSCKSC0CTL SYS.CKSC0CTL.UINT32
#define SYSCKCS SYS.CKSC0CTL.BIT.CKCS
#define SYSCSC0STAT SYS.CSC0STAT.UINT32
#define SYSCLKACT SYS.CSC0STAT.BIT.CLKACT
#define SYSCLKSEL SYS.CSC0STAT.BIT.CLKSEL
#define SYSCKSC1CTL SYS.CKSC1CTL.UINT32
#define SYSCSC1STAT SYS.CSC1STAT.UINT32
#define SYSDNFCKS100C SYS.DNFCKS100C.UINT32
#define SYSCKSC100 SYS.DNFCKS100C.BIT.CKSC100
#define SYSDNFCSC100STAT SYS.DNFCSC100STAT.UINT32
#define SYSCLKACT100 SYS.DNFCSC100STAT.BIT.CLKACT100
#define SYSCLKSEL100 SYS.DNFCSC100STAT.BIT.CLKSEL100
#define SYSDNFCKS101C SYS.DNFCKS101C.UINT32
#define SYSCKSC101 SYS.DNFCKS101C.BIT.CKSC101
#define SYSDNFCSC101STAT SYS.DNFCSC101STAT.UINT32
#define SYSCLKACT101 SYS.DNFCSC101STAT.BIT.CLKACT101
#define SYSCLKSEL101 SYS.DNFCSC101STAT.BIT.CLKSEL101
#define SYSDNFCKS106C SYS.DNFCKS106C.UINT32
#define SYSCKSC106 SYS.DNFCKS106C.BIT.CKSC106
#define SYSDNFCSC106STAT SYS.DNFCSC106STAT.UINT32
#define SYSCLKACT106 SYS.DNFCSC106STAT.BIT.CLKACT106
#define SYSCLKSEL106 SYS.DNFCSC106STAT.BIT.CLKSEL106
#define SYSDNFCKS107C SYS.DNFCKS107C.UINT32
#define SYSCKSC107 SYS.DNFCKS107C.BIT.CKSC107
#define SYSDNFCSC107STAT SYS.DNFCSC107STAT.UINT32
#define SYSCLKACT107 SYS.DNFCSC107STAT.BIT.CLKACT107
#define SYSCLKSEL107 SYS.DNFCSC107STAT.BIT.CLKSEL107
#define SYSDNFCKS108C SYS.DNFCKS108C.UINT32
#define SYSCKSC108 SYS.DNFCKS108C.BIT.CKSC108
#define SYSDNFCSC108STAT SYS.DNFCSC108STAT.UINT32
#define SYSCLKACT108 SYS.DNFCSC108STAT.BIT.CLKACT108
#define SYSCLKSEL108 SYS.DNFCSC108STAT.BIT.CLKSEL108
#define SYSDNFCKS109C SYS.DNFCKS109C.UINT32
#define SYSCKSC109 SYS.DNFCKS109C.BIT.CKSC109
#define SYSDNFCSC109STAT SYS.DNFCSC109STAT.UINT32
#define SYSCLKACT109 SYS.DNFCSC109STAT.BIT.CLKACT109
#define SYSCLKSEL109 SYS.DNFCSC109STAT.BIT.CLKSEL109
#define SYSDNFCKS110C SYS.DNFCKS110C.UINT32
#define SYSCKSC110 SYS.DNFCKS110C.BIT.CKSC110
#define SYSDNFCSC110STAT SYS.DNFCSC110STAT.UINT32
#define SYSCLKACT110 SYS.DNFCSC110STAT.BIT.CLKACT110
#define SYSCLKSEL110 SYS.DNFCSC110STAT.BIT.CLKSEL110
#define SYSDNFCKS112C SYS.DNFCKS112C.UINT32
#define SYSCKSC112 SYS.DNFCKS112C.BIT.CKSC112
#define SYSDNFCSC112STAT SYS.DNFCSC112STAT.UINT32
#define SYSCLKACT112 SYS.DNFCSC112STAT.BIT.CLKACT112
#define SYSCLKSEL112 SYS.DNFCSC112STAT.BIT.CLKSEL112
#define SYSDNFCKS113C SYS.DNFCKS113C.UINT32
#define SYSCKSC113 SYS.DNFCKS113C.BIT.CKSC113
#define SYSDNFCSC113STAT SYS.DNFCSC113STAT.UINT32
#define SYSCLKACT113 SYS.DNFCSC113STAT.BIT.CLKACT113
#define SYSCLKSEL113 SYS.DNFCSC113STAT.BIT.CLKSEL113
#define SYSDNFCKS114C SYS.DNFCKS114C.UINT32
#define SYSCKSC114 SYS.DNFCKS114C.BIT.CKSC114
#define SYSDNFCSC114STAT SYS.DNFCSC114STAT.UINT32
#define SYSCLKACT114 SYS.DNFCSC114STAT.BIT.CLKACT114
#define SYSCLKSEL114 SYS.DNFCSC114STAT.BIT.CLKSEL114
#define SYSDNFCKS104C SYS.DNFCKS104C.UINT32
#define SYSCKSC104 SYS.DNFCKS104C.BIT.CKSC104
#define SYSDNFCSC104STAT SYS.DNFCSC104STAT.UINT32
#define SYSCLKACT104 SYS.DNFCSC104STAT.BIT.CLKACT104
#define SYSCLKSEL104 SYS.DNFCSC104STAT.BIT.CLKSEL104
#define SYSDNFCKS105C SYS.DNFCKS105C.UINT32
#define SYSCKSC105 SYS.DNFCKS105C.BIT.CKSC105
#define SYSDNFCSC105STAT SYS.DNFCSC105STAT.UINT32
#define SYSCLKACT105 SYS.DNFCSC105STAT.BIT.CLKACT105
#define SYSCLKSEL105 SYS.DNFCSC105STAT.BIT.CLKSEL105
#define SYSDNFCKS102C SYS.DNFCKS102C.UINT32
#define SYSCKSC102 SYS.DNFCKS102C.BIT.CKSC102
#define SYSDNFCSC102STAT SYS.DNFCSC102STAT.UINT32
#define SYSCLKACT102 SYS.DNFCSC102STAT.BIT.CLKACT102
#define SYSCLKSEL102 SYS.DNFCSC102STAT.BIT.CLKSEL102
#define SYSCLKD0DIV SYS.CLKD0DIV.UINT32
#define SYSCLKD0STAT SYS.CLKD0STAT.UINT32
#define SYSCLKD0SYNC SYS.CLKD0STAT.BIT.CLKD0SYNC
#define SYSCLKD0CLKACT SYS.CLKD0STAT.BIT.CLKD0CLKACT
#define SYSCLKD1DIV SYS.CLKD1DIV.UINT32
#define SYSCLKD1STAT SYS.CLKD1STAT.UINT32
#define SYSCLKD1SYNC SYS.CLKD1STAT.BIT.CLKD1SYNC
#define SYSCLKD1CLKACT SYS.CLKD1STAT.BIT.CLKD1CLKACT
#define SYSADCKSC0CTL SYS.ADCKSC0CTL.UINT32
#define SYSADCKCS SYS.ADCKSC0CTL.BIT.ADCKCS
#define SYSADCSC0STAT SYS.ADCSC0STAT.UINT32
#define SYSADCLKACT SYS.ADCSC0STAT.BIT.ADCLKACT
#define SYSADCKCSEL SYS.ADCSC0STAT.BIT.ADCKCSEL
#define SYSBSEQ0CTL SYS.BSEQ0CTL.UINT32
#define SYSHWBISTEXE SYS.BSEQ0CTL.BIT.HWBISTEXE
#define SYSPOF SYS.POF.UINT32
#define SYSPOFC SYS.POFC.UINT32
#define SYSSWRESA SYS.SWRESA.UINT32
#define SYSPROT1PHCMD SYS.PROT1PHCMD.UINT32
#define SYSPROT1PS SYS.PROT1PS.UINT32

#endif
