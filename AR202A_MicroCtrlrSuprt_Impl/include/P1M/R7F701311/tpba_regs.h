/**********************************************************************************************************************
* Module File Name  : tpba_regs.h
* Module Description: Timer Pattern Buffer Peripheral Registers
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

#ifndef TPBA_REGS_H
#define TPBA_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  CMP1:7;                                         /* CMP1[6:0]        */
    uint8  :1;                                             /* Reserved Bits    */
} __type827;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  CNT1:7;                                   /* CNT1[6:0]        */
    uint8  :1;                                             /* Reserved Bits    */
} __type828;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RSF0:1;                                   /* RSF0             */
    const uint8  RSF1:1;                                   /* RSF1             */
    uint8  :6;                                             /* Reserved Bits    */
} __type829;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RDT0:1;                                         /* RDT0             */
    uint8  RDT1:1;                                         /* RDT1             */
    uint8  :6;                                             /* Reserved Bits    */
} __type830;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RDM0:1;                                         /* RDM0             */
    uint8  :7;                                             /* Reserved Bits    */
} __type831;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TO0:1;                                          /* TO0              */
    uint8  :7;                                             /* Reserved Bits    */
} __type832;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TOE0:1;                                         /* TOE0             */
    uint8  :7;                                             /* Reserved Bits    */
} __type833;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TOL0:1;                                         /* TOL0             */
    uint8  :7;                                             /* Reserved Bits    */
} __type834;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TE0:1;                                    /* TE0              */
    uint8  :7;                                             /* Reserved Bits    */
} __type835;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TS0:1;                                          /* TS0              */
    uint8  :7;                                             /* Reserved Bits    */
} __type836;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TT0:1;                                          /* TT0              */
    uint8  :7;                                             /* Reserved Bits    */
} __type837;
typedef struct 
{                                                          /* Bit Access       */
    uint8  DPS:1;                                          /* DPS              */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  PRS:2;                                          /* PRS[5:4]         */
    uint8  :2;                                             /* Reserved Bits    */
} __type838;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type827 BIT;                                         /* Bit Access       */
} __type2106;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type828 BIT;                                   /* Bit Access       */
} __type2107;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type829 BIT;                                   /* Bit Access       */
} __type2108;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type830 BIT;                                         /* Bit Access       */
} __type2109;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type831 BIT;                                         /* Bit Access       */
} __type2110;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type832 BIT;                                         /* Bit Access       */
} __type2111;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type833 BIT;                                         /* Bit Access       */
} __type2112;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type834 BIT;                                         /* Bit Access       */
} __type2113;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type835 BIT;                                   /* Bit Access       */
} __type2114;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type836 BIT;                                         /* Bit Access       */
} __type2115;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type837 BIT;                                         /* Bit Access       */
} __type2116;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type838 BIT;                                         /* Bit Access       */
} __type2117;

typedef struct 
{                                                          /* Module           */
    uint16 BUF00;                                          /* BUF00            */
    uint8  dummy594[2];                                    /* Reserved         */
    uint16 BUF01;                                          /* BUF01            */
    uint8  dummy595[2];                                    /* Reserved         */
    uint16 BUF02;                                          /* BUF02            */
    uint8  dummy596[2];                                    /* Reserved         */
    uint16 BUF03;                                          /* BUF03            */
    uint8  dummy597[2];                                    /* Reserved         */
    uint16 BUF04;                                          /* BUF04            */
    uint8  dummy598[2];                                    /* Reserved         */
    uint16 BUF05;                                          /* BUF05            */
    uint8  dummy599[2];                                    /* Reserved         */
    uint16 BUF06;                                          /* BUF06            */
    uint8  dummy600[2];                                    /* Reserved         */
    uint16 BUF07;                                          /* BUF07            */
    uint8  dummy601[2];                                    /* Reserved         */
    uint16 BUF08;                                          /* BUF08            */
    uint8  dummy602[2];                                    /* Reserved         */
    uint16 BUF09;                                          /* BUF09            */
    uint8  dummy603[2];                                    /* Reserved         */
    uint16 BUF10;                                          /* BUF10            */
    uint8  dummy604[2];                                    /* Reserved         */
    uint16 BUF11;                                          /* BUF11            */
    uint8  dummy605[2];                                    /* Reserved         */
    uint16 BUF12;                                          /* BUF12            */
    uint8  dummy606[2];                                    /* Reserved         */
    uint16 BUF13;                                          /* BUF13            */
    uint8  dummy607[2];                                    /* Reserved         */
    uint16 BUF14;                                          /* BUF14            */
    uint8  dummy608[2];                                    /* Reserved         */
    uint16 BUF15;                                          /* BUF15            */
    uint8  dummy609[2];                                    /* Reserved         */
    uint16 BUF16;                                          /* BUF16            */
    uint8  dummy610[2];                                    /* Reserved         */
    uint16 BUF17;                                          /* BUF17            */
    uint8  dummy611[2];                                    /* Reserved         */
    uint16 BUF18;                                          /* BUF18            */
    uint8  dummy612[2];                                    /* Reserved         */
    uint16 BUF19;                                          /* BUF19            */
    uint8  dummy613[2];                                    /* Reserved         */
    uint16 BUF20;                                          /* BUF20            */
    uint8  dummy614[2];                                    /* Reserved         */
    uint16 BUF21;                                          /* BUF21            */
    uint8  dummy615[2];                                    /* Reserved         */
    uint16 BUF22;                                          /* BUF22            */
    uint8  dummy616[2];                                    /* Reserved         */
    uint16 BUF23;                                          /* BUF23            */
    uint8  dummy617[2];                                    /* Reserved         */
    uint16 BUF24;                                          /* BUF24            */
    uint8  dummy618[2];                                    /* Reserved         */
    uint16 BUF25;                                          /* BUF25            */
    uint8  dummy619[2];                                    /* Reserved         */
    uint16 BUF26;                                          /* BUF26            */
    uint8  dummy620[2];                                    /* Reserved         */
    uint16 BUF27;                                          /* BUF27            */
    uint8  dummy621[2];                                    /* Reserved         */
    uint16 BUF28;                                          /* BUF28            */
    uint8  dummy622[2];                                    /* Reserved         */
    uint16 BUF29;                                          /* BUF29            */
    uint8  dummy623[2];                                    /* Reserved         */
    uint16 BUF30;                                          /* BUF30            */
    uint8  dummy624[2];                                    /* Reserved         */
    uint16 BUF31;                                          /* BUF31            */
    uint8  dummy625[2];                                    /* Reserved         */
    uint16 BUF32;                                          /* BUF32            */
    uint8  dummy626[2];                                    /* Reserved         */
    uint16 BUF33;                                          /* BUF33            */
    uint8  dummy627[2];                                    /* Reserved         */
    uint16 BUF34;                                          /* BUF34            */
    uint8  dummy628[2];                                    /* Reserved         */
    uint16 BUF35;                                          /* BUF35            */
    uint8  dummy629[2];                                    /* Reserved         */
    uint16 BUF36;                                          /* BUF36            */
    uint8  dummy630[2];                                    /* Reserved         */
    uint16 BUF37;                                          /* BUF37            */
    uint8  dummy631[2];                                    /* Reserved         */
    uint16 BUF38;                                          /* BUF38            */
    uint8  dummy632[2];                                    /* Reserved         */
    uint16 BUF39;                                          /* BUF39            */
    uint8  dummy633[2];                                    /* Reserved         */
    uint16 BUF40;                                          /* BUF40            */
    uint8  dummy634[2];                                    /* Reserved         */
    uint16 BUF41;                                          /* BUF41            */
    uint8  dummy635[2];                                    /* Reserved         */
    uint16 BUF42;                                          /* BUF42            */
    uint8  dummy636[2];                                    /* Reserved         */
    uint16 BUF43;                                          /* BUF43            */
    uint8  dummy637[2];                                    /* Reserved         */
    uint16 BUF44;                                          /* BUF44            */
    uint8  dummy638[2];                                    /* Reserved         */
    uint16 BUF45;                                          /* BUF45            */
    uint8  dummy639[2];                                    /* Reserved         */
    uint16 BUF46;                                          /* BUF46            */
    uint8  dummy640[2];                                    /* Reserved         */
    uint16 BUF47;                                          /* BUF47            */
    uint8  dummy641[2];                                    /* Reserved         */
    uint16 BUF48;                                          /* BUF48            */
    uint8  dummy642[2];                                    /* Reserved         */
    uint16 BUF49;                                          /* BUF49            */
    uint8  dummy643[2];                                    /* Reserved         */
    uint16 BUF50;                                          /* BUF50            */
    uint8  dummy644[2];                                    /* Reserved         */
    uint16 BUF51;                                          /* BUF51            */
    uint8  dummy645[2];                                    /* Reserved         */
    uint16 BUF52;                                          /* BUF52            */
    uint8  dummy646[2];                                    /* Reserved         */
    uint16 BUF53;                                          /* BUF53            */
    uint8  dummy647[2];                                    /* Reserved         */
    uint16 BUF54;                                          /* BUF54            */
    uint8  dummy648[2];                                    /* Reserved         */
    uint16 BUF55;                                          /* BUF55            */
    uint8  dummy649[2];                                    /* Reserved         */
    uint16 BUF56;                                          /* BUF56            */
    uint8  dummy650[2];                                    /* Reserved         */
    uint16 BUF57;                                          /* BUF57            */
    uint8  dummy651[2];                                    /* Reserved         */
    uint16 BUF58;                                          /* BUF58            */
    uint8  dummy652[2];                                    /* Reserved         */
    uint16 BUF59;                                          /* BUF59            */
    uint8  dummy653[2];                                    /* Reserved         */
    uint16 BUF60;                                          /* BUF60            */
    uint8  dummy654[2];                                    /* Reserved         */
    uint16 BUF61;                                          /* BUF61            */
    uint8  dummy655[2];                                    /* Reserved         */
    uint16 BUF62;                                          /* BUF62            */
    uint8  dummy656[2];                                    /* Reserved         */
    uint16 BUF63;                                          /* BUF63            */
    uint8  dummy657[2];                                    /* Reserved         */
    uint16 CMP0;                                           /* CMP0             */
    uint8  dummy658[2];                                    /* Reserved         */
    __type2106 CMP1;                                       /* CMP1             */
    uint8  dummy659[3];                                    /* Reserved         */
    const uint16 CNT0;                                     /* CNT0             */
    uint8  dummy660[2];                                    /* Reserved         */
    const __type2107 CNT1;                                 /* CNT1             */
    uint8  dummy661[3];                                    /* Reserved         */
    const __type2108 RSF;                                  /* RSF              */
    uint8  dummy662[3];                                    /* Reserved         */
    __type2109 RDT;                                        /* RDT              */
    uint8  dummy663[3];                                    /* Reserved         */
    __type2110 RDM;                                        /* RDM              */
    uint8  dummy664[3];                                    /* Reserved         */
    __type2111 TO;                                         /* TO               */
    uint8  dummy665[3];                                    /* Reserved         */
    __type2112 TOE;                                        /* TOE              */
    uint8  dummy666[3];                                    /* Reserved         */
    __type2113 TOL;                                        /* TOL              */
    uint8  dummy667[3];                                    /* Reserved         */
    const __type2114 TE;                                   /* TE               */
    uint8  dummy668[3];                                    /* Reserved         */
    __type2115 TS;                                         /* TS               */
    uint8  dummy669[3];                                    /* Reserved         */
    __type2116 TT;                                         /* TT               */
    uint8  dummy670[207];                                  /* Reserved         */
    __type2117 CTL;                                        /* CTL              */
    uint8  dummy671[3583];                                 /* Reserved         */
} __type2612;

__IOREG(TPBA0, 0xFFEA0000, __READ_WRITE, __type2612);                 /* TPBA0 */
__IOREG(TPBA1, 0xFFEA1000, __READ_WRITE, __type2612);                 /* TPBA1 */
__IOREGARRAY(TPBA, 2, 0xFFEA0000, __READ_WRITE, __type2612);          /* TPBA[2] */

#define TPBA0BUF00 TPBA0.BUF00
#define TPBA0BUF01 TPBA0.BUF01
#define TPBA0BUF02 TPBA0.BUF02
#define TPBA0BUF03 TPBA0.BUF03
#define TPBA0BUF04 TPBA0.BUF04
#define TPBA0BUF05 TPBA0.BUF05
#define TPBA0BUF06 TPBA0.BUF06
#define TPBA0BUF07 TPBA0.BUF07
#define TPBA0BUF08 TPBA0.BUF08
#define TPBA0BUF09 TPBA0.BUF09
#define TPBA0BUF10 TPBA0.BUF10
#define TPBA0BUF11 TPBA0.BUF11
#define TPBA0BUF12 TPBA0.BUF12
#define TPBA0BUF13 TPBA0.BUF13
#define TPBA0BUF14 TPBA0.BUF14
#define TPBA0BUF15 TPBA0.BUF15
#define TPBA0BUF16 TPBA0.BUF16
#define TPBA0BUF17 TPBA0.BUF17
#define TPBA0BUF18 TPBA0.BUF18
#define TPBA0BUF19 TPBA0.BUF19
#define TPBA0BUF20 TPBA0.BUF20
#define TPBA0BUF21 TPBA0.BUF21
#define TPBA0BUF22 TPBA0.BUF22
#define TPBA0BUF23 TPBA0.BUF23
#define TPBA0BUF24 TPBA0.BUF24
#define TPBA0BUF25 TPBA0.BUF25
#define TPBA0BUF26 TPBA0.BUF26
#define TPBA0BUF27 TPBA0.BUF27
#define TPBA0BUF28 TPBA0.BUF28
#define TPBA0BUF29 TPBA0.BUF29
#define TPBA0BUF30 TPBA0.BUF30
#define TPBA0BUF31 TPBA0.BUF31
#define TPBA0BUF32 TPBA0.BUF32
#define TPBA0BUF33 TPBA0.BUF33
#define TPBA0BUF34 TPBA0.BUF34
#define TPBA0BUF35 TPBA0.BUF35
#define TPBA0BUF36 TPBA0.BUF36
#define TPBA0BUF37 TPBA0.BUF37
#define TPBA0BUF38 TPBA0.BUF38
#define TPBA0BUF39 TPBA0.BUF39
#define TPBA0BUF40 TPBA0.BUF40
#define TPBA0BUF41 TPBA0.BUF41
#define TPBA0BUF42 TPBA0.BUF42
#define TPBA0BUF43 TPBA0.BUF43
#define TPBA0BUF44 TPBA0.BUF44
#define TPBA0BUF45 TPBA0.BUF45
#define TPBA0BUF46 TPBA0.BUF46
#define TPBA0BUF47 TPBA0.BUF47
#define TPBA0BUF48 TPBA0.BUF48
#define TPBA0BUF49 TPBA0.BUF49
#define TPBA0BUF50 TPBA0.BUF50
#define TPBA0BUF51 TPBA0.BUF51
#define TPBA0BUF52 TPBA0.BUF52
#define TPBA0BUF53 TPBA0.BUF53
#define TPBA0BUF54 TPBA0.BUF54
#define TPBA0BUF55 TPBA0.BUF55
#define TPBA0BUF56 TPBA0.BUF56
#define TPBA0BUF57 TPBA0.BUF57
#define TPBA0BUF58 TPBA0.BUF58
#define TPBA0BUF59 TPBA0.BUF59
#define TPBA0BUF60 TPBA0.BUF60
#define TPBA0BUF61 TPBA0.BUF61
#define TPBA0BUF62 TPBA0.BUF62
#define TPBA0BUF63 TPBA0.BUF63
#define TPBA0CMP0 TPBA0.CMP0
#define TPBA0CMP1 TPBA0.CMP1.UINT8
#define TPBA0CNT0 TPBA0.CNT0
#define TPBA0CNT1 TPBA0.CNT1.UINT8
#define TPBA0RSF TPBA0.RSF.UINT8
#define TPBA0RSF0 TPBA0.RSF.BIT.RSF0
#define TPBA0RSF1 TPBA0.RSF.BIT.RSF1
#define TPBA0RDT TPBA0.RDT.UINT8
#define TPBA0RDT0 TPBA0.RDT.BIT.RDT0
#define TPBA0RDT1 TPBA0.RDT.BIT.RDT1
#define TPBA0RDM TPBA0.RDM.UINT8
#define TPBA0RDM0 TPBA0.RDM.BIT.RDM0
#define TPBA0TO TPBA0.TO.UINT8
#define TPBA0TO0 TPBA0.TO.BIT.TO0
#define TPBA0TOE TPBA0.TOE.UINT8
#define TPBA0TOE0 TPBA0.TOE.BIT.TOE0
#define TPBA0TOL TPBA0.TOL.UINT8
#define TPBA0TOL0 TPBA0.TOL.BIT.TOL0
#define TPBA0TE TPBA0.TE.UINT8
#define TPBA0TE0 TPBA0.TE.BIT.TE0
#define TPBA0TS TPBA0.TS.UINT8
#define TPBA0TS0 TPBA0.TS.BIT.TS0
#define TPBA0TT TPBA0.TT.UINT8
#define TPBA0TT0 TPBA0.TT.BIT.TT0
#define TPBA0CTL TPBA0.CTL.UINT8
#define TPBA0DPS TPBA0.CTL.BIT.DPS
#define TPBA0PRS TPBA0.CTL.BIT.PRS
#define TPBA1BUF00 TPBA1.BUF00
#define TPBA1BUF01 TPBA1.BUF01
#define TPBA1BUF02 TPBA1.BUF02
#define TPBA1BUF03 TPBA1.BUF03
#define TPBA1BUF04 TPBA1.BUF04
#define TPBA1BUF05 TPBA1.BUF05
#define TPBA1BUF06 TPBA1.BUF06
#define TPBA1BUF07 TPBA1.BUF07
#define TPBA1BUF08 TPBA1.BUF08
#define TPBA1BUF09 TPBA1.BUF09
#define TPBA1BUF10 TPBA1.BUF10
#define TPBA1BUF11 TPBA1.BUF11
#define TPBA1BUF12 TPBA1.BUF12
#define TPBA1BUF13 TPBA1.BUF13
#define TPBA1BUF14 TPBA1.BUF14
#define TPBA1BUF15 TPBA1.BUF15
#define TPBA1BUF16 TPBA1.BUF16
#define TPBA1BUF17 TPBA1.BUF17
#define TPBA1BUF18 TPBA1.BUF18
#define TPBA1BUF19 TPBA1.BUF19
#define TPBA1BUF20 TPBA1.BUF20
#define TPBA1BUF21 TPBA1.BUF21
#define TPBA1BUF22 TPBA1.BUF22
#define TPBA1BUF23 TPBA1.BUF23
#define TPBA1BUF24 TPBA1.BUF24
#define TPBA1BUF25 TPBA1.BUF25
#define TPBA1BUF26 TPBA1.BUF26
#define TPBA1BUF27 TPBA1.BUF27
#define TPBA1BUF28 TPBA1.BUF28
#define TPBA1BUF29 TPBA1.BUF29
#define TPBA1BUF30 TPBA1.BUF30
#define TPBA1BUF31 TPBA1.BUF31
#define TPBA1BUF32 TPBA1.BUF32
#define TPBA1BUF33 TPBA1.BUF33
#define TPBA1BUF34 TPBA1.BUF34
#define TPBA1BUF35 TPBA1.BUF35
#define TPBA1BUF36 TPBA1.BUF36
#define TPBA1BUF37 TPBA1.BUF37
#define TPBA1BUF38 TPBA1.BUF38
#define TPBA1BUF39 TPBA1.BUF39
#define TPBA1BUF40 TPBA1.BUF40
#define TPBA1BUF41 TPBA1.BUF41
#define TPBA1BUF42 TPBA1.BUF42
#define TPBA1BUF43 TPBA1.BUF43
#define TPBA1BUF44 TPBA1.BUF44
#define TPBA1BUF45 TPBA1.BUF45
#define TPBA1BUF46 TPBA1.BUF46
#define TPBA1BUF47 TPBA1.BUF47
#define TPBA1BUF48 TPBA1.BUF48
#define TPBA1BUF49 TPBA1.BUF49
#define TPBA1BUF50 TPBA1.BUF50
#define TPBA1BUF51 TPBA1.BUF51
#define TPBA1BUF52 TPBA1.BUF52
#define TPBA1BUF53 TPBA1.BUF53
#define TPBA1BUF54 TPBA1.BUF54
#define TPBA1BUF55 TPBA1.BUF55
#define TPBA1BUF56 TPBA1.BUF56
#define TPBA1BUF57 TPBA1.BUF57
#define TPBA1BUF58 TPBA1.BUF58
#define TPBA1BUF59 TPBA1.BUF59
#define TPBA1BUF60 TPBA1.BUF60
#define TPBA1BUF61 TPBA1.BUF61
#define TPBA1BUF62 TPBA1.BUF62
#define TPBA1BUF63 TPBA1.BUF63
#define TPBA1CMP0 TPBA1.CMP0
#define TPBA1CMP1 TPBA1.CMP1.UINT8
#define TPBA1CNT0 TPBA1.CNT0
#define TPBA1CNT1 TPBA1.CNT1.UINT8
#define TPBA1RSF TPBA1.RSF.UINT8
#define TPBA1RSF0 TPBA1.RSF.BIT.RSF0
#define TPBA1RSF1 TPBA1.RSF.BIT.RSF1
#define TPBA1RDT TPBA1.RDT.UINT8
#define TPBA1RDT0 TPBA1.RDT.BIT.RDT0
#define TPBA1RDT1 TPBA1.RDT.BIT.RDT1
#define TPBA1RDM TPBA1.RDM.UINT8
#define TPBA1RDM0 TPBA1.RDM.BIT.RDM0
#define TPBA1TO TPBA1.TO.UINT8
#define TPBA1TO0 TPBA1.TO.BIT.TO0
#define TPBA1TOE TPBA1.TOE.UINT8
#define TPBA1TOE0 TPBA1.TOE.BIT.TOE0
#define TPBA1TOL TPBA1.TOL.UINT8
#define TPBA1TOL0 TPBA1.TOL.BIT.TOL0
#define TPBA1TE TPBA1.TE.UINT8
#define TPBA1TE0 TPBA1.TE.BIT.TE0
#define TPBA1TS TPBA1.TS.UINT8
#define TPBA1TS0 TPBA1.TS.BIT.TS0
#define TPBA1TT TPBA1.TT.UINT8
#define TPBA1TT0 TPBA1.TT.BIT.TT0
#define TPBA1CTL TPBA1.CTL.UINT8
#define TPBA1DPS TPBA1.CTL.BIT.DPS
#define TPBA1PRS TPBA1.CTL.BIT.PRS

#endif
