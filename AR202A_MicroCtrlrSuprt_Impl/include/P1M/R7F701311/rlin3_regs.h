/**********************************************************************************************************************
* Module File Name  : rlin3_regs.h
* Module Description: LIN/UART Interface Peripheral Registers
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

#ifndef RLIN3_REGS_H
#define RLIN3_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  LWBR0:1;                                        /* LWBR0            */
    uint8  LPRS:3;                                         /* LPRS[3:1]        */
    uint8  NSPB:4;                                         /* NSPB[7:4]        */
} __type640;
typedef struct 
{                                                          /* Bit Access       */
    uint8  LBRP0:8;                                        /* LBRP0[7:0]       */
    uint8  LBRP1:8;                                        /* LBRP1[15:8]      */
} __type641;
typedef struct 
{                                                          /* Bit Access       */
    uint8  LSTM:1;                                         /* LSTM             */
    uint8  :7;                                             /* Reserved Bits    */
} __type642;
typedef struct 
{                                                          /* Bit Access       */
    uint8  LMD:2;                                          /* LMD[1:0]         */
    uint8  LCKS:2;                                         /* LCKS[3:2]        */
    uint8  LIOS:1;                                         /* LIOS             */
    uint8  LRDNFS:1;                                       /* LRDNFS           */
    uint8  :2;                                             /* Reserved Bits    */
} __type643;
typedef struct 
{                                                          /* Bit Access       */
    uint8  BLT:4;                                          /* BLT[3:0]         */
    uint8  BDT:2;                                          /* BDT[5:4]         */
    uint8  :2;                                             /* Reserved Bits    */
} __type644;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IBHS:3;                                         /* IBHS[2:0]        */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  IBS:2;                                          /* IBS[5:4]         */
    uint8  :2;                                             /* Reserved Bits    */
} __type645;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  WUTL:4;                                         /* WUTL[7:4]        */
} __type646;
typedef struct 
{                                                          /* Bit Access       */
    uint8  FTCIE:1;                                        /* FTCIE            */
    uint8  FRCIE:1;                                        /* FRCIE            */
    uint8  ERRIE:1;                                        /* ERRIE            */
    uint8  SHIE:1;                                         /* SHIE             */
    uint8  :4;                                             /* Reserved Bits    */
} __type647;
typedef struct 
{                                                          /* Bit Access       */
    uint8  BERE:1;                                         /* BERE             */
    uint8  PBERE:1;                                        /* PBERE            */
    uint8  FTERE:1;                                        /* FTERE            */
    uint8  FERE:1;                                         /* FERE             */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  LTES:1;                                         /* LTES             */
} __type648;
typedef struct 
{                                                          /* Bit Access       */
    uint8  OM0:1;                                          /* OM0              */
    uint8  OM1:1;                                          /* OM1              */
    uint8  :6;                                             /* Reserved Bits    */
} __type649;
typedef struct 
{                                                          /* Bit Access       */
    uint8  FTS:1;                                          /* FTS              */
    uint8  RTS:1;                                          /* RTS              */
    uint8  :6;                                             /* Reserved Bits    */
} __type650;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  OMM0:1;                                   /* OMM0             */
    const uint8  OMM1:1;                                   /* OMM1             */
    uint8  :6;                                             /* Reserved Bits    */
} __type651;
typedef struct 
{                                                          /* Bit Access       */
    uint8  FTC:1;                                          /* FTC              */
    uint8  FRC:1;                                          /* FRC              */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  ERR:1;                                    /* ERR              */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  D1RC:1;                                         /* D1RC             */
    uint8  HTRC:1;                                         /* HTRC             */
} __type652;
typedef struct 
{                                                          /* Bit Access       */
    uint8  BER:1;                                          /* BER              */
    uint8  PBER:1;                                         /* PBER             */
    uint8  FTER:1;                                         /* FTER             */
    uint8  FER:1;                                          /* FER              */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  CSER:1;                                         /* CSER             */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  RPER:1;                                         /* RPER             */
} __type653;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RFDL:4;                                         /* RFDL[3:0]        */
    uint8  RFT:1;                                          /* RFT              */
    uint8  CSM:1;                                          /* CSM              */
    uint8  FSM:1;                                          /* FSM              */
    uint8  LSS:1;                                          /* LSS              */
} __type654;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ID:6;                                           /* ID[5:0]          */
    uint8  IDP0:1;                                         /* IDP0             */
    uint8  IDP1:1;                                         /* IDP1             */
} __type655;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CKSM:8;                                         /* CKSM[7:0]        */
} __type656;
typedef struct 
{                                                          /* Bit Access       */
    uint8  UDB:8;                                          /* UDB[7:0]         */
} __type657;
typedef struct 
{                                                          /* Bit Access       */
    uint8  LDB:8;                                          /* LDB[7:0]         */
} __type658;
typedef struct 
{                                                          /* Bit Access       */
    uint8  UTOE:1;                                         /* UTOE             */
    uint8  UROE:1;                                         /* UROE             */
    uint8  :6;                                             /* Reserved Bits    */
} __type659;
typedef struct 
{                                                          /* Bit Access       */
    uint8  UEBE:1;                                         /* UEBE             */
    uint8  UEBDL:1;                                        /* UEBDL            */
    uint8  UEBDCE:1;                                       /* UEBDCE           */
    uint8  UTIGTS:1;                                       /* UTIGTS           */
    uint8  UECD:1;                                         /* UECD             */
    uint8  :3;                                             /* Reserved Bits    */
} __type660;
typedef struct 
{                                                          /* Bit Access       */
    uint16 UTD:9;                                          /* UTD[8:0]         */
    uint8  :7;                                             /* Reserved Bits    */
} __type661;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 URD:9;                                    /* URD[8:0]         */
    uint8  :7;                                             /* Reserved Bits    */
} __type662;
typedef struct 
{                                                          /* Bit Access       */
    uint16 UWTD:9;                                         /* UWTD[8:0]        */
    uint8  :7;                                             /* Reserved Bits    */
} __type663;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type640 BIT;                                         /* Bit Access       */
} __type1919;
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
    } REGS8;
    __type641 BIT;                                         /* Bit Access       */
} __type1920;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type642 BIT;                                         /* Bit Access       */
} __type1921;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type643 BIT;                                         /* Bit Access       */
} __type1922;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type644 BIT;                                         /* Bit Access       */
} __type1923;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type645 BIT;                                         /* Bit Access       */
} __type1924;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type646 BIT;                                         /* Bit Access       */
} __type1925;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type647 BIT;                                         /* Bit Access       */
} __type1926;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type648 BIT;                                         /* Bit Access       */
} __type1927;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type649 BIT;                                         /* Bit Access       */
} __type1928;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type650 BIT;                                         /* Bit Access       */
} __type1929;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type651 BIT;                                   /* Bit Access       */
} __type1930;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type652 BIT;                                         /* Bit Access       */
} __type1931;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type653 BIT;                                         /* Bit Access       */
} __type1932;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type654 BIT;                                         /* Bit Access       */
} __type1933;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type655 BIT;                                         /* Bit Access       */
} __type1934;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type656 BIT;                                         /* Bit Access       */
} __type1935;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type657 BIT;                                         /* Bit Access       */
} __type1936;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type658 BIT;                                         /* Bit Access       */
} __type1937;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type659 BIT;                                         /* Bit Access       */
} __type1938;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type660 BIT;                                         /* Bit Access       */
} __type1939;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type661 BIT;                                         /* Bit Access       */
} __type1940;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    const __type662 BIT;                                   /* Bit Access       */
} __type1941;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type663 BIT;                                         /* Bit Access       */
} __type1942;

typedef struct 
{                                                          /* Module           */
    uint8  dummy369[1];                                    /* Reserved         */
    __type1919 LWBR;                                       /* LWBR             */
    __type1920 LBRP01;                                     /* LBRP01           */
    __type1921 LSTC;                                       /* LSTC             */
    uint8  dummy370[3];                                    /* Reserved         */
    __type1922 LMD;                                        /* LMD              */
    __type1923 LBFC;                                       /* LBFC             */
    __type1924 LSC;                                        /* LSC              */
    __type1925 LWUP;                                       /* LWUP             */
    __type1926 LIE;                                        /* LIE              */
    __type1927 LEDE;                                       /* LEDE             */
    __type1928 LCUC;                                       /* LCUC             */
    uint8  dummy371[1];                                    /* Reserved         */
    __type1929 LTRC;                                       /* LTRC             */
    const __type1930 LMST;                                 /* LMST             */
    __type1931 LST;                                        /* LST              */
    __type1932 LEST;                                       /* LEST             */
    __type1933 LDFC;                                       /* LDFC             */
    __type1934 LIDB;                                       /* LIDB             */
    __type1935 LCBR;                                       /* LCBR             */
    __type1936 LUDB0;                                      /* LUDB0            */
    __type1937 LDBR1;                                      /* LDBR1            */
    __type1937 LDBR2;                                      /* LDBR2            */
    __type1937 LDBR3;                                      /* LDBR3            */
    __type1937 LDBR4;                                      /* LDBR4            */
    __type1937 LDBR5;                                      /* LDBR5            */
    __type1937 LDBR6;                                      /* LDBR6            */
    __type1937 LDBR7;                                      /* LDBR7            */
    __type1937 LDBR8;                                      /* LDBR8            */
    __type1938 LUOER;                                      /* LUOER            */
    __type1939 LUOR1;                                      /* LUOR1            */
    uint8  dummy372[2];                                    /* Reserved         */
    __type1940 LUTDR;                                      /* LUTDR            */
    const __type1941 LURDR;                                /* LURDR            */
    __type1942 LUWTDR;                                     /* LUWTDR           */
    uint8  dummy373[4054];                                 /* Reserved         */
} __type2602;

__IOREG(RLN30, 0xFFDF8000, __READ_WRITE, __type2602);                 /* RLN30 */
__IOREG(RLN31, 0xFFDF9000, __READ_WRITE, __type2602);                 /* RLN31 */
__IOREGARRAY(RLN3, 2, 0xFFDF8000, __READ_WRITE, __type2602);          /* RLN3[2] */

#define RLN30LWBR RLN30.LWBR.UINT8
#define RLN30LWBR0 RLN30.LWBR.BIT.LWBR0
#define RLN30LPRS RLN30.LWBR.BIT.LPRS
#define RLN30NSPB RLN30.LWBR.BIT.NSPB
#define RLN30LBRP01 RLN30.LBRP01.UINT16
#define RLN30LBRP0 RLN30.LBRP01.UINT8[L]
#define RLN30LBRP1 RLN30.LBRP01.UINT8[H]
#define RLN30LSTC RLN30.LSTC.UINT8
#define RLN30LSTM RLN30.LSTC.BIT.LSTM
#define RLN30LMD RLN30.LMD.UINT8
#define RLN30LCKS RLN30.LMD.BIT.LCKS
#define RLN30LIOS RLN30.LMD.BIT.LIOS
#define RLN30LRDNFS RLN30.LMD.BIT.LRDNFS
#define RLN30LBFC RLN30.LBFC.UINT8
#define RLN30BLT RLN30.LBFC.BIT.BLT
#define RLN30BDT RLN30.LBFC.BIT.BDT
#define RLN30LSC RLN30.LSC.UINT8
#define RLN30IBHS RLN30.LSC.BIT.IBHS
#define RLN30IBS RLN30.LSC.BIT.IBS
#define RLN30LWUP RLN30.LWUP.UINT8
#define RLN30WUTL RLN30.LWUP.BIT.WUTL
#define RLN30LIE RLN30.LIE.UINT8
#define RLN30FTCIE RLN30.LIE.BIT.FTCIE
#define RLN30FRCIE RLN30.LIE.BIT.FRCIE
#define RLN30ERRIE RLN30.LIE.BIT.ERRIE
#define RLN30SHIE RLN30.LIE.BIT.SHIE
#define RLN30LEDE RLN30.LEDE.UINT8
#define RLN30BERE RLN30.LEDE.BIT.BERE
#define RLN30PBERE RLN30.LEDE.BIT.PBERE
#define RLN30FTERE RLN30.LEDE.BIT.FTERE
#define RLN30FERE RLN30.LEDE.BIT.FERE
#define RLN30LTES RLN30.LEDE.BIT.LTES
#define RLN30LCUC RLN30.LCUC.UINT8
#define RLN30OM0 RLN30.LCUC.BIT.OM0
#define RLN30OM1 RLN30.LCUC.BIT.OM1
#define RLN30LTRC RLN30.LTRC.UINT8
#define RLN30FTS RLN30.LTRC.BIT.FTS
#define RLN30RTS RLN30.LTRC.BIT.RTS
#define RLN30LMST RLN30.LMST.UINT8
#define RLN30OMM0 RLN30.LMST.BIT.OMM0
#define RLN30OMM1 RLN30.LMST.BIT.OMM1
#define RLN30LST RLN30.LST.UINT8
#define RLN30FTC RLN30.LST.BIT.FTC
#define RLN30FRC RLN30.LST.BIT.FRC
#define RLN30ERR RLN30.LST.BIT.ERR
#define RLN30D1RC RLN30.LST.BIT.D1RC
#define RLN30HTRC RLN30.LST.BIT.HTRC
#define RLN30LEST RLN30.LEST.UINT8
#define RLN30BER RLN30.LEST.BIT.BER
#define RLN30PBER RLN30.LEST.BIT.PBER
#define RLN30FTER RLN30.LEST.BIT.FTER
#define RLN30FER RLN30.LEST.BIT.FER
#define RLN30CSER RLN30.LEST.BIT.CSER
#define RLN30RPER RLN30.LEST.BIT.RPER
#define RLN30LDFC RLN30.LDFC.UINT8
#define RLN30RFDL RLN30.LDFC.BIT.RFDL
#define RLN30RFT RLN30.LDFC.BIT.RFT
#define RLN30CSM RLN30.LDFC.BIT.CSM
#define RLN30FSM RLN30.LDFC.BIT.FSM
#define RLN30LSS RLN30.LDFC.BIT.LSS
#define RLN30LIDB RLN30.LIDB.UINT8
#define RLN30ID RLN30.LIDB.BIT.ID
#define RLN30IDP0 RLN30.LIDB.BIT.IDP0
#define RLN30IDP1 RLN30.LIDB.BIT.IDP1
#define RLN30LCBR RLN30.LCBR.UINT8
#define RLN30CKSM RLN30.LCBR.BIT.CKSM
#define RLN30LUDB0 RLN30.LUDB0.UINT8
#define RLN30UDB RLN30.LUDB0.BIT.UDB
#define RLN30LDBR1 RLN30.LDBR1.UINT8
#define RLN30LDB RLN30.LDBR1.BIT.LDB
#define RLN30LDBR2 RLN30.LDBR2.UINT8
#define RLN30LDBR3 RLN30.LDBR3.UINT8
#define RLN30LDBR4 RLN30.LDBR4.UINT8
#define RLN30LDBR5 RLN30.LDBR5.UINT8
#define RLN30LDBR6 RLN30.LDBR6.UINT8
#define RLN30LDBR7 RLN30.LDBR7.UINT8
#define RLN30LDBR8 RLN30.LDBR8.UINT8
#define RLN30LUOER RLN30.LUOER.UINT8
#define RLN30UTOE RLN30.LUOER.BIT.UTOE
#define RLN30UROE RLN30.LUOER.BIT.UROE
#define RLN30LUOR1 RLN30.LUOR1.UINT8
#define RLN30UEBE RLN30.LUOR1.BIT.UEBE
#define RLN30UEBDL RLN30.LUOR1.BIT.UEBDL
#define RLN30UEBDCE RLN30.LUOR1.BIT.UEBDCE
#define RLN30UTIGTS RLN30.LUOR1.BIT.UTIGTS
#define RLN30UECD RLN30.LUOR1.BIT.UECD
#define RLN30LUTDR RLN30.LUTDR.UINT16
#define RLN30LUTDRL RLN30.LUTDR.UINT8[L]
#define RLN30LUTDRH RLN30.LUTDR.UINT8[H]
#define RLN30UTD RLN30.LUTDR.BIT.UTD
#define RLN30LURDR RLN30.LURDR.UINT16
#define RLN30LURDRL RLN30.LURDR.UINT8[L]
#define RLN30LURDRH RLN30.LURDR.UINT8[H]
#define RLN30URD RLN30.LURDR.BIT.URD
#define RLN30LUWTDR RLN30.LUWTDR.UINT16
#define RLN30LUWTDRL RLN30.LUWTDR.UINT8[L]
#define RLN30LUWTDRH RLN30.LUWTDR.UINT8[H]
#define RLN30UWTD RLN30.LUWTDR.BIT.UWTD
#define RLN31LWBR RLN31.LWBR.UINT8
#define RLN31LWBR0 RLN31.LWBR.BIT.LWBR0
#define RLN31LPRS RLN31.LWBR.BIT.LPRS
#define RLN31NSPB RLN31.LWBR.BIT.NSPB
#define RLN31LBRP01 RLN31.LBRP01.UINT16
#define RLN31LBRP0 RLN31.LBRP01.UINT8[L]
#define RLN31LBRP1 RLN31.LBRP01.UINT8[H]
#define RLN31LSTC RLN31.LSTC.UINT8
#define RLN31LSTM RLN31.LSTC.BIT.LSTM
#define RLN31LMD RLN31.LMD.UINT8
#define RLN31LCKS RLN31.LMD.BIT.LCKS
#define RLN31LIOS RLN31.LMD.BIT.LIOS
#define RLN31LRDNFS RLN31.LMD.BIT.LRDNFS
#define RLN31LBFC RLN31.LBFC.UINT8
#define RLN31BLT RLN31.LBFC.BIT.BLT
#define RLN31BDT RLN31.LBFC.BIT.BDT
#define RLN31LSC RLN31.LSC.UINT8
#define RLN31IBHS RLN31.LSC.BIT.IBHS
#define RLN31IBS RLN31.LSC.BIT.IBS
#define RLN31LWUP RLN31.LWUP.UINT8
#define RLN31WUTL RLN31.LWUP.BIT.WUTL
#define RLN31LIE RLN31.LIE.UINT8
#define RLN31FTCIE RLN31.LIE.BIT.FTCIE
#define RLN31FRCIE RLN31.LIE.BIT.FRCIE
#define RLN31ERRIE RLN31.LIE.BIT.ERRIE
#define RLN31SHIE RLN31.LIE.BIT.SHIE
#define RLN31LEDE RLN31.LEDE.UINT8
#define RLN31BERE RLN31.LEDE.BIT.BERE
#define RLN31PBERE RLN31.LEDE.BIT.PBERE
#define RLN31FTERE RLN31.LEDE.BIT.FTERE
#define RLN31FERE RLN31.LEDE.BIT.FERE
#define RLN31LTES RLN31.LEDE.BIT.LTES
#define RLN31LCUC RLN31.LCUC.UINT8
#define RLN31OM0 RLN31.LCUC.BIT.OM0
#define RLN31OM1 RLN31.LCUC.BIT.OM1
#define RLN31LTRC RLN31.LTRC.UINT8
#define RLN31FTS RLN31.LTRC.BIT.FTS
#define RLN31RTS RLN31.LTRC.BIT.RTS
#define RLN31LMST RLN31.LMST.UINT8
#define RLN31OMM0 RLN31.LMST.BIT.OMM0
#define RLN31OMM1 RLN31.LMST.BIT.OMM1
#define RLN31LST RLN31.LST.UINT8
#define RLN31FTC RLN31.LST.BIT.FTC
#define RLN31FRC RLN31.LST.BIT.FRC
#define RLN31ERR RLN31.LST.BIT.ERR
#define RLN31D1RC RLN31.LST.BIT.D1RC
#define RLN31HTRC RLN31.LST.BIT.HTRC
#define RLN31LEST RLN31.LEST.UINT8
#define RLN31BER RLN31.LEST.BIT.BER
#define RLN31PBER RLN31.LEST.BIT.PBER
#define RLN31FTER RLN31.LEST.BIT.FTER
#define RLN31FER RLN31.LEST.BIT.FER
#define RLN31CSER RLN31.LEST.BIT.CSER
#define RLN31RPER RLN31.LEST.BIT.RPER
#define RLN31LDFC RLN31.LDFC.UINT8
#define RLN31RFDL RLN31.LDFC.BIT.RFDL
#define RLN31RFT RLN31.LDFC.BIT.RFT
#define RLN31CSM RLN31.LDFC.BIT.CSM
#define RLN31FSM RLN31.LDFC.BIT.FSM
#define RLN31LSS RLN31.LDFC.BIT.LSS
#define RLN31LIDB RLN31.LIDB.UINT8
#define RLN31ID RLN31.LIDB.BIT.ID
#define RLN31IDP0 RLN31.LIDB.BIT.IDP0
#define RLN31IDP1 RLN31.LIDB.BIT.IDP1
#define RLN31LCBR RLN31.LCBR.UINT8
#define RLN31CKSM RLN31.LCBR.BIT.CKSM
#define RLN31LUDB0 RLN31.LUDB0.UINT8
#define RLN31UDB RLN31.LUDB0.BIT.UDB
#define RLN31LDBR1 RLN31.LDBR1.UINT8
#define RLN31LDB RLN31.LDBR1.BIT.LDB
#define RLN31LDBR2 RLN31.LDBR2.UINT8
#define RLN31LDBR3 RLN31.LDBR3.UINT8
#define RLN31LDBR4 RLN31.LDBR4.UINT8
#define RLN31LDBR5 RLN31.LDBR5.UINT8
#define RLN31LDBR6 RLN31.LDBR6.UINT8
#define RLN31LDBR7 RLN31.LDBR7.UINT8
#define RLN31LDBR8 RLN31.LDBR8.UINT8
#define RLN31LUOER RLN31.LUOER.UINT8
#define RLN31UTOE RLN31.LUOER.BIT.UTOE
#define RLN31UROE RLN31.LUOER.BIT.UROE
#define RLN31LUOR1 RLN31.LUOR1.UINT8
#define RLN31UEBE RLN31.LUOR1.BIT.UEBE
#define RLN31UEBDL RLN31.LUOR1.BIT.UEBDL
#define RLN31UEBDCE RLN31.LUOR1.BIT.UEBDCE
#define RLN31UTIGTS RLN31.LUOR1.BIT.UTIGTS
#define RLN31UECD RLN31.LUOR1.BIT.UECD
#define RLN31LUTDR RLN31.LUTDR.UINT16
#define RLN31LUTDRL RLN31.LUTDR.UINT8[L]
#define RLN31LUTDRH RLN31.LUTDR.UINT8[H]
#define RLN31UTD RLN31.LUTDR.BIT.UTD
#define RLN31LURDR RLN31.LURDR.UINT16
#define RLN31LURDRL RLN31.LURDR.UINT8[L]
#define RLN31LURDRH RLN31.LURDR.UINT8[H]
#define RLN31URD RLN31.LURDR.BIT.URD
#define RLN31LUWTDR RLN31.LUWTDR.UINT16
#define RLN31LUWTDRL RLN31.LUWTDR.UINT8[L]
#define RLN31LUWTDRH RLN31.LUWTDR.UINT8[H]
#define RLN31UWTD RLN31.LUWTDR.BIT.UWTD

#endif
