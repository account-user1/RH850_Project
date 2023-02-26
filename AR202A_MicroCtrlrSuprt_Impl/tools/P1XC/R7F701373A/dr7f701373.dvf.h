/******************************************************************************/
/* DISCLAIMER                                                                 */
/* This software is supplied by Renesas Electronics Corporation and is only   */
/* intended for use with Renesas products. No other uses are authorized.This  */
/* software is owned by Renesas Electronics Corporation and is protected      */
/* under all applicable laws, including copyright laws.                       */
/* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES          */
/* REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING  */
/* BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR */
/* PURPOSE AND NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY           */
/* DISCLAIMED.                                                                */
/* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS     */
/* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE       */
/* LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL      */
/* DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS    */
/* AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.           */
/* Renesas reserves the right, without notice, to make changes to this        */
/* software and to discontinue the availability of this software.             */
/* By using this software, you agree to the additional terms and conditions   */
/* found by accessing the following link:                                     */
/* http://www.renesas.com/disclaimer                                          */
/*                                                                            */
/* Device     : RH/RH850G3M/R7F701373xABG                                     */
/* File Name  : dr7f701373.dvf.h                                              */
/* Abstract   : Definition of I/O Register                                    */
/* History    : V1.21  [Device File version]                                  */
/* Options    : -ghs_pragma_io=on -anonymous=on -indent=4 -structure=on -type */
/*              def=on -def=on -autosar=on -modulearray=on -const=on -bitfiel */
/*              d=on -bitsfr=on -df=.\dr7f701373.dvf -o=..\output\update\inc_ */
/*              ghs\dr7f701373.dvf.h                                          */
/* Date       : 25.01.2017                                                    */
/* Version    : V1.07.00.02  [df2iodef.exe version]                           */
/* This is a typical example.                                                 */
/*                                                                            */
/******************************************************************************/
#ifndef __R7F701373xABGIODEFINE_HEADER__
#define __R7F701373xABGIODEFINE_HEADER__

#ifndef _IODEF_AUTOSAR_TYPEDEF_
#define _IODEF_AUTOSAR_TYPEDEF_
typedef unsigned char   uint8;
typedef unsigned short  uint16;
typedef unsigned long   uint32;
#endif

#ifndef _GHS_PRAGMA_IO_TYPEDEF_
#define _GHS_PRAGMA_IO_TYPEDEF_
#define PRAGMA(x) _Pragma(#x)
#define __READ volatile const
#define __WRITE volatile
#define __READ_WRITE volatile
#define __IOREG(reg, addr, attrib, type) PRAGMA(ghs io reg addr) \
extern attrib type reg;
#define __IOREGARRAY(reg, array, addr, attrib, type) PRAGMA(ghs io reg addr) \
extern attrib type reg[array];
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
    uint8  PRS0:1;                                         /* PRS0             */
    uint8  PRS1:1;                                         /* PRS1             */
    uint8  PRS2:1;                                         /* PRS2             */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  NFSTS0:1;                                       /* NFSTS0           */
    uint8  NFSTS1:1;                                       /* NFSTS1           */
    uint8  :1;                                             /* Reserved Bits    */
} __type0;
typedef struct 
{                                                          /* Bit Access       */
    uint8  NFENL0:1;                                       /* NFENL0           */
    uint8  NFENL1:1;                                       /* NFENL1           */
    uint8  :6;                                             /* Reserved Bits    */
} __type1;
typedef struct 
{                                                          /* Bit Access       */
    uint8  NFENL0:1;                                       /* NFENL0           */
    uint8  NFENL1:1;                                       /* NFENL1           */
    uint8  NFENL2:1;                                       /* NFENL2           */
    uint8  NFENL3:1;                                       /* NFENL3           */
    uint8  NFENL4:1;                                       /* NFENL4           */
    uint8  NFENL5:1;                                       /* NFENL5           */
    uint8  NFENL6:1;                                       /* NFENL6           */
    uint8  NFENL7:1;                                       /* NFENL7           */
} __type2;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR0:1;                                        /* INTR0            */
    uint8  INTF0:1;                                        /* INTF0            */
    uint8  INTL0:1;                                        /* INTL0            */
    uint8  :5;                                             /* Reserved Bits    */
} __type3;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR1:1;                                        /* INTR1            */
    uint8  INTF1:1;                                        /* INTF1            */
    uint8  INTL1:1;                                        /* INTL1            */
    uint8  :5;                                             /* Reserved Bits    */
} __type4;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR2:1;                                        /* INTR2            */
    uint8  INTF2:1;                                        /* INTF2            */
    uint8  INTL2:1;                                        /* INTL2            */
    uint8  :5;                                             /* Reserved Bits    */
} __type5;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR3:1;                                        /* INTR3            */
    uint8  INTF3:1;                                        /* INTF3            */
    uint8  INTL3:1;                                        /* INTL3            */
    uint8  :5;                                             /* Reserved Bits    */
} __type6;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR4:1;                                        /* INTR4            */
    uint8  INTF4:1;                                        /* INTF4            */
    uint8  INTL4:1;                                        /* INTL4            */
    uint8  :5;                                             /* Reserved Bits    */
} __type7;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR5:1;                                        /* INTR5            */
    uint8  INTF5:1;                                        /* INTF5            */
    uint8  INTL5:1;                                        /* INTL5            */
    uint8  :5;                                             /* Reserved Bits    */
} __type8;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR6:1;                                        /* INTR6            */
    uint8  INTF6:1;                                        /* INTF6            */
    uint8  INTL6:1;                                        /* INTL6            */
    uint8  :5;                                             /* Reserved Bits    */
} __type9;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR7:1;                                        /* INTR7            */
    uint8  INTF7:1;                                        /* INTF7            */
    uint8  INTL7:1;                                        /* INTL7            */
    uint8  :5;                                             /* Reserved Bits    */
} __type10;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR0:1;                                        /* INTR0            */
    uint8  INTF0:1;                                        /* INTF0            */
    uint8  :6;                                             /* Reserved Bits    */
} __type11;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR1:1;                                        /* INTR1            */
    uint8  INTF1:1;                                        /* INTF1            */
    uint8  :6;                                             /* Reserved Bits    */
} __type12;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS0:1;                                        /* BYPS0            */
} __type13;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS1:1;                                        /* BYPS1            */
} __type14;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS2:1;                                        /* BYPS2            */
} __type15;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS3:1;                                        /* BYPS3            */
} __type16;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS4:1;                                        /* BYPS4            */
} __type17;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS5:1;                                        /* BYPS5            */
} __type18;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS6:1;                                        /* BYPS6            */
} __type19;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS7:1;                                        /* BYPS7            */
} __type20;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MBS:1;                                          /* MBS              */
    uint8  JOBE:1;                                         /* JOBE             */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  RXE:1;                                          /* RXE              */
    uint8  TXE:1;                                          /* TXE              */
    uint8  PWR:1;                                          /* PWR              */
} __type21;
typedef struct 
{                                                          /* Bit Access       */
    uint8  E:1;                                            /* E                */
    uint8  IRE:1;                                          /* IRE              */
    uint8  :6;                                             /* Reserved Bits    */
} __type22;
typedef struct 
{                                                          /* Bit Access       */
    uint8  R0:1;                                           /* R0               */
    uint8  W0:1;                                           /* W0               */
    uint8  X0:1;                                           /* X0               */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  R1:1;                                           /* R1               */
    uint8  W1:1;                                           /* W1               */
    uint8  X1:1;                                           /* X1               */
    uint8  :1;                                             /* Reserved Bits    */
} __type23;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  X0:1;                                           /* X0               */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  X1:1;                                           /* X1               */
    uint8  :1;                                             /* Reserved Bits    */
} __type24;
typedef struct 
{                                                          /* Bit Access       */
    uint8  R0:1;                                           /* R0               */
    uint8  W0:1;                                           /* W0               */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  R1:1;                                           /* R1               */
    uint8  W1:1;                                           /* W1               */
    uint8  :2;                                             /* Reserved Bits    */
} __type25;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  R1:1;                                           /* R1               */
    uint8  W1:1;                                           /* W1               */
    uint8  :2;                                             /* Reserved Bits    */
} __type26;
typedef struct 
{                                                          /* Bit Access       */
    uint8  R0:1;                                           /* R0               */
    uint8  W0:1;                                           /* W0               */
    uint8  :6;                                             /* Reserved Bits    */
} __type27;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
} __type28;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type0;                                               /* Bit Access       */
} __type29;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type1;                                               /* Bit Access       */
} __type30;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type2;                                               /* Bit Access       */
} __type31;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type3;                                               /* Bit Access       */
} __type32;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type4;                                               /* Bit Access       */
} __type33;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type5;                                               /* Bit Access       */
} __type34;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type6;                                               /* Bit Access       */
} __type35;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type7;                                               /* Bit Access       */
} __type36;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type8;                                               /* Bit Access       */
} __type37;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type9;                                               /* Bit Access       */
} __type38;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type10;                                              /* Bit Access       */
} __type39;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type11;                                              /* Bit Access       */
} __type40;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type12;                                              /* Bit Access       */
} __type41;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type13;                                              /* Bit Access       */
} __type42;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type14;                                              /* Bit Access       */
} __type43;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type15;                                              /* Bit Access       */
} __type44;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type16;                                              /* Bit Access       */
} __type45;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type17;                                              /* Bit Access       */
} __type46;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type18;                                              /* Bit Access       */
} __type47;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type19;                                              /* Bit Access       */
} __type48;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type20;                                              /* Bit Access       */
} __type49;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type21;                                              /* Bit Access       */
} __type50;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /*  8-bit Access    */
        } LBRP0;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /*  8-bit Access    */
        } LBRP1;
    };
} __type51;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
} __type52;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            uint16 UINT16;                                 /* 16-bit Access    */
        } FBTPL;
        union
        {                                                  /* IOR              */
            uint16 UINT16;                                 /* 16-bit Access    */
        } FBTPH;
    };
    struct 
    {
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } FBTPLL;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } FBTPLH;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } FBTPHL;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } FBTPHH;
    };
} __type53;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            uint16 UINT16;                                 /* 16-bit Access    */
        } NBTPL;
        union
        {                                                  /* IOR              */
            uint16 UINT16;                                 /* 16-bit Access    */
        } NBTPH;
    };
    struct 
    {
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } NBTPLL;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } NBTPLH;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } NBTPHL;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } NBTPHH;
    };
} __type54;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
} __type55;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
} __type56;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type22;                                              /* Bit Access       */
} __type57;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type23;                                              /* Bit Access       */
} __type58;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type24;                                              /* Bit Access       */
} __type59;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type25;                                              /* Bit Access       */
} __type60;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type26;                                              /* Bit Access       */
} __type61;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type27;                                              /* Bit Access       */
} __type62;

typedef struct 
{                                                          /* Module           */
    const uint32 FRPV;                                     /* FRPV             */
    __type28 FROC;                                         /* FROC             */
    uint8  dummy0[4];                                      /* Reserved         */
    __type28 FROS;                                         /* FROS             */
    __type28 FRTEST1;                                      /* FRTEST1          */
    __type28 FRTEST2;                                      /* FRTEST2          */
    uint8  dummy1[4];                                      /* Reserved         */
    __type28 FRLCK;                                        /* FRLCK            */
    __type28 FREIR;                                        /* FREIR            */
    __type28 FRSIR;                                        /* FRSIR            */
    __type28 FREILS;                                       /* FREILS           */
    __type28 FRSILS;                                       /* FRSILS           */
    __type28 FREIES;                                       /* FREIES           */
    __type28 FREIER;                                       /* FREIER           */
    __type28 FRSIES;                                       /* FRSIES           */
    __type28 FRSIER;                                       /* FRSIER           */
    __type28 FRILE;                                        /* FRILE            */
    __type28 FRT0C;                                        /* FRT0C            */
    __type28 FRT1C;                                        /* FRT1C            */
    __type28 FRSTPW1;                                      /* FRSTPW1          */
    const __type28 FRSTPW2;                                /* FRSTPW2          */
    uint8  dummy2[44];                                     /* Reserved         */
    __type28 FRSUCC1;                                      /* FRSUCC1          */
    __type28 FRSUCC2;                                      /* FRSUCC2          */
    __type28 FRSUCC3;                                      /* FRSUCC3          */
    __type28 FRNEMC;                                       /* FRNEMC           */
    __type28 FRPRTC1;                                      /* FRPRTC1          */
    __type28 FRPRTC2;                                      /* FRPRTC2          */
    __type28 FRMHDC;                                       /* FRMHDC           */
    uint8  dummy3[4];                                      /* Reserved         */
    __type28 FRGTUC1;                                      /* FRGTUC1          */
    __type28 FRGTUC2;                                      /* FRGTUC2          */
    __type28 FRGTUC3;                                      /* FRGTUC3          */
    __type28 FRGTUC4;                                      /* FRGTUC4          */
    __type28 FRGTUC5;                                      /* FRGTUC5          */
    __type28 FRGTUC6;                                      /* FRGTUC6          */
    __type28 FRGTUC7;                                      /* FRGTUC7          */
    __type28 FRGTUC8;                                      /* FRGTUC8          */
    __type28 FRGTUC9;                                      /* FRGTUC9          */
    __type28 FRGTUC10;                                     /* FRGTUC10         */
    __type28 FRGTUC11;                                     /* FRGTUC11         */
    uint8  dummy4[52];                                     /* Reserved         */
    const __type28 FRCCSV;                                 /* FRCCSV           */
    const __type28 FRCCEV;                                 /* FRCCEV           */
    uint8  dummy5[8];                                      /* Reserved         */
    const __type28 FRSCV;                                  /* FRSCV            */
    const __type28 FRMTCCV;                                /* FRMTCCV          */
    const __type28 FRRCV;                                  /* FRRCV            */
    const __type28 FROCV;                                  /* FROCV            */
    const __type28 FRSFS;                                  /* FRSFS            */
    const __type28 FRSWNIT;                                /* FRSWNIT          */
    __type28 FRACS;                                        /* FRACS            */
    uint8  dummy6[4];                                      /* Reserved         */
    const __type28 FRESID1;                                /* FRESID1          */
    const __type28 FRESID2;                                /* FRESID2          */
    const __type28 FRESID3;                                /* FRESID3          */
    const __type28 FRESID4;                                /* FRESID4          */
    const __type28 FRESID5;                                /* FRESID5          */
    const __type28 FRESID6;                                /* FRESID6          */
    const __type28 FRESID7;                                /* FRESID7          */
    const __type28 FRESID8;                                /* FRESID8          */
    const __type28 FRESID9;                                /* FRESID9          */
    const __type28 FRESID10;                               /* FRESID10         */
    const __type28 FRESID11;                               /* FRESID11         */
    const __type28 FRESID12;                               /* FRESID12         */
    const __type28 FRESID13;                               /* FRESID13         */
    const __type28 FRESID14;                               /* FRESID14         */
    const __type28 FRESID15;                               /* FRESID15         */
    uint8  dummy7[4];                                      /* Reserved         */
    const __type28 FROSID1;                                /* FROSID1          */
    const __type28 FROSID2;                                /* FROSID2          */
    const __type28 FROSID3;                                /* FROSID3          */
    const __type28 FROSID4;                                /* FROSID4          */
    const __type28 FROSID5;                                /* FROSID5          */
    const __type28 FROSID6;                                /* FROSID6          */
    const __type28 FROSID7;                                /* FROSID7          */
    const __type28 FROSID8;                                /* FROSID8          */
    const __type28 FROSID9;                                /* FROSID9          */
    const __type28 FROSID10;                               /* FROSID10         */
    const __type28 FROSID11;                               /* FROSID11         */
    const __type28 FROSID12;                               /* FROSID12         */
    const __type28 FROSID13;                               /* FROSID13         */
    const __type28 FROSID14;                               /* FROSID14         */
    const __type28 FROSID15;                               /* FROSID15         */
    uint8  dummy8[4];                                      /* Reserved         */
    const __type28 FRNMV1;                                 /* FRNMV1           */
    const __type28 FRNMV2;                                 /* FRNMV2           */
    const __type28 FRNMV3;                                 /* FRNMV3           */
    uint8  dummy9[324];                                    /* Reserved         */
    __type28 FRMRC;                                        /* FRMRC            */
    __type28 FRFRF;                                        /* FRFRF            */
    __type28 FRFRFM;                                       /* FRFRFM           */
    __type28 FRFCL;                                        /* FRFCL            */
    __type28 FRMHDS;                                       /* FRMHDS           */
    const __type28 FRLDTS;                                 /* FRLDTS           */
    const __type28 FRFSR;                                  /* FRFSR            */
    __type28 FRMHDF;                                       /* FRMHDF           */
    const __type28 FRTXRQ1;                                /* FRTXRQ1          */
    const __type28 FRTXRQ2;                                /* FRTXRQ2          */
    const __type28 FRTXRQ3;                                /* FRTXRQ3          */
    const __type28 FRTXRQ4;                                /* FRTXRQ4          */
    __type28 FRNDAT1;                                      /* FRNDAT1          */
    __type28 FRNDAT2;                                      /* FRNDAT2          */
    __type28 FRNDAT3;                                      /* FRNDAT3          */
    __type28 FRNDAT4;                                      /* FRNDAT4          */
    __type28 FRMBSC1;                                      /* FRMBSC1          */
    __type28 FRMBSC2;                                      /* FRMBSC2          */
    __type28 FRMBSC3;                                      /* FRMBSC3          */
    __type28 FRMBSC4;                                      /* FRMBSC4          */
    uint8  dummy10[176];                                   /* Reserved         */
    __type28 FRWRDS1;                                      /* FRWRDS1          */
    __type28 FRWRDS2;                                      /* FRWRDS2          */
    __type28 FRWRDS3;                                      /* FRWRDS3          */
    __type28 FRWRDS4;                                      /* FRWRDS4          */
    __type28 FRWRDS5;                                      /* FRWRDS5          */
    __type28 FRWRDS6;                                      /* FRWRDS6          */
    __type28 FRWRDS7;                                      /* FRWRDS7          */
    __type28 FRWRDS8;                                      /* FRWRDS8          */
    __type28 FRWRDS9;                                      /* FRWRDS9          */
    __type28 FRWRDS10;                                     /* FRWRDS10         */
    __type28 FRWRDS11;                                     /* FRWRDS11         */
    __type28 FRWRDS12;                                     /* FRWRDS12         */
    __type28 FRWRDS13;                                     /* FRWRDS13         */
    __type28 FRWRDS14;                                     /* FRWRDS14         */
    __type28 FRWRDS15;                                     /* FRWRDS15         */
    __type28 FRWRDS16;                                     /* FRWRDS16         */
    __type28 FRWRDS17;                                     /* FRWRDS17         */
    __type28 FRWRDS18;                                     /* FRWRDS18         */
    __type28 FRWRDS19;                                     /* FRWRDS19         */
    __type28 FRWRDS20;                                     /* FRWRDS20         */
    __type28 FRWRDS21;                                     /* FRWRDS21         */
    __type28 FRWRDS22;                                     /* FRWRDS22         */
    __type28 FRWRDS23;                                     /* FRWRDS23         */
    __type28 FRWRDS24;                                     /* FRWRDS24         */
    __type28 FRWRDS25;                                     /* FRWRDS25         */
    __type28 FRWRDS26;                                     /* FRWRDS26         */
    __type28 FRWRDS27;                                     /* FRWRDS27         */
    __type28 FRWRDS28;                                     /* FRWRDS28         */
    __type28 FRWRDS29;                                     /* FRWRDS29         */
    __type28 FRWRDS30;                                     /* FRWRDS30         */
    __type28 FRWRDS31;                                     /* FRWRDS31         */
    __type28 FRWRDS32;                                     /* FRWRDS32         */
    __type28 FRWRDS33;                                     /* FRWRDS33         */
    __type28 FRWRDS34;                                     /* FRWRDS34         */
    __type28 FRWRDS35;                                     /* FRWRDS35         */
    __type28 FRWRDS36;                                     /* FRWRDS36         */
    __type28 FRWRDS37;                                     /* FRWRDS37         */
    __type28 FRWRDS38;                                     /* FRWRDS38         */
    __type28 FRWRDS39;                                     /* FRWRDS39         */
    __type28 FRWRDS40;                                     /* FRWRDS40         */
    __type28 FRWRDS41;                                     /* FRWRDS41         */
    __type28 FRWRDS42;                                     /* FRWRDS42         */
    __type28 FRWRDS43;                                     /* FRWRDS43         */
    __type28 FRWRDS44;                                     /* FRWRDS44         */
    __type28 FRWRDS45;                                     /* FRWRDS45         */
    __type28 FRWRDS46;                                     /* FRWRDS46         */
    __type28 FRWRDS47;                                     /* FRWRDS47         */
    __type28 FRWRDS48;                                     /* FRWRDS48         */
    __type28 FRWRDS49;                                     /* FRWRDS49         */
    __type28 FRWRDS50;                                     /* FRWRDS50         */
    __type28 FRWRDS51;                                     /* FRWRDS51         */
    __type28 FRWRDS52;                                     /* FRWRDS52         */
    __type28 FRWRDS53;                                     /* FRWRDS53         */
    __type28 FRWRDS54;                                     /* FRWRDS54         */
    __type28 FRWRDS55;                                     /* FRWRDS55         */
    __type28 FRWRDS56;                                     /* FRWRDS56         */
    __type28 FRWRDS57;                                     /* FRWRDS57         */
    __type28 FRWRDS58;                                     /* FRWRDS58         */
    __type28 FRWRDS59;                                     /* FRWRDS59         */
    __type28 FRWRDS60;                                     /* FRWRDS60         */
    __type28 FRWRDS61;                                     /* FRWRDS61         */
    __type28 FRWRDS62;                                     /* FRWRDS62         */
    __type28 FRWRDS63;                                     /* FRWRDS63         */
    __type28 FRWRDS64;                                     /* FRWRDS64         */
    __type28 FRWRHS1;                                      /* FRWRHS1          */
    __type28 FRWRHS2;                                      /* FRWRHS2          */
    __type28 FRWRHS3;                                      /* FRWRHS3          */
    uint8  dummy11[4];                                     /* Reserved         */
    __type28 FRIBCM;                                       /* FRIBCM           */
    __type28 FRIBCR;                                       /* FRIBCR           */
    uint8  dummy12[232];                                   /* Reserved         */
    const __type28 FRRDDS1;                                /* FRRDDS1          */
    const __type28 FRRDDS2;                                /* FRRDDS2          */
    const __type28 FRRDDS3;                                /* FRRDDS3          */
    const __type28 FRRDDS4;                                /* FRRDDS4          */
    const __type28 FRRDDS5;                                /* FRRDDS5          */
    const __type28 FRRDDS6;                                /* FRRDDS6          */
    const __type28 FRRDDS7;                                /* FRRDDS7          */
    const __type28 FRRDDS8;                                /* FRRDDS8          */
    const __type28 FRRDDS9;                                /* FRRDDS9          */
    const __type28 FRRDDS10;                               /* FRRDDS10         */
    const __type28 FRRDDS11;                               /* FRRDDS11         */
    const __type28 FRRDDS12;                               /* FRRDDS12         */
    const __type28 FRRDDS13;                               /* FRRDDS13         */
    const __type28 FRRDDS14;                               /* FRRDDS14         */
    const __type28 FRRDDS15;                               /* FRRDDS15         */
    const __type28 FRRDDS16;                               /* FRRDDS16         */
    const __type28 FRRDDS17;                               /* FRRDDS17         */
    const __type28 FRRDDS18;                               /* FRRDDS18         */
    const __type28 FRRDDS19;                               /* FRRDDS19         */
    const __type28 FRRDDS20;                               /* FRRDDS20         */
    const __type28 FRRDDS21;                               /* FRRDDS21         */
    const __type28 FRRDDS22;                               /* FRRDDS22         */
    const __type28 FRRDDS23;                               /* FRRDDS23         */
    const __type28 FRRDDS24;                               /* FRRDDS24         */
    const __type28 FRRDDS25;                               /* FRRDDS25         */
    const __type28 FRRDDS26;                               /* FRRDDS26         */
    const __type28 FRRDDS27;                               /* FRRDDS27         */
    const __type28 FRRDDS28;                               /* FRRDDS28         */
    const __type28 FRRDDS29;                               /* FRRDDS29         */
    const __type28 FRRDDS30;                               /* FRRDDS30         */
    const __type28 FRRDDS31;                               /* FRRDDS31         */
    const __type28 FRRDDS32;                               /* FRRDDS32         */
    const __type28 FRRDDS33;                               /* FRRDDS33         */
    const __type28 FRRDDS34;                               /* FRRDDS34         */
    const __type28 FRRDDS35;                               /* FRRDDS35         */
    const __type28 FRRDDS36;                               /* FRRDDS36         */
    const __type28 FRRDDS37;                               /* FRRDDS37         */
    const __type28 FRRDDS38;                               /* FRRDDS38         */
    const __type28 FRRDDS39;                               /* FRRDDS39         */
    const __type28 FRRDDS40;                               /* FRRDDS40         */
    const __type28 FRRDDS41;                               /* FRRDDS41         */
    const __type28 FRRDDS42;                               /* FRRDDS42         */
    const __type28 FRRDDS43;                               /* FRRDDS43         */
    const __type28 FRRDDS44;                               /* FRRDDS44         */
    const __type28 FRRDDS45;                               /* FRRDDS45         */
    const __type28 FRRDDS46;                               /* FRRDDS46         */
    const __type28 FRRDDS47;                               /* FRRDDS47         */
    const __type28 FRRDDS48;                               /* FRRDDS48         */
    const __type28 FRRDDS49;                               /* FRRDDS49         */
    const __type28 FRRDDS50;                               /* FRRDDS50         */
    const __type28 FRRDDS51;                               /* FRRDDS51         */
    const __type28 FRRDDS52;                               /* FRRDDS52         */
    const __type28 FRRDDS53;                               /* FRRDDS53         */
    const __type28 FRRDDS54;                               /* FRRDDS54         */
    const __type28 FRRDDS55;                               /* FRRDDS55         */
    const __type28 FRRDDS56;                               /* FRRDDS56         */
    const __type28 FRRDDS57;                               /* FRRDDS57         */
    const __type28 FRRDDS58;                               /* FRRDDS58         */
    const __type28 FRRDDS59;                               /* FRRDDS59         */
    const __type28 FRRDDS60;                               /* FRRDDS60         */
    const __type28 FRRDDS61;                               /* FRRDDS61         */
    const __type28 FRRDDS62;                               /* FRRDDS62         */
    const __type28 FRRDDS63;                               /* FRRDDS63         */
    const __type28 FRRDDS64;                               /* FRRDDS64         */
    const __type28 FRRDHS1;                                /* FRRDHS1          */
    const __type28 FRRDHS2;                                /* FRRDHS2          */
    const __type28 FRRDHS3;                                /* FRRDHS3          */
    const __type28 FRMBS;                                  /* FRMBS            */
    __type28 FROBCM;                                       /* FROBCM           */
    __type28 FROBCR;                                       /* FROBCR           */
    uint8  dummy13[232];                                   /* Reserved         */
    __type28 FRITC;                                        /* FRITC            */
    __type28 FROTC;                                        /* FROTC            */
    __type28 FRIBA;                                        /* FRIBA            */
    __type28 FRFBA;                                        /* FRFBA            */
    __type28 FROBA;                                        /* FROBA            */
    __type28 FRIQC;                                        /* FRIQC            */
    __type28 FRUIR;                                        /* FRUIR            */
    __type28 FRUOR;                                        /* FRUOR            */
    __type28 FRITS;                                        /* FRITS            */
    __type28 FROTS;                                        /* FROTS            */
    __type28 FRAES;                                        /* FRAES            */
    const __type28 FRAEA;                                  /* FRAEA            */
    __type28 FRDA0;                                        /* FRDA0            */
    __type28 FRDA1;                                        /* FRDA1            */
    __type28 FRDA2;                                        /* FRDA2            */
    __type28 FRDA3;                                        /* FRDA3            */
    uint8  dummy14[4];                                     /* Reserved         */
    __type28 FRT2C;                                        /* FRT2C            */
} __type63;
typedef struct 
{                                                          /* Module           */
    uint32 EDSR0;                                          /* EDSR0            */
    uint8  dummy15[12];                                    /* Reserved         */
    uint32 TDLAR0;                                         /* TDLAR0           */
    uint32 TDFAR0;                                         /* TDFAR0           */
    uint32 TDFXR0;                                         /* TDFXR0           */
    uint32 TDFFR0;                                         /* TDFFR0           */
    uint8  dummy16[16];                                    /* Reserved         */
    uint32 RDLAR0;                                         /* RDLAR0           */
    uint32 RDFAR0;                                         /* RDFAR0           */
    uint32 RDFXR0;                                         /* RDFXR0           */
    uint32 RDFFR0;                                         /* RDFFR0           */
    uint8  dummy17[960];                                   /* Reserved         */
    uint32 EDMR0;                                          /* EDMR0            */
    uint8  dummy18[4];                                     /* Reserved         */
    uint32 EDTRR0;                                         /* EDTRR0           */
    uint8  dummy19[4];                                     /* Reserved         */
    uint32 EDRRR0;                                         /* EDRRR0           */
    uint8  dummy20[20];                                    /* Reserved         */
    uint32 EESR0;                                          /* EESR0            */
    uint8  dummy21[4];                                     /* Reserved         */
    uint32 EESIPR0;                                        /* EESIPR0          */
    uint8  dummy22[4];                                     /* Reserved         */
    uint32 TRSCER0;                                        /* TRSCER0          */
    uint8  dummy23[4];                                     /* Reserved         */
    uint32 RMFCR0;                                         /* RMFCR0           */
    uint8  dummy24[12];                                    /* Reserved         */
    uint32 FDR0;                                           /* FDR0             */
    uint8  dummy25[4];                                     /* Reserved         */
    uint32 RMCR0;                                          /* RMCR0            */
    uint8  dummy26[4];                                     /* Reserved         */
    uint32 RPADIR0;                                        /* RPADIR0          */
    uint8  dummy27[4];                                     /* Reserved         */
    uint32 FCFTR0;                                         /* FCFTR0           */
    uint8  dummy28[20];                                    /* Reserved         */
    const uint32 TFSR0;                                    /* TFSR0            */
    uint8  dummy29[4];                                     /* Reserved         */
    const uint32 RFSR0;                                    /* RFSR0            */
    uint8  dummy30[116];                                   /* Reserved         */
    uint32 ECMR0;                                          /* ECMR0            */
    uint8  dummy31[4];                                     /* Reserved         */
    uint32 RFLR0;                                          /* RFLR0            */
    uint8  dummy32[4];                                     /* Reserved         */
    uint32 ECSR0;                                          /* ECSR0            */
    uint8  dummy33[4];                                     /* Reserved         */
    uint32 ECSIPR0;                                        /* ECSIPR0          */
    uint8  dummy34[4];                                     /* Reserved         */
    uint32 PIR0;                                           /* PIR0             */
    uint8  dummy35[4];                                     /* Reserved         */
    const uint32 PLSR0;                                    /* PLSR0            */
    uint32 PIPR0;                                          /* PIPR0            */
    uint8  dummy36[36];                                    /* Reserved         */
    uint32 APR0;                                           /* APR0             */
    uint32 MPR0;                                           /* MPR0             */
    const uint32 PFTCR0;                                   /* PFTCR0           */
    const uint32 PFRCR0;                                   /* PFRCR0           */
    uint32 TPAUSER0;                                       /* TPAUSER0         */
    const uint32 TPFRCR0;                                  /* TPFRCR0          */
    uint32 BCFRR0;                                         /* BCFRR0           */
    uint32 CRBCFRR0;                                       /* CRBCFRR0         */
    uint8  dummy37[60];                                    /* Reserved         */
    uint32 EMR0;                                           /* EMR0             */
    uint8  dummy38[12];                                    /* Reserved         */
    uint32 MAHR0;                                          /* MAHR0            */
    uint8  dummy39[4];                                     /* Reserved         */
    uint32 MALR0;                                          /* MALR0            */
    uint8  dummy40[308];                                   /* Reserved         */
    uint32 TROCR0;                                         /* TROCR0           */
    uint8  dummy41[4];                                     /* Reserved         */
    uint32 CDCR0;                                          /* CDCR0            */
    uint8  dummy42[4];                                     /* Reserved         */
    uint32 LCCR0;                                          /* LCCR0            */
    uint8  dummy43[44];                                    /* Reserved         */
    uint32 CEFCR0;                                         /* CEFCR0           */
    uint8  dummy44[4];                                     /* Reserved         */
    uint32 FRECR0;                                         /* FRECR0           */
    uint8  dummy45[4];                                     /* Reserved         */
    uint32 TSFRCR0;                                        /* TSFRCR0          */
    uint8  dummy46[4];                                     /* Reserved         */
    uint32 TLFRCR0;                                        /* TLFRCR0          */
    uint8  dummy47[4];                                     /* Reserved         */
    uint32 RFCR0;                                          /* RFCR0            */
    uint8  dummy48[20];                                    /* Reserved         */
    uint32 MAFCR0;                                         /* MAFCR0           */
    uint8  dummy49[132];                                   /* Reserved         */
    uint32 ARSTR;                                          /* ARSTR            */
    uint32 TSU_CTRST;                                      /* TSU_CTRST        */
    uint8  dummy50[40];                                    /* Reserved         */
    uint32 TSU_FWSL0;                                      /* TSU_FWSL0        */
    uint32 TSU_FWSL1;                                      /* TSU_FWSL1        */
    uint32 TSU_FWSLC;                                      /* TSU_FWSLC        */
    uint8  dummy51[20];                                    /* Reserved         */
    uint32 TSU_FWSR;                                       /* TSU_FWSR         */
    uint32 TSU_FWINMK;                                     /* TSU_FWINMK       */
    uint32 TSU_VTAG0;                                      /* TSU_VTAG0        */
    uint32 TSU_VTAG1;                                      /* TSU_VTAG1        */
    const uint32 TSU_ADSBSY;                               /* TSU_ADSBSY       */
    uint32 TSU_TEN;                                        /* TSU_TEN          */
    uint8  dummy52[8];                                     /* Reserved         */
    uint32 TSU_POST1;                                      /* TSU_POST1        */
    uint32 TSU_POST2;                                      /* TSU_POST2        */
    uint32 TSU_POST3;                                      /* TSU_POST3        */
    uint32 TSU_POST4;                                      /* TSU_POST4        */
    const uint32 TXNLCR0;                                  /* TXNLCR0          */
    const uint32 TXALCR0;                                  /* TXALCR0          */
    const uint32 RXNLCR0;                                  /* RXNLCR0          */
    const uint32 RXALCR0;                                  /* RXALCR0          */
    uint8  dummy53[16];                                    /* Reserved         */
    const uint32 TXNLCR1;                                  /* TXNLCR1          */
    const uint32 TXALCR1;                                  /* TXALCR1          */
    const uint32 RXNLCR1;                                  /* RXNLCR1          */
    const uint32 RXALCR1;                                  /* RXALCR1          */
    uint8  dummy54[80];                                    /* Reserved         */
    uint32 TSU_ADRH0;                                      /* TSU_ADRH0        */
    uint32 TSU_ADRL0;                                      /* TSU_ADRL0        */
    uint32 TSU_ADRH1;                                      /* TSU_ADRH1        */
    uint32 TSU_ADRL1;                                      /* TSU_ADRL1        */
    uint32 TSU_ADRH2;                                      /* TSU_ADRH2        */
    uint32 TSU_ADRL2;                                      /* TSU_ADRL2        */
    uint32 TSU_ADRH3;                                      /* TSU_ADRH3        */
    uint32 TSU_ADRL3;                                      /* TSU_ADRL3        */
    uint32 TSU_ADRH4;                                      /* TSU_ADRH4        */
    uint32 TSU_ADRL4;                                      /* TSU_ADRL4        */
    uint32 TSU_ADRH5;                                      /* TSU_ADRH5        */
    uint32 TSU_ADRL5;                                      /* TSU_ADRL5        */
    uint32 TSU_ADRH6;                                      /* TSU_ADRH6        */
    uint32 TSU_ADRL6;                                      /* TSU_ADRL6        */
    uint32 TSU_ADRH7;                                      /* TSU_ADRH7        */
    uint32 TSU_ADRL7;                                      /* TSU_ADRL7        */
    uint32 TSU_ADRH8;                                      /* TSU_ADRH8        */
    uint32 TSU_ADRL8;                                      /* TSU_ADRL8        */
    uint32 TSU_ADRH9;                                      /* TSU_ADRH9        */
    uint32 TSU_ADRL9;                                      /* TSU_ADRL9        */
    uint32 TSU_ADRH10;                                     /* TSU_ADRH10       */
    uint32 TSU_ADRL10;                                     /* TSU_ADRL10       */
    uint32 TSU_ADRH11;                                     /* TSU_ADRH11       */
    uint32 TSU_ADRL11;                                     /* TSU_ADRL11       */
    uint32 TSU_ADRH12;                                     /* TSU_ADRH12       */
    uint32 TSU_ADRL12;                                     /* TSU_ADRL12       */
    uint32 TSU_ADRH13;                                     /* TSU_ADRH13       */
    uint32 TSU_ADRL13;                                     /* TSU_ADRL13       */
    uint32 TSU_ADRH14;                                     /* TSU_ADRH14       */
    uint32 TSU_ADRL14;                                     /* TSU_ADRL14       */
    uint32 TSU_ADRH15;                                     /* TSU_ADRH15       */
    uint32 TSU_ADRL15;                                     /* TSU_ADRL15       */
    uint32 TSU_ADRH16;                                     /* TSU_ADRH16       */
    uint32 TSU_ADRL16;                                     /* TSU_ADRL16       */
    uint32 TSU_ADRH17;                                     /* TSU_ADRH17       */
    uint32 TSU_ADRL17;                                     /* TSU_ADRL17       */
    uint32 TSU_ADRH18;                                     /* TSU_ADRH18       */
    uint32 TSU_ADRL18;                                     /* TSU_ADRL18       */
    uint32 TSU_ADRH19;                                     /* TSU_ADRH19       */
    uint32 TSU_ADRL19;                                     /* TSU_ADRL19       */
    uint32 TSU_ADRH20;                                     /* TSU_ADRH20       */
    uint32 TSU_ADRL20;                                     /* TSU_ADRL20       */
    uint32 TSU_ADRH21;                                     /* TSU_ADRH21       */
    uint32 TSU_ADRL21;                                     /* TSU_ADRL21       */
    uint32 TSU_ADRH22;                                     /* TSU_ADRH22       */
    uint32 TSU_ADRL22;                                     /* TSU_ADRL22       */
    uint32 TSU_ADRH23;                                     /* TSU_ADRH23       */
    uint32 TSU_ADRL23;                                     /* TSU_ADRL23       */
    uint32 TSU_ADRH24;                                     /* TSU_ADRH24       */
    uint32 TSU_ADRL24;                                     /* TSU_ADRL24       */
    uint32 TSU_ADRH25;                                     /* TSU_ADRH25       */
    uint32 TSU_ADRL25;                                     /* TSU_ADRL25       */
    uint32 TSU_ADRH26;                                     /* TSU_ADRH26       */
    uint32 TSU_ADRL26;                                     /* TSU_ADRL26       */
    uint32 TSU_ADRH27;                                     /* TSU_ADRH27       */
    uint32 TSU_ADRL27;                                     /* TSU_ADRL27       */
    uint32 TSU_ADRH28;                                     /* TSU_ADRH28       */
    uint32 TSU_ADRL28;                                     /* TSU_ADRL28       */
    uint32 TSU_ADRH29;                                     /* TSU_ADRH29       */
    uint32 TSU_ADRL29;                                     /* TSU_ADRL29       */
    uint32 TSU_ADRH30;                                     /* TSU_ADRH30       */
    uint32 TSU_ADRL30;                                     /* TSU_ADRL30       */
    uint32 TSU_ADRH31;                                     /* TSU_ADRH31       */
    uint32 TSU_ADRL31;                                     /* TSU_ADRL31       */
    uint8  dummy55[516];                                   /* Reserved         */
    uint32 HDMMDR0;                                        /* HDMMDR0          */
    uint8  dummy56[8];                                     /* Reserved         */
    uint32 HDMISR0;                                        /* HDMISR0          */
    uint32 HDMIER0;                                        /* HDMIER0          */
} __type64;
typedef struct 
{                                                          /* Module           */
    uint32 CNT;                                            /* CNT              */
    uint32 PCMD;                                           /* PCMD             */
    const uint32 PS;                                       /* PS               */
} __type65;
typedef struct 
{                                                          /* Module           */
    const uint8  FPMON;                                    /* FPMON            */
    uint8  dummy57[15];                                    /* Reserved         */
    uint8  FASTAT;                                         /* FASTAT           */
    uint8  dummy58[3];                                     /* Reserved         */
    uint8  FAEINT;                                         /* FAEINT           */
    uint8  dummy59[27];                                    /* Reserved         */
    uint32 FSADDR;                                         /* FSADDR           */
    uint32 FEADDR;                                         /* FEADDR           */
    uint8  dummy60[28];                                    /* Reserved         */
    uint16 FCURAME;                                        /* FCURAME          */
    uint8  dummy61[2];                                     /* Reserved         */
    uint16 FRAMMCR;                                        /* FRAMMCR          */
    uint8  dummy62[6];                                     /* Reserved         */
    uint16 FPROTDR0;                                       /* FPROTDR0         */
    uint8  dummy63[2];                                     /* Reserved         */
    uint32 FPROTCR0;                                       /* FPROTCR0         */
    uint32 FPROTCR1;                                       /* FPROTCR1         */
    uint32 FPROTCR2;                                       /* FPROTCR2         */
    uint32 FPROTCR3;                                       /* FPROTCR3         */
    uint32 FPROTCR4;                                       /* FPROTCR4         */
    uint8  dummy64[8];                                     /* Reserved         */
    const uint32 FSTATR;                                   /* FSTATR           */
    uint16 FENTRYR;                                        /* FENTRYR          */
    uint8  dummy65[6];                                     /* Reserved         */
    uint16 FSUINITR;                                       /* FSUINITR         */
    uint8  dummy66[2];                                     /* Reserved         */
    const uint8  FLKSTAT;                                  /* FLKSTAT          */
    uint8  dummy67[3];                                     /* Reserved         */
    const uint32 FRFSTEADR;                                /* FRFSTEADR        */
    const uint8  FRTSTAT;                                  /* FRTSTAT          */
    uint8  dummy68[3];                                     /* Reserved         */
    uint8  FRTEINT;                                        /* FRTEINT          */
    uint8  dummy69[3];                                     /* Reserved         */
    const uint16 FCMDR;                                    /* FCMDR            */
    uint8  dummy70[14];                                    /* Reserved         */
    uint16 FRAMECCR;                                       /* FRAMECCR         */
    uint8  dummy71[14];                                    /* Reserved         */
    const uint16 FPESTAT;                                  /* FPESTAT          */
    uint8  dummy72[2];                                     /* Reserved         */
    uint16 FCNFPRGCNT;                                     /* FCNFPRGCNT       */
    uint8  dummy73[10];                                    /* Reserved         */
    uint8  FBCCNT;                                         /* FBCCNT           */
    uint8  dummy74[3];                                     /* Reserved         */
    const uint8  FBCSTAT;                                  /* FBCSTAT          */
    uint8  dummy75[3];                                     /* Reserved         */
    const uint32 FPSADDR;                                  /* FPSADDR          */
    uint8  dummy76[4];                                     /* Reserved         */
    uint16 FCPSR;                                          /* FCPSR            */
    uint8  dummy77[2];                                     /* Reserved         */
    uint16 FPCKAR;                                         /* FPCKAR           */
    uint8  dummy78[26];                                    /* Reserved         */
    const uint16 FECCEMON;                                 /* FECCEMON         */
    uint8  dummy79[2];                                     /* Reserved         */
    uint16 FECCTMD;                                        /* FECCTMD          */
    uint8  dummy80[2];                                     /* Reserved         */
    uint16 FDMYECC;                                        /* FDMYECC          */
    uint8  dummy81[32502];                                 /* Reserved         */
} __type66;
typedef struct 
{                                                          /* Module           */
    __type29 CTL;                                          /* CTL              */
    uint8  dummy82[3];                                     /* Reserved         */
    uint16 EN;                                             /* EN               */
    uint8  dummy83[6];                                     /* Reserved         */
    __type30 ENL;                                          /* ENL              */
} __type67;
typedef struct 
{                                                          /* Module           */
    __type29 CTL;                                          /* CTL              */
    uint8  dummy84[3];                                     /* Reserved         */
    uint16 EN;                                             /* EN               */
    uint8  dummy85[6];                                     /* Reserved         */
    __type31 ENL;                                          /* ENL              */
} __type68;
typedef struct 
{                                                          /* Module           */
    __type32 CTL0;                                         /* CTL0             */
    uint8  dummy86[3];                                     /* Reserved         */
    __type33 CTL1;                                         /* CTL1             */
    uint8  dummy87[3];                                     /* Reserved         */
    __type34 CTL2;                                         /* CTL2             */
    uint8  dummy88[3];                                     /* Reserved         */
    __type35 CTL3;                                         /* CTL3             */
    uint8  dummy89[3];                                     /* Reserved         */
    __type36 CTL4;                                         /* CTL4             */
    uint8  dummy90[3];                                     /* Reserved         */
    __type37 CTL5;                                         /* CTL5             */
    uint8  dummy91[3];                                     /* Reserved         */
    __type38 CTL6;                                         /* CTL6             */
    uint8  dummy92[3];                                     /* Reserved         */
    __type39 CTL7;                                         /* CTL7             */
} __type69;
typedef struct 
{                                                          /* Module           */
    __type32 CTL0;                                         /* CTL0             */
    uint8  dummy93[3];                                     /* Reserved         */
    __type33 CTL1;                                         /* CTL1             */
    uint8  dummy94[3];                                     /* Reserved         */
    __type34 CTL2;                                         /* CTL2             */
    uint8  dummy95[3];                                     /* Reserved         */
    __type35 CTL3;                                         /* CTL3             */
    uint8  dummy96[3];                                     /* Reserved         */
    __type36 CTL4;                                         /* CTL4             */
} __type70;
typedef struct 
{                                                          /* Module           */
    __type40 CTL0;                                         /* CTL0             */
    uint8  dummy97[3];                                     /* Reserved         */
    __type41 CTL1;                                         /* CTL1             */
} __type71;
typedef struct 
{                                                          /* Module           */
    __type42 CTL0;                                         /* CTL0             */
    uint8  dummy98[3];                                     /* Reserved         */
    __type43 CTL1;                                         /* CTL1             */
    uint8  dummy99[3];                                     /* Reserved         */
    __type44 CTL2;                                         /* CTL2             */
    uint8  dummy100[3];                                    /* Reserved         */
    __type45 CTL3;                                         /* CTL3             */
    uint8  dummy101[3];                                    /* Reserved         */
    __type46 CTL4;                                         /* CTL4             */
    uint8  dummy102[3];                                    /* Reserved         */
    __type47 CTL5;                                         /* CTL5             */
    uint8  dummy103[3];                                    /* Reserved         */
    __type48 CTL6;                                         /* CTL6             */
    uint8  dummy104[3];                                    /* Reserved         */
    __type49 CTL7;                                         /* CTL7             */
} __type72;
typedef struct 
{                                                          /* Module           */
    __type42 CTL0;                                         /* CTL0             */
    uint8  dummy105[3];                                    /* Reserved         */
    __type43 CTL1;                                         /* CTL1             */
} __type73;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    __type28 PROT02;                                       /* PROT02           */
    __type28 SPID02;                                       /* SPID02           */
    __type28 PROT03;                                       /* PROT03           */
    __type28 SPID03;                                       /* SPID03           */
    __type28 PROT04;                                       /* PROT04           */
    __type28 SPID04;                                       /* SPID04           */
    __type28 PROT05;                                       /* PROT05           */
    __type28 SPID05;                                       /* SPID05           */
} __type74;
typedef struct 
{                                                          /* Module           */
    uint8  CTL;                                            /* CTL              */
    uint8  dummy106[3];                                    /* Reserved         */
    const uint32 STAT;                                     /* STAT             */
    uint8  dummy107[4];                                    /* Reserved         */
    const uint32 TYPE;                                     /* TYPE             */
} __type75;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    __type28 PROT02;                                       /* PROT02           */
    __type28 SPID02;                                       /* SPID02           */
    __type28 PROT03;                                       /* PROT03           */
    __type28 SPID03;                                       /* SPID03           */
} __type76;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
} __type77;
typedef struct 
{                                                          /* Module           */
    uint32 CTL;                                            /* CTL              */
    uint32 TMC;                                            /* TMC              */
    uint32 TRC;                                            /* TRC              */
    uint32 TED;                                            /* TED              */
    const uint32 EAD0;                                     /* EAD0             */
} __type78;
typedef struct 
{                                                          /* Module           */
    __type50 CTL0;                                         /* CTL0             */
    uint8  dummy108[15];                                   /* Reserved         */
    uint32 CTL1;                                           /* CTL1             */
    uint16 CTL2;                                           /* CTL2             */
    uint8  dummy109[4074];                                 /* Reserved         */
    uint32 MCTL1;                                          /* MCTL1            */
    uint32 MCTL2;                                          /* MCTL2            */
    uint32 TX0W;                                           /* TX0W             */
    uint16 TX0H;                                           /* TX0H             */
    uint8  dummy110[2];                                    /* Reserved         */
    const uint32 RX0W;                                     /* RX0W             */
    const uint16 RX0H;                                     /* RX0H             */
    uint8  dummy111[2];                                    /* Reserved         */
    uint32 MRWP0;                                          /* MRWP0            */
    const uint32 STR0;                                     /* STR0             */
    uint16 STCR0;                                          /* STCR0            */
    uint8  dummy112[30];                                   /* Reserved         */
    uint16 MCTL0;                                          /* MCTL0            */
    uint8  dummy113[2];                                    /* Reserved         */
    uint32 CFG0;                                           /* CFG0             */
    uint32 CFG1;                                           /* CFG1             */
    uint32 CFG2;                                           /* CFG2             */
    uint32 CFG3;                                           /* CFG3             */
    uint32 CFG4;                                           /* CFG4             */
    uint32 CFG5;                                           /* CFG5             */
    uint32 CFG6;                                           /* CFG6             */
    uint32 CFG7;                                           /* CFG7             */
    uint8  dummy114[4];                                    /* Reserved         */
    uint16 BRS0;                                           /* BRS0             */
    uint8  dummy115[2];                                    /* Reserved         */
    uint16 BRS1;                                           /* BRS1             */
    uint8  dummy116[2];                                    /* Reserved         */
    uint16 BRS2;                                           /* BRS2             */
    uint8  dummy117[2];                                    /* Reserved         */
    uint16 BRS3;                                           /* BRS3             */
} __type79;
typedef struct 
{                                                          /* Module           */
    uint32 CTL;                                            /* CTL              */
    uint32 TCTL0;                                          /* TCTL0            */
    uint32 TCTL1;                                          /* TCTL1            */
    uint32 TCTL2;                                          /* TCTL2            */
    uint32 TCTL3;                                          /* TCTL3            */
    uint32 TCTL4;                                          /* TCTL4            */
    uint32 TCTL5;                                          /* TCTL5            */
    uint32 TCTL6;                                          /* TCTL6            */
    uint32 TCTL7;                                          /* TCTL7            */
    uint32 TTX0;                                           /* TTX0             */
    uint32 TTX1;                                           /* TTX1             */
    uint32 TTX2;                                           /* TTX2             */
    uint32 TTX3;                                           /* TTX3             */
    uint32 TTX4;                                           /* TTX4             */
    uint32 TTX5;                                           /* TTX5             */
    uint32 TTX6;                                           /* TTX6             */
    uint32 TTX7;                                           /* TTX7             */
    const uint32 RX;                                       /* RX               */
    const uint32 TCNT0;                                    /* TCNT0            */
    const uint32 TCNT1;                                    /* TCNT1            */
    const uint32 TCNT2;                                    /* TCNT2            */
    const uint32 TCNT3;                                    /* TCNT3            */
    const uint32 TCNT4;                                    /* TCNT4            */
    const uint32 TCNT5;                                    /* TCNT5            */
    const uint32 TCNT6;                                    /* TCNT6            */
    const uint32 TCNT7;                                    /* TCNT7            */
    const uint32 STR0;                                     /* STR0             */
    const uint32 STR1;                                     /* STR1             */
    uint32 STC;                                            /* STC              */
} __type80;
typedef struct 
{                                                          /* Module           */
    uint32 CKEN;                                           /* CKEN             */
    uint32 SRST;                                           /* SRST             */
    uint32 EN;                                             /* EN               */
    uint32 MD;                                             /* MD               */
    uint32 CTL;                                            /* CTL              */
    uint32 TDIV;                                           /* TDIV             */
    uint32 TSAR;                                           /* TSAR             */
    uint32 TPFM;                                           /* TPFM             */
    uint32 RDAR;                                           /* RDAR             */
    uint32 RPFM;                                           /* RPFM             */
    uint32 RGFM;                                           /* RGFM             */
    uint32 IREN;                                           /* IREN             */
    const uint32 IRST;                                     /* IRST             */
    __type28 IRCL;                                         /* IRCL             */
    const uint32 CST;                                      /* CST              */
    const uint32 CTFM;                                     /* CTFM             */
    const uint32 CRFM;                                     /* CRFM             */
} __type81;
typedef struct 
{                                                          /* Module           */
    uint8  dummy118[1];                                    /* Reserved         */
    uint8  LWBR;                                           /* LWBR             */
    __type51 LBRP01;                                       /* LBRP01           */
    uint8  LSTC;                                           /* LSTC             */
    uint8  dummy119[3];                                    /* Reserved         */
    uint8  LMD;                                            /* LMD              */
    uint8  LBFC;                                           /* LBFC             */
    uint8  LSC;                                            /* LSC              */
    uint8  LWUP;                                           /* LWUP             */
    uint8  LIE;                                            /* LIE              */
    uint8  LEDE;                                           /* LEDE             */
    uint8  LCUC;                                           /* LCUC             */
    uint8  dummy120[1];                                    /* Reserved         */
    uint8  LTRC;                                           /* LTRC             */
    const uint8  LMST;                                     /* LMST             */
    uint8  LST;                                            /* LST              */
    uint8  LEST;                                           /* LEST             */
    uint8  LDFC;                                           /* LDFC             */
    uint8  LIDB;                                           /* LIDB             */
    uint8  LCBR;                                           /* LCBR             */
    uint8  LUDB0;                                          /* LUDB0            */
    uint8  LDBR1;                                          /* LDBR1            */
    uint8  LDBR2;                                          /* LDBR2            */
    uint8  LDBR3;                                          /* LDBR3            */
    uint8  LDBR4;                                          /* LDBR4            */
    uint8  LDBR5;                                          /* LDBR5            */
    uint8  LDBR6;                                          /* LDBR6            */
    uint8  LDBR7;                                          /* LDBR7            */
    uint8  LDBR8;                                          /* LDBR8            */
    uint8  LUOER;                                          /* LUOER            */
    uint8  LUOR1;                                          /* LUOR1            */
    uint8  dummy121[2];                                    /* Reserved         */
    __type52 LUTDR;                                        /* LUTDR            */
    const __type52 LURDR;                                  /* LURDR            */
    __type52 LUWTDR;                                       /* LUWTDR           */
} __type82;
typedef struct 
{                                                          /* Module           */
    __type28 TSPC;                                         /* TSPC             */
    __type28 TSC;                                          /* TSC              */
    uint8  dummy122[8];                                    /* Reserved         */
    __type28 CC;                                           /* CC               */
    __type28 BRP;                                          /* BRP              */
    __type28 IDE;                                          /* IDE              */
    __type28 MDC;                                          /* MDC              */
    __type28 SPCT;                                         /* SPCT             */
    const __type28 MST;                                    /* MST              */
    const __type28 CS;                                     /* CS               */
    __type28 CSC;                                          /* CSC              */
    const __type28 SRTS;                                   /* SRTS             */
    const uint32 SRXD;                                     /* SRXD             */
    const __type28 CPL;                                    /* CPL              */
    const __type28 ML;                                     /* ML               */
    const __type28 FRTS;                                   /* FRTS             */
    const uint32 FRXD;                                     /* FRXD             */
} __type83;
typedef struct 
{                                                          /* Module           */
    uint32 TSPC;                                           /* TSPC             */
} __type84;
typedef struct 
{                                                          /* Module           */
    uint8  R0;                                             /* R0               */
    uint8  dummy123[3];                                    /* Reserved         */
    uint8  R1;                                             /* R1               */
    uint8  dummy124[3];                                    /* Reserved         */
    uint8  R2;                                             /* R2               */
} __type85;
typedef struct 
{                                                          /* Module           */
    const __type28 CREL;                                   /* CREL             */
    const __type28 ENDN;                                   /* ENDN             */
    uint8  dummy125[4];                                    /* Reserved         */
    __type53 DBTP;                                         /* DBTP             */
    __type28 TEST;                                         /* TEST             */
    __type28 RWD;                                          /* RWD              */
    __type28 CCCR;                                         /* CCCR             */
    __type54 BTP;                                          /* BTP              */
    uint8  dummy126[4];                                    /* Reserved         */
    __type28 TSCV;                                         /* TSCV             */
    __type28 TOCC;                                         /* TOCC             */
    __type28 TOCV;                                         /* TOCV             */
    uint8  dummy127[16];                                   /* Reserved         */
    const __type28 ECR;                                    /* ECR              */
    const __type28 PSR;                                    /* PSR              */
    const __type28 TDCR;                                   /* TDCR             */
    uint8  dummy128[4];                                    /* Reserved         */
    __type28 IR;                                           /* IR               */
    __type28 IE;                                           /* IE               */
    __type28 ILS;                                          /* ILS              */
    __type28 ILE;                                          /* ILE              */
    uint8  dummy129[32];                                   /* Reserved         */
    __type28 GFC;                                          /* GFC              */
    __type28 SIDFC;                                        /* SIDFC            */
    __type28 XIDFC;                                        /* XIDFC            */
    uint8  dummy130[4];                                    /* Reserved         */
    __type28 XIDAM;                                        /* XIDAM            */
    const __type28 HPMS;                                   /* HPMS             */
    __type28 NDAT1;                                        /* NDAT1            */
    __type28 NDAT2;                                        /* NDAT2            */
    __type28 RXF0C;                                        /* RXF0C            */
    const __type28 RXF0S;                                  /* RXF0S            */
    __type28 RXF0A;                                        /* RXF0A            */
    __type28 RXBC;                                         /* RXBC             */
    __type28 RXF1C;                                        /* RXF1C            */
    const __type28 RXF1S;                                  /* RXF1S            */
    __type28 RXF1A;                                        /* RXF1A            */
    __type28 RXESC;                                        /* RXESC            */
    __type28 TXBC;                                         /* TXBC             */
    const __type28 TXFQS;                                  /* TXFQS            */
    __type28 TXESC;                                        /* TXESC            */
    const __type28 TXBRP;                                  /* TXBRP            */
    __type28 TXBAR;                                        /* TXBAR            */
    __type28 TXBCR;                                        /* TXBCR            */
    const __type28 TXBTO;                                  /* TXBTO            */
    const __type28 TXBCF;                                  /* TXBCF            */
    __type28 TXBTIE;                                       /* TXBTIE           */
    __type28 TXBCIE;                                       /* TXBCIE           */
    uint8  dummy131[8];                                    /* Reserved         */
    __type28 TXEFC;                                        /* TXEFC            */
    const __type28 TXEFS;                                  /* TXEFS            */
    __type28 TXEFA;                                        /* TXEFA            */
    uint8  dummy132[4];                                    /* Reserved         */
    __type28 TTTMC;                                        /* TTTMC            */
    __type28 TTRMC;                                        /* TTRMC            */
    __type28 TTOCF;                                        /* TTOCF            */
    __type28 TTMLM;                                        /* TTMLM            */
    __type28 TURCF;                                        /* TURCF            */
    __type28 TTOCN;                                        /* TTOCN            */
    __type28 TTGTP;                                        /* TTGTP            */
    __type28 TTTMK;                                        /* TTTMK            */
    __type28 TTIR;                                         /* TTIR             */
    __type28 TTIE;                                         /* TTIE             */
    __type28 TTILS;                                        /* TTILS            */
    const __type28 TTOST;                                  /* TTOST            */
    const __type28 TURNA;                                  /* TURNA            */
    const __type28 TTLGT;                                  /* TTLGT            */
    const __type28 TTCTC;                                  /* TTCTC            */
    const __type28 TTCPT;                                  /* TTCPT            */
    const __type28 TTCSM;                                  /* TTCSM            */
} __type86;
typedef struct 
{                                                          /* Module           */
    const __type28 CREL;                                   /* CREL             */
    const __type28 ENDN;                                   /* ENDN             */
    uint8  dummy133[4];                                    /* Reserved         */
    __type53 DBTP;                                         /* DBTP             */
    uint8  dummy134[4];                                    /* Reserved         */
    __type28 RWD;                                          /* RWD              */
    __type28 CCCR;                                         /* CCCR             */
    __type54 BTP;                                          /* BTP              */
    __type28 TSCC;                                         /* TSCC             */
    __type28 TSCV;                                         /* TSCV             */
    __type28 TOCC;                                         /* TOCC             */
    __type28 TOCV;                                         /* TOCV             */
    uint8  dummy135[16];                                   /* Reserved         */
    const __type28 ECR;                                    /* ECR              */
    const __type28 PSR;                                    /* PSR              */
    const __type28 TDCR;                                   /* TDCR             */
    uint8  dummy136[4];                                    /* Reserved         */
    __type28 IR;                                           /* IR               */
    __type28 IE;                                           /* IE               */
    __type28 ILS;                                          /* ILS              */
    __type28 ILE;                                          /* ILE              */
    uint8  dummy137[32];                                   /* Reserved         */
    __type28 GFC;                                          /* GFC              */
    __type28 SIDFC;                                        /* SIDFC            */
    __type28 XIDFC;                                        /* XIDFC            */
    uint8  dummy138[4];                                    /* Reserved         */
    __type28 XIDAM;                                        /* XIDAM            */
    const __type28 HPMS;                                   /* HPMS             */
    __type28 NDAT1;                                        /* NDAT1            */
    __type28 NDAT2;                                        /* NDAT2            */
    __type28 RXF0C;                                        /* RXF0C            */
    const __type28 RXF0S;                                  /* RXF0S            */
    __type28 RXF0A;                                        /* RXF0A            */
    __type28 RXBC;                                         /* RXBC             */
    __type28 RXF1C;                                        /* RXF1C            */
    const __type28 RXF1S;                                  /* RXF1S            */
    __type28 RXF1A;                                        /* RXF1A            */
    __type28 RXESC;                                        /* RXESC            */
    __type28 TXBC;                                         /* TXBC             */
    const __type28 TXFQS;                                  /* TXFQS            */
    __type28 TXESC;                                        /* TXESC            */
    const __type28 TXBRP;                                  /* TXBRP            */
    __type28 TXBAR;                                        /* TXBAR            */
    __type28 TXBCR;                                        /* TXBCR            */
    const __type28 TXBTO;                                  /* TXBTO            */
    const __type28 TXBCF;                                  /* TXBCF            */
    __type28 TXBTIE;                                       /* TXBTIE           */
    __type28 TXBCIE;                                       /* TXBCIE           */
    uint8  dummy139[8];                                    /* Reserved         */
    __type28 TXEFC;                                        /* TXEFC            */
    const __type28 TXEFS;                                  /* TXEFS            */
    __type28 TXEFA;                                        /* TXEFA            */
} __type87;
typedef struct 
{                                                          /* Module           */
    uint32 CIN;                                            /* CIN              */
    uint32 COUT;                                           /* COUT             */
    uint8  dummy140[24];                                   /* Reserved         */
    uint8  CTL;                                            /* CTL              */
} __type88;
typedef struct 
{                                                          /* Module           */
    uint32 ESET;                                           /* ESET             */
    uint32 ECLR;                                           /* ECLR             */
    const uint32 ESSTR0;                                   /* ESSTR0           */
    const uint32 ESSTR1;                                   /* ESSTR1           */
    const uint32 ESSTR2;                                   /* ESSTR2           */
    uint32 PCMD0;                                          /* PCMD0            */
} __type89;
typedef struct 
{                                                          /* Module           */
    uint32 EPCFG;                                          /* EPCFG            */
    uint32 MICFG0;                                         /* MICFG0           */
    uint32 MICFG1;                                         /* MICFG1           */
    uint32 MICFG2;                                         /* MICFG2           */
    uint32 NMICFG0;                                        /* NMICFG0          */
    uint32 NMICFG1;                                        /* NMICFG1          */
    uint32 NMICFG2;                                        /* NMICFG2          */
    uint32 IRCFG0;                                         /* IRCFG0           */
    uint32 IRCFG1;                                         /* IRCFG1           */
    uint32 IRCFG2;                                         /* IRCFG2           */
    uint32 EMK0;                                           /* EMK0             */
    uint32 EMK1;                                           /* EMK1             */
    uint32 EMK2;                                           /* EMK2             */
    uint32 ESSTC0;                                         /* ESSTC0           */
    uint32 ESSTC1;                                         /* ESSTC1           */
    uint32 ESSTC2;                                         /* ESSTC2           */
    uint32 PCMD1;                                          /* PCMD1            */
    const uint8  PS;                                       /* PS               */
    uint8  dummy141[3];                                    /* Reserved         */
    uint32 PE0;                                            /* PE0              */
    uint32 PE1;                                            /* PE1              */
    uint32 PE2;                                            /* PE2              */
    uint32 DTMCTL;                                         /* DTMCTL           */
    const uint16 DTMR;                                     /* DTMR             */
    uint8  dummy142[2];                                    /* Reserved         */
    uint32 DTMCMP;                                         /* DTMCMP           */
    uint32 DTMCFG0;                                        /* DTMCFG0          */
    uint32 DTMCFG1;                                        /* DTMCFG1          */
    uint32 DTMCFG2;                                        /* DTMCFG2          */
    uint32 DTMCFG3;                                        /* DTMCFG3          */
    uint32 DTMCFG4;                                        /* DTMCFG4          */
    uint32 DTMCFG5;                                        /* DTMCFG5          */
    uint32 EOCCFG;                                         /* EOCCFG           */
    uint32 PEM;                                            /* PEM              */
} __type90;
typedef struct 
{                                                          /* Module           */
    uint32 TRGPREMUX0;                                     /* TRGPREMUX0       */
    uint32 TRGPREMUX1;                                     /* TRGPREMUX1       */
    uint8  dummy143[8];                                    /* Reserved         */
    uint32 TRGMUX0;                                        /* TRGMUX0          */
    uint32 TRGMUX1;                                        /* TRGMUX1          */
    uint32 EDGSEL0;                                        /* EDGSEL0          */
    uint32 EDGSEL1;                                        /* EDGSEL1          */
    uint32 ENP2TIM0;                                       /* ENP2TIM0         */
    uint32 ENP2TIM1;                                       /* ENP2TIM1         */
    uint32 ENHIZDTM;                                       /* ENHIZDTM         */
} __type91;
typedef struct 
{                                                          /* Module           */
    __type55 CKSEL;                                        /* CKSEL            */
    uint8  dummy144[12];                                   /* Reserved         */
    __type55 TS;                                           /* TS               */
    __type55 TT;                                           /* TT               */
    const __type55 CSTR;                                   /* CSTR             */
    uint8  dummy145[4];                                    /* Reserved         */
    const uint32 STR;                                      /* STR              */
    uint32 STC;                                            /* STC              */
    uint8  dummy146[8];                                    /* Reserved         */
    __type55 IS;                                           /* IS               */
    __type55 RM;                                           /* RM               */
    uint8  dummy147[8];                                    /* Reserved         */
    uint32 CNT0L;                                          /* CNT0L            */
    uint32 CNT0H;                                          /* CNT0H            */
    uint8  dummy148[8];                                    /* Reserved         */
    uint32 CMP0AL;                                         /* CMP0AL           */
    uint32 CMP0AH;                                         /* CMP0AH           */
    uint32 CMP0BL;                                         /* CMP0BL           */
    uint32 CMP0BH;                                         /* CMP0BH           */
    uint32 CMP0CL;                                         /* CMP0CL           */
    uint32 CMP0CH;                                         /* CMP0CH           */
    uint32 CMP0DL;                                         /* CMP0DL           */
    uint32 CMP0DH;                                         /* CMP0DH           */
    uint32 CNT1;                                           /* CNT1             */
    uint8  dummy149[12];                                   /* Reserved         */
    uint32 CMP1A;                                          /* CMP1A            */
    uint32 CMP1B;                                          /* CMP1B            */
    uint32 CMP1C;                                          /* CMP1C            */
    uint32 CMP1D;                                          /* CMP1D            */
    uint32 CNT2;                                           /* CNT2             */
    uint8  dummy150[12];                                   /* Reserved         */
    uint32 CMP2A;                                          /* CMP2A            */
    uint32 CMP2B;                                          /* CMP2B            */
    uint32 CMP2C;                                          /* CMP2C            */
    uint32 CMP2D;                                          /* CMP2D            */
    uint32 CNT3;                                           /* CNT3             */
    uint8  dummy151[12];                                   /* Reserved         */
    uint32 CMP3A;                                          /* CMP3A            */
    uint32 CMP3B;                                          /* CMP3B            */
    uint32 CMP3C;                                          /* CMP3C            */
    uint32 CMP3D;                                          /* CMP3D            */
} __type92;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    __type28 PROT02;                                       /* PROT02           */
    __type28 SPID02;                                       /* SPID02           */
    __type28 PROT03;                                       /* PROT03           */
    __type28 SPID03;                                       /* SPID03           */
    __type28 PROT04;                                       /* PROT04           */
    __type28 SPID04;                                       /* SPID04           */
    __type28 PROT05;                                       /* PROT05           */
    __type28 SPID05;                                       /* SPID05           */
    __type28 PROT06;                                       /* PROT06           */
    __type28 SPID06;                                       /* SPID06           */
    __type28 PROT07;                                       /* PROT07           */
    __type28 SPID07;                                       /* SPID07           */
    uint8  dummy152[16];                                   /* Reserved         */
    __type28 PROT10;                                       /* PROT10           */
    __type28 SPID10;                                       /* SPID10           */
    __type28 PROT11;                                       /* PROT11           */
    __type28 SPID11;                                       /* SPID11           */
} __type93;
typedef struct 
{                                                          /* Module           */
    const uint32 GTMREV;                                   /* GTMREV           */
    uint32 GTMRST;                                         /* GTMRST           */
    uint32 GTMCTRL;                                        /* GTMCTRL          */
    const uint32 GTMAEIADDRXPT;                            /* GTMAEIADDRXPT    */
    uint32 GTMIRQNOTIFY;                                   /* GTMIRQNOTIFY     */
    uint32 GTMIRQEN;                                       /* GTMIRQEN         */
    uint32 GTMIRQFORCINT;                                  /* GTMIRQFORCINT    */
    uint32 GTMIRQMODE;                                     /* GTMIRQMODE       */
    uint32 GTMEIRQEN;                                      /* GTMEIRQEN        */
    const uint32 GTMHWCONF;                                /* GTMHWCONF        */
    uint8  dummy153[8];                                    /* Reserved         */
    uint32 GTMBRIDGEMODE;                                  /* GTMBRIDGEMODE    */
    const uint32 GTMBRIDGEPTR1;                            /* GTMBRIDGEPTR1    */
    const uint32 GTMBRIDGEPTR2;                            /* GTMBRIDGEPTR2    */
    uint8  dummy154[4];                                    /* Reserved         */
    uint32 GTMTIM0AUXINSRC;                                /* GTMTIM0AUXINSRC  */
    uint32 GTMTIM1AUXINSRC;                                /* GTMTIM1AUXINSRC  */
    uint8  dummy155[20];                                   /* Reserved         */
    uint32 GTMEXTCAPEN0;                                   /* GTMEXTCAPEN0     */
    uint8  dummy156[56];                                   /* Reserved         */
    const uint32 GTMATOM0OUT;                              /* GTMATOM0OUT      */
    uint8  dummy157[100];                                  /* Reserved         */
    uint32 TBUCHEN;                                        /* TBUCHEN          */
    uint32 TBU0CTRL;                                       /* TBU0CTRL         */
    uint32 TBU0BASE;                                       /* TBU0BASE         */
    uint32 TBU1CTRL;                                       /* TBU1CTRL         */
    uint32 TBU1BASE;                                       /* TBU1BASE         */
    uint8  dummy158[108];                                  /* Reserved         */
    uint32 MONSTATUS;                                      /* MONSTATUS        */
    uint32 MONACTIVITY0;                                   /* MONACTIVITY0     */
    uint8  dummy159[4];                                    /* Reserved         */
    uint32 MONACTIVITYMCS0;                                /* MONACTIVITYMCS0  */
    uint8  dummy160[112];                                  /* Reserved         */
    uint32 CMPEN;                                          /* CMPEN            */
    uint32 CMPIRQNOTIFY;                                   /* CMPIRQNOTIFY     */
    uint32 CMPIRQEN;                                       /* CMPIRQEN         */
    uint32 CMPIRQFORCINT;                                  /* CMPIRQFORCINT    */
    uint32 CMPIRQMODE;                                     /* CMPIRQMODE       */
    uint32 CMPEIRQEN;                                      /* CMPEIRQEN        */
    uint8  dummy161[104];                                  /* Reserved         */
    uint32 ARUACCESS;                                      /* ARUACCESS        */
    uint32 ARUDATAH;                                       /* ARUDATAH         */
    uint32 ARUDATAL;                                       /* ARUDATAL         */
    uint32 ARUDBGACCESS0;                                  /* ARUDBGACCESS0    */
    const uint32 ARUDBGDATA0H;                             /* ARUDBGDATA0H     */
    const uint32 ARUDBGDATA0L;                             /* ARUDBGDATA0L     */
    uint32 ARUDBGACCESS1;                                  /* ARUDBGACCESS1    */
    const uint32 ARUDBGDATA1H;                             /* ARUDBGDATA1H     */
    const uint32 ARUDBGDATA1L;                             /* ARUDBGDATA1L     */
    uint32 ARUIRQNOTIFY;                                   /* ARUIRQNOTIFY     */
    uint32 ARUIRQEN;                                       /* ARUIRQEN         */
    uint32 ARUIRQFORCINT;                                  /* ARUIRQFORCINT    */
    uint32 ARUIRQMODE;                                     /* ARUIRQMODE       */
    uint32 ARUCADDREND;                                    /* ARUCADDREND      */
    uint8  dummy162[72];                                   /* Reserved         */
    uint32 CMUCLKEN;                                       /* CMUCLKEN         */
    uint32 CMUGCLKNUM;                                     /* CMUGCLKNUM       */
    uint32 CMUGCLKDEN;                                     /* CMUGCLKDEN       */
    uint32 CMUCLK0CTRL;                                    /* CMUCLK0CTRL      */
    uint32 CMUCLK1CTRL;                                    /* CMUCLK1CTRL      */
    uint32 CMUCLK2CTRL;                                    /* CMUCLK2CTRL      */
    uint32 CMUCLK3CTRL;                                    /* CMUCLK3CTRL      */
    uint32 CMUCLK4CTRL;                                    /* CMUCLK4CTRL      */
    uint32 CMUCLK5CTRL;                                    /* CMUCLK5CTRL      */
    uint32 CMUCLK6CTRL;                                    /* CMUCLK6CTRL      */
    uint32 CMUCLK7CTRL;                                    /* CMUCLK7CTRL      */
    uint8  dummy163[28];                                   /* Reserved         */
    uint32 CMUGLBCTRL;                                     /* CMUGLBCTRL       */
    uint8  dummy164[692];                                  /* Reserved         */
    const uint32 ICMIRQG0;                                 /* ICMIRQG0         */
    uint8  dummy165[4];                                    /* Reserved         */
    const uint32 ICMIRQG2;                                 /* ICMIRQG2         */
    uint8  dummy166[4];                                    /* Reserved         */
    const uint32 ICMIRQG4;                                 /* ICMIRQG4         */
    uint8  dummy167[16];                                   /* Reserved         */
    const uint32 ICMIRQG9;                                 /* ICMIRQG9         */
    uint8  dummy168[8];                                    /* Reserved         */
    const uint32 ICMIRQGMEI;                               /* ICMIRQGMEI       */
    uint8  dummy169[4];                                    /* Reserved         */
    const uint32 ICMIRQGCEI1;                              /* ICMIRQGCEI1      */
    uint8  dummy170[4];                                    /* Reserved         */
    const uint32 ICMIRQGCEI3;                              /* ICMIRQGCEI3      */
    uint8  dummy171[4];                                    /* Reserved         */
    const uint32 ICMIRQGMCS0CI;                            /* ICMIRQGMCS0CI    */
    uint8  dummy172[24];                                   /* Reserved         */
    const uint32 ICMIRQGMCS0CEI;                           /* ICMIRQGMCS0CEI   */
    uint8  dummy173[2456];                                 /* Reserved         */
    const uint32 TIM00GPR0;                                /* TIM00GPR0        */
    uint32 TIM00GPR1;                                      /* TIM00GPR1        */
    const uint32 TIM00CNT;                                 /* TIM00CNT         */
    const uint32 TIM00ECNT;                                /* TIM00ECNT        */
    uint32 TIM00CNTS;                                      /* TIM00CNTS        */
    const uint32 TIM00TDUC;                                /* TIM00TDUC        */
    uint32 TIM00TDUV;                                      /* TIM00TDUV        */
    uint32 TIM00FLTRE;                                     /* TIM00FLTRE       */
    uint32 TIM00FLTFE;                                     /* TIM00FLTFE       */
    uint32 TIM00CTRL;                                      /* TIM00CTRL        */
    uint32 TIM00ECTRL;                                     /* TIM00ECTRL       */
    uint32 TIM00IRQNOTIFY;                                 /* TIM00IRQNOTIFY   */
    uint32 TIM00IRQEN;                                     /* TIM00IRQEN       */
    uint32 TIM00IRQFORCINT;                                /* TIM00IRQFORCINT  */
    uint32 TIM00IRQMODE;                                   /* TIM00IRQMODE     */
    uint32 TIM00EIRQEN;                                    /* TIM00EIRQEN      */
    uint8  dummy174[52];                                   /* Reserved         */
    const uint32 TIM0INPVAL;                               /* TIM0INPVAL       */
    uint32 TIM0INSRC;                                      /* TIM0INSRC        */
    uint32 TIM0RST;                                        /* TIM0RST          */
    const uint32 TIM01GPR0;                                /* TIM01GPR0        */
    uint32 TIM01GPR1;                                      /* TIM01GPR1        */
    const uint32 TIM01CNT;                                 /* TIM01CNT         */
    const uint32 TIM01ECNT;                                /* TIM01ECNT        */
    uint32 TIM01CNTS;                                      /* TIM01CNTS        */
    const uint32 TIM01TDUC;                                /* TIM01TDUC        */
    uint32 TIM01TDUV;                                      /* TIM01TDUV        */
    uint32 TIM01FLTRE;                                     /* TIM01FLTRE       */
    uint32 TIM01FLTFE;                                     /* TIM01FLTFE       */
    uint32 TIM01CTRL;                                      /* TIM01CTRL        */
    uint32 TIM01ECTRL;                                     /* TIM01ECTRL       */
    uint32 TIM01IRQNOTIFY;                                 /* TIM01IRQNOTIFY   */
    uint32 TIM01IRQEN;                                     /* TIM01IRQEN       */
    uint32 TIM01IRQFORCINT;                                /* TIM01IRQFORCINT  */
    uint32 TIM01IRQMODE;                                   /* TIM01IRQMODE     */
    uint32 TIM01EIRQEN;                                    /* TIM01EIRQEN      */
    uint8  dummy175[64];                                   /* Reserved         */
    const uint32 TIM02GPR0;                                /* TIM02GPR0        */
    uint32 TIM02GPR1;                                      /* TIM02GPR1        */
    const uint32 TIM02CNT;                                 /* TIM02CNT         */
    const uint32 TIM02ECNT;                                /* TIM02ECNT        */
    uint32 TIM02CNTS;                                      /* TIM02CNTS        */
    const uint32 TIM02TDUC;                                /* TIM02TDUC        */
    uint32 TIM02TDUV;                                      /* TIM02TDUV        */
    uint32 TIM02FLTRE;                                     /* TIM02FLTRE       */
    uint32 TIM02FLTFE;                                     /* TIM02FLTFE       */
    uint32 TIM02CTRL;                                      /* TIM02CTRL        */
    uint32 TIM02ECTRL;                                     /* TIM02ECTRL       */
    uint32 TIM02IRQNOTIFY;                                 /* TIM02IRQNOTIFY   */
    uint32 TIM02IRQEN;                                     /* TIM02IRQEN       */
    uint32 TIM02IRQFORCINT;                                /* TIM02IRQFORCINT  */
    uint32 TIM02IRQMODE;                                   /* TIM02IRQMODE     */
    uint32 TIM02EIRQEN;                                    /* TIM02EIRQEN      */
    uint8  dummy176[64];                                   /* Reserved         */
    const uint32 TIM03GPR0;                                /* TIM03GPR0        */
    uint32 TIM03GPR1;                                      /* TIM03GPR1        */
    const uint32 TIM03CNT;                                 /* TIM03CNT         */
    const uint32 TIM03ECNT;                                /* TIM03ECNT        */
    uint32 TIM03CNTS;                                      /* TIM03CNTS        */
    const uint32 TIM03TDUC;                                /* TIM03TDUC        */
    uint32 TIM03TDUV;                                      /* TIM03TDUV        */
    uint32 TIM03FLTRE;                                     /* TIM03FLTRE       */
    uint32 TIM03FLTFE;                                     /* TIM03FLTFE       */
    uint32 TIM03CTRL;                                      /* TIM03CTRL        */
    uint32 TIM03ECTRL;                                     /* TIM03ECTRL       */
    uint32 TIM03IRQNOTIFY;                                 /* TIM03IRQNOTIFY   */
    uint32 TIM03IRQEN;                                     /* TIM03IRQEN       */
    uint32 TIM03IRQFORCINT;                                /* TIM03IRQFORCINT  */
    uint32 TIM03IRQMODE;                                   /* TIM03IRQMODE     */
    uint32 TIM03EIRQEN;                                    /* TIM03EIRQEN      */
    uint8  dummy177[64];                                   /* Reserved         */
    const uint32 TIM04GPR0;                                /* TIM04GPR0        */
    uint32 TIM04GPR1;                                      /* TIM04GPR1        */
    const uint32 TIM04CNT;                                 /* TIM04CNT         */
    const uint32 TIM04ECNT;                                /* TIM04ECNT        */
    uint32 TIM04CNTS;                                      /* TIM04CNTS        */
    const uint32 TIM04TDUC;                                /* TIM04TDUC        */
    uint32 TIM04TDUV;                                      /* TIM04TDUV        */
    uint32 TIM04FLTRE;                                     /* TIM04FLTRE       */
    uint32 TIM04FLTFE;                                     /* TIM04FLTFE       */
    uint32 TIM04CTRL;                                      /* TIM04CTRL        */
    uint32 TIM04ECTRL;                                     /* TIM04ECTRL       */
    uint32 TIM04IRQNOTIFY;                                 /* TIM04IRQNOTIFY   */
    uint32 TIM04IRQEN;                                     /* TIM04IRQEN       */
    uint32 TIM04IRQFORCINT;                                /* TIM04IRQFORCINT  */
    uint32 TIM04IRQMODE;                                   /* TIM04IRQMODE     */
    uint32 TIM04EIRQEN;                                    /* TIM04EIRQEN      */
    uint8  dummy178[64];                                   /* Reserved         */
    const uint32 TIM05GPR0;                                /* TIM05GPR0        */
    uint32 TIM05GPR1;                                      /* TIM05GPR1        */
    const uint32 TIM05CNT;                                 /* TIM05CNT         */
    const uint32 TIM05ECNT;                                /* TIM05ECNT        */
    uint32 TIM05CNTS;                                      /* TIM05CNTS        */
    const uint32 TIM05TDUC;                                /* TIM05TDUC        */
    uint32 TIM05TDUV;                                      /* TIM05TDUV        */
    uint32 TIM05FLTRE;                                     /* TIM05FLTRE       */
    uint32 TIM05FLTFE;                                     /* TIM05FLTFE       */
    uint32 TIM05CTRL;                                      /* TIM05CTRL        */
    uint32 TIM05ECTRL;                                     /* TIM05ECTRL       */
    uint32 TIM05IRQNOTIFY;                                 /* TIM05IRQNOTIFY   */
    uint32 TIM05IRQEN;                                     /* TIM05IRQEN       */
    uint32 TIM05IRQFORCINT;                                /* TIM05IRQFORCINT  */
    uint32 TIM05IRQMODE;                                   /* TIM05IRQMODE     */
    uint32 TIM05EIRQEN;                                    /* TIM05EIRQEN      */
    uint8  dummy179[64];                                   /* Reserved         */
    const uint32 TIM06GPR0;                                /* TIM06GPR0        */
    uint32 TIM06GPR1;                                      /* TIM06GPR1        */
    const uint32 TIM06CNT;                                 /* TIM06CNT         */
    const uint32 TIM06ECNT;                                /* TIM06ECNT        */
    uint32 TIM06CNTS;                                      /* TIM06CNTS        */
    const uint32 TIM06TDUC;                                /* TIM06TDUC        */
    uint32 TIM06TDUV;                                      /* TIM06TDUV        */
    uint32 TIM06FLTRE;                                     /* TIM06FLTRE       */
    uint32 TIM06FLTFE;                                     /* TIM06FLTFE       */
    uint32 TIM06CTRL;                                      /* TIM06CTRL        */
    uint32 TIM06ECTRL;                                     /* TIM06ECTRL       */
    uint32 TIM06IRQNOTIFY;                                 /* TIM06IRQNOTIFY   */
    uint32 TIM06IRQEN;                                     /* TIM06IRQEN       */
    uint32 TIM06IRQFORCINT;                                /* TIM06IRQFORCINT  */
    uint32 TIM06IRQMODE;                                   /* TIM06IRQMODE     */
    uint32 TIM06EIRQEN;                                    /* TIM06EIRQEN      */
    uint8  dummy180[64];                                   /* Reserved         */
    const uint32 TIM07GPR0;                                /* TIM07GPR0        */
    uint32 TIM07GPR1;                                      /* TIM07GPR1        */
    const uint32 TIM07CNT;                                 /* TIM07CNT         */
    const uint32 TIM07ECNT;                                /* TIM07ECNT        */
    uint32 TIM07CNTS;                                      /* TIM07CNTS        */
    const uint32 TIM07TDUC;                                /* TIM07TDUC        */
    uint32 TIM07TDUV;                                      /* TIM07TDUV        */
    uint32 TIM07FLTRE;                                     /* TIM07FLTRE       */
    uint32 TIM07FLTFE;                                     /* TIM07FLTFE       */
    uint32 TIM07CTRL;                                      /* TIM07CTRL        */
    uint32 TIM07ECTRL;                                     /* TIM07ECTRL       */
    uint32 TIM07IRQNOTIFY;                                 /* TIM07IRQNOTIFY   */
    uint32 TIM07IRQEN;                                     /* TIM07IRQEN       */
    uint32 TIM07IRQFORCINT;                                /* TIM07IRQFORCINT  */
    uint32 TIM07IRQMODE;                                   /* TIM07IRQMODE     */
    uint32 TIM07EIRQEN;                                    /* TIM07EIRQEN      */
    uint8  dummy181[1088];                                 /* Reserved         */
    const uint32 TIM10GPR0;                                /* TIM10GPR0        */
    uint32 TIM10GPR1;                                      /* TIM10GPR1        */
    const uint32 TIM10CNT;                                 /* TIM10CNT         */
    const uint32 TIM10ECNT;                                /* TIM10ECNT        */
    uint32 TIM10CNTS;                                      /* TIM10CNTS        */
    const uint32 TIM10TDUC;                                /* TIM10TDUC        */
    uint32 TIM10TDUV;                                      /* TIM10TDUV        */
    uint32 TIM10FLTRE;                                     /* TIM10FLTRE       */
    uint32 TIM10FLTFE;                                     /* TIM10FLTFE       */
    uint32 TIM10CTRL;                                      /* TIM10CTRL        */
    uint32 TIM10ECTRL;                                     /* TIM10ECTRL       */
    uint32 TIM10IRQNOTIFY;                                 /* TIM10IRQNOTIFY   */
    uint32 TIM10IRQEN;                                     /* TIM10IRQEN       */
    uint32 TIM10IRQFORCINT;                                /* TIM10IRQFORCINT  */
    uint32 TIM10IRQMODE;                                   /* TIM10IRQMODE     */
    uint32 TIM10EIRQEN;                                    /* TIM10EIRQEN      */
    uint8  dummy182[52];                                   /* Reserved         */
    const uint32 TIM1INPVAL;                               /* TIM1INPVAL       */
    uint32 TIM1INSRC;                                      /* TIM1INSRC        */
    uint32 TIM1RST;                                        /* TIM1RST          */
    const uint32 TIM11GPR0;                                /* TIM11GPR0        */
    uint32 TIM11GPR1;                                      /* TIM11GPR1        */
    const uint32 TIM11CNT;                                 /* TIM11CNT         */
    const uint32 TIM11ECNT;                                /* TIM11ECNT        */
    uint32 TIM11CNTS;                                      /* TIM11CNTS        */
    const uint32 TIM11TDUC;                                /* TIM11TDUC        */
    uint32 TIM11TDUV;                                      /* TIM11TDUV        */
    uint32 TIM11FLTRE;                                     /* TIM11FLTRE       */
    uint32 TIM11FLTFE;                                     /* TIM11FLTFE       */
    uint32 TIM11CTRL;                                      /* TIM11CTRL        */
    uint32 TIM11ECTRL;                                     /* TIM11ECTRL       */
    uint32 TIM11IRQNOTIFY;                                 /* TIM11IRQNOTIFY   */
    uint32 TIM11IRQEN;                                     /* TIM11IRQEN       */
    uint32 TIM11IRQFORCINT;                                /* TIM11IRQFORCINT  */
    uint32 TIM11IRQMODE;                                   /* TIM11IRQMODE     */
    uint32 TIM11EIRQEN;                                    /* TIM11EIRQEN      */
    uint8  dummy183[64];                                   /* Reserved         */
    const uint32 TIM12GPR0;                                /* TIM12GPR0        */
    uint32 TIM12GPR1;                                      /* TIM12GPR1        */
    const uint32 TIM12CNT;                                 /* TIM12CNT         */
    const uint32 TIM12ECNT;                                /* TIM12ECNT        */
    uint32 TIM12CNTS;                                      /* TIM12CNTS        */
    const uint32 TIM12TDUC;                                /* TIM12TDUC        */
    uint32 TIM12TDUV;                                      /* TIM12TDUV        */
    uint32 TIM12FLTRE;                                     /* TIM12FLTRE       */
    uint32 TIM12FLTFE;                                     /* TIM12FLTFE       */
    uint32 TIM12CTRL;                                      /* TIM12CTRL        */
    uint32 TIM12ECTRL;                                     /* TIM12ECTRL       */
    uint32 TIM12IRQNOTIFY;                                 /* TIM12IRQNOTIFY   */
    uint32 TIM12IRQEN;                                     /* TIM12IRQEN       */
    uint32 TIM12IRQFORCINT;                                /* TIM12IRQFORCINT  */
    uint32 TIM12IRQMODE;                                   /* TIM12IRQMODE     */
    uint32 TIM12EIRQEN;                                    /* TIM12EIRQEN      */
    uint8  dummy184[64];                                   /* Reserved         */
    const uint32 TIM13GPR0;                                /* TIM13GPR0        */
    uint32 TIM13GPR1;                                      /* TIM13GPR1        */
    const uint32 TIM13CNT;                                 /* TIM13CNT         */
    const uint32 TIM13ECNT;                                /* TIM13ECNT        */
    uint32 TIM13CNTS;                                      /* TIM13CNTS        */
    const uint32 TIM13TDUC;                                /* TIM13TDUC        */
    uint32 TIM13TDUV;                                      /* TIM13TDUV        */
    uint32 TIM13FLTRE;                                     /* TIM13FLTRE       */
    uint32 TIM13FLTFE;                                     /* TIM13FLTFE       */
    uint32 TIM13CTRL;                                      /* TIM13CTRL        */
    uint32 TIM13ECTRL;                                     /* TIM13ECTRL       */
    uint32 TIM13IRQNOTIFY;                                 /* TIM13IRQNOTIFY   */
    uint32 TIM13IRQEN;                                     /* TIM13IRQEN       */
    uint32 TIM13IRQFORCINT;                                /* TIM13IRQFORCINT  */
    uint32 TIM13IRQMODE;                                   /* TIM13IRQMODE     */
    uint32 TIM13EIRQEN;                                    /* TIM13EIRQEN      */
    uint8  dummy185[64];                                   /* Reserved         */
    const uint32 TIM14GPR0;                                /* TIM14GPR0        */
    uint32 TIM14GPR1;                                      /* TIM14GPR1        */
    const uint32 TIM14CNT;                                 /* TIM14CNT         */
    const uint32 TIM14ECNT;                                /* TIM14ECNT        */
    uint32 TIM14CNTS;                                      /* TIM14CNTS        */
    const uint32 TIM14TDUC;                                /* TIM14TDUC        */
    uint32 TIM14TDUV;                                      /* TIM14TDUV        */
    uint32 TIM14FLTRE;                                     /* TIM14FLTRE       */
    uint32 TIM14FLTFE;                                     /* TIM14FLTFE       */
    uint32 TIM14CTRL;                                      /* TIM14CTRL        */
    uint32 TIM14ECTRL;                                     /* TIM14ECTRL       */
    uint32 TIM14IRQNOTIFY;                                 /* TIM14IRQNOTIFY   */
    uint32 TIM14IRQEN;                                     /* TIM14IRQEN       */
    uint32 TIM14IRQFORCINT;                                /* TIM14IRQFORCINT  */
    uint32 TIM14IRQMODE;                                   /* TIM14IRQMODE     */
    uint32 TIM14EIRQEN;                                    /* TIM14EIRQEN      */
    uint8  dummy186[64];                                   /* Reserved         */
    const uint32 TIM15GPR0;                                /* TIM15GPR0        */
    uint32 TIM15GPR1;                                      /* TIM15GPR1        */
    const uint32 TIM15CNT;                                 /* TIM15CNT         */
    const uint32 TIM15ECNT;                                /* TIM15ECNT        */
    uint32 TIM15CNTS;                                      /* TIM15CNTS        */
    const uint32 TIM15TDUC;                                /* TIM15TDUC        */
    uint32 TIM15TDUV;                                      /* TIM15TDUV        */
    uint32 TIM15FLTRE;                                     /* TIM15FLTRE       */
    uint32 TIM15FLTFE;                                     /* TIM15FLTFE       */
    uint32 TIM15CTRL;                                      /* TIM15CTRL        */
    uint32 TIM15ECTRL;                                     /* TIM15ECTRL       */
    uint32 TIM15IRQNOTIFY;                                 /* TIM15IRQNOTIFY   */
    uint32 TIM15IRQEN;                                     /* TIM15IRQEN       */
    uint32 TIM15IRQFORCINT;                                /* TIM15IRQFORCINT  */
    uint32 TIM15IRQMODE;                                   /* TIM15IRQMODE     */
    uint32 TIM15EIRQEN;                                    /* TIM15EIRQEN      */
    uint8  dummy187[64];                                   /* Reserved         */
    const uint32 TIM16GPR0;                                /* TIM16GPR0        */
    uint32 TIM16GPR1;                                      /* TIM16GPR1        */
    const uint32 TIM16CNT;                                 /* TIM16CNT         */
    const uint32 TIM16ECNT;                                /* TIM16ECNT        */
    uint32 TIM16CNTS;                                      /* TIM16CNTS        */
    const uint32 TIM16TDUC;                                /* TIM16TDUC        */
    uint32 TIM16TDUV;                                      /* TIM16TDUV        */
    uint32 TIM16FLTRE;                                     /* TIM16FLTRE       */
    uint32 TIM16FLTFE;                                     /* TIM16FLTFE       */
    uint32 TIM16CTRL;                                      /* TIM16CTRL        */
    uint32 TIM16ECTRL;                                     /* TIM16ECTRL       */
    uint32 TIM16IRQNOTIFY;                                 /* TIM16IRQNOTIFY   */
    uint32 TIM16IRQEN;                                     /* TIM16IRQEN       */
    uint32 TIM16IRQFORCINT;                                /* TIM16IRQFORCINT  */
    uint32 TIM16IRQMODE;                                   /* TIM16IRQMODE     */
    uint32 TIM16EIRQEN;                                    /* TIM16EIRQEN      */
    uint8  dummy188[64];                                   /* Reserved         */
    const uint32 TIM17GPR0;                                /* TIM17GPR0        */
    uint32 TIM17GPR1;                                      /* TIM17GPR1        */
    const uint32 TIM17CNT;                                 /* TIM17CNT         */
    const uint32 TIM17ECNT;                                /* TIM17ECNT        */
    uint32 TIM17CNTS;                                      /* TIM17CNTS        */
    const uint32 TIM17TDUC;                                /* TIM17TDUC        */
    uint32 TIM17TDUV;                                      /* TIM17TDUV        */
    uint32 TIM17FLTRE;                                     /* TIM17FLTRE       */
    uint32 TIM17FLTFE;                                     /* TIM17FLTFE       */
    uint32 TIM17CTRL;                                      /* TIM17CTRL        */
    uint32 TIM17ECTRL;                                     /* TIM17ECTRL       */
    uint32 TIM17IRQNOTIFY;                                 /* TIM17IRQNOTIFY   */
    uint32 TIM17IRQEN;                                     /* TIM17IRQEN       */
    uint32 TIM17IRQFORCINT;                                /* TIM17IRQFORCINT  */
    uint32 TIM17IRQMODE;                                   /* TIM17IRQMODE     */
    uint32 TIM17EIRQEN;                                    /* TIM17EIRQEN      */
    uint8  dummy189[46144];                                /* Reserved         */
    uint32 ATOM00RDADDR;                                   /* ATOM00RDADDR     */
    uint32 ATOM00CTRL;                                     /* ATOM00CTRL       */
    uint32 ATOM00SR0;                                      /* ATOM00SR0        */
    uint32 ATOM00SR1;                                      /* ATOM00SR1        */
    uint32 ATOM00CM0;                                      /* ATOM00CM0        */
    uint32 ATOM00CM1;                                      /* ATOM00CM1        */
    uint32 ATOM00CN0;                                      /* ATOM00CN0        */
    uint32 ATOM00STAT;                                     /* ATOM00STAT       */
    uint32 ATOM00IRQNOTIFY;                                /* ATOM00IRQNOTIFY  */
    uint32 ATOM00IRQEN;                                    /* ATOM00IRQEN      */
    uint32 ATOM00IRQFORCINT;                               /* ATOM00IRQFORCINT */
    uint32 ATOM00IRQMODE;                                  /* ATOM00IRQMODE    */
    uint8  dummy190[16];                                   /* Reserved         */
    uint32 ATOM0AGCGLBCTRL;                                /* ATOM0AGCGLBCTRL  */
    uint32 ATOM0AGCENDISCTRL;                              /* ATOM0AGCENDISCTRL */
    uint32 ATOM0AGCENDISSTAT;                              /* ATOM0AGCENDISSTAT */
    uint32 ATOM0AGCACTTB;                                  /* ATOM0AGCACTTB    */
    uint32 ATOM0AGCOUTENCTRL;                              /* ATOM0AGCOUTENCTRL */
    uint32 ATOM0AGCOUTENSTAT;                              /* ATOM0AGCOUTENSTAT */
    uint32 ATOM0AGCFUPDCTRL;                               /* ATOM0AGCFUPDCTRL */
    uint32 ATOM0AGCINTTRIG;                                /* ATOM0AGCINTTRIG  */
    uint8  dummy191[32];                                   /* Reserved         */
    uint32 ATOM01RDADDR;                                   /* ATOM01RDADDR     */
    uint32 ATOM01CTRL;                                     /* ATOM01CTRL       */
    uint32 ATOM01SR0;                                      /* ATOM01SR0        */
    uint32 ATOM01SR1;                                      /* ATOM01SR1        */
    uint32 ATOM01CM0;                                      /* ATOM01CM0        */
    uint32 ATOM01CM1;                                      /* ATOM01CM1        */
    uint32 ATOM01CN0;                                      /* ATOM01CN0        */
    uint32 ATOM01STAT;                                     /* ATOM01STAT       */
    uint32 ATOM01IRQNOTIFY;                                /* ATOM01IRQNOTIFY  */
    uint32 ATOM01IRQEN;                                    /* ATOM01IRQEN      */
    uint32 ATOM01IRQFORCINT;                               /* ATOM01IRQFORCINT */
    uint32 ATOM01IRQMODE;                                  /* ATOM01IRQMODE    */
    uint8  dummy192[80];                                   /* Reserved         */
    uint32 ATOM02RDADDR;                                   /* ATOM02RDADDR     */
    uint32 ATOM02CTRL;                                     /* ATOM02CTRL       */
    uint32 ATOM02SR0;                                      /* ATOM02SR0        */
    uint32 ATOM02SR1;                                      /* ATOM02SR1        */
    uint32 ATOM02CM0;                                      /* ATOM02CM0        */
    uint32 ATOM02CM1;                                      /* ATOM02CM1        */
    uint32 ATOM02CN0;                                      /* ATOM02CN0        */
    uint32 ATOM02STAT;                                     /* ATOM02STAT       */
    uint32 ATOM02IRQNOTIFY;                                /* ATOM02IRQNOTIFY  */
    uint32 ATOM02IRQEN;                                    /* ATOM02IRQEN      */
    uint32 ATOM02IRQFORCINT;                               /* ATOM02IRQFORCINT */
    uint32 ATOM02IRQMODE;                                  /* ATOM02IRQMODE    */
    uint8  dummy193[80];                                   /* Reserved         */
    uint32 ATOM03RDADDR;                                   /* ATOM03RDADDR     */
    uint32 ATOM03CTRL;                                     /* ATOM03CTRL       */
    uint32 ATOM03SR0;                                      /* ATOM03SR0        */
    uint32 ATOM03SR1;                                      /* ATOM03SR1        */
    uint32 ATOM03CM0;                                      /* ATOM03CM0        */
    uint32 ATOM03CM1;                                      /* ATOM03CM1        */
    uint32 ATOM03CN0;                                      /* ATOM03CN0        */
    uint32 ATOM03STAT;                                     /* ATOM03STAT       */
    uint32 ATOM03IRQNOTIFY;                                /* ATOM03IRQNOTIFY  */
    uint32 ATOM03IRQEN;                                    /* ATOM03IRQEN      */
    uint32 ATOM03IRQFORCINT;                               /* ATOM03IRQFORCINT */
    uint32 ATOM03IRQMODE;                                  /* ATOM03IRQMODE    */
    uint8  dummy194[80];                                   /* Reserved         */
    uint32 ATOM04RDADDR;                                   /* ATOM04RDADDR     */
    uint32 ATOM04CTRL;                                     /* ATOM04CTRL       */
    uint32 ATOM04SR0;                                      /* ATOM04SR0        */
    uint32 ATOM04SR1;                                      /* ATOM04SR1        */
    uint32 ATOM04CM0;                                      /* ATOM04CM0        */
    uint32 ATOM04CM1;                                      /* ATOM04CM1        */
    uint32 ATOM04CN0;                                      /* ATOM04CN0        */
    uint32 ATOM04STAT;                                     /* ATOM04STAT       */
    uint32 ATOM04IRQNOTIFY;                                /* ATOM04IRQNOTIFY  */
    uint32 ATOM04IRQEN;                                    /* ATOM04IRQEN      */
    uint32 ATOM04IRQFORCINT;                               /* ATOM04IRQFORCINT */
    uint32 ATOM04IRQMODE;                                  /* ATOM04IRQMODE    */
    uint8  dummy195[80];                                   /* Reserved         */
    uint32 ATOM05RDADDR;                                   /* ATOM05RDADDR     */
    uint32 ATOM05CTRL;                                     /* ATOM05CTRL       */
    uint32 ATOM05SR0;                                      /* ATOM05SR0        */
    uint32 ATOM05SR1;                                      /* ATOM05SR1        */
    uint32 ATOM05CM0;                                      /* ATOM05CM0        */
    uint32 ATOM05CM1;                                      /* ATOM05CM1        */
    uint32 ATOM05CN0;                                      /* ATOM05CN0        */
    uint32 ATOM05STAT;                                     /* ATOM05STAT       */
    uint32 ATOM05IRQNOTIFY;                                /* ATOM05IRQNOTIFY  */
    uint32 ATOM05IRQEN;                                    /* ATOM05IRQEN      */
    uint32 ATOM05IRQFORCINT;                               /* ATOM05IRQFORCINT */
    uint32 ATOM05IRQMODE;                                  /* ATOM05IRQMODE    */
    uint8  dummy196[80];                                   /* Reserved         */
    uint32 ATOM06RDADDR;                                   /* ATOM06RDADDR     */
    uint32 ATOM06CTRL;                                     /* ATOM06CTRL       */
    uint32 ATOM06SR0;                                      /* ATOM06SR0        */
    uint32 ATOM06SR1;                                      /* ATOM06SR1        */
    uint32 ATOM06CM0;                                      /* ATOM06CM0        */
    uint32 ATOM06CM1;                                      /* ATOM06CM1        */
    uint32 ATOM06CN0;                                      /* ATOM06CN0        */
    uint32 ATOM06STAT;                                     /* ATOM06STAT       */
    uint32 ATOM06IRQNOTIFY;                                /* ATOM06IRQNOTIFY  */
    uint32 ATOM06IRQEN;                                    /* ATOM06IRQEN      */
    uint32 ATOM06IRQFORCINT;                               /* ATOM06IRQFORCINT */
    uint32 ATOM06IRQMODE;                                  /* ATOM06IRQMODE    */
    uint8  dummy197[80];                                   /* Reserved         */
    uint32 ATOM07RDADDR;                                   /* ATOM07RDADDR     */
    uint32 ATOM07CTRL;                                     /* ATOM07CTRL       */
    uint32 ATOM07SR0;                                      /* ATOM07SR0        */
    uint32 ATOM07SR1;                                      /* ATOM07SR1        */
    uint32 ATOM07CM0;                                      /* ATOM07CM0        */
    uint32 ATOM07CM1;                                      /* ATOM07CM1        */
    uint32 ATOM07CN0;                                      /* ATOM07CN0        */
    uint32 ATOM07STAT;                                     /* ATOM07STAT       */
    uint32 ATOM07IRQNOTIFY;                                /* ATOM07IRQNOTIFY  */
    uint32 ATOM07IRQEN;                                    /* ATOM07IRQEN      */
    uint32 ATOM07IRQFORCINT;                               /* ATOM07IRQFORCINT */
    uint32 ATOM07IRQMODE;                                  /* ATOM07IRQMODE    */
    uint8  dummy198[1104];                                 /* Reserved         */
    uint32 ATOM10RDADDR;                                   /* ATOM10RDADDR     */
    uint32 ATOM10CTRL;                                     /* ATOM10CTRL       */
    uint32 ATOM10SR0;                                      /* ATOM10SR0        */
    uint32 ATOM10SR1;                                      /* ATOM10SR1        */
    uint32 ATOM10CM0;                                      /* ATOM10CM0        */
    uint32 ATOM10CM1;                                      /* ATOM10CM1        */
    uint32 ATOM10CN0;                                      /* ATOM10CN0        */
    uint32 ATOM10STAT;                                     /* ATOM10STAT       */
    uint32 ATOM10IRQNOTIFY;                                /* ATOM10IRQNOTIFY  */
    uint32 ATOM10IRQEN;                                    /* ATOM10IRQEN      */
    uint32 ATOM10IRQFORCINT;                               /* ATOM10IRQFORCINT */
    uint32 ATOM10IRQMODE;                                  /* ATOM10IRQMODE    */
    uint8  dummy199[16];                                   /* Reserved         */
    uint32 ATOM1AGCGLBCTRL;                                /* ATOM1AGCGLBCTRL  */
    uint32 ATOM1AGCENDISCTRL;                              /* ATOM1AGCENDISCTRL */
    uint32 ATOM1AGCENDISSTAT;                              /* ATOM1AGCENDISSTAT */
    uint32 ATOM1AGCACTTB;                                  /* ATOM1AGCACTTB    */
    uint32 ATOM1AGCOUTENCTRL;                              /* ATOM1AGCOUTENCTRL */
    uint32 ATOM1AGCOUTENSTAT;                              /* ATOM1AGCOUTENSTAT */
    uint32 ATOM1AGCFUPDCTRL;                               /* ATOM1AGCFUPDCTRL */
    uint32 ATOM1AGCINTTRIG;                                /* ATOM1AGCINTTRIG  */
    uint8  dummy200[32];                                   /* Reserved         */
    uint32 ATOM11RDADDR;                                   /* ATOM11RDADDR     */
    uint32 ATOM11CTRL;                                     /* ATOM11CTRL       */
    uint32 ATOM11SR0;                                      /* ATOM11SR0        */
    uint32 ATOM11SR1;                                      /* ATOM11SR1        */
    uint32 ATOM11CM0;                                      /* ATOM11CM0        */
    uint32 ATOM11CM1;                                      /* ATOM11CM1        */
    uint32 ATOM11CN0;                                      /* ATOM11CN0        */
    uint32 ATOM11STAT;                                     /* ATOM11STAT       */
    uint32 ATOM11IRQNOTIFY;                                /* ATOM11IRQNOTIFY  */
    uint32 ATOM11IRQEN;                                    /* ATOM11IRQEN      */
    uint32 ATOM11IRQFORCINT;                               /* ATOM11IRQFORCINT */
    uint32 ATOM11IRQMODE;                                  /* ATOM11IRQMODE    */
    uint8  dummy201[80];                                   /* Reserved         */
    uint32 ATOM12RDADDR;                                   /* ATOM12RDADDR     */
    uint32 ATOM12CTRL;                                     /* ATOM12CTRL       */
    uint32 ATOM12SR0;                                      /* ATOM12SR0        */
    uint32 ATOM12SR1;                                      /* ATOM12SR1        */
    uint32 ATOM12CM0;                                      /* ATOM12CM0        */
    uint32 ATOM12CM1;                                      /* ATOM12CM1        */
    uint32 ATOM12CN0;                                      /* ATOM12CN0        */
    uint32 ATOM12STAT;                                     /* ATOM12STAT       */
    uint32 ATOM12IRQNOTIFY;                                /* ATOM12IRQNOTIFY  */
    uint32 ATOM12IRQEN;                                    /* ATOM12IRQEN      */
    uint32 ATOM12IRQFORCINT;                               /* ATOM12IRQFORCINT */
    uint32 ATOM12IRQMODE;                                  /* ATOM12IRQMODE    */
    uint8  dummy202[80];                                   /* Reserved         */
    uint32 ATOM13RDADDR;                                   /* ATOM13RDADDR     */
    uint32 ATOM13CTRL;                                     /* ATOM13CTRL       */
    uint32 ATOM13SR0;                                      /* ATOM13SR0        */
    uint32 ATOM13SR1;                                      /* ATOM13SR1        */
    uint32 ATOM13CM0;                                      /* ATOM13CM0        */
    uint32 ATOM13CM1;                                      /* ATOM13CM1        */
    uint32 ATOM13CN0;                                      /* ATOM13CN0        */
    uint32 ATOM13STAT;                                     /* ATOM13STAT       */
    uint32 ATOM13IRQNOTIFY;                                /* ATOM13IRQNOTIFY  */
    uint32 ATOM13IRQEN;                                    /* ATOM13IRQEN      */
    uint32 ATOM13IRQFORCINT;                               /* ATOM13IRQFORCINT */
    uint32 ATOM13IRQMODE;                                  /* ATOM13IRQMODE    */
    uint8  dummy203[23632];                                /* Reserved         */
    uint32 DTM24CTRL;                                      /* DTM24CTRL        */
    uint32 DTM24CHCTRL1;                                   /* DTM24CHCTRL1     */
    uint32 DTM24CHCTRL2;                                   /* DTM24CHCTRL2     */
    uint32 DTM24CHCTRL2SR;                                 /* DTM24CHCTRL2SR   */
    uint32 DTM24PSCTRL;                                    /* DTM24PSCTRL      */
    uint32 DTM240DTV;                                      /* DTM240DTV        */
    uint32 DTM241DTV;                                      /* DTM241DTV        */
    uint32 DTM242DTV;                                      /* DTM242DTV        */
    uint32 DTM243DTV;                                      /* DTM243DTV        */
    uint32 DTM24CHSR;                                      /* DTM24CHSR        */
    uint8  dummy204[88];                                   /* Reserved         */
    uint32 DTM26CTRL;                                      /* DTM26CTRL        */
    uint32 DTM26CHCTRL1;                                   /* DTM26CHCTRL1     */
    uint32 DTM26CHCTRL2;                                   /* DTM26CHCTRL2     */
    uint32 DTM26CHCTRL2SR;                                 /* DTM26CHCTRL2SR   */
    uint32 DTM26PSCTRL;                                    /* DTM26PSCTRL      */
    uint32 DTM260DTV;                                      /* DTM260DTV        */
    uint32 DTM261DTV;                                      /* DTM261DTV        */
    uint32 DTM262DTV;                                      /* DTM262DTV        */
    uint32 DTM263DTV;                                      /* DTM263DTV        */
    uint32 DTM26CHSR;                                      /* DTM26CHSR        */
    uint8  dummy205[117080];                               /* Reserved         */
    uint32 MCS00R0;                                        /* MCS00R0          */
    uint32 MCS00R1;                                        /* MCS00R1          */
    uint32 MCS00R2;                                        /* MCS00R2          */
    uint32 MCS00R3;                                        /* MCS00R3          */
    uint32 MCS00R4;                                        /* MCS00R4          */
    uint32 MCS00R5;                                        /* MCS00R5          */
    uint32 MCS00R6;                                        /* MCS00R6          */
    uint32 MCS00R7;                                        /* MCS00R7          */
    uint32 MCS00CTRL;                                      /* MCS00CTRL        */
    const uint32 MCS00ACB;                                 /* MCS00ACB         */
    uint32 MCS0CTRG;                                       /* MCS0CTRG         */
    uint32 MCS0STRG;                                       /* MCS0STRG         */
    uint8  dummy206[12];                                   /* Reserved         */
    const uint32 MCS00MHB;                                 /* MCS00MHB         */
    uint32 MCS00PC;                                        /* MCS00PC          */
    uint32 MCS00IRQNOTIFY;                                 /* MCS00IRQNOTIFY   */
    uint32 MCS00IRQEN;                                     /* MCS00IRQEN       */
    uint32 MCS00IRQFORCINT;                                /* MCS00IRQFORCINT  */
    uint32 MCS00IRQMODE;                                   /* MCS00IRQMODE     */
    uint32 MCS00EIRQEN;                                    /* MCS00EIRQEN      */
    uint8  dummy207[12];                                   /* Reserved         */
    uint32 MCS0CTRLSTAT;                                   /* MCS0CTRLSTAT     */
    uint32 MCS0RESET;                                      /* MCS0RESET        */
    uint32 MCS0CAT;                                        /* MCS0CAT          */
    uint32 MCS0CWT;                                        /* MCS0CWT          */
    uint8  dummy208[8];                                    /* Reserved         */
    uint32 MCS0ERR;                                        /* MCS0ERR          */
    uint32 MCS01R0;                                        /* MCS01R0          */
    uint32 MCS01R1;                                        /* MCS01R1          */
    uint32 MCS01R2;                                        /* MCS01R2          */
    uint32 MCS01R3;                                        /* MCS01R3          */
    uint32 MCS01R4;                                        /* MCS01R4          */
    uint32 MCS01R5;                                        /* MCS01R5          */
    uint32 MCS01R6;                                        /* MCS01R6          */
    uint32 MCS01R7;                                        /* MCS01R7          */
    uint32 MCS01CTRL;                                      /* MCS01CTRL        */
    const uint32 MCS01ACB;                                 /* MCS01ACB         */
    uint8  dummy209[20];                                   /* Reserved         */
    const uint32 MCS01MHB;                                 /* MCS01MHB         */
    uint32 MCS01PC;                                        /* MCS01PC          */
    uint32 MCS01IRQNOTIFY;                                 /* MCS01IRQNOTIFY   */
    uint32 MCS01IRQEN;                                     /* MCS01IRQEN       */
    uint32 MCS01IRQFORCINT;                                /* MCS01IRQFORCINT  */
    uint32 MCS01IRQMODE;                                   /* MCS01IRQMODE     */
    uint32 MCS01EIRQEN;                                    /* MCS01EIRQEN      */
    uint8  dummy210[40];                                   /* Reserved         */
    uint32 MCS02R0;                                        /* MCS02R0          */
    uint32 MCS02R1;                                        /* MCS02R1          */
    uint32 MCS02R2;                                        /* MCS02R2          */
    uint32 MCS02R3;                                        /* MCS02R3          */
    uint32 MCS02R4;                                        /* MCS02R4          */
    uint32 MCS02R5;                                        /* MCS02R5          */
    uint32 MCS02R6;                                        /* MCS02R6          */
    uint32 MCS02R7;                                        /* MCS02R7          */
    uint32 MCS02CTRL;                                      /* MCS02CTRL        */
    const uint32 MCS02ACB;                                 /* MCS02ACB         */
    uint8  dummy211[20];                                   /* Reserved         */
    const uint32 MCS02MHB;                                 /* MCS02MHB         */
    uint32 MCS02PC;                                        /* MCS02PC          */
    uint32 MCS02IRQNOTIFY;                                 /* MCS02IRQNOTIFY   */
    uint32 MCS02IRQEN;                                     /* MCS02IRQEN       */
    uint32 MCS02IRQFORCINT;                                /* MCS02IRQFORCINT  */
    uint32 MCS02IRQMODE;                                   /* MCS02IRQMODE     */
    uint32 MCS02EIRQEN;                                    /* MCS02EIRQEN      */
    uint8  dummy212[40];                                   /* Reserved         */
    uint32 MCS03R0;                                        /* MCS03R0          */
    uint32 MCS03R1;                                        /* MCS03R1          */
    uint32 MCS03R2;                                        /* MCS03R2          */
    uint32 MCS03R3;                                        /* MCS03R3          */
    uint32 MCS03R4;                                        /* MCS03R4          */
    uint32 MCS03R5;                                        /* MCS03R5          */
    uint32 MCS03R6;                                        /* MCS03R6          */
    uint32 MCS03R7;                                        /* MCS03R7          */
    uint32 MCS03CTRL;                                      /* MCS03CTRL        */
    const uint32 MCS03ACB;                                 /* MCS03ACB         */
    uint8  dummy213[20];                                   /* Reserved         */
    const uint32 MCS03MHB;                                 /* MCS03MHB         */
    uint32 MCS03PC;                                        /* MCS03PC          */
    uint32 MCS03IRQNOTIFY;                                 /* MCS03IRQNOTIFY   */
    uint32 MCS03IRQEN;                                     /* MCS03IRQEN       */
    uint32 MCS03IRQFORCINT;                                /* MCS03IRQFORCINT  */
    uint32 MCS03IRQMODE;                                   /* MCS03IRQMODE     */
    uint32 MCS03EIRQEN;                                    /* MCS03EIRQEN      */
    uint8  dummy214[40];                                   /* Reserved         */
    uint32 MCS04R0;                                        /* MCS04R0          */
    uint32 MCS04R1;                                        /* MCS04R1          */
    uint32 MCS04R2;                                        /* MCS04R2          */
    uint32 MCS04R3;                                        /* MCS04R3          */
    uint32 MCS04R4;                                        /* MCS04R4          */
    uint32 MCS04R5;                                        /* MCS04R5          */
    uint32 MCS04R6;                                        /* MCS04R6          */
    uint32 MCS04R7;                                        /* MCS04R7          */
    uint32 MCS04CTRL;                                      /* MCS04CTRL        */
    const uint32 MCS04ACB;                                 /* MCS04ACB         */
    uint8  dummy215[20];                                   /* Reserved         */
    const uint32 MCS04MHB;                                 /* MCS04MHB         */
    uint32 MCS04PC;                                        /* MCS04PC          */
    uint32 MCS04IRQNOTIFY;                                 /* MCS04IRQNOTIFY   */
    uint32 MCS04IRQEN;                                     /* MCS04IRQEN       */
    uint32 MCS04IRQFORCINT;                                /* MCS04IRQFORCINT  */
    uint32 MCS04IRQMODE;                                   /* MCS04IRQMODE     */
    uint32 MCS04EIRQEN;                                    /* MCS04EIRQEN      */
    uint8  dummy216[40];                                   /* Reserved         */
    uint32 MCS05R0;                                        /* MCS05R0          */
    uint32 MCS05R1;                                        /* MCS05R1          */
    uint32 MCS05R2;                                        /* MCS05R2          */
    uint32 MCS05R3;                                        /* MCS05R3          */
    uint32 MCS05R4;                                        /* MCS05R4          */
    uint32 MCS05R5;                                        /* MCS05R5          */
    uint32 MCS05R6;                                        /* MCS05R6          */
    uint32 MCS05R7;                                        /* MCS05R7          */
    uint32 MCS05CTRL;                                      /* MCS05CTRL        */
    const uint32 MCS05ACB;                                 /* MCS05ACB         */
    uint8  dummy217[20];                                   /* Reserved         */
    const uint32 MCS05MHB;                                 /* MCS05MHB         */
    uint32 MCS05PC;                                        /* MCS05PC          */
    uint32 MCS05IRQNOTIFY;                                 /* MCS05IRQNOTIFY   */
    uint32 MCS05IRQEN;                                     /* MCS05IRQEN       */
    uint32 MCS05IRQFORCINT;                                /* MCS05IRQFORCINT  */
    uint32 MCS05IRQMODE;                                   /* MCS05IRQMODE     */
    uint32 MCS05EIRQEN;                                    /* MCS05EIRQEN      */
    uint8  dummy218[40];                                   /* Reserved         */
    uint32 MCS06R0;                                        /* MCS06R0          */
    uint32 MCS06R1;                                        /* MCS06R1          */
    uint32 MCS06R2;                                        /* MCS06R2          */
    uint32 MCS06R3;                                        /* MCS06R3          */
    uint32 MCS06R4;                                        /* MCS06R4          */
    uint32 MCS06R5;                                        /* MCS06R5          */
    uint32 MCS06R6;                                        /* MCS06R6          */
    uint32 MCS06R7;                                        /* MCS06R7          */
    uint32 MCS06CTRL;                                      /* MCS06CTRL        */
    const uint32 MCS06ACB;                                 /* MCS06ACB         */
    uint8  dummy219[20];                                   /* Reserved         */
    const uint32 MCS06MHB;                                 /* MCS06MHB         */
    uint32 MCS06PC;                                        /* MCS06PC          */
    uint32 MCS06IRQNOTIFY;                                 /* MCS06IRQNOTIFY   */
    uint32 MCS06IRQEN;                                     /* MCS06IRQEN       */
    uint32 MCS06IRQFORCINT;                                /* MCS06IRQFORCINT  */
    uint32 MCS06IRQMODE;                                   /* MCS06IRQMODE     */
    uint32 MCS06EIRQEN;                                    /* MCS06EIRQEN      */
    uint8  dummy220[40];                                   /* Reserved         */
    uint32 MCS07R0;                                        /* MCS07R0          */
    uint32 MCS07R1;                                        /* MCS07R1          */
    uint32 MCS07R2;                                        /* MCS07R2          */
    uint32 MCS07R3;                                        /* MCS07R3          */
    uint32 MCS07R4;                                        /* MCS07R4          */
    uint32 MCS07R5;                                        /* MCS07R5          */
    uint32 MCS07R6;                                        /* MCS07R6          */
    uint32 MCS07R7;                                        /* MCS07R7          */
    uint32 MCS07CTRL;                                      /* MCS07CTRL        */
    const uint32 MCS07ACB;                                 /* MCS07ACB         */
    uint8  dummy221[20];                                   /* Reserved         */
    const uint32 MCS07MHB;                                 /* MCS07MHB         */
    uint32 MCS07PC;                                        /* MCS07PC          */
    uint32 MCS07IRQNOTIFY;                                 /* MCS07IRQNOTIFY   */
    uint32 MCS07IRQEN;                                     /* MCS07IRQEN       */
    uint32 MCS07IRQFORCINT;                                /* MCS07IRQFORCINT  */
    uint32 MCS07IRQMODE;                                   /* MCS07IRQMODE     */
    uint32 MCS07EIRQEN;                                    /* MCS07EIRQEN      */
    uint8  dummy222[40];                                   /* Reserved         */
    uint32 MCS08R0;                                        /* MCS08R0          */
    uint32 MCS08R1;                                        /* MCS08R1          */
    uint32 MCS08R2;                                        /* MCS08R2          */
    uint32 MCS08R3;                                        /* MCS08R3          */
    uint32 MCS08R4;                                        /* MCS08R4          */
    uint32 MCS08R5;                                        /* MCS08R5          */
    uint32 MCS08R6;                                        /* MCS08R6          */
    uint32 MCS08R7;                                        /* MCS08R7          */
    uint32 MCS08CTRL;                                      /* MCS08CTRL        */
    const uint32 MCS08ACB;                                 /* MCS08ACB         */
    uint8  dummy223[20];                                   /* Reserved         */
    const uint32 MCS08MHB;                                 /* MCS08MHB         */
    uint32 MCS08PC;                                        /* MCS08PC          */
    uint32 MCS08IRQNOTIFY;                                 /* MCS08IRQNOTIFY   */
    uint32 MCS08IRQEN;                                     /* MCS08IRQEN       */
    uint32 MCS08IRQFORCINT;                                /* MCS08IRQFORCINT  */
    uint32 MCS08IRQMODE;                                   /* MCS08IRQMODE     */
    uint32 MCS08EIRQEN;                                    /* MCS08EIRQEN      */
} __type94;
typedef struct 
{                                                          /* Module           */
    uint8  WDTE;                                           /* WDTE             */
    uint8  dummy224[3];                                    /* Reserved         */
    uint8  EVAC;                                           /* EVAC             */
    uint8  dummy225[3];                                    /* Reserved         */
    const uint8  REF;                                      /* REF              */
    uint8  dummy226[3];                                    /* Reserved         */
    uint8  MD;                                             /* MD               */
} __type95;
typedef struct 
{                                                          /* Module           */
    uint32 CLR;                                            /* CLR              */
    const uint32 STS0;                                     /* STS0             */
    const uint32 STS1;                                     /* STS1             */
    uint32 STSC;                                           /* STSC             */
    uint32 WDTE;                                           /* WDTE             */
    uint32 MD;                                             /* MD               */
    uint8  dummy227[8];                                    /* Reserved         */
    uint32 PCAD;                                           /* PCAD             */
} __type96;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    uint8  dummy228[32];                                   /* Reserved         */
    __type28 PROT06;                                       /* PROT06           */
    __type28 SPID06;                                       /* SPID06           */
    __type28 PROT07;                                       /* PROT07           */
    __type28 SPID07;                                       /* SPID07           */
    uint8  dummy229[16];                                   /* Reserved         */
    __type28 PROT10;                                       /* PROT10           */
    __type28 SPID10;                                       /* SPID10           */
    __type28 PROT11;                                       /* PROT11           */
    __type28 SPID11;                                       /* SPID11           */
    __type28 PROT12;                                       /* PROT12           */
    __type28 SPID12;                                       /* SPID12           */
    __type28 PROT13;                                       /* PROT13           */
    __type28 SPID13;                                       /* SPID13           */
} __type97;
typedef struct 
{                                                          /* Module           */
    const __type28 CREL;                                   /* CREL             */
    const __type28 ENDN;                                   /* ENDN             */
    uint8  dummy230[4];                                    /* Reserved         */
    __type53 DBTP;                                         /* DBTP             */
    __type28 TEST;                                         /* TEST             */
    __type28 RWD;                                          /* RWD              */
    __type28 CCCR;                                         /* CCCR             */
    __type54 BTP;                                          /* BTP              */
    __type28 TSCC;                                         /* TSCC             */
    __type28 TSCV;                                         /* TSCV             */
    __type28 TOCC;                                         /* TOCC             */
    __type28 TOCV;                                         /* TOCV             */
    uint8  dummy231[16];                                   /* Reserved         */
    const __type28 ECR;                                    /* ECR              */
    const __type28 PSR;                                    /* PSR              */
    const __type28 TDCR;                                   /* TDCR             */
    uint8  dummy232[4];                                    /* Reserved         */
    __type28 IR;                                           /* IR               */
    __type28 IE;                                           /* IE               */
    __type28 ILS;                                          /* ILS              */
    __type28 ILE;                                          /* ILE              */
    uint8  dummy233[32];                                   /* Reserved         */
    __type28 GFC;                                          /* GFC              */
    __type28 SIDFC;                                        /* SIDFC            */
    __type28 XIDFC;                                        /* XIDFC            */
    uint8  dummy234[4];                                    /* Reserved         */
    __type28 XIDAM;                                        /* XIDAM            */
    const __type28 HPMS;                                   /* HPMS             */
    __type28 NDAT1;                                        /* NDAT1            */
    __type28 NDAT2;                                        /* NDAT2            */
    __type28 RXF0C;                                        /* RXF0C            */
    const __type28 RXF0S;                                  /* RXF0S            */
    __type28 RXF0A;                                        /* RXF0A            */
    __type28 RXBC;                                         /* RXBC             */
    __type28 RXF1C;                                        /* RXF1C            */
    const __type28 RXF1S;                                  /* RXF1S            */
    __type28 RXF1A;                                        /* RXF1A            */
    __type28 RXESC;                                        /* RXESC            */
    __type28 TXBC;                                         /* TXBC             */
    const __type28 TXFQS;                                  /* TXFQS            */
    __type28 TXESC;                                        /* TXESC            */
    const __type28 TXBRP;                                  /* TXBRP            */
    __type28 TXBAR;                                        /* TXBAR            */
    __type28 TXBCR;                                        /* TXBCR            */
    const __type28 TXBTO;                                  /* TXBTO            */
    const __type28 TXBCF;                                  /* TXBCF            */
    __type28 TXBTIE;                                       /* TXBTIE           */
    __type28 TXBCIE;                                       /* TXBCIE           */
    uint8  dummy235[8];                                    /* Reserved         */
    __type28 TXEFC;                                        /* TXEFC            */
    const __type28 TXEFS;                                  /* TXEFS            */
    __type28 TXEFA;                                        /* TXEFA            */
} __type98;
typedef struct 
{                                                          /* Module           */
    uint8  CTL0;                                           /* CTL0             */
    uint8  dummy236[7];                                    /* Reserved         */
    uint16 CMPL;                                           /* CMPL             */
    uint8  dummy237[2];                                    /* Reserved         */
    uint16 CMPH;                                           /* CMPH             */
    uint8  dummy238[2];                                    /* Reserved         */
    uint8  PCMD;                                           /* PCMD             */
    uint8  dummy239[3];                                    /* Reserved         */
    const uint8  PS;                                       /* PS               */
    uint8  dummy240[3];                                    /* Reserved         */
    uint8  EMU0;                                           /* EMU0             */
} __type99;
typedef struct 
{                                                          /* Module           */
    uint8  CTL0;                                           /* CTL0             */
    uint8  dummy241[3];                                    /* Reserved         */
    uint8  CTL1;                                           /* CTL1             */
    uint8  dummy242[3];                                    /* Reserved         */
    uint16 CMPL;                                           /* CMPL             */
    uint8  dummy243[2];                                    /* Reserved         */
    uint16 CMPH;                                           /* CMPH             */
    uint8  dummy244[2];                                    /* Reserved         */
    uint8  PCMD;                                           /* PCMD             */
    uint8  dummy245[3];                                    /* Reserved         */
    const uint8  PS;                                       /* PS               */
    uint8  dummy246[3];                                    /* Reserved         */
    uint8  EMU0;                                           /* EMU0             */
} __type100;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    __type28 PROT02;                                       /* PROT02           */
    __type28 SPID02;                                       /* SPID02           */
    __type28 PROT03;                                       /* PROT03           */
    __type28 SPID03;                                       /* SPID03           */
    __type28 PROT04;                                       /* PROT04           */
    __type28 SPID04;                                       /* SPID04           */
    __type28 PROT05;                                       /* PROT05           */
    __type28 SPID05;                                       /* SPID05           */
    __type28 PROT06;                                       /* PROT06           */
    __type28 SPID06;                                       /* SPID06           */
    __type28 PROT07;                                       /* PROT07           */
    __type28 SPID07;                                       /* SPID07           */
    __type28 PROT08;                                       /* PROT08           */
    __type28 SPID08;                                       /* SPID08           */
    __type28 PROT09;                                       /* PROT09           */
    __type28 SPID09;                                       /* SPID09           */
    __type28 PROT10;                                       /* PROT10           */
    __type28 SPID10;                                       /* SPID10           */
    __type28 PROT11;                                       /* PROT11           */
    __type28 SPID11;                                       /* SPID11           */
    __type28 PROT12;                                       /* PROT12           */
    __type28 SPID12;                                       /* SPID12           */
    __type28 PROT13;                                       /* PROT13           */
    __type28 SPID13;                                       /* SPID13           */
    __type28 PROT14;                                       /* PROT14           */
    __type28 SPID14;                                       /* SPID14           */
    __type28 PROT15;                                       /* PROT15           */
    __type28 SPID15;                                       /* SPID15           */
} __type101;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    __type28 PROT02;                                       /* PROT02           */
    __type28 SPID02;                                       /* SPID02           */
    __type28 PROT03;                                       /* PROT03           */
    __type28 SPID03;                                       /* SPID03           */
    __type28 PROT04;                                       /* PROT04           */
    __type28 SPID04;                                       /* SPID04           */
    __type28 PROT05;                                       /* PROT05           */
    __type28 SPID05;                                       /* SPID05           */
    __type28 PROT06;                                       /* PROT06           */
    __type28 SPID06;                                       /* SPID06           */
    __type28 PROT07;                                       /* PROT07           */
    __type28 SPID07;                                       /* SPID07           */
    __type28 PROT08;                                       /* PROT08           */
    __type28 SPID08;                                       /* SPID08           */
    __type28 PROT09;                                       /* PROT09           */
    __type28 SPID09;                                       /* SPID09           */
    __type28 PROT10;                                       /* PROT10           */
    __type28 SPID10;                                       /* SPID10           */
    __type28 PROT11;                                       /* PROT11           */
    __type28 SPID11;                                       /* SPID11           */
    __type28 PROT12;                                       /* PROT12           */
    __type28 SPID12;                                       /* SPID12           */
    __type28 PROT13;                                       /* PROT13           */
    __type28 SPID13;                                       /* SPID13           */
} __type102;
typedef struct 
{                                                          /* Module           */
    uint32 VCR0;                                           /* VCR0             */
    uint32 VCR1;                                           /* VCR1             */
    uint32 VCR2;                                           /* VCR2             */
    uint32 VCR3;                                           /* VCR3             */
    uint32 VCR4;                                           /* VCR4             */
    uint32 VCR5;                                           /* VCR5             */
    uint32 VCR6;                                           /* VCR6             */
    uint32 VCR7;                                           /* VCR7             */
    uint32 VCR8;                                           /* VCR8             */
    uint32 VCR9;                                           /* VCR9             */
    uint32 VCR10;                                          /* VCR10            */
    uint32 VCR11;                                          /* VCR11            */
    uint32 VCR12;                                          /* VCR12            */
    uint32 VCR13;                                          /* VCR13            */
    uint32 VCR14;                                          /* VCR14            */
    uint32 VCR15;                                          /* VCR15            */
    uint32 VCR16;                                          /* VCR16            */
    uint32 VCR17;                                          /* VCR17            */
    uint32 VCR18;                                          /* VCR18            */
    uint32 VCR19;                                          /* VCR19            */
    uint32 VCR20;                                          /* VCR20            */
    uint32 VCR21;                                          /* VCR21            */
    uint32 VCR22;                                          /* VCR22            */
    uint32 VCR23;                                          /* VCR23            */
    uint8  dummy247[160];                                  /* Reserved         */
    const uint32 DR00;                                     /* DR00             */
    const uint32 DR02;                                     /* DR02             */
    const uint32 DR04;                                     /* DR04             */
    const uint32 DR06;                                     /* DR06             */
    const uint32 DR08;                                     /* DR08             */
    const uint32 DR10;                                     /* DR10             */
    const uint32 DR12;                                     /* DR12             */
    const uint32 DR14;                                     /* DR14             */
    const uint32 DR16;                                     /* DR16             */
    const uint32 DR18;                                     /* DR18             */
    const uint32 DR20;                                     /* DR20             */
    const uint32 DR22;                                     /* DR22             */
    uint8  dummy248[208];                                  /* Reserved         */
    const uint32 DIR0;                                     /* DIR0             */
    const uint32 DIR1;                                     /* DIR1             */
    const uint32 DIR2;                                     /* DIR2             */
    const uint32 DIR3;                                     /* DIR3             */
    const uint32 DIR4;                                     /* DIR4             */
    const uint32 DIR5;                                     /* DIR5             */
    const uint32 DIR6;                                     /* DIR6             */
    const uint32 DIR7;                                     /* DIR7             */
    const uint32 DIR8;                                     /* DIR8             */
    const uint32 DIR9;                                     /* DIR9             */
    const uint32 DIR10;                                    /* DIR10            */
    const uint32 DIR11;                                    /* DIR11            */
    const uint32 DIR12;                                    /* DIR12            */
    const uint32 DIR13;                                    /* DIR13            */
    const uint32 DIR14;                                    /* DIR14            */
    const uint32 DIR15;                                    /* DIR15            */
    const uint32 DIR16;                                    /* DIR16            */
    const uint32 DIR17;                                    /* DIR17            */
    const uint32 DIR18;                                    /* DIR18            */
    const uint32 DIR19;                                    /* DIR19            */
    const uint32 DIR20;                                    /* DIR20            */
    const uint32 DIR21;                                    /* DIR21            */
    const uint32 DIR22;                                    /* DIR22            */
    const uint32 DIR23;                                    /* DIR23            */
    uint8  dummy249[160];                                  /* Reserved         */
    uint8  ADSYNSTCR;                                      /* ADSYNSTCR        */
    uint8  dummy250[3];                                    /* Reserved         */
    uint8  ADTSYNSTCR;                                     /* ADTSYNSTCR       */
    uint8  dummy251[123];                                  /* Reserved         */
    uint8  ADHALTR;                                        /* ADHALTR          */
    uint8  dummy252[3];                                    /* Reserved         */
    uint8  ADCR1;                                          /* ADCR1            */
    uint8  dummy253[3];                                    /* Reserved         */
    uint8  MPXCURCR;                                       /* MPXCURCR         */
    uint8  dummy254[3];                                    /* Reserved         */
    const uint32 MPXCURR;                                  /* MPXCURR          */
    uint8  MPXOWR;                                         /* MPXOWR           */
    uint8  dummy255[7];                                    /* Reserved         */
    uint8  ADCR2;                                          /* ADCR2            */
    uint8  dummy256[7];                                    /* Reserved         */
    uint8  ADENDP0;                                        /* ADENDP0          */
    uint8  dummy257[31];                                   /* Reserved         */
    uint8  SFTCR;                                          /* SFTCR            */
    uint8  dummy258[3];                                    /* Reserved         */
    uint8  TDCR;                                           /* TDCR             */
    uint8  dummy259[7];                                    /* Reserved         */
    __type56 ULLMTBR0;                                     /* ULLMTBR0         */
    __type56 ULLMTBR1;                                     /* ULLMTBR1         */
    __type56 ULLMTBR2;                                     /* ULLMTBR2         */
    uint8  ECR;                                            /* ECR              */
    uint8  dummy260[3];                                    /* Reserved         */
    const uint8  ULER;                                     /* ULER             */
    uint8  dummy261[3];                                    /* Reserved         */
    const uint8  OWER;                                     /* OWER             */
    uint8  dummy262[3];                                    /* Reserved         */
    const uint8  PER;                                      /* PER              */
    uint8  dummy263[3];                                    /* Reserved         */
    const uint8  IDER;                                     /* IDER             */
    uint8  dummy264[151];                                  /* Reserved         */
    uint8  SGSTCR0;                                        /* SGSTCR0          */
    uint8  dummy265[15];                                   /* Reserved         */
    uint8  SGCR0;                                          /* SGCR0            */
    uint8  dummy266[3];                                    /* Reserved         */
    uint8  SGVCSP0;                                        /* SGVCSP0          */
    uint8  dummy267[3];                                    /* Reserved         */
    uint8  SGVCEP0;                                        /* SGVCEP0          */
    uint8  dummy268[3];                                    /* Reserved         */
    uint8  SGMCYCR0;                                       /* SGMCYCR0         */
    uint8  dummy269[7];                                    /* Reserved         */
    const uint8  SGSR0;                                    /* SGSR0            */
    uint8  dummy270[11];                                   /* Reserved         */
    uint8  ULLMSR0;                                        /* ULLMSR0          */
    uint8  dummy271[79];                                   /* Reserved         */
    uint8  SGSTCR1;                                        /* SGSTCR1          */
    uint8  dummy272[15];                                   /* Reserved         */
    uint8  SGCR1;                                          /* SGCR1            */
    uint8  dummy273[3];                                    /* Reserved         */
    uint8  SGVCSP1;                                        /* SGVCSP1          */
    uint8  dummy274[3];                                    /* Reserved         */
    uint8  SGVCEP1;                                        /* SGVCEP1          */
    uint8  dummy275[3];                                    /* Reserved         */
    uint8  SGMCYCR1;                                       /* SGMCYCR1         */
    uint8  dummy276[7];                                    /* Reserved         */
    const uint8  SGSR1;                                    /* SGSR1            */
    uint8  dummy277[11];                                   /* Reserved         */
    uint8  ULLMSR1;                                        /* ULLMSR1          */
    uint8  dummy278[79];                                   /* Reserved         */
    uint8  SGSTCR2;                                        /* SGSTCR2          */
    uint8  dummy279[15];                                   /* Reserved         */
    uint8  SGCR2;                                          /* SGCR2            */
    uint8  dummy280[3];                                    /* Reserved         */
    uint8  SGVCSP2;                                        /* SGVCSP2          */
    uint8  dummy281[3];                                    /* Reserved         */
    uint8  SGVCEP2;                                        /* SGVCEP2          */
    uint8  dummy282[3];                                    /* Reserved         */
    uint8  SGMCYCR2;                                       /* SGMCYCR2         */
    uint8  dummy283[7];                                    /* Reserved         */
    const uint8  SGSR2;                                    /* SGSR2            */
    uint8  dummy284[11];                                   /* Reserved         */
    uint8  ULLMSR2;                                        /* ULLMSR2          */
    uint8  dummy285[79];                                   /* Reserved         */
    uint8  SGSTCR3;                                        /* SGSTCR3          */
    uint8  dummy286[7];                                    /* Reserved         */
    uint8  ADTSTCR3;                                       /* ADTSTCR3         */
    uint8  dummy287[3];                                    /* Reserved         */
    uint8  ADTENDCR3;                                      /* ADTENDCR3        */
    uint8  dummy288[3];                                    /* Reserved         */
    uint8  SGCR3;                                          /* SGCR3            */
    uint8  dummy289[3];                                    /* Reserved         */
    uint8  SGVCSP3;                                        /* SGVCSP3          */
    uint8  dummy290[3];                                    /* Reserved         */
    uint8  SGVCEP3;                                        /* SGVCEP3          */
    uint8  dummy291[3];                                    /* Reserved         */
    uint8  SGMCYCR3;                                       /* SGMCYCR3         */
    uint8  dummy292[7];                                    /* Reserved         */
    const uint8  SGSR3;                                    /* SGSR3            */
    uint8  dummy293[3];                                    /* Reserved         */
    uint32 ADTIPR3;                                        /* ADTIPR3          */
    uint32 ADTPRR3;                                        /* ADTPRR3          */
    uint8  ULLMSR3;                                        /* ULLMSR3          */
    uint8  dummy294[79];                                   /* Reserved         */
    uint8  SGSTCR4;                                        /* SGSTCR4          */
    uint8  dummy295[7];                                    /* Reserved         */
    uint8  ADTSTCR4;                                       /* ADTSTCR4         */
    uint8  dummy296[3];                                    /* Reserved         */
    uint8  ADTENDCR4;                                      /* ADTENDCR4        */
    uint8  dummy297[3];                                    /* Reserved         */
    uint8  SGCR4;                                          /* SGCR4            */
    uint8  dummy298[3];                                    /* Reserved         */
    uint8  SGVCSP4;                                        /* SGVCSP4          */
    uint8  dummy299[3];                                    /* Reserved         */
    uint8  SGVCEP4;                                        /* SGVCEP4          */
    uint8  dummy300[3];                                    /* Reserved         */
    uint8  SGMCYCR4;                                       /* SGMCYCR4         */
    uint8  dummy301[7];                                    /* Reserved         */
    const uint8  SGSR4;                                    /* SGSR4            */
    uint8  dummy302[3];                                    /* Reserved         */
    uint32 ADTIPR4;                                        /* ADTIPR4          */
    uint32 ADTPRR4;                                        /* ADTPRR4          */
    uint8  ULLMSR4;                                        /* ULLMSR4          */
} __type103;
typedef struct 
{                                                          /* Module           */
    uint32 VCR0;                                           /* VCR0             */
    uint32 VCR1;                                           /* VCR1             */
    uint32 VCR2;                                           /* VCR2             */
    uint32 VCR3;                                           /* VCR3             */
    uint32 VCR4;                                           /* VCR4             */
    uint32 VCR5;                                           /* VCR5             */
    uint32 VCR6;                                           /* VCR6             */
    uint32 VCR7;                                           /* VCR7             */
    uint32 VCR8;                                           /* VCR8             */
    uint32 VCR9;                                           /* VCR9             */
    uint32 VCR10;                                          /* VCR10            */
    uint32 VCR11;                                          /* VCR11            */
    uint32 VCR12;                                          /* VCR12            */
    uint32 VCR13;                                          /* VCR13            */
    uint32 VCR14;                                          /* VCR14            */
    uint32 VCR15;                                          /* VCR15            */
    uint32 VCR16;                                          /* VCR16            */
    uint32 VCR17;                                          /* VCR17            */
    uint32 VCR18;                                          /* VCR18            */
    uint32 VCR19;                                          /* VCR19            */
    uint8  dummy303[176];                                  /* Reserved         */
    const uint32 DR00;                                     /* DR00             */
    const uint32 DR02;                                     /* DR02             */
    const uint32 DR04;                                     /* DR04             */
    const uint32 DR06;                                     /* DR06             */
    const uint32 DR08;                                     /* DR08             */
    const uint32 DR10;                                     /* DR10             */
    const uint32 DR12;                                     /* DR12             */
    const uint32 DR14;                                     /* DR14             */
    const uint32 DR16;                                     /* DR16             */
    const uint32 DR18;                                     /* DR18             */
    uint8  dummy304[216];                                  /* Reserved         */
    const uint32 DIR0;                                     /* DIR0             */
    const uint32 DIR1;                                     /* DIR1             */
    const uint32 DIR2;                                     /* DIR2             */
    const uint32 DIR3;                                     /* DIR3             */
    const uint32 DIR4;                                     /* DIR4             */
    const uint32 DIR5;                                     /* DIR5             */
    const uint32 DIR6;                                     /* DIR6             */
    const uint32 DIR7;                                     /* DIR7             */
    const uint32 DIR8;                                     /* DIR8             */
    const uint32 DIR9;                                     /* DIR9             */
    const uint32 DIR10;                                    /* DIR10            */
    const uint32 DIR11;                                    /* DIR11            */
    const uint32 DIR12;                                    /* DIR12            */
    const uint32 DIR13;                                    /* DIR13            */
    const uint32 DIR14;                                    /* DIR14            */
    const uint32 DIR15;                                    /* DIR15            */
    const uint32 DIR16;                                    /* DIR16            */
    const uint32 DIR17;                                    /* DIR17            */
    const uint32 DIR18;                                    /* DIR18            */
    const uint32 DIR19;                                    /* DIR19            */
    uint8  dummy305[304];                                  /* Reserved         */
    uint8  ADHALTR;                                        /* ADHALTR          */
    uint8  dummy306[3];                                    /* Reserved         */
    uint8  ADCR1;                                          /* ADCR1            */
    uint8  dummy307[3];                                    /* Reserved         */
    uint8  MPXCURCR;                                       /* MPXCURCR         */
    uint8  dummy308[3];                                    /* Reserved         */
    const uint32 MPXCURR;                                  /* MPXCURR          */
    uint8  MPXOWR;                                         /* MPXOWR           */
    uint8  dummy309[7];                                    /* Reserved         */
    uint8  ADCR2;                                          /* ADCR2            */
    uint8  dummy310[7];                                    /* Reserved         */
    uint8  ADENDP0;                                        /* ADENDP0          */
    uint8  dummy311[31];                                   /* Reserved         */
    uint8  SFTCR;                                          /* SFTCR            */
    uint8  dummy312[3];                                    /* Reserved         */
    uint8  TDCR;                                           /* TDCR             */
    uint8  dummy313[7];                                    /* Reserved         */
    __type56 ULLMTBR0;                                     /* ULLMTBR0         */
    __type56 ULLMTBR1;                                     /* ULLMTBR1         */
    __type56 ULLMTBR2;                                     /* ULLMTBR2         */
    uint8  ECR;                                            /* ECR              */
    uint8  dummy314[3];                                    /* Reserved         */
    const uint8  ULER;                                     /* ULER             */
    uint8  dummy315[3];                                    /* Reserved         */
    const uint8  OWER;                                     /* OWER             */
    uint8  dummy316[3];                                    /* Reserved         */
    const uint8  PER;                                      /* PER              */
    uint8  dummy317[3];                                    /* Reserved         */
    const uint8  IDER;                                     /* IDER             */
    uint8  dummy318[151];                                  /* Reserved         */
    uint8  SGSTCR0;                                        /* SGSTCR0          */
    uint8  dummy319[15];                                   /* Reserved         */
    uint8  SGCR0;                                          /* SGCR0            */
    uint8  dummy320[3];                                    /* Reserved         */
    uint8  SGVCSP0;                                        /* SGVCSP0          */
    uint8  dummy321[3];                                    /* Reserved         */
    uint8  SGVCEP0;                                        /* SGVCEP0          */
    uint8  dummy322[3];                                    /* Reserved         */
    uint8  SGMCYCR0;                                       /* SGMCYCR0         */
    uint8  dummy323[7];                                    /* Reserved         */
    const uint8  SGSR0;                                    /* SGSR0            */
    uint8  dummy324[11];                                   /* Reserved         */
    uint8  ULLMSR0;                                        /* ULLMSR0          */
    uint8  dummy325[79];                                   /* Reserved         */
    uint8  SGSTCR1;                                        /* SGSTCR1          */
    uint8  dummy326[15];                                   /* Reserved         */
    uint8  SGCR1;                                          /* SGCR1            */
    uint8  dummy327[3];                                    /* Reserved         */
    uint8  SGVCSP1;                                        /* SGVCSP1          */
    uint8  dummy328[3];                                    /* Reserved         */
    uint8  SGVCEP1;                                        /* SGVCEP1          */
    uint8  dummy329[3];                                    /* Reserved         */
    uint8  SGMCYCR1;                                       /* SGMCYCR1         */
    uint8  dummy330[7];                                    /* Reserved         */
    const uint8  SGSR1;                                    /* SGSR1            */
    uint8  dummy331[11];                                   /* Reserved         */
    uint8  ULLMSR1;                                        /* ULLMSR1          */
    uint8  dummy332[79];                                   /* Reserved         */
    uint8  SGSTCR2;                                        /* SGSTCR2          */
    uint8  dummy333[15];                                   /* Reserved         */
    uint8  SGCR2;                                          /* SGCR2            */
    uint8  dummy334[3];                                    /* Reserved         */
    uint8  SGVCSP2;                                        /* SGVCSP2          */
    uint8  dummy335[3];                                    /* Reserved         */
    uint8  SGVCEP2;                                        /* SGVCEP2          */
    uint8  dummy336[3];                                    /* Reserved         */
    uint8  SGMCYCR2;                                       /* SGMCYCR2         */
    uint8  dummy337[7];                                    /* Reserved         */
    const uint8  SGSR2;                                    /* SGSR2            */
    uint8  dummy338[11];                                   /* Reserved         */
    uint8  ULLMSR2;                                        /* ULLMSR2          */
    uint8  dummy339[79];                                   /* Reserved         */
    uint8  SGSTCR3;                                        /* SGSTCR3          */
    uint8  dummy340[7];                                    /* Reserved         */
    uint8  ADTSTCR3;                                       /* ADTSTCR3         */
    uint8  dummy341[3];                                    /* Reserved         */
    uint8  ADTENDCR3;                                      /* ADTENDCR3        */
    uint8  dummy342[3];                                    /* Reserved         */
    uint8  SGCR3;                                          /* SGCR3            */
    uint8  dummy343[3];                                    /* Reserved         */
    uint8  SGVCSP3;                                        /* SGVCSP3          */
    uint8  dummy344[3];                                    /* Reserved         */
    uint8  SGVCEP3;                                        /* SGVCEP3          */
    uint8  dummy345[3];                                    /* Reserved         */
    uint8  SGMCYCR3;                                       /* SGMCYCR3         */
    uint8  dummy346[7];                                    /* Reserved         */
    const uint8  SGSR3;                                    /* SGSR3            */
    uint8  dummy347[3];                                    /* Reserved         */
    uint32 ADTIPR3;                                        /* ADTIPR3          */
    uint32 ADTPRR3;                                        /* ADTPRR3          */
    uint8  ULLMSR3;                                        /* ULLMSR3          */
    uint8  dummy348[79];                                   /* Reserved         */
    uint8  SGSTCR4;                                        /* SGSTCR4          */
    uint8  dummy349[7];                                    /* Reserved         */
    uint8  ADTSTCR4;                                       /* ADTSTCR4         */
    uint8  dummy350[3];                                    /* Reserved         */
    uint8  ADTENDCR4;                                      /* ADTENDCR4        */
    uint8  dummy351[3];                                    /* Reserved         */
    uint8  SGCR4;                                          /* SGCR4            */
    uint8  dummy352[3];                                    /* Reserved         */
    uint8  SGVCSP4;                                        /* SGVCSP4          */
    uint8  dummy353[3];                                    /* Reserved         */
    uint8  SGVCEP4;                                        /* SGVCEP4          */
    uint8  dummy354[3];                                    /* Reserved         */
    uint8  SGMCYCR4;                                       /* SGMCYCR4         */
    uint8  dummy355[7];                                    /* Reserved         */
    const uint8  SGSR4;                                    /* SGSR4            */
    uint8  dummy356[3];                                    /* Reserved         */
    uint32 ADTIPR4;                                        /* ADTIPR4          */
    uint32 ADTPRR4;                                        /* ADTPRR4          */
    uint8  ULLMSR4;                                        /* ULLMSR4          */
} __type104;
typedef struct 
{                                                          /* Module           */
    uint8  OTSTCR;                                         /* OTSTCR           */
    uint8  dummy357[3];                                    /* Reserved         */
    uint8  OTENDCR;                                        /* OTENDCR          */
    uint8  dummy358[3];                                    /* Reserved         */
    uint8  OTCR;                                           /* OTCR             */
    uint8  dummy359[3];                                    /* Reserved         */
    uint8  OTFCR;                                          /* OTFCR            */
    uint8  dummy360[3];                                    /* Reserved         */
    const uint8  OTFR;                                     /* OTFR             */
    uint8  dummy361[3];                                    /* Reserved         */
    const uint8  OTSTR;                                    /* OTSTR            */
    uint8  dummy362[3];                                    /* Reserved         */
    const uint16 OTDR;                                     /* OTDR             */
    uint8  dummy363[2];                                    /* Reserved         */
    uint16 HTBRAU;                                         /* HTBRAU           */
    uint8  dummy364[2];                                    /* Reserved         */
    uint16 HTBRAL;                                         /* HTBRAL           */
    uint8  dummy365[2];                                    /* Reserved         */
    uint16 HTBRBU;                                         /* HTBRBU           */
    uint8  dummy366[2];                                    /* Reserved         */
    uint16 HTBRBL;                                         /* HTBRBL           */
    uint8  dummy367[2];                                    /* Reserved         */
    uint16 LTBRAU;                                         /* LTBRAU           */
    uint8  dummy368[2];                                    /* Reserved         */
    uint16 LTBRAL;                                         /* LTBRAL           */
    uint8  dummy369[2];                                    /* Reserved         */
    uint16 TDLR;                                           /* TDLR             */
    uint8  dummy370[2];                                    /* Reserved         */
    const uint16 COEFFRA;                                  /* COEFFRA          */
    uint8  dummy371[2];                                    /* Reserved         */
    const uint16 COEFFRB;                                  /* COEFFRB          */
    uint8  dummy372[2];                                    /* Reserved         */
    const uint16 COEFFRC;                                  /* COEFFRC          */
} __type105;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    __type28 PROT02;                                       /* PROT02           */
    __type28 SPID02;                                       /* SPID02           */
    __type28 PROT03;                                       /* PROT03           */
    __type28 SPID03;                                       /* SPID03           */
    uint8  dummy373[16];                                   /* Reserved         */
    __type28 PROT06;                                       /* PROT06           */
    __type28 SPID06;                                       /* SPID06           */
    __type28 PROT07;                                       /* PROT07           */
    __type28 SPID07;                                       /* SPID07           */
    uint8  dummy374[16];                                   /* Reserved         */
    __type28 PROT10;                                       /* PROT10           */
    __type28 SPID10;                                       /* SPID10           */
    __type28 PROT11;                                       /* PROT11           */
    __type28 SPID11;                                       /* SPID11           */
    __type28 PROT12;                                       /* PROT12           */
    __type28 SPID12;                                       /* SPID12           */
    __type28 PROT13;                                       /* PROT13           */
    __type28 SPID13;                                       /* SPID13           */
} __type106;
typedef struct 
{                                                          /* Module           */
    uint8  PRSCTL;                                         /* PRSCTL           */
    uint8  dummy375[3];                                    /* Reserved         */
    uint8  PRSCMP;                                         /* PRSCMP           */
    uint8  dummy376[251];                                  /* Reserved         */
    uint8  BPRSCTL;                                        /* BPRSCTL          */
    uint8  dummy377[3];                                    /* Reserved         */
    uint8  BPRSCMP;                                        /* BPRSCMP          */
    uint8  dummy378[251];                                  /* Reserved         */
    uint8  CPRSCTL;                                        /* CPRSCTL          */
    uint8  dummy379[3];                                    /* Reserved         */
    uint8  CPRSCMP;                                        /* CPRSCMP          */
    uint8  dummy380[1523];                                 /* Reserved         */
    uint8  CCTL0;                                          /* CCTL0            */
    uint8  dummy381[7];                                    /* Reserved         */
    uint16 CCMPL;                                          /* CCMPL            */
    uint8  dummy382[2];                                    /* Reserved         */
    uint16 CCMPH;                                          /* CCMPH            */
    uint8  dummy383[2];                                    /* Reserved         */
    uint8  CPCMD;                                          /* CPCMD            */
    uint8  dummy384[3];                                    /* Reserved         */
    const uint8  CPS;                                      /* CPS              */
    uint8  dummy385[1003];                                 /* Reserved         */
    uint32 RST;                                            /* RST              */
    uint32 CFG;                                            /* CFG              */
    uint32 CLMEN;                                          /* CLMEN            */
    const uint32 MON;                                      /* MON              */
} __type107;
typedef struct 
{                                                          /* Module           */
    uint32 RG0;                                            /* RG0              */
    uint32 RG1;                                            /* RG1              */
    uint32 RG2;                                            /* RG2              */
    uint32 RG3;                                            /* RG3              */
    uint32 RG4;                                            /* RG4              */
    uint32 RG5;                                            /* RG5              */
    uint32 RG6;                                            /* RG6              */
    uint32 RG7;                                            /* RG7              */
} __type108;
typedef struct 
{                                                          /* Module           */
    __type28 CTL;                                          /* CTL              */
    const __type28 STAT;                                   /* STAT             */
} __type109;
typedef struct 
{                                                          /* Module           */
    uint8  dummy386[2];                                    /* Reserved         */
    uint16 ECRUM;                                          /* ECRUM            */
    uint8  dummy387[4];                                    /* Reserved         */
    uint32 ADRUM;                                          /* ADRUM            */
    uint8  dummy388[1];                                    /* Reserved         */
    __type57 ENUM;                                         /* ENUM             */
    uint8  dummy389[18];                                   /* Reserved         */
    __type58 PMTUM0;                                       /* PMTUM0           */
    __type59 PMTUM1;                                       /* PMTUM1           */
    __type60 PMTUM2;                                       /* PMTUM2           */
    __type61 PMTUM3;                                       /* PMTUM3           */
    __type62 PMTUM4;                                       /* PMTUM4           */
} __type110;
typedef struct 
{                                                          /* Module           */
    __type28 G0MK;                                         /* G0MK             */
    __type28 G0BA;                                         /* G0BA             */
    __type28 G0SP;                                         /* G0SP             */
    uint8  dummy390[4];                                    /* Reserved         */
    __type28 G1MK;                                         /* G1MK             */
    __type28 G1BA;                                         /* G1BA             */
    __type28 G1SP;                                         /* G1SP             */
    uint8  dummy391[4];                                    /* Reserved         */
    __type28 G2MK;                                         /* G2MK             */
    __type28 G2BA;                                         /* G2BA             */
    __type28 G2SP;                                         /* G2SP             */
    uint8  dummy392[4];                                    /* Reserved         */
    __type28 G3MK;                                         /* G3MK             */
    __type28 G3BA;                                         /* G3BA             */
    __type28 G3SP;                                         /* G3SP             */
    uint8  dummy393[4];                                    /* Reserved         */
    __type28 G4MK;                                         /* G4MK             */
    __type28 G4BA;                                         /* G4BA             */
    __type28 G4SP;                                         /* G4SP             */
    uint8  dummy394[4];                                    /* Reserved         */
    __type28 G5MK;                                         /* G5MK             */
    __type28 G5BA;                                         /* G5BA             */
    __type28 G5SP;                                         /* G5SP             */
    uint8  dummy395[4];                                    /* Reserved         */
    __type28 G6MK;                                         /* G6MK             */
    __type28 G6BA;                                         /* G6BA             */
    __type28 G6SP;                                         /* G6SP             */
    uint8  dummy396[4];                                    /* Reserved         */
    __type28 G7MK;                                         /* G7MK             */
    __type28 G7BA;                                         /* G7BA             */
    __type28 G7SP;                                         /* G7SP             */
} __type111;
typedef struct 
{                                                          /* Module           */
    uint16 CONT;                                           /* CONT             */
    uint16 FLAG;                                           /* FLAG             */
    uint16 TYPE;                                           /* TYPE             */
    uint16 SIDE;                                           /* SIDE             */
    __type56 ADDR;                                         /* ADDR             */
} __type112;

#define FBTP DBTP
#define FBTPL DBTPL
#define FBTPLL DBTPLL
#define FBTPLH DBTPLH
#define FBTPH DBTPH
#define FBTPHL DBTPHL
#define FBTPHH DBTPHH
#define NBTP BTP
#define NBTPL BTPL
#define NBTPLL BTPLL
#define NBTPLH BTPLH
#define NBTPH BTPH
#define NBTPHL BTPHL
#define NBTPHH BTPHH

__IOREG(ICUID, 0xFF1F0000, __READ, uint32);
__IOREG(ICUVER, 0xFF1F0004, __READ, uint32);
__IOREG(ICU2PES, 0xFF1F0010, __READ_WRITE, uint32);
__IOREG(ICU2PESL, 0xFF1F0010, __READ_WRITE, uint16);
__IOREG(ICU2PESLL, 0xFF1F0010, __READ_WRITE, uint8);
__IOREG(ICU2PESLH, 0xFF1F0011, __READ_WRITE, uint8);
__IOREG(ICU2PESH, 0xFF1F0012, __READ_WRITE, uint16);
__IOREG(ICU2PESHL, 0xFF1F0012, __READ_WRITE, uint8);
__IOREG(ICU2PESHH, 0xFF1F0013, __READ_WRITE, uint8);
__IOREG(PE2ICUS, 0xFF1F0014, __READ_WRITE, uint32);
__IOREG(PE2ICUSL, 0xFF1F0014, __READ_WRITE, uint16);
__IOREG(PE2ICUSLL, 0xFF1F0014, __READ_WRITE, uint8);
__IOREG(PE2ICUSLH, 0xFF1F0015, __READ_WRITE, uint8);
__IOREG(PE2ICUSH, 0xFF1F0016, __READ_WRITE, uint16);
__IOREG(PE2ICUSHL, 0xFF1F0016, __READ_WRITE, uint8);
__IOREG(PE2ICUSHH, 0xFF1F0017, __READ_WRITE, uint8);
__IOREG(ICUMACTFLAG, 0xFF1F0018, __READ, uint32);
__IOREG(ICUMACTFLAGL, 0xFF1F0018, __READ, uint16);
__IOREG(ICUMACTFLAGLL, 0xFF1F0018, __READ, uint8);
__IOREG(PEFLPRG0REQ, 0xFF1F0020, __READ, uint32);
__IOREG(PEFLPRG0REQL, 0xFF1F0020, __READ, uint16);
__IOREG(PEFLPRG0REQLL, 0xFF1F0020, __READ, uint8);
__IOREG(PEFLPRG1REQ, 0xFF1F0024, __READ, uint32);
__IOREG(PEFLPRG1REQL, 0xFF1F0024, __READ, uint16);
__IOREG(PEFLPRG1REQLL, 0xFF1F0024, __READ, uint8);
__IOREG(PEFLPRG0AC, 0xFF1F0028, __READ_WRITE, uint32);
__IOREG(PEFLPRG0ACL, 0xFF1F0028, __READ_WRITE, uint16);
__IOREG(PEFLPRG0ACLL, 0xFF1F0028, __READ_WRITE, uint8);
__IOREG(PEFLPRG1AC, 0xFF1F002C, __READ_WRITE, uint32);
__IOREG(PEFLPRG1ACL, 0xFF1F002C, __READ_WRITE, uint16);
__IOREG(PEFLPRG1ACLL, 0xFF1F002C, __READ_WRITE, uint8);
__IOREG(PE2ICUF, 0xFF1F0040, __READ, uint32);
__IOREG(PE2ICUFL, 0xFF1F0040, __READ, uint16);
__IOREG(PE2ICUFLL, 0xFF1F0040, __READ, uint8);
__IOREG(PE2ICUFLH, 0xFF1F0041, __READ, uint8);
__IOREG(PE2ICUFH, 0xFF1F0042, __READ, uint16);
__IOREG(PE2ICUFHL, 0xFF1F0042, __READ, uint8);
__IOREG(PE2ICUFHH, 0xFF1F0043, __READ, uint8);
__IOREG(PE2ICUFS, 0xFF1F0044, __READ_WRITE, uint32);
__IOREG(PE2ICUFSL, 0xFF1F0044, __READ_WRITE, uint16);
__IOREG(PE2ICUFSLL, 0xFF1F0044, __READ_WRITE, uint8);
__IOREG(PE2ICUFSLH, 0xFF1F0045, __READ_WRITE, uint8);
__IOREG(PE2ICUFSH, 0xFF1F0046, __READ_WRITE, uint16);
__IOREG(PE2ICUFSHL, 0xFF1F0046, __READ_WRITE, uint8);
__IOREG(PE2ICUFSHH, 0xFF1F0047, __READ_WRITE, uint8);
__IOREG(PE2ICUFC, 0xFF1F0048, __READ_WRITE, uint32);
__IOREG(PE2ICUFCL, 0xFF1F0048, __READ_WRITE, uint16);
__IOREG(PE2ICUFCLL, 0xFF1F0048, __READ_WRITE, uint8);
__IOREG(PE2ICUFCLH, 0xFF1F0049, __READ_WRITE, uint8);
__IOREG(PE2ICUFCH, 0xFF1F004A, __READ_WRITE, uint16);
__IOREG(PE2ICUFCHL, 0xFF1F004A, __READ_WRITE, uint8);
__IOREG(PE2ICUFCHH, 0xFF1F004B, __READ_WRITE, uint8);
__IOREG(PE2ICUIE, 0xFF1F004C, __READ_WRITE, uint32);
__IOREG(PE2ICUIEL, 0xFF1F004C, __READ_WRITE, uint16);
__IOREG(PE2ICUIELL, 0xFF1F004C, __READ_WRITE, uint8);
__IOREG(PE2ICUIELH, 0xFF1F004D, __READ_WRITE, uint8);
__IOREG(PE2ICUIEH, 0xFF1F004E, __READ_WRITE, uint16);
__IOREG(PE2ICUIEHL, 0xFF1F004E, __READ_WRITE, uint8);
__IOREG(PE2ICUIEHH, 0xFF1F004F, __READ_WRITE, uint8);
__IOREG(ICU2PEF, 0xFF1F0050, __READ, uint32);
__IOREG(ICU2PEFL, 0xFF1F0050, __READ, uint16);
__IOREG(ICU2PEFLL, 0xFF1F0050, __READ, uint8);
__IOREG(ICU2PEFLH, 0xFF1F0051, __READ, uint8);
__IOREG(ICU2PEFH, 0xFF1F0052, __READ, uint16);
__IOREG(ICU2PEFHL, 0xFF1F0052, __READ, uint8);
__IOREG(ICU2PEFHH, 0xFF1F0053, __READ, uint8);
__IOREG(ICU2PEFS, 0xFF1F0054, __READ_WRITE, uint32);
__IOREG(ICU2PEFSL, 0xFF1F0054, __READ_WRITE, uint16);
__IOREG(ICU2PEFSLL, 0xFF1F0054, __READ_WRITE, uint8);
__IOREG(ICU2PEFSLH, 0xFF1F0055, __READ_WRITE, uint8);
__IOREG(ICU2PEFSH, 0xFF1F0056, __READ_WRITE, uint16);
__IOREG(ICU2PEFSHL, 0xFF1F0056, __READ_WRITE, uint8);
__IOREG(ICU2PEFSHH, 0xFF1F0057, __READ_WRITE, uint8);
__IOREG(ICU2PEFC, 0xFF1F0058, __READ_WRITE, uint32);
__IOREG(ICU2PEFCL, 0xFF1F0058, __READ_WRITE, uint16);
__IOREG(ICU2PEFCLL, 0xFF1F0058, __READ_WRITE, uint8);
__IOREG(ICU2PEFCLH, 0xFF1F0059, __READ_WRITE, uint8);
__IOREG(ICU2PEFCH, 0xFF1F005A, __READ_WRITE, uint16);
__IOREG(ICU2PEFCHL, 0xFF1F005A, __READ_WRITE, uint8);
__IOREG(ICU2PEFCHH, 0xFF1F005B, __READ_WRITE, uint8);
__IOREG(ICU2PEIE, 0xFF1F005C, __READ_WRITE, uint32);
__IOREG(ICU2PEIEL, 0xFF1F005C, __READ_WRITE, uint16);
__IOREG(ICU2PEIELL, 0xFF1F005C, __READ_WRITE, uint8);
__IOREG(ICU2PEIELH, 0xFF1F005D, __READ_WRITE, uint8);
__IOREG(ICU2PEIEH, 0xFF1F005E, __READ_WRITE, uint16);
__IOREG(ICU2PEIEHL, 0xFF1F005E, __READ_WRITE, uint8);
__IOREG(ICU2PEIEHH, 0xFF1F005F, __READ_WRITE, uint8);
__IOREG(ICU2PEIS, 0xFF1F0060, __READ_WRITE, uint32);
__IOREG(ICU2PEISL, 0xFF1F0060, __READ_WRITE, uint16);
__IOREG(ICU2PEISLL, 0xFF1F0060, __READ_WRITE, uint8);
__IOREG(SELFID0, 0xFFA08000, __READ_WRITE, uint32);
__IOREG(SELFID1, 0xFFA08004, __READ_WRITE, uint32);
__IOREG(SELFID2, 0xFFA08008, __READ_WRITE, uint32);
__IOREG(SELFID3, 0xFFA0800C, __READ_WRITE, uint32);
__IOREG(SELFID4, 0xFFA08010, __READ_WRITE, uint32);
__IOREG(SELFID5, 0xFFA08014, __READ_WRITE, uint32);
__IOREG(SELFID6, 0xFFA08018, __READ_WRITE, uint32);
__IOREG(SELFID7, 0xFFA0801C, __READ_WRITE, uint32);
__IOREG(CFRDID0, 0xFFA08020, __READ_WRITE, uint32);
__IOREG(CFRDID1, 0xFFA08024, __READ_WRITE, uint32);
__IOREG(CFRDID2, 0xFFA08028, __READ_WRITE, uint32);
__IOREG(CFRDID3, 0xFFA0802C, __READ_WRITE, uint32);
__IOREG(CFRDID4, 0xFFA08030, __READ_WRITE, uint32);
__IOREG(CFRDID5, 0xFFA08034, __READ_WRITE, uint32);
__IOREG(CFRDID6, 0xFFA08038, __READ_WRITE, uint32);
__IOREG(CFRDID7, 0xFFA0803C, __READ_WRITE, uint32);
__IOREG(DFRDID0, 0xFFA08040, __READ_WRITE, uint32);
__IOREG(DFRDID1, 0xFFA08044, __READ_WRITE, uint32);
__IOREG(DFRDID2, 0xFFA08048, __READ_WRITE, uint32);
__IOREG(DFRDID3, 0xFFA0804C, __READ_WRITE, uint32);
__IOREG(DFRDID4, 0xFFA08050, __READ_WRITE, uint32);
__IOREG(DFRDID5, 0xFFA08054, __READ_WRITE, uint32);
__IOREG(DFRDID6, 0xFFA08058, __READ_WRITE, uint32);
__IOREG(DFRDID7, 0xFFA0805C, __READ_WRITE, uint32);
__IOREG(CFPEID0, 0xFFA08060, __READ_WRITE, uint32);
__IOREG(CFPEID1, 0xFFA08064, __READ_WRITE, uint32);
__IOREG(CFPEID2, 0xFFA08068, __READ_WRITE, uint32);
__IOREG(CFPEID3, 0xFFA0806C, __READ_WRITE, uint32);
__IOREG(CFPEID4, 0xFFA08070, __READ_WRITE, uint32);
__IOREG(CFPEID5, 0xFFA08074, __READ_WRITE, uint32);
__IOREG(CFPEID6, 0xFFA08078, __READ_WRITE, uint32);
__IOREG(CFPEID7, 0xFFA0807C, __READ_WRITE, uint32);
__IOREG(DFPEID0, 0xFFA08080, __READ_WRITE, uint32);
__IOREG(DFPEID1, 0xFFA08084, __READ_WRITE, uint32);
__IOREG(DFPEID2, 0xFFA08088, __READ_WRITE, uint32);
__IOREG(DFPEID3, 0xFFA0808C, __READ_WRITE, uint32);
__IOREG(DFPEID4, 0xFFA08090, __READ_WRITE, uint32);
__IOREG(DFPEID5, 0xFFA08094, __READ_WRITE, uint32);
__IOREG(DFPEID6, 0xFFA08098, __READ_WRITE, uint32);
__IOREG(DFPEID7, 0xFFA0809C, __READ_WRITE, uint32);
__IOREG(DEGEMU, 0xFFA080A4, __READ_WRITE, uint32);
__IOREG(SELSECLOCK, 0xFFA080A8, __READ_WRITE, uint32);
__IOREG(IDSTATUS, 0xFFA080AC, __READ, uint32);
__IOREG(P0, 0xFFC10000, __READ_WRITE, uint16);
__IOREG(PSR0, 0xFFC10004, __READ_WRITE, uint32);
__IOREG(PNOT0, 0xFFC10008, __READ_WRITE, uint16);
__IOREG(PPR0, 0xFFC1000C, __READ, uint16);
__IOREG(PM0, 0xFFC10010, __READ_WRITE, uint16);
__IOREG(PMC0, 0xFFC10014, __READ_WRITE, uint16);
__IOREG(PFC0, 0xFFC10018, __READ_WRITE, uint16);
__IOREG(PFCE0, 0xFFC1001C, __READ_WRITE, uint16);
__IOREG(PMSR0, 0xFFC10020, __READ_WRITE, uint32);
__IOREG(PMCSR0, 0xFFC10024, __READ_WRITE, uint32);
__IOREG(PINV0, 0xFFC10030, __READ_WRITE, uint16);
__IOREG(P1, 0xFFC10040, __READ_WRITE, uint16);
__IOREG(PSR1, 0xFFC10044, __READ_WRITE, uint32);
__IOREG(PNOT1, 0xFFC10048, __READ_WRITE, uint16);
__IOREG(PPR1, 0xFFC1004C, __READ, uint16);
__IOREG(PM1, 0xFFC10050, __READ_WRITE, uint16);
__IOREG(PMC1, 0xFFC10054, __READ_WRITE, uint16);
__IOREG(PFC1, 0xFFC10058, __READ_WRITE, uint16);
__IOREG(PFCE1, 0xFFC1005C, __READ_WRITE, uint16);
__IOREG(PMSR1, 0xFFC10060, __READ_WRITE, uint32);
__IOREG(PMCSR1, 0xFFC10064, __READ_WRITE, uint32);
__IOREG(PINV1, 0xFFC10070, __READ_WRITE, uint16);
__IOREG(P2, 0xFFC10080, __READ_WRITE, uint16);
__IOREG(PSR2, 0xFFC10084, __READ_WRITE, uint32);
__IOREG(PNOT2, 0xFFC10088, __READ_WRITE, uint16);
__IOREG(PPR2, 0xFFC1008C, __READ, uint16);
__IOREG(PM2, 0xFFC10090, __READ_WRITE, uint16);
__IOREG(PMC2, 0xFFC10094, __READ_WRITE, uint16);
__IOREG(PFC2, 0xFFC10098, __READ_WRITE, uint16);
__IOREG(PFCE2, 0xFFC1009C, __READ_WRITE, uint16);
__IOREG(PMSR2, 0xFFC100A0, __READ_WRITE, uint32);
__IOREG(PMCSR2, 0xFFC100A4, __READ_WRITE, uint32);
__IOREG(PINV2, 0xFFC100B0, __READ_WRITE, uint16);
__IOREG(P3, 0xFFC100C0, __READ_WRITE, uint16);
__IOREG(PSR3, 0xFFC100C4, __READ_WRITE, uint32);
__IOREG(PNOT3, 0xFFC100C8, __READ_WRITE, uint16);
__IOREG(PPR3, 0xFFC100CC, __READ, uint16);
__IOREG(PM3, 0xFFC100D0, __READ_WRITE, uint16);
__IOREG(PMC3, 0xFFC100D4, __READ_WRITE, uint16);
__IOREG(PFC3, 0xFFC100D8, __READ_WRITE, uint16);
__IOREG(PFCE3, 0xFFC100DC, __READ_WRITE, uint16);
__IOREG(PMSR3, 0xFFC100E0, __READ_WRITE, uint32);
__IOREG(PMCSR3, 0xFFC100E4, __READ_WRITE, uint32);
__IOREG(PINV3, 0xFFC100F0, __READ_WRITE, uint16);
__IOREG(P4, 0xFFC10100, __READ_WRITE, uint16);
__IOREG(PSR4, 0xFFC10104, __READ_WRITE, uint32);
__IOREG(PNOT4, 0xFFC10108, __READ_WRITE, uint16);
__IOREG(PPR4, 0xFFC1010C, __READ, uint16);
__IOREG(PM4, 0xFFC10110, __READ_WRITE, uint16);
__IOREG(PMC4, 0xFFC10114, __READ_WRITE, uint16);
__IOREG(PFC4, 0xFFC10118, __READ_WRITE, uint16);
__IOREG(PFCE4, 0xFFC1011C, __READ_WRITE, uint16);
__IOREG(PMSR4, 0xFFC10120, __READ_WRITE, uint32);
__IOREG(PMCSR4, 0xFFC10124, __READ_WRITE, uint32);
__IOREG(PINV4, 0xFFC10130, __READ_WRITE, uint16);
__IOREG(P5, 0xFFC10140, __READ_WRITE, uint16);
__IOREG(PSR5, 0xFFC10144, __READ_WRITE, uint32);
__IOREG(PNOT5, 0xFFC10148, __READ_WRITE, uint16);
__IOREG(PPR5, 0xFFC1014C, __READ, uint16);
__IOREG(PM5, 0xFFC10150, __READ_WRITE, uint16);
__IOREG(PMC5, 0xFFC10154, __READ_WRITE, uint16);
__IOREG(PFC5, 0xFFC10158, __READ_WRITE, uint16);
__IOREG(PFCE5, 0xFFC1015C, __READ_WRITE, uint16);
__IOREG(PMSR5, 0xFFC10160, __READ_WRITE, uint32);
__IOREG(PMCSR5, 0xFFC10164, __READ_WRITE, uint32);
__IOREG(PINV5, 0xFFC10170, __READ_WRITE, uint16);
__IOREG(P6, 0xFFC10180, __READ_WRITE, uint16);
__IOREG(PSR6, 0xFFC10184, __READ_WRITE, uint32);
__IOREG(PNOT6, 0xFFC10188, __READ_WRITE, uint16);
__IOREG(PPR6, 0xFFC1018C, __READ, uint16);
__IOREG(PM6, 0xFFC10190, __READ_WRITE, uint16);
__IOREG(PMC6, 0xFFC10194, __READ_WRITE, uint16);
__IOREG(PFC6, 0xFFC10198, __READ_WRITE, uint16);
__IOREG(PFCE6, 0xFFC1019C, __READ_WRITE, uint16);
__IOREG(PMSR6, 0xFFC101A0, __READ_WRITE, uint32);
__IOREG(PMCSR6, 0xFFC101A4, __READ_WRITE, uint32);
__IOREG(PINV6, 0xFFC101B0, __READ_WRITE, uint16);
__IOREG(P7, 0xFFC101C0, __READ_WRITE, uint16);
__IOREG(PSR7, 0xFFC101C4, __READ_WRITE, uint32);
__IOREG(PNOT7, 0xFFC101C8, __READ_WRITE, uint16);
__IOREG(PPR7, 0xFFC101CC, __READ, uint16);
__IOREG(PM7, 0xFFC101D0, __READ_WRITE, uint16);
__IOREG(PMC7, 0xFFC101D4, __READ_WRITE, uint16);
__IOREG(PFC7, 0xFFC101D8, __READ_WRITE, uint16);
__IOREG(PFCE7, 0xFFC101DC, __READ_WRITE, uint16);
__IOREG(PMSR7, 0xFFC101E0, __READ_WRITE, uint32);
__IOREG(PMCSR7, 0xFFC101E4, __READ_WRITE, uint32);
__IOREG(PINV7, 0xFFC101F0, __READ_WRITE, uint16);
__IOREG(P8, 0xFFC10200, __READ_WRITE, uint16);
__IOREG(PSR8, 0xFFC10204, __READ_WRITE, uint32);
__IOREG(PNOT8, 0xFFC10208, __READ_WRITE, uint16);
__IOREG(PPR8, 0xFFC1020C, __READ, uint16);
__IOREG(PM8, 0xFFC10210, __READ_WRITE, uint16);
__IOREG(PMC8, 0xFFC10214, __READ_WRITE, uint16);
__IOREG(PFC8, 0xFFC10218, __READ_WRITE, uint16);
__IOREG(PFCE8, 0xFFC1021C, __READ_WRITE, uint16);
__IOREG(PMSR8, 0xFFC10220, __READ_WRITE, uint32);
__IOREG(PMCSR8, 0xFFC10224, __READ_WRITE, uint32);
__IOREG(PINV8, 0xFFC10230, __READ_WRITE, uint16);
__IOREG(P9, 0xFFC10240, __READ_WRITE, uint16);
__IOREG(PSR9, 0xFFC10244, __READ_WRITE, uint32);
__IOREG(PNOT9, 0xFFC10248, __READ_WRITE, uint16);
__IOREG(PPR9, 0xFFC1024C, __READ, uint16);
__IOREG(PM9, 0xFFC10250, __READ_WRITE, uint16);
__IOREG(PMC9, 0xFFC10254, __READ_WRITE, uint16);
__IOREG(PFC9, 0xFFC10258, __READ_WRITE, uint16);
__IOREG(PFCE9, 0xFFC1025C, __READ_WRITE, uint16);
__IOREG(PMSR9, 0xFFC10260, __READ_WRITE, uint32);
__IOREG(PMCSR9, 0xFFC10264, __READ_WRITE, uint32);
__IOREG(PINV9, 0xFFC10270, __READ_WRITE, uint16);
__IOREG(PCR0_0, 0xFFC12000, __READ_WRITE, uint32);
__IOREG(PCR0_1, 0xFFC12004, __READ_WRITE, uint32);
__IOREG(PCR0_2, 0xFFC12008, __READ_WRITE, uint32);
__IOREG(PCR0_3, 0xFFC1200C, __READ_WRITE, uint32);
__IOREG(PCR0_4, 0xFFC12010, __READ_WRITE, uint32);
__IOREG(PCR0_5, 0xFFC12014, __READ_WRITE, uint32);
__IOREG(PCR0_6, 0xFFC12018, __READ_WRITE, uint32);
__IOREG(PCR0_7, 0xFFC1201C, __READ_WRITE, uint32);
__IOREG(PCR0_8, 0xFFC12020, __READ_WRITE, uint32);
__IOREG(PCR0_9, 0xFFC12024, __READ_WRITE, uint32);
__IOREG(PCR0_10, 0xFFC12028, __READ_WRITE, uint32);
__IOREG(PCR0_13, 0xFFC12034, __READ_WRITE, uint32);
__IOREG(PCR0_14, 0xFFC12038, __READ_WRITE, uint32);
__IOREG(PCR1_1, 0xFFC12044, __READ_WRITE, uint32);
__IOREG(PCR1_2, 0xFFC12048, __READ_WRITE, uint32);
__IOREG(PCR1_3, 0xFFC1204C, __READ_WRITE, uint32);
__IOREG(PCR1_4, 0xFFC12050, __READ_WRITE, uint32);
__IOREG(PCR1_5, 0xFFC12054, __READ_WRITE, uint32);
__IOREG(PCR1_6, 0xFFC12058, __READ_WRITE, uint32);
__IOREG(PCR1_7, 0xFFC1205C, __READ_WRITE, uint32);
__IOREG(PCR2_0, 0xFFC12080, __READ_WRITE, uint32);
__IOREG(PCR2_1, 0xFFC12084, __READ_WRITE, uint32);
__IOREG(PCR2_2, 0xFFC12088, __READ_WRITE, uint32);
__IOREG(PCR2_3, 0xFFC1208C, __READ_WRITE, uint32);
__IOREG(PCR2_4, 0xFFC12090, __READ_WRITE, uint32);
__IOREG(PCR2_5, 0xFFC12094, __READ_WRITE, uint32);
__IOREG(PCR2_6, 0xFFC12098, __READ_WRITE, uint32);
__IOREG(PCR2_7, 0xFFC1209C, __READ_WRITE, uint32);
__IOREG(PCR2_8, 0xFFC120A0, __READ_WRITE, uint32);
__IOREG(PCR2_9, 0xFFC120A4, __READ_WRITE, uint32);
__IOREG(PCR2_10, 0xFFC120A8, __READ_WRITE, uint32);
__IOREG(PCR2_11, 0xFFC120AC, __READ_WRITE, uint32);
__IOREG(PCR2_12, 0xFFC120B0, __READ_WRITE, uint32);
__IOREG(PCR2_13, 0xFFC120B4, __READ_WRITE, uint32);
__IOREG(PCR2_14, 0xFFC120B8, __READ_WRITE, uint32);
__IOREG(PCR2_15, 0xFFC120BC, __READ_WRITE, uint32);
__IOREG(PCR3_0, 0xFFC120C0, __READ_WRITE, uint32);
__IOREG(PCR3_1, 0xFFC120C4, __READ_WRITE, uint32);
__IOREG(PCR3_2, 0xFFC120C8, __READ_WRITE, uint32);
__IOREG(PCR3_3, 0xFFC120CC, __READ_WRITE, uint32);
__IOREG(PCR3_4, 0xFFC120D0, __READ_WRITE, uint32);
__IOREG(PCR3_5, 0xFFC120D4, __READ_WRITE, uint32);
__IOREG(PCR3_6, 0xFFC120D8, __READ_WRITE, uint32);
__IOREG(PCR3_7, 0xFFC120DC, __READ_WRITE, uint32);
__IOREG(PCR3_8, 0xFFC120E0, __READ_WRITE, uint32);
__IOREG(PCR3_9, 0xFFC120E4, __READ_WRITE, uint32);
__IOREG(PCR3_10, 0xFFC120E8, __READ_WRITE, uint32);
__IOREG(PCR3_11, 0xFFC120EC, __READ_WRITE, uint32);
__IOREG(PCR3_12, 0xFFC120F0, __READ_WRITE, uint32);
__IOREG(PCR3_13, 0xFFC120F4, __READ_WRITE, uint32);
__IOREG(PCR3_14, 0xFFC120F8, __READ_WRITE, uint32);
__IOREG(PCR4_0, 0xFFC12100, __READ_WRITE, uint32);
__IOREG(PCR4_1, 0xFFC12104, __READ_WRITE, uint32);
__IOREG(PCR4_2, 0xFFC12108, __READ_WRITE, uint32);
__IOREG(PCR4_3, 0xFFC1210C, __READ_WRITE, uint32);
__IOREG(PCR4_4, 0xFFC12110, __READ_WRITE, uint32);
__IOREG(PCR4_5, 0xFFC12114, __READ_WRITE, uint32);
__IOREG(PCR4_6, 0xFFC12118, __READ_WRITE, uint32);
__IOREG(PCR4_7, 0xFFC1211C, __READ_WRITE, uint32);
__IOREG(PCR4_8, 0xFFC12120, __READ_WRITE, uint32);
__IOREG(PCR4_9, 0xFFC12124, __READ_WRITE, uint32);
__IOREG(PCR4_10, 0xFFC12128, __READ_WRITE, uint32);
__IOREG(PCR4_11, 0xFFC1212C, __READ_WRITE, uint32);
__IOREG(PCR4_12, 0xFFC12130, __READ_WRITE, uint32);
__IOREG(PCR4_13, 0xFFC12134, __READ_WRITE, uint32);
__IOREG(PCR4_14, 0xFFC12138, __READ_WRITE, uint32);
__IOREG(PCR5_0, 0xFFC12140, __READ_WRITE, uint32);
__IOREG(PCR5_1, 0xFFC12144, __READ_WRITE, uint32);
__IOREG(PCR5_4, 0xFFC12150, __READ_WRITE, uint32);
__IOREG(PCR5_5, 0xFFC12154, __READ_WRITE, uint32);
__IOREG(PCR5_6, 0xFFC12158, __READ_WRITE, uint32);
__IOREG(PCR5_7, 0xFFC1215C, __READ_WRITE, uint32);
__IOREG(PCR5_8, 0xFFC12160, __READ_WRITE, uint32);
__IOREG(PCR5_9, 0xFFC12164, __READ_WRITE, uint32);
__IOREG(PCR5_10, 0xFFC12168, __READ_WRITE, uint32);
__IOREG(PCR5_11, 0xFFC1216C, __READ_WRITE, uint32);
__IOREG(PCR5_12, 0xFFC12170, __READ_WRITE, uint32);
__IOREG(PCR5_13, 0xFFC12174, __READ_WRITE, uint32);
__IOREG(PCR5_14, 0xFFC12178, __READ_WRITE, uint32);
__IOREG(PCR5_15, 0xFFC1217C, __READ_WRITE, uint32);
__IOREG(PCR6_0, 0xFFC12180, __READ_WRITE, uint32);
__IOREG(PCR6_1, 0xFFC12184, __READ_WRITE, uint32);
__IOREG(PCR6_2, 0xFFC12188, __READ_WRITE, uint32);
__IOREG(PCR6_3, 0xFFC1218C, __READ_WRITE, uint32);
__IOREG(PCR6_4, 0xFFC12190, __READ_WRITE, uint32);
__IOREG(PCR6_5, 0xFFC12194, __READ_WRITE, uint32);
__IOREG(PCR6_6, 0xFFC12198, __READ_WRITE, uint32);
__IOREG(PCR6_7, 0xFFC1219C, __READ_WRITE, uint32);
__IOREG(PCR6_8, 0xFFC121A0, __READ_WRITE, uint32);
__IOREG(PCR6_9, 0xFFC121A4, __READ_WRITE, uint32);
__IOREG(PCR6_10, 0xFFC121A8, __READ_WRITE, uint32);
__IOREG(PCR6_11, 0xFFC121AC, __READ_WRITE, uint32);
__IOREG(PCR6_12, 0xFFC121B0, __READ_WRITE, uint32);
__IOREG(PCR6_13, 0xFFC121B4, __READ_WRITE, uint32);
__IOREG(PCR6_14, 0xFFC121B8, __READ_WRITE, uint32);
__IOREG(PCR6_15, 0xFFC121BC, __READ_WRITE, uint32);
__IOREG(PCR7_0, 0xFFC121C0, __READ_WRITE, uint32);
__IOREG(PCR7_1, 0xFFC121C4, __READ_WRITE, uint32);
__IOREG(PCR7_2, 0xFFC121C8, __READ_WRITE, uint32);
__IOREG(PCR7_3, 0xFFC121CC, __READ_WRITE, uint32);
__IOREG(PCR7_4, 0xFFC121D0, __READ_WRITE, uint32);
__IOREG(PCR7_5, 0xFFC121D4, __READ_WRITE, uint32);
__IOREG(PCR7_6, 0xFFC121D8, __READ_WRITE, uint32);
__IOREG(PCR7_7, 0xFFC121DC, __READ_WRITE, uint32);
__IOREG(PCR7_8, 0xFFC121E0, __READ_WRITE, uint32);
__IOREG(PCR7_9, 0xFFC121E4, __READ_WRITE, uint32);
__IOREG(PCR8_0, 0xFFC12200, __READ_WRITE, uint32);
__IOREG(PCR8_1, 0xFFC12204, __READ_WRITE, uint32);
__IOREG(PCR8_2, 0xFFC12208, __READ_WRITE, uint32);
__IOREG(PCR8_3, 0xFFC1220C, __READ_WRITE, uint32);
__IOREG(PCR8_4, 0xFFC12210, __READ_WRITE, uint32);
__IOREG(PCR8_5, 0xFFC12214, __READ_WRITE, uint32);
__IOREG(PCR8_6, 0xFFC12218, __READ_WRITE, uint32);
__IOREG(PCR8_7, 0xFFC1221C, __READ_WRITE, uint32);
__IOREG(PCR8_8, 0xFFC12220, __READ_WRITE, uint32);
__IOREG(PCR8_9, 0xFFC12224, __READ_WRITE, uint32);
__IOREG(PCR8_10, 0xFFC12228, __READ_WRITE, uint32);
__IOREG(PCR8_11, 0xFFC1222C, __READ_WRITE, uint32);
__IOREG(PCR8_12, 0xFFC12230, __READ_WRITE, uint32);
__IOREG(PCR8_13, 0xFFC12234, __READ_WRITE, uint32);
__IOREG(PCR8_14, 0xFFC12238, __READ_WRITE, uint32);
__IOREG(PCR8_15, 0xFFC1223C, __READ_WRITE, uint32);
__IOREG(PCR9_0, 0xFFC12240, __READ_WRITE, uint32);
__IOREG(PCR9_1, 0xFFC12244, __READ_WRITE, uint32);
__IOREG(PCR9_2, 0xFFC12248, __READ_WRITE, uint32);
__IOREG(PCR9_3, 0xFFC1224C, __READ_WRITE, uint32);
__IOREG(PCR9_4, 0xFFC12250, __READ_WRITE, uint32);
__IOREG(PCR9_5, 0xFFC12254, __READ_WRITE, uint32);
__IOREG(PCR9_6, 0xFFC12258, __READ_WRITE, uint32);
__IOREG(PCR9_7, 0xFFC1225C, __READ_WRITE, uint32);
__IOREG(PCR9_8, 0xFFC12260, __READ_WRITE, uint32);
__IOREG(PIBC0, 0xFFC14000, __READ_WRITE, uint16);
__IOREG(PBDC0, 0xFFC14004, __READ_WRITE, uint16);
__IOREG(PIPC0, 0xFFC14008, __READ_WRITE, uint16);
__IOREG(PU0, 0xFFC1400C, __READ_WRITE, uint16);
__IOREG(PD0, 0xFFC14010, __READ_WRITE, uint16);
__IOREG(PODC0, 0xFFC14014, __READ_WRITE, uint32);
__IOREG(PDSC0, 0xFFC14018, __READ_WRITE, uint32);
__IOREG(PIS0, 0xFFC1401C, __READ_WRITE, uint16);
__IOREG(PUCC0, 0xFFC14028, __READ_WRITE, uint32);
__IOREG(PODCE0, 0xFFC14038, __READ_WRITE, uint32);
__IOREG(PIBC1, 0xFFC14040, __READ_WRITE, uint16);
__IOREG(PBDC1, 0xFFC14044, __READ_WRITE, uint16);
__IOREG(PIPC1, 0xFFC14048, __READ_WRITE, uint16);
__IOREG(PU1, 0xFFC1404C, __READ_WRITE, uint16);
__IOREG(PD1, 0xFFC14050, __READ_WRITE, uint16);
__IOREG(PODC1, 0xFFC14054, __READ_WRITE, uint32);
__IOREG(PDSC1, 0xFFC14058, __READ_WRITE, uint32);
__IOREG(PIS1, 0xFFC1405C, __READ_WRITE, uint16);
__IOREG(PUCC1, 0xFFC14068, __READ_WRITE, uint32);
__IOREG(PODCE1, 0xFFC14078, __READ_WRITE, uint32);
__IOREG(PIBC2, 0xFFC14080, __READ_WRITE, uint16);
__IOREG(PBDC2, 0xFFC14084, __READ_WRITE, uint16);
__IOREG(PIPC2, 0xFFC14088, __READ_WRITE, uint16);
__IOREG(PU2, 0xFFC1408C, __READ_WRITE, uint16);
__IOREG(PD2, 0xFFC14090, __READ_WRITE, uint16);
__IOREG(PODC2, 0xFFC14094, __READ_WRITE, uint32);
__IOREG(PDSC2, 0xFFC14098, __READ_WRITE, uint32);
__IOREG(PIS2, 0xFFC1409C, __READ_WRITE, uint16);
__IOREG(PUCC2, 0xFFC140A8, __READ_WRITE, uint32);
__IOREG(PODCE2, 0xFFC140B8, __READ_WRITE, uint32);
__IOREG(PIBC3, 0xFFC140C0, __READ_WRITE, uint16);
__IOREG(PBDC3, 0xFFC140C4, __READ_WRITE, uint16);
__IOREG(PIPC3, 0xFFC140C8, __READ_WRITE, uint16);
__IOREG(PU3, 0xFFC140CC, __READ_WRITE, uint16);
__IOREG(PD3, 0xFFC140D0, __READ_WRITE, uint16);
__IOREG(PODC3, 0xFFC140D4, __READ_WRITE, uint32);
__IOREG(PDSC3, 0xFFC140D8, __READ_WRITE, uint32);
__IOREG(PIS3, 0xFFC140DC, __READ_WRITE, uint16);
__IOREG(PUCC3, 0xFFC140E8, __READ_WRITE, uint32);
__IOREG(PODCE3, 0xFFC140F8, __READ_WRITE, uint32);
__IOREG(PIBC4, 0xFFC14100, __READ_WRITE, uint16);
__IOREG(PBDC4, 0xFFC14104, __READ_WRITE, uint16);
__IOREG(PIPC4, 0xFFC14108, __READ_WRITE, uint16);
__IOREG(PU4, 0xFFC1410C, __READ_WRITE, uint16);
__IOREG(PD4, 0xFFC14110, __READ_WRITE, uint16);
__IOREG(PODC4, 0xFFC14114, __READ_WRITE, uint32);
__IOREG(PDSC4, 0xFFC14118, __READ_WRITE, uint32);
__IOREG(PIS4, 0xFFC1411C, __READ_WRITE, uint16);
__IOREG(PUCC4, 0xFFC14128, __READ_WRITE, uint32);
__IOREG(PODCE4, 0xFFC14138, __READ_WRITE, uint32);
__IOREG(PIBC5, 0xFFC14140, __READ_WRITE, uint16);
__IOREG(PBDC5, 0xFFC14144, __READ_WRITE, uint16);
__IOREG(PIPC5, 0xFFC14148, __READ_WRITE, uint16);
__IOREG(PU5, 0xFFC1414C, __READ_WRITE, uint16);
__IOREG(PD5, 0xFFC14150, __READ_WRITE, uint16);
__IOREG(PODC5, 0xFFC14154, __READ_WRITE, uint32);
__IOREG(PDSC5, 0xFFC14158, __READ_WRITE, uint32);
__IOREG(PIS5, 0xFFC1415C, __READ_WRITE, uint16);
__IOREG(PUCC5, 0xFFC14168, __READ_WRITE, uint32);
__IOREG(PODCE5, 0xFFC14178, __READ_WRITE, uint32);
__IOREG(PIBC6, 0xFFC14180, __READ_WRITE, uint16);
__IOREG(PBDC6, 0xFFC14184, __READ_WRITE, uint16);
__IOREG(PIPC6, 0xFFC14188, __READ_WRITE, uint16);
__IOREG(PU6, 0xFFC1418C, __READ_WRITE, uint16);
__IOREG(PD6, 0xFFC14190, __READ_WRITE, uint16);
__IOREG(PODC6, 0xFFC14194, __READ_WRITE, uint32);
__IOREG(PDSC6, 0xFFC14198, __READ_WRITE, uint32);
__IOREG(PIS6, 0xFFC1419C, __READ_WRITE, uint16);
__IOREG(PUCC6, 0xFFC141A8, __READ_WRITE, uint32);
__IOREG(PODCE6, 0xFFC141B8, __READ_WRITE, uint32);
__IOREG(PIBC7, 0xFFC141C0, __READ_WRITE, uint16);
__IOREG(PBDC7, 0xFFC141C4, __READ_WRITE, uint16);
__IOREG(PIPC7, 0xFFC141C8, __READ_WRITE, uint16);
__IOREG(PU7, 0xFFC141CC, __READ_WRITE, uint16);
__IOREG(PD7, 0xFFC141D0, __READ_WRITE, uint16);
__IOREG(PODC7, 0xFFC141D4, __READ_WRITE, uint32);
__IOREG(PDSC7, 0xFFC141D8, __READ_WRITE, uint32);
__IOREG(PIS7, 0xFFC141DC, __READ_WRITE, uint16);
__IOREG(PUCC7, 0xFFC141E8, __READ_WRITE, uint32);
__IOREG(PODCE7, 0xFFC141F8, __READ_WRITE, uint32);
__IOREG(PIBC8, 0xFFC14200, __READ_WRITE, uint16);
__IOREG(PBDC8, 0xFFC14204, __READ_WRITE, uint16);
__IOREG(PIPC8, 0xFFC14208, __READ_WRITE, uint16);
__IOREG(PU8, 0xFFC1420C, __READ_WRITE, uint16);
__IOREG(PD8, 0xFFC14210, __READ_WRITE, uint16);
__IOREG(PODC8, 0xFFC14214, __READ_WRITE, uint32);
__IOREG(PDSC8, 0xFFC14218, __READ_WRITE, uint32);
__IOREG(PIS8, 0xFFC1421C, __READ_WRITE, uint16);
__IOREG(PUCC8, 0xFFC14228, __READ_WRITE, uint32);
__IOREG(PODCE8, 0xFFC14238, __READ_WRITE, uint32);
__IOREG(PIBC9, 0xFFC14240, __READ_WRITE, uint16);
__IOREG(PBDC9, 0xFFC14244, __READ_WRITE, uint16);
__IOREG(PIPC9, 0xFFC14248, __READ_WRITE, uint16);
__IOREG(PU9, 0xFFC1424C, __READ_WRITE, uint16);
__IOREG(PD9, 0xFFC14250, __READ_WRITE, uint16);
__IOREG(PODC9, 0xFFC14254, __READ_WRITE, uint32);
__IOREG(PDSC9, 0xFFC14258, __READ_WRITE, uint32);
__IOREG(PIS9, 0xFFC1425C, __READ_WRITE, uint16);
__IOREG(PUCC9, 0xFFC14268, __READ_WRITE, uint32);
__IOREG(PODCE9, 0xFFC14278, __READ_WRITE, uint32);
__IOREG(JP0, 0xFFC20000, __READ_WRITE, uint8);
__IOREG(JPSR0, 0xFFC20004, __READ_WRITE, uint32);
__IOREG(JPNOT0, 0xFFC20008, __READ_WRITE, uint8);
__IOREG(JPPR0, 0xFFC2000C, __READ, uint8);
__IOREG(JPM0, 0xFFC20010, __READ_WRITE, uint8);
__IOREG(JPMC0, 0xFFC20014, __READ_WRITE, uint8);
__IOREG(JPFCE0, 0xFFC2001C, __READ_WRITE, uint8);
__IOREG(JPMSR0, 0xFFC20020, __READ_WRITE, uint32);
__IOREG(JPMCSR0, 0xFFC20024, __READ_WRITE, uint32);
__IOREG(JPINV0, 0xFFC20030, __READ_WRITE, uint8);
__IOREG(JPCR0_0, 0xFFC22000, __READ_WRITE, uint32);
__IOREG(JPCR0_1, 0xFFC22004, __READ_WRITE, uint32);
__IOREG(JPCR0_2, 0xFFC22008, __READ_WRITE, uint32);
__IOREG(JPCR0_3, 0xFFC2200C, __READ_WRITE, uint32);
__IOREG(JPCR0_4, 0xFFC22010, __READ_WRITE, uint32);
__IOREG(JPCR0_5, 0xFFC22014, __READ_WRITE, uint32);
__IOREG(JPIBC0, 0xFFC24000, __READ_WRITE, uint8);
__IOREG(JPBDC0, 0xFFC24004, __READ_WRITE, uint8);
__IOREG(JPU0, 0xFFC2400C, __READ_WRITE, uint8);
__IOREG(JPD0, 0xFFC24010, __READ_WRITE, uint8);
__IOREG(JPODC0, 0xFFC24014, __READ_WRITE, uint32);
__IOREG(JPDSC0, 0xFFC24018, __READ_WRITE, uint32);
__IOREG(JPIS0, 0xFFC2401C, __READ_WRITE, uint8);
__IOREG(JPUCC0, 0xFFC24028, __READ_WRITE, uint32);
__IOREG(JPODCE0, 0xFFC24038, __READ_WRITE, uint32);
__IOREG(MGDCFCTL_VCI2CFB, 0xFFC48100, __READ_WRITE, uint32);
__IOREG(MGDCFCTL_VCI2CFBL, 0xFFC48100, __READ_WRITE, uint16);
__IOREG(MGDCFCTL_VCI2CFBLL, 0xFFC48100, __READ_WRITE, uint8);
__IOREG(MGDCFSTAT_VCI2CFB, 0xFFC48104, __READ, uint32);
__IOREG(MGDCFSTAT_VCI2CFBL, 0xFFC48104, __READ, uint16);
__IOREG(MGDCFSTAT_VCI2CFBLL, 0xFFC48104, __READ, uint8);
__IOREG(MGDCFTYPE_VCI2CFB, 0xFFC4810C, __READ, uint32);
__IOREG(MGDCFTYPE_VCI2CFBL, 0xFFC4810C, __READ, uint16);
__IOREG(MGDCFTYPE_VCI2CFBLL, 0xFFC4810C, __READ, uint8);
__IOREG(MGDCFTYPE_VCI2CFBLH, 0xFFC4810D, __READ, uint8);
__IOREG(MGDCFTYPE_VCI2CFBH, 0xFFC4810E, __READ, uint16);
__IOREG(MGDCFTYPE_VCI2CFBHL, 0xFFC4810E, __READ, uint8);
__IOREG(MGDCFTYPE_VCI2CFBHH, 0xFFC4810F, __READ, uint8);
__IOREG(MGDCFCTL_PE1, 0xFFC48200, __READ_WRITE, uint32);
__IOREG(MGDCFCTL_PE1L, 0xFFC48200, __READ_WRITE, uint16);
__IOREG(MGDCFCTL_PE1LL, 0xFFC48200, __READ_WRITE, uint8);
__IOREG(MGDCFSTAT_PE1, 0xFFC48204, __READ, uint32);
__IOREG(MGDCFSTAT_PE1L, 0xFFC48204, __READ, uint16);
__IOREG(MGDCFSTAT_PE1LL, 0xFFC48204, __READ, uint8);
__IOREG(MGDCFTYPE_PE1, 0xFFC4820C, __READ, uint32);
__IOREG(MGDCFTYPE_PE1L, 0xFFC4820C, __READ, uint16);
__IOREG(MGDCFTYPE_PE1LL, 0xFFC4820C, __READ, uint8);
__IOREG(MGDCFTYPE_PE1LH, 0xFFC4820D, __READ, uint8);
__IOREG(MGDCFTYPE_PE1H, 0xFFC4820E, __READ, uint16);
__IOREG(MGDCFTYPE_PE1HL, 0xFFC4820E, __READ, uint8);
__IOREG(MGDCFTYPE_PE1HH, 0xFFC4820F, __READ, uint8);
__IOREG(MGDGRPROT0, 0xFFC49000, __READ_WRITE, uint32);
__IOREG(MGDGRPROT0L, 0xFFC49000, __READ_WRITE, uint16);
__IOREG(MGDGRPROT0LL, 0xFFC49000, __READ_WRITE, uint8);
__IOREG(MGDGRPROT0LH, 0xFFC49001, __READ_WRITE, uint8);
__IOREG(MGDGRPROT0H, 0xFFC49002, __READ_WRITE, uint16);
__IOREG(MGDGRPROT0HL, 0xFFC49002, __READ_WRITE, uint8);
__IOREG(MGDGRPROT0HH, 0xFFC49003, __READ_WRITE, uint8);
__IOREG(MGDGRSPID0, 0xFFC49004, __READ_WRITE, uint32);
__IOREG(MGDGRBAD0, 0xFFC49008, __READ_WRITE, uint32);
__IOREG(MGDGRBAD0L, 0xFFC49008, __READ_WRITE, uint16);
__IOREG(MGDGRBAD0LL, 0xFFC49008, __READ_WRITE, uint8);
__IOREG(MGDGRBAD0LH, 0xFFC49009, __READ_WRITE, uint8);
__IOREG(MGDGRBAD0H, 0xFFC4900A, __READ_WRITE, uint16);
__IOREG(MGDGRBAD0HL, 0xFFC4900A, __READ_WRITE, uint8);
__IOREG(MGDGRBAD0HH, 0xFFC4900B, __READ_WRITE, uint8);
__IOREG(MGDGRADV0, 0xFFC4900C, __READ_WRITE, uint32);
__IOREG(MGDGRADV0L, 0xFFC4900C, __READ_WRITE, uint16);
__IOREG(MGDGRADV0LL, 0xFFC4900C, __READ_WRITE, uint8);
__IOREG(MGDGRADV0LH, 0xFFC4900D, __READ_WRITE, uint8);
__IOREG(MGDGRADV0H, 0xFFC4900E, __READ_WRITE, uint16);
__IOREG(MGDGRADV0HL, 0xFFC4900E, __READ_WRITE, uint8);
__IOREG(MGDGRADV0HH, 0xFFC4900F, __READ_WRITE, uint8);
__IOREG(MGDGRPROT1, 0xFFC49010, __READ_WRITE, uint32);
__IOREG(MGDGRPROT1L, 0xFFC49010, __READ_WRITE, uint16);
__IOREG(MGDGRPROT1LL, 0xFFC49010, __READ_WRITE, uint8);
__IOREG(MGDGRPROT1LH, 0xFFC49011, __READ_WRITE, uint8);
__IOREG(MGDGRPROT1H, 0xFFC49012, __READ_WRITE, uint16);
__IOREG(MGDGRPROT1HL, 0xFFC49012, __READ_WRITE, uint8);
__IOREG(MGDGRPROT1HH, 0xFFC49013, __READ_WRITE, uint8);
__IOREG(MGDGRSPID1, 0xFFC49014, __READ_WRITE, uint32);
__IOREG(MGDGRBAD1, 0xFFC49018, __READ_WRITE, uint32);
__IOREG(MGDGRBAD1L, 0xFFC49018, __READ_WRITE, uint16);
__IOREG(MGDGRBAD1LL, 0xFFC49018, __READ_WRITE, uint8);
__IOREG(MGDGRBAD1LH, 0xFFC49019, __READ_WRITE, uint8);
__IOREG(MGDGRBAD1H, 0xFFC4901A, __READ_WRITE, uint16);
__IOREG(MGDGRBAD1HL, 0xFFC4901A, __READ_WRITE, uint8);
__IOREG(MGDGRBAD1HH, 0xFFC4901B, __READ_WRITE, uint8);
__IOREG(MGDGRADV1, 0xFFC4901C, __READ_WRITE, uint32);
__IOREG(MGDGRADV1L, 0xFFC4901C, __READ_WRITE, uint16);
__IOREG(MGDGRADV1LL, 0xFFC4901C, __READ_WRITE, uint8);
__IOREG(MGDGRADV1LH, 0xFFC4901D, __READ_WRITE, uint8);
__IOREG(MGDGRADV1H, 0xFFC4901E, __READ_WRITE, uint16);
__IOREG(MGDGRADV1HL, 0xFFC4901E, __READ_WRITE, uint8);
__IOREG(MGDGRADV1HH, 0xFFC4901F, __READ_WRITE, uint8);
__IOREG(MGDGRPROT2, 0xFFC49020, __READ_WRITE, uint32);
__IOREG(MGDGRPROT2L, 0xFFC49020, __READ_WRITE, uint16);
__IOREG(MGDGRPROT2LL, 0xFFC49020, __READ_WRITE, uint8);
__IOREG(MGDGRPROT2LH, 0xFFC49021, __READ_WRITE, uint8);
__IOREG(MGDGRPROT2H, 0xFFC49022, __READ_WRITE, uint16);
__IOREG(MGDGRPROT2HL, 0xFFC49022, __READ_WRITE, uint8);
__IOREG(MGDGRPROT2HH, 0xFFC49023, __READ_WRITE, uint8);
__IOREG(MGDGRSPID2, 0xFFC49024, __READ_WRITE, uint32);
__IOREG(MGDGRBAD2, 0xFFC49028, __READ_WRITE, uint32);
__IOREG(MGDGRBAD2L, 0xFFC49028, __READ_WRITE, uint16);
__IOREG(MGDGRBAD2LL, 0xFFC49028, __READ_WRITE, uint8);
__IOREG(MGDGRBAD2LH, 0xFFC49029, __READ_WRITE, uint8);
__IOREG(MGDGRBAD2H, 0xFFC4902A, __READ_WRITE, uint16);
__IOREG(MGDGRBAD2HL, 0xFFC4902A, __READ_WRITE, uint8);
__IOREG(MGDGRBAD2HH, 0xFFC4902B, __READ_WRITE, uint8);
__IOREG(MGDGRADV2, 0xFFC4902C, __READ_WRITE, uint32);
__IOREG(MGDGRADV2L, 0xFFC4902C, __READ_WRITE, uint16);
__IOREG(MGDGRADV2LL, 0xFFC4902C, __READ_WRITE, uint8);
__IOREG(MGDGRADV2LH, 0xFFC4902D, __READ_WRITE, uint8);
__IOREG(MGDGRADV2H, 0xFFC4902E, __READ_WRITE, uint16);
__IOREG(MGDGRADV2HL, 0xFFC4902E, __READ_WRITE, uint8);
__IOREG(MGDGRADV2HH, 0xFFC4902F, __READ_WRITE, uint8);
__IOREG(MGDGRPROT3, 0xFFC49030, __READ_WRITE, uint32);
__IOREG(MGDGRPROT3L, 0xFFC49030, __READ_WRITE, uint16);
__IOREG(MGDGRPROT3LL, 0xFFC49030, __READ_WRITE, uint8);
__IOREG(MGDGRPROT3LH, 0xFFC49031, __READ_WRITE, uint8);
__IOREG(MGDGRPROT3H, 0xFFC49032, __READ_WRITE, uint16);
__IOREG(MGDGRPROT3HL, 0xFFC49032, __READ_WRITE, uint8);
__IOREG(MGDGRPROT3HH, 0xFFC49033, __READ_WRITE, uint8);
__IOREG(MGDGRSPID3, 0xFFC49034, __READ_WRITE, uint32);
__IOREG(MGDGRBAD3, 0xFFC49038, __READ_WRITE, uint32);
__IOREG(MGDGRBAD3L, 0xFFC49038, __READ_WRITE, uint16);
__IOREG(MGDGRBAD3LL, 0xFFC49038, __READ_WRITE, uint8);
__IOREG(MGDGRBAD3LH, 0xFFC49039, __READ_WRITE, uint8);
__IOREG(MGDGRBAD3H, 0xFFC4903A, __READ_WRITE, uint16);
__IOREG(MGDGRBAD3HL, 0xFFC4903A, __READ_WRITE, uint8);
__IOREG(MGDGRBAD3HH, 0xFFC4903B, __READ_WRITE, uint8);
__IOREG(MGDGRADV3, 0xFFC4903C, __READ_WRITE, uint32);
__IOREG(MGDGRADV3L, 0xFFC4903C, __READ_WRITE, uint16);
__IOREG(MGDGRADV3LL, 0xFFC4903C, __READ_WRITE, uint8);
__IOREG(MGDGRADV3LH, 0xFFC4903D, __READ_WRITE, uint8);
__IOREG(MGDGRADV3H, 0xFFC4903E, __READ_WRITE, uint16);
__IOREG(MGDGRADV3HL, 0xFFC4903E, __READ_WRITE, uint8);
__IOREG(MGDGRADV3HH, 0xFFC4903F, __READ_WRITE, uint8);
__IOREG(MGDGRPROT4, 0xFFC49040, __READ_WRITE, uint32);
__IOREG(MGDGRPROT4L, 0xFFC49040, __READ_WRITE, uint16);
__IOREG(MGDGRPROT4LL, 0xFFC49040, __READ_WRITE, uint8);
__IOREG(MGDGRPROT4LH, 0xFFC49041, __READ_WRITE, uint8);
__IOREG(MGDGRPROT4H, 0xFFC49042, __READ_WRITE, uint16);
__IOREG(MGDGRPROT4HL, 0xFFC49042, __READ_WRITE, uint8);
__IOREG(MGDGRPROT4HH, 0xFFC49043, __READ_WRITE, uint8);
__IOREG(MGDGRSPID4, 0xFFC49044, __READ_WRITE, uint32);
__IOREG(MGDGRBAD4, 0xFFC49048, __READ_WRITE, uint32);
__IOREG(MGDGRBAD4L, 0xFFC49048, __READ_WRITE, uint16);
__IOREG(MGDGRBAD4LL, 0xFFC49048, __READ_WRITE, uint8);
__IOREG(MGDGRBAD4LH, 0xFFC49049, __READ_WRITE, uint8);
__IOREG(MGDGRBAD4H, 0xFFC4904A, __READ_WRITE, uint16);
__IOREG(MGDGRBAD4HL, 0xFFC4904A, __READ_WRITE, uint8);
__IOREG(MGDGRBAD4HH, 0xFFC4904B, __READ_WRITE, uint8);
__IOREG(MGDGRADV4, 0xFFC4904C, __READ_WRITE, uint32);
__IOREG(MGDGRADV4L, 0xFFC4904C, __READ_WRITE, uint16);
__IOREG(MGDGRADV4LL, 0xFFC4904C, __READ_WRITE, uint8);
__IOREG(MGDGRADV4LH, 0xFFC4904D, __READ_WRITE, uint8);
__IOREG(MGDGRADV4H, 0xFFC4904E, __READ_WRITE, uint16);
__IOREG(MGDGRADV4HL, 0xFFC4904E, __READ_WRITE, uint8);
__IOREG(MGDGRADV4HH, 0xFFC4904F, __READ_WRITE, uint8);
__IOREG(MGDGRPROT5, 0xFFC49050, __READ_WRITE, uint32);
__IOREG(MGDGRPROT5L, 0xFFC49050, __READ_WRITE, uint16);
__IOREG(MGDGRPROT5LL, 0xFFC49050, __READ_WRITE, uint8);
__IOREG(MGDGRPROT5LH, 0xFFC49051, __READ_WRITE, uint8);
__IOREG(MGDGRPROT5H, 0xFFC49052, __READ_WRITE, uint16);
__IOREG(MGDGRPROT5HL, 0xFFC49052, __READ_WRITE, uint8);
__IOREG(MGDGRPROT5HH, 0xFFC49053, __READ_WRITE, uint8);
__IOREG(MGDGRSPID5, 0xFFC49054, __READ_WRITE, uint32);
__IOREG(MGDGRBAD5, 0xFFC49058, __READ_WRITE, uint32);
__IOREG(MGDGRBAD5L, 0xFFC49058, __READ_WRITE, uint16);
__IOREG(MGDGRBAD5LL, 0xFFC49058, __READ_WRITE, uint8);
__IOREG(MGDGRBAD5LH, 0xFFC49059, __READ_WRITE, uint8);
__IOREG(MGDGRBAD5H, 0xFFC4905A, __READ_WRITE, uint16);
__IOREG(MGDGRBAD5HL, 0xFFC4905A, __READ_WRITE, uint8);
__IOREG(MGDGRBAD5HH, 0xFFC4905B, __READ_WRITE, uint8);
__IOREG(MGDGRADV5, 0xFFC4905C, __READ_WRITE, uint32);
__IOREG(MGDGRADV5L, 0xFFC4905C, __READ_WRITE, uint16);
__IOREG(MGDGRADV5LL, 0xFFC4905C, __READ_WRITE, uint8);
__IOREG(MGDGRADV5LH, 0xFFC4905D, __READ_WRITE, uint8);
__IOREG(MGDGRADV5H, 0xFFC4905E, __READ_WRITE, uint16);
__IOREG(MGDGRADV5HL, 0xFFC4905E, __READ_WRITE, uint8);
__IOREG(MGDGRADV5HH, 0xFFC4905F, __READ_WRITE, uint8);
__IOREG(MGDGRPROT6, 0xFFC49060, __READ_WRITE, uint32);
__IOREG(MGDGRPROT6L, 0xFFC49060, __READ_WRITE, uint16);
__IOREG(MGDGRPROT6LL, 0xFFC49060, __READ_WRITE, uint8);
__IOREG(MGDGRPROT6LH, 0xFFC49061, __READ_WRITE, uint8);
__IOREG(MGDGRPROT6H, 0xFFC49062, __READ_WRITE, uint16);
__IOREG(MGDGRPROT6HL, 0xFFC49062, __READ_WRITE, uint8);
__IOREG(MGDGRPROT6HH, 0xFFC49063, __READ_WRITE, uint8);
__IOREG(MGDGRSPID6, 0xFFC49064, __READ_WRITE, uint32);
__IOREG(MGDGRBAD6, 0xFFC49068, __READ_WRITE, uint32);
__IOREG(MGDGRBAD6L, 0xFFC49068, __READ_WRITE, uint16);
__IOREG(MGDGRBAD6LL, 0xFFC49068, __READ_WRITE, uint8);
__IOREG(MGDGRBAD6LH, 0xFFC49069, __READ_WRITE, uint8);
__IOREG(MGDGRBAD6H, 0xFFC4906A, __READ_WRITE, uint16);
__IOREG(MGDGRBAD6HL, 0xFFC4906A, __READ_WRITE, uint8);
__IOREG(MGDGRBAD6HH, 0xFFC4906B, __READ_WRITE, uint8);
__IOREG(MGDGRADV6, 0xFFC4906C, __READ_WRITE, uint32);
__IOREG(MGDGRADV6L, 0xFFC4906C, __READ_WRITE, uint16);
__IOREG(MGDGRADV6LL, 0xFFC4906C, __READ_WRITE, uint8);
__IOREG(MGDGRADV6LH, 0xFFC4906D, __READ_WRITE, uint8);
__IOREG(MGDGRADV6H, 0xFFC4906E, __READ_WRITE, uint16);
__IOREG(MGDGRADV6HL, 0xFFC4906E, __READ_WRITE, uint8);
__IOREG(MGDGRADV6HH, 0xFFC4906F, __READ_WRITE, uint8);
__IOREG(MGDGRPROT7, 0xFFC49070, __READ_WRITE, uint32);
__IOREG(MGDGRPROT7L, 0xFFC49070, __READ_WRITE, uint16);
__IOREG(MGDGRPROT7LL, 0xFFC49070, __READ_WRITE, uint8);
__IOREG(MGDGRPROT7LH, 0xFFC49071, __READ_WRITE, uint8);
__IOREG(MGDGRPROT7H, 0xFFC49072, __READ_WRITE, uint16);
__IOREG(MGDGRPROT7HL, 0xFFC49072, __READ_WRITE, uint8);
__IOREG(MGDGRPROT7HH, 0xFFC49073, __READ_WRITE, uint8);
__IOREG(MGDGRSPID7, 0xFFC49074, __READ_WRITE, uint32);
__IOREG(MGDGRBAD7, 0xFFC49078, __READ_WRITE, uint32);
__IOREG(MGDGRBAD7L, 0xFFC49078, __READ_WRITE, uint16);
__IOREG(MGDGRBAD7LL, 0xFFC49078, __READ_WRITE, uint8);
__IOREG(MGDGRBAD7LH, 0xFFC49079, __READ_WRITE, uint8);
__IOREG(MGDGRBAD7H, 0xFFC4907A, __READ_WRITE, uint16);
__IOREG(MGDGRBAD7HL, 0xFFC4907A, __READ_WRITE, uint8);
__IOREG(MGDGRBAD7HH, 0xFFC4907B, __READ_WRITE, uint8);
__IOREG(MGDGRADV7, 0xFFC4907C, __READ_WRITE, uint32);
__IOREG(MGDGRADV7L, 0xFFC4907C, __READ_WRITE, uint16);
__IOREG(MGDGRADV7LL, 0xFFC4907C, __READ_WRITE, uint8);
__IOREG(MGDGRADV7LH, 0xFFC4907D, __READ_WRITE, uint8);
__IOREG(MGDGRADV7H, 0xFFC4907E, __READ_WRITE, uint16);
__IOREG(MGDGRADV7HL, 0xFFC4907E, __READ_WRITE, uint8);
__IOREG(MGDGRADV7HH, 0xFFC4907F, __READ_WRITE, uint8);
__IOREG(MGDGRSCTL_VCI2GRAM, 0xFFC49100, __READ_WRITE, uint32);
__IOREG(MGDGRSSTAT_VCI2GRAM, 0xFFC49104, __READ, uint32);
__IOREG(MGDGRSTYPE_VCI2GRAM, 0xFFC4910C, __READ, uint32);
__IOREG(MGDGRSTYPE_VCI2GRAML, 0xFFC4910C, __READ, uint16);
__IOREG(MGDGRSTYPE_VCI2GRAMLL, 0xFFC4910C, __READ, uint8);
__IOREG(MGDGRSTYPE_VCI2GRAMLH, 0xFFC4910D, __READ, uint8);
__IOREG(MGDGRSTYPE_VCI2GRAMH, 0xFFC4910E, __READ, uint16);
__IOREG(MGDGRSTYPE_VCI2GRAMHL, 0xFFC4910E, __READ, uint8);
__IOREG(MGDGRSTYPE_VCI2GRAMHH, 0xFFC4910F, __READ, uint8);
__IOREG(MGDGRSCTL_PE1, 0xFFC49200, __READ_WRITE, uint32);
__IOREG(MGDGRSSTAT_PE1, 0xFFC49204, __READ, uint32);
__IOREG(MGDGRSTYPE_PE1, 0xFFC4920C, __READ, uint32);
__IOREG(MGDGRSTYPE_PE1L, 0xFFC4920C, __READ, uint16);
__IOREG(MGDGRSTYPE_PE1LL, 0xFFC4920C, __READ, uint8);
__IOREG(MGDGRSTYPE_PE1LH, 0xFFC4920D, __READ, uint8);
__IOREG(MGDGRSTYPE_PE1H, 0xFFC4920E, __READ, uint16);
__IOREG(MGDGRSTYPE_PE1HL, 0xFFC4920E, __READ, uint8);
__IOREG(MGDGRSTYPE_PE1HH, 0xFFC4920F, __READ, uint8);
__IOREG(MGDGRSCTL_AXI2GRAM, 0xFFC49700, __READ_WRITE, uint32);
__IOREG(MGDGRSSTAT_AXI2GRAM, 0xFFC49704, __READ, uint32);
__IOREG(MGDGRSTYPE_AXI2GRAM, 0xFFC4970C, __READ, uint32);
__IOREG(MGDGRSTYPE_AXI2GRAML, 0xFFC4970C, __READ, uint16);
__IOREG(MGDGRSTYPE_AXI2GRAMLL, 0xFFC4970C, __READ, uint8);
__IOREG(MGDGRSTYPE_AXI2GRAMLH, 0xFFC4970D, __READ, uint8);
__IOREG(MGDGRSTYPE_AXI2GRAMH, 0xFFC4970E, __READ, uint16);
__IOREG(MGDGRSTYPE_AXI2GRAMHL, 0xFFC4970E, __READ, uint8);
__IOREG(MGDGRSTYPE_AXI2GRAMHH, 0xFFC4970F, __READ, uint8);
__IOREG(PGERRSTATCTL_PE1, 0xFFC4A200, __READ_WRITE, uint32);
__IOREG(PGERRSTAT_PE1, 0xFFC4A204, __READ, uint32);
__IOREG(PGERRINFO_PE1, 0xFFC4A208, __READ, uint32);
__IOREG(PGERRSTATCTL_PE2, 0xFFC4A300, __READ_WRITE, uint32);
__IOREG(PGERRSTAT_PE2, 0xFFC4A304, __READ, uint32);
__IOREG(PGERRINFO_PE2, 0xFFC4A308, __READ, uint32);
__IOREG(APBFSGDPROT_PDMACM_A, 0xFFC4C000, __READ_WRITE, uint32);
__IOREG(APBFSGDPROT_PDMACM_AL, 0xFFC4C000, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_PDMACM_ALL, 0xFFC4C000, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACM_ALH, 0xFFC4C001, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACM_AH, 0xFFC4C002, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_PDMACM_AHL, 0xFFC4C002, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACM_AHH, 0xFFC4C003, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACM_A, 0xFFC4C004, __READ_WRITE, uint32);
__IOREG(APBFSGDSPID_PDMACM_AL, 0xFFC4C004, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_PDMACM_ALL, 0xFFC4C004, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACM_ALH, 0xFFC4C005, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACM_AH, 0xFFC4C006, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_PDMACM_AHL, 0xFFC4C006, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACM_AHH, 0xFFC4C007, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACM_B, 0xFFC4C008, __READ_WRITE, uint32);
__IOREG(APBFSGDPROT_PDMACM_BL, 0xFFC4C008, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_PDMACM_BLL, 0xFFC4C008, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACM_BLH, 0xFFC4C009, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACM_BH, 0xFFC4C00A, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_PDMACM_BHL, 0xFFC4C00A, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACM_BHH, 0xFFC4C00B, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACM_B, 0xFFC4C00C, __READ_WRITE, uint32);
__IOREG(APBFSGDSPID_PDMACM_BL, 0xFFC4C00C, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_PDMACM_BLL, 0xFFC4C00C, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACM_BLH, 0xFFC4C00D, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACM_BH, 0xFFC4C00E, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_PDMACM_BHL, 0xFFC4C00E, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACM_BHH, 0xFFC4C00F, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACH_A, 0xFFC4C010, __READ_WRITE, uint32);
__IOREG(APBFSGDPROT_PDMACH_AL, 0xFFC4C010, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_PDMACH_ALL, 0xFFC4C010, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACH_ALH, 0xFFC4C011, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACH_AH, 0xFFC4C012, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_PDMACH_AHL, 0xFFC4C012, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACH_AHH, 0xFFC4C013, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACH_A, 0xFFC4C014, __READ_WRITE, uint32);
__IOREG(APBFSGDSPID_PDMACH_AL, 0xFFC4C014, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_PDMACH_ALL, 0xFFC4C014, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACH_ALH, 0xFFC4C015, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACH_AH, 0xFFC4C016, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_PDMACH_AHL, 0xFFC4C016, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACH_AHH, 0xFFC4C017, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACH_B, 0xFFC4C018, __READ_WRITE, uint32);
__IOREG(APBFSGDPROT_PDMACH_BL, 0xFFC4C018, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_PDMACH_BLL, 0xFFC4C018, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACH_BLH, 0xFFC4C019, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACH_BH, 0xFFC4C01A, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_PDMACH_BHL, 0xFFC4C01A, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PDMACH_BHH, 0xFFC4C01B, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACH_B, 0xFFC4C01C, __READ_WRITE, uint32);
__IOREG(APBFSGDSPID_PDMACH_BL, 0xFFC4C01C, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_PDMACH_BLL, 0xFFC4C01C, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACH_BLH, 0xFFC4C01D, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACH_BH, 0xFFC4C01E, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_PDMACH_BHL, 0xFFC4C01E, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PDMACH_BHH, 0xFFC4C01F, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_INTC2_A, 0xFFC4C020, __READ_WRITE, uint32);
__IOREG(APBFSGDPROT_INTC2_AL, 0xFFC4C020, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_INTC2_ALL, 0xFFC4C020, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_INTC2_ALH, 0xFFC4C021, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_INTC2_AH, 0xFFC4C022, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_INTC2_AHL, 0xFFC4C022, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_INTC2_AHH, 0xFFC4C023, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_INTC2_A, 0xFFC4C024, __READ_WRITE, uint32);
__IOREG(APBFSGDSPID_INTC2_AL, 0xFFC4C024, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_INTC2_ALL, 0xFFC4C024, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_INTC2_ALH, 0xFFC4C025, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_INTC2_AH, 0xFFC4C026, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_INTC2_AHL, 0xFFC4C026, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_INTC2_AHH, 0xFFC4C027, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_INTC2_B, 0xFFC4C028, __READ_WRITE, uint32);
__IOREG(APBFSGDPROT_INTC2_BL, 0xFFC4C028, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_INTC2_BLL, 0xFFC4C028, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_INTC2_BLH, 0xFFC4C029, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_INTC2_BH, 0xFFC4C02A, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_INTC2_BHL, 0xFFC4C02A, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_INTC2_BHH, 0xFFC4C02B, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_INTC2_B, 0xFFC4C02C, __READ_WRITE, uint32);
__IOREG(APBFSGDSPID_INTC2_BL, 0xFFC4C02C, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_INTC2_BLL, 0xFFC4C02C, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_INTC2_BLH, 0xFFC4C02D, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_INTC2_BH, 0xFFC4C02E, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_INTC2_BHL, 0xFFC4C02E, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_INTC2_BHH, 0xFFC4C02F, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PBG_A, 0xFFC4C040, __READ_WRITE, uint32);
__IOREG(APBFSGDPROT_PBG_AL, 0xFFC4C040, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_PBG_ALL, 0xFFC4C040, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PBG_ALH, 0xFFC4C041, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PBG_AH, 0xFFC4C042, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_PBG_AHL, 0xFFC4C042, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PBG_AHH, 0xFFC4C043, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PBG_A, 0xFFC4C044, __READ_WRITE, uint32);
__IOREG(APBFSGDSPID_PBG_AL, 0xFFC4C044, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_PBG_ALL, 0xFFC4C044, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PBG_ALH, 0xFFC4C045, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PBG_AH, 0xFFC4C046, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_PBG_AHL, 0xFFC4C046, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PBG_AHH, 0xFFC4C047, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PBG_B, 0xFFC4C048, __READ_WRITE, uint32);
__IOREG(APBFSGDPROT_PBG_BL, 0xFFC4C048, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_PBG_BLL, 0xFFC4C048, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PBG_BLH, 0xFFC4C049, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PBG_BH, 0xFFC4C04A, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_PBG_BHL, 0xFFC4C04A, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_PBG_BHH, 0xFFC4C04B, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PBG_B, 0xFFC4C04C, __READ_WRITE, uint32);
__IOREG(APBFSGDSPID_PBG_BL, 0xFFC4C04C, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_PBG_BLL, 0xFFC4C04C, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PBG_BLH, 0xFFC4C04D, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PBG_BH, 0xFFC4C04E, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_PBG_BHL, 0xFFC4C04E, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_PBG_BHH, 0xFFC4C04F, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP1_A, 0xFFC4C050, __READ_WRITE, uint32);
__IOREG(APBFSGDPROT_SP1_AL, 0xFFC4C050, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_SP1_ALL, 0xFFC4C050, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP1_ALH, 0xFFC4C051, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP1_AH, 0xFFC4C052, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_SP1_AHL, 0xFFC4C052, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP1_AHH, 0xFFC4C053, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP1_A, 0xFFC4C054, __READ_WRITE, uint32);
__IOREG(APBFSGDSPID_SP1_AL, 0xFFC4C054, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_SP1_ALL, 0xFFC4C054, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP1_ALH, 0xFFC4C055, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP1_AH, 0xFFC4C056, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_SP1_AHL, 0xFFC4C056, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP1_AHH, 0xFFC4C057, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP1_B, 0xFFC4C058, __READ_WRITE, uint32);
__IOREG(APBFSGDPROT_SP1_BL, 0xFFC4C058, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_SP1_BLL, 0xFFC4C058, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP1_BLH, 0xFFC4C059, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP1_BH, 0xFFC4C05A, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_SP1_BHL, 0xFFC4C05A, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP1_BHH, 0xFFC4C05B, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP1_B, 0xFFC4C05C, __READ_WRITE, uint32);
__IOREG(APBFSGDSPID_SP1_BL, 0xFFC4C05C, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_SP1_BLL, 0xFFC4C05C, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP1_BLH, 0xFFC4C05D, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP1_BH, 0xFFC4C05E, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_SP1_BHL, 0xFFC4C05E, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP1_BHH, 0xFFC4C05F, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP4_A, 0xFFC4C070, __READ_WRITE, uint32);
__IOREG(APBFSGDPROT_SP4_AL, 0xFFC4C070, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_SP4_ALL, 0xFFC4C070, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP4_ALH, 0xFFC4C071, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP4_AH, 0xFFC4C072, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_SP4_AHL, 0xFFC4C072, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP4_AHH, 0xFFC4C073, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP4_A, 0xFFC4C074, __READ_WRITE, uint32);
__IOREG(APBFSGDSPID_SP4_AL, 0xFFC4C074, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_SP4_ALL, 0xFFC4C074, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP4_ALH, 0xFFC4C075, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP4_AH, 0xFFC4C076, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_SP4_AHL, 0xFFC4C076, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP4_AHH, 0xFFC4C077, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP4_B, 0xFFC4C078, __READ_WRITE, uint32);
__IOREG(APBFSGDPROT_SP4_BL, 0xFFC4C078, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_SP4_BLL, 0xFFC4C078, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP4_BLH, 0xFFC4C079, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP4_BH, 0xFFC4C07A, __READ_WRITE, uint16);
__IOREG(APBFSGDPROT_SP4_BHL, 0xFFC4C07A, __READ_WRITE, uint8);
__IOREG(APBFSGDPROT_SP4_BHH, 0xFFC4C07B, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP4_B, 0xFFC4C07C, __READ_WRITE, uint32);
__IOREG(APBFSGDSPID_SP4_BL, 0xFFC4C07C, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_SP4_BLL, 0xFFC4C07C, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP4_BLH, 0xFFC4C07D, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP4_BH, 0xFFC4C07E, __READ_WRITE, uint16);
__IOREG(APBFSGDSPID_SP4_BHL, 0xFFC4C07E, __READ_WRITE, uint8);
__IOREG(APBFSGDSPID_SP4_BHH, 0xFFC4C07F, __READ_WRITE, uint8);
__IOREG(ERRSLVCTL_PFSS0, 0xFFC4C800, __READ_WRITE, uint32);
__IOREG(ERRSLVSTAT_PFSS0, 0xFFC4C804, __READ, uint32);
__IOREG(ERRSLVTYPE_PFSS0, 0xFFC4C80C, __READ, uint32);
__IOREG(ERRSLVCTL_PFSS1, 0xFFC4C810, __READ_WRITE, uint32);
__IOREG(ERRSLVSTAT_PFSS1, 0xFFC4C814, __READ, uint32);
__IOREG(ERRSLVTYPE_PFSS1, 0xFFC4C81C, __READ, uint32);
__IOREG(ERRSLVCTL_PBAREA, 0xFFC4C880, __READ_WRITE, uint32);
__IOREG(ERRSLVCTL_PBAREAL, 0xFFC4C880, __READ_WRITE, uint16);
__IOREG(ERRSLVCTL_PBAREALL, 0xFFC4C880, __READ_WRITE, uint8);
__IOREG(ERRSLVSTAT_PBAREA, 0xFFC4C884, __READ, uint32);
__IOREG(ERRSLVSTAT_PBAREAL, 0xFFC4C884, __READ, uint16);
__IOREG(ERRSLVSTAT_PBAREALL, 0xFFC4C884, __READ, uint8);
__IOREG(ERRSLVTYPE_PBAREA, 0xFFC4C88C, __READ, uint32);
__IOREG(ERRSLVTYPE_PBAREAL, 0xFFC4C88C, __READ, uint16);
__IOREG(ERRSLVTYPE_PBAREAH, 0xFFC4C88E, __READ, uint16);
__IOREG(PDMA_COMP_CNTRL, 0xFFC4CA00, __READ_WRITE, uint32);
__IOREG(BOOTCTRL, 0xFFC58000, __READ_WRITE, uint32);
__IOREG(BOOTCTRLL, 0xFFC58000, __READ_WRITE, uint16);
__IOREG(BOOTCTRLLL, 0xFFC58000, __READ_WRITE, uint8);
__IOREG(EPC, 0xFFC58020, __READ_WRITE, uint32);
__IOREG(FCUFAREA, 0xFFC59008, __READ_WRITE, uint8);
__IOREG(EEPRDCYCL0, 0xFFC59810, __READ_WRITE, uint8);
__IOREG(EEPRDCYCL1, 0xFFC59910, __READ_WRITE, uint8);
__IOREG(DFECCCTL0, 0xFFC5B000, __READ_WRITE, uint32);
__IOREG(DFECCCTL0L, 0xFFC5B000, __READ_WRITE, uint16);
__IOREG(DFERSTR0, 0xFFC5B004, __READ, uint32);
__IOREG(DFERSTC0, 0xFFC5B008, __READ_WRITE, uint32);
__IOREG(DFERSTC0L, 0xFFC5B008, __READ_WRITE, uint16);
__IOREG(DFERSTC0LL, 0xFFC5B008, __READ_WRITE, uint8);
__IOREG(DFOVFSTR0, 0xFFC5B00C, __READ, uint32);
__IOREG(DFOVFSTC0, 0xFFC5B010, __READ_WRITE, uint32);
__IOREG(DFOVFSTC0L, 0xFFC5B010, __READ_WRITE, uint16);
__IOREG(DFOVFSTC0LL, 0xFFC5B010, __READ_WRITE, uint8);
__IOREG(DFERRINT0, 0xFFC5B014, __READ_WRITE, uint32);
__IOREG(DFERRINT0L, 0xFFC5B014, __READ_WRITE, uint16);
__IOREG(DFERRINT0LL, 0xFFC5B014, __READ_WRITE, uint8);
__IOREG(DFEADR0, 0xFFC5B018, __READ, uint32);
__IOREG(DFTSTCTL0, 0xFFC5B01C, __READ_WRITE, uint32);
__IOREG(DFTSTCTL0L, 0xFFC5B01C, __READ_WRITE, uint16);
__IOREG(DFECCCTL1, 0xFFC5C000, __READ_WRITE, uint32);
__IOREG(DFECCCTL1L, 0xFFC5C000, __READ_WRITE, uint16);
__IOREG(DFERSTR1, 0xFFC5C004, __READ, uint32);
__IOREG(DFERSTC1, 0xFFC5C008, __READ_WRITE, uint32);
__IOREG(DFERSTC1L, 0xFFC5C008, __READ_WRITE, uint16);
__IOREG(DFERSTC1LL, 0xFFC5C008, __READ_WRITE, uint8);
__IOREG(DFOVFSTR1, 0xFFC5C00C, __READ, uint32);
__IOREG(DFOVFSTC1, 0xFFC5C010, __READ_WRITE, uint32);
__IOREG(DFOVFSTC1L, 0xFFC5C010, __READ_WRITE, uint16);
__IOREG(DFOVFSTC1LL, 0xFFC5C010, __READ_WRITE, uint8);
__IOREG(DFERRINT1, 0xFFC5C014, __READ_WRITE, uint32);
__IOREG(DFERRINT1L, 0xFFC5C014, __READ_WRITE, uint16);
__IOREG(DFERRINT1LL, 0xFFC5C014, __READ_WRITE, uint8);
__IOREG(DFEADR1, 0xFFC5C018, __READ, uint32);
__IOREG(DFTSTCTL1, 0xFFC5C01C, __READ_WRITE, uint32);
__IOREG(DFTSTCTL1L, 0xFFC5C01C, __READ_WRITE, uint16);
__IOREG(IDECCCTL_PE1, 0xFFC60400, __READ_WRITE, uint32);
__IOREG(IDECCCTL_PE1L, 0xFFC60400, __READ_WRITE, uint16);
__IOREG(IDERRINT_PE1, 0xFFC60404, __READ_WRITE, uint32);
__IOREG(IDERRINT_PE1L, 0xFFC60404, __READ_WRITE, uint16);
__IOREG(IDERRINT_PE1LL, 0xFFC60404, __READ_WRITE, uint8);
__IOREG(IDSERSTCLR_PE1, 0xFFC60408, __READ_WRITE, uint32);
__IOREG(IDSERSTCLR_PE1L, 0xFFC60408, __READ_WRITE, uint16);
__IOREG(IDSERSTCLR_PE1LL, 0xFFC60408, __READ_WRITE, uint8);
__IOREG(IDDERSTCLR_PE1, 0xFFC6040C, __READ_WRITE, uint32);
__IOREG(IDDERSTCLR_PE1L, 0xFFC6040C, __READ_WRITE, uint16);
__IOREG(IDDERSTCLR_PE1LL, 0xFFC6040C, __READ_WRITE, uint8);
__IOREG(IDOVFSTR_PE1, 0xFFC60410, __READ, uint32);
__IOREG(IDOVFSTR_PE1L, 0xFFC60410, __READ, uint16);
__IOREG(IDOVFSTR_PE1LL, 0xFFC60410, __READ, uint8);
__IOREG(IDSERSTR_PE1, 0xFFC60420, __READ, uint32);
__IOREG(IDSERSTR_PE1L, 0xFFC60420, __READ, uint16);
__IOREG(IDSERSTR_PE1LL, 0xFFC60420, __READ, uint8);
__IOREG(IDSERSTR_PE1LH, 0xFFC60421, __READ, uint8);
__IOREG(IDDERSTR_PE1, 0xFFC60450, __READ, uint32);
__IOREG(IDDERSTR_PE1L, 0xFFC60450, __READ, uint16);
__IOREG(IDDERSTR_PE1LL, 0xFFC60450, __READ, uint8);
__IOREG(IDDERSTR_PE1LH, 0xFFC60451, __READ, uint8);
__IOREG(IDSEDADR0_PE1, 0xFFC60460, __READ, uint32);
__IOREG(IDSEDADR1_PE1, 0xFFC60464, __READ, uint32);
__IOREG(IDDEDADR0_PE1, 0xFFC604E0, __READ, uint32);
__IOREG(IDDEDADR1_PE1, 0xFFC604E4, __READ, uint32);
__IOREG(ITECCCTL_PE1, 0xFFC61400, __READ_WRITE, uint32);
__IOREG(ITECCCTL_PE1L, 0xFFC61400, __READ_WRITE, uint16);
__IOREG(ITERRINT_PE1, 0xFFC61404, __READ_WRITE, uint32);
__IOREG(ITERRINT_PE1L, 0xFFC61404, __READ_WRITE, uint16);
__IOREG(ITERRINT_PE1LL, 0xFFC61404, __READ_WRITE, uint8);
__IOREG(ITSERSTCLR_PE1, 0xFFC61408, __READ_WRITE, uint32);
__IOREG(ITSERSTCLR_PE1L, 0xFFC61408, __READ_WRITE, uint16);
__IOREG(ITSERSTCLR_PE1LL, 0xFFC61408, __READ_WRITE, uint8);
__IOREG(ITDERSTCLR_PE1, 0xFFC6140C, __READ_WRITE, uint32);
__IOREG(ITDERSTCLR_PE1L, 0xFFC6140C, __READ_WRITE, uint16);
__IOREG(ITDERSTCLR_PE1LL, 0xFFC6140C, __READ_WRITE, uint8);
__IOREG(ITOVFSTR_PE1, 0xFFC61410, __READ, uint32);
__IOREG(ITOVFSTR_PE1L, 0xFFC61410, __READ, uint16);
__IOREG(ITOVFSTR_PE1LL, 0xFFC61410, __READ, uint8);
__IOREG(ITSERSTR_PE1, 0xFFC61420, __READ, uint32);
__IOREG(ITSERSTR_PE1L, 0xFFC61420, __READ, uint16);
__IOREG(ITSERSTR_PE1LL, 0xFFC61420, __READ, uint8);
__IOREG(ITDERSTR_PE1, 0xFFC61450, __READ, uint32);
__IOREG(ITDERSTR_PE1L, 0xFFC61450, __READ, uint16);
__IOREG(ITDERSTR_PE1LL, 0xFFC61450, __READ, uint8);
__IOREG(ITSEDADR_PE1, 0xFFC61460, __READ, uint32);
__IOREG(ITDEDADR_PE1, 0xFFC614E0, __READ, uint32);
__IOREG(UCFERRINT, 0xFFC62000, __READ_WRITE, uint32);
__IOREG(UCFERRINTL, 0xFFC62000, __READ_WRITE, uint16);
__IOREG(UCFERRINTLL, 0xFFC62000, __READ_WRITE, uint8);
__IOREG(UCFSERSTCLR, 0xFFC62004, __READ_WRITE, uint32);
__IOREG(UCFSERSTCLRL, 0xFFC62004, __READ_WRITE, uint16);
__IOREG(UCFSERSTCLRLL, 0xFFC62004, __READ_WRITE, uint8);
__IOREG(UCFDERSTCLR, 0xFFC62008, __READ_WRITE, uint32);
__IOREG(UCFDERSTCLRL, 0xFFC62008, __READ_WRITE, uint16);
__IOREG(UCFDERSTCLRLL, 0xFFC62008, __READ_WRITE, uint8);
__IOREG(UCFOVFSTR, 0xFFC6200C, __READ, uint32);
__IOREG(UCFOVFSTRL, 0xFFC6200C, __READ, uint16);
__IOREG(UCFOVFSTRLL, 0xFFC6200C, __READ, uint8);
__IOREG(UCFSERSTR, 0xFFC62020, __READ, uint32);
__IOREG(UCFSERSTRL, 0xFFC62020, __READ, uint16);
__IOREG(UCFSERSTRLL, 0xFFC62020, __READ, uint8);
__IOREG(UCFDERSTR, 0xFFC62030, __READ, uint32);
__IOREG(UCFDERSTRL, 0xFFC62030, __READ, uint16);
__IOREG(UCFDERSTRLL, 0xFFC62030, __READ, uint8);
__IOREG(UCF1SEDADR, 0xFFC62040, __READ, uint32);
__IOREG(UCF2SEDADR, 0xFFC62044, __READ, uint32);
__IOREG(UCF3SEDADR, 0xFFC62048, __READ, uint32);
__IOREG(UCF4SEDADR, 0xFFC6204C, __READ, uint32);
__IOREG(UCFDEDADR, 0xFFC620C0, __READ, uint32);
__IOREG(CFAPCTL, 0xFFC62100, __READ_WRITE, uint32);
__IOREG(CFAPCTLL, 0xFFC62100, __READ_WRITE, uint16);
__IOREG(CFECCCTL_VCI2CFBA, 0xFFC62200, __READ_WRITE, uint32);
__IOREG(CFECCCTL_VCI2CFBAL, 0xFFC62200, __READ_WRITE, uint16);
__IOREG(CFSTSTCTL_VCI2CFBA, 0xFFC622F0, __READ_WRITE, uint32);
__IOREG(CFSTSTCTL_VCI2CFBAL, 0xFFC622F0, __READ_WRITE, uint16);
__IOREG(CFECCCTL_PE1, 0xFFC62400, __READ_WRITE, uint32);
__IOREG(CFECCCTL_PE1L, 0xFFC62400, __READ_WRITE, uint16);
__IOREG(CFSTSTCTL_PE1, 0xFFC624F0, __READ_WRITE, uint32);
__IOREG(CFSTSTCTL_PE1L, 0xFFC624F0, __READ_WRITE, uint16);
__IOREG(CFECCCTL_VCI2CFBB, 0xFFC62C00, __READ_WRITE, uint32);
__IOREG(CFECCCTL_VCI2CFBBL, 0xFFC62C02, __READ_WRITE, uint16);
__IOREG(CFERRINT_VCI2CFBB, 0xFFC62C04, __READ_WRITE, uint32);
__IOREG(CFERRINT_VCI2CFBBL, 0xFFC62C04, __READ_WRITE, uint16);
__IOREG(CFERRINT_VCI2CFBBLL, 0xFFC62C04, __READ_WRITE, uint8);
__IOREG(CFERSTCLR_VCI2CFBB, 0xFFC62C08, __READ_WRITE, uint32);
__IOREG(CFERSTCLR_VCI2CFBBL, 0xFFC62C08, __READ_WRITE, uint16);
__IOREG(CFERSTCLR_VCI2CFBBLL, 0xFFC62C08, __READ_WRITE, uint8);
__IOREG(CFOVFSTR_VCI2CFBB, 0xFFC62C0C, __READ, uint32);
__IOREG(CFOVFSTR_VCI2CFBBL, 0xFFC62C0C, __READ, uint16);
__IOREG(CFOVFSTR_VCI2CFBBLL, 0xFFC62C0C, __READ, uint8);
__IOREG(CFERSTR_VCI2CFBB, 0xFFC62C10, __READ, uint32);
__IOREG(CFERSTR_VCI2CFBBL, 0xFFC62C10, __READ, uint16);
__IOREG(CFERSTR_VCI2CFBBLL, 0xFFC62C10, __READ, uint8);
__IOREG(CFEADR0_VCI2CFBB, 0xFFC62C50, __READ, uint32);
__IOREG(IFECCCTL_PE1, 0xFFC63400, __READ_WRITE, uint32);
__IOREG(IFECCCTL_PE1L, 0xFFC63402, __READ_WRITE, uint16);
__IOREG(IFERRINT_PE1, 0xFFC63404, __READ_WRITE, uint32);
__IOREG(IFERRINT_PE1L, 0xFFC63404, __READ_WRITE, uint16);
__IOREG(IFERRINT_PE1LL, 0xFFC63404, __READ_WRITE, uint8);
__IOREG(IFERSTCLR_PE1, 0xFFC63408, __READ_WRITE, uint32);
__IOREG(IFERSTCLR_PE1L, 0xFFC63408, __READ_WRITE, uint16);
__IOREG(IFERSTCLR_PE1LL, 0xFFC63408, __READ_WRITE, uint8);
__IOREG(IFOVFSTR_PE1, 0xFFC6340C, __READ, uint32);
__IOREG(IFOVFSTR_PE1L, 0xFFC6340C, __READ, uint16);
__IOREG(IFOVFSTR_PE1LL, 0xFFC6340C, __READ, uint8);
__IOREG(IFERSTR_PE1, 0xFFC63410, __READ, uint32);
__IOREG(IFERSTR_PE1L, 0xFFC63410, __READ, uint16);
__IOREG(IFERSTR_PE1LL, 0xFFC63410, __READ, uint8);
__IOREG(IFERADR_PE1, 0xFFC63450, __READ, uint32);
__IOREG(UGRERRINT, 0xFFC64000, __READ_WRITE, uint32);
__IOREG(UGRERRINTL, 0xFFC64000, __READ_WRITE, uint16);
__IOREG(UGRERRINTLL, 0xFFC64000, __READ_WRITE, uint8);
__IOREG(UGRSERSTCLR, 0xFFC64004, __READ_WRITE, uint32);
__IOREG(UGRSERSTCLRL, 0xFFC64004, __READ_WRITE, uint16);
__IOREG(UGRSERSTCLRLL, 0xFFC64004, __READ_WRITE, uint8);
__IOREG(UGRSERSTCLRLH, 0xFFC64005, __READ_WRITE, uint8);
__IOREG(UGRSERSTCLRH, 0xFFC64006, __READ_WRITE, uint16);
__IOREG(UGRSERSTCLRHL, 0xFFC64006, __READ_WRITE, uint8);
__IOREG(UGRSERSTCLRHH, 0xFFC64007, __READ_WRITE, uint8);
__IOREG(UGRDERSTCLR, 0xFFC64008, __READ_WRITE, uint32);
__IOREG(UGRDERSTCLRL, 0xFFC64008, __READ_WRITE, uint16);
__IOREG(UGRDERSTCLRLL, 0xFFC64008, __READ_WRITE, uint8);
__IOREG(UGROVFSTR, 0xFFC6400C, __READ, uint32);
__IOREG(UGROVFSTRL, 0xFFC6400C, __READ, uint16);
__IOREG(UGROVFSTRLL, 0xFFC6400C, __READ, uint8);
__IOREG(UGRSERSTR, 0xFFC64020, __READ, uint32);
__IOREG(UGRSERSTRL, 0xFFC64020, __READ, uint16);
__IOREG(UGRSERSTRLL, 0xFFC64020, __READ, uint8);
__IOREG(UGRSERSTRLH, 0xFFC64021, __READ, uint8);
__IOREG(UGRSERSTRH, 0xFFC64022, __READ, uint16);
__IOREG(UGRSERSTRHL, 0xFFC64022, __READ, uint8);
__IOREG(UGRSERSTRHH, 0xFFC64023, __READ, uint8);
__IOREG(UGRDERSTR, 0xFFC64030, __READ, uint32);
__IOREG(UGRDERSTRL, 0xFFC64030, __READ, uint16);
__IOREG(UGRDERSTRLL, 0xFFC64030, __READ, uint8);
__IOREG(UGR1SEDADR, 0xFFC64040, __READ, uint32);
__IOREG(UGR2SEDADR, 0xFFC64044, __READ, uint32);
__IOREG(UGR3SEDADR, 0xFFC64048, __READ, uint32);
__IOREG(UGR4SEDADR, 0xFFC6404C, __READ, uint32);
__IOREG(UGR5SEDADR, 0xFFC64050, __READ, uint32);
__IOREG(UGR6SEDADR, 0xFFC64054, __READ, uint32);
__IOREG(UGR7SEDADR, 0xFFC64058, __READ, uint32);
__IOREG(UGR8SEDADR, 0xFFC6405C, __READ, uint32);
__IOREG(UGR9SEDADR, 0xFFC64060, __READ, uint32);
__IOREG(UGR10SEDADR, 0xFFC64064, __READ, uint32);
__IOREG(UGR11SEDADR, 0xFFC64068, __READ, uint32);
__IOREG(UGR12SEDADR, 0xFFC6406C, __READ, uint32);
__IOREG(UGR13SEDADR, 0xFFC64070, __READ, uint32);
__IOREG(UGR14SEDADR, 0xFFC64074, __READ, uint32);
__IOREG(UGR15SEDADR, 0xFFC64078, __READ, uint32);
__IOREG(UGR16SEDADR, 0xFFC6407C, __READ, uint32);
__IOREG(UGR17SEDADR, 0xFFC64080, __READ, uint32);
__IOREG(UGR18SEDADR, 0xFFC64084, __READ, uint32);
__IOREG(UGR19SEDADR, 0xFFC64088, __READ, uint32);
__IOREG(UGR20SEDADR, 0xFFC6408C, __READ, uint32);
__IOREG(UGR21SEDADR, 0xFFC64090, __READ, uint32);
__IOREG(UGR22SEDADR, 0xFFC64094, __READ, uint32);
__IOREG(UGR23SEDADR, 0xFFC64098, __READ, uint32);
__IOREG(UGR24SEDADR, 0xFFC6409C, __READ, uint32);
__IOREG(UGR25SEDADR, 0xFFC640A0, __READ, uint32);
__IOREG(UGR26SEDADR, 0xFFC640A4, __READ, uint32);
__IOREG(UGR27SEDADR, 0xFFC640A8, __READ, uint32);
__IOREG(UGR28SEDADR, 0xFFC640AC, __READ, uint32);
__IOREG(UGR29SEDADR, 0xFFC640B0, __READ, uint32);
__IOREG(UGR30SEDADR, 0xFFC640B4, __READ, uint32);
__IOREG(UGR31SEDADR, 0xFFC640B8, __READ, uint32);
__IOREG(UGR32SEDADR, 0xFFC640BC, __READ, uint32);
__IOREG(UGR00DEDADR, 0xFFC640C0, __READ, uint32);
__IOREG(GRECCCTL_GRAMC, 0xFFC64100, __READ_WRITE, uint32);
__IOREG(GRECCCTL_GRAMCL, 0xFFC64100, __READ_WRITE, uint16);
__IOREG(GRTSTCTL, 0xFFC64104, __READ_WRITE, uint32);
__IOREG(GRTSTCTLL, 0xFFC64104, __READ_WRITE, uint16);
__IOREG(GRTDATBF0L, 0xFFC64108, __READ, uint32);
__IOREG(GRTDATBF0LL, 0xFFC64108, __READ, uint16);
__IOREG(GRTDATBF0LLL, 0xFFC64108, __READ, uint8);
__IOREG(GRTDATBF0LLH, 0xFFC64109, __READ, uint8);
__IOREG(GRTDATBF0LH, 0xFFC6410A, __READ, uint16);
__IOREG(GRTDATBF0LHL, 0xFFC6410A, __READ, uint8);
__IOREG(GRTDATBF0LHH, 0xFFC6410B, __READ, uint8);
__IOREG(GRTDATBF0H, 0xFFC6410C, __READ, uint32);
__IOREG(GRTDATBF0HL, 0xFFC6410C, __READ, uint16);
__IOREG(GRTDATBF0HLL, 0xFFC6410C, __READ, uint8);
__IOREG(GRTDATBF0HLH, 0xFFC6410D, __READ, uint8);
__IOREG(GRTDATBF0HH, 0xFFC6410E, __READ, uint16);
__IOREG(GRTDATBF0HHL, 0xFFC6410E, __READ, uint8);
__IOREG(GRTDATBF0HHH, 0xFFC6410F, __READ, uint8);
__IOREG(GRTDATBF1L, 0xFFC64110, __READ, uint32);
__IOREG(GRTDATBF1LL, 0xFFC64110, __READ, uint16);
__IOREG(GRTDATBF1LLL, 0xFFC64110, __READ, uint8);
__IOREG(GRTDATBF1LLH, 0xFFC64111, __READ, uint8);
__IOREG(GRTDATBF1LH, 0xFFC64112, __READ, uint16);
__IOREG(GRTDATBF1LHL, 0xFFC64112, __READ, uint8);
__IOREG(GRTDATBF1LHH, 0xFFC64113, __READ, uint8);
__IOREG(GRTDATBF1H, 0xFFC64114, __READ, uint32);
__IOREG(GRTDATBF1HL, 0xFFC64114, __READ, uint16);
__IOREG(GRTDATBF1HLL, 0xFFC64114, __READ, uint8);
__IOREG(GRTDATBF1HLH, 0xFFC64115, __READ, uint8);
__IOREG(GRTDATBF1HH, 0xFFC64116, __READ, uint16);
__IOREG(GRTDATBF1HHL, 0xFFC64116, __READ, uint8);
__IOREG(GRTDATBF1HHH, 0xFFC64117, __READ, uint8);
__IOREG(GRDECINBF0, 0xFFC64118, __READ_WRITE, uint32);
__IOREG(GRDECINBF0L, 0xFFC64118, __READ_WRITE, uint16);
__IOREG(GRDECINBF0LL, 0xFFC64118, __READ_WRITE, uint8);
__IOREG(GRDECINBF0LH, 0xFFC64119, __READ_WRITE, uint8);
__IOREG(GRDECINBF0H, 0xFFC6411A, __READ_WRITE, uint16);
__IOREG(GRDECINBF0HL, 0xFFC6411A, __READ_WRITE, uint8);
__IOREG(GRDECINBF0HH, 0xFFC6411B, __READ_WRITE, uint8);
__IOREG(GRDECINBF1, 0xFFC6411C, __READ_WRITE, uint32);
__IOREG(GRDECINBF1L, 0xFFC6411C, __READ_WRITE, uint16);
__IOREG(GRDECINBF1LL, 0xFFC6411C, __READ_WRITE, uint8);
__IOREG(GRDECINBF1LH, 0xFFC6411D, __READ_WRITE, uint8);
__IOREG(GRDECINBF1H, 0xFFC6411E, __READ_WRITE, uint16);
__IOREG(GRDECINBF1HL, 0xFFC6411E, __READ_WRITE, uint8);
__IOREG(GRDECINBF1HH, 0xFFC6411F, __READ_WRITE, uint8);
__IOREG(GRECCCTL_VCI2GRAM, 0xFFC64200, __READ_WRITE, uint32);
__IOREG(GRECCCTL_VCI2GRAML, 0xFFC64200, __READ_WRITE, uint16);
__IOREG(GRECCCTL_PE1, 0xFFC64400, __READ_WRITE, uint32);
__IOREG(GRECCCTL_PE1L, 0xFFC64400, __READ_WRITE, uint16);
__IOREG(GRECCCTL_AXI2GRAM, 0xFFC64E00, __READ_WRITE, uint32);
__IOREG(GRECCCTL_AXI2GRAML, 0xFFC64E00, __READ_WRITE, uint16);
__IOREG(LRECCCTL_PE1, 0xFFC65400, __READ_WRITE, uint32);
__IOREG(LRECCCTL_PE1L, 0xFFC65400, __READ_WRITE, uint16);
__IOREG(LRERRINT_PE1, 0xFFC65404, __READ_WRITE, uint32);
__IOREG(LRERRINT_PE1L, 0xFFC65404, __READ_WRITE, uint16);
__IOREG(LRERRINT_PE1LL, 0xFFC65404, __READ_WRITE, uint8);
__IOREG(LRSERSTCLR_PE1, 0xFFC65408, __READ_WRITE, uint32);
__IOREG(LRSERSTCLR_PE1L, 0xFFC65408, __READ_WRITE, uint16);
__IOREG(LRSERSTCLR_PE1LL, 0xFFC65408, __READ_WRITE, uint8);
__IOREG(LRSERSTCLR_PE1LH, 0xFFC65409, __READ_WRITE, uint8);
__IOREG(LRSERSTCLR_PE1H, 0xFFC6540A, __READ_WRITE, uint16);
__IOREG(LRSERSTCLR_PE1HL, 0xFFC6540A, __READ_WRITE, uint8);
__IOREG(LRSERSTCLR_PE1HH, 0xFFC6540B, __READ_WRITE, uint8);
__IOREG(LRDERSTCLR_PE1, 0xFFC6540C, __READ_WRITE, uint32);
__IOREG(LRDERSTCLR_PE1L, 0xFFC6540C, __READ_WRITE, uint16);
__IOREG(LRDERSTCLR_PE1LL, 0xFFC6540C, __READ_WRITE, uint8);
__IOREG(LROVFSTR_PE1, 0xFFC65410, __READ, uint32);
__IOREG(LROVFSTR_PE1L, 0xFFC65410, __READ, uint16);
__IOREG(LROVFSTR_PE1LL, 0xFFC65410, __READ, uint8);
__IOREG(LRSERSTR_PE1, 0xFFC65440, __READ, uint32);
__IOREG(LRSERSTR_PE1L, 0xFFC65440, __READ, uint16);
__IOREG(LRSERSTR_PE1LL, 0xFFC65440, __READ, uint8);
__IOREG(LRSERSTR_PE1LH, 0xFFC65441, __READ, uint8);
__IOREG(LRSERSTR_PE1H, 0xFFC65442, __READ, uint16);
__IOREG(LRSERSTR_PE1HL, 0xFFC65442, __READ, uint8);
__IOREG(LRSERSTR_PE1HH, 0xFFC65443, __READ, uint8);
__IOREG(LRDERSTR_PE1, 0xFFC65450, __READ, uint32);
__IOREG(LRDERSTR_PE1L, 0xFFC65450, __READ, uint16);
__IOREG(LRDERSTR_PE1LL, 0xFFC65450, __READ, uint8);
__IOREG(LRDERSTR_PE1LH, 0xFFC65451, __READ, uint8);
__IOREG(LRDERSTR_PE1H, 0xFFC65452, __READ, uint16);
__IOREG(LRDERSTR_PE1HL, 0xFFC65452, __READ, uint8);
__IOREG(LRDERSTR_PE1HH, 0xFFC65453, __READ, uint8);
__IOREG(LR1SEDADR0_PE1, 0xFFC65460, __READ, uint32);
__IOREG(LR1SEDADR1_PE1, 0xFFC65464, __READ, uint32);
__IOREG(LR1SEDADR2_PE1, 0xFFC65468, __READ, uint32);
__IOREG(LR1SEDADR3_PE1, 0xFFC6546C, __READ, uint32);
__IOREG(LR2SEDADR0_PE1, 0xFFC65470, __READ, uint32);
__IOREG(LR2SEDADR1_PE1, 0xFFC65474, __READ, uint32);
__IOREG(LR2SEDADR2_PE1, 0xFFC65478, __READ, uint32);
__IOREG(LR2SEDADR3_PE1, 0xFFC6547C, __READ, uint32);
__IOREG(LR3SEDADR0_PE1, 0xFFC65480, __READ, uint32);
__IOREG(LR3SEDADR1_PE1, 0xFFC65484, __READ, uint32);
__IOREG(LR3SEDADR2_PE1, 0xFFC65488, __READ, uint32);
__IOREG(LR3SEDADR3_PE1, 0xFFC6548C, __READ, uint32);
__IOREG(LR4SEDADR0_PE1, 0xFFC65490, __READ, uint32);
__IOREG(LR4SEDADR1_PE1, 0xFFC65494, __READ, uint32);
__IOREG(LR4SEDADR2_PE1, 0xFFC65498, __READ, uint32);
__IOREG(LR4SEDADR3_PE1, 0xFFC6549C, __READ, uint32);
__IOREG(LR5SEDADR0_PE1, 0xFFC654A0, __READ, uint32);
__IOREG(LR5SEDADR1_PE1, 0xFFC654A4, __READ, uint32);
__IOREG(LR5SEDADR2_PE1, 0xFFC654A8, __READ, uint32);
__IOREG(LR5SEDADR3_PE1, 0xFFC654AC, __READ, uint32);
__IOREG(LR6SEDADR0_PE1, 0xFFC654B0, __READ, uint32);
__IOREG(LR6SEDADR1_PE1, 0xFFC654B4, __READ, uint32);
__IOREG(LR6SEDADR2_PE1, 0xFFC654B8, __READ, uint32);
__IOREG(LR6SEDADR3_PE1, 0xFFC654BC, __READ, uint32);
__IOREG(LR7SEDADR0_PE1, 0xFFC654C0, __READ, uint32);
__IOREG(LR7SEDADR1_PE1, 0xFFC654C4, __READ, uint32);
__IOREG(LR7SEDADR2_PE1, 0xFFC654C8, __READ, uint32);
__IOREG(LR7SEDADR3_PE1, 0xFFC654CC, __READ, uint32);
__IOREG(LR8SEDADR0_PE1, 0xFFC654D0, __READ, uint32);
__IOREG(LR8SEDADR1_PE1, 0xFFC654D4, __READ, uint32);
__IOREG(LR8SEDADR2_PE1, 0xFFC654D8, __READ, uint32);
__IOREG(LR8SEDADR3_PE1, 0xFFC654DC, __READ, uint32);
__IOREG(LRDEDADR0_PE1, 0xFFC654E0, __READ, uint32);
__IOREG(LRDEDADR1_PE1, 0xFFC654E4, __READ, uint32);
__IOREG(LRDEDADR2_PE1, 0xFFC654E8, __READ, uint32);
__IOREG(LRDEDADR3_PE1, 0xFFC654EC, __READ, uint32);
__IOREG(LRTSTCTL_PE1, 0xFFC65604, __READ_WRITE, uint32);
__IOREG(LRTDATBF0_PE1, 0xFFC65608, __READ, uint32);
__IOREG(LRTDATBF1_PE1, 0xFFC6560C, __READ, uint32);
__IOREG(LSSECCCTL_PE1, 0xFFC66000, __READ_WRITE, uint32);
__IOREG(LSSECCCTL_PE1L, 0xFFC66000, __READ_WRITE, uint16);
__IOREG(LSSERRINT_PE1, 0xFFC66004, __READ_WRITE, uint32);
__IOREG(LSSERRINT_PE1L, 0xFFC66004, __READ_WRITE, uint16);
__IOREG(LSSERRINT_PE1LL, 0xFFC66004, __READ_WRITE, uint8);
__IOREG(LSSERSTCLR_PE1, 0xFFC66008, __READ_WRITE, uint32);
__IOREG(LSSERSTCLR_PE1L, 0xFFC66008, __READ_WRITE, uint16);
__IOREG(LSSERSTCLR_PE1LL, 0xFFC66008, __READ_WRITE, uint8);
__IOREG(LSSOVFSTR_PE1, 0xFFC6600C, __READ, uint32);
__IOREG(LSSOVFSTR_PE1L, 0xFFC6600C, __READ, uint16);
__IOREG(LSSOVFSTR_PE1LL, 0xFFC6600C, __READ, uint8);
__IOREG(LSSERSTR_PE1, 0xFFC66010, __READ, uint32);
__IOREG(LSSERSTR_PE1L, 0xFFC66010, __READ, uint16);
__IOREG(LSSERSTR_PE1LL, 0xFFC66010, __READ, uint8);
__IOREG(LSSEADR_PE1, 0xFFC66050, __READ, uint32);
__IOREG(LSMECCCTL_PE1, 0xFFC66400, __READ_WRITE, uint32);
__IOREG(LSMECCCTL_PE1L, 0xFFC66400, __READ_WRITE, uint16);
__IOREG(LSMERRINT_PE1, 0xFFC66404, __READ_WRITE, uint32);
__IOREG(LSMERRINT_PE1L, 0xFFC66404, __READ_WRITE, uint16);
__IOREG(LSMERRINT_PE1LL, 0xFFC66404, __READ_WRITE, uint8);
__IOREG(LSMERSTCLR_PE1, 0xFFC66408, __READ_WRITE, uint32);
__IOREG(LSMERSTCLR_PE1L, 0xFFC66408, __READ_WRITE, uint16);
__IOREG(LSMERSTCLR_PE1LL, 0xFFC66408, __READ_WRITE, uint8);
__IOREG(LSMOVFSTR_PE1, 0xFFC6640C, __READ, uint32);
__IOREG(LSMOVFSTR_PE1L, 0xFFC6640C, __READ, uint16);
__IOREG(LSMOVFSTR_PE1LL, 0xFFC6640C, __READ, uint8);
__IOREG(LSMERSTR_PE1, 0xFFC66410, __READ, uint32);
__IOREG(LSMERSTR_PE1L, 0xFFC66410, __READ, uint16);
__IOREG(LSMERSTR_PE1LL, 0xFFC66410, __READ, uint8);
__IOREG(LSMEADR_PE1, 0xFFC66450, __READ, uint32);
__IOREG(VPECCCTL_SG0, 0xFFC67000, __READ_WRITE, uint32);
__IOREG(VPECCCTL_SG0L, 0xFFC67000, __READ_WRITE, uint16);
__IOREG(VPERRINT_SG0, 0xFFC67004, __READ_WRITE, uint32);
__IOREG(VPERRINT_SG0L, 0xFFC67004, __READ_WRITE, uint16);
__IOREG(VPERRINT_SG0LL, 0xFFC67004, __READ_WRITE, uint8);
__IOREG(VPERSTCLR_SG0, 0xFFC67008, __READ_WRITE, uint32);
__IOREG(VPERSTCLR_SG0L, 0xFFC67008, __READ_WRITE, uint16);
__IOREG(VPERSTCLR_SG0LL, 0xFFC67008, __READ_WRITE, uint8);
__IOREG(VPOVFSTR_SG0, 0xFFC6700C, __READ, uint32);
__IOREG(VPOVFSTR_SG0L, 0xFFC6700C, __READ, uint16);
__IOREG(VPOVFSTR_SG0LL, 0xFFC6700C, __READ, uint8);
__IOREG(VPERSTR_SG0, 0xFFC67010, __READ, uint32);
__IOREG(VPERSTR_SG0L, 0xFFC67010, __READ, uint16);
__IOREG(VPERSTR_SG0LL, 0xFFC67010, __READ, uint8);
__IOREG(VPEADR_SG0, 0xFFC67050, __READ, uint32);
__IOREG(VPECCCTL_SG1, 0xFFC67400, __READ_WRITE, uint32);
__IOREG(VPECCCTL_SG1L, 0xFFC67400, __READ_WRITE, uint16);
__IOREG(VPERRINT_SG1, 0xFFC67404, __READ_WRITE, uint32);
__IOREG(VPERRINT_SG1L, 0xFFC67404, __READ_WRITE, uint16);
__IOREG(VPERRINT_SG1LL, 0xFFC67404, __READ_WRITE, uint8);
__IOREG(VPERSTCLR_SG1, 0xFFC67408, __READ_WRITE, uint32);
__IOREG(VPERSTCLR_SG1L, 0xFFC67408, __READ_WRITE, uint16);
__IOREG(VPERSTCLR_SG1LL, 0xFFC67408, __READ_WRITE, uint8);
__IOREG(VPOVFSTR_SG1, 0xFFC6740C, __READ, uint32);
__IOREG(VPOVFSTR_SG1L, 0xFFC6740C, __READ, uint16);
__IOREG(VPOVFSTR_SG1LL, 0xFFC6740C, __READ, uint8);
__IOREG(VPERSTR_SG1, 0xFFC67410, __READ, uint32);
__IOREG(VPERSTR_SG1L, 0xFFC67410, __READ, uint16);
__IOREG(VPERSTR_SG1LL, 0xFFC67410, __READ, uint8);
__IOREG(VPEADR_SG1, 0xFFC67450, __READ, uint32);
__IOREG(VPECCCTL_SG2, 0xFFC67800, __READ_WRITE, uint32);
__IOREG(VPECCCTL_SG2L, 0xFFC67800, __READ_WRITE, uint16);
__IOREG(VPERRINT_SG2, 0xFFC67804, __READ_WRITE, uint32);
__IOREG(VPERRINT_SG2L, 0xFFC67804, __READ_WRITE, uint16);
__IOREG(VPERRINT_SG2LL, 0xFFC67804, __READ_WRITE, uint8);
__IOREG(VPERSTCLR_SG2, 0xFFC67808, __READ_WRITE, uint32);
__IOREG(VPERSTCLR_SG2L, 0xFFC67808, __READ_WRITE, uint16);
__IOREG(VPERSTCLR_SG2LL, 0xFFC67808, __READ_WRITE, uint8);
__IOREG(VPOVFSTR_SG2, 0xFFC6780C, __READ, uint32);
__IOREG(VPOVFSTR_SG2L, 0xFFC6780C, __READ, uint16);
__IOREG(VPOVFSTR_SG2LL, 0xFFC6780C, __READ, uint8);
__IOREG(VPERSTR_SG2, 0xFFC67810, __READ, uint32);
__IOREG(VPERSTR_SG2L, 0xFFC67810, __READ, uint16);
__IOREG(VPERSTR_SG2LL, 0xFFC67810, __READ, uint8);
__IOREG(VPEADR_SG2, 0xFFC67850, __READ, uint32);
__IOREG(VPECCCTL_SG3, 0xFFC67C00, __READ_WRITE, uint32);
__IOREG(VPECCCTL_SG3L, 0xFFC67C00, __READ_WRITE, uint16);
__IOREG(VPERRINT_SG3, 0xFFC67C04, __READ_WRITE, uint32);
__IOREG(VPERRINT_SG3L, 0xFFC67C04, __READ_WRITE, uint16);
__IOREG(VPERRINT_SG3LL, 0xFFC67C04, __READ_WRITE, uint8);
__IOREG(VPERSTCLR_SG3, 0xFFC67C08, __READ_WRITE, uint32);
__IOREG(VPERSTCLR_SG3L, 0xFFC67C08, __READ_WRITE, uint16);
__IOREG(VPERSTCLR_SG3LL, 0xFFC67C08, __READ_WRITE, uint8);
__IOREG(VPOVFSTR_SG3, 0xFFC67C0C, __READ, uint32);
__IOREG(VPOVFSTR_SG3L, 0xFFC67C0C, __READ, uint16);
__IOREG(VPOVFSTR_SG3LL, 0xFFC67C0C, __READ, uint8);
__IOREG(VPERSTR_SG3, 0xFFC67C10, __READ, uint32);
__IOREG(VPERSTR_SG3L, 0xFFC67C10, __READ, uint16);
__IOREG(VPERSTR_SG3LL, 0xFFC67C10, __READ, uint8);
__IOREG(VPEADR_SG3, 0xFFC67C50, __READ, uint32);
__IOREG(VPECCCTL_SG5, 0xFFC68400, __READ_WRITE, uint32);
__IOREG(VPECCCTL_SG5L, 0xFFC68400, __READ_WRITE, uint16);
__IOREG(VPERRINT_SG5, 0xFFC68404, __READ_WRITE, uint32);
__IOREG(VPERRINT_SG5L, 0xFFC68404, __READ_WRITE, uint16);
__IOREG(VPERRINT_SG5LL, 0xFFC68404, __READ_WRITE, uint8);
__IOREG(VPERSTCLR_SG5, 0xFFC68408, __READ_WRITE, uint32);
__IOREG(VPERSTCLR_SG5L, 0xFFC68408, __READ_WRITE, uint16);
__IOREG(VPERSTCLR_SG5LL, 0xFFC68408, __READ_WRITE, uint8);
__IOREG(VPOVFSTR_SG5, 0xFFC6840C, __READ, uint32);
__IOREG(VPOVFSTR_SG5L, 0xFFC6840C, __READ, uint16);
__IOREG(VPOVFSTR_SG5LL, 0xFFC6840C, __READ, uint8);
__IOREG(VPERSTR_SG5, 0xFFC68410, __READ, uint32);
__IOREG(VPERSTR_SG5L, 0xFFC68410, __READ, uint16);
__IOREG(VPERSTR_SG5LL, 0xFFC68410, __READ, uint8);
__IOREG(VPEADR_SG5, 0xFFC68450, __READ, uint32);
__IOREG(VPECCCTL_TERM_SG7, 0xFFC68E00, __READ_WRITE, uint32);
__IOREG(VPECCCTL_TERM_SG7L, 0xFFC68E00, __READ_WRITE, uint16);
__IOREG(VPERRINT_TERM_SG7, 0xFFC68E04, __READ_WRITE, uint32);
__IOREG(VPERRINT_TERM_SG7L, 0xFFC68E04, __READ_WRITE, uint16);
__IOREG(VPERRINT_TERM_SG7LL, 0xFFC68E04, __READ_WRITE, uint8);
__IOREG(VPERSTCLR_TERM_SG7, 0xFFC68E08, __READ_WRITE, uint32);
__IOREG(VPERSTCLR_TERM_SG7L, 0xFFC68E08, __READ_WRITE, uint16);
__IOREG(VPERSTCLR_TERM_SG7LL, 0xFFC68E08, __READ_WRITE, uint8);
__IOREG(VPOVFSTR_TERM_SG7, 0xFFC68E0C, __READ, uint32);
__IOREG(VPOVFSTR_TERM_SG7L, 0xFFC68E0C, __READ, uint16);
__IOREG(VPOVFSTR_TERM_SG7LL, 0xFFC68E0C, __READ, uint8);
__IOREG(VPERSTR_TERM_SG7, 0xFFC68E10, __READ, uint32);
__IOREG(VPERSTR_TERM_SG7L, 0xFFC68E10, __READ, uint16);
__IOREG(VPERSTR_TERM_SG7LL, 0xFFC68E10, __READ, uint8);
__IOREG(VPEADR_TERM_SG7, 0xFFC68E50, __READ, uint32);
__IOREG(VPECCCTL_VCI2VPI, 0xFFC69000, __READ_WRITE, uint32);
__IOREG(VPECCCTL_VCI2VPIL, 0xFFC69000, __READ_WRITE, uint16);
__IOREG(VPERRINT_VCI2VPI, 0xFFC69004, __READ_WRITE, uint32);
__IOREG(VPERRINT_VCI2VPIL, 0xFFC69004, __READ_WRITE, uint16);
__IOREG(VPERRINT_VCI2VPILL, 0xFFC69004, __READ_WRITE, uint8);
__IOREG(VPERSTCLR_VCI2VPI, 0xFFC69008, __READ_WRITE, uint32);
__IOREG(VPERSTCLR_VCI2VPIL, 0xFFC69008, __READ_WRITE, uint16);
__IOREG(VPERSTCLR_VCI2VPILL, 0xFFC69008, __READ_WRITE, uint8);
__IOREG(VPOVFSTR_VCI2VPI, 0xFFC6900C, __READ, uint32);
__IOREG(VPOVFSTR_VCI2VPIL, 0xFFC6900C, __READ, uint16);
__IOREG(VPOVFSTR_VCI2VPILL, 0xFFC6900C, __READ, uint8);
__IOREG(VPERSTR_VCI2VPI, 0xFFC69010, __READ, uint32);
__IOREG(VPERSTR_VCI2VPIL, 0xFFC69010, __READ, uint16);
__IOREG(VPERSTR_VCI2VPILL, 0xFFC69010, __READ, uint8);
__IOREG(VPERADR0_VCI2VPI, 0xFFC69050, __READ, uint32);
__IOREG(VCECCCTL_PDMA, 0xFFC6A000, __READ_WRITE, uint32);
__IOREG(VCECCCTL_PDMAL, 0xFFC6A000, __READ_WRITE, uint16);
__IOREG(VCERRINT_PDMA, 0xFFC6A004, __READ_WRITE, uint32);
__IOREG(VCERRINT_PDMAL, 0xFFC6A004, __READ_WRITE, uint16);
__IOREG(VCERRINT_PDMALL, 0xFFC6A004, __READ_WRITE, uint8);
__IOREG(VCERSTCLR_PDMA, 0xFFC6A008, __READ_WRITE, uint32);
__IOREG(VCERSTCLR_PDMAL, 0xFFC6A008, __READ_WRITE, uint16);
__IOREG(VCERSTCLR_PDMALL, 0xFFC6A008, __READ_WRITE, uint8);
__IOREG(VCOVFSTR_PDMA, 0xFFC6A00C, __READ, uint32);
__IOREG(VCOVFSTR_PDMAL, 0xFFC6A00C, __READ, uint16);
__IOREG(VCOVFSTR_PDMALL, 0xFFC6A00C, __READ, uint8);
__IOREG(VCERSTR_PDMA, 0xFFC6A010, __READ, uint32);
__IOREG(VCERSTR_PDMAL, 0xFFC6A010, __READ, uint16);
__IOREG(VCERSTR_PDMALL, 0xFFC6A010, __READ, uint8);
__IOREG(VCEADR_PDMA, 0xFFC6A050, __READ, uint32);
__IOREG(APECCCTL_PFSS, 0xFFC6C000, __READ_WRITE, uint32);
__IOREG(APECCCTL_PFSSL, 0xFFC6C000, __READ_WRITE, uint16);
__IOREG(APERRINT_PFSS, 0xFFC6C004, __READ_WRITE, uint32);
__IOREG(APERRINT_PFSSL, 0xFFC6C004, __READ_WRITE, uint16);
__IOREG(APERRINT_PFSSLL, 0xFFC6C004, __READ_WRITE, uint8);
__IOREG(APERSTCLR_PFSS, 0xFFC6C008, __READ_WRITE, uint32);
__IOREG(APERSTCLR_PFSSL, 0xFFC6C008, __READ_WRITE, uint16);
__IOREG(APERSTCLR_PFSSLL, 0xFFC6C008, __READ_WRITE, uint8);
__IOREG(APOVFSTR_PFSS, 0xFFC6C00C, __READ, uint32);
__IOREG(APOVFSTR_PFSSL, 0xFFC6C00C, __READ, uint16);
__IOREG(APOVFSTR_PFSSLL, 0xFFC6C00C, __READ, uint8);
__IOREG(APERSTR_PFSS, 0xFFC6C010, __READ, uint32);
__IOREG(APERSTR_PFSSL, 0xFFC6C010, __READ, uint16);
__IOREG(APERSTR_PFSSLL, 0xFFC6C010, __READ, uint8);
__IOREG(APEADR_PFSS, 0xFFC6C050, __READ, uint32);
__IOREG(APEC0ECCCTL, 0xFFCB8000, __READ_WRITE, uint32);
__IOREG(APEC0ECCCTLL, 0xFFCB8000, __READ_WRITE, uint16);
__IOREG(APEC0ERRINT, 0xFFCB8004, __READ_WRITE, uint32);
__IOREG(APEC0ERRINTL, 0xFFCB8004, __READ_WRITE, uint16);
__IOREG(APEC0ERRINTLL, 0xFFCB8004, __READ_WRITE, uint8);
__IOREG(APEC0STCLR, 0xFFCB8008, __READ_WRITE, uint32);
__IOREG(APEC0STCLRL, 0xFFCB8008, __READ_WRITE, uint16);
__IOREG(APEC0STCLRLL, 0xFFCB8008, __READ_WRITE, uint8);
__IOREG(APEC0OVFSTR, 0xFFCB800C, __READ, uint32);
__IOREG(APEC0OVFSTRL, 0xFFCB800C, __READ, uint16);
__IOREG(APEC0OVFSTRLL, 0xFFCB800C, __READ, uint8);
__IOREG(APEC01STERSTR, 0xFFCB8010, __READ, uint32);
__IOREG(APEC01STERSTRL, 0xFFCB8010, __READ, uint16);
__IOREG(APEC01STERSTRLL, 0xFFCB8010, __READ, uint8);
__IOREG(APEC01STEADR0, 0xFFCB8050, __READ, uint32);
__IOREG(GREG8, 0xFFCD0020, __READ, uint32);
__IOREG(OPBT0, 0xFFCD0030, __READ, uint32);
__IOREG(OPBT1, 0xFFCD0034, __READ, uint32);
__IOREG(OPBT2, 0xFFCD0038, __READ, uint32);
__IOREG(OPBT13, 0xFFCD0064, __READ, uint32);
__IOREG(OPBT14, 0xFFCD0068, __READ, uint32);
__IOREG(OPBT15, 0xFFCD006C, __READ, uint32);
__IOREG(PRDNAME1, 0xFFCD00D0, __READ, uint32);
__IOREG(PRDNAME2, 0xFFCD00D4, __READ, uint32);
__IOREG(PRDNAME3, 0xFFCD00D8, __READ, uint32);
__IOREG(PRDNAME4, 0xFFCD00DC, __READ, uint32);
__IOREG(CHIPID1LL, 0xFFCD00E0, __READ, uint32);
__IOREG(CHIPID1LH, 0xFFCD00E4, __READ, uint32);
__IOREG(CHIPID1HL, 0xFFCD00E8, __READ, uint32);
__IOREG(CHIPID1HH, 0xFFCD00EC, __READ, uint32);
__IOREG(EMLK, 0xFFCD0140, __READ, uint32);
__IOREG(APEC4ECCCTL, 0xFFCD8000, __READ_WRITE, uint32);
__IOREG(APEC4ECCCTLL, 0xFFCD8000, __READ_WRITE, uint16);
__IOREG(APEC4ERRINT, 0xFFCD8004, __READ_WRITE, uint32);
__IOREG(APEC4ERRINTL, 0xFFCD8004, __READ_WRITE, uint16);
__IOREG(APEC4ERRINTLL, 0xFFCD8004, __READ_WRITE, uint8);
__IOREG(APEC4STCLR, 0xFFCD8008, __READ_WRITE, uint32);
__IOREG(APEC4STCLRL, 0xFFCD8008, __READ_WRITE, uint16);
__IOREG(APEC4STCLRLL, 0xFFCD8008, __READ_WRITE, uint8);
__IOREG(APEC4OVFSTR, 0xFFCD800C, __READ, uint32);
__IOREG(APEC4OVFSTRL, 0xFFCD800C, __READ, uint16);
__IOREG(APEC4OVFSTRLL, 0xFFCD800C, __READ, uint8);
__IOREG(APEC41STERSTR, 0xFFCD8010, __READ, uint32);
__IOREG(APEC41STERSTRL, 0xFFCD8010, __READ, uint16);
__IOREG(APEC41STERSTRLL, 0xFFCD8010, __READ, uint8);
__IOREG(APEC41STEADR0, 0xFFCD8050, __READ, uint32);
__IOREG(APEC5ECCCTL, 0xFFCD8200, __READ_WRITE, uint32);
__IOREG(APEC5ECCCTLL, 0xFFCD8200, __READ_WRITE, uint16);
__IOREG(APEC5ERRINT, 0xFFCD8204, __READ_WRITE, uint32);
__IOREG(APEC5ERRINTL, 0xFFCD8204, __READ_WRITE, uint16);
__IOREG(APEC5ERRINTLL, 0xFFCD8204, __READ_WRITE, uint8);
__IOREG(APEC5STCLR, 0xFFCD8208, __READ_WRITE, uint32);
__IOREG(APEC5STCLRL, 0xFFCD8208, __READ_WRITE, uint16);
__IOREG(APEC5STCLRLL, 0xFFCD8208, __READ_WRITE, uint8);
__IOREG(APEC5OVFSTR, 0xFFCD820C, __READ, uint32);
__IOREG(APEC5OVFSTRL, 0xFFCD820C, __READ, uint16);
__IOREG(APEC5OVFSTRLL, 0xFFCD820C, __READ, uint8);
__IOREG(APEC51STERSTR, 0xFFCD8210, __READ, uint32);
__IOREG(APEC51STERSTRL, 0xFFCD8210, __READ, uint16);
__IOREG(APEC51STERSTRLL, 0xFFCD8210, __READ, uint8);
__IOREG(APEC51STEADR0, 0xFFCD8250, __READ, uint32);
__IOREG(APEC6ECCCTL, 0xFFCD8400, __READ_WRITE, uint32);
__IOREG(APEC6ECCCTLL, 0xFFCD8400, __READ_WRITE, uint16);
__IOREG(APEC6ERRINT, 0xFFCD8404, __READ_WRITE, uint32);
__IOREG(APEC6ERRINTL, 0xFFCD8404, __READ_WRITE, uint16);
__IOREG(APEC6ERRINTLL, 0xFFCD8404, __READ_WRITE, uint8);
__IOREG(APEC6STCLR, 0xFFCD8408, __READ_WRITE, uint32);
__IOREG(APEC6STCLRL, 0xFFCD8408, __READ_WRITE, uint16);
__IOREG(APEC6STCLRLL, 0xFFCD8408, __READ_WRITE, uint8);
__IOREG(APEC6OVFSTR, 0xFFCD840C, __READ, uint32);
__IOREG(APEC6OVFSTRL, 0xFFCD840C, __READ, uint16);
__IOREG(APEC6OVFSTRLL, 0xFFCD840C, __READ, uint8);
__IOREG(APEC61STERSTR, 0xFFCD8410, __READ, uint32);
__IOREG(APEC61STERSTRL, 0xFFCD8410, __READ, uint16);
__IOREG(APEC61STERSTRLL, 0xFFCD8410, __READ, uint8);
__IOREG(APEC61STEADR0, 0xFFCD8450, __READ, uint32);
__IOREG(LBISTREF1, 0xFFCDA000, __READ, uint32);
__IOREG(LBISTREF2, 0xFFCDA004, __READ, uint32);
__IOREG(MBISTREF1, 0xFFCDA008, __READ, uint32);
__IOREG(MBISTREF2, 0xFFCDA00C, __READ, uint32);
__IOREG(LBISTSIG1, 0xFFCDA010, __READ, uint32);
__IOREG(LBISTSIG2, 0xFFCDA014, __READ, uint32);
__IOREG(MBISTSIG1, 0xFFCDA018, __READ, uint32);
__IOREG(MBISTSIG2, 0xFFCDA01C, __READ, uint32);
__IOREG(MBISTFTAGL1, 0xFFCDA020, __READ, uint32);
__IOREG(MBISTFTAGH1, 0xFFCDA024, __READ, uint32);
__IOREG(MBISTFTAGL2, 0xFFCDA028, __READ, uint32);
__IOREG(MBISTFTAGH2, 0xFFCDA02C, __READ, uint32);
__IOREG(BSEQ0ST, 0xFFCDA030, __READ, uint32);
__IOREG(BSEQ0STB, 0xFFCDA034, __READ, uint32);
__IOREG(BISTST, 0xFFCDA038, __READ, uint32);
__IOREG(RSENT0TSSEL, 0xFFCDCF00, __READ_WRITE, uint32);
__IOREG(RSENT1TSSEL, 0xFFCDCF04, __READ_WRITE, uint32);
__IOREG(RSENT2TSSEL, 0xFFCDCF08, __READ_WRITE, uint32);
__IOREG(RSENT3TSSEL, 0xFFCDCF0C, __READ_WRITE, uint32);
__IOREG(RSENT4TSSEL, 0xFFCDCF10, __READ_WRITE, uint32);
__IOREG(RSENT5TSSEL, 0xFFCDCF14, __READ_WRITE, uint32);
__IOREG(PINT0, 0xFFD40000, __READ, uint32);
__IOREG(PINT1, 0xFFD40004, __READ, uint32);
__IOREG(PINT2, 0xFFD40008, __READ, uint32);
__IOREG(PINT3, 0xFFD4000C, __READ, uint32);
__IOREG(PINT4, 0xFFD40010, __READ, uint32);
__IOREG(PINT5, 0xFFD40014, __READ, uint32);
__IOREG(PINT6, 0xFFD40018, __READ, uint32);
__IOREG(PINT7, 0xFFD4001C, __READ, uint32);
__IOREG(PINTCLR0, 0xFFD40020, __READ_WRITE, uint32);
__IOREG(PINTCLR1, 0xFFD40024, __READ_WRITE, uint32);
__IOREG(PINTCLR2, 0xFFD40028, __READ_WRITE, uint32);
__IOREG(PINTCLR3, 0xFFD4002C, __READ_WRITE, uint32);
__IOREG(PINTCLR4, 0xFFD40030, __READ_WRITE, uint32);
__IOREG(PINTCLR5, 0xFFD40034, __READ_WRITE, uint32);
__IOREG(PINTCLR6, 0xFFD40038, __READ_WRITE, uint32);
__IOREG(PINTCLR7, 0xFFD4003C, __READ_WRITE, uint32);
__IOREG(DTSTRGSEL0, 0xFFD41000, __READ_WRITE, uint32);
__IOREG(DTSTRGSEL1, 0xFFD41004, __READ_WRITE, uint32);
__IOREG(DTSTRGSEL2, 0xFFD41008, __READ_WRITE, uint32);
__IOREG(DTSTRGSEL3, 0xFFD4100C, __READ_WRITE, uint32);
__IOREG(FEINTF0, 0xFFD42000, __READ, uint32);
__IOREG(FEINTFMSK0, 0xFFD42004, __READ_WRITE, uint32);
__IOREG(FEINTFC0, 0xFFD42008, __READ_WRITE, uint32);
__IOREG(FEINTF1, 0xFFD43000, __READ, uint32);
__IOREG(FEINTFMSK1, 0xFFD43004, __READ_WRITE, uint32);
__IOREG(FEINTFC1, 0xFFD43008, __READ_WRITE, uint32);
__IOREG(APEC1ECCCTL, 0xFFE88000, __READ_WRITE, uint32);
__IOREG(APEC1ECCCTLL, 0xFFE88000, __READ_WRITE, uint16);
__IOREG(APEC1ERRINT, 0xFFE88004, __READ_WRITE, uint32);
__IOREG(APEC1ERRINTL, 0xFFE88004, __READ_WRITE, uint16);
__IOREG(APEC1ERRINTLL, 0xFFE88004, __READ_WRITE, uint8);
__IOREG(APEC1STCLR, 0xFFE88008, __READ_WRITE, uint32);
__IOREG(APEC1STCLRL, 0xFFE88008, __READ_WRITE, uint16);
__IOREG(APEC1STCLRLL, 0xFFE88008, __READ_WRITE, uint8);
__IOREG(APEC1OVFSTR, 0xFFE8800C, __READ, uint32);
__IOREG(APEC1OVFSTRL, 0xFFE8800C, __READ, uint16);
__IOREG(APEC1OVFSTRLL, 0xFFE8800C, __READ, uint8);
__IOREG(APEC11STERSTR, 0xFFE88010, __READ, uint32);
__IOREG(APEC11STERSTRL, 0xFFE88010, __READ, uint16);
__IOREG(APEC11STERSTRLL, 0xFFE88010, __READ, uint8);
__IOREG(APEC11STEADR0, 0xFFE88050, __READ, uint32);
__IOREG(APEC2ECCCTL, 0xFFE88200, __READ_WRITE, uint32);
__IOREG(APEC2ECCCTLL, 0xFFE88200, __READ_WRITE, uint16);
__IOREG(APEC2ERRINT, 0xFFE88204, __READ_WRITE, uint32);
__IOREG(APEC2ERRINTL, 0xFFE88204, __READ_WRITE, uint16);
__IOREG(APEC2ERRINTLL, 0xFFE88204, __READ_WRITE, uint8);
__IOREG(APEC2STCLR, 0xFFE88208, __READ_WRITE, uint32);
__IOREG(APEC2STCLRL, 0xFFE88208, __READ_WRITE, uint16);
__IOREG(APEC2STCLRLL, 0xFFE88208, __READ_WRITE, uint8);
__IOREG(APEC2OVFSTR, 0xFFE8820C, __READ, uint32);
__IOREG(APEC2OVFSTRL, 0xFFE8820C, __READ, uint16);
__IOREG(APEC2OVFSTRLL, 0xFFE8820C, __READ, uint8);
__IOREG(APEC21STERSTR, 0xFFE88210, __READ, uint32);
__IOREG(APEC21STERSTRL, 0xFFE88210, __READ, uint16);
__IOREG(APEC21STERSTRLL, 0xFFE88210, __READ, uint8);
__IOREG(APEC21STEADR0, 0xFFE88250, __READ, uint32);
__IOREG(SELB0CALC, 0xFFED8024, __READ_WRITE, uint32);
__IOREG(MODE, 0xFFF80104, __READ, uint32);
__IOREG(BSEQ0CTL, 0xFFF80200, __READ_WRITE, uint32);
__IOREG(RESF, 0xFFF81000, __READ, uint32);
__IOREG(RESFC, 0xFFF81008, __READ_WRITE, uint32);
__IOREG(SWSRESA0, 0xFFF81100, __READ_WRITE, uint32);
__IOREG(SWARESA0, 0xFFF81200, __READ_WRITE, uint32);
__IOREG(STAC_DTSRAM, 0xFFF81320, __READ_WRITE, uint32);
__IOREG(STAC_GRAM, 0xFFF81420, __READ_WRITE, uint32);
__IOREG(STAC_LM0, 0xFFF81520, __READ_WRITE, uint32);
__IOREG(STAC_LM1, 0xFFF81620, __READ_WRITE, uint32);
__IOREG(SWLRESA3, 0xFFF81708, __READ_WRITE, uint32);
__IOREG(SWLRESS3, 0xFFF8170C, __READ, uint32);
__IOREG(MSR_LM3, 0xFFF81710, __READ_WRITE, uint32);
__IOREG(STAC_LM3, 0xFFF81720, __READ_WRITE, uint32);
__IOREG(SWLRESA4, 0xFFF81808, __READ_WRITE, uint32);
__IOREG(SWLRESS4, 0xFFF8180C, __READ, uint32);
__IOREG(MSR_LM4, 0xFFF81810, __READ_WRITE, uint32);
__IOREG(STAC_LM4, 0xFFF81820, __READ_WRITE, uint32);
__IOREG(SWLRESA5, 0xFFF81908, __READ_WRITE, uint32);
__IOREG(SWLRESS5, 0xFFF8190C, __READ, uint32);
__IOREG(MSR_LM5, 0xFFF81910, __READ_WRITE, uint32);
__IOREG(STAC_LM5, 0xFFF81920, __READ_WRITE, uint32);
__IOREG(SWLRESA6, 0xFFF81A08, __READ_WRITE, uint32);
__IOREG(SWLRESS6, 0xFFF81A0C, __READ, uint32);
__IOREG(MSR_LM6, 0xFFF81A10, __READ_WRITE, uint32);
__IOREG(SWLRESA7, 0xFFF81B08, __READ_WRITE, uint32);
__IOREG(SWLRESS7, 0xFFF81B0C, __READ, uint32);
__IOREG(MSR_LM7, 0xFFF81B10, __READ_WRITE, uint32);
__IOREG(SWLRESA8, 0xFFF81C08, __READ_WRITE, uint32);
__IOREG(SWLRESS8, 0xFFF81C0C, __READ, uint32);
__IOREG(MSR_LM8, 0xFFF81C10, __READ_WRITE, uint32);
__IOREG(SWLRESA10, 0xFFF81E08, __READ_WRITE, uint32);
__IOREG(SWLRESS10, 0xFFF81E0C, __READ, uint32);
__IOREG(MSR_LM10, 0xFFF81E10, __READ_WRITE, uint32);
__IOREG(STAC_LM10, 0xFFF81E20, __READ_WRITE, uint32);
__IOREG(SWLRESA11, 0xFFF81F08, __READ_WRITE, uint32);
__IOREG(SWLRESS11, 0xFFF81F0C, __READ, uint32);
__IOREG(MSR_LM11, 0xFFF81F10, __READ_WRITE, uint32);
__IOREG(SWLRESA12, 0xFFF82008, __READ_WRITE, uint32);
__IOREG(SWLRESS12, 0xFFF8200C, __READ, uint32);
__IOREG(MSR_LM12, 0xFFF82010, __READ_WRITE, uint32);
__IOREG(FHVE3, 0xFFF82410, __READ_WRITE, uint32);
__IOREG(RESC, 0xFFF82800, __READ_WRITE, uint32);
__IOREG(CVMF, 0xFFF82C00, __READ, uint8);
__IOREG(CVMDE, 0xFFF82C04, __READ, uint8);
__IOREG(CVMDMASK, 0xFFF82C0C, __READ_WRITE, uint8);
__IOREG(CVMDIAG, 0xFFF82C10, __READ_WRITE, uint8);
__IOREG(CVMMON, 0xFFF82C14, __READ, uint8);
__IOREG(CVMFC, 0xFFF82C18, __READ_WRITE, uint8);
__IOREG(CVMDEW, 0xFFF82C1C, __READ_WRITE, uint8);
__IOREG(CLMATEST, 0xFFF83000, __READ_WRITE, uint32);
__IOREG(CLMATESTS, 0xFFF83004, __READ, uint32);
__IOREG(CKSC4C, 0xFFF84000, __READ_WRITE, uint32);
__IOREG(CKSC4S, 0xFFF84008, __READ, uint32);
__IOREG(SWSRESA1, 0xFFF86000, __READ_WRITE, uint32);
__IOREG(SWARESA1, 0xFFF86100, __READ_WRITE, uint32);
__IOREG(SWLRESA2, 0xFFF86208, __READ_WRITE, uint32);
__IOREG(SWLRESS2, 0xFFF8620C, __READ, uint32);
__IOREG(MSR_LM2, 0xFFF86210, __READ_WRITE, uint32);
__IOREG(STAC_LM2, 0xFFF86220, __READ_WRITE, uint32);
__IOREG(ICUMRESF, 0xFFF86300, __READ, uint32);
__IOREG(ICUMRESFC, 0xFFF86308, __READ_WRITE, uint32);
__IOREG(CLKD0DIV, 0xFFF88800, __READ_WRITE, uint32);
__IOREG(CLKD0STAT, 0xFFF88804, __READ, uint32);
__IOREG(CLKD1DIV, 0xFFF88808, __READ_WRITE, uint32);
__IOREG(CLKD1STAT, 0xFFF8880C, __READ, uint32);
__IOREG(CLKD2DIV, 0xFFF88810, __READ_WRITE, uint32);
__IOREG(CLKD2STAT, 0xFFF88814, __READ, uint32);
__IOREG(CLKD3DIV, 0xFFF88818, __READ_WRITE, uint32);
__IOREG(CLKD3STAT, 0xFFF8881C, __READ, uint32);
__IOREG(CKSC0C, 0xFFF89000, __READ_WRITE, uint32);
__IOREG(CKSC0S, 0xFFF89008, __READ, uint32);
__IOREG(CKSC2C, 0xFFF89080, __READ_WRITE, uint32);
__IOREG(CKSC2S, 0xFFF89088, __READ, uint32);
__IOREG(CKSC3C, 0xFFF890C0, __READ_WRITE, uint32);
__IOREG(CKSC3S, 0xFFF890C8, __READ, uint32);
__IOREG(FHVE15, 0xFFF8A430, __READ_WRITE, uint32);
__IOREG(APEC3ECCCTL, 0xFFF98000, __READ_WRITE, uint32);
__IOREG(APEC3ECCCTLL, 0xFFF98000, __READ_WRITE, uint16);
__IOREG(APEC3ERRINT, 0xFFF98004, __READ_WRITE, uint32);
__IOREG(APEC3ERRINTL, 0xFFF98004, __READ_WRITE, uint16);
__IOREG(APEC3ERRINTLL, 0xFFF98004, __READ_WRITE, uint8);
__IOREG(APEC3STCLR, 0xFFF98008, __READ_WRITE, uint32);
__IOREG(APEC3STCLRL, 0xFFF98008, __READ_WRITE, uint16);
__IOREG(APEC3STCLRLL, 0xFFF98008, __READ_WRITE, uint8);
__IOREG(APEC3OVFSTR, 0xFFF9800C, __READ, uint32);
__IOREG(APEC3OVFSTRL, 0xFFF9800C, __READ, uint16);
__IOREG(APEC3OVFSTRLL, 0xFFF9800C, __READ, uint8);
__IOREG(APEC31STERSTR, 0xFFF98010, __READ, uint32);
__IOREG(APEC31STERSTRL, 0xFFF98010, __READ, uint16);
__IOREG(APEC31STERSTRLL, 0xFFF98010, __READ, uint8);
__IOREG(APEC31STEADR0, 0xFFF98050, __READ, uint32);
__IOREG(EIC0, 0xFFFEEA00, __READ_WRITE, uint16);
__IOREG(EIC0L, 0xFFFEEA00, __READ_WRITE, uint8);
__IOREG(EIC0H, 0xFFFEEA01, __READ_WRITE, uint8);
__IOREG(EIC1, 0xFFFEEA02, __READ_WRITE, uint16);
__IOREG(EIC1L, 0xFFFEEA02, __READ_WRITE, uint8);
__IOREG(EIC1H, 0xFFFEEA03, __READ_WRITE, uint8);
__IOREG(EIC2, 0xFFFEEA04, __READ_WRITE, uint16);
__IOREG(EIC2L, 0xFFFEEA04, __READ_WRITE, uint8);
__IOREG(EIC2H, 0xFFFEEA05, __READ_WRITE, uint8);
__IOREG(EIC3, 0xFFFEEA06, __READ_WRITE, uint16);
__IOREG(EIC3L, 0xFFFEEA06, __READ_WRITE, uint8);
__IOREG(EIC3H, 0xFFFEEA07, __READ_WRITE, uint8);
__IOREG(EIC4, 0xFFFEEA08, __READ_WRITE, uint16);
__IOREG(EIC4L, 0xFFFEEA08, __READ_WRITE, uint8);
__IOREG(EIC4H, 0xFFFEEA09, __READ_WRITE, uint8);
__IOREG(EIC5, 0xFFFEEA0A, __READ_WRITE, uint16);
__IOREG(EIC5L, 0xFFFEEA0A, __READ_WRITE, uint8);
__IOREG(EIC5H, 0xFFFEEA0B, __READ_WRITE, uint8);
__IOREG(EIC6, 0xFFFEEA0C, __READ_WRITE, uint16);
__IOREG(EIC6L, 0xFFFEEA0C, __READ_WRITE, uint8);
__IOREG(EIC6H, 0xFFFEEA0D, __READ_WRITE, uint8);
__IOREG(EIC7, 0xFFFEEA0E, __READ_WRITE, uint16);
__IOREG(EIC7L, 0xFFFEEA0E, __READ_WRITE, uint8);
__IOREG(EIC7H, 0xFFFEEA0F, __READ_WRITE, uint8);
__IOREG(EIC8, 0xFFFEEA10, __READ_WRITE, uint16);
__IOREG(EIC8L, 0xFFFEEA10, __READ_WRITE, uint8);
__IOREG(EIC8H, 0xFFFEEA11, __READ_WRITE, uint8);
__IOREG(EIC9, 0xFFFEEA12, __READ_WRITE, uint16);
__IOREG(EIC9L, 0xFFFEEA12, __READ_WRITE, uint8);
__IOREG(EIC9H, 0xFFFEEA13, __READ_WRITE, uint8);
__IOREG(EIC10, 0xFFFEEA14, __READ_WRITE, uint16);
__IOREG(EIC10L, 0xFFFEEA14, __READ_WRITE, uint8);
__IOREG(EIC10H, 0xFFFEEA15, __READ_WRITE, uint8);
__IOREG(EIC11, 0xFFFEEA16, __READ_WRITE, uint16);
__IOREG(EIC11L, 0xFFFEEA16, __READ_WRITE, uint8);
__IOREG(EIC11H, 0xFFFEEA17, __READ_WRITE, uint8);
__IOREG(EIC12, 0xFFFEEA18, __READ_WRITE, uint16);
__IOREG(EIC12L, 0xFFFEEA18, __READ_WRITE, uint8);
__IOREG(EIC12H, 0xFFFEEA19, __READ_WRITE, uint8);
__IOREG(EIC13, 0xFFFEEA1A, __READ_WRITE, uint16);
__IOREG(EIC13L, 0xFFFEEA1A, __READ_WRITE, uint8);
__IOREG(EIC13H, 0xFFFEEA1B, __READ_WRITE, uint8);
__IOREG(EIC14, 0xFFFEEA1C, __READ_WRITE, uint16);
__IOREG(EIC14L, 0xFFFEEA1C, __READ_WRITE, uint8);
__IOREG(EIC14H, 0xFFFEEA1D, __READ_WRITE, uint8);
__IOREG(EIC15, 0xFFFEEA1E, __READ_WRITE, uint16);
__IOREG(EIC15L, 0xFFFEEA1E, __READ_WRITE, uint8);
__IOREG(EIC15H, 0xFFFEEA1F, __READ_WRITE, uint8);
__IOREG(EIC16, 0xFFFEEA20, __READ_WRITE, uint16);
__IOREG(EIC16L, 0xFFFEEA20, __READ_WRITE, uint8);
__IOREG(EIC16H, 0xFFFEEA21, __READ_WRITE, uint8);
__IOREG(EIC17, 0xFFFEEA22, __READ_WRITE, uint16);
__IOREG(EIC17L, 0xFFFEEA22, __READ_WRITE, uint8);
__IOREG(EIC17H, 0xFFFEEA23, __READ_WRITE, uint8);
__IOREG(EIC18, 0xFFFEEA24, __READ_WRITE, uint16);
__IOREG(EIC18L, 0xFFFEEA24, __READ_WRITE, uint8);
__IOREG(EIC18H, 0xFFFEEA25, __READ_WRITE, uint8);
__IOREG(EIC19, 0xFFFEEA26, __READ_WRITE, uint16);
__IOREG(EIC19L, 0xFFFEEA26, __READ_WRITE, uint8);
__IOREG(EIC19H, 0xFFFEEA27, __READ_WRITE, uint8);
__IOREG(EIC20, 0xFFFEEA28, __READ_WRITE, uint16);
__IOREG(EIC20L, 0xFFFEEA28, __READ_WRITE, uint8);
__IOREG(EIC20H, 0xFFFEEA29, __READ_WRITE, uint8);
__IOREG(EIC21, 0xFFFEEA2A, __READ_WRITE, uint16);
__IOREG(EIC21L, 0xFFFEEA2A, __READ_WRITE, uint8);
__IOREG(EIC21H, 0xFFFEEA2B, __READ_WRITE, uint8);
__IOREG(EIC22, 0xFFFEEA2C, __READ_WRITE, uint16);
__IOREG(EIC22L, 0xFFFEEA2C, __READ_WRITE, uint8);
__IOREG(EIC22H, 0xFFFEEA2D, __READ_WRITE, uint8);
__IOREG(EIC23, 0xFFFEEA2E, __READ_WRITE, uint16);
__IOREG(EIC23L, 0xFFFEEA2E, __READ_WRITE, uint8);
__IOREG(EIC23H, 0xFFFEEA2F, __READ_WRITE, uint8);
__IOREG(EIC24, 0xFFFEEA30, __READ_WRITE, uint16);
__IOREG(EIC24L, 0xFFFEEA30, __READ_WRITE, uint8);
__IOREG(EIC24H, 0xFFFEEA31, __READ_WRITE, uint8);
__IOREG(EIC25, 0xFFFEEA32, __READ_WRITE, uint16);
__IOREG(EIC25L, 0xFFFEEA32, __READ_WRITE, uint8);
__IOREG(EIC25H, 0xFFFEEA33, __READ_WRITE, uint8);
__IOREG(EIC26, 0xFFFEEA34, __READ_WRITE, uint16);
__IOREG(EIC26L, 0xFFFEEA34, __READ_WRITE, uint8);
__IOREG(EIC26H, 0xFFFEEA35, __READ_WRITE, uint8);
__IOREG(EIC27, 0xFFFEEA36, __READ_WRITE, uint16);
__IOREG(EIC27L, 0xFFFEEA36, __READ_WRITE, uint8);
__IOREG(EIC27H, 0xFFFEEA37, __READ_WRITE, uint8);
__IOREG(EIC28, 0xFFFEEA38, __READ_WRITE, uint16);
__IOREG(EIC28L, 0xFFFEEA38, __READ_WRITE, uint8);
__IOREG(EIC28H, 0xFFFEEA39, __READ_WRITE, uint8);
__IOREG(EIC29, 0xFFFEEA3A, __READ_WRITE, uint16);
__IOREG(EIC29L, 0xFFFEEA3A, __READ_WRITE, uint8);
__IOREG(EIC29H, 0xFFFEEA3B, __READ_WRITE, uint8);
__IOREG(EIC30, 0xFFFEEA3C, __READ_WRITE, uint16);
__IOREG(EIC30L, 0xFFFEEA3C, __READ_WRITE, uint8);
__IOREG(EIC30H, 0xFFFEEA3D, __READ_WRITE, uint8);
__IOREG(EIC31, 0xFFFEEA3E, __READ_WRITE, uint16);
__IOREG(EIC31L, 0xFFFEEA3E, __READ_WRITE, uint8);
__IOREG(EIC31H, 0xFFFEEA3F, __READ_WRITE, uint8);
__IOREG(FNC, 0xFFFEEA78, __READ, uint16);
__IOREG(FNCH, 0xFFFEEA79, __READ, uint8);
#define FNRF                   (((const volatile __bitf_T *)0xFFFEEA79)->bit04)
#define FNCT                   (((const volatile __bitf_T *)0xFFFEEA79)->bit07)
__IOREG(FIC, 0xFFFEEA7A, __READ, uint16);
__IOREG(FICH, 0xFFFEEA7B, __READ, uint8);
#define FIRF                   (((const volatile __bitf_T *)0xFFFEEA7B)->bit04)
#define FICT                   (((const volatile __bitf_T *)0xFFFEEA7B)->bit07)
__IOREG(IMR0, 0xFFFEEAF0, __READ_WRITE, uint32);
__IOREG(IMR0L, 0xFFFEEAF0, __READ_WRITE, uint16);
__IOREG(IMR0LL, 0xFFFEEAF0, __READ_WRITE, uint8);
__IOREG(IMR0LH, 0xFFFEEAF1, __READ_WRITE, uint8);
__IOREG(IMR0H, 0xFFFEEAF2, __READ_WRITE, uint16);
__IOREG(IMR0HL, 0xFFFEEAF2, __READ_WRITE, uint8);
__IOREG(IMR0HH, 0xFFFEEAF3, __READ_WRITE, uint8);
#define IMR0EIMK0              (((volatile __bitf_T *)0xFFFEEAF0)->bit00)
#define IMR0EIMK1              (((volatile __bitf_T *)0xFFFEEAF0)->bit01)
#define IMR0EIMK2              (((volatile __bitf_T *)0xFFFEEAF0)->bit02)
#define IMR0EIMK3              (((volatile __bitf_T *)0xFFFEEAF0)->bit03)
#define IMR0EIMK4              (((volatile __bitf_T *)0xFFFEEAF0)->bit04)
#define IMR0EIMK5              (((volatile __bitf_T *)0xFFFEEAF0)->bit05)
#define IMR0EIMK6              (((volatile __bitf_T *)0xFFFEEAF0)->bit06)
#define IMR0EIMK7              (((volatile __bitf_T *)0xFFFEEAF0)->bit07)
#define IMR0EIMK8              (((volatile __bitf_T *)0xFFFEEAF1)->bit00)
#define IMR0EIMK9              (((volatile __bitf_T *)0xFFFEEAF1)->bit01)
#define IMR0EIMK10             (((volatile __bitf_T *)0xFFFEEAF1)->bit02)
#define IMR0EIMK11             (((volatile __bitf_T *)0xFFFEEAF1)->bit03)
#define IMR0EIMK12             (((volatile __bitf_T *)0xFFFEEAF1)->bit04)
#define IMR0EIMK13             (((volatile __bitf_T *)0xFFFEEAF1)->bit05)
#define IMR0EIMK14             (((volatile __bitf_T *)0xFFFEEAF1)->bit06)
#define IMR0EIMK15             (((volatile __bitf_T *)0xFFFEEAF1)->bit07)
#define IMR0EIMK16             (((volatile __bitf_T *)0xFFFEEAF2)->bit00)
#define IMR0EIMK17             (((volatile __bitf_T *)0xFFFEEAF2)->bit01)
#define IMR0EIMK18             (((volatile __bitf_T *)0xFFFEEAF2)->bit02)
#define IMR0EIMK19             (((volatile __bitf_T *)0xFFFEEAF2)->bit03)
#define IMR0EIMK20             (((volatile __bitf_T *)0xFFFEEAF2)->bit04)
#define IMR0EIMK21             (((volatile __bitf_T *)0xFFFEEAF2)->bit05)
#define IMR0EIMK22             (((volatile __bitf_T *)0xFFFEEAF2)->bit06)
#define IMR0EIMK23             (((volatile __bitf_T *)0xFFFEEAF2)->bit07)
#define IMR0EIMK24             (((volatile __bitf_T *)0xFFFEEAF3)->bit00)
#define IMR0EIMK25             (((volatile __bitf_T *)0xFFFEEAF3)->bit01)
#define IMR0EIMK26             (((volatile __bitf_T *)0xFFFEEAF3)->bit02)
#define IMR0EIMK27             (((volatile __bitf_T *)0xFFFEEAF3)->bit03)
#define IMR0EIMK28             (((volatile __bitf_T *)0xFFFEEAF3)->bit04)
#define IMR0EIMK29             (((volatile __bitf_T *)0xFFFEEAF3)->bit05)
#define IMR0EIMK30             (((volatile __bitf_T *)0xFFFEEAF3)->bit06)
#define IMR0EIMK31             (((volatile __bitf_T *)0xFFFEEAF3)->bit07)
__IOREG(EIBD0, 0xFFFEEB00, __READ_WRITE, uint32);
__IOREG(EIBD1, 0xFFFEEB04, __READ_WRITE, uint32);
__IOREG(EIBD2, 0xFFFEEB08, __READ_WRITE, uint32);
__IOREG(EIBD3, 0xFFFEEB0C, __READ_WRITE, uint32);
__IOREG(EIBD4, 0xFFFEEB10, __READ_WRITE, uint32);
__IOREG(EIBD5, 0xFFFEEB14, __READ_WRITE, uint32);
__IOREG(EIBD6, 0xFFFEEB18, __READ_WRITE, uint32);
__IOREG(EIBD7, 0xFFFEEB1C, __READ_WRITE, uint32);
__IOREG(EIBD8, 0xFFFEEB20, __READ_WRITE, uint32);
__IOREG(EIBD9, 0xFFFEEB24, __READ_WRITE, uint32);
__IOREG(EIBD10, 0xFFFEEB28, __READ_WRITE, uint32);
__IOREG(EIBD11, 0xFFFEEB2C, __READ_WRITE, uint32);
__IOREG(EIBD12, 0xFFFEEB30, __READ_WRITE, uint32);
__IOREG(EIBD13, 0xFFFEEB34, __READ_WRITE, uint32);
__IOREG(EIBD14, 0xFFFEEB38, __READ_WRITE, uint32);
__IOREG(EIBD15, 0xFFFEEB3C, __READ_WRITE, uint32);
__IOREG(EIBD16, 0xFFFEEB40, __READ_WRITE, uint32);
__IOREG(EIBD17, 0xFFFEEB44, __READ_WRITE, uint32);
__IOREG(EIBD18, 0xFFFEEB48, __READ_WRITE, uint32);
__IOREG(EIBD19, 0xFFFEEB4C, __READ_WRITE, uint32);
__IOREG(EIBD20, 0xFFFEEB50, __READ_WRITE, uint32);
__IOREG(EIBD21, 0xFFFEEB54, __READ_WRITE, uint32);
__IOREG(EIBD22, 0xFFFEEB58, __READ_WRITE, uint32);
__IOREG(EIBD23, 0xFFFEEB5C, __READ_WRITE, uint32);
__IOREG(EIBD24, 0xFFFEEB60, __READ_WRITE, uint32);
__IOREG(EIBD25, 0xFFFEEB64, __READ_WRITE, uint32);
__IOREG(EIBD26, 0xFFFEEB68, __READ_WRITE, uint32);
__IOREG(EIBD27, 0xFFFEEB6C, __READ_WRITE, uint32);
__IOREG(EIBD28, 0xFFFEEB70, __READ_WRITE, uint32);
__IOREG(EIBD29, 0xFFFEEB74, __READ_WRITE, uint32);
__IOREG(EIBD30, 0xFFFEEB78, __READ_WRITE, uint32);
__IOREG(EIBD31, 0xFFFEEB7C, __READ_WRITE, uint32);
__IOREG(CMPTST0, 0xFFFEED00, __READ_WRITE, uint32);
__IOREG(CMPTST0L, 0xFFFEED00, __READ_WRITE, uint16);
__IOREG(CMPTST0LL, 0xFFFEED00, __READ_WRITE, uint8);
__IOREG(CMPTST0LH, 0xFFFEED01, __READ_WRITE, uint8);
__IOREG(CMPTST0H, 0xFFFEED02, __READ_WRITE, uint16);
__IOREG(CMPTST0HL, 0xFFFEED02, __READ_WRITE, uint8);
__IOREG(CMPTST0HH, 0xFFFEED03, __READ_WRITE, uint8);
__IOREG(CMPTST1, 0xFFFEED04, __READ_WRITE, uint32);
__IOREG(CMPTST1L, 0xFFFEED04, __READ_WRITE, uint16);
__IOREG(CMPTST1LL, 0xFFFEED04, __READ_WRITE, uint8);
__IOREG(CMPTST1LH, 0xFFFEED05, __READ_WRITE, uint8);
__IOREG(CMPTST1H, 0xFFFEED06, __READ_WRITE, uint16);
__IOREG(CMPTST1HL, 0xFFFEED06, __READ_WRITE, uint8);
__IOREG(CMPTST1HH, 0xFFFEED07, __READ_WRITE, uint8);
__IOREG(TM_VER, 0xFFFF7800, __READ, uint32);
__IOREG(TM_CC, 0xFFFF7808, __READ_WRITE, uint32);
__IOREG(TMA_ME, 0xFFFF7810, __READ_WRITE, uint32);
__IOREG(TMA_MS, 0xFFFF7814, __READ, uint32);
__IOREG(TMB_ME, 0xFFFF7818, __READ_WRITE, uint32);
__IOREG(TMB_MS, 0xFFFF781C, __READ, uint32);
__IOREG(TMA_MA0, 0xFFFF7840, __READ_WRITE, uint32);
__IOREG(TMA_MA1, 0xFFFF7844, __READ_WRITE, uint32);
__IOREG(TMA_MA2, 0xFFFF7848, __READ_WRITE, uint32);
__IOREG(TMA_MA3, 0xFFFF784C, __READ_WRITE, uint32);
__IOREG(TMA_MA4, 0xFFFF7850, __READ_WRITE, uint32);
__IOREG(TMA_MA5, 0xFFFF7854, __READ_WRITE, uint32);
__IOREG(TMA_MA6, 0xFFFF7858, __READ_WRITE, uint32);
__IOREG(TMA_MA7, 0xFFFF785C, __READ_WRITE, uint32);
__IOREG(TMA_MA8, 0xFFFF7860, __READ_WRITE, uint32);
__IOREG(TMA_MA9, 0xFFFF7864, __READ_WRITE, uint32);
__IOREG(TMA_MA10, 0xFFFF7868, __READ_WRITE, uint32);
__IOREG(TMA_MA11, 0xFFFF786C, __READ_WRITE, uint32);
__IOREG(TMA_MA12, 0xFFFF7870, __READ_WRITE, uint32);
__IOREG(TMA_MA13, 0xFFFF7874, __READ_WRITE, uint32);
__IOREG(TMA_MA14, 0xFFFF7878, __READ_WRITE, uint32);
__IOREG(TMA_MA15, 0xFFFF787C, __READ_WRITE, uint32);
__IOREG(TMA_MA16, 0xFFFF7880, __READ_WRITE, uint32);
__IOREG(TMA_MA17, 0xFFFF7884, __READ_WRITE, uint32);
__IOREG(TMA_MA18, 0xFFFF7888, __READ_WRITE, uint32);
__IOREG(TMA_MA19, 0xFFFF788C, __READ_WRITE, uint32);
__IOREG(TMA_MA20, 0xFFFF7890, __READ_WRITE, uint32);
__IOREG(TMA_MA21, 0xFFFF7894, __READ_WRITE, uint32);
__IOREG(TMA_MA22, 0xFFFF7898, __READ_WRITE, uint32);
__IOREG(TMA_MA23, 0xFFFF789C, __READ_WRITE, uint32);
__IOREG(TMA_MA24, 0xFFFF78A0, __READ_WRITE, uint32);
__IOREG(TMA_MA25, 0xFFFF78A4, __READ_WRITE, uint32);
__IOREG(TMA_MA26, 0xFFFF78A8, __READ_WRITE, uint32);
__IOREG(TMA_MA27, 0xFFFF78AC, __READ_WRITE, uint32);
__IOREG(TMA_MA28, 0xFFFF78B0, __READ_WRITE, uint32);
__IOREG(TMA_MA29, 0xFFFF78B4, __READ_WRITE, uint32);
__IOREG(TMA_MA30, 0xFFFF78B8, __READ_WRITE, uint32);
__IOREG(TMA_MA31, 0xFFFF78BC, __READ_WRITE, uint32);
__IOREG(TMB_MA0, 0xFFFF78C0, __READ_WRITE, uint32);
__IOREG(TMB_MA1, 0xFFFF78C4, __READ_WRITE, uint32);
__IOREG(TMB_MA2, 0xFFFF78C8, __READ_WRITE, uint32);
__IOREG(TMB_MA3, 0xFFFF78CC, __READ_WRITE, uint32);
__IOREG(TMB_MA4, 0xFFFF78D0, __READ_WRITE, uint32);
__IOREG(TMB_MA5, 0xFFFF78D4, __READ_WRITE, uint32);
__IOREG(TMB_MA6, 0xFFFF78D8, __READ_WRITE, uint32);
__IOREG(TMB_MA7, 0xFFFF78DC, __READ_WRITE, uint32);
__IOREG(TMB_MA8, 0xFFFF78E0, __READ_WRITE, uint32);
__IOREG(TMB_MA9, 0xFFFF78E4, __READ_WRITE, uint32);
__IOREG(TMB_MA10, 0xFFFF78E8, __READ_WRITE, uint32);
__IOREG(TMB_MA11, 0xFFFF78EC, __READ_WRITE, uint32);
__IOREG(TMB_MA12, 0xFFFF78F0, __READ_WRITE, uint32);
__IOREG(TMB_MA13, 0xFFFF78F4, __READ_WRITE, uint32);
__IOREG(TMB_MA14, 0xFFFF78F8, __READ_WRITE, uint32);
__IOREG(TMB_MA15, 0xFFFF78FC, __READ_WRITE, uint32);
__IOREG(TMB_MA16, 0xFFFF7900, __READ_WRITE, uint32);
__IOREG(TMB_MA17, 0xFFFF7904, __READ_WRITE, uint32);
__IOREG(TMB_MA18, 0xFFFF7908, __READ_WRITE, uint32);
__IOREG(TMB_MA19, 0xFFFF790C, __READ_WRITE, uint32);
__IOREG(TMB_MA20, 0xFFFF7910, __READ_WRITE, uint32);
__IOREG(TMB_MA21, 0xFFFF7914, __READ_WRITE, uint32);
__IOREG(TMB_MA22, 0xFFFF7918, __READ_WRITE, uint32);
__IOREG(TMB_MA23, 0xFFFF791C, __READ_WRITE, uint32);
__IOREG(TMB_MA24, 0xFFFF7920, __READ_WRITE, uint32);
__IOREG(TMB_MA25, 0xFFFF7924, __READ_WRITE, uint32);
__IOREG(TMB_MA26, 0xFFFF7928, __READ_WRITE, uint32);
__IOREG(TMB_MA27, 0xFFFF792C, __READ_WRITE, uint32);
__IOREG(TMB_MA28, 0xFFFF7930, __READ_WRITE, uint32);
__IOREG(TMB_MA29, 0xFFFF7934, __READ_WRITE, uint32);
__IOREG(TMB_MA30, 0xFFFF7938, __READ_WRITE, uint32);
__IOREG(TMB_MA31, 0xFFFF793C, __READ_WRITE, uint32);
__IOREG(GRAMC_WTBCONFIG0, 0xFFFF7A04, __READ_WRITE, uint32);
__IOREG(GRAMC_WTBCONFIG1, 0xFFFF7A08, __READ_WRITE, uint32);
__IOREG(GRAMC_WTBCONFIG2, 0xFFFF7A0C, __READ, uint32);
__IOREG(DMACTL, 0xFFFF8000, __READ_WRITE, uint32);
__IOREG(DTSCTL1, 0xFFFF8010, __READ_WRITE, uint32);
__IOREG(DTSCTL2, 0xFFFF8014, __READ_WRITE, uint32);
__IOREG(DTSSTS, 0xFFFF8018, __READ, uint32);
__IOREG(DMACER, 0xFFFF8020, __READ, uint32);
__IOREG(DTSER1, 0xFFFF8024, __READ, uint32);
__IOREG(DTSER2, 0xFFFF8028, __READ, uint32);
__IOREG(DTSERC, 0xFFFF802C, __READ_WRITE, uint32);
__IOREG(DM0CMV, 0xFFFF8030, __READ, uint32);
__IOREG(DM1CMV, 0xFFFF8034, __READ, uint32);
__IOREG(DTSCMV, 0xFFFF8038, __READ, uint32);
__IOREG(CMVC, 0xFFFF803C, __READ_WRITE, uint32);
__IOREG(TFRSTS, 0xFFFF804C, __READ, uint32);
__IOREG(DTSPR0, 0xFFFF8060, __READ_WRITE, uint32);
__IOREG(DTSPR1, 0xFFFF8064, __READ_WRITE, uint32);
__IOREG(DTSPR2, 0xFFFF8068, __READ_WRITE, uint32);
__IOREG(DTSPR3, 0xFFFF806C, __READ_WRITE, uint32);
__IOREG(DTSPR4, 0xFFFF8070, __READ_WRITE, uint32);
__IOREG(DTSPR5, 0xFFFF8074, __READ_WRITE, uint32);
__IOREG(DTSPR6, 0xFFFF8078, __READ_WRITE, uint32);
__IOREG(DTSPR7, 0xFFFF807C, __READ_WRITE, uint32);
__IOREG(DTRECCTL, 0xFFFF8080, __READ_WRITE, uint32);
__IOREG(DTRERINT, 0xFFFF8084, __READ_WRITE, uint32);
__IOREG(DTRTSCTL, 0xFFFF8094, __READ_WRITE, uint32);
__IOREG(DTRTWDAT, 0xFFFF8098, __READ_WRITE, uint32);
__IOREG(DTRTRDAT, 0xFFFF809C, __READ, uint32);
__IOREG(ADECCTCL, 0xFFFF80A0, __READ_WRITE, uint32);
__IOREG(ADECCTDT, 0xFFFF80A4, __READ_WRITE, uint32);
__IOREG(DM00CM, 0xFFFF8100, __READ_WRITE, uint32);
__IOREG(DM01CM, 0xFFFF8104, __READ_WRITE, uint32);
__IOREG(DM02CM, 0xFFFF8108, __READ_WRITE, uint32);
__IOREG(DM03CM, 0xFFFF810C, __READ_WRITE, uint32);
__IOREG(DM04CM, 0xFFFF8110, __READ_WRITE, uint32);
__IOREG(DM05CM, 0xFFFF8114, __READ_WRITE, uint32);
__IOREG(DM06CM, 0xFFFF8118, __READ_WRITE, uint32);
__IOREG(DM07CM, 0xFFFF811C, __READ_WRITE, uint32);
__IOREG(DM10CM, 0xFFFF8120, __READ_WRITE, uint32);
__IOREG(DM11CM, 0xFFFF8124, __READ_WRITE, uint32);
__IOREG(DM12CM, 0xFFFF8128, __READ_WRITE, uint32);
__IOREG(DM13CM, 0xFFFF812C, __READ_WRITE, uint32);
__IOREG(DM14CM, 0xFFFF8130, __READ_WRITE, uint32);
__IOREG(DM15CM, 0xFFFF8134, __READ_WRITE, uint32);
__IOREG(DM16CM, 0xFFFF8138, __READ_WRITE, uint32);
__IOREG(DM17CM, 0xFFFF813C, __READ_WRITE, uint32);
__IOREG(DTS000CM, 0xFFFF8200, __READ_WRITE, uint32);
__IOREG(DTS001CM, 0xFFFF8204, __READ_WRITE, uint32);
__IOREG(DTS002CM, 0xFFFF8208, __READ_WRITE, uint32);
__IOREG(DTS003CM, 0xFFFF820C, __READ_WRITE, uint32);
__IOREG(DTS004CM, 0xFFFF8210, __READ_WRITE, uint32);
__IOREG(DTS005CM, 0xFFFF8214, __READ_WRITE, uint32);
__IOREG(DTS006CM, 0xFFFF8218, __READ_WRITE, uint32);
__IOREG(DTS007CM, 0xFFFF821C, __READ_WRITE, uint32);
__IOREG(DTS008CM, 0xFFFF8220, __READ_WRITE, uint32);
__IOREG(DTS009CM, 0xFFFF8224, __READ_WRITE, uint32);
__IOREG(DTS010CM, 0xFFFF8228, __READ_WRITE, uint32);
__IOREG(DTS011CM, 0xFFFF822C, __READ_WRITE, uint32);
__IOREG(DTS012CM, 0xFFFF8230, __READ_WRITE, uint32);
__IOREG(DTS013CM, 0xFFFF8234, __READ_WRITE, uint32);
__IOREG(DTS014CM, 0xFFFF8238, __READ_WRITE, uint32);
__IOREG(DTS015CM, 0xFFFF823C, __READ_WRITE, uint32);
__IOREG(DTS016CM, 0xFFFF8240, __READ_WRITE, uint32);
__IOREG(DTS017CM, 0xFFFF8244, __READ_WRITE, uint32);
__IOREG(DTS018CM, 0xFFFF8248, __READ_WRITE, uint32);
__IOREG(DTS019CM, 0xFFFF824C, __READ_WRITE, uint32);
__IOREG(DTS020CM, 0xFFFF8250, __READ_WRITE, uint32);
__IOREG(DTS021CM, 0xFFFF8254, __READ_WRITE, uint32);
__IOREG(DTS022CM, 0xFFFF8258, __READ_WRITE, uint32);
__IOREG(DTS023CM, 0xFFFF825C, __READ_WRITE, uint32);
__IOREG(DTS024CM, 0xFFFF8260, __READ_WRITE, uint32);
__IOREG(DTS025CM, 0xFFFF8264, __READ_WRITE, uint32);
__IOREG(DTS026CM, 0xFFFF8268, __READ_WRITE, uint32);
__IOREG(DTS027CM, 0xFFFF826C, __READ_WRITE, uint32);
__IOREG(DTS028CM, 0xFFFF8270, __READ_WRITE, uint32);
__IOREG(DTS029CM, 0xFFFF8274, __READ_WRITE, uint32);
__IOREG(DTS030CM, 0xFFFF8278, __READ_WRITE, uint32);
__IOREG(DTS031CM, 0xFFFF827C, __READ_WRITE, uint32);
__IOREG(DTS032CM, 0xFFFF8280, __READ_WRITE, uint32);
__IOREG(DTS033CM, 0xFFFF8284, __READ_WRITE, uint32);
__IOREG(DTS034CM, 0xFFFF8288, __READ_WRITE, uint32);
__IOREG(DTS035CM, 0xFFFF828C, __READ_WRITE, uint32);
__IOREG(DTS036CM, 0xFFFF8290, __READ_WRITE, uint32);
__IOREG(DTS037CM, 0xFFFF8294, __READ_WRITE, uint32);
__IOREG(DTS038CM, 0xFFFF8298, __READ_WRITE, uint32);
__IOREG(DTS039CM, 0xFFFF829C, __READ_WRITE, uint32);
__IOREG(DTS040CM, 0xFFFF82A0, __READ_WRITE, uint32);
__IOREG(DTS041CM, 0xFFFF82A4, __READ_WRITE, uint32);
__IOREG(DTS042CM, 0xFFFF82A8, __READ_WRITE, uint32);
__IOREG(DTS043CM, 0xFFFF82AC, __READ_WRITE, uint32);
__IOREG(DTS044CM, 0xFFFF82B0, __READ_WRITE, uint32);
__IOREG(DTS045CM, 0xFFFF82B4, __READ_WRITE, uint32);
__IOREG(DTS046CM, 0xFFFF82B8, __READ_WRITE, uint32);
__IOREG(DTS047CM, 0xFFFF82BC, __READ_WRITE, uint32);
__IOREG(DTS048CM, 0xFFFF82C0, __READ_WRITE, uint32);
__IOREG(DTS049CM, 0xFFFF82C4, __READ_WRITE, uint32);
__IOREG(DTS050CM, 0xFFFF82C8, __READ_WRITE, uint32);
__IOREG(DTS051CM, 0xFFFF82CC, __READ_WRITE, uint32);
__IOREG(DTS052CM, 0xFFFF82D0, __READ_WRITE, uint32);
__IOREG(DTS053CM, 0xFFFF82D4, __READ_WRITE, uint32);
__IOREG(DTS054CM, 0xFFFF82D8, __READ_WRITE, uint32);
__IOREG(DTS055CM, 0xFFFF82DC, __READ_WRITE, uint32);
__IOREG(DTS056CM, 0xFFFF82E0, __READ_WRITE, uint32);
__IOREG(DTS057CM, 0xFFFF82E4, __READ_WRITE, uint32);
__IOREG(DTS058CM, 0xFFFF82E8, __READ_WRITE, uint32);
__IOREG(DTS059CM, 0xFFFF82EC, __READ_WRITE, uint32);
__IOREG(DTS060CM, 0xFFFF82F0, __READ_WRITE, uint32);
__IOREG(DTS061CM, 0xFFFF82F4, __READ_WRITE, uint32);
__IOREG(DTS062CM, 0xFFFF82F8, __READ_WRITE, uint32);
__IOREG(DTS063CM, 0xFFFF82FC, __READ_WRITE, uint32);
__IOREG(DTS064CM, 0xFFFF8300, __READ_WRITE, uint32);
__IOREG(DTS065CM, 0xFFFF8304, __READ_WRITE, uint32);
__IOREG(DTS066CM, 0xFFFF8308, __READ_WRITE, uint32);
__IOREG(DTS067CM, 0xFFFF830C, __READ_WRITE, uint32);
__IOREG(DTS068CM, 0xFFFF8310, __READ_WRITE, uint32);
__IOREG(DTS069CM, 0xFFFF8314, __READ_WRITE, uint32);
__IOREG(DTS070CM, 0xFFFF8318, __READ_WRITE, uint32);
__IOREG(DTS071CM, 0xFFFF831C, __READ_WRITE, uint32);
__IOREG(DTS072CM, 0xFFFF8320, __READ_WRITE, uint32);
__IOREG(DTS073CM, 0xFFFF8324, __READ_WRITE, uint32);
__IOREG(DTS074CM, 0xFFFF8328, __READ_WRITE, uint32);
__IOREG(DTS075CM, 0xFFFF832C, __READ_WRITE, uint32);
__IOREG(DTS076CM, 0xFFFF8330, __READ_WRITE, uint32);
__IOREG(DTS077CM, 0xFFFF8334, __READ_WRITE, uint32);
__IOREG(DTS078CM, 0xFFFF8338, __READ_WRITE, uint32);
__IOREG(DTS079CM, 0xFFFF833C, __READ_WRITE, uint32);
__IOREG(DTS080CM, 0xFFFF8340, __READ_WRITE, uint32);
__IOREG(DTS081CM, 0xFFFF8344, __READ_WRITE, uint32);
__IOREG(DTS082CM, 0xFFFF8348, __READ_WRITE, uint32);
__IOREG(DTS083CM, 0xFFFF834C, __READ_WRITE, uint32);
__IOREG(DTS084CM, 0xFFFF8350, __READ_WRITE, uint32);
__IOREG(DTS085CM, 0xFFFF8354, __READ_WRITE, uint32);
__IOREG(DTS086CM, 0xFFFF8358, __READ_WRITE, uint32);
__IOREG(DTS087CM, 0xFFFF835C, __READ_WRITE, uint32);
__IOREG(DTS088CM, 0xFFFF8360, __READ_WRITE, uint32);
__IOREG(DTS089CM, 0xFFFF8364, __READ_WRITE, uint32);
__IOREG(DTS090CM, 0xFFFF8368, __READ_WRITE, uint32);
__IOREG(DTS091CM, 0xFFFF836C, __READ_WRITE, uint32);
__IOREG(DTS092CM, 0xFFFF8370, __READ_WRITE, uint32);
__IOREG(DTS093CM, 0xFFFF8374, __READ_WRITE, uint32);
__IOREG(DTS094CM, 0xFFFF8378, __READ_WRITE, uint32);
__IOREG(DTS095CM, 0xFFFF837C, __READ_WRITE, uint32);
__IOREG(DTS096CM, 0xFFFF8380, __READ_WRITE, uint32);
__IOREG(DTS097CM, 0xFFFF8384, __READ_WRITE, uint32);
__IOREG(DTS098CM, 0xFFFF8388, __READ_WRITE, uint32);
__IOREG(DTS099CM, 0xFFFF838C, __READ_WRITE, uint32);
__IOREG(DTS100CM, 0xFFFF8390, __READ_WRITE, uint32);
__IOREG(DTS101CM, 0xFFFF8394, __READ_WRITE, uint32);
__IOREG(DTS102CM, 0xFFFF8398, __READ_WRITE, uint32);
__IOREG(DTS103CM, 0xFFFF839C, __READ_WRITE, uint32);
__IOREG(DTS104CM, 0xFFFF83A0, __READ_WRITE, uint32);
__IOREG(DTS105CM, 0xFFFF83A4, __READ_WRITE, uint32);
__IOREG(DTS106CM, 0xFFFF83A8, __READ_WRITE, uint32);
__IOREG(DTS107CM, 0xFFFF83AC, __READ_WRITE, uint32);
__IOREG(DTS108CM, 0xFFFF83B0, __READ_WRITE, uint32);
__IOREG(DTS109CM, 0xFFFF83B4, __READ_WRITE, uint32);
__IOREG(DTS110CM, 0xFFFF83B8, __READ_WRITE, uint32);
__IOREG(DTS111CM, 0xFFFF83BC, __READ_WRITE, uint32);
__IOREG(DTS112CM, 0xFFFF83C0, __READ_WRITE, uint32);
__IOREG(DTS113CM, 0xFFFF83C4, __READ_WRITE, uint32);
__IOREG(DTS114CM, 0xFFFF83C8, __READ_WRITE, uint32);
__IOREG(DTS115CM, 0xFFFF83CC, __READ_WRITE, uint32);
__IOREG(DTS116CM, 0xFFFF83D0, __READ_WRITE, uint32);
__IOREG(DTS117CM, 0xFFFF83D4, __READ_WRITE, uint32);
__IOREG(DTS118CM, 0xFFFF83D8, __READ_WRITE, uint32);
__IOREG(DTS119CM, 0xFFFF83DC, __READ_WRITE, uint32);
__IOREG(DTS120CM, 0xFFFF83E0, __READ_WRITE, uint32);
__IOREG(DTS121CM, 0xFFFF83E4, __READ_WRITE, uint32);
__IOREG(DTS122CM, 0xFFFF83E8, __READ_WRITE, uint32);
__IOREG(DTS123CM, 0xFFFF83EC, __READ_WRITE, uint32);
__IOREG(DTS124CM, 0xFFFF83F0, __READ_WRITE, uint32);
__IOREG(DTS125CM, 0xFFFF83F4, __READ_WRITE, uint32);
__IOREG(DTS126CM, 0xFFFF83F8, __READ_WRITE, uint32);
__IOREG(DTS127CM, 0xFFFF83FC, __READ_WRITE, uint32);
__IOREG(DSA0, 0xFFFF8400, __READ_WRITE, uint32);
__IOREG(DDA0, 0xFFFF8404, __READ_WRITE, uint32);
__IOREG(DTC0, 0xFFFF8408, __READ_WRITE, uint32);
__IOREG(DTCT0, 0xFFFF840C, __READ_WRITE, uint32);
__IOREG(DRSA0, 0xFFFF8410, __READ_WRITE, uint32);
__IOREG(DRDA0, 0xFFFF8414, __READ_WRITE, uint32);
__IOREG(DRTC0, 0xFFFF8418, __READ_WRITE, uint32);
__IOREG(DTCC0, 0xFFFF841C, __READ_WRITE, uint32);
__IOREG(DCEN0, 0xFFFF8420, __READ_WRITE, uint32);
__IOREG(DCST0, 0xFFFF8424, __READ, uint32);
__IOREG(DCSTS0, 0xFFFF8428, __READ_WRITE, uint32);
__IOREG(DCSTC0, 0xFFFF842C, __READ_WRITE, uint32);
__IOREG(DTFR0, 0xFFFF8430, __READ_WRITE, uint32);
__IOREG(DTFRRQ0, 0xFFFF8434, __READ, uint32);
__IOREG(DTFRRQC0, 0xFFFF8438, __READ_WRITE, uint32);
__IOREG(DSA1, 0xFFFF8440, __READ_WRITE, uint32);
__IOREG(DDA1, 0xFFFF8444, __READ_WRITE, uint32);
__IOREG(DTC1, 0xFFFF8448, __READ_WRITE, uint32);
__IOREG(DTCT1, 0xFFFF844C, __READ_WRITE, uint32);
__IOREG(DRSA1, 0xFFFF8450, __READ_WRITE, uint32);
__IOREG(DRDA1, 0xFFFF8454, __READ_WRITE, uint32);
__IOREG(DRTC1, 0xFFFF8458, __READ_WRITE, uint32);
__IOREG(DTCC1, 0xFFFF845C, __READ_WRITE, uint32);
__IOREG(DCEN1, 0xFFFF8460, __READ_WRITE, uint32);
__IOREG(DCST1, 0xFFFF8464, __READ, uint32);
__IOREG(DCSTS1, 0xFFFF8468, __READ_WRITE, uint32);
__IOREG(DCSTC1, 0xFFFF846C, __READ_WRITE, uint32);
__IOREG(DTFR1, 0xFFFF8470, __READ_WRITE, uint32);
__IOREG(DTFRRQ1, 0xFFFF8474, __READ, uint32);
__IOREG(DTFRRQC1, 0xFFFF8478, __READ_WRITE, uint32);
__IOREG(DSA2, 0xFFFF8480, __READ_WRITE, uint32);
__IOREG(DDA2, 0xFFFF8484, __READ_WRITE, uint32);
__IOREG(DTC2, 0xFFFF8488, __READ_WRITE, uint32);
__IOREG(DTCT2, 0xFFFF848C, __READ_WRITE, uint32);
__IOREG(DRSA2, 0xFFFF8490, __READ_WRITE, uint32);
__IOREG(DRDA2, 0xFFFF8494, __READ_WRITE, uint32);
__IOREG(DRTC2, 0xFFFF8498, __READ_WRITE, uint32);
__IOREG(DTCC2, 0xFFFF849C, __READ_WRITE, uint32);
__IOREG(DCEN2, 0xFFFF84A0, __READ_WRITE, uint32);
__IOREG(DCST2, 0xFFFF84A4, __READ, uint32);
__IOREG(DCSTS2, 0xFFFF84A8, __READ_WRITE, uint32);
__IOREG(DCSTC2, 0xFFFF84AC, __READ_WRITE, uint32);
__IOREG(DTFR2, 0xFFFF84B0, __READ_WRITE, uint32);
__IOREG(DTFRRQ2, 0xFFFF84B4, __READ, uint32);
__IOREG(DTFRRQC2, 0xFFFF84B8, __READ_WRITE, uint32);
__IOREG(DSA3, 0xFFFF84C0, __READ_WRITE, uint32);
__IOREG(DDA3, 0xFFFF84C4, __READ_WRITE, uint32);
__IOREG(DTC3, 0xFFFF84C8, __READ_WRITE, uint32);
__IOREG(DTCT3, 0xFFFF84CC, __READ_WRITE, uint32);
__IOREG(DRSA3, 0xFFFF84D0, __READ_WRITE, uint32);
__IOREG(DRDA3, 0xFFFF84D4, __READ_WRITE, uint32);
__IOREG(DRTC3, 0xFFFF84D8, __READ_WRITE, uint32);
__IOREG(DTCC3, 0xFFFF84DC, __READ_WRITE, uint32);
__IOREG(DCEN3, 0xFFFF84E0, __READ_WRITE, uint32);
__IOREG(DCST3, 0xFFFF84E4, __READ, uint32);
__IOREG(DCSTS3, 0xFFFF84E8, __READ_WRITE, uint32);
__IOREG(DCSTC3, 0xFFFF84EC, __READ_WRITE, uint32);
__IOREG(DTFR3, 0xFFFF84F0, __READ_WRITE, uint32);
__IOREG(DTFRRQ3, 0xFFFF84F4, __READ, uint32);
__IOREG(DTFRRQC3, 0xFFFF84F8, __READ_WRITE, uint32);
__IOREG(DSA4, 0xFFFF8500, __READ_WRITE, uint32);
__IOREG(DDA4, 0xFFFF8504, __READ_WRITE, uint32);
__IOREG(DTC4, 0xFFFF8508, __READ_WRITE, uint32);
__IOREG(DTCT4, 0xFFFF850C, __READ_WRITE, uint32);
__IOREG(DRSA4, 0xFFFF8510, __READ_WRITE, uint32);
__IOREG(DRDA4, 0xFFFF8514, __READ_WRITE, uint32);
__IOREG(DRTC4, 0xFFFF8518, __READ_WRITE, uint32);
__IOREG(DTCC4, 0xFFFF851C, __READ_WRITE, uint32);
__IOREG(DCEN4, 0xFFFF8520, __READ_WRITE, uint32);
__IOREG(DCST4, 0xFFFF8524, __READ, uint32);
__IOREG(DCSTS4, 0xFFFF8528, __READ_WRITE, uint32);
__IOREG(DCSTC4, 0xFFFF852C, __READ_WRITE, uint32);
__IOREG(DTFR4, 0xFFFF8530, __READ_WRITE, uint32);
__IOREG(DTFRRQ4, 0xFFFF8534, __READ, uint32);
__IOREG(DTFRRQC4, 0xFFFF8538, __READ_WRITE, uint32);
__IOREG(DSA5, 0xFFFF8540, __READ_WRITE, uint32);
__IOREG(DDA5, 0xFFFF8544, __READ_WRITE, uint32);
__IOREG(DTC5, 0xFFFF8548, __READ_WRITE, uint32);
__IOREG(DTCT5, 0xFFFF854C, __READ_WRITE, uint32);
__IOREG(DRSA5, 0xFFFF8550, __READ_WRITE, uint32);
__IOREG(DRDA5, 0xFFFF8554, __READ_WRITE, uint32);
__IOREG(DRTC5, 0xFFFF8558, __READ_WRITE, uint32);
__IOREG(DTCC5, 0xFFFF855C, __READ_WRITE, uint32);
__IOREG(DCEN5, 0xFFFF8560, __READ_WRITE, uint32);
__IOREG(DCST5, 0xFFFF8564, __READ, uint32);
__IOREG(DCSTS5, 0xFFFF8568, __READ_WRITE, uint32);
__IOREG(DCSTC5, 0xFFFF856C, __READ_WRITE, uint32);
__IOREG(DTFR5, 0xFFFF8570, __READ_WRITE, uint32);
__IOREG(DTFRRQ5, 0xFFFF8574, __READ, uint32);
__IOREG(DTFRRQC5, 0xFFFF8578, __READ_WRITE, uint32);
__IOREG(DSA6, 0xFFFF8580, __READ_WRITE, uint32);
__IOREG(DDA6, 0xFFFF8584, __READ_WRITE, uint32);
__IOREG(DTC6, 0xFFFF8588, __READ_WRITE, uint32);
__IOREG(DTCT6, 0xFFFF858C, __READ_WRITE, uint32);
__IOREG(DRSA6, 0xFFFF8590, __READ_WRITE, uint32);
__IOREG(DRDA6, 0xFFFF8594, __READ_WRITE, uint32);
__IOREG(DRTC6, 0xFFFF8598, __READ_WRITE, uint32);
__IOREG(DTCC6, 0xFFFF859C, __READ_WRITE, uint32);
__IOREG(DCEN6, 0xFFFF85A0, __READ_WRITE, uint32);
__IOREG(DCST6, 0xFFFF85A4, __READ, uint32);
__IOREG(DCSTS6, 0xFFFF85A8, __READ_WRITE, uint32);
__IOREG(DCSTC6, 0xFFFF85AC, __READ_WRITE, uint32);
__IOREG(DTFR6, 0xFFFF85B0, __READ_WRITE, uint32);
__IOREG(DTFRRQ6, 0xFFFF85B4, __READ, uint32);
__IOREG(DTFRRQC6, 0xFFFF85B8, __READ_WRITE, uint32);
__IOREG(DSA7, 0xFFFF85C0, __READ_WRITE, uint32);
__IOREG(DDA7, 0xFFFF85C4, __READ_WRITE, uint32);
__IOREG(DTC7, 0xFFFF85C8, __READ_WRITE, uint32);
__IOREG(DTCT7, 0xFFFF85CC, __READ_WRITE, uint32);
__IOREG(DRSA7, 0xFFFF85D0, __READ_WRITE, uint32);
__IOREG(DRDA7, 0xFFFF85D4, __READ_WRITE, uint32);
__IOREG(DRTC7, 0xFFFF85D8, __READ_WRITE, uint32);
__IOREG(DTCC7, 0xFFFF85DC, __READ_WRITE, uint32);
__IOREG(DCEN7, 0xFFFF85E0, __READ_WRITE, uint32);
__IOREG(DCST7, 0xFFFF85E4, __READ, uint32);
__IOREG(DCSTS7, 0xFFFF85E8, __READ_WRITE, uint32);
__IOREG(DCSTC7, 0xFFFF85EC, __READ_WRITE, uint32);
__IOREG(DTFR7, 0xFFFF85F0, __READ_WRITE, uint32);
__IOREG(DTFRRQ7, 0xFFFF85F4, __READ, uint32);
__IOREG(DTFRRQC7, 0xFFFF85F8, __READ_WRITE, uint32);
__IOREG(DSA8, 0xFFFF8600, __READ_WRITE, uint32);
__IOREG(DDA8, 0xFFFF8604, __READ_WRITE, uint32);
__IOREG(DTC8, 0xFFFF8608, __READ_WRITE, uint32);
__IOREG(DTCT8, 0xFFFF860C, __READ_WRITE, uint32);
__IOREG(DRSA8, 0xFFFF8610, __READ_WRITE, uint32);
__IOREG(DRDA8, 0xFFFF8614, __READ_WRITE, uint32);
__IOREG(DRTC8, 0xFFFF8618, __READ_WRITE, uint32);
__IOREG(DTCC8, 0xFFFF861C, __READ_WRITE, uint32);
__IOREG(DCEN8, 0xFFFF8620, __READ_WRITE, uint32);
__IOREG(DCST8, 0xFFFF8624, __READ, uint32);
__IOREG(DCSTS8, 0xFFFF8628, __READ_WRITE, uint32);
__IOREG(DCSTC8, 0xFFFF862C, __READ_WRITE, uint32);
__IOREG(DTFR8, 0xFFFF8630, __READ_WRITE, uint32);
__IOREG(DTFRRQ8, 0xFFFF8634, __READ, uint32);
__IOREG(DTFRRQC8, 0xFFFF8638, __READ_WRITE, uint32);
__IOREG(DSA9, 0xFFFF8640, __READ_WRITE, uint32);
__IOREG(DDA9, 0xFFFF8644, __READ_WRITE, uint32);
__IOREG(DTC9, 0xFFFF8648, __READ_WRITE, uint32);
__IOREG(DTCT9, 0xFFFF864C, __READ_WRITE, uint32);
__IOREG(DRSA9, 0xFFFF8650, __READ_WRITE, uint32);
__IOREG(DRDA9, 0xFFFF8654, __READ_WRITE, uint32);
__IOREG(DRTC9, 0xFFFF8658, __READ_WRITE, uint32);
__IOREG(DTCC9, 0xFFFF865C, __READ_WRITE, uint32);
__IOREG(DCEN9, 0xFFFF8660, __READ_WRITE, uint32);
__IOREG(DCST9, 0xFFFF8664, __READ, uint32);
__IOREG(DCSTS9, 0xFFFF8668, __READ_WRITE, uint32);
__IOREG(DCSTC9, 0xFFFF866C, __READ_WRITE, uint32);
__IOREG(DTFR9, 0xFFFF8670, __READ_WRITE, uint32);
__IOREG(DTFRRQ9, 0xFFFF8674, __READ, uint32);
__IOREG(DTFRRQC9, 0xFFFF8678, __READ_WRITE, uint32);
__IOREG(DSA10, 0xFFFF8680, __READ_WRITE, uint32);
__IOREG(DDA10, 0xFFFF8684, __READ_WRITE, uint32);
__IOREG(DTC10, 0xFFFF8688, __READ_WRITE, uint32);
__IOREG(DTCT10, 0xFFFF868C, __READ_WRITE, uint32);
__IOREG(DRSA10, 0xFFFF8690, __READ_WRITE, uint32);
__IOREG(DRDA10, 0xFFFF8694, __READ_WRITE, uint32);
__IOREG(DRTC10, 0xFFFF8698, __READ_WRITE, uint32);
__IOREG(DTCC10, 0xFFFF869C, __READ_WRITE, uint32);
__IOREG(DCEN10, 0xFFFF86A0, __READ_WRITE, uint32);
__IOREG(DCST10, 0xFFFF86A4, __READ, uint32);
__IOREG(DCSTS10, 0xFFFF86A8, __READ_WRITE, uint32);
__IOREG(DCSTC10, 0xFFFF86AC, __READ_WRITE, uint32);
__IOREG(DTFR10, 0xFFFF86B0, __READ_WRITE, uint32);
__IOREG(DTFRRQ10, 0xFFFF86B4, __READ, uint32);
__IOREG(DTFRRQC10, 0xFFFF86B8, __READ_WRITE, uint32);
__IOREG(DSA11, 0xFFFF86C0, __READ_WRITE, uint32);
__IOREG(DDA11, 0xFFFF86C4, __READ_WRITE, uint32);
__IOREG(DTC11, 0xFFFF86C8, __READ_WRITE, uint32);
__IOREG(DTCT11, 0xFFFF86CC, __READ_WRITE, uint32);
__IOREG(DRSA11, 0xFFFF86D0, __READ_WRITE, uint32);
__IOREG(DRDA11, 0xFFFF86D4, __READ_WRITE, uint32);
__IOREG(DRTC11, 0xFFFF86D8, __READ_WRITE, uint32);
__IOREG(DTCC11, 0xFFFF86DC, __READ_WRITE, uint32);
__IOREG(DCEN11, 0xFFFF86E0, __READ_WRITE, uint32);
__IOREG(DCST11, 0xFFFF86E4, __READ, uint32);
__IOREG(DCSTS11, 0xFFFF86E8, __READ_WRITE, uint32);
__IOREG(DCSTC11, 0xFFFF86EC, __READ_WRITE, uint32);
__IOREG(DTFR11, 0xFFFF86F0, __READ_WRITE, uint32);
__IOREG(DTFRRQ11, 0xFFFF86F4, __READ, uint32);
__IOREG(DTFRRQC11, 0xFFFF86F8, __READ_WRITE, uint32);
__IOREG(DSA12, 0xFFFF8700, __READ_WRITE, uint32);
__IOREG(DDA12, 0xFFFF8704, __READ_WRITE, uint32);
__IOREG(DTC12, 0xFFFF8708, __READ_WRITE, uint32);
__IOREG(DTCT12, 0xFFFF870C, __READ_WRITE, uint32);
__IOREG(DRSA12, 0xFFFF8710, __READ_WRITE, uint32);
__IOREG(DRDA12, 0xFFFF8714, __READ_WRITE, uint32);
__IOREG(DRTC12, 0xFFFF8718, __READ_WRITE, uint32);
__IOREG(DTCC12, 0xFFFF871C, __READ_WRITE, uint32);
__IOREG(DCEN12, 0xFFFF8720, __READ_WRITE, uint32);
__IOREG(DCST12, 0xFFFF8724, __READ, uint32);
__IOREG(DCSTS12, 0xFFFF8728, __READ_WRITE, uint32);
__IOREG(DCSTC12, 0xFFFF872C, __READ_WRITE, uint32);
__IOREG(DTFR12, 0xFFFF8730, __READ_WRITE, uint32);
__IOREG(DTFRRQ12, 0xFFFF8734, __READ, uint32);
__IOREG(DTFRRQC12, 0xFFFF8738, __READ_WRITE, uint32);
__IOREG(DSA13, 0xFFFF8740, __READ_WRITE, uint32);
__IOREG(DDA13, 0xFFFF8744, __READ_WRITE, uint32);
__IOREG(DTC13, 0xFFFF8748, __READ_WRITE, uint32);
__IOREG(DTCT13, 0xFFFF874C, __READ_WRITE, uint32);
__IOREG(DRSA13, 0xFFFF8750, __READ_WRITE, uint32);
__IOREG(DRDA13, 0xFFFF8754, __READ_WRITE, uint32);
__IOREG(DRTC13, 0xFFFF8758, __READ_WRITE, uint32);
__IOREG(DTCC13, 0xFFFF875C, __READ_WRITE, uint32);
__IOREG(DCEN13, 0xFFFF8760, __READ_WRITE, uint32);
__IOREG(DCST13, 0xFFFF8764, __READ, uint32);
__IOREG(DCSTS13, 0xFFFF8768, __READ_WRITE, uint32);
__IOREG(DCSTC13, 0xFFFF876C, __READ_WRITE, uint32);
__IOREG(DTFR13, 0xFFFF8770, __READ_WRITE, uint32);
__IOREG(DTFRRQ13, 0xFFFF8774, __READ, uint32);
__IOREG(DTFRRQC13, 0xFFFF8778, __READ_WRITE, uint32);
__IOREG(DSA14, 0xFFFF8780, __READ_WRITE, uint32);
__IOREG(DDA14, 0xFFFF8784, __READ_WRITE, uint32);
__IOREG(DTC14, 0xFFFF8788, __READ_WRITE, uint32);
__IOREG(DTCT14, 0xFFFF878C, __READ_WRITE, uint32);
__IOREG(DRSA14, 0xFFFF8790, __READ_WRITE, uint32);
__IOREG(DRDA14, 0xFFFF8794, __READ_WRITE, uint32);
__IOREG(DRTC14, 0xFFFF8798, __READ_WRITE, uint32);
__IOREG(DTCC14, 0xFFFF879C, __READ_WRITE, uint32);
__IOREG(DCEN14, 0xFFFF87A0, __READ_WRITE, uint32);
__IOREG(DCST14, 0xFFFF87A4, __READ, uint32);
__IOREG(DCSTS14, 0xFFFF87A8, __READ_WRITE, uint32);
__IOREG(DCSTC14, 0xFFFF87AC, __READ_WRITE, uint32);
__IOREG(DTFR14, 0xFFFF87B0, __READ_WRITE, uint32);
__IOREG(DTFRRQ14, 0xFFFF87B4, __READ, uint32);
__IOREG(DTFRRQC14, 0xFFFF87B8, __READ_WRITE, uint32);
__IOREG(DSA15, 0xFFFF87C0, __READ_WRITE, uint32);
__IOREG(DDA15, 0xFFFF87C4, __READ_WRITE, uint32);
__IOREG(DTC15, 0xFFFF87C8, __READ_WRITE, uint32);
__IOREG(DTCT15, 0xFFFF87CC, __READ_WRITE, uint32);
__IOREG(DRSA15, 0xFFFF87D0, __READ_WRITE, uint32);
__IOREG(DRDA15, 0xFFFF87D4, __READ_WRITE, uint32);
__IOREG(DRTC15, 0xFFFF87D8, __READ_WRITE, uint32);
__IOREG(DTCC15, 0xFFFF87DC, __READ_WRITE, uint32);
__IOREG(DCEN15, 0xFFFF87E0, __READ_WRITE, uint32);
__IOREG(DCST15, 0xFFFF87E4, __READ, uint32);
__IOREG(DCSTS15, 0xFFFF87E8, __READ_WRITE, uint32);
__IOREG(DCSTC15, 0xFFFF87EC, __READ_WRITE, uint32);
__IOREG(DTFR15, 0xFFFF87F0, __READ_WRITE, uint32);
__IOREG(DTFRRQ15, 0xFFFF87F4, __READ, uint32);
__IOREG(DTFRRQC15, 0xFFFF87F8, __READ_WRITE, uint32);
__IOREG(DTSA000, 0xFFFF9000, __READ_WRITE, uint32);
__IOREG(DTDA000, 0xFFFF9004, __READ_WRITE, uint32);
__IOREG(DTTC000, 0xFFFF9008, __READ_WRITE, uint32);
__IOREG(DTTCT000, 0xFFFF900C, __READ_WRITE, uint32);
__IOREG(DTRSA000, 0xFFFF9010, __READ_WRITE, uint32);
__IOREG(DTRDA000, 0xFFFF9014, __READ_WRITE, uint32);
__IOREG(DTRTC000, 0xFFFF9018, __READ_WRITE, uint32);
__IOREG(DTTCC000, 0xFFFF901C, __READ_WRITE, uint32);
__IOREG(DTFSL000, 0xFFFF9020, __READ_WRITE, uint32);
__IOREG(DTFST000, 0xFFFF9024, __READ, uint32);
__IOREG(DTFSS000, 0xFFFF9028, __READ_WRITE, uint32);
__IOREG(DTFSC000, 0xFFFF902C, __READ_WRITE, uint32);
__IOREG(DTSA001, 0xFFFF9040, __READ_WRITE, uint32);
__IOREG(DTDA001, 0xFFFF9044, __READ_WRITE, uint32);
__IOREG(DTTC001, 0xFFFF9048, __READ_WRITE, uint32);
__IOREG(DTTCT001, 0xFFFF904C, __READ_WRITE, uint32);
__IOREG(DTRSA001, 0xFFFF9050, __READ_WRITE, uint32);
__IOREG(DTRDA001, 0xFFFF9054, __READ_WRITE, uint32);
__IOREG(DTRTC001, 0xFFFF9058, __READ_WRITE, uint32);
__IOREG(DTTCC001, 0xFFFF905C, __READ_WRITE, uint32);
__IOREG(DTFSL001, 0xFFFF9060, __READ_WRITE, uint32);
__IOREG(DTFST001, 0xFFFF9064, __READ, uint32);
__IOREG(DTFSS001, 0xFFFF9068, __READ_WRITE, uint32);
__IOREG(DTFSC001, 0xFFFF906C, __READ_WRITE, uint32);
__IOREG(DTSA002, 0xFFFF9080, __READ_WRITE, uint32);
__IOREG(DTDA002, 0xFFFF9084, __READ_WRITE, uint32);
__IOREG(DTTC002, 0xFFFF9088, __READ_WRITE, uint32);
__IOREG(DTTCT002, 0xFFFF908C, __READ_WRITE, uint32);
__IOREG(DTRSA002, 0xFFFF9090, __READ_WRITE, uint32);
__IOREG(DTRDA002, 0xFFFF9094, __READ_WRITE, uint32);
__IOREG(DTRTC002, 0xFFFF9098, __READ_WRITE, uint32);
__IOREG(DTTCC002, 0xFFFF909C, __READ_WRITE, uint32);
__IOREG(DTFSL002, 0xFFFF90A0, __READ_WRITE, uint32);
__IOREG(DTFST002, 0xFFFF90A4, __READ, uint32);
__IOREG(DTFSS002, 0xFFFF90A8, __READ_WRITE, uint32);
__IOREG(DTFSC002, 0xFFFF90AC, __READ_WRITE, uint32);
__IOREG(DTSA003, 0xFFFF90C0, __READ_WRITE, uint32);
__IOREG(DTDA003, 0xFFFF90C4, __READ_WRITE, uint32);
__IOREG(DTTC003, 0xFFFF90C8, __READ_WRITE, uint32);
__IOREG(DTTCT003, 0xFFFF90CC, __READ_WRITE, uint32);
__IOREG(DTRSA003, 0xFFFF90D0, __READ_WRITE, uint32);
__IOREG(DTRDA003, 0xFFFF90D4, __READ_WRITE, uint32);
__IOREG(DTRTC003, 0xFFFF90D8, __READ_WRITE, uint32);
__IOREG(DTTCC003, 0xFFFF90DC, __READ_WRITE, uint32);
__IOREG(DTFSL003, 0xFFFF90E0, __READ_WRITE, uint32);
__IOREG(DTFST003, 0xFFFF90E4, __READ, uint32);
__IOREG(DTFSS003, 0xFFFF90E8, __READ_WRITE, uint32);
__IOREG(DTFSC003, 0xFFFF90EC, __READ_WRITE, uint32);
__IOREG(DTSA004, 0xFFFF9100, __READ_WRITE, uint32);
__IOREG(DTDA004, 0xFFFF9104, __READ_WRITE, uint32);
__IOREG(DTTC004, 0xFFFF9108, __READ_WRITE, uint32);
__IOREG(DTTCT004, 0xFFFF910C, __READ_WRITE, uint32);
__IOREG(DTRSA004, 0xFFFF9110, __READ_WRITE, uint32);
__IOREG(DTRDA004, 0xFFFF9114, __READ_WRITE, uint32);
__IOREG(DTRTC004, 0xFFFF9118, __READ_WRITE, uint32);
__IOREG(DTTCC004, 0xFFFF911C, __READ_WRITE, uint32);
__IOREG(DTFSL004, 0xFFFF9120, __READ_WRITE, uint32);
__IOREG(DTFST004, 0xFFFF9124, __READ, uint32);
__IOREG(DTFSS004, 0xFFFF9128, __READ_WRITE, uint32);
__IOREG(DTFSC004, 0xFFFF912C, __READ_WRITE, uint32);
__IOREG(DTSA005, 0xFFFF9140, __READ_WRITE, uint32);
__IOREG(DTDA005, 0xFFFF9144, __READ_WRITE, uint32);
__IOREG(DTTC005, 0xFFFF9148, __READ_WRITE, uint32);
__IOREG(DTTCT005, 0xFFFF914C, __READ_WRITE, uint32);
__IOREG(DTRSA005, 0xFFFF9150, __READ_WRITE, uint32);
__IOREG(DTRDA005, 0xFFFF9154, __READ_WRITE, uint32);
__IOREG(DTRTC005, 0xFFFF9158, __READ_WRITE, uint32);
__IOREG(DTTCC005, 0xFFFF915C, __READ_WRITE, uint32);
__IOREG(DTFSL005, 0xFFFF9160, __READ_WRITE, uint32);
__IOREG(DTFST005, 0xFFFF9164, __READ, uint32);
__IOREG(DTFSS005, 0xFFFF9168, __READ_WRITE, uint32);
__IOREG(DTFSC005, 0xFFFF916C, __READ_WRITE, uint32);
__IOREG(DTSA006, 0xFFFF9180, __READ_WRITE, uint32);
__IOREG(DTDA006, 0xFFFF9184, __READ_WRITE, uint32);
__IOREG(DTTC006, 0xFFFF9188, __READ_WRITE, uint32);
__IOREG(DTTCT006, 0xFFFF918C, __READ_WRITE, uint32);
__IOREG(DTRSA006, 0xFFFF9190, __READ_WRITE, uint32);
__IOREG(DTRDA006, 0xFFFF9194, __READ_WRITE, uint32);
__IOREG(DTRTC006, 0xFFFF9198, __READ_WRITE, uint32);
__IOREG(DTTCC006, 0xFFFF919C, __READ_WRITE, uint32);
__IOREG(DTFSL006, 0xFFFF91A0, __READ_WRITE, uint32);
__IOREG(DTFST006, 0xFFFF91A4, __READ, uint32);
__IOREG(DTFSS006, 0xFFFF91A8, __READ_WRITE, uint32);
__IOREG(DTFSC006, 0xFFFF91AC, __READ_WRITE, uint32);
__IOREG(DTSA007, 0xFFFF91C0, __READ_WRITE, uint32);
__IOREG(DTDA007, 0xFFFF91C4, __READ_WRITE, uint32);
__IOREG(DTTC007, 0xFFFF91C8, __READ_WRITE, uint32);
__IOREG(DTTCT007, 0xFFFF91CC, __READ_WRITE, uint32);
__IOREG(DTRSA007, 0xFFFF91D0, __READ_WRITE, uint32);
__IOREG(DTRDA007, 0xFFFF91D4, __READ_WRITE, uint32);
__IOREG(DTRTC007, 0xFFFF91D8, __READ_WRITE, uint32);
__IOREG(DTTCC007, 0xFFFF91DC, __READ_WRITE, uint32);
__IOREG(DTFSL007, 0xFFFF91E0, __READ_WRITE, uint32);
__IOREG(DTFST007, 0xFFFF91E4, __READ, uint32);
__IOREG(DTFSS007, 0xFFFF91E8, __READ_WRITE, uint32);
__IOREG(DTFSC007, 0xFFFF91EC, __READ_WRITE, uint32);
__IOREG(DTSA008, 0xFFFF9200, __READ_WRITE, uint32);
__IOREG(DTDA008, 0xFFFF9204, __READ_WRITE, uint32);
__IOREG(DTTC008, 0xFFFF9208, __READ_WRITE, uint32);
__IOREG(DTTCT008, 0xFFFF920C, __READ_WRITE, uint32);
__IOREG(DTRSA008, 0xFFFF9210, __READ_WRITE, uint32);
__IOREG(DTRDA008, 0xFFFF9214, __READ_WRITE, uint32);
__IOREG(DTRTC008, 0xFFFF9218, __READ_WRITE, uint32);
__IOREG(DTTCC008, 0xFFFF921C, __READ_WRITE, uint32);
__IOREG(DTFSL008, 0xFFFF9220, __READ_WRITE, uint32);
__IOREG(DTFST008, 0xFFFF9224, __READ, uint32);
__IOREG(DTFSS008, 0xFFFF9228, __READ_WRITE, uint32);
__IOREG(DTFSC008, 0xFFFF922C, __READ_WRITE, uint32);
__IOREG(DTSA009, 0xFFFF9240, __READ_WRITE, uint32);
__IOREG(DTDA009, 0xFFFF9244, __READ_WRITE, uint32);
__IOREG(DTTC009, 0xFFFF9248, __READ_WRITE, uint32);
__IOREG(DTTCT009, 0xFFFF924C, __READ_WRITE, uint32);
__IOREG(DTRSA009, 0xFFFF9250, __READ_WRITE, uint32);
__IOREG(DTRDA009, 0xFFFF9254, __READ_WRITE, uint32);
__IOREG(DTRTC009, 0xFFFF9258, __READ_WRITE, uint32);
__IOREG(DTTCC009, 0xFFFF925C, __READ_WRITE, uint32);
__IOREG(DTFSL009, 0xFFFF9260, __READ_WRITE, uint32);
__IOREG(DTFST009, 0xFFFF9264, __READ, uint32);
__IOREG(DTFSS009, 0xFFFF9268, __READ_WRITE, uint32);
__IOREG(DTFSC009, 0xFFFF926C, __READ_WRITE, uint32);
__IOREG(DTSA010, 0xFFFF9280, __READ_WRITE, uint32);
__IOREG(DTDA010, 0xFFFF9284, __READ_WRITE, uint32);
__IOREG(DTTC010, 0xFFFF9288, __READ_WRITE, uint32);
__IOREG(DTTCT010, 0xFFFF928C, __READ_WRITE, uint32);
__IOREG(DTRSA010, 0xFFFF9290, __READ_WRITE, uint32);
__IOREG(DTRDA010, 0xFFFF9294, __READ_WRITE, uint32);
__IOREG(DTRTC010, 0xFFFF9298, __READ_WRITE, uint32);
__IOREG(DTTCC010, 0xFFFF929C, __READ_WRITE, uint32);
__IOREG(DTFSL010, 0xFFFF92A0, __READ_WRITE, uint32);
__IOREG(DTFST010, 0xFFFF92A4, __READ, uint32);
__IOREG(DTFSS010, 0xFFFF92A8, __READ_WRITE, uint32);
__IOREG(DTFSC010, 0xFFFF92AC, __READ_WRITE, uint32);
__IOREG(DTSA011, 0xFFFF92C0, __READ_WRITE, uint32);
__IOREG(DTDA011, 0xFFFF92C4, __READ_WRITE, uint32);
__IOREG(DTTC011, 0xFFFF92C8, __READ_WRITE, uint32);
__IOREG(DTTCT011, 0xFFFF92CC, __READ_WRITE, uint32);
__IOREG(DTRSA011, 0xFFFF92D0, __READ_WRITE, uint32);
__IOREG(DTRDA011, 0xFFFF92D4, __READ_WRITE, uint32);
__IOREG(DTRTC011, 0xFFFF92D8, __READ_WRITE, uint32);
__IOREG(DTTCC011, 0xFFFF92DC, __READ_WRITE, uint32);
__IOREG(DTFSL011, 0xFFFF92E0, __READ_WRITE, uint32);
__IOREG(DTFST011, 0xFFFF92E4, __READ, uint32);
__IOREG(DTFSS011, 0xFFFF92E8, __READ_WRITE, uint32);
__IOREG(DTFSC011, 0xFFFF92EC, __READ_WRITE, uint32);
__IOREG(DTSA012, 0xFFFF9300, __READ_WRITE, uint32);
__IOREG(DTDA012, 0xFFFF9304, __READ_WRITE, uint32);
__IOREG(DTTC012, 0xFFFF9308, __READ_WRITE, uint32);
__IOREG(DTTCT012, 0xFFFF930C, __READ_WRITE, uint32);
__IOREG(DTRSA012, 0xFFFF9310, __READ_WRITE, uint32);
__IOREG(DTRDA012, 0xFFFF9314, __READ_WRITE, uint32);
__IOREG(DTRTC012, 0xFFFF9318, __READ_WRITE, uint32);
__IOREG(DTTCC012, 0xFFFF931C, __READ_WRITE, uint32);
__IOREG(DTFSL012, 0xFFFF9320, __READ_WRITE, uint32);
__IOREG(DTFST012, 0xFFFF9324, __READ, uint32);
__IOREG(DTFSS012, 0xFFFF9328, __READ_WRITE, uint32);
__IOREG(DTFSC012, 0xFFFF932C, __READ_WRITE, uint32);
__IOREG(DTSA013, 0xFFFF9340, __READ_WRITE, uint32);
__IOREG(DTDA013, 0xFFFF9344, __READ_WRITE, uint32);
__IOREG(DTTC013, 0xFFFF9348, __READ_WRITE, uint32);
__IOREG(DTTCT013, 0xFFFF934C, __READ_WRITE, uint32);
__IOREG(DTRSA013, 0xFFFF9350, __READ_WRITE, uint32);
__IOREG(DTRDA013, 0xFFFF9354, __READ_WRITE, uint32);
__IOREG(DTRTC013, 0xFFFF9358, __READ_WRITE, uint32);
__IOREG(DTTCC013, 0xFFFF935C, __READ_WRITE, uint32);
__IOREG(DTFSL013, 0xFFFF9360, __READ_WRITE, uint32);
__IOREG(DTFST013, 0xFFFF9364, __READ, uint32);
__IOREG(DTFSS013, 0xFFFF9368, __READ_WRITE, uint32);
__IOREG(DTFSC013, 0xFFFF936C, __READ_WRITE, uint32);
__IOREG(DTSA014, 0xFFFF9380, __READ_WRITE, uint32);
__IOREG(DTDA014, 0xFFFF9384, __READ_WRITE, uint32);
__IOREG(DTTC014, 0xFFFF9388, __READ_WRITE, uint32);
__IOREG(DTTCT014, 0xFFFF938C, __READ_WRITE, uint32);
__IOREG(DTRSA014, 0xFFFF9390, __READ_WRITE, uint32);
__IOREG(DTRDA014, 0xFFFF9394, __READ_WRITE, uint32);
__IOREG(DTRTC014, 0xFFFF9398, __READ_WRITE, uint32);
__IOREG(DTTCC014, 0xFFFF939C, __READ_WRITE, uint32);
__IOREG(DTFSL014, 0xFFFF93A0, __READ_WRITE, uint32);
__IOREG(DTFST014, 0xFFFF93A4, __READ, uint32);
__IOREG(DTFSS014, 0xFFFF93A8, __READ_WRITE, uint32);
__IOREG(DTFSC014, 0xFFFF93AC, __READ_WRITE, uint32);
__IOREG(DTSA015, 0xFFFF93C0, __READ_WRITE, uint32);
__IOREG(DTDA015, 0xFFFF93C4, __READ_WRITE, uint32);
__IOREG(DTTC015, 0xFFFF93C8, __READ_WRITE, uint32);
__IOREG(DTTCT015, 0xFFFF93CC, __READ_WRITE, uint32);
__IOREG(DTRSA015, 0xFFFF93D0, __READ_WRITE, uint32);
__IOREG(DTRDA015, 0xFFFF93D4, __READ_WRITE, uint32);
__IOREG(DTRTC015, 0xFFFF93D8, __READ_WRITE, uint32);
__IOREG(DTTCC015, 0xFFFF93DC, __READ_WRITE, uint32);
__IOREG(DTFSL015, 0xFFFF93E0, __READ_WRITE, uint32);
__IOREG(DTFST015, 0xFFFF93E4, __READ, uint32);
__IOREG(DTFSS015, 0xFFFF93E8, __READ_WRITE, uint32);
__IOREG(DTFSC015, 0xFFFF93EC, __READ_WRITE, uint32);
__IOREG(DTSA016, 0xFFFF9400, __READ_WRITE, uint32);
__IOREG(DTDA016, 0xFFFF9404, __READ_WRITE, uint32);
__IOREG(DTTC016, 0xFFFF9408, __READ_WRITE, uint32);
__IOREG(DTTCT016, 0xFFFF940C, __READ_WRITE, uint32);
__IOREG(DTRSA016, 0xFFFF9410, __READ_WRITE, uint32);
__IOREG(DTRDA016, 0xFFFF9414, __READ_WRITE, uint32);
__IOREG(DTRTC016, 0xFFFF9418, __READ_WRITE, uint32);
__IOREG(DTTCC016, 0xFFFF941C, __READ_WRITE, uint32);
__IOREG(DTFSL016, 0xFFFF9420, __READ_WRITE, uint32);
__IOREG(DTFST016, 0xFFFF9424, __READ, uint32);
__IOREG(DTFSS016, 0xFFFF9428, __READ_WRITE, uint32);
__IOREG(DTFSC016, 0xFFFF942C, __READ_WRITE, uint32);
__IOREG(DTSA017, 0xFFFF9440, __READ_WRITE, uint32);
__IOREG(DTDA017, 0xFFFF9444, __READ_WRITE, uint32);
__IOREG(DTTC017, 0xFFFF9448, __READ_WRITE, uint32);
__IOREG(DTTCT017, 0xFFFF944C, __READ_WRITE, uint32);
__IOREG(DTRSA017, 0xFFFF9450, __READ_WRITE, uint32);
__IOREG(DTRDA017, 0xFFFF9454, __READ_WRITE, uint32);
__IOREG(DTRTC017, 0xFFFF9458, __READ_WRITE, uint32);
__IOREG(DTTCC017, 0xFFFF945C, __READ_WRITE, uint32);
__IOREG(DTFSL017, 0xFFFF9460, __READ_WRITE, uint32);
__IOREG(DTFST017, 0xFFFF9464, __READ, uint32);
__IOREG(DTFSS017, 0xFFFF9468, __READ_WRITE, uint32);
__IOREG(DTFSC017, 0xFFFF946C, __READ_WRITE, uint32);
__IOREG(DTSA018, 0xFFFF9480, __READ_WRITE, uint32);
__IOREG(DTDA018, 0xFFFF9484, __READ_WRITE, uint32);
__IOREG(DTTC018, 0xFFFF9488, __READ_WRITE, uint32);
__IOREG(DTTCT018, 0xFFFF948C, __READ_WRITE, uint32);
__IOREG(DTRSA018, 0xFFFF9490, __READ_WRITE, uint32);
__IOREG(DTRDA018, 0xFFFF9494, __READ_WRITE, uint32);
__IOREG(DTRTC018, 0xFFFF9498, __READ_WRITE, uint32);
__IOREG(DTTCC018, 0xFFFF949C, __READ_WRITE, uint32);
__IOREG(DTFSL018, 0xFFFF94A0, __READ_WRITE, uint32);
__IOREG(DTFST018, 0xFFFF94A4, __READ, uint32);
__IOREG(DTFSS018, 0xFFFF94A8, __READ_WRITE, uint32);
__IOREG(DTFSC018, 0xFFFF94AC, __READ_WRITE, uint32);
__IOREG(DTSA019, 0xFFFF94C0, __READ_WRITE, uint32);
__IOREG(DTDA019, 0xFFFF94C4, __READ_WRITE, uint32);
__IOREG(DTTC019, 0xFFFF94C8, __READ_WRITE, uint32);
__IOREG(DTTCT019, 0xFFFF94CC, __READ_WRITE, uint32);
__IOREG(DTRSA019, 0xFFFF94D0, __READ_WRITE, uint32);
__IOREG(DTRDA019, 0xFFFF94D4, __READ_WRITE, uint32);
__IOREG(DTRTC019, 0xFFFF94D8, __READ_WRITE, uint32);
__IOREG(DTTCC019, 0xFFFF94DC, __READ_WRITE, uint32);
__IOREG(DTFSL019, 0xFFFF94E0, __READ_WRITE, uint32);
__IOREG(DTFST019, 0xFFFF94E4, __READ, uint32);
__IOREG(DTFSS019, 0xFFFF94E8, __READ_WRITE, uint32);
__IOREG(DTFSC019, 0xFFFF94EC, __READ_WRITE, uint32);
__IOREG(DTSA020, 0xFFFF9500, __READ_WRITE, uint32);
__IOREG(DTDA020, 0xFFFF9504, __READ_WRITE, uint32);
__IOREG(DTTC020, 0xFFFF9508, __READ_WRITE, uint32);
__IOREG(DTTCT020, 0xFFFF950C, __READ_WRITE, uint32);
__IOREG(DTRSA020, 0xFFFF9510, __READ_WRITE, uint32);
__IOREG(DTRDA020, 0xFFFF9514, __READ_WRITE, uint32);
__IOREG(DTRTC020, 0xFFFF9518, __READ_WRITE, uint32);
__IOREG(DTTCC020, 0xFFFF951C, __READ_WRITE, uint32);
__IOREG(DTFSL020, 0xFFFF9520, __READ_WRITE, uint32);
__IOREG(DTFST020, 0xFFFF9524, __READ, uint32);
__IOREG(DTFSS020, 0xFFFF9528, __READ_WRITE, uint32);
__IOREG(DTFSC020, 0xFFFF952C, __READ_WRITE, uint32);
__IOREG(DTSA021, 0xFFFF9540, __READ_WRITE, uint32);
__IOREG(DTDA021, 0xFFFF9544, __READ_WRITE, uint32);
__IOREG(DTTC021, 0xFFFF9548, __READ_WRITE, uint32);
__IOREG(DTTCT021, 0xFFFF954C, __READ_WRITE, uint32);
__IOREG(DTRSA021, 0xFFFF9550, __READ_WRITE, uint32);
__IOREG(DTRDA021, 0xFFFF9554, __READ_WRITE, uint32);
__IOREG(DTRTC021, 0xFFFF9558, __READ_WRITE, uint32);
__IOREG(DTTCC021, 0xFFFF955C, __READ_WRITE, uint32);
__IOREG(DTFSL021, 0xFFFF9560, __READ_WRITE, uint32);
__IOREG(DTFST021, 0xFFFF9564, __READ, uint32);
__IOREG(DTFSS021, 0xFFFF9568, __READ_WRITE, uint32);
__IOREG(DTFSC021, 0xFFFF956C, __READ_WRITE, uint32);
__IOREG(DTSA022, 0xFFFF9580, __READ_WRITE, uint32);
__IOREG(DTDA022, 0xFFFF9584, __READ_WRITE, uint32);
__IOREG(DTTC022, 0xFFFF9588, __READ_WRITE, uint32);
__IOREG(DTTCT022, 0xFFFF958C, __READ_WRITE, uint32);
__IOREG(DTRSA022, 0xFFFF9590, __READ_WRITE, uint32);
__IOREG(DTRDA022, 0xFFFF9594, __READ_WRITE, uint32);
__IOREG(DTRTC022, 0xFFFF9598, __READ_WRITE, uint32);
__IOREG(DTTCC022, 0xFFFF959C, __READ_WRITE, uint32);
__IOREG(DTFSL022, 0xFFFF95A0, __READ_WRITE, uint32);
__IOREG(DTFST022, 0xFFFF95A4, __READ, uint32);
__IOREG(DTFSS022, 0xFFFF95A8, __READ_WRITE, uint32);
__IOREG(DTFSC022, 0xFFFF95AC, __READ_WRITE, uint32);
__IOREG(DTSA023, 0xFFFF95C0, __READ_WRITE, uint32);
__IOREG(DTDA023, 0xFFFF95C4, __READ_WRITE, uint32);
__IOREG(DTTC023, 0xFFFF95C8, __READ_WRITE, uint32);
__IOREG(DTTCT023, 0xFFFF95CC, __READ_WRITE, uint32);
__IOREG(DTRSA023, 0xFFFF95D0, __READ_WRITE, uint32);
__IOREG(DTRDA023, 0xFFFF95D4, __READ_WRITE, uint32);
__IOREG(DTRTC023, 0xFFFF95D8, __READ_WRITE, uint32);
__IOREG(DTTCC023, 0xFFFF95DC, __READ_WRITE, uint32);
__IOREG(DTFSL023, 0xFFFF95E0, __READ_WRITE, uint32);
__IOREG(DTFST023, 0xFFFF95E4, __READ, uint32);
__IOREG(DTFSS023, 0xFFFF95E8, __READ_WRITE, uint32);
__IOREG(DTFSC023, 0xFFFF95EC, __READ_WRITE, uint32);
__IOREG(DTSA024, 0xFFFF9600, __READ_WRITE, uint32);
__IOREG(DTDA024, 0xFFFF9604, __READ_WRITE, uint32);
__IOREG(DTTC024, 0xFFFF9608, __READ_WRITE, uint32);
__IOREG(DTTCT024, 0xFFFF960C, __READ_WRITE, uint32);
__IOREG(DTRSA024, 0xFFFF9610, __READ_WRITE, uint32);
__IOREG(DTRDA024, 0xFFFF9614, __READ_WRITE, uint32);
__IOREG(DTRTC024, 0xFFFF9618, __READ_WRITE, uint32);
__IOREG(DTTCC024, 0xFFFF961C, __READ_WRITE, uint32);
__IOREG(DTFSL024, 0xFFFF9620, __READ_WRITE, uint32);
__IOREG(DTFST024, 0xFFFF9624, __READ, uint32);
__IOREG(DTFSS024, 0xFFFF9628, __READ_WRITE, uint32);
__IOREG(DTFSC024, 0xFFFF962C, __READ_WRITE, uint32);
__IOREG(DTSA025, 0xFFFF9640, __READ_WRITE, uint32);
__IOREG(DTDA025, 0xFFFF9644, __READ_WRITE, uint32);
__IOREG(DTTC025, 0xFFFF9648, __READ_WRITE, uint32);
__IOREG(DTTCT025, 0xFFFF964C, __READ_WRITE, uint32);
__IOREG(DTRSA025, 0xFFFF9650, __READ_WRITE, uint32);
__IOREG(DTRDA025, 0xFFFF9654, __READ_WRITE, uint32);
__IOREG(DTRTC025, 0xFFFF9658, __READ_WRITE, uint32);
__IOREG(DTTCC025, 0xFFFF965C, __READ_WRITE, uint32);
__IOREG(DTFSL025, 0xFFFF9660, __READ_WRITE, uint32);
__IOREG(DTFST025, 0xFFFF9664, __READ, uint32);
__IOREG(DTFSS025, 0xFFFF9668, __READ_WRITE, uint32);
__IOREG(DTFSC025, 0xFFFF966C, __READ_WRITE, uint32);
__IOREG(DTSA026, 0xFFFF9680, __READ_WRITE, uint32);
__IOREG(DTDA026, 0xFFFF9684, __READ_WRITE, uint32);
__IOREG(DTTC026, 0xFFFF9688, __READ_WRITE, uint32);
__IOREG(DTTCT026, 0xFFFF968C, __READ_WRITE, uint32);
__IOREG(DTRSA026, 0xFFFF9690, __READ_WRITE, uint32);
__IOREG(DTRDA026, 0xFFFF9694, __READ_WRITE, uint32);
__IOREG(DTRTC026, 0xFFFF9698, __READ_WRITE, uint32);
__IOREG(DTTCC026, 0xFFFF969C, __READ_WRITE, uint32);
__IOREG(DTFSL026, 0xFFFF96A0, __READ_WRITE, uint32);
__IOREG(DTFST026, 0xFFFF96A4, __READ, uint32);
__IOREG(DTFSS026, 0xFFFF96A8, __READ_WRITE, uint32);
__IOREG(DTFSC026, 0xFFFF96AC, __READ_WRITE, uint32);
__IOREG(DTSA027, 0xFFFF96C0, __READ_WRITE, uint32);
__IOREG(DTDA027, 0xFFFF96C4, __READ_WRITE, uint32);
__IOREG(DTTC027, 0xFFFF96C8, __READ_WRITE, uint32);
__IOREG(DTTCT027, 0xFFFF96CC, __READ_WRITE, uint32);
__IOREG(DTRSA027, 0xFFFF96D0, __READ_WRITE, uint32);
__IOREG(DTRDA027, 0xFFFF96D4, __READ_WRITE, uint32);
__IOREG(DTRTC027, 0xFFFF96D8, __READ_WRITE, uint32);
__IOREG(DTTCC027, 0xFFFF96DC, __READ_WRITE, uint32);
__IOREG(DTFSL027, 0xFFFF96E0, __READ_WRITE, uint32);
__IOREG(DTFST027, 0xFFFF96E4, __READ, uint32);
__IOREG(DTFSS027, 0xFFFF96E8, __READ_WRITE, uint32);
__IOREG(DTFSC027, 0xFFFF96EC, __READ_WRITE, uint32);
__IOREG(DTSA028, 0xFFFF9700, __READ_WRITE, uint32);
__IOREG(DTDA028, 0xFFFF9704, __READ_WRITE, uint32);
__IOREG(DTTC028, 0xFFFF9708, __READ_WRITE, uint32);
__IOREG(DTTCT028, 0xFFFF970C, __READ_WRITE, uint32);
__IOREG(DTRSA028, 0xFFFF9710, __READ_WRITE, uint32);
__IOREG(DTRDA028, 0xFFFF9714, __READ_WRITE, uint32);
__IOREG(DTRTC028, 0xFFFF9718, __READ_WRITE, uint32);
__IOREG(DTTCC028, 0xFFFF971C, __READ_WRITE, uint32);
__IOREG(DTFSL028, 0xFFFF9720, __READ_WRITE, uint32);
__IOREG(DTFST028, 0xFFFF9724, __READ, uint32);
__IOREG(DTFSS028, 0xFFFF9728, __READ_WRITE, uint32);
__IOREG(DTFSC028, 0xFFFF972C, __READ_WRITE, uint32);
__IOREG(DTSA029, 0xFFFF9740, __READ_WRITE, uint32);
__IOREG(DTDA029, 0xFFFF9744, __READ_WRITE, uint32);
__IOREG(DTTC029, 0xFFFF9748, __READ_WRITE, uint32);
__IOREG(DTTCT029, 0xFFFF974C, __READ_WRITE, uint32);
__IOREG(DTRSA029, 0xFFFF9750, __READ_WRITE, uint32);
__IOREG(DTRDA029, 0xFFFF9754, __READ_WRITE, uint32);
__IOREG(DTRTC029, 0xFFFF9758, __READ_WRITE, uint32);
__IOREG(DTTCC029, 0xFFFF975C, __READ_WRITE, uint32);
__IOREG(DTFSL029, 0xFFFF9760, __READ_WRITE, uint32);
__IOREG(DTFST029, 0xFFFF9764, __READ, uint32);
__IOREG(DTFSS029, 0xFFFF9768, __READ_WRITE, uint32);
__IOREG(DTFSC029, 0xFFFF976C, __READ_WRITE, uint32);
__IOREG(DTSA030, 0xFFFF9780, __READ_WRITE, uint32);
__IOREG(DTDA030, 0xFFFF9784, __READ_WRITE, uint32);
__IOREG(DTTC030, 0xFFFF9788, __READ_WRITE, uint32);
__IOREG(DTTCT030, 0xFFFF978C, __READ_WRITE, uint32);
__IOREG(DTRSA030, 0xFFFF9790, __READ_WRITE, uint32);
__IOREG(DTRDA030, 0xFFFF9794, __READ_WRITE, uint32);
__IOREG(DTRTC030, 0xFFFF9798, __READ_WRITE, uint32);
__IOREG(DTTCC030, 0xFFFF979C, __READ_WRITE, uint32);
__IOREG(DTFSL030, 0xFFFF97A0, __READ_WRITE, uint32);
__IOREG(DTFST030, 0xFFFF97A4, __READ, uint32);
__IOREG(DTFSS030, 0xFFFF97A8, __READ_WRITE, uint32);
__IOREG(DTFSC030, 0xFFFF97AC, __READ_WRITE, uint32);
__IOREG(DTSA031, 0xFFFF97C0, __READ_WRITE, uint32);
__IOREG(DTDA031, 0xFFFF97C4, __READ_WRITE, uint32);
__IOREG(DTTC031, 0xFFFF97C8, __READ_WRITE, uint32);
__IOREG(DTTCT031, 0xFFFF97CC, __READ_WRITE, uint32);
__IOREG(DTRSA031, 0xFFFF97D0, __READ_WRITE, uint32);
__IOREG(DTRDA031, 0xFFFF97D4, __READ_WRITE, uint32);
__IOREG(DTRTC031, 0xFFFF97D8, __READ_WRITE, uint32);
__IOREG(DTTCC031, 0xFFFF97DC, __READ_WRITE, uint32);
__IOREG(DTFSL031, 0xFFFF97E0, __READ_WRITE, uint32);
__IOREG(DTFST031, 0xFFFF97E4, __READ, uint32);
__IOREG(DTFSS031, 0xFFFF97E8, __READ_WRITE, uint32);
__IOREG(DTFSC031, 0xFFFF97EC, __READ_WRITE, uint32);
__IOREG(DTSA032, 0xFFFF9800, __READ_WRITE, uint32);
__IOREG(DTDA032, 0xFFFF9804, __READ_WRITE, uint32);
__IOREG(DTTC032, 0xFFFF9808, __READ_WRITE, uint32);
__IOREG(DTTCT032, 0xFFFF980C, __READ_WRITE, uint32);
__IOREG(DTRSA032, 0xFFFF9810, __READ_WRITE, uint32);
__IOREG(DTRDA032, 0xFFFF9814, __READ_WRITE, uint32);
__IOREG(DTRTC032, 0xFFFF9818, __READ_WRITE, uint32);
__IOREG(DTTCC032, 0xFFFF981C, __READ_WRITE, uint32);
__IOREG(DTFSL032, 0xFFFF9820, __READ_WRITE, uint32);
__IOREG(DTFST032, 0xFFFF9824, __READ, uint32);
__IOREG(DTFSS032, 0xFFFF9828, __READ_WRITE, uint32);
__IOREG(DTFSC032, 0xFFFF982C, __READ_WRITE, uint32);
__IOREG(DTSA033, 0xFFFF9840, __READ_WRITE, uint32);
__IOREG(DTDA033, 0xFFFF9844, __READ_WRITE, uint32);
__IOREG(DTTC033, 0xFFFF9848, __READ_WRITE, uint32);
__IOREG(DTTCT033, 0xFFFF984C, __READ_WRITE, uint32);
__IOREG(DTRSA033, 0xFFFF9850, __READ_WRITE, uint32);
__IOREG(DTRDA033, 0xFFFF9854, __READ_WRITE, uint32);
__IOREG(DTRTC033, 0xFFFF9858, __READ_WRITE, uint32);
__IOREG(DTTCC033, 0xFFFF985C, __READ_WRITE, uint32);
__IOREG(DTFSL033, 0xFFFF9860, __READ_WRITE, uint32);
__IOREG(DTFST033, 0xFFFF9864, __READ, uint32);
__IOREG(DTFSS033, 0xFFFF9868, __READ_WRITE, uint32);
__IOREG(DTFSC033, 0xFFFF986C, __READ_WRITE, uint32);
__IOREG(DTSA034, 0xFFFF9880, __READ_WRITE, uint32);
__IOREG(DTDA034, 0xFFFF9884, __READ_WRITE, uint32);
__IOREG(DTTC034, 0xFFFF9888, __READ_WRITE, uint32);
__IOREG(DTTCT034, 0xFFFF988C, __READ_WRITE, uint32);
__IOREG(DTRSA034, 0xFFFF9890, __READ_WRITE, uint32);
__IOREG(DTRDA034, 0xFFFF9894, __READ_WRITE, uint32);
__IOREG(DTRTC034, 0xFFFF9898, __READ_WRITE, uint32);
__IOREG(DTTCC034, 0xFFFF989C, __READ_WRITE, uint32);
__IOREG(DTFSL034, 0xFFFF98A0, __READ_WRITE, uint32);
__IOREG(DTFST034, 0xFFFF98A4, __READ, uint32);
__IOREG(DTFSS034, 0xFFFF98A8, __READ_WRITE, uint32);
__IOREG(DTFSC034, 0xFFFF98AC, __READ_WRITE, uint32);
__IOREG(DTSA035, 0xFFFF98C0, __READ_WRITE, uint32);
__IOREG(DTDA035, 0xFFFF98C4, __READ_WRITE, uint32);
__IOREG(DTTC035, 0xFFFF98C8, __READ_WRITE, uint32);
__IOREG(DTTCT035, 0xFFFF98CC, __READ_WRITE, uint32);
__IOREG(DTRSA035, 0xFFFF98D0, __READ_WRITE, uint32);
__IOREG(DTRDA035, 0xFFFF98D4, __READ_WRITE, uint32);
__IOREG(DTRTC035, 0xFFFF98D8, __READ_WRITE, uint32);
__IOREG(DTTCC035, 0xFFFF98DC, __READ_WRITE, uint32);
__IOREG(DTFSL035, 0xFFFF98E0, __READ_WRITE, uint32);
__IOREG(DTFST035, 0xFFFF98E4, __READ, uint32);
__IOREG(DTFSS035, 0xFFFF98E8, __READ_WRITE, uint32);
__IOREG(DTFSC035, 0xFFFF98EC, __READ_WRITE, uint32);
__IOREG(DTSA036, 0xFFFF9900, __READ_WRITE, uint32);
__IOREG(DTDA036, 0xFFFF9904, __READ_WRITE, uint32);
__IOREG(DTTC036, 0xFFFF9908, __READ_WRITE, uint32);
__IOREG(DTTCT036, 0xFFFF990C, __READ_WRITE, uint32);
__IOREG(DTRSA036, 0xFFFF9910, __READ_WRITE, uint32);
__IOREG(DTRDA036, 0xFFFF9914, __READ_WRITE, uint32);
__IOREG(DTRTC036, 0xFFFF9918, __READ_WRITE, uint32);
__IOREG(DTTCC036, 0xFFFF991C, __READ_WRITE, uint32);
__IOREG(DTFSL036, 0xFFFF9920, __READ_WRITE, uint32);
__IOREG(DTFST036, 0xFFFF9924, __READ, uint32);
__IOREG(DTFSS036, 0xFFFF9928, __READ_WRITE, uint32);
__IOREG(DTFSC036, 0xFFFF992C, __READ_WRITE, uint32);
__IOREG(DTSA037, 0xFFFF9940, __READ_WRITE, uint32);
__IOREG(DTDA037, 0xFFFF9944, __READ_WRITE, uint32);
__IOREG(DTTC037, 0xFFFF9948, __READ_WRITE, uint32);
__IOREG(DTTCT037, 0xFFFF994C, __READ_WRITE, uint32);
__IOREG(DTRSA037, 0xFFFF9950, __READ_WRITE, uint32);
__IOREG(DTRDA037, 0xFFFF9954, __READ_WRITE, uint32);
__IOREG(DTRTC037, 0xFFFF9958, __READ_WRITE, uint32);
__IOREG(DTTCC037, 0xFFFF995C, __READ_WRITE, uint32);
__IOREG(DTFSL037, 0xFFFF9960, __READ_WRITE, uint32);
__IOREG(DTFST037, 0xFFFF9964, __READ, uint32);
__IOREG(DTFSS037, 0xFFFF9968, __READ_WRITE, uint32);
__IOREG(DTFSC037, 0xFFFF996C, __READ_WRITE, uint32);
__IOREG(DTSA038, 0xFFFF9980, __READ_WRITE, uint32);
__IOREG(DTDA038, 0xFFFF9984, __READ_WRITE, uint32);
__IOREG(DTTC038, 0xFFFF9988, __READ_WRITE, uint32);
__IOREG(DTTCT038, 0xFFFF998C, __READ_WRITE, uint32);
__IOREG(DTRSA038, 0xFFFF9990, __READ_WRITE, uint32);
__IOREG(DTRDA038, 0xFFFF9994, __READ_WRITE, uint32);
__IOREG(DTRTC038, 0xFFFF9998, __READ_WRITE, uint32);
__IOREG(DTTCC038, 0xFFFF999C, __READ_WRITE, uint32);
__IOREG(DTFSL038, 0xFFFF99A0, __READ_WRITE, uint32);
__IOREG(DTFST038, 0xFFFF99A4, __READ, uint32);
__IOREG(DTFSS038, 0xFFFF99A8, __READ_WRITE, uint32);
__IOREG(DTFSC038, 0xFFFF99AC, __READ_WRITE, uint32);
__IOREG(DTSA039, 0xFFFF99C0, __READ_WRITE, uint32);
__IOREG(DTDA039, 0xFFFF99C4, __READ_WRITE, uint32);
__IOREG(DTTC039, 0xFFFF99C8, __READ_WRITE, uint32);
__IOREG(DTTCT039, 0xFFFF99CC, __READ_WRITE, uint32);
__IOREG(DTRSA039, 0xFFFF99D0, __READ_WRITE, uint32);
__IOREG(DTRDA039, 0xFFFF99D4, __READ_WRITE, uint32);
__IOREG(DTRTC039, 0xFFFF99D8, __READ_WRITE, uint32);
__IOREG(DTTCC039, 0xFFFF99DC, __READ_WRITE, uint32);
__IOREG(DTFSL039, 0xFFFF99E0, __READ_WRITE, uint32);
__IOREG(DTFST039, 0xFFFF99E4, __READ, uint32);
__IOREG(DTFSS039, 0xFFFF99E8, __READ_WRITE, uint32);
__IOREG(DTFSC039, 0xFFFF99EC, __READ_WRITE, uint32);
__IOREG(DTSA040, 0xFFFF9A00, __READ_WRITE, uint32);
__IOREG(DTDA040, 0xFFFF9A04, __READ_WRITE, uint32);
__IOREG(DTTC040, 0xFFFF9A08, __READ_WRITE, uint32);
__IOREG(DTTCT040, 0xFFFF9A0C, __READ_WRITE, uint32);
__IOREG(DTRSA040, 0xFFFF9A10, __READ_WRITE, uint32);
__IOREG(DTRDA040, 0xFFFF9A14, __READ_WRITE, uint32);
__IOREG(DTRTC040, 0xFFFF9A18, __READ_WRITE, uint32);
__IOREG(DTTCC040, 0xFFFF9A1C, __READ_WRITE, uint32);
__IOREG(DTFSL040, 0xFFFF9A20, __READ_WRITE, uint32);
__IOREG(DTFST040, 0xFFFF9A24, __READ, uint32);
__IOREG(DTFSS040, 0xFFFF9A28, __READ_WRITE, uint32);
__IOREG(DTFSC040, 0xFFFF9A2C, __READ_WRITE, uint32);
__IOREG(DTSA041, 0xFFFF9A40, __READ_WRITE, uint32);
__IOREG(DTDA041, 0xFFFF9A44, __READ_WRITE, uint32);
__IOREG(DTTC041, 0xFFFF9A48, __READ_WRITE, uint32);
__IOREG(DTTCT041, 0xFFFF9A4C, __READ_WRITE, uint32);
__IOREG(DTRSA041, 0xFFFF9A50, __READ_WRITE, uint32);
__IOREG(DTRDA041, 0xFFFF9A54, __READ_WRITE, uint32);
__IOREG(DTRTC041, 0xFFFF9A58, __READ_WRITE, uint32);
__IOREG(DTTCC041, 0xFFFF9A5C, __READ_WRITE, uint32);
__IOREG(DTFSL041, 0xFFFF9A60, __READ_WRITE, uint32);
__IOREG(DTFST041, 0xFFFF9A64, __READ, uint32);
__IOREG(DTFSS041, 0xFFFF9A68, __READ_WRITE, uint32);
__IOREG(DTFSC041, 0xFFFF9A6C, __READ_WRITE, uint32);
__IOREG(DTSA042, 0xFFFF9A80, __READ_WRITE, uint32);
__IOREG(DTDA042, 0xFFFF9A84, __READ_WRITE, uint32);
__IOREG(DTTC042, 0xFFFF9A88, __READ_WRITE, uint32);
__IOREG(DTTCT042, 0xFFFF9A8C, __READ_WRITE, uint32);
__IOREG(DTRSA042, 0xFFFF9A90, __READ_WRITE, uint32);
__IOREG(DTRDA042, 0xFFFF9A94, __READ_WRITE, uint32);
__IOREG(DTRTC042, 0xFFFF9A98, __READ_WRITE, uint32);
__IOREG(DTTCC042, 0xFFFF9A9C, __READ_WRITE, uint32);
__IOREG(DTFSL042, 0xFFFF9AA0, __READ_WRITE, uint32);
__IOREG(DTFST042, 0xFFFF9AA4, __READ, uint32);
__IOREG(DTFSS042, 0xFFFF9AA8, __READ_WRITE, uint32);
__IOREG(DTFSC042, 0xFFFF9AAC, __READ_WRITE, uint32);
__IOREG(DTSA043, 0xFFFF9AC0, __READ_WRITE, uint32);
__IOREG(DTDA043, 0xFFFF9AC4, __READ_WRITE, uint32);
__IOREG(DTTC043, 0xFFFF9AC8, __READ_WRITE, uint32);
__IOREG(DTTCT043, 0xFFFF9ACC, __READ_WRITE, uint32);
__IOREG(DTRSA043, 0xFFFF9AD0, __READ_WRITE, uint32);
__IOREG(DTRDA043, 0xFFFF9AD4, __READ_WRITE, uint32);
__IOREG(DTRTC043, 0xFFFF9AD8, __READ_WRITE, uint32);
__IOREG(DTTCC043, 0xFFFF9ADC, __READ_WRITE, uint32);
__IOREG(DTFSL043, 0xFFFF9AE0, __READ_WRITE, uint32);
__IOREG(DTFST043, 0xFFFF9AE4, __READ, uint32);
__IOREG(DTFSS043, 0xFFFF9AE8, __READ_WRITE, uint32);
__IOREG(DTFSC043, 0xFFFF9AEC, __READ_WRITE, uint32);
__IOREG(DTSA044, 0xFFFF9B00, __READ_WRITE, uint32);
__IOREG(DTDA044, 0xFFFF9B04, __READ_WRITE, uint32);
__IOREG(DTTC044, 0xFFFF9B08, __READ_WRITE, uint32);
__IOREG(DTTCT044, 0xFFFF9B0C, __READ_WRITE, uint32);
__IOREG(DTRSA044, 0xFFFF9B10, __READ_WRITE, uint32);
__IOREG(DTRDA044, 0xFFFF9B14, __READ_WRITE, uint32);
__IOREG(DTRTC044, 0xFFFF9B18, __READ_WRITE, uint32);
__IOREG(DTTCC044, 0xFFFF9B1C, __READ_WRITE, uint32);
__IOREG(DTFSL044, 0xFFFF9B20, __READ_WRITE, uint32);
__IOREG(DTFST044, 0xFFFF9B24, __READ, uint32);
__IOREG(DTFSS044, 0xFFFF9B28, __READ_WRITE, uint32);
__IOREG(DTFSC044, 0xFFFF9B2C, __READ_WRITE, uint32);
__IOREG(DTSA045, 0xFFFF9B40, __READ_WRITE, uint32);
__IOREG(DTDA045, 0xFFFF9B44, __READ_WRITE, uint32);
__IOREG(DTTC045, 0xFFFF9B48, __READ_WRITE, uint32);
__IOREG(DTTCT045, 0xFFFF9B4C, __READ_WRITE, uint32);
__IOREG(DTRSA045, 0xFFFF9B50, __READ_WRITE, uint32);
__IOREG(DTRDA045, 0xFFFF9B54, __READ_WRITE, uint32);
__IOREG(DTRTC045, 0xFFFF9B58, __READ_WRITE, uint32);
__IOREG(DTTCC045, 0xFFFF9B5C, __READ_WRITE, uint32);
__IOREG(DTFSL045, 0xFFFF9B60, __READ_WRITE, uint32);
__IOREG(DTFST045, 0xFFFF9B64, __READ, uint32);
__IOREG(DTFSS045, 0xFFFF9B68, __READ_WRITE, uint32);
__IOREG(DTFSC045, 0xFFFF9B6C, __READ_WRITE, uint32);
__IOREG(DTSA046, 0xFFFF9B80, __READ_WRITE, uint32);
__IOREG(DTDA046, 0xFFFF9B84, __READ_WRITE, uint32);
__IOREG(DTTC046, 0xFFFF9B88, __READ_WRITE, uint32);
__IOREG(DTTCT046, 0xFFFF9B8C, __READ_WRITE, uint32);
__IOREG(DTRSA046, 0xFFFF9B90, __READ_WRITE, uint32);
__IOREG(DTRDA046, 0xFFFF9B94, __READ_WRITE, uint32);
__IOREG(DTRTC046, 0xFFFF9B98, __READ_WRITE, uint32);
__IOREG(DTTCC046, 0xFFFF9B9C, __READ_WRITE, uint32);
__IOREG(DTFSL046, 0xFFFF9BA0, __READ_WRITE, uint32);
__IOREG(DTFST046, 0xFFFF9BA4, __READ, uint32);
__IOREG(DTFSS046, 0xFFFF9BA8, __READ_WRITE, uint32);
__IOREG(DTFSC046, 0xFFFF9BAC, __READ_WRITE, uint32);
__IOREG(DTSA047, 0xFFFF9BC0, __READ_WRITE, uint32);
__IOREG(DTDA047, 0xFFFF9BC4, __READ_WRITE, uint32);
__IOREG(DTTC047, 0xFFFF9BC8, __READ_WRITE, uint32);
__IOREG(DTTCT047, 0xFFFF9BCC, __READ_WRITE, uint32);
__IOREG(DTRSA047, 0xFFFF9BD0, __READ_WRITE, uint32);
__IOREG(DTRDA047, 0xFFFF9BD4, __READ_WRITE, uint32);
__IOREG(DTRTC047, 0xFFFF9BD8, __READ_WRITE, uint32);
__IOREG(DTTCC047, 0xFFFF9BDC, __READ_WRITE, uint32);
__IOREG(DTFSL047, 0xFFFF9BE0, __READ_WRITE, uint32);
__IOREG(DTFST047, 0xFFFF9BE4, __READ, uint32);
__IOREG(DTFSS047, 0xFFFF9BE8, __READ_WRITE, uint32);
__IOREG(DTFSC047, 0xFFFF9BEC, __READ_WRITE, uint32);
__IOREG(DTSA048, 0xFFFF9C00, __READ_WRITE, uint32);
__IOREG(DTDA048, 0xFFFF9C04, __READ_WRITE, uint32);
__IOREG(DTTC048, 0xFFFF9C08, __READ_WRITE, uint32);
__IOREG(DTTCT048, 0xFFFF9C0C, __READ_WRITE, uint32);
__IOREG(DTRSA048, 0xFFFF9C10, __READ_WRITE, uint32);
__IOREG(DTRDA048, 0xFFFF9C14, __READ_WRITE, uint32);
__IOREG(DTRTC048, 0xFFFF9C18, __READ_WRITE, uint32);
__IOREG(DTTCC048, 0xFFFF9C1C, __READ_WRITE, uint32);
__IOREG(DTFSL048, 0xFFFF9C20, __READ_WRITE, uint32);
__IOREG(DTFST048, 0xFFFF9C24, __READ, uint32);
__IOREG(DTFSS048, 0xFFFF9C28, __READ_WRITE, uint32);
__IOREG(DTFSC048, 0xFFFF9C2C, __READ_WRITE, uint32);
__IOREG(DTSA049, 0xFFFF9C40, __READ_WRITE, uint32);
__IOREG(DTDA049, 0xFFFF9C44, __READ_WRITE, uint32);
__IOREG(DTTC049, 0xFFFF9C48, __READ_WRITE, uint32);
__IOREG(DTTCT049, 0xFFFF9C4C, __READ_WRITE, uint32);
__IOREG(DTRSA049, 0xFFFF9C50, __READ_WRITE, uint32);
__IOREG(DTRDA049, 0xFFFF9C54, __READ_WRITE, uint32);
__IOREG(DTRTC049, 0xFFFF9C58, __READ_WRITE, uint32);
__IOREG(DTTCC049, 0xFFFF9C5C, __READ_WRITE, uint32);
__IOREG(DTFSL049, 0xFFFF9C60, __READ_WRITE, uint32);
__IOREG(DTFST049, 0xFFFF9C64, __READ, uint32);
__IOREG(DTFSS049, 0xFFFF9C68, __READ_WRITE, uint32);
__IOREG(DTFSC049, 0xFFFF9C6C, __READ_WRITE, uint32);
__IOREG(DTSA050, 0xFFFF9C80, __READ_WRITE, uint32);
__IOREG(DTDA050, 0xFFFF9C84, __READ_WRITE, uint32);
__IOREG(DTTC050, 0xFFFF9C88, __READ_WRITE, uint32);
__IOREG(DTTCT050, 0xFFFF9C8C, __READ_WRITE, uint32);
__IOREG(DTRSA050, 0xFFFF9C90, __READ_WRITE, uint32);
__IOREG(DTRDA050, 0xFFFF9C94, __READ_WRITE, uint32);
__IOREG(DTRTC050, 0xFFFF9C98, __READ_WRITE, uint32);
__IOREG(DTTCC050, 0xFFFF9C9C, __READ_WRITE, uint32);
__IOREG(DTFSL050, 0xFFFF9CA0, __READ_WRITE, uint32);
__IOREG(DTFST050, 0xFFFF9CA4, __READ, uint32);
__IOREG(DTFSS050, 0xFFFF9CA8, __READ_WRITE, uint32);
__IOREG(DTFSC050, 0xFFFF9CAC, __READ_WRITE, uint32);
__IOREG(DTSA051, 0xFFFF9CC0, __READ_WRITE, uint32);
__IOREG(DTDA051, 0xFFFF9CC4, __READ_WRITE, uint32);
__IOREG(DTTC051, 0xFFFF9CC8, __READ_WRITE, uint32);
__IOREG(DTTCT051, 0xFFFF9CCC, __READ_WRITE, uint32);
__IOREG(DTRSA051, 0xFFFF9CD0, __READ_WRITE, uint32);
__IOREG(DTRDA051, 0xFFFF9CD4, __READ_WRITE, uint32);
__IOREG(DTRTC051, 0xFFFF9CD8, __READ_WRITE, uint32);
__IOREG(DTTCC051, 0xFFFF9CDC, __READ_WRITE, uint32);
__IOREG(DTFSL051, 0xFFFF9CE0, __READ_WRITE, uint32);
__IOREG(DTFST051, 0xFFFF9CE4, __READ, uint32);
__IOREG(DTFSS051, 0xFFFF9CE8, __READ_WRITE, uint32);
__IOREG(DTFSC051, 0xFFFF9CEC, __READ_WRITE, uint32);
__IOREG(DTSA052, 0xFFFF9D00, __READ_WRITE, uint32);
__IOREG(DTDA052, 0xFFFF9D04, __READ_WRITE, uint32);
__IOREG(DTTC052, 0xFFFF9D08, __READ_WRITE, uint32);
__IOREG(DTTCT052, 0xFFFF9D0C, __READ_WRITE, uint32);
__IOREG(DTRSA052, 0xFFFF9D10, __READ_WRITE, uint32);
__IOREG(DTRDA052, 0xFFFF9D14, __READ_WRITE, uint32);
__IOREG(DTRTC052, 0xFFFF9D18, __READ_WRITE, uint32);
__IOREG(DTTCC052, 0xFFFF9D1C, __READ_WRITE, uint32);
__IOREG(DTFSL052, 0xFFFF9D20, __READ_WRITE, uint32);
__IOREG(DTFST052, 0xFFFF9D24, __READ, uint32);
__IOREG(DTFSS052, 0xFFFF9D28, __READ_WRITE, uint32);
__IOREG(DTFSC052, 0xFFFF9D2C, __READ_WRITE, uint32);
__IOREG(DTSA053, 0xFFFF9D40, __READ_WRITE, uint32);
__IOREG(DTDA053, 0xFFFF9D44, __READ_WRITE, uint32);
__IOREG(DTTC053, 0xFFFF9D48, __READ_WRITE, uint32);
__IOREG(DTTCT053, 0xFFFF9D4C, __READ_WRITE, uint32);
__IOREG(DTRSA053, 0xFFFF9D50, __READ_WRITE, uint32);
__IOREG(DTRDA053, 0xFFFF9D54, __READ_WRITE, uint32);
__IOREG(DTRTC053, 0xFFFF9D58, __READ_WRITE, uint32);
__IOREG(DTTCC053, 0xFFFF9D5C, __READ_WRITE, uint32);
__IOREG(DTFSL053, 0xFFFF9D60, __READ_WRITE, uint32);
__IOREG(DTFST053, 0xFFFF9D64, __READ, uint32);
__IOREG(DTFSS053, 0xFFFF9D68, __READ_WRITE, uint32);
__IOREG(DTFSC053, 0xFFFF9D6C, __READ_WRITE, uint32);
__IOREG(DTSA054, 0xFFFF9D80, __READ_WRITE, uint32);
__IOREG(DTDA054, 0xFFFF9D84, __READ_WRITE, uint32);
__IOREG(DTTC054, 0xFFFF9D88, __READ_WRITE, uint32);
__IOREG(DTTCT054, 0xFFFF9D8C, __READ_WRITE, uint32);
__IOREG(DTRSA054, 0xFFFF9D90, __READ_WRITE, uint32);
__IOREG(DTRDA054, 0xFFFF9D94, __READ_WRITE, uint32);
__IOREG(DTRTC054, 0xFFFF9D98, __READ_WRITE, uint32);
__IOREG(DTTCC054, 0xFFFF9D9C, __READ_WRITE, uint32);
__IOREG(DTFSL054, 0xFFFF9DA0, __READ_WRITE, uint32);
__IOREG(DTFST054, 0xFFFF9DA4, __READ, uint32);
__IOREG(DTFSS054, 0xFFFF9DA8, __READ_WRITE, uint32);
__IOREG(DTFSC054, 0xFFFF9DAC, __READ_WRITE, uint32);
__IOREG(DTSA055, 0xFFFF9DC0, __READ_WRITE, uint32);
__IOREG(DTDA055, 0xFFFF9DC4, __READ_WRITE, uint32);
__IOREG(DTTC055, 0xFFFF9DC8, __READ_WRITE, uint32);
__IOREG(DTTCT055, 0xFFFF9DCC, __READ_WRITE, uint32);
__IOREG(DTRSA055, 0xFFFF9DD0, __READ_WRITE, uint32);
__IOREG(DTRDA055, 0xFFFF9DD4, __READ_WRITE, uint32);
__IOREG(DTRTC055, 0xFFFF9DD8, __READ_WRITE, uint32);
__IOREG(DTTCC055, 0xFFFF9DDC, __READ_WRITE, uint32);
__IOREG(DTFSL055, 0xFFFF9DE0, __READ_WRITE, uint32);
__IOREG(DTFST055, 0xFFFF9DE4, __READ, uint32);
__IOREG(DTFSS055, 0xFFFF9DE8, __READ_WRITE, uint32);
__IOREG(DTFSC055, 0xFFFF9DEC, __READ_WRITE, uint32);
__IOREG(DTSA056, 0xFFFF9E00, __READ_WRITE, uint32);
__IOREG(DTDA056, 0xFFFF9E04, __READ_WRITE, uint32);
__IOREG(DTTC056, 0xFFFF9E08, __READ_WRITE, uint32);
__IOREG(DTTCT056, 0xFFFF9E0C, __READ_WRITE, uint32);
__IOREG(DTRSA056, 0xFFFF9E10, __READ_WRITE, uint32);
__IOREG(DTRDA056, 0xFFFF9E14, __READ_WRITE, uint32);
__IOREG(DTRTC056, 0xFFFF9E18, __READ_WRITE, uint32);
__IOREG(DTTCC056, 0xFFFF9E1C, __READ_WRITE, uint32);
__IOREG(DTFSL056, 0xFFFF9E20, __READ_WRITE, uint32);
__IOREG(DTFST056, 0xFFFF9E24, __READ, uint32);
__IOREG(DTFSS056, 0xFFFF9E28, __READ_WRITE, uint32);
__IOREG(DTFSC056, 0xFFFF9E2C, __READ_WRITE, uint32);
__IOREG(DTSA057, 0xFFFF9E40, __READ_WRITE, uint32);
__IOREG(DTDA057, 0xFFFF9E44, __READ_WRITE, uint32);
__IOREG(DTTC057, 0xFFFF9E48, __READ_WRITE, uint32);
__IOREG(DTTCT057, 0xFFFF9E4C, __READ_WRITE, uint32);
__IOREG(DTRSA057, 0xFFFF9E50, __READ_WRITE, uint32);
__IOREG(DTRDA057, 0xFFFF9E54, __READ_WRITE, uint32);
__IOREG(DTRTC057, 0xFFFF9E58, __READ_WRITE, uint32);
__IOREG(DTTCC057, 0xFFFF9E5C, __READ_WRITE, uint32);
__IOREG(DTFSL057, 0xFFFF9E60, __READ_WRITE, uint32);
__IOREG(DTFST057, 0xFFFF9E64, __READ, uint32);
__IOREG(DTFSS057, 0xFFFF9E68, __READ_WRITE, uint32);
__IOREG(DTFSC057, 0xFFFF9E6C, __READ_WRITE, uint32);
__IOREG(DTSA058, 0xFFFF9E80, __READ_WRITE, uint32);
__IOREG(DTDA058, 0xFFFF9E84, __READ_WRITE, uint32);
__IOREG(DTTC058, 0xFFFF9E88, __READ_WRITE, uint32);
__IOREG(DTTCT058, 0xFFFF9E8C, __READ_WRITE, uint32);
__IOREG(DTRSA058, 0xFFFF9E90, __READ_WRITE, uint32);
__IOREG(DTRDA058, 0xFFFF9E94, __READ_WRITE, uint32);
__IOREG(DTRTC058, 0xFFFF9E98, __READ_WRITE, uint32);
__IOREG(DTTCC058, 0xFFFF9E9C, __READ_WRITE, uint32);
__IOREG(DTFSL058, 0xFFFF9EA0, __READ_WRITE, uint32);
__IOREG(DTFST058, 0xFFFF9EA4, __READ, uint32);
__IOREG(DTFSS058, 0xFFFF9EA8, __READ_WRITE, uint32);
__IOREG(DTFSC058, 0xFFFF9EAC, __READ_WRITE, uint32);
__IOREG(DTSA059, 0xFFFF9EC0, __READ_WRITE, uint32);
__IOREG(DTDA059, 0xFFFF9EC4, __READ_WRITE, uint32);
__IOREG(DTTC059, 0xFFFF9EC8, __READ_WRITE, uint32);
__IOREG(DTTCT059, 0xFFFF9ECC, __READ_WRITE, uint32);
__IOREG(DTRSA059, 0xFFFF9ED0, __READ_WRITE, uint32);
__IOREG(DTRDA059, 0xFFFF9ED4, __READ_WRITE, uint32);
__IOREG(DTRTC059, 0xFFFF9ED8, __READ_WRITE, uint32);
__IOREG(DTTCC059, 0xFFFF9EDC, __READ_WRITE, uint32);
__IOREG(DTFSL059, 0xFFFF9EE0, __READ_WRITE, uint32);
__IOREG(DTFST059, 0xFFFF9EE4, __READ, uint32);
__IOREG(DTFSS059, 0xFFFF9EE8, __READ_WRITE, uint32);
__IOREG(DTFSC059, 0xFFFF9EEC, __READ_WRITE, uint32);
__IOREG(DTSA060, 0xFFFF9F00, __READ_WRITE, uint32);
__IOREG(DTDA060, 0xFFFF9F04, __READ_WRITE, uint32);
__IOREG(DTTC060, 0xFFFF9F08, __READ_WRITE, uint32);
__IOREG(DTTCT060, 0xFFFF9F0C, __READ_WRITE, uint32);
__IOREG(DTRSA060, 0xFFFF9F10, __READ_WRITE, uint32);
__IOREG(DTRDA060, 0xFFFF9F14, __READ_WRITE, uint32);
__IOREG(DTRTC060, 0xFFFF9F18, __READ_WRITE, uint32);
__IOREG(DTTCC060, 0xFFFF9F1C, __READ_WRITE, uint32);
__IOREG(DTFSL060, 0xFFFF9F20, __READ_WRITE, uint32);
__IOREG(DTFST060, 0xFFFF9F24, __READ, uint32);
__IOREG(DTFSS060, 0xFFFF9F28, __READ_WRITE, uint32);
__IOREG(DTFSC060, 0xFFFF9F2C, __READ_WRITE, uint32);
__IOREG(DTSA061, 0xFFFF9F40, __READ_WRITE, uint32);
__IOREG(DTDA061, 0xFFFF9F44, __READ_WRITE, uint32);
__IOREG(DTTC061, 0xFFFF9F48, __READ_WRITE, uint32);
__IOREG(DTTCT061, 0xFFFF9F4C, __READ_WRITE, uint32);
__IOREG(DTRSA061, 0xFFFF9F50, __READ_WRITE, uint32);
__IOREG(DTRDA061, 0xFFFF9F54, __READ_WRITE, uint32);
__IOREG(DTRTC061, 0xFFFF9F58, __READ_WRITE, uint32);
__IOREG(DTTCC061, 0xFFFF9F5C, __READ_WRITE, uint32);
__IOREG(DTFSL061, 0xFFFF9F60, __READ_WRITE, uint32);
__IOREG(DTFST061, 0xFFFF9F64, __READ, uint32);
__IOREG(DTFSS061, 0xFFFF9F68, __READ_WRITE, uint32);
__IOREG(DTFSC061, 0xFFFF9F6C, __READ_WRITE, uint32);
__IOREG(DTSA062, 0xFFFF9F80, __READ_WRITE, uint32);
__IOREG(DTDA062, 0xFFFF9F84, __READ_WRITE, uint32);
__IOREG(DTTC062, 0xFFFF9F88, __READ_WRITE, uint32);
__IOREG(DTTCT062, 0xFFFF9F8C, __READ_WRITE, uint32);
__IOREG(DTRSA062, 0xFFFF9F90, __READ_WRITE, uint32);
__IOREG(DTRDA062, 0xFFFF9F94, __READ_WRITE, uint32);
__IOREG(DTRTC062, 0xFFFF9F98, __READ_WRITE, uint32);
__IOREG(DTTCC062, 0xFFFF9F9C, __READ_WRITE, uint32);
__IOREG(DTFSL062, 0xFFFF9FA0, __READ_WRITE, uint32);
__IOREG(DTFST062, 0xFFFF9FA4, __READ, uint32);
__IOREG(DTFSS062, 0xFFFF9FA8, __READ_WRITE, uint32);
__IOREG(DTFSC062, 0xFFFF9FAC, __READ_WRITE, uint32);
__IOREG(DTSA063, 0xFFFF9FC0, __READ_WRITE, uint32);
__IOREG(DTDA063, 0xFFFF9FC4, __READ_WRITE, uint32);
__IOREG(DTTC063, 0xFFFF9FC8, __READ_WRITE, uint32);
__IOREG(DTTCT063, 0xFFFF9FCC, __READ_WRITE, uint32);
__IOREG(DTRSA063, 0xFFFF9FD0, __READ_WRITE, uint32);
__IOREG(DTRDA063, 0xFFFF9FD4, __READ_WRITE, uint32);
__IOREG(DTRTC063, 0xFFFF9FD8, __READ_WRITE, uint32);
__IOREG(DTTCC063, 0xFFFF9FDC, __READ_WRITE, uint32);
__IOREG(DTFSL063, 0xFFFF9FE0, __READ_WRITE, uint32);
__IOREG(DTFST063, 0xFFFF9FE4, __READ, uint32);
__IOREG(DTFSS063, 0xFFFF9FE8, __READ_WRITE, uint32);
__IOREG(DTFSC063, 0xFFFF9FEC, __READ_WRITE, uint32);
__IOREG(DTSA064, 0xFFFFA000, __READ_WRITE, uint32);
__IOREG(DTDA064, 0xFFFFA004, __READ_WRITE, uint32);
__IOREG(DTTC064, 0xFFFFA008, __READ_WRITE, uint32);
__IOREG(DTTCT064, 0xFFFFA00C, __READ_WRITE, uint32);
__IOREG(DTRSA064, 0xFFFFA010, __READ_WRITE, uint32);
__IOREG(DTRDA064, 0xFFFFA014, __READ_WRITE, uint32);
__IOREG(DTRTC064, 0xFFFFA018, __READ_WRITE, uint32);
__IOREG(DTTCC064, 0xFFFFA01C, __READ_WRITE, uint32);
__IOREG(DTFSL064, 0xFFFFA020, __READ_WRITE, uint32);
__IOREG(DTFST064, 0xFFFFA024, __READ, uint32);
__IOREG(DTFSS064, 0xFFFFA028, __READ_WRITE, uint32);
__IOREG(DTFSC064, 0xFFFFA02C, __READ_WRITE, uint32);
__IOREG(DTSA065, 0xFFFFA040, __READ_WRITE, uint32);
__IOREG(DTDA065, 0xFFFFA044, __READ_WRITE, uint32);
__IOREG(DTTC065, 0xFFFFA048, __READ_WRITE, uint32);
__IOREG(DTTCT065, 0xFFFFA04C, __READ_WRITE, uint32);
__IOREG(DTRSA065, 0xFFFFA050, __READ_WRITE, uint32);
__IOREG(DTRDA065, 0xFFFFA054, __READ_WRITE, uint32);
__IOREG(DTRTC065, 0xFFFFA058, __READ_WRITE, uint32);
__IOREG(DTTCC065, 0xFFFFA05C, __READ_WRITE, uint32);
__IOREG(DTFSL065, 0xFFFFA060, __READ_WRITE, uint32);
__IOREG(DTFST065, 0xFFFFA064, __READ, uint32);
__IOREG(DTFSS065, 0xFFFFA068, __READ_WRITE, uint32);
__IOREG(DTFSC065, 0xFFFFA06C, __READ_WRITE, uint32);
__IOREG(DTSA066, 0xFFFFA080, __READ_WRITE, uint32);
__IOREG(DTDA066, 0xFFFFA084, __READ_WRITE, uint32);
__IOREG(DTTC066, 0xFFFFA088, __READ_WRITE, uint32);
__IOREG(DTTCT066, 0xFFFFA08C, __READ_WRITE, uint32);
__IOREG(DTRSA066, 0xFFFFA090, __READ_WRITE, uint32);
__IOREG(DTRDA066, 0xFFFFA094, __READ_WRITE, uint32);
__IOREG(DTRTC066, 0xFFFFA098, __READ_WRITE, uint32);
__IOREG(DTTCC066, 0xFFFFA09C, __READ_WRITE, uint32);
__IOREG(DTFSL066, 0xFFFFA0A0, __READ_WRITE, uint32);
__IOREG(DTFST066, 0xFFFFA0A4, __READ, uint32);
__IOREG(DTFSS066, 0xFFFFA0A8, __READ_WRITE, uint32);
__IOREG(DTFSC066, 0xFFFFA0AC, __READ_WRITE, uint32);
__IOREG(DTSA067, 0xFFFFA0C0, __READ_WRITE, uint32);
__IOREG(DTDA067, 0xFFFFA0C4, __READ_WRITE, uint32);
__IOREG(DTTC067, 0xFFFFA0C8, __READ_WRITE, uint32);
__IOREG(DTTCT067, 0xFFFFA0CC, __READ_WRITE, uint32);
__IOREG(DTRSA067, 0xFFFFA0D0, __READ_WRITE, uint32);
__IOREG(DTRDA067, 0xFFFFA0D4, __READ_WRITE, uint32);
__IOREG(DTRTC067, 0xFFFFA0D8, __READ_WRITE, uint32);
__IOREG(DTTCC067, 0xFFFFA0DC, __READ_WRITE, uint32);
__IOREG(DTFSL067, 0xFFFFA0E0, __READ_WRITE, uint32);
__IOREG(DTFST067, 0xFFFFA0E4, __READ, uint32);
__IOREG(DTFSS067, 0xFFFFA0E8, __READ_WRITE, uint32);
__IOREG(DTFSC067, 0xFFFFA0EC, __READ_WRITE, uint32);
__IOREG(DTSA068, 0xFFFFA100, __READ_WRITE, uint32);
__IOREG(DTDA068, 0xFFFFA104, __READ_WRITE, uint32);
__IOREG(DTTC068, 0xFFFFA108, __READ_WRITE, uint32);
__IOREG(DTTCT068, 0xFFFFA10C, __READ_WRITE, uint32);
__IOREG(DTRSA068, 0xFFFFA110, __READ_WRITE, uint32);
__IOREG(DTRDA068, 0xFFFFA114, __READ_WRITE, uint32);
__IOREG(DTRTC068, 0xFFFFA118, __READ_WRITE, uint32);
__IOREG(DTTCC068, 0xFFFFA11C, __READ_WRITE, uint32);
__IOREG(DTFSL068, 0xFFFFA120, __READ_WRITE, uint32);
__IOREG(DTFST068, 0xFFFFA124, __READ, uint32);
__IOREG(DTFSS068, 0xFFFFA128, __READ_WRITE, uint32);
__IOREG(DTFSC068, 0xFFFFA12C, __READ_WRITE, uint32);
__IOREG(DTSA069, 0xFFFFA140, __READ_WRITE, uint32);
__IOREG(DTDA069, 0xFFFFA144, __READ_WRITE, uint32);
__IOREG(DTTC069, 0xFFFFA148, __READ_WRITE, uint32);
__IOREG(DTTCT069, 0xFFFFA14C, __READ_WRITE, uint32);
__IOREG(DTRSA069, 0xFFFFA150, __READ_WRITE, uint32);
__IOREG(DTRDA069, 0xFFFFA154, __READ_WRITE, uint32);
__IOREG(DTRTC069, 0xFFFFA158, __READ_WRITE, uint32);
__IOREG(DTTCC069, 0xFFFFA15C, __READ_WRITE, uint32);
__IOREG(DTFSL069, 0xFFFFA160, __READ_WRITE, uint32);
__IOREG(DTFST069, 0xFFFFA164, __READ, uint32);
__IOREG(DTFSS069, 0xFFFFA168, __READ_WRITE, uint32);
__IOREG(DTFSC069, 0xFFFFA16C, __READ_WRITE, uint32);
__IOREG(DTSA070, 0xFFFFA180, __READ_WRITE, uint32);
__IOREG(DTDA070, 0xFFFFA184, __READ_WRITE, uint32);
__IOREG(DTTC070, 0xFFFFA188, __READ_WRITE, uint32);
__IOREG(DTTCT070, 0xFFFFA18C, __READ_WRITE, uint32);
__IOREG(DTRSA070, 0xFFFFA190, __READ_WRITE, uint32);
__IOREG(DTRDA070, 0xFFFFA194, __READ_WRITE, uint32);
__IOREG(DTRTC070, 0xFFFFA198, __READ_WRITE, uint32);
__IOREG(DTTCC070, 0xFFFFA19C, __READ_WRITE, uint32);
__IOREG(DTFSL070, 0xFFFFA1A0, __READ_WRITE, uint32);
__IOREG(DTFST070, 0xFFFFA1A4, __READ, uint32);
__IOREG(DTFSS070, 0xFFFFA1A8, __READ_WRITE, uint32);
__IOREG(DTFSC070, 0xFFFFA1AC, __READ_WRITE, uint32);
__IOREG(DTSA071, 0xFFFFA1C0, __READ_WRITE, uint32);
__IOREG(DTDA071, 0xFFFFA1C4, __READ_WRITE, uint32);
__IOREG(DTTC071, 0xFFFFA1C8, __READ_WRITE, uint32);
__IOREG(DTTCT071, 0xFFFFA1CC, __READ_WRITE, uint32);
__IOREG(DTRSA071, 0xFFFFA1D0, __READ_WRITE, uint32);
__IOREG(DTRDA071, 0xFFFFA1D4, __READ_WRITE, uint32);
__IOREG(DTRTC071, 0xFFFFA1D8, __READ_WRITE, uint32);
__IOREG(DTTCC071, 0xFFFFA1DC, __READ_WRITE, uint32);
__IOREG(DTFSL071, 0xFFFFA1E0, __READ_WRITE, uint32);
__IOREG(DTFST071, 0xFFFFA1E4, __READ, uint32);
__IOREG(DTFSS071, 0xFFFFA1E8, __READ_WRITE, uint32);
__IOREG(DTFSC071, 0xFFFFA1EC, __READ_WRITE, uint32);
__IOREG(DTSA072, 0xFFFFA200, __READ_WRITE, uint32);
__IOREG(DTDA072, 0xFFFFA204, __READ_WRITE, uint32);
__IOREG(DTTC072, 0xFFFFA208, __READ_WRITE, uint32);
__IOREG(DTTCT072, 0xFFFFA20C, __READ_WRITE, uint32);
__IOREG(DTRSA072, 0xFFFFA210, __READ_WRITE, uint32);
__IOREG(DTRDA072, 0xFFFFA214, __READ_WRITE, uint32);
__IOREG(DTRTC072, 0xFFFFA218, __READ_WRITE, uint32);
__IOREG(DTTCC072, 0xFFFFA21C, __READ_WRITE, uint32);
__IOREG(DTFSL072, 0xFFFFA220, __READ_WRITE, uint32);
__IOREG(DTFST072, 0xFFFFA224, __READ, uint32);
__IOREG(DTFSS072, 0xFFFFA228, __READ_WRITE, uint32);
__IOREG(DTFSC072, 0xFFFFA22C, __READ_WRITE, uint32);
__IOREG(DTSA073, 0xFFFFA240, __READ_WRITE, uint32);
__IOREG(DTDA073, 0xFFFFA244, __READ_WRITE, uint32);
__IOREG(DTTC073, 0xFFFFA248, __READ_WRITE, uint32);
__IOREG(DTTCT073, 0xFFFFA24C, __READ_WRITE, uint32);
__IOREG(DTRSA073, 0xFFFFA250, __READ_WRITE, uint32);
__IOREG(DTRDA073, 0xFFFFA254, __READ_WRITE, uint32);
__IOREG(DTRTC073, 0xFFFFA258, __READ_WRITE, uint32);
__IOREG(DTTCC073, 0xFFFFA25C, __READ_WRITE, uint32);
__IOREG(DTFSL073, 0xFFFFA260, __READ_WRITE, uint32);
__IOREG(DTFST073, 0xFFFFA264, __READ, uint32);
__IOREG(DTFSS073, 0xFFFFA268, __READ_WRITE, uint32);
__IOREG(DTFSC073, 0xFFFFA26C, __READ_WRITE, uint32);
__IOREG(DTSA074, 0xFFFFA280, __READ_WRITE, uint32);
__IOREG(DTDA074, 0xFFFFA284, __READ_WRITE, uint32);
__IOREG(DTTC074, 0xFFFFA288, __READ_WRITE, uint32);
__IOREG(DTTCT074, 0xFFFFA28C, __READ_WRITE, uint32);
__IOREG(DTRSA074, 0xFFFFA290, __READ_WRITE, uint32);
__IOREG(DTRDA074, 0xFFFFA294, __READ_WRITE, uint32);
__IOREG(DTRTC074, 0xFFFFA298, __READ_WRITE, uint32);
__IOREG(DTTCC074, 0xFFFFA29C, __READ_WRITE, uint32);
__IOREG(DTFSL074, 0xFFFFA2A0, __READ_WRITE, uint32);
__IOREG(DTFST074, 0xFFFFA2A4, __READ, uint32);
__IOREG(DTFSS074, 0xFFFFA2A8, __READ_WRITE, uint32);
__IOREG(DTFSC074, 0xFFFFA2AC, __READ_WRITE, uint32);
__IOREG(DTSA075, 0xFFFFA2C0, __READ_WRITE, uint32);
__IOREG(DTDA075, 0xFFFFA2C4, __READ_WRITE, uint32);
__IOREG(DTTC075, 0xFFFFA2C8, __READ_WRITE, uint32);
__IOREG(DTTCT075, 0xFFFFA2CC, __READ_WRITE, uint32);
__IOREG(DTRSA075, 0xFFFFA2D0, __READ_WRITE, uint32);
__IOREG(DTRDA075, 0xFFFFA2D4, __READ_WRITE, uint32);
__IOREG(DTRTC075, 0xFFFFA2D8, __READ_WRITE, uint32);
__IOREG(DTTCC075, 0xFFFFA2DC, __READ_WRITE, uint32);
__IOREG(DTFSL075, 0xFFFFA2E0, __READ_WRITE, uint32);
__IOREG(DTFST075, 0xFFFFA2E4, __READ, uint32);
__IOREG(DTFSS075, 0xFFFFA2E8, __READ_WRITE, uint32);
__IOREG(DTFSC075, 0xFFFFA2EC, __READ_WRITE, uint32);
__IOREG(DTSA076, 0xFFFFA300, __READ_WRITE, uint32);
__IOREG(DTDA076, 0xFFFFA304, __READ_WRITE, uint32);
__IOREG(DTTC076, 0xFFFFA308, __READ_WRITE, uint32);
__IOREG(DTTCT076, 0xFFFFA30C, __READ_WRITE, uint32);
__IOREG(DTRSA076, 0xFFFFA310, __READ_WRITE, uint32);
__IOREG(DTRDA076, 0xFFFFA314, __READ_WRITE, uint32);
__IOREG(DTRTC076, 0xFFFFA318, __READ_WRITE, uint32);
__IOREG(DTTCC076, 0xFFFFA31C, __READ_WRITE, uint32);
__IOREG(DTFSL076, 0xFFFFA320, __READ_WRITE, uint32);
__IOREG(DTFST076, 0xFFFFA324, __READ, uint32);
__IOREG(DTFSS076, 0xFFFFA328, __READ_WRITE, uint32);
__IOREG(DTFSC076, 0xFFFFA32C, __READ_WRITE, uint32);
__IOREG(DTSA077, 0xFFFFA340, __READ_WRITE, uint32);
__IOREG(DTDA077, 0xFFFFA344, __READ_WRITE, uint32);
__IOREG(DTTC077, 0xFFFFA348, __READ_WRITE, uint32);
__IOREG(DTTCT077, 0xFFFFA34C, __READ_WRITE, uint32);
__IOREG(DTRSA077, 0xFFFFA350, __READ_WRITE, uint32);
__IOREG(DTRDA077, 0xFFFFA354, __READ_WRITE, uint32);
__IOREG(DTRTC077, 0xFFFFA358, __READ_WRITE, uint32);
__IOREG(DTTCC077, 0xFFFFA35C, __READ_WRITE, uint32);
__IOREG(DTFSL077, 0xFFFFA360, __READ_WRITE, uint32);
__IOREG(DTFST077, 0xFFFFA364, __READ, uint32);
__IOREG(DTFSS077, 0xFFFFA368, __READ_WRITE, uint32);
__IOREG(DTFSC077, 0xFFFFA36C, __READ_WRITE, uint32);
__IOREG(DTSA078, 0xFFFFA380, __READ_WRITE, uint32);
__IOREG(DTDA078, 0xFFFFA384, __READ_WRITE, uint32);
__IOREG(DTTC078, 0xFFFFA388, __READ_WRITE, uint32);
__IOREG(DTTCT078, 0xFFFFA38C, __READ_WRITE, uint32);
__IOREG(DTRSA078, 0xFFFFA390, __READ_WRITE, uint32);
__IOREG(DTRDA078, 0xFFFFA394, __READ_WRITE, uint32);
__IOREG(DTRTC078, 0xFFFFA398, __READ_WRITE, uint32);
__IOREG(DTTCC078, 0xFFFFA39C, __READ_WRITE, uint32);
__IOREG(DTFSL078, 0xFFFFA3A0, __READ_WRITE, uint32);
__IOREG(DTFST078, 0xFFFFA3A4, __READ, uint32);
__IOREG(DTFSS078, 0xFFFFA3A8, __READ_WRITE, uint32);
__IOREG(DTFSC078, 0xFFFFA3AC, __READ_WRITE, uint32);
__IOREG(DTSA079, 0xFFFFA3C0, __READ_WRITE, uint32);
__IOREG(DTDA079, 0xFFFFA3C4, __READ_WRITE, uint32);
__IOREG(DTTC079, 0xFFFFA3C8, __READ_WRITE, uint32);
__IOREG(DTTCT079, 0xFFFFA3CC, __READ_WRITE, uint32);
__IOREG(DTRSA079, 0xFFFFA3D0, __READ_WRITE, uint32);
__IOREG(DTRDA079, 0xFFFFA3D4, __READ_WRITE, uint32);
__IOREG(DTRTC079, 0xFFFFA3D8, __READ_WRITE, uint32);
__IOREG(DTTCC079, 0xFFFFA3DC, __READ_WRITE, uint32);
__IOREG(DTFSL079, 0xFFFFA3E0, __READ_WRITE, uint32);
__IOREG(DTFST079, 0xFFFFA3E4, __READ, uint32);
__IOREG(DTFSS079, 0xFFFFA3E8, __READ_WRITE, uint32);
__IOREG(DTFSC079, 0xFFFFA3EC, __READ_WRITE, uint32);
__IOREG(DTSA080, 0xFFFFA400, __READ_WRITE, uint32);
__IOREG(DTDA080, 0xFFFFA404, __READ_WRITE, uint32);
__IOREG(DTTC080, 0xFFFFA408, __READ_WRITE, uint32);
__IOREG(DTTCT080, 0xFFFFA40C, __READ_WRITE, uint32);
__IOREG(DTRSA080, 0xFFFFA410, __READ_WRITE, uint32);
__IOREG(DTRDA080, 0xFFFFA414, __READ_WRITE, uint32);
__IOREG(DTRTC080, 0xFFFFA418, __READ_WRITE, uint32);
__IOREG(DTTCC080, 0xFFFFA41C, __READ_WRITE, uint32);
__IOREG(DTFSL080, 0xFFFFA420, __READ_WRITE, uint32);
__IOREG(DTFST080, 0xFFFFA424, __READ, uint32);
__IOREG(DTFSS080, 0xFFFFA428, __READ_WRITE, uint32);
__IOREG(DTFSC080, 0xFFFFA42C, __READ_WRITE, uint32);
__IOREG(DTSA081, 0xFFFFA440, __READ_WRITE, uint32);
__IOREG(DTDA081, 0xFFFFA444, __READ_WRITE, uint32);
__IOREG(DTTC081, 0xFFFFA448, __READ_WRITE, uint32);
__IOREG(DTTCT081, 0xFFFFA44C, __READ_WRITE, uint32);
__IOREG(DTRSA081, 0xFFFFA450, __READ_WRITE, uint32);
__IOREG(DTRDA081, 0xFFFFA454, __READ_WRITE, uint32);
__IOREG(DTRTC081, 0xFFFFA458, __READ_WRITE, uint32);
__IOREG(DTTCC081, 0xFFFFA45C, __READ_WRITE, uint32);
__IOREG(DTFSL081, 0xFFFFA460, __READ_WRITE, uint32);
__IOREG(DTFST081, 0xFFFFA464, __READ, uint32);
__IOREG(DTFSS081, 0xFFFFA468, __READ_WRITE, uint32);
__IOREG(DTFSC081, 0xFFFFA46C, __READ_WRITE, uint32);
__IOREG(DTSA082, 0xFFFFA480, __READ_WRITE, uint32);
__IOREG(DTDA082, 0xFFFFA484, __READ_WRITE, uint32);
__IOREG(DTTC082, 0xFFFFA488, __READ_WRITE, uint32);
__IOREG(DTTCT082, 0xFFFFA48C, __READ_WRITE, uint32);
__IOREG(DTRSA082, 0xFFFFA490, __READ_WRITE, uint32);
__IOREG(DTRDA082, 0xFFFFA494, __READ_WRITE, uint32);
__IOREG(DTRTC082, 0xFFFFA498, __READ_WRITE, uint32);
__IOREG(DTTCC082, 0xFFFFA49C, __READ_WRITE, uint32);
__IOREG(DTFSL082, 0xFFFFA4A0, __READ_WRITE, uint32);
__IOREG(DTFST082, 0xFFFFA4A4, __READ, uint32);
__IOREG(DTFSS082, 0xFFFFA4A8, __READ_WRITE, uint32);
__IOREG(DTFSC082, 0xFFFFA4AC, __READ_WRITE, uint32);
__IOREG(DTSA083, 0xFFFFA4C0, __READ_WRITE, uint32);
__IOREG(DTDA083, 0xFFFFA4C4, __READ_WRITE, uint32);
__IOREG(DTTC083, 0xFFFFA4C8, __READ_WRITE, uint32);
__IOREG(DTTCT083, 0xFFFFA4CC, __READ_WRITE, uint32);
__IOREG(DTRSA083, 0xFFFFA4D0, __READ_WRITE, uint32);
__IOREG(DTRDA083, 0xFFFFA4D4, __READ_WRITE, uint32);
__IOREG(DTRTC083, 0xFFFFA4D8, __READ_WRITE, uint32);
__IOREG(DTTCC083, 0xFFFFA4DC, __READ_WRITE, uint32);
__IOREG(DTFSL083, 0xFFFFA4E0, __READ_WRITE, uint32);
__IOREG(DTFST083, 0xFFFFA4E4, __READ, uint32);
__IOREG(DTFSS083, 0xFFFFA4E8, __READ_WRITE, uint32);
__IOREG(DTFSC083, 0xFFFFA4EC, __READ_WRITE, uint32);
__IOREG(DTSA084, 0xFFFFA500, __READ_WRITE, uint32);
__IOREG(DTDA084, 0xFFFFA504, __READ_WRITE, uint32);
__IOREG(DTTC084, 0xFFFFA508, __READ_WRITE, uint32);
__IOREG(DTTCT084, 0xFFFFA50C, __READ_WRITE, uint32);
__IOREG(DTRSA084, 0xFFFFA510, __READ_WRITE, uint32);
__IOREG(DTRDA084, 0xFFFFA514, __READ_WRITE, uint32);
__IOREG(DTRTC084, 0xFFFFA518, __READ_WRITE, uint32);
__IOREG(DTTCC084, 0xFFFFA51C, __READ_WRITE, uint32);
__IOREG(DTFSL084, 0xFFFFA520, __READ_WRITE, uint32);
__IOREG(DTFST084, 0xFFFFA524, __READ, uint32);
__IOREG(DTFSS084, 0xFFFFA528, __READ_WRITE, uint32);
__IOREG(DTFSC084, 0xFFFFA52C, __READ_WRITE, uint32);
__IOREG(DTSA085, 0xFFFFA540, __READ_WRITE, uint32);
__IOREG(DTDA085, 0xFFFFA544, __READ_WRITE, uint32);
__IOREG(DTTC085, 0xFFFFA548, __READ_WRITE, uint32);
__IOREG(DTTCT085, 0xFFFFA54C, __READ_WRITE, uint32);
__IOREG(DTRSA085, 0xFFFFA550, __READ_WRITE, uint32);
__IOREG(DTRDA085, 0xFFFFA554, __READ_WRITE, uint32);
__IOREG(DTRTC085, 0xFFFFA558, __READ_WRITE, uint32);
__IOREG(DTTCC085, 0xFFFFA55C, __READ_WRITE, uint32);
__IOREG(DTFSL085, 0xFFFFA560, __READ_WRITE, uint32);
__IOREG(DTFST085, 0xFFFFA564, __READ, uint32);
__IOREG(DTFSS085, 0xFFFFA568, __READ_WRITE, uint32);
__IOREG(DTFSC085, 0xFFFFA56C, __READ_WRITE, uint32);
__IOREG(DTSA086, 0xFFFFA580, __READ_WRITE, uint32);
__IOREG(DTDA086, 0xFFFFA584, __READ_WRITE, uint32);
__IOREG(DTTC086, 0xFFFFA588, __READ_WRITE, uint32);
__IOREG(DTTCT086, 0xFFFFA58C, __READ_WRITE, uint32);
__IOREG(DTRSA086, 0xFFFFA590, __READ_WRITE, uint32);
__IOREG(DTRDA086, 0xFFFFA594, __READ_WRITE, uint32);
__IOREG(DTRTC086, 0xFFFFA598, __READ_WRITE, uint32);
__IOREG(DTTCC086, 0xFFFFA59C, __READ_WRITE, uint32);
__IOREG(DTFSL086, 0xFFFFA5A0, __READ_WRITE, uint32);
__IOREG(DTFST086, 0xFFFFA5A4, __READ, uint32);
__IOREG(DTFSS086, 0xFFFFA5A8, __READ_WRITE, uint32);
__IOREG(DTFSC086, 0xFFFFA5AC, __READ_WRITE, uint32);
__IOREG(DTSA087, 0xFFFFA5C0, __READ_WRITE, uint32);
__IOREG(DTDA087, 0xFFFFA5C4, __READ_WRITE, uint32);
__IOREG(DTTC087, 0xFFFFA5C8, __READ_WRITE, uint32);
__IOREG(DTTCT087, 0xFFFFA5CC, __READ_WRITE, uint32);
__IOREG(DTRSA087, 0xFFFFA5D0, __READ_WRITE, uint32);
__IOREG(DTRDA087, 0xFFFFA5D4, __READ_WRITE, uint32);
__IOREG(DTRTC087, 0xFFFFA5D8, __READ_WRITE, uint32);
__IOREG(DTTCC087, 0xFFFFA5DC, __READ_WRITE, uint32);
__IOREG(DTFSL087, 0xFFFFA5E0, __READ_WRITE, uint32);
__IOREG(DTFST087, 0xFFFFA5E4, __READ, uint32);
__IOREG(DTFSS087, 0xFFFFA5E8, __READ_WRITE, uint32);
__IOREG(DTFSC087, 0xFFFFA5EC, __READ_WRITE, uint32);
__IOREG(DTSA088, 0xFFFFA600, __READ_WRITE, uint32);
__IOREG(DTDA088, 0xFFFFA604, __READ_WRITE, uint32);
__IOREG(DTTC088, 0xFFFFA608, __READ_WRITE, uint32);
__IOREG(DTTCT088, 0xFFFFA60C, __READ_WRITE, uint32);
__IOREG(DTRSA088, 0xFFFFA610, __READ_WRITE, uint32);
__IOREG(DTRDA088, 0xFFFFA614, __READ_WRITE, uint32);
__IOREG(DTRTC088, 0xFFFFA618, __READ_WRITE, uint32);
__IOREG(DTTCC088, 0xFFFFA61C, __READ_WRITE, uint32);
__IOREG(DTFSL088, 0xFFFFA620, __READ_WRITE, uint32);
__IOREG(DTFST088, 0xFFFFA624, __READ, uint32);
__IOREG(DTFSS088, 0xFFFFA628, __READ_WRITE, uint32);
__IOREG(DTFSC088, 0xFFFFA62C, __READ_WRITE, uint32);
__IOREG(DTSA089, 0xFFFFA640, __READ_WRITE, uint32);
__IOREG(DTDA089, 0xFFFFA644, __READ_WRITE, uint32);
__IOREG(DTTC089, 0xFFFFA648, __READ_WRITE, uint32);
__IOREG(DTTCT089, 0xFFFFA64C, __READ_WRITE, uint32);
__IOREG(DTRSA089, 0xFFFFA650, __READ_WRITE, uint32);
__IOREG(DTRDA089, 0xFFFFA654, __READ_WRITE, uint32);
__IOREG(DTRTC089, 0xFFFFA658, __READ_WRITE, uint32);
__IOREG(DTTCC089, 0xFFFFA65C, __READ_WRITE, uint32);
__IOREG(DTFSL089, 0xFFFFA660, __READ_WRITE, uint32);
__IOREG(DTFST089, 0xFFFFA664, __READ, uint32);
__IOREG(DTFSS089, 0xFFFFA668, __READ_WRITE, uint32);
__IOREG(DTFSC089, 0xFFFFA66C, __READ_WRITE, uint32);
__IOREG(DTSA090, 0xFFFFA680, __READ_WRITE, uint32);
__IOREG(DTDA090, 0xFFFFA684, __READ_WRITE, uint32);
__IOREG(DTTC090, 0xFFFFA688, __READ_WRITE, uint32);
__IOREG(DTTCT090, 0xFFFFA68C, __READ_WRITE, uint32);
__IOREG(DTRSA090, 0xFFFFA690, __READ_WRITE, uint32);
__IOREG(DTRDA090, 0xFFFFA694, __READ_WRITE, uint32);
__IOREG(DTRTC090, 0xFFFFA698, __READ_WRITE, uint32);
__IOREG(DTTCC090, 0xFFFFA69C, __READ_WRITE, uint32);
__IOREG(DTFSL090, 0xFFFFA6A0, __READ_WRITE, uint32);
__IOREG(DTFST090, 0xFFFFA6A4, __READ, uint32);
__IOREG(DTFSS090, 0xFFFFA6A8, __READ_WRITE, uint32);
__IOREG(DTFSC090, 0xFFFFA6AC, __READ_WRITE, uint32);
__IOREG(DTSA091, 0xFFFFA6C0, __READ_WRITE, uint32);
__IOREG(DTDA091, 0xFFFFA6C4, __READ_WRITE, uint32);
__IOREG(DTTC091, 0xFFFFA6C8, __READ_WRITE, uint32);
__IOREG(DTTCT091, 0xFFFFA6CC, __READ_WRITE, uint32);
__IOREG(DTRSA091, 0xFFFFA6D0, __READ_WRITE, uint32);
__IOREG(DTRDA091, 0xFFFFA6D4, __READ_WRITE, uint32);
__IOREG(DTRTC091, 0xFFFFA6D8, __READ_WRITE, uint32);
__IOREG(DTTCC091, 0xFFFFA6DC, __READ_WRITE, uint32);
__IOREG(DTFSL091, 0xFFFFA6E0, __READ_WRITE, uint32);
__IOREG(DTFST091, 0xFFFFA6E4, __READ, uint32);
__IOREG(DTFSS091, 0xFFFFA6E8, __READ_WRITE, uint32);
__IOREG(DTFSC091, 0xFFFFA6EC, __READ_WRITE, uint32);
__IOREG(DTSA092, 0xFFFFA700, __READ_WRITE, uint32);
__IOREG(DTDA092, 0xFFFFA704, __READ_WRITE, uint32);
__IOREG(DTTC092, 0xFFFFA708, __READ_WRITE, uint32);
__IOREG(DTTCT092, 0xFFFFA70C, __READ_WRITE, uint32);
__IOREG(DTRSA092, 0xFFFFA710, __READ_WRITE, uint32);
__IOREG(DTRDA092, 0xFFFFA714, __READ_WRITE, uint32);
__IOREG(DTRTC092, 0xFFFFA718, __READ_WRITE, uint32);
__IOREG(DTTCC092, 0xFFFFA71C, __READ_WRITE, uint32);
__IOREG(DTFSL092, 0xFFFFA720, __READ_WRITE, uint32);
__IOREG(DTFST092, 0xFFFFA724, __READ, uint32);
__IOREG(DTFSS092, 0xFFFFA728, __READ_WRITE, uint32);
__IOREG(DTFSC092, 0xFFFFA72C, __READ_WRITE, uint32);
__IOREG(DTSA093, 0xFFFFA740, __READ_WRITE, uint32);
__IOREG(DTDA093, 0xFFFFA744, __READ_WRITE, uint32);
__IOREG(DTTC093, 0xFFFFA748, __READ_WRITE, uint32);
__IOREG(DTTCT093, 0xFFFFA74C, __READ_WRITE, uint32);
__IOREG(DTRSA093, 0xFFFFA750, __READ_WRITE, uint32);
__IOREG(DTRDA093, 0xFFFFA754, __READ_WRITE, uint32);
__IOREG(DTRTC093, 0xFFFFA758, __READ_WRITE, uint32);
__IOREG(DTTCC093, 0xFFFFA75C, __READ_WRITE, uint32);
__IOREG(DTFSL093, 0xFFFFA760, __READ_WRITE, uint32);
__IOREG(DTFST093, 0xFFFFA764, __READ, uint32);
__IOREG(DTFSS093, 0xFFFFA768, __READ_WRITE, uint32);
__IOREG(DTFSC093, 0xFFFFA76C, __READ_WRITE, uint32);
__IOREG(DTSA094, 0xFFFFA780, __READ_WRITE, uint32);
__IOREG(DTDA094, 0xFFFFA784, __READ_WRITE, uint32);
__IOREG(DTTC094, 0xFFFFA788, __READ_WRITE, uint32);
__IOREG(DTTCT094, 0xFFFFA78C, __READ_WRITE, uint32);
__IOREG(DTRSA094, 0xFFFFA790, __READ_WRITE, uint32);
__IOREG(DTRDA094, 0xFFFFA794, __READ_WRITE, uint32);
__IOREG(DTRTC094, 0xFFFFA798, __READ_WRITE, uint32);
__IOREG(DTTCC094, 0xFFFFA79C, __READ_WRITE, uint32);
__IOREG(DTFSL094, 0xFFFFA7A0, __READ_WRITE, uint32);
__IOREG(DTFST094, 0xFFFFA7A4, __READ, uint32);
__IOREG(DTFSS094, 0xFFFFA7A8, __READ_WRITE, uint32);
__IOREG(DTFSC094, 0xFFFFA7AC, __READ_WRITE, uint32);
__IOREG(DTSA095, 0xFFFFA7C0, __READ_WRITE, uint32);
__IOREG(DTDA095, 0xFFFFA7C4, __READ_WRITE, uint32);
__IOREG(DTTC095, 0xFFFFA7C8, __READ_WRITE, uint32);
__IOREG(DTTCT095, 0xFFFFA7CC, __READ_WRITE, uint32);
__IOREG(DTRSA095, 0xFFFFA7D0, __READ_WRITE, uint32);
__IOREG(DTRDA095, 0xFFFFA7D4, __READ_WRITE, uint32);
__IOREG(DTRTC095, 0xFFFFA7D8, __READ_WRITE, uint32);
__IOREG(DTTCC095, 0xFFFFA7DC, __READ_WRITE, uint32);
__IOREG(DTFSL095, 0xFFFFA7E0, __READ_WRITE, uint32);
__IOREG(DTFST095, 0xFFFFA7E4, __READ, uint32);
__IOREG(DTFSS095, 0xFFFFA7E8, __READ_WRITE, uint32);
__IOREG(DTFSC095, 0xFFFFA7EC, __READ_WRITE, uint32);
__IOREG(DTSA096, 0xFFFFA800, __READ_WRITE, uint32);
__IOREG(DTDA096, 0xFFFFA804, __READ_WRITE, uint32);
__IOREG(DTTC096, 0xFFFFA808, __READ_WRITE, uint32);
__IOREG(DTTCT096, 0xFFFFA80C, __READ_WRITE, uint32);
__IOREG(DTRSA096, 0xFFFFA810, __READ_WRITE, uint32);
__IOREG(DTRDA096, 0xFFFFA814, __READ_WRITE, uint32);
__IOREG(DTRTC096, 0xFFFFA818, __READ_WRITE, uint32);
__IOREG(DTTCC096, 0xFFFFA81C, __READ_WRITE, uint32);
__IOREG(DTFSL096, 0xFFFFA820, __READ_WRITE, uint32);
__IOREG(DTFST096, 0xFFFFA824, __READ, uint32);
__IOREG(DTFSS096, 0xFFFFA828, __READ_WRITE, uint32);
__IOREG(DTFSC096, 0xFFFFA82C, __READ_WRITE, uint32);
__IOREG(DTSA097, 0xFFFFA840, __READ_WRITE, uint32);
__IOREG(DTDA097, 0xFFFFA844, __READ_WRITE, uint32);
__IOREG(DTTC097, 0xFFFFA848, __READ_WRITE, uint32);
__IOREG(DTTCT097, 0xFFFFA84C, __READ_WRITE, uint32);
__IOREG(DTRSA097, 0xFFFFA850, __READ_WRITE, uint32);
__IOREG(DTRDA097, 0xFFFFA854, __READ_WRITE, uint32);
__IOREG(DTRTC097, 0xFFFFA858, __READ_WRITE, uint32);
__IOREG(DTTCC097, 0xFFFFA85C, __READ_WRITE, uint32);
__IOREG(DTFSL097, 0xFFFFA860, __READ_WRITE, uint32);
__IOREG(DTFST097, 0xFFFFA864, __READ, uint32);
__IOREG(DTFSS097, 0xFFFFA868, __READ_WRITE, uint32);
__IOREG(DTFSC097, 0xFFFFA86C, __READ_WRITE, uint32);
__IOREG(DTSA098, 0xFFFFA880, __READ_WRITE, uint32);
__IOREG(DTDA098, 0xFFFFA884, __READ_WRITE, uint32);
__IOREG(DTTC098, 0xFFFFA888, __READ_WRITE, uint32);
__IOREG(DTTCT098, 0xFFFFA88C, __READ_WRITE, uint32);
__IOREG(DTRSA098, 0xFFFFA890, __READ_WRITE, uint32);
__IOREG(DTRDA098, 0xFFFFA894, __READ_WRITE, uint32);
__IOREG(DTRTC098, 0xFFFFA898, __READ_WRITE, uint32);
__IOREG(DTTCC098, 0xFFFFA89C, __READ_WRITE, uint32);
__IOREG(DTFSL098, 0xFFFFA8A0, __READ_WRITE, uint32);
__IOREG(DTFST098, 0xFFFFA8A4, __READ, uint32);
__IOREG(DTFSS098, 0xFFFFA8A8, __READ_WRITE, uint32);
__IOREG(DTFSC098, 0xFFFFA8AC, __READ_WRITE, uint32);
__IOREG(DTSA099, 0xFFFFA8C0, __READ_WRITE, uint32);
__IOREG(DTDA099, 0xFFFFA8C4, __READ_WRITE, uint32);
__IOREG(DTTC099, 0xFFFFA8C8, __READ_WRITE, uint32);
__IOREG(DTTCT099, 0xFFFFA8CC, __READ_WRITE, uint32);
__IOREG(DTRSA099, 0xFFFFA8D0, __READ_WRITE, uint32);
__IOREG(DTRDA099, 0xFFFFA8D4, __READ_WRITE, uint32);
__IOREG(DTRTC099, 0xFFFFA8D8, __READ_WRITE, uint32);
__IOREG(DTTCC099, 0xFFFFA8DC, __READ_WRITE, uint32);
__IOREG(DTFSL099, 0xFFFFA8E0, __READ_WRITE, uint32);
__IOREG(DTFST099, 0xFFFFA8E4, __READ, uint32);
__IOREG(DTFSS099, 0xFFFFA8E8, __READ_WRITE, uint32);
__IOREG(DTFSC099, 0xFFFFA8EC, __READ_WRITE, uint32);
__IOREG(DTSA100, 0xFFFFA900, __READ_WRITE, uint32);
__IOREG(DTDA100, 0xFFFFA904, __READ_WRITE, uint32);
__IOREG(DTTC100, 0xFFFFA908, __READ_WRITE, uint32);
__IOREG(DTTCT100, 0xFFFFA90C, __READ_WRITE, uint32);
__IOREG(DTRSA100, 0xFFFFA910, __READ_WRITE, uint32);
__IOREG(DTRDA100, 0xFFFFA914, __READ_WRITE, uint32);
__IOREG(DTRTC100, 0xFFFFA918, __READ_WRITE, uint32);
__IOREG(DTTCC100, 0xFFFFA91C, __READ_WRITE, uint32);
__IOREG(DTFSL100, 0xFFFFA920, __READ_WRITE, uint32);
__IOREG(DTFST100, 0xFFFFA924, __READ, uint32);
__IOREG(DTFSS100, 0xFFFFA928, __READ_WRITE, uint32);
__IOREG(DTFSC100, 0xFFFFA92C, __READ_WRITE, uint32);
__IOREG(DTSA101, 0xFFFFA940, __READ_WRITE, uint32);
__IOREG(DTDA101, 0xFFFFA944, __READ_WRITE, uint32);
__IOREG(DTTC101, 0xFFFFA948, __READ_WRITE, uint32);
__IOREG(DTTCT101, 0xFFFFA94C, __READ_WRITE, uint32);
__IOREG(DTRSA101, 0xFFFFA950, __READ_WRITE, uint32);
__IOREG(DTRDA101, 0xFFFFA954, __READ_WRITE, uint32);
__IOREG(DTRTC101, 0xFFFFA958, __READ_WRITE, uint32);
__IOREG(DTTCC101, 0xFFFFA95C, __READ_WRITE, uint32);
__IOREG(DTFSL101, 0xFFFFA960, __READ_WRITE, uint32);
__IOREG(DTFST101, 0xFFFFA964, __READ, uint32);
__IOREG(DTFSS101, 0xFFFFA968, __READ_WRITE, uint32);
__IOREG(DTFSC101, 0xFFFFA96C, __READ_WRITE, uint32);
__IOREG(DTSA102, 0xFFFFA980, __READ_WRITE, uint32);
__IOREG(DTDA102, 0xFFFFA984, __READ_WRITE, uint32);
__IOREG(DTTC102, 0xFFFFA988, __READ_WRITE, uint32);
__IOREG(DTTCT102, 0xFFFFA98C, __READ_WRITE, uint32);
__IOREG(DTRSA102, 0xFFFFA990, __READ_WRITE, uint32);
__IOREG(DTRDA102, 0xFFFFA994, __READ_WRITE, uint32);
__IOREG(DTRTC102, 0xFFFFA998, __READ_WRITE, uint32);
__IOREG(DTTCC102, 0xFFFFA99C, __READ_WRITE, uint32);
__IOREG(DTFSL102, 0xFFFFA9A0, __READ_WRITE, uint32);
__IOREG(DTFST102, 0xFFFFA9A4, __READ, uint32);
__IOREG(DTFSS102, 0xFFFFA9A8, __READ_WRITE, uint32);
__IOREG(DTFSC102, 0xFFFFA9AC, __READ_WRITE, uint32);
__IOREG(DTSA103, 0xFFFFA9C0, __READ_WRITE, uint32);
__IOREG(DTDA103, 0xFFFFA9C4, __READ_WRITE, uint32);
__IOREG(DTTC103, 0xFFFFA9C8, __READ_WRITE, uint32);
__IOREG(DTTCT103, 0xFFFFA9CC, __READ_WRITE, uint32);
__IOREG(DTRSA103, 0xFFFFA9D0, __READ_WRITE, uint32);
__IOREG(DTRDA103, 0xFFFFA9D4, __READ_WRITE, uint32);
__IOREG(DTRTC103, 0xFFFFA9D8, __READ_WRITE, uint32);
__IOREG(DTTCC103, 0xFFFFA9DC, __READ_WRITE, uint32);
__IOREG(DTFSL103, 0xFFFFA9E0, __READ_WRITE, uint32);
__IOREG(DTFST103, 0xFFFFA9E4, __READ, uint32);
__IOREG(DTFSS103, 0xFFFFA9E8, __READ_WRITE, uint32);
__IOREG(DTFSC103, 0xFFFFA9EC, __READ_WRITE, uint32);
__IOREG(DTSA104, 0xFFFFAA00, __READ_WRITE, uint32);
__IOREG(DTDA104, 0xFFFFAA04, __READ_WRITE, uint32);
__IOREG(DTTC104, 0xFFFFAA08, __READ_WRITE, uint32);
__IOREG(DTTCT104, 0xFFFFAA0C, __READ_WRITE, uint32);
__IOREG(DTRSA104, 0xFFFFAA10, __READ_WRITE, uint32);
__IOREG(DTRDA104, 0xFFFFAA14, __READ_WRITE, uint32);
__IOREG(DTRTC104, 0xFFFFAA18, __READ_WRITE, uint32);
__IOREG(DTTCC104, 0xFFFFAA1C, __READ_WRITE, uint32);
__IOREG(DTFSL104, 0xFFFFAA20, __READ_WRITE, uint32);
__IOREG(DTFST104, 0xFFFFAA24, __READ, uint32);
__IOREG(DTFSS104, 0xFFFFAA28, __READ_WRITE, uint32);
__IOREG(DTFSC104, 0xFFFFAA2C, __READ_WRITE, uint32);
__IOREG(DTSA105, 0xFFFFAA40, __READ_WRITE, uint32);
__IOREG(DTDA105, 0xFFFFAA44, __READ_WRITE, uint32);
__IOREG(DTTC105, 0xFFFFAA48, __READ_WRITE, uint32);
__IOREG(DTTCT105, 0xFFFFAA4C, __READ_WRITE, uint32);
__IOREG(DTRSA105, 0xFFFFAA50, __READ_WRITE, uint32);
__IOREG(DTRDA105, 0xFFFFAA54, __READ_WRITE, uint32);
__IOREG(DTRTC105, 0xFFFFAA58, __READ_WRITE, uint32);
__IOREG(DTTCC105, 0xFFFFAA5C, __READ_WRITE, uint32);
__IOREG(DTFSL105, 0xFFFFAA60, __READ_WRITE, uint32);
__IOREG(DTFST105, 0xFFFFAA64, __READ, uint32);
__IOREG(DTFSS105, 0xFFFFAA68, __READ_WRITE, uint32);
__IOREG(DTFSC105, 0xFFFFAA6C, __READ_WRITE, uint32);
__IOREG(DTSA106, 0xFFFFAA80, __READ_WRITE, uint32);
__IOREG(DTDA106, 0xFFFFAA84, __READ_WRITE, uint32);
__IOREG(DTTC106, 0xFFFFAA88, __READ_WRITE, uint32);
__IOREG(DTTCT106, 0xFFFFAA8C, __READ_WRITE, uint32);
__IOREG(DTRSA106, 0xFFFFAA90, __READ_WRITE, uint32);
__IOREG(DTRDA106, 0xFFFFAA94, __READ_WRITE, uint32);
__IOREG(DTRTC106, 0xFFFFAA98, __READ_WRITE, uint32);
__IOREG(DTTCC106, 0xFFFFAA9C, __READ_WRITE, uint32);
__IOREG(DTFSL106, 0xFFFFAAA0, __READ_WRITE, uint32);
__IOREG(DTFST106, 0xFFFFAAA4, __READ, uint32);
__IOREG(DTFSS106, 0xFFFFAAA8, __READ_WRITE, uint32);
__IOREG(DTFSC106, 0xFFFFAAAC, __READ_WRITE, uint32);
__IOREG(DTSA107, 0xFFFFAAC0, __READ_WRITE, uint32);
__IOREG(DTDA107, 0xFFFFAAC4, __READ_WRITE, uint32);
__IOREG(DTTC107, 0xFFFFAAC8, __READ_WRITE, uint32);
__IOREG(DTTCT107, 0xFFFFAACC, __READ_WRITE, uint32);
__IOREG(DTRSA107, 0xFFFFAAD0, __READ_WRITE, uint32);
__IOREG(DTRDA107, 0xFFFFAAD4, __READ_WRITE, uint32);
__IOREG(DTRTC107, 0xFFFFAAD8, __READ_WRITE, uint32);
__IOREG(DTTCC107, 0xFFFFAADC, __READ_WRITE, uint32);
__IOREG(DTFSL107, 0xFFFFAAE0, __READ_WRITE, uint32);
__IOREG(DTFST107, 0xFFFFAAE4, __READ, uint32);
__IOREG(DTFSS107, 0xFFFFAAE8, __READ_WRITE, uint32);
__IOREG(DTFSC107, 0xFFFFAAEC, __READ_WRITE, uint32);
__IOREG(DTSA108, 0xFFFFAB00, __READ_WRITE, uint32);
__IOREG(DTDA108, 0xFFFFAB04, __READ_WRITE, uint32);
__IOREG(DTTC108, 0xFFFFAB08, __READ_WRITE, uint32);
__IOREG(DTTCT108, 0xFFFFAB0C, __READ_WRITE, uint32);
__IOREG(DTRSA108, 0xFFFFAB10, __READ_WRITE, uint32);
__IOREG(DTRDA108, 0xFFFFAB14, __READ_WRITE, uint32);
__IOREG(DTRTC108, 0xFFFFAB18, __READ_WRITE, uint32);
__IOREG(DTTCC108, 0xFFFFAB1C, __READ_WRITE, uint32);
__IOREG(DTFSL108, 0xFFFFAB20, __READ_WRITE, uint32);
__IOREG(DTFST108, 0xFFFFAB24, __READ, uint32);
__IOREG(DTFSS108, 0xFFFFAB28, __READ_WRITE, uint32);
__IOREG(DTFSC108, 0xFFFFAB2C, __READ_WRITE, uint32);
__IOREG(DTSA109, 0xFFFFAB40, __READ_WRITE, uint32);
__IOREG(DTDA109, 0xFFFFAB44, __READ_WRITE, uint32);
__IOREG(DTTC109, 0xFFFFAB48, __READ_WRITE, uint32);
__IOREG(DTTCT109, 0xFFFFAB4C, __READ_WRITE, uint32);
__IOREG(DTRSA109, 0xFFFFAB50, __READ_WRITE, uint32);
__IOREG(DTRDA109, 0xFFFFAB54, __READ_WRITE, uint32);
__IOREG(DTRTC109, 0xFFFFAB58, __READ_WRITE, uint32);
__IOREG(DTTCC109, 0xFFFFAB5C, __READ_WRITE, uint32);
__IOREG(DTFSL109, 0xFFFFAB60, __READ_WRITE, uint32);
__IOREG(DTFST109, 0xFFFFAB64, __READ, uint32);
__IOREG(DTFSS109, 0xFFFFAB68, __READ_WRITE, uint32);
__IOREG(DTFSC109, 0xFFFFAB6C, __READ_WRITE, uint32);
__IOREG(DTSA110, 0xFFFFAB80, __READ_WRITE, uint32);
__IOREG(DTDA110, 0xFFFFAB84, __READ_WRITE, uint32);
__IOREG(DTTC110, 0xFFFFAB88, __READ_WRITE, uint32);
__IOREG(DTTCT110, 0xFFFFAB8C, __READ_WRITE, uint32);
__IOREG(DTRSA110, 0xFFFFAB90, __READ_WRITE, uint32);
__IOREG(DTRDA110, 0xFFFFAB94, __READ_WRITE, uint32);
__IOREG(DTRTC110, 0xFFFFAB98, __READ_WRITE, uint32);
__IOREG(DTTCC110, 0xFFFFAB9C, __READ_WRITE, uint32);
__IOREG(DTFSL110, 0xFFFFABA0, __READ_WRITE, uint32);
__IOREG(DTFST110, 0xFFFFABA4, __READ, uint32);
__IOREG(DTFSS110, 0xFFFFABA8, __READ_WRITE, uint32);
__IOREG(DTFSC110, 0xFFFFABAC, __READ_WRITE, uint32);
__IOREG(DTSA111, 0xFFFFABC0, __READ_WRITE, uint32);
__IOREG(DTDA111, 0xFFFFABC4, __READ_WRITE, uint32);
__IOREG(DTTC111, 0xFFFFABC8, __READ_WRITE, uint32);
__IOREG(DTTCT111, 0xFFFFABCC, __READ_WRITE, uint32);
__IOREG(DTRSA111, 0xFFFFABD0, __READ_WRITE, uint32);
__IOREG(DTRDA111, 0xFFFFABD4, __READ_WRITE, uint32);
__IOREG(DTRTC111, 0xFFFFABD8, __READ_WRITE, uint32);
__IOREG(DTTCC111, 0xFFFFABDC, __READ_WRITE, uint32);
__IOREG(DTFSL111, 0xFFFFABE0, __READ_WRITE, uint32);
__IOREG(DTFST111, 0xFFFFABE4, __READ, uint32);
__IOREG(DTFSS111, 0xFFFFABE8, __READ_WRITE, uint32);
__IOREG(DTFSC111, 0xFFFFABEC, __READ_WRITE, uint32);
__IOREG(DTSA112, 0xFFFFAC00, __READ_WRITE, uint32);
__IOREG(DTDA112, 0xFFFFAC04, __READ_WRITE, uint32);
__IOREG(DTTC112, 0xFFFFAC08, __READ_WRITE, uint32);
__IOREG(DTTCT112, 0xFFFFAC0C, __READ_WRITE, uint32);
__IOREG(DTRSA112, 0xFFFFAC10, __READ_WRITE, uint32);
__IOREG(DTRDA112, 0xFFFFAC14, __READ_WRITE, uint32);
__IOREG(DTRTC112, 0xFFFFAC18, __READ_WRITE, uint32);
__IOREG(DTTCC112, 0xFFFFAC1C, __READ_WRITE, uint32);
__IOREG(DTFSL112, 0xFFFFAC20, __READ_WRITE, uint32);
__IOREG(DTFST112, 0xFFFFAC24, __READ, uint32);
__IOREG(DTFSS112, 0xFFFFAC28, __READ_WRITE, uint32);
__IOREG(DTFSC112, 0xFFFFAC2C, __READ_WRITE, uint32);
__IOREG(DTSA113, 0xFFFFAC40, __READ_WRITE, uint32);
__IOREG(DTDA113, 0xFFFFAC44, __READ_WRITE, uint32);
__IOREG(DTTC113, 0xFFFFAC48, __READ_WRITE, uint32);
__IOREG(DTTCT113, 0xFFFFAC4C, __READ_WRITE, uint32);
__IOREG(DTRSA113, 0xFFFFAC50, __READ_WRITE, uint32);
__IOREG(DTRDA113, 0xFFFFAC54, __READ_WRITE, uint32);
__IOREG(DTRTC113, 0xFFFFAC58, __READ_WRITE, uint32);
__IOREG(DTTCC113, 0xFFFFAC5C, __READ_WRITE, uint32);
__IOREG(DTFSL113, 0xFFFFAC60, __READ_WRITE, uint32);
__IOREG(DTFST113, 0xFFFFAC64, __READ, uint32);
__IOREG(DTFSS113, 0xFFFFAC68, __READ_WRITE, uint32);
__IOREG(DTFSC113, 0xFFFFAC6C, __READ_WRITE, uint32);
__IOREG(DTSA114, 0xFFFFAC80, __READ_WRITE, uint32);
__IOREG(DTDA114, 0xFFFFAC84, __READ_WRITE, uint32);
__IOREG(DTTC114, 0xFFFFAC88, __READ_WRITE, uint32);
__IOREG(DTTCT114, 0xFFFFAC8C, __READ_WRITE, uint32);
__IOREG(DTRSA114, 0xFFFFAC90, __READ_WRITE, uint32);
__IOREG(DTRDA114, 0xFFFFAC94, __READ_WRITE, uint32);
__IOREG(DTRTC114, 0xFFFFAC98, __READ_WRITE, uint32);
__IOREG(DTTCC114, 0xFFFFAC9C, __READ_WRITE, uint32);
__IOREG(DTFSL114, 0xFFFFACA0, __READ_WRITE, uint32);
__IOREG(DTFST114, 0xFFFFACA4, __READ, uint32);
__IOREG(DTFSS114, 0xFFFFACA8, __READ_WRITE, uint32);
__IOREG(DTFSC114, 0xFFFFACAC, __READ_WRITE, uint32);
__IOREG(DTSA115, 0xFFFFACC0, __READ_WRITE, uint32);
__IOREG(DTDA115, 0xFFFFACC4, __READ_WRITE, uint32);
__IOREG(DTTC115, 0xFFFFACC8, __READ_WRITE, uint32);
__IOREG(DTTCT115, 0xFFFFACCC, __READ_WRITE, uint32);
__IOREG(DTRSA115, 0xFFFFACD0, __READ_WRITE, uint32);
__IOREG(DTRDA115, 0xFFFFACD4, __READ_WRITE, uint32);
__IOREG(DTRTC115, 0xFFFFACD8, __READ_WRITE, uint32);
__IOREG(DTTCC115, 0xFFFFACDC, __READ_WRITE, uint32);
__IOREG(DTFSL115, 0xFFFFACE0, __READ_WRITE, uint32);
__IOREG(DTFST115, 0xFFFFACE4, __READ, uint32);
__IOREG(DTFSS115, 0xFFFFACE8, __READ_WRITE, uint32);
__IOREG(DTFSC115, 0xFFFFACEC, __READ_WRITE, uint32);
__IOREG(DTSA116, 0xFFFFAD00, __READ_WRITE, uint32);
__IOREG(DTDA116, 0xFFFFAD04, __READ_WRITE, uint32);
__IOREG(DTTC116, 0xFFFFAD08, __READ_WRITE, uint32);
__IOREG(DTTCT116, 0xFFFFAD0C, __READ_WRITE, uint32);
__IOREG(DTRSA116, 0xFFFFAD10, __READ_WRITE, uint32);
__IOREG(DTRDA116, 0xFFFFAD14, __READ_WRITE, uint32);
__IOREG(DTRTC116, 0xFFFFAD18, __READ_WRITE, uint32);
__IOREG(DTTCC116, 0xFFFFAD1C, __READ_WRITE, uint32);
__IOREG(DTFSL116, 0xFFFFAD20, __READ_WRITE, uint32);
__IOREG(DTFST116, 0xFFFFAD24, __READ, uint32);
__IOREG(DTFSS116, 0xFFFFAD28, __READ_WRITE, uint32);
__IOREG(DTFSC116, 0xFFFFAD2C, __READ_WRITE, uint32);
__IOREG(DTSA117, 0xFFFFAD40, __READ_WRITE, uint32);
__IOREG(DTDA117, 0xFFFFAD44, __READ_WRITE, uint32);
__IOREG(DTTC117, 0xFFFFAD48, __READ_WRITE, uint32);
__IOREG(DTTCT117, 0xFFFFAD4C, __READ_WRITE, uint32);
__IOREG(DTRSA117, 0xFFFFAD50, __READ_WRITE, uint32);
__IOREG(DTRDA117, 0xFFFFAD54, __READ_WRITE, uint32);
__IOREG(DTRTC117, 0xFFFFAD58, __READ_WRITE, uint32);
__IOREG(DTTCC117, 0xFFFFAD5C, __READ_WRITE, uint32);
__IOREG(DTFSL117, 0xFFFFAD60, __READ_WRITE, uint32);
__IOREG(DTFST117, 0xFFFFAD64, __READ, uint32);
__IOREG(DTFSS117, 0xFFFFAD68, __READ_WRITE, uint32);
__IOREG(DTFSC117, 0xFFFFAD6C, __READ_WRITE, uint32);
__IOREG(DTSA118, 0xFFFFAD80, __READ_WRITE, uint32);
__IOREG(DTDA118, 0xFFFFAD84, __READ_WRITE, uint32);
__IOREG(DTTC118, 0xFFFFAD88, __READ_WRITE, uint32);
__IOREG(DTTCT118, 0xFFFFAD8C, __READ_WRITE, uint32);
__IOREG(DTRSA118, 0xFFFFAD90, __READ_WRITE, uint32);
__IOREG(DTRDA118, 0xFFFFAD94, __READ_WRITE, uint32);
__IOREG(DTRTC118, 0xFFFFAD98, __READ_WRITE, uint32);
__IOREG(DTTCC118, 0xFFFFAD9C, __READ_WRITE, uint32);
__IOREG(DTFSL118, 0xFFFFADA0, __READ_WRITE, uint32);
__IOREG(DTFST118, 0xFFFFADA4, __READ, uint32);
__IOREG(DTFSS118, 0xFFFFADA8, __READ_WRITE, uint32);
__IOREG(DTFSC118, 0xFFFFADAC, __READ_WRITE, uint32);
__IOREG(DTSA119, 0xFFFFADC0, __READ_WRITE, uint32);
__IOREG(DTDA119, 0xFFFFADC4, __READ_WRITE, uint32);
__IOREG(DTTC119, 0xFFFFADC8, __READ_WRITE, uint32);
__IOREG(DTTCT119, 0xFFFFADCC, __READ_WRITE, uint32);
__IOREG(DTRSA119, 0xFFFFADD0, __READ_WRITE, uint32);
__IOREG(DTRDA119, 0xFFFFADD4, __READ_WRITE, uint32);
__IOREG(DTRTC119, 0xFFFFADD8, __READ_WRITE, uint32);
__IOREG(DTTCC119, 0xFFFFADDC, __READ_WRITE, uint32);
__IOREG(DTFSL119, 0xFFFFADE0, __READ_WRITE, uint32);
__IOREG(DTFST119, 0xFFFFADE4, __READ, uint32);
__IOREG(DTFSS119, 0xFFFFADE8, __READ_WRITE, uint32);
__IOREG(DTFSC119, 0xFFFFADEC, __READ_WRITE, uint32);
__IOREG(DTSA120, 0xFFFFAE00, __READ_WRITE, uint32);
__IOREG(DTDA120, 0xFFFFAE04, __READ_WRITE, uint32);
__IOREG(DTTC120, 0xFFFFAE08, __READ_WRITE, uint32);
__IOREG(DTTCT120, 0xFFFFAE0C, __READ_WRITE, uint32);
__IOREG(DTRSA120, 0xFFFFAE10, __READ_WRITE, uint32);
__IOREG(DTRDA120, 0xFFFFAE14, __READ_WRITE, uint32);
__IOREG(DTRTC120, 0xFFFFAE18, __READ_WRITE, uint32);
__IOREG(DTTCC120, 0xFFFFAE1C, __READ_WRITE, uint32);
__IOREG(DTFSL120, 0xFFFFAE20, __READ_WRITE, uint32);
__IOREG(DTFST120, 0xFFFFAE24, __READ, uint32);
__IOREG(DTFSS120, 0xFFFFAE28, __READ_WRITE, uint32);
__IOREG(DTFSC120, 0xFFFFAE2C, __READ_WRITE, uint32);
__IOREG(DTSA121, 0xFFFFAE40, __READ_WRITE, uint32);
__IOREG(DTDA121, 0xFFFFAE44, __READ_WRITE, uint32);
__IOREG(DTTC121, 0xFFFFAE48, __READ_WRITE, uint32);
__IOREG(DTTCT121, 0xFFFFAE4C, __READ_WRITE, uint32);
__IOREG(DTRSA121, 0xFFFFAE50, __READ_WRITE, uint32);
__IOREG(DTRDA121, 0xFFFFAE54, __READ_WRITE, uint32);
__IOREG(DTRTC121, 0xFFFFAE58, __READ_WRITE, uint32);
__IOREG(DTTCC121, 0xFFFFAE5C, __READ_WRITE, uint32);
__IOREG(DTFSL121, 0xFFFFAE60, __READ_WRITE, uint32);
__IOREG(DTFST121, 0xFFFFAE64, __READ, uint32);
__IOREG(DTFSS121, 0xFFFFAE68, __READ_WRITE, uint32);
__IOREG(DTFSC121, 0xFFFFAE6C, __READ_WRITE, uint32);
__IOREG(DTSA122, 0xFFFFAE80, __READ_WRITE, uint32);
__IOREG(DTDA122, 0xFFFFAE84, __READ_WRITE, uint32);
__IOREG(DTTC122, 0xFFFFAE88, __READ_WRITE, uint32);
__IOREG(DTTCT122, 0xFFFFAE8C, __READ_WRITE, uint32);
__IOREG(DTRSA122, 0xFFFFAE90, __READ_WRITE, uint32);
__IOREG(DTRDA122, 0xFFFFAE94, __READ_WRITE, uint32);
__IOREG(DTRTC122, 0xFFFFAE98, __READ_WRITE, uint32);
__IOREG(DTTCC122, 0xFFFFAE9C, __READ_WRITE, uint32);
__IOREG(DTFSL122, 0xFFFFAEA0, __READ_WRITE, uint32);
__IOREG(DTFST122, 0xFFFFAEA4, __READ, uint32);
__IOREG(DTFSS122, 0xFFFFAEA8, __READ_WRITE, uint32);
__IOREG(DTFSC122, 0xFFFFAEAC, __READ_WRITE, uint32);
__IOREG(DTSA123, 0xFFFFAEC0, __READ_WRITE, uint32);
__IOREG(DTDA123, 0xFFFFAEC4, __READ_WRITE, uint32);
__IOREG(DTTC123, 0xFFFFAEC8, __READ_WRITE, uint32);
__IOREG(DTTCT123, 0xFFFFAECC, __READ_WRITE, uint32);
__IOREG(DTRSA123, 0xFFFFAED0, __READ_WRITE, uint32);
__IOREG(DTRDA123, 0xFFFFAED4, __READ_WRITE, uint32);
__IOREG(DTRTC123, 0xFFFFAED8, __READ_WRITE, uint32);
__IOREG(DTTCC123, 0xFFFFAEDC, __READ_WRITE, uint32);
__IOREG(DTFSL123, 0xFFFFAEE0, __READ_WRITE, uint32);
__IOREG(DTFST123, 0xFFFFAEE4, __READ, uint32);
__IOREG(DTFSS123, 0xFFFFAEE8, __READ_WRITE, uint32);
__IOREG(DTFSC123, 0xFFFFAEEC, __READ_WRITE, uint32);
__IOREG(DTSA124, 0xFFFFAF00, __READ_WRITE, uint32);
__IOREG(DTDA124, 0xFFFFAF04, __READ_WRITE, uint32);
__IOREG(DTTC124, 0xFFFFAF08, __READ_WRITE, uint32);
__IOREG(DTTCT124, 0xFFFFAF0C, __READ_WRITE, uint32);
__IOREG(DTRSA124, 0xFFFFAF10, __READ_WRITE, uint32);
__IOREG(DTRDA124, 0xFFFFAF14, __READ_WRITE, uint32);
__IOREG(DTRTC124, 0xFFFFAF18, __READ_WRITE, uint32);
__IOREG(DTTCC124, 0xFFFFAF1C, __READ_WRITE, uint32);
__IOREG(DTFSL124, 0xFFFFAF20, __READ_WRITE, uint32);
__IOREG(DTFST124, 0xFFFFAF24, __READ, uint32);
__IOREG(DTFSS124, 0xFFFFAF28, __READ_WRITE, uint32);
__IOREG(DTFSC124, 0xFFFFAF2C, __READ_WRITE, uint32);
__IOREG(DTSA125, 0xFFFFAF40, __READ_WRITE, uint32);
__IOREG(DTDA125, 0xFFFFAF44, __READ_WRITE, uint32);
__IOREG(DTTC125, 0xFFFFAF48, __READ_WRITE, uint32);
__IOREG(DTTCT125, 0xFFFFAF4C, __READ_WRITE, uint32);
__IOREG(DTRSA125, 0xFFFFAF50, __READ_WRITE, uint32);
__IOREG(DTRDA125, 0xFFFFAF54, __READ_WRITE, uint32);
__IOREG(DTRTC125, 0xFFFFAF58, __READ_WRITE, uint32);
__IOREG(DTTCC125, 0xFFFFAF5C, __READ_WRITE, uint32);
__IOREG(DTFSL125, 0xFFFFAF60, __READ_WRITE, uint32);
__IOREG(DTFST125, 0xFFFFAF64, __READ, uint32);
__IOREG(DTFSS125, 0xFFFFAF68, __READ_WRITE, uint32);
__IOREG(DTFSC125, 0xFFFFAF6C, __READ_WRITE, uint32);
__IOREG(DTSA126, 0xFFFFAF80, __READ_WRITE, uint32);
__IOREG(DTDA126, 0xFFFFAF84, __READ_WRITE, uint32);
__IOREG(DTTC126, 0xFFFFAF88, __READ_WRITE, uint32);
__IOREG(DTTCT126, 0xFFFFAF8C, __READ_WRITE, uint32);
__IOREG(DTRSA126, 0xFFFFAF90, __READ_WRITE, uint32);
__IOREG(DTRDA126, 0xFFFFAF94, __READ_WRITE, uint32);
__IOREG(DTRTC126, 0xFFFFAF98, __READ_WRITE, uint32);
__IOREG(DTTCC126, 0xFFFFAF9C, __READ_WRITE, uint32);
__IOREG(DTFSL126, 0xFFFFAFA0, __READ_WRITE, uint32);
__IOREG(DTFST126, 0xFFFFAFA4, __READ, uint32);
__IOREG(DTFSS126, 0xFFFFAFA8, __READ_WRITE, uint32);
__IOREG(DTFSC126, 0xFFFFAFAC, __READ_WRITE, uint32);
__IOREG(DTSA127, 0xFFFFAFC0, __READ_WRITE, uint32);
__IOREG(DTDA127, 0xFFFFAFC4, __READ_WRITE, uint32);
__IOREG(DTTC127, 0xFFFFAFC8, __READ_WRITE, uint32);
__IOREG(DTTCT127, 0xFFFFAFCC, __READ_WRITE, uint32);
__IOREG(DTRSA127, 0xFFFFAFD0, __READ_WRITE, uint32);
__IOREG(DTRDA127, 0xFFFFAFD4, __READ_WRITE, uint32);
__IOREG(DTRTC127, 0xFFFFAFD8, __READ_WRITE, uint32);
__IOREG(DTTCC127, 0xFFFFAFDC, __READ_WRITE, uint32);
__IOREG(DTFSL127, 0xFFFFAFE0, __READ_WRITE, uint32);
__IOREG(DTFST127, 0xFFFFAFE4, __READ, uint32);
__IOREG(DTFSS127, 0xFFFFAFE8, __READ_WRITE, uint32);
__IOREG(DTFSC127, 0xFFFFAFEC, __READ_WRITE, uint32);
__IOREG(EIC32, 0xFFFFB040, __READ_WRITE, uint16);
__IOREG(EIC32L, 0xFFFFB040, __READ_WRITE, uint8);
__IOREG(EIC32H, 0xFFFFB041, __READ_WRITE, uint8);
__IOREG(EIC33, 0xFFFFB042, __READ_WRITE, uint16);
__IOREG(EIC33L, 0xFFFFB042, __READ_WRITE, uint8);
__IOREG(EIC33H, 0xFFFFB043, __READ_WRITE, uint8);
__IOREG(EIC34, 0xFFFFB044, __READ_WRITE, uint16);
__IOREG(EIC34L, 0xFFFFB044, __READ_WRITE, uint8);
__IOREG(EIC34H, 0xFFFFB045, __READ_WRITE, uint8);
__IOREG(EIC35, 0xFFFFB046, __READ_WRITE, uint16);
__IOREG(EIC35L, 0xFFFFB046, __READ_WRITE, uint8);
__IOREG(EIC35H, 0xFFFFB047, __READ_WRITE, uint8);
__IOREG(EIC36, 0xFFFFB048, __READ_WRITE, uint16);
__IOREG(EIC36L, 0xFFFFB048, __READ_WRITE, uint8);
__IOREG(EIC36H, 0xFFFFB049, __READ_WRITE, uint8);
__IOREG(EIC37, 0xFFFFB04A, __READ_WRITE, uint16);
__IOREG(EIC37L, 0xFFFFB04A, __READ_WRITE, uint8);
__IOREG(EIC37H, 0xFFFFB04B, __READ_WRITE, uint8);
__IOREG(EIC38, 0xFFFFB04C, __READ_WRITE, uint16);
__IOREG(EIC38L, 0xFFFFB04C, __READ_WRITE, uint8);
__IOREG(EIC38H, 0xFFFFB04D, __READ_WRITE, uint8);
__IOREG(EIC39, 0xFFFFB04E, __READ_WRITE, uint16);
__IOREG(EIC39L, 0xFFFFB04E, __READ_WRITE, uint8);
__IOREG(EIC39H, 0xFFFFB04F, __READ_WRITE, uint8);
__IOREG(EIC40, 0xFFFFB050, __READ_WRITE, uint16);
__IOREG(EIC40L, 0xFFFFB050, __READ_WRITE, uint8);
__IOREG(EIC40H, 0xFFFFB051, __READ_WRITE, uint8);
__IOREG(EIC41, 0xFFFFB052, __READ_WRITE, uint16);
__IOREG(EIC41L, 0xFFFFB052, __READ_WRITE, uint8);
__IOREG(EIC41H, 0xFFFFB053, __READ_WRITE, uint8);
__IOREG(EIC42, 0xFFFFB054, __READ_WRITE, uint16);
__IOREG(EIC42L, 0xFFFFB054, __READ_WRITE, uint8);
__IOREG(EIC42H, 0xFFFFB055, __READ_WRITE, uint8);
__IOREG(EIC43, 0xFFFFB056, __READ_WRITE, uint16);
__IOREG(EIC43L, 0xFFFFB056, __READ_WRITE, uint8);
__IOREG(EIC43H, 0xFFFFB057, __READ_WRITE, uint8);
__IOREG(EIC44, 0xFFFFB058, __READ_WRITE, uint16);
__IOREG(EIC44L, 0xFFFFB058, __READ_WRITE, uint8);
__IOREG(EIC44H, 0xFFFFB059, __READ_WRITE, uint8);
__IOREG(EIC45, 0xFFFFB05A, __READ_WRITE, uint16);
__IOREG(EIC45L, 0xFFFFB05A, __READ_WRITE, uint8);
__IOREG(EIC45H, 0xFFFFB05B, __READ_WRITE, uint8);
__IOREG(EIC46, 0xFFFFB05C, __READ_WRITE, uint16);
__IOREG(EIC46L, 0xFFFFB05C, __READ_WRITE, uint8);
__IOREG(EIC46H, 0xFFFFB05D, __READ_WRITE, uint8);
__IOREG(EIC47, 0xFFFFB05E, __READ_WRITE, uint16);
__IOREG(EIC47L, 0xFFFFB05E, __READ_WRITE, uint8);
__IOREG(EIC47H, 0xFFFFB05F, __READ_WRITE, uint8);
__IOREG(EIC48, 0xFFFFB060, __READ_WRITE, uint16);
__IOREG(EIC48L, 0xFFFFB060, __READ_WRITE, uint8);
__IOREG(EIC48H, 0xFFFFB061, __READ_WRITE, uint8);
__IOREG(EIC49, 0xFFFFB062, __READ_WRITE, uint16);
__IOREG(EIC49L, 0xFFFFB062, __READ_WRITE, uint8);
__IOREG(EIC49H, 0xFFFFB063, __READ_WRITE, uint8);
__IOREG(EIC50, 0xFFFFB064, __READ_WRITE, uint16);
__IOREG(EIC50L, 0xFFFFB064, __READ_WRITE, uint8);
__IOREG(EIC50H, 0xFFFFB065, __READ_WRITE, uint8);
__IOREG(EIC51, 0xFFFFB066, __READ_WRITE, uint16);
__IOREG(EIC51L, 0xFFFFB066, __READ_WRITE, uint8);
__IOREG(EIC51H, 0xFFFFB067, __READ_WRITE, uint8);
__IOREG(EIC52, 0xFFFFB068, __READ_WRITE, uint16);
__IOREG(EIC52L, 0xFFFFB068, __READ_WRITE, uint8);
__IOREG(EIC52H, 0xFFFFB069, __READ_WRITE, uint8);
__IOREG(EIC53, 0xFFFFB06A, __READ_WRITE, uint16);
__IOREG(EIC53L, 0xFFFFB06A, __READ_WRITE, uint8);
__IOREG(EIC53H, 0xFFFFB06B, __READ_WRITE, uint8);
__IOREG(EIC54, 0xFFFFB06C, __READ_WRITE, uint16);
__IOREG(EIC54L, 0xFFFFB06C, __READ_WRITE, uint8);
__IOREG(EIC54H, 0xFFFFB06D, __READ_WRITE, uint8);
__IOREG(EIC55, 0xFFFFB06E, __READ_WRITE, uint16);
__IOREG(EIC55L, 0xFFFFB06E, __READ_WRITE, uint8);
__IOREG(EIC55H, 0xFFFFB06F, __READ_WRITE, uint8);
__IOREG(EIC56, 0xFFFFB070, __READ_WRITE, uint16);
__IOREG(EIC56L, 0xFFFFB070, __READ_WRITE, uint8);
__IOREG(EIC56H, 0xFFFFB071, __READ_WRITE, uint8);
__IOREG(EIC57, 0xFFFFB072, __READ_WRITE, uint16);
__IOREG(EIC57L, 0xFFFFB072, __READ_WRITE, uint8);
__IOREG(EIC57H, 0xFFFFB073, __READ_WRITE, uint8);
__IOREG(EIC58, 0xFFFFB074, __READ_WRITE, uint16);
__IOREG(EIC58L, 0xFFFFB074, __READ_WRITE, uint8);
__IOREG(EIC58H, 0xFFFFB075, __READ_WRITE, uint8);
__IOREG(EIC59, 0xFFFFB076, __READ_WRITE, uint16);
__IOREG(EIC59L, 0xFFFFB076, __READ_WRITE, uint8);
__IOREG(EIC59H, 0xFFFFB077, __READ_WRITE, uint8);
__IOREG(EIC60, 0xFFFFB078, __READ_WRITE, uint16);
__IOREG(EIC60L, 0xFFFFB078, __READ_WRITE, uint8);
__IOREG(EIC60H, 0xFFFFB079, __READ_WRITE, uint8);
__IOREG(EIC61, 0xFFFFB07A, __READ_WRITE, uint16);
__IOREG(EIC61L, 0xFFFFB07A, __READ_WRITE, uint8);
__IOREG(EIC61H, 0xFFFFB07B, __READ_WRITE, uint8);
__IOREG(EIC62, 0xFFFFB07C, __READ_WRITE, uint16);
__IOREG(EIC62L, 0xFFFFB07C, __READ_WRITE, uint8);
__IOREG(EIC62H, 0xFFFFB07D, __READ_WRITE, uint8);
__IOREG(EIC63, 0xFFFFB07E, __READ_WRITE, uint16);
__IOREG(EIC63L, 0xFFFFB07E, __READ_WRITE, uint8);
__IOREG(EIC63H, 0xFFFFB07F, __READ_WRITE, uint8);
__IOREG(EIC64, 0xFFFFB080, __READ_WRITE, uint16);
__IOREG(EIC64L, 0xFFFFB080, __READ_WRITE, uint8);
__IOREG(EIC64H, 0xFFFFB081, __READ_WRITE, uint8);
__IOREG(EIC65, 0xFFFFB082, __READ_WRITE, uint16);
__IOREG(EIC65L, 0xFFFFB082, __READ_WRITE, uint8);
__IOREG(EIC65H, 0xFFFFB083, __READ_WRITE, uint8);
__IOREG(EIC66, 0xFFFFB084, __READ_WRITE, uint16);
__IOREG(EIC66L, 0xFFFFB084, __READ_WRITE, uint8);
__IOREG(EIC66H, 0xFFFFB085, __READ_WRITE, uint8);
__IOREG(EIC67, 0xFFFFB086, __READ_WRITE, uint16);
__IOREG(EIC67L, 0xFFFFB086, __READ_WRITE, uint8);
__IOREG(EIC67H, 0xFFFFB087, __READ_WRITE, uint8);
__IOREG(EIC68, 0xFFFFB088, __READ_WRITE, uint16);
__IOREG(EIC68L, 0xFFFFB088, __READ_WRITE, uint8);
__IOREG(EIC68H, 0xFFFFB089, __READ_WRITE, uint8);
__IOREG(EIC69, 0xFFFFB08A, __READ_WRITE, uint16);
__IOREG(EIC69L, 0xFFFFB08A, __READ_WRITE, uint8);
__IOREG(EIC69H, 0xFFFFB08B, __READ_WRITE, uint8);
__IOREG(EIC70, 0xFFFFB08C, __READ_WRITE, uint16);
__IOREG(EIC70L, 0xFFFFB08C, __READ_WRITE, uint8);
__IOREG(EIC70H, 0xFFFFB08D, __READ_WRITE, uint8);
__IOREG(EIC71, 0xFFFFB08E, __READ_WRITE, uint16);
__IOREG(EIC71L, 0xFFFFB08E, __READ_WRITE, uint8);
__IOREG(EIC71H, 0xFFFFB08F, __READ_WRITE, uint8);
__IOREG(EIC72, 0xFFFFB090, __READ_WRITE, uint16);
__IOREG(EIC72L, 0xFFFFB090, __READ_WRITE, uint8);
__IOREG(EIC72H, 0xFFFFB091, __READ_WRITE, uint8);
__IOREG(EIC73, 0xFFFFB092, __READ_WRITE, uint16);
__IOREG(EIC73L, 0xFFFFB092, __READ_WRITE, uint8);
__IOREG(EIC73H, 0xFFFFB093, __READ_WRITE, uint8);
__IOREG(EIC74, 0xFFFFB094, __READ_WRITE, uint16);
__IOREG(EIC74L, 0xFFFFB094, __READ_WRITE, uint8);
__IOREG(EIC74H, 0xFFFFB095, __READ_WRITE, uint8);
__IOREG(EIC75, 0xFFFFB096, __READ_WRITE, uint16);
__IOREG(EIC75L, 0xFFFFB096, __READ_WRITE, uint8);
__IOREG(EIC75H, 0xFFFFB097, __READ_WRITE, uint8);
__IOREG(EIC76, 0xFFFFB098, __READ_WRITE, uint16);
__IOREG(EIC76L, 0xFFFFB098, __READ_WRITE, uint8);
__IOREG(EIC76H, 0xFFFFB099, __READ_WRITE, uint8);
__IOREG(EIC77, 0xFFFFB09A, __READ_WRITE, uint16);
__IOREG(EIC77L, 0xFFFFB09A, __READ_WRITE, uint8);
__IOREG(EIC77H, 0xFFFFB09B, __READ_WRITE, uint8);
__IOREG(EIC78, 0xFFFFB09C, __READ_WRITE, uint16);
__IOREG(EIC78L, 0xFFFFB09C, __READ_WRITE, uint8);
__IOREG(EIC78H, 0xFFFFB09D, __READ_WRITE, uint8);
__IOREG(EIC79, 0xFFFFB09E, __READ_WRITE, uint16);
__IOREG(EIC79L, 0xFFFFB09E, __READ_WRITE, uint8);
__IOREG(EIC79H, 0xFFFFB09F, __READ_WRITE, uint8);
__IOREG(EIC80, 0xFFFFB0A0, __READ_WRITE, uint16);
__IOREG(EIC80L, 0xFFFFB0A0, __READ_WRITE, uint8);
__IOREG(EIC80H, 0xFFFFB0A1, __READ_WRITE, uint8);
__IOREG(EIC81, 0xFFFFB0A2, __READ_WRITE, uint16);
__IOREG(EIC81L, 0xFFFFB0A2, __READ_WRITE, uint8);
__IOREG(EIC81H, 0xFFFFB0A3, __READ_WRITE, uint8);
__IOREG(EIC82, 0xFFFFB0A4, __READ_WRITE, uint16);
__IOREG(EIC82L, 0xFFFFB0A4, __READ_WRITE, uint8);
__IOREG(EIC82H, 0xFFFFB0A5, __READ_WRITE, uint8);
__IOREG(EIC83, 0xFFFFB0A6, __READ_WRITE, uint16);
__IOREG(EIC83L, 0xFFFFB0A6, __READ_WRITE, uint8);
__IOREG(EIC83H, 0xFFFFB0A7, __READ_WRITE, uint8);
__IOREG(EIC84, 0xFFFFB0A8, __READ_WRITE, uint16);
__IOREG(EIC84L, 0xFFFFB0A8, __READ_WRITE, uint8);
__IOREG(EIC84H, 0xFFFFB0A9, __READ_WRITE, uint8);
__IOREG(EIC85, 0xFFFFB0AA, __READ_WRITE, uint16);
__IOREG(EIC85L, 0xFFFFB0AA, __READ_WRITE, uint8);
__IOREG(EIC85H, 0xFFFFB0AB, __READ_WRITE, uint8);
__IOREG(EIC86, 0xFFFFB0AC, __READ_WRITE, uint16);
__IOREG(EIC86L, 0xFFFFB0AC, __READ_WRITE, uint8);
__IOREG(EIC86H, 0xFFFFB0AD, __READ_WRITE, uint8);
__IOREG(EIC87, 0xFFFFB0AE, __READ_WRITE, uint16);
__IOREG(EIC87L, 0xFFFFB0AE, __READ_WRITE, uint8);
__IOREG(EIC87H, 0xFFFFB0AF, __READ_WRITE, uint8);
__IOREG(EIC88, 0xFFFFB0B0, __READ_WRITE, uint16);
__IOREG(EIC88L, 0xFFFFB0B0, __READ_WRITE, uint8);
__IOREG(EIC88H, 0xFFFFB0B1, __READ_WRITE, uint8);
__IOREG(EIC89, 0xFFFFB0B2, __READ_WRITE, uint16);
__IOREG(EIC89L, 0xFFFFB0B2, __READ_WRITE, uint8);
__IOREG(EIC89H, 0xFFFFB0B3, __READ_WRITE, uint8);
__IOREG(EIC90, 0xFFFFB0B4, __READ_WRITE, uint16);
__IOREG(EIC90L, 0xFFFFB0B4, __READ_WRITE, uint8);
__IOREG(EIC90H, 0xFFFFB0B5, __READ_WRITE, uint8);
__IOREG(EIC91, 0xFFFFB0B6, __READ_WRITE, uint16);
__IOREG(EIC91L, 0xFFFFB0B6, __READ_WRITE, uint8);
__IOREG(EIC91H, 0xFFFFB0B7, __READ_WRITE, uint8);
__IOREG(EIC92, 0xFFFFB0B8, __READ_WRITE, uint16);
__IOREG(EIC92L, 0xFFFFB0B8, __READ_WRITE, uint8);
__IOREG(EIC92H, 0xFFFFB0B9, __READ_WRITE, uint8);
__IOREG(EIC93, 0xFFFFB0BA, __READ_WRITE, uint16);
__IOREG(EIC93L, 0xFFFFB0BA, __READ_WRITE, uint8);
__IOREG(EIC93H, 0xFFFFB0BB, __READ_WRITE, uint8);
__IOREG(EIC94, 0xFFFFB0BC, __READ_WRITE, uint16);
__IOREG(EIC94L, 0xFFFFB0BC, __READ_WRITE, uint8);
__IOREG(EIC94H, 0xFFFFB0BD, __READ_WRITE, uint8);
__IOREG(EIC95, 0xFFFFB0BE, __READ_WRITE, uint16);
__IOREG(EIC95L, 0xFFFFB0BE, __READ_WRITE, uint8);
__IOREG(EIC95H, 0xFFFFB0BF, __READ_WRITE, uint8);
__IOREG(EIC96, 0xFFFFB0C0, __READ_WRITE, uint16);
__IOREG(EIC96L, 0xFFFFB0C0, __READ_WRITE, uint8);
__IOREG(EIC96H, 0xFFFFB0C1, __READ_WRITE, uint8);
__IOREG(EIC97, 0xFFFFB0C2, __READ_WRITE, uint16);
__IOREG(EIC97L, 0xFFFFB0C2, __READ_WRITE, uint8);
__IOREG(EIC97H, 0xFFFFB0C3, __READ_WRITE, uint8);
__IOREG(EIC98, 0xFFFFB0C4, __READ_WRITE, uint16);
__IOREG(EIC98L, 0xFFFFB0C4, __READ_WRITE, uint8);
__IOREG(EIC98H, 0xFFFFB0C5, __READ_WRITE, uint8);
__IOREG(EIC99, 0xFFFFB0C6, __READ_WRITE, uint16);
__IOREG(EIC99L, 0xFFFFB0C6, __READ_WRITE, uint8);
__IOREG(EIC99H, 0xFFFFB0C7, __READ_WRITE, uint8);
__IOREG(EIC100, 0xFFFFB0C8, __READ_WRITE, uint16);
__IOREG(EIC100L, 0xFFFFB0C8, __READ_WRITE, uint8);
__IOREG(EIC100H, 0xFFFFB0C9, __READ_WRITE, uint8);
__IOREG(EIC101, 0xFFFFB0CA, __READ_WRITE, uint16);
__IOREG(EIC101L, 0xFFFFB0CA, __READ_WRITE, uint8);
__IOREG(EIC101H, 0xFFFFB0CB, __READ_WRITE, uint8);
__IOREG(EIC102, 0xFFFFB0CC, __READ_WRITE, uint16);
__IOREG(EIC102L, 0xFFFFB0CC, __READ_WRITE, uint8);
__IOREG(EIC102H, 0xFFFFB0CD, __READ_WRITE, uint8);
__IOREG(EIC103, 0xFFFFB0CE, __READ_WRITE, uint16);
__IOREG(EIC103L, 0xFFFFB0CE, __READ_WRITE, uint8);
__IOREG(EIC103H, 0xFFFFB0CF, __READ_WRITE, uint8);
__IOREG(EIC104, 0xFFFFB0D0, __READ_WRITE, uint16);
__IOREG(EIC104L, 0xFFFFB0D0, __READ_WRITE, uint8);
__IOREG(EIC104H, 0xFFFFB0D1, __READ_WRITE, uint8);
__IOREG(EIC105, 0xFFFFB0D2, __READ_WRITE, uint16);
__IOREG(EIC105L, 0xFFFFB0D2, __READ_WRITE, uint8);
__IOREG(EIC105H, 0xFFFFB0D3, __READ_WRITE, uint8);
__IOREG(EIC106, 0xFFFFB0D4, __READ_WRITE, uint16);
__IOREG(EIC106L, 0xFFFFB0D4, __READ_WRITE, uint8);
__IOREG(EIC106H, 0xFFFFB0D5, __READ_WRITE, uint8);
__IOREG(EIC107, 0xFFFFB0D6, __READ_WRITE, uint16);
__IOREG(EIC107L, 0xFFFFB0D6, __READ_WRITE, uint8);
__IOREG(EIC107H, 0xFFFFB0D7, __READ_WRITE, uint8);
__IOREG(EIC108, 0xFFFFB0D8, __READ_WRITE, uint16);
__IOREG(EIC108L, 0xFFFFB0D8, __READ_WRITE, uint8);
__IOREG(EIC108H, 0xFFFFB0D9, __READ_WRITE, uint8);
__IOREG(EIC109, 0xFFFFB0DA, __READ_WRITE, uint16);
__IOREG(EIC109L, 0xFFFFB0DA, __READ_WRITE, uint8);
__IOREG(EIC109H, 0xFFFFB0DB, __READ_WRITE, uint8);
__IOREG(EIC110, 0xFFFFB0DC, __READ_WRITE, uint16);
__IOREG(EIC110L, 0xFFFFB0DC, __READ_WRITE, uint8);
__IOREG(EIC110H, 0xFFFFB0DD, __READ_WRITE, uint8);
__IOREG(EIC111, 0xFFFFB0DE, __READ_WRITE, uint16);
__IOREG(EIC111L, 0xFFFFB0DE, __READ_WRITE, uint8);
__IOREG(EIC111H, 0xFFFFB0DF, __READ_WRITE, uint8);
__IOREG(EIC112, 0xFFFFB0E0, __READ_WRITE, uint16);
__IOREG(EIC112L, 0xFFFFB0E0, __READ_WRITE, uint8);
__IOREG(EIC112H, 0xFFFFB0E1, __READ_WRITE, uint8);
__IOREG(EIC113, 0xFFFFB0E2, __READ_WRITE, uint16);
__IOREG(EIC113L, 0xFFFFB0E2, __READ_WRITE, uint8);
__IOREG(EIC113H, 0xFFFFB0E3, __READ_WRITE, uint8);
__IOREG(EIC114, 0xFFFFB0E4, __READ_WRITE, uint16);
__IOREG(EIC114L, 0xFFFFB0E4, __READ_WRITE, uint8);
__IOREG(EIC114H, 0xFFFFB0E5, __READ_WRITE, uint8);
__IOREG(EIC115, 0xFFFFB0E6, __READ_WRITE, uint16);
__IOREG(EIC115L, 0xFFFFB0E6, __READ_WRITE, uint8);
__IOREG(EIC115H, 0xFFFFB0E7, __READ_WRITE, uint8);
__IOREG(EIC116, 0xFFFFB0E8, __READ_WRITE, uint16);
__IOREG(EIC116L, 0xFFFFB0E8, __READ_WRITE, uint8);
__IOREG(EIC116H, 0xFFFFB0E9, __READ_WRITE, uint8);
__IOREG(EIC117, 0xFFFFB0EA, __READ_WRITE, uint16);
__IOREG(EIC117L, 0xFFFFB0EA, __READ_WRITE, uint8);
__IOREG(EIC117H, 0xFFFFB0EB, __READ_WRITE, uint8);
__IOREG(EIC118, 0xFFFFB0EC, __READ_WRITE, uint16);
__IOREG(EIC118L, 0xFFFFB0EC, __READ_WRITE, uint8);
__IOREG(EIC118H, 0xFFFFB0ED, __READ_WRITE, uint8);
__IOREG(EIC119, 0xFFFFB0EE, __READ_WRITE, uint16);
__IOREG(EIC119L, 0xFFFFB0EE, __READ_WRITE, uint8);
__IOREG(EIC119H, 0xFFFFB0EF, __READ_WRITE, uint8);
__IOREG(EIC120, 0xFFFFB0F0, __READ_WRITE, uint16);
__IOREG(EIC120L, 0xFFFFB0F0, __READ_WRITE, uint8);
__IOREG(EIC120H, 0xFFFFB0F1, __READ_WRITE, uint8);
__IOREG(EIC121, 0xFFFFB0F2, __READ_WRITE, uint16);
__IOREG(EIC121L, 0xFFFFB0F2, __READ_WRITE, uint8);
__IOREG(EIC121H, 0xFFFFB0F3, __READ_WRITE, uint8);
__IOREG(EIC122, 0xFFFFB0F4, __READ_WRITE, uint16);
__IOREG(EIC122L, 0xFFFFB0F4, __READ_WRITE, uint8);
__IOREG(EIC122H, 0xFFFFB0F5, __READ_WRITE, uint8);
__IOREG(EIC123, 0xFFFFB0F6, __READ_WRITE, uint16);
__IOREG(EIC123L, 0xFFFFB0F6, __READ_WRITE, uint8);
__IOREG(EIC123H, 0xFFFFB0F7, __READ_WRITE, uint8);
__IOREG(EIC124, 0xFFFFB0F8, __READ_WRITE, uint16);
__IOREG(EIC124L, 0xFFFFB0F8, __READ_WRITE, uint8);
__IOREG(EIC124H, 0xFFFFB0F9, __READ_WRITE, uint8);
__IOREG(EIC125, 0xFFFFB0FA, __READ_WRITE, uint16);
__IOREG(EIC125L, 0xFFFFB0FA, __READ_WRITE, uint8);
__IOREG(EIC125H, 0xFFFFB0FB, __READ_WRITE, uint8);
__IOREG(EIC126, 0xFFFFB0FC, __READ_WRITE, uint16);
__IOREG(EIC126L, 0xFFFFB0FC, __READ_WRITE, uint8);
__IOREG(EIC126H, 0xFFFFB0FD, __READ_WRITE, uint8);
__IOREG(EIC127, 0xFFFFB0FE, __READ_WRITE, uint16);
__IOREG(EIC127L, 0xFFFFB0FE, __READ_WRITE, uint8);
__IOREG(EIC127H, 0xFFFFB0FF, __READ_WRITE, uint8);
__IOREG(EIC128, 0xFFFFB100, __READ_WRITE, uint16);
__IOREG(EIC128L, 0xFFFFB100, __READ_WRITE, uint8);
__IOREG(EIC128H, 0xFFFFB101, __READ_WRITE, uint8);
__IOREG(EIC129, 0xFFFFB102, __READ_WRITE, uint16);
__IOREG(EIC129L, 0xFFFFB102, __READ_WRITE, uint8);
__IOREG(EIC129H, 0xFFFFB103, __READ_WRITE, uint8);
__IOREG(EIC130, 0xFFFFB104, __READ_WRITE, uint16);
__IOREG(EIC130L, 0xFFFFB104, __READ_WRITE, uint8);
__IOREG(EIC130H, 0xFFFFB105, __READ_WRITE, uint8);
__IOREG(EIC131, 0xFFFFB106, __READ_WRITE, uint16);
__IOREG(EIC131L, 0xFFFFB106, __READ_WRITE, uint8);
__IOREG(EIC131H, 0xFFFFB107, __READ_WRITE, uint8);
__IOREG(EIC132, 0xFFFFB108, __READ_WRITE, uint16);
__IOREG(EIC132L, 0xFFFFB108, __READ_WRITE, uint8);
__IOREG(EIC132H, 0xFFFFB109, __READ_WRITE, uint8);
__IOREG(EIC133, 0xFFFFB10A, __READ_WRITE, uint16);
__IOREG(EIC133L, 0xFFFFB10A, __READ_WRITE, uint8);
__IOREG(EIC133H, 0xFFFFB10B, __READ_WRITE, uint8);
__IOREG(EIC134, 0xFFFFB10C, __READ_WRITE, uint16);
__IOREG(EIC134L, 0xFFFFB10C, __READ_WRITE, uint8);
__IOREG(EIC134H, 0xFFFFB10D, __READ_WRITE, uint8);
__IOREG(EIC135, 0xFFFFB10E, __READ_WRITE, uint16);
__IOREG(EIC135L, 0xFFFFB10E, __READ_WRITE, uint8);
__IOREG(EIC135H, 0xFFFFB10F, __READ_WRITE, uint8);
__IOREG(EIC136, 0xFFFFB110, __READ_WRITE, uint16);
__IOREG(EIC136L, 0xFFFFB110, __READ_WRITE, uint8);
__IOREG(EIC136H, 0xFFFFB111, __READ_WRITE, uint8);
__IOREG(EIC137, 0xFFFFB112, __READ_WRITE, uint16);
__IOREG(EIC137L, 0xFFFFB112, __READ_WRITE, uint8);
__IOREG(EIC137H, 0xFFFFB113, __READ_WRITE, uint8);
__IOREG(EIC138, 0xFFFFB114, __READ_WRITE, uint16);
__IOREG(EIC138L, 0xFFFFB114, __READ_WRITE, uint8);
__IOREG(EIC138H, 0xFFFFB115, __READ_WRITE, uint8);
__IOREG(EIC139, 0xFFFFB116, __READ_WRITE, uint16);
__IOREG(EIC139L, 0xFFFFB116, __READ_WRITE, uint8);
__IOREG(EIC139H, 0xFFFFB117, __READ_WRITE, uint8);
__IOREG(EIC140, 0xFFFFB118, __READ_WRITE, uint16);
__IOREG(EIC140L, 0xFFFFB118, __READ_WRITE, uint8);
__IOREG(EIC140H, 0xFFFFB119, __READ_WRITE, uint8);
__IOREG(EIC141, 0xFFFFB11A, __READ_WRITE, uint16);
__IOREG(EIC141L, 0xFFFFB11A, __READ_WRITE, uint8);
__IOREG(EIC141H, 0xFFFFB11B, __READ_WRITE, uint8);
__IOREG(EIC142, 0xFFFFB11C, __READ_WRITE, uint16);
__IOREG(EIC142L, 0xFFFFB11C, __READ_WRITE, uint8);
__IOREG(EIC142H, 0xFFFFB11D, __READ_WRITE, uint8);
__IOREG(EIC143, 0xFFFFB11E, __READ_WRITE, uint16);
__IOREG(EIC143L, 0xFFFFB11E, __READ_WRITE, uint8);
__IOREG(EIC143H, 0xFFFFB11F, __READ_WRITE, uint8);
__IOREG(EIC144, 0xFFFFB120, __READ_WRITE, uint16);
__IOREG(EIC144L, 0xFFFFB120, __READ_WRITE, uint8);
__IOREG(EIC144H, 0xFFFFB121, __READ_WRITE, uint8);
__IOREG(EIC145, 0xFFFFB122, __READ_WRITE, uint16);
__IOREG(EIC145L, 0xFFFFB122, __READ_WRITE, uint8);
__IOREG(EIC145H, 0xFFFFB123, __READ_WRITE, uint8);
__IOREG(EIC146, 0xFFFFB124, __READ_WRITE, uint16);
__IOREG(EIC146L, 0xFFFFB124, __READ_WRITE, uint8);
__IOREG(EIC146H, 0xFFFFB125, __READ_WRITE, uint8);
__IOREG(EIC147, 0xFFFFB126, __READ_WRITE, uint16);
__IOREG(EIC147L, 0xFFFFB126, __READ_WRITE, uint8);
__IOREG(EIC147H, 0xFFFFB127, __READ_WRITE, uint8);
__IOREG(EIC148, 0xFFFFB128, __READ_WRITE, uint16);
__IOREG(EIC148L, 0xFFFFB128, __READ_WRITE, uint8);
__IOREG(EIC148H, 0xFFFFB129, __READ_WRITE, uint8);
__IOREG(EIC149, 0xFFFFB12A, __READ_WRITE, uint16);
__IOREG(EIC149L, 0xFFFFB12A, __READ_WRITE, uint8);
__IOREG(EIC149H, 0xFFFFB12B, __READ_WRITE, uint8);
__IOREG(EIC150, 0xFFFFB12C, __READ_WRITE, uint16);
__IOREG(EIC150L, 0xFFFFB12C, __READ_WRITE, uint8);
__IOREG(EIC150H, 0xFFFFB12D, __READ_WRITE, uint8);
__IOREG(EIC151, 0xFFFFB12E, __READ_WRITE, uint16);
__IOREG(EIC151L, 0xFFFFB12E, __READ_WRITE, uint8);
__IOREG(EIC151H, 0xFFFFB12F, __READ_WRITE, uint8);
__IOREG(EIC152, 0xFFFFB130, __READ_WRITE, uint16);
__IOREG(EIC152L, 0xFFFFB130, __READ_WRITE, uint8);
__IOREG(EIC152H, 0xFFFFB131, __READ_WRITE, uint8);
__IOREG(EIC153, 0xFFFFB132, __READ_WRITE, uint16);
__IOREG(EIC153L, 0xFFFFB132, __READ_WRITE, uint8);
__IOREG(EIC153H, 0xFFFFB133, __READ_WRITE, uint8);
__IOREG(EIC154, 0xFFFFB134, __READ_WRITE, uint16);
__IOREG(EIC154L, 0xFFFFB134, __READ_WRITE, uint8);
__IOREG(EIC154H, 0xFFFFB135, __READ_WRITE, uint8);
__IOREG(EIC155, 0xFFFFB136, __READ_WRITE, uint16);
__IOREG(EIC155L, 0xFFFFB136, __READ_WRITE, uint8);
__IOREG(EIC155H, 0xFFFFB137, __READ_WRITE, uint8);
__IOREG(EIC156, 0xFFFFB138, __READ_WRITE, uint16);
__IOREG(EIC156L, 0xFFFFB138, __READ_WRITE, uint8);
__IOREG(EIC156H, 0xFFFFB139, __READ_WRITE, uint8);
__IOREG(EIC157, 0xFFFFB13A, __READ_WRITE, uint16);
__IOREG(EIC157L, 0xFFFFB13A, __READ_WRITE, uint8);
__IOREG(EIC157H, 0xFFFFB13B, __READ_WRITE, uint8);
__IOREG(EIC158, 0xFFFFB13C, __READ_WRITE, uint16);
__IOREG(EIC158L, 0xFFFFB13C, __READ_WRITE, uint8);
__IOREG(EIC158H, 0xFFFFB13D, __READ_WRITE, uint8);
__IOREG(EIC159, 0xFFFFB13E, __READ_WRITE, uint16);
__IOREG(EIC159L, 0xFFFFB13E, __READ_WRITE, uint8);
__IOREG(EIC159H, 0xFFFFB13F, __READ_WRITE, uint8);
__IOREG(EIC160, 0xFFFFB140, __READ_WRITE, uint16);
__IOREG(EIC160L, 0xFFFFB140, __READ_WRITE, uint8);
__IOREG(EIC160H, 0xFFFFB141, __READ_WRITE, uint8);
__IOREG(EIC161, 0xFFFFB142, __READ_WRITE, uint16);
__IOREG(EIC161L, 0xFFFFB142, __READ_WRITE, uint8);
__IOREG(EIC161H, 0xFFFFB143, __READ_WRITE, uint8);
__IOREG(EIC162, 0xFFFFB144, __READ_WRITE, uint16);
__IOREG(EIC162L, 0xFFFFB144, __READ_WRITE, uint8);
__IOREG(EIC162H, 0xFFFFB145, __READ_WRITE, uint8);
__IOREG(EIC163, 0xFFFFB146, __READ_WRITE, uint16);
__IOREG(EIC163L, 0xFFFFB146, __READ_WRITE, uint8);
__IOREG(EIC163H, 0xFFFFB147, __READ_WRITE, uint8);
__IOREG(EIC164, 0xFFFFB148, __READ_WRITE, uint16);
__IOREG(EIC164L, 0xFFFFB148, __READ_WRITE, uint8);
__IOREG(EIC164H, 0xFFFFB149, __READ_WRITE, uint8);
__IOREG(EIC165, 0xFFFFB14A, __READ_WRITE, uint16);
__IOREG(EIC165L, 0xFFFFB14A, __READ_WRITE, uint8);
__IOREG(EIC165H, 0xFFFFB14B, __READ_WRITE, uint8);
__IOREG(EIC166, 0xFFFFB14C, __READ_WRITE, uint16);
__IOREG(EIC166L, 0xFFFFB14C, __READ_WRITE, uint8);
__IOREG(EIC166H, 0xFFFFB14D, __READ_WRITE, uint8);
__IOREG(EIC167, 0xFFFFB14E, __READ_WRITE, uint16);
__IOREG(EIC167L, 0xFFFFB14E, __READ_WRITE, uint8);
__IOREG(EIC167H, 0xFFFFB14F, __READ_WRITE, uint8);
__IOREG(EIC168, 0xFFFFB150, __READ_WRITE, uint16);
__IOREG(EIC168L, 0xFFFFB150, __READ_WRITE, uint8);
__IOREG(EIC168H, 0xFFFFB151, __READ_WRITE, uint8);
__IOREG(EIC169, 0xFFFFB152, __READ_WRITE, uint16);
__IOREG(EIC169L, 0xFFFFB152, __READ_WRITE, uint8);
__IOREG(EIC169H, 0xFFFFB153, __READ_WRITE, uint8);
__IOREG(EIC170, 0xFFFFB154, __READ_WRITE, uint16);
__IOREG(EIC170L, 0xFFFFB154, __READ_WRITE, uint8);
__IOREG(EIC170H, 0xFFFFB155, __READ_WRITE, uint8);
__IOREG(EIC171, 0xFFFFB156, __READ_WRITE, uint16);
__IOREG(EIC171L, 0xFFFFB156, __READ_WRITE, uint8);
__IOREG(EIC171H, 0xFFFFB157, __READ_WRITE, uint8);
__IOREG(EIC172, 0xFFFFB158, __READ_WRITE, uint16);
__IOREG(EIC172L, 0xFFFFB158, __READ_WRITE, uint8);
__IOREG(EIC172H, 0xFFFFB159, __READ_WRITE, uint8);
__IOREG(EIC173, 0xFFFFB15A, __READ_WRITE, uint16);
__IOREG(EIC173L, 0xFFFFB15A, __READ_WRITE, uint8);
__IOREG(EIC173H, 0xFFFFB15B, __READ_WRITE, uint8);
__IOREG(EIC174, 0xFFFFB15C, __READ_WRITE, uint16);
__IOREG(EIC174L, 0xFFFFB15C, __READ_WRITE, uint8);
__IOREG(EIC174H, 0xFFFFB15D, __READ_WRITE, uint8);
__IOREG(EIC175, 0xFFFFB15E, __READ_WRITE, uint16);
__IOREG(EIC175L, 0xFFFFB15E, __READ_WRITE, uint8);
__IOREG(EIC175H, 0xFFFFB15F, __READ_WRITE, uint8);
__IOREG(EIC176, 0xFFFFB160, __READ_WRITE, uint16);
__IOREG(EIC176L, 0xFFFFB160, __READ_WRITE, uint8);
__IOREG(EIC176H, 0xFFFFB161, __READ_WRITE, uint8);
__IOREG(EIC177, 0xFFFFB162, __READ_WRITE, uint16);
__IOREG(EIC177L, 0xFFFFB162, __READ_WRITE, uint8);
__IOREG(EIC177H, 0xFFFFB163, __READ_WRITE, uint8);
__IOREG(EIC178, 0xFFFFB164, __READ_WRITE, uint16);
__IOREG(EIC178L, 0xFFFFB164, __READ_WRITE, uint8);
__IOREG(EIC178H, 0xFFFFB165, __READ_WRITE, uint8);
__IOREG(EIC179, 0xFFFFB166, __READ_WRITE, uint16);
__IOREG(EIC179L, 0xFFFFB166, __READ_WRITE, uint8);
__IOREG(EIC179H, 0xFFFFB167, __READ_WRITE, uint8);
__IOREG(EIC180, 0xFFFFB168, __READ_WRITE, uint16);
__IOREG(EIC180L, 0xFFFFB168, __READ_WRITE, uint8);
__IOREG(EIC180H, 0xFFFFB169, __READ_WRITE, uint8);
__IOREG(EIC181, 0xFFFFB16A, __READ_WRITE, uint16);
__IOREG(EIC181L, 0xFFFFB16A, __READ_WRITE, uint8);
__IOREG(EIC181H, 0xFFFFB16B, __READ_WRITE, uint8);
__IOREG(EIC182, 0xFFFFB16C, __READ_WRITE, uint16);
__IOREG(EIC182L, 0xFFFFB16C, __READ_WRITE, uint8);
__IOREG(EIC182H, 0xFFFFB16D, __READ_WRITE, uint8);
__IOREG(EIC183, 0xFFFFB16E, __READ_WRITE, uint16);
__IOREG(EIC183L, 0xFFFFB16E, __READ_WRITE, uint8);
__IOREG(EIC183H, 0xFFFFB16F, __READ_WRITE, uint8);
__IOREG(EIC184, 0xFFFFB170, __READ_WRITE, uint16);
__IOREG(EIC184L, 0xFFFFB170, __READ_WRITE, uint8);
__IOREG(EIC184H, 0xFFFFB171, __READ_WRITE, uint8);
__IOREG(EIC185, 0xFFFFB172, __READ_WRITE, uint16);
__IOREG(EIC185L, 0xFFFFB172, __READ_WRITE, uint8);
__IOREG(EIC185H, 0xFFFFB173, __READ_WRITE, uint8);
__IOREG(EIC186, 0xFFFFB174, __READ_WRITE, uint16);
__IOREG(EIC186L, 0xFFFFB174, __READ_WRITE, uint8);
__IOREG(EIC186H, 0xFFFFB175, __READ_WRITE, uint8);
__IOREG(EIC187, 0xFFFFB176, __READ_WRITE, uint16);
__IOREG(EIC187L, 0xFFFFB176, __READ_WRITE, uint8);
__IOREG(EIC187H, 0xFFFFB177, __READ_WRITE, uint8);
__IOREG(EIC188, 0xFFFFB178, __READ_WRITE, uint16);
__IOREG(EIC188L, 0xFFFFB178, __READ_WRITE, uint8);
__IOREG(EIC188H, 0xFFFFB179, __READ_WRITE, uint8);
__IOREG(EIC189, 0xFFFFB17A, __READ_WRITE, uint16);
__IOREG(EIC189L, 0xFFFFB17A, __READ_WRITE, uint8);
__IOREG(EIC189H, 0xFFFFB17B, __READ_WRITE, uint8);
__IOREG(EIC190, 0xFFFFB17C, __READ_WRITE, uint16);
__IOREG(EIC190L, 0xFFFFB17C, __READ_WRITE, uint8);
__IOREG(EIC190H, 0xFFFFB17D, __READ_WRITE, uint8);
__IOREG(EIC191, 0xFFFFB17E, __READ_WRITE, uint16);
__IOREG(EIC191L, 0xFFFFB17E, __READ_WRITE, uint8);
__IOREG(EIC191H, 0xFFFFB17F, __READ_WRITE, uint8);
__IOREG(EIC192, 0xFFFFB180, __READ_WRITE, uint16);
__IOREG(EIC192L, 0xFFFFB180, __READ_WRITE, uint8);
__IOREG(EIC192H, 0xFFFFB181, __READ_WRITE, uint8);
__IOREG(EIC193, 0xFFFFB182, __READ_WRITE, uint16);
__IOREG(EIC193L, 0xFFFFB182, __READ_WRITE, uint8);
__IOREG(EIC193H, 0xFFFFB183, __READ_WRITE, uint8);
__IOREG(EIC194, 0xFFFFB184, __READ_WRITE, uint16);
__IOREG(EIC194L, 0xFFFFB184, __READ_WRITE, uint8);
__IOREG(EIC194H, 0xFFFFB185, __READ_WRITE, uint8);
__IOREG(EIC195, 0xFFFFB186, __READ_WRITE, uint16);
__IOREG(EIC195L, 0xFFFFB186, __READ_WRITE, uint8);
__IOREG(EIC195H, 0xFFFFB187, __READ_WRITE, uint8);
__IOREG(EIC196, 0xFFFFB188, __READ_WRITE, uint16);
__IOREG(EIC196L, 0xFFFFB188, __READ_WRITE, uint8);
__IOREG(EIC196H, 0xFFFFB189, __READ_WRITE, uint8);
__IOREG(EIC197, 0xFFFFB18A, __READ_WRITE, uint16);
__IOREG(EIC197L, 0xFFFFB18A, __READ_WRITE, uint8);
__IOREG(EIC197H, 0xFFFFB18B, __READ_WRITE, uint8);
__IOREG(EIC198, 0xFFFFB18C, __READ_WRITE, uint16);
__IOREG(EIC198L, 0xFFFFB18C, __READ_WRITE, uint8);
__IOREG(EIC198H, 0xFFFFB18D, __READ_WRITE, uint8);
__IOREG(EIC199, 0xFFFFB18E, __READ_WRITE, uint16);
__IOREG(EIC199L, 0xFFFFB18E, __READ_WRITE, uint8);
__IOREG(EIC199H, 0xFFFFB18F, __READ_WRITE, uint8);
__IOREG(EIC200, 0xFFFFB190, __READ_WRITE, uint16);
__IOREG(EIC200L, 0xFFFFB190, __READ_WRITE, uint8);
__IOREG(EIC200H, 0xFFFFB191, __READ_WRITE, uint8);
__IOREG(EIC201, 0xFFFFB192, __READ_WRITE, uint16);
__IOREG(EIC201L, 0xFFFFB192, __READ_WRITE, uint8);
__IOREG(EIC201H, 0xFFFFB193, __READ_WRITE, uint8);
__IOREG(EIC202, 0xFFFFB194, __READ_WRITE, uint16);
__IOREG(EIC202L, 0xFFFFB194, __READ_WRITE, uint8);
__IOREG(EIC202H, 0xFFFFB195, __READ_WRITE, uint8);
__IOREG(EIC203, 0xFFFFB196, __READ_WRITE, uint16);
__IOREG(EIC203L, 0xFFFFB196, __READ_WRITE, uint8);
__IOREG(EIC203H, 0xFFFFB197, __READ_WRITE, uint8);
__IOREG(EIC204, 0xFFFFB198, __READ_WRITE, uint16);
__IOREG(EIC204L, 0xFFFFB198, __READ_WRITE, uint8);
__IOREG(EIC204H, 0xFFFFB199, __READ_WRITE, uint8);
__IOREG(EIC205, 0xFFFFB19A, __READ_WRITE, uint16);
__IOREG(EIC205L, 0xFFFFB19A, __READ_WRITE, uint8);
__IOREG(EIC205H, 0xFFFFB19B, __READ_WRITE, uint8);
__IOREG(EIC206, 0xFFFFB19C, __READ_WRITE, uint16);
__IOREG(EIC206L, 0xFFFFB19C, __READ_WRITE, uint8);
__IOREG(EIC206H, 0xFFFFB19D, __READ_WRITE, uint8);
__IOREG(EIC207, 0xFFFFB19E, __READ_WRITE, uint16);
__IOREG(EIC207L, 0xFFFFB19E, __READ_WRITE, uint8);
__IOREG(EIC207H, 0xFFFFB19F, __READ_WRITE, uint8);
__IOREG(EIC208, 0xFFFFB1A0, __READ_WRITE, uint16);
__IOREG(EIC208L, 0xFFFFB1A0, __READ_WRITE, uint8);
__IOREG(EIC208H, 0xFFFFB1A1, __READ_WRITE, uint8);
__IOREG(EIC209, 0xFFFFB1A2, __READ_WRITE, uint16);
__IOREG(EIC209L, 0xFFFFB1A2, __READ_WRITE, uint8);
__IOREG(EIC209H, 0xFFFFB1A3, __READ_WRITE, uint8);
__IOREG(EIC210, 0xFFFFB1A4, __READ_WRITE, uint16);
__IOREG(EIC210L, 0xFFFFB1A4, __READ_WRITE, uint8);
__IOREG(EIC210H, 0xFFFFB1A5, __READ_WRITE, uint8);
__IOREG(EIC211, 0xFFFFB1A6, __READ_WRITE, uint16);
__IOREG(EIC211L, 0xFFFFB1A6, __READ_WRITE, uint8);
__IOREG(EIC211H, 0xFFFFB1A7, __READ_WRITE, uint8);
__IOREG(EIC212, 0xFFFFB1A8, __READ_WRITE, uint16);
__IOREG(EIC212L, 0xFFFFB1A8, __READ_WRITE, uint8);
__IOREG(EIC212H, 0xFFFFB1A9, __READ_WRITE, uint8);
__IOREG(EIC213, 0xFFFFB1AA, __READ_WRITE, uint16);
__IOREG(EIC213L, 0xFFFFB1AA, __READ_WRITE, uint8);
__IOREG(EIC213H, 0xFFFFB1AB, __READ_WRITE, uint8);
__IOREG(EIC214, 0xFFFFB1AC, __READ_WRITE, uint16);
__IOREG(EIC214L, 0xFFFFB1AC, __READ_WRITE, uint8);
__IOREG(EIC214H, 0xFFFFB1AD, __READ_WRITE, uint8);
__IOREG(EIC215, 0xFFFFB1AE, __READ_WRITE, uint16);
__IOREG(EIC215L, 0xFFFFB1AE, __READ_WRITE, uint8);
__IOREG(EIC215H, 0xFFFFB1AF, __READ_WRITE, uint8);
__IOREG(EIC216, 0xFFFFB1B0, __READ_WRITE, uint16);
__IOREG(EIC216L, 0xFFFFB1B0, __READ_WRITE, uint8);
__IOREG(EIC216H, 0xFFFFB1B1, __READ_WRITE, uint8);
__IOREG(EIC217, 0xFFFFB1B2, __READ_WRITE, uint16);
__IOREG(EIC217L, 0xFFFFB1B2, __READ_WRITE, uint8);
__IOREG(EIC217H, 0xFFFFB1B3, __READ_WRITE, uint8);
__IOREG(EIC218, 0xFFFFB1B4, __READ_WRITE, uint16);
__IOREG(EIC218L, 0xFFFFB1B4, __READ_WRITE, uint8);
__IOREG(EIC218H, 0xFFFFB1B5, __READ_WRITE, uint8);
__IOREG(EIC219, 0xFFFFB1B6, __READ_WRITE, uint16);
__IOREG(EIC219L, 0xFFFFB1B6, __READ_WRITE, uint8);
__IOREG(EIC219H, 0xFFFFB1B7, __READ_WRITE, uint8);
__IOREG(EIC220, 0xFFFFB1B8, __READ_WRITE, uint16);
__IOREG(EIC220L, 0xFFFFB1B8, __READ_WRITE, uint8);
__IOREG(EIC220H, 0xFFFFB1B9, __READ_WRITE, uint8);
__IOREG(EIC221, 0xFFFFB1BA, __READ_WRITE, uint16);
__IOREG(EIC221L, 0xFFFFB1BA, __READ_WRITE, uint8);
__IOREG(EIC221H, 0xFFFFB1BB, __READ_WRITE, uint8);
__IOREG(EIC222, 0xFFFFB1BC, __READ_WRITE, uint16);
__IOREG(EIC222L, 0xFFFFB1BC, __READ_WRITE, uint8);
__IOREG(EIC222H, 0xFFFFB1BD, __READ_WRITE, uint8);
__IOREG(EIC223, 0xFFFFB1BE, __READ_WRITE, uint16);
__IOREG(EIC223L, 0xFFFFB1BE, __READ_WRITE, uint8);
__IOREG(EIC223H, 0xFFFFB1BF, __READ_WRITE, uint8);
__IOREG(EIC224, 0xFFFFB1C0, __READ_WRITE, uint16);
__IOREG(EIC224L, 0xFFFFB1C0, __READ_WRITE, uint8);
__IOREG(EIC224H, 0xFFFFB1C1, __READ_WRITE, uint8);
__IOREG(EIC225, 0xFFFFB1C2, __READ_WRITE, uint16);
__IOREG(EIC225L, 0xFFFFB1C2, __READ_WRITE, uint8);
__IOREG(EIC225H, 0xFFFFB1C3, __READ_WRITE, uint8);
__IOREG(EIC226, 0xFFFFB1C4, __READ_WRITE, uint16);
__IOREG(EIC226L, 0xFFFFB1C4, __READ_WRITE, uint8);
__IOREG(EIC226H, 0xFFFFB1C5, __READ_WRITE, uint8);
__IOREG(EIC227, 0xFFFFB1C6, __READ_WRITE, uint16);
__IOREG(EIC227L, 0xFFFFB1C6, __READ_WRITE, uint8);
__IOREG(EIC227H, 0xFFFFB1C7, __READ_WRITE, uint8);
__IOREG(EIC228, 0xFFFFB1C8, __READ_WRITE, uint16);
__IOREG(EIC228L, 0xFFFFB1C8, __READ_WRITE, uint8);
__IOREG(EIC228H, 0xFFFFB1C9, __READ_WRITE, uint8);
__IOREG(EIC229, 0xFFFFB1CA, __READ_WRITE, uint16);
__IOREG(EIC229L, 0xFFFFB1CA, __READ_WRITE, uint8);
__IOREG(EIC229H, 0xFFFFB1CB, __READ_WRITE, uint8);
__IOREG(EIC230, 0xFFFFB1CC, __READ_WRITE, uint16);
__IOREG(EIC230L, 0xFFFFB1CC, __READ_WRITE, uint8);
__IOREG(EIC230H, 0xFFFFB1CD, __READ_WRITE, uint8);
__IOREG(EIC231, 0xFFFFB1CE, __READ_WRITE, uint16);
__IOREG(EIC231L, 0xFFFFB1CE, __READ_WRITE, uint8);
__IOREG(EIC231H, 0xFFFFB1CF, __READ_WRITE, uint8);
__IOREG(EIC232, 0xFFFFB1D0, __READ_WRITE, uint16);
__IOREG(EIC232L, 0xFFFFB1D0, __READ_WRITE, uint8);
__IOREG(EIC232H, 0xFFFFB1D1, __READ_WRITE, uint8);
__IOREG(EIC233, 0xFFFFB1D2, __READ_WRITE, uint16);
__IOREG(EIC233L, 0xFFFFB1D2, __READ_WRITE, uint8);
__IOREG(EIC233H, 0xFFFFB1D3, __READ_WRITE, uint8);
__IOREG(EIC234, 0xFFFFB1D4, __READ_WRITE, uint16);
__IOREG(EIC234L, 0xFFFFB1D4, __READ_WRITE, uint8);
__IOREG(EIC234H, 0xFFFFB1D5, __READ_WRITE, uint8);
__IOREG(EIC235, 0xFFFFB1D6, __READ_WRITE, uint16);
__IOREG(EIC235L, 0xFFFFB1D6, __READ_WRITE, uint8);
__IOREG(EIC235H, 0xFFFFB1D7, __READ_WRITE, uint8);
__IOREG(EIC236, 0xFFFFB1D8, __READ_WRITE, uint16);
__IOREG(EIC236L, 0xFFFFB1D8, __READ_WRITE, uint8);
__IOREG(EIC236H, 0xFFFFB1D9, __READ_WRITE, uint8);
__IOREG(EIC237, 0xFFFFB1DA, __READ_WRITE, uint16);
__IOREG(EIC237L, 0xFFFFB1DA, __READ_WRITE, uint8);
__IOREG(EIC237H, 0xFFFFB1DB, __READ_WRITE, uint8);
__IOREG(EIC238, 0xFFFFB1DC, __READ_WRITE, uint16);
__IOREG(EIC238L, 0xFFFFB1DC, __READ_WRITE, uint8);
__IOREG(EIC238H, 0xFFFFB1DD, __READ_WRITE, uint8);
__IOREG(EIC239, 0xFFFFB1DE, __READ_WRITE, uint16);
__IOREG(EIC239L, 0xFFFFB1DE, __READ_WRITE, uint8);
__IOREG(EIC239H, 0xFFFFB1DF, __READ_WRITE, uint8);
__IOREG(EIC240, 0xFFFFB1E0, __READ_WRITE, uint16);
__IOREG(EIC240L, 0xFFFFB1E0, __READ_WRITE, uint8);
__IOREG(EIC240H, 0xFFFFB1E1, __READ_WRITE, uint8);
__IOREG(EIC241, 0xFFFFB1E2, __READ_WRITE, uint16);
__IOREG(EIC241L, 0xFFFFB1E2, __READ_WRITE, uint8);
__IOREG(EIC241H, 0xFFFFB1E3, __READ_WRITE, uint8);
__IOREG(EIC242, 0xFFFFB1E4, __READ_WRITE, uint16);
__IOREG(EIC242L, 0xFFFFB1E4, __READ_WRITE, uint8);
__IOREG(EIC242H, 0xFFFFB1E5, __READ_WRITE, uint8);
__IOREG(EIC243, 0xFFFFB1E6, __READ_WRITE, uint16);
__IOREG(EIC243L, 0xFFFFB1E6, __READ_WRITE, uint8);
__IOREG(EIC243H, 0xFFFFB1E7, __READ_WRITE, uint8);
__IOREG(EIC244, 0xFFFFB1E8, __READ_WRITE, uint16);
__IOREG(EIC244L, 0xFFFFB1E8, __READ_WRITE, uint8);
__IOREG(EIC244H, 0xFFFFB1E9, __READ_WRITE, uint8);
__IOREG(EIC245, 0xFFFFB1EA, __READ_WRITE, uint16);
__IOREG(EIC245L, 0xFFFFB1EA, __READ_WRITE, uint8);
__IOREG(EIC245H, 0xFFFFB1EB, __READ_WRITE, uint8);
__IOREG(IMR1, 0xFFFFB404, __READ_WRITE, uint32);
__IOREG(IMR1L, 0xFFFFB404, __READ_WRITE, uint16);
__IOREG(IMR1LL, 0xFFFFB404, __READ_WRITE, uint8);
__IOREG(IMR1LH, 0xFFFFB405, __READ_WRITE, uint8);
__IOREG(IMR1H, 0xFFFFB406, __READ_WRITE, uint16);
__IOREG(IMR1HL, 0xFFFFB406, __READ_WRITE, uint8);
__IOREG(IMR1HH, 0xFFFFB407, __READ_WRITE, uint8);
#define IMR1EIMK32             (((volatile __bitf_T *)0xFFFFB404)->bit00)
#define IMR1EIMK33             (((volatile __bitf_T *)0xFFFFB404)->bit01)
#define IMR1EIMK34             (((volatile __bitf_T *)0xFFFFB404)->bit02)
#define IMR1EIMK35             (((volatile __bitf_T *)0xFFFFB404)->bit03)
#define IMR1EIMK36             (((volatile __bitf_T *)0xFFFFB404)->bit04)
#define IMR1EIMK37             (((volatile __bitf_T *)0xFFFFB404)->bit05)
#define IMR1EIMK38             (((volatile __bitf_T *)0xFFFFB404)->bit06)
#define IMR1EIMK39             (((volatile __bitf_T *)0xFFFFB404)->bit07)
#define IMR1EIMK40             (((volatile __bitf_T *)0xFFFFB405)->bit00)
#define IMR1EIMK41             (((volatile __bitf_T *)0xFFFFB405)->bit01)
#define IMR1EIMK42             (((volatile __bitf_T *)0xFFFFB405)->bit02)
#define IMR1EIMK43             (((volatile __bitf_T *)0xFFFFB405)->bit03)
#define IMR1EIMK44             (((volatile __bitf_T *)0xFFFFB405)->bit04)
#define IMR1EIMK45             (((volatile __bitf_T *)0xFFFFB405)->bit05)
#define IMR1EIMK46             (((volatile __bitf_T *)0xFFFFB405)->bit06)
#define IMR1EIMK47             (((volatile __bitf_T *)0xFFFFB405)->bit07)
#define IMR1EIMK48             (((volatile __bitf_T *)0xFFFFB406)->bit00)
#define IMR1EIMK49             (((volatile __bitf_T *)0xFFFFB406)->bit01)
#define IMR1EIMK50             (((volatile __bitf_T *)0xFFFFB406)->bit02)
#define IMR1EIMK51             (((volatile __bitf_T *)0xFFFFB406)->bit03)
#define IMR1EIMK52             (((volatile __bitf_T *)0xFFFFB406)->bit04)
#define IMR1EIMK53             (((volatile __bitf_T *)0xFFFFB406)->bit05)
#define IMR1EIMK54             (((volatile __bitf_T *)0xFFFFB406)->bit06)
#define IMR1EIMK55             (((volatile __bitf_T *)0xFFFFB406)->bit07)
#define IMR1EIMK56             (((volatile __bitf_T *)0xFFFFB407)->bit00)
#define IMR1EIMK57             (((volatile __bitf_T *)0xFFFFB407)->bit01)
#define IMR1EIMK58             (((volatile __bitf_T *)0xFFFFB407)->bit02)
#define IMR1EIMK59             (((volatile __bitf_T *)0xFFFFB407)->bit03)
#define IMR1EIMK60             (((volatile __bitf_T *)0xFFFFB407)->bit04)
#define IMR1EIMK61             (((volatile __bitf_T *)0xFFFFB407)->bit05)
#define IMR1EIMK62             (((volatile __bitf_T *)0xFFFFB407)->bit06)
#define IMR1EIMK63             (((volatile __bitf_T *)0xFFFFB407)->bit07)
__IOREG(IMR2, 0xFFFFB408, __READ_WRITE, uint32);
__IOREG(IMR2L, 0xFFFFB408, __READ_WRITE, uint16);
__IOREG(IMR2LL, 0xFFFFB408, __READ_WRITE, uint8);
__IOREG(IMR2LH, 0xFFFFB409, __READ_WRITE, uint8);
__IOREG(IMR2H, 0xFFFFB40A, __READ_WRITE, uint16);
__IOREG(IMR2HL, 0xFFFFB40A, __READ_WRITE, uint8);
__IOREG(IMR2HH, 0xFFFFB40B, __READ_WRITE, uint8);
#define IMR2EIMK64             (((volatile __bitf_T *)0xFFFFB408)->bit00)
#define IMR2EIMK65             (((volatile __bitf_T *)0xFFFFB408)->bit01)
#define IMR2EIMK66             (((volatile __bitf_T *)0xFFFFB408)->bit02)
#define IMR2EIMK67             (((volatile __bitf_T *)0xFFFFB408)->bit03)
#define IMR2EIMK68             (((volatile __bitf_T *)0xFFFFB408)->bit04)
#define IMR2EIMK69             (((volatile __bitf_T *)0xFFFFB408)->bit05)
#define IMR2EIMK70             (((volatile __bitf_T *)0xFFFFB408)->bit06)
#define IMR2EIMK71             (((volatile __bitf_T *)0xFFFFB408)->bit07)
#define IMR2EIMK72             (((volatile __bitf_T *)0xFFFFB409)->bit00)
#define IMR2EIMK73             (((volatile __bitf_T *)0xFFFFB409)->bit01)
#define IMR2EIMK74             (((volatile __bitf_T *)0xFFFFB409)->bit02)
#define IMR2EIMK75             (((volatile __bitf_T *)0xFFFFB409)->bit03)
#define IMR2EIMK76             (((volatile __bitf_T *)0xFFFFB409)->bit04)
#define IMR2EIMK77             (((volatile __bitf_T *)0xFFFFB409)->bit05)
#define IMR2EIMK78             (((volatile __bitf_T *)0xFFFFB409)->bit06)
#define IMR2EIMK79             (((volatile __bitf_T *)0xFFFFB409)->bit07)
#define IMR2EIMK80             (((volatile __bitf_T *)0xFFFFB40A)->bit00)
#define IMR2EIMK81             (((volatile __bitf_T *)0xFFFFB40A)->bit01)
#define IMR2EIMK82             (((volatile __bitf_T *)0xFFFFB40A)->bit02)
#define IMR2EIMK83             (((volatile __bitf_T *)0xFFFFB40A)->bit03)
#define IMR2EIMK84             (((volatile __bitf_T *)0xFFFFB40A)->bit04)
#define IMR2EIMK85             (((volatile __bitf_T *)0xFFFFB40A)->bit05)
#define IMR2EIMK86             (((volatile __bitf_T *)0xFFFFB40A)->bit06)
#define IMR2EIMK87             (((volatile __bitf_T *)0xFFFFB40A)->bit07)
#define IMR2EIMK88             (((volatile __bitf_T *)0xFFFFB40B)->bit00)
#define IMR2EIMK89             (((volatile __bitf_T *)0xFFFFB40B)->bit01)
#define IMR2EIMK90             (((volatile __bitf_T *)0xFFFFB40B)->bit02)
#define IMR2EIMK91             (((volatile __bitf_T *)0xFFFFB40B)->bit03)
#define IMR2EIMK92             (((volatile __bitf_T *)0xFFFFB40B)->bit04)
#define IMR2EIMK93             (((volatile __bitf_T *)0xFFFFB40B)->bit05)
#define IMR2EIMK94             (((volatile __bitf_T *)0xFFFFB40B)->bit06)
#define IMR2EIMK95             (((volatile __bitf_T *)0xFFFFB40B)->bit07)
__IOREG(IMR3, 0xFFFFB40C, __READ_WRITE, uint32);
__IOREG(IMR3L, 0xFFFFB40C, __READ_WRITE, uint16);
__IOREG(IMR3LL, 0xFFFFB40C, __READ_WRITE, uint8);
__IOREG(IMR3LH, 0xFFFFB40D, __READ_WRITE, uint8);
__IOREG(IMR3H, 0xFFFFB40E, __READ_WRITE, uint16);
__IOREG(IMR3HL, 0xFFFFB40E, __READ_WRITE, uint8);
__IOREG(IMR3HH, 0xFFFFB40F, __READ_WRITE, uint8);
#define IMR3EIMK96             (((volatile __bitf_T *)0xFFFFB40C)->bit00)
#define IMR3EIMK97             (((volatile __bitf_T *)0xFFFFB40C)->bit01)
#define IMR3EIMK98             (((volatile __bitf_T *)0xFFFFB40C)->bit02)
#define IMR3EIMK99             (((volatile __bitf_T *)0xFFFFB40C)->bit03)
#define IMR3EIMK100            (((volatile __bitf_T *)0xFFFFB40C)->bit04)
#define IMR3EIMK101            (((volatile __bitf_T *)0xFFFFB40C)->bit05)
#define IMR3EIMK102            (((volatile __bitf_T *)0xFFFFB40C)->bit06)
#define IMR3EIMK103            (((volatile __bitf_T *)0xFFFFB40C)->bit07)
#define IMR3EIMK104            (((volatile __bitf_T *)0xFFFFB40D)->bit00)
#define IMR3EIMK105            (((volatile __bitf_T *)0xFFFFB40D)->bit01)
#define IMR3EIMK106            (((volatile __bitf_T *)0xFFFFB40D)->bit02)
#define IMR3EIMK107            (((volatile __bitf_T *)0xFFFFB40D)->bit03)
#define IMR3EIMK108            (((volatile __bitf_T *)0xFFFFB40D)->bit04)
#define IMR3EIMK109            (((volatile __bitf_T *)0xFFFFB40D)->bit05)
#define IMR3EIMK110            (((volatile __bitf_T *)0xFFFFB40D)->bit06)
#define IMR3EIMK111            (((volatile __bitf_T *)0xFFFFB40D)->bit07)
#define IMR3EIMK112            (((volatile __bitf_T *)0xFFFFB40E)->bit00)
#define IMR3EIMK113            (((volatile __bitf_T *)0xFFFFB40E)->bit01)
#define IMR3EIMK114            (((volatile __bitf_T *)0xFFFFB40E)->bit02)
#define IMR3EIMK115            (((volatile __bitf_T *)0xFFFFB40E)->bit03)
#define IMR3EIMK116            (((volatile __bitf_T *)0xFFFFB40E)->bit04)
#define IMR3EIMK117            (((volatile __bitf_T *)0xFFFFB40E)->bit05)
#define IMR3EIMK118            (((volatile __bitf_T *)0xFFFFB40E)->bit06)
#define IMR3EIMK119            (((volatile __bitf_T *)0xFFFFB40E)->bit07)
#define IMR3EIMK120            (((volatile __bitf_T *)0xFFFFB40F)->bit00)
#define IMR3EIMK121            (((volatile __bitf_T *)0xFFFFB40F)->bit01)
#define IMR3EIMK122            (((volatile __bitf_T *)0xFFFFB40F)->bit02)
#define IMR3EIMK123            (((volatile __bitf_T *)0xFFFFB40F)->bit03)
#define IMR3EIMK124            (((volatile __bitf_T *)0xFFFFB40F)->bit04)
#define IMR3EIMK125            (((volatile __bitf_T *)0xFFFFB40F)->bit05)
#define IMR3EIMK126            (((volatile __bitf_T *)0xFFFFB40F)->bit06)
#define IMR3EIMK127            (((volatile __bitf_T *)0xFFFFB40F)->bit07)
__IOREG(IMR4, 0xFFFFB410, __READ_WRITE, uint32);
__IOREG(IMR4L, 0xFFFFB410, __READ_WRITE, uint16);
__IOREG(IMR4LL, 0xFFFFB410, __READ_WRITE, uint8);
__IOREG(IMR4LH, 0xFFFFB411, __READ_WRITE, uint8);
__IOREG(IMR4H, 0xFFFFB412, __READ_WRITE, uint16);
__IOREG(IMR4HL, 0xFFFFB412, __READ_WRITE, uint8);
__IOREG(IMR4HH, 0xFFFFB413, __READ_WRITE, uint8);
#define IMR4EIMK128            (((volatile __bitf_T *)0xFFFFB410)->bit00)
#define IMR4EIMK129            (((volatile __bitf_T *)0xFFFFB410)->bit01)
#define IMR4EIMK130            (((volatile __bitf_T *)0xFFFFB410)->bit02)
#define IMR4EIMK131            (((volatile __bitf_T *)0xFFFFB410)->bit03)
#define IMR4EIMK132            (((volatile __bitf_T *)0xFFFFB410)->bit04)
#define IMR4EIMK133            (((volatile __bitf_T *)0xFFFFB410)->bit05)
#define IMR4EIMK134            (((volatile __bitf_T *)0xFFFFB410)->bit06)
#define IMR4EIMK135            (((volatile __bitf_T *)0xFFFFB410)->bit07)
#define IMR4EIMK136            (((volatile __bitf_T *)0xFFFFB411)->bit00)
#define IMR4EIMK137            (((volatile __bitf_T *)0xFFFFB411)->bit01)
#define IMR4EIMK138            (((volatile __bitf_T *)0xFFFFB411)->bit02)
#define IMR4EIMK139            (((volatile __bitf_T *)0xFFFFB411)->bit03)
#define IMR4EIMK140            (((volatile __bitf_T *)0xFFFFB411)->bit04)
#define IMR4EIMK141            (((volatile __bitf_T *)0xFFFFB411)->bit05)
#define IMR4EIMK142            (((volatile __bitf_T *)0xFFFFB411)->bit06)
#define IMR4EIMK143            (((volatile __bitf_T *)0xFFFFB411)->bit07)
#define IMR4EIMK144            (((volatile __bitf_T *)0xFFFFB412)->bit00)
#define IMR4EIMK145            (((volatile __bitf_T *)0xFFFFB412)->bit01)
#define IMR4EIMK146            (((volatile __bitf_T *)0xFFFFB412)->bit02)
#define IMR4EIMK147            (((volatile __bitf_T *)0xFFFFB412)->bit03)
#define IMR4EIMK148            (((volatile __bitf_T *)0xFFFFB412)->bit04)
#define IMR4EIMK149            (((volatile __bitf_T *)0xFFFFB412)->bit05)
#define IMR4EIMK150            (((volatile __bitf_T *)0xFFFFB412)->bit06)
#define IMR4EIMK151            (((volatile __bitf_T *)0xFFFFB412)->bit07)
#define IMR4EIMK152            (((volatile __bitf_T *)0xFFFFB413)->bit00)
#define IMR4EIMK153            (((volatile __bitf_T *)0xFFFFB413)->bit01)
#define IMR4EIMK154            (((volatile __bitf_T *)0xFFFFB413)->bit02)
#define IMR4EIMK155            (((volatile __bitf_T *)0xFFFFB413)->bit03)
#define IMR4EIMK156            (((volatile __bitf_T *)0xFFFFB413)->bit04)
#define IMR4EIMK157            (((volatile __bitf_T *)0xFFFFB413)->bit05)
#define IMR4EIMK158            (((volatile __bitf_T *)0xFFFFB413)->bit06)
#define IMR4EIMK159            (((volatile __bitf_T *)0xFFFFB413)->bit07)
__IOREG(IMR5, 0xFFFFB414, __READ_WRITE, uint32);
__IOREG(IMR5L, 0xFFFFB414, __READ_WRITE, uint16);
__IOREG(IMR5LL, 0xFFFFB414, __READ_WRITE, uint8);
__IOREG(IMR5LH, 0xFFFFB415, __READ_WRITE, uint8);
__IOREG(IMR5H, 0xFFFFB416, __READ_WRITE, uint16);
__IOREG(IMR5HL, 0xFFFFB416, __READ_WRITE, uint8);
__IOREG(IMR5HH, 0xFFFFB417, __READ_WRITE, uint8);
#define IMR5EIMK160            (((volatile __bitf_T *)0xFFFFB414)->bit00)
#define IMR5EIMK161            (((volatile __bitf_T *)0xFFFFB414)->bit01)
#define IMR5EIMK162            (((volatile __bitf_T *)0xFFFFB414)->bit02)
#define IMR5EIMK163            (((volatile __bitf_T *)0xFFFFB414)->bit03)
#define IMR5EIMK164            (((volatile __bitf_T *)0xFFFFB414)->bit04)
#define IMR5EIMK165            (((volatile __bitf_T *)0xFFFFB414)->bit05)
#define IMR5EIMK166            (((volatile __bitf_T *)0xFFFFB414)->bit06)
#define IMR5EIMK167            (((volatile __bitf_T *)0xFFFFB414)->bit07)
#define IMR5EIMK168            (((volatile __bitf_T *)0xFFFFB415)->bit00)
#define IMR5EIMK169            (((volatile __bitf_T *)0xFFFFB415)->bit01)
#define IMR5EIMK170            (((volatile __bitf_T *)0xFFFFB415)->bit02)
#define IMR5EIMK171            (((volatile __bitf_T *)0xFFFFB415)->bit03)
#define IMR5EIMK172            (((volatile __bitf_T *)0xFFFFB415)->bit04)
#define IMR5EIMK173            (((volatile __bitf_T *)0xFFFFB415)->bit05)
#define IMR5EIMK174            (((volatile __bitf_T *)0xFFFFB415)->bit06)
#define IMR5EIMK175            (((volatile __bitf_T *)0xFFFFB415)->bit07)
#define IMR5EIMK176            (((volatile __bitf_T *)0xFFFFB416)->bit00)
#define IMR5EIMK177            (((volatile __bitf_T *)0xFFFFB416)->bit01)
#define IMR5EIMK178            (((volatile __bitf_T *)0xFFFFB416)->bit02)
#define IMR5EIMK179            (((volatile __bitf_T *)0xFFFFB416)->bit03)
#define IMR5EIMK180            (((volatile __bitf_T *)0xFFFFB416)->bit04)
#define IMR5EIMK181            (((volatile __bitf_T *)0xFFFFB416)->bit05)
#define IMR5EIMK182            (((volatile __bitf_T *)0xFFFFB416)->bit06)
#define IMR5EIMK183            (((volatile __bitf_T *)0xFFFFB416)->bit07)
#define IMR5EIMK184            (((volatile __bitf_T *)0xFFFFB417)->bit00)
#define IMR5EIMK185            (((volatile __bitf_T *)0xFFFFB417)->bit01)
#define IMR5EIMK186            (((volatile __bitf_T *)0xFFFFB417)->bit02)
#define IMR5EIMK187            (((volatile __bitf_T *)0xFFFFB417)->bit03)
#define IMR5EIMK188            (((volatile __bitf_T *)0xFFFFB417)->bit04)
#define IMR5EIMK189            (((volatile __bitf_T *)0xFFFFB417)->bit05)
#define IMR5EIMK190            (((volatile __bitf_T *)0xFFFFB417)->bit06)
#define IMR5EIMK191            (((volatile __bitf_T *)0xFFFFB417)->bit07)
__IOREG(IMR6, 0xFFFFB418, __READ_WRITE, uint32);
__IOREG(IMR6L, 0xFFFFB418, __READ_WRITE, uint16);
__IOREG(IMR6LL, 0xFFFFB418, __READ_WRITE, uint8);
__IOREG(IMR6LH, 0xFFFFB419, __READ_WRITE, uint8);
__IOREG(IMR6H, 0xFFFFB41A, __READ_WRITE, uint16);
__IOREG(IMR6HL, 0xFFFFB41A, __READ_WRITE, uint8);
__IOREG(IMR6HH, 0xFFFFB41B, __READ_WRITE, uint8);
#define IMR6EIMK192            (((volatile __bitf_T *)0xFFFFB418)->bit00)
#define IMR6EIMK193            (((volatile __bitf_T *)0xFFFFB418)->bit01)
#define IMR6EIMK194            (((volatile __bitf_T *)0xFFFFB418)->bit02)
#define IMR6EIMK195            (((volatile __bitf_T *)0xFFFFB418)->bit03)
#define IMR6EIMK196            (((volatile __bitf_T *)0xFFFFB418)->bit04)
#define IMR6EIMK197            (((volatile __bitf_T *)0xFFFFB418)->bit05)
#define IMR6EIMK198            (((volatile __bitf_T *)0xFFFFB418)->bit06)
#define IMR6EIMK199            (((volatile __bitf_T *)0xFFFFB418)->bit07)
#define IMR6IMK200             (((volatile __bitf_T *)0xFFFFB419)->bit00)
#define IMR6IMK201             (((volatile __bitf_T *)0xFFFFB419)->bit01)
#define IMR6IMK202             (((volatile __bitf_T *)0xFFFFB419)->bit02)
#define IMR6IMK203             (((volatile __bitf_T *)0xFFFFB419)->bit03)
#define IMR6IMK204             (((volatile __bitf_T *)0xFFFFB419)->bit04)
#define IMR6IMK205             (((volatile __bitf_T *)0xFFFFB419)->bit05)
#define IMR6IMK206             (((volatile __bitf_T *)0xFFFFB419)->bit06)
#define IMR6IMK207             (((volatile __bitf_T *)0xFFFFB419)->bit07)
#define IMR6EIMK208            (((volatile __bitf_T *)0xFFFFB41A)->bit00)
#define IMR6EIMK209            (((volatile __bitf_T *)0xFFFFB41A)->bit01)
#define IMR6EIMK210            (((volatile __bitf_T *)0xFFFFB41A)->bit02)
#define IMR6EIMK211            (((volatile __bitf_T *)0xFFFFB41A)->bit03)
#define IMR6EIMK212            (((volatile __bitf_T *)0xFFFFB41A)->bit04)
#define IMR6EIMK213            (((volatile __bitf_T *)0xFFFFB41A)->bit05)
#define IMR6EIMK214            (((volatile __bitf_T *)0xFFFFB41A)->bit06)
#define IMR6EIMK215            (((volatile __bitf_T *)0xFFFFB41A)->bit07)
#define IMR6EIMK216            (((volatile __bitf_T *)0xFFFFB41B)->bit00)
#define IMR6EIMK217            (((volatile __bitf_T *)0xFFFFB41B)->bit01)
#define IMR6EIMK218            (((volatile __bitf_T *)0xFFFFB41B)->bit02)
#define IMR6EIMK219            (((volatile __bitf_T *)0xFFFFB41B)->bit03)
#define IMR6EIMK220            (((volatile __bitf_T *)0xFFFFB41B)->bit04)
#define IMR6EIMK221            (((volatile __bitf_T *)0xFFFFB41B)->bit05)
#define IMR6EIMK222            (((volatile __bitf_T *)0xFFFFB41B)->bit06)
#define IMR6EIMK223            (((volatile __bitf_T *)0xFFFFB41B)->bit07)
__IOREG(IMR7, 0xFFFFB41C, __READ_WRITE, uint32);
__IOREG(IMR7L, 0xFFFFB41C, __READ_WRITE, uint16);
__IOREG(IMR7LL, 0xFFFFB41C, __READ_WRITE, uint8);
__IOREG(IMR7LH, 0xFFFFB41D, __READ_WRITE, uint8);
__IOREG(IMR7H, 0xFFFFB41E, __READ_WRITE, uint16);
__IOREG(IMR7HL, 0xFFFFB41E, __READ_WRITE, uint8);
__IOREG(IMR7HH, 0xFFFFB41F, __READ_WRITE, uint8);
#define IMR7EIMK224            (((volatile __bitf_T *)0xFFFFB41C)->bit00)
#define IMR7EIMK225            (((volatile __bitf_T *)0xFFFFB41C)->bit01)
#define IMR7EIMK226            (((volatile __bitf_T *)0xFFFFB41C)->bit02)
#define IMR7EIMK227            (((volatile __bitf_T *)0xFFFFB41C)->bit03)
#define IMR7EIMK228            (((volatile __bitf_T *)0xFFFFB41C)->bit04)
#define IMR7EIMK229            (((volatile __bitf_T *)0xFFFFB41C)->bit05)
#define IMR7EIMK230            (((volatile __bitf_T *)0xFFFFB41C)->bit06)
#define IMR7EIMK231            (((volatile __bitf_T *)0xFFFFB41C)->bit07)
#define IMR7EIMK232            (((volatile __bitf_T *)0xFFFFB41D)->bit00)
#define IMR7EIMK233            (((volatile __bitf_T *)0xFFFFB41D)->bit01)
#define IMR7EIMK234            (((volatile __bitf_T *)0xFFFFB41D)->bit02)
#define IMR7EIMK235            (((volatile __bitf_T *)0xFFFFB41D)->bit03)
#define IMR7EIMK236            (((volatile __bitf_T *)0xFFFFB41D)->bit04)
#define IMR7EIMK237            (((volatile __bitf_T *)0xFFFFB41D)->bit05)
#define IMR7EIMK238            (((volatile __bitf_T *)0xFFFFB41D)->bit06)
#define IMR7EIMK239            (((volatile __bitf_T *)0xFFFFB41D)->bit07)
#define IMR7EIMK240            (((volatile __bitf_T *)0xFFFFB41E)->bit00)
#define IMR7EIMK241            (((volatile __bitf_T *)0xFFFFB41E)->bit01)
#define IMR7EIMK242            (((volatile __bitf_T *)0xFFFFB41E)->bit02)
#define IMR7EIMK243            (((volatile __bitf_T *)0xFFFFB41E)->bit03)
#define IMR7EIMK244            (((volatile __bitf_T *)0xFFFFB41E)->bit04)
#define IMR7EIMK245            (((volatile __bitf_T *)0xFFFFB41E)->bit05)
#define IMR7EIMK246            (((volatile __bitf_T *)0xFFFFB41E)->bit06)
#define IMR7EIMK247            (((volatile __bitf_T *)0xFFFFB41E)->bit07)
#define IMR7EIMK248            (((volatile __bitf_T *)0xFFFFB41F)->bit00)
#define IMR7EIMK249            (((volatile __bitf_T *)0xFFFFB41F)->bit01)
#define IMR7EIMK250            (((volatile __bitf_T *)0xFFFFB41F)->bit02)
#define IMR7EIMK251            (((volatile __bitf_T *)0xFFFFB41F)->bit03)
#define IMR7EIMK252            (((volatile __bitf_T *)0xFFFFB41F)->bit04)
#define IMR7EIMK253            (((volatile __bitf_T *)0xFFFFB41F)->bit05)
#define IMR7EIMK254            (((volatile __bitf_T *)0xFFFFB41F)->bit06)
#define IMR7EIMK255            (((volatile __bitf_T *)0xFFFFB41F)->bit07)
__IOREG(EIBD32, 0xFFFFB880, __READ_WRITE, uint32);
__IOREG(EIBD33, 0xFFFFB884, __READ_WRITE, uint32);
__IOREG(EIBD34, 0xFFFFB888, __READ_WRITE, uint32);
__IOREG(EIBD35, 0xFFFFB88C, __READ_WRITE, uint32);
__IOREG(EIBD36, 0xFFFFB890, __READ_WRITE, uint32);
__IOREG(EIBD37, 0xFFFFB894, __READ_WRITE, uint32);
__IOREG(EIBD38, 0xFFFFB898, __READ_WRITE, uint32);
__IOREG(EIBD39, 0xFFFFB89C, __READ_WRITE, uint32);
__IOREG(EIBD40, 0xFFFFB8A0, __READ_WRITE, uint32);
__IOREG(EIBD41, 0xFFFFB8A4, __READ_WRITE, uint32);
__IOREG(EIBD42, 0xFFFFB8A8, __READ_WRITE, uint32);
__IOREG(EIBD43, 0xFFFFB8AC, __READ_WRITE, uint32);
__IOREG(EIBD44, 0xFFFFB8B0, __READ_WRITE, uint32);
__IOREG(EIBD45, 0xFFFFB8B4, __READ_WRITE, uint32);
__IOREG(EIBD46, 0xFFFFB8B8, __READ_WRITE, uint32);
__IOREG(EIBD47, 0xFFFFB8BC, __READ_WRITE, uint32);
__IOREG(EIBD48, 0xFFFFB8C0, __READ_WRITE, uint32);
__IOREG(EIBD49, 0xFFFFB8C4, __READ_WRITE, uint32);
__IOREG(EIBD50, 0xFFFFB8C8, __READ_WRITE, uint32);
__IOREG(EIBD51, 0xFFFFB8CC, __READ_WRITE, uint32);
__IOREG(EIBD52, 0xFFFFB8D0, __READ_WRITE, uint32);
__IOREG(EIBD53, 0xFFFFB8D4, __READ_WRITE, uint32);
__IOREG(EIBD54, 0xFFFFB8D8, __READ_WRITE, uint32);
__IOREG(EIBD55, 0xFFFFB8DC, __READ_WRITE, uint32);
__IOREG(EIBD56, 0xFFFFB8E0, __READ_WRITE, uint32);
__IOREG(EIBD57, 0xFFFFB8E4, __READ_WRITE, uint32);
__IOREG(EIBD58, 0xFFFFB8E8, __READ_WRITE, uint32);
__IOREG(EIBD59, 0xFFFFB8EC, __READ_WRITE, uint32);
__IOREG(EIBD60, 0xFFFFB8F0, __READ_WRITE, uint32);
__IOREG(EIBD61, 0xFFFFB8F4, __READ_WRITE, uint32);
__IOREG(EIBD62, 0xFFFFB8F8, __READ_WRITE, uint32);
__IOREG(EIBD63, 0xFFFFB8FC, __READ_WRITE, uint32);
__IOREG(EIBD64, 0xFFFFB900, __READ_WRITE, uint32);
__IOREG(EIBD65, 0xFFFFB904, __READ_WRITE, uint32);
__IOREG(EIBD66, 0xFFFFB908, __READ_WRITE, uint32);
__IOREG(EIBD67, 0xFFFFB90C, __READ_WRITE, uint32);
__IOREG(EIBD68, 0xFFFFB910, __READ_WRITE, uint32);
__IOREG(EIBD69, 0xFFFFB914, __READ_WRITE, uint32);
__IOREG(EIBD70, 0xFFFFB918, __READ_WRITE, uint32);
__IOREG(EIBD71, 0xFFFFB91C, __READ_WRITE, uint32);
__IOREG(EIBD72, 0xFFFFB920, __READ_WRITE, uint32);
__IOREG(EIBD73, 0xFFFFB924, __READ_WRITE, uint32);
__IOREG(EIBD74, 0xFFFFB928, __READ_WRITE, uint32);
__IOREG(EIBD75, 0xFFFFB92C, __READ_WRITE, uint32);
__IOREG(EIBD76, 0xFFFFB930, __READ_WRITE, uint32);
__IOREG(EIBD77, 0xFFFFB934, __READ_WRITE, uint32);
__IOREG(EIBD78, 0xFFFFB938, __READ_WRITE, uint32);
__IOREG(EIBD79, 0xFFFFB93C, __READ_WRITE, uint32);
__IOREG(EIBD80, 0xFFFFB940, __READ_WRITE, uint32);
__IOREG(EIBD81, 0xFFFFB944, __READ_WRITE, uint32);
__IOREG(EIBD82, 0xFFFFB948, __READ_WRITE, uint32);
__IOREG(EIBD83, 0xFFFFB94C, __READ_WRITE, uint32);
__IOREG(EIBD84, 0xFFFFB950, __READ_WRITE, uint32);
__IOREG(EIBD85, 0xFFFFB954, __READ_WRITE, uint32);
__IOREG(EIBD86, 0xFFFFB958, __READ_WRITE, uint32);
__IOREG(EIBD87, 0xFFFFB95C, __READ_WRITE, uint32);
__IOREG(EIBD88, 0xFFFFB960, __READ_WRITE, uint32);
__IOREG(EIBD89, 0xFFFFB964, __READ_WRITE, uint32);
__IOREG(EIBD90, 0xFFFFB968, __READ_WRITE, uint32);
__IOREG(EIBD91, 0xFFFFB96C, __READ_WRITE, uint32);
__IOREG(EIBD92, 0xFFFFB970, __READ_WRITE, uint32);
__IOREG(EIBD93, 0xFFFFB974, __READ_WRITE, uint32);
__IOREG(EIBD94, 0xFFFFB978, __READ_WRITE, uint32);
__IOREG(EIBD95, 0xFFFFB97C, __READ_WRITE, uint32);
__IOREG(EIBD96, 0xFFFFB980, __READ_WRITE, uint32);
__IOREG(EIBD97, 0xFFFFB984, __READ_WRITE, uint32);
__IOREG(EIBD98, 0xFFFFB988, __READ_WRITE, uint32);
__IOREG(EIBD99, 0xFFFFB98C, __READ_WRITE, uint32);
__IOREG(EIBD100, 0xFFFFB990, __READ_WRITE, uint32);
__IOREG(EIBD101, 0xFFFFB994, __READ_WRITE, uint32);
__IOREG(EIBD102, 0xFFFFB998, __READ_WRITE, uint32);
__IOREG(EIBD103, 0xFFFFB99C, __READ_WRITE, uint32);
__IOREG(EIBD104, 0xFFFFB9A0, __READ_WRITE, uint32);
__IOREG(EIBD105, 0xFFFFB9A4, __READ_WRITE, uint32);
__IOREG(EIBD106, 0xFFFFB9A8, __READ_WRITE, uint32);
__IOREG(EIBD107, 0xFFFFB9AC, __READ_WRITE, uint32);
__IOREG(EIBD108, 0xFFFFB9B0, __READ_WRITE, uint32);
__IOREG(EIBD109, 0xFFFFB9B4, __READ_WRITE, uint32);
__IOREG(EIBD110, 0xFFFFB9B8, __READ_WRITE, uint32);
__IOREG(EIBD111, 0xFFFFB9BC, __READ_WRITE, uint32);
__IOREG(EIBD112, 0xFFFFB9C0, __READ_WRITE, uint32);
__IOREG(EIBD113, 0xFFFFB9C4, __READ_WRITE, uint32);
__IOREG(EIBD114, 0xFFFFB9C8, __READ_WRITE, uint32);
__IOREG(EIBD115, 0xFFFFB9CC, __READ_WRITE, uint32);
__IOREG(EIBD116, 0xFFFFB9D0, __READ_WRITE, uint32);
__IOREG(EIBD117, 0xFFFFB9D4, __READ_WRITE, uint32);
__IOREG(EIBD118, 0xFFFFB9D8, __READ_WRITE, uint32);
__IOREG(EIBD119, 0xFFFFB9DC, __READ_WRITE, uint32);
__IOREG(EIBD120, 0xFFFFB9E0, __READ_WRITE, uint32);
__IOREG(EIBD121, 0xFFFFB9E4, __READ_WRITE, uint32);
__IOREG(EIBD122, 0xFFFFB9E8, __READ_WRITE, uint32);
__IOREG(EIBD123, 0xFFFFB9EC, __READ_WRITE, uint32);
__IOREG(EIBD124, 0xFFFFB9F0, __READ_WRITE, uint32);
__IOREG(EIBD125, 0xFFFFB9F4, __READ_WRITE, uint32);
__IOREG(EIBD126, 0xFFFFB9F8, __READ_WRITE, uint32);
__IOREG(EIBD127, 0xFFFFB9FC, __READ_WRITE, uint32);
__IOREG(EIBD128, 0xFFFFBA00, __READ_WRITE, uint32);
__IOREG(EIBD129, 0xFFFFBA04, __READ_WRITE, uint32);
__IOREG(EIBD130, 0xFFFFBA08, __READ_WRITE, uint32);
__IOREG(EIBD131, 0xFFFFBA0C, __READ_WRITE, uint32);
__IOREG(EIBD132, 0xFFFFBA10, __READ_WRITE, uint32);
__IOREG(EIBD133, 0xFFFFBA14, __READ_WRITE, uint32);
__IOREG(EIBD134, 0xFFFFBA18, __READ_WRITE, uint32);
__IOREG(EIBD135, 0xFFFFBA1C, __READ_WRITE, uint32);
__IOREG(EIBD136, 0xFFFFBA20, __READ_WRITE, uint32);
__IOREG(EIBD137, 0xFFFFBA24, __READ_WRITE, uint32);
__IOREG(EIBD138, 0xFFFFBA28, __READ_WRITE, uint32);
__IOREG(EIBD139, 0xFFFFBA2C, __READ_WRITE, uint32);
__IOREG(EIBD140, 0xFFFFBA30, __READ_WRITE, uint32);
__IOREG(EIBD141, 0xFFFFBA34, __READ_WRITE, uint32);
__IOREG(EIBD142, 0xFFFFBA38, __READ_WRITE, uint32);
__IOREG(EIBD143, 0xFFFFBA3C, __READ_WRITE, uint32);
__IOREG(EIBD144, 0xFFFFBA40, __READ_WRITE, uint32);
__IOREG(EIBD145, 0xFFFFBA44, __READ_WRITE, uint32);
__IOREG(EIBD146, 0xFFFFBA48, __READ_WRITE, uint32);
__IOREG(EIBD147, 0xFFFFBA4C, __READ_WRITE, uint32);
__IOREG(EIBD148, 0xFFFFBA50, __READ_WRITE, uint32);
__IOREG(EIBD149, 0xFFFFBA54, __READ_WRITE, uint32);
__IOREG(EIBD150, 0xFFFFBA58, __READ_WRITE, uint32);
__IOREG(EIBD151, 0xFFFFBA5C, __READ_WRITE, uint32);
__IOREG(EIBD152, 0xFFFFBA60, __READ_WRITE, uint32);
__IOREG(EIBD153, 0xFFFFBA64, __READ_WRITE, uint32);
__IOREG(EIBD154, 0xFFFFBA68, __READ_WRITE, uint32);
__IOREG(EIBD155, 0xFFFFBA6C, __READ_WRITE, uint32);
__IOREG(EIBD156, 0xFFFFBA70, __READ_WRITE, uint32);
__IOREG(EIBD157, 0xFFFFBA74, __READ_WRITE, uint32);
__IOREG(EIBD158, 0xFFFFBA78, __READ_WRITE, uint32);
__IOREG(EIBD159, 0xFFFFBA7C, __READ_WRITE, uint32);
__IOREG(EIBD160, 0xFFFFBA80, __READ_WRITE, uint32);
__IOREG(EIBD161, 0xFFFFBA84, __READ_WRITE, uint32);
__IOREG(EIBD162, 0xFFFFBA88, __READ_WRITE, uint32);
__IOREG(EIBD163, 0xFFFFBA8C, __READ_WRITE, uint32);
__IOREG(EIBD164, 0xFFFFBA90, __READ_WRITE, uint32);
__IOREG(EIBD165, 0xFFFFBA94, __READ_WRITE, uint32);
__IOREG(EIBD166, 0xFFFFBA98, __READ_WRITE, uint32);
__IOREG(EIBD167, 0xFFFFBA9C, __READ_WRITE, uint32);
__IOREG(EIBD168, 0xFFFFBAA0, __READ_WRITE, uint32);
__IOREG(EIBD169, 0xFFFFBAA4, __READ_WRITE, uint32);
__IOREG(EIBD170, 0xFFFFBAA8, __READ_WRITE, uint32);
__IOREG(EIBD171, 0xFFFFBAAC, __READ_WRITE, uint32);
__IOREG(EIBD172, 0xFFFFBAB0, __READ_WRITE, uint32);
__IOREG(EIBD173, 0xFFFFBAB4, __READ_WRITE, uint32);
__IOREG(EIBD174, 0xFFFFBAB8, __READ_WRITE, uint32);
__IOREG(EIBD175, 0xFFFFBABC, __READ_WRITE, uint32);
__IOREG(EIBD176, 0xFFFFBAC0, __READ_WRITE, uint32);
__IOREG(EIBD177, 0xFFFFBAC4, __READ_WRITE, uint32);
__IOREG(EIBD178, 0xFFFFBAC8, __READ_WRITE, uint32);
__IOREG(EIBD179, 0xFFFFBACC, __READ_WRITE, uint32);
__IOREG(EIBD180, 0xFFFFBAD0, __READ_WRITE, uint32);
__IOREG(EIBD181, 0xFFFFBAD4, __READ_WRITE, uint32);
__IOREG(EIBD182, 0xFFFFBAD8, __READ_WRITE, uint32);
__IOREG(EIBD183, 0xFFFFBADC, __READ_WRITE, uint32);
__IOREG(EIBD184, 0xFFFFBAE0, __READ_WRITE, uint32);
__IOREG(EIBD185, 0xFFFFBAE4, __READ_WRITE, uint32);
__IOREG(EIBD186, 0xFFFFBAE8, __READ_WRITE, uint32);
__IOREG(EIBD187, 0xFFFFBAEC, __READ_WRITE, uint32);
__IOREG(EIBD188, 0xFFFFBAF0, __READ_WRITE, uint32);
__IOREG(EIBD189, 0xFFFFBAF4, __READ_WRITE, uint32);
__IOREG(EIBD190, 0xFFFFBAF8, __READ_WRITE, uint32);
__IOREG(EIBD191, 0xFFFFBAFC, __READ_WRITE, uint32);
__IOREG(EIBD192, 0xFFFFBB00, __READ_WRITE, uint32);
__IOREG(EIBD193, 0xFFFFBB04, __READ_WRITE, uint32);
__IOREG(EIBD194, 0xFFFFBB08, __READ_WRITE, uint32);
__IOREG(EIBD195, 0xFFFFBB0C, __READ_WRITE, uint32);
__IOREG(EIBD196, 0xFFFFBB10, __READ_WRITE, uint32);
__IOREG(EIBD197, 0xFFFFBB14, __READ_WRITE, uint32);
__IOREG(EIBD198, 0xFFFFBB18, __READ_WRITE, uint32);
__IOREG(EIBD199, 0xFFFFBB1C, __READ_WRITE, uint32);
__IOREG(EIBD200, 0xFFFFBB20, __READ_WRITE, uint32);
__IOREG(EIBD201, 0xFFFFBB24, __READ_WRITE, uint32);
__IOREG(EIBD202, 0xFFFFBB28, __READ_WRITE, uint32);
__IOREG(EIBD203, 0xFFFFBB2C, __READ_WRITE, uint32);
__IOREG(EIBD204, 0xFFFFBB30, __READ_WRITE, uint32);
__IOREG(EIBD205, 0xFFFFBB34, __READ_WRITE, uint32);
__IOREG(EIBD206, 0xFFFFBB38, __READ_WRITE, uint32);
__IOREG(EIBD207, 0xFFFFBB3C, __READ_WRITE, uint32);
__IOREG(EIBD208, 0xFFFFBB40, __READ_WRITE, uint32);
__IOREG(EIBD209, 0xFFFFBB44, __READ_WRITE, uint32);
__IOREG(EIBD210, 0xFFFFBB48, __READ_WRITE, uint32);
__IOREG(EIBD211, 0xFFFFBB4C, __READ_WRITE, uint32);
__IOREG(EIBD212, 0xFFFFBB50, __READ_WRITE, uint32);
__IOREG(EIBD213, 0xFFFFBB54, __READ_WRITE, uint32);
__IOREG(EIBD214, 0xFFFFBB58, __READ_WRITE, uint32);
__IOREG(EIBD215, 0xFFFFBB5C, __READ_WRITE, uint32);
__IOREG(EIBD216, 0xFFFFBB60, __READ_WRITE, uint32);
__IOREG(EIBD217, 0xFFFFBB64, __READ_WRITE, uint32);
__IOREG(EIBD218, 0xFFFFBB68, __READ_WRITE, uint32);
__IOREG(EIBD219, 0xFFFFBB6C, __READ_WRITE, uint32);
__IOREG(EIBD220, 0xFFFFBB70, __READ_WRITE, uint32);
__IOREG(EIBD221, 0xFFFFBB74, __READ_WRITE, uint32);
__IOREG(EIBD222, 0xFFFFBB78, __READ_WRITE, uint32);
__IOREG(EIBD223, 0xFFFFBB7C, __READ_WRITE, uint32);
__IOREG(EIBD224, 0xFFFFBB80, __READ_WRITE, uint32);
__IOREG(EIBD225, 0xFFFFBB84, __READ_WRITE, uint32);
__IOREG(EIBD226, 0xFFFFBB88, __READ_WRITE, uint32);
__IOREG(EIBD227, 0xFFFFBB8C, __READ_WRITE, uint32);
__IOREG(EIBD228, 0xFFFFBB90, __READ_WRITE, uint32);
__IOREG(EIBD229, 0xFFFFBB94, __READ_WRITE, uint32);
__IOREG(EIBD230, 0xFFFFBB98, __READ_WRITE, uint32);
__IOREG(EIBD231, 0xFFFFBB9C, __READ_WRITE, uint32);
__IOREG(EIBD232, 0xFFFFBBA0, __READ_WRITE, uint32);
__IOREG(EIBD233, 0xFFFFBBA4, __READ_WRITE, uint32);
__IOREG(EIBD234, 0xFFFFBBA8, __READ_WRITE, uint32);
__IOREG(EIBD235, 0xFFFFBBAC, __READ_WRITE, uint32);
__IOREG(EIBD236, 0xFFFFBBB0, __READ_WRITE, uint32);
__IOREG(EIBD237, 0xFFFFBBB4, __READ_WRITE, uint32);
__IOREG(EIBD238, 0xFFFFBBB8, __READ_WRITE, uint32);
__IOREG(EIBD239, 0xFFFFBBBC, __READ_WRITE, uint32);
__IOREG(EIBD240, 0xFFFFBBC0, __READ_WRITE, uint32);
__IOREG(EIBD241, 0xFFFFBBC4, __READ_WRITE, uint32);
__IOREG(EIBD242, 0xFFFFBBC8, __READ_WRITE, uint32);
__IOREG(EIBD243, 0xFFFFBBCC, __READ_WRITE, uint32);
__IOREG(EIBD244, 0xFFFFBBD0, __READ_WRITE, uint32);
__IOREG(EIBD245, 0xFFFFBBD4, __READ_WRITE, uint32);

__IOREG(FLXA0, 0x10020000, __READ_WRITE, __type63);                   /* FLXA0 */
__IOREG(ETNA0, 0x10024000, __READ_WRITE, __type64);                   /* ETNA0 */
__IOREG(FLMD, 0xFFA00000, __READ_WRITE, __type65);                    /* FLMD */
__IOREG(FACI0, 0xFFA10000, __READ_WRITE, __type66);                   /* FACI0 */
__IOREG(FACI1, 0xFFA18000, __READ_WRITE, __type66);                   /* FACI1 */
__IOREG(DNFA2, 0xFFC30200, __READ_WRITE, __type67);                   /* DNFA2 */
__IOREG(DNFA3, 0xFFC30300, __READ_WRITE, __type67);                   /* DNFA3 */
__IOREG(DNFA4, 0xFFC30400, __READ_WRITE, __type67);                   /* DNFA4 */
__IOREG(DNFA5, 0xFFC30500, __READ_WRITE, __type68);                   /* DNFA5 */
__IOREG(DNFA6, 0xFFC30600, __READ_WRITE, __type67);                   /* DNFA6 */
__IOREG(DNFA7, 0xFFC30700, __READ_WRITE, __type67);                   /* DNFA7 */
__IOREG(FCLA0, 0xFFC34000, __READ_WRITE, __type69);                   /* FCLA0 */
__IOREG(FCLA1, 0xFFC34100, __READ_WRITE, __type70);                   /* FCLA1 */
__IOREG(FCLA2, 0xFFC34200, __READ_WRITE, __type71);                   /* FCLA2 */
__IOREG(FCLA3, 0xFFC34300, __READ_WRITE, __type71);                   /* FCLA3 */
__IOREG(FCLA4, 0xFFC34400, __READ_WRITE, __type71);                   /* FCLA4 */
__IOREG(FCLA5, 0xFFC34500, __READ_WRITE, __type72);                   /* FCLA5 */
__IOREG(FCLA6, 0xFFC34600, __READ_WRITE, __type73);                   /* FCLA6 */
__IOREG(FSGD5A, 0xFFC5A000, __READ_WRITE, __type74);                  /* FSGD5A */
__IOREG(ERRSLV5A, 0xFFC5A100, __READ_WRITE, __type75);                /* ERRSLV5A */
__IOREG(FSGD5B, 0xFFC5A200, __READ_WRITE, __type76);                  /* FSGD5B */
__IOREG(ERRSLV5B, 0xFFC5A300, __READ_WRITE, __type75);                /* ERRSLV5B */
__IOREG(FSGD5C, 0xFFC5A400, __READ_WRITE, __type77);                  /* FSGD5C */
__IOREG(ERRSLV5C, 0xFFC5A500, __READ_WRITE, __type75);                /* ERRSLV5C */
__IOREG(FSGD5D, 0xFFC5A600, __READ_WRITE, __type76);                  /* FSGD5D */
__IOREG(ERRSLV5D, 0xFFC5A700, __READ_WRITE, __type75);                /* ERRSLV5D */
__IOREG(ERRSLV5AI, 0xFFC5A800, __READ_WRITE, __type75);               /* ERRSLV5AI */
__IOREG(ERRSLV5BI, 0xFFC5A900, __READ_WRITE, __type75);               /* ERRSLV5BI */
__IOREG(ERRSLVDG0, 0xFFC5AE00, __READ_WRITE, __type75);               /* ERRSLVDG0 */
__IOREG(ERRSLVDG1, 0xFFC5AF00, __READ_WRITE, __type75);               /* ERRSLVDG1 */
__IOREG(ECCCSIH0, 0xFFC70000, __READ_WRITE, __type78);                /* ECCCSIH0 */
__IOREG(ECCCSIH2, 0xFFC70100, __READ_WRITE, __type78);                /* ECCCSIH2 */
__IOREG(ECCTTCAN0, 0xFFC71000, __READ_WRITE, __type78);               /* ECCTTCAN0 */
__IOREG(ECCMCAN1, 0xFFC71100, __READ_WRITE, __type78);                /* ECCMCAN1 */
__IOREG(ECCFLX0, 0xFFC72000, __READ_WRITE, __type78);                 /* ECCFLX0 */
__IOREG(ECCFLX0T0, 0xFFC72100, __READ_WRITE, __type78);               /* ECCFLX0T0 */
__IOREG(ECCFLX0T1, 0xFFC72200, __READ_WRITE, __type78);               /* ECCFLX0T1 */
__IOREG(ECCCSIH1, 0xFFC78000, __READ_WRITE, __type78);                /* ECCCSIH1 */
__IOREG(ECCCSIH3, 0xFFC78100, __READ_WRITE, __type78);                /* ECCCSIH3 */
__IOREG(ECCMCAN0, 0xFFC79000, __READ_WRITE, __type78);                /* ECCMCAN0 */
__IOREG(CSIH1, 0xFFCA0000, __READ_WRITE, __type79);                   /* CSIH1 */
__IOREG(PMMA1, 0xFFCA2000, __READ_WRITE, __type80);                   /* PMMA1 */
__IOREG(CSIH3, 0xFFCA3000, __READ_WRITE, __type79);                   /* CSIH3 */
__IOREG(PMMA3, 0xFFCA5000, __READ_WRITE, __type80);                   /* PMMA3 */
__IOREG(HSUS1, 0xFFCA8000, __READ_WRITE, __type81);                   /* HSUS1 */
__IOREG(RLN31, 0xFFCAC000, __READ_WRITE, __type82);                   /* RLN31 */
__IOREG(RSENT0, 0xFFCDC000, __READ_WRITE, __type83);                  /* RSENT0 */
__IOREG(RSENT1, 0xFFCDC100, __READ_WRITE, __type83);                  /* RSENT1 */
__IOREG(RSENT2, 0xFFCDC200, __READ_WRITE, __type83);                  /* RSENT2 */
__IOREG(RSENT3, 0xFFCDC300, __READ_WRITE, __type83);                  /* RSENT3 */
__IOREG(RSENT4, 0xFFCDC400, __READ_WRITE, __type83);                  /* RSENT4 */
__IOREG(RSENT5, 0xFFCDC500, __READ_WRITE, __type83);                  /* RSENT5 */
__IOREG(RSENT6, 0xFFCDC600, __READ_WRITE, __type84);                  /* RSENT6 */
__IOREG(SINT, 0xFFCDE000, __READ_WRITE, __type85);                    /* SINT */
__IOREG(MTTCAN0, 0xFFD30000, __READ_WRITE, __type86);                 /* MTTCAN0 */
__IOREG(MCAN1, 0xFFD31000, __READ_WRITE, __type87);                   /* MCAN1 */
__IOREG(DCRB0, 0xFFD50000, __READ_WRITE, __type88);                   /* DCRB0 */
__IOREG(DCRB2, 0xFFD51000, __READ_WRITE, __type88);                   /* DCRB2 */
__IOREG(ECMM0, 0xFFD60000, __READ_WRITE, __type89);                   /* ECMM0 */
__IOREG(ECMC0, 0xFFD61000, __READ_WRITE, __type89);                   /* ECMC0 */
__IOREG(ECM0, 0xFFD62000, __READ_WRITE, __type90);                    /* ECM0 */
__IOREG(PIC2C, 0xFFD68000, __READ_WRITE, __type91);                   /* PIC2C */
__IOREG(CSIH0, 0xFFD80000, __READ_WRITE, __type79);                   /* CSIH0 */
__IOREG(PMMA0, 0xFFD82000, __READ_WRITE, __type80);                   /* PMMA0 */
__IOREG(CSIH2, 0xFFD83000, __READ_WRITE, __type79);                   /* CSIH2 */
__IOREG(PMMA2, 0xFFD85000, __READ_WRITE, __type80);                   /* PMMA2 */
__IOREG(HSUS0, 0xFFD88000, __READ_WRITE, __type81);                   /* HSUS0 */
__IOREG(RLN30, 0xFFD8C000, __READ_WRITE, __type82);                   /* RLN30 */
__IOREG(STM0, 0xFFDD8000, __READ_WRITE, __type92);                    /* STM0 */
__IOREG(FSGD2A, 0xFFDDD000, __READ_WRITE, __type93);                  /* FSGD2A */
__IOREG(ERRSLV2, 0xFFDDD100, __READ_WRITE, __type75);                 /* ERRSLV2 */
__IOREG(ERRSLV2AI, 0xFFDDD800, __READ_WRITE, __type75);               /* ERRSLV2AI */
__IOREG(GTM0, 0xFFE00000, __READ_WRITE, __type94);                    /* GTM0 */
__IOREG(ECCGTM0, 0xFFE80000, __READ_WRITE, __type78);                 /* ECCGTM0 */
__IOREG(ECCGTM1, 0xFFE80100, __READ_WRITE, __type78);                 /* ECCGTM1 */
__IOREG(ECCGTM2, 0xFFE80200, __READ_WRITE, __type78);                 /* ECCGTM2 */
__IOREG(ECCGTM3, 0xFFE80300, __READ_WRITE, __type78);                 /* ECCGTM3 */
__IOREG(WDTA0, 0xFFED0000, __READ_WRITE, __type95);                   /* WDTA0 */
__IOREG(SWD0, 0xFFED8000, __READ_WRITE, __type96);                    /* SWD0 */
__IOREG(FSGD1A, 0xFFEE0000, __READ_WRITE, __type74);                  /* FSGD1A */
__IOREG(ERRSLV1, 0xFFEE0100, __READ_WRITE, __type75);                 /* ERRSLV1 */
__IOREG(FSGD1B, 0xFFEE0200, __READ_WRITE, __type97);                  /* FSGD1B */
__IOREG(ERRSLV1AI, 0xFFEE0800, __READ_WRITE, __type75);               /* ERRSLV1AI */
__IOREG(MCAN0, 0xFFEF0000, __READ_WRITE, __type98);                   /* MCAN0 */
__IOREG(DCRB1, 0xFFF70000, __READ_WRITE, __type88);                   /* DCRB1 */
__IOREG(DCRB3, 0xFFF71000, __READ_WRITE, __type88);                   /* DCRB3 */
__IOREG(CLMA0, 0xFFF83100, __READ_WRITE, __type99);                   /* CLMA0 */
__IOREG(CLMA1, 0xFFF83200, __READ_WRITE, __type99);                   /* CLMA1 */
__IOREG(CLMA2, 0xFFF83300, __READ_WRITE, __type99);                   /* CLMA2 */
__IOREG(CLMA3, 0xFFF83400, __READ_WRITE, __type99);                   /* CLMA3 */
__IOREG(CLMA5, 0xFFF86800, __READ_WRITE, __type100);                  /* CLMA5 */
__IOREG(FSGD4A, 0xFFF90000, __READ_WRITE, __type101);                 /* FSGD4A */
__IOREG(ERRSLV4, 0xFFF90100, __READ_WRITE, __type75);                 /* ERRSLV4 */
__IOREG(FSGD4B, 0xFFF90200, __READ_WRITE, __type102);                 /* FSGD4B */
__IOREG(FSGD4C, 0xFFF90400, __READ_WRITE, __type102);                 /* FSGD4C */
__IOREG(ERRSLV4C, 0xFFF90500, __READ_WRITE, __type75);                /* ERRSLV4C */
__IOREG(ERRSLV4AI, 0xFFF90800, __READ_WRITE, __type75);               /* ERRSLV4AI */
__IOREG(ADCF0, 0xFFF91000, __READ_WRITE, __type103);                  /* ADCF0 */
__IOREG(ADCF1, 0xFFF92000, __READ_WRITE, __type104);                  /* ADCF1 */
__IOREG(OTS0, 0xFFF93000, __READ_WRITE, __type105);                   /* OTS0 */
__IOREG(FSGD3A, 0xFFF94000, __READ_WRITE, __type101);                 /* FSGD3A */
__IOREG(ERRSLV3, 0xFFF94100, __READ_WRITE, __type75);                 /* ERRSLV3 */
__IOREG(FSGD3B, 0xFFF94200, __READ_WRITE, __type106);                 /* FSGD3B */
__IOREG(ERRSLV3AI, 0xFFF94800, __READ_WRITE, __type75);               /* ERRSLV3AI */
__IOREG(NTU0, 0xFFF9C008, __READ_WRITE, __type107);                   /* NTU0 */
__IOREG(FSGDF0, 0xFFFA0000, __READ_WRITE, __type77);                  /* FSGDF0 */
__IOREG(ERRSLVF0, 0xFFFA0010, __READ_WRITE, __type75);                /* ERRSLVF0 */
__IOREG(FSGDE0, 0xFFFA0040, __READ_WRITE, __type77);                  /* FSGDE0 */
__IOREG(ERRSLVE0, 0xFFFA0050, __READ_WRITE, __type75);                /* ERRSLVE0 */
__IOREG(ERRSLVFI, 0xFFFA0100, __READ_WRITE, __type75);                /* ERRSLVFI */
__IOREG(ERRSLVEI, 0xFFFA0110, __READ_WRITE, __type75);                /* ERRSLVEI */
__IOREG(ERRSLVMI, 0xFFFA0120, __READ_WRITE, __type75);                /* ERRSLVMI */
__IOREG(ERRSLVHI, 0xFFFA0130, __READ_WRITE, __type75);                /* ERRSLVHI */
__IOREG(ERRSLVXI, 0xFFFA0140, __READ_WRITE, __type75);                /* ERRSLVXI */
__IOREG(HSSPID, 0xFFFA1000, __READ_WRITE, __type108);                 /* HSSPID */
__IOREG(HTHDMA, 0xFFFA2000, __READ_WRITE, __type109);                 /* HTHDMA */
__IOREG(IPG, 0xFFFEE000, __READ_WRITE, __type110);                    /* IPG */
__IOREG(PEG, 0xFFFEE680, __READ_WRITE, __type111);                    /* PEG */
__IOREG(SEG, 0xFFFEE980, __READ_WRITE, __type112);                    /* SEG */

__IOREGARRAY(FACI, 2, 0xFFA10000, __READ_WRITE, __type66);            /* FACI[2] */
__IOREGARRAY(ERRSLVDG, 2, 0xFFC5AE00, __READ_WRITE, __type75);        /* ERRSLVDG[2] */
__IOREGARRAY(ECCFLX0T, 2, 0xFFC72100, __READ_WRITE, __type78);        /* ECCFLX0T[2] */
__IOREGARRAY(ECCGTM, 4, 0xFFE80000, __READ_WRITE, __type78);          /* ECCGTM[4] */

#define FLXA0FRPV FLXA0.FRPV
#define FLXA0FROC FLXA0.FROC.UINT32
#define FLXA0FROCL FLXA0.FROC.UINT16[L]
#define FLXA0FROCLL FLXA0.FROC.UINT8[LL]
#define FLXA0FROCH FLXA0.FROC.UINT16[H]
#define FLXA0FROCHL FLXA0.FROC.UINT8[HL]
#define FLXA0FROS FLXA0.FROS.UINT32
#define FLXA0FROSL FLXA0.FROS.UINT16[L]
#define FLXA0FROSLL FLXA0.FROS.UINT8[LL]
#define FLXA0FROSH FLXA0.FROS.UINT16[H]
#define FLXA0FROSHL FLXA0.FROS.UINT8[HL]
#define FLXA0FRTEST1 FLXA0.FRTEST1.UINT32
#define FLXA0FRTEST1L FLXA0.FRTEST1.UINT16[L]
#define FLXA0FRTEST1LL FLXA0.FRTEST1.UINT8[LL]
#define FLXA0FRTEST1LH FLXA0.FRTEST1.UINT8[LH]
#define FLXA0FRTEST1H FLXA0.FRTEST1.UINT16[H]
#define FLXA0FRTEST1HL FLXA0.FRTEST1.UINT8[HL]
#define FLXA0FRTEST1HH FLXA0.FRTEST1.UINT8[HH]
#define FLXA0FRTEST2 FLXA0.FRTEST2.UINT32
#define FLXA0FRTEST2L FLXA0.FRTEST2.UINT16[L]
#define FLXA0FRTEST2LL FLXA0.FRTEST2.UINT8[LL]
#define FLXA0FRLCK FLXA0.FRLCK.UINT32
#define FLXA0FRLCKL FLXA0.FRLCK.UINT16[L]
#define FLXA0FRLCKLL FLXA0.FRLCK.UINT8[LL]
#define FLXA0FRLCKLH FLXA0.FRLCK.UINT8[LH]
#define FLXA0FREIR FLXA0.FREIR.UINT32
#define FLXA0FREIRL FLXA0.FREIR.UINT16[L]
#define FLXA0FREIRLL FLXA0.FREIR.UINT8[LL]
#define FLXA0FREIRLH FLXA0.FREIR.UINT8[LH]
#define FLXA0FREIRH FLXA0.FREIR.UINT16[H]
#define FLXA0FREIRHL FLXA0.FREIR.UINT8[HL]
#define FLXA0FREIRHH FLXA0.FREIR.UINT8[HH]
#define FLXA0FRSIR FLXA0.FRSIR.UINT32
#define FLXA0FRSIRL FLXA0.FRSIR.UINT16[L]
#define FLXA0FRSIRLL FLXA0.FRSIR.UINT8[LL]
#define FLXA0FRSIRLH FLXA0.FRSIR.UINT8[LH]
#define FLXA0FRSIRH FLXA0.FRSIR.UINT16[H]
#define FLXA0FRSIRHL FLXA0.FRSIR.UINT8[HL]
#define FLXA0FRSIRHH FLXA0.FRSIR.UINT8[HH]
#define FLXA0FREILS FLXA0.FREILS.UINT32
#define FLXA0FREILSL FLXA0.FREILS.UINT16[L]
#define FLXA0FREILSLL FLXA0.FREILS.UINT8[LL]
#define FLXA0FREILSLH FLXA0.FREILS.UINT8[LH]
#define FLXA0FREILSH FLXA0.FREILS.UINT16[H]
#define FLXA0FREILSHL FLXA0.FREILS.UINT8[HL]
#define FLXA0FREILSHH FLXA0.FREILS.UINT8[HH]
#define FLXA0FRSILS FLXA0.FRSILS.UINT32
#define FLXA0FRSILSL FLXA0.FRSILS.UINT16[L]
#define FLXA0FRSILSLL FLXA0.FRSILS.UINT8[LL]
#define FLXA0FRSILSLH FLXA0.FRSILS.UINT8[LH]
#define FLXA0FRSILSH FLXA0.FRSILS.UINT16[H]
#define FLXA0FRSILSHL FLXA0.FRSILS.UINT8[HL]
#define FLXA0FRSILSHH FLXA0.FRSILS.UINT8[HH]
#define FLXA0FREIES FLXA0.FREIES.UINT32
#define FLXA0FREIESL FLXA0.FREIES.UINT16[L]
#define FLXA0FREIESLL FLXA0.FREIES.UINT8[LL]
#define FLXA0FREIESLH FLXA0.FREIES.UINT8[LH]
#define FLXA0FREIESH FLXA0.FREIES.UINT16[H]
#define FLXA0FREIESHL FLXA0.FREIES.UINT8[HL]
#define FLXA0FREIESHH FLXA0.FREIES.UINT8[HH]
#define FLXA0FREIER FLXA0.FREIER.UINT32
#define FLXA0FREIERL FLXA0.FREIER.UINT16[L]
#define FLXA0FREIERLL FLXA0.FREIER.UINT8[LL]
#define FLXA0FREIERLH FLXA0.FREIER.UINT8[LH]
#define FLXA0FREIERH FLXA0.FREIER.UINT16[H]
#define FLXA0FREIERHL FLXA0.FREIER.UINT8[HL]
#define FLXA0FREIERHH FLXA0.FREIER.UINT8[HH]
#define FLXA0FRSIES FLXA0.FRSIES.UINT32
#define FLXA0FRSIESL FLXA0.FRSIES.UINT16[L]
#define FLXA0FRSIESLL FLXA0.FRSIES.UINT8[LL]
#define FLXA0FRSIESLH FLXA0.FRSIES.UINT8[LH]
#define FLXA0FRSIESH FLXA0.FRSIES.UINT16[H]
#define FLXA0FRSIESHL FLXA0.FRSIES.UINT8[HL]
#define FLXA0FRSIESHH FLXA0.FRSIES.UINT8[HH]
#define FLXA0FRSIER FLXA0.FRSIER.UINT32
#define FLXA0FRSIERL FLXA0.FRSIER.UINT16[L]
#define FLXA0FRSIERLL FLXA0.FRSIER.UINT8[LL]
#define FLXA0FRSIERLH FLXA0.FRSIER.UINT8[LH]
#define FLXA0FRSIERH FLXA0.FRSIER.UINT16[H]
#define FLXA0FRSIERHL FLXA0.FRSIER.UINT8[HL]
#define FLXA0FRSIERHH FLXA0.FRSIER.UINT8[HH]
#define FLXA0FRILE FLXA0.FRILE.UINT32
#define FLXA0FRILEL FLXA0.FRILE.UINT16[L]
#define FLXA0FRILELL FLXA0.FRILE.UINT8[LL]
#define FLXA0FRT0C FLXA0.FRT0C.UINT32
#define FLXA0FRT0CL FLXA0.FRT0C.UINT16[L]
#define FLXA0FRT0CLL FLXA0.FRT0C.UINT8[LL]
#define FLXA0FRT0CLH FLXA0.FRT0C.UINT8[LH]
#define FLXA0FRT0CH FLXA0.FRT0C.UINT16[H]
#define FLXA0FRT0CHL FLXA0.FRT0C.UINT8[HL]
#define FLXA0FRT0CHH FLXA0.FRT0C.UINT8[HH]
#define FLXA0FRT1C FLXA0.FRT1C.UINT32
#define FLXA0FRT1CL FLXA0.FRT1C.UINT16[L]
#define FLXA0FRT1CLL FLXA0.FRT1C.UINT8[LL]
#define FLXA0FRT1CH FLXA0.FRT1C.UINT16[H]
#define FLXA0FRT1CHL FLXA0.FRT1C.UINT8[HL]
#define FLXA0FRT1CHH FLXA0.FRT1C.UINT8[HH]
#define FLXA0FRSTPW1 FLXA0.FRSTPW1.UINT32
#define FLXA0FRSTPW1L FLXA0.FRSTPW1.UINT16[L]
#define FLXA0FRSTPW1LL FLXA0.FRSTPW1.UINT8[LL]
#define FLXA0FRSTPW1LH FLXA0.FRSTPW1.UINT8[LH]
#define FLXA0FRSTPW1H FLXA0.FRSTPW1.UINT16[H]
#define FLXA0FRSTPW1HL FLXA0.FRSTPW1.UINT8[HL]
#define FLXA0FRSTPW1HH FLXA0.FRSTPW1.UINT8[HH]
#define FLXA0FRSTPW2 FLXA0.FRSTPW2.UINT32
#define FLXA0FRSTPW2L FLXA0.FRSTPW2.UINT16[L]
#define FLXA0FRSTPW2LL FLXA0.FRSTPW2.UINT8[LL]
#define FLXA0FRSTPW2LH FLXA0.FRSTPW2.UINT8[LH]
#define FLXA0FRSTPW2H FLXA0.FRSTPW2.UINT16[H]
#define FLXA0FRSTPW2HL FLXA0.FRSTPW2.UINT8[HL]
#define FLXA0FRSTPW2HH FLXA0.FRSTPW2.UINT8[HH]
#define FLXA0FRSUCC1 FLXA0.FRSUCC1.UINT32
#define FLXA0FRSUCC1L FLXA0.FRSUCC1.UINT16[L]
#define FLXA0FRSUCC1LL FLXA0.FRSUCC1.UINT8[LL]
#define FLXA0FRSUCC1LH FLXA0.FRSUCC1.UINT8[LH]
#define FLXA0FRSUCC1H FLXA0.FRSUCC1.UINT16[H]
#define FLXA0FRSUCC1HL FLXA0.FRSUCC1.UINT8[HL]
#define FLXA0FRSUCC1HH FLXA0.FRSUCC1.UINT8[HH]
#define FLXA0FRSUCC2 FLXA0.FRSUCC2.UINT32
#define FLXA0FRSUCC2L FLXA0.FRSUCC2.UINT16[L]
#define FLXA0FRSUCC2LL FLXA0.FRSUCC2.UINT8[LL]
#define FLXA0FRSUCC2LH FLXA0.FRSUCC2.UINT8[LH]
#define FLXA0FRSUCC2H FLXA0.FRSUCC2.UINT16[H]
#define FLXA0FRSUCC2HL FLXA0.FRSUCC2.UINT8[HL]
#define FLXA0FRSUCC2HH FLXA0.FRSUCC2.UINT8[HH]
#define FLXA0FRSUCC3 FLXA0.FRSUCC3.UINT32
#define FLXA0FRSUCC3L FLXA0.FRSUCC3.UINT16[L]
#define FLXA0FRSUCC3LL FLXA0.FRSUCC3.UINT8[LL]
#define FLXA0FRNEMC FLXA0.FRNEMC.UINT32
#define FLXA0FRNEMCL FLXA0.FRNEMC.UINT16[L]
#define FLXA0FRNEMCLL FLXA0.FRNEMC.UINT8[LL]
#define FLXA0FRPRTC1 FLXA0.FRPRTC1.UINT32
#define FLXA0FRPRTC1L FLXA0.FRPRTC1.UINT16[L]
#define FLXA0FRPRTC1LL FLXA0.FRPRTC1.UINT8[LL]
#define FLXA0FRPRTC1LH FLXA0.FRPRTC1.UINT8[LH]
#define FLXA0FRPRTC1H FLXA0.FRPRTC1.UINT16[H]
#define FLXA0FRPRTC1HL FLXA0.FRPRTC1.UINT8[HL]
#define FLXA0FRPRTC1HH FLXA0.FRPRTC1.UINT8[HH]
#define FLXA0FRPRTC2 FLXA0.FRPRTC2.UINT32
#define FLXA0FRPRTC2L FLXA0.FRPRTC2.UINT16[L]
#define FLXA0FRPRTC2LL FLXA0.FRPRTC2.UINT8[LL]
#define FLXA0FRPRTC2LH FLXA0.FRPRTC2.UINT8[LH]
#define FLXA0FRPRTC2H FLXA0.FRPRTC2.UINT16[H]
#define FLXA0FRPRTC2HL FLXA0.FRPRTC2.UINT8[HL]
#define FLXA0FRPRTC2HH FLXA0.FRPRTC2.UINT8[HH]
#define FLXA0FRMHDC FLXA0.FRMHDC.UINT32
#define FLXA0FRMHDCL FLXA0.FRMHDC.UINT16[L]
#define FLXA0FRMHDCLL FLXA0.FRMHDC.UINT8[LL]
#define FLXA0FRMHDCH FLXA0.FRMHDC.UINT16[H]
#define FLXA0FRMHDCHL FLXA0.FRMHDC.UINT8[HL]
#define FLXA0FRMHDCHH FLXA0.FRMHDC.UINT8[HH]
#define FLXA0FRGTUC1 FLXA0.FRGTUC1.UINT32
#define FLXA0FRGTUC1L FLXA0.FRGTUC1.UINT16[L]
#define FLXA0FRGTUC1LL FLXA0.FRGTUC1.UINT8[LL]
#define FLXA0FRGTUC1LH FLXA0.FRGTUC1.UINT8[LH]
#define FLXA0FRGTUC1H FLXA0.FRGTUC1.UINT16[H]
#define FLXA0FRGTUC1HL FLXA0.FRGTUC1.UINT8[HL]
#define FLXA0FRGTUC2 FLXA0.FRGTUC2.UINT32
#define FLXA0FRGTUC2L FLXA0.FRGTUC2.UINT16[L]
#define FLXA0FRGTUC2LL FLXA0.FRGTUC2.UINT8[LL]
#define FLXA0FRGTUC2LH FLXA0.FRGTUC2.UINT8[LH]
#define FLXA0FRGTUC2H FLXA0.FRGTUC2.UINT16[H]
#define FLXA0FRGTUC2HL FLXA0.FRGTUC2.UINT8[HL]
#define FLXA0FRGTUC3 FLXA0.FRGTUC3.UINT32
#define FLXA0FRGTUC3L FLXA0.FRGTUC3.UINT16[L]
#define FLXA0FRGTUC3LL FLXA0.FRGTUC3.UINT8[LL]
#define FLXA0FRGTUC3LH FLXA0.FRGTUC3.UINT8[LH]
#define FLXA0FRGTUC3H FLXA0.FRGTUC3.UINT16[H]
#define FLXA0FRGTUC3HL FLXA0.FRGTUC3.UINT8[HL]
#define FLXA0FRGTUC3HH FLXA0.FRGTUC3.UINT8[HH]
#define FLXA0FRGTUC4 FLXA0.FRGTUC4.UINT32
#define FLXA0FRGTUC4L FLXA0.FRGTUC4.UINT16[L]
#define FLXA0FRGTUC4LL FLXA0.FRGTUC4.UINT8[LL]
#define FLXA0FRGTUC4LH FLXA0.FRGTUC4.UINT8[LH]
#define FLXA0FRGTUC4H FLXA0.FRGTUC4.UINT16[H]
#define FLXA0FRGTUC4HL FLXA0.FRGTUC4.UINT8[HL]
#define FLXA0FRGTUC4HH FLXA0.FRGTUC4.UINT8[HH]
#define FLXA0FRGTUC5 FLXA0.FRGTUC5.UINT32
#define FLXA0FRGTUC5L FLXA0.FRGTUC5.UINT16[L]
#define FLXA0FRGTUC5LL FLXA0.FRGTUC5.UINT8[LL]
#define FLXA0FRGTUC5LH FLXA0.FRGTUC5.UINT8[LH]
#define FLXA0FRGTUC5H FLXA0.FRGTUC5.UINT16[H]
#define FLXA0FRGTUC5HL FLXA0.FRGTUC5.UINT8[HL]
#define FLXA0FRGTUC5HH FLXA0.FRGTUC5.UINT8[HH]
#define FLXA0FRGTUC6 FLXA0.FRGTUC6.UINT32
#define FLXA0FRGTUC6L FLXA0.FRGTUC6.UINT16[L]
#define FLXA0FRGTUC6LL FLXA0.FRGTUC6.UINT8[LL]
#define FLXA0FRGTUC6LH FLXA0.FRGTUC6.UINT8[LH]
#define FLXA0FRGTUC6H FLXA0.FRGTUC6.UINT16[H]
#define FLXA0FRGTUC6HL FLXA0.FRGTUC6.UINT8[HL]
#define FLXA0FRGTUC6HH FLXA0.FRGTUC6.UINT8[HH]
#define FLXA0FRGTUC7 FLXA0.FRGTUC7.UINT32
#define FLXA0FRGTUC7L FLXA0.FRGTUC7.UINT16[L]
#define FLXA0FRGTUC7LL FLXA0.FRGTUC7.UINT8[LL]
#define FLXA0FRGTUC7LH FLXA0.FRGTUC7.UINT8[LH]
#define FLXA0FRGTUC7H FLXA0.FRGTUC7.UINT16[H]
#define FLXA0FRGTUC7HL FLXA0.FRGTUC7.UINT8[HL]
#define FLXA0FRGTUC7HH FLXA0.FRGTUC7.UINT8[HH]
#define FLXA0FRGTUC8 FLXA0.FRGTUC8.UINT32
#define FLXA0FRGTUC8L FLXA0.FRGTUC8.UINT16[L]
#define FLXA0FRGTUC8LL FLXA0.FRGTUC8.UINT8[LL]
#define FLXA0FRGTUC8H FLXA0.FRGTUC8.UINT16[H]
#define FLXA0FRGTUC8HL FLXA0.FRGTUC8.UINT8[HL]
#define FLXA0FRGTUC8HH FLXA0.FRGTUC8.UINT8[HH]
#define FLXA0FRGTUC9 FLXA0.FRGTUC9.UINT32
#define FLXA0FRGTUC9L FLXA0.FRGTUC9.UINT16[L]
#define FLXA0FRGTUC9LL FLXA0.FRGTUC9.UINT8[LL]
#define FLXA0FRGTUC9LH FLXA0.FRGTUC9.UINT8[LH]
#define FLXA0FRGTUC9H FLXA0.FRGTUC9.UINT16[H]
#define FLXA0FRGTUC9HL FLXA0.FRGTUC9.UINT8[HL]
#define FLXA0FRGTUC10 FLXA0.FRGTUC10.UINT32
#define FLXA0FRGTUC10L FLXA0.FRGTUC10.UINT16[L]
#define FLXA0FRGTUC10LL FLXA0.FRGTUC10.UINT8[LL]
#define FLXA0FRGTUC10LH FLXA0.FRGTUC10.UINT8[LH]
#define FLXA0FRGTUC10H FLXA0.FRGTUC10.UINT16[H]
#define FLXA0FRGTUC10HL FLXA0.FRGTUC10.UINT8[HL]
#define FLXA0FRGTUC10HH FLXA0.FRGTUC10.UINT8[HH]
#define FLXA0FRGTUC11 FLXA0.FRGTUC11.UINT32
#define FLXA0FRGTUC11L FLXA0.FRGTUC11.UINT16[L]
#define FLXA0FRGTUC11LL FLXA0.FRGTUC11.UINT8[LL]
#define FLXA0FRGTUC11LH FLXA0.FRGTUC11.UINT8[LH]
#define FLXA0FRGTUC11H FLXA0.FRGTUC11.UINT16[H]
#define FLXA0FRGTUC11HL FLXA0.FRGTUC11.UINT8[HL]
#define FLXA0FRGTUC11HH FLXA0.FRGTUC11.UINT8[HH]
#define FLXA0FRCCSV FLXA0.FRCCSV.UINT32
#define FLXA0FRCCSVL FLXA0.FRCCSV.UINT16[L]
#define FLXA0FRCCSVLL FLXA0.FRCCSV.UINT8[LL]
#define FLXA0FRCCSVLH FLXA0.FRCCSV.UINT8[LH]
#define FLXA0FRCCSVH FLXA0.FRCCSV.UINT16[H]
#define FLXA0FRCCSVHL FLXA0.FRCCSV.UINT8[HL]
#define FLXA0FRCCSVHH FLXA0.FRCCSV.UINT8[HH]
#define FLXA0FRCCEV FLXA0.FRCCEV.UINT32
#define FLXA0FRCCEVL FLXA0.FRCCEV.UINT16[L]
#define FLXA0FRCCEVLL FLXA0.FRCCEV.UINT8[LL]
#define FLXA0FRCCEVLH FLXA0.FRCCEV.UINT8[LH]
#define FLXA0FRSCV FLXA0.FRSCV.UINT32
#define FLXA0FRSCVL FLXA0.FRSCV.UINT16[L]
#define FLXA0FRSCVLL FLXA0.FRSCV.UINT8[LL]
#define FLXA0FRSCVLH FLXA0.FRSCV.UINT8[LH]
#define FLXA0FRSCVH FLXA0.FRSCV.UINT16[H]
#define FLXA0FRSCVHL FLXA0.FRSCV.UINT8[HL]
#define FLXA0FRSCVHH FLXA0.FRSCV.UINT8[HH]
#define FLXA0FRMTCCV FLXA0.FRMTCCV.UINT32
#define FLXA0FRMTCCVL FLXA0.FRMTCCV.UINT16[L]
#define FLXA0FRMTCCVLL FLXA0.FRMTCCV.UINT8[LL]
#define FLXA0FRMTCCVLH FLXA0.FRMTCCV.UINT8[LH]
#define FLXA0FRMTCCVH FLXA0.FRMTCCV.UINT16[H]
#define FLXA0FRMTCCVHL FLXA0.FRMTCCV.UINT8[HL]
#define FLXA0FRRCV FLXA0.FRRCV.UINT32
#define FLXA0FRRCVL FLXA0.FRRCV.UINT16[L]
#define FLXA0FRRCVLL FLXA0.FRRCV.UINT8[LL]
#define FLXA0FRRCVLH FLXA0.FRRCV.UINT8[LH]
#define FLXA0FROCV FLXA0.FROCV.UINT32
#define FLXA0FROCVL FLXA0.FROCV.UINT16[L]
#define FLXA0FROCVLL FLXA0.FROCV.UINT8[LL]
#define FLXA0FROCVLH FLXA0.FROCV.UINT8[LH]
#define FLXA0FROCVH FLXA0.FROCV.UINT16[H]
#define FLXA0FROCVHL FLXA0.FROCV.UINT8[HL]
#define FLXA0FRSFS FLXA0.FRSFS.UINT32
#define FLXA0FRSFSL FLXA0.FRSFS.UINT16[L]
#define FLXA0FRSFSLL FLXA0.FRSFS.UINT8[LL]
#define FLXA0FRSFSLH FLXA0.FRSFS.UINT8[LH]
#define FLXA0FRSFSH FLXA0.FRSFS.UINT16[H]
#define FLXA0FRSFSHL FLXA0.FRSFS.UINT8[HL]
#define FLXA0FRSWNIT FLXA0.FRSWNIT.UINT32
#define FLXA0FRSWNITL FLXA0.FRSWNIT.UINT16[L]
#define FLXA0FRSWNITLL FLXA0.FRSWNIT.UINT8[LL]
#define FLXA0FRSWNITLH FLXA0.FRSWNIT.UINT8[LH]
#define FLXA0FRACS FLXA0.FRACS.UINT32
#define FLXA0FRACSL FLXA0.FRACS.UINT16[L]
#define FLXA0FRACSLL FLXA0.FRACS.UINT8[LL]
#define FLXA0FRACSLH FLXA0.FRACS.UINT8[LH]
#define FLXA0FRESID1 FLXA0.FRESID1.UINT32
#define FLXA0FRESID1L FLXA0.FRESID1.UINT16[L]
#define FLXA0FRESID1LL FLXA0.FRESID1.UINT8[LL]
#define FLXA0FRESID1LH FLXA0.FRESID1.UINT8[LH]
#define FLXA0FRESID2 FLXA0.FRESID2.UINT32
#define FLXA0FRESID2L FLXA0.FRESID2.UINT16[L]
#define FLXA0FRESID2LL FLXA0.FRESID2.UINT8[LL]
#define FLXA0FRESID2LH FLXA0.FRESID2.UINT8[LH]
#define FLXA0FRESID3 FLXA0.FRESID3.UINT32
#define FLXA0FRESID3L FLXA0.FRESID3.UINT16[L]
#define FLXA0FRESID3LL FLXA0.FRESID3.UINT8[LL]
#define FLXA0FRESID3LH FLXA0.FRESID3.UINT8[LH]
#define FLXA0FRESID4 FLXA0.FRESID4.UINT32
#define FLXA0FRESID4L FLXA0.FRESID4.UINT16[L]
#define FLXA0FRESID4LL FLXA0.FRESID4.UINT8[LL]
#define FLXA0FRESID4LH FLXA0.FRESID4.UINT8[LH]
#define FLXA0FRESID5 FLXA0.FRESID5.UINT32
#define FLXA0FRESID5L FLXA0.FRESID5.UINT16[L]
#define FLXA0FRESID5LL FLXA0.FRESID5.UINT8[LL]
#define FLXA0FRESID5LH FLXA0.FRESID5.UINT8[LH]
#define FLXA0FRESID6 FLXA0.FRESID6.UINT32
#define FLXA0FRESID6L FLXA0.FRESID6.UINT16[L]
#define FLXA0FRESID6LL FLXA0.FRESID6.UINT8[LL]
#define FLXA0FRESID6LH FLXA0.FRESID6.UINT8[LH]
#define FLXA0FRESID7 FLXA0.FRESID7.UINT32
#define FLXA0FRESID7L FLXA0.FRESID7.UINT16[L]
#define FLXA0FRESID7LL FLXA0.FRESID7.UINT8[LL]
#define FLXA0FRESID7LH FLXA0.FRESID7.UINT8[LH]
#define FLXA0FRESID8 FLXA0.FRESID8.UINT32
#define FLXA0FRESID8L FLXA0.FRESID8.UINT16[L]
#define FLXA0FRESID8LL FLXA0.FRESID8.UINT8[LL]
#define FLXA0FRESID8LH FLXA0.FRESID8.UINT8[LH]
#define FLXA0FRESID9 FLXA0.FRESID9.UINT32
#define FLXA0FRESID9L FLXA0.FRESID9.UINT16[L]
#define FLXA0FRESID9LL FLXA0.FRESID9.UINT8[LL]
#define FLXA0FRESID9LH FLXA0.FRESID9.UINT8[LH]
#define FLXA0FRESID10 FLXA0.FRESID10.UINT32
#define FLXA0FRESID10L FLXA0.FRESID10.UINT16[L]
#define FLXA0FRESID10LL FLXA0.FRESID10.UINT8[LL]
#define FLXA0FRESID10LH FLXA0.FRESID10.UINT8[LH]
#define FLXA0FRESID11 FLXA0.FRESID11.UINT32
#define FLXA0FRESID11L FLXA0.FRESID11.UINT16[L]
#define FLXA0FRESID11LL FLXA0.FRESID11.UINT8[LL]
#define FLXA0FRESID11LH FLXA0.FRESID11.UINT8[LH]
#define FLXA0FRESID12 FLXA0.FRESID12.UINT32
#define FLXA0FRESID12L FLXA0.FRESID12.UINT16[L]
#define FLXA0FRESID12LL FLXA0.FRESID12.UINT8[LL]
#define FLXA0FRESID12LH FLXA0.FRESID12.UINT8[LH]
#define FLXA0FRESID13 FLXA0.FRESID13.UINT32
#define FLXA0FRESID13L FLXA0.FRESID13.UINT16[L]
#define FLXA0FRESID13LL FLXA0.FRESID13.UINT8[LL]
#define FLXA0FRESID13LH FLXA0.FRESID13.UINT8[LH]
#define FLXA0FRESID14 FLXA0.FRESID14.UINT32
#define FLXA0FRESID14L FLXA0.FRESID14.UINT16[L]
#define FLXA0FRESID14LL FLXA0.FRESID14.UINT8[LL]
#define FLXA0FRESID14LH FLXA0.FRESID14.UINT8[LH]
#define FLXA0FRESID15 FLXA0.FRESID15.UINT32
#define FLXA0FRESID15L FLXA0.FRESID15.UINT16[L]
#define FLXA0FRESID15LL FLXA0.FRESID15.UINT8[LL]
#define FLXA0FRESID15LH FLXA0.FRESID15.UINT8[LH]
#define FLXA0FROSID1 FLXA0.FROSID1.UINT32
#define FLXA0FROSID1L FLXA0.FROSID1.UINT16[L]
#define FLXA0FROSID1LL FLXA0.FROSID1.UINT8[LL]
#define FLXA0FROSID1LH FLXA0.FROSID1.UINT8[LH]
#define FLXA0FROSID2 FLXA0.FROSID2.UINT32
#define FLXA0FROSID2L FLXA0.FROSID2.UINT16[L]
#define FLXA0FROSID2LL FLXA0.FROSID2.UINT8[LL]
#define FLXA0FROSID2LH FLXA0.FROSID2.UINT8[LH]
#define FLXA0FROSID3 FLXA0.FROSID3.UINT32
#define FLXA0FROSID3L FLXA0.FROSID3.UINT16[L]
#define FLXA0FROSID3LL FLXA0.FROSID3.UINT8[LL]
#define FLXA0FROSID3LH FLXA0.FROSID3.UINT8[LH]
#define FLXA0FROSID4 FLXA0.FROSID4.UINT32
#define FLXA0FROSID4L FLXA0.FROSID4.UINT16[L]
#define FLXA0FROSID4LL FLXA0.FROSID4.UINT8[LL]
#define FLXA0FROSID4LH FLXA0.FROSID4.UINT8[LH]
#define FLXA0FROSID5 FLXA0.FROSID5.UINT32
#define FLXA0FROSID5L FLXA0.FROSID5.UINT16[L]
#define FLXA0FROSID5LL FLXA0.FROSID5.UINT8[LL]
#define FLXA0FROSID5LH FLXA0.FROSID5.UINT8[LH]
#define FLXA0FROSID6 FLXA0.FROSID6.UINT32
#define FLXA0FROSID6L FLXA0.FROSID6.UINT16[L]
#define FLXA0FROSID6LL FLXA0.FROSID6.UINT8[LL]
#define FLXA0FROSID6LH FLXA0.FROSID6.UINT8[LH]
#define FLXA0FROSID7 FLXA0.FROSID7.UINT32
#define FLXA0FROSID7L FLXA0.FROSID7.UINT16[L]
#define FLXA0FROSID7LL FLXA0.FROSID7.UINT8[LL]
#define FLXA0FROSID7LH FLXA0.FROSID7.UINT8[LH]
#define FLXA0FROSID8 FLXA0.FROSID8.UINT32
#define FLXA0FROSID8L FLXA0.FROSID8.UINT16[L]
#define FLXA0FROSID8LL FLXA0.FROSID8.UINT8[LL]
#define FLXA0FROSID8LH FLXA0.FROSID8.UINT8[LH]
#define FLXA0FROSID9 FLXA0.FROSID9.UINT32
#define FLXA0FROSID9L FLXA0.FROSID9.UINT16[L]
#define FLXA0FROSID9LL FLXA0.FROSID9.UINT8[LL]
#define FLXA0FROSID9LH FLXA0.FROSID9.UINT8[LH]
#define FLXA0FROSID10 FLXA0.FROSID10.UINT32
#define FLXA0FROSID10L FLXA0.FROSID10.UINT16[L]
#define FLXA0FROSID10LL FLXA0.FROSID10.UINT8[LL]
#define FLXA0FROSID10LH FLXA0.FROSID10.UINT8[LH]
#define FLXA0FROSID11 FLXA0.FROSID11.UINT32
#define FLXA0FROSID11L FLXA0.FROSID11.UINT16[L]
#define FLXA0FROSID11LL FLXA0.FROSID11.UINT8[LL]
#define FLXA0FROSID11LH FLXA0.FROSID11.UINT8[LH]
#define FLXA0FROSID12 FLXA0.FROSID12.UINT32
#define FLXA0FROSID12L FLXA0.FROSID12.UINT16[L]
#define FLXA0FROSID12LL FLXA0.FROSID12.UINT8[LL]
#define FLXA0FROSID12LH FLXA0.FROSID12.UINT8[LH]
#define FLXA0FROSID13 FLXA0.FROSID13.UINT32
#define FLXA0FROSID13L FLXA0.FROSID13.UINT16[L]
#define FLXA0FROSID13LL FLXA0.FROSID13.UINT8[LL]
#define FLXA0FROSID13LH FLXA0.FROSID13.UINT8[LH]
#define FLXA0FROSID14 FLXA0.FROSID14.UINT32
#define FLXA0FROSID14L FLXA0.FROSID14.UINT16[L]
#define FLXA0FROSID14LL FLXA0.FROSID14.UINT8[LL]
#define FLXA0FROSID14LH FLXA0.FROSID14.UINT8[LH]
#define FLXA0FROSID15 FLXA0.FROSID15.UINT32
#define FLXA0FROSID15L FLXA0.FROSID15.UINT16[L]
#define FLXA0FROSID15LL FLXA0.FROSID15.UINT8[LL]
#define FLXA0FROSID15LH FLXA0.FROSID15.UINT8[LH]
#define FLXA0FRNMV1 FLXA0.FRNMV1.UINT32
#define FLXA0FRNMV1L FLXA0.FRNMV1.UINT16[L]
#define FLXA0FRNMV1LL FLXA0.FRNMV1.UINT8[LL]
#define FLXA0FRNMV1LH FLXA0.FRNMV1.UINT8[LH]
#define FLXA0FRNMV1H FLXA0.FRNMV1.UINT16[H]
#define FLXA0FRNMV1HL FLXA0.FRNMV1.UINT8[HL]
#define FLXA0FRNMV1HH FLXA0.FRNMV1.UINT8[HH]
#define FLXA0FRNMV2 FLXA0.FRNMV2.UINT32
#define FLXA0FRNMV2L FLXA0.FRNMV2.UINT16[L]
#define FLXA0FRNMV2LL FLXA0.FRNMV2.UINT8[LL]
#define FLXA0FRNMV2LH FLXA0.FRNMV2.UINT8[LH]
#define FLXA0FRNMV2H FLXA0.FRNMV2.UINT16[H]
#define FLXA0FRNMV2HL FLXA0.FRNMV2.UINT8[HL]
#define FLXA0FRNMV2HH FLXA0.FRNMV2.UINT8[HH]
#define FLXA0FRNMV3 FLXA0.FRNMV3.UINT32
#define FLXA0FRNMV3L FLXA0.FRNMV3.UINT16[L]
#define FLXA0FRNMV3LL FLXA0.FRNMV3.UINT8[LL]
#define FLXA0FRNMV3LH FLXA0.FRNMV3.UINT8[LH]
#define FLXA0FRNMV3H FLXA0.FRNMV3.UINT16[H]
#define FLXA0FRNMV3HL FLXA0.FRNMV3.UINT8[HL]
#define FLXA0FRNMV3HH FLXA0.FRNMV3.UINT8[HH]
#define FLXA0FRMRC FLXA0.FRMRC.UINT32
#define FLXA0FRMRCL FLXA0.FRMRC.UINT16[L]
#define FLXA0FRMRCLL FLXA0.FRMRC.UINT8[LL]
#define FLXA0FRMRCLH FLXA0.FRMRC.UINT8[LH]
#define FLXA0FRMRCH FLXA0.FRMRC.UINT16[H]
#define FLXA0FRMRCHL FLXA0.FRMRC.UINT8[HL]
#define FLXA0FRMRCHH FLXA0.FRMRC.UINT8[HH]
#define FLXA0FRFRF FLXA0.FRFRF.UINT32
#define FLXA0FRFRFL FLXA0.FRFRF.UINT16[L]
#define FLXA0FRFRFLL FLXA0.FRFRF.UINT8[LL]
#define FLXA0FRFRFLH FLXA0.FRFRF.UINT8[LH]
#define FLXA0FRFRFH FLXA0.FRFRF.UINT16[H]
#define FLXA0FRFRFHL FLXA0.FRFRF.UINT8[HL]
#define FLXA0FRFRFHH FLXA0.FRFRF.UINT8[HH]
#define FLXA0FRFRFM FLXA0.FRFRFM.UINT32
#define FLXA0FRFRFML FLXA0.FRFRFM.UINT16[L]
#define FLXA0FRFRFMLL FLXA0.FRFRFM.UINT8[LL]
#define FLXA0FRFRFMLH FLXA0.FRFRFM.UINT8[LH]
#define FLXA0FRFCL FLXA0.FRFCL.UINT32
#define FLXA0FRFCLL FLXA0.FRFCL.UINT16[L]
#define FLXA0FRFCLLL FLXA0.FRFCL.UINT8[LL]
#define FLXA0FRMHDS FLXA0.FRMHDS.UINT32
#define FLXA0FRMHDSL FLXA0.FRMHDS.UINT16[L]
#define FLXA0FRMHDSLL FLXA0.FRMHDS.UINT8[LL]
#define FLXA0FRMHDSLH FLXA0.FRMHDS.UINT8[LH]
#define FLXA0FRMHDSH FLXA0.FRMHDS.UINT16[H]
#define FLXA0FRMHDSHL FLXA0.FRMHDS.UINT8[HL]
#define FLXA0FRMHDSHH FLXA0.FRMHDS.UINT8[HH]
#define FLXA0FRLDTS FLXA0.FRLDTS.UINT32
#define FLXA0FRLDTSL FLXA0.FRLDTS.UINT16[L]
#define FLXA0FRLDTSLL FLXA0.FRLDTS.UINT8[LL]
#define FLXA0FRLDTSLH FLXA0.FRLDTS.UINT8[LH]
#define FLXA0FRLDTSH FLXA0.FRLDTS.UINT16[H]
#define FLXA0FRLDTSHL FLXA0.FRLDTS.UINT8[HL]
#define FLXA0FRLDTSHH FLXA0.FRLDTS.UINT8[HH]
#define FLXA0FRFSR FLXA0.FRFSR.UINT32
#define FLXA0FRFSRL FLXA0.FRFSR.UINT16[L]
#define FLXA0FRFSRLL FLXA0.FRFSR.UINT8[LL]
#define FLXA0FRFSRLH FLXA0.FRFSR.UINT8[LH]
#define FLXA0FRMHDF FLXA0.FRMHDF.UINT32
#define FLXA0FRMHDFL FLXA0.FRMHDF.UINT16[L]
#define FLXA0FRMHDFLL FLXA0.FRMHDF.UINT8[LL]
#define FLXA0FRMHDFLH FLXA0.FRMHDF.UINT8[LH]
#define FLXA0FRTXRQ1 FLXA0.FRTXRQ1.UINT32
#define FLXA0FRTXRQ1L FLXA0.FRTXRQ1.UINT16[L]
#define FLXA0FRTXRQ1LL FLXA0.FRTXRQ1.UINT8[LL]
#define FLXA0FRTXRQ1LH FLXA0.FRTXRQ1.UINT8[LH]
#define FLXA0FRTXRQ1H FLXA0.FRTXRQ1.UINT16[H]
#define FLXA0FRTXRQ1HL FLXA0.FRTXRQ1.UINT8[HL]
#define FLXA0FRTXRQ1HH FLXA0.FRTXRQ1.UINT8[HH]
#define FLXA0FRTXRQ2 FLXA0.FRTXRQ2.UINT32
#define FLXA0FRTXRQ2L FLXA0.FRTXRQ2.UINT16[L]
#define FLXA0FRTXRQ2LL FLXA0.FRTXRQ2.UINT8[LL]
#define FLXA0FRTXRQ2LH FLXA0.FRTXRQ2.UINT8[LH]
#define FLXA0FRTXRQ2H FLXA0.FRTXRQ2.UINT16[H]
#define FLXA0FRTXRQ2HL FLXA0.FRTXRQ2.UINT8[HL]
#define FLXA0FRTXRQ2HH FLXA0.FRTXRQ2.UINT8[HH]
#define FLXA0FRTXRQ3 FLXA0.FRTXRQ3.UINT32
#define FLXA0FRTXRQ3L FLXA0.FRTXRQ3.UINT16[L]
#define FLXA0FRTXRQ3LL FLXA0.FRTXRQ3.UINT8[LL]
#define FLXA0FRTXRQ3LH FLXA0.FRTXRQ3.UINT8[LH]
#define FLXA0FRTXRQ3H FLXA0.FRTXRQ3.UINT16[H]
#define FLXA0FRTXRQ3HL FLXA0.FRTXRQ3.UINT8[HL]
#define FLXA0FRTXRQ3HH FLXA0.FRTXRQ3.UINT8[HH]
#define FLXA0FRTXRQ4 FLXA0.FRTXRQ4.UINT32
#define FLXA0FRTXRQ4L FLXA0.FRTXRQ4.UINT16[L]
#define FLXA0FRTXRQ4LL FLXA0.FRTXRQ4.UINT8[LL]
#define FLXA0FRTXRQ4LH FLXA0.FRTXRQ4.UINT8[LH]
#define FLXA0FRTXRQ4H FLXA0.FRTXRQ4.UINT16[H]
#define FLXA0FRTXRQ4HL FLXA0.FRTXRQ4.UINT8[HL]
#define FLXA0FRTXRQ4HH FLXA0.FRTXRQ4.UINT8[HH]
#define FLXA0FRNDAT1 FLXA0.FRNDAT1.UINT32
#define FLXA0FRNDAT1L FLXA0.FRNDAT1.UINT16[L]
#define FLXA0FRNDAT1LL FLXA0.FRNDAT1.UINT8[LL]
#define FLXA0FRNDAT1LH FLXA0.FRNDAT1.UINT8[LH]
#define FLXA0FRNDAT1H FLXA0.FRNDAT1.UINT16[H]
#define FLXA0FRNDAT1HL FLXA0.FRNDAT1.UINT8[HL]
#define FLXA0FRNDAT1HH FLXA0.FRNDAT1.UINT8[HH]
#define FLXA0FRNDAT2 FLXA0.FRNDAT2.UINT32
#define FLXA0FRNDAT2L FLXA0.FRNDAT2.UINT16[L]
#define FLXA0FRNDAT2LL FLXA0.FRNDAT2.UINT8[LL]
#define FLXA0FRNDAT2LH FLXA0.FRNDAT2.UINT8[LH]
#define FLXA0FRNDAT2H FLXA0.FRNDAT2.UINT16[H]
#define FLXA0FRNDAT2HL FLXA0.FRNDAT2.UINT8[HL]
#define FLXA0FRNDAT2HH FLXA0.FRNDAT2.UINT8[HH]
#define FLXA0FRNDAT3 FLXA0.FRNDAT3.UINT32
#define FLXA0FRNDAT3L FLXA0.FRNDAT3.UINT16[L]
#define FLXA0FRNDAT3LL FLXA0.FRNDAT3.UINT8[LL]
#define FLXA0FRNDAT3LH FLXA0.FRNDAT3.UINT8[LH]
#define FLXA0FRNDAT3H FLXA0.FRNDAT3.UINT16[H]
#define FLXA0FRNDAT3HL FLXA0.FRNDAT3.UINT8[HL]
#define FLXA0FRNDAT3HH FLXA0.FRNDAT3.UINT8[HH]
#define FLXA0FRNDAT4 FLXA0.FRNDAT4.UINT32
#define FLXA0FRNDAT4L FLXA0.FRNDAT4.UINT16[L]
#define FLXA0FRNDAT4LL FLXA0.FRNDAT4.UINT8[LL]
#define FLXA0FRNDAT4LH FLXA0.FRNDAT4.UINT8[LH]
#define FLXA0FRNDAT4H FLXA0.FRNDAT4.UINT16[H]
#define FLXA0FRNDAT4HL FLXA0.FRNDAT4.UINT8[HL]
#define FLXA0FRNDAT4HH FLXA0.FRNDAT4.UINT8[HH]
#define FLXA0FRMBSC1 FLXA0.FRMBSC1.UINT32
#define FLXA0FRMBSC1L FLXA0.FRMBSC1.UINT16[L]
#define FLXA0FRMBSC1LL FLXA0.FRMBSC1.UINT8[LL]
#define FLXA0FRMBSC1LH FLXA0.FRMBSC1.UINT8[LH]
#define FLXA0FRMBSC1H FLXA0.FRMBSC1.UINT16[H]
#define FLXA0FRMBSC1HL FLXA0.FRMBSC1.UINT8[HL]
#define FLXA0FRMBSC1HH FLXA0.FRMBSC1.UINT8[HH]
#define FLXA0FRMBSC2 FLXA0.FRMBSC2.UINT32
#define FLXA0FRMBSC2L FLXA0.FRMBSC2.UINT16[L]
#define FLXA0FRMBSC2LL FLXA0.FRMBSC2.UINT8[LL]
#define FLXA0FRMBSC2LH FLXA0.FRMBSC2.UINT8[LH]
#define FLXA0FRMBSC2H FLXA0.FRMBSC2.UINT16[H]
#define FLXA0FRMBSC2HL FLXA0.FRMBSC2.UINT8[HL]
#define FLXA0FRMBSC2HH FLXA0.FRMBSC2.UINT8[HH]
#define FLXA0FRMBSC3 FLXA0.FRMBSC3.UINT32
#define FLXA0FRMBSC3L FLXA0.FRMBSC3.UINT16[L]
#define FLXA0FRMBSC3LL FLXA0.FRMBSC3.UINT8[LL]
#define FLXA0FRMBSC3LH FLXA0.FRMBSC3.UINT8[LH]
#define FLXA0FRMBSC3H FLXA0.FRMBSC3.UINT16[H]
#define FLXA0FRMBSC3HL FLXA0.FRMBSC3.UINT8[HL]
#define FLXA0FRMBSC3HH FLXA0.FRMBSC3.UINT8[HH]
#define FLXA0FRMBSC4 FLXA0.FRMBSC4.UINT32
#define FLXA0FRMBSC4L FLXA0.FRMBSC4.UINT16[L]
#define FLXA0FRMBSC4LL FLXA0.FRMBSC4.UINT8[LL]
#define FLXA0FRMBSC4LH FLXA0.FRMBSC4.UINT8[LH]
#define FLXA0FRMBSC4H FLXA0.FRMBSC4.UINT16[H]
#define FLXA0FRMBSC4HL FLXA0.FRMBSC4.UINT8[HL]
#define FLXA0FRMBSC4HH FLXA0.FRMBSC4.UINT8[HH]
#define FLXA0FRWRDS1 FLXA0.FRWRDS1.UINT32
#define FLXA0FRWRDS1L FLXA0.FRWRDS1.UINT16[L]
#define FLXA0FRWRDS1LL FLXA0.FRWRDS1.UINT8[LL]
#define FLXA0FRWRDS1LH FLXA0.FRWRDS1.UINT8[LH]
#define FLXA0FRWRDS1H FLXA0.FRWRDS1.UINT16[H]
#define FLXA0FRWRDS1HL FLXA0.FRWRDS1.UINT8[HL]
#define FLXA0FRWRDS1HH FLXA0.FRWRDS1.UINT8[HH]
#define FLXA0FRWRDS2 FLXA0.FRWRDS2.UINT32
#define FLXA0FRWRDS2L FLXA0.FRWRDS2.UINT16[L]
#define FLXA0FRWRDS2LL FLXA0.FRWRDS2.UINT8[LL]
#define FLXA0FRWRDS2LH FLXA0.FRWRDS2.UINT8[LH]
#define FLXA0FRWRDS2H FLXA0.FRWRDS2.UINT16[H]
#define FLXA0FRWRDS2HL FLXA0.FRWRDS2.UINT8[HL]
#define FLXA0FRWRDS2HH FLXA0.FRWRDS2.UINT8[HH]
#define FLXA0FRWRDS3 FLXA0.FRWRDS3.UINT32
#define FLXA0FRWRDS3L FLXA0.FRWRDS3.UINT16[L]
#define FLXA0FRWRDS3LL FLXA0.FRWRDS3.UINT8[LL]
#define FLXA0FRWRDS3LH FLXA0.FRWRDS3.UINT8[LH]
#define FLXA0FRWRDS3H FLXA0.FRWRDS3.UINT16[H]
#define FLXA0FRWRDS3HL FLXA0.FRWRDS3.UINT8[HL]
#define FLXA0FRWRDS3HH FLXA0.FRWRDS3.UINT8[HH]
#define FLXA0FRWRDS4 FLXA0.FRWRDS4.UINT32
#define FLXA0FRWRDS4L FLXA0.FRWRDS4.UINT16[L]
#define FLXA0FRWRDS4LL FLXA0.FRWRDS4.UINT8[LL]
#define FLXA0FRWRDS4LH FLXA0.FRWRDS4.UINT8[LH]
#define FLXA0FRWRDS4H FLXA0.FRWRDS4.UINT16[H]
#define FLXA0FRWRDS4HL FLXA0.FRWRDS4.UINT8[HL]
#define FLXA0FRWRDS4HH FLXA0.FRWRDS4.UINT8[HH]
#define FLXA0FRWRDS5 FLXA0.FRWRDS5.UINT32
#define FLXA0FRWRDS5L FLXA0.FRWRDS5.UINT16[L]
#define FLXA0FRWRDS5LL FLXA0.FRWRDS5.UINT8[LL]
#define FLXA0FRWRDS5LH FLXA0.FRWRDS5.UINT8[LH]
#define FLXA0FRWRDS5H FLXA0.FRWRDS5.UINT16[H]
#define FLXA0FRWRDS5HL FLXA0.FRWRDS5.UINT8[HL]
#define FLXA0FRWRDS5HH FLXA0.FRWRDS5.UINT8[HH]
#define FLXA0FRWRDS6 FLXA0.FRWRDS6.UINT32
#define FLXA0FRWRDS6L FLXA0.FRWRDS6.UINT16[L]
#define FLXA0FRWRDS6LL FLXA0.FRWRDS6.UINT8[LL]
#define FLXA0FRWRDS6LH FLXA0.FRWRDS6.UINT8[LH]
#define FLXA0FRWRDS6H FLXA0.FRWRDS6.UINT16[H]
#define FLXA0FRWRDS6HL FLXA0.FRWRDS6.UINT8[HL]
#define FLXA0FRWRDS6HH FLXA0.FRWRDS6.UINT8[HH]
#define FLXA0FRWRDS7 FLXA0.FRWRDS7.UINT32
#define FLXA0FRWRDS7L FLXA0.FRWRDS7.UINT16[L]
#define FLXA0FRWRDS7LL FLXA0.FRWRDS7.UINT8[LL]
#define FLXA0FRWRDS7LH FLXA0.FRWRDS7.UINT8[LH]
#define FLXA0FRWRDS7H FLXA0.FRWRDS7.UINT16[H]
#define FLXA0FRWRDS7HL FLXA0.FRWRDS7.UINT8[HL]
#define FLXA0FRWRDS7HH FLXA0.FRWRDS7.UINT8[HH]
#define FLXA0FRWRDS8 FLXA0.FRWRDS8.UINT32
#define FLXA0FRWRDS8L FLXA0.FRWRDS8.UINT16[L]
#define FLXA0FRWRDS8LL FLXA0.FRWRDS8.UINT8[LL]
#define FLXA0FRWRDS8LH FLXA0.FRWRDS8.UINT8[LH]
#define FLXA0FRWRDS8H FLXA0.FRWRDS8.UINT16[H]
#define FLXA0FRWRDS8HL FLXA0.FRWRDS8.UINT8[HL]
#define FLXA0FRWRDS8HH FLXA0.FRWRDS8.UINT8[HH]
#define FLXA0FRWRDS9 FLXA0.FRWRDS9.UINT32
#define FLXA0FRWRDS9L FLXA0.FRWRDS9.UINT16[L]
#define FLXA0FRWRDS9LL FLXA0.FRWRDS9.UINT8[LL]
#define FLXA0FRWRDS9LH FLXA0.FRWRDS9.UINT8[LH]
#define FLXA0FRWRDS9H FLXA0.FRWRDS9.UINT16[H]
#define FLXA0FRWRDS9HL FLXA0.FRWRDS9.UINT8[HL]
#define FLXA0FRWRDS9HH FLXA0.FRWRDS9.UINT8[HH]
#define FLXA0FRWRDS10 FLXA0.FRWRDS10.UINT32
#define FLXA0FRWRDS10L FLXA0.FRWRDS10.UINT16[L]
#define FLXA0FRWRDS10LL FLXA0.FRWRDS10.UINT8[LL]
#define FLXA0FRWRDS10LH FLXA0.FRWRDS10.UINT8[LH]
#define FLXA0FRWRDS10H FLXA0.FRWRDS10.UINT16[H]
#define FLXA0FRWRDS10HL FLXA0.FRWRDS10.UINT8[HL]
#define FLXA0FRWRDS10HH FLXA0.FRWRDS10.UINT8[HH]
#define FLXA0FRWRDS11 FLXA0.FRWRDS11.UINT32
#define FLXA0FRWRDS11L FLXA0.FRWRDS11.UINT16[L]
#define FLXA0FRWRDS11LL FLXA0.FRWRDS11.UINT8[LL]
#define FLXA0FRWRDS11LH FLXA0.FRWRDS11.UINT8[LH]
#define FLXA0FRWRDS11H FLXA0.FRWRDS11.UINT16[H]
#define FLXA0FRWRDS11HL FLXA0.FRWRDS11.UINT8[HL]
#define FLXA0FRWRDS11HH FLXA0.FRWRDS11.UINT8[HH]
#define FLXA0FRWRDS12 FLXA0.FRWRDS12.UINT32
#define FLXA0FRWRDS12L FLXA0.FRWRDS12.UINT16[L]
#define FLXA0FRWRDS12LL FLXA0.FRWRDS12.UINT8[LL]
#define FLXA0FRWRDS12LH FLXA0.FRWRDS12.UINT8[LH]
#define FLXA0FRWRDS12H FLXA0.FRWRDS12.UINT16[H]
#define FLXA0FRWRDS12HL FLXA0.FRWRDS12.UINT8[HL]
#define FLXA0FRWRDS12HH FLXA0.FRWRDS12.UINT8[HH]
#define FLXA0FRWRDS13 FLXA0.FRWRDS13.UINT32
#define FLXA0FRWRDS13L FLXA0.FRWRDS13.UINT16[L]
#define FLXA0FRWRDS13LL FLXA0.FRWRDS13.UINT8[LL]
#define FLXA0FRWRDS13LH FLXA0.FRWRDS13.UINT8[LH]
#define FLXA0FRWRDS13H FLXA0.FRWRDS13.UINT16[H]
#define FLXA0FRWRDS13HL FLXA0.FRWRDS13.UINT8[HL]
#define FLXA0FRWRDS13HH FLXA0.FRWRDS13.UINT8[HH]
#define FLXA0FRWRDS14 FLXA0.FRWRDS14.UINT32
#define FLXA0FRWRDS14L FLXA0.FRWRDS14.UINT16[L]
#define FLXA0FRWRDS14LL FLXA0.FRWRDS14.UINT8[LL]
#define FLXA0FRWRDS14LH FLXA0.FRWRDS14.UINT8[LH]
#define FLXA0FRWRDS14H FLXA0.FRWRDS14.UINT16[H]
#define FLXA0FRWRDS14HL FLXA0.FRWRDS14.UINT8[HL]
#define FLXA0FRWRDS14HH FLXA0.FRWRDS14.UINT8[HH]
#define FLXA0FRWRDS15 FLXA0.FRWRDS15.UINT32
#define FLXA0FRWRDS15L FLXA0.FRWRDS15.UINT16[L]
#define FLXA0FRWRDS15LL FLXA0.FRWRDS15.UINT8[LL]
#define FLXA0FRWRDS15LH FLXA0.FRWRDS15.UINT8[LH]
#define FLXA0FRWRDS15H FLXA0.FRWRDS15.UINT16[H]
#define FLXA0FRWRDS15HL FLXA0.FRWRDS15.UINT8[HL]
#define FLXA0FRWRDS15HH FLXA0.FRWRDS15.UINT8[HH]
#define FLXA0FRWRDS16 FLXA0.FRWRDS16.UINT32
#define FLXA0FRWRDS16L FLXA0.FRWRDS16.UINT16[L]
#define FLXA0FRWRDS16LL FLXA0.FRWRDS16.UINT8[LL]
#define FLXA0FRWRDS16LH FLXA0.FRWRDS16.UINT8[LH]
#define FLXA0FRWRDS16H FLXA0.FRWRDS16.UINT16[H]
#define FLXA0FRWRDS16HL FLXA0.FRWRDS16.UINT8[HL]
#define FLXA0FRWRDS16HH FLXA0.FRWRDS16.UINT8[HH]
#define FLXA0FRWRDS17 FLXA0.FRWRDS17.UINT32
#define FLXA0FRWRDS17L FLXA0.FRWRDS17.UINT16[L]
#define FLXA0FRWRDS17LL FLXA0.FRWRDS17.UINT8[LL]
#define FLXA0FRWRDS17LH FLXA0.FRWRDS17.UINT8[LH]
#define FLXA0FRWRDS17H FLXA0.FRWRDS17.UINT16[H]
#define FLXA0FRWRDS17HL FLXA0.FRWRDS17.UINT8[HL]
#define FLXA0FRWRDS17HH FLXA0.FRWRDS17.UINT8[HH]
#define FLXA0FRWRDS18 FLXA0.FRWRDS18.UINT32
#define FLXA0FRWRDS18L FLXA0.FRWRDS18.UINT16[L]
#define FLXA0FRWRDS18LL FLXA0.FRWRDS18.UINT8[LL]
#define FLXA0FRWRDS18LH FLXA0.FRWRDS18.UINT8[LH]
#define FLXA0FRWRDS18H FLXA0.FRWRDS18.UINT16[H]
#define FLXA0FRWRDS18HL FLXA0.FRWRDS18.UINT8[HL]
#define FLXA0FRWRDS18HH FLXA0.FRWRDS18.UINT8[HH]
#define FLXA0FRWRDS19 FLXA0.FRWRDS19.UINT32
#define FLXA0FRWRDS19L FLXA0.FRWRDS19.UINT16[L]
#define FLXA0FRWRDS19LL FLXA0.FRWRDS19.UINT8[LL]
#define FLXA0FRWRDS19LH FLXA0.FRWRDS19.UINT8[LH]
#define FLXA0FRWRDS19H FLXA0.FRWRDS19.UINT16[H]
#define FLXA0FRWRDS19HL FLXA0.FRWRDS19.UINT8[HL]
#define FLXA0FRWRDS19HH FLXA0.FRWRDS19.UINT8[HH]
#define FLXA0FRWRDS20 FLXA0.FRWRDS20.UINT32
#define FLXA0FRWRDS20L FLXA0.FRWRDS20.UINT16[L]
#define FLXA0FRWRDS20LL FLXA0.FRWRDS20.UINT8[LL]
#define FLXA0FRWRDS20LH FLXA0.FRWRDS20.UINT8[LH]
#define FLXA0FRWRDS20H FLXA0.FRWRDS20.UINT16[H]
#define FLXA0FRWRDS20HL FLXA0.FRWRDS20.UINT8[HL]
#define FLXA0FRWRDS20HH FLXA0.FRWRDS20.UINT8[HH]
#define FLXA0FRWRDS21 FLXA0.FRWRDS21.UINT32
#define FLXA0FRWRDS21L FLXA0.FRWRDS21.UINT16[L]
#define FLXA0FRWRDS21LL FLXA0.FRWRDS21.UINT8[LL]
#define FLXA0FRWRDS21LH FLXA0.FRWRDS21.UINT8[LH]
#define FLXA0FRWRDS21H FLXA0.FRWRDS21.UINT16[H]
#define FLXA0FRWRDS21HL FLXA0.FRWRDS21.UINT8[HL]
#define FLXA0FRWRDS21HH FLXA0.FRWRDS21.UINT8[HH]
#define FLXA0FRWRDS22 FLXA0.FRWRDS22.UINT32
#define FLXA0FRWRDS22L FLXA0.FRWRDS22.UINT16[L]
#define FLXA0FRWRDS22LL FLXA0.FRWRDS22.UINT8[LL]
#define FLXA0FRWRDS22LH FLXA0.FRWRDS22.UINT8[LH]
#define FLXA0FRWRDS22H FLXA0.FRWRDS22.UINT16[H]
#define FLXA0FRWRDS22HL FLXA0.FRWRDS22.UINT8[HL]
#define FLXA0FRWRDS22HH FLXA0.FRWRDS22.UINT8[HH]
#define FLXA0FRWRDS23 FLXA0.FRWRDS23.UINT32
#define FLXA0FRWRDS23L FLXA0.FRWRDS23.UINT16[L]
#define FLXA0FRWRDS23LL FLXA0.FRWRDS23.UINT8[LL]
#define FLXA0FRWRDS23LH FLXA0.FRWRDS23.UINT8[LH]
#define FLXA0FRWRDS23H FLXA0.FRWRDS23.UINT16[H]
#define FLXA0FRWRDS23HL FLXA0.FRWRDS23.UINT8[HL]
#define FLXA0FRWRDS23HH FLXA0.FRWRDS23.UINT8[HH]
#define FLXA0FRWRDS24 FLXA0.FRWRDS24.UINT32
#define FLXA0FRWRDS24L FLXA0.FRWRDS24.UINT16[L]
#define FLXA0FRWRDS24LL FLXA0.FRWRDS24.UINT8[LL]
#define FLXA0FRWRDS24LH FLXA0.FRWRDS24.UINT8[LH]
#define FLXA0FRWRDS24H FLXA0.FRWRDS24.UINT16[H]
#define FLXA0FRWRDS24HL FLXA0.FRWRDS24.UINT8[HL]
#define FLXA0FRWRDS24HH FLXA0.FRWRDS24.UINT8[HH]
#define FLXA0FRWRDS25 FLXA0.FRWRDS25.UINT32
#define FLXA0FRWRDS25L FLXA0.FRWRDS25.UINT16[L]
#define FLXA0FRWRDS25LL FLXA0.FRWRDS25.UINT8[LL]
#define FLXA0FRWRDS25LH FLXA0.FRWRDS25.UINT8[LH]
#define FLXA0FRWRDS25H FLXA0.FRWRDS25.UINT16[H]
#define FLXA0FRWRDS25HL FLXA0.FRWRDS25.UINT8[HL]
#define FLXA0FRWRDS25HH FLXA0.FRWRDS25.UINT8[HH]
#define FLXA0FRWRDS26 FLXA0.FRWRDS26.UINT32
#define FLXA0FRWRDS26L FLXA0.FRWRDS26.UINT16[L]
#define FLXA0FRWRDS26LL FLXA0.FRWRDS26.UINT8[LL]
#define FLXA0FRWRDS26LH FLXA0.FRWRDS26.UINT8[LH]
#define FLXA0FRWRDS26H FLXA0.FRWRDS26.UINT16[H]
#define FLXA0FRWRDS26HL FLXA0.FRWRDS26.UINT8[HL]
#define FLXA0FRWRDS26HH FLXA0.FRWRDS26.UINT8[HH]
#define FLXA0FRWRDS27 FLXA0.FRWRDS27.UINT32
#define FLXA0FRWRDS27L FLXA0.FRWRDS27.UINT16[L]
#define FLXA0FRWRDS27LL FLXA0.FRWRDS27.UINT8[LL]
#define FLXA0FRWRDS27LH FLXA0.FRWRDS27.UINT8[LH]
#define FLXA0FRWRDS27H FLXA0.FRWRDS27.UINT16[H]
#define FLXA0FRWRDS27HL FLXA0.FRWRDS27.UINT8[HL]
#define FLXA0FRWRDS27HH FLXA0.FRWRDS27.UINT8[HH]
#define FLXA0FRWRDS28 FLXA0.FRWRDS28.UINT32
#define FLXA0FRWRDS28L FLXA0.FRWRDS28.UINT16[L]
#define FLXA0FRWRDS28LL FLXA0.FRWRDS28.UINT8[LL]
#define FLXA0FRWRDS28LH FLXA0.FRWRDS28.UINT8[LH]
#define FLXA0FRWRDS28H FLXA0.FRWRDS28.UINT16[H]
#define FLXA0FRWRDS28HL FLXA0.FRWRDS28.UINT8[HL]
#define FLXA0FRWRDS28HH FLXA0.FRWRDS28.UINT8[HH]
#define FLXA0FRWRDS29 FLXA0.FRWRDS29.UINT32
#define FLXA0FRWRDS29L FLXA0.FRWRDS29.UINT16[L]
#define FLXA0FRWRDS29LL FLXA0.FRWRDS29.UINT8[LL]
#define FLXA0FRWRDS29LH FLXA0.FRWRDS29.UINT8[LH]
#define FLXA0FRWRDS29H FLXA0.FRWRDS29.UINT16[H]
#define FLXA0FRWRDS29HL FLXA0.FRWRDS29.UINT8[HL]
#define FLXA0FRWRDS29HH FLXA0.FRWRDS29.UINT8[HH]
#define FLXA0FRWRDS30 FLXA0.FRWRDS30.UINT32
#define FLXA0FRWRDS30L FLXA0.FRWRDS30.UINT16[L]
#define FLXA0FRWRDS30LL FLXA0.FRWRDS30.UINT8[LL]
#define FLXA0FRWRDS30LH FLXA0.FRWRDS30.UINT8[LH]
#define FLXA0FRWRDS30H FLXA0.FRWRDS30.UINT16[H]
#define FLXA0FRWRDS30HL FLXA0.FRWRDS30.UINT8[HL]
#define FLXA0FRWRDS30HH FLXA0.FRWRDS30.UINT8[HH]
#define FLXA0FRWRDS31 FLXA0.FRWRDS31.UINT32
#define FLXA0FRWRDS31L FLXA0.FRWRDS31.UINT16[L]
#define FLXA0FRWRDS31LL FLXA0.FRWRDS31.UINT8[LL]
#define FLXA0FRWRDS31LH FLXA0.FRWRDS31.UINT8[LH]
#define FLXA0FRWRDS31H FLXA0.FRWRDS31.UINT16[H]
#define FLXA0FRWRDS31HL FLXA0.FRWRDS31.UINT8[HL]
#define FLXA0FRWRDS31HH FLXA0.FRWRDS31.UINT8[HH]
#define FLXA0FRWRDS32 FLXA0.FRWRDS32.UINT32
#define FLXA0FRWRDS32L FLXA0.FRWRDS32.UINT16[L]
#define FLXA0FRWRDS32LL FLXA0.FRWRDS32.UINT8[LL]
#define FLXA0FRWRDS32LH FLXA0.FRWRDS32.UINT8[LH]
#define FLXA0FRWRDS32H FLXA0.FRWRDS32.UINT16[H]
#define FLXA0FRWRDS32HL FLXA0.FRWRDS32.UINT8[HL]
#define FLXA0FRWRDS32HH FLXA0.FRWRDS32.UINT8[HH]
#define FLXA0FRWRDS33 FLXA0.FRWRDS33.UINT32
#define FLXA0FRWRDS33L FLXA0.FRWRDS33.UINT16[L]
#define FLXA0FRWRDS33LL FLXA0.FRWRDS33.UINT8[LL]
#define FLXA0FRWRDS33LH FLXA0.FRWRDS33.UINT8[LH]
#define FLXA0FRWRDS33H FLXA0.FRWRDS33.UINT16[H]
#define FLXA0FRWRDS33HL FLXA0.FRWRDS33.UINT8[HL]
#define FLXA0FRWRDS33HH FLXA0.FRWRDS33.UINT8[HH]
#define FLXA0FRWRDS34 FLXA0.FRWRDS34.UINT32
#define FLXA0FRWRDS34L FLXA0.FRWRDS34.UINT16[L]
#define FLXA0FRWRDS34LL FLXA0.FRWRDS34.UINT8[LL]
#define FLXA0FRWRDS34LH FLXA0.FRWRDS34.UINT8[LH]
#define FLXA0FRWRDS34H FLXA0.FRWRDS34.UINT16[H]
#define FLXA0FRWRDS34HL FLXA0.FRWRDS34.UINT8[HL]
#define FLXA0FRWRDS34HH FLXA0.FRWRDS34.UINT8[HH]
#define FLXA0FRWRDS35 FLXA0.FRWRDS35.UINT32
#define FLXA0FRWRDS35L FLXA0.FRWRDS35.UINT16[L]
#define FLXA0FRWRDS35LL FLXA0.FRWRDS35.UINT8[LL]
#define FLXA0FRWRDS35LH FLXA0.FRWRDS35.UINT8[LH]
#define FLXA0FRWRDS35H FLXA0.FRWRDS35.UINT16[H]
#define FLXA0FRWRDS35HL FLXA0.FRWRDS35.UINT8[HL]
#define FLXA0FRWRDS35HH FLXA0.FRWRDS35.UINT8[HH]
#define FLXA0FRWRDS36 FLXA0.FRWRDS36.UINT32
#define FLXA0FRWRDS36L FLXA0.FRWRDS36.UINT16[L]
#define FLXA0FRWRDS36LL FLXA0.FRWRDS36.UINT8[LL]
#define FLXA0FRWRDS36LH FLXA0.FRWRDS36.UINT8[LH]
#define FLXA0FRWRDS36H FLXA0.FRWRDS36.UINT16[H]
#define FLXA0FRWRDS36HL FLXA0.FRWRDS36.UINT8[HL]
#define FLXA0FRWRDS36HH FLXA0.FRWRDS36.UINT8[HH]
#define FLXA0FRWRDS37 FLXA0.FRWRDS37.UINT32
#define FLXA0FRWRDS37L FLXA0.FRWRDS37.UINT16[L]
#define FLXA0FRWRDS37LL FLXA0.FRWRDS37.UINT8[LL]
#define FLXA0FRWRDS37LH FLXA0.FRWRDS37.UINT8[LH]
#define FLXA0FRWRDS37H FLXA0.FRWRDS37.UINT16[H]
#define FLXA0FRWRDS37HL FLXA0.FRWRDS37.UINT8[HL]
#define FLXA0FRWRDS37HH FLXA0.FRWRDS37.UINT8[HH]
#define FLXA0FRWRDS38 FLXA0.FRWRDS38.UINT32
#define FLXA0FRWRDS38L FLXA0.FRWRDS38.UINT16[L]
#define FLXA0FRWRDS38LL FLXA0.FRWRDS38.UINT8[LL]
#define FLXA0FRWRDS38LH FLXA0.FRWRDS38.UINT8[LH]
#define FLXA0FRWRDS38H FLXA0.FRWRDS38.UINT16[H]
#define FLXA0FRWRDS38HL FLXA0.FRWRDS38.UINT8[HL]
#define FLXA0FRWRDS38HH FLXA0.FRWRDS38.UINT8[HH]
#define FLXA0FRWRDS39 FLXA0.FRWRDS39.UINT32
#define FLXA0FRWRDS39L FLXA0.FRWRDS39.UINT16[L]
#define FLXA0FRWRDS39LL FLXA0.FRWRDS39.UINT8[LL]
#define FLXA0FRWRDS39LH FLXA0.FRWRDS39.UINT8[LH]
#define FLXA0FRWRDS39H FLXA0.FRWRDS39.UINT16[H]
#define FLXA0FRWRDS39HL FLXA0.FRWRDS39.UINT8[HL]
#define FLXA0FRWRDS39HH FLXA0.FRWRDS39.UINT8[HH]
#define FLXA0FRWRDS40 FLXA0.FRWRDS40.UINT32
#define FLXA0FRWRDS40L FLXA0.FRWRDS40.UINT16[L]
#define FLXA0FRWRDS40LL FLXA0.FRWRDS40.UINT8[LL]
#define FLXA0FRWRDS40LH FLXA0.FRWRDS40.UINT8[LH]
#define FLXA0FRWRDS40H FLXA0.FRWRDS40.UINT16[H]
#define FLXA0FRWRDS40HL FLXA0.FRWRDS40.UINT8[HL]
#define FLXA0FRWRDS40HH FLXA0.FRWRDS40.UINT8[HH]
#define FLXA0FRWRDS41 FLXA0.FRWRDS41.UINT32
#define FLXA0FRWRDS41L FLXA0.FRWRDS41.UINT16[L]
#define FLXA0FRWRDS41LL FLXA0.FRWRDS41.UINT8[LL]
#define FLXA0FRWRDS41LH FLXA0.FRWRDS41.UINT8[LH]
#define FLXA0FRWRDS41H FLXA0.FRWRDS41.UINT16[H]
#define FLXA0FRWRDS41HL FLXA0.FRWRDS41.UINT8[HL]
#define FLXA0FRWRDS41HH FLXA0.FRWRDS41.UINT8[HH]
#define FLXA0FRWRDS42 FLXA0.FRWRDS42.UINT32
#define FLXA0FRWRDS42L FLXA0.FRWRDS42.UINT16[L]
#define FLXA0FRWRDS42LL FLXA0.FRWRDS42.UINT8[LL]
#define FLXA0FRWRDS42LH FLXA0.FRWRDS42.UINT8[LH]
#define FLXA0FRWRDS42H FLXA0.FRWRDS42.UINT16[H]
#define FLXA0FRWRDS42HL FLXA0.FRWRDS42.UINT8[HL]
#define FLXA0FRWRDS42HH FLXA0.FRWRDS42.UINT8[HH]
#define FLXA0FRWRDS43 FLXA0.FRWRDS43.UINT32
#define FLXA0FRWRDS43L FLXA0.FRWRDS43.UINT16[L]
#define FLXA0FRWRDS43LL FLXA0.FRWRDS43.UINT8[LL]
#define FLXA0FRWRDS43LH FLXA0.FRWRDS43.UINT8[LH]
#define FLXA0FRWRDS43H FLXA0.FRWRDS43.UINT16[H]
#define FLXA0FRWRDS43HL FLXA0.FRWRDS43.UINT8[HL]
#define FLXA0FRWRDS43HH FLXA0.FRWRDS43.UINT8[HH]
#define FLXA0FRWRDS44 FLXA0.FRWRDS44.UINT32
#define FLXA0FRWRDS44L FLXA0.FRWRDS44.UINT16[L]
#define FLXA0FRWRDS44LL FLXA0.FRWRDS44.UINT8[LL]
#define FLXA0FRWRDS44LH FLXA0.FRWRDS44.UINT8[LH]
#define FLXA0FRWRDS44H FLXA0.FRWRDS44.UINT16[H]
#define FLXA0FRWRDS44HL FLXA0.FRWRDS44.UINT8[HL]
#define FLXA0FRWRDS44HH FLXA0.FRWRDS44.UINT8[HH]
#define FLXA0FRWRDS45 FLXA0.FRWRDS45.UINT32
#define FLXA0FRWRDS45L FLXA0.FRWRDS45.UINT16[L]
#define FLXA0FRWRDS45LL FLXA0.FRWRDS45.UINT8[LL]
#define FLXA0FRWRDS45LH FLXA0.FRWRDS45.UINT8[LH]
#define FLXA0FRWRDS45H FLXA0.FRWRDS45.UINT16[H]
#define FLXA0FRWRDS45HL FLXA0.FRWRDS45.UINT8[HL]
#define FLXA0FRWRDS45HH FLXA0.FRWRDS45.UINT8[HH]
#define FLXA0FRWRDS46 FLXA0.FRWRDS46.UINT32
#define FLXA0FRWRDS46L FLXA0.FRWRDS46.UINT16[L]
#define FLXA0FRWRDS46LL FLXA0.FRWRDS46.UINT8[LL]
#define FLXA0FRWRDS46LH FLXA0.FRWRDS46.UINT8[LH]
#define FLXA0FRWRDS46H FLXA0.FRWRDS46.UINT16[H]
#define FLXA0FRWRDS46HL FLXA0.FRWRDS46.UINT8[HL]
#define FLXA0FRWRDS46HH FLXA0.FRWRDS46.UINT8[HH]
#define FLXA0FRWRDS47 FLXA0.FRWRDS47.UINT32
#define FLXA0FRWRDS47L FLXA0.FRWRDS47.UINT16[L]
#define FLXA0FRWRDS47LL FLXA0.FRWRDS47.UINT8[LL]
#define FLXA0FRWRDS47LH FLXA0.FRWRDS47.UINT8[LH]
#define FLXA0FRWRDS47H FLXA0.FRWRDS47.UINT16[H]
#define FLXA0FRWRDS47HL FLXA0.FRWRDS47.UINT8[HL]
#define FLXA0FRWRDS47HH FLXA0.FRWRDS47.UINT8[HH]
#define FLXA0FRWRDS48 FLXA0.FRWRDS48.UINT32
#define FLXA0FRWRDS48L FLXA0.FRWRDS48.UINT16[L]
#define FLXA0FRWRDS48LL FLXA0.FRWRDS48.UINT8[LL]
#define FLXA0FRWRDS48LH FLXA0.FRWRDS48.UINT8[LH]
#define FLXA0FRWRDS48H FLXA0.FRWRDS48.UINT16[H]
#define FLXA0FRWRDS48HL FLXA0.FRWRDS48.UINT8[HL]
#define FLXA0FRWRDS48HH FLXA0.FRWRDS48.UINT8[HH]
#define FLXA0FRWRDS49 FLXA0.FRWRDS49.UINT32
#define FLXA0FRWRDS49L FLXA0.FRWRDS49.UINT16[L]
#define FLXA0FRWRDS49LL FLXA0.FRWRDS49.UINT8[LL]
#define FLXA0FRWRDS49LH FLXA0.FRWRDS49.UINT8[LH]
#define FLXA0FRWRDS49H FLXA0.FRWRDS49.UINT16[H]
#define FLXA0FRWRDS49HL FLXA0.FRWRDS49.UINT8[HL]
#define FLXA0FRWRDS49HH FLXA0.FRWRDS49.UINT8[HH]
#define FLXA0FRWRDS50 FLXA0.FRWRDS50.UINT32
#define FLXA0FRWRDS50L FLXA0.FRWRDS50.UINT16[L]
#define FLXA0FRWRDS50LL FLXA0.FRWRDS50.UINT8[LL]
#define FLXA0FRWRDS50LH FLXA0.FRWRDS50.UINT8[LH]
#define FLXA0FRWRDS50H FLXA0.FRWRDS50.UINT16[H]
#define FLXA0FRWRDS50HL FLXA0.FRWRDS50.UINT8[HL]
#define FLXA0FRWRDS50HH FLXA0.FRWRDS50.UINT8[HH]
#define FLXA0FRWRDS51 FLXA0.FRWRDS51.UINT32
#define FLXA0FRWRDS51L FLXA0.FRWRDS51.UINT16[L]
#define FLXA0FRWRDS51LL FLXA0.FRWRDS51.UINT8[LL]
#define FLXA0FRWRDS51LH FLXA0.FRWRDS51.UINT8[LH]
#define FLXA0FRWRDS51H FLXA0.FRWRDS51.UINT16[H]
#define FLXA0FRWRDS51HL FLXA0.FRWRDS51.UINT8[HL]
#define FLXA0FRWRDS51HH FLXA0.FRWRDS51.UINT8[HH]
#define FLXA0FRWRDS52 FLXA0.FRWRDS52.UINT32
#define FLXA0FRWRDS52L FLXA0.FRWRDS52.UINT16[L]
#define FLXA0FRWRDS52LL FLXA0.FRWRDS52.UINT8[LL]
#define FLXA0FRWRDS52LH FLXA0.FRWRDS52.UINT8[LH]
#define FLXA0FRWRDS52H FLXA0.FRWRDS52.UINT16[H]
#define FLXA0FRWRDS52HL FLXA0.FRWRDS52.UINT8[HL]
#define FLXA0FRWRDS52HH FLXA0.FRWRDS52.UINT8[HH]
#define FLXA0FRWRDS53 FLXA0.FRWRDS53.UINT32
#define FLXA0FRWRDS53L FLXA0.FRWRDS53.UINT16[L]
#define FLXA0FRWRDS53LL FLXA0.FRWRDS53.UINT8[LL]
#define FLXA0FRWRDS53LH FLXA0.FRWRDS53.UINT8[LH]
#define FLXA0FRWRDS53H FLXA0.FRWRDS53.UINT16[H]
#define FLXA0FRWRDS53HL FLXA0.FRWRDS53.UINT8[HL]
#define FLXA0FRWRDS53HH FLXA0.FRWRDS53.UINT8[HH]
#define FLXA0FRWRDS54 FLXA0.FRWRDS54.UINT32
#define FLXA0FRWRDS54L FLXA0.FRWRDS54.UINT16[L]
#define FLXA0FRWRDS54LL FLXA0.FRWRDS54.UINT8[LL]
#define FLXA0FRWRDS54LH FLXA0.FRWRDS54.UINT8[LH]
#define FLXA0FRWRDS54H FLXA0.FRWRDS54.UINT16[H]
#define FLXA0FRWRDS54HL FLXA0.FRWRDS54.UINT8[HL]
#define FLXA0FRWRDS54HH FLXA0.FRWRDS54.UINT8[HH]
#define FLXA0FRWRDS55 FLXA0.FRWRDS55.UINT32
#define FLXA0FRWRDS55L FLXA0.FRWRDS55.UINT16[L]
#define FLXA0FRWRDS55LL FLXA0.FRWRDS55.UINT8[LL]
#define FLXA0FRWRDS55LH FLXA0.FRWRDS55.UINT8[LH]
#define FLXA0FRWRDS55H FLXA0.FRWRDS55.UINT16[H]
#define FLXA0FRWRDS55HL FLXA0.FRWRDS55.UINT8[HL]
#define FLXA0FRWRDS55HH FLXA0.FRWRDS55.UINT8[HH]
#define FLXA0FRWRDS56 FLXA0.FRWRDS56.UINT32
#define FLXA0FRWRDS56L FLXA0.FRWRDS56.UINT16[L]
#define FLXA0FRWRDS56LL FLXA0.FRWRDS56.UINT8[LL]
#define FLXA0FRWRDS56LH FLXA0.FRWRDS56.UINT8[LH]
#define FLXA0FRWRDS56H FLXA0.FRWRDS56.UINT16[H]
#define FLXA0FRWRDS56HL FLXA0.FRWRDS56.UINT8[HL]
#define FLXA0FRWRDS56HH FLXA0.FRWRDS56.UINT8[HH]
#define FLXA0FRWRDS57 FLXA0.FRWRDS57.UINT32
#define FLXA0FRWRDS57L FLXA0.FRWRDS57.UINT16[L]
#define FLXA0FRWRDS57LL FLXA0.FRWRDS57.UINT8[LL]
#define FLXA0FRWRDS57LH FLXA0.FRWRDS57.UINT8[LH]
#define FLXA0FRWRDS57H FLXA0.FRWRDS57.UINT16[H]
#define FLXA0FRWRDS57HL FLXA0.FRWRDS57.UINT8[HL]
#define FLXA0FRWRDS57HH FLXA0.FRWRDS57.UINT8[HH]
#define FLXA0FRWRDS58 FLXA0.FRWRDS58.UINT32
#define FLXA0FRWRDS58L FLXA0.FRWRDS58.UINT16[L]
#define FLXA0FRWRDS58LL FLXA0.FRWRDS58.UINT8[LL]
#define FLXA0FRWRDS58LH FLXA0.FRWRDS58.UINT8[LH]
#define FLXA0FRWRDS58H FLXA0.FRWRDS58.UINT16[H]
#define FLXA0FRWRDS58HL FLXA0.FRWRDS58.UINT8[HL]
#define FLXA0FRWRDS58HH FLXA0.FRWRDS58.UINT8[HH]
#define FLXA0FRWRDS59 FLXA0.FRWRDS59.UINT32
#define FLXA0FRWRDS59L FLXA0.FRWRDS59.UINT16[L]
#define FLXA0FRWRDS59LL FLXA0.FRWRDS59.UINT8[LL]
#define FLXA0FRWRDS59LH FLXA0.FRWRDS59.UINT8[LH]
#define FLXA0FRWRDS59H FLXA0.FRWRDS59.UINT16[H]
#define FLXA0FRWRDS59HL FLXA0.FRWRDS59.UINT8[HL]
#define FLXA0FRWRDS59HH FLXA0.FRWRDS59.UINT8[HH]
#define FLXA0FRWRDS60 FLXA0.FRWRDS60.UINT32
#define FLXA0FRWRDS60L FLXA0.FRWRDS60.UINT16[L]
#define FLXA0FRWRDS60LL FLXA0.FRWRDS60.UINT8[LL]
#define FLXA0FRWRDS60LH FLXA0.FRWRDS60.UINT8[LH]
#define FLXA0FRWRDS60H FLXA0.FRWRDS60.UINT16[H]
#define FLXA0FRWRDS60HL FLXA0.FRWRDS60.UINT8[HL]
#define FLXA0FRWRDS60HH FLXA0.FRWRDS60.UINT8[HH]
#define FLXA0FRWRDS61 FLXA0.FRWRDS61.UINT32
#define FLXA0FRWRDS61L FLXA0.FRWRDS61.UINT16[L]
#define FLXA0FRWRDS61LL FLXA0.FRWRDS61.UINT8[LL]
#define FLXA0FRWRDS61LH FLXA0.FRWRDS61.UINT8[LH]
#define FLXA0FRWRDS61H FLXA0.FRWRDS61.UINT16[H]
#define FLXA0FRWRDS61HL FLXA0.FRWRDS61.UINT8[HL]
#define FLXA0FRWRDS61HH FLXA0.FRWRDS61.UINT8[HH]
#define FLXA0FRWRDS62 FLXA0.FRWRDS62.UINT32
#define FLXA0FRWRDS62L FLXA0.FRWRDS62.UINT16[L]
#define FLXA0FRWRDS62LL FLXA0.FRWRDS62.UINT8[LL]
#define FLXA0FRWRDS62LH FLXA0.FRWRDS62.UINT8[LH]
#define FLXA0FRWRDS62H FLXA0.FRWRDS62.UINT16[H]
#define FLXA0FRWRDS62HL FLXA0.FRWRDS62.UINT8[HL]
#define FLXA0FRWRDS62HH FLXA0.FRWRDS62.UINT8[HH]
#define FLXA0FRWRDS63 FLXA0.FRWRDS63.UINT32
#define FLXA0FRWRDS63L FLXA0.FRWRDS63.UINT16[L]
#define FLXA0FRWRDS63LL FLXA0.FRWRDS63.UINT8[LL]
#define FLXA0FRWRDS63LH FLXA0.FRWRDS63.UINT8[LH]
#define FLXA0FRWRDS63H FLXA0.FRWRDS63.UINT16[H]
#define FLXA0FRWRDS63HL FLXA0.FRWRDS63.UINT8[HL]
#define FLXA0FRWRDS63HH FLXA0.FRWRDS63.UINT8[HH]
#define FLXA0FRWRDS64 FLXA0.FRWRDS64.UINT32
#define FLXA0FRWRDS64L FLXA0.FRWRDS64.UINT16[L]
#define FLXA0FRWRDS64LL FLXA0.FRWRDS64.UINT8[LL]
#define FLXA0FRWRDS64LH FLXA0.FRWRDS64.UINT8[LH]
#define FLXA0FRWRDS64H FLXA0.FRWRDS64.UINT16[H]
#define FLXA0FRWRDS64HL FLXA0.FRWRDS64.UINT8[HL]
#define FLXA0FRWRDS64HH FLXA0.FRWRDS64.UINT8[HH]
#define FLXA0FRWRHS1 FLXA0.FRWRHS1.UINT32
#define FLXA0FRWRHS1L FLXA0.FRWRHS1.UINT16[L]
#define FLXA0FRWRHS1LL FLXA0.FRWRHS1.UINT8[LL]
#define FLXA0FRWRHS1LH FLXA0.FRWRHS1.UINT8[LH]
#define FLXA0FRWRHS1H FLXA0.FRWRHS1.UINT16[H]
#define FLXA0FRWRHS1HL FLXA0.FRWRHS1.UINT8[HL]
#define FLXA0FRWRHS1HH FLXA0.FRWRHS1.UINT8[HH]
#define FLXA0FRWRHS2 FLXA0.FRWRHS2.UINT32
#define FLXA0FRWRHS2L FLXA0.FRWRHS2.UINT16[L]
#define FLXA0FRWRHS2LL FLXA0.FRWRHS2.UINT8[LL]
#define FLXA0FRWRHS2LH FLXA0.FRWRHS2.UINT8[LH]
#define FLXA0FRWRHS2H FLXA0.FRWRHS2.UINT16[H]
#define FLXA0FRWRHS2HL FLXA0.FRWRHS2.UINT8[HL]
#define FLXA0FRWRHS3 FLXA0.FRWRHS3.UINT32
#define FLXA0FRWRHS3L FLXA0.FRWRHS3.UINT16[L]
#define FLXA0FRWRHS3LL FLXA0.FRWRHS3.UINT8[LL]
#define FLXA0FRWRHS3LH FLXA0.FRWRHS3.UINT8[LH]
#define FLXA0FRIBCM FLXA0.FRIBCM.UINT32
#define FLXA0FRIBCML FLXA0.FRIBCM.UINT16[L]
#define FLXA0FRIBCMLL FLXA0.FRIBCM.UINT8[LL]
#define FLXA0FRIBCMH FLXA0.FRIBCM.UINT16[H]
#define FLXA0FRIBCMHL FLXA0.FRIBCM.UINT8[HL]
#define FLXA0FRIBCR FLXA0.FRIBCR.UINT32
#define FLXA0FRIBCRL FLXA0.FRIBCR.UINT16[L]
#define FLXA0FRIBCRLL FLXA0.FRIBCR.UINT8[LL]
#define FLXA0FRIBCRLH FLXA0.FRIBCR.UINT8[LH]
#define FLXA0FRIBCRH FLXA0.FRIBCR.UINT16[H]
#define FLXA0FRIBCRHL FLXA0.FRIBCR.UINT8[HL]
#define FLXA0FRIBCRHH FLXA0.FRIBCR.UINT8[HH]
#define FLXA0FRRDDS1 FLXA0.FRRDDS1.UINT32
#define FLXA0FRRDDS1L FLXA0.FRRDDS1.UINT16[L]
#define FLXA0FRRDDS1LL FLXA0.FRRDDS1.UINT8[LL]
#define FLXA0FRRDDS1LH FLXA0.FRRDDS1.UINT8[LH]
#define FLXA0FRRDDS1H FLXA0.FRRDDS1.UINT16[H]
#define FLXA0FRRDDS1HL FLXA0.FRRDDS1.UINT8[HL]
#define FLXA0FRRDDS1HH FLXA0.FRRDDS1.UINT8[HH]
#define FLXA0FRRDDS2 FLXA0.FRRDDS2.UINT32
#define FLXA0FRRDDS2L FLXA0.FRRDDS2.UINT16[L]
#define FLXA0FRRDDS2LL FLXA0.FRRDDS2.UINT8[LL]
#define FLXA0FRRDDS2LH FLXA0.FRRDDS2.UINT8[LH]
#define FLXA0FRRDDS2H FLXA0.FRRDDS2.UINT16[H]
#define FLXA0FRRDDS2HL FLXA0.FRRDDS2.UINT8[HL]
#define FLXA0FRRDDS2HH FLXA0.FRRDDS2.UINT8[HH]
#define FLXA0FRRDDS3 FLXA0.FRRDDS3.UINT32
#define FLXA0FRRDDS3L FLXA0.FRRDDS3.UINT16[L]
#define FLXA0FRRDDS3LL FLXA0.FRRDDS3.UINT8[LL]
#define FLXA0FRRDDS3LH FLXA0.FRRDDS3.UINT8[LH]
#define FLXA0FRRDDS3H FLXA0.FRRDDS3.UINT16[H]
#define FLXA0FRRDDS3HL FLXA0.FRRDDS3.UINT8[HL]
#define FLXA0FRRDDS3HH FLXA0.FRRDDS3.UINT8[HH]
#define FLXA0FRRDDS4 FLXA0.FRRDDS4.UINT32
#define FLXA0FRRDDS4L FLXA0.FRRDDS4.UINT16[L]
#define FLXA0FRRDDS4LL FLXA0.FRRDDS4.UINT8[LL]
#define FLXA0FRRDDS4LH FLXA0.FRRDDS4.UINT8[LH]
#define FLXA0FRRDDS4H FLXA0.FRRDDS4.UINT16[H]
#define FLXA0FRRDDS4HL FLXA0.FRRDDS4.UINT8[HL]
#define FLXA0FRRDDS4HH FLXA0.FRRDDS4.UINT8[HH]
#define FLXA0FRRDDS5 FLXA0.FRRDDS5.UINT32
#define FLXA0FRRDDS5L FLXA0.FRRDDS5.UINT16[L]
#define FLXA0FRRDDS5LL FLXA0.FRRDDS5.UINT8[LL]
#define FLXA0FRRDDS5LH FLXA0.FRRDDS5.UINT8[LH]
#define FLXA0FRRDDS5H FLXA0.FRRDDS5.UINT16[H]
#define FLXA0FRRDDS5HL FLXA0.FRRDDS5.UINT8[HL]
#define FLXA0FRRDDS5HH FLXA0.FRRDDS5.UINT8[HH]
#define FLXA0FRRDDS6 FLXA0.FRRDDS6.UINT32
#define FLXA0FRRDDS6L FLXA0.FRRDDS6.UINT16[L]
#define FLXA0FRRDDS6LL FLXA0.FRRDDS6.UINT8[LL]
#define FLXA0FRRDDS6LH FLXA0.FRRDDS6.UINT8[LH]
#define FLXA0FRRDDS6H FLXA0.FRRDDS6.UINT16[H]
#define FLXA0FRRDDS6HL FLXA0.FRRDDS6.UINT8[HL]
#define FLXA0FRRDDS6HH FLXA0.FRRDDS6.UINT8[HH]
#define FLXA0FRRDDS7 FLXA0.FRRDDS7.UINT32
#define FLXA0FRRDDS7L FLXA0.FRRDDS7.UINT16[L]
#define FLXA0FRRDDS7LL FLXA0.FRRDDS7.UINT8[LL]
#define FLXA0FRRDDS7LH FLXA0.FRRDDS7.UINT8[LH]
#define FLXA0FRRDDS7H FLXA0.FRRDDS7.UINT16[H]
#define FLXA0FRRDDS7HL FLXA0.FRRDDS7.UINT8[HL]
#define FLXA0FRRDDS7HH FLXA0.FRRDDS7.UINT8[HH]
#define FLXA0FRRDDS8 FLXA0.FRRDDS8.UINT32
#define FLXA0FRRDDS8L FLXA0.FRRDDS8.UINT16[L]
#define FLXA0FRRDDS8LL FLXA0.FRRDDS8.UINT8[LL]
#define FLXA0FRRDDS8LH FLXA0.FRRDDS8.UINT8[LH]
#define FLXA0FRRDDS8H FLXA0.FRRDDS8.UINT16[H]
#define FLXA0FRRDDS8HL FLXA0.FRRDDS8.UINT8[HL]
#define FLXA0FRRDDS8HH FLXA0.FRRDDS8.UINT8[HH]
#define FLXA0FRRDDS9 FLXA0.FRRDDS9.UINT32
#define FLXA0FRRDDS9L FLXA0.FRRDDS9.UINT16[L]
#define FLXA0FRRDDS9LL FLXA0.FRRDDS9.UINT8[LL]
#define FLXA0FRRDDS9LH FLXA0.FRRDDS9.UINT8[LH]
#define FLXA0FRRDDS9H FLXA0.FRRDDS9.UINT16[H]
#define FLXA0FRRDDS9HL FLXA0.FRRDDS9.UINT8[HL]
#define FLXA0FRRDDS9HH FLXA0.FRRDDS9.UINT8[HH]
#define FLXA0FRRDDS10 FLXA0.FRRDDS10.UINT32
#define FLXA0FRRDDS10L FLXA0.FRRDDS10.UINT16[L]
#define FLXA0FRRDDS10LL FLXA0.FRRDDS10.UINT8[LL]
#define FLXA0FRRDDS10LH FLXA0.FRRDDS10.UINT8[LH]
#define FLXA0FRRDDS10H FLXA0.FRRDDS10.UINT16[H]
#define FLXA0FRRDDS10HL FLXA0.FRRDDS10.UINT8[HL]
#define FLXA0FRRDDS10HH FLXA0.FRRDDS10.UINT8[HH]
#define FLXA0FRRDDS11 FLXA0.FRRDDS11.UINT32
#define FLXA0FRRDDS11L FLXA0.FRRDDS11.UINT16[L]
#define FLXA0FRRDDS11LL FLXA0.FRRDDS11.UINT8[LL]
#define FLXA0FRRDDS11LH FLXA0.FRRDDS11.UINT8[LH]
#define FLXA0FRRDDS11H FLXA0.FRRDDS11.UINT16[H]
#define FLXA0FRRDDS11HL FLXA0.FRRDDS11.UINT8[HL]
#define FLXA0FRRDDS11HH FLXA0.FRRDDS11.UINT8[HH]
#define FLXA0FRRDDS12 FLXA0.FRRDDS12.UINT32
#define FLXA0FRRDDS12L FLXA0.FRRDDS12.UINT16[L]
#define FLXA0FRRDDS12LL FLXA0.FRRDDS12.UINT8[LL]
#define FLXA0FRRDDS12LH FLXA0.FRRDDS12.UINT8[LH]
#define FLXA0FRRDDS12H FLXA0.FRRDDS12.UINT16[H]
#define FLXA0FRRDDS12HL FLXA0.FRRDDS12.UINT8[HL]
#define FLXA0FRRDDS12HH FLXA0.FRRDDS12.UINT8[HH]
#define FLXA0FRRDDS13 FLXA0.FRRDDS13.UINT32
#define FLXA0FRRDDS13L FLXA0.FRRDDS13.UINT16[L]
#define FLXA0FRRDDS13LL FLXA0.FRRDDS13.UINT8[LL]
#define FLXA0FRRDDS13LH FLXA0.FRRDDS13.UINT8[LH]
#define FLXA0FRRDDS13H FLXA0.FRRDDS13.UINT16[H]
#define FLXA0FRRDDS13HL FLXA0.FRRDDS13.UINT8[HL]
#define FLXA0FRRDDS13HH FLXA0.FRRDDS13.UINT8[HH]
#define FLXA0FRRDDS14 FLXA0.FRRDDS14.UINT32
#define FLXA0FRRDDS14L FLXA0.FRRDDS14.UINT16[L]
#define FLXA0FRRDDS14LL FLXA0.FRRDDS14.UINT8[LL]
#define FLXA0FRRDDS14LH FLXA0.FRRDDS14.UINT8[LH]
#define FLXA0FRRDDS14H FLXA0.FRRDDS14.UINT16[H]
#define FLXA0FRRDDS14HL FLXA0.FRRDDS14.UINT8[HL]
#define FLXA0FRRDDS14HH FLXA0.FRRDDS14.UINT8[HH]
#define FLXA0FRRDDS15 FLXA0.FRRDDS15.UINT32
#define FLXA0FRRDDS15L FLXA0.FRRDDS15.UINT16[L]
#define FLXA0FRRDDS15LL FLXA0.FRRDDS15.UINT8[LL]
#define FLXA0FRRDDS15LH FLXA0.FRRDDS15.UINT8[LH]
#define FLXA0FRRDDS15H FLXA0.FRRDDS15.UINT16[H]
#define FLXA0FRRDDS15HL FLXA0.FRRDDS15.UINT8[HL]
#define FLXA0FRRDDS15HH FLXA0.FRRDDS15.UINT8[HH]
#define FLXA0FRRDDS16 FLXA0.FRRDDS16.UINT32
#define FLXA0FRRDDS16L FLXA0.FRRDDS16.UINT16[L]
#define FLXA0FRRDDS16LL FLXA0.FRRDDS16.UINT8[LL]
#define FLXA0FRRDDS16LH FLXA0.FRRDDS16.UINT8[LH]
#define FLXA0FRRDDS16H FLXA0.FRRDDS16.UINT16[H]
#define FLXA0FRRDDS16HL FLXA0.FRRDDS16.UINT8[HL]
#define FLXA0FRRDDS16HH FLXA0.FRRDDS16.UINT8[HH]
#define FLXA0FRRDDS17 FLXA0.FRRDDS17.UINT32
#define FLXA0FRRDDS17L FLXA0.FRRDDS17.UINT16[L]
#define FLXA0FRRDDS17LL FLXA0.FRRDDS17.UINT8[LL]
#define FLXA0FRRDDS17LH FLXA0.FRRDDS17.UINT8[LH]
#define FLXA0FRRDDS17H FLXA0.FRRDDS17.UINT16[H]
#define FLXA0FRRDDS17HL FLXA0.FRRDDS17.UINT8[HL]
#define FLXA0FRRDDS17HH FLXA0.FRRDDS17.UINT8[HH]
#define FLXA0FRRDDS18 FLXA0.FRRDDS18.UINT32
#define FLXA0FRRDDS18L FLXA0.FRRDDS18.UINT16[L]
#define FLXA0FRRDDS18LL FLXA0.FRRDDS18.UINT8[LL]
#define FLXA0FRRDDS18LH FLXA0.FRRDDS18.UINT8[LH]
#define FLXA0FRRDDS18H FLXA0.FRRDDS18.UINT16[H]
#define FLXA0FRRDDS18HL FLXA0.FRRDDS18.UINT8[HL]
#define FLXA0FRRDDS18HH FLXA0.FRRDDS18.UINT8[HH]
#define FLXA0FRRDDS19 FLXA0.FRRDDS19.UINT32
#define FLXA0FRRDDS19L FLXA0.FRRDDS19.UINT16[L]
#define FLXA0FRRDDS19LL FLXA0.FRRDDS19.UINT8[LL]
#define FLXA0FRRDDS19LH FLXA0.FRRDDS19.UINT8[LH]
#define FLXA0FRRDDS19H FLXA0.FRRDDS19.UINT16[H]
#define FLXA0FRRDDS19HL FLXA0.FRRDDS19.UINT8[HL]
#define FLXA0FRRDDS19HH FLXA0.FRRDDS19.UINT8[HH]
#define FLXA0FRRDDS20 FLXA0.FRRDDS20.UINT32
#define FLXA0FRRDDS20L FLXA0.FRRDDS20.UINT16[L]
#define FLXA0FRRDDS20LL FLXA0.FRRDDS20.UINT8[LL]
#define FLXA0FRRDDS20LH FLXA0.FRRDDS20.UINT8[LH]
#define FLXA0FRRDDS20H FLXA0.FRRDDS20.UINT16[H]
#define FLXA0FRRDDS20HL FLXA0.FRRDDS20.UINT8[HL]
#define FLXA0FRRDDS20HH FLXA0.FRRDDS20.UINT8[HH]
#define FLXA0FRRDDS21 FLXA0.FRRDDS21.UINT32
#define FLXA0FRRDDS21L FLXA0.FRRDDS21.UINT16[L]
#define FLXA0FRRDDS21LL FLXA0.FRRDDS21.UINT8[LL]
#define FLXA0FRRDDS21LH FLXA0.FRRDDS21.UINT8[LH]
#define FLXA0FRRDDS21H FLXA0.FRRDDS21.UINT16[H]
#define FLXA0FRRDDS21HL FLXA0.FRRDDS21.UINT8[HL]
#define FLXA0FRRDDS21HH FLXA0.FRRDDS21.UINT8[HH]
#define FLXA0FRRDDS22 FLXA0.FRRDDS22.UINT32
#define FLXA0FRRDDS22L FLXA0.FRRDDS22.UINT16[L]
#define FLXA0FRRDDS22LL FLXA0.FRRDDS22.UINT8[LL]
#define FLXA0FRRDDS22LH FLXA0.FRRDDS22.UINT8[LH]
#define FLXA0FRRDDS22H FLXA0.FRRDDS22.UINT16[H]
#define FLXA0FRRDDS22HL FLXA0.FRRDDS22.UINT8[HL]
#define FLXA0FRRDDS22HH FLXA0.FRRDDS22.UINT8[HH]
#define FLXA0FRRDDS23 FLXA0.FRRDDS23.UINT32
#define FLXA0FRRDDS23L FLXA0.FRRDDS23.UINT16[L]
#define FLXA0FRRDDS23LL FLXA0.FRRDDS23.UINT8[LL]
#define FLXA0FRRDDS23LH FLXA0.FRRDDS23.UINT8[LH]
#define FLXA0FRRDDS23H FLXA0.FRRDDS23.UINT16[H]
#define FLXA0FRRDDS23HL FLXA0.FRRDDS23.UINT8[HL]
#define FLXA0FRRDDS23HH FLXA0.FRRDDS23.UINT8[HH]
#define FLXA0FRRDDS24 FLXA0.FRRDDS24.UINT32
#define FLXA0FRRDDS24L FLXA0.FRRDDS24.UINT16[L]
#define FLXA0FRRDDS24LL FLXA0.FRRDDS24.UINT8[LL]
#define FLXA0FRRDDS24LH FLXA0.FRRDDS24.UINT8[LH]
#define FLXA0FRRDDS24H FLXA0.FRRDDS24.UINT16[H]
#define FLXA0FRRDDS24HL FLXA0.FRRDDS24.UINT8[HL]
#define FLXA0FRRDDS24HH FLXA0.FRRDDS24.UINT8[HH]
#define FLXA0FRRDDS25 FLXA0.FRRDDS25.UINT32
#define FLXA0FRRDDS25L FLXA0.FRRDDS25.UINT16[L]
#define FLXA0FRRDDS25LL FLXA0.FRRDDS25.UINT8[LL]
#define FLXA0FRRDDS25LH FLXA0.FRRDDS25.UINT8[LH]
#define FLXA0FRRDDS25H FLXA0.FRRDDS25.UINT16[H]
#define FLXA0FRRDDS25HL FLXA0.FRRDDS25.UINT8[HL]
#define FLXA0FRRDDS25HH FLXA0.FRRDDS25.UINT8[HH]
#define FLXA0FRRDDS26 FLXA0.FRRDDS26.UINT32
#define FLXA0FRRDDS26L FLXA0.FRRDDS26.UINT16[L]
#define FLXA0FRRDDS26LL FLXA0.FRRDDS26.UINT8[LL]
#define FLXA0FRRDDS26LH FLXA0.FRRDDS26.UINT8[LH]
#define FLXA0FRRDDS26H FLXA0.FRRDDS26.UINT16[H]
#define FLXA0FRRDDS26HL FLXA0.FRRDDS26.UINT8[HL]
#define FLXA0FRRDDS26HH FLXA0.FRRDDS26.UINT8[HH]
#define FLXA0FRRDDS27 FLXA0.FRRDDS27.UINT32
#define FLXA0FRRDDS27L FLXA0.FRRDDS27.UINT16[L]
#define FLXA0FRRDDS27LL FLXA0.FRRDDS27.UINT8[LL]
#define FLXA0FRRDDS27LH FLXA0.FRRDDS27.UINT8[LH]
#define FLXA0FRRDDS27H FLXA0.FRRDDS27.UINT16[H]
#define FLXA0FRRDDS27HL FLXA0.FRRDDS27.UINT8[HL]
#define FLXA0FRRDDS27HH FLXA0.FRRDDS27.UINT8[HH]
#define FLXA0FRRDDS28 FLXA0.FRRDDS28.UINT32
#define FLXA0FRRDDS28L FLXA0.FRRDDS28.UINT16[L]
#define FLXA0FRRDDS28LL FLXA0.FRRDDS28.UINT8[LL]
#define FLXA0FRRDDS28LH FLXA0.FRRDDS28.UINT8[LH]
#define FLXA0FRRDDS28H FLXA0.FRRDDS28.UINT16[H]
#define FLXA0FRRDDS28HL FLXA0.FRRDDS28.UINT8[HL]
#define FLXA0FRRDDS28HH FLXA0.FRRDDS28.UINT8[HH]
#define FLXA0FRRDDS29 FLXA0.FRRDDS29.UINT32
#define FLXA0FRRDDS29L FLXA0.FRRDDS29.UINT16[L]
#define FLXA0FRRDDS29LL FLXA0.FRRDDS29.UINT8[LL]
#define FLXA0FRRDDS29LH FLXA0.FRRDDS29.UINT8[LH]
#define FLXA0FRRDDS29H FLXA0.FRRDDS29.UINT16[H]
#define FLXA0FRRDDS29HL FLXA0.FRRDDS29.UINT8[HL]
#define FLXA0FRRDDS29HH FLXA0.FRRDDS29.UINT8[HH]
#define FLXA0FRRDDS30 FLXA0.FRRDDS30.UINT32
#define FLXA0FRRDDS30L FLXA0.FRRDDS30.UINT16[L]
#define FLXA0FRRDDS30LL FLXA0.FRRDDS30.UINT8[LL]
#define FLXA0FRRDDS30LH FLXA0.FRRDDS30.UINT8[LH]
#define FLXA0FRRDDS30H FLXA0.FRRDDS30.UINT16[H]
#define FLXA0FRRDDS30HL FLXA0.FRRDDS30.UINT8[HL]
#define FLXA0FRRDDS30HH FLXA0.FRRDDS30.UINT8[HH]
#define FLXA0FRRDDS31 FLXA0.FRRDDS31.UINT32
#define FLXA0FRRDDS31L FLXA0.FRRDDS31.UINT16[L]
#define FLXA0FRRDDS31LL FLXA0.FRRDDS31.UINT8[LL]
#define FLXA0FRRDDS31LH FLXA0.FRRDDS31.UINT8[LH]
#define FLXA0FRRDDS31H FLXA0.FRRDDS31.UINT16[H]
#define FLXA0FRRDDS31HL FLXA0.FRRDDS31.UINT8[HL]
#define FLXA0FRRDDS31HH FLXA0.FRRDDS31.UINT8[HH]
#define FLXA0FRRDDS32 FLXA0.FRRDDS32.UINT32
#define FLXA0FRRDDS32L FLXA0.FRRDDS32.UINT16[L]
#define FLXA0FRRDDS32LL FLXA0.FRRDDS32.UINT8[LL]
#define FLXA0FRRDDS32LH FLXA0.FRRDDS32.UINT8[LH]
#define FLXA0FRRDDS32H FLXA0.FRRDDS32.UINT16[H]
#define FLXA0FRRDDS32HL FLXA0.FRRDDS32.UINT8[HL]
#define FLXA0FRRDDS32HH FLXA0.FRRDDS32.UINT8[HH]
#define FLXA0FRRDDS33 FLXA0.FRRDDS33.UINT32
#define FLXA0FRRDDS33L FLXA0.FRRDDS33.UINT16[L]
#define FLXA0FRRDDS33LL FLXA0.FRRDDS33.UINT8[LL]
#define FLXA0FRRDDS33LH FLXA0.FRRDDS33.UINT8[LH]
#define FLXA0FRRDDS33H FLXA0.FRRDDS33.UINT16[H]
#define FLXA0FRRDDS33HL FLXA0.FRRDDS33.UINT8[HL]
#define FLXA0FRRDDS33HH FLXA0.FRRDDS33.UINT8[HH]
#define FLXA0FRRDDS34 FLXA0.FRRDDS34.UINT32
#define FLXA0FRRDDS34L FLXA0.FRRDDS34.UINT16[L]
#define FLXA0FRRDDS34LL FLXA0.FRRDDS34.UINT8[LL]
#define FLXA0FRRDDS34LH FLXA0.FRRDDS34.UINT8[LH]
#define FLXA0FRRDDS34H FLXA0.FRRDDS34.UINT16[H]
#define FLXA0FRRDDS34HL FLXA0.FRRDDS34.UINT8[HL]
#define FLXA0FRRDDS34HH FLXA0.FRRDDS34.UINT8[HH]
#define FLXA0FRRDDS35 FLXA0.FRRDDS35.UINT32
#define FLXA0FRRDDS35L FLXA0.FRRDDS35.UINT16[L]
#define FLXA0FRRDDS35LL FLXA0.FRRDDS35.UINT8[LL]
#define FLXA0FRRDDS35LH FLXA0.FRRDDS35.UINT8[LH]
#define FLXA0FRRDDS35H FLXA0.FRRDDS35.UINT16[H]
#define FLXA0FRRDDS35HL FLXA0.FRRDDS35.UINT8[HL]
#define FLXA0FRRDDS35HH FLXA0.FRRDDS35.UINT8[HH]
#define FLXA0FRRDDS36 FLXA0.FRRDDS36.UINT32
#define FLXA0FRRDDS36L FLXA0.FRRDDS36.UINT16[L]
#define FLXA0FRRDDS36LL FLXA0.FRRDDS36.UINT8[LL]
#define FLXA0FRRDDS36LH FLXA0.FRRDDS36.UINT8[LH]
#define FLXA0FRRDDS36H FLXA0.FRRDDS36.UINT16[H]
#define FLXA0FRRDDS36HL FLXA0.FRRDDS36.UINT8[HL]
#define FLXA0FRRDDS36HH FLXA0.FRRDDS36.UINT8[HH]
#define FLXA0FRRDDS37 FLXA0.FRRDDS37.UINT32
#define FLXA0FRRDDS37L FLXA0.FRRDDS37.UINT16[L]
#define FLXA0FRRDDS37LL FLXA0.FRRDDS37.UINT8[LL]
#define FLXA0FRRDDS37LH FLXA0.FRRDDS37.UINT8[LH]
#define FLXA0FRRDDS37H FLXA0.FRRDDS37.UINT16[H]
#define FLXA0FRRDDS37HL FLXA0.FRRDDS37.UINT8[HL]
#define FLXA0FRRDDS37HH FLXA0.FRRDDS37.UINT8[HH]
#define FLXA0FRRDDS38 FLXA0.FRRDDS38.UINT32
#define FLXA0FRRDDS38L FLXA0.FRRDDS38.UINT16[L]
#define FLXA0FRRDDS38LL FLXA0.FRRDDS38.UINT8[LL]
#define FLXA0FRRDDS38LH FLXA0.FRRDDS38.UINT8[LH]
#define FLXA0FRRDDS38H FLXA0.FRRDDS38.UINT16[H]
#define FLXA0FRRDDS38HL FLXA0.FRRDDS38.UINT8[HL]
#define FLXA0FRRDDS38HH FLXA0.FRRDDS38.UINT8[HH]
#define FLXA0FRRDDS39 FLXA0.FRRDDS39.UINT32
#define FLXA0FRRDDS39L FLXA0.FRRDDS39.UINT16[L]
#define FLXA0FRRDDS39LL FLXA0.FRRDDS39.UINT8[LL]
#define FLXA0FRRDDS39LH FLXA0.FRRDDS39.UINT8[LH]
#define FLXA0FRRDDS39H FLXA0.FRRDDS39.UINT16[H]
#define FLXA0FRRDDS39HL FLXA0.FRRDDS39.UINT8[HL]
#define FLXA0FRRDDS39HH FLXA0.FRRDDS39.UINT8[HH]
#define FLXA0FRRDDS40 FLXA0.FRRDDS40.UINT32
#define FLXA0FRRDDS40L FLXA0.FRRDDS40.UINT16[L]
#define FLXA0FRRDDS40LL FLXA0.FRRDDS40.UINT8[LL]
#define FLXA0FRRDDS40LH FLXA0.FRRDDS40.UINT8[LH]
#define FLXA0FRRDDS40H FLXA0.FRRDDS40.UINT16[H]
#define FLXA0FRRDDS40HL FLXA0.FRRDDS40.UINT8[HL]
#define FLXA0FRRDDS40HH FLXA0.FRRDDS40.UINT8[HH]
#define FLXA0FRRDDS41 FLXA0.FRRDDS41.UINT32
#define FLXA0FRRDDS41L FLXA0.FRRDDS41.UINT16[L]
#define FLXA0FRRDDS41LL FLXA0.FRRDDS41.UINT8[LL]
#define FLXA0FRRDDS41LH FLXA0.FRRDDS41.UINT8[LH]
#define FLXA0FRRDDS41H FLXA0.FRRDDS41.UINT16[H]
#define FLXA0FRRDDS41HL FLXA0.FRRDDS41.UINT8[HL]
#define FLXA0FRRDDS41HH FLXA0.FRRDDS41.UINT8[HH]
#define FLXA0FRRDDS42 FLXA0.FRRDDS42.UINT32
#define FLXA0FRRDDS42L FLXA0.FRRDDS42.UINT16[L]
#define FLXA0FRRDDS42LL FLXA0.FRRDDS42.UINT8[LL]
#define FLXA0FRRDDS42LH FLXA0.FRRDDS42.UINT8[LH]
#define FLXA0FRRDDS42H FLXA0.FRRDDS42.UINT16[H]
#define FLXA0FRRDDS42HL FLXA0.FRRDDS42.UINT8[HL]
#define FLXA0FRRDDS42HH FLXA0.FRRDDS42.UINT8[HH]
#define FLXA0FRRDDS43 FLXA0.FRRDDS43.UINT32
#define FLXA0FRRDDS43L FLXA0.FRRDDS43.UINT16[L]
#define FLXA0FRRDDS43LL FLXA0.FRRDDS43.UINT8[LL]
#define FLXA0FRRDDS43LH FLXA0.FRRDDS43.UINT8[LH]
#define FLXA0FRRDDS43H FLXA0.FRRDDS43.UINT16[H]
#define FLXA0FRRDDS43HL FLXA0.FRRDDS43.UINT8[HL]
#define FLXA0FRRDDS43HH FLXA0.FRRDDS43.UINT8[HH]
#define FLXA0FRRDDS44 FLXA0.FRRDDS44.UINT32
#define FLXA0FRRDDS44L FLXA0.FRRDDS44.UINT16[L]
#define FLXA0FRRDDS44LL FLXA0.FRRDDS44.UINT8[LL]
#define FLXA0FRRDDS44LH FLXA0.FRRDDS44.UINT8[LH]
#define FLXA0FRRDDS44H FLXA0.FRRDDS44.UINT16[H]
#define FLXA0FRRDDS44HL FLXA0.FRRDDS44.UINT8[HL]
#define FLXA0FRRDDS44HH FLXA0.FRRDDS44.UINT8[HH]
#define FLXA0FRRDDS45 FLXA0.FRRDDS45.UINT32
#define FLXA0FRRDDS45L FLXA0.FRRDDS45.UINT16[L]
#define FLXA0FRRDDS45LL FLXA0.FRRDDS45.UINT8[LL]
#define FLXA0FRRDDS45LH FLXA0.FRRDDS45.UINT8[LH]
#define FLXA0FRRDDS45H FLXA0.FRRDDS45.UINT16[H]
#define FLXA0FRRDDS45HL FLXA0.FRRDDS45.UINT8[HL]
#define FLXA0FRRDDS45HH FLXA0.FRRDDS45.UINT8[HH]
#define FLXA0FRRDDS46 FLXA0.FRRDDS46.UINT32
#define FLXA0FRRDDS46L FLXA0.FRRDDS46.UINT16[L]
#define FLXA0FRRDDS46LL FLXA0.FRRDDS46.UINT8[LL]
#define FLXA0FRRDDS46LH FLXA0.FRRDDS46.UINT8[LH]
#define FLXA0FRRDDS46H FLXA0.FRRDDS46.UINT16[H]
#define FLXA0FRRDDS46HL FLXA0.FRRDDS46.UINT8[HL]
#define FLXA0FRRDDS46HH FLXA0.FRRDDS46.UINT8[HH]
#define FLXA0FRRDDS47 FLXA0.FRRDDS47.UINT32
#define FLXA0FRRDDS47L FLXA0.FRRDDS47.UINT16[L]
#define FLXA0FRRDDS47LL FLXA0.FRRDDS47.UINT8[LL]
#define FLXA0FRRDDS47LH FLXA0.FRRDDS47.UINT8[LH]
#define FLXA0FRRDDS47H FLXA0.FRRDDS47.UINT16[H]
#define FLXA0FRRDDS47HL FLXA0.FRRDDS47.UINT8[HL]
#define FLXA0FRRDDS47HH FLXA0.FRRDDS47.UINT8[HH]
#define FLXA0FRRDDS48 FLXA0.FRRDDS48.UINT32
#define FLXA0FRRDDS48L FLXA0.FRRDDS48.UINT16[L]
#define FLXA0FRRDDS48LL FLXA0.FRRDDS48.UINT8[LL]
#define FLXA0FRRDDS48LH FLXA0.FRRDDS48.UINT8[LH]
#define FLXA0FRRDDS48H FLXA0.FRRDDS48.UINT16[H]
#define FLXA0FRRDDS48HL FLXA0.FRRDDS48.UINT8[HL]
#define FLXA0FRRDDS48HH FLXA0.FRRDDS48.UINT8[HH]
#define FLXA0FRRDDS49 FLXA0.FRRDDS49.UINT32
#define FLXA0FRRDDS49L FLXA0.FRRDDS49.UINT16[L]
#define FLXA0FRRDDS49LL FLXA0.FRRDDS49.UINT8[LL]
#define FLXA0FRRDDS49LH FLXA0.FRRDDS49.UINT8[LH]
#define FLXA0FRRDDS49H FLXA0.FRRDDS49.UINT16[H]
#define FLXA0FRRDDS49HL FLXA0.FRRDDS49.UINT8[HL]
#define FLXA0FRRDDS49HH FLXA0.FRRDDS49.UINT8[HH]
#define FLXA0FRRDDS50 FLXA0.FRRDDS50.UINT32
#define FLXA0FRRDDS50L FLXA0.FRRDDS50.UINT16[L]
#define FLXA0FRRDDS50LL FLXA0.FRRDDS50.UINT8[LL]
#define FLXA0FRRDDS50LH FLXA0.FRRDDS50.UINT8[LH]
#define FLXA0FRRDDS50H FLXA0.FRRDDS50.UINT16[H]
#define FLXA0FRRDDS50HL FLXA0.FRRDDS50.UINT8[HL]
#define FLXA0FRRDDS50HH FLXA0.FRRDDS50.UINT8[HH]
#define FLXA0FRRDDS51 FLXA0.FRRDDS51.UINT32
#define FLXA0FRRDDS51L FLXA0.FRRDDS51.UINT16[L]
#define FLXA0FRRDDS51LL FLXA0.FRRDDS51.UINT8[LL]
#define FLXA0FRRDDS51LH FLXA0.FRRDDS51.UINT8[LH]
#define FLXA0FRRDDS51H FLXA0.FRRDDS51.UINT16[H]
#define FLXA0FRRDDS51HL FLXA0.FRRDDS51.UINT8[HL]
#define FLXA0FRRDDS51HH FLXA0.FRRDDS51.UINT8[HH]
#define FLXA0FRRDDS52 FLXA0.FRRDDS52.UINT32
#define FLXA0FRRDDS52L FLXA0.FRRDDS52.UINT16[L]
#define FLXA0FRRDDS52LL FLXA0.FRRDDS52.UINT8[LL]
#define FLXA0FRRDDS52LH FLXA0.FRRDDS52.UINT8[LH]
#define FLXA0FRRDDS52H FLXA0.FRRDDS52.UINT16[H]
#define FLXA0FRRDDS52HL FLXA0.FRRDDS52.UINT8[HL]
#define FLXA0FRRDDS52HH FLXA0.FRRDDS52.UINT8[HH]
#define FLXA0FRRDDS53 FLXA0.FRRDDS53.UINT32
#define FLXA0FRRDDS53L FLXA0.FRRDDS53.UINT16[L]
#define FLXA0FRRDDS53LL FLXA0.FRRDDS53.UINT8[LL]
#define FLXA0FRRDDS53LH FLXA0.FRRDDS53.UINT8[LH]
#define FLXA0FRRDDS53H FLXA0.FRRDDS53.UINT16[H]
#define FLXA0FRRDDS53HL FLXA0.FRRDDS53.UINT8[HL]
#define FLXA0FRRDDS53HH FLXA0.FRRDDS53.UINT8[HH]
#define FLXA0FRRDDS54 FLXA0.FRRDDS54.UINT32
#define FLXA0FRRDDS54L FLXA0.FRRDDS54.UINT16[L]
#define FLXA0FRRDDS54LL FLXA0.FRRDDS54.UINT8[LL]
#define FLXA0FRRDDS54LH FLXA0.FRRDDS54.UINT8[LH]
#define FLXA0FRRDDS54H FLXA0.FRRDDS54.UINT16[H]
#define FLXA0FRRDDS54HL FLXA0.FRRDDS54.UINT8[HL]
#define FLXA0FRRDDS54HH FLXA0.FRRDDS54.UINT8[HH]
#define FLXA0FRRDDS55 FLXA0.FRRDDS55.UINT32
#define FLXA0FRRDDS55L FLXA0.FRRDDS55.UINT16[L]
#define FLXA0FRRDDS55LL FLXA0.FRRDDS55.UINT8[LL]
#define FLXA0FRRDDS55LH FLXA0.FRRDDS55.UINT8[LH]
#define FLXA0FRRDDS55H FLXA0.FRRDDS55.UINT16[H]
#define FLXA0FRRDDS55HL FLXA0.FRRDDS55.UINT8[HL]
#define FLXA0FRRDDS55HH FLXA0.FRRDDS55.UINT8[HH]
#define FLXA0FRRDDS56 FLXA0.FRRDDS56.UINT32
#define FLXA0FRRDDS56L FLXA0.FRRDDS56.UINT16[L]
#define FLXA0FRRDDS56LL FLXA0.FRRDDS56.UINT8[LL]
#define FLXA0FRRDDS56LH FLXA0.FRRDDS56.UINT8[LH]
#define FLXA0FRRDDS56H FLXA0.FRRDDS56.UINT16[H]
#define FLXA0FRRDDS56HL FLXA0.FRRDDS56.UINT8[HL]
#define FLXA0FRRDDS56HH FLXA0.FRRDDS56.UINT8[HH]
#define FLXA0FRRDDS57 FLXA0.FRRDDS57.UINT32
#define FLXA0FRRDDS57L FLXA0.FRRDDS57.UINT16[L]
#define FLXA0FRRDDS57LL FLXA0.FRRDDS57.UINT8[LL]
#define FLXA0FRRDDS57LH FLXA0.FRRDDS57.UINT8[LH]
#define FLXA0FRRDDS57H FLXA0.FRRDDS57.UINT16[H]
#define FLXA0FRRDDS57HL FLXA0.FRRDDS57.UINT8[HL]
#define FLXA0FRRDDS57HH FLXA0.FRRDDS57.UINT8[HH]
#define FLXA0FRRDDS58 FLXA0.FRRDDS58.UINT32
#define FLXA0FRRDDS58L FLXA0.FRRDDS58.UINT16[L]
#define FLXA0FRRDDS58LL FLXA0.FRRDDS58.UINT8[LL]
#define FLXA0FRRDDS58LH FLXA0.FRRDDS58.UINT8[LH]
#define FLXA0FRRDDS58H FLXA0.FRRDDS58.UINT16[H]
#define FLXA0FRRDDS58HL FLXA0.FRRDDS58.UINT8[HL]
#define FLXA0FRRDDS58HH FLXA0.FRRDDS58.UINT8[HH]
#define FLXA0FRRDDS59 FLXA0.FRRDDS59.UINT32
#define FLXA0FRRDDS59L FLXA0.FRRDDS59.UINT16[L]
#define FLXA0FRRDDS59LL FLXA0.FRRDDS59.UINT8[LL]
#define FLXA0FRRDDS59LH FLXA0.FRRDDS59.UINT8[LH]
#define FLXA0FRRDDS59H FLXA0.FRRDDS59.UINT16[H]
#define FLXA0FRRDDS59HL FLXA0.FRRDDS59.UINT8[HL]
#define FLXA0FRRDDS59HH FLXA0.FRRDDS59.UINT8[HH]
#define FLXA0FRRDDS60 FLXA0.FRRDDS60.UINT32
#define FLXA0FRRDDS60L FLXA0.FRRDDS60.UINT16[L]
#define FLXA0FRRDDS60LL FLXA0.FRRDDS60.UINT8[LL]
#define FLXA0FRRDDS60LH FLXA0.FRRDDS60.UINT8[LH]
#define FLXA0FRRDDS60H FLXA0.FRRDDS60.UINT16[H]
#define FLXA0FRRDDS60HL FLXA0.FRRDDS60.UINT8[HL]
#define FLXA0FRRDDS60HH FLXA0.FRRDDS60.UINT8[HH]
#define FLXA0FRRDDS61 FLXA0.FRRDDS61.UINT32
#define FLXA0FRRDDS61L FLXA0.FRRDDS61.UINT16[L]
#define FLXA0FRRDDS61LL FLXA0.FRRDDS61.UINT8[LL]
#define FLXA0FRRDDS61LH FLXA0.FRRDDS61.UINT8[LH]
#define FLXA0FRRDDS61H FLXA0.FRRDDS61.UINT16[H]
#define FLXA0FRRDDS61HL FLXA0.FRRDDS61.UINT8[HL]
#define FLXA0FRRDDS61HH FLXA0.FRRDDS61.UINT8[HH]
#define FLXA0FRRDDS62 FLXA0.FRRDDS62.UINT32
#define FLXA0FRRDDS62L FLXA0.FRRDDS62.UINT16[L]
#define FLXA0FRRDDS62LL FLXA0.FRRDDS62.UINT8[LL]
#define FLXA0FRRDDS62LH FLXA0.FRRDDS62.UINT8[LH]
#define FLXA0FRRDDS62H FLXA0.FRRDDS62.UINT16[H]
#define FLXA0FRRDDS62HL FLXA0.FRRDDS62.UINT8[HL]
#define FLXA0FRRDDS62HH FLXA0.FRRDDS62.UINT8[HH]
#define FLXA0FRRDDS63 FLXA0.FRRDDS63.UINT32
#define FLXA0FRRDDS63L FLXA0.FRRDDS63.UINT16[L]
#define FLXA0FRRDDS63LL FLXA0.FRRDDS63.UINT8[LL]
#define FLXA0FRRDDS63LH FLXA0.FRRDDS63.UINT8[LH]
#define FLXA0FRRDDS63H FLXA0.FRRDDS63.UINT16[H]
#define FLXA0FRRDDS63HL FLXA0.FRRDDS63.UINT8[HL]
#define FLXA0FRRDDS63HH FLXA0.FRRDDS63.UINT8[HH]
#define FLXA0FRRDDS64 FLXA0.FRRDDS64.UINT32
#define FLXA0FRRDDS64L FLXA0.FRRDDS64.UINT16[L]
#define FLXA0FRRDDS64LL FLXA0.FRRDDS64.UINT8[LL]
#define FLXA0FRRDDS64LH FLXA0.FRRDDS64.UINT8[LH]
#define FLXA0FRRDDS64H FLXA0.FRRDDS64.UINT16[H]
#define FLXA0FRRDDS64HL FLXA0.FRRDDS64.UINT8[HL]
#define FLXA0FRRDDS64HH FLXA0.FRRDDS64.UINT8[HH]
#define FLXA0FRRDHS1 FLXA0.FRRDHS1.UINT32
#define FLXA0FRRDHS1L FLXA0.FRRDHS1.UINT16[L]
#define FLXA0FRRDHS1LL FLXA0.FRRDHS1.UINT8[LL]
#define FLXA0FRRDHS1LH FLXA0.FRRDHS1.UINT8[LH]
#define FLXA0FRRDHS1H FLXA0.FRRDHS1.UINT16[H]
#define FLXA0FRRDHS1HL FLXA0.FRRDHS1.UINT8[HL]
#define FLXA0FRRDHS1HH FLXA0.FRRDHS1.UINT8[HH]
#define FLXA0FRRDHS2 FLXA0.FRRDHS2.UINT32
#define FLXA0FRRDHS2L FLXA0.FRRDHS2.UINT16[L]
#define FLXA0FRRDHS2LL FLXA0.FRRDHS2.UINT8[LL]
#define FLXA0FRRDHS2LH FLXA0.FRRDHS2.UINT8[LH]
#define FLXA0FRRDHS2H FLXA0.FRRDHS2.UINT16[H]
#define FLXA0FRRDHS2HL FLXA0.FRRDHS2.UINT8[HL]
#define FLXA0FRRDHS2HH FLXA0.FRRDHS2.UINT8[HH]
#define FLXA0FRRDHS3 FLXA0.FRRDHS3.UINT32
#define FLXA0FRRDHS3L FLXA0.FRRDHS3.UINT16[L]
#define FLXA0FRRDHS3LL FLXA0.FRRDHS3.UINT8[LL]
#define FLXA0FRRDHS3LH FLXA0.FRRDHS3.UINT8[LH]
#define FLXA0FRRDHS3H FLXA0.FRRDHS3.UINT16[H]
#define FLXA0FRRDHS3HL FLXA0.FRRDHS3.UINT8[HL]
#define FLXA0FRRDHS3HH FLXA0.FRRDHS3.UINT8[HH]
#define FLXA0FRMBS FLXA0.FRMBS.UINT32
#define FLXA0FRMBSL FLXA0.FRMBS.UINT16[L]
#define FLXA0FRMBSLL FLXA0.FRMBS.UINT8[LL]
#define FLXA0FRMBSLH FLXA0.FRMBS.UINT8[LH]
#define FLXA0FRMBSH FLXA0.FRMBS.UINT16[H]
#define FLXA0FRMBSHL FLXA0.FRMBS.UINT8[HL]
#define FLXA0FRMBSHH FLXA0.FRMBS.UINT8[HH]
#define FLXA0FROBCM FLXA0.FROBCM.UINT32
#define FLXA0FROBCML FLXA0.FROBCM.UINT16[L]
#define FLXA0FROBCMLL FLXA0.FROBCM.UINT8[LL]
#define FLXA0FROBCMH FLXA0.FROBCM.UINT16[H]
#define FLXA0FROBCMHL FLXA0.FROBCM.UINT8[HL]
#define FLXA0FROBCR FLXA0.FROBCR.UINT32
#define FLXA0FROBCRL FLXA0.FROBCR.UINT16[L]
#define FLXA0FROBCRLL FLXA0.FROBCR.UINT8[LL]
#define FLXA0FROBCRLH FLXA0.FROBCR.UINT8[LH]
#define FLXA0FROBCRH FLXA0.FROBCR.UINT16[H]
#define FLXA0FROBCRHL FLXA0.FROBCR.UINT8[HL]
#define FLXA0FRITC FLXA0.FRITC.UINT32
#define FLXA0FRITCL FLXA0.FRITC.UINT16[L]
#define FLXA0FRITCLL FLXA0.FRITC.UINT8[LL]
#define FLXA0FRITCLH FLXA0.FRITC.UINT8[LH]
#define FLXA0FRITCH FLXA0.FRITC.UINT16[H]
#define FLXA0FRITCHL FLXA0.FRITC.UINT8[HL]
#define FLXA0FROTC FLXA0.FROTC.UINT32
#define FLXA0FROTCL FLXA0.FROTC.UINT16[L]
#define FLXA0FROTCLL FLXA0.FROTC.UINT8[LL]
#define FLXA0FROTCLH FLXA0.FROTC.UINT8[LH]
#define FLXA0FROTCH FLXA0.FROTC.UINT16[H]
#define FLXA0FROTCHL FLXA0.FROTC.UINT8[HL]
#define FLXA0FRIBA FLXA0.FRIBA.UINT32
#define FLXA0FRIBAL FLXA0.FRIBA.UINT16[L]
#define FLXA0FRIBALL FLXA0.FRIBA.UINT8[LL]
#define FLXA0FRIBALH FLXA0.FRIBA.UINT8[LH]
#define FLXA0FRIBAH FLXA0.FRIBA.UINT16[H]
#define FLXA0FRIBAHL FLXA0.FRIBA.UINT8[HL]
#define FLXA0FRIBAHH FLXA0.FRIBA.UINT8[HH]
#define FLXA0FRFBA FLXA0.FRFBA.UINT32
#define FLXA0FRFBAL FLXA0.FRFBA.UINT16[L]
#define FLXA0FRFBALL FLXA0.FRFBA.UINT8[LL]
#define FLXA0FRFBALH FLXA0.FRFBA.UINT8[LH]
#define FLXA0FRFBAH FLXA0.FRFBA.UINT16[H]
#define FLXA0FRFBAHL FLXA0.FRFBA.UINT8[HL]
#define FLXA0FRFBAHH FLXA0.FRFBA.UINT8[HH]
#define FLXA0FROBA FLXA0.FROBA.UINT32
#define FLXA0FROBAL FLXA0.FROBA.UINT16[L]
#define FLXA0FROBALL FLXA0.FROBA.UINT8[LL]
#define FLXA0FROBALH FLXA0.FROBA.UINT8[LH]
#define FLXA0FROBAH FLXA0.FROBA.UINT16[H]
#define FLXA0FROBAHL FLXA0.FROBA.UINT8[HL]
#define FLXA0FROBAHH FLXA0.FROBA.UINT8[HH]
#define FLXA0FRIQC FLXA0.FRIQC.UINT32
#define FLXA0FRIQCL FLXA0.FRIQC.UINT16[L]
#define FLXA0FRIQCLL FLXA0.FRIQC.UINT8[LL]
#define FLXA0FRUIR FLXA0.FRUIR.UINT32
#define FLXA0FRUIRL FLXA0.FRUIR.UINT16[L]
#define FLXA0FRUIRLL FLXA0.FRUIR.UINT8[LL]
#define FLXA0FRUOR FLXA0.FRUOR.UINT32
#define FLXA0FRUORL FLXA0.FRUOR.UINT16[L]
#define FLXA0FRUORLL FLXA0.FRUOR.UINT8[LL]
#define FLXA0FRUORLH FLXA0.FRUOR.UINT8[LH]
#define FLXA0FRITS FLXA0.FRITS.UINT32
#define FLXA0FRITSL FLXA0.FRITS.UINT16[L]
#define FLXA0FRITSLL FLXA0.FRITS.UINT8[LL]
#define FLXA0FRITSLH FLXA0.FRITS.UINT8[LH]
#define FLXA0FRITSH FLXA0.FRITS.UINT16[H]
#define FLXA0FRITSHL FLXA0.FRITS.UINT8[HL]
#define FLXA0FRITSHH FLXA0.FRITS.UINT8[HH]
#define FLXA0FROTS FLXA0.FROTS.UINT32
#define FLXA0FROTSL FLXA0.FROTS.UINT16[L]
#define FLXA0FROTSLL FLXA0.FROTS.UINT8[LL]
#define FLXA0FROTSLH FLXA0.FROTS.UINT8[LH]
#define FLXA0FROTSH FLXA0.FROTS.UINT16[H]
#define FLXA0FROTSHL FLXA0.FROTS.UINT8[HL]
#define FLXA0FROTSHH FLXA0.FROTS.UINT8[HH]
#define FLXA0FRAES FLXA0.FRAES.UINT32
#define FLXA0FRAESL FLXA0.FRAES.UINT16[L]
#define FLXA0FRAESLL FLXA0.FRAES.UINT8[LL]
#define FLXA0FRAESLH FLXA0.FRAES.UINT8[LH]
#define FLXA0FRAEA FLXA0.FRAEA.UINT32
#define FLXA0FRAEAL FLXA0.FRAEA.UINT16[L]
#define FLXA0FRAEALL FLXA0.FRAEA.UINT8[LL]
#define FLXA0FRAEALH FLXA0.FRAEA.UINT8[LH]
#define FLXA0FRAEAH FLXA0.FRAEA.UINT16[H]
#define FLXA0FRAEAHL FLXA0.FRAEA.UINT8[HL]
#define FLXA0FRAEAHH FLXA0.FRAEA.UINT8[HH]
#define FLXA0FRDA0 FLXA0.FRDA0.UINT32
#define FLXA0FRDA0L FLXA0.FRDA0.UINT16[L]
#define FLXA0FRDA0LL FLXA0.FRDA0.UINT8[LL]
#define FLXA0FRDA0LH FLXA0.FRDA0.UINT8[LH]
#define FLXA0FRDA0H FLXA0.FRDA0.UINT16[H]
#define FLXA0FRDA0HL FLXA0.FRDA0.UINT8[HL]
#define FLXA0FRDA0HH FLXA0.FRDA0.UINT8[HH]
#define FLXA0FRDA1 FLXA0.FRDA1.UINT32
#define FLXA0FRDA1L FLXA0.FRDA1.UINT16[L]
#define FLXA0FRDA1LL FLXA0.FRDA1.UINT8[LL]
#define FLXA0FRDA1LH FLXA0.FRDA1.UINT8[LH]
#define FLXA0FRDA1H FLXA0.FRDA1.UINT16[H]
#define FLXA0FRDA1HL FLXA0.FRDA1.UINT8[HL]
#define FLXA0FRDA1HH FLXA0.FRDA1.UINT8[HH]
#define FLXA0FRDA2 FLXA0.FRDA2.UINT32
#define FLXA0FRDA2L FLXA0.FRDA2.UINT16[L]
#define FLXA0FRDA2LL FLXA0.FRDA2.UINT8[LL]
#define FLXA0FRDA2LH FLXA0.FRDA2.UINT8[LH]
#define FLXA0FRDA2H FLXA0.FRDA2.UINT16[H]
#define FLXA0FRDA2HL FLXA0.FRDA2.UINT8[HL]
#define FLXA0FRDA2HH FLXA0.FRDA2.UINT8[HH]
#define FLXA0FRDA3 FLXA0.FRDA3.UINT32
#define FLXA0FRDA3L FLXA0.FRDA3.UINT16[L]
#define FLXA0FRDA3LL FLXA0.FRDA3.UINT8[LL]
#define FLXA0FRDA3LH FLXA0.FRDA3.UINT8[LH]
#define FLXA0FRDA3H FLXA0.FRDA3.UINT16[H]
#define FLXA0FRDA3HL FLXA0.FRDA3.UINT8[HL]
#define FLXA0FRDA3HH FLXA0.FRDA3.UINT8[HH]
#define FLXA0FRT2C FLXA0.FRT2C.UINT32
#define FLXA0FRT2CL FLXA0.FRT2C.UINT16[L]
#define FLXA0FRT2CLL FLXA0.FRT2C.UINT8[LL]
#define FLXA0FRT2CLH FLXA0.FRT2C.UINT8[LH]
#define FLXA0FRT2CH FLXA0.FRT2C.UINT16[H]
#define FLXA0FRT2CHL FLXA0.FRT2C.UINT8[HL]
#define FLXA0FRT2CHH FLXA0.FRT2C.UINT8[HH]
#define ETNA0EDSR0 ETNA0.EDSR0
#define ETNA0TDLAR0 ETNA0.TDLAR0
#define ETNA0TDFAR0 ETNA0.TDFAR0
#define ETNA0TDFXR0 ETNA0.TDFXR0
#define ETNA0TDFFR0 ETNA0.TDFFR0
#define ETNA0RDLAR0 ETNA0.RDLAR0
#define ETNA0RDFAR0 ETNA0.RDFAR0
#define ETNA0RDFXR0 ETNA0.RDFXR0
#define ETNA0RDFFR0 ETNA0.RDFFR0
#define ETNA0EDMR0 ETNA0.EDMR0
#define ETNA0EDTRR0 ETNA0.EDTRR0
#define ETNA0EDRRR0 ETNA0.EDRRR0
#define ETNA0EESR0 ETNA0.EESR0
#define ETNA0EESIPR0 ETNA0.EESIPR0
#define ETNA0TRSCER0 ETNA0.TRSCER0
#define ETNA0RMFCR0 ETNA0.RMFCR0
#define ETNA0FDR0 ETNA0.FDR0
#define ETNA0RMCR0 ETNA0.RMCR0
#define ETNA0RPADIR0 ETNA0.RPADIR0
#define ETNA0FCFTR0 ETNA0.FCFTR0
#define ETNA0TFSR0 ETNA0.TFSR0
#define ETNA0RFSR0 ETNA0.RFSR0
#define ETNA0ECMR0 ETNA0.ECMR0
#define ETNA0RFLR0 ETNA0.RFLR0
#define ETNA0ECSR0 ETNA0.ECSR0
#define ETNA0ECSIPR0 ETNA0.ECSIPR0
#define ETNA0PIR0 ETNA0.PIR0
#define ETNA0PLSR0 ETNA0.PLSR0
#define ETNA0PIPR0 ETNA0.PIPR0
#define ETNA0APR0 ETNA0.APR0
#define ETNA0MPR0 ETNA0.MPR0
#define ETNA0PFTCR0 ETNA0.PFTCR0
#define ETNA0PFRCR0 ETNA0.PFRCR0
#define ETNA0TPAUSER0 ETNA0.TPAUSER0
#define ETNA0TPFRCR0 ETNA0.TPFRCR0
#define ETNA0BCFRR0 ETNA0.BCFRR0
#define ETNA0CRBCFRR0 ETNA0.CRBCFRR0
#define ETNA0EMR0 ETNA0.EMR0
#define ETNA0MAHR0 ETNA0.MAHR0
#define ETNA0MALR0 ETNA0.MALR0
#define ETNA0TROCR0 ETNA0.TROCR0
#define ETNA0CDCR0 ETNA0.CDCR0
#define ETNA0LCCR0 ETNA0.LCCR0
#define ETNA0CEFCR0 ETNA0.CEFCR0
#define ETNA0FRECR0 ETNA0.FRECR0
#define ETNA0TSFRCR0 ETNA0.TSFRCR0
#define ETNA0TLFRCR0 ETNA0.TLFRCR0
#define ETNA0RFCR0 ETNA0.RFCR0
#define ETNA0MAFCR0 ETNA0.MAFCR0
#define ETNA0ARSTR ETNA0.ARSTR
#define ETNA0TSU_CTRST ETNA0.TSU_CTRST
#define ETNA0TSU_FWSL0 ETNA0.TSU_FWSL0
#define ETNA0TSU_FWSL1 ETNA0.TSU_FWSL1
#define ETNA0TSU_FWSLC ETNA0.TSU_FWSLC
#define ETNA0TSU_FWSR ETNA0.TSU_FWSR
#define ETNA0TSU_FWINMK ETNA0.TSU_FWINMK
#define ETNA0TSU_VTAG0 ETNA0.TSU_VTAG0
#define ETNA0TSU_VTAG1 ETNA0.TSU_VTAG1
#define ETNA0TSU_ADSBSY ETNA0.TSU_ADSBSY
#define ETNA0TSU_TEN ETNA0.TSU_TEN
#define ETNA0TSU_POST1 ETNA0.TSU_POST1
#define ETNA0TSU_POST2 ETNA0.TSU_POST2
#define ETNA0TSU_POST3 ETNA0.TSU_POST3
#define ETNA0TSU_POST4 ETNA0.TSU_POST4
#define ETNA0TXNLCR0 ETNA0.TXNLCR0
#define ETNA0TXALCR0 ETNA0.TXALCR0
#define ETNA0RXNLCR0 ETNA0.RXNLCR0
#define ETNA0RXALCR0 ETNA0.RXALCR0
#define ETNA0TXNLCR1 ETNA0.TXNLCR1
#define ETNA0TXALCR1 ETNA0.TXALCR1
#define ETNA0RXNLCR1 ETNA0.RXNLCR1
#define ETNA0RXALCR1 ETNA0.RXALCR1
#define ETNA0TSU_ADRH0 ETNA0.TSU_ADRH0
#define ETNA0TSU_ADRL0 ETNA0.TSU_ADRL0
#define ETNA0TSU_ADRH1 ETNA0.TSU_ADRH1
#define ETNA0TSU_ADRL1 ETNA0.TSU_ADRL1
#define ETNA0TSU_ADRH2 ETNA0.TSU_ADRH2
#define ETNA0TSU_ADRL2 ETNA0.TSU_ADRL2
#define ETNA0TSU_ADRH3 ETNA0.TSU_ADRH3
#define ETNA0TSU_ADRL3 ETNA0.TSU_ADRL3
#define ETNA0TSU_ADRH4 ETNA0.TSU_ADRH4
#define ETNA0TSU_ADRL4 ETNA0.TSU_ADRL4
#define ETNA0TSU_ADRH5 ETNA0.TSU_ADRH5
#define ETNA0TSU_ADRL5 ETNA0.TSU_ADRL5
#define ETNA0TSU_ADRH6 ETNA0.TSU_ADRH6
#define ETNA0TSU_ADRL6 ETNA0.TSU_ADRL6
#define ETNA0TSU_ADRH7 ETNA0.TSU_ADRH7
#define ETNA0TSU_ADRL7 ETNA0.TSU_ADRL7
#define ETNA0TSU_ADRH8 ETNA0.TSU_ADRH8
#define ETNA0TSU_ADRL8 ETNA0.TSU_ADRL8
#define ETNA0TSU_ADRH9 ETNA0.TSU_ADRH9
#define ETNA0TSU_ADRL9 ETNA0.TSU_ADRL9
#define ETNA0TSU_ADRH10 ETNA0.TSU_ADRH10
#define ETNA0TSU_ADRL10 ETNA0.TSU_ADRL10
#define ETNA0TSU_ADRH11 ETNA0.TSU_ADRH11
#define ETNA0TSU_ADRL11 ETNA0.TSU_ADRL11
#define ETNA0TSU_ADRH12 ETNA0.TSU_ADRH12
#define ETNA0TSU_ADRL12 ETNA0.TSU_ADRL12
#define ETNA0TSU_ADRH13 ETNA0.TSU_ADRH13
#define ETNA0TSU_ADRL13 ETNA0.TSU_ADRL13
#define ETNA0TSU_ADRH14 ETNA0.TSU_ADRH14
#define ETNA0TSU_ADRL14 ETNA0.TSU_ADRL14
#define ETNA0TSU_ADRH15 ETNA0.TSU_ADRH15
#define ETNA0TSU_ADRL15 ETNA0.TSU_ADRL15
#define ETNA0TSU_ADRH16 ETNA0.TSU_ADRH16
#define ETNA0TSU_ADRL16 ETNA0.TSU_ADRL16
#define ETNA0TSU_ADRH17 ETNA0.TSU_ADRH17
#define ETNA0TSU_ADRL17 ETNA0.TSU_ADRL17
#define ETNA0TSU_ADRH18 ETNA0.TSU_ADRH18
#define ETNA0TSU_ADRL18 ETNA0.TSU_ADRL18
#define ETNA0TSU_ADRH19 ETNA0.TSU_ADRH19
#define ETNA0TSU_ADRL19 ETNA0.TSU_ADRL19
#define ETNA0TSU_ADRH20 ETNA0.TSU_ADRH20
#define ETNA0TSU_ADRL20 ETNA0.TSU_ADRL20
#define ETNA0TSU_ADRH21 ETNA0.TSU_ADRH21
#define ETNA0TSU_ADRL21 ETNA0.TSU_ADRL21
#define ETNA0TSU_ADRH22 ETNA0.TSU_ADRH22
#define ETNA0TSU_ADRL22 ETNA0.TSU_ADRL22
#define ETNA0TSU_ADRH23 ETNA0.TSU_ADRH23
#define ETNA0TSU_ADRL23 ETNA0.TSU_ADRL23
#define ETNA0TSU_ADRH24 ETNA0.TSU_ADRH24
#define ETNA0TSU_ADRL24 ETNA0.TSU_ADRL24
#define ETNA0TSU_ADRH25 ETNA0.TSU_ADRH25
#define ETNA0TSU_ADRL25 ETNA0.TSU_ADRL25
#define ETNA0TSU_ADRH26 ETNA0.TSU_ADRH26
#define ETNA0TSU_ADRL26 ETNA0.TSU_ADRL26
#define ETNA0TSU_ADRH27 ETNA0.TSU_ADRH27
#define ETNA0TSU_ADRL27 ETNA0.TSU_ADRL27
#define ETNA0TSU_ADRH28 ETNA0.TSU_ADRH28
#define ETNA0TSU_ADRL28 ETNA0.TSU_ADRL28
#define ETNA0TSU_ADRH29 ETNA0.TSU_ADRH29
#define ETNA0TSU_ADRL29 ETNA0.TSU_ADRL29
#define ETNA0TSU_ADRH30 ETNA0.TSU_ADRH30
#define ETNA0TSU_ADRL30 ETNA0.TSU_ADRL30
#define ETNA0TSU_ADRH31 ETNA0.TSU_ADRH31
#define ETNA0TSU_ADRL31 ETNA0.TSU_ADRL31
#define ETNA0HDMMDR0 ETNA0.HDMMDR0
#define ETNA0HDMISR0 ETNA0.HDMISR0
#define ETNA0HDMIER0 ETNA0.HDMIER0
#define FLMDCNT FLMD.CNT
#define FLMDPCMD FLMD.PCMD
#define FLMDPS FLMD.PS
#define FACI0FPMON FACI0.FPMON
#define FACI0FASTAT FACI0.FASTAT
#define FACI0FAEINT FACI0.FAEINT
#define FACI0FSADDR FACI0.FSADDR
#define FACI0FEADDR FACI0.FEADDR
#define FACI0FCURAME FACI0.FCURAME
#define FACI0FRAMMCR FACI0.FRAMMCR
#define FACI0FPROTDR0 FACI0.FPROTDR0
#define FACI0FPROTCR0 FACI0.FPROTCR0
#define FACI0FPROTCR1 FACI0.FPROTCR1
#define FACI0FPROTCR2 FACI0.FPROTCR2
#define FACI0FPROTCR3 FACI0.FPROTCR3
#define FACI0FPROTCR4 FACI0.FPROTCR4
#define FACI0FSTATR FACI0.FSTATR
#define FACI0FENTRYR FACI0.FENTRYR
#define FACI0FSUINITR FACI0.FSUINITR
#define FACI0FLKSTAT FACI0.FLKSTAT
#define FACI0FRFSTEADR FACI0.FRFSTEADR
#define FACI0FRTSTAT FACI0.FRTSTAT
#define FACI0FRTEINT FACI0.FRTEINT
#define FACI0FCMDR FACI0.FCMDR
#define FACI0FRAMECCR FACI0.FRAMECCR
#define FACI0FPESTAT FACI0.FPESTAT
#define FACI0FCNFPRGCNT FACI0.FCNFPRGCNT
#define FACI0FBCCNT FACI0.FBCCNT
#define FACI0FBCSTAT FACI0.FBCSTAT
#define FACI0FPSADDR FACI0.FPSADDR
#define FACI0FCPSR FACI0.FCPSR
#define FACI0FPCKAR FACI0.FPCKAR
#define FACI0FECCEMON FACI0.FECCEMON
#define FACI0FECCTMD FACI0.FECCTMD
#define FACI0FDMYECC FACI0.FDMYECC
#define FACI1FPMON FACI1.FPMON
#define FACI1FASTAT FACI1.FASTAT
#define FACI1FAEINT FACI1.FAEINT
#define FACI1FSADDR FACI1.FSADDR
#define FACI1FEADDR FACI1.FEADDR
#define FACI1FCURAME FACI1.FCURAME
#define FACI1FRAMMCR FACI1.FRAMMCR
#define FACI1FPROTDR0 FACI1.FPROTDR0
#define FACI1FPROTCR0 FACI1.FPROTCR0
#define FACI1FPROTCR1 FACI1.FPROTCR1
#define FACI1FPROTCR2 FACI1.FPROTCR2
#define FACI1FPROTCR3 FACI1.FPROTCR3
#define FACI1FPROTCR4 FACI1.FPROTCR4
#define FACI1FSTATR FACI1.FSTATR
#define FACI1FENTRYR FACI1.FENTRYR
#define FACI1FSUINITR FACI1.FSUINITR
#define FACI1FLKSTAT FACI1.FLKSTAT
#define FACI1FRFSTEADR FACI1.FRFSTEADR
#define FACI1FRTSTAT FACI1.FRTSTAT
#define FACI1FRTEINT FACI1.FRTEINT
#define FACI1FCMDR FACI1.FCMDR
#define FACI1FRAMECCR FACI1.FRAMECCR
#define FACI1FPESTAT FACI1.FPESTAT
#define FACI1FCNFPRGCNT FACI1.FCNFPRGCNT
#define FACI1FBCCNT FACI1.FBCCNT
#define FACI1FBCSTAT FACI1.FBCSTAT
#define FACI1FPSADDR FACI1.FPSADDR
#define FACI1FCPSR FACI1.FCPSR
#define FACI1FPCKAR FACI1.FPCKAR
#define FACI1FECCEMON FACI1.FECCEMON
#define FACI1FECCTMD FACI1.FECCTMD
#define FACI1FDMYECC FACI1.FDMYECC
#define DNFA2CTL DNFA2.CTL.UINT8
#define DNFA2PRS0 DNFA2.CTL.PRS0
#define DNFA2PRS1 DNFA2.CTL.PRS1
#define DNFA2PRS2 DNFA2.CTL.PRS2
#define DNFA2NFSTS0 DNFA2.CTL.NFSTS0
#define DNFA2NFSTS1 DNFA2.CTL.NFSTS1
#define DNFA2EN DNFA2.EN
#define DNFA2ENL DNFA2.ENL.UINT8
#define DNFA2NFENL0 DNFA2.ENL.NFENL0
#define DNFA2NFENL1 DNFA2.ENL.NFENL1
#define DNFA3CTL DNFA3.CTL.UINT8
#define DNFA3PRS0 DNFA3.CTL.PRS0
#define DNFA3PRS1 DNFA3.CTL.PRS1
#define DNFA3PRS2 DNFA3.CTL.PRS2
#define DNFA3NFSTS0 DNFA3.CTL.NFSTS0
#define DNFA3NFSTS1 DNFA3.CTL.NFSTS1
#define DNFA3EN DNFA3.EN
#define DNFA3ENL DNFA3.ENL.UINT8
#define DNFA3NFENL0 DNFA3.ENL.NFENL0
#define DNFA3NFENL1 DNFA3.ENL.NFENL1
#define DNFA4CTL DNFA4.CTL.UINT8
#define DNFA4PRS0 DNFA4.CTL.PRS0
#define DNFA4PRS1 DNFA4.CTL.PRS1
#define DNFA4PRS2 DNFA4.CTL.PRS2
#define DNFA4NFSTS0 DNFA4.CTL.NFSTS0
#define DNFA4NFSTS1 DNFA4.CTL.NFSTS1
#define DNFA4EN DNFA4.EN
#define DNFA4ENL DNFA4.ENL.UINT8
#define DNFA4NFENL0 DNFA4.ENL.NFENL0
#define DNFA4NFENL1 DNFA4.ENL.NFENL1
#define DNFA5CTL DNFA5.CTL.UINT8
#define DNFA5PRS0 DNFA5.CTL.PRS0
#define DNFA5PRS1 DNFA5.CTL.PRS1
#define DNFA5PRS2 DNFA5.CTL.PRS2
#define DNFA5NFSTS0 DNFA5.CTL.NFSTS0
#define DNFA5NFSTS1 DNFA5.CTL.NFSTS1
#define DNFA5EN DNFA5.EN
#define DNFA5ENL DNFA5.ENL.UINT8
#define DNFA5NFENL0 DNFA5.ENL.NFENL0
#define DNFA5NFENL1 DNFA5.ENL.NFENL1
#define DNFA5NFENL2 DNFA5.ENL.NFENL2
#define DNFA5NFENL3 DNFA5.ENL.NFENL3
#define DNFA5NFENL4 DNFA5.ENL.NFENL4
#define DNFA5NFENL5 DNFA5.ENL.NFENL5
#define DNFA5NFENL6 DNFA5.ENL.NFENL6
#define DNFA5NFENL7 DNFA5.ENL.NFENL7
#define DNFA6CTL DNFA6.CTL.UINT8
#define DNFA6PRS0 DNFA6.CTL.PRS0
#define DNFA6PRS1 DNFA6.CTL.PRS1
#define DNFA6PRS2 DNFA6.CTL.PRS2
#define DNFA6NFSTS0 DNFA6.CTL.NFSTS0
#define DNFA6NFSTS1 DNFA6.CTL.NFSTS1
#define DNFA6EN DNFA6.EN
#define DNFA6ENL DNFA6.ENL.UINT8
#define DNFA6NFENL0 DNFA6.ENL.NFENL0
#define DNFA6NFENL1 DNFA6.ENL.NFENL1
#define DNFA7CTL DNFA7.CTL.UINT8
#define DNFA7PRS0 DNFA7.CTL.PRS0
#define DNFA7PRS1 DNFA7.CTL.PRS1
#define DNFA7PRS2 DNFA7.CTL.PRS2
#define DNFA7NFSTS0 DNFA7.CTL.NFSTS0
#define DNFA7NFSTS1 DNFA7.CTL.NFSTS1
#define DNFA7EN DNFA7.EN
#define DNFA7ENL DNFA7.ENL.UINT8
#define DNFA7NFENL0 DNFA7.ENL.NFENL0
#define DNFA7NFENL1 DNFA7.ENL.NFENL1
#define FCLA0CTL0 FCLA0.CTL0.UINT8
#define FCLA0INTR0 FCLA0.CTL0.INTR0
#define FCLA0INTF0 FCLA0.CTL0.INTF0
#define FCLA0INTL0 FCLA0.CTL0.INTL0
#define FCLA0CTL1 FCLA0.CTL1.UINT8
#define FCLA0INTR1 FCLA0.CTL1.INTR1
#define FCLA0INTF1 FCLA0.CTL1.INTF1
#define FCLA0INTL1 FCLA0.CTL1.INTL1
#define FCLA0CTL2 FCLA0.CTL2.UINT8
#define FCLA0INTR2 FCLA0.CTL2.INTR2
#define FCLA0INTF2 FCLA0.CTL2.INTF2
#define FCLA0INTL2 FCLA0.CTL2.INTL2
#define FCLA0CTL3 FCLA0.CTL3.UINT8
#define FCLA0INTR3 FCLA0.CTL3.INTR3
#define FCLA0INTF3 FCLA0.CTL3.INTF3
#define FCLA0INTL3 FCLA0.CTL3.INTL3
#define FCLA0CTL4 FCLA0.CTL4.UINT8
#define FCLA0INTR4 FCLA0.CTL4.INTR4
#define FCLA0INTF4 FCLA0.CTL4.INTF4
#define FCLA0INTL4 FCLA0.CTL4.INTL4
#define FCLA0CTL5 FCLA0.CTL5.UINT8
#define FCLA0INTR5 FCLA0.CTL5.INTR5
#define FCLA0INTF5 FCLA0.CTL5.INTF5
#define FCLA0INTL5 FCLA0.CTL5.INTL5
#define FCLA0CTL6 FCLA0.CTL6.UINT8
#define FCLA0INTR6 FCLA0.CTL6.INTR6
#define FCLA0INTF6 FCLA0.CTL6.INTF6
#define FCLA0INTL6 FCLA0.CTL6.INTL6
#define FCLA0CTL7 FCLA0.CTL7.UINT8
#define FCLA0INTR7 FCLA0.CTL7.INTR7
#define FCLA0INTF7 FCLA0.CTL7.INTF7
#define FCLA0INTL7 FCLA0.CTL7.INTL7
#define FCLA1CTL0 FCLA1.CTL0.UINT8
#define FCLA1INTR0 FCLA1.CTL0.INTR0
#define FCLA1INTF0 FCLA1.CTL0.INTF0
#define FCLA1INTL0 FCLA1.CTL0.INTL0
#define FCLA1CTL1 FCLA1.CTL1.UINT8
#define FCLA1INTR1 FCLA1.CTL1.INTR1
#define FCLA1INTF1 FCLA1.CTL1.INTF1
#define FCLA1INTL1 FCLA1.CTL1.INTL1
#define FCLA1CTL2 FCLA1.CTL2.UINT8
#define FCLA1INTR2 FCLA1.CTL2.INTR2
#define FCLA1INTF2 FCLA1.CTL2.INTF2
#define FCLA1INTL2 FCLA1.CTL2.INTL2
#define FCLA1CTL3 FCLA1.CTL3.UINT8
#define FCLA1INTR3 FCLA1.CTL3.INTR3
#define FCLA1INTF3 FCLA1.CTL3.INTF3
#define FCLA1INTL3 FCLA1.CTL3.INTL3
#define FCLA1CTL4 FCLA1.CTL4.UINT8
#define FCLA1INTR4 FCLA1.CTL4.INTR4
#define FCLA1INTF4 FCLA1.CTL4.INTF4
#define FCLA1INTL4 FCLA1.CTL4.INTL4
#define FCLA2CTL0 FCLA2.CTL0.UINT8
#define FCLA2INTR0 FCLA2.CTL0.INTR0
#define FCLA2INTF0 FCLA2.CTL0.INTF0
#define FCLA2CTL1 FCLA2.CTL1.UINT8
#define FCLA2INTR1 FCLA2.CTL1.INTR1
#define FCLA2INTF1 FCLA2.CTL1.INTF1
#define FCLA3CTL0 FCLA3.CTL0.UINT8
#define FCLA3INTR0 FCLA3.CTL0.INTR0
#define FCLA3INTF0 FCLA3.CTL0.INTF0
#define FCLA3CTL1 FCLA3.CTL1.UINT8
#define FCLA3INTR1 FCLA3.CTL1.INTR1
#define FCLA3INTF1 FCLA3.CTL1.INTF1
#define FCLA4CTL0 FCLA4.CTL0.UINT8
#define FCLA4INTR0 FCLA4.CTL0.INTR0
#define FCLA4INTF0 FCLA4.CTL0.INTF0
#define FCLA4CTL1 FCLA4.CTL1.UINT8
#define FCLA4INTR1 FCLA4.CTL1.INTR1
#define FCLA4INTF1 FCLA4.CTL1.INTF1
#define FCLA5CTL0 FCLA5.CTL0.UINT8
#define FCLA5BYPS0 FCLA5.CTL0.BYPS0
#define FCLA5CTL1 FCLA5.CTL1.UINT8
#define FCLA5BYPS1 FCLA5.CTL1.BYPS1
#define FCLA5CTL2 FCLA5.CTL2.UINT8
#define FCLA5BYPS2 FCLA5.CTL2.BYPS2
#define FCLA5CTL3 FCLA5.CTL3.UINT8
#define FCLA5BYPS3 FCLA5.CTL3.BYPS3
#define FCLA5CTL4 FCLA5.CTL4.UINT8
#define FCLA5BYPS4 FCLA5.CTL4.BYPS4
#define FCLA5CTL5 FCLA5.CTL5.UINT8
#define FCLA5BYPS5 FCLA5.CTL5.BYPS5
#define FCLA5CTL6 FCLA5.CTL6.UINT8
#define FCLA5BYPS6 FCLA5.CTL6.BYPS6
#define FCLA5CTL7 FCLA5.CTL7.UINT8
#define FCLA5BYPS7 FCLA5.CTL7.BYPS7
#define FCLA6CTL0 FCLA6.CTL0.UINT8
#define FCLA6BYPS0 FCLA6.CTL0.BYPS0
#define FCLA6CTL1 FCLA6.CTL1.UINT8
#define FCLA6BYPS1 FCLA6.CTL1.BYPS1
#define FSGD5APROT00 FSGD5A.PROT00.UINT32
#define FSGD5APROT00L FSGD5A.PROT00.UINT16[L]
#define FSGD5APROT00LL FSGD5A.PROT00.UINT8[LL]
#define FSGD5APROT00LH FSGD5A.PROT00.UINT8[LH]
#define FSGD5APROT00H FSGD5A.PROT00.UINT16[H]
#define FSGD5APROT00HL FSGD5A.PROT00.UINT8[HL]
#define FSGD5APROT00HH FSGD5A.PROT00.UINT8[HH]
#define FSGD5ASPID00 FSGD5A.SPID00.UINT32
#define FSGD5ASPID00L FSGD5A.SPID00.UINT16[L]
#define FSGD5ASPID00LL FSGD5A.SPID00.UINT8[LL]
#define FSGD5ASPID00LH FSGD5A.SPID00.UINT8[LH]
#define FSGD5ASPID00H FSGD5A.SPID00.UINT16[H]
#define FSGD5ASPID00HL FSGD5A.SPID00.UINT8[HL]
#define FSGD5ASPID00HH FSGD5A.SPID00.UINT8[HH]
#define FSGD5APROT01 FSGD5A.PROT01.UINT32
#define FSGD5APROT01L FSGD5A.PROT01.UINT16[L]
#define FSGD5APROT01LL FSGD5A.PROT01.UINT8[LL]
#define FSGD5APROT01LH FSGD5A.PROT01.UINT8[LH]
#define FSGD5APROT01H FSGD5A.PROT01.UINT16[H]
#define FSGD5APROT01HL FSGD5A.PROT01.UINT8[HL]
#define FSGD5APROT01HH FSGD5A.PROT01.UINT8[HH]
#define FSGD5ASPID01 FSGD5A.SPID01.UINT32
#define FSGD5ASPID01L FSGD5A.SPID01.UINT16[L]
#define FSGD5ASPID01LL FSGD5A.SPID01.UINT8[LL]
#define FSGD5ASPID01LH FSGD5A.SPID01.UINT8[LH]
#define FSGD5ASPID01H FSGD5A.SPID01.UINT16[H]
#define FSGD5ASPID01HL FSGD5A.SPID01.UINT8[HL]
#define FSGD5ASPID01HH FSGD5A.SPID01.UINT8[HH]
#define FSGD5APROT02 FSGD5A.PROT02.UINT32
#define FSGD5APROT02L FSGD5A.PROT02.UINT16[L]
#define FSGD5APROT02LL FSGD5A.PROT02.UINT8[LL]
#define FSGD5APROT02LH FSGD5A.PROT02.UINT8[LH]
#define FSGD5APROT02H FSGD5A.PROT02.UINT16[H]
#define FSGD5APROT02HL FSGD5A.PROT02.UINT8[HL]
#define FSGD5APROT02HH FSGD5A.PROT02.UINT8[HH]
#define FSGD5ASPID02 FSGD5A.SPID02.UINT32
#define FSGD5ASPID02L FSGD5A.SPID02.UINT16[L]
#define FSGD5ASPID02LL FSGD5A.SPID02.UINT8[LL]
#define FSGD5ASPID02LH FSGD5A.SPID02.UINT8[LH]
#define FSGD5ASPID02H FSGD5A.SPID02.UINT16[H]
#define FSGD5ASPID02HL FSGD5A.SPID02.UINT8[HL]
#define FSGD5ASPID02HH FSGD5A.SPID02.UINT8[HH]
#define FSGD5APROT03 FSGD5A.PROT03.UINT32
#define FSGD5APROT03L FSGD5A.PROT03.UINT16[L]
#define FSGD5APROT03LL FSGD5A.PROT03.UINT8[LL]
#define FSGD5APROT03LH FSGD5A.PROT03.UINT8[LH]
#define FSGD5APROT03H FSGD5A.PROT03.UINT16[H]
#define FSGD5APROT03HL FSGD5A.PROT03.UINT8[HL]
#define FSGD5APROT03HH FSGD5A.PROT03.UINT8[HH]
#define FSGD5ASPID03 FSGD5A.SPID03.UINT32
#define FSGD5ASPID03L FSGD5A.SPID03.UINT16[L]
#define FSGD5ASPID03LL FSGD5A.SPID03.UINT8[LL]
#define FSGD5ASPID03LH FSGD5A.SPID03.UINT8[LH]
#define FSGD5ASPID03H FSGD5A.SPID03.UINT16[H]
#define FSGD5ASPID03HL FSGD5A.SPID03.UINT8[HL]
#define FSGD5ASPID03HH FSGD5A.SPID03.UINT8[HH]
#define FSGD5APROT04 FSGD5A.PROT04.UINT32
#define FSGD5APROT04L FSGD5A.PROT04.UINT16[L]
#define FSGD5APROT04LL FSGD5A.PROT04.UINT8[LL]
#define FSGD5APROT04LH FSGD5A.PROT04.UINT8[LH]
#define FSGD5APROT04H FSGD5A.PROT04.UINT16[H]
#define FSGD5APROT04HL FSGD5A.PROT04.UINT8[HL]
#define FSGD5APROT04HH FSGD5A.PROT04.UINT8[HH]
#define FSGD5ASPID04 FSGD5A.SPID04.UINT32
#define FSGD5ASPID04L FSGD5A.SPID04.UINT16[L]
#define FSGD5ASPID04LL FSGD5A.SPID04.UINT8[LL]
#define FSGD5ASPID04LH FSGD5A.SPID04.UINT8[LH]
#define FSGD5ASPID04H FSGD5A.SPID04.UINT16[H]
#define FSGD5ASPID04HL FSGD5A.SPID04.UINT8[HL]
#define FSGD5ASPID04HH FSGD5A.SPID04.UINT8[HH]
#define FSGD5APROT05 FSGD5A.PROT05.UINT32
#define FSGD5APROT05L FSGD5A.PROT05.UINT16[L]
#define FSGD5APROT05LL FSGD5A.PROT05.UINT8[LL]
#define FSGD5APROT05LH FSGD5A.PROT05.UINT8[LH]
#define FSGD5APROT05H FSGD5A.PROT05.UINT16[H]
#define FSGD5APROT05HL FSGD5A.PROT05.UINT8[HL]
#define FSGD5APROT05HH FSGD5A.PROT05.UINT8[HH]
#define FSGD5ASPID05 FSGD5A.SPID05.UINT32
#define FSGD5ASPID05L FSGD5A.SPID05.UINT16[L]
#define FSGD5ASPID05LL FSGD5A.SPID05.UINT8[LL]
#define FSGD5ASPID05LH FSGD5A.SPID05.UINT8[LH]
#define FSGD5ASPID05H FSGD5A.SPID05.UINT16[H]
#define FSGD5ASPID05HL FSGD5A.SPID05.UINT8[HL]
#define FSGD5ASPID05HH FSGD5A.SPID05.UINT8[HH]
#define ERRSLV5ACTL ERRSLV5A.CTL
#define ERRSLV5ASTAT ERRSLV5A.STAT
#define ERRSLV5ATYPE ERRSLV5A.TYPE
#define FSGD5BPROT00 FSGD5B.PROT00.UINT32
#define FSGD5BPROT00L FSGD5B.PROT00.UINT16[L]
#define FSGD5BPROT00LL FSGD5B.PROT00.UINT8[LL]
#define FSGD5BPROT00LH FSGD5B.PROT00.UINT8[LH]
#define FSGD5BPROT00H FSGD5B.PROT00.UINT16[H]
#define FSGD5BPROT00HL FSGD5B.PROT00.UINT8[HL]
#define FSGD5BPROT00HH FSGD5B.PROT00.UINT8[HH]
#define FSGD5BSPID00 FSGD5B.SPID00.UINT32
#define FSGD5BSPID00L FSGD5B.SPID00.UINT16[L]
#define FSGD5BSPID00LL FSGD5B.SPID00.UINT8[LL]
#define FSGD5BSPID00LH FSGD5B.SPID00.UINT8[LH]
#define FSGD5BSPID00H FSGD5B.SPID00.UINT16[H]
#define FSGD5BSPID00HL FSGD5B.SPID00.UINT8[HL]
#define FSGD5BSPID00HH FSGD5B.SPID00.UINT8[HH]
#define FSGD5BPROT01 FSGD5B.PROT01.UINT32
#define FSGD5BPROT01L FSGD5B.PROT01.UINT16[L]
#define FSGD5BPROT01LL FSGD5B.PROT01.UINT8[LL]
#define FSGD5BPROT01LH FSGD5B.PROT01.UINT8[LH]
#define FSGD5BPROT01H FSGD5B.PROT01.UINT16[H]
#define FSGD5BPROT01HL FSGD5B.PROT01.UINT8[HL]
#define FSGD5BPROT01HH FSGD5B.PROT01.UINT8[HH]
#define FSGD5BSPID01 FSGD5B.SPID01.UINT32
#define FSGD5BSPID01L FSGD5B.SPID01.UINT16[L]
#define FSGD5BSPID01LL FSGD5B.SPID01.UINT8[LL]
#define FSGD5BSPID01LH FSGD5B.SPID01.UINT8[LH]
#define FSGD5BSPID01H FSGD5B.SPID01.UINT16[H]
#define FSGD5BSPID01HL FSGD5B.SPID01.UINT8[HL]
#define FSGD5BSPID01HH FSGD5B.SPID01.UINT8[HH]
#define FSGD5BPROT02 FSGD5B.PROT02.UINT32
#define FSGD5BPROT02L FSGD5B.PROT02.UINT16[L]
#define FSGD5BPROT02LL FSGD5B.PROT02.UINT8[LL]
#define FSGD5BPROT02LH FSGD5B.PROT02.UINT8[LH]
#define FSGD5BPROT02H FSGD5B.PROT02.UINT16[H]
#define FSGD5BPROT02HL FSGD5B.PROT02.UINT8[HL]
#define FSGD5BPROT02HH FSGD5B.PROT02.UINT8[HH]
#define FSGD5BSPID02 FSGD5B.SPID02.UINT32
#define FSGD5BSPID02L FSGD5B.SPID02.UINT16[L]
#define FSGD5BSPID02LL FSGD5B.SPID02.UINT8[LL]
#define FSGD5BSPID02LH FSGD5B.SPID02.UINT8[LH]
#define FSGD5BSPID02H FSGD5B.SPID02.UINT16[H]
#define FSGD5BSPID02HL FSGD5B.SPID02.UINT8[HL]
#define FSGD5BSPID02HH FSGD5B.SPID02.UINT8[HH]
#define FSGD5BPROT03 FSGD5B.PROT03.UINT32
#define FSGD5BPROT03L FSGD5B.PROT03.UINT16[L]
#define FSGD5BPROT03LL FSGD5B.PROT03.UINT8[LL]
#define FSGD5BPROT03LH FSGD5B.PROT03.UINT8[LH]
#define FSGD5BPROT03H FSGD5B.PROT03.UINT16[H]
#define FSGD5BPROT03HL FSGD5B.PROT03.UINT8[HL]
#define FSGD5BPROT03HH FSGD5B.PROT03.UINT8[HH]
#define FSGD5BSPID03 FSGD5B.SPID03.UINT32
#define FSGD5BSPID03L FSGD5B.SPID03.UINT16[L]
#define FSGD5BSPID03LL FSGD5B.SPID03.UINT8[LL]
#define FSGD5BSPID03LH FSGD5B.SPID03.UINT8[LH]
#define FSGD5BSPID03H FSGD5B.SPID03.UINT16[H]
#define FSGD5BSPID03HL FSGD5B.SPID03.UINT8[HL]
#define FSGD5BSPID03HH FSGD5B.SPID03.UINT8[HH]
#define ERRSLV5BCTL ERRSLV5B.CTL
#define ERRSLV5BSTAT ERRSLV5B.STAT
#define ERRSLV5BTYPE ERRSLV5B.TYPE
#define FSGD5CPROT00 FSGD5C.PROT00.UINT32
#define FSGD5CPROT00L FSGD5C.PROT00.UINT16[L]
#define FSGD5CPROT00LL FSGD5C.PROT00.UINT8[LL]
#define FSGD5CPROT00LH FSGD5C.PROT00.UINT8[LH]
#define FSGD5CPROT00H FSGD5C.PROT00.UINT16[H]
#define FSGD5CPROT00HL FSGD5C.PROT00.UINT8[HL]
#define FSGD5CPROT00HH FSGD5C.PROT00.UINT8[HH]
#define FSGD5CSPID00 FSGD5C.SPID00.UINT32
#define FSGD5CSPID00L FSGD5C.SPID00.UINT16[L]
#define FSGD5CSPID00LL FSGD5C.SPID00.UINT8[LL]
#define FSGD5CSPID00LH FSGD5C.SPID00.UINT8[LH]
#define FSGD5CSPID00H FSGD5C.SPID00.UINT16[H]
#define FSGD5CSPID00HL FSGD5C.SPID00.UINT8[HL]
#define FSGD5CSPID00HH FSGD5C.SPID00.UINT8[HH]
#define FSGD5CPROT01 FSGD5C.PROT01.UINT32
#define FSGD5CPROT01L FSGD5C.PROT01.UINT16[L]
#define FSGD5CPROT01LL FSGD5C.PROT01.UINT8[LL]
#define FSGD5CPROT01LH FSGD5C.PROT01.UINT8[LH]
#define FSGD5CPROT01H FSGD5C.PROT01.UINT16[H]
#define FSGD5CPROT01HL FSGD5C.PROT01.UINT8[HL]
#define FSGD5CPROT01HH FSGD5C.PROT01.UINT8[HH]
#define FSGD5CSPID01 FSGD5C.SPID01.UINT32
#define FSGD5CSPID01L FSGD5C.SPID01.UINT16[L]
#define FSGD5CSPID01LL FSGD5C.SPID01.UINT8[LL]
#define FSGD5CSPID01LH FSGD5C.SPID01.UINT8[LH]
#define FSGD5CSPID01H FSGD5C.SPID01.UINT16[H]
#define FSGD5CSPID01HL FSGD5C.SPID01.UINT8[HL]
#define FSGD5CSPID01HH FSGD5C.SPID01.UINT8[HH]
#define ERRSLV5CCTL ERRSLV5C.CTL
#define ERRSLV5CSTAT ERRSLV5C.STAT
#define ERRSLV5CTYPE ERRSLV5C.TYPE
#define FSGD5DPROT00 FSGD5D.PROT00.UINT32
#define FSGD5DPROT00L FSGD5D.PROT00.UINT16[L]
#define FSGD5DPROT00LL FSGD5D.PROT00.UINT8[LL]
#define FSGD5DPROT00LH FSGD5D.PROT00.UINT8[LH]
#define FSGD5DPROT00H FSGD5D.PROT00.UINT16[H]
#define FSGD5DPROT00HL FSGD5D.PROT00.UINT8[HL]
#define FSGD5DPROT00HH FSGD5D.PROT00.UINT8[HH]
#define FSGD5DSPID00 FSGD5D.SPID00.UINT32
#define FSGD5DSPID00L FSGD5D.SPID00.UINT16[L]
#define FSGD5DSPID00LL FSGD5D.SPID00.UINT8[LL]
#define FSGD5DSPID00LH FSGD5D.SPID00.UINT8[LH]
#define FSGD5DSPID00H FSGD5D.SPID00.UINT16[H]
#define FSGD5DSPID00HL FSGD5D.SPID00.UINT8[HL]
#define FSGD5DSPID00HH FSGD5D.SPID00.UINT8[HH]
#define FSGD5DPROT01 FSGD5D.PROT01.UINT32
#define FSGD5DPROT01L FSGD5D.PROT01.UINT16[L]
#define FSGD5DPROT01LL FSGD5D.PROT01.UINT8[LL]
#define FSGD5DPROT01LH FSGD5D.PROT01.UINT8[LH]
#define FSGD5DPROT01H FSGD5D.PROT01.UINT16[H]
#define FSGD5DPROT01HL FSGD5D.PROT01.UINT8[HL]
#define FSGD5DPROT01HH FSGD5D.PROT01.UINT8[HH]
#define FSGD5DSPID01 FSGD5D.SPID01.UINT32
#define FSGD5DSPID01L FSGD5D.SPID01.UINT16[L]
#define FSGD5DSPID01LL FSGD5D.SPID01.UINT8[LL]
#define FSGD5DSPID01LH FSGD5D.SPID01.UINT8[LH]
#define FSGD5DSPID01H FSGD5D.SPID01.UINT16[H]
#define FSGD5DSPID01HL FSGD5D.SPID01.UINT8[HL]
#define FSGD5DSPID01HH FSGD5D.SPID01.UINT8[HH]
#define FSGD5DPROT02 FSGD5D.PROT02.UINT32
#define FSGD5DPROT02L FSGD5D.PROT02.UINT16[L]
#define FSGD5DPROT02LL FSGD5D.PROT02.UINT8[LL]
#define FSGD5DPROT02LH FSGD5D.PROT02.UINT8[LH]
#define FSGD5DPROT02H FSGD5D.PROT02.UINT16[H]
#define FSGD5DPROT02HL FSGD5D.PROT02.UINT8[HL]
#define FSGD5DPROT02HH FSGD5D.PROT02.UINT8[HH]
#define FSGD5DSPID02 FSGD5D.SPID02.UINT32
#define FSGD5DSPID02L FSGD5D.SPID02.UINT16[L]
#define FSGD5DSPID02LL FSGD5D.SPID02.UINT8[LL]
#define FSGD5DSPID02LH FSGD5D.SPID02.UINT8[LH]
#define FSGD5DSPID02H FSGD5D.SPID02.UINT16[H]
#define FSGD5DSPID02HL FSGD5D.SPID02.UINT8[HL]
#define FSGD5DSPID02HH FSGD5D.SPID02.UINT8[HH]
#define FSGD5DPROT03 FSGD5D.PROT03.UINT32
#define FSGD5DPROT03L FSGD5D.PROT03.UINT16[L]
#define FSGD5DPROT03LL FSGD5D.PROT03.UINT8[LL]
#define FSGD5DPROT03LH FSGD5D.PROT03.UINT8[LH]
#define FSGD5DPROT03H FSGD5D.PROT03.UINT16[H]
#define FSGD5DPROT03HL FSGD5D.PROT03.UINT8[HL]
#define FSGD5DPROT03HH FSGD5D.PROT03.UINT8[HH]
#define FSGD5DSPID03 FSGD5D.SPID03.UINT32
#define FSGD5DSPID03L FSGD5D.SPID03.UINT16[L]
#define FSGD5DSPID03LL FSGD5D.SPID03.UINT8[LL]
#define FSGD5DSPID03LH FSGD5D.SPID03.UINT8[LH]
#define FSGD5DSPID03H FSGD5D.SPID03.UINT16[H]
#define FSGD5DSPID03HL FSGD5D.SPID03.UINT8[HL]
#define FSGD5DSPID03HH FSGD5D.SPID03.UINT8[HH]
#define ERRSLV5DCTL ERRSLV5D.CTL
#define ERRSLV5DSTAT ERRSLV5D.STAT
#define ERRSLV5DTYPE ERRSLV5D.TYPE
#define ERRSLV5AICTL ERRSLV5AI.CTL
#define ERRSLV5AISTAT ERRSLV5AI.STAT
#define ERRSLV5AITYPE ERRSLV5AI.TYPE
#define ERRSLV5BICTL ERRSLV5BI.CTL
#define ERRSLV5BISTAT ERRSLV5BI.STAT
#define ERRSLV5BITYPE ERRSLV5BI.TYPE
#define ERRSLVDG0CTL ERRSLVDG0.CTL
#define ERRSLVDG0STAT ERRSLVDG0.STAT
#define ERRSLVDG0TYPE ERRSLVDG0.TYPE
#define ERRSLVDG1CTL ERRSLVDG1.CTL
#define ERRSLVDG1STAT ERRSLVDG1.STAT
#define ERRSLVDG1TYPE ERRSLVDG1.TYPE
#define ECCCSIH0CTL ECCCSIH0.CTL
#define ECCCSIH0TMC ECCCSIH0.TMC
#define ECCCSIH0TRC ECCCSIH0.TRC
#define ECCCSIH0TED ECCCSIH0.TED
#define ECCCSIH0EAD0 ECCCSIH0.EAD0
#define ECCCSIH2CTL ECCCSIH2.CTL
#define ECCCSIH2TMC ECCCSIH2.TMC
#define ECCCSIH2TRC ECCCSIH2.TRC
#define ECCCSIH2TED ECCCSIH2.TED
#define ECCCSIH2EAD0 ECCCSIH2.EAD0
#define ECCTTCAN0CTL ECCTTCAN0.CTL
#define ECCTTCAN0TMC ECCTTCAN0.TMC
#define ECCTTCAN0TRC ECCTTCAN0.TRC
#define ECCTTCAN0TED ECCTTCAN0.TED
#define ECCTTCAN0EAD0 ECCTTCAN0.EAD0
#define ECCMCAN1CTL ECCMCAN1.CTL
#define ECCMCAN1TMC ECCMCAN1.TMC
#define ECCMCAN1TRC ECCMCAN1.TRC
#define ECCMCAN1TED ECCMCAN1.TED
#define ECCMCAN1EAD0 ECCMCAN1.EAD0
#define ECCFLX0CTL ECCFLX0.CTL
#define ECCFLX0TMC ECCFLX0.TMC
#define ECCFLX0TRC ECCFLX0.TRC
#define ECCFLX0TED ECCFLX0.TED
#define ECCFLX0EAD0 ECCFLX0.EAD0
#define ECCFLX0T0CTL ECCFLX0T0.CTL
#define ECCFLX0T0TMC ECCFLX0T0.TMC
#define ECCFLX0T0TRC ECCFLX0T0.TRC
#define ECCFLX0T0TED ECCFLX0T0.TED
#define ECCFLX0T0EAD0 ECCFLX0T0.EAD0
#define ECCFLX0T1CTL ECCFLX0T1.CTL
#define ECCFLX0T1TMC ECCFLX0T1.TMC
#define ECCFLX0T1TRC ECCFLX0T1.TRC
#define ECCFLX0T1TED ECCFLX0T1.TED
#define ECCFLX0T1EAD0 ECCFLX0T1.EAD0
#define ECCCSIH1CTL ECCCSIH1.CTL
#define ECCCSIH1TMC ECCCSIH1.TMC
#define ECCCSIH1TRC ECCCSIH1.TRC
#define ECCCSIH1TED ECCCSIH1.TED
#define ECCCSIH1EAD0 ECCCSIH1.EAD0
#define ECCCSIH3CTL ECCCSIH3.CTL
#define ECCCSIH3TMC ECCCSIH3.TMC
#define ECCCSIH3TRC ECCCSIH3.TRC
#define ECCCSIH3TED ECCCSIH3.TED
#define ECCCSIH3EAD0 ECCCSIH3.EAD0
#define ECCMCAN0CTL ECCMCAN0.CTL
#define ECCMCAN0TMC ECCMCAN0.TMC
#define ECCMCAN0TRC ECCMCAN0.TRC
#define ECCMCAN0TED ECCMCAN0.TED
#define ECCMCAN0EAD0 ECCMCAN0.EAD0
#define CSIH1CTL0 CSIH1.CTL0.UINT8
#define CSIH1MBS CSIH1.CTL0.MBS
#define CSIH1JOBE CSIH1.CTL0.JOBE
#define CSIH1RXE CSIH1.CTL0.RXE
#define CSIH1TXE CSIH1.CTL0.TXE
#define CSIH1PWR CSIH1.CTL0.PWR
#define CSIH1CTL1 CSIH1.CTL1
#define CSIH1CTL2 CSIH1.CTL2
#define CSIH1MCTL1 CSIH1.MCTL1
#define CSIH1MCTL2 CSIH1.MCTL2
#define CSIH1TX0W CSIH1.TX0W
#define CSIH1TX0H CSIH1.TX0H
#define CSIH1RX0W CSIH1.RX0W
#define CSIH1RX0H CSIH1.RX0H
#define CSIH1MRWP0 CSIH1.MRWP0
#define CSIH1STR0 CSIH1.STR0
#define CSIH1STCR0 CSIH1.STCR0
#define CSIH1MCTL0 CSIH1.MCTL0
#define CSIH1CFG0 CSIH1.CFG0
#define CSIH1CFG1 CSIH1.CFG1
#define CSIH1CFG2 CSIH1.CFG2
#define CSIH1CFG3 CSIH1.CFG3
#define CSIH1CFG4 CSIH1.CFG4
#define CSIH1CFG5 CSIH1.CFG5
#define CSIH1CFG6 CSIH1.CFG6
#define CSIH1CFG7 CSIH1.CFG7
#define CSIH1BRS0 CSIH1.BRS0
#define CSIH1BRS1 CSIH1.BRS1
#define CSIH1BRS2 CSIH1.BRS2
#define CSIH1BRS3 CSIH1.BRS3
#define PMMA1CTL PMMA1.CTL
#define PMMA1TCTL0 PMMA1.TCTL0
#define PMMA1TCTL1 PMMA1.TCTL1
#define PMMA1TCTL2 PMMA1.TCTL2
#define PMMA1TCTL3 PMMA1.TCTL3
#define PMMA1TCTL4 PMMA1.TCTL4
#define PMMA1TCTL5 PMMA1.TCTL5
#define PMMA1TCTL6 PMMA1.TCTL6
#define PMMA1TCTL7 PMMA1.TCTL7
#define PMMA1TTX0 PMMA1.TTX0
#define PMMA1TTX1 PMMA1.TTX1
#define PMMA1TTX2 PMMA1.TTX2
#define PMMA1TTX3 PMMA1.TTX3
#define PMMA1TTX4 PMMA1.TTX4
#define PMMA1TTX5 PMMA1.TTX5
#define PMMA1TTX6 PMMA1.TTX6
#define PMMA1TTX7 PMMA1.TTX7
#define PMMA1RX PMMA1.RX
#define PMMA1TCNT0 PMMA1.TCNT0
#define PMMA1TCNT1 PMMA1.TCNT1
#define PMMA1TCNT2 PMMA1.TCNT2
#define PMMA1TCNT3 PMMA1.TCNT3
#define PMMA1TCNT4 PMMA1.TCNT4
#define PMMA1TCNT5 PMMA1.TCNT5
#define PMMA1TCNT6 PMMA1.TCNT6
#define PMMA1TCNT7 PMMA1.TCNT7
#define PMMA1STR0 PMMA1.STR0
#define PMMA1STR1 PMMA1.STR1
#define PMMA1STC PMMA1.STC
#define CSIH3CTL0 CSIH3.CTL0.UINT8
#define CSIH3MBS CSIH3.CTL0.MBS
#define CSIH3JOBE CSIH3.CTL0.JOBE
#define CSIH3RXE CSIH3.CTL0.RXE
#define CSIH3TXE CSIH3.CTL0.TXE
#define CSIH3PWR CSIH3.CTL0.PWR
#define CSIH3CTL1 CSIH3.CTL1
#define CSIH3CTL2 CSIH3.CTL2
#define CSIH3MCTL1 CSIH3.MCTL1
#define CSIH3MCTL2 CSIH3.MCTL2
#define CSIH3TX0W CSIH3.TX0W
#define CSIH3TX0H CSIH3.TX0H
#define CSIH3RX0W CSIH3.RX0W
#define CSIH3RX0H CSIH3.RX0H
#define CSIH3MRWP0 CSIH3.MRWP0
#define CSIH3STR0 CSIH3.STR0
#define CSIH3STCR0 CSIH3.STCR0
#define CSIH3MCTL0 CSIH3.MCTL0
#define CSIH3CFG0 CSIH3.CFG0
#define CSIH3CFG1 CSIH3.CFG1
#define CSIH3CFG2 CSIH3.CFG2
#define CSIH3CFG3 CSIH3.CFG3
#define CSIH3CFG4 CSIH3.CFG4
#define CSIH3CFG5 CSIH3.CFG5
#define CSIH3CFG6 CSIH3.CFG6
#define CSIH3CFG7 CSIH3.CFG7
#define CSIH3BRS0 CSIH3.BRS0
#define CSIH3BRS1 CSIH3.BRS1
#define CSIH3BRS2 CSIH3.BRS2
#define CSIH3BRS3 CSIH3.BRS3
#define PMMA3CTL PMMA3.CTL
#define PMMA3TCTL0 PMMA3.TCTL0
#define PMMA3TCTL1 PMMA3.TCTL1
#define PMMA3TCTL2 PMMA3.TCTL2
#define PMMA3TCTL3 PMMA3.TCTL3
#define PMMA3TCTL4 PMMA3.TCTL4
#define PMMA3TCTL5 PMMA3.TCTL5
#define PMMA3TCTL6 PMMA3.TCTL6
#define PMMA3TCTL7 PMMA3.TCTL7
#define PMMA3TTX0 PMMA3.TTX0
#define PMMA3TTX1 PMMA3.TTX1
#define PMMA3TTX2 PMMA3.TTX2
#define PMMA3TTX3 PMMA3.TTX3
#define PMMA3TTX4 PMMA3.TTX4
#define PMMA3TTX5 PMMA3.TTX5
#define PMMA3TTX6 PMMA3.TTX6
#define PMMA3TTX7 PMMA3.TTX7
#define PMMA3RX PMMA3.RX
#define PMMA3TCNT0 PMMA3.TCNT0
#define PMMA3TCNT1 PMMA3.TCNT1
#define PMMA3TCNT2 PMMA3.TCNT2
#define PMMA3TCNT3 PMMA3.TCNT3
#define PMMA3TCNT4 PMMA3.TCNT4
#define PMMA3TCNT5 PMMA3.TCNT5
#define PMMA3TCNT6 PMMA3.TCNT6
#define PMMA3TCNT7 PMMA3.TCNT7
#define PMMA3STR0 PMMA3.STR0
#define PMMA3STR1 PMMA3.STR1
#define PMMA3STC PMMA3.STC
#define HSUS1CKEN HSUS1.CKEN
#define HSUS1SRST HSUS1.SRST
#define HSUS1EN HSUS1.EN
#define HSUS1MD HSUS1.MD
#define HSUS1CTL HSUS1.CTL
#define HSUS1TDIV HSUS1.TDIV
#define HSUS1TSAR HSUS1.TSAR
#define HSUS1TPFM HSUS1.TPFM
#define HSUS1RDAR HSUS1.RDAR
#define HSUS1RPFM HSUS1.RPFM
#define HSUS1RGFM HSUS1.RGFM
#define HSUS1IREN HSUS1.IREN
#define HSUS1IRST HSUS1.IRST
#define HSUS1IRCL HSUS1.IRCL.UINT32
#define HSUS1IRCLL HSUS1.IRCL.UINT16[L]
#define HSUS1IRCLLL HSUS1.IRCL.UINT8[LL]
#define HSUS1CST HSUS1.CST
#define HSUS1CTFM HSUS1.CTFM
#define HSUS1CRFM HSUS1.CRFM
#define RLN31LWBR RLN31.LWBR
#define RLN31LBRP01 RLN31.LBRP01.UINT16
#define RLN31LBRP0 RLN31.LBRP01.UINT8[L]
#define RLN31LBRP1 RLN31.LBRP01.UINT8[H]
#define RLN31LSTC RLN31.LSTC
#define RLN31LMD RLN31.LMD
#define RLN31LBFC RLN31.LBFC
#define RLN31LSC RLN31.LSC
#define RLN31LWUP RLN31.LWUP
#define RLN31LIE RLN31.LIE
#define RLN31LEDE RLN31.LEDE
#define RLN31LCUC RLN31.LCUC
#define RLN31LTRC RLN31.LTRC
#define RLN31LMST RLN31.LMST
#define RLN31LST RLN31.LST
#define RLN31LEST RLN31.LEST
#define RLN31LDFC RLN31.LDFC
#define RLN31LIDB RLN31.LIDB
#define RLN31LCBR RLN31.LCBR
#define RLN31LUDB0 RLN31.LUDB0
#define RLN31LDBR1 RLN31.LDBR1
#define RLN31LDBR2 RLN31.LDBR2
#define RLN31LDBR3 RLN31.LDBR3
#define RLN31LDBR4 RLN31.LDBR4
#define RLN31LDBR5 RLN31.LDBR5
#define RLN31LDBR6 RLN31.LDBR6
#define RLN31LDBR7 RLN31.LDBR7
#define RLN31LDBR8 RLN31.LDBR8
#define RLN31LUOER RLN31.LUOER
#define RLN31LUOR1 RLN31.LUOR1
#define RLN31LUTDR RLN31.LUTDR.UINT16
#define RLN31LUTDRL RLN31.LUTDR.UINT8[L]
#define RLN31LUTDRH RLN31.LUTDR.UINT8[H]
#define RLN31LURDR RLN31.LURDR.UINT16
#define RLN31LURDRL RLN31.LURDR.UINT8[L]
#define RLN31LURDRH RLN31.LURDR.UINT8[H]
#define RLN31LUWTDR RLN31.LUWTDR.UINT16
#define RLN31LUWTDRL RLN31.LUWTDR.UINT8[L]
#define RLN31LUWTDRH RLN31.LUWTDR.UINT8[H]
#define RSENT0TSPC RSENT0.TSPC.UINT32
#define RSENT0TSPCL RSENT0.TSPC.UINT16[L]
#define RSENT0TSPCLL RSENT0.TSPC.UINT8[LL]
#define RSENT0TSPCLH RSENT0.TSPC.UINT8[LH]
#define RSENT0TSPCH RSENT0.TSPC.UINT16[H]
#define RSENT0TSPCHL RSENT0.TSPC.UINT8[HL]
#define RSENT0TSC RSENT0.TSC.UINT32
#define RSENT0TSCL RSENT0.TSC.UINT16[L]
#define RSENT0TSCLL RSENT0.TSC.UINT8[LL]
#define RSENT0TSCLH RSENT0.TSC.UINT8[LH]
#define RSENT0TSCH RSENT0.TSC.UINT16[H]
#define RSENT0TSCHL RSENT0.TSC.UINT8[HL]
#define RSENT0TSCHH RSENT0.TSC.UINT8[HH]
#define RSENT0CC RSENT0.CC.UINT32
#define RSENT0CCL RSENT0.CC.UINT16[L]
#define RSENT0CCLL RSENT0.CC.UINT8[LL]
#define RSENT0CCLH RSENT0.CC.UINT8[LH]
#define RSENT0BRP RSENT0.BRP.UINT32
#define RSENT0BRPL RSENT0.BRP.UINT16[L]
#define RSENT0BRPLL RSENT0.BRP.UINT8[LL]
#define RSENT0BRPLH RSENT0.BRP.UINT8[LH]
#define RSENT0BRPH RSENT0.BRP.UINT16[H]
#define RSENT0BRPHL RSENT0.BRP.UINT8[HL]
#define RSENT0BRPHH RSENT0.BRP.UINT8[HH]
#define RSENT0IDE RSENT0.IDE.UINT32
#define RSENT0IDEL RSENT0.IDE.UINT16[L]
#define RSENT0IDELL RSENT0.IDE.UINT8[LL]
#define RSENT0IDELH RSENT0.IDE.UINT8[LH]
#define RSENT0MDC RSENT0.MDC.UINT32
#define RSENT0MDCL RSENT0.MDC.UINT16[L]
#define RSENT0MDCLL RSENT0.MDC.UINT8[LL]
#define RSENT0SPCT RSENT0.SPCT.UINT32
#define RSENT0SPCTL RSENT0.SPCT.UINT16[L]
#define RSENT0SPCTLL RSENT0.SPCT.UINT8[LL]
#define RSENT0MST RSENT0.MST.UINT32
#define RSENT0MSTL RSENT0.MST.UINT16[L]
#define RSENT0MSTLL RSENT0.MST.UINT8[LL]
#define RSENT0CS RSENT0.CS.UINT32
#define RSENT0CSL RSENT0.CS.UINT16[L]
#define RSENT0CSLL RSENT0.CS.UINT8[LL]
#define RSENT0CSLH RSENT0.CS.UINT8[LH]
#define RSENT0CSC RSENT0.CSC.UINT32
#define RSENT0CSCL RSENT0.CSC.UINT16[L]
#define RSENT0CSCLL RSENT0.CSC.UINT8[LL]
#define RSENT0CSCLH RSENT0.CSC.UINT8[LH]
#define RSENT0SRTS RSENT0.SRTS.UINT32
#define RSENT0SRTSL RSENT0.SRTS.UINT16[L]
#define RSENT0SRTSLL RSENT0.SRTS.UINT8[LL]
#define RSENT0SRTSLH RSENT0.SRTS.UINT8[LH]
#define RSENT0SRTSH RSENT0.SRTS.UINT16[H]
#define RSENT0SRTSHL RSENT0.SRTS.UINT8[HL]
#define RSENT0SRTSHH RSENT0.SRTS.UINT8[HH]
#define RSENT0SRXD RSENT0.SRXD
#define RSENT0CPL RSENT0.CPL.UINT32
#define RSENT0CPLL RSENT0.CPL.UINT16[L]
#define RSENT0CPLLL RSENT0.CPL.UINT8[LL]
#define RSENT0CPLLH RSENT0.CPL.UINT8[LH]
#define RSENT0CPLH RSENT0.CPL.UINT16[H]
#define RSENT0CPLHL RSENT0.CPL.UINT8[HL]
#define RSENT0ML RSENT0.ML.UINT32
#define RSENT0MLL RSENT0.ML.UINT16[L]
#define RSENT0MLLL RSENT0.ML.UINT8[LL]
#define RSENT0MLLH RSENT0.ML.UINT8[LH]
#define RSENT0MLH RSENT0.ML.UINT16[H]
#define RSENT0MLHL RSENT0.ML.UINT8[HL]
#define RSENT0FRTS RSENT0.FRTS.UINT32
#define RSENT0FRTSL RSENT0.FRTS.UINT16[L]
#define RSENT0FRTSLL RSENT0.FRTS.UINT8[LL]
#define RSENT0FRTSLH RSENT0.FRTS.UINT8[LH]
#define RSENT0FRTSH RSENT0.FRTS.UINT16[H]
#define RSENT0FRTSHL RSENT0.FRTS.UINT8[HL]
#define RSENT0FRTSHH RSENT0.FRTS.UINT8[HH]
#define RSENT0FRXD RSENT0.FRXD
#define RSENT1TSPC RSENT1.TSPC.UINT32
#define RSENT1TSPCL RSENT1.TSPC.UINT16[L]
#define RSENT1TSPCLL RSENT1.TSPC.UINT8[LL]
#define RSENT1TSPCLH RSENT1.TSPC.UINT8[LH]
#define RSENT1TSPCH RSENT1.TSPC.UINT16[H]
#define RSENT1TSPCHL RSENT1.TSPC.UINT8[HL]
#define RSENT1TSC RSENT1.TSC.UINT32
#define RSENT1TSCL RSENT1.TSC.UINT16[L]
#define RSENT1TSCLL RSENT1.TSC.UINT8[LL]
#define RSENT1TSCLH RSENT1.TSC.UINT8[LH]
#define RSENT1TSCH RSENT1.TSC.UINT16[H]
#define RSENT1TSCHL RSENT1.TSC.UINT8[HL]
#define RSENT1TSCHH RSENT1.TSC.UINT8[HH]
#define RSENT1CC RSENT1.CC.UINT32
#define RSENT1CCL RSENT1.CC.UINT16[L]
#define RSENT1CCLL RSENT1.CC.UINT8[LL]
#define RSENT1CCLH RSENT1.CC.UINT8[LH]
#define RSENT1BRP RSENT1.BRP.UINT32
#define RSENT1BRPL RSENT1.BRP.UINT16[L]
#define RSENT1BRPLL RSENT1.BRP.UINT8[LL]
#define RSENT1BRPLH RSENT1.BRP.UINT8[LH]
#define RSENT1BRPH RSENT1.BRP.UINT16[H]
#define RSENT1BRPHL RSENT1.BRP.UINT8[HL]
#define RSENT1BRPHH RSENT1.BRP.UINT8[HH]
#define RSENT1IDE RSENT1.IDE.UINT32
#define RSENT1IDEL RSENT1.IDE.UINT16[L]
#define RSENT1IDELL RSENT1.IDE.UINT8[LL]
#define RSENT1IDELH RSENT1.IDE.UINT8[LH]
#define RSENT1MDC RSENT1.MDC.UINT32
#define RSENT1MDCL RSENT1.MDC.UINT16[L]
#define RSENT1MDCLL RSENT1.MDC.UINT8[LL]
#define RSENT1SPCT RSENT1.SPCT.UINT32
#define RSENT1SPCTL RSENT1.SPCT.UINT16[L]
#define RSENT1SPCTLL RSENT1.SPCT.UINT8[LL]
#define RSENT1MST RSENT1.MST.UINT32
#define RSENT1MSTL RSENT1.MST.UINT16[L]
#define RSENT1MSTLL RSENT1.MST.UINT8[LL]
#define RSENT1CS RSENT1.CS.UINT32
#define RSENT1CSL RSENT1.CS.UINT16[L]
#define RSENT1CSLL RSENT1.CS.UINT8[LL]
#define RSENT1CSLH RSENT1.CS.UINT8[LH]
#define RSENT1CSC RSENT1.CSC.UINT32
#define RSENT1CSCL RSENT1.CSC.UINT16[L]
#define RSENT1CSCLL RSENT1.CSC.UINT8[LL]
#define RSENT1CSCLH RSENT1.CSC.UINT8[LH]
#define RSENT1SRTS RSENT1.SRTS.UINT32
#define RSENT1SRTSL RSENT1.SRTS.UINT16[L]
#define RSENT1SRTSLL RSENT1.SRTS.UINT8[LL]
#define RSENT1SRTSLH RSENT1.SRTS.UINT8[LH]
#define RSENT1SRTSH RSENT1.SRTS.UINT16[H]
#define RSENT1SRTSHL RSENT1.SRTS.UINT8[HL]
#define RSENT1SRTSHH RSENT1.SRTS.UINT8[HH]
#define RSENT1SRXD RSENT1.SRXD
#define RSENT1CPL RSENT1.CPL.UINT32
#define RSENT1CPLL RSENT1.CPL.UINT16[L]
#define RSENT1CPLLL RSENT1.CPL.UINT8[LL]
#define RSENT1CPLLH RSENT1.CPL.UINT8[LH]
#define RSENT1CPLH RSENT1.CPL.UINT16[H]
#define RSENT1CPLHL RSENT1.CPL.UINT8[HL]
#define RSENT1ML RSENT1.ML.UINT32
#define RSENT1MLL RSENT1.ML.UINT16[L]
#define RSENT1MLLL RSENT1.ML.UINT8[LL]
#define RSENT1MLLH RSENT1.ML.UINT8[LH]
#define RSENT1MLH RSENT1.ML.UINT16[H]
#define RSENT1MLHL RSENT1.ML.UINT8[HL]
#define RSENT1FRTS RSENT1.FRTS.UINT32
#define RSENT1FRTSL RSENT1.FRTS.UINT16[L]
#define RSENT1FRTSLL RSENT1.FRTS.UINT8[LL]
#define RSENT1FRTSLH RSENT1.FRTS.UINT8[LH]
#define RSENT1FRTSH RSENT1.FRTS.UINT16[H]
#define RSENT1FRTSHL RSENT1.FRTS.UINT8[HL]
#define RSENT1FRTSHH RSENT1.FRTS.UINT8[HH]
#define RSENT1FRXD RSENT1.FRXD
#define RSENT2TSPC RSENT2.TSPC.UINT32
#define RSENT2TSPCL RSENT2.TSPC.UINT16[L]
#define RSENT2TSPCLL RSENT2.TSPC.UINT8[LL]
#define RSENT2TSPCLH RSENT2.TSPC.UINT8[LH]
#define RSENT2TSPCH RSENT2.TSPC.UINT16[H]
#define RSENT2TSPCHL RSENT2.TSPC.UINT8[HL]
#define RSENT2TSC RSENT2.TSC.UINT32
#define RSENT2TSCL RSENT2.TSC.UINT16[L]
#define RSENT2TSCLL RSENT2.TSC.UINT8[LL]
#define RSENT2TSCLH RSENT2.TSC.UINT8[LH]
#define RSENT2TSCH RSENT2.TSC.UINT16[H]
#define RSENT2TSCHL RSENT2.TSC.UINT8[HL]
#define RSENT2TSCHH RSENT2.TSC.UINT8[HH]
#define RSENT2CC RSENT2.CC.UINT32
#define RSENT2CCL RSENT2.CC.UINT16[L]
#define RSENT2CCLL RSENT2.CC.UINT8[LL]
#define RSENT2CCLH RSENT2.CC.UINT8[LH]
#define RSENT2BRP RSENT2.BRP.UINT32
#define RSENT2BRPL RSENT2.BRP.UINT16[L]
#define RSENT2BRPLL RSENT2.BRP.UINT8[LL]
#define RSENT2BRPLH RSENT2.BRP.UINT8[LH]
#define RSENT2BRPH RSENT2.BRP.UINT16[H]
#define RSENT2BRPHL RSENT2.BRP.UINT8[HL]
#define RSENT2BRPHH RSENT2.BRP.UINT8[HH]
#define RSENT2IDE RSENT2.IDE.UINT32
#define RSENT2IDEL RSENT2.IDE.UINT16[L]
#define RSENT2IDELL RSENT2.IDE.UINT8[LL]
#define RSENT2IDELH RSENT2.IDE.UINT8[LH]
#define RSENT2MDC RSENT2.MDC.UINT32
#define RSENT2MDCL RSENT2.MDC.UINT16[L]
#define RSENT2MDCLL RSENT2.MDC.UINT8[LL]
#define RSENT2SPCT RSENT2.SPCT.UINT32
#define RSENT2SPCTL RSENT2.SPCT.UINT16[L]
#define RSENT2SPCTLL RSENT2.SPCT.UINT8[LL]
#define RSENT2MST RSENT2.MST.UINT32
#define RSENT2MSTL RSENT2.MST.UINT16[L]
#define RSENT2MSTLL RSENT2.MST.UINT8[LL]
#define RSENT2CS RSENT2.CS.UINT32
#define RSENT2CSL RSENT2.CS.UINT16[L]
#define RSENT2CSLL RSENT2.CS.UINT8[LL]
#define RSENT2CSLH RSENT2.CS.UINT8[LH]
#define RSENT2CSC RSENT2.CSC.UINT32
#define RSENT2CSCL RSENT2.CSC.UINT16[L]
#define RSENT2CSCLL RSENT2.CSC.UINT8[LL]
#define RSENT2CSCLH RSENT2.CSC.UINT8[LH]
#define RSENT2SRTS RSENT2.SRTS.UINT32
#define RSENT2SRTSL RSENT2.SRTS.UINT16[L]
#define RSENT2SRTSLL RSENT2.SRTS.UINT8[LL]
#define RSENT2SRTSLH RSENT2.SRTS.UINT8[LH]
#define RSENT2SRTSH RSENT2.SRTS.UINT16[H]
#define RSENT2SRTSHL RSENT2.SRTS.UINT8[HL]
#define RSENT2SRTSHH RSENT2.SRTS.UINT8[HH]
#define RSENT2SRXD RSENT2.SRXD
#define RSENT2CPL RSENT2.CPL.UINT32
#define RSENT2CPLL RSENT2.CPL.UINT16[L]
#define RSENT2CPLLL RSENT2.CPL.UINT8[LL]
#define RSENT2CPLLH RSENT2.CPL.UINT8[LH]
#define RSENT2CPLH RSENT2.CPL.UINT16[H]
#define RSENT2CPLHL RSENT2.CPL.UINT8[HL]
#define RSENT2ML RSENT2.ML.UINT32
#define RSENT2MLL RSENT2.ML.UINT16[L]
#define RSENT2MLLL RSENT2.ML.UINT8[LL]
#define RSENT2MLLH RSENT2.ML.UINT8[LH]
#define RSENT2MLH RSENT2.ML.UINT16[H]
#define RSENT2MLHL RSENT2.ML.UINT8[HL]
#define RSENT2FRTS RSENT2.FRTS.UINT32
#define RSENT2FRTSL RSENT2.FRTS.UINT16[L]
#define RSENT2FRTSLL RSENT2.FRTS.UINT8[LL]
#define RSENT2FRTSLH RSENT2.FRTS.UINT8[LH]
#define RSENT2FRTSH RSENT2.FRTS.UINT16[H]
#define RSENT2FRTSHL RSENT2.FRTS.UINT8[HL]
#define RSENT2FRTSHH RSENT2.FRTS.UINT8[HH]
#define RSENT2FRXD RSENT2.FRXD
#define RSENT3TSPC RSENT3.TSPC.UINT32
#define RSENT3TSPCL RSENT3.TSPC.UINT16[L]
#define RSENT3TSPCLL RSENT3.TSPC.UINT8[LL]
#define RSENT3TSPCLH RSENT3.TSPC.UINT8[LH]
#define RSENT3TSPCH RSENT3.TSPC.UINT16[H]
#define RSENT3TSPCHL RSENT3.TSPC.UINT8[HL]
#define RSENT3TSC RSENT3.TSC.UINT32
#define RSENT3TSCL RSENT3.TSC.UINT16[L]
#define RSENT3TSCLL RSENT3.TSC.UINT8[LL]
#define RSENT3TSCLH RSENT3.TSC.UINT8[LH]
#define RSENT3TSCH RSENT3.TSC.UINT16[H]
#define RSENT3TSCHL RSENT3.TSC.UINT8[HL]
#define RSENT3TSCHH RSENT3.TSC.UINT8[HH]
#define RSENT3CC RSENT3.CC.UINT32
#define RSENT3CCL RSENT3.CC.UINT16[L]
#define RSENT3CCLL RSENT3.CC.UINT8[LL]
#define RSENT3CCLH RSENT3.CC.UINT8[LH]
#define RSENT3BRP RSENT3.BRP.UINT32
#define RSENT3BRPL RSENT3.BRP.UINT16[L]
#define RSENT3BRPLL RSENT3.BRP.UINT8[LL]
#define RSENT3BRPLH RSENT3.BRP.UINT8[LH]
#define RSENT3BRPH RSENT3.BRP.UINT16[H]
#define RSENT3BRPHL RSENT3.BRP.UINT8[HL]
#define RSENT3BRPHH RSENT3.BRP.UINT8[HH]
#define RSENT3IDE RSENT3.IDE.UINT32
#define RSENT3IDEL RSENT3.IDE.UINT16[L]
#define RSENT3IDELL RSENT3.IDE.UINT8[LL]
#define RSENT3IDELH RSENT3.IDE.UINT8[LH]
#define RSENT3MDC RSENT3.MDC.UINT32
#define RSENT3MDCL RSENT3.MDC.UINT16[L]
#define RSENT3MDCLL RSENT3.MDC.UINT8[LL]
#define RSENT3SPCT RSENT3.SPCT.UINT32
#define RSENT3SPCTL RSENT3.SPCT.UINT16[L]
#define RSENT3SPCTLL RSENT3.SPCT.UINT8[LL]
#define RSENT3MST RSENT3.MST.UINT32
#define RSENT3MSTL RSENT3.MST.UINT16[L]
#define RSENT3MSTLL RSENT3.MST.UINT8[LL]
#define RSENT3CS RSENT3.CS.UINT32
#define RSENT3CSL RSENT3.CS.UINT16[L]
#define RSENT3CSLL RSENT3.CS.UINT8[LL]
#define RSENT3CSLH RSENT3.CS.UINT8[LH]
#define RSENT3CSC RSENT3.CSC.UINT32
#define RSENT3CSCL RSENT3.CSC.UINT16[L]
#define RSENT3CSCLL RSENT3.CSC.UINT8[LL]
#define RSENT3CSCLH RSENT3.CSC.UINT8[LH]
#define RSENT3SRTS RSENT3.SRTS.UINT32
#define RSENT3SRTSL RSENT3.SRTS.UINT16[L]
#define RSENT3SRTSLL RSENT3.SRTS.UINT8[LL]
#define RSENT3SRTSLH RSENT3.SRTS.UINT8[LH]
#define RSENT3SRTSH RSENT3.SRTS.UINT16[H]
#define RSENT3SRTSHL RSENT3.SRTS.UINT8[HL]
#define RSENT3SRTSHH RSENT3.SRTS.UINT8[HH]
#define RSENT3SRXD RSENT3.SRXD
#define RSENT3CPL RSENT3.CPL.UINT32
#define RSENT3CPLL RSENT3.CPL.UINT16[L]
#define RSENT3CPLLL RSENT3.CPL.UINT8[LL]
#define RSENT3CPLLH RSENT3.CPL.UINT8[LH]
#define RSENT3CPLH RSENT3.CPL.UINT16[H]
#define RSENT3CPLHL RSENT3.CPL.UINT8[HL]
#define RSENT3ML RSENT3.ML.UINT32
#define RSENT3MLL RSENT3.ML.UINT16[L]
#define RSENT3MLLL RSENT3.ML.UINT8[LL]
#define RSENT3MLLH RSENT3.ML.UINT8[LH]
#define RSENT3MLH RSENT3.ML.UINT16[H]
#define RSENT3MLHL RSENT3.ML.UINT8[HL]
#define RSENT3FRTS RSENT3.FRTS.UINT32
#define RSENT3FRTSL RSENT3.FRTS.UINT16[L]
#define RSENT3FRTSLL RSENT3.FRTS.UINT8[LL]
#define RSENT3FRTSLH RSENT3.FRTS.UINT8[LH]
#define RSENT3FRTSH RSENT3.FRTS.UINT16[H]
#define RSENT3FRTSHL RSENT3.FRTS.UINT8[HL]
#define RSENT3FRTSHH RSENT3.FRTS.UINT8[HH]
#define RSENT3FRXD RSENT3.FRXD
#define RSENT4TSPC RSENT4.TSPC.UINT32
#define RSENT4TSPCL RSENT4.TSPC.UINT16[L]
#define RSENT4TSPCLL RSENT4.TSPC.UINT8[LL]
#define RSENT4TSPCLH RSENT4.TSPC.UINT8[LH]
#define RSENT4TSPCH RSENT4.TSPC.UINT16[H]
#define RSENT4TSPCHL RSENT4.TSPC.UINT8[HL]
#define RSENT4TSC RSENT4.TSC.UINT32
#define RSENT4TSCL RSENT4.TSC.UINT16[L]
#define RSENT4TSCLL RSENT4.TSC.UINT8[LL]
#define RSENT4TSCLH RSENT4.TSC.UINT8[LH]
#define RSENT4TSCH RSENT4.TSC.UINT16[H]
#define RSENT4TSCHL RSENT4.TSC.UINT8[HL]
#define RSENT4TSCHH RSENT4.TSC.UINT8[HH]
#define RSENT4CC RSENT4.CC.UINT32
#define RSENT4CCL RSENT4.CC.UINT16[L]
#define RSENT4CCLL RSENT4.CC.UINT8[LL]
#define RSENT4CCLH RSENT4.CC.UINT8[LH]
#define RSENT4BRP RSENT4.BRP.UINT32
#define RSENT4BRPL RSENT4.BRP.UINT16[L]
#define RSENT4BRPLL RSENT4.BRP.UINT8[LL]
#define RSENT4BRPLH RSENT4.BRP.UINT8[LH]
#define RSENT4BRPH RSENT4.BRP.UINT16[H]
#define RSENT4BRPHL RSENT4.BRP.UINT8[HL]
#define RSENT4BRPHH RSENT4.BRP.UINT8[HH]
#define RSENT4IDE RSENT4.IDE.UINT32
#define RSENT4IDEL RSENT4.IDE.UINT16[L]
#define RSENT4IDELL RSENT4.IDE.UINT8[LL]
#define RSENT4IDELH RSENT4.IDE.UINT8[LH]
#define RSENT4MDC RSENT4.MDC.UINT32
#define RSENT4MDCL RSENT4.MDC.UINT16[L]
#define RSENT4MDCLL RSENT4.MDC.UINT8[LL]
#define RSENT4SPCT RSENT4.SPCT.UINT32
#define RSENT4SPCTL RSENT4.SPCT.UINT16[L]
#define RSENT4SPCTLL RSENT4.SPCT.UINT8[LL]
#define RSENT4MST RSENT4.MST.UINT32
#define RSENT4MSTL RSENT4.MST.UINT16[L]
#define RSENT4MSTLL RSENT4.MST.UINT8[LL]
#define RSENT4CS RSENT4.CS.UINT32
#define RSENT4CSL RSENT4.CS.UINT16[L]
#define RSENT4CSLL RSENT4.CS.UINT8[LL]
#define RSENT4CSLH RSENT4.CS.UINT8[LH]
#define RSENT4CSC RSENT4.CSC.UINT32
#define RSENT4CSCL RSENT4.CSC.UINT16[L]
#define RSENT4CSCLL RSENT4.CSC.UINT8[LL]
#define RSENT4CSCLH RSENT4.CSC.UINT8[LH]
#define RSENT4SRTS RSENT4.SRTS.UINT32
#define RSENT4SRTSL RSENT4.SRTS.UINT16[L]
#define RSENT4SRTSLL RSENT4.SRTS.UINT8[LL]
#define RSENT4SRTSLH RSENT4.SRTS.UINT8[LH]
#define RSENT4SRTSH RSENT4.SRTS.UINT16[H]
#define RSENT4SRTSHL RSENT4.SRTS.UINT8[HL]
#define RSENT4SRTSHH RSENT4.SRTS.UINT8[HH]
#define RSENT4SRXD RSENT4.SRXD
#define RSENT4CPL RSENT4.CPL.UINT32
#define RSENT4CPLL RSENT4.CPL.UINT16[L]
#define RSENT4CPLLL RSENT4.CPL.UINT8[LL]
#define RSENT4CPLLH RSENT4.CPL.UINT8[LH]
#define RSENT4CPLH RSENT4.CPL.UINT16[H]
#define RSENT4CPLHL RSENT4.CPL.UINT8[HL]
#define RSENT4ML RSENT4.ML.UINT32
#define RSENT4MLL RSENT4.ML.UINT16[L]
#define RSENT4MLLL RSENT4.ML.UINT8[LL]
#define RSENT4MLLH RSENT4.ML.UINT8[LH]
#define RSENT4MLH RSENT4.ML.UINT16[H]
#define RSENT4MLHL RSENT4.ML.UINT8[HL]
#define RSENT4FRTS RSENT4.FRTS.UINT32
#define RSENT4FRTSL RSENT4.FRTS.UINT16[L]
#define RSENT4FRTSLL RSENT4.FRTS.UINT8[LL]
#define RSENT4FRTSLH RSENT4.FRTS.UINT8[LH]
#define RSENT4FRTSH RSENT4.FRTS.UINT16[H]
#define RSENT4FRTSHL RSENT4.FRTS.UINT8[HL]
#define RSENT4FRTSHH RSENT4.FRTS.UINT8[HH]
#define RSENT4FRXD RSENT4.FRXD
#define RSENT5TSPC RSENT5.TSPC.UINT32
#define RSENT5TSPCL RSENT5.TSPC.UINT16[L]
#define RSENT5TSPCLL RSENT5.TSPC.UINT8[LL]
#define RSENT5TSPCLH RSENT5.TSPC.UINT8[LH]
#define RSENT5TSPCH RSENT5.TSPC.UINT16[H]
#define RSENT5TSPCHL RSENT5.TSPC.UINT8[HL]
#define RSENT5TSC RSENT5.TSC.UINT32
#define RSENT5TSCL RSENT5.TSC.UINT16[L]
#define RSENT5TSCLL RSENT5.TSC.UINT8[LL]
#define RSENT5TSCLH RSENT5.TSC.UINT8[LH]
#define RSENT5TSCH RSENT5.TSC.UINT16[H]
#define RSENT5TSCHL RSENT5.TSC.UINT8[HL]
#define RSENT5TSCHH RSENT5.TSC.UINT8[HH]
#define RSENT5CC RSENT5.CC.UINT32
#define RSENT5CCL RSENT5.CC.UINT16[L]
#define RSENT5CCLL RSENT5.CC.UINT8[LL]
#define RSENT5CCLH RSENT5.CC.UINT8[LH]
#define RSENT5BRP RSENT5.BRP.UINT32
#define RSENT5BRPL RSENT5.BRP.UINT16[L]
#define RSENT5BRPLL RSENT5.BRP.UINT8[LL]
#define RSENT5BRPLH RSENT5.BRP.UINT8[LH]
#define RSENT5BRPH RSENT5.BRP.UINT16[H]
#define RSENT5BRPHL RSENT5.BRP.UINT8[HL]
#define RSENT5BRPHH RSENT5.BRP.UINT8[HH]
#define RSENT5IDE RSENT5.IDE.UINT32
#define RSENT5IDEL RSENT5.IDE.UINT16[L]
#define RSENT5IDELL RSENT5.IDE.UINT8[LL]
#define RSENT5IDELH RSENT5.IDE.UINT8[LH]
#define RSENT5MDC RSENT5.MDC.UINT32
#define RSENT5MDCL RSENT5.MDC.UINT16[L]
#define RSENT5MDCLL RSENT5.MDC.UINT8[LL]
#define RSENT5SPCT RSENT5.SPCT.UINT32
#define RSENT5SPCTL RSENT5.SPCT.UINT16[L]
#define RSENT5SPCTLL RSENT5.SPCT.UINT8[LL]
#define RSENT5MST RSENT5.MST.UINT32
#define RSENT5MSTL RSENT5.MST.UINT16[L]
#define RSENT5MSTLL RSENT5.MST.UINT8[LL]
#define RSENT5CS RSENT5.CS.UINT32
#define RSENT5CSL RSENT5.CS.UINT16[L]
#define RSENT5CSLL RSENT5.CS.UINT8[LL]
#define RSENT5CSLH RSENT5.CS.UINT8[LH]
#define RSENT5CSC RSENT5.CSC.UINT32
#define RSENT5CSCL RSENT5.CSC.UINT16[L]
#define RSENT5CSCLL RSENT5.CSC.UINT8[LL]
#define RSENT5CSCLH RSENT5.CSC.UINT8[LH]
#define RSENT5SRTS RSENT5.SRTS.UINT32
#define RSENT5SRTSL RSENT5.SRTS.UINT16[L]
#define RSENT5SRTSLL RSENT5.SRTS.UINT8[LL]
#define RSENT5SRTSLH RSENT5.SRTS.UINT8[LH]
#define RSENT5SRTSH RSENT5.SRTS.UINT16[H]
#define RSENT5SRTSHL RSENT5.SRTS.UINT8[HL]
#define RSENT5SRTSHH RSENT5.SRTS.UINT8[HH]
#define RSENT5SRXD RSENT5.SRXD
#define RSENT5CPL RSENT5.CPL.UINT32
#define RSENT5CPLL RSENT5.CPL.UINT16[L]
#define RSENT5CPLLL RSENT5.CPL.UINT8[LL]
#define RSENT5CPLLH RSENT5.CPL.UINT8[LH]
#define RSENT5CPLH RSENT5.CPL.UINT16[H]
#define RSENT5CPLHL RSENT5.CPL.UINT8[HL]
#define RSENT5ML RSENT5.ML.UINT32
#define RSENT5MLL RSENT5.ML.UINT16[L]
#define RSENT5MLLL RSENT5.ML.UINT8[LL]
#define RSENT5MLLH RSENT5.ML.UINT8[LH]
#define RSENT5MLH RSENT5.ML.UINT16[H]
#define RSENT5MLHL RSENT5.ML.UINT8[HL]
#define RSENT5FRTS RSENT5.FRTS.UINT32
#define RSENT5FRTSL RSENT5.FRTS.UINT16[L]
#define RSENT5FRTSLL RSENT5.FRTS.UINT8[LL]
#define RSENT5FRTSLH RSENT5.FRTS.UINT8[LH]
#define RSENT5FRTSH RSENT5.FRTS.UINT16[H]
#define RSENT5FRTSHL RSENT5.FRTS.UINT8[HL]
#define RSENT5FRTSHH RSENT5.FRTS.UINT8[HH]
#define RSENT5FRXD RSENT5.FRXD
#define RSENT6TSPC RSENT6.TSPC
#define SINTR0 SINT.R0
#define SINTR1 SINT.R1
#define SINTR2 SINT.R2
#define MTTCAN0CREL MTTCAN0.CREL.UINT32
#define MTTCAN0CRELL MTTCAN0.CREL.UINT16[L]
#define MTTCAN0CRELLL MTTCAN0.CREL.UINT8[LL]
#define MTTCAN0CRELLH MTTCAN0.CREL.UINT8[LH]
#define MTTCAN0CRELH MTTCAN0.CREL.UINT16[H]
#define MTTCAN0CRELHL MTTCAN0.CREL.UINT8[HL]
#define MTTCAN0CRELHH MTTCAN0.CREL.UINT8[HH]
#define MTTCAN0ENDN MTTCAN0.ENDN.UINT32
#define MTTCAN0ENDNL MTTCAN0.ENDN.UINT16[L]
#define MTTCAN0ENDNLL MTTCAN0.ENDN.UINT8[LL]
#define MTTCAN0ENDNLH MTTCAN0.ENDN.UINT8[LH]
#define MTTCAN0ENDNH MTTCAN0.ENDN.UINT16[H]
#define MTTCAN0ENDNHL MTTCAN0.ENDN.UINT8[HL]
#define MTTCAN0ENDNHH MTTCAN0.ENDN.UINT8[HH]
#define MTTCAN0DBTP MTTCAN0.DBTP.UINT32
#define MTTCAN0FBTP MTTCAN0.DBTP.UINT32
#define MTTCAN0DBTPL MTTCAN0.DBTP.UINT16[L]
#define MTTCAN0FBTPL MTTCAN0.DBTP.UINT16[L]
#define MTTCAN0DBTPLL MTTCAN0.DBTP.UINT8[LL]
#define MTTCAN0FBTPLL MTTCAN0.DBTP.UINT8[LL]
#define MTTCAN0DBTPLH MTTCAN0.DBTP.UINT8[LH]
#define MTTCAN0FBTPLH MTTCAN0.DBTP.UINT8[LH]
#define MTTCAN0DBTPH MTTCAN0.DBTP.UINT16[H]
#define MTTCAN0FBTPH MTTCAN0.DBTP.UINT16[H]
#define MTTCAN0DBTPHL MTTCAN0.DBTP.UINT8[HL]
#define MTTCAN0FBTPHL MTTCAN0.DBTP.UINT8[HL]
#define MTTCAN0DBTPHH MTTCAN0.DBTP.UINT8[HH]
#define MTTCAN0FBTPHH MTTCAN0.DBTP.UINT8[HH]
#define MTTCAN0TEST MTTCAN0.TEST.UINT32
#define MTTCAN0TESTL MTTCAN0.TEST.UINT16[L]
#define MTTCAN0TESTLL MTTCAN0.TEST.UINT8[LL]
#define MTTCAN0TESTLH MTTCAN0.TEST.UINT8[LH]
#define MTTCAN0RWD MTTCAN0.RWD.UINT32
#define MTTCAN0RWDL MTTCAN0.RWD.UINT16[L]
#define MTTCAN0RWDLL MTTCAN0.RWD.UINT8[LL]
#define MTTCAN0RWDLH MTTCAN0.RWD.UINT8[LH]
#define MTTCAN0CCCR MTTCAN0.CCCR.UINT32
#define MTTCAN0CCCRL MTTCAN0.CCCR.UINT16[L]
#define MTTCAN0CCCRLL MTTCAN0.CCCR.UINT8[LL]
#define MTTCAN0CCCRLH MTTCAN0.CCCR.UINT8[LH]
#define MTTCAN0BTP MTTCAN0.BTP.UINT32
#define MTTCAN0NBTP MTTCAN0.BTP.UINT32
#define MTTCAN0BTPL MTTCAN0.BTP.UINT16[L]
#define MTTCAN0NBTPL MTTCAN0.BTP.UINT16[L]
#define MTTCAN0BTPLL MTTCAN0.BTP.UINT8[LL]
#define MTTCAN0NBTPLL MTTCAN0.BTP.UINT8[LL]
#define MTTCAN0BTPLH MTTCAN0.BTP.UINT8[LH]
#define MTTCAN0NBTPLH MTTCAN0.BTP.UINT8[LH]
#define MTTCAN0BTPH MTTCAN0.BTP.UINT16[H]
#define MTTCAN0NBTPH MTTCAN0.BTP.UINT16[H]
#define MTTCAN0BTPHL MTTCAN0.BTP.UINT8[HL]
#define MTTCAN0NBTPHL MTTCAN0.BTP.UINT8[HL]
#define MTTCAN0BTPHH MTTCAN0.BTP.UINT8[HH]
#define MTTCAN0NBTPHH MTTCAN0.BTP.UINT8[HH]
#define MTTCAN0TSCV MTTCAN0.TSCV.UINT32
#define MTTCAN0TSCVL MTTCAN0.TSCV.UINT16[L]
#define MTTCAN0TSCVLL MTTCAN0.TSCV.UINT8[LL]
#define MTTCAN0TSCVLH MTTCAN0.TSCV.UINT8[LH]
#define MTTCAN0TOCC MTTCAN0.TOCC.UINT32
#define MTTCAN0TOCCL MTTCAN0.TOCC.UINT16[L]
#define MTTCAN0TOCCLL MTTCAN0.TOCC.UINT8[LL]
#define MTTCAN0TOCCLH MTTCAN0.TOCC.UINT8[LH]
#define MTTCAN0TOCCH MTTCAN0.TOCC.UINT16[H]
#define MTTCAN0TOCCHL MTTCAN0.TOCC.UINT8[HL]
#define MTTCAN0TOCCHH MTTCAN0.TOCC.UINT8[HH]
#define MTTCAN0TOCV MTTCAN0.TOCV.UINT32
#define MTTCAN0TOCVL MTTCAN0.TOCV.UINT16[L]
#define MTTCAN0TOCVLL MTTCAN0.TOCV.UINT8[LL]
#define MTTCAN0TOCVLH MTTCAN0.TOCV.UINT8[LH]
#define MTTCAN0ECR MTTCAN0.ECR.UINT32
#define MTTCAN0ECRL MTTCAN0.ECR.UINT16[L]
#define MTTCAN0ECRLL MTTCAN0.ECR.UINT8[LL]
#define MTTCAN0ECRLH MTTCAN0.ECR.UINT8[LH]
#define MTTCAN0ECRH MTTCAN0.ECR.UINT16[H]
#define MTTCAN0ECRHL MTTCAN0.ECR.UINT8[HL]
#define MTTCAN0ECRHH MTTCAN0.ECR.UINT8[HH]
#define MTTCAN0PSR MTTCAN0.PSR.UINT32
#define MTTCAN0PSRL MTTCAN0.PSR.UINT16[L]
#define MTTCAN0PSRLL MTTCAN0.PSR.UINT8[LL]
#define MTTCAN0PSRLH MTTCAN0.PSR.UINT8[LH]
#define MTTCAN0TDCR MTTCAN0.TDCR.UINT32
#define MTTCAN0TDCRL MTTCAN0.TDCR.UINT16[L]
#define MTTCAN0TDCRLL MTTCAN0.TDCR.UINT8[LL]
#define MTTCAN0TDCRLH MTTCAN0.TDCR.UINT8[LH]
#define MTTCAN0IR MTTCAN0.IR.UINT32
#define MTTCAN0IRL MTTCAN0.IR.UINT16[L]
#define MTTCAN0IRLL MTTCAN0.IR.UINT8[LL]
#define MTTCAN0IRLH MTTCAN0.IR.UINT8[LH]
#define MTTCAN0IRH MTTCAN0.IR.UINT16[H]
#define MTTCAN0IRHL MTTCAN0.IR.UINT8[HL]
#define MTTCAN0IRHH MTTCAN0.IR.UINT8[HH]
#define MTTCAN0IE MTTCAN0.IE.UINT32
#define MTTCAN0IEL MTTCAN0.IE.UINT16[L]
#define MTTCAN0IELL MTTCAN0.IE.UINT8[LL]
#define MTTCAN0IELH MTTCAN0.IE.UINT8[LH]
#define MTTCAN0IEH MTTCAN0.IE.UINT16[H]
#define MTTCAN0IEHL MTTCAN0.IE.UINT8[HL]
#define MTTCAN0IEHH MTTCAN0.IE.UINT8[HH]
#define MTTCAN0ILS MTTCAN0.ILS.UINT32
#define MTTCAN0ILSL MTTCAN0.ILS.UINT16[L]
#define MTTCAN0ILSLL MTTCAN0.ILS.UINT8[LL]
#define MTTCAN0ILSLH MTTCAN0.ILS.UINT8[LH]
#define MTTCAN0ILSH MTTCAN0.ILS.UINT16[H]
#define MTTCAN0ILSHL MTTCAN0.ILS.UINT8[HL]
#define MTTCAN0ILSHH MTTCAN0.ILS.UINT8[HH]
#define MTTCAN0ILE MTTCAN0.ILE.UINT32
#define MTTCAN0ILEL MTTCAN0.ILE.UINT16[L]
#define MTTCAN0ILELL MTTCAN0.ILE.UINT8[LL]
#define MTTCAN0ILELH MTTCAN0.ILE.UINT8[LH]
#define MTTCAN0GFC MTTCAN0.GFC.UINT32
#define MTTCAN0GFCL MTTCAN0.GFC.UINT16[L]
#define MTTCAN0GFCLL MTTCAN0.GFC.UINT8[LL]
#define MTTCAN0GFCLH MTTCAN0.GFC.UINT8[LH]
#define MTTCAN0SIDFC MTTCAN0.SIDFC.UINT32
#define MTTCAN0SIDFCL MTTCAN0.SIDFC.UINT16[L]
#define MTTCAN0SIDFCLL MTTCAN0.SIDFC.UINT8[LL]
#define MTTCAN0SIDFCLH MTTCAN0.SIDFC.UINT8[LH]
#define MTTCAN0SIDFCH MTTCAN0.SIDFC.UINT16[H]
#define MTTCAN0SIDFCHL MTTCAN0.SIDFC.UINT8[HL]
#define MTTCAN0SIDFCHH MTTCAN0.SIDFC.UINT8[HH]
#define MTTCAN0XIDFC MTTCAN0.XIDFC.UINT32
#define MTTCAN0XIDFCL MTTCAN0.XIDFC.UINT16[L]
#define MTTCAN0XIDFCLL MTTCAN0.XIDFC.UINT8[LL]
#define MTTCAN0XIDFCLH MTTCAN0.XIDFC.UINT8[LH]
#define MTTCAN0XIDFCH MTTCAN0.XIDFC.UINT16[H]
#define MTTCAN0XIDFCHL MTTCAN0.XIDFC.UINT8[HL]
#define MTTCAN0XIDFCHH MTTCAN0.XIDFC.UINT8[HH]
#define MTTCAN0XIDAM MTTCAN0.XIDAM.UINT32
#define MTTCAN0XIDAML MTTCAN0.XIDAM.UINT16[L]
#define MTTCAN0XIDAMLL MTTCAN0.XIDAM.UINT8[LL]
#define MTTCAN0XIDAMLH MTTCAN0.XIDAM.UINT8[LH]
#define MTTCAN0XIDAMH MTTCAN0.XIDAM.UINT16[H]
#define MTTCAN0XIDAMHL MTTCAN0.XIDAM.UINT8[HL]
#define MTTCAN0XIDAMHH MTTCAN0.XIDAM.UINT8[HH]
#define MTTCAN0HPMS MTTCAN0.HPMS.UINT32
#define MTTCAN0HPMSL MTTCAN0.HPMS.UINT16[L]
#define MTTCAN0HPMSLL MTTCAN0.HPMS.UINT8[LL]
#define MTTCAN0HPMSLH MTTCAN0.HPMS.UINT8[LH]
#define MTTCAN0NDAT1 MTTCAN0.NDAT1.UINT32
#define MTTCAN0NDAT1L MTTCAN0.NDAT1.UINT16[L]
#define MTTCAN0NDAT1LL MTTCAN0.NDAT1.UINT8[LL]
#define MTTCAN0NDAT1LH MTTCAN0.NDAT1.UINT8[LH]
#define MTTCAN0NDAT1H MTTCAN0.NDAT1.UINT16[H]
#define MTTCAN0NDAT1HL MTTCAN0.NDAT1.UINT8[HL]
#define MTTCAN0NDAT1HH MTTCAN0.NDAT1.UINT8[HH]
#define MTTCAN0NDAT2 MTTCAN0.NDAT2.UINT32
#define MTTCAN0NDAT2L MTTCAN0.NDAT2.UINT16[L]
#define MTTCAN0NDAT2LL MTTCAN0.NDAT2.UINT8[LL]
#define MTTCAN0NDAT2LH MTTCAN0.NDAT2.UINT8[LH]
#define MTTCAN0NDAT2H MTTCAN0.NDAT2.UINT16[H]
#define MTTCAN0NDAT2HL MTTCAN0.NDAT2.UINT8[HL]
#define MTTCAN0NDAT2HH MTTCAN0.NDAT2.UINT8[HH]
#define MTTCAN0RXF0C MTTCAN0.RXF0C.UINT32
#define MTTCAN0RXF0CL MTTCAN0.RXF0C.UINT16[L]
#define MTTCAN0RXF0CLL MTTCAN0.RXF0C.UINT8[LL]
#define MTTCAN0RXF0CLH MTTCAN0.RXF0C.UINT8[LH]
#define MTTCAN0RXF0CH MTTCAN0.RXF0C.UINT16[H]
#define MTTCAN0RXF0CHL MTTCAN0.RXF0C.UINT8[HL]
#define MTTCAN0RXF0CHH MTTCAN0.RXF0C.UINT8[HH]
#define MTTCAN0RXF0S MTTCAN0.RXF0S.UINT32
#define MTTCAN0RXF0SL MTTCAN0.RXF0S.UINT16[L]
#define MTTCAN0RXF0SLL MTTCAN0.RXF0S.UINT8[LL]
#define MTTCAN0RXF0SLH MTTCAN0.RXF0S.UINT8[LH]
#define MTTCAN0RXF0SH MTTCAN0.RXF0S.UINT16[H]
#define MTTCAN0RXF0SHL MTTCAN0.RXF0S.UINT8[HL]
#define MTTCAN0RXF0SHH MTTCAN0.RXF0S.UINT8[HH]
#define MTTCAN0RXF0A MTTCAN0.RXF0A.UINT32
#define MTTCAN0RXF0AL MTTCAN0.RXF0A.UINT16[L]
#define MTTCAN0RXF0ALL MTTCAN0.RXF0A.UINT8[LL]
#define MTTCAN0RXF0ALH MTTCAN0.RXF0A.UINT8[LH]
#define MTTCAN0RXBC MTTCAN0.RXBC.UINT32
#define MTTCAN0RXBCL MTTCAN0.RXBC.UINT16[L]
#define MTTCAN0RXBCLL MTTCAN0.RXBC.UINT8[LL]
#define MTTCAN0RXBCLH MTTCAN0.RXBC.UINT8[LH]
#define MTTCAN0RXF1C MTTCAN0.RXF1C.UINT32
#define MTTCAN0RXF1CL MTTCAN0.RXF1C.UINT16[L]
#define MTTCAN0RXF1CLL MTTCAN0.RXF1C.UINT8[LL]
#define MTTCAN0RXF1CLH MTTCAN0.RXF1C.UINT8[LH]
#define MTTCAN0RXF1CH MTTCAN0.RXF1C.UINT16[H]
#define MTTCAN0RXF1CHL MTTCAN0.RXF1C.UINT8[HL]
#define MTTCAN0RXF1CHH MTTCAN0.RXF1C.UINT8[HH]
#define MTTCAN0RXF1S MTTCAN0.RXF1S.UINT32
#define MTTCAN0RXF1SL MTTCAN0.RXF1S.UINT16[L]
#define MTTCAN0RXF1SLL MTTCAN0.RXF1S.UINT8[LL]
#define MTTCAN0RXF1SLH MTTCAN0.RXF1S.UINT8[LH]
#define MTTCAN0RXF1SH MTTCAN0.RXF1S.UINT16[H]
#define MTTCAN0RXF1SHL MTTCAN0.RXF1S.UINT8[HL]
#define MTTCAN0RXF1SHH MTTCAN0.RXF1S.UINT8[HH]
#define MTTCAN0RXF1A MTTCAN0.RXF1A.UINT32
#define MTTCAN0RXF1AL MTTCAN0.RXF1A.UINT16[L]
#define MTTCAN0RXF1ALL MTTCAN0.RXF1A.UINT8[LL]
#define MTTCAN0RXF1ALH MTTCAN0.RXF1A.UINT8[LH]
#define MTTCAN0RXESC MTTCAN0.RXESC.UINT32
#define MTTCAN0RXESCL MTTCAN0.RXESC.UINT16[L]
#define MTTCAN0RXESCLL MTTCAN0.RXESC.UINT8[LL]
#define MTTCAN0RXESCLH MTTCAN0.RXESC.UINT8[LH]
#define MTTCAN0TXBC MTTCAN0.TXBC.UINT32
#define MTTCAN0TXBCL MTTCAN0.TXBC.UINT16[L]
#define MTTCAN0TXBCLL MTTCAN0.TXBC.UINT8[LL]
#define MTTCAN0TXBCLH MTTCAN0.TXBC.UINT8[LH]
#define MTTCAN0TXBCH MTTCAN0.TXBC.UINT16[H]
#define MTTCAN0TXBCHL MTTCAN0.TXBC.UINT8[HL]
#define MTTCAN0TXBCHH MTTCAN0.TXBC.UINT8[HH]
#define MTTCAN0TXFQS MTTCAN0.TXFQS.UINT32
#define MTTCAN0TXFQSL MTTCAN0.TXFQS.UINT16[L]
#define MTTCAN0TXFQSLL MTTCAN0.TXFQS.UINT8[LL]
#define MTTCAN0TXFQSLH MTTCAN0.TXFQS.UINT8[LH]
#define MTTCAN0TXFQSH MTTCAN0.TXFQS.UINT16[H]
#define MTTCAN0TXFQSHL MTTCAN0.TXFQS.UINT8[HL]
#define MTTCAN0TXFQSHH MTTCAN0.TXFQS.UINT8[HH]
#define MTTCAN0TXESC MTTCAN0.TXESC.UINT32
#define MTTCAN0TXESCL MTTCAN0.TXESC.UINT16[L]
#define MTTCAN0TXESCLL MTTCAN0.TXESC.UINT8[LL]
#define MTTCAN0TXESCLH MTTCAN0.TXESC.UINT8[LH]
#define MTTCAN0TXBRP MTTCAN0.TXBRP.UINT32
#define MTTCAN0TXBRPL MTTCAN0.TXBRP.UINT16[L]
#define MTTCAN0TXBRPLL MTTCAN0.TXBRP.UINT8[LL]
#define MTTCAN0TXBRPLH MTTCAN0.TXBRP.UINT8[LH]
#define MTTCAN0TXBRPH MTTCAN0.TXBRP.UINT16[H]
#define MTTCAN0TXBRPHL MTTCAN0.TXBRP.UINT8[HL]
#define MTTCAN0TXBRPHH MTTCAN0.TXBRP.UINT8[HH]
#define MTTCAN0TXBAR MTTCAN0.TXBAR.UINT32
#define MTTCAN0TXBARL MTTCAN0.TXBAR.UINT16[L]
#define MTTCAN0TXBARLL MTTCAN0.TXBAR.UINT8[LL]
#define MTTCAN0TXBARLH MTTCAN0.TXBAR.UINT8[LH]
#define MTTCAN0TXBARH MTTCAN0.TXBAR.UINT16[H]
#define MTTCAN0TXBARHL MTTCAN0.TXBAR.UINT8[HL]
#define MTTCAN0TXBARHH MTTCAN0.TXBAR.UINT8[HH]
#define MTTCAN0TXBCR MTTCAN0.TXBCR.UINT32
#define MTTCAN0TXBCRL MTTCAN0.TXBCR.UINT16[L]
#define MTTCAN0TXBCRLL MTTCAN0.TXBCR.UINT8[LL]
#define MTTCAN0TXBCRLH MTTCAN0.TXBCR.UINT8[LH]
#define MTTCAN0TXBCRH MTTCAN0.TXBCR.UINT16[H]
#define MTTCAN0TXBCRHL MTTCAN0.TXBCR.UINT8[HL]
#define MTTCAN0TXBCRHH MTTCAN0.TXBCR.UINT8[HH]
#define MTTCAN0TXBTO MTTCAN0.TXBTO.UINT32
#define MTTCAN0TXBTOL MTTCAN0.TXBTO.UINT16[L]
#define MTTCAN0TXBTOLL MTTCAN0.TXBTO.UINT8[LL]
#define MTTCAN0TXBTOLH MTTCAN0.TXBTO.UINT8[LH]
#define MTTCAN0TXBTOH MTTCAN0.TXBTO.UINT16[H]
#define MTTCAN0TXBTOHL MTTCAN0.TXBTO.UINT8[HL]
#define MTTCAN0TXBTOHH MTTCAN0.TXBTO.UINT8[HH]
#define MTTCAN0TXBCF MTTCAN0.TXBCF.UINT32
#define MTTCAN0TXBCFL MTTCAN0.TXBCF.UINT16[L]
#define MTTCAN0TXBCFLL MTTCAN0.TXBCF.UINT8[LL]
#define MTTCAN0TXBCFLH MTTCAN0.TXBCF.UINT8[LH]
#define MTTCAN0TXBCFH MTTCAN0.TXBCF.UINT16[H]
#define MTTCAN0TXBCFHL MTTCAN0.TXBCF.UINT8[HL]
#define MTTCAN0TXBCFHH MTTCAN0.TXBCF.UINT8[HH]
#define MTTCAN0TXBTIE MTTCAN0.TXBTIE.UINT32
#define MTTCAN0TXBTIEL MTTCAN0.TXBTIE.UINT16[L]
#define MTTCAN0TXBTIELL MTTCAN0.TXBTIE.UINT8[LL]
#define MTTCAN0TXBTIELH MTTCAN0.TXBTIE.UINT8[LH]
#define MTTCAN0TXBTIEH MTTCAN0.TXBTIE.UINT16[H]
#define MTTCAN0TXBTIEHL MTTCAN0.TXBTIE.UINT8[HL]
#define MTTCAN0TXBTIEHH MTTCAN0.TXBTIE.UINT8[HH]
#define MTTCAN0TXBCIE MTTCAN0.TXBCIE.UINT32
#define MTTCAN0TXBCIEL MTTCAN0.TXBCIE.UINT16[L]
#define MTTCAN0TXBCIELL MTTCAN0.TXBCIE.UINT8[LL]
#define MTTCAN0TXBCIELH MTTCAN0.TXBCIE.UINT8[LH]
#define MTTCAN0TXBCIEH MTTCAN0.TXBCIE.UINT16[H]
#define MTTCAN0TXBCIEHL MTTCAN0.TXBCIE.UINT8[HL]
#define MTTCAN0TXBCIEHH MTTCAN0.TXBCIE.UINT8[HH]
#define MTTCAN0TXEFC MTTCAN0.TXEFC.UINT32
#define MTTCAN0TXEFCL MTTCAN0.TXEFC.UINT16[L]
#define MTTCAN0TXEFCLL MTTCAN0.TXEFC.UINT8[LL]
#define MTTCAN0TXEFCLH MTTCAN0.TXEFC.UINT8[LH]
#define MTTCAN0TXEFCH MTTCAN0.TXEFC.UINT16[H]
#define MTTCAN0TXEFCHL MTTCAN0.TXEFC.UINT8[HL]
#define MTTCAN0TXEFCHH MTTCAN0.TXEFC.UINT8[HH]
#define MTTCAN0TXEFS MTTCAN0.TXEFS.UINT32
#define MTTCAN0TXEFSL MTTCAN0.TXEFS.UINT16[L]
#define MTTCAN0TXEFSLL MTTCAN0.TXEFS.UINT8[LL]
#define MTTCAN0TXEFSLH MTTCAN0.TXEFS.UINT8[LH]
#define MTTCAN0TXEFSH MTTCAN0.TXEFS.UINT16[H]
#define MTTCAN0TXEFSHL MTTCAN0.TXEFS.UINT8[HL]
#define MTTCAN0TXEFSHH MTTCAN0.TXEFS.UINT8[HH]
#define MTTCAN0TXEFA MTTCAN0.TXEFA.UINT32
#define MTTCAN0TXEFAL MTTCAN0.TXEFA.UINT16[L]
#define MTTCAN0TXEFALL MTTCAN0.TXEFA.UINT8[LL]
#define MTTCAN0TXEFALH MTTCAN0.TXEFA.UINT8[LH]
#define MTTCAN0TTTMC MTTCAN0.TTTMC.UINT32
#define MTTCAN0TTTMCL MTTCAN0.TTTMC.UINT16[L]
#define MTTCAN0TTTMCLL MTTCAN0.TTTMC.UINT8[LL]
#define MTTCAN0TTTMCLH MTTCAN0.TTTMC.UINT8[LH]
#define MTTCAN0TTTMCH MTTCAN0.TTTMC.UINT16[H]
#define MTTCAN0TTTMCHL MTTCAN0.TTTMC.UINT8[HL]
#define MTTCAN0TTTMCHH MTTCAN0.TTTMC.UINT8[HH]
#define MTTCAN0TTRMC MTTCAN0.TTRMC.UINT32
#define MTTCAN0TTRMCL MTTCAN0.TTRMC.UINT16[L]
#define MTTCAN0TTRMCLL MTTCAN0.TTRMC.UINT8[LL]
#define MTTCAN0TTRMCLH MTTCAN0.TTRMC.UINT8[LH]
#define MTTCAN0TTRMCH MTTCAN0.TTRMC.UINT16[H]
#define MTTCAN0TTRMCHL MTTCAN0.TTRMC.UINT8[HL]
#define MTTCAN0TTRMCHH MTTCAN0.TTRMC.UINT8[HH]
#define MTTCAN0TTOCF MTTCAN0.TTOCF.UINT32
#define MTTCAN0TTOCFL MTTCAN0.TTOCF.UINT16[L]
#define MTTCAN0TTOCFLL MTTCAN0.TTOCF.UINT8[LL]
#define MTTCAN0TTOCFLH MTTCAN0.TTOCF.UINT8[LH]
#define MTTCAN0TTOCFH MTTCAN0.TTOCF.UINT16[H]
#define MTTCAN0TTOCFHL MTTCAN0.TTOCF.UINT8[HL]
#define MTTCAN0TTOCFHH MTTCAN0.TTOCF.UINT8[HH]
#define MTTCAN0TTMLM MTTCAN0.TTMLM.UINT32
#define MTTCAN0TTMLML MTTCAN0.TTMLM.UINT16[L]
#define MTTCAN0TTMLMLL MTTCAN0.TTMLM.UINT8[LL]
#define MTTCAN0TTMLMLH MTTCAN0.TTMLM.UINT8[LH]
#define MTTCAN0TTMLMH MTTCAN0.TTMLM.UINT16[H]
#define MTTCAN0TTMLMHL MTTCAN0.TTMLM.UINT8[HL]
#define MTTCAN0TTMLMHH MTTCAN0.TTMLM.UINT8[HH]
#define MTTCAN0TURCF MTTCAN0.TURCF.UINT32
#define MTTCAN0TURCFL MTTCAN0.TURCF.UINT16[L]
#define MTTCAN0TURCFLL MTTCAN0.TURCF.UINT8[LL]
#define MTTCAN0TURCFLH MTTCAN0.TURCF.UINT8[LH]
#define MTTCAN0TURCFH MTTCAN0.TURCF.UINT16[H]
#define MTTCAN0TURCFHL MTTCAN0.TURCF.UINT8[HL]
#define MTTCAN0TURCFHH MTTCAN0.TURCF.UINT8[HH]
#define MTTCAN0TTOCN MTTCAN0.TTOCN.UINT32
#define MTTCAN0TTOCNL MTTCAN0.TTOCN.UINT16[L]
#define MTTCAN0TTOCNLL MTTCAN0.TTOCN.UINT8[LL]
#define MTTCAN0TTOCNLH MTTCAN0.TTOCN.UINT8[LH]
#define MTTCAN0TTGTP MTTCAN0.TTGTP.UINT32
#define MTTCAN0TTGTPL MTTCAN0.TTGTP.UINT16[L]
#define MTTCAN0TTGTPLL MTTCAN0.TTGTP.UINT8[LL]
#define MTTCAN0TTGTPLH MTTCAN0.TTGTP.UINT8[LH]
#define MTTCAN0TTGTPH MTTCAN0.TTGTP.UINT16[H]
#define MTTCAN0TTGTPHL MTTCAN0.TTGTP.UINT8[HL]
#define MTTCAN0TTGTPHH MTTCAN0.TTGTP.UINT8[HH]
#define MTTCAN0TTTMK MTTCAN0.TTTMK.UINT32
#define MTTCAN0TTTMKL MTTCAN0.TTTMK.UINT16[L]
#define MTTCAN0TTTMKLL MTTCAN0.TTTMK.UINT8[LL]
#define MTTCAN0TTTMKLH MTTCAN0.TTTMK.UINT8[LH]
#define MTTCAN0TTTMKH MTTCAN0.TTTMK.UINT16[H]
#define MTTCAN0TTTMKHL MTTCAN0.TTTMK.UINT8[HL]
#define MTTCAN0TTTMKHH MTTCAN0.TTTMK.UINT8[HH]
#define MTTCAN0TTIR MTTCAN0.TTIR.UINT32
#define MTTCAN0TTIRL MTTCAN0.TTIR.UINT16[L]
#define MTTCAN0TTIRLL MTTCAN0.TTIR.UINT8[LL]
#define MTTCAN0TTIRLH MTTCAN0.TTIR.UINT8[LH]
#define MTTCAN0TTIRH MTTCAN0.TTIR.UINT16[H]
#define MTTCAN0TTIRHL MTTCAN0.TTIR.UINT8[HL]
#define MTTCAN0TTIRHH MTTCAN0.TTIR.UINT8[HH]
#define MTTCAN0TTIE MTTCAN0.TTIE.UINT32
#define MTTCAN0TTIEL MTTCAN0.TTIE.UINT16[L]
#define MTTCAN0TTIELL MTTCAN0.TTIE.UINT8[LL]
#define MTTCAN0TTIELH MTTCAN0.TTIE.UINT8[LH]
#define MTTCAN0TTIEH MTTCAN0.TTIE.UINT16[H]
#define MTTCAN0TTIEHL MTTCAN0.TTIE.UINT8[HL]
#define MTTCAN0TTIEHH MTTCAN0.TTIE.UINT8[HH]
#define MTTCAN0TTILS MTTCAN0.TTILS.UINT32
#define MTTCAN0TTILSL MTTCAN0.TTILS.UINT16[L]
#define MTTCAN0TTILSLL MTTCAN0.TTILS.UINT8[LL]
#define MTTCAN0TTILSLH MTTCAN0.TTILS.UINT8[LH]
#define MTTCAN0TTILSH MTTCAN0.TTILS.UINT16[H]
#define MTTCAN0TTILSHL MTTCAN0.TTILS.UINT8[HL]
#define MTTCAN0TTILSHH MTTCAN0.TTILS.UINT8[HH]
#define MTTCAN0TTOST MTTCAN0.TTOST.UINT32
#define MTTCAN0TTOSTL MTTCAN0.TTOST.UINT16[L]
#define MTTCAN0TTOSTLL MTTCAN0.TTOST.UINT8[LL]
#define MTTCAN0TTOSTLH MTTCAN0.TTOST.UINT8[LH]
#define MTTCAN0TTOSTH MTTCAN0.TTOST.UINT16[H]
#define MTTCAN0TTOSTHL MTTCAN0.TTOST.UINT8[HL]
#define MTTCAN0TTOSTHH MTTCAN0.TTOST.UINT8[HH]
#define MTTCAN0TURNA MTTCAN0.TURNA.UINT32
#define MTTCAN0TURNAL MTTCAN0.TURNA.UINT16[L]
#define MTTCAN0TURNALL MTTCAN0.TURNA.UINT8[LL]
#define MTTCAN0TURNALH MTTCAN0.TURNA.UINT8[LH]
#define MTTCAN0TURNAH MTTCAN0.TURNA.UINT16[H]
#define MTTCAN0TURNAHL MTTCAN0.TURNA.UINT8[HL]
#define MTTCAN0TURNAHH MTTCAN0.TURNA.UINT8[HH]
#define MTTCAN0TTLGT MTTCAN0.TTLGT.UINT32
#define MTTCAN0TTLGTL MTTCAN0.TTLGT.UINT16[L]
#define MTTCAN0TTLGTLL MTTCAN0.TTLGT.UINT8[LL]
#define MTTCAN0TTLGTLH MTTCAN0.TTLGT.UINT8[LH]
#define MTTCAN0TTLGTH MTTCAN0.TTLGT.UINT16[H]
#define MTTCAN0TTLGTHL MTTCAN0.TTLGT.UINT8[HL]
#define MTTCAN0TTLGTHH MTTCAN0.TTLGT.UINT8[HH]
#define MTTCAN0TTCTC MTTCAN0.TTCTC.UINT32
#define MTTCAN0TTCTCL MTTCAN0.TTCTC.UINT16[L]
#define MTTCAN0TTCTCLL MTTCAN0.TTCTC.UINT8[LL]
#define MTTCAN0TTCTCLH MTTCAN0.TTCTC.UINT8[LH]
#define MTTCAN0TTCTCH MTTCAN0.TTCTC.UINT16[H]
#define MTTCAN0TTCTCHL MTTCAN0.TTCTC.UINT8[HL]
#define MTTCAN0TTCTCHH MTTCAN0.TTCTC.UINT8[HH]
#define MTTCAN0TTCPT MTTCAN0.TTCPT.UINT32
#define MTTCAN0TTCPTL MTTCAN0.TTCPT.UINT16[L]
#define MTTCAN0TTCPTLL MTTCAN0.TTCPT.UINT8[LL]
#define MTTCAN0TTCPTLH MTTCAN0.TTCPT.UINT8[LH]
#define MTTCAN0TTCPTH MTTCAN0.TTCPT.UINT16[H]
#define MTTCAN0TTCPTHL MTTCAN0.TTCPT.UINT8[HL]
#define MTTCAN0TTCPTHH MTTCAN0.TTCPT.UINT8[HH]
#define MTTCAN0TTCSM MTTCAN0.TTCSM.UINT32
#define MTTCAN0TTCSML MTTCAN0.TTCSM.UINT16[L]
#define MTTCAN0TTCSMLL MTTCAN0.TTCSM.UINT8[LL]
#define MTTCAN0TTCSMLH MTTCAN0.TTCSM.UINT8[LH]
#define MCAN1CREL MCAN1.CREL.UINT32
#define MCAN1CRELL MCAN1.CREL.UINT16[L]
#define MCAN1CRELLL MCAN1.CREL.UINT8[LL]
#define MCAN1CRELLH MCAN1.CREL.UINT8[LH]
#define MCAN1CRELH MCAN1.CREL.UINT16[H]
#define MCAN1CRELHL MCAN1.CREL.UINT8[HL]
#define MCAN1CRELHH MCAN1.CREL.UINT8[HH]
#define MCAN1ENDN MCAN1.ENDN.UINT32
#define MCAN1ENDNL MCAN1.ENDN.UINT16[L]
#define MCAN1ENDNLL MCAN1.ENDN.UINT8[LL]
#define MCAN1ENDNLH MCAN1.ENDN.UINT8[LH]
#define MCAN1ENDNH MCAN1.ENDN.UINT16[H]
#define MCAN1ENDNHL MCAN1.ENDN.UINT8[HL]
#define MCAN1ENDNHH MCAN1.ENDN.UINT8[HH]
#define MCAN1DBTP MCAN1.DBTP.UINT32
#define MCAN1FBTP MCAN1.DBTP.UINT32
#define MCAN1DBTPL MCAN1.DBTP.UINT16[L]
#define MCAN1FBTPL MCAN1.DBTP.UINT16[L]
#define MCAN1DBTPLL MCAN1.DBTP.UINT8[LL]
#define MCAN1FBTPLL MCAN1.DBTP.UINT8[LL]
#define MCAN1DBTPLH MCAN1.DBTP.UINT8[LH]
#define MCAN1FBTPLH MCAN1.DBTP.UINT8[LH]
#define MCAN1DBTPH MCAN1.DBTP.UINT16[H]
#define MCAN1FBTPH MCAN1.DBTP.UINT16[H]
#define MCAN1DBTPHL MCAN1.DBTP.UINT8[HL]
#define MCAN1FBTPHL MCAN1.DBTP.UINT8[HL]
#define MCAN1DBTPHH MCAN1.DBTP.UINT8[HH]
#define MCAN1FBTPHH MCAN1.DBTP.UINT8[HH]
#define MCAN1RWD MCAN1.RWD.UINT32
#define MCAN1RWDL MCAN1.RWD.UINT16[L]
#define MCAN1RWDLL MCAN1.RWD.UINT8[LL]
#define MCAN1RWDLH MCAN1.RWD.UINT8[LH]
#define MCAN1CCCR MCAN1.CCCR.UINT32
#define MCAN1CCCRL MCAN1.CCCR.UINT16[L]
#define MCAN1CCCRLL MCAN1.CCCR.UINT8[LL]
#define MCAN1CCCRLH MCAN1.CCCR.UINT8[LH]
#define MCAN1BTP MCAN1.BTP.UINT32
#define MCAN1NBTP MCAN1.BTP.UINT32
#define MCAN1BTPL MCAN1.BTP.UINT16[L]
#define MCAN1NBTPL MCAN1.BTP.UINT16[L]
#define MCAN1BTPLL MCAN1.BTP.UINT8[LL]
#define MCAN1NBTPLL MCAN1.BTP.UINT8[LL]
#define MCAN1BTPLH MCAN1.BTP.UINT8[LH]
#define MCAN1NBTPLH MCAN1.BTP.UINT8[LH]
#define MCAN1BTPH MCAN1.BTP.UINT16[H]
#define MCAN1NBTPH MCAN1.BTP.UINT16[H]
#define MCAN1BTPHL MCAN1.BTP.UINT8[HL]
#define MCAN1NBTPHL MCAN1.BTP.UINT8[HL]
#define MCAN1BTPHH MCAN1.BTP.UINT8[HH]
#define MCAN1NBTPHH MCAN1.BTP.UINT8[HH]
#define MCAN1TSCC MCAN1.TSCC.UINT32
#define MCAN1TSCCL MCAN1.TSCC.UINT16[L]
#define MCAN1TSCCLL MCAN1.TSCC.UINT8[LL]
#define MCAN1TSCCLH MCAN1.TSCC.UINT8[LH]
#define MCAN1TSCCH MCAN1.TSCC.UINT16[H]
#define MCAN1TSCCHL MCAN1.TSCC.UINT8[HL]
#define MCAN1TSCCHH MCAN1.TSCC.UINT8[HH]
#define MCAN1TSCV MCAN1.TSCV.UINT32
#define MCAN1TSCVL MCAN1.TSCV.UINT16[L]
#define MCAN1TSCVLL MCAN1.TSCV.UINT8[LL]
#define MCAN1TSCVLH MCAN1.TSCV.UINT8[LH]
#define MCAN1TOCC MCAN1.TOCC.UINT32
#define MCAN1TOCCL MCAN1.TOCC.UINT16[L]
#define MCAN1TOCCLL MCAN1.TOCC.UINT8[LL]
#define MCAN1TOCCLH MCAN1.TOCC.UINT8[LH]
#define MCAN1TOCCH MCAN1.TOCC.UINT16[H]
#define MCAN1TOCCHL MCAN1.TOCC.UINT8[HL]
#define MCAN1TOCCHH MCAN1.TOCC.UINT8[HH]
#define MCAN1TOCV MCAN1.TOCV.UINT32
#define MCAN1TOCVL MCAN1.TOCV.UINT16[L]
#define MCAN1TOCVLL MCAN1.TOCV.UINT8[LL]
#define MCAN1TOCVLH MCAN1.TOCV.UINT8[LH]
#define MCAN1ECR MCAN1.ECR.UINT32
#define MCAN1ECRL MCAN1.ECR.UINT16[L]
#define MCAN1ECRLL MCAN1.ECR.UINT8[LL]
#define MCAN1ECRLH MCAN1.ECR.UINT8[LH]
#define MCAN1ECRH MCAN1.ECR.UINT16[H]
#define MCAN1ECRHL MCAN1.ECR.UINT8[HL]
#define MCAN1ECRHH MCAN1.ECR.UINT8[HH]
#define MCAN1PSR MCAN1.PSR.UINT32
#define MCAN1PSRL MCAN1.PSR.UINT16[L]
#define MCAN1PSRLL MCAN1.PSR.UINT8[LL]
#define MCAN1PSRLH MCAN1.PSR.UINT8[LH]
#define MCAN1TDCR MCAN1.TDCR.UINT32
#define MCAN1TDCRL MCAN1.TDCR.UINT16[L]
#define MCAN1TDCRLL MCAN1.TDCR.UINT8[LL]
#define MCAN1TDCRLH MCAN1.TDCR.UINT8[LH]
#define MCAN1IR MCAN1.IR.UINT32
#define MCAN1IRL MCAN1.IR.UINT16[L]
#define MCAN1IRLL MCAN1.IR.UINT8[LL]
#define MCAN1IRLH MCAN1.IR.UINT8[LH]
#define MCAN1IRH MCAN1.IR.UINT16[H]
#define MCAN1IRHL MCAN1.IR.UINT8[HL]
#define MCAN1IRHH MCAN1.IR.UINT8[HH]
#define MCAN1IE MCAN1.IE.UINT32
#define MCAN1IEL MCAN1.IE.UINT16[L]
#define MCAN1IELL MCAN1.IE.UINT8[LL]
#define MCAN1IELH MCAN1.IE.UINT8[LH]
#define MCAN1IEH MCAN1.IE.UINT16[H]
#define MCAN1IEHL MCAN1.IE.UINT8[HL]
#define MCAN1IEHH MCAN1.IE.UINT8[HH]
#define MCAN1ILS MCAN1.ILS.UINT32
#define MCAN1ILSL MCAN1.ILS.UINT16[L]
#define MCAN1ILSLL MCAN1.ILS.UINT8[LL]
#define MCAN1ILSLH MCAN1.ILS.UINT8[LH]
#define MCAN1ILSH MCAN1.ILS.UINT16[H]
#define MCAN1ILSHL MCAN1.ILS.UINT8[HL]
#define MCAN1ILSHH MCAN1.ILS.UINT8[HH]
#define MCAN1ILE MCAN1.ILE.UINT32
#define MCAN1ILEL MCAN1.ILE.UINT16[L]
#define MCAN1ILELL MCAN1.ILE.UINT8[LL]
#define MCAN1ILELH MCAN1.ILE.UINT8[LH]
#define MCAN1GFC MCAN1.GFC.UINT32
#define MCAN1GFCL MCAN1.GFC.UINT16[L]
#define MCAN1GFCLL MCAN1.GFC.UINT8[LL]
#define MCAN1GFCLH MCAN1.GFC.UINT8[LH]
#define MCAN1SIDFC MCAN1.SIDFC.UINT32
#define MCAN1SIDFCL MCAN1.SIDFC.UINT16[L]
#define MCAN1SIDFCLL MCAN1.SIDFC.UINT8[LL]
#define MCAN1SIDFCLH MCAN1.SIDFC.UINT8[LH]
#define MCAN1SIDFCH MCAN1.SIDFC.UINT16[H]
#define MCAN1SIDFCHL MCAN1.SIDFC.UINT8[HL]
#define MCAN1SIDFCHH MCAN1.SIDFC.UINT8[HH]
#define MCAN1XIDFC MCAN1.XIDFC.UINT32
#define MCAN1XIDFCL MCAN1.XIDFC.UINT16[L]
#define MCAN1XIDFCLL MCAN1.XIDFC.UINT8[LL]
#define MCAN1XIDFCLH MCAN1.XIDFC.UINT8[LH]
#define MCAN1XIDFCH MCAN1.XIDFC.UINT16[H]
#define MCAN1XIDFCHL MCAN1.XIDFC.UINT8[HL]
#define MCAN1XIDFCHH MCAN1.XIDFC.UINT8[HH]
#define MCAN1XIDAM MCAN1.XIDAM.UINT32
#define MCAN1XIDAML MCAN1.XIDAM.UINT16[L]
#define MCAN1XIDAMLL MCAN1.XIDAM.UINT8[LL]
#define MCAN1XIDAMLH MCAN1.XIDAM.UINT8[LH]
#define MCAN1XIDAMH MCAN1.XIDAM.UINT16[H]
#define MCAN1XIDAMHL MCAN1.XIDAM.UINT8[HL]
#define MCAN1XIDAMHH MCAN1.XIDAM.UINT8[HH]
#define MCAN1HPMS MCAN1.HPMS.UINT32
#define MCAN1HPMSL MCAN1.HPMS.UINT16[L]
#define MCAN1HPMSLL MCAN1.HPMS.UINT8[LL]
#define MCAN1HPMSLH MCAN1.HPMS.UINT8[LH]
#define MCAN1NDAT1 MCAN1.NDAT1.UINT32
#define MCAN1NDAT1L MCAN1.NDAT1.UINT16[L]
#define MCAN1NDAT1LL MCAN1.NDAT1.UINT8[LL]
#define MCAN1NDAT1LH MCAN1.NDAT1.UINT8[LH]
#define MCAN1NDAT1H MCAN1.NDAT1.UINT16[H]
#define MCAN1NDAT1HL MCAN1.NDAT1.UINT8[HL]
#define MCAN1NDAT1HH MCAN1.NDAT1.UINT8[HH]
#define MCAN1NDAT2 MCAN1.NDAT2.UINT32
#define MCAN1NDAT2L MCAN1.NDAT2.UINT16[L]
#define MCAN1NDAT2LL MCAN1.NDAT2.UINT8[LL]
#define MCAN1NDAT2LH MCAN1.NDAT2.UINT8[LH]
#define MCAN1NDAT2H MCAN1.NDAT2.UINT16[H]
#define MCAN1NDAT2HL MCAN1.NDAT2.UINT8[HL]
#define MCAN1NDAT2HH MCAN1.NDAT2.UINT8[HH]
#define MCAN1RXF0C MCAN1.RXF0C.UINT32
#define MCAN1RXF0CL MCAN1.RXF0C.UINT16[L]
#define MCAN1RXF0CLL MCAN1.RXF0C.UINT8[LL]
#define MCAN1RXF0CLH MCAN1.RXF0C.UINT8[LH]
#define MCAN1RXF0CH MCAN1.RXF0C.UINT16[H]
#define MCAN1RXF0CHL MCAN1.RXF0C.UINT8[HL]
#define MCAN1RXF0CHH MCAN1.RXF0C.UINT8[HH]
#define MCAN1RXF0S MCAN1.RXF0S.UINT32
#define MCAN1RXF0SL MCAN1.RXF0S.UINT16[L]
#define MCAN1RXF0SLL MCAN1.RXF0S.UINT8[LL]
#define MCAN1RXF0SLH MCAN1.RXF0S.UINT8[LH]
#define MCAN1RXF0SH MCAN1.RXF0S.UINT16[H]
#define MCAN1RXF0SHL MCAN1.RXF0S.UINT8[HL]
#define MCAN1RXF0SHH MCAN1.RXF0S.UINT8[HH]
#define MCAN1RXF0A MCAN1.RXF0A.UINT32
#define MCAN1RXF0AL MCAN1.RXF0A.UINT16[L]
#define MCAN1RXF0ALL MCAN1.RXF0A.UINT8[LL]
#define MCAN1RXF0ALH MCAN1.RXF0A.UINT8[LH]
#define MCAN1RXBC MCAN1.RXBC.UINT32
#define MCAN1RXBCL MCAN1.RXBC.UINT16[L]
#define MCAN1RXBCLL MCAN1.RXBC.UINT8[LL]
#define MCAN1RXBCLH MCAN1.RXBC.UINT8[LH]
#define MCAN1RXF1C MCAN1.RXF1C.UINT32
#define MCAN1RXF1CL MCAN1.RXF1C.UINT16[L]
#define MCAN1RXF1CLL MCAN1.RXF1C.UINT8[LL]
#define MCAN1RXF1CLH MCAN1.RXF1C.UINT8[LH]
#define MCAN1RXF1CH MCAN1.RXF1C.UINT16[H]
#define MCAN1RXF1CHL MCAN1.RXF1C.UINT8[HL]
#define MCAN1RXF1CHH MCAN1.RXF1C.UINT8[HH]
#define MCAN1RXF1S MCAN1.RXF1S.UINT32
#define MCAN1RXF1SL MCAN1.RXF1S.UINT16[L]
#define MCAN1RXF1SLL MCAN1.RXF1S.UINT8[LL]
#define MCAN1RXF1SLH MCAN1.RXF1S.UINT8[LH]
#define MCAN1RXF1SH MCAN1.RXF1S.UINT16[H]
#define MCAN1RXF1SHL MCAN1.RXF1S.UINT8[HL]
#define MCAN1RXF1SHH MCAN1.RXF1S.UINT8[HH]
#define MCAN1RXF1A MCAN1.RXF1A.UINT32
#define MCAN1RXF1AL MCAN1.RXF1A.UINT16[L]
#define MCAN1RXF1ALL MCAN1.RXF1A.UINT8[LL]
#define MCAN1RXF1ALH MCAN1.RXF1A.UINT8[LH]
#define MCAN1RXESC MCAN1.RXESC.UINT32
#define MCAN1RXESCL MCAN1.RXESC.UINT16[L]
#define MCAN1RXESCLL MCAN1.RXESC.UINT8[LL]
#define MCAN1RXESCLH MCAN1.RXESC.UINT8[LH]
#define MCAN1TXBC MCAN1.TXBC.UINT32
#define MCAN1TXBCL MCAN1.TXBC.UINT16[L]
#define MCAN1TXBCLL MCAN1.TXBC.UINT8[LL]
#define MCAN1TXBCLH MCAN1.TXBC.UINT8[LH]
#define MCAN1TXBCH MCAN1.TXBC.UINT16[H]
#define MCAN1TXBCHL MCAN1.TXBC.UINT8[HL]
#define MCAN1TXBCHH MCAN1.TXBC.UINT8[HH]
#define MCAN1TXFQS MCAN1.TXFQS.UINT32
#define MCAN1TXFQSL MCAN1.TXFQS.UINT16[L]
#define MCAN1TXFQSLL MCAN1.TXFQS.UINT8[LL]
#define MCAN1TXFQSLH MCAN1.TXFQS.UINT8[LH]
#define MCAN1TXFQSH MCAN1.TXFQS.UINT16[H]
#define MCAN1TXFQSHL MCAN1.TXFQS.UINT8[HL]
#define MCAN1TXFQSHH MCAN1.TXFQS.UINT8[HH]
#define MCAN1TXESC MCAN1.TXESC.UINT32
#define MCAN1TXESCL MCAN1.TXESC.UINT16[L]
#define MCAN1TXESCLL MCAN1.TXESC.UINT8[LL]
#define MCAN1TXESCLH MCAN1.TXESC.UINT8[LH]
#define MCAN1TXBRP MCAN1.TXBRP.UINT32
#define MCAN1TXBRPL MCAN1.TXBRP.UINT16[L]
#define MCAN1TXBRPLL MCAN1.TXBRP.UINT8[LL]
#define MCAN1TXBRPLH MCAN1.TXBRP.UINT8[LH]
#define MCAN1TXBRPH MCAN1.TXBRP.UINT16[H]
#define MCAN1TXBRPHL MCAN1.TXBRP.UINT8[HL]
#define MCAN1TXBRPHH MCAN1.TXBRP.UINT8[HH]
#define MCAN1TXBAR MCAN1.TXBAR.UINT32
#define MCAN1TXBARL MCAN1.TXBAR.UINT16[L]
#define MCAN1TXBARLL MCAN1.TXBAR.UINT8[LL]
#define MCAN1TXBARLH MCAN1.TXBAR.UINT8[LH]
#define MCAN1TXBARH MCAN1.TXBAR.UINT16[H]
#define MCAN1TXBARHL MCAN1.TXBAR.UINT8[HL]
#define MCAN1TXBARHH MCAN1.TXBAR.UINT8[HH]
#define MCAN1TXBCR MCAN1.TXBCR.UINT32
#define MCAN1TXBCRL MCAN1.TXBCR.UINT16[L]
#define MCAN1TXBCRLL MCAN1.TXBCR.UINT8[LL]
#define MCAN1TXBCRLH MCAN1.TXBCR.UINT8[LH]
#define MCAN1TXBCRH MCAN1.TXBCR.UINT16[H]
#define MCAN1TXBCRHL MCAN1.TXBCR.UINT8[HL]
#define MCAN1TXBCRHH MCAN1.TXBCR.UINT8[HH]
#define MCAN1TXBTO MCAN1.TXBTO.UINT32
#define MCAN1TXBTOL MCAN1.TXBTO.UINT16[L]
#define MCAN1TXBTOLL MCAN1.TXBTO.UINT8[LL]
#define MCAN1TXBTOLH MCAN1.TXBTO.UINT8[LH]
#define MCAN1TXBTOH MCAN1.TXBTO.UINT16[H]
#define MCAN1TXBTOHL MCAN1.TXBTO.UINT8[HL]
#define MCAN1TXBTOHH MCAN1.TXBTO.UINT8[HH]
#define MCAN1TXBCF MCAN1.TXBCF.UINT32
#define MCAN1TXBCFL MCAN1.TXBCF.UINT16[L]
#define MCAN1TXBCFLL MCAN1.TXBCF.UINT8[LL]
#define MCAN1TXBCFLH MCAN1.TXBCF.UINT8[LH]
#define MCAN1TXBCFH MCAN1.TXBCF.UINT16[H]
#define MCAN1TXBCFHL MCAN1.TXBCF.UINT8[HL]
#define MCAN1TXBCFHH MCAN1.TXBCF.UINT8[HH]
#define MCAN1TXBTIE MCAN1.TXBTIE.UINT32
#define MCAN1TXBTIEL MCAN1.TXBTIE.UINT16[L]
#define MCAN1TXBTIELL MCAN1.TXBTIE.UINT8[LL]
#define MCAN1TXBTIELH MCAN1.TXBTIE.UINT8[LH]
#define MCAN1TXBTIEH MCAN1.TXBTIE.UINT16[H]
#define MCAN1TXBTIEHL MCAN1.TXBTIE.UINT8[HL]
#define MCAN1TXBTIEHH MCAN1.TXBTIE.UINT8[HH]
#define MCAN1TXBCIE MCAN1.TXBCIE.UINT32
#define MCAN1TXBCIEL MCAN1.TXBCIE.UINT16[L]
#define MCAN1TXBCIELL MCAN1.TXBCIE.UINT8[LL]
#define MCAN1TXBCIELH MCAN1.TXBCIE.UINT8[LH]
#define MCAN1TXBCIEH MCAN1.TXBCIE.UINT16[H]
#define MCAN1TXBCIEHL MCAN1.TXBCIE.UINT8[HL]
#define MCAN1TXBCIEHH MCAN1.TXBCIE.UINT8[HH]
#define MCAN1TXEFC MCAN1.TXEFC.UINT32
#define MCAN1TXEFCL MCAN1.TXEFC.UINT16[L]
#define MCAN1TXEFCLL MCAN1.TXEFC.UINT8[LL]
#define MCAN1TXEFCLH MCAN1.TXEFC.UINT8[LH]
#define MCAN1TXEFCH MCAN1.TXEFC.UINT16[H]
#define MCAN1TXEFCHL MCAN1.TXEFC.UINT8[HL]
#define MCAN1TXEFCHH MCAN1.TXEFC.UINT8[HH]
#define MCAN1TXEFS MCAN1.TXEFS.UINT32
#define MCAN1TXEFSL MCAN1.TXEFS.UINT16[L]
#define MCAN1TXEFSLL MCAN1.TXEFS.UINT8[LL]
#define MCAN1TXEFSLH MCAN1.TXEFS.UINT8[LH]
#define MCAN1TXEFSH MCAN1.TXEFS.UINT16[H]
#define MCAN1TXEFSHL MCAN1.TXEFS.UINT8[HL]
#define MCAN1TXEFSHH MCAN1.TXEFS.UINT8[HH]
#define MCAN1TXEFA MCAN1.TXEFA.UINT32
#define MCAN1TXEFAL MCAN1.TXEFA.UINT16[L]
#define MCAN1TXEFALL MCAN1.TXEFA.UINT8[LL]
#define MCAN1TXEFALH MCAN1.TXEFA.UINT8[LH]
#define DCRB0CIN DCRB0.CIN
#define DCRB0COUT DCRB0.COUT
#define DCRB0CTL DCRB0.CTL
#define DCRB2CIN DCRB2.CIN
#define DCRB2COUT DCRB2.COUT
#define DCRB2CTL DCRB2.CTL
#define ECMM0ESET ECMM0.ESET
#define ECMM0ECLR ECMM0.ECLR
#define ECMM0ESSTR0 ECMM0.ESSTR0
#define ECMM0ESSTR1 ECMM0.ESSTR1
#define ECMM0ESSTR2 ECMM0.ESSTR2
#define ECMM0PCMD0 ECMM0.PCMD0
#define ECMC0ESET ECMC0.ESET
#define ECMC0ECLR ECMC0.ECLR
#define ECMC0ESSTR0 ECMC0.ESSTR0
#define ECMC0ESSTR1 ECMC0.ESSTR1
#define ECMC0ESSTR2 ECMC0.ESSTR2
#define ECMC0PCMD0 ECMC0.PCMD0
#define ECM0EPCFG ECM0.EPCFG
#define ECM0MICFG0 ECM0.MICFG0
#define ECM0MICFG1 ECM0.MICFG1
#define ECM0MICFG2 ECM0.MICFG2
#define ECM0NMICFG0 ECM0.NMICFG0
#define ECM0NMICFG1 ECM0.NMICFG1
#define ECM0NMICFG2 ECM0.NMICFG2
#define ECM0IRCFG0 ECM0.IRCFG0
#define ECM0IRCFG1 ECM0.IRCFG1
#define ECM0IRCFG2 ECM0.IRCFG2
#define ECM0EMK0 ECM0.EMK0
#define ECM0EMK1 ECM0.EMK1
#define ECM0EMK2 ECM0.EMK2
#define ECM0ESSTC0 ECM0.ESSTC0
#define ECM0ESSTC1 ECM0.ESSTC1
#define ECM0ESSTC2 ECM0.ESSTC2
#define ECM0PCMD1 ECM0.PCMD1
#define ECM0PS ECM0.PS
#define ECM0PE0 ECM0.PE0
#define ECM0PE1 ECM0.PE1
#define ECM0PE2 ECM0.PE2
#define ECM0DTMCTL ECM0.DTMCTL
#define ECM0DTMR ECM0.DTMR
#define ECM0DTMCMP ECM0.DTMCMP
#define ECM0DTMCFG0 ECM0.DTMCFG0
#define ECM0DTMCFG1 ECM0.DTMCFG1
#define ECM0DTMCFG2 ECM0.DTMCFG2
#define ECM0DTMCFG3 ECM0.DTMCFG3
#define ECM0DTMCFG4 ECM0.DTMCFG4
#define ECM0DTMCFG5 ECM0.DTMCFG5
#define ECM0EOCCFG ECM0.EOCCFG
#define ECM0PEM ECM0.PEM
#define PIC2CTRGPREMUX0 PIC2C.TRGPREMUX0
#define PIC2CTRGPREMUX1 PIC2C.TRGPREMUX1
#define PIC2CTRGMUX0 PIC2C.TRGMUX0
#define PIC2CTRGMUX1 PIC2C.TRGMUX1
#define PIC2CEDGSEL0 PIC2C.EDGSEL0
#define PIC2CEDGSEL1 PIC2C.EDGSEL1
#define PIC2CENP2TIM0 PIC2C.ENP2TIM0
#define PIC2CENP2TIM1 PIC2C.ENP2TIM1
#define PIC2CENHIZDTM PIC2C.ENHIZDTM
#define CSIH0CTL0 CSIH0.CTL0.UINT8
#define CSIH0MBS CSIH0.CTL0.MBS
#define CSIH0JOBE CSIH0.CTL0.JOBE
#define CSIH0RXE CSIH0.CTL0.RXE
#define CSIH0TXE CSIH0.CTL0.TXE
#define CSIH0PWR CSIH0.CTL0.PWR
#define CSIH0CTL1 CSIH0.CTL1
#define CSIH0CTL2 CSIH0.CTL2
#define CSIH0MCTL1 CSIH0.MCTL1
#define CSIH0MCTL2 CSIH0.MCTL2
#define CSIH0TX0W CSIH0.TX0W
#define CSIH0TX0H CSIH0.TX0H
#define CSIH0RX0W CSIH0.RX0W
#define CSIH0RX0H CSIH0.RX0H
#define CSIH0MRWP0 CSIH0.MRWP0
#define CSIH0STR0 CSIH0.STR0
#define CSIH0STCR0 CSIH0.STCR0
#define CSIH0MCTL0 CSIH0.MCTL0
#define CSIH0CFG0 CSIH0.CFG0
#define CSIH0CFG1 CSIH0.CFG1
#define CSIH0CFG2 CSIH0.CFG2
#define CSIH0CFG3 CSIH0.CFG3
#define CSIH0CFG4 CSIH0.CFG4
#define CSIH0CFG5 CSIH0.CFG5
#define CSIH0CFG6 CSIH0.CFG6
#define CSIH0CFG7 CSIH0.CFG7
#define CSIH0BRS0 CSIH0.BRS0
#define CSIH0BRS1 CSIH0.BRS1
#define CSIH0BRS2 CSIH0.BRS2
#define CSIH0BRS3 CSIH0.BRS3
#define PMMA0CTL PMMA0.CTL
#define PMMA0TCTL0 PMMA0.TCTL0
#define PMMA0TCTL1 PMMA0.TCTL1
#define PMMA0TCTL2 PMMA0.TCTL2
#define PMMA0TCTL3 PMMA0.TCTL3
#define PMMA0TCTL4 PMMA0.TCTL4
#define PMMA0TCTL5 PMMA0.TCTL5
#define PMMA0TCTL6 PMMA0.TCTL6
#define PMMA0TCTL7 PMMA0.TCTL7
#define PMMA0TTX0 PMMA0.TTX0
#define PMMA0TTX1 PMMA0.TTX1
#define PMMA0TTX2 PMMA0.TTX2
#define PMMA0TTX3 PMMA0.TTX3
#define PMMA0TTX4 PMMA0.TTX4
#define PMMA0TTX5 PMMA0.TTX5
#define PMMA0TTX6 PMMA0.TTX6
#define PMMA0TTX7 PMMA0.TTX7
#define PMMA0RX PMMA0.RX
#define PMMA0TCNT0 PMMA0.TCNT0
#define PMMA0TCNT1 PMMA0.TCNT1
#define PMMA0TCNT2 PMMA0.TCNT2
#define PMMA0TCNT3 PMMA0.TCNT3
#define PMMA0TCNT4 PMMA0.TCNT4
#define PMMA0TCNT5 PMMA0.TCNT5
#define PMMA0TCNT6 PMMA0.TCNT6
#define PMMA0TCNT7 PMMA0.TCNT7
#define PMMA0STR0 PMMA0.STR0
#define PMMA0STR1 PMMA0.STR1
#define PMMA0STC PMMA0.STC
#define CSIH2CTL0 CSIH2.CTL0.UINT8
#define CSIH2MBS CSIH2.CTL0.MBS
#define CSIH2JOBE CSIH2.CTL0.JOBE
#define CSIH2RXE CSIH2.CTL0.RXE
#define CSIH2TXE CSIH2.CTL0.TXE
#define CSIH2PWR CSIH2.CTL0.PWR
#define CSIH2CTL1 CSIH2.CTL1
#define CSIH2CTL2 CSIH2.CTL2
#define CSIH2MCTL1 CSIH2.MCTL1
#define CSIH2MCTL2 CSIH2.MCTL2
#define CSIH2TX0W CSIH2.TX0W
#define CSIH2TX0H CSIH2.TX0H
#define CSIH2RX0W CSIH2.RX0W
#define CSIH2RX0H CSIH2.RX0H
#define CSIH2MRWP0 CSIH2.MRWP0
#define CSIH2STR0 CSIH2.STR0
#define CSIH2STCR0 CSIH2.STCR0
#define CSIH2MCTL0 CSIH2.MCTL0
#define CSIH2CFG0 CSIH2.CFG0
#define CSIH2CFG1 CSIH2.CFG1
#define CSIH2CFG2 CSIH2.CFG2
#define CSIH2CFG3 CSIH2.CFG3
#define CSIH2CFG4 CSIH2.CFG4
#define CSIH2CFG5 CSIH2.CFG5
#define CSIH2CFG6 CSIH2.CFG6
#define CSIH2CFG7 CSIH2.CFG7
#define CSIH2BRS0 CSIH2.BRS0
#define CSIH2BRS1 CSIH2.BRS1
#define CSIH2BRS2 CSIH2.BRS2
#define CSIH2BRS3 CSIH2.BRS3
#define PMMA2CTL PMMA2.CTL
#define PMMA2TCTL0 PMMA2.TCTL0
#define PMMA2TCTL1 PMMA2.TCTL1
#define PMMA2TCTL2 PMMA2.TCTL2
#define PMMA2TCTL3 PMMA2.TCTL3
#define PMMA2TCTL4 PMMA2.TCTL4
#define PMMA2TCTL5 PMMA2.TCTL5
#define PMMA2TCTL6 PMMA2.TCTL6
#define PMMA2TCTL7 PMMA2.TCTL7
#define PMMA2TTX0 PMMA2.TTX0
#define PMMA2TTX1 PMMA2.TTX1
#define PMMA2TTX2 PMMA2.TTX2
#define PMMA2TTX3 PMMA2.TTX3
#define PMMA2TTX4 PMMA2.TTX4
#define PMMA2TTX5 PMMA2.TTX5
#define PMMA2TTX6 PMMA2.TTX6
#define PMMA2TTX7 PMMA2.TTX7
#define PMMA2RX PMMA2.RX
#define PMMA2TCNT0 PMMA2.TCNT0
#define PMMA2TCNT1 PMMA2.TCNT1
#define PMMA2TCNT2 PMMA2.TCNT2
#define PMMA2TCNT3 PMMA2.TCNT3
#define PMMA2TCNT4 PMMA2.TCNT4
#define PMMA2TCNT5 PMMA2.TCNT5
#define PMMA2TCNT6 PMMA2.TCNT6
#define PMMA2TCNT7 PMMA2.TCNT7
#define PMMA2STR0 PMMA2.STR0
#define PMMA2STR1 PMMA2.STR1
#define PMMA2STC PMMA2.STC
#define HSUS0CKEN HSUS0.CKEN
#define HSUS0SRST HSUS0.SRST
#define HSUS0EN HSUS0.EN
#define HSUS0MD HSUS0.MD
#define HSUS0CTL HSUS0.CTL
#define HSUS0TDIV HSUS0.TDIV
#define HSUS0TSAR HSUS0.TSAR
#define HSUS0TPFM HSUS0.TPFM
#define HSUS0RDAR HSUS0.RDAR
#define HSUS0RPFM HSUS0.RPFM
#define HSUS0RGFM HSUS0.RGFM
#define HSUS0IREN HSUS0.IREN
#define HSUS0IRST HSUS0.IRST
#define HSUS0IRCL HSUS0.IRCL.UINT32
#define HSUS0IRCLL HSUS0.IRCL.UINT16[L]
#define HSUS0IRCLLL HSUS0.IRCL.UINT8[LL]
#define HSUS0CST HSUS0.CST
#define HSUS0CTFM HSUS0.CTFM
#define HSUS0CRFM HSUS0.CRFM
#define RLN30LWBR RLN30.LWBR
#define RLN30LBRP01 RLN30.LBRP01.UINT16
#define RLN30LBRP0 RLN30.LBRP01.UINT8[L]
#define RLN30LBRP1 RLN30.LBRP01.UINT8[H]
#define RLN30LSTC RLN30.LSTC
#define RLN30LMD RLN30.LMD
#define RLN30LBFC RLN30.LBFC
#define RLN30LSC RLN30.LSC
#define RLN30LWUP RLN30.LWUP
#define RLN30LIE RLN30.LIE
#define RLN30LEDE RLN30.LEDE
#define RLN30LCUC RLN30.LCUC
#define RLN30LTRC RLN30.LTRC
#define RLN30LMST RLN30.LMST
#define RLN30LST RLN30.LST
#define RLN30LEST RLN30.LEST
#define RLN30LDFC RLN30.LDFC
#define RLN30LIDB RLN30.LIDB
#define RLN30LCBR RLN30.LCBR
#define RLN30LUDB0 RLN30.LUDB0
#define RLN30LDBR1 RLN30.LDBR1
#define RLN30LDBR2 RLN30.LDBR2
#define RLN30LDBR3 RLN30.LDBR3
#define RLN30LDBR4 RLN30.LDBR4
#define RLN30LDBR5 RLN30.LDBR5
#define RLN30LDBR6 RLN30.LDBR6
#define RLN30LDBR7 RLN30.LDBR7
#define RLN30LDBR8 RLN30.LDBR8
#define RLN30LUOER RLN30.LUOER
#define RLN30LUOR1 RLN30.LUOR1
#define RLN30LUTDR RLN30.LUTDR.UINT16
#define RLN30LUTDRL RLN30.LUTDR.UINT8[L]
#define RLN30LUTDRH RLN30.LUTDR.UINT8[H]
#define RLN30LURDR RLN30.LURDR.UINT16
#define RLN30LURDRL RLN30.LURDR.UINT8[L]
#define RLN30LURDRH RLN30.LURDR.UINT8[H]
#define RLN30LUWTDR RLN30.LUWTDR.UINT16
#define RLN30LUWTDRL RLN30.LUWTDR.UINT8[L]
#define RLN30LUWTDRH RLN30.LUWTDR.UINT8[H]
#define STM0CKSEL STM0.CKSEL.UINT32
#define STM0CKSELLL STM0.CKSEL.UINT8[LL]
#define STM0TS STM0.TS.UINT32
#define STM0TSLL STM0.TS.UINT8[LL]
#define STM0TT STM0.TT.UINT32
#define STM0TTLL STM0.TT.UINT8[LL]
#define STM0CSTR STM0.CSTR.UINT32
#define STM0CSTRLL STM0.CSTR.UINT8[LL]
#define STM0STR STM0.STR
#define STM0STC STM0.STC
#define STM0IS STM0.IS.UINT32
#define STM0ISLL STM0.IS.UINT8[LL]
#define STM0ISLH STM0.IS.UINT8[LH]
#define STM0RM STM0.RM.UINT32
#define STM0RMLL STM0.RM.UINT8[LL]
#define STM0CNT0L STM0.CNT0L
#define STM0CNT0H STM0.CNT0H
#define STM0CMP0AL STM0.CMP0AL
#define STM0CMP0AH STM0.CMP0AH
#define STM0CMP0BL STM0.CMP0BL
#define STM0CMP0BH STM0.CMP0BH
#define STM0CMP0CL STM0.CMP0CL
#define STM0CMP0CH STM0.CMP0CH
#define STM0CMP0DL STM0.CMP0DL
#define STM0CMP0DH STM0.CMP0DH
#define STM0CNT1 STM0.CNT1
#define STM0CMP1A STM0.CMP1A
#define STM0CMP1B STM0.CMP1B
#define STM0CMP1C STM0.CMP1C
#define STM0CMP1D STM0.CMP1D
#define STM0CNT2 STM0.CNT2
#define STM0CMP2A STM0.CMP2A
#define STM0CMP2B STM0.CMP2B
#define STM0CMP2C STM0.CMP2C
#define STM0CMP2D STM0.CMP2D
#define STM0CNT3 STM0.CNT3
#define STM0CMP3A STM0.CMP3A
#define STM0CMP3B STM0.CMP3B
#define STM0CMP3C STM0.CMP3C
#define STM0CMP3D STM0.CMP3D
#define FSGD2APROT00 FSGD2A.PROT00.UINT32
#define FSGD2APROT00L FSGD2A.PROT00.UINT16[L]
#define FSGD2APROT00LL FSGD2A.PROT00.UINT8[LL]
#define FSGD2APROT00LH FSGD2A.PROT00.UINT8[LH]
#define FSGD2APROT00H FSGD2A.PROT00.UINT16[H]
#define FSGD2APROT00HL FSGD2A.PROT00.UINT8[HL]
#define FSGD2APROT00HH FSGD2A.PROT00.UINT8[HH]
#define FSGD2ASPID00 FSGD2A.SPID00.UINT32
#define FSGD2ASPID00L FSGD2A.SPID00.UINT16[L]
#define FSGD2ASPID00LL FSGD2A.SPID00.UINT8[LL]
#define FSGD2ASPID00LH FSGD2A.SPID00.UINT8[LH]
#define FSGD2ASPID00H FSGD2A.SPID00.UINT16[H]
#define FSGD2ASPID00HL FSGD2A.SPID00.UINT8[HL]
#define FSGD2ASPID00HH FSGD2A.SPID00.UINT8[HH]
#define FSGD2APROT01 FSGD2A.PROT01.UINT32
#define FSGD2APROT01L FSGD2A.PROT01.UINT16[L]
#define FSGD2APROT01LL FSGD2A.PROT01.UINT8[LL]
#define FSGD2APROT01LH FSGD2A.PROT01.UINT8[LH]
#define FSGD2APROT01H FSGD2A.PROT01.UINT16[H]
#define FSGD2APROT01HL FSGD2A.PROT01.UINT8[HL]
#define FSGD2APROT01HH FSGD2A.PROT01.UINT8[HH]
#define FSGD2ASPID01 FSGD2A.SPID01.UINT32
#define FSGD2ASPID01L FSGD2A.SPID01.UINT16[L]
#define FSGD2ASPID01LL FSGD2A.SPID01.UINT8[LL]
#define FSGD2ASPID01LH FSGD2A.SPID01.UINT8[LH]
#define FSGD2ASPID01H FSGD2A.SPID01.UINT16[H]
#define FSGD2ASPID01HL FSGD2A.SPID01.UINT8[HL]
#define FSGD2ASPID01HH FSGD2A.SPID01.UINT8[HH]
#define FSGD2APROT02 FSGD2A.PROT02.UINT32
#define FSGD2APROT02L FSGD2A.PROT02.UINT16[L]
#define FSGD2APROT02LL FSGD2A.PROT02.UINT8[LL]
#define FSGD2APROT02LH FSGD2A.PROT02.UINT8[LH]
#define FSGD2APROT02H FSGD2A.PROT02.UINT16[H]
#define FSGD2APROT02HL FSGD2A.PROT02.UINT8[HL]
#define FSGD2APROT02HH FSGD2A.PROT02.UINT8[HH]
#define FSGD2ASPID02 FSGD2A.SPID02.UINT32
#define FSGD2ASPID02L FSGD2A.SPID02.UINT16[L]
#define FSGD2ASPID02LL FSGD2A.SPID02.UINT8[LL]
#define FSGD2ASPID02LH FSGD2A.SPID02.UINT8[LH]
#define FSGD2ASPID02H FSGD2A.SPID02.UINT16[H]
#define FSGD2ASPID02HL FSGD2A.SPID02.UINT8[HL]
#define FSGD2ASPID02HH FSGD2A.SPID02.UINT8[HH]
#define FSGD2APROT03 FSGD2A.PROT03.UINT32
#define FSGD2APROT03L FSGD2A.PROT03.UINT16[L]
#define FSGD2APROT03LL FSGD2A.PROT03.UINT8[LL]
#define FSGD2APROT03LH FSGD2A.PROT03.UINT8[LH]
#define FSGD2APROT03H FSGD2A.PROT03.UINT16[H]
#define FSGD2APROT03HL FSGD2A.PROT03.UINT8[HL]
#define FSGD2APROT03HH FSGD2A.PROT03.UINT8[HH]
#define FSGD2ASPID03 FSGD2A.SPID03.UINT32
#define FSGD2ASPID03L FSGD2A.SPID03.UINT16[L]
#define FSGD2ASPID03LL FSGD2A.SPID03.UINT8[LL]
#define FSGD2ASPID03LH FSGD2A.SPID03.UINT8[LH]
#define FSGD2ASPID03H FSGD2A.SPID03.UINT16[H]
#define FSGD2ASPID03HL FSGD2A.SPID03.UINT8[HL]
#define FSGD2ASPID03HH FSGD2A.SPID03.UINT8[HH]
#define FSGD2APROT04 FSGD2A.PROT04.UINT32
#define FSGD2APROT04L FSGD2A.PROT04.UINT16[L]
#define FSGD2APROT04LL FSGD2A.PROT04.UINT8[LL]
#define FSGD2APROT04LH FSGD2A.PROT04.UINT8[LH]
#define FSGD2APROT04H FSGD2A.PROT04.UINT16[H]
#define FSGD2APROT04HL FSGD2A.PROT04.UINT8[HL]
#define FSGD2APROT04HH FSGD2A.PROT04.UINT8[HH]
#define FSGD2ASPID04 FSGD2A.SPID04.UINT32
#define FSGD2ASPID04L FSGD2A.SPID04.UINT16[L]
#define FSGD2ASPID04LL FSGD2A.SPID04.UINT8[LL]
#define FSGD2ASPID04LH FSGD2A.SPID04.UINT8[LH]
#define FSGD2ASPID04H FSGD2A.SPID04.UINT16[H]
#define FSGD2ASPID04HL FSGD2A.SPID04.UINT8[HL]
#define FSGD2ASPID04HH FSGD2A.SPID04.UINT8[HH]
#define FSGD2APROT05 FSGD2A.PROT05.UINT32
#define FSGD2APROT05L FSGD2A.PROT05.UINT16[L]
#define FSGD2APROT05LL FSGD2A.PROT05.UINT8[LL]
#define FSGD2APROT05LH FSGD2A.PROT05.UINT8[LH]
#define FSGD2APROT05H FSGD2A.PROT05.UINT16[H]
#define FSGD2APROT05HL FSGD2A.PROT05.UINT8[HL]
#define FSGD2APROT05HH FSGD2A.PROT05.UINT8[HH]
#define FSGD2ASPID05 FSGD2A.SPID05.UINT32
#define FSGD2ASPID05L FSGD2A.SPID05.UINT16[L]
#define FSGD2ASPID05LL FSGD2A.SPID05.UINT8[LL]
#define FSGD2ASPID05LH FSGD2A.SPID05.UINT8[LH]
#define FSGD2ASPID05H FSGD2A.SPID05.UINT16[H]
#define FSGD2ASPID05HL FSGD2A.SPID05.UINT8[HL]
#define FSGD2ASPID05HH FSGD2A.SPID05.UINT8[HH]
#define FSGD2APROT06 FSGD2A.PROT06.UINT32
#define FSGD2APROT06L FSGD2A.PROT06.UINT16[L]
#define FSGD2APROT06LL FSGD2A.PROT06.UINT8[LL]
#define FSGD2APROT06LH FSGD2A.PROT06.UINT8[LH]
#define FSGD2APROT06H FSGD2A.PROT06.UINT16[H]
#define FSGD2APROT06HL FSGD2A.PROT06.UINT8[HL]
#define FSGD2APROT06HH FSGD2A.PROT06.UINT8[HH]
#define FSGD2ASPID06 FSGD2A.SPID06.UINT32
#define FSGD2ASPID06L FSGD2A.SPID06.UINT16[L]
#define FSGD2ASPID06LL FSGD2A.SPID06.UINT8[LL]
#define FSGD2ASPID06LH FSGD2A.SPID06.UINT8[LH]
#define FSGD2ASPID06H FSGD2A.SPID06.UINT16[H]
#define FSGD2ASPID06HL FSGD2A.SPID06.UINT8[HL]
#define FSGD2ASPID06HH FSGD2A.SPID06.UINT8[HH]
#define FSGD2APROT07 FSGD2A.PROT07.UINT32
#define FSGD2APROT07L FSGD2A.PROT07.UINT16[L]
#define FSGD2APROT07LL FSGD2A.PROT07.UINT8[LL]
#define FSGD2APROT07LH FSGD2A.PROT07.UINT8[LH]
#define FSGD2APROT07H FSGD2A.PROT07.UINT16[H]
#define FSGD2APROT07HL FSGD2A.PROT07.UINT8[HL]
#define FSGD2APROT07HH FSGD2A.PROT07.UINT8[HH]
#define FSGD2ASPID07 FSGD2A.SPID07.UINT32
#define FSGD2ASPID07L FSGD2A.SPID07.UINT16[L]
#define FSGD2ASPID07LL FSGD2A.SPID07.UINT8[LL]
#define FSGD2ASPID07LH FSGD2A.SPID07.UINT8[LH]
#define FSGD2ASPID07H FSGD2A.SPID07.UINT16[H]
#define FSGD2ASPID07HL FSGD2A.SPID07.UINT8[HL]
#define FSGD2ASPID07HH FSGD2A.SPID07.UINT8[HH]
#define FSGD2APROT10 FSGD2A.PROT10.UINT32
#define FSGD2APROT10L FSGD2A.PROT10.UINT16[L]
#define FSGD2APROT10LL FSGD2A.PROT10.UINT8[LL]
#define FSGD2APROT10LH FSGD2A.PROT10.UINT8[LH]
#define FSGD2APROT10H FSGD2A.PROT10.UINT16[H]
#define FSGD2APROT10HL FSGD2A.PROT10.UINT8[HL]
#define FSGD2APROT10HH FSGD2A.PROT10.UINT8[HH]
#define FSGD2ASPID10 FSGD2A.SPID10.UINT32
#define FSGD2ASPID10L FSGD2A.SPID10.UINT16[L]
#define FSGD2ASPID10LL FSGD2A.SPID10.UINT8[LL]
#define FSGD2ASPID10LH FSGD2A.SPID10.UINT8[LH]
#define FSGD2ASPID10H FSGD2A.SPID10.UINT16[H]
#define FSGD2ASPID10HL FSGD2A.SPID10.UINT8[HL]
#define FSGD2ASPID10HH FSGD2A.SPID10.UINT8[HH]
#define FSGD2APROT11 FSGD2A.PROT11.UINT32
#define FSGD2APROT11L FSGD2A.PROT11.UINT16[L]
#define FSGD2APROT11LL FSGD2A.PROT11.UINT8[LL]
#define FSGD2APROT11LH FSGD2A.PROT11.UINT8[LH]
#define FSGD2APROT11H FSGD2A.PROT11.UINT16[H]
#define FSGD2APROT11HL FSGD2A.PROT11.UINT8[HL]
#define FSGD2APROT11HH FSGD2A.PROT11.UINT8[HH]
#define FSGD2ASPID11 FSGD2A.SPID11.UINT32
#define FSGD2ASPID11L FSGD2A.SPID11.UINT16[L]
#define FSGD2ASPID11LL FSGD2A.SPID11.UINT8[LL]
#define FSGD2ASPID11LH FSGD2A.SPID11.UINT8[LH]
#define FSGD2ASPID11H FSGD2A.SPID11.UINT16[H]
#define FSGD2ASPID11HL FSGD2A.SPID11.UINT8[HL]
#define FSGD2ASPID11HH FSGD2A.SPID11.UINT8[HH]
#define ERRSLV2CTL ERRSLV2.CTL
#define ERRSLV2STAT ERRSLV2.STAT
#define ERRSLV2TYPE ERRSLV2.TYPE
#define ERRSLV2AICTL ERRSLV2AI.CTL
#define ERRSLV2AISTAT ERRSLV2AI.STAT
#define ERRSLV2AITYPE ERRSLV2AI.TYPE
#define GTM0GTMREV GTM0.GTMREV
#define GTM0GTMRST GTM0.GTMRST
#define GTM0GTMCTRL GTM0.GTMCTRL
#define GTM0GTMAEIADDRXPT GTM0.GTMAEIADDRXPT
#define GTM0GTMIRQNOTIFY GTM0.GTMIRQNOTIFY
#define GTM0GTMIRQEN GTM0.GTMIRQEN
#define GTM0GTMIRQFORCINT GTM0.GTMIRQFORCINT
#define GTM0GTMIRQMODE GTM0.GTMIRQMODE
#define GTM0GTMEIRQEN GTM0.GTMEIRQEN
#define GTM0GTMHWCONF GTM0.GTMHWCONF
#define GTM0GTMBRIDGEMODE GTM0.GTMBRIDGEMODE
#define GTM0GTMBRIDGEPTR1 GTM0.GTMBRIDGEPTR1
#define GTM0GTMBRIDGEPTR2 GTM0.GTMBRIDGEPTR2
#define GTM0GTMTIM0AUXINSRC GTM0.GTMTIM0AUXINSRC
#define GTM0GTMTIM1AUXINSRC GTM0.GTMTIM1AUXINSRC
#define GTM0GTMEXTCAPEN0 GTM0.GTMEXTCAPEN0
#define GTM0GTMATOM0OUT GTM0.GTMATOM0OUT
#define GTM0TBUCHEN GTM0.TBUCHEN
#define GTM0TBU0CTRL GTM0.TBU0CTRL
#define GTM0TBU0BASE GTM0.TBU0BASE
#define GTM0TBU1CTRL GTM0.TBU1CTRL
#define GTM0TBU1BASE GTM0.TBU1BASE
#define GTM0MONSTATUS GTM0.MONSTATUS
#define GTM0MONACTIVITY0 GTM0.MONACTIVITY0
#define GTM0MONACTIVITYMCS0 GTM0.MONACTIVITYMCS0
#define GTM0CMPEN GTM0.CMPEN
#define GTM0CMPIRQNOTIFY GTM0.CMPIRQNOTIFY
#define GTM0CMPIRQEN GTM0.CMPIRQEN
#define GTM0CMPIRQFORCINT GTM0.CMPIRQFORCINT
#define GTM0CMPIRQMODE GTM0.CMPIRQMODE
#define GTM0CMPEIRQEN GTM0.CMPEIRQEN
#define GTM0ARUACCESS GTM0.ARUACCESS
#define GTM0ARUDATAH GTM0.ARUDATAH
#define GTM0ARUDATAL GTM0.ARUDATAL
#define GTM0ARUDBGACCESS0 GTM0.ARUDBGACCESS0
#define GTM0ARUDBGDATA0H GTM0.ARUDBGDATA0H
#define GTM0ARUDBGDATA0L GTM0.ARUDBGDATA0L
#define GTM0ARUDBGACCESS1 GTM0.ARUDBGACCESS1
#define GTM0ARUDBGDATA1H GTM0.ARUDBGDATA1H
#define GTM0ARUDBGDATA1L GTM0.ARUDBGDATA1L
#define GTM0ARUIRQNOTIFY GTM0.ARUIRQNOTIFY
#define GTM0ARUIRQEN GTM0.ARUIRQEN
#define GTM0ARUIRQFORCINT GTM0.ARUIRQFORCINT
#define GTM0ARUIRQMODE GTM0.ARUIRQMODE
#define GTM0ARUCADDREND GTM0.ARUCADDREND
#define GTM0CMUCLKEN GTM0.CMUCLKEN
#define GTM0CMUGCLKNUM GTM0.CMUGCLKNUM
#define GTM0CMUGCLKDEN GTM0.CMUGCLKDEN
#define GTM0CMUCLK0CTRL GTM0.CMUCLK0CTRL
#define GTM0CMUCLK1CTRL GTM0.CMUCLK1CTRL
#define GTM0CMUCLK2CTRL GTM0.CMUCLK2CTRL
#define GTM0CMUCLK3CTRL GTM0.CMUCLK3CTRL
#define GTM0CMUCLK4CTRL GTM0.CMUCLK4CTRL
#define GTM0CMUCLK5CTRL GTM0.CMUCLK5CTRL
#define GTM0CMUCLK6CTRL GTM0.CMUCLK6CTRL
#define GTM0CMUCLK7CTRL GTM0.CMUCLK7CTRL
#define GTM0CMUGLBCTRL GTM0.CMUGLBCTRL
#define GTM0ICMIRQG0 GTM0.ICMIRQG0
#define GTM0ICMIRQG2 GTM0.ICMIRQG2
#define GTM0ICMIRQG4 GTM0.ICMIRQG4
#define GTM0ICMIRQG9 GTM0.ICMIRQG9
#define GTM0ICMIRQGMEI GTM0.ICMIRQGMEI
#define GTM0ICMIRQGCEI1 GTM0.ICMIRQGCEI1
#define GTM0ICMIRQGCEI3 GTM0.ICMIRQGCEI3
#define GTM0ICMIRQGMCS0CI GTM0.ICMIRQGMCS0CI
#define GTM0ICMIRQGMCS0CEI GTM0.ICMIRQGMCS0CEI
#define GTM0TIM00GPR0 GTM0.TIM00GPR0
#define GTM0TIM00GPR1 GTM0.TIM00GPR1
#define GTM0TIM00CNT GTM0.TIM00CNT
#define GTM0TIM00ECNT GTM0.TIM00ECNT
#define GTM0TIM00CNTS GTM0.TIM00CNTS
#define GTM0TIM00TDUC GTM0.TIM00TDUC
#define GTM0TIM00TDUV GTM0.TIM00TDUV
#define GTM0TIM00FLTRE GTM0.TIM00FLTRE
#define GTM0TIM00FLTFE GTM0.TIM00FLTFE
#define GTM0TIM00CTRL GTM0.TIM00CTRL
#define GTM0TIM00ECTRL GTM0.TIM00ECTRL
#define GTM0TIM00IRQNOTIFY GTM0.TIM00IRQNOTIFY
#define GTM0TIM00IRQEN GTM0.TIM00IRQEN
#define GTM0TIM00IRQFORCINT GTM0.TIM00IRQFORCINT
#define GTM0TIM00IRQMODE GTM0.TIM00IRQMODE
#define GTM0TIM00EIRQEN GTM0.TIM00EIRQEN
#define GTM0TIM0INPVAL GTM0.TIM0INPVAL
#define GTM0TIM0INSRC GTM0.TIM0INSRC
#define GTM0TIM0RST GTM0.TIM0RST
#define GTM0TIM01GPR0 GTM0.TIM01GPR0
#define GTM0TIM01GPR1 GTM0.TIM01GPR1
#define GTM0TIM01CNT GTM0.TIM01CNT
#define GTM0TIM01ECNT GTM0.TIM01ECNT
#define GTM0TIM01CNTS GTM0.TIM01CNTS
#define GTM0TIM01TDUC GTM0.TIM01TDUC
#define GTM0TIM01TDUV GTM0.TIM01TDUV
#define GTM0TIM01FLTRE GTM0.TIM01FLTRE
#define GTM0TIM01FLTFE GTM0.TIM01FLTFE
#define GTM0TIM01CTRL GTM0.TIM01CTRL
#define GTM0TIM01ECTRL GTM0.TIM01ECTRL
#define GTM0TIM01IRQNOTIFY GTM0.TIM01IRQNOTIFY
#define GTM0TIM01IRQEN GTM0.TIM01IRQEN
#define GTM0TIM01IRQFORCINT GTM0.TIM01IRQFORCINT
#define GTM0TIM01IRQMODE GTM0.TIM01IRQMODE
#define GTM0TIM01EIRQEN GTM0.TIM01EIRQEN
#define GTM0TIM02GPR0 GTM0.TIM02GPR0
#define GTM0TIM02GPR1 GTM0.TIM02GPR1
#define GTM0TIM02CNT GTM0.TIM02CNT
#define GTM0TIM02ECNT GTM0.TIM02ECNT
#define GTM0TIM02CNTS GTM0.TIM02CNTS
#define GTM0TIM02TDUC GTM0.TIM02TDUC
#define GTM0TIM02TDUV GTM0.TIM02TDUV
#define GTM0TIM02FLTRE GTM0.TIM02FLTRE
#define GTM0TIM02FLTFE GTM0.TIM02FLTFE
#define GTM0TIM02CTRL GTM0.TIM02CTRL
#define GTM0TIM02ECTRL GTM0.TIM02ECTRL
#define GTM0TIM02IRQNOTIFY GTM0.TIM02IRQNOTIFY
#define GTM0TIM02IRQEN GTM0.TIM02IRQEN
#define GTM0TIM02IRQFORCINT GTM0.TIM02IRQFORCINT
#define GTM0TIM02IRQMODE GTM0.TIM02IRQMODE
#define GTM0TIM02EIRQEN GTM0.TIM02EIRQEN
#define GTM0TIM03GPR0 GTM0.TIM03GPR0
#define GTM0TIM03GPR1 GTM0.TIM03GPR1
#define GTM0TIM03CNT GTM0.TIM03CNT
#define GTM0TIM03ECNT GTM0.TIM03ECNT
#define GTM0TIM03CNTS GTM0.TIM03CNTS
#define GTM0TIM03TDUC GTM0.TIM03TDUC
#define GTM0TIM03TDUV GTM0.TIM03TDUV
#define GTM0TIM03FLTRE GTM0.TIM03FLTRE
#define GTM0TIM03FLTFE GTM0.TIM03FLTFE
#define GTM0TIM03CTRL GTM0.TIM03CTRL
#define GTM0TIM03ECTRL GTM0.TIM03ECTRL
#define GTM0TIM03IRQNOTIFY GTM0.TIM03IRQNOTIFY
#define GTM0TIM03IRQEN GTM0.TIM03IRQEN
#define GTM0TIM03IRQFORCINT GTM0.TIM03IRQFORCINT
#define GTM0TIM03IRQMODE GTM0.TIM03IRQMODE
#define GTM0TIM03EIRQEN GTM0.TIM03EIRQEN
#define GTM0TIM04GPR0 GTM0.TIM04GPR0
#define GTM0TIM04GPR1 GTM0.TIM04GPR1
#define GTM0TIM04CNT GTM0.TIM04CNT
#define GTM0TIM04ECNT GTM0.TIM04ECNT
#define GTM0TIM04CNTS GTM0.TIM04CNTS
#define GTM0TIM04TDUC GTM0.TIM04TDUC
#define GTM0TIM04TDUV GTM0.TIM04TDUV
#define GTM0TIM04FLTRE GTM0.TIM04FLTRE
#define GTM0TIM04FLTFE GTM0.TIM04FLTFE
#define GTM0TIM04CTRL GTM0.TIM04CTRL
#define GTM0TIM04ECTRL GTM0.TIM04ECTRL
#define GTM0TIM04IRQNOTIFY GTM0.TIM04IRQNOTIFY
#define GTM0TIM04IRQEN GTM0.TIM04IRQEN
#define GTM0TIM04IRQFORCINT GTM0.TIM04IRQFORCINT
#define GTM0TIM04IRQMODE GTM0.TIM04IRQMODE
#define GTM0TIM04EIRQEN GTM0.TIM04EIRQEN
#define GTM0TIM05GPR0 GTM0.TIM05GPR0
#define GTM0TIM05GPR1 GTM0.TIM05GPR1
#define GTM0TIM05CNT GTM0.TIM05CNT
#define GTM0TIM05ECNT GTM0.TIM05ECNT
#define GTM0TIM05CNTS GTM0.TIM05CNTS
#define GTM0TIM05TDUC GTM0.TIM05TDUC
#define GTM0TIM05TDUV GTM0.TIM05TDUV
#define GTM0TIM05FLTRE GTM0.TIM05FLTRE
#define GTM0TIM05FLTFE GTM0.TIM05FLTFE
#define GTM0TIM05CTRL GTM0.TIM05CTRL
#define GTM0TIM05ECTRL GTM0.TIM05ECTRL
#define GTM0TIM05IRQNOTIFY GTM0.TIM05IRQNOTIFY
#define GTM0TIM05IRQEN GTM0.TIM05IRQEN
#define GTM0TIM05IRQFORCINT GTM0.TIM05IRQFORCINT
#define GTM0TIM05IRQMODE GTM0.TIM05IRQMODE
#define GTM0TIM05EIRQEN GTM0.TIM05EIRQEN
#define GTM0TIM06GPR0 GTM0.TIM06GPR0
#define GTM0TIM06GPR1 GTM0.TIM06GPR1
#define GTM0TIM06CNT GTM0.TIM06CNT
#define GTM0TIM06ECNT GTM0.TIM06ECNT
#define GTM0TIM06CNTS GTM0.TIM06CNTS
#define GTM0TIM06TDUC GTM0.TIM06TDUC
#define GTM0TIM06TDUV GTM0.TIM06TDUV
#define GTM0TIM06FLTRE GTM0.TIM06FLTRE
#define GTM0TIM06FLTFE GTM0.TIM06FLTFE
#define GTM0TIM06CTRL GTM0.TIM06CTRL
#define GTM0TIM06ECTRL GTM0.TIM06ECTRL
#define GTM0TIM06IRQNOTIFY GTM0.TIM06IRQNOTIFY
#define GTM0TIM06IRQEN GTM0.TIM06IRQEN
#define GTM0TIM06IRQFORCINT GTM0.TIM06IRQFORCINT
#define GTM0TIM06IRQMODE GTM0.TIM06IRQMODE
#define GTM0TIM06EIRQEN GTM0.TIM06EIRQEN
#define GTM0TIM07GPR0 GTM0.TIM07GPR0
#define GTM0TIM07GPR1 GTM0.TIM07GPR1
#define GTM0TIM07CNT GTM0.TIM07CNT
#define GTM0TIM07ECNT GTM0.TIM07ECNT
#define GTM0TIM07CNTS GTM0.TIM07CNTS
#define GTM0TIM07TDUC GTM0.TIM07TDUC
#define GTM0TIM07TDUV GTM0.TIM07TDUV
#define GTM0TIM07FLTRE GTM0.TIM07FLTRE
#define GTM0TIM07FLTFE GTM0.TIM07FLTFE
#define GTM0TIM07CTRL GTM0.TIM07CTRL
#define GTM0TIM07ECTRL GTM0.TIM07ECTRL
#define GTM0TIM07IRQNOTIFY GTM0.TIM07IRQNOTIFY
#define GTM0TIM07IRQEN GTM0.TIM07IRQEN
#define GTM0TIM07IRQFORCINT GTM0.TIM07IRQFORCINT
#define GTM0TIM07IRQMODE GTM0.TIM07IRQMODE
#define GTM0TIM07EIRQEN GTM0.TIM07EIRQEN
#define GTM0TIM10GPR0 GTM0.TIM10GPR0
#define GTM0TIM10GPR1 GTM0.TIM10GPR1
#define GTM0TIM10CNT GTM0.TIM10CNT
#define GTM0TIM10ECNT GTM0.TIM10ECNT
#define GTM0TIM10CNTS GTM0.TIM10CNTS
#define GTM0TIM10TDUC GTM0.TIM10TDUC
#define GTM0TIM10TDUV GTM0.TIM10TDUV
#define GTM0TIM10FLTRE GTM0.TIM10FLTRE
#define GTM0TIM10FLTFE GTM0.TIM10FLTFE
#define GTM0TIM10CTRL GTM0.TIM10CTRL
#define GTM0TIM10ECTRL GTM0.TIM10ECTRL
#define GTM0TIM10IRQNOTIFY GTM0.TIM10IRQNOTIFY
#define GTM0TIM10IRQEN GTM0.TIM10IRQEN
#define GTM0TIM10IRQFORCINT GTM0.TIM10IRQFORCINT
#define GTM0TIM10IRQMODE GTM0.TIM10IRQMODE
#define GTM0TIM10EIRQEN GTM0.TIM10EIRQEN
#define GTM0TIM1INPVAL GTM0.TIM1INPVAL
#define GTM0TIM1INSRC GTM0.TIM1INSRC
#define GTM0TIM1RST GTM0.TIM1RST
#define GTM0TIM11GPR0 GTM0.TIM11GPR0
#define GTM0TIM11GPR1 GTM0.TIM11GPR1
#define GTM0TIM11CNT GTM0.TIM11CNT
#define GTM0TIM11ECNT GTM0.TIM11ECNT
#define GTM0TIM11CNTS GTM0.TIM11CNTS
#define GTM0TIM11TDUC GTM0.TIM11TDUC
#define GTM0TIM11TDUV GTM0.TIM11TDUV
#define GTM0TIM11FLTRE GTM0.TIM11FLTRE
#define GTM0TIM11FLTFE GTM0.TIM11FLTFE
#define GTM0TIM11CTRL GTM0.TIM11CTRL
#define GTM0TIM11ECTRL GTM0.TIM11ECTRL
#define GTM0TIM11IRQNOTIFY GTM0.TIM11IRQNOTIFY
#define GTM0TIM11IRQEN GTM0.TIM11IRQEN
#define GTM0TIM11IRQFORCINT GTM0.TIM11IRQFORCINT
#define GTM0TIM11IRQMODE GTM0.TIM11IRQMODE
#define GTM0TIM11EIRQEN GTM0.TIM11EIRQEN
#define GTM0TIM12GPR0 GTM0.TIM12GPR0
#define GTM0TIM12GPR1 GTM0.TIM12GPR1
#define GTM0TIM12CNT GTM0.TIM12CNT
#define GTM0TIM12ECNT GTM0.TIM12ECNT
#define GTM0TIM12CNTS GTM0.TIM12CNTS
#define GTM0TIM12TDUC GTM0.TIM12TDUC
#define GTM0TIM12TDUV GTM0.TIM12TDUV
#define GTM0TIM12FLTRE GTM0.TIM12FLTRE
#define GTM0TIM12FLTFE GTM0.TIM12FLTFE
#define GTM0TIM12CTRL GTM0.TIM12CTRL
#define GTM0TIM12ECTRL GTM0.TIM12ECTRL
#define GTM0TIM12IRQNOTIFY GTM0.TIM12IRQNOTIFY
#define GTM0TIM12IRQEN GTM0.TIM12IRQEN
#define GTM0TIM12IRQFORCINT GTM0.TIM12IRQFORCINT
#define GTM0TIM12IRQMODE GTM0.TIM12IRQMODE
#define GTM0TIM12EIRQEN GTM0.TIM12EIRQEN
#define GTM0TIM13GPR0 GTM0.TIM13GPR0
#define GTM0TIM13GPR1 GTM0.TIM13GPR1
#define GTM0TIM13CNT GTM0.TIM13CNT
#define GTM0TIM13ECNT GTM0.TIM13ECNT
#define GTM0TIM13CNTS GTM0.TIM13CNTS
#define GTM0TIM13TDUC GTM0.TIM13TDUC
#define GTM0TIM13TDUV GTM0.TIM13TDUV
#define GTM0TIM13FLTRE GTM0.TIM13FLTRE
#define GTM0TIM13FLTFE GTM0.TIM13FLTFE
#define GTM0TIM13CTRL GTM0.TIM13CTRL
#define GTM0TIM13ECTRL GTM0.TIM13ECTRL
#define GTM0TIM13IRQNOTIFY GTM0.TIM13IRQNOTIFY
#define GTM0TIM13IRQEN GTM0.TIM13IRQEN
#define GTM0TIM13IRQFORCINT GTM0.TIM13IRQFORCINT
#define GTM0TIM13IRQMODE GTM0.TIM13IRQMODE
#define GTM0TIM13EIRQEN GTM0.TIM13EIRQEN
#define GTM0TIM14GPR0 GTM0.TIM14GPR0
#define GTM0TIM14GPR1 GTM0.TIM14GPR1
#define GTM0TIM14CNT GTM0.TIM14CNT
#define GTM0TIM14ECNT GTM0.TIM14ECNT
#define GTM0TIM14CNTS GTM0.TIM14CNTS
#define GTM0TIM14TDUC GTM0.TIM14TDUC
#define GTM0TIM14TDUV GTM0.TIM14TDUV
#define GTM0TIM14FLTRE GTM0.TIM14FLTRE
#define GTM0TIM14FLTFE GTM0.TIM14FLTFE
#define GTM0TIM14CTRL GTM0.TIM14CTRL
#define GTM0TIM14ECTRL GTM0.TIM14ECTRL
#define GTM0TIM14IRQNOTIFY GTM0.TIM14IRQNOTIFY
#define GTM0TIM14IRQEN GTM0.TIM14IRQEN
#define GTM0TIM14IRQFORCINT GTM0.TIM14IRQFORCINT
#define GTM0TIM14IRQMODE GTM0.TIM14IRQMODE
#define GTM0TIM14EIRQEN GTM0.TIM14EIRQEN
#define GTM0TIM15GPR0 GTM0.TIM15GPR0
#define GTM0TIM15GPR1 GTM0.TIM15GPR1
#define GTM0TIM15CNT GTM0.TIM15CNT
#define GTM0TIM15ECNT GTM0.TIM15ECNT
#define GTM0TIM15CNTS GTM0.TIM15CNTS
#define GTM0TIM15TDUC GTM0.TIM15TDUC
#define GTM0TIM15TDUV GTM0.TIM15TDUV
#define GTM0TIM15FLTRE GTM0.TIM15FLTRE
#define GTM0TIM15FLTFE GTM0.TIM15FLTFE
#define GTM0TIM15CTRL GTM0.TIM15CTRL
#define GTM0TIM15ECTRL GTM0.TIM15ECTRL
#define GTM0TIM15IRQNOTIFY GTM0.TIM15IRQNOTIFY
#define GTM0TIM15IRQEN GTM0.TIM15IRQEN
#define GTM0TIM15IRQFORCINT GTM0.TIM15IRQFORCINT
#define GTM0TIM15IRQMODE GTM0.TIM15IRQMODE
#define GTM0TIM15EIRQEN GTM0.TIM15EIRQEN
#define GTM0TIM16GPR0 GTM0.TIM16GPR0
#define GTM0TIM16GPR1 GTM0.TIM16GPR1
#define GTM0TIM16CNT GTM0.TIM16CNT
#define GTM0TIM16ECNT GTM0.TIM16ECNT
#define GTM0TIM16CNTS GTM0.TIM16CNTS
#define GTM0TIM16TDUC GTM0.TIM16TDUC
#define GTM0TIM16TDUV GTM0.TIM16TDUV
#define GTM0TIM16FLTRE GTM0.TIM16FLTRE
#define GTM0TIM16FLTFE GTM0.TIM16FLTFE
#define GTM0TIM16CTRL GTM0.TIM16CTRL
#define GTM0TIM16ECTRL GTM0.TIM16ECTRL
#define GTM0TIM16IRQNOTIFY GTM0.TIM16IRQNOTIFY
#define GTM0TIM16IRQEN GTM0.TIM16IRQEN
#define GTM0TIM16IRQFORCINT GTM0.TIM16IRQFORCINT
#define GTM0TIM16IRQMODE GTM0.TIM16IRQMODE
#define GTM0TIM16EIRQEN GTM0.TIM16EIRQEN
#define GTM0TIM17GPR0 GTM0.TIM17GPR0
#define GTM0TIM17GPR1 GTM0.TIM17GPR1
#define GTM0TIM17CNT GTM0.TIM17CNT
#define GTM0TIM17ECNT GTM0.TIM17ECNT
#define GTM0TIM17CNTS GTM0.TIM17CNTS
#define GTM0TIM17TDUC GTM0.TIM17TDUC
#define GTM0TIM17TDUV GTM0.TIM17TDUV
#define GTM0TIM17FLTRE GTM0.TIM17FLTRE
#define GTM0TIM17FLTFE GTM0.TIM17FLTFE
#define GTM0TIM17CTRL GTM0.TIM17CTRL
#define GTM0TIM17ECTRL GTM0.TIM17ECTRL
#define GTM0TIM17IRQNOTIFY GTM0.TIM17IRQNOTIFY
#define GTM0TIM17IRQEN GTM0.TIM17IRQEN
#define GTM0TIM17IRQFORCINT GTM0.TIM17IRQFORCINT
#define GTM0TIM17IRQMODE GTM0.TIM17IRQMODE
#define GTM0TIM17EIRQEN GTM0.TIM17EIRQEN
#define GTM0ATOM00RDADDR GTM0.ATOM00RDADDR
#define GTM0ATOM00CTRL GTM0.ATOM00CTRL
#define GTM0ATOM00SR0 GTM0.ATOM00SR0
#define GTM0ATOM00SR1 GTM0.ATOM00SR1
#define GTM0ATOM00CM0 GTM0.ATOM00CM0
#define GTM0ATOM00CM1 GTM0.ATOM00CM1
#define GTM0ATOM00CN0 GTM0.ATOM00CN0
#define GTM0ATOM00STAT GTM0.ATOM00STAT
#define GTM0ATOM00IRQNOTIFY GTM0.ATOM00IRQNOTIFY
#define GTM0ATOM00IRQEN GTM0.ATOM00IRQEN
#define GTM0ATOM00IRQFORCINT GTM0.ATOM00IRQFORCINT
#define GTM0ATOM00IRQMODE GTM0.ATOM00IRQMODE
#define GTM0ATOM0AGCGLBCTRL GTM0.ATOM0AGCGLBCTRL
#define GTM0ATOM0AGCENDISCTRL GTM0.ATOM0AGCENDISCTRL
#define GTM0ATOM0AGCENDISSTAT GTM0.ATOM0AGCENDISSTAT
#define GTM0ATOM0AGCACTTB GTM0.ATOM0AGCACTTB
#define GTM0ATOM0AGCOUTENCTRL GTM0.ATOM0AGCOUTENCTRL
#define GTM0ATOM0AGCOUTENSTAT GTM0.ATOM0AGCOUTENSTAT
#define GTM0ATOM0AGCFUPDCTRL GTM0.ATOM0AGCFUPDCTRL
#define GTM0ATOM0AGCINTTRIG GTM0.ATOM0AGCINTTRIG
#define GTM0ATOM01RDADDR GTM0.ATOM01RDADDR
#define GTM0ATOM01CTRL GTM0.ATOM01CTRL
#define GTM0ATOM01SR0 GTM0.ATOM01SR0
#define GTM0ATOM01SR1 GTM0.ATOM01SR1
#define GTM0ATOM01CM0 GTM0.ATOM01CM0
#define GTM0ATOM01CM1 GTM0.ATOM01CM1
#define GTM0ATOM01CN0 GTM0.ATOM01CN0
#define GTM0ATOM01STAT GTM0.ATOM01STAT
#define GTM0ATOM01IRQNOTIFY GTM0.ATOM01IRQNOTIFY
#define GTM0ATOM01IRQEN GTM0.ATOM01IRQEN
#define GTM0ATOM01IRQFORCINT GTM0.ATOM01IRQFORCINT
#define GTM0ATOM01IRQMODE GTM0.ATOM01IRQMODE
#define GTM0ATOM02RDADDR GTM0.ATOM02RDADDR
#define GTM0ATOM02CTRL GTM0.ATOM02CTRL
#define GTM0ATOM02SR0 GTM0.ATOM02SR0
#define GTM0ATOM02SR1 GTM0.ATOM02SR1
#define GTM0ATOM02CM0 GTM0.ATOM02CM0
#define GTM0ATOM02CM1 GTM0.ATOM02CM1
#define GTM0ATOM02CN0 GTM0.ATOM02CN0
#define GTM0ATOM02STAT GTM0.ATOM02STAT
#define GTM0ATOM02IRQNOTIFY GTM0.ATOM02IRQNOTIFY
#define GTM0ATOM02IRQEN GTM0.ATOM02IRQEN
#define GTM0ATOM02IRQFORCINT GTM0.ATOM02IRQFORCINT
#define GTM0ATOM02IRQMODE GTM0.ATOM02IRQMODE
#define GTM0ATOM03RDADDR GTM0.ATOM03RDADDR
#define GTM0ATOM03CTRL GTM0.ATOM03CTRL
#define GTM0ATOM03SR0 GTM0.ATOM03SR0
#define GTM0ATOM03SR1 GTM0.ATOM03SR1
#define GTM0ATOM03CM0 GTM0.ATOM03CM0
#define GTM0ATOM03CM1 GTM0.ATOM03CM1
#define GTM0ATOM03CN0 GTM0.ATOM03CN0
#define GTM0ATOM03STAT GTM0.ATOM03STAT
#define GTM0ATOM03IRQNOTIFY GTM0.ATOM03IRQNOTIFY
#define GTM0ATOM03IRQEN GTM0.ATOM03IRQEN
#define GTM0ATOM03IRQFORCINT GTM0.ATOM03IRQFORCINT
#define GTM0ATOM03IRQMODE GTM0.ATOM03IRQMODE
#define GTM0ATOM04RDADDR GTM0.ATOM04RDADDR
#define GTM0ATOM04CTRL GTM0.ATOM04CTRL
#define GTM0ATOM04SR0 GTM0.ATOM04SR0
#define GTM0ATOM04SR1 GTM0.ATOM04SR1
#define GTM0ATOM04CM0 GTM0.ATOM04CM0
#define GTM0ATOM04CM1 GTM0.ATOM04CM1
#define GTM0ATOM04CN0 GTM0.ATOM04CN0
#define GTM0ATOM04STAT GTM0.ATOM04STAT
#define GTM0ATOM04IRQNOTIFY GTM0.ATOM04IRQNOTIFY
#define GTM0ATOM04IRQEN GTM0.ATOM04IRQEN
#define GTM0ATOM04IRQFORCINT GTM0.ATOM04IRQFORCINT
#define GTM0ATOM04IRQMODE GTM0.ATOM04IRQMODE
#define GTM0ATOM05RDADDR GTM0.ATOM05RDADDR
#define GTM0ATOM05CTRL GTM0.ATOM05CTRL
#define GTM0ATOM05SR0 GTM0.ATOM05SR0
#define GTM0ATOM05SR1 GTM0.ATOM05SR1
#define GTM0ATOM05CM0 GTM0.ATOM05CM0
#define GTM0ATOM05CM1 GTM0.ATOM05CM1
#define GTM0ATOM05CN0 GTM0.ATOM05CN0
#define GTM0ATOM05STAT GTM0.ATOM05STAT
#define GTM0ATOM05IRQNOTIFY GTM0.ATOM05IRQNOTIFY
#define GTM0ATOM05IRQEN GTM0.ATOM05IRQEN
#define GTM0ATOM05IRQFORCINT GTM0.ATOM05IRQFORCINT
#define GTM0ATOM05IRQMODE GTM0.ATOM05IRQMODE
#define GTM0ATOM06RDADDR GTM0.ATOM06RDADDR
#define GTM0ATOM06CTRL GTM0.ATOM06CTRL
#define GTM0ATOM06SR0 GTM0.ATOM06SR0
#define GTM0ATOM06SR1 GTM0.ATOM06SR1
#define GTM0ATOM06CM0 GTM0.ATOM06CM0
#define GTM0ATOM06CM1 GTM0.ATOM06CM1
#define GTM0ATOM06CN0 GTM0.ATOM06CN0
#define GTM0ATOM06STAT GTM0.ATOM06STAT
#define GTM0ATOM06IRQNOTIFY GTM0.ATOM06IRQNOTIFY
#define GTM0ATOM06IRQEN GTM0.ATOM06IRQEN
#define GTM0ATOM06IRQFORCINT GTM0.ATOM06IRQFORCINT
#define GTM0ATOM06IRQMODE GTM0.ATOM06IRQMODE
#define GTM0ATOM07RDADDR GTM0.ATOM07RDADDR
#define GTM0ATOM07CTRL GTM0.ATOM07CTRL
#define GTM0ATOM07SR0 GTM0.ATOM07SR0
#define GTM0ATOM07SR1 GTM0.ATOM07SR1
#define GTM0ATOM07CM0 GTM0.ATOM07CM0
#define GTM0ATOM07CM1 GTM0.ATOM07CM1
#define GTM0ATOM07CN0 GTM0.ATOM07CN0
#define GTM0ATOM07STAT GTM0.ATOM07STAT
#define GTM0ATOM07IRQNOTIFY GTM0.ATOM07IRQNOTIFY
#define GTM0ATOM07IRQEN GTM0.ATOM07IRQEN
#define GTM0ATOM07IRQFORCINT GTM0.ATOM07IRQFORCINT
#define GTM0ATOM07IRQMODE GTM0.ATOM07IRQMODE
#define GTM0ATOM10RDADDR GTM0.ATOM10RDADDR
#define GTM0ATOM10CTRL GTM0.ATOM10CTRL
#define GTM0ATOM10SR0 GTM0.ATOM10SR0
#define GTM0ATOM10SR1 GTM0.ATOM10SR1
#define GTM0ATOM10CM0 GTM0.ATOM10CM0
#define GTM0ATOM10CM1 GTM0.ATOM10CM1
#define GTM0ATOM10CN0 GTM0.ATOM10CN0
#define GTM0ATOM10STAT GTM0.ATOM10STAT
#define GTM0ATOM10IRQNOTIFY GTM0.ATOM10IRQNOTIFY
#define GTM0ATOM10IRQEN GTM0.ATOM10IRQEN
#define GTM0ATOM10IRQFORCINT GTM0.ATOM10IRQFORCINT
#define GTM0ATOM10IRQMODE GTM0.ATOM10IRQMODE
#define GTM0ATOM1AGCGLBCTRL GTM0.ATOM1AGCGLBCTRL
#define GTM0ATOM1AGCENDISCTRL GTM0.ATOM1AGCENDISCTRL
#define GTM0ATOM1AGCENDISSTAT GTM0.ATOM1AGCENDISSTAT
#define GTM0ATOM1AGCACTTB GTM0.ATOM1AGCACTTB
#define GTM0ATOM1AGCOUTENCTRL GTM0.ATOM1AGCOUTENCTRL
#define GTM0ATOM1AGCOUTENSTAT GTM0.ATOM1AGCOUTENSTAT
#define GTM0ATOM1AGCFUPDCTRL GTM0.ATOM1AGCFUPDCTRL
#define GTM0ATOM1AGCINTTRIG GTM0.ATOM1AGCINTTRIG
#define GTM0ATOM11RDADDR GTM0.ATOM11RDADDR
#define GTM0ATOM11CTRL GTM0.ATOM11CTRL
#define GTM0ATOM11SR0 GTM0.ATOM11SR0
#define GTM0ATOM11SR1 GTM0.ATOM11SR1
#define GTM0ATOM11CM0 GTM0.ATOM11CM0
#define GTM0ATOM11CM1 GTM0.ATOM11CM1
#define GTM0ATOM11CN0 GTM0.ATOM11CN0
#define GTM0ATOM11STAT GTM0.ATOM11STAT
#define GTM0ATOM11IRQNOTIFY GTM0.ATOM11IRQNOTIFY
#define GTM0ATOM11IRQEN GTM0.ATOM11IRQEN
#define GTM0ATOM11IRQFORCINT GTM0.ATOM11IRQFORCINT
#define GTM0ATOM11IRQMODE GTM0.ATOM11IRQMODE
#define GTM0ATOM12RDADDR GTM0.ATOM12RDADDR
#define GTM0ATOM12CTRL GTM0.ATOM12CTRL
#define GTM0ATOM12SR0 GTM0.ATOM12SR0
#define GTM0ATOM12SR1 GTM0.ATOM12SR1
#define GTM0ATOM12CM0 GTM0.ATOM12CM0
#define GTM0ATOM12CM1 GTM0.ATOM12CM1
#define GTM0ATOM12CN0 GTM0.ATOM12CN0
#define GTM0ATOM12STAT GTM0.ATOM12STAT
#define GTM0ATOM12IRQNOTIFY GTM0.ATOM12IRQNOTIFY
#define GTM0ATOM12IRQEN GTM0.ATOM12IRQEN
#define GTM0ATOM12IRQFORCINT GTM0.ATOM12IRQFORCINT
#define GTM0ATOM12IRQMODE GTM0.ATOM12IRQMODE
#define GTM0ATOM13RDADDR GTM0.ATOM13RDADDR
#define GTM0ATOM13CTRL GTM0.ATOM13CTRL
#define GTM0ATOM13SR0 GTM0.ATOM13SR0
#define GTM0ATOM13SR1 GTM0.ATOM13SR1
#define GTM0ATOM13CM0 GTM0.ATOM13CM0
#define GTM0ATOM13CM1 GTM0.ATOM13CM1
#define GTM0ATOM13CN0 GTM0.ATOM13CN0
#define GTM0ATOM13STAT GTM0.ATOM13STAT
#define GTM0ATOM13IRQNOTIFY GTM0.ATOM13IRQNOTIFY
#define GTM0ATOM13IRQEN GTM0.ATOM13IRQEN
#define GTM0ATOM13IRQFORCINT GTM0.ATOM13IRQFORCINT
#define GTM0ATOM13IRQMODE GTM0.ATOM13IRQMODE
#define GTM0DTM24CTRL GTM0.DTM24CTRL
#define GTM0DTM24CHCTRL1 GTM0.DTM24CHCTRL1
#define GTM0DTM24CHCTRL2 GTM0.DTM24CHCTRL2
#define GTM0DTM24CHCTRL2SR GTM0.DTM24CHCTRL2SR
#define GTM0DTM24PSCTRL GTM0.DTM24PSCTRL
#define GTM0DTM240DTV GTM0.DTM240DTV
#define GTM0DTM241DTV GTM0.DTM241DTV
#define GTM0DTM242DTV GTM0.DTM242DTV
#define GTM0DTM243DTV GTM0.DTM243DTV
#define GTM0DTM24CHSR GTM0.DTM24CHSR
#define GTM0DTM26CTRL GTM0.DTM26CTRL
#define GTM0DTM26CHCTRL1 GTM0.DTM26CHCTRL1
#define GTM0DTM26CHCTRL2 GTM0.DTM26CHCTRL2
#define GTM0DTM26CHCTRL2SR GTM0.DTM26CHCTRL2SR
#define GTM0DTM26PSCTRL GTM0.DTM26PSCTRL
#define GTM0DTM260DTV GTM0.DTM260DTV
#define GTM0DTM261DTV GTM0.DTM261DTV
#define GTM0DTM262DTV GTM0.DTM262DTV
#define GTM0DTM263DTV GTM0.DTM263DTV
#define GTM0DTM26CHSR GTM0.DTM26CHSR
#define GTM0MCS00R0 GTM0.MCS00R0
#define GTM0MCS00R1 GTM0.MCS00R1
#define GTM0MCS00R2 GTM0.MCS00R2
#define GTM0MCS00R3 GTM0.MCS00R3
#define GTM0MCS00R4 GTM0.MCS00R4
#define GTM0MCS00R5 GTM0.MCS00R5
#define GTM0MCS00R6 GTM0.MCS00R6
#define GTM0MCS00R7 GTM0.MCS00R7
#define GTM0MCS00CTRL GTM0.MCS00CTRL
#define GTM0MCS00ACB GTM0.MCS00ACB
#define GTM0MCS0CTRG GTM0.MCS0CTRG
#define GTM0MCS0STRG GTM0.MCS0STRG
#define GTM0MCS00MHB GTM0.MCS00MHB
#define GTM0MCS00PC GTM0.MCS00PC
#define GTM0MCS00IRQNOTIFY GTM0.MCS00IRQNOTIFY
#define GTM0MCS00IRQEN GTM0.MCS00IRQEN
#define GTM0MCS00IRQFORCINT GTM0.MCS00IRQFORCINT
#define GTM0MCS00IRQMODE GTM0.MCS00IRQMODE
#define GTM0MCS00EIRQEN GTM0.MCS00EIRQEN
#define GTM0MCS0CTRLSTAT GTM0.MCS0CTRLSTAT
#define GTM0MCS0RESET GTM0.MCS0RESET
#define GTM0MCS0CAT GTM0.MCS0CAT
#define GTM0MCS0CWT GTM0.MCS0CWT
#define GTM0MCS0ERR GTM0.MCS0ERR
#define GTM0MCS01R0 GTM0.MCS01R0
#define GTM0MCS01R1 GTM0.MCS01R1
#define GTM0MCS01R2 GTM0.MCS01R2
#define GTM0MCS01R3 GTM0.MCS01R3
#define GTM0MCS01R4 GTM0.MCS01R4
#define GTM0MCS01R5 GTM0.MCS01R5
#define GTM0MCS01R6 GTM0.MCS01R6
#define GTM0MCS01R7 GTM0.MCS01R7
#define GTM0MCS01CTRL GTM0.MCS01CTRL
#define GTM0MCS01ACB GTM0.MCS01ACB
#define GTM0MCS01MHB GTM0.MCS01MHB
#define GTM0MCS01PC GTM0.MCS01PC
#define GTM0MCS01IRQNOTIFY GTM0.MCS01IRQNOTIFY
#define GTM0MCS01IRQEN GTM0.MCS01IRQEN
#define GTM0MCS01IRQFORCINT GTM0.MCS01IRQFORCINT
#define GTM0MCS01IRQMODE GTM0.MCS01IRQMODE
#define GTM0MCS01EIRQEN GTM0.MCS01EIRQEN
#define GTM0MCS02R0 GTM0.MCS02R0
#define GTM0MCS02R1 GTM0.MCS02R1
#define GTM0MCS02R2 GTM0.MCS02R2
#define GTM0MCS02R3 GTM0.MCS02R3
#define GTM0MCS02R4 GTM0.MCS02R4
#define GTM0MCS02R5 GTM0.MCS02R5
#define GTM0MCS02R6 GTM0.MCS02R6
#define GTM0MCS02R7 GTM0.MCS02R7
#define GTM0MCS02CTRL GTM0.MCS02CTRL
#define GTM0MCS02ACB GTM0.MCS02ACB
#define GTM0MCS02MHB GTM0.MCS02MHB
#define GTM0MCS02PC GTM0.MCS02PC
#define GTM0MCS02IRQNOTIFY GTM0.MCS02IRQNOTIFY
#define GTM0MCS02IRQEN GTM0.MCS02IRQEN
#define GTM0MCS02IRQFORCINT GTM0.MCS02IRQFORCINT
#define GTM0MCS02IRQMODE GTM0.MCS02IRQMODE
#define GTM0MCS02EIRQEN GTM0.MCS02EIRQEN
#define GTM0MCS03R0 GTM0.MCS03R0
#define GTM0MCS03R1 GTM0.MCS03R1
#define GTM0MCS03R2 GTM0.MCS03R2
#define GTM0MCS03R3 GTM0.MCS03R3
#define GTM0MCS03R4 GTM0.MCS03R4
#define GTM0MCS03R5 GTM0.MCS03R5
#define GTM0MCS03R6 GTM0.MCS03R6
#define GTM0MCS03R7 GTM0.MCS03R7
#define GTM0MCS03CTRL GTM0.MCS03CTRL
#define GTM0MCS03ACB GTM0.MCS03ACB
#define GTM0MCS03MHB GTM0.MCS03MHB
#define GTM0MCS03PC GTM0.MCS03PC
#define GTM0MCS03IRQNOTIFY GTM0.MCS03IRQNOTIFY
#define GTM0MCS03IRQEN GTM0.MCS03IRQEN
#define GTM0MCS03IRQFORCINT GTM0.MCS03IRQFORCINT
#define GTM0MCS03IRQMODE GTM0.MCS03IRQMODE
#define GTM0MCS03EIRQEN GTM0.MCS03EIRQEN
#define GTM0MCS04R0 GTM0.MCS04R0
#define GTM0MCS04R1 GTM0.MCS04R1
#define GTM0MCS04R2 GTM0.MCS04R2
#define GTM0MCS04R3 GTM0.MCS04R3
#define GTM0MCS04R4 GTM0.MCS04R4
#define GTM0MCS04R5 GTM0.MCS04R5
#define GTM0MCS04R6 GTM0.MCS04R6
#define GTM0MCS04R7 GTM0.MCS04R7
#define GTM0MCS04CTRL GTM0.MCS04CTRL
#define GTM0MCS04ACB GTM0.MCS04ACB
#define GTM0MCS04MHB GTM0.MCS04MHB
#define GTM0MCS04PC GTM0.MCS04PC
#define GTM0MCS04IRQNOTIFY GTM0.MCS04IRQNOTIFY
#define GTM0MCS04IRQEN GTM0.MCS04IRQEN
#define GTM0MCS04IRQFORCINT GTM0.MCS04IRQFORCINT
#define GTM0MCS04IRQMODE GTM0.MCS04IRQMODE
#define GTM0MCS04EIRQEN GTM0.MCS04EIRQEN
#define GTM0MCS05R0 GTM0.MCS05R0
#define GTM0MCS05R1 GTM0.MCS05R1
#define GTM0MCS05R2 GTM0.MCS05R2
#define GTM0MCS05R3 GTM0.MCS05R3
#define GTM0MCS05R4 GTM0.MCS05R4
#define GTM0MCS05R5 GTM0.MCS05R5
#define GTM0MCS05R6 GTM0.MCS05R6
#define GTM0MCS05R7 GTM0.MCS05R7
#define GTM0MCS05CTRL GTM0.MCS05CTRL
#define GTM0MCS05ACB GTM0.MCS05ACB
#define GTM0MCS05MHB GTM0.MCS05MHB
#define GTM0MCS05PC GTM0.MCS05PC
#define GTM0MCS05IRQNOTIFY GTM0.MCS05IRQNOTIFY
#define GTM0MCS05IRQEN GTM0.MCS05IRQEN
#define GTM0MCS05IRQFORCINT GTM0.MCS05IRQFORCINT
#define GTM0MCS05IRQMODE GTM0.MCS05IRQMODE
#define GTM0MCS05EIRQEN GTM0.MCS05EIRQEN
#define GTM0MCS06R0 GTM0.MCS06R0
#define GTM0MCS06R1 GTM0.MCS06R1
#define GTM0MCS06R2 GTM0.MCS06R2
#define GTM0MCS06R3 GTM0.MCS06R3
#define GTM0MCS06R4 GTM0.MCS06R4
#define GTM0MCS06R5 GTM0.MCS06R5
#define GTM0MCS06R6 GTM0.MCS06R6
#define GTM0MCS06R7 GTM0.MCS06R7
#define GTM0MCS06CTRL GTM0.MCS06CTRL
#define GTM0MCS06ACB GTM0.MCS06ACB
#define GTM0MCS06MHB GTM0.MCS06MHB
#define GTM0MCS06PC GTM0.MCS06PC
#define GTM0MCS06IRQNOTIFY GTM0.MCS06IRQNOTIFY
#define GTM0MCS06IRQEN GTM0.MCS06IRQEN
#define GTM0MCS06IRQFORCINT GTM0.MCS06IRQFORCINT
#define GTM0MCS06IRQMODE GTM0.MCS06IRQMODE
#define GTM0MCS06EIRQEN GTM0.MCS06EIRQEN
#define GTM0MCS07R0 GTM0.MCS07R0
#define GTM0MCS07R1 GTM0.MCS07R1
#define GTM0MCS07R2 GTM0.MCS07R2
#define GTM0MCS07R3 GTM0.MCS07R3
#define GTM0MCS07R4 GTM0.MCS07R4
#define GTM0MCS07R5 GTM0.MCS07R5
#define GTM0MCS07R6 GTM0.MCS07R6
#define GTM0MCS07R7 GTM0.MCS07R7
#define GTM0MCS07CTRL GTM0.MCS07CTRL
#define GTM0MCS07ACB GTM0.MCS07ACB
#define GTM0MCS07MHB GTM0.MCS07MHB
#define GTM0MCS07PC GTM0.MCS07PC
#define GTM0MCS07IRQNOTIFY GTM0.MCS07IRQNOTIFY
#define GTM0MCS07IRQEN GTM0.MCS07IRQEN
#define GTM0MCS07IRQFORCINT GTM0.MCS07IRQFORCINT
#define GTM0MCS07IRQMODE GTM0.MCS07IRQMODE
#define GTM0MCS07EIRQEN GTM0.MCS07EIRQEN
#define GTM0MCS08R0 GTM0.MCS08R0
#define GTM0MCS08R1 GTM0.MCS08R1
#define GTM0MCS08R2 GTM0.MCS08R2
#define GTM0MCS08R3 GTM0.MCS08R3
#define GTM0MCS08R4 GTM0.MCS08R4
#define GTM0MCS08R5 GTM0.MCS08R5
#define GTM0MCS08R6 GTM0.MCS08R6
#define GTM0MCS08R7 GTM0.MCS08R7
#define GTM0MCS08CTRL GTM0.MCS08CTRL
#define GTM0MCS08ACB GTM0.MCS08ACB
#define GTM0MCS08MHB GTM0.MCS08MHB
#define GTM0MCS08PC GTM0.MCS08PC
#define GTM0MCS08IRQNOTIFY GTM0.MCS08IRQNOTIFY
#define GTM0MCS08IRQEN GTM0.MCS08IRQEN
#define GTM0MCS08IRQFORCINT GTM0.MCS08IRQFORCINT
#define GTM0MCS08IRQMODE GTM0.MCS08IRQMODE
#define GTM0MCS08EIRQEN GTM0.MCS08EIRQEN
#define ECCGTM0CTL ECCGTM0.CTL
#define ECCGTM0TMC ECCGTM0.TMC
#define ECCGTM0TRC ECCGTM0.TRC
#define ECCGTM0TED ECCGTM0.TED
#define ECCGTM0EAD0 ECCGTM0.EAD0
#define ECCGTM1CTL ECCGTM1.CTL
#define ECCGTM1TMC ECCGTM1.TMC
#define ECCGTM1TRC ECCGTM1.TRC
#define ECCGTM1TED ECCGTM1.TED
#define ECCGTM1EAD0 ECCGTM1.EAD0
#define ECCGTM2CTL ECCGTM2.CTL
#define ECCGTM2TMC ECCGTM2.TMC
#define ECCGTM2TRC ECCGTM2.TRC
#define ECCGTM2TED ECCGTM2.TED
#define ECCGTM2EAD0 ECCGTM2.EAD0
#define ECCGTM3CTL ECCGTM3.CTL
#define ECCGTM3TMC ECCGTM3.TMC
#define ECCGTM3TRC ECCGTM3.TRC
#define ECCGTM3TED ECCGTM3.TED
#define ECCGTM3EAD0 ECCGTM3.EAD0
#define WDTA0WDTE WDTA0.WDTE
#define WDTA0EVAC WDTA0.EVAC
#define WDTA0REF WDTA0.REF
#define WDTA0MD WDTA0.MD
#define SWD0CLR SWD0.CLR
#define SWD0STS0 SWD0.STS0
#define SWD0STS1 SWD0.STS1
#define SWD0STSC SWD0.STSC
#define SWD0WDTE SWD0.WDTE
#define SWD0MD SWD0.MD
#define SWD0PCAD SWD0.PCAD
#define FSGD1APROT00 FSGD1A.PROT00.UINT32
#define FSGD1APROT00L FSGD1A.PROT00.UINT16[L]
#define FSGD1APROT00LL FSGD1A.PROT00.UINT8[LL]
#define FSGD1APROT00LH FSGD1A.PROT00.UINT8[LH]
#define FSGD1APROT00H FSGD1A.PROT00.UINT16[H]
#define FSGD1APROT00HL FSGD1A.PROT00.UINT8[HL]
#define FSGD1APROT00HH FSGD1A.PROT00.UINT8[HH]
#define FSGD1ASPID00 FSGD1A.SPID00.UINT32
#define FSGD1ASPID00L FSGD1A.SPID00.UINT16[L]
#define FSGD1ASPID00LL FSGD1A.SPID00.UINT8[LL]
#define FSGD1ASPID00LH FSGD1A.SPID00.UINT8[LH]
#define FSGD1ASPID00H FSGD1A.SPID00.UINT16[H]
#define FSGD1ASPID00HL FSGD1A.SPID00.UINT8[HL]
#define FSGD1ASPID00HH FSGD1A.SPID00.UINT8[HH]
#define FSGD1APROT01 FSGD1A.PROT01.UINT32
#define FSGD1APROT01L FSGD1A.PROT01.UINT16[L]
#define FSGD1APROT01LL FSGD1A.PROT01.UINT8[LL]
#define FSGD1APROT01LH FSGD1A.PROT01.UINT8[LH]
#define FSGD1APROT01H FSGD1A.PROT01.UINT16[H]
#define FSGD1APROT01HL FSGD1A.PROT01.UINT8[HL]
#define FSGD1APROT01HH FSGD1A.PROT01.UINT8[HH]
#define FSGD1ASPID01 FSGD1A.SPID01.UINT32
#define FSGD1ASPID01L FSGD1A.SPID01.UINT16[L]
#define FSGD1ASPID01LL FSGD1A.SPID01.UINT8[LL]
#define FSGD1ASPID01LH FSGD1A.SPID01.UINT8[LH]
#define FSGD1ASPID01H FSGD1A.SPID01.UINT16[H]
#define FSGD1ASPID01HL FSGD1A.SPID01.UINT8[HL]
#define FSGD1ASPID01HH FSGD1A.SPID01.UINT8[HH]
#define FSGD1APROT02 FSGD1A.PROT02.UINT32
#define FSGD1APROT02L FSGD1A.PROT02.UINT16[L]
#define FSGD1APROT02LL FSGD1A.PROT02.UINT8[LL]
#define FSGD1APROT02LH FSGD1A.PROT02.UINT8[LH]
#define FSGD1APROT02H FSGD1A.PROT02.UINT16[H]
#define FSGD1APROT02HL FSGD1A.PROT02.UINT8[HL]
#define FSGD1APROT02HH FSGD1A.PROT02.UINT8[HH]
#define FSGD1ASPID02 FSGD1A.SPID02.UINT32
#define FSGD1ASPID02L FSGD1A.SPID02.UINT16[L]
#define FSGD1ASPID02LL FSGD1A.SPID02.UINT8[LL]
#define FSGD1ASPID02LH FSGD1A.SPID02.UINT8[LH]
#define FSGD1ASPID02H FSGD1A.SPID02.UINT16[H]
#define FSGD1ASPID02HL FSGD1A.SPID02.UINT8[HL]
#define FSGD1ASPID02HH FSGD1A.SPID02.UINT8[HH]
#define FSGD1APROT03 FSGD1A.PROT03.UINT32
#define FSGD1APROT03L FSGD1A.PROT03.UINT16[L]
#define FSGD1APROT03LL FSGD1A.PROT03.UINT8[LL]
#define FSGD1APROT03LH FSGD1A.PROT03.UINT8[LH]
#define FSGD1APROT03H FSGD1A.PROT03.UINT16[H]
#define FSGD1APROT03HL FSGD1A.PROT03.UINT8[HL]
#define FSGD1APROT03HH FSGD1A.PROT03.UINT8[HH]
#define FSGD1ASPID03 FSGD1A.SPID03.UINT32
#define FSGD1ASPID03L FSGD1A.SPID03.UINT16[L]
#define FSGD1ASPID03LL FSGD1A.SPID03.UINT8[LL]
#define FSGD1ASPID03LH FSGD1A.SPID03.UINT8[LH]
#define FSGD1ASPID03H FSGD1A.SPID03.UINT16[H]
#define FSGD1ASPID03HL FSGD1A.SPID03.UINT8[HL]
#define FSGD1ASPID03HH FSGD1A.SPID03.UINT8[HH]
#define FSGD1APROT04 FSGD1A.PROT04.UINT32
#define FSGD1APROT04L FSGD1A.PROT04.UINT16[L]
#define FSGD1APROT04LL FSGD1A.PROT04.UINT8[LL]
#define FSGD1APROT04LH FSGD1A.PROT04.UINT8[LH]
#define FSGD1APROT04H FSGD1A.PROT04.UINT16[H]
#define FSGD1APROT04HL FSGD1A.PROT04.UINT8[HL]
#define FSGD1APROT04HH FSGD1A.PROT04.UINT8[HH]
#define FSGD1ASPID04 FSGD1A.SPID04.UINT32
#define FSGD1ASPID04L FSGD1A.SPID04.UINT16[L]
#define FSGD1ASPID04LL FSGD1A.SPID04.UINT8[LL]
#define FSGD1ASPID04LH FSGD1A.SPID04.UINT8[LH]
#define FSGD1ASPID04H FSGD1A.SPID04.UINT16[H]
#define FSGD1ASPID04HL FSGD1A.SPID04.UINT8[HL]
#define FSGD1ASPID04HH FSGD1A.SPID04.UINT8[HH]
#define FSGD1APROT05 FSGD1A.PROT05.UINT32
#define FSGD1APROT05L FSGD1A.PROT05.UINT16[L]
#define FSGD1APROT05LL FSGD1A.PROT05.UINT8[LL]
#define FSGD1APROT05LH FSGD1A.PROT05.UINT8[LH]
#define FSGD1APROT05H FSGD1A.PROT05.UINT16[H]
#define FSGD1APROT05HL FSGD1A.PROT05.UINT8[HL]
#define FSGD1APROT05HH FSGD1A.PROT05.UINT8[HH]
#define FSGD1ASPID05 FSGD1A.SPID05.UINT32
#define FSGD1ASPID05L FSGD1A.SPID05.UINT16[L]
#define FSGD1ASPID05LL FSGD1A.SPID05.UINT8[LL]
#define FSGD1ASPID05LH FSGD1A.SPID05.UINT8[LH]
#define FSGD1ASPID05H FSGD1A.SPID05.UINT16[H]
#define FSGD1ASPID05HL FSGD1A.SPID05.UINT8[HL]
#define FSGD1ASPID05HH FSGD1A.SPID05.UINT8[HH]
#define ERRSLV1CTL ERRSLV1.CTL
#define ERRSLV1STAT ERRSLV1.STAT
#define ERRSLV1TYPE ERRSLV1.TYPE
#define FSGD1BPROT00 FSGD1B.PROT00.UINT32
#define FSGD1BPROT00L FSGD1B.PROT00.UINT16[L]
#define FSGD1BPROT00LL FSGD1B.PROT00.UINT8[LL]
#define FSGD1BPROT00LH FSGD1B.PROT00.UINT8[LH]
#define FSGD1BPROT00H FSGD1B.PROT00.UINT16[H]
#define FSGD1BPROT00HL FSGD1B.PROT00.UINT8[HL]
#define FSGD1BPROT00HH FSGD1B.PROT00.UINT8[HH]
#define FSGD1BSPID00 FSGD1B.SPID00.UINT32
#define FSGD1BSPID00L FSGD1B.SPID00.UINT16[L]
#define FSGD1BSPID00LL FSGD1B.SPID00.UINT8[LL]
#define FSGD1BSPID00LH FSGD1B.SPID00.UINT8[LH]
#define FSGD1BSPID00H FSGD1B.SPID00.UINT16[H]
#define FSGD1BSPID00HL FSGD1B.SPID00.UINT8[HL]
#define FSGD1BSPID00HH FSGD1B.SPID00.UINT8[HH]
#define FSGD1BPROT01 FSGD1B.PROT01.UINT32
#define FSGD1BPROT01L FSGD1B.PROT01.UINT16[L]
#define FSGD1BPROT01LL FSGD1B.PROT01.UINT8[LL]
#define FSGD1BPROT01LH FSGD1B.PROT01.UINT8[LH]
#define FSGD1BPROT01H FSGD1B.PROT01.UINT16[H]
#define FSGD1BPROT01HL FSGD1B.PROT01.UINT8[HL]
#define FSGD1BPROT01HH FSGD1B.PROT01.UINT8[HH]
#define FSGD1BSPID01 FSGD1B.SPID01.UINT32
#define FSGD1BSPID01L FSGD1B.SPID01.UINT16[L]
#define FSGD1BSPID01LL FSGD1B.SPID01.UINT8[LL]
#define FSGD1BSPID01LH FSGD1B.SPID01.UINT8[LH]
#define FSGD1BSPID01H FSGD1B.SPID01.UINT16[H]
#define FSGD1BSPID01HL FSGD1B.SPID01.UINT8[HL]
#define FSGD1BSPID01HH FSGD1B.SPID01.UINT8[HH]
#define FSGD1BPROT06 FSGD1B.PROT06.UINT32
#define FSGD1BPROT06L FSGD1B.PROT06.UINT16[L]
#define FSGD1BPROT06LL FSGD1B.PROT06.UINT8[LL]
#define FSGD1BPROT06LH FSGD1B.PROT06.UINT8[LH]
#define FSGD1BPROT06H FSGD1B.PROT06.UINT16[H]
#define FSGD1BPROT06HL FSGD1B.PROT06.UINT8[HL]
#define FSGD1BPROT06HH FSGD1B.PROT06.UINT8[HH]
#define FSGD1BSPID06 FSGD1B.SPID06.UINT32
#define FSGD1BSPID06L FSGD1B.SPID06.UINT16[L]
#define FSGD1BSPID06LL FSGD1B.SPID06.UINT8[LL]
#define FSGD1BSPID06LH FSGD1B.SPID06.UINT8[LH]
#define FSGD1BSPID06H FSGD1B.SPID06.UINT16[H]
#define FSGD1BSPID06HL FSGD1B.SPID06.UINT8[HL]
#define FSGD1BSPID06HH FSGD1B.SPID06.UINT8[HH]
#define FSGD1BPROT07 FSGD1B.PROT07.UINT32
#define FSGD1BPROT07L FSGD1B.PROT07.UINT16[L]
#define FSGD1BPROT07LL FSGD1B.PROT07.UINT8[LL]
#define FSGD1BPROT07LH FSGD1B.PROT07.UINT8[LH]
#define FSGD1BPROT07H FSGD1B.PROT07.UINT16[H]
#define FSGD1BPROT07HL FSGD1B.PROT07.UINT8[HL]
#define FSGD1BPROT07HH FSGD1B.PROT07.UINT8[HH]
#define FSGD1BSPID07 FSGD1B.SPID07.UINT32
#define FSGD1BSPID07L FSGD1B.SPID07.UINT16[L]
#define FSGD1BSPID07LL FSGD1B.SPID07.UINT8[LL]
#define FSGD1BSPID07LH FSGD1B.SPID07.UINT8[LH]
#define FSGD1BSPID07H FSGD1B.SPID07.UINT16[H]
#define FSGD1BSPID07HL FSGD1B.SPID07.UINT8[HL]
#define FSGD1BSPID07HH FSGD1B.SPID07.UINT8[HH]
#define FSGD1BPROT10 FSGD1B.PROT10.UINT32
#define FSGD1BPROT10L FSGD1B.PROT10.UINT16[L]
#define FSGD1BPROT10LL FSGD1B.PROT10.UINT8[LL]
#define FSGD1BPROT10LH FSGD1B.PROT10.UINT8[LH]
#define FSGD1BPROT10H FSGD1B.PROT10.UINT16[H]
#define FSGD1BPROT10HL FSGD1B.PROT10.UINT8[HL]
#define FSGD1BPROT10HH FSGD1B.PROT10.UINT8[HH]
#define FSGD1BSPID10 FSGD1B.SPID10.UINT32
#define FSGD1BSPID10L FSGD1B.SPID10.UINT16[L]
#define FSGD1BSPID10LL FSGD1B.SPID10.UINT8[LL]
#define FSGD1BSPID10LH FSGD1B.SPID10.UINT8[LH]
#define FSGD1BSPID10H FSGD1B.SPID10.UINT16[H]
#define FSGD1BSPID10HL FSGD1B.SPID10.UINT8[HL]
#define FSGD1BSPID10HH FSGD1B.SPID10.UINT8[HH]
#define FSGD1BPROT11 FSGD1B.PROT11.UINT32
#define FSGD1BPROT11L FSGD1B.PROT11.UINT16[L]
#define FSGD1BPROT11LL FSGD1B.PROT11.UINT8[LL]
#define FSGD1BPROT11LH FSGD1B.PROT11.UINT8[LH]
#define FSGD1BPROT11H FSGD1B.PROT11.UINT16[H]
#define FSGD1BPROT11HL FSGD1B.PROT11.UINT8[HL]
#define FSGD1BPROT11HH FSGD1B.PROT11.UINT8[HH]
#define FSGD1BSPID11 FSGD1B.SPID11.UINT32
#define FSGD1BSPID11L FSGD1B.SPID11.UINT16[L]
#define FSGD1BSPID11LL FSGD1B.SPID11.UINT8[LL]
#define FSGD1BSPID11LH FSGD1B.SPID11.UINT8[LH]
#define FSGD1BSPID11H FSGD1B.SPID11.UINT16[H]
#define FSGD1BSPID11HL FSGD1B.SPID11.UINT8[HL]
#define FSGD1BSPID11HH FSGD1B.SPID11.UINT8[HH]
#define FSGD1BPROT12 FSGD1B.PROT12.UINT32
#define FSGD1BPROT12L FSGD1B.PROT12.UINT16[L]
#define FSGD1BPROT12LL FSGD1B.PROT12.UINT8[LL]
#define FSGD1BPROT12LH FSGD1B.PROT12.UINT8[LH]
#define FSGD1BPROT12H FSGD1B.PROT12.UINT16[H]
#define FSGD1BPROT12HL FSGD1B.PROT12.UINT8[HL]
#define FSGD1BPROT12HH FSGD1B.PROT12.UINT8[HH]
#define FSGD1BSPID12 FSGD1B.SPID12.UINT32
#define FSGD1BSPID12L FSGD1B.SPID12.UINT16[L]
#define FSGD1BSPID12LL FSGD1B.SPID12.UINT8[LL]
#define FSGD1BSPID12LH FSGD1B.SPID12.UINT8[LH]
#define FSGD1BSPID12H FSGD1B.SPID12.UINT16[H]
#define FSGD1BSPID12HL FSGD1B.SPID12.UINT8[HL]
#define FSGD1BSPID12HH FSGD1B.SPID12.UINT8[HH]
#define FSGD1BPROT13 FSGD1B.PROT13.UINT32
#define FSGD1BPROT13L FSGD1B.PROT13.UINT16[L]
#define FSGD1BPROT13LL FSGD1B.PROT13.UINT8[LL]
#define FSGD1BPROT13LH FSGD1B.PROT13.UINT8[LH]
#define FSGD1BPROT13H FSGD1B.PROT13.UINT16[H]
#define FSGD1BPROT13HL FSGD1B.PROT13.UINT8[HL]
#define FSGD1BPROT13HH FSGD1B.PROT13.UINT8[HH]
#define FSGD1BSPID13 FSGD1B.SPID13.UINT32
#define FSGD1BSPID13L FSGD1B.SPID13.UINT16[L]
#define FSGD1BSPID13LL FSGD1B.SPID13.UINT8[LL]
#define FSGD1BSPID13LH FSGD1B.SPID13.UINT8[LH]
#define FSGD1BSPID13H FSGD1B.SPID13.UINT16[H]
#define FSGD1BSPID13HL FSGD1B.SPID13.UINT8[HL]
#define FSGD1BSPID13HH FSGD1B.SPID13.UINT8[HH]
#define ERRSLV1AICTL ERRSLV1AI.CTL
#define ERRSLV1AISTAT ERRSLV1AI.STAT
#define ERRSLV1AITYPE ERRSLV1AI.TYPE
#define MCAN0CREL MCAN0.CREL.UINT32
#define MCAN0CRELL MCAN0.CREL.UINT16[L]
#define MCAN0CRELLL MCAN0.CREL.UINT8[LL]
#define MCAN0CRELLH MCAN0.CREL.UINT8[LH]
#define MCAN0CRELH MCAN0.CREL.UINT16[H]
#define MCAN0CRELHL MCAN0.CREL.UINT8[HL]
#define MCAN0CRELHH MCAN0.CREL.UINT8[HH]
#define MCAN0ENDN MCAN0.ENDN.UINT32
#define MCAN0ENDNL MCAN0.ENDN.UINT16[L]
#define MCAN0ENDNLL MCAN0.ENDN.UINT8[LL]
#define MCAN0ENDNLH MCAN0.ENDN.UINT8[LH]
#define MCAN0ENDNH MCAN0.ENDN.UINT16[H]
#define MCAN0ENDNHL MCAN0.ENDN.UINT8[HL]
#define MCAN0ENDNHH MCAN0.ENDN.UINT8[HH]
#define MCAN0DBTP MCAN0.DBTP.UINT32
#define MCAN0FBTP MCAN0.DBTP.UINT32
#define MCAN0DBTPL MCAN0.DBTP.UINT16[L]
#define MCAN0FBTPL MCAN0.DBTP.UINT16[L]
#define MCAN0DBTPLL MCAN0.DBTP.UINT8[LL]
#define MCAN0FBTPLL MCAN0.DBTP.UINT8[LL]
#define MCAN0DBTPLH MCAN0.DBTP.UINT8[LH]
#define MCAN0FBTPLH MCAN0.DBTP.UINT8[LH]
#define MCAN0DBTPH MCAN0.DBTP.UINT16[H]
#define MCAN0FBTPH MCAN0.DBTP.UINT16[H]
#define MCAN0DBTPHL MCAN0.DBTP.UINT8[HL]
#define MCAN0FBTPHL MCAN0.DBTP.UINT8[HL]
#define MCAN0DBTPHH MCAN0.DBTP.UINT8[HH]
#define MCAN0FBTPHH MCAN0.DBTP.UINT8[HH]
#define MCAN0TEST MCAN0.TEST.UINT32
#define MCAN0TESTL MCAN0.TEST.UINT16[L]
#define MCAN0TESTLL MCAN0.TEST.UINT8[LL]
#define MCAN0TESTLH MCAN0.TEST.UINT8[LH]
#define MCAN0RWD MCAN0.RWD.UINT32
#define MCAN0RWDL MCAN0.RWD.UINT16[L]
#define MCAN0RWDLL MCAN0.RWD.UINT8[LL]
#define MCAN0RWDLH MCAN0.RWD.UINT8[LH]
#define MCAN0CCCR MCAN0.CCCR.UINT32
#define MCAN0CCCRL MCAN0.CCCR.UINT16[L]
#define MCAN0CCCRLL MCAN0.CCCR.UINT8[LL]
#define MCAN0CCCRLH MCAN0.CCCR.UINT8[LH]
#define MCAN0BTP MCAN0.BTP.UINT32
#define MCAN0NBTP MCAN0.BTP.UINT32
#define MCAN0BTPL MCAN0.BTP.UINT16[L]
#define MCAN0NBTPL MCAN0.BTP.UINT16[L]
#define MCAN0BTPLL MCAN0.BTP.UINT8[LL]
#define MCAN0NBTPLL MCAN0.BTP.UINT8[LL]
#define MCAN0BTPLH MCAN0.BTP.UINT8[LH]
#define MCAN0NBTPLH MCAN0.BTP.UINT8[LH]
#define MCAN0BTPH MCAN0.BTP.UINT16[H]
#define MCAN0NBTPH MCAN0.BTP.UINT16[H]
#define MCAN0BTPHL MCAN0.BTP.UINT8[HL]
#define MCAN0NBTPHL MCAN0.BTP.UINT8[HL]
#define MCAN0BTPHH MCAN0.BTP.UINT8[HH]
#define MCAN0NBTPHH MCAN0.BTP.UINT8[HH]
#define MCAN0TSCC MCAN0.TSCC.UINT32
#define MCAN0TSCCL MCAN0.TSCC.UINT16[L]
#define MCAN0TSCCLL MCAN0.TSCC.UINT8[LL]
#define MCAN0TSCCLH MCAN0.TSCC.UINT8[LH]
#define MCAN0TSCCH MCAN0.TSCC.UINT16[H]
#define MCAN0TSCCHL MCAN0.TSCC.UINT8[HL]
#define MCAN0TSCCHH MCAN0.TSCC.UINT8[HH]
#define MCAN0TSCV MCAN0.TSCV.UINT32
#define MCAN0TSCVL MCAN0.TSCV.UINT16[L]
#define MCAN0TSCVLL MCAN0.TSCV.UINT8[LL]
#define MCAN0TSCVLH MCAN0.TSCV.UINT8[LH]
#define MCAN0TOCC MCAN0.TOCC.UINT32
#define MCAN0TOCCL MCAN0.TOCC.UINT16[L]
#define MCAN0TOCCLL MCAN0.TOCC.UINT8[LL]
#define MCAN0TOCCLH MCAN0.TOCC.UINT8[LH]
#define MCAN0TOCCH MCAN0.TOCC.UINT16[H]
#define MCAN0TOCCHL MCAN0.TOCC.UINT8[HL]
#define MCAN0TOCCHH MCAN0.TOCC.UINT8[HH]
#define MCAN0TOCV MCAN0.TOCV.UINT32
#define MCAN0TOCVL MCAN0.TOCV.UINT16[L]
#define MCAN0TOCVLL MCAN0.TOCV.UINT8[LL]
#define MCAN0TOCVLH MCAN0.TOCV.UINT8[LH]
#define MCAN0ECR MCAN0.ECR.UINT32
#define MCAN0ECRL MCAN0.ECR.UINT16[L]
#define MCAN0ECRLL MCAN0.ECR.UINT8[LL]
#define MCAN0ECRLH MCAN0.ECR.UINT8[LH]
#define MCAN0ECRH MCAN0.ECR.UINT16[H]
#define MCAN0ECRHL MCAN0.ECR.UINT8[HL]
#define MCAN0ECRHH MCAN0.ECR.UINT8[HH]
#define MCAN0PSR MCAN0.PSR.UINT32
#define MCAN0PSRL MCAN0.PSR.UINT16[L]
#define MCAN0PSRLL MCAN0.PSR.UINT8[LL]
#define MCAN0PSRLH MCAN0.PSR.UINT8[LH]
#define MCAN0TDCR MCAN0.TDCR.UINT32
#define MCAN0TDCRL MCAN0.TDCR.UINT16[L]
#define MCAN0TDCRLL MCAN0.TDCR.UINT8[LL]
#define MCAN0TDCRLH MCAN0.TDCR.UINT8[LH]
#define MCAN0IR MCAN0.IR.UINT32
#define MCAN0IRL MCAN0.IR.UINT16[L]
#define MCAN0IRLL MCAN0.IR.UINT8[LL]
#define MCAN0IRLH MCAN0.IR.UINT8[LH]
#define MCAN0IRH MCAN0.IR.UINT16[H]
#define MCAN0IRHL MCAN0.IR.UINT8[HL]
#define MCAN0IRHH MCAN0.IR.UINT8[HH]
#define MCAN0IE MCAN0.IE.UINT32
#define MCAN0IEL MCAN0.IE.UINT16[L]
#define MCAN0IELL MCAN0.IE.UINT8[LL]
#define MCAN0IELH MCAN0.IE.UINT8[LH]
#define MCAN0IEH MCAN0.IE.UINT16[H]
#define MCAN0IEHL MCAN0.IE.UINT8[HL]
#define MCAN0IEHH MCAN0.IE.UINT8[HH]
#define MCAN0ILS MCAN0.ILS.UINT32
#define MCAN0ILSL MCAN0.ILS.UINT16[L]
#define MCAN0ILSLL MCAN0.ILS.UINT8[LL]
#define MCAN0ILSLH MCAN0.ILS.UINT8[LH]
#define MCAN0ILSH MCAN0.ILS.UINT16[H]
#define MCAN0ILSHL MCAN0.ILS.UINT8[HL]
#define MCAN0ILSHH MCAN0.ILS.UINT8[HH]
#define MCAN0ILE MCAN0.ILE.UINT32
#define MCAN0ILEL MCAN0.ILE.UINT16[L]
#define MCAN0ILELL MCAN0.ILE.UINT8[LL]
#define MCAN0ILELH MCAN0.ILE.UINT8[LH]
#define MCAN0GFC MCAN0.GFC.UINT32
#define MCAN0GFCL MCAN0.GFC.UINT16[L]
#define MCAN0GFCLL MCAN0.GFC.UINT8[LL]
#define MCAN0GFCLH MCAN0.GFC.UINT8[LH]
#define MCAN0SIDFC MCAN0.SIDFC.UINT32
#define MCAN0SIDFCL MCAN0.SIDFC.UINT16[L]
#define MCAN0SIDFCLL MCAN0.SIDFC.UINT8[LL]
#define MCAN0SIDFCLH MCAN0.SIDFC.UINT8[LH]
#define MCAN0SIDFCH MCAN0.SIDFC.UINT16[H]
#define MCAN0SIDFCHL MCAN0.SIDFC.UINT8[HL]
#define MCAN0SIDFCHH MCAN0.SIDFC.UINT8[HH]
#define MCAN0XIDFC MCAN0.XIDFC.UINT32
#define MCAN0XIDFCL MCAN0.XIDFC.UINT16[L]
#define MCAN0XIDFCLL MCAN0.XIDFC.UINT8[LL]
#define MCAN0XIDFCLH MCAN0.XIDFC.UINT8[LH]
#define MCAN0XIDFCH MCAN0.XIDFC.UINT16[H]
#define MCAN0XIDFCHL MCAN0.XIDFC.UINT8[HL]
#define MCAN0XIDFCHH MCAN0.XIDFC.UINT8[HH]
#define MCAN0XIDAM MCAN0.XIDAM.UINT32
#define MCAN0XIDAML MCAN0.XIDAM.UINT16[L]
#define MCAN0XIDAMLL MCAN0.XIDAM.UINT8[LL]
#define MCAN0XIDAMLH MCAN0.XIDAM.UINT8[LH]
#define MCAN0XIDAMH MCAN0.XIDAM.UINT16[H]
#define MCAN0XIDAMHL MCAN0.XIDAM.UINT8[HL]
#define MCAN0XIDAMHH MCAN0.XIDAM.UINT8[HH]
#define MCAN0HPMS MCAN0.HPMS.UINT32
#define MCAN0HPMSL MCAN0.HPMS.UINT16[L]
#define MCAN0HPMSLL MCAN0.HPMS.UINT8[LL]
#define MCAN0HPMSLH MCAN0.HPMS.UINT8[LH]
#define MCAN0NDAT1 MCAN0.NDAT1.UINT32
#define MCAN0NDAT1L MCAN0.NDAT1.UINT16[L]
#define MCAN0NDAT1LL MCAN0.NDAT1.UINT8[LL]
#define MCAN0NDAT1LH MCAN0.NDAT1.UINT8[LH]
#define MCAN0NDAT1H MCAN0.NDAT1.UINT16[H]
#define MCAN0NDAT1HL MCAN0.NDAT1.UINT8[HL]
#define MCAN0NDAT1HH MCAN0.NDAT1.UINT8[HH]
#define MCAN0NDAT2 MCAN0.NDAT2.UINT32
#define MCAN0NDAT2L MCAN0.NDAT2.UINT16[L]
#define MCAN0NDAT2LL MCAN0.NDAT2.UINT8[LL]
#define MCAN0NDAT2LH MCAN0.NDAT2.UINT8[LH]
#define MCAN0NDAT2H MCAN0.NDAT2.UINT16[H]
#define MCAN0NDAT2HL MCAN0.NDAT2.UINT8[HL]
#define MCAN0NDAT2HH MCAN0.NDAT2.UINT8[HH]
#define MCAN0RXF0C MCAN0.RXF0C.UINT32
#define MCAN0RXF0CL MCAN0.RXF0C.UINT16[L]
#define MCAN0RXF0CLL MCAN0.RXF0C.UINT8[LL]
#define MCAN0RXF0CLH MCAN0.RXF0C.UINT8[LH]
#define MCAN0RXF0CH MCAN0.RXF0C.UINT16[H]
#define MCAN0RXF0CHL MCAN0.RXF0C.UINT8[HL]
#define MCAN0RXF0CHH MCAN0.RXF0C.UINT8[HH]
#define MCAN0RXF0S MCAN0.RXF0S.UINT32
#define MCAN0RXF0SL MCAN0.RXF0S.UINT16[L]
#define MCAN0RXF0SLL MCAN0.RXF0S.UINT8[LL]
#define MCAN0RXF0SLH MCAN0.RXF0S.UINT8[LH]
#define MCAN0RXF0SH MCAN0.RXF0S.UINT16[H]
#define MCAN0RXF0SHL MCAN0.RXF0S.UINT8[HL]
#define MCAN0RXF0SHH MCAN0.RXF0S.UINT8[HH]
#define MCAN0RXF0A MCAN0.RXF0A.UINT32
#define MCAN0RXF0AL MCAN0.RXF0A.UINT16[L]
#define MCAN0RXF0ALL MCAN0.RXF0A.UINT8[LL]
#define MCAN0RXF0ALH MCAN0.RXF0A.UINT8[LH]
#define MCAN0RXBC MCAN0.RXBC.UINT32
#define MCAN0RXBCL MCAN0.RXBC.UINT16[L]
#define MCAN0RXBCLL MCAN0.RXBC.UINT8[LL]
#define MCAN0RXBCLH MCAN0.RXBC.UINT8[LH]
#define MCAN0RXF1C MCAN0.RXF1C.UINT32
#define MCAN0RXF1CL MCAN0.RXF1C.UINT16[L]
#define MCAN0RXF1CLL MCAN0.RXF1C.UINT8[LL]
#define MCAN0RXF1CLH MCAN0.RXF1C.UINT8[LH]
#define MCAN0RXF1CH MCAN0.RXF1C.UINT16[H]
#define MCAN0RXF1CHL MCAN0.RXF1C.UINT8[HL]
#define MCAN0RXF1CHH MCAN0.RXF1C.UINT8[HH]
#define MCAN0RXF1S MCAN0.RXF1S.UINT32
#define MCAN0RXF1SL MCAN0.RXF1S.UINT16[L]
#define MCAN0RXF1SLL MCAN0.RXF1S.UINT8[LL]
#define MCAN0RXF1SLH MCAN0.RXF1S.UINT8[LH]
#define MCAN0RXF1SH MCAN0.RXF1S.UINT16[H]
#define MCAN0RXF1SHL MCAN0.RXF1S.UINT8[HL]
#define MCAN0RXF1SHH MCAN0.RXF1S.UINT8[HH]
#define MCAN0RXF1A MCAN0.RXF1A.UINT32
#define MCAN0RXF1AL MCAN0.RXF1A.UINT16[L]
#define MCAN0RXF1ALL MCAN0.RXF1A.UINT8[LL]
#define MCAN0RXF1ALH MCAN0.RXF1A.UINT8[LH]
#define MCAN0RXESC MCAN0.RXESC.UINT32
#define MCAN0RXESCL MCAN0.RXESC.UINT16[L]
#define MCAN0RXESCLL MCAN0.RXESC.UINT8[LL]
#define MCAN0RXESCLH MCAN0.RXESC.UINT8[LH]
#define MCAN0TXBC MCAN0.TXBC.UINT32
#define MCAN0TXBCL MCAN0.TXBC.UINT16[L]
#define MCAN0TXBCLL MCAN0.TXBC.UINT8[LL]
#define MCAN0TXBCLH MCAN0.TXBC.UINT8[LH]
#define MCAN0TXBCH MCAN0.TXBC.UINT16[H]
#define MCAN0TXBCHL MCAN0.TXBC.UINT8[HL]
#define MCAN0TXBCHH MCAN0.TXBC.UINT8[HH]
#define MCAN0TXFQS MCAN0.TXFQS.UINT32
#define MCAN0TXFQSL MCAN0.TXFQS.UINT16[L]
#define MCAN0TXFQSLL MCAN0.TXFQS.UINT8[LL]
#define MCAN0TXFQSLH MCAN0.TXFQS.UINT8[LH]
#define MCAN0TXFQSH MCAN0.TXFQS.UINT16[H]
#define MCAN0TXFQSHL MCAN0.TXFQS.UINT8[HL]
#define MCAN0TXFQSHH MCAN0.TXFQS.UINT8[HH]
#define MCAN0TXESC MCAN0.TXESC.UINT32
#define MCAN0TXESCL MCAN0.TXESC.UINT16[L]
#define MCAN0TXESCLL MCAN0.TXESC.UINT8[LL]
#define MCAN0TXESCLH MCAN0.TXESC.UINT8[LH]
#define MCAN0TXBRP MCAN0.TXBRP.UINT32
#define MCAN0TXBRPL MCAN0.TXBRP.UINT16[L]
#define MCAN0TXBRPLL MCAN0.TXBRP.UINT8[LL]
#define MCAN0TXBRPLH MCAN0.TXBRP.UINT8[LH]
#define MCAN0TXBRPH MCAN0.TXBRP.UINT16[H]
#define MCAN0TXBRPHL MCAN0.TXBRP.UINT8[HL]
#define MCAN0TXBRPHH MCAN0.TXBRP.UINT8[HH]
#define MCAN0TXBAR MCAN0.TXBAR.UINT32
#define MCAN0TXBARL MCAN0.TXBAR.UINT16[L]
#define MCAN0TXBARLL MCAN0.TXBAR.UINT8[LL]
#define MCAN0TXBARLH MCAN0.TXBAR.UINT8[LH]
#define MCAN0TXBARH MCAN0.TXBAR.UINT16[H]
#define MCAN0TXBARHL MCAN0.TXBAR.UINT8[HL]
#define MCAN0TXBARHH MCAN0.TXBAR.UINT8[HH]
#define MCAN0TXBCR MCAN0.TXBCR.UINT32
#define MCAN0TXBCRL MCAN0.TXBCR.UINT16[L]
#define MCAN0TXBCRLL MCAN0.TXBCR.UINT8[LL]
#define MCAN0TXBCRLH MCAN0.TXBCR.UINT8[LH]
#define MCAN0TXBCRH MCAN0.TXBCR.UINT16[H]
#define MCAN0TXBCRHL MCAN0.TXBCR.UINT8[HL]
#define MCAN0TXBCRHH MCAN0.TXBCR.UINT8[HH]
#define MCAN0TXBTO MCAN0.TXBTO.UINT32
#define MCAN0TXBTOL MCAN0.TXBTO.UINT16[L]
#define MCAN0TXBTOLL MCAN0.TXBTO.UINT8[LL]
#define MCAN0TXBTOLH MCAN0.TXBTO.UINT8[LH]
#define MCAN0TXBTOH MCAN0.TXBTO.UINT16[H]
#define MCAN0TXBTOHL MCAN0.TXBTO.UINT8[HL]
#define MCAN0TXBTOHH MCAN0.TXBTO.UINT8[HH]
#define MCAN0TXBCF MCAN0.TXBCF.UINT32
#define MCAN0TXBCFL MCAN0.TXBCF.UINT16[L]
#define MCAN0TXBCFLL MCAN0.TXBCF.UINT8[LL]
#define MCAN0TXBCFLH MCAN0.TXBCF.UINT8[LH]
#define MCAN0TXBCFH MCAN0.TXBCF.UINT16[H]
#define MCAN0TXBCFHL MCAN0.TXBCF.UINT8[HL]
#define MCAN0TXBCFHH MCAN0.TXBCF.UINT8[HH]
#define MCAN0TXBTIE MCAN0.TXBTIE.UINT32
#define MCAN0TXBTIEL MCAN0.TXBTIE.UINT16[L]
#define MCAN0TXBTIELL MCAN0.TXBTIE.UINT8[LL]
#define MCAN0TXBTIELH MCAN0.TXBTIE.UINT8[LH]
#define MCAN0TXBTIEH MCAN0.TXBTIE.UINT16[H]
#define MCAN0TXBTIEHL MCAN0.TXBTIE.UINT8[HL]
#define MCAN0TXBTIEHH MCAN0.TXBTIE.UINT8[HH]
#define MCAN0TXBCIE MCAN0.TXBCIE.UINT32
#define MCAN0TXBCIEL MCAN0.TXBCIE.UINT16[L]
#define MCAN0TXBCIELL MCAN0.TXBCIE.UINT8[LL]
#define MCAN0TXBCIELH MCAN0.TXBCIE.UINT8[LH]
#define MCAN0TXBCIEH MCAN0.TXBCIE.UINT16[H]
#define MCAN0TXBCIEHL MCAN0.TXBCIE.UINT8[HL]
#define MCAN0TXBCIEHH MCAN0.TXBCIE.UINT8[HH]
#define MCAN0TXEFC MCAN0.TXEFC.UINT32
#define MCAN0TXEFCL MCAN0.TXEFC.UINT16[L]
#define MCAN0TXEFCLL MCAN0.TXEFC.UINT8[LL]
#define MCAN0TXEFCLH MCAN0.TXEFC.UINT8[LH]
#define MCAN0TXEFCH MCAN0.TXEFC.UINT16[H]
#define MCAN0TXEFCHL MCAN0.TXEFC.UINT8[HL]
#define MCAN0TXEFCHH MCAN0.TXEFC.UINT8[HH]
#define MCAN0TXEFS MCAN0.TXEFS.UINT32
#define MCAN0TXEFSL MCAN0.TXEFS.UINT16[L]
#define MCAN0TXEFSLL MCAN0.TXEFS.UINT8[LL]
#define MCAN0TXEFSLH MCAN0.TXEFS.UINT8[LH]
#define MCAN0TXEFSH MCAN0.TXEFS.UINT16[H]
#define MCAN0TXEFSHL MCAN0.TXEFS.UINT8[HL]
#define MCAN0TXEFSHH MCAN0.TXEFS.UINT8[HH]
#define MCAN0TXEFA MCAN0.TXEFA.UINT32
#define MCAN0TXEFAL MCAN0.TXEFA.UINT16[L]
#define MCAN0TXEFALL MCAN0.TXEFA.UINT8[LL]
#define MCAN0TXEFALH MCAN0.TXEFA.UINT8[LH]
#define DCRB1CIN DCRB1.CIN
#define DCRB1COUT DCRB1.COUT
#define DCRB1CTL DCRB1.CTL
#define DCRB3CIN DCRB3.CIN
#define DCRB3COUT DCRB3.COUT
#define DCRB3CTL DCRB3.CTL
#define CLMA0CTL0 CLMA0.CTL0
#define CLMA0CMPL CLMA0.CMPL
#define CLMA0CMPH CLMA0.CMPH
#define CLMA0PCMD CLMA0.PCMD
#define CLMA0PS CLMA0.PS
#define CLMA0EMU0 CLMA0.EMU0
#define CLMA1CTL0 CLMA1.CTL0
#define CLMA1CMPL CLMA1.CMPL
#define CLMA1CMPH CLMA1.CMPH
#define CLMA1PCMD CLMA1.PCMD
#define CLMA1PS CLMA1.PS
#define CLMA1EMU0 CLMA1.EMU0
#define CLMA2CTL0 CLMA2.CTL0
#define CLMA2CMPL CLMA2.CMPL
#define CLMA2CMPH CLMA2.CMPH
#define CLMA2PCMD CLMA2.PCMD
#define CLMA2PS CLMA2.PS
#define CLMA2EMU0 CLMA2.EMU0
#define CLMA3CTL0 CLMA3.CTL0
#define CLMA3CMPL CLMA3.CMPL
#define CLMA3CMPH CLMA3.CMPH
#define CLMA3PCMD CLMA3.PCMD
#define CLMA3PS CLMA3.PS
#define CLMA3EMU0 CLMA3.EMU0
#define CLMA5CTL0 CLMA5.CTL0
#define CLMA5CTL1 CLMA5.CTL1
#define CLMA5CMPL CLMA5.CMPL
#define CLMA5CMPH CLMA5.CMPH
#define CLMA5PCMD CLMA5.PCMD
#define CLMA5PS CLMA5.PS
#define CLMA5EMU0 CLMA5.EMU0
#define FSGD4APROT00 FSGD4A.PROT00.UINT32
#define FSGD4APROT00L FSGD4A.PROT00.UINT16[L]
#define FSGD4APROT00LL FSGD4A.PROT00.UINT8[LL]
#define FSGD4APROT00LH FSGD4A.PROT00.UINT8[LH]
#define FSGD4APROT00H FSGD4A.PROT00.UINT16[H]
#define FSGD4APROT00HL FSGD4A.PROT00.UINT8[HL]
#define FSGD4APROT00HH FSGD4A.PROT00.UINT8[HH]
#define FSGD4ASPID00 FSGD4A.SPID00.UINT32
#define FSGD4ASPID00L FSGD4A.SPID00.UINT16[L]
#define FSGD4ASPID00LL FSGD4A.SPID00.UINT8[LL]
#define FSGD4ASPID00LH FSGD4A.SPID00.UINT8[LH]
#define FSGD4ASPID00H FSGD4A.SPID00.UINT16[H]
#define FSGD4ASPID00HL FSGD4A.SPID00.UINT8[HL]
#define FSGD4ASPID00HH FSGD4A.SPID00.UINT8[HH]
#define FSGD4APROT01 FSGD4A.PROT01.UINT32
#define FSGD4APROT01L FSGD4A.PROT01.UINT16[L]
#define FSGD4APROT01LL FSGD4A.PROT01.UINT8[LL]
#define FSGD4APROT01LH FSGD4A.PROT01.UINT8[LH]
#define FSGD4APROT01H FSGD4A.PROT01.UINT16[H]
#define FSGD4APROT01HL FSGD4A.PROT01.UINT8[HL]
#define FSGD4APROT01HH FSGD4A.PROT01.UINT8[HH]
#define FSGD4ASPID01 FSGD4A.SPID01.UINT32
#define FSGD4ASPID01L FSGD4A.SPID01.UINT16[L]
#define FSGD4ASPID01LL FSGD4A.SPID01.UINT8[LL]
#define FSGD4ASPID01LH FSGD4A.SPID01.UINT8[LH]
#define FSGD4ASPID01H FSGD4A.SPID01.UINT16[H]
#define FSGD4ASPID01HL FSGD4A.SPID01.UINT8[HL]
#define FSGD4ASPID01HH FSGD4A.SPID01.UINT8[HH]
#define FSGD4APROT02 FSGD4A.PROT02.UINT32
#define FSGD4APROT02L FSGD4A.PROT02.UINT16[L]
#define FSGD4APROT02LL FSGD4A.PROT02.UINT8[LL]
#define FSGD4APROT02LH FSGD4A.PROT02.UINT8[LH]
#define FSGD4APROT02H FSGD4A.PROT02.UINT16[H]
#define FSGD4APROT02HL FSGD4A.PROT02.UINT8[HL]
#define FSGD4APROT02HH FSGD4A.PROT02.UINT8[HH]
#define FSGD4ASPID02 FSGD4A.SPID02.UINT32
#define FSGD4ASPID02L FSGD4A.SPID02.UINT16[L]
#define FSGD4ASPID02LL FSGD4A.SPID02.UINT8[LL]
#define FSGD4ASPID02LH FSGD4A.SPID02.UINT8[LH]
#define FSGD4ASPID02H FSGD4A.SPID02.UINT16[H]
#define FSGD4ASPID02HL FSGD4A.SPID02.UINT8[HL]
#define FSGD4ASPID02HH FSGD4A.SPID02.UINT8[HH]
#define FSGD4APROT03 FSGD4A.PROT03.UINT32
#define FSGD4APROT03L FSGD4A.PROT03.UINT16[L]
#define FSGD4APROT03LL FSGD4A.PROT03.UINT8[LL]
#define FSGD4APROT03LH FSGD4A.PROT03.UINT8[LH]
#define FSGD4APROT03H FSGD4A.PROT03.UINT16[H]
#define FSGD4APROT03HL FSGD4A.PROT03.UINT8[HL]
#define FSGD4APROT03HH FSGD4A.PROT03.UINT8[HH]
#define FSGD4ASPID03 FSGD4A.SPID03.UINT32
#define FSGD4ASPID03L FSGD4A.SPID03.UINT16[L]
#define FSGD4ASPID03LL FSGD4A.SPID03.UINT8[LL]
#define FSGD4ASPID03LH FSGD4A.SPID03.UINT8[LH]
#define FSGD4ASPID03H FSGD4A.SPID03.UINT16[H]
#define FSGD4ASPID03HL FSGD4A.SPID03.UINT8[HL]
#define FSGD4ASPID03HH FSGD4A.SPID03.UINT8[HH]
#define FSGD4APROT04 FSGD4A.PROT04.UINT32
#define FSGD4APROT04L FSGD4A.PROT04.UINT16[L]
#define FSGD4APROT04LL FSGD4A.PROT04.UINT8[LL]
#define FSGD4APROT04LH FSGD4A.PROT04.UINT8[LH]
#define FSGD4APROT04H FSGD4A.PROT04.UINT16[H]
#define FSGD4APROT04HL FSGD4A.PROT04.UINT8[HL]
#define FSGD4APROT04HH FSGD4A.PROT04.UINT8[HH]
#define FSGD4ASPID04 FSGD4A.SPID04.UINT32
#define FSGD4ASPID04L FSGD4A.SPID04.UINT16[L]
#define FSGD4ASPID04LL FSGD4A.SPID04.UINT8[LL]
#define FSGD4ASPID04LH FSGD4A.SPID04.UINT8[LH]
#define FSGD4ASPID04H FSGD4A.SPID04.UINT16[H]
#define FSGD4ASPID04HL FSGD4A.SPID04.UINT8[HL]
#define FSGD4ASPID04HH FSGD4A.SPID04.UINT8[HH]
#define FSGD4APROT05 FSGD4A.PROT05.UINT32
#define FSGD4APROT05L FSGD4A.PROT05.UINT16[L]
#define FSGD4APROT05LL FSGD4A.PROT05.UINT8[LL]
#define FSGD4APROT05LH FSGD4A.PROT05.UINT8[LH]
#define FSGD4APROT05H FSGD4A.PROT05.UINT16[H]
#define FSGD4APROT05HL FSGD4A.PROT05.UINT8[HL]
#define FSGD4APROT05HH FSGD4A.PROT05.UINT8[HH]
#define FSGD4ASPID05 FSGD4A.SPID05.UINT32
#define FSGD4ASPID05L FSGD4A.SPID05.UINT16[L]
#define FSGD4ASPID05LL FSGD4A.SPID05.UINT8[LL]
#define FSGD4ASPID05LH FSGD4A.SPID05.UINT8[LH]
#define FSGD4ASPID05H FSGD4A.SPID05.UINT16[H]
#define FSGD4ASPID05HL FSGD4A.SPID05.UINT8[HL]
#define FSGD4ASPID05HH FSGD4A.SPID05.UINT8[HH]
#define FSGD4APROT06 FSGD4A.PROT06.UINT32
#define FSGD4APROT06L FSGD4A.PROT06.UINT16[L]
#define FSGD4APROT06LL FSGD4A.PROT06.UINT8[LL]
#define FSGD4APROT06LH FSGD4A.PROT06.UINT8[LH]
#define FSGD4APROT06H FSGD4A.PROT06.UINT16[H]
#define FSGD4APROT06HL FSGD4A.PROT06.UINT8[HL]
#define FSGD4APROT06HH FSGD4A.PROT06.UINT8[HH]
#define FSGD4ASPID06 FSGD4A.SPID06.UINT32
#define FSGD4ASPID06L FSGD4A.SPID06.UINT16[L]
#define FSGD4ASPID06LL FSGD4A.SPID06.UINT8[LL]
#define FSGD4ASPID06LH FSGD4A.SPID06.UINT8[LH]
#define FSGD4ASPID06H FSGD4A.SPID06.UINT16[H]
#define FSGD4ASPID06HL FSGD4A.SPID06.UINT8[HL]
#define FSGD4ASPID06HH FSGD4A.SPID06.UINT8[HH]
#define FSGD4APROT07 FSGD4A.PROT07.UINT32
#define FSGD4APROT07L FSGD4A.PROT07.UINT16[L]
#define FSGD4APROT07LL FSGD4A.PROT07.UINT8[LL]
#define FSGD4APROT07LH FSGD4A.PROT07.UINT8[LH]
#define FSGD4APROT07H FSGD4A.PROT07.UINT16[H]
#define FSGD4APROT07HL FSGD4A.PROT07.UINT8[HL]
#define FSGD4APROT07HH FSGD4A.PROT07.UINT8[HH]
#define FSGD4ASPID07 FSGD4A.SPID07.UINT32
#define FSGD4ASPID07L FSGD4A.SPID07.UINT16[L]
#define FSGD4ASPID07LL FSGD4A.SPID07.UINT8[LL]
#define FSGD4ASPID07LH FSGD4A.SPID07.UINT8[LH]
#define FSGD4ASPID07H FSGD4A.SPID07.UINT16[H]
#define FSGD4ASPID07HL FSGD4A.SPID07.UINT8[HL]
#define FSGD4ASPID07HH FSGD4A.SPID07.UINT8[HH]
#define FSGD4APROT08 FSGD4A.PROT08.UINT32
#define FSGD4APROT08L FSGD4A.PROT08.UINT16[L]
#define FSGD4APROT08LL FSGD4A.PROT08.UINT8[LL]
#define FSGD4APROT08LH FSGD4A.PROT08.UINT8[LH]
#define FSGD4APROT08H FSGD4A.PROT08.UINT16[H]
#define FSGD4APROT08HL FSGD4A.PROT08.UINT8[HL]
#define FSGD4APROT08HH FSGD4A.PROT08.UINT8[HH]
#define FSGD4ASPID08 FSGD4A.SPID08.UINT32
#define FSGD4ASPID08L FSGD4A.SPID08.UINT16[L]
#define FSGD4ASPID08LL FSGD4A.SPID08.UINT8[LL]
#define FSGD4ASPID08LH FSGD4A.SPID08.UINT8[LH]
#define FSGD4ASPID08H FSGD4A.SPID08.UINT16[H]
#define FSGD4ASPID08HL FSGD4A.SPID08.UINT8[HL]
#define FSGD4ASPID08HH FSGD4A.SPID08.UINT8[HH]
#define FSGD4APROT09 FSGD4A.PROT09.UINT32
#define FSGD4APROT09L FSGD4A.PROT09.UINT16[L]
#define FSGD4APROT09LL FSGD4A.PROT09.UINT8[LL]
#define FSGD4APROT09LH FSGD4A.PROT09.UINT8[LH]
#define FSGD4APROT09H FSGD4A.PROT09.UINT16[H]
#define FSGD4APROT09HL FSGD4A.PROT09.UINT8[HL]
#define FSGD4APROT09HH FSGD4A.PROT09.UINT8[HH]
#define FSGD4ASPID09 FSGD4A.SPID09.UINT32
#define FSGD4ASPID09L FSGD4A.SPID09.UINT16[L]
#define FSGD4ASPID09LL FSGD4A.SPID09.UINT8[LL]
#define FSGD4ASPID09LH FSGD4A.SPID09.UINT8[LH]
#define FSGD4ASPID09H FSGD4A.SPID09.UINT16[H]
#define FSGD4ASPID09HL FSGD4A.SPID09.UINT8[HL]
#define FSGD4ASPID09HH FSGD4A.SPID09.UINT8[HH]
#define FSGD4APROT10 FSGD4A.PROT10.UINT32
#define FSGD4APROT10L FSGD4A.PROT10.UINT16[L]
#define FSGD4APROT10LL FSGD4A.PROT10.UINT8[LL]
#define FSGD4APROT10LH FSGD4A.PROT10.UINT8[LH]
#define FSGD4APROT10H FSGD4A.PROT10.UINT16[H]
#define FSGD4APROT10HL FSGD4A.PROT10.UINT8[HL]
#define FSGD4APROT10HH FSGD4A.PROT10.UINT8[HH]
#define FSGD4ASPID10 FSGD4A.SPID10.UINT32
#define FSGD4ASPID10L FSGD4A.SPID10.UINT16[L]
#define FSGD4ASPID10LL FSGD4A.SPID10.UINT8[LL]
#define FSGD4ASPID10LH FSGD4A.SPID10.UINT8[LH]
#define FSGD4ASPID10H FSGD4A.SPID10.UINT16[H]
#define FSGD4ASPID10HL FSGD4A.SPID10.UINT8[HL]
#define FSGD4ASPID10HH FSGD4A.SPID10.UINT8[HH]
#define FSGD4APROT11 FSGD4A.PROT11.UINT32
#define FSGD4APROT11L FSGD4A.PROT11.UINT16[L]
#define FSGD4APROT11LL FSGD4A.PROT11.UINT8[LL]
#define FSGD4APROT11LH FSGD4A.PROT11.UINT8[LH]
#define FSGD4APROT11H FSGD4A.PROT11.UINT16[H]
#define FSGD4APROT11HL FSGD4A.PROT11.UINT8[HL]
#define FSGD4APROT11HH FSGD4A.PROT11.UINT8[HH]
#define FSGD4ASPID11 FSGD4A.SPID11.UINT32
#define FSGD4ASPID11L FSGD4A.SPID11.UINT16[L]
#define FSGD4ASPID11LL FSGD4A.SPID11.UINT8[LL]
#define FSGD4ASPID11LH FSGD4A.SPID11.UINT8[LH]
#define FSGD4ASPID11H FSGD4A.SPID11.UINT16[H]
#define FSGD4ASPID11HL FSGD4A.SPID11.UINT8[HL]
#define FSGD4ASPID11HH FSGD4A.SPID11.UINT8[HH]
#define FSGD4APROT12 FSGD4A.PROT12.UINT32
#define FSGD4APROT12L FSGD4A.PROT12.UINT16[L]
#define FSGD4APROT12LL FSGD4A.PROT12.UINT8[LL]
#define FSGD4APROT12LH FSGD4A.PROT12.UINT8[LH]
#define FSGD4APROT12H FSGD4A.PROT12.UINT16[H]
#define FSGD4APROT12HL FSGD4A.PROT12.UINT8[HL]
#define FSGD4APROT12HH FSGD4A.PROT12.UINT8[HH]
#define FSGD4ASPID12 FSGD4A.SPID12.UINT32
#define FSGD4ASPID12L FSGD4A.SPID12.UINT16[L]
#define FSGD4ASPID12LL FSGD4A.SPID12.UINT8[LL]
#define FSGD4ASPID12LH FSGD4A.SPID12.UINT8[LH]
#define FSGD4ASPID12H FSGD4A.SPID12.UINT16[H]
#define FSGD4ASPID12HL FSGD4A.SPID12.UINT8[HL]
#define FSGD4ASPID12HH FSGD4A.SPID12.UINT8[HH]
#define FSGD4APROT13 FSGD4A.PROT13.UINT32
#define FSGD4APROT13L FSGD4A.PROT13.UINT16[L]
#define FSGD4APROT13LL FSGD4A.PROT13.UINT8[LL]
#define FSGD4APROT13LH FSGD4A.PROT13.UINT8[LH]
#define FSGD4APROT13H FSGD4A.PROT13.UINT16[H]
#define FSGD4APROT13HL FSGD4A.PROT13.UINT8[HL]
#define FSGD4APROT13HH FSGD4A.PROT13.UINT8[HH]
#define FSGD4ASPID13 FSGD4A.SPID13.UINT32
#define FSGD4ASPID13L FSGD4A.SPID13.UINT16[L]
#define FSGD4ASPID13LL FSGD4A.SPID13.UINT8[LL]
#define FSGD4ASPID13LH FSGD4A.SPID13.UINT8[LH]
#define FSGD4ASPID13H FSGD4A.SPID13.UINT16[H]
#define FSGD4ASPID13HL FSGD4A.SPID13.UINT8[HL]
#define FSGD4ASPID13HH FSGD4A.SPID13.UINT8[HH]
#define FSGD4APROT14 FSGD4A.PROT14.UINT32
#define FSGD4APROT14L FSGD4A.PROT14.UINT16[L]
#define FSGD4APROT14LL FSGD4A.PROT14.UINT8[LL]
#define FSGD4APROT14LH FSGD4A.PROT14.UINT8[LH]
#define FSGD4APROT14H FSGD4A.PROT14.UINT16[H]
#define FSGD4APROT14HL FSGD4A.PROT14.UINT8[HL]
#define FSGD4APROT14HH FSGD4A.PROT14.UINT8[HH]
#define FSGD4ASPID14 FSGD4A.SPID14.UINT32
#define FSGD4ASPID14L FSGD4A.SPID14.UINT16[L]
#define FSGD4ASPID14LL FSGD4A.SPID14.UINT8[LL]
#define FSGD4ASPID14LH FSGD4A.SPID14.UINT8[LH]
#define FSGD4ASPID14H FSGD4A.SPID14.UINT16[H]
#define FSGD4ASPID14HL FSGD4A.SPID14.UINT8[HL]
#define FSGD4ASPID14HH FSGD4A.SPID14.UINT8[HH]
#define FSGD4APROT15 FSGD4A.PROT15.UINT32
#define FSGD4APROT15L FSGD4A.PROT15.UINT16[L]
#define FSGD4APROT15LL FSGD4A.PROT15.UINT8[LL]
#define FSGD4APROT15LH FSGD4A.PROT15.UINT8[LH]
#define FSGD4APROT15H FSGD4A.PROT15.UINT16[H]
#define FSGD4APROT15HL FSGD4A.PROT15.UINT8[HL]
#define FSGD4APROT15HH FSGD4A.PROT15.UINT8[HH]
#define FSGD4ASPID15 FSGD4A.SPID15.UINT32
#define FSGD4ASPID15L FSGD4A.SPID15.UINT16[L]
#define FSGD4ASPID15LL FSGD4A.SPID15.UINT8[LL]
#define FSGD4ASPID15LH FSGD4A.SPID15.UINT8[LH]
#define FSGD4ASPID15H FSGD4A.SPID15.UINT16[H]
#define FSGD4ASPID15HL FSGD4A.SPID15.UINT8[HL]
#define FSGD4ASPID15HH FSGD4A.SPID15.UINT8[HH]
#define ERRSLV4CTL ERRSLV4.CTL
#define ERRSLV4STAT ERRSLV4.STAT
#define ERRSLV4TYPE ERRSLV4.TYPE
#define FSGD4BPROT00 FSGD4B.PROT00.UINT32
#define FSGD4BPROT00L FSGD4B.PROT00.UINT16[L]
#define FSGD4BPROT00LL FSGD4B.PROT00.UINT8[LL]
#define FSGD4BPROT00LH FSGD4B.PROT00.UINT8[LH]
#define FSGD4BPROT00H FSGD4B.PROT00.UINT16[H]
#define FSGD4BPROT00HL FSGD4B.PROT00.UINT8[HL]
#define FSGD4BPROT00HH FSGD4B.PROT00.UINT8[HH]
#define FSGD4BSPID00 FSGD4B.SPID00.UINT32
#define FSGD4BSPID00L FSGD4B.SPID00.UINT16[L]
#define FSGD4BSPID00LL FSGD4B.SPID00.UINT8[LL]
#define FSGD4BSPID00LH FSGD4B.SPID00.UINT8[LH]
#define FSGD4BSPID00H FSGD4B.SPID00.UINT16[H]
#define FSGD4BSPID00HL FSGD4B.SPID00.UINT8[HL]
#define FSGD4BSPID00HH FSGD4B.SPID00.UINT8[HH]
#define FSGD4BPROT01 FSGD4B.PROT01.UINT32
#define FSGD4BPROT01L FSGD4B.PROT01.UINT16[L]
#define FSGD4BPROT01LL FSGD4B.PROT01.UINT8[LL]
#define FSGD4BPROT01LH FSGD4B.PROT01.UINT8[LH]
#define FSGD4BPROT01H FSGD4B.PROT01.UINT16[H]
#define FSGD4BPROT01HL FSGD4B.PROT01.UINT8[HL]
#define FSGD4BPROT01HH FSGD4B.PROT01.UINT8[HH]
#define FSGD4BSPID01 FSGD4B.SPID01.UINT32
#define FSGD4BSPID01L FSGD4B.SPID01.UINT16[L]
#define FSGD4BSPID01LL FSGD4B.SPID01.UINT8[LL]
#define FSGD4BSPID01LH FSGD4B.SPID01.UINT8[LH]
#define FSGD4BSPID01H FSGD4B.SPID01.UINT16[H]
#define FSGD4BSPID01HL FSGD4B.SPID01.UINT8[HL]
#define FSGD4BSPID01HH FSGD4B.SPID01.UINT8[HH]
#define FSGD4BPROT02 FSGD4B.PROT02.UINT32
#define FSGD4BPROT02L FSGD4B.PROT02.UINT16[L]
#define FSGD4BPROT02LL FSGD4B.PROT02.UINT8[LL]
#define FSGD4BPROT02LH FSGD4B.PROT02.UINT8[LH]
#define FSGD4BPROT02H FSGD4B.PROT02.UINT16[H]
#define FSGD4BPROT02HL FSGD4B.PROT02.UINT8[HL]
#define FSGD4BPROT02HH FSGD4B.PROT02.UINT8[HH]
#define FSGD4BSPID02 FSGD4B.SPID02.UINT32
#define FSGD4BSPID02L FSGD4B.SPID02.UINT16[L]
#define FSGD4BSPID02LL FSGD4B.SPID02.UINT8[LL]
#define FSGD4BSPID02LH FSGD4B.SPID02.UINT8[LH]
#define FSGD4BSPID02H FSGD4B.SPID02.UINT16[H]
#define FSGD4BSPID02HL FSGD4B.SPID02.UINT8[HL]
#define FSGD4BSPID02HH FSGD4B.SPID02.UINT8[HH]
#define FSGD4BPROT03 FSGD4B.PROT03.UINT32
#define FSGD4BPROT03L FSGD4B.PROT03.UINT16[L]
#define FSGD4BPROT03LL FSGD4B.PROT03.UINT8[LL]
#define FSGD4BPROT03LH FSGD4B.PROT03.UINT8[LH]
#define FSGD4BPROT03H FSGD4B.PROT03.UINT16[H]
#define FSGD4BPROT03HL FSGD4B.PROT03.UINT8[HL]
#define FSGD4BPROT03HH FSGD4B.PROT03.UINT8[HH]
#define FSGD4BSPID03 FSGD4B.SPID03.UINT32
#define FSGD4BSPID03L FSGD4B.SPID03.UINT16[L]
#define FSGD4BSPID03LL FSGD4B.SPID03.UINT8[LL]
#define FSGD4BSPID03LH FSGD4B.SPID03.UINT8[LH]
#define FSGD4BSPID03H FSGD4B.SPID03.UINT16[H]
#define FSGD4BSPID03HL FSGD4B.SPID03.UINT8[HL]
#define FSGD4BSPID03HH FSGD4B.SPID03.UINT8[HH]
#define FSGD4BPROT04 FSGD4B.PROT04.UINT32
#define FSGD4BPROT04L FSGD4B.PROT04.UINT16[L]
#define FSGD4BPROT04LL FSGD4B.PROT04.UINT8[LL]
#define FSGD4BPROT04LH FSGD4B.PROT04.UINT8[LH]
#define FSGD4BPROT04H FSGD4B.PROT04.UINT16[H]
#define FSGD4BPROT04HL FSGD4B.PROT04.UINT8[HL]
#define FSGD4BPROT04HH FSGD4B.PROT04.UINT8[HH]
#define FSGD4BSPID04 FSGD4B.SPID04.UINT32
#define FSGD4BSPID04L FSGD4B.SPID04.UINT16[L]
#define FSGD4BSPID04LL FSGD4B.SPID04.UINT8[LL]
#define FSGD4BSPID04LH FSGD4B.SPID04.UINT8[LH]
#define FSGD4BSPID04H FSGD4B.SPID04.UINT16[H]
#define FSGD4BSPID04HL FSGD4B.SPID04.UINT8[HL]
#define FSGD4BSPID04HH FSGD4B.SPID04.UINT8[HH]
#define FSGD4BPROT05 FSGD4B.PROT05.UINT32
#define FSGD4BPROT05L FSGD4B.PROT05.UINT16[L]
#define FSGD4BPROT05LL FSGD4B.PROT05.UINT8[LL]
#define FSGD4BPROT05LH FSGD4B.PROT05.UINT8[LH]
#define FSGD4BPROT05H FSGD4B.PROT05.UINT16[H]
#define FSGD4BPROT05HL FSGD4B.PROT05.UINT8[HL]
#define FSGD4BPROT05HH FSGD4B.PROT05.UINT8[HH]
#define FSGD4BSPID05 FSGD4B.SPID05.UINT32
#define FSGD4BSPID05L FSGD4B.SPID05.UINT16[L]
#define FSGD4BSPID05LL FSGD4B.SPID05.UINT8[LL]
#define FSGD4BSPID05LH FSGD4B.SPID05.UINT8[LH]
#define FSGD4BSPID05H FSGD4B.SPID05.UINT16[H]
#define FSGD4BSPID05HL FSGD4B.SPID05.UINT8[HL]
#define FSGD4BSPID05HH FSGD4B.SPID05.UINT8[HH]
#define FSGD4BPROT06 FSGD4B.PROT06.UINT32
#define FSGD4BPROT06L FSGD4B.PROT06.UINT16[L]
#define FSGD4BPROT06LL FSGD4B.PROT06.UINT8[LL]
#define FSGD4BPROT06LH FSGD4B.PROT06.UINT8[LH]
#define FSGD4BPROT06H FSGD4B.PROT06.UINT16[H]
#define FSGD4BPROT06HL FSGD4B.PROT06.UINT8[HL]
#define FSGD4BPROT06HH FSGD4B.PROT06.UINT8[HH]
#define FSGD4BSPID06 FSGD4B.SPID06.UINT32
#define FSGD4BSPID06L FSGD4B.SPID06.UINT16[L]
#define FSGD4BSPID06LL FSGD4B.SPID06.UINT8[LL]
#define FSGD4BSPID06LH FSGD4B.SPID06.UINT8[LH]
#define FSGD4BSPID06H FSGD4B.SPID06.UINT16[H]
#define FSGD4BSPID06HL FSGD4B.SPID06.UINT8[HL]
#define FSGD4BSPID06HH FSGD4B.SPID06.UINT8[HH]
#define FSGD4BPROT07 FSGD4B.PROT07.UINT32
#define FSGD4BPROT07L FSGD4B.PROT07.UINT16[L]
#define FSGD4BPROT07LL FSGD4B.PROT07.UINT8[LL]
#define FSGD4BPROT07LH FSGD4B.PROT07.UINT8[LH]
#define FSGD4BPROT07H FSGD4B.PROT07.UINT16[H]
#define FSGD4BPROT07HL FSGD4B.PROT07.UINT8[HL]
#define FSGD4BPROT07HH FSGD4B.PROT07.UINT8[HH]
#define FSGD4BSPID07 FSGD4B.SPID07.UINT32
#define FSGD4BSPID07L FSGD4B.SPID07.UINT16[L]
#define FSGD4BSPID07LL FSGD4B.SPID07.UINT8[LL]
#define FSGD4BSPID07LH FSGD4B.SPID07.UINT8[LH]
#define FSGD4BSPID07H FSGD4B.SPID07.UINT16[H]
#define FSGD4BSPID07HL FSGD4B.SPID07.UINT8[HL]
#define FSGD4BSPID07HH FSGD4B.SPID07.UINT8[HH]
#define FSGD4BPROT08 FSGD4B.PROT08.UINT32
#define FSGD4BPROT08L FSGD4B.PROT08.UINT16[L]
#define FSGD4BPROT08LL FSGD4B.PROT08.UINT8[LL]
#define FSGD4BPROT08LH FSGD4B.PROT08.UINT8[LH]
#define FSGD4BPROT08H FSGD4B.PROT08.UINT16[H]
#define FSGD4BPROT08HL FSGD4B.PROT08.UINT8[HL]
#define FSGD4BPROT08HH FSGD4B.PROT08.UINT8[HH]
#define FSGD4BSPID08 FSGD4B.SPID08.UINT32
#define FSGD4BSPID08L FSGD4B.SPID08.UINT16[L]
#define FSGD4BSPID08LL FSGD4B.SPID08.UINT8[LL]
#define FSGD4BSPID08LH FSGD4B.SPID08.UINT8[LH]
#define FSGD4BSPID08H FSGD4B.SPID08.UINT16[H]
#define FSGD4BSPID08HL FSGD4B.SPID08.UINT8[HL]
#define FSGD4BSPID08HH FSGD4B.SPID08.UINT8[HH]
#define FSGD4BPROT09 FSGD4B.PROT09.UINT32
#define FSGD4BPROT09L FSGD4B.PROT09.UINT16[L]
#define FSGD4BPROT09LL FSGD4B.PROT09.UINT8[LL]
#define FSGD4BPROT09LH FSGD4B.PROT09.UINT8[LH]
#define FSGD4BPROT09H FSGD4B.PROT09.UINT16[H]
#define FSGD4BPROT09HL FSGD4B.PROT09.UINT8[HL]
#define FSGD4BPROT09HH FSGD4B.PROT09.UINT8[HH]
#define FSGD4BSPID09 FSGD4B.SPID09.UINT32
#define FSGD4BSPID09L FSGD4B.SPID09.UINT16[L]
#define FSGD4BSPID09LL FSGD4B.SPID09.UINT8[LL]
#define FSGD4BSPID09LH FSGD4B.SPID09.UINT8[LH]
#define FSGD4BSPID09H FSGD4B.SPID09.UINT16[H]
#define FSGD4BSPID09HL FSGD4B.SPID09.UINT8[HL]
#define FSGD4BSPID09HH FSGD4B.SPID09.UINT8[HH]
#define FSGD4BPROT10 FSGD4B.PROT10.UINT32
#define FSGD4BPROT10L FSGD4B.PROT10.UINT16[L]
#define FSGD4BPROT10LL FSGD4B.PROT10.UINT8[LL]
#define FSGD4BPROT10LH FSGD4B.PROT10.UINT8[LH]
#define FSGD4BPROT10H FSGD4B.PROT10.UINT16[H]
#define FSGD4BPROT10HL FSGD4B.PROT10.UINT8[HL]
#define FSGD4BPROT10HH FSGD4B.PROT10.UINT8[HH]
#define FSGD4BSPID10 FSGD4B.SPID10.UINT32
#define FSGD4BSPID10L FSGD4B.SPID10.UINT16[L]
#define FSGD4BSPID10LL FSGD4B.SPID10.UINT8[LL]
#define FSGD4BSPID10LH FSGD4B.SPID10.UINT8[LH]
#define FSGD4BSPID10H FSGD4B.SPID10.UINT16[H]
#define FSGD4BSPID10HL FSGD4B.SPID10.UINT8[HL]
#define FSGD4BSPID10HH FSGD4B.SPID10.UINT8[HH]
#define FSGD4BPROT11 FSGD4B.PROT11.UINT32
#define FSGD4BPROT11L FSGD4B.PROT11.UINT16[L]
#define FSGD4BPROT11LL FSGD4B.PROT11.UINT8[LL]
#define FSGD4BPROT11LH FSGD4B.PROT11.UINT8[LH]
#define FSGD4BPROT11H FSGD4B.PROT11.UINT16[H]
#define FSGD4BPROT11HL FSGD4B.PROT11.UINT8[HL]
#define FSGD4BPROT11HH FSGD4B.PROT11.UINT8[HH]
#define FSGD4BSPID11 FSGD4B.SPID11.UINT32
#define FSGD4BSPID11L FSGD4B.SPID11.UINT16[L]
#define FSGD4BSPID11LL FSGD4B.SPID11.UINT8[LL]
#define FSGD4BSPID11LH FSGD4B.SPID11.UINT8[LH]
#define FSGD4BSPID11H FSGD4B.SPID11.UINT16[H]
#define FSGD4BSPID11HL FSGD4B.SPID11.UINT8[HL]
#define FSGD4BSPID11HH FSGD4B.SPID11.UINT8[HH]
#define FSGD4BPROT12 FSGD4B.PROT12.UINT32
#define FSGD4BPROT12L FSGD4B.PROT12.UINT16[L]
#define FSGD4BPROT12LL FSGD4B.PROT12.UINT8[LL]
#define FSGD4BPROT12LH FSGD4B.PROT12.UINT8[LH]
#define FSGD4BPROT12H FSGD4B.PROT12.UINT16[H]
#define FSGD4BPROT12HL FSGD4B.PROT12.UINT8[HL]
#define FSGD4BPROT12HH FSGD4B.PROT12.UINT8[HH]
#define FSGD4BSPID12 FSGD4B.SPID12.UINT32
#define FSGD4BSPID12L FSGD4B.SPID12.UINT16[L]
#define FSGD4BSPID12LL FSGD4B.SPID12.UINT8[LL]
#define FSGD4BSPID12LH FSGD4B.SPID12.UINT8[LH]
#define FSGD4BSPID12H FSGD4B.SPID12.UINT16[H]
#define FSGD4BSPID12HL FSGD4B.SPID12.UINT8[HL]
#define FSGD4BSPID12HH FSGD4B.SPID12.UINT8[HH]
#define FSGD4BPROT13 FSGD4B.PROT13.UINT32
#define FSGD4BPROT13L FSGD4B.PROT13.UINT16[L]
#define FSGD4BPROT13LL FSGD4B.PROT13.UINT8[LL]
#define FSGD4BPROT13LH FSGD4B.PROT13.UINT8[LH]
#define FSGD4BPROT13H FSGD4B.PROT13.UINT16[H]
#define FSGD4BPROT13HL FSGD4B.PROT13.UINT8[HL]
#define FSGD4BPROT13HH FSGD4B.PROT13.UINT8[HH]
#define FSGD4BSPID13 FSGD4B.SPID13.UINT32
#define FSGD4BSPID13L FSGD4B.SPID13.UINT16[L]
#define FSGD4BSPID13LL FSGD4B.SPID13.UINT8[LL]
#define FSGD4BSPID13LH FSGD4B.SPID13.UINT8[LH]
#define FSGD4BSPID13H FSGD4B.SPID13.UINT16[H]
#define FSGD4BSPID13HL FSGD4B.SPID13.UINT8[HL]
#define FSGD4BSPID13HH FSGD4B.SPID13.UINT8[HH]
#define FSGD4CPROT00 FSGD4C.PROT00.UINT32
#define FSGD4CPROT00L FSGD4C.PROT00.UINT16[L]
#define FSGD4CPROT00LL FSGD4C.PROT00.UINT8[LL]
#define FSGD4CPROT00LH FSGD4C.PROT00.UINT8[LH]
#define FSGD4CPROT00H FSGD4C.PROT00.UINT16[H]
#define FSGD4CPROT00HL FSGD4C.PROT00.UINT8[HL]
#define FSGD4CPROT00HH FSGD4C.PROT00.UINT8[HH]
#define FSGD4CSPID00 FSGD4C.SPID00.UINT32
#define FSGD4CSPID00L FSGD4C.SPID00.UINT16[L]
#define FSGD4CSPID00LL FSGD4C.SPID00.UINT8[LL]
#define FSGD4CSPID00LH FSGD4C.SPID00.UINT8[LH]
#define FSGD4CSPID00H FSGD4C.SPID00.UINT16[H]
#define FSGD4CSPID00HL FSGD4C.SPID00.UINT8[HL]
#define FSGD4CSPID00HH FSGD4C.SPID00.UINT8[HH]
#define FSGD4CPROT01 FSGD4C.PROT01.UINT32
#define FSGD4CPROT01L FSGD4C.PROT01.UINT16[L]
#define FSGD4CPROT01LL FSGD4C.PROT01.UINT8[LL]
#define FSGD4CPROT01LH FSGD4C.PROT01.UINT8[LH]
#define FSGD4CPROT01H FSGD4C.PROT01.UINT16[H]
#define FSGD4CPROT01HL FSGD4C.PROT01.UINT8[HL]
#define FSGD4CPROT01HH FSGD4C.PROT01.UINT8[HH]
#define FSGD4CSPID01 FSGD4C.SPID01.UINT32
#define FSGD4CSPID01L FSGD4C.SPID01.UINT16[L]
#define FSGD4CSPID01LL FSGD4C.SPID01.UINT8[LL]
#define FSGD4CSPID01LH FSGD4C.SPID01.UINT8[LH]
#define FSGD4CSPID01H FSGD4C.SPID01.UINT16[H]
#define FSGD4CSPID01HL FSGD4C.SPID01.UINT8[HL]
#define FSGD4CSPID01HH FSGD4C.SPID01.UINT8[HH]
#define FSGD4CPROT02 FSGD4C.PROT02.UINT32
#define FSGD4CPROT02L FSGD4C.PROT02.UINT16[L]
#define FSGD4CPROT02LL FSGD4C.PROT02.UINT8[LL]
#define FSGD4CPROT02LH FSGD4C.PROT02.UINT8[LH]
#define FSGD4CPROT02H FSGD4C.PROT02.UINT16[H]
#define FSGD4CPROT02HL FSGD4C.PROT02.UINT8[HL]
#define FSGD4CPROT02HH FSGD4C.PROT02.UINT8[HH]
#define FSGD4CSPID02 FSGD4C.SPID02.UINT32
#define FSGD4CSPID02L FSGD4C.SPID02.UINT16[L]
#define FSGD4CSPID02LL FSGD4C.SPID02.UINT8[LL]
#define FSGD4CSPID02LH FSGD4C.SPID02.UINT8[LH]
#define FSGD4CSPID02H FSGD4C.SPID02.UINT16[H]
#define FSGD4CSPID02HL FSGD4C.SPID02.UINT8[HL]
#define FSGD4CSPID02HH FSGD4C.SPID02.UINT8[HH]
#define FSGD4CPROT03 FSGD4C.PROT03.UINT32
#define FSGD4CPROT03L FSGD4C.PROT03.UINT16[L]
#define FSGD4CPROT03LL FSGD4C.PROT03.UINT8[LL]
#define FSGD4CPROT03LH FSGD4C.PROT03.UINT8[LH]
#define FSGD4CPROT03H FSGD4C.PROT03.UINT16[H]
#define FSGD4CPROT03HL FSGD4C.PROT03.UINT8[HL]
#define FSGD4CPROT03HH FSGD4C.PROT03.UINT8[HH]
#define FSGD4CSPID03 FSGD4C.SPID03.UINT32
#define FSGD4CSPID03L FSGD4C.SPID03.UINT16[L]
#define FSGD4CSPID03LL FSGD4C.SPID03.UINT8[LL]
#define FSGD4CSPID03LH FSGD4C.SPID03.UINT8[LH]
#define FSGD4CSPID03H FSGD4C.SPID03.UINT16[H]
#define FSGD4CSPID03HL FSGD4C.SPID03.UINT8[HL]
#define FSGD4CSPID03HH FSGD4C.SPID03.UINT8[HH]
#define FSGD4CPROT04 FSGD4C.PROT04.UINT32
#define FSGD4CPROT04L FSGD4C.PROT04.UINT16[L]
#define FSGD4CPROT04LL FSGD4C.PROT04.UINT8[LL]
#define FSGD4CPROT04LH FSGD4C.PROT04.UINT8[LH]
#define FSGD4CPROT04H FSGD4C.PROT04.UINT16[H]
#define FSGD4CPROT04HL FSGD4C.PROT04.UINT8[HL]
#define FSGD4CPROT04HH FSGD4C.PROT04.UINT8[HH]
#define FSGD4CSPID04 FSGD4C.SPID04.UINT32
#define FSGD4CSPID04L FSGD4C.SPID04.UINT16[L]
#define FSGD4CSPID04LL FSGD4C.SPID04.UINT8[LL]
#define FSGD4CSPID04LH FSGD4C.SPID04.UINT8[LH]
#define FSGD4CSPID04H FSGD4C.SPID04.UINT16[H]
#define FSGD4CSPID04HL FSGD4C.SPID04.UINT8[HL]
#define FSGD4CSPID04HH FSGD4C.SPID04.UINT8[HH]
#define FSGD4CPROT05 FSGD4C.PROT05.UINT32
#define FSGD4CPROT05L FSGD4C.PROT05.UINT16[L]
#define FSGD4CPROT05LL FSGD4C.PROT05.UINT8[LL]
#define FSGD4CPROT05LH FSGD4C.PROT05.UINT8[LH]
#define FSGD4CPROT05H FSGD4C.PROT05.UINT16[H]
#define FSGD4CPROT05HL FSGD4C.PROT05.UINT8[HL]
#define FSGD4CPROT05HH FSGD4C.PROT05.UINT8[HH]
#define FSGD4CSPID05 FSGD4C.SPID05.UINT32
#define FSGD4CSPID05L FSGD4C.SPID05.UINT16[L]
#define FSGD4CSPID05LL FSGD4C.SPID05.UINT8[LL]
#define FSGD4CSPID05LH FSGD4C.SPID05.UINT8[LH]
#define FSGD4CSPID05H FSGD4C.SPID05.UINT16[H]
#define FSGD4CSPID05HL FSGD4C.SPID05.UINT8[HL]
#define FSGD4CSPID05HH FSGD4C.SPID05.UINT8[HH]
#define FSGD4CPROT06 FSGD4C.PROT06.UINT32
#define FSGD4CPROT06L FSGD4C.PROT06.UINT16[L]
#define FSGD4CPROT06LL FSGD4C.PROT06.UINT8[LL]
#define FSGD4CPROT06LH FSGD4C.PROT06.UINT8[LH]
#define FSGD4CPROT06H FSGD4C.PROT06.UINT16[H]
#define FSGD4CPROT06HL FSGD4C.PROT06.UINT8[HL]
#define FSGD4CPROT06HH FSGD4C.PROT06.UINT8[HH]
#define FSGD4CSPID06 FSGD4C.SPID06.UINT32
#define FSGD4CSPID06L FSGD4C.SPID06.UINT16[L]
#define FSGD4CSPID06LL FSGD4C.SPID06.UINT8[LL]
#define FSGD4CSPID06LH FSGD4C.SPID06.UINT8[LH]
#define FSGD4CSPID06H FSGD4C.SPID06.UINT16[H]
#define FSGD4CSPID06HL FSGD4C.SPID06.UINT8[HL]
#define FSGD4CSPID06HH FSGD4C.SPID06.UINT8[HH]
#define FSGD4CPROT07 FSGD4C.PROT07.UINT32
#define FSGD4CPROT07L FSGD4C.PROT07.UINT16[L]
#define FSGD4CPROT07LL FSGD4C.PROT07.UINT8[LL]
#define FSGD4CPROT07LH FSGD4C.PROT07.UINT8[LH]
#define FSGD4CPROT07H FSGD4C.PROT07.UINT16[H]
#define FSGD4CPROT07HL FSGD4C.PROT07.UINT8[HL]
#define FSGD4CPROT07HH FSGD4C.PROT07.UINT8[HH]
#define FSGD4CSPID07 FSGD4C.SPID07.UINT32
#define FSGD4CSPID07L FSGD4C.SPID07.UINT16[L]
#define FSGD4CSPID07LL FSGD4C.SPID07.UINT8[LL]
#define FSGD4CSPID07LH FSGD4C.SPID07.UINT8[LH]
#define FSGD4CSPID07H FSGD4C.SPID07.UINT16[H]
#define FSGD4CSPID07HL FSGD4C.SPID07.UINT8[HL]
#define FSGD4CSPID07HH FSGD4C.SPID07.UINT8[HH]
#define FSGD4CPROT08 FSGD4C.PROT08.UINT32
#define FSGD4CPROT08L FSGD4C.PROT08.UINT16[L]
#define FSGD4CPROT08LL FSGD4C.PROT08.UINT8[LL]
#define FSGD4CPROT08LH FSGD4C.PROT08.UINT8[LH]
#define FSGD4CPROT08H FSGD4C.PROT08.UINT16[H]
#define FSGD4CPROT08HL FSGD4C.PROT08.UINT8[HL]
#define FSGD4CPROT08HH FSGD4C.PROT08.UINT8[HH]
#define FSGD4CSPID08 FSGD4C.SPID08.UINT32
#define FSGD4CSPID08L FSGD4C.SPID08.UINT16[L]
#define FSGD4CSPID08LL FSGD4C.SPID08.UINT8[LL]
#define FSGD4CSPID08LH FSGD4C.SPID08.UINT8[LH]
#define FSGD4CSPID08H FSGD4C.SPID08.UINT16[H]
#define FSGD4CSPID08HL FSGD4C.SPID08.UINT8[HL]
#define FSGD4CSPID08HH FSGD4C.SPID08.UINT8[HH]
#define FSGD4CPROT09 FSGD4C.PROT09.UINT32
#define FSGD4CPROT09L FSGD4C.PROT09.UINT16[L]
#define FSGD4CPROT09LL FSGD4C.PROT09.UINT8[LL]
#define FSGD4CPROT09LH FSGD4C.PROT09.UINT8[LH]
#define FSGD4CPROT09H FSGD4C.PROT09.UINT16[H]
#define FSGD4CPROT09HL FSGD4C.PROT09.UINT8[HL]
#define FSGD4CPROT09HH FSGD4C.PROT09.UINT8[HH]
#define FSGD4CSPID09 FSGD4C.SPID09.UINT32
#define FSGD4CSPID09L FSGD4C.SPID09.UINT16[L]
#define FSGD4CSPID09LL FSGD4C.SPID09.UINT8[LL]
#define FSGD4CSPID09LH FSGD4C.SPID09.UINT8[LH]
#define FSGD4CSPID09H FSGD4C.SPID09.UINT16[H]
#define FSGD4CSPID09HL FSGD4C.SPID09.UINT8[HL]
#define FSGD4CSPID09HH FSGD4C.SPID09.UINT8[HH]
#define FSGD4CPROT10 FSGD4C.PROT10.UINT32
#define FSGD4CPROT10L FSGD4C.PROT10.UINT16[L]
#define FSGD4CPROT10LL FSGD4C.PROT10.UINT8[LL]
#define FSGD4CPROT10LH FSGD4C.PROT10.UINT8[LH]
#define FSGD4CPROT10H FSGD4C.PROT10.UINT16[H]
#define FSGD4CPROT10HL FSGD4C.PROT10.UINT8[HL]
#define FSGD4CPROT10HH FSGD4C.PROT10.UINT8[HH]
#define FSGD4CSPID10 FSGD4C.SPID10.UINT32
#define FSGD4CSPID10L FSGD4C.SPID10.UINT16[L]
#define FSGD4CSPID10LL FSGD4C.SPID10.UINT8[LL]
#define FSGD4CSPID10LH FSGD4C.SPID10.UINT8[LH]
#define FSGD4CSPID10H FSGD4C.SPID10.UINT16[H]
#define FSGD4CSPID10HL FSGD4C.SPID10.UINT8[HL]
#define FSGD4CSPID10HH FSGD4C.SPID10.UINT8[HH]
#define FSGD4CPROT11 FSGD4C.PROT11.UINT32
#define FSGD4CPROT11L FSGD4C.PROT11.UINT16[L]
#define FSGD4CPROT11LL FSGD4C.PROT11.UINT8[LL]
#define FSGD4CPROT11LH FSGD4C.PROT11.UINT8[LH]
#define FSGD4CPROT11H FSGD4C.PROT11.UINT16[H]
#define FSGD4CPROT11HL FSGD4C.PROT11.UINT8[HL]
#define FSGD4CPROT11HH FSGD4C.PROT11.UINT8[HH]
#define FSGD4CSPID11 FSGD4C.SPID11.UINT32
#define FSGD4CSPID11L FSGD4C.SPID11.UINT16[L]
#define FSGD4CSPID11LL FSGD4C.SPID11.UINT8[LL]
#define FSGD4CSPID11LH FSGD4C.SPID11.UINT8[LH]
#define FSGD4CSPID11H FSGD4C.SPID11.UINT16[H]
#define FSGD4CSPID11HL FSGD4C.SPID11.UINT8[HL]
#define FSGD4CSPID11HH FSGD4C.SPID11.UINT8[HH]
#define FSGD4CPROT12 FSGD4C.PROT12.UINT32
#define FSGD4CPROT12L FSGD4C.PROT12.UINT16[L]
#define FSGD4CPROT12LL FSGD4C.PROT12.UINT8[LL]
#define FSGD4CPROT12LH FSGD4C.PROT12.UINT8[LH]
#define FSGD4CPROT12H FSGD4C.PROT12.UINT16[H]
#define FSGD4CPROT12HL FSGD4C.PROT12.UINT8[HL]
#define FSGD4CPROT12HH FSGD4C.PROT12.UINT8[HH]
#define FSGD4CSPID12 FSGD4C.SPID12.UINT32
#define FSGD4CSPID12L FSGD4C.SPID12.UINT16[L]
#define FSGD4CSPID12LL FSGD4C.SPID12.UINT8[LL]
#define FSGD4CSPID12LH FSGD4C.SPID12.UINT8[LH]
#define FSGD4CSPID12H FSGD4C.SPID12.UINT16[H]
#define FSGD4CSPID12HL FSGD4C.SPID12.UINT8[HL]
#define FSGD4CSPID12HH FSGD4C.SPID12.UINT8[HH]
#define FSGD4CPROT13 FSGD4C.PROT13.UINT32
#define FSGD4CPROT13L FSGD4C.PROT13.UINT16[L]
#define FSGD4CPROT13LL FSGD4C.PROT13.UINT8[LL]
#define FSGD4CPROT13LH FSGD4C.PROT13.UINT8[LH]
#define FSGD4CPROT13H FSGD4C.PROT13.UINT16[H]
#define FSGD4CPROT13HL FSGD4C.PROT13.UINT8[HL]
#define FSGD4CPROT13HH FSGD4C.PROT13.UINT8[HH]
#define FSGD4CSPID13 FSGD4C.SPID13.UINT32
#define FSGD4CSPID13L FSGD4C.SPID13.UINT16[L]
#define FSGD4CSPID13LL FSGD4C.SPID13.UINT8[LL]
#define FSGD4CSPID13LH FSGD4C.SPID13.UINT8[LH]
#define FSGD4CSPID13H FSGD4C.SPID13.UINT16[H]
#define FSGD4CSPID13HL FSGD4C.SPID13.UINT8[HL]
#define FSGD4CSPID13HH FSGD4C.SPID13.UINT8[HH]
#define ERRSLV4CCTL ERRSLV4C.CTL
#define ERRSLV4CSTAT ERRSLV4C.STAT
#define ERRSLV4CTYPE ERRSLV4C.TYPE
#define ERRSLV4AICTL ERRSLV4AI.CTL
#define ERRSLV4AISTAT ERRSLV4AI.STAT
#define ERRSLV4AITYPE ERRSLV4AI.TYPE
#define ADCF0VCR0 ADCF0.VCR0
#define ADCF0VCR1 ADCF0.VCR1
#define ADCF0VCR2 ADCF0.VCR2
#define ADCF0VCR3 ADCF0.VCR3
#define ADCF0VCR4 ADCF0.VCR4
#define ADCF0VCR5 ADCF0.VCR5
#define ADCF0VCR6 ADCF0.VCR6
#define ADCF0VCR7 ADCF0.VCR7
#define ADCF0VCR8 ADCF0.VCR8
#define ADCF0VCR9 ADCF0.VCR9
#define ADCF0VCR10 ADCF0.VCR10
#define ADCF0VCR11 ADCF0.VCR11
#define ADCF0VCR12 ADCF0.VCR12
#define ADCF0VCR13 ADCF0.VCR13
#define ADCF0VCR14 ADCF0.VCR14
#define ADCF0VCR15 ADCF0.VCR15
#define ADCF0VCR16 ADCF0.VCR16
#define ADCF0VCR17 ADCF0.VCR17
#define ADCF0VCR18 ADCF0.VCR18
#define ADCF0VCR19 ADCF0.VCR19
#define ADCF0VCR20 ADCF0.VCR20
#define ADCF0VCR21 ADCF0.VCR21
#define ADCF0VCR22 ADCF0.VCR22
#define ADCF0VCR23 ADCF0.VCR23
#define ADCF0DR00 ADCF0.DR00
#define ADCF0DR02 ADCF0.DR02
#define ADCF0DR04 ADCF0.DR04
#define ADCF0DR06 ADCF0.DR06
#define ADCF0DR08 ADCF0.DR08
#define ADCF0DR10 ADCF0.DR10
#define ADCF0DR12 ADCF0.DR12
#define ADCF0DR14 ADCF0.DR14
#define ADCF0DR16 ADCF0.DR16
#define ADCF0DR18 ADCF0.DR18
#define ADCF0DR20 ADCF0.DR20
#define ADCF0DR22 ADCF0.DR22
#define ADCF0DIR0 ADCF0.DIR0
#define ADCF0DIR1 ADCF0.DIR1
#define ADCF0DIR2 ADCF0.DIR2
#define ADCF0DIR3 ADCF0.DIR3
#define ADCF0DIR4 ADCF0.DIR4
#define ADCF0DIR5 ADCF0.DIR5
#define ADCF0DIR6 ADCF0.DIR6
#define ADCF0DIR7 ADCF0.DIR7
#define ADCF0DIR8 ADCF0.DIR8
#define ADCF0DIR9 ADCF0.DIR9
#define ADCF0DIR10 ADCF0.DIR10
#define ADCF0DIR11 ADCF0.DIR11
#define ADCF0DIR12 ADCF0.DIR12
#define ADCF0DIR13 ADCF0.DIR13
#define ADCF0DIR14 ADCF0.DIR14
#define ADCF0DIR15 ADCF0.DIR15
#define ADCF0DIR16 ADCF0.DIR16
#define ADCF0DIR17 ADCF0.DIR17
#define ADCF0DIR18 ADCF0.DIR18
#define ADCF0DIR19 ADCF0.DIR19
#define ADCF0DIR20 ADCF0.DIR20
#define ADCF0DIR21 ADCF0.DIR21
#define ADCF0DIR22 ADCF0.DIR22
#define ADCF0DIR23 ADCF0.DIR23
#define ADCF0ADSYNSTCR ADCF0.ADSYNSTCR
#define ADCF0ADTSYNSTCR ADCF0.ADTSYNSTCR
#define ADCF0ADHALTR ADCF0.ADHALTR
#define ADCF0ADCR1 ADCF0.ADCR1
#define ADCF0MPXCURCR ADCF0.MPXCURCR
#define ADCF0MPXCURR ADCF0.MPXCURR
#define ADCF0MPXOWR ADCF0.MPXOWR
#define ADCF0ADCR2 ADCF0.ADCR2
#define ADCF0ADENDP0 ADCF0.ADENDP0
#define ADCF0SFTCR ADCF0.SFTCR
#define ADCF0TDCR ADCF0.TDCR
#define ADCF0ULLMTBR0 ADCF0.ULLMTBR0.UINT32
#define ADCF0ULLMTBR0L ADCF0.ULLMTBR0.UINT16[L]
#define ADCF0ULLMTBR0H ADCF0.ULLMTBR0.UINT16[H]
#define ADCF0ULLMTBR1 ADCF0.ULLMTBR1.UINT32
#define ADCF0ULLMTBR1L ADCF0.ULLMTBR1.UINT16[L]
#define ADCF0ULLMTBR1H ADCF0.ULLMTBR1.UINT16[H]
#define ADCF0ULLMTBR2 ADCF0.ULLMTBR2.UINT32
#define ADCF0ULLMTBR2L ADCF0.ULLMTBR2.UINT16[L]
#define ADCF0ULLMTBR2H ADCF0.ULLMTBR2.UINT16[H]
#define ADCF0ECR ADCF0.ECR
#define ADCF0ULER ADCF0.ULER
#define ADCF0OWER ADCF0.OWER
#define ADCF0PER ADCF0.PER
#define ADCF0IDER ADCF0.IDER
#define ADCF0SGSTCR0 ADCF0.SGSTCR0
#define ADCF0SGCR0 ADCF0.SGCR0
#define ADCF0SGVCSP0 ADCF0.SGVCSP0
#define ADCF0SGVCEP0 ADCF0.SGVCEP0
#define ADCF0SGMCYCR0 ADCF0.SGMCYCR0
#define ADCF0SGSR0 ADCF0.SGSR0
#define ADCF0ULLMSR0 ADCF0.ULLMSR0
#define ADCF0SGSTCR1 ADCF0.SGSTCR1
#define ADCF0SGCR1 ADCF0.SGCR1
#define ADCF0SGVCSP1 ADCF0.SGVCSP1
#define ADCF0SGVCEP1 ADCF0.SGVCEP1
#define ADCF0SGMCYCR1 ADCF0.SGMCYCR1
#define ADCF0SGSR1 ADCF0.SGSR1
#define ADCF0ULLMSR1 ADCF0.ULLMSR1
#define ADCF0SGSTCR2 ADCF0.SGSTCR2
#define ADCF0SGCR2 ADCF0.SGCR2
#define ADCF0SGVCSP2 ADCF0.SGVCSP2
#define ADCF0SGVCEP2 ADCF0.SGVCEP2
#define ADCF0SGMCYCR2 ADCF0.SGMCYCR2
#define ADCF0SGSR2 ADCF0.SGSR2
#define ADCF0ULLMSR2 ADCF0.ULLMSR2
#define ADCF0SGSTCR3 ADCF0.SGSTCR3
#define ADCF0ADTSTCR3 ADCF0.ADTSTCR3
#define ADCF0ADTENDCR3 ADCF0.ADTENDCR3
#define ADCF0SGCR3 ADCF0.SGCR3
#define ADCF0SGVCSP3 ADCF0.SGVCSP3
#define ADCF0SGVCEP3 ADCF0.SGVCEP3
#define ADCF0SGMCYCR3 ADCF0.SGMCYCR3
#define ADCF0SGSR3 ADCF0.SGSR3
#define ADCF0ADTIPR3 ADCF0.ADTIPR3
#define ADCF0ADTPRR3 ADCF0.ADTPRR3
#define ADCF0ULLMSR3 ADCF0.ULLMSR3
#define ADCF0SGSTCR4 ADCF0.SGSTCR4
#define ADCF0ADTSTCR4 ADCF0.ADTSTCR4
#define ADCF0ADTENDCR4 ADCF0.ADTENDCR4
#define ADCF0SGCR4 ADCF0.SGCR4
#define ADCF0SGVCSP4 ADCF0.SGVCSP4
#define ADCF0SGVCEP4 ADCF0.SGVCEP4
#define ADCF0SGMCYCR4 ADCF0.SGMCYCR4
#define ADCF0SGSR4 ADCF0.SGSR4
#define ADCF0ADTIPR4 ADCF0.ADTIPR4
#define ADCF0ADTPRR4 ADCF0.ADTPRR4
#define ADCF0ULLMSR4 ADCF0.ULLMSR4
#define ADCF1VCR0 ADCF1.VCR0
#define ADCF1VCR1 ADCF1.VCR1
#define ADCF1VCR2 ADCF1.VCR2
#define ADCF1VCR3 ADCF1.VCR3
#define ADCF1VCR4 ADCF1.VCR4
#define ADCF1VCR5 ADCF1.VCR5
#define ADCF1VCR6 ADCF1.VCR6
#define ADCF1VCR7 ADCF1.VCR7
#define ADCF1VCR8 ADCF1.VCR8
#define ADCF1VCR9 ADCF1.VCR9
#define ADCF1VCR10 ADCF1.VCR10
#define ADCF1VCR11 ADCF1.VCR11
#define ADCF1VCR12 ADCF1.VCR12
#define ADCF1VCR13 ADCF1.VCR13
#define ADCF1VCR14 ADCF1.VCR14
#define ADCF1VCR15 ADCF1.VCR15
#define ADCF1VCR16 ADCF1.VCR16
#define ADCF1VCR17 ADCF1.VCR17
#define ADCF1VCR18 ADCF1.VCR18
#define ADCF1VCR19 ADCF1.VCR19
#define ADCF1DR00 ADCF1.DR00
#define ADCF1DR02 ADCF1.DR02
#define ADCF1DR04 ADCF1.DR04
#define ADCF1DR06 ADCF1.DR06
#define ADCF1DR08 ADCF1.DR08
#define ADCF1DR10 ADCF1.DR10
#define ADCF1DR12 ADCF1.DR12
#define ADCF1DR14 ADCF1.DR14
#define ADCF1DR16 ADCF1.DR16
#define ADCF1DR18 ADCF1.DR18
#define ADCF1DIR0 ADCF1.DIR0
#define ADCF1DIR1 ADCF1.DIR1
#define ADCF1DIR2 ADCF1.DIR2
#define ADCF1DIR3 ADCF1.DIR3
#define ADCF1DIR4 ADCF1.DIR4
#define ADCF1DIR5 ADCF1.DIR5
#define ADCF1DIR6 ADCF1.DIR6
#define ADCF1DIR7 ADCF1.DIR7
#define ADCF1DIR8 ADCF1.DIR8
#define ADCF1DIR9 ADCF1.DIR9
#define ADCF1DIR10 ADCF1.DIR10
#define ADCF1DIR11 ADCF1.DIR11
#define ADCF1DIR12 ADCF1.DIR12
#define ADCF1DIR13 ADCF1.DIR13
#define ADCF1DIR14 ADCF1.DIR14
#define ADCF1DIR15 ADCF1.DIR15
#define ADCF1DIR16 ADCF1.DIR16
#define ADCF1DIR17 ADCF1.DIR17
#define ADCF1DIR18 ADCF1.DIR18
#define ADCF1DIR19 ADCF1.DIR19
#define ADCF1ADHALTR ADCF1.ADHALTR
#define ADCF1ADCR1 ADCF1.ADCR1
#define ADCF1MPXCURCR ADCF1.MPXCURCR
#define ADCF1MPXCURR ADCF1.MPXCURR
#define ADCF1MPXOWR ADCF1.MPXOWR
#define ADCF1ADCR2 ADCF1.ADCR2
#define ADCF1ADENDP0 ADCF1.ADENDP0
#define ADCF1SFTCR ADCF1.SFTCR
#define ADCF1TDCR ADCF1.TDCR
#define ADCF1ULLMTBR0 ADCF1.ULLMTBR0.UINT32
#define ADCF1ULLMTBR0L ADCF1.ULLMTBR0.UINT16[L]
#define ADCF1ULLMTBR0H ADCF1.ULLMTBR0.UINT16[H]
#define ADCF1ULLMTBR1 ADCF1.ULLMTBR1.UINT32
#define ADCF1ULLMTBR1L ADCF1.ULLMTBR1.UINT16[L]
#define ADCF1ULLMTBR1H ADCF1.ULLMTBR1.UINT16[H]
#define ADCF1ULLMTBR2 ADCF1.ULLMTBR2.UINT32
#define ADCF1ULLMTBR2L ADCF1.ULLMTBR2.UINT16[L]
#define ADCF1ULLMTBR2H ADCF1.ULLMTBR2.UINT16[H]
#define ADCF1ECR ADCF1.ECR
#define ADCF1ULER ADCF1.ULER
#define ADCF1OWER ADCF1.OWER
#define ADCF1PER ADCF1.PER
#define ADCF1IDER ADCF1.IDER
#define ADCF1SGSTCR0 ADCF1.SGSTCR0
#define ADCF1SGCR0 ADCF1.SGCR0
#define ADCF1SGVCSP0 ADCF1.SGVCSP0
#define ADCF1SGVCEP0 ADCF1.SGVCEP0
#define ADCF1SGMCYCR0 ADCF1.SGMCYCR0
#define ADCF1SGSR0 ADCF1.SGSR0
#define ADCF1ULLMSR0 ADCF1.ULLMSR0
#define ADCF1SGSTCR1 ADCF1.SGSTCR1
#define ADCF1SGCR1 ADCF1.SGCR1
#define ADCF1SGVCSP1 ADCF1.SGVCSP1
#define ADCF1SGVCEP1 ADCF1.SGVCEP1
#define ADCF1SGMCYCR1 ADCF1.SGMCYCR1
#define ADCF1SGSR1 ADCF1.SGSR1
#define ADCF1ULLMSR1 ADCF1.ULLMSR1
#define ADCF1SGSTCR2 ADCF1.SGSTCR2
#define ADCF1SGCR2 ADCF1.SGCR2
#define ADCF1SGVCSP2 ADCF1.SGVCSP2
#define ADCF1SGVCEP2 ADCF1.SGVCEP2
#define ADCF1SGMCYCR2 ADCF1.SGMCYCR2
#define ADCF1SGSR2 ADCF1.SGSR2
#define ADCF1ULLMSR2 ADCF1.ULLMSR2
#define ADCF1SGSTCR3 ADCF1.SGSTCR3
#define ADCF1ADTSTCR3 ADCF1.ADTSTCR3
#define ADCF1ADTENDCR3 ADCF1.ADTENDCR3
#define ADCF1SGCR3 ADCF1.SGCR3
#define ADCF1SGVCSP3 ADCF1.SGVCSP3
#define ADCF1SGVCEP3 ADCF1.SGVCEP3
#define ADCF1SGMCYCR3 ADCF1.SGMCYCR3
#define ADCF1SGSR3 ADCF1.SGSR3
#define ADCF1ADTIPR3 ADCF1.ADTIPR3
#define ADCF1ADTPRR3 ADCF1.ADTPRR3
#define ADCF1ULLMSR3 ADCF1.ULLMSR3
#define ADCF1SGSTCR4 ADCF1.SGSTCR4
#define ADCF1ADTSTCR4 ADCF1.ADTSTCR4
#define ADCF1ADTENDCR4 ADCF1.ADTENDCR4
#define ADCF1SGCR4 ADCF1.SGCR4
#define ADCF1SGVCSP4 ADCF1.SGVCSP4
#define ADCF1SGVCEP4 ADCF1.SGVCEP4
#define ADCF1SGMCYCR4 ADCF1.SGMCYCR4
#define ADCF1SGSR4 ADCF1.SGSR4
#define ADCF1ADTIPR4 ADCF1.ADTIPR4
#define ADCF1ADTPRR4 ADCF1.ADTPRR4
#define ADCF1ULLMSR4 ADCF1.ULLMSR4
#define OTS0OTSTCR OTS0.OTSTCR
#define OTS0OTENDCR OTS0.OTENDCR
#define OTS0OTCR OTS0.OTCR
#define OTS0OTFCR OTS0.OTFCR
#define OTS0OTFR OTS0.OTFR
#define OTS0OTSTR OTS0.OTSTR
#define OTS0OTDR OTS0.OTDR
#define OTS0HTBRAU OTS0.HTBRAU
#define OTS0HTBRAL OTS0.HTBRAL
#define OTS0HTBRBU OTS0.HTBRBU
#define OTS0HTBRBL OTS0.HTBRBL
#define OTS0LTBRAU OTS0.LTBRAU
#define OTS0LTBRAL OTS0.LTBRAL
#define OTS0TDLR OTS0.TDLR
#define OTS0COEFFRA OTS0.COEFFRA
#define OTS0COEFFRB OTS0.COEFFRB
#define OTS0COEFFRC OTS0.COEFFRC
#define FSGD3APROT00 FSGD3A.PROT00.UINT32
#define FSGD3APROT00L FSGD3A.PROT00.UINT16[L]
#define FSGD3APROT00LL FSGD3A.PROT00.UINT8[LL]
#define FSGD3APROT00LH FSGD3A.PROT00.UINT8[LH]
#define FSGD3APROT00H FSGD3A.PROT00.UINT16[H]
#define FSGD3APROT00HL FSGD3A.PROT00.UINT8[HL]
#define FSGD3APROT00HH FSGD3A.PROT00.UINT8[HH]
#define FSGD3ASPID00 FSGD3A.SPID00.UINT32
#define FSGD3ASPID00L FSGD3A.SPID00.UINT16[L]
#define FSGD3ASPID00LL FSGD3A.SPID00.UINT8[LL]
#define FSGD3ASPID00LH FSGD3A.SPID00.UINT8[LH]
#define FSGD3ASPID00H FSGD3A.SPID00.UINT16[H]
#define FSGD3ASPID00HL FSGD3A.SPID00.UINT8[HL]
#define FSGD3ASPID00HH FSGD3A.SPID00.UINT8[HH]
#define FSGD3APROT01 FSGD3A.PROT01.UINT32
#define FSGD3APROT01L FSGD3A.PROT01.UINT16[L]
#define FSGD3APROT01LL FSGD3A.PROT01.UINT8[LL]
#define FSGD3APROT01LH FSGD3A.PROT01.UINT8[LH]
#define FSGD3APROT01H FSGD3A.PROT01.UINT16[H]
#define FSGD3APROT01HL FSGD3A.PROT01.UINT8[HL]
#define FSGD3APROT01HH FSGD3A.PROT01.UINT8[HH]
#define FSGD3ASPID01 FSGD3A.SPID01.UINT32
#define FSGD3ASPID01L FSGD3A.SPID01.UINT16[L]
#define FSGD3ASPID01LL FSGD3A.SPID01.UINT8[LL]
#define FSGD3ASPID01LH FSGD3A.SPID01.UINT8[LH]
#define FSGD3ASPID01H FSGD3A.SPID01.UINT16[H]
#define FSGD3ASPID01HL FSGD3A.SPID01.UINT8[HL]
#define FSGD3ASPID01HH FSGD3A.SPID01.UINT8[HH]
#define FSGD3APROT02 FSGD3A.PROT02.UINT32
#define FSGD3APROT02L FSGD3A.PROT02.UINT16[L]
#define FSGD3APROT02LL FSGD3A.PROT02.UINT8[LL]
#define FSGD3APROT02LH FSGD3A.PROT02.UINT8[LH]
#define FSGD3APROT02H FSGD3A.PROT02.UINT16[H]
#define FSGD3APROT02HL FSGD3A.PROT02.UINT8[HL]
#define FSGD3APROT02HH FSGD3A.PROT02.UINT8[HH]
#define FSGD3ASPID02 FSGD3A.SPID02.UINT32
#define FSGD3ASPID02L FSGD3A.SPID02.UINT16[L]
#define FSGD3ASPID02LL FSGD3A.SPID02.UINT8[LL]
#define FSGD3ASPID02LH FSGD3A.SPID02.UINT8[LH]
#define FSGD3ASPID02H FSGD3A.SPID02.UINT16[H]
#define FSGD3ASPID02HL FSGD3A.SPID02.UINT8[HL]
#define FSGD3ASPID02HH FSGD3A.SPID02.UINT8[HH]
#define FSGD3APROT03 FSGD3A.PROT03.UINT32
#define FSGD3APROT03L FSGD3A.PROT03.UINT16[L]
#define FSGD3APROT03LL FSGD3A.PROT03.UINT8[LL]
#define FSGD3APROT03LH FSGD3A.PROT03.UINT8[LH]
#define FSGD3APROT03H FSGD3A.PROT03.UINT16[H]
#define FSGD3APROT03HL FSGD3A.PROT03.UINT8[HL]
#define FSGD3APROT03HH FSGD3A.PROT03.UINT8[HH]
#define FSGD3ASPID03 FSGD3A.SPID03.UINT32
#define FSGD3ASPID03L FSGD3A.SPID03.UINT16[L]
#define FSGD3ASPID03LL FSGD3A.SPID03.UINT8[LL]
#define FSGD3ASPID03LH FSGD3A.SPID03.UINT8[LH]
#define FSGD3ASPID03H FSGD3A.SPID03.UINT16[H]
#define FSGD3ASPID03HL FSGD3A.SPID03.UINT8[HL]
#define FSGD3ASPID03HH FSGD3A.SPID03.UINT8[HH]
#define FSGD3APROT04 FSGD3A.PROT04.UINT32
#define FSGD3APROT04L FSGD3A.PROT04.UINT16[L]
#define FSGD3APROT04LL FSGD3A.PROT04.UINT8[LL]
#define FSGD3APROT04LH FSGD3A.PROT04.UINT8[LH]
#define FSGD3APROT04H FSGD3A.PROT04.UINT16[H]
#define FSGD3APROT04HL FSGD3A.PROT04.UINT8[HL]
#define FSGD3APROT04HH FSGD3A.PROT04.UINT8[HH]
#define FSGD3ASPID04 FSGD3A.SPID04.UINT32
#define FSGD3ASPID04L FSGD3A.SPID04.UINT16[L]
#define FSGD3ASPID04LL FSGD3A.SPID04.UINT8[LL]
#define FSGD3ASPID04LH FSGD3A.SPID04.UINT8[LH]
#define FSGD3ASPID04H FSGD3A.SPID04.UINT16[H]
#define FSGD3ASPID04HL FSGD3A.SPID04.UINT8[HL]
#define FSGD3ASPID04HH FSGD3A.SPID04.UINT8[HH]
#define FSGD3APROT05 FSGD3A.PROT05.UINT32
#define FSGD3APROT05L FSGD3A.PROT05.UINT16[L]
#define FSGD3APROT05LL FSGD3A.PROT05.UINT8[LL]
#define FSGD3APROT05LH FSGD3A.PROT05.UINT8[LH]
#define FSGD3APROT05H FSGD3A.PROT05.UINT16[H]
#define FSGD3APROT05HL FSGD3A.PROT05.UINT8[HL]
#define FSGD3APROT05HH FSGD3A.PROT05.UINT8[HH]
#define FSGD3ASPID05 FSGD3A.SPID05.UINT32
#define FSGD3ASPID05L FSGD3A.SPID05.UINT16[L]
#define FSGD3ASPID05LL FSGD3A.SPID05.UINT8[LL]
#define FSGD3ASPID05LH FSGD3A.SPID05.UINT8[LH]
#define FSGD3ASPID05H FSGD3A.SPID05.UINT16[H]
#define FSGD3ASPID05HL FSGD3A.SPID05.UINT8[HL]
#define FSGD3ASPID05HH FSGD3A.SPID05.UINT8[HH]
#define FSGD3APROT06 FSGD3A.PROT06.UINT32
#define FSGD3APROT06L FSGD3A.PROT06.UINT16[L]
#define FSGD3APROT06LL FSGD3A.PROT06.UINT8[LL]
#define FSGD3APROT06LH FSGD3A.PROT06.UINT8[LH]
#define FSGD3APROT06H FSGD3A.PROT06.UINT16[H]
#define FSGD3APROT06HL FSGD3A.PROT06.UINT8[HL]
#define FSGD3APROT06HH FSGD3A.PROT06.UINT8[HH]
#define FSGD3ASPID06 FSGD3A.SPID06.UINT32
#define FSGD3ASPID06L FSGD3A.SPID06.UINT16[L]
#define FSGD3ASPID06LL FSGD3A.SPID06.UINT8[LL]
#define FSGD3ASPID06LH FSGD3A.SPID06.UINT8[LH]
#define FSGD3ASPID06H FSGD3A.SPID06.UINT16[H]
#define FSGD3ASPID06HL FSGD3A.SPID06.UINT8[HL]
#define FSGD3ASPID06HH FSGD3A.SPID06.UINT8[HH]
#define FSGD3APROT07 FSGD3A.PROT07.UINT32
#define FSGD3APROT07L FSGD3A.PROT07.UINT16[L]
#define FSGD3APROT07LL FSGD3A.PROT07.UINT8[LL]
#define FSGD3APROT07LH FSGD3A.PROT07.UINT8[LH]
#define FSGD3APROT07H FSGD3A.PROT07.UINT16[H]
#define FSGD3APROT07HL FSGD3A.PROT07.UINT8[HL]
#define FSGD3APROT07HH FSGD3A.PROT07.UINT8[HH]
#define FSGD3ASPID07 FSGD3A.SPID07.UINT32
#define FSGD3ASPID07L FSGD3A.SPID07.UINT16[L]
#define FSGD3ASPID07LL FSGD3A.SPID07.UINT8[LL]
#define FSGD3ASPID07LH FSGD3A.SPID07.UINT8[LH]
#define FSGD3ASPID07H FSGD3A.SPID07.UINT16[H]
#define FSGD3ASPID07HL FSGD3A.SPID07.UINT8[HL]
#define FSGD3ASPID07HH FSGD3A.SPID07.UINT8[HH]
#define FSGD3APROT08 FSGD3A.PROT08.UINT32
#define FSGD3APROT08L FSGD3A.PROT08.UINT16[L]
#define FSGD3APROT08LL FSGD3A.PROT08.UINT8[LL]
#define FSGD3APROT08LH FSGD3A.PROT08.UINT8[LH]
#define FSGD3APROT08H FSGD3A.PROT08.UINT16[H]
#define FSGD3APROT08HL FSGD3A.PROT08.UINT8[HL]
#define FSGD3APROT08HH FSGD3A.PROT08.UINT8[HH]
#define FSGD3ASPID08 FSGD3A.SPID08.UINT32
#define FSGD3ASPID08L FSGD3A.SPID08.UINT16[L]
#define FSGD3ASPID08LL FSGD3A.SPID08.UINT8[LL]
#define FSGD3ASPID08LH FSGD3A.SPID08.UINT8[LH]
#define FSGD3ASPID08H FSGD3A.SPID08.UINT16[H]
#define FSGD3ASPID08HL FSGD3A.SPID08.UINT8[HL]
#define FSGD3ASPID08HH FSGD3A.SPID08.UINT8[HH]
#define FSGD3APROT09 FSGD3A.PROT09.UINT32
#define FSGD3APROT09L FSGD3A.PROT09.UINT16[L]
#define FSGD3APROT09LL FSGD3A.PROT09.UINT8[LL]
#define FSGD3APROT09LH FSGD3A.PROT09.UINT8[LH]
#define FSGD3APROT09H FSGD3A.PROT09.UINT16[H]
#define FSGD3APROT09HL FSGD3A.PROT09.UINT8[HL]
#define FSGD3APROT09HH FSGD3A.PROT09.UINT8[HH]
#define FSGD3ASPID09 FSGD3A.SPID09.UINT32
#define FSGD3ASPID09L FSGD3A.SPID09.UINT16[L]
#define FSGD3ASPID09LL FSGD3A.SPID09.UINT8[LL]
#define FSGD3ASPID09LH FSGD3A.SPID09.UINT8[LH]
#define FSGD3ASPID09H FSGD3A.SPID09.UINT16[H]
#define FSGD3ASPID09HL FSGD3A.SPID09.UINT8[HL]
#define FSGD3ASPID09HH FSGD3A.SPID09.UINT8[HH]
#define FSGD3APROT10 FSGD3A.PROT10.UINT32
#define FSGD3APROT10L FSGD3A.PROT10.UINT16[L]
#define FSGD3APROT10LL FSGD3A.PROT10.UINT8[LL]
#define FSGD3APROT10LH FSGD3A.PROT10.UINT8[LH]
#define FSGD3APROT10H FSGD3A.PROT10.UINT16[H]
#define FSGD3APROT10HL FSGD3A.PROT10.UINT8[HL]
#define FSGD3APROT10HH FSGD3A.PROT10.UINT8[HH]
#define FSGD3ASPID10 FSGD3A.SPID10.UINT32
#define FSGD3ASPID10L FSGD3A.SPID10.UINT16[L]
#define FSGD3ASPID10LL FSGD3A.SPID10.UINT8[LL]
#define FSGD3ASPID10LH FSGD3A.SPID10.UINT8[LH]
#define FSGD3ASPID10H FSGD3A.SPID10.UINT16[H]
#define FSGD3ASPID10HL FSGD3A.SPID10.UINT8[HL]
#define FSGD3ASPID10HH FSGD3A.SPID10.UINT8[HH]
#define FSGD3APROT11 FSGD3A.PROT11.UINT32
#define FSGD3APROT11L FSGD3A.PROT11.UINT16[L]
#define FSGD3APROT11LL FSGD3A.PROT11.UINT8[LL]
#define FSGD3APROT11LH FSGD3A.PROT11.UINT8[LH]
#define FSGD3APROT11H FSGD3A.PROT11.UINT16[H]
#define FSGD3APROT11HL FSGD3A.PROT11.UINT8[HL]
#define FSGD3APROT11HH FSGD3A.PROT11.UINT8[HH]
#define FSGD3ASPID11 FSGD3A.SPID11.UINT32
#define FSGD3ASPID11L FSGD3A.SPID11.UINT16[L]
#define FSGD3ASPID11LL FSGD3A.SPID11.UINT8[LL]
#define FSGD3ASPID11LH FSGD3A.SPID11.UINT8[LH]
#define FSGD3ASPID11H FSGD3A.SPID11.UINT16[H]
#define FSGD3ASPID11HL FSGD3A.SPID11.UINT8[HL]
#define FSGD3ASPID11HH FSGD3A.SPID11.UINT8[HH]
#define FSGD3APROT12 FSGD3A.PROT12.UINT32
#define FSGD3APROT12L FSGD3A.PROT12.UINT16[L]
#define FSGD3APROT12LL FSGD3A.PROT12.UINT8[LL]
#define FSGD3APROT12LH FSGD3A.PROT12.UINT8[LH]
#define FSGD3APROT12H FSGD3A.PROT12.UINT16[H]
#define FSGD3APROT12HL FSGD3A.PROT12.UINT8[HL]
#define FSGD3APROT12HH FSGD3A.PROT12.UINT8[HH]
#define FSGD3ASPID12 FSGD3A.SPID12.UINT32
#define FSGD3ASPID12L FSGD3A.SPID12.UINT16[L]
#define FSGD3ASPID12LL FSGD3A.SPID12.UINT8[LL]
#define FSGD3ASPID12LH FSGD3A.SPID12.UINT8[LH]
#define FSGD3ASPID12H FSGD3A.SPID12.UINT16[H]
#define FSGD3ASPID12HL FSGD3A.SPID12.UINT8[HL]
#define FSGD3ASPID12HH FSGD3A.SPID12.UINT8[HH]
#define FSGD3APROT13 FSGD3A.PROT13.UINT32
#define FSGD3APROT13L FSGD3A.PROT13.UINT16[L]
#define FSGD3APROT13LL FSGD3A.PROT13.UINT8[LL]
#define FSGD3APROT13LH FSGD3A.PROT13.UINT8[LH]
#define FSGD3APROT13H FSGD3A.PROT13.UINT16[H]
#define FSGD3APROT13HL FSGD3A.PROT13.UINT8[HL]
#define FSGD3APROT13HH FSGD3A.PROT13.UINT8[HH]
#define FSGD3ASPID13 FSGD3A.SPID13.UINT32
#define FSGD3ASPID13L FSGD3A.SPID13.UINT16[L]
#define FSGD3ASPID13LL FSGD3A.SPID13.UINT8[LL]
#define FSGD3ASPID13LH FSGD3A.SPID13.UINT8[LH]
#define FSGD3ASPID13H FSGD3A.SPID13.UINT16[H]
#define FSGD3ASPID13HL FSGD3A.SPID13.UINT8[HL]
#define FSGD3ASPID13HH FSGD3A.SPID13.UINT8[HH]
#define FSGD3APROT14 FSGD3A.PROT14.UINT32
#define FSGD3APROT14L FSGD3A.PROT14.UINT16[L]
#define FSGD3APROT14LL FSGD3A.PROT14.UINT8[LL]
#define FSGD3APROT14LH FSGD3A.PROT14.UINT8[LH]
#define FSGD3APROT14H FSGD3A.PROT14.UINT16[H]
#define FSGD3APROT14HL FSGD3A.PROT14.UINT8[HL]
#define FSGD3APROT14HH FSGD3A.PROT14.UINT8[HH]
#define FSGD3ASPID14 FSGD3A.SPID14.UINT32
#define FSGD3ASPID14L FSGD3A.SPID14.UINT16[L]
#define FSGD3ASPID14LL FSGD3A.SPID14.UINT8[LL]
#define FSGD3ASPID14LH FSGD3A.SPID14.UINT8[LH]
#define FSGD3ASPID14H FSGD3A.SPID14.UINT16[H]
#define FSGD3ASPID14HL FSGD3A.SPID14.UINT8[HL]
#define FSGD3ASPID14HH FSGD3A.SPID14.UINT8[HH]
#define FSGD3APROT15 FSGD3A.PROT15.UINT32
#define FSGD3APROT15L FSGD3A.PROT15.UINT16[L]
#define FSGD3APROT15LL FSGD3A.PROT15.UINT8[LL]
#define FSGD3APROT15LH FSGD3A.PROT15.UINT8[LH]
#define FSGD3APROT15H FSGD3A.PROT15.UINT16[H]
#define FSGD3APROT15HL FSGD3A.PROT15.UINT8[HL]
#define FSGD3APROT15HH FSGD3A.PROT15.UINT8[HH]
#define FSGD3ASPID15 FSGD3A.SPID15.UINT32
#define FSGD3ASPID15L FSGD3A.SPID15.UINT16[L]
#define FSGD3ASPID15LL FSGD3A.SPID15.UINT8[LL]
#define FSGD3ASPID15LH FSGD3A.SPID15.UINT8[LH]
#define FSGD3ASPID15H FSGD3A.SPID15.UINT16[H]
#define FSGD3ASPID15HL FSGD3A.SPID15.UINT8[HL]
#define FSGD3ASPID15HH FSGD3A.SPID15.UINT8[HH]
#define ERRSLV3CTL ERRSLV3.CTL
#define ERRSLV3STAT ERRSLV3.STAT
#define ERRSLV3TYPE ERRSLV3.TYPE
#define FSGD3BPROT00 FSGD3B.PROT00.UINT32
#define FSGD3BPROT00L FSGD3B.PROT00.UINT16[L]
#define FSGD3BPROT00LL FSGD3B.PROT00.UINT8[LL]
#define FSGD3BPROT00LH FSGD3B.PROT00.UINT8[LH]
#define FSGD3BPROT00H FSGD3B.PROT00.UINT16[H]
#define FSGD3BPROT00HL FSGD3B.PROT00.UINT8[HL]
#define FSGD3BPROT00HH FSGD3B.PROT00.UINT8[HH]
#define FSGD3BSPID00 FSGD3B.SPID00.UINT32
#define FSGD3BSPID00L FSGD3B.SPID00.UINT16[L]
#define FSGD3BSPID00LL FSGD3B.SPID00.UINT8[LL]
#define FSGD3BSPID00LH FSGD3B.SPID00.UINT8[LH]
#define FSGD3BSPID00H FSGD3B.SPID00.UINT16[H]
#define FSGD3BSPID00HL FSGD3B.SPID00.UINT8[HL]
#define FSGD3BSPID00HH FSGD3B.SPID00.UINT8[HH]
#define FSGD3BPROT01 FSGD3B.PROT01.UINT32
#define FSGD3BPROT01L FSGD3B.PROT01.UINT16[L]
#define FSGD3BPROT01LL FSGD3B.PROT01.UINT8[LL]
#define FSGD3BPROT01LH FSGD3B.PROT01.UINT8[LH]
#define FSGD3BPROT01H FSGD3B.PROT01.UINT16[H]
#define FSGD3BPROT01HL FSGD3B.PROT01.UINT8[HL]
#define FSGD3BPROT01HH FSGD3B.PROT01.UINT8[HH]
#define FSGD3BSPID01 FSGD3B.SPID01.UINT32
#define FSGD3BSPID01L FSGD3B.SPID01.UINT16[L]
#define FSGD3BSPID01LL FSGD3B.SPID01.UINT8[LL]
#define FSGD3BSPID01LH FSGD3B.SPID01.UINT8[LH]
#define FSGD3BSPID01H FSGD3B.SPID01.UINT16[H]
#define FSGD3BSPID01HL FSGD3B.SPID01.UINT8[HL]
#define FSGD3BSPID01HH FSGD3B.SPID01.UINT8[HH]
#define FSGD3BPROT02 FSGD3B.PROT02.UINT32
#define FSGD3BPROT02L FSGD3B.PROT02.UINT16[L]
#define FSGD3BPROT02LL FSGD3B.PROT02.UINT8[LL]
#define FSGD3BPROT02LH FSGD3B.PROT02.UINT8[LH]
#define FSGD3BPROT02H FSGD3B.PROT02.UINT16[H]
#define FSGD3BPROT02HL FSGD3B.PROT02.UINT8[HL]
#define FSGD3BPROT02HH FSGD3B.PROT02.UINT8[HH]
#define FSGD3BSPID02 FSGD3B.SPID02.UINT32
#define FSGD3BSPID02L FSGD3B.SPID02.UINT16[L]
#define FSGD3BSPID02LL FSGD3B.SPID02.UINT8[LL]
#define FSGD3BSPID02LH FSGD3B.SPID02.UINT8[LH]
#define FSGD3BSPID02H FSGD3B.SPID02.UINT16[H]
#define FSGD3BSPID02HL FSGD3B.SPID02.UINT8[HL]
#define FSGD3BSPID02HH FSGD3B.SPID02.UINT8[HH]
#define FSGD3BPROT03 FSGD3B.PROT03.UINT32
#define FSGD3BPROT03L FSGD3B.PROT03.UINT16[L]
#define FSGD3BPROT03LL FSGD3B.PROT03.UINT8[LL]
#define FSGD3BPROT03LH FSGD3B.PROT03.UINT8[LH]
#define FSGD3BPROT03H FSGD3B.PROT03.UINT16[H]
#define FSGD3BPROT03HL FSGD3B.PROT03.UINT8[HL]
#define FSGD3BPROT03HH FSGD3B.PROT03.UINT8[HH]
#define FSGD3BSPID03 FSGD3B.SPID03.UINT32
#define FSGD3BSPID03L FSGD3B.SPID03.UINT16[L]
#define FSGD3BSPID03LL FSGD3B.SPID03.UINT8[LL]
#define FSGD3BSPID03LH FSGD3B.SPID03.UINT8[LH]
#define FSGD3BSPID03H FSGD3B.SPID03.UINT16[H]
#define FSGD3BSPID03HL FSGD3B.SPID03.UINT8[HL]
#define FSGD3BSPID03HH FSGD3B.SPID03.UINT8[HH]
#define FSGD3BPROT06 FSGD3B.PROT06.UINT32
#define FSGD3BPROT06L FSGD3B.PROT06.UINT16[L]
#define FSGD3BPROT06LL FSGD3B.PROT06.UINT8[LL]
#define FSGD3BPROT06LH FSGD3B.PROT06.UINT8[LH]
#define FSGD3BPROT06H FSGD3B.PROT06.UINT16[H]
#define FSGD3BPROT06HL FSGD3B.PROT06.UINT8[HL]
#define FSGD3BPROT06HH FSGD3B.PROT06.UINT8[HH]
#define FSGD3BSPID06 FSGD3B.SPID06.UINT32
#define FSGD3BSPID06L FSGD3B.SPID06.UINT16[L]
#define FSGD3BSPID06LL FSGD3B.SPID06.UINT8[LL]
#define FSGD3BSPID06LH FSGD3B.SPID06.UINT8[LH]
#define FSGD3BSPID06H FSGD3B.SPID06.UINT16[H]
#define FSGD3BSPID06HL FSGD3B.SPID06.UINT8[HL]
#define FSGD3BSPID06HH FSGD3B.SPID06.UINT8[HH]
#define FSGD3BPROT07 FSGD3B.PROT07.UINT32
#define FSGD3BPROT07L FSGD3B.PROT07.UINT16[L]
#define FSGD3BPROT07LL FSGD3B.PROT07.UINT8[LL]
#define FSGD3BPROT07LH FSGD3B.PROT07.UINT8[LH]
#define FSGD3BPROT07H FSGD3B.PROT07.UINT16[H]
#define FSGD3BPROT07HL FSGD3B.PROT07.UINT8[HL]
#define FSGD3BPROT07HH FSGD3B.PROT07.UINT8[HH]
#define FSGD3BSPID07 FSGD3B.SPID07.UINT32
#define FSGD3BSPID07L FSGD3B.SPID07.UINT16[L]
#define FSGD3BSPID07LL FSGD3B.SPID07.UINT8[LL]
#define FSGD3BSPID07LH FSGD3B.SPID07.UINT8[LH]
#define FSGD3BSPID07H FSGD3B.SPID07.UINT16[H]
#define FSGD3BSPID07HL FSGD3B.SPID07.UINT8[HL]
#define FSGD3BSPID07HH FSGD3B.SPID07.UINT8[HH]
#define FSGD3BPROT10 FSGD3B.PROT10.UINT32
#define FSGD3BPROT10L FSGD3B.PROT10.UINT16[L]
#define FSGD3BPROT10LL FSGD3B.PROT10.UINT8[LL]
#define FSGD3BPROT10LH FSGD3B.PROT10.UINT8[LH]
#define FSGD3BPROT10H FSGD3B.PROT10.UINT16[H]
#define FSGD3BPROT10HL FSGD3B.PROT10.UINT8[HL]
#define FSGD3BPROT10HH FSGD3B.PROT10.UINT8[HH]
#define FSGD3BSPID10 FSGD3B.SPID10.UINT32
#define FSGD3BSPID10L FSGD3B.SPID10.UINT16[L]
#define FSGD3BSPID10LL FSGD3B.SPID10.UINT8[LL]
#define FSGD3BSPID10LH FSGD3B.SPID10.UINT8[LH]
#define FSGD3BSPID10H FSGD3B.SPID10.UINT16[H]
#define FSGD3BSPID10HL FSGD3B.SPID10.UINT8[HL]
#define FSGD3BSPID10HH FSGD3B.SPID10.UINT8[HH]
#define FSGD3BPROT11 FSGD3B.PROT11.UINT32
#define FSGD3BPROT11L FSGD3B.PROT11.UINT16[L]
#define FSGD3BPROT11LL FSGD3B.PROT11.UINT8[LL]
#define FSGD3BPROT11LH FSGD3B.PROT11.UINT8[LH]
#define FSGD3BPROT11H FSGD3B.PROT11.UINT16[H]
#define FSGD3BPROT11HL FSGD3B.PROT11.UINT8[HL]
#define FSGD3BPROT11HH FSGD3B.PROT11.UINT8[HH]
#define FSGD3BSPID11 FSGD3B.SPID11.UINT32
#define FSGD3BSPID11L FSGD3B.SPID11.UINT16[L]
#define FSGD3BSPID11LL FSGD3B.SPID11.UINT8[LL]
#define FSGD3BSPID11LH FSGD3B.SPID11.UINT8[LH]
#define FSGD3BSPID11H FSGD3B.SPID11.UINT16[H]
#define FSGD3BSPID11HL FSGD3B.SPID11.UINT8[HL]
#define FSGD3BSPID11HH FSGD3B.SPID11.UINT8[HH]
#define FSGD3BPROT12 FSGD3B.PROT12.UINT32
#define FSGD3BPROT12L FSGD3B.PROT12.UINT16[L]
#define FSGD3BPROT12LL FSGD3B.PROT12.UINT8[LL]
#define FSGD3BPROT12LH FSGD3B.PROT12.UINT8[LH]
#define FSGD3BPROT12H FSGD3B.PROT12.UINT16[H]
#define FSGD3BPROT12HL FSGD3B.PROT12.UINT8[HL]
#define FSGD3BPROT12HH FSGD3B.PROT12.UINT8[HH]
#define FSGD3BSPID12 FSGD3B.SPID12.UINT32
#define FSGD3BSPID12L FSGD3B.SPID12.UINT16[L]
#define FSGD3BSPID12LL FSGD3B.SPID12.UINT8[LL]
#define FSGD3BSPID12LH FSGD3B.SPID12.UINT8[LH]
#define FSGD3BSPID12H FSGD3B.SPID12.UINT16[H]
#define FSGD3BSPID12HL FSGD3B.SPID12.UINT8[HL]
#define FSGD3BSPID12HH FSGD3B.SPID12.UINT8[HH]
#define FSGD3BPROT13 FSGD3B.PROT13.UINT32
#define FSGD3BPROT13L FSGD3B.PROT13.UINT16[L]
#define FSGD3BPROT13LL FSGD3B.PROT13.UINT8[LL]
#define FSGD3BPROT13LH FSGD3B.PROT13.UINT8[LH]
#define FSGD3BPROT13H FSGD3B.PROT13.UINT16[H]
#define FSGD3BPROT13HL FSGD3B.PROT13.UINT8[HL]
#define FSGD3BPROT13HH FSGD3B.PROT13.UINT8[HH]
#define FSGD3BSPID13 FSGD3B.SPID13.UINT32
#define FSGD3BSPID13L FSGD3B.SPID13.UINT16[L]
#define FSGD3BSPID13LL FSGD3B.SPID13.UINT8[LL]
#define FSGD3BSPID13LH FSGD3B.SPID13.UINT8[LH]
#define FSGD3BSPID13H FSGD3B.SPID13.UINT16[H]
#define FSGD3BSPID13HL FSGD3B.SPID13.UINT8[HL]
#define FSGD3BSPID13HH FSGD3B.SPID13.UINT8[HH]
#define ERRSLV3AICTL ERRSLV3AI.CTL
#define ERRSLV3AISTAT ERRSLV3AI.STAT
#define ERRSLV3AITYPE ERRSLV3AI.TYPE
#define NTU0PRSCTL NTU0.PRSCTL
#define NTU0PRSCMP NTU0.PRSCMP
#define NTU0BPRSCTL NTU0.BPRSCTL
#define NTU0BPRSCMP NTU0.BPRSCMP
#define NTU0CPRSCTL NTU0.CPRSCTL
#define NTU0CPRSCMP NTU0.CPRSCMP
#define NTU0CCTL0 NTU0.CCTL0
#define NTU0CCMPL NTU0.CCMPL
#define NTU0CCMPH NTU0.CCMPH
#define NTU0CPCMD NTU0.CPCMD
#define NTU0CPS NTU0.CPS
#define NTU0RST NTU0.RST
#define NTU0CFG NTU0.CFG
#define NTU0CLMEN NTU0.CLMEN
#define NTU0MON NTU0.MON
#define FSGDF0PROT00 FSGDF0.PROT00.UINT32
#define FSGDF0PROT00L FSGDF0.PROT00.UINT16[L]
#define FSGDF0PROT00LL FSGDF0.PROT00.UINT8[LL]
#define FSGDF0PROT00LH FSGDF0.PROT00.UINT8[LH]
#define FSGDF0PROT00H FSGDF0.PROT00.UINT16[H]
#define FSGDF0PROT00HL FSGDF0.PROT00.UINT8[HL]
#define FSGDF0PROT00HH FSGDF0.PROT00.UINT8[HH]
#define FSGDF0SPID00 FSGDF0.SPID00.UINT32
#define FSGDF0SPID00L FSGDF0.SPID00.UINT16[L]
#define FSGDF0SPID00LL FSGDF0.SPID00.UINT8[LL]
#define FSGDF0SPID00LH FSGDF0.SPID00.UINT8[LH]
#define FSGDF0SPID00H FSGDF0.SPID00.UINT16[H]
#define FSGDF0SPID00HL FSGDF0.SPID00.UINT8[HL]
#define FSGDF0SPID00HH FSGDF0.SPID00.UINT8[HH]
#define FSGDF0PROT01 FSGDF0.PROT01.UINT32
#define FSGDF0PROT01L FSGDF0.PROT01.UINT16[L]
#define FSGDF0PROT01LL FSGDF0.PROT01.UINT8[LL]
#define FSGDF0PROT01LH FSGDF0.PROT01.UINT8[LH]
#define FSGDF0PROT01H FSGDF0.PROT01.UINT16[H]
#define FSGDF0PROT01HL FSGDF0.PROT01.UINT8[HL]
#define FSGDF0PROT01HH FSGDF0.PROT01.UINT8[HH]
#define FSGDF0SPID01 FSGDF0.SPID01.UINT32
#define FSGDF0SPID01L FSGDF0.SPID01.UINT16[L]
#define FSGDF0SPID01LL FSGDF0.SPID01.UINT8[LL]
#define FSGDF0SPID01LH FSGDF0.SPID01.UINT8[LH]
#define FSGDF0SPID01H FSGDF0.SPID01.UINT16[H]
#define FSGDF0SPID01HL FSGDF0.SPID01.UINT8[HL]
#define FSGDF0SPID01HH FSGDF0.SPID01.UINT8[HH]
#define ERRSLVF0CTL ERRSLVF0.CTL
#define ERRSLVF0STAT ERRSLVF0.STAT
#define ERRSLVF0TYPE ERRSLVF0.TYPE
#define FSGDE0PROT00 FSGDE0.PROT00.UINT32
#define FSGDE0PROT00L FSGDE0.PROT00.UINT16[L]
#define FSGDE0PROT00LL FSGDE0.PROT00.UINT8[LL]
#define FSGDE0PROT00LH FSGDE0.PROT00.UINT8[LH]
#define FSGDE0PROT00H FSGDE0.PROT00.UINT16[H]
#define FSGDE0PROT00HL FSGDE0.PROT00.UINT8[HL]
#define FSGDE0PROT00HH FSGDE0.PROT00.UINT8[HH]
#define FSGDE0SPID00 FSGDE0.SPID00.UINT32
#define FSGDE0SPID00L FSGDE0.SPID00.UINT16[L]
#define FSGDE0SPID00LL FSGDE0.SPID00.UINT8[LL]
#define FSGDE0SPID00LH FSGDE0.SPID00.UINT8[LH]
#define FSGDE0SPID00H FSGDE0.SPID00.UINT16[H]
#define FSGDE0SPID00HL FSGDE0.SPID00.UINT8[HL]
#define FSGDE0SPID00HH FSGDE0.SPID00.UINT8[HH]
#define FSGDE0PROT01 FSGDE0.PROT01.UINT32
#define FSGDE0PROT01L FSGDE0.PROT01.UINT16[L]
#define FSGDE0PROT01LL FSGDE0.PROT01.UINT8[LL]
#define FSGDE0PROT01LH FSGDE0.PROT01.UINT8[LH]
#define FSGDE0PROT01H FSGDE0.PROT01.UINT16[H]
#define FSGDE0PROT01HL FSGDE0.PROT01.UINT8[HL]
#define FSGDE0PROT01HH FSGDE0.PROT01.UINT8[HH]
#define FSGDE0SPID01 FSGDE0.SPID01.UINT32
#define FSGDE0SPID01L FSGDE0.SPID01.UINT16[L]
#define FSGDE0SPID01LL FSGDE0.SPID01.UINT8[LL]
#define FSGDE0SPID01LH FSGDE0.SPID01.UINT8[LH]
#define FSGDE0SPID01H FSGDE0.SPID01.UINT16[H]
#define FSGDE0SPID01HL FSGDE0.SPID01.UINT8[HL]
#define FSGDE0SPID01HH FSGDE0.SPID01.UINT8[HH]
#define ERRSLVE0CTL ERRSLVE0.CTL
#define ERRSLVE0STAT ERRSLVE0.STAT
#define ERRSLVE0TYPE ERRSLVE0.TYPE
#define ERRSLVFICTL ERRSLVFI.CTL
#define ERRSLVFISTAT ERRSLVFI.STAT
#define ERRSLVFITYPE ERRSLVFI.TYPE
#define ERRSLVEICTL ERRSLVEI.CTL
#define ERRSLVEISTAT ERRSLVEI.STAT
#define ERRSLVEITYPE ERRSLVEI.TYPE
#define ERRSLVMICTL ERRSLVMI.CTL
#define ERRSLVMISTAT ERRSLVMI.STAT
#define ERRSLVMITYPE ERRSLVMI.TYPE
#define ERRSLVHICTL ERRSLVHI.CTL
#define ERRSLVHISTAT ERRSLVHI.STAT
#define ERRSLVHITYPE ERRSLVHI.TYPE
#define ERRSLVXICTL ERRSLVXI.CTL
#define ERRSLVXISTAT ERRSLVXI.STAT
#define ERRSLVXITYPE ERRSLVXI.TYPE
#define HSSPIDRG0 HSSPID.RG0
#define HSSPIDRG1 HSSPID.RG1
#define HSSPIDRG2 HSSPID.RG2
#define HSSPIDRG3 HSSPID.RG3
#define HSSPIDRG4 HSSPID.RG4
#define HSSPIDRG5 HSSPID.RG5
#define HSSPIDRG6 HSSPID.RG6
#define HSSPIDRG7 HSSPID.RG7
#define HTHDMACTL HTHDMA.CTL.UINT32
#define HTHDMACTLL HTHDMA.CTL.UINT16[L]
#define HTHDMACTLLL HTHDMA.CTL.UINT8[LL]
#define HTHDMASTAT HTHDMA.STAT.UINT32
#define HTHDMASTATL HTHDMA.STAT.UINT16[L]
#define HTHDMASTATLL HTHDMA.STAT.UINT8[LL]
#define IPGECRUM IPG.ECRUM
#define IPGADRUM IPG.ADRUM
#define IPGENUM IPG.ENUM.UINT8
#define IPGE IPG.ENUM.E
#define IPGIRE IPG.ENUM.IRE
#define IPGPMTUM0 IPG.PMTUM0.UINT8
#define IPGR0 IPG.PMTUM0.R0
#define IPGW0 IPG.PMTUM0.W0
#define IPGX0 IPG.PMTUM0.X0
#define IPGR1 IPG.PMTUM0.R1
#define IPGW1 IPG.PMTUM0.W1
#define IPGX1 IPG.PMTUM0.X1
#define IPGPMTUM1 IPG.PMTUM1.UINT8
#define IPGPMTUM2 IPG.PMTUM2.UINT8
#define IPGPMTUM3 IPG.PMTUM3.UINT8
#define IPGPMTUM4 IPG.PMTUM4.UINT8
#define PEGG0MK PEG.G0MK.UINT32
#define PEGG0MKL PEG.G0MK.UINT16[L]
#define PEGG0MKLL PEG.G0MK.UINT8[LL]
#define PEGG0MKLH PEG.G0MK.UINT8[LH]
#define PEGG0MKH PEG.G0MK.UINT16[H]
#define PEGG0MKHL PEG.G0MK.UINT8[HL]
#define PEGG0MKHH PEG.G0MK.UINT8[HH]
#define PEGG0BA PEG.G0BA.UINT32
#define PEGG0BAL PEG.G0BA.UINT16[L]
#define PEGG0BALL PEG.G0BA.UINT8[LL]
#define PEGG0BALH PEG.G0BA.UINT8[LH]
#define PEGG0BAH PEG.G0BA.UINT16[H]
#define PEGG0BAHL PEG.G0BA.UINT8[HL]
#define PEGG0BAHH PEG.G0BA.UINT8[HH]
#define PEGG0SP PEG.G0SP.UINT32
#define PEGG0SPL PEG.G0SP.UINT16[L]
#define PEGG0SPLL PEG.G0SP.UINT8[LL]
#define PEGG0SPLH PEG.G0SP.UINT8[LH]
#define PEGG0SPH PEG.G0SP.UINT16[H]
#define PEGG0SPHL PEG.G0SP.UINT8[HL]
#define PEGG0SPHH PEG.G0SP.UINT8[HH]
#define PEGG1MK PEG.G1MK.UINT32
#define PEGG1MKL PEG.G1MK.UINT16[L]
#define PEGG1MKLL PEG.G1MK.UINT8[LL]
#define PEGG1MKLH PEG.G1MK.UINT8[LH]
#define PEGG1MKH PEG.G1MK.UINT16[H]
#define PEGG1MKHL PEG.G1MK.UINT8[HL]
#define PEGG1MKHH PEG.G1MK.UINT8[HH]
#define PEGG1BA PEG.G1BA.UINT32
#define PEGG1BAL PEG.G1BA.UINT16[L]
#define PEGG1BALL PEG.G1BA.UINT8[LL]
#define PEGG1BALH PEG.G1BA.UINT8[LH]
#define PEGG1BAH PEG.G1BA.UINT16[H]
#define PEGG1BAHL PEG.G1BA.UINT8[HL]
#define PEGG1BAHH PEG.G1BA.UINT8[HH]
#define PEGG1SP PEG.G1SP.UINT32
#define PEGG1SPL PEG.G1SP.UINT16[L]
#define PEGG1SPLL PEG.G1SP.UINT8[LL]
#define PEGG1SPLH PEG.G1SP.UINT8[LH]
#define PEGG1SPH PEG.G1SP.UINT16[H]
#define PEGG1SPHL PEG.G1SP.UINT8[HL]
#define PEGG1SPHH PEG.G1SP.UINT8[HH]
#define PEGG2MK PEG.G2MK.UINT32
#define PEGG2MKL PEG.G2MK.UINT16[L]
#define PEGG2MKLL PEG.G2MK.UINT8[LL]
#define PEGG2MKLH PEG.G2MK.UINT8[LH]
#define PEGG2MKH PEG.G2MK.UINT16[H]
#define PEGG2MKHL PEG.G2MK.UINT8[HL]
#define PEGG2MKHH PEG.G2MK.UINT8[HH]
#define PEGG2BA PEG.G2BA.UINT32
#define PEGG2BAL PEG.G2BA.UINT16[L]
#define PEGG2BALL PEG.G2BA.UINT8[LL]
#define PEGG2BALH PEG.G2BA.UINT8[LH]
#define PEGG2BAH PEG.G2BA.UINT16[H]
#define PEGG2BAHL PEG.G2BA.UINT8[HL]
#define PEGG2BAHH PEG.G2BA.UINT8[HH]
#define PEGG2SP PEG.G2SP.UINT32
#define PEGG2SPL PEG.G2SP.UINT16[L]
#define PEGG2SPLL PEG.G2SP.UINT8[LL]
#define PEGG2SPLH PEG.G2SP.UINT8[LH]
#define PEGG2SPH PEG.G2SP.UINT16[H]
#define PEGG2SPHL PEG.G2SP.UINT8[HL]
#define PEGG2SPHH PEG.G2SP.UINT8[HH]
#define PEGG3MK PEG.G3MK.UINT32
#define PEGG3MKL PEG.G3MK.UINT16[L]
#define PEGG3MKLL PEG.G3MK.UINT8[LL]
#define PEGG3MKLH PEG.G3MK.UINT8[LH]
#define PEGG3MKH PEG.G3MK.UINT16[H]
#define PEGG3MKHL PEG.G3MK.UINT8[HL]
#define PEGG3MKHH PEG.G3MK.UINT8[HH]
#define PEGG3BA PEG.G3BA.UINT32
#define PEGG3BAL PEG.G3BA.UINT16[L]
#define PEGG3BALL PEG.G3BA.UINT8[LL]
#define PEGG3BALH PEG.G3BA.UINT8[LH]
#define PEGG3BAH PEG.G3BA.UINT16[H]
#define PEGG3BAHL PEG.G3BA.UINT8[HL]
#define PEGG3BAHH PEG.G3BA.UINT8[HH]
#define PEGG3SP PEG.G3SP.UINT32
#define PEGG3SPL PEG.G3SP.UINT16[L]
#define PEGG3SPLL PEG.G3SP.UINT8[LL]
#define PEGG3SPLH PEG.G3SP.UINT8[LH]
#define PEGG3SPH PEG.G3SP.UINT16[H]
#define PEGG3SPHL PEG.G3SP.UINT8[HL]
#define PEGG3SPHH PEG.G3SP.UINT8[HH]
#define PEGG4MK PEG.G4MK.UINT32
#define PEGG4MKL PEG.G4MK.UINT16[L]
#define PEGG4MKLL PEG.G4MK.UINT8[LL]
#define PEGG4MKLH PEG.G4MK.UINT8[LH]
#define PEGG4MKH PEG.G4MK.UINT16[H]
#define PEGG4MKHL PEG.G4MK.UINT8[HL]
#define PEGG4MKHH PEG.G4MK.UINT8[HH]
#define PEGG4BA PEG.G4BA.UINT32
#define PEGG4BAL PEG.G4BA.UINT16[L]
#define PEGG4BALL PEG.G4BA.UINT8[LL]
#define PEGG4BALH PEG.G4BA.UINT8[LH]
#define PEGG4BAH PEG.G4BA.UINT16[H]
#define PEGG4BAHL PEG.G4BA.UINT8[HL]
#define PEGG4BAHH PEG.G4BA.UINT8[HH]
#define PEGG4SP PEG.G4SP.UINT32
#define PEGG4SPL PEG.G4SP.UINT16[L]
#define PEGG4SPLL PEG.G4SP.UINT8[LL]
#define PEGG4SPLH PEG.G4SP.UINT8[LH]
#define PEGG4SPH PEG.G4SP.UINT16[H]
#define PEGG4SPHL PEG.G4SP.UINT8[HL]
#define PEGG4SPHH PEG.G4SP.UINT8[HH]
#define PEGG5MK PEG.G5MK.UINT32
#define PEGG5MKL PEG.G5MK.UINT16[L]
#define PEGG5MKLL PEG.G5MK.UINT8[LL]
#define PEGG5MKLH PEG.G5MK.UINT8[LH]
#define PEGG5MKH PEG.G5MK.UINT16[H]
#define PEGG5MKHL PEG.G5MK.UINT8[HL]
#define PEGG5MKHH PEG.G5MK.UINT8[HH]
#define PEGG5BA PEG.G5BA.UINT32
#define PEGG5BAL PEG.G5BA.UINT16[L]
#define PEGG5BALL PEG.G5BA.UINT8[LL]
#define PEGG5BALH PEG.G5BA.UINT8[LH]
#define PEGG5BAH PEG.G5BA.UINT16[H]
#define PEGG5BAHL PEG.G5BA.UINT8[HL]
#define PEGG5BAHH PEG.G5BA.UINT8[HH]
#define PEGG5SP PEG.G5SP.UINT32
#define PEGG5SPL PEG.G5SP.UINT16[L]
#define PEGG5SPLL PEG.G5SP.UINT8[LL]
#define PEGG5SPLH PEG.G5SP.UINT8[LH]
#define PEGG5SPH PEG.G5SP.UINT16[H]
#define PEGG5SPHL PEG.G5SP.UINT8[HL]
#define PEGG5SPHH PEG.G5SP.UINT8[HH]
#define PEGG6MK PEG.G6MK.UINT32
#define PEGG6MKL PEG.G6MK.UINT16[L]
#define PEGG6MKLL PEG.G6MK.UINT8[LL]
#define PEGG6MKLH PEG.G6MK.UINT8[LH]
#define PEGG6MKH PEG.G6MK.UINT16[H]
#define PEGG6MKHL PEG.G6MK.UINT8[HL]
#define PEGG6MKHH PEG.G6MK.UINT8[HH]
#define PEGG6BA PEG.G6BA.UINT32
#define PEGG6BAL PEG.G6BA.UINT16[L]
#define PEGG6BALL PEG.G6BA.UINT8[LL]
#define PEGG6BALH PEG.G6BA.UINT8[LH]
#define PEGG6BAH PEG.G6BA.UINT16[H]
#define PEGG6BAHL PEG.G6BA.UINT8[HL]
#define PEGG6BAHH PEG.G6BA.UINT8[HH]
#define PEGG6SP PEG.G6SP.UINT32
#define PEGG6SPL PEG.G6SP.UINT16[L]
#define PEGG6SPLL PEG.G6SP.UINT8[LL]
#define PEGG6SPLH PEG.G6SP.UINT8[LH]
#define PEGG6SPH PEG.G6SP.UINT16[H]
#define PEGG6SPHL PEG.G6SP.UINT8[HL]
#define PEGG6SPHH PEG.G6SP.UINT8[HH]
#define PEGG7MK PEG.G7MK.UINT32
#define PEGG7MKL PEG.G7MK.UINT16[L]
#define PEGG7MKLL PEG.G7MK.UINT8[LL]
#define PEGG7MKLH PEG.G7MK.UINT8[LH]
#define PEGG7MKH PEG.G7MK.UINT16[H]
#define PEGG7MKHL PEG.G7MK.UINT8[HL]
#define PEGG7MKHH PEG.G7MK.UINT8[HH]
#define PEGG7BA PEG.G7BA.UINT32
#define PEGG7BAL PEG.G7BA.UINT16[L]
#define PEGG7BALL PEG.G7BA.UINT8[LL]
#define PEGG7BALH PEG.G7BA.UINT8[LH]
#define PEGG7BAH PEG.G7BA.UINT16[H]
#define PEGG7BAHL PEG.G7BA.UINT8[HL]
#define PEGG7BAHH PEG.G7BA.UINT8[HH]
#define PEGG7SP PEG.G7SP.UINT32
#define PEGG7SPL PEG.G7SP.UINT16[L]
#define PEGG7SPLL PEG.G7SP.UINT8[LL]
#define PEGG7SPLH PEG.G7SP.UINT8[LH]
#define PEGG7SPH PEG.G7SP.UINT16[H]
#define PEGG7SPHL PEG.G7SP.UINT8[HL]
#define PEGG7SPHH PEG.G7SP.UINT8[HH]
#define SEGCONT SEG.CONT
#define SEGFLAG SEG.FLAG
#define SEGTYPE SEG.TYPE
#define SEGSIDE SEG.SIDE
#define SEGADDR SEG.ADDR.UINT32
#define SEGADDRL SEG.ADDR.UINT16[L]
#define SEGADDRH SEG.ADDR.UINT16[H]
#endif
