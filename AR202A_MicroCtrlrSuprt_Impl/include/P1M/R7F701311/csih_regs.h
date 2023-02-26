/**********************************************************************************************************************
* Module File Name  : csih_regs.h
* Module Description: Clocked Serial Interface H Peripheral Registers
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          3 %
* %derived_by:       czgng4 %
*----------------------------------------------------------------------------
* Date      Rev      Author         Change Description
* -------   -------  --------  ----------------------------------------------
* 12/16/14  1        LWW       Initial version derived from dr7f701311.dvf.h v1 in tools directory
* 06/17/15  2        MS        Removed typedefs that needed to be moved to reg_common -- common to csig and csih
* 09/15/15  3        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef CSIH_REGS_H
#define CSIH_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  MBS:1;                                          /* MBS              */
    uint8  JOBE:1;                                         /* JOBE             */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  RXE:1;                                          /* RXE              */
    uint8  TXE:1;                                          /* TXE              */
    uint8  PWR:1;                                          /* PWR              */
} __type544;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 OVE:1;                                    /* OVE              */
    const uint32 PE:1;                                     /* PE               */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 DCE:1;                                    /* DCE              */
    const uint32 EMF:1;                                    /* EMF              */
    const uint32 FLF:1;                                    /* FLF              */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 TSF:1;                                    /* TSF              */
    const uint32 HPST:1;                                   /* HPST             */
    uint32 :5;                                             /* Reserved Bits    */
    const uint32 OFE:1;                                    /* OFE              */
    const uint32 TMOE:1;                                   /* TMOE             */
    const uint32 SPF:8;                                    /* SPF[23:16]       */
    const uint32 SRP:8;                                    /* SRP[31:24]       */
} __type545;
typedef struct 
{                                                          /* Bit Access       */
    uint16 OVEC:1;                                         /* OVEC             */
    uint16 PEC:1;                                          /* PEC              */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 DCEC:1;                                         /* DCEC             */
    uint16 :4;                                             /* Reserved Bits    */
    uint16 PCT:1;                                          /* PCT              */
    uint16 :5;                                             /* Reserved Bits    */
    uint16 OFEC:1;                                         /* OFEC             */
    uint16 TMOEC:1;                                        /* TMOEC            */
} __type546;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SSE:1;                                          /* SSE              */
    uint32 HSE:1;                                          /* HSE              */
    uint32 SIT:1;                                          /* SIT              */
    uint32 LBM:1;                                          /* LBM              */
    uint32 CSRI:1;                                         /* CSRI             */
    uint32 DCS:1;                                          /* DCS              */
    uint32 JE:1;                                           /* JE               */
    uint32 EDLE:1;                                         /* EDLE             */
    uint32 CSL0:1;                                         /* CSL0             */
    uint32 CSL1:1;                                         /* CSL1             */
    uint32 CSL2:1;                                         /* CSL2             */
    uint32 CSL3:1;                                         /* CSL3             */
    uint32 CSL4:1;                                         /* CSL4             */
    uint32 CSL5:1;                                         /* CSL5             */
    uint32 CSL6:1;                                         /* CSL6             */
    uint32 CSL7:1;                                         /* CSL7             */
    uint32 SLIT:1;                                         /* SLIT             */
    uint32 CKR:1;                                          /* CKR              */
    uint32 PHE:1;                                          /* PHE              */
    uint32 :13;                                            /* Reserved Bits    */
} __type547;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :13;                                            /* Reserved Bits    */
    uint16 PRS:3;                                          /* PRS[15:13]       */
} __type548;
typedef struct 
{                                                          /* Bit Access       */
    uint32 FFS:7;                                          /* FFS[6:0]         */
    uint32 :9;                                             /* Reserved Bits    */
    uint32 FES:7;                                          /* FES[22:16]       */
    uint32 :9;                                             /* Reserved Bits    */
} __type549;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SOP:7;                                          /* SOP[6:0]         */
    uint32 :9;                                             /* Reserved Bits    */
    uint32 ND:8;                                           /* ND[23:16]        */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 BTST:1;                                         /* BTST             */
} __type550;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TX:16;                                          /* TX[15:0]         */
    uint32 CS0:1;                                          /* CS0              */
    uint32 CS1:1;                                          /* CS1              */
    uint32 CS2:1;                                          /* CS2              */
    uint32 CS3:1;                                          /* CS3              */
    uint32 CS4:1;                                          /* CS4              */
    uint32 CS5:1;                                          /* CS5              */
    uint32 CS6:1;                                          /* CS6              */
    uint32 CS7:1;                                          /* CS7              */
    uint32 :5;                                             /* Reserved Bits    */
    uint32 EDL:1;                                          /* EDL              */
    uint32 EOJ:1;                                          /* EOJ              */
    uint32 CIRE:1;                                         /* CIRE             */
} __type551;
typedef struct 
{                                                          /* Bit Access       */
    uint32 RX:16;                                          /* RX[15:0]         */
    const uint32 CS0:1;                                    /* CS0              */
    const uint32 CS1:1;                                    /* CS1              */
    const uint32 CS2:1;                                    /* CS2              */
    const uint32 CS3:1;                                    /* CS3              */
    const uint32 CS4:1;                                    /* CS4              */
    const uint32 CS5:1;                                    /* CS5              */
    const uint32 CS6:1;                                    /* CS6              */
    const uint32 CS7:1;                                    /* CS7              */
    const uint32 TDCE:1;                                   /* TDCE             */
    const uint32 RPE:1;                                    /* RPE              */
    uint32 :6;                                             /* Reserved Bits    */
} __type553;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TRWA:7;                                         /* TRWA[6:0]        */
    uint32 :9;                                             /* Reserved Bits    */
    uint32 RRA:7;                                          /* RRA[22:16]       */
    uint32 :9;                                             /* Reserved Bits    */
} __type555;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TO:5;                                           /* TO[4:0]          */
    uint16 :3;                                             /* Reserved Bits    */
    uint16 MMS:2;                                          /* MMS[9:8]         */
    uint16 :6;                                             /* Reserved Bits    */
} __type556;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SP0:4;                                          /* SP0[3:0]         */
    uint32 IN0:4;                                          /* IN0[7:4]         */
    uint32 HD0:4;                                          /* HD0[11:8]        */
    uint32 ID0:3;                                          /* ID0[14:12]       */
    uint32 IDL0:1;                                         /* IDL0             */
    uint32 DAP0:1;                                         /* DAP0             */
    uint32 CKP0:1;                                         /* CKP0             */
    uint32 DIR0:1;                                         /* DIR0             */
    uint32 RCB0:1;                                         /* RCB0             */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 DLS0:4;                                         /* DLS0[27:24]      */
    uint32 PS0:2;                                          /* PS0[29:28]       */
    uint32 BRSS0:2;                                        /* BRSS0[31:30]     */
} __type557;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SP1:4;                                          /* SP1[3:0]         */
    uint32 IN1:4;                                          /* IN1[7:4]         */
    uint32 HD1:4;                                          /* HD1[11:8]        */
    uint32 ID1:3;                                          /* ID1[14:12]       */
    uint32 IDL1:1;                                         /* IDL1             */
    uint32 DAP1:1;                                         /* DAP1             */
    uint32 CKP1:1;                                         /* CKP1             */
    uint32 DIR1:1;                                         /* DIR1             */
    uint32 RCB1:1;                                         /* RCB1             */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 DLS1:4;                                         /* DLS1[27:24]      */
    uint32 PS1:2;                                          /* PS1[29:28]       */
    uint32 BRSS1:2;                                        /* BRSS1[31:30]     */
} __type558;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SP2:4;                                          /* SP2[3:0]         */
    uint32 IN2:4;                                          /* IN2[7:4]         */
    uint32 HD2:4;                                          /* HD2[11:8]        */
    uint32 ID2:3;                                          /* ID2[14:12]       */
    uint32 IDL2:1;                                         /* IDL2             */
    uint32 DAP2:1;                                         /* DAP2             */
    uint32 CKP2:1;                                         /* CKP2             */
    uint32 DIR2:1;                                         /* DIR2             */
    uint32 RCB2:1;                                         /* RCB2             */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 DLS2:4;                                         /* DLS2[27:24]      */
    uint32 PS2:2;                                          /* PS2[29:28]       */
    uint32 BRSS2:2;                                        /* BRSS2[31:30]     */
} __type559;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SP3:4;                                          /* SP3[3:0]         */
    uint32 IN3:4;                                          /* IN3[7:4]         */
    uint32 HD3:4;                                          /* HD3[11:8]        */
    uint32 ID3:3;                                          /* ID3[14:12]       */
    uint32 IDL3:1;                                         /* IDL3             */
    uint32 DAP3:1;                                         /* DAP3             */
    uint32 CKP3:1;                                         /* CKP3             */
    uint32 DIR3:1;                                         /* DIR3             */
    uint32 RCB3:1;                                         /* RCB3             */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 DLS3:4;                                         /* DLS3[27:24]      */
    uint32 PS3:2;                                          /* PS3[29:28]       */
    uint32 BRSS3:2;                                        /* BRSS3[31:30]     */
} __type560;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SP4:4;                                          /* SP4[3:0]         */
    uint32 IN4:4;                                          /* IN4[7:4]         */
    uint32 HD4:4;                                          /* HD4[11:8]        */
    uint32 ID4:3;                                          /* ID4[14:12]       */
    uint32 IDL4:1;                                         /* IDL4             */
    uint32 DAP4:1;                                         /* DAP4             */
    uint32 CKP4:1;                                         /* CKP4             */
    uint32 DIR4:1;                                         /* DIR4             */
    uint32 RCB4:1;                                         /* RCB4             */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 DLS4:4;                                         /* DLS4[27:24]      */
    uint32 PS4:2;                                          /* PS4[29:28]       */
    uint32 BRSS4:2;                                        /* BRSS4[31:30]     */
} __type561;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SP5:4;                                          /* SP5[3:0]         */
    uint32 IN5:4;                                          /* IN5[7:4]         */
    uint32 HD5:4;                                          /* HD5[11:8]        */
    uint32 ID5:3;                                          /* ID5[14:12]       */
    uint32 IDL5:1;                                         /* IDL5             */
    uint32 DAP5:1;                                         /* DAP5             */
    uint32 CKP5:1;                                         /* CKP5             */
    uint32 DIR5:1;                                         /* DIR5             */
    uint32 RCB5:1;                                         /* RCB5             */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 DLS5:4;                                         /* DLS5[27:24]      */
    uint32 PS5:2;                                          /* PS5[29:28]       */
    uint32 BRSS5:2;                                        /* BRSS5[31:30]     */
} __type562;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SP6:4;                                          /* SP6[3:0]         */
    uint32 IN6:4;                                          /* IN6[7:4]         */
    uint32 HD6:4;                                          /* HD6[11:8]        */
    uint32 ID6:3;                                          /* ID6[14:12]       */
    uint32 IDL6:1;                                         /* IDL6             */
    uint32 DAP6:1;                                         /* DAP6             */
    uint32 CKP6:1;                                         /* CKP6             */
    uint32 DIR6:1;                                         /* DIR6             */
    uint32 RCB6:1;                                         /* RCB6             */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 DLS6:4;                                         /* DLS6[27:24]      */
    uint32 PS6:2;                                          /* PS6[29:28]       */
    uint32 BRSS6:2;                                        /* BRSS6[31:30]     */
} __type563;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SP7:4;                                          /* SP7[3:0]         */
    uint32 IN7:4;                                          /* IN7[7:4]         */
    uint32 HD7:4;                                          /* HD7[11:8]        */
    uint32 ID7:3;                                          /* ID7[14:12]       */
    uint32 IDL7:1;                                         /* IDL7             */
    uint32 DAP7:1;                                         /* DAP7             */
    uint32 CKP7:1;                                         /* CKP7             */
    uint32 DIR7:1;                                         /* DIR7             */
    uint32 RCB7:1;                                         /* RCB7             */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 DLS7:4;                                         /* DLS7[27:24]      */
    uint32 PS7:2;                                          /* PS7[29:28]       */
    uint32 BRSS7:2;                                        /* BRSS7[31:30]     */
} __type564;
typedef struct 
{                                                          /* Bit Access       */
    uint16 BRS:12;                                         /* BRS[11:0]        */
    uint16 :4;                                             /* Reserved Bits    */
} __type565;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SELCSI0DC:1;                                    /* SELCSI0DC        */
    uint8  SELCSI0DR:1;                                    /* SELCSI0DR        */
    uint8  SELCSI1DC:1;                                    /* SELCSI1DC        */
    uint8  SELCSI1DR:1;                                    /* SELCSI1DR        */
    uint8  :4;                                             /* Reserved Bits    */
} __type574;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type544 BIT;                                         /* Bit Access       */
} __type1823;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type545 BIT;                                   /* Bit Access       */
} __type1824;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type546 BIT;                                         /* Bit Access       */
} __type1825;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type547 BIT;                                         /* Bit Access       */
} __type1826;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type548 BIT;                                         /* Bit Access       */
} __type1827;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type549 BIT;                                         /* Bit Access       */
} __type1828;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type550 BIT;                                         /* Bit Access       */
} __type1829;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type551 BIT;                                         /* Bit Access       */
} __type1830;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type553 BIT;                                         /* Bit Access       */
} __type1832;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type555 BIT;                                         /* Bit Access       */
} __type1834;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type556 BIT;                                         /* Bit Access       */
} __type1835;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type557 BIT;                                         /* Bit Access       */
} __type1836;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type558 BIT;                                         /* Bit Access       */
} __type1837;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type559 BIT;                                         /* Bit Access       */
} __type1838;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type560 BIT;                                         /* Bit Access       */
} __type1839;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type561 BIT;                                         /* Bit Access       */
} __type1840;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type562 BIT;                                         /* Bit Access       */
} __type1841;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type563 BIT;                                         /* Bit Access       */
} __type1842;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type564 BIT;                                         /* Bit Access       */
} __type1843;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type565 BIT;                                         /* Bit Access       */
} __type1844;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type574 BIT;                                         /* Bit Access       */
} __type1853;

typedef struct 
{                                                          /* Module           */
    __type1823 CTL0;                                       /* CTL0             */
    uint8  dummy301[3];                                    /* Reserved         */
    const __type1824 STR0;                                 /* STR0             */
    __type1825 STCR0;                                      /* STCR0            */
    uint8  dummy302[6];                                    /* Reserved         */
    __type1826 CTL1;                                       /* CTL1             */
    __type1827 CTL2;                                       /* CTL2             */
    uint8  dummy303[4074];                                 /* Reserved         */
    __type1828 MCTL1;                                      /* MCTL1            */
    __type1829 MCTL2;                                      /* MCTL2            */
    __type1830 TX0W;                                       /* TX0W             */
    __type1831 TX0H;                                       /* TX0H             */
    uint8  dummy304[2];                                    /* Reserved         */
    __type1832 RX0W;                                       /* RX0W             */
    const __type1833 RX0H;                                 /* RX0H             */
    uint8  dummy305[2];                                    /* Reserved         */
    __type1834 MRWP0;                                      /* MRWP0            */
    uint8  dummy306[36];                                   /* Reserved         */
    __type1835 MCTL0;                                      /* MCTL0            */
    uint8  dummy307[2];                                    /* Reserved         */
    __type1836 CFG0;                                       /* CFG0             */
    __type1837 CFG1;                                       /* CFG1             */
    __type1838 CFG2;                                       /* CFG2             */
    __type1839 CFG3;                                       /* CFG3             */
    __type1840 CFG4;                                       /* CFG4             */
    __type1841 CFG5;                                       /* CFG5             */
    __type1842 CFG6;                                       /* CFG6             */
    __type1843 CFG7;                                       /* CFG7             */
    uint8  dummy308[4];                                    /* Reserved         */
    __type1844 BRS0;                                       /* BRS0             */
    uint8  dummy309[2];                                    /* Reserved         */
    __type1844 BRS1;                                       /* BRS1             */
    uint8  dummy310[2];                                    /* Reserved         */
    __type1844 BRS2;                                       /* BRS2             */
    uint8  dummy311[2];                                    /* Reserved         */
    __type1844 BRS3;                                       /* BRS3             */
} __type2594;
typedef struct 
{                                                          /* Module           */
    __type1853 SELCSIHDMA;                                 /* SELCSIHDMA       */
} __type2596;

__IOREG(CSIH0, 0xFFD80000, __READ_WRITE, __type2594);                 /* CSIH0 */
__IOREG(CSIH1, 0xFFD82000, __READ_WRITE, __type2594);                 /* CSIH1 */
__IOREG(CSIH2, 0xFFD84000, __READ_WRITE, __type2594);                 /* CSIH2 */
__IOREG(CSIH3, 0xFFD86000, __READ_WRITE, __type2594);                 /* CSIH3 */
__IOREG(CSIH, 0xFFD8E000, __READ_WRITE, __type2596);                  /* CSIH */

#define CSIH0CTL0 CSIH0.CTL0.UINT8
#define CSIH0MBS CSIH0.CTL0.BIT.MBS
#define CSIH0JOBE CSIH0.CTL0.BIT.JOBE
#define CSIH0RXE CSIH0.CTL0.BIT.RXE
#define CSIH0TXE CSIH0.CTL0.BIT.TXE
#define CSIH0PWR CSIH0.CTL0.BIT.PWR
#define CSIH0STR0 CSIH0.STR0.UINT32
#define CSIH0OVE CSIH0.STR0.BIT.OVE
#define CSIH0PE CSIH0.STR0.BIT.PE
#define CSIH0DCE CSIH0.STR0.BIT.DCE
#define CSIH0EMF CSIH0.STR0.BIT.EMF
#define CSIH0FLF CSIH0.STR0.BIT.FLF
#define CSIH0TSF CSIH0.STR0.BIT.TSF
#define CSIH0HPST CSIH0.STR0.BIT.HPST
#define CSIH0OFE CSIH0.STR0.BIT.OFE
#define CSIH0TMOE CSIH0.STR0.BIT.TMOE
#define CSIH0SPF CSIH0.STR0.BIT.SPF
#define CSIH0SRP CSIH0.STR0.BIT.SRP
#define CSIH0STCR0 CSIH0.STCR0.UINT16
#define CSIH0OVEC CSIH0.STCR0.BIT.OVEC
#define CSIH0PEC CSIH0.STCR0.BIT.PEC
#define CSIH0DCEC CSIH0.STCR0.BIT.DCEC
#define CSIH0PCT CSIH0.STCR0.BIT.PCT
#define CSIH0OFEC CSIH0.STCR0.BIT.OFEC
#define CSIH0TMOEC CSIH0.STCR0.BIT.TMOEC
#define CSIH0CTL1 CSIH0.CTL1.UINT32
#define CSIH0SSE CSIH0.CTL1.BIT.SSE
#define CSIH0HSE CSIH0.CTL1.BIT.HSE
#define CSIH0SIT CSIH0.CTL1.BIT.SIT
#define CSIH0LBM CSIH0.CTL1.BIT.LBM
#define CSIH0CSRI CSIH0.CTL1.BIT.CSRI
#define CSIH0DCS CSIH0.CTL1.BIT.DCS
#define CSIH0JE CSIH0.CTL1.BIT.JE
#define CSIH0EDLE CSIH0.CTL1.BIT.EDLE
#define CSIH0CSL0 CSIH0.CTL1.BIT.CSL0
#define CSIH0CSL1 CSIH0.CTL1.BIT.CSL1
#define CSIH0CSL2 CSIH0.CTL1.BIT.CSL2
#define CSIH0CSL3 CSIH0.CTL1.BIT.CSL3
#define CSIH0CSL4 CSIH0.CTL1.BIT.CSL4
#define CSIH0CSL5 CSIH0.CTL1.BIT.CSL5
#define CSIH0CSL6 CSIH0.CTL1.BIT.CSL6
#define CSIH0CSL7 CSIH0.CTL1.BIT.CSL7
#define CSIH0SLIT CSIH0.CTL1.BIT.SLIT
#define CSIH0CKR CSIH0.CTL1.BIT.CKR
#define CSIH0PHE CSIH0.CTL1.BIT.PHE
#define CSIH0CTL2 CSIH0.CTL2.UINT16
#define CSIH0PRS CSIH0.CTL2.BIT.PRS
#define CSIH0MCTL1 CSIH0.MCTL1.UINT32
#define CSIH0FFS CSIH0.MCTL1.BIT.FFS
#define CSIH0FES CSIH0.MCTL1.BIT.FES
#define CSIH0MCTL2 CSIH0.MCTL2.UINT32
#define CSIH0SOP CSIH0.MCTL2.BIT.SOP
#define CSIH0ND CSIH0.MCTL2.BIT.ND
#define CSIH0BTST CSIH0.MCTL2.BIT.BTST
#define CSIH0TX0W CSIH0.TX0W.UINT32
#define CSIH0TX CSIH0.TX0W.BIT.TX
#define CSIH0CS0 CSIH0.TX0W.BIT.CS0
#define CSIH0CS1 CSIH0.TX0W.BIT.CS1
#define CSIH0CS2 CSIH0.TX0W.BIT.CS2
#define CSIH0CS3 CSIH0.TX0W.BIT.CS3
#define CSIH0CS4 CSIH0.TX0W.BIT.CS4
#define CSIH0CS5 CSIH0.TX0W.BIT.CS5
#define CSIH0CS6 CSIH0.TX0W.BIT.CS6
#define CSIH0CS7 CSIH0.TX0W.BIT.CS7
#define CSIH0EDL CSIH0.TX0W.BIT.EDL
#define CSIH0EOJ CSIH0.TX0W.BIT.EOJ
#define CSIH0CIRE CSIH0.TX0W.BIT.CIRE
#define CSIH0TX0H CSIH0.TX0H.UINT16
#define CSIH0RX0W CSIH0.RX0W.UINT32
#define CSIH0RX CSIH0.RX0W.BIT.RX
#define CSIH0TDCE CSIH0.RX0W.BIT.TDCE
#define CSIH0RPE CSIH0.RX0W.BIT.RPE
#define CSIH0RX0H CSIH0.RX0H.UINT16
#define CSIH0MRWP0 CSIH0.MRWP0.UINT32
#define CSIH0TRWA CSIH0.MRWP0.BIT.TRWA
#define CSIH0RRA CSIH0.MRWP0.BIT.RRA
#define CSIH0MCTL0 CSIH0.MCTL0.UINT16
#define CSIH0TO CSIH0.MCTL0.BIT.TO
#define CSIH0MMS CSIH0.MCTL0.BIT.MMS
#define CSIH0CFG0 CSIH0.CFG0.UINT32
#define CSIH0SP0 CSIH0.CFG0.BIT.SP0
#define CSIH0IN0 CSIH0.CFG0.BIT.IN0
#define CSIH0HD0 CSIH0.CFG0.BIT.HD0
#define CSIH0ID0 CSIH0.CFG0.BIT.ID0
#define CSIH0IDL0 CSIH0.CFG0.BIT.IDL0
#define CSIH0DAP0 CSIH0.CFG0.BIT.DAP0
#define CSIH0CKP0 CSIH0.CFG0.BIT.CKP0
#define CSIH0DIR0 CSIH0.CFG0.BIT.DIR0
#define CSIH0RCB0 CSIH0.CFG0.BIT.RCB0
#define CSIH0DLS0 CSIH0.CFG0.BIT.DLS0
#define CSIH0PS0 CSIH0.CFG0.BIT.PS0
#define CSIH0BRSS0 CSIH0.CFG0.BIT.BRSS0
#define CSIH0CFG1 CSIH0.CFG1.UINT32
#define CSIH0SP1 CSIH0.CFG1.BIT.SP1
#define CSIH0IN1 CSIH0.CFG1.BIT.IN1
#define CSIH0HD1 CSIH0.CFG1.BIT.HD1
#define CSIH0ID1 CSIH0.CFG1.BIT.ID1
#define CSIH0IDL1 CSIH0.CFG1.BIT.IDL1
#define CSIH0DAP1 CSIH0.CFG1.BIT.DAP1
#define CSIH0CKP1 CSIH0.CFG1.BIT.CKP1
#define CSIH0DIR1 CSIH0.CFG1.BIT.DIR1
#define CSIH0RCB1 CSIH0.CFG1.BIT.RCB1
#define CSIH0DLS1 CSIH0.CFG1.BIT.DLS1
#define CSIH0PS1 CSIH0.CFG1.BIT.PS1
#define CSIH0BRSS1 CSIH0.CFG1.BIT.BRSS1
#define CSIH0CFG2 CSIH0.CFG2.UINT32
#define CSIH0SP2 CSIH0.CFG2.BIT.SP2
#define CSIH0IN2 CSIH0.CFG2.BIT.IN2
#define CSIH0HD2 CSIH0.CFG2.BIT.HD2
#define CSIH0ID2 CSIH0.CFG2.BIT.ID2
#define CSIH0IDL2 CSIH0.CFG2.BIT.IDL2
#define CSIH0DAP2 CSIH0.CFG2.BIT.DAP2
#define CSIH0CKP2 CSIH0.CFG2.BIT.CKP2
#define CSIH0DIR2 CSIH0.CFG2.BIT.DIR2
#define CSIH0RCB2 CSIH0.CFG2.BIT.RCB2
#define CSIH0DLS2 CSIH0.CFG2.BIT.DLS2
#define CSIH0PS2 CSIH0.CFG2.BIT.PS2
#define CSIH0BRSS2 CSIH0.CFG2.BIT.BRSS2
#define CSIH0CFG3 CSIH0.CFG3.UINT32
#define CSIH0SP3 CSIH0.CFG3.BIT.SP3
#define CSIH0IN3 CSIH0.CFG3.BIT.IN3
#define CSIH0HD3 CSIH0.CFG3.BIT.HD3
#define CSIH0ID3 CSIH0.CFG3.BIT.ID3
#define CSIH0IDL3 CSIH0.CFG3.BIT.IDL3
#define CSIH0DAP3 CSIH0.CFG3.BIT.DAP3
#define CSIH0CKP3 CSIH0.CFG3.BIT.CKP3
#define CSIH0DIR3 CSIH0.CFG3.BIT.DIR3
#define CSIH0RCB3 CSIH0.CFG3.BIT.RCB3
#define CSIH0DLS3 CSIH0.CFG3.BIT.DLS3
#define CSIH0PS3 CSIH0.CFG3.BIT.PS3
#define CSIH0BRSS3 CSIH0.CFG3.BIT.BRSS3
#define CSIH0CFG4 CSIH0.CFG4.UINT32
#define CSIH0SP4 CSIH0.CFG4.BIT.SP4
#define CSIH0IN4 CSIH0.CFG4.BIT.IN4
#define CSIH0HD4 CSIH0.CFG4.BIT.HD4
#define CSIH0ID4 CSIH0.CFG4.BIT.ID4
#define CSIH0IDL4 CSIH0.CFG4.BIT.IDL4
#define CSIH0DAP4 CSIH0.CFG4.BIT.DAP4
#define CSIH0CKP4 CSIH0.CFG4.BIT.CKP4
#define CSIH0DIR4 CSIH0.CFG4.BIT.DIR4
#define CSIH0RCB4 CSIH0.CFG4.BIT.RCB4
#define CSIH0DLS4 CSIH0.CFG4.BIT.DLS4
#define CSIH0PS4 CSIH0.CFG4.BIT.PS4
#define CSIH0BRSS4 CSIH0.CFG4.BIT.BRSS4
#define CSIH0CFG5 CSIH0.CFG5.UINT32
#define CSIH0SP5 CSIH0.CFG5.BIT.SP5
#define CSIH0IN5 CSIH0.CFG5.BIT.IN5
#define CSIH0HD5 CSIH0.CFG5.BIT.HD5
#define CSIH0ID5 CSIH0.CFG5.BIT.ID5
#define CSIH0IDL5 CSIH0.CFG5.BIT.IDL5
#define CSIH0DAP5 CSIH0.CFG5.BIT.DAP5
#define CSIH0CKP5 CSIH0.CFG5.BIT.CKP5
#define CSIH0DIR5 CSIH0.CFG5.BIT.DIR5
#define CSIH0RCB5 CSIH0.CFG5.BIT.RCB5
#define CSIH0DLS5 CSIH0.CFG5.BIT.DLS5
#define CSIH0PS5 CSIH0.CFG5.BIT.PS5
#define CSIH0BRSS5 CSIH0.CFG5.BIT.BRSS5
#define CSIH0CFG6 CSIH0.CFG6.UINT32
#define CSIH0SP6 CSIH0.CFG6.BIT.SP6
#define CSIH0IN6 CSIH0.CFG6.BIT.IN6
#define CSIH0HD6 CSIH0.CFG6.BIT.HD6
#define CSIH0ID6 CSIH0.CFG6.BIT.ID6
#define CSIH0IDL6 CSIH0.CFG6.BIT.IDL6
#define CSIH0DAP6 CSIH0.CFG6.BIT.DAP6
#define CSIH0CKP6 CSIH0.CFG6.BIT.CKP6
#define CSIH0DIR6 CSIH0.CFG6.BIT.DIR6
#define CSIH0RCB6 CSIH0.CFG6.BIT.RCB6
#define CSIH0DLS6 CSIH0.CFG6.BIT.DLS6
#define CSIH0PS6 CSIH0.CFG6.BIT.PS6
#define CSIH0BRSS6 CSIH0.CFG6.BIT.BRSS6
#define CSIH0CFG7 CSIH0.CFG7.UINT32
#define CSIH0SP7 CSIH0.CFG7.BIT.SP7
#define CSIH0IN7 CSIH0.CFG7.BIT.IN7
#define CSIH0HD7 CSIH0.CFG7.BIT.HD7
#define CSIH0ID7 CSIH0.CFG7.BIT.ID7
#define CSIH0IDL7 CSIH0.CFG7.BIT.IDL7
#define CSIH0DAP7 CSIH0.CFG7.BIT.DAP7
#define CSIH0CKP7 CSIH0.CFG7.BIT.CKP7
#define CSIH0DIR7 CSIH0.CFG7.BIT.DIR7
#define CSIH0RCB7 CSIH0.CFG7.BIT.RCB7
#define CSIH0DLS7 CSIH0.CFG7.BIT.DLS7
#define CSIH0PS7 CSIH0.CFG7.BIT.PS7
#define CSIH0BRSS7 CSIH0.CFG7.BIT.BRSS7
#define CSIH0BRS0 CSIH0.BRS0.UINT16
#define CSIH0BRS CSIH0.BRS0.BIT.BRS
#define CSIH0BRS1 CSIH0.BRS1.UINT16
#define CSIH0BRS2 CSIH0.BRS2.UINT16
#define CSIH0BRS3 CSIH0.BRS3.UINT16
#define CSIH1CTL0 CSIH1.CTL0.UINT8
#define CSIH1MBS CSIH1.CTL0.BIT.MBS
#define CSIH1JOBE CSIH1.CTL0.BIT.JOBE
#define CSIH1RXE CSIH1.CTL0.BIT.RXE
#define CSIH1TXE CSIH1.CTL0.BIT.TXE
#define CSIH1PWR CSIH1.CTL0.BIT.PWR
#define CSIH1STR0 CSIH1.STR0.UINT32
#define CSIH1OVE CSIH1.STR0.BIT.OVE
#define CSIH1PE CSIH1.STR0.BIT.PE
#define CSIH1DCE CSIH1.STR0.BIT.DCE
#define CSIH1EMF CSIH1.STR0.BIT.EMF
#define CSIH1FLF CSIH1.STR0.BIT.FLF
#define CSIH1TSF CSIH1.STR0.BIT.TSF
#define CSIH1HPST CSIH1.STR0.BIT.HPST
#define CSIH1OFE CSIH1.STR0.BIT.OFE
#define CSIH1TMOE CSIH1.STR0.BIT.TMOE
#define CSIH1SPF CSIH1.STR0.BIT.SPF
#define CSIH1SRP CSIH1.STR0.BIT.SRP
#define CSIH1STCR0 CSIH1.STCR0.UINT16
#define CSIH1OVEC CSIH1.STCR0.BIT.OVEC
#define CSIH1PEC CSIH1.STCR0.BIT.PEC
#define CSIH1DCEC CSIH1.STCR0.BIT.DCEC
#define CSIH1PCT CSIH1.STCR0.BIT.PCT
#define CSIH1OFEC CSIH1.STCR0.BIT.OFEC
#define CSIH1TMOEC CSIH1.STCR0.BIT.TMOEC
#define CSIH1CTL1 CSIH1.CTL1.UINT32
#define CSIH1SSE CSIH1.CTL1.BIT.SSE
#define CSIH1HSE CSIH1.CTL1.BIT.HSE
#define CSIH1SIT CSIH1.CTL1.BIT.SIT
#define CSIH1LBM CSIH1.CTL1.BIT.LBM
#define CSIH1CSRI CSIH1.CTL1.BIT.CSRI
#define CSIH1DCS CSIH1.CTL1.BIT.DCS
#define CSIH1JE CSIH1.CTL1.BIT.JE
#define CSIH1EDLE CSIH1.CTL1.BIT.EDLE
#define CSIH1CSL0 CSIH1.CTL1.BIT.CSL0
#define CSIH1CSL1 CSIH1.CTL1.BIT.CSL1
#define CSIH1CSL2 CSIH1.CTL1.BIT.CSL2
#define CSIH1CSL3 CSIH1.CTL1.BIT.CSL3
#define CSIH1CSL4 CSIH1.CTL1.BIT.CSL4
#define CSIH1CSL5 CSIH1.CTL1.BIT.CSL5
#define CSIH1CSL6 CSIH1.CTL1.BIT.CSL6
#define CSIH1CSL7 CSIH1.CTL1.BIT.CSL7
#define CSIH1SLIT CSIH1.CTL1.BIT.SLIT
#define CSIH1CKR CSIH1.CTL1.BIT.CKR
#define CSIH1PHE CSIH1.CTL1.BIT.PHE
#define CSIH1CTL2 CSIH1.CTL2.UINT16
#define CSIH1PRS CSIH1.CTL2.BIT.PRS
#define CSIH1MCTL1 CSIH1.MCTL1.UINT32
#define CSIH1FFS CSIH1.MCTL1.BIT.FFS
#define CSIH1FES CSIH1.MCTL1.BIT.FES
#define CSIH1MCTL2 CSIH1.MCTL2.UINT32
#define CSIH1SOP CSIH1.MCTL2.BIT.SOP
#define CSIH1ND CSIH1.MCTL2.BIT.ND
#define CSIH1BTST CSIH1.MCTL2.BIT.BTST
#define CSIH1TX0W CSIH1.TX0W.UINT32
#define CSIH1TX CSIH1.TX0W.BIT.TX
#define CSIH1CS0 CSIH1.TX0W.BIT.CS0
#define CSIH1CS1 CSIH1.TX0W.BIT.CS1
#define CSIH1CS2 CSIH1.TX0W.BIT.CS2
#define CSIH1CS3 CSIH1.TX0W.BIT.CS3
#define CSIH1CS4 CSIH1.TX0W.BIT.CS4
#define CSIH1CS5 CSIH1.TX0W.BIT.CS5
#define CSIH1CS6 CSIH1.TX0W.BIT.CS6
#define CSIH1CS7 CSIH1.TX0W.BIT.CS7
#define CSIH1EDL CSIH1.TX0W.BIT.EDL
#define CSIH1EOJ CSIH1.TX0W.BIT.EOJ
#define CSIH1CIRE CSIH1.TX0W.BIT.CIRE
#define CSIH1TX0H CSIH1.TX0H.UINT16
#define CSIH1RX0W CSIH1.RX0W.UINT32
#define CSIH1RX CSIH1.RX0W.BIT.RX
#define CSIH1TDCE CSIH1.RX0W.BIT.TDCE
#define CSIH1RPE CSIH1.RX0W.BIT.RPE
#define CSIH1RX0H CSIH1.RX0H.UINT16
#define CSIH1MRWP0 CSIH1.MRWP0.UINT32
#define CSIH1TRWA CSIH1.MRWP0.BIT.TRWA
#define CSIH1RRA CSIH1.MRWP0.BIT.RRA
#define CSIH1MCTL0 CSIH1.MCTL0.UINT16
#define CSIH1TO CSIH1.MCTL0.BIT.TO
#define CSIH1MMS CSIH1.MCTL0.BIT.MMS
#define CSIH1CFG0 CSIH1.CFG0.UINT32
#define CSIH1SP0 CSIH1.CFG0.BIT.SP0
#define CSIH1IN0 CSIH1.CFG0.BIT.IN0
#define CSIH1HD0 CSIH1.CFG0.BIT.HD0
#define CSIH1ID0 CSIH1.CFG0.BIT.ID0
#define CSIH1IDL0 CSIH1.CFG0.BIT.IDL0
#define CSIH1DAP0 CSIH1.CFG0.BIT.DAP0
#define CSIH1CKP0 CSIH1.CFG0.BIT.CKP0
#define CSIH1DIR0 CSIH1.CFG0.BIT.DIR0
#define CSIH1RCB0 CSIH1.CFG0.BIT.RCB0
#define CSIH1DLS0 CSIH1.CFG0.BIT.DLS0
#define CSIH1PS0 CSIH1.CFG0.BIT.PS0
#define CSIH1BRSS0 CSIH1.CFG0.BIT.BRSS0
#define CSIH1CFG1 CSIH1.CFG1.UINT32
#define CSIH1SP1 CSIH1.CFG1.BIT.SP1
#define CSIH1IN1 CSIH1.CFG1.BIT.IN1
#define CSIH1HD1 CSIH1.CFG1.BIT.HD1
#define CSIH1ID1 CSIH1.CFG1.BIT.ID1
#define CSIH1IDL1 CSIH1.CFG1.BIT.IDL1
#define CSIH1DAP1 CSIH1.CFG1.BIT.DAP1
#define CSIH1CKP1 CSIH1.CFG1.BIT.CKP1
#define CSIH1DIR1 CSIH1.CFG1.BIT.DIR1
#define CSIH1RCB1 CSIH1.CFG1.BIT.RCB1
#define CSIH1DLS1 CSIH1.CFG1.BIT.DLS1
#define CSIH1PS1 CSIH1.CFG1.BIT.PS1
#define CSIH1BRSS1 CSIH1.CFG1.BIT.BRSS1
#define CSIH1CFG2 CSIH1.CFG2.UINT32
#define CSIH1SP2 CSIH1.CFG2.BIT.SP2
#define CSIH1IN2 CSIH1.CFG2.BIT.IN2
#define CSIH1HD2 CSIH1.CFG2.BIT.HD2
#define CSIH1ID2 CSIH1.CFG2.BIT.ID2
#define CSIH1IDL2 CSIH1.CFG2.BIT.IDL2
#define CSIH1DAP2 CSIH1.CFG2.BIT.DAP2
#define CSIH1CKP2 CSIH1.CFG2.BIT.CKP2
#define CSIH1DIR2 CSIH1.CFG2.BIT.DIR2
#define CSIH1RCB2 CSIH1.CFG2.BIT.RCB2
#define CSIH1DLS2 CSIH1.CFG2.BIT.DLS2
#define CSIH1PS2 CSIH1.CFG2.BIT.PS2
#define CSIH1BRSS2 CSIH1.CFG2.BIT.BRSS2
#define CSIH1CFG3 CSIH1.CFG3.UINT32
#define CSIH1SP3 CSIH1.CFG3.BIT.SP3
#define CSIH1IN3 CSIH1.CFG3.BIT.IN3
#define CSIH1HD3 CSIH1.CFG3.BIT.HD3
#define CSIH1ID3 CSIH1.CFG3.BIT.ID3
#define CSIH1IDL3 CSIH1.CFG3.BIT.IDL3
#define CSIH1DAP3 CSIH1.CFG3.BIT.DAP3
#define CSIH1CKP3 CSIH1.CFG3.BIT.CKP3
#define CSIH1DIR3 CSIH1.CFG3.BIT.DIR3
#define CSIH1RCB3 CSIH1.CFG3.BIT.RCB3
#define CSIH1DLS3 CSIH1.CFG3.BIT.DLS3
#define CSIH1PS3 CSIH1.CFG3.BIT.PS3
#define CSIH1BRSS3 CSIH1.CFG3.BIT.BRSS3
#define CSIH1CFG4 CSIH1.CFG4.UINT32
#define CSIH1SP4 CSIH1.CFG4.BIT.SP4
#define CSIH1IN4 CSIH1.CFG4.BIT.IN4
#define CSIH1HD4 CSIH1.CFG4.BIT.HD4
#define CSIH1ID4 CSIH1.CFG4.BIT.ID4
#define CSIH1IDL4 CSIH1.CFG4.BIT.IDL4
#define CSIH1DAP4 CSIH1.CFG4.BIT.DAP4
#define CSIH1CKP4 CSIH1.CFG4.BIT.CKP4
#define CSIH1DIR4 CSIH1.CFG4.BIT.DIR4
#define CSIH1RCB4 CSIH1.CFG4.BIT.RCB4
#define CSIH1DLS4 CSIH1.CFG4.BIT.DLS4
#define CSIH1PS4 CSIH1.CFG4.BIT.PS4
#define CSIH1BRSS4 CSIH1.CFG4.BIT.BRSS4
#define CSIH1CFG5 CSIH1.CFG5.UINT32
#define CSIH1SP5 CSIH1.CFG5.BIT.SP5
#define CSIH1IN5 CSIH1.CFG5.BIT.IN5
#define CSIH1HD5 CSIH1.CFG5.BIT.HD5
#define CSIH1ID5 CSIH1.CFG5.BIT.ID5
#define CSIH1IDL5 CSIH1.CFG5.BIT.IDL5
#define CSIH1DAP5 CSIH1.CFG5.BIT.DAP5
#define CSIH1CKP5 CSIH1.CFG5.BIT.CKP5
#define CSIH1DIR5 CSIH1.CFG5.BIT.DIR5
#define CSIH1RCB5 CSIH1.CFG5.BIT.RCB5
#define CSIH1DLS5 CSIH1.CFG5.BIT.DLS5
#define CSIH1PS5 CSIH1.CFG5.BIT.PS5
#define CSIH1BRSS5 CSIH1.CFG5.BIT.BRSS5
#define CSIH1CFG6 CSIH1.CFG6.UINT32
#define CSIH1SP6 CSIH1.CFG6.BIT.SP6
#define CSIH1IN6 CSIH1.CFG6.BIT.IN6
#define CSIH1HD6 CSIH1.CFG6.BIT.HD6
#define CSIH1ID6 CSIH1.CFG6.BIT.ID6
#define CSIH1IDL6 CSIH1.CFG6.BIT.IDL6
#define CSIH1DAP6 CSIH1.CFG6.BIT.DAP6
#define CSIH1CKP6 CSIH1.CFG6.BIT.CKP6
#define CSIH1DIR6 CSIH1.CFG6.BIT.DIR6
#define CSIH1RCB6 CSIH1.CFG6.BIT.RCB6
#define CSIH1DLS6 CSIH1.CFG6.BIT.DLS6
#define CSIH1PS6 CSIH1.CFG6.BIT.PS6
#define CSIH1BRSS6 CSIH1.CFG6.BIT.BRSS6
#define CSIH1CFG7 CSIH1.CFG7.UINT32
#define CSIH1SP7 CSIH1.CFG7.BIT.SP7
#define CSIH1IN7 CSIH1.CFG7.BIT.IN7
#define CSIH1HD7 CSIH1.CFG7.BIT.HD7
#define CSIH1ID7 CSIH1.CFG7.BIT.ID7
#define CSIH1IDL7 CSIH1.CFG7.BIT.IDL7
#define CSIH1DAP7 CSIH1.CFG7.BIT.DAP7
#define CSIH1CKP7 CSIH1.CFG7.BIT.CKP7
#define CSIH1DIR7 CSIH1.CFG7.BIT.DIR7
#define CSIH1RCB7 CSIH1.CFG7.BIT.RCB7
#define CSIH1DLS7 CSIH1.CFG7.BIT.DLS7
#define CSIH1PS7 CSIH1.CFG7.BIT.PS7
#define CSIH1BRSS7 CSIH1.CFG7.BIT.BRSS7
#define CSIH1BRS0 CSIH1.BRS0.UINT16
#define CSIH1BRS CSIH1.BRS0.BIT.BRS
#define CSIH1BRS1 CSIH1.BRS1.UINT16
#define CSIH1BRS2 CSIH1.BRS2.UINT16
#define CSIH1BRS3 CSIH1.BRS3.UINT16
#define CSIH2CTL0 CSIH2.CTL0.UINT8
#define CSIH2MBS CSIH2.CTL0.BIT.MBS
#define CSIH2JOBE CSIH2.CTL0.BIT.JOBE
#define CSIH2RXE CSIH2.CTL0.BIT.RXE
#define CSIH2TXE CSIH2.CTL0.BIT.TXE
#define CSIH2PWR CSIH2.CTL0.BIT.PWR
#define CSIH2STR0 CSIH2.STR0.UINT32
#define CSIH2OVE CSIH2.STR0.BIT.OVE
#define CSIH2PE CSIH2.STR0.BIT.PE
#define CSIH2DCE CSIH2.STR0.BIT.DCE
#define CSIH2EMF CSIH2.STR0.BIT.EMF
#define CSIH2FLF CSIH2.STR0.BIT.FLF
#define CSIH2TSF CSIH2.STR0.BIT.TSF
#define CSIH2HPST CSIH2.STR0.BIT.HPST
#define CSIH2OFE CSIH2.STR0.BIT.OFE
#define CSIH2TMOE CSIH2.STR0.BIT.TMOE
#define CSIH2SPF CSIH2.STR0.BIT.SPF
#define CSIH2SRP CSIH2.STR0.BIT.SRP
#define CSIH2STCR0 CSIH2.STCR0.UINT16
#define CSIH2OVEC CSIH2.STCR0.BIT.OVEC
#define CSIH2PEC CSIH2.STCR0.BIT.PEC
#define CSIH2DCEC CSIH2.STCR0.BIT.DCEC
#define CSIH2PCT CSIH2.STCR0.BIT.PCT
#define CSIH2OFEC CSIH2.STCR0.BIT.OFEC
#define CSIH2TMOEC CSIH2.STCR0.BIT.TMOEC
#define CSIH2CTL1 CSIH2.CTL1.UINT32
#define CSIH2SSE CSIH2.CTL1.BIT.SSE
#define CSIH2HSE CSIH2.CTL1.BIT.HSE
#define CSIH2SIT CSIH2.CTL1.BIT.SIT
#define CSIH2LBM CSIH2.CTL1.BIT.LBM
#define CSIH2CSRI CSIH2.CTL1.BIT.CSRI
#define CSIH2DCS CSIH2.CTL1.BIT.DCS
#define CSIH2JE CSIH2.CTL1.BIT.JE
#define CSIH2EDLE CSIH2.CTL1.BIT.EDLE
#define CSIH2CSL0 CSIH2.CTL1.BIT.CSL0
#define CSIH2CSL1 CSIH2.CTL1.BIT.CSL1
#define CSIH2CSL2 CSIH2.CTL1.BIT.CSL2
#define CSIH2CSL3 CSIH2.CTL1.BIT.CSL3
#define CSIH2CSL4 CSIH2.CTL1.BIT.CSL4
#define CSIH2CSL5 CSIH2.CTL1.BIT.CSL5
#define CSIH2CSL6 CSIH2.CTL1.BIT.CSL6
#define CSIH2CSL7 CSIH2.CTL1.BIT.CSL7
#define CSIH2SLIT CSIH2.CTL1.BIT.SLIT
#define CSIH2CKR CSIH2.CTL1.BIT.CKR
#define CSIH2PHE CSIH2.CTL1.BIT.PHE
#define CSIH2CTL2 CSIH2.CTL2.UINT16
#define CSIH2PRS CSIH2.CTL2.BIT.PRS
#define CSIH2MCTL1 CSIH2.MCTL1.UINT32
#define CSIH2FFS CSIH2.MCTL1.BIT.FFS
#define CSIH2FES CSIH2.MCTL1.BIT.FES
#define CSIH2MCTL2 CSIH2.MCTL2.UINT32
#define CSIH2SOP CSIH2.MCTL2.BIT.SOP
#define CSIH2ND CSIH2.MCTL2.BIT.ND
#define CSIH2BTST CSIH2.MCTL2.BIT.BTST
#define CSIH2TX0W CSIH2.TX0W.UINT32
#define CSIH2TX CSIH2.TX0W.BIT.TX
#define CSIH2CS0 CSIH2.TX0W.BIT.CS0
#define CSIH2CS1 CSIH2.TX0W.BIT.CS1
#define CSIH2CS2 CSIH2.TX0W.BIT.CS2
#define CSIH2CS3 CSIH2.TX0W.BIT.CS3
#define CSIH2CS4 CSIH2.TX0W.BIT.CS4
#define CSIH2CS5 CSIH2.TX0W.BIT.CS5
#define CSIH2CS6 CSIH2.TX0W.BIT.CS6
#define CSIH2CS7 CSIH2.TX0W.BIT.CS7
#define CSIH2EDL CSIH2.TX0W.BIT.EDL
#define CSIH2EOJ CSIH2.TX0W.BIT.EOJ
#define CSIH2CIRE CSIH2.TX0W.BIT.CIRE
#define CSIH2TX0H CSIH2.TX0H.UINT16
#define CSIH2RX0W CSIH2.RX0W.UINT32
#define CSIH2RX CSIH2.RX0W.BIT.RX
#define CSIH2TDCE CSIH2.RX0W.BIT.TDCE
#define CSIH2RPE CSIH2.RX0W.BIT.RPE
#define CSIH2RX0H CSIH2.RX0H.UINT16
#define CSIH2MRWP0 CSIH2.MRWP0.UINT32
#define CSIH2TRWA CSIH2.MRWP0.BIT.TRWA
#define CSIH2RRA CSIH2.MRWP0.BIT.RRA
#define CSIH2MCTL0 CSIH2.MCTL0.UINT16
#define CSIH2TO CSIH2.MCTL0.BIT.TO
#define CSIH2MMS CSIH2.MCTL0.BIT.MMS
#define CSIH2CFG0 CSIH2.CFG0.UINT32
#define CSIH2SP0 CSIH2.CFG0.BIT.SP0
#define CSIH2IN0 CSIH2.CFG0.BIT.IN0
#define CSIH2HD0 CSIH2.CFG0.BIT.HD0
#define CSIH2ID0 CSIH2.CFG0.BIT.ID0
#define CSIH2IDL0 CSIH2.CFG0.BIT.IDL0
#define CSIH2DAP0 CSIH2.CFG0.BIT.DAP0
#define CSIH2CKP0 CSIH2.CFG0.BIT.CKP0
#define CSIH2DIR0 CSIH2.CFG0.BIT.DIR0
#define CSIH2RCB0 CSIH2.CFG0.BIT.RCB0
#define CSIH2DLS0 CSIH2.CFG0.BIT.DLS0
#define CSIH2PS0 CSIH2.CFG0.BIT.PS0
#define CSIH2BRSS0 CSIH2.CFG0.BIT.BRSS0
#define CSIH2CFG1 CSIH2.CFG1.UINT32
#define CSIH2SP1 CSIH2.CFG1.BIT.SP1
#define CSIH2IN1 CSIH2.CFG1.BIT.IN1
#define CSIH2HD1 CSIH2.CFG1.BIT.HD1
#define CSIH2ID1 CSIH2.CFG1.BIT.ID1
#define CSIH2IDL1 CSIH2.CFG1.BIT.IDL1
#define CSIH2DAP1 CSIH2.CFG1.BIT.DAP1
#define CSIH2CKP1 CSIH2.CFG1.BIT.CKP1
#define CSIH2DIR1 CSIH2.CFG1.BIT.DIR1
#define CSIH2RCB1 CSIH2.CFG1.BIT.RCB1
#define CSIH2DLS1 CSIH2.CFG1.BIT.DLS1
#define CSIH2PS1 CSIH2.CFG1.BIT.PS1
#define CSIH2BRSS1 CSIH2.CFG1.BIT.BRSS1
#define CSIH2CFG2 CSIH2.CFG2.UINT32
#define CSIH2SP2 CSIH2.CFG2.BIT.SP2
#define CSIH2IN2 CSIH2.CFG2.BIT.IN2
#define CSIH2HD2 CSIH2.CFG2.BIT.HD2
#define CSIH2ID2 CSIH2.CFG2.BIT.ID2
#define CSIH2IDL2 CSIH2.CFG2.BIT.IDL2
#define CSIH2DAP2 CSIH2.CFG2.BIT.DAP2
#define CSIH2CKP2 CSIH2.CFG2.BIT.CKP2
#define CSIH2DIR2 CSIH2.CFG2.BIT.DIR2
#define CSIH2RCB2 CSIH2.CFG2.BIT.RCB2
#define CSIH2DLS2 CSIH2.CFG2.BIT.DLS2
#define CSIH2PS2 CSIH2.CFG2.BIT.PS2
#define CSIH2BRSS2 CSIH2.CFG2.BIT.BRSS2
#define CSIH2CFG3 CSIH2.CFG3.UINT32
#define CSIH2SP3 CSIH2.CFG3.BIT.SP3
#define CSIH2IN3 CSIH2.CFG3.BIT.IN3
#define CSIH2HD3 CSIH2.CFG3.BIT.HD3
#define CSIH2ID3 CSIH2.CFG3.BIT.ID3
#define CSIH2IDL3 CSIH2.CFG3.BIT.IDL3
#define CSIH2DAP3 CSIH2.CFG3.BIT.DAP3
#define CSIH2CKP3 CSIH2.CFG3.BIT.CKP3
#define CSIH2DIR3 CSIH2.CFG3.BIT.DIR3
#define CSIH2RCB3 CSIH2.CFG3.BIT.RCB3
#define CSIH2DLS3 CSIH2.CFG3.BIT.DLS3
#define CSIH2PS3 CSIH2.CFG3.BIT.PS3
#define CSIH2BRSS3 CSIH2.CFG3.BIT.BRSS3
#define CSIH2CFG4 CSIH2.CFG4.UINT32
#define CSIH2SP4 CSIH2.CFG4.BIT.SP4
#define CSIH2IN4 CSIH2.CFG4.BIT.IN4
#define CSIH2HD4 CSIH2.CFG4.BIT.HD4
#define CSIH2ID4 CSIH2.CFG4.BIT.ID4
#define CSIH2IDL4 CSIH2.CFG4.BIT.IDL4
#define CSIH2DAP4 CSIH2.CFG4.BIT.DAP4
#define CSIH2CKP4 CSIH2.CFG4.BIT.CKP4
#define CSIH2DIR4 CSIH2.CFG4.BIT.DIR4
#define CSIH2RCB4 CSIH2.CFG4.BIT.RCB4
#define CSIH2DLS4 CSIH2.CFG4.BIT.DLS4
#define CSIH2PS4 CSIH2.CFG4.BIT.PS4
#define CSIH2BRSS4 CSIH2.CFG4.BIT.BRSS4
#define CSIH2CFG5 CSIH2.CFG5.UINT32
#define CSIH2SP5 CSIH2.CFG5.BIT.SP5
#define CSIH2IN5 CSIH2.CFG5.BIT.IN5
#define CSIH2HD5 CSIH2.CFG5.BIT.HD5
#define CSIH2ID5 CSIH2.CFG5.BIT.ID5
#define CSIH2IDL5 CSIH2.CFG5.BIT.IDL5
#define CSIH2DAP5 CSIH2.CFG5.BIT.DAP5
#define CSIH2CKP5 CSIH2.CFG5.BIT.CKP5
#define CSIH2DIR5 CSIH2.CFG5.BIT.DIR5
#define CSIH2RCB5 CSIH2.CFG5.BIT.RCB5
#define CSIH2DLS5 CSIH2.CFG5.BIT.DLS5
#define CSIH2PS5 CSIH2.CFG5.BIT.PS5
#define CSIH2BRSS5 CSIH2.CFG5.BIT.BRSS5
#define CSIH2CFG6 CSIH2.CFG6.UINT32
#define CSIH2SP6 CSIH2.CFG6.BIT.SP6
#define CSIH2IN6 CSIH2.CFG6.BIT.IN6
#define CSIH2HD6 CSIH2.CFG6.BIT.HD6
#define CSIH2ID6 CSIH2.CFG6.BIT.ID6
#define CSIH2IDL6 CSIH2.CFG6.BIT.IDL6
#define CSIH2DAP6 CSIH2.CFG6.BIT.DAP6
#define CSIH2CKP6 CSIH2.CFG6.BIT.CKP6
#define CSIH2DIR6 CSIH2.CFG6.BIT.DIR6
#define CSIH2RCB6 CSIH2.CFG6.BIT.RCB6
#define CSIH2DLS6 CSIH2.CFG6.BIT.DLS6
#define CSIH2PS6 CSIH2.CFG6.BIT.PS6
#define CSIH2BRSS6 CSIH2.CFG6.BIT.BRSS6
#define CSIH2CFG7 CSIH2.CFG7.UINT32
#define CSIH2SP7 CSIH2.CFG7.BIT.SP7
#define CSIH2IN7 CSIH2.CFG7.BIT.IN7
#define CSIH2HD7 CSIH2.CFG7.BIT.HD7
#define CSIH2ID7 CSIH2.CFG7.BIT.ID7
#define CSIH2IDL7 CSIH2.CFG7.BIT.IDL7
#define CSIH2DAP7 CSIH2.CFG7.BIT.DAP7
#define CSIH2CKP7 CSIH2.CFG7.BIT.CKP7
#define CSIH2DIR7 CSIH2.CFG7.BIT.DIR7
#define CSIH2RCB7 CSIH2.CFG7.BIT.RCB7
#define CSIH2DLS7 CSIH2.CFG7.BIT.DLS7
#define CSIH2PS7 CSIH2.CFG7.BIT.PS7
#define CSIH2BRSS7 CSIH2.CFG7.BIT.BRSS7
#define CSIH2BRS0 CSIH2.BRS0.UINT16
#define CSIH2BRS CSIH2.BRS0.BIT.BRS
#define CSIH2BRS1 CSIH2.BRS1.UINT16
#define CSIH2BRS2 CSIH2.BRS2.UINT16
#define CSIH2BRS3 CSIH2.BRS3.UINT16
#define CSIH3CTL0 CSIH3.CTL0.UINT8
#define CSIH3MBS CSIH3.CTL0.BIT.MBS
#define CSIH3JOBE CSIH3.CTL0.BIT.JOBE
#define CSIH3RXE CSIH3.CTL0.BIT.RXE
#define CSIH3TXE CSIH3.CTL0.BIT.TXE
#define CSIH3PWR CSIH3.CTL0.BIT.PWR
#define CSIH3STR0 CSIH3.STR0.UINT32
#define CSIH3OVE CSIH3.STR0.BIT.OVE
#define CSIH3PE CSIH3.STR0.BIT.PE
#define CSIH3DCE CSIH3.STR0.BIT.DCE
#define CSIH3EMF CSIH3.STR0.BIT.EMF
#define CSIH3FLF CSIH3.STR0.BIT.FLF
#define CSIH3TSF CSIH3.STR0.BIT.TSF
#define CSIH3HPST CSIH3.STR0.BIT.HPST
#define CSIH3OFE CSIH3.STR0.BIT.OFE
#define CSIH3TMOE CSIH3.STR0.BIT.TMOE
#define CSIH3SPF CSIH3.STR0.BIT.SPF
#define CSIH3SRP CSIH3.STR0.BIT.SRP
#define CSIH3STCR0 CSIH3.STCR0.UINT16
#define CSIH3OVEC CSIH3.STCR0.BIT.OVEC
#define CSIH3PEC CSIH3.STCR0.BIT.PEC
#define CSIH3DCEC CSIH3.STCR0.BIT.DCEC
#define CSIH3PCT CSIH3.STCR0.BIT.PCT
#define CSIH3OFEC CSIH3.STCR0.BIT.OFEC
#define CSIH3TMOEC CSIH3.STCR0.BIT.TMOEC
#define CSIH3CTL1 CSIH3.CTL1.UINT32
#define CSIH3SSE CSIH3.CTL1.BIT.SSE
#define CSIH3HSE CSIH3.CTL1.BIT.HSE
#define CSIH3SIT CSIH3.CTL1.BIT.SIT
#define CSIH3LBM CSIH3.CTL1.BIT.LBM
#define CSIH3CSRI CSIH3.CTL1.BIT.CSRI
#define CSIH3DCS CSIH3.CTL1.BIT.DCS
#define CSIH3JE CSIH3.CTL1.BIT.JE
#define CSIH3EDLE CSIH3.CTL1.BIT.EDLE
#define CSIH3CSL0 CSIH3.CTL1.BIT.CSL0
#define CSIH3CSL1 CSIH3.CTL1.BIT.CSL1
#define CSIH3CSL2 CSIH3.CTL1.BIT.CSL2
#define CSIH3CSL3 CSIH3.CTL1.BIT.CSL3
#define CSIH3CSL4 CSIH3.CTL1.BIT.CSL4
#define CSIH3CSL5 CSIH3.CTL1.BIT.CSL5
#define CSIH3CSL6 CSIH3.CTL1.BIT.CSL6
#define CSIH3CSL7 CSIH3.CTL1.BIT.CSL7
#define CSIH3SLIT CSIH3.CTL1.BIT.SLIT
#define CSIH3CKR CSIH3.CTL1.BIT.CKR
#define CSIH3PHE CSIH3.CTL1.BIT.PHE
#define CSIH3CTL2 CSIH3.CTL2.UINT16
#define CSIH3PRS CSIH3.CTL2.BIT.PRS
#define CSIH3MCTL1 CSIH3.MCTL1.UINT32
#define CSIH3FFS CSIH3.MCTL1.BIT.FFS
#define CSIH3FES CSIH3.MCTL1.BIT.FES
#define CSIH3MCTL2 CSIH3.MCTL2.UINT32
#define CSIH3SOP CSIH3.MCTL2.BIT.SOP
#define CSIH3ND CSIH3.MCTL2.BIT.ND
#define CSIH3BTST CSIH3.MCTL2.BIT.BTST
#define CSIH3TX0W CSIH3.TX0W.UINT32
#define CSIH3TX CSIH3.TX0W.BIT.TX
#define CSIH3CS0 CSIH3.TX0W.BIT.CS0
#define CSIH3CS1 CSIH3.TX0W.BIT.CS1
#define CSIH3CS2 CSIH3.TX0W.BIT.CS2
#define CSIH3CS3 CSIH3.TX0W.BIT.CS3
#define CSIH3CS4 CSIH3.TX0W.BIT.CS4
#define CSIH3CS5 CSIH3.TX0W.BIT.CS5
#define CSIH3CS6 CSIH3.TX0W.BIT.CS6
#define CSIH3CS7 CSIH3.TX0W.BIT.CS7
#define CSIH3EDL CSIH3.TX0W.BIT.EDL
#define CSIH3EOJ CSIH3.TX0W.BIT.EOJ
#define CSIH3CIRE CSIH3.TX0W.BIT.CIRE
#define CSIH3TX0H CSIH3.TX0H.UINT16
#define CSIH3RX0W CSIH3.RX0W.UINT32
#define CSIH3RX CSIH3.RX0W.BIT.RX
#define CSIH3TDCE CSIH3.RX0W.BIT.TDCE
#define CSIH3RPE CSIH3.RX0W.BIT.RPE
#define CSIH3RX0H CSIH3.RX0H.UINT16
#define CSIH3MRWP0 CSIH3.MRWP0.UINT32
#define CSIH3TRWA CSIH3.MRWP0.BIT.TRWA
#define CSIH3RRA CSIH3.MRWP0.BIT.RRA
#define CSIH3MCTL0 CSIH3.MCTL0.UINT16
#define CSIH3TO CSIH3.MCTL0.BIT.TO
#define CSIH3MMS CSIH3.MCTL0.BIT.MMS
#define CSIH3CFG0 CSIH3.CFG0.UINT32
#define CSIH3SP0 CSIH3.CFG0.BIT.SP0
#define CSIH3IN0 CSIH3.CFG0.BIT.IN0
#define CSIH3HD0 CSIH3.CFG0.BIT.HD0
#define CSIH3ID0 CSIH3.CFG0.BIT.ID0
#define CSIH3IDL0 CSIH3.CFG0.BIT.IDL0
#define CSIH3DAP0 CSIH3.CFG0.BIT.DAP0
#define CSIH3CKP0 CSIH3.CFG0.BIT.CKP0
#define CSIH3DIR0 CSIH3.CFG0.BIT.DIR0
#define CSIH3RCB0 CSIH3.CFG0.BIT.RCB0
#define CSIH3DLS0 CSIH3.CFG0.BIT.DLS0
#define CSIH3PS0 CSIH3.CFG0.BIT.PS0
#define CSIH3BRSS0 CSIH3.CFG0.BIT.BRSS0
#define CSIH3CFG1 CSIH3.CFG1.UINT32
#define CSIH3SP1 CSIH3.CFG1.BIT.SP1
#define CSIH3IN1 CSIH3.CFG1.BIT.IN1
#define CSIH3HD1 CSIH3.CFG1.BIT.HD1
#define CSIH3ID1 CSIH3.CFG1.BIT.ID1
#define CSIH3IDL1 CSIH3.CFG1.BIT.IDL1
#define CSIH3DAP1 CSIH3.CFG1.BIT.DAP1
#define CSIH3CKP1 CSIH3.CFG1.BIT.CKP1
#define CSIH3DIR1 CSIH3.CFG1.BIT.DIR1
#define CSIH3RCB1 CSIH3.CFG1.BIT.RCB1
#define CSIH3DLS1 CSIH3.CFG1.BIT.DLS1
#define CSIH3PS1 CSIH3.CFG1.BIT.PS1
#define CSIH3BRSS1 CSIH3.CFG1.BIT.BRSS1
#define CSIH3CFG2 CSIH3.CFG2.UINT32
#define CSIH3SP2 CSIH3.CFG2.BIT.SP2
#define CSIH3IN2 CSIH3.CFG2.BIT.IN2
#define CSIH3HD2 CSIH3.CFG2.BIT.HD2
#define CSIH3ID2 CSIH3.CFG2.BIT.ID2
#define CSIH3IDL2 CSIH3.CFG2.BIT.IDL2
#define CSIH3DAP2 CSIH3.CFG2.BIT.DAP2
#define CSIH3CKP2 CSIH3.CFG2.BIT.CKP2
#define CSIH3DIR2 CSIH3.CFG2.BIT.DIR2
#define CSIH3RCB2 CSIH3.CFG2.BIT.RCB2
#define CSIH3DLS2 CSIH3.CFG2.BIT.DLS2
#define CSIH3PS2 CSIH3.CFG2.BIT.PS2
#define CSIH3BRSS2 CSIH3.CFG2.BIT.BRSS2
#define CSIH3CFG3 CSIH3.CFG3.UINT32
#define CSIH3SP3 CSIH3.CFG3.BIT.SP3
#define CSIH3IN3 CSIH3.CFG3.BIT.IN3
#define CSIH3HD3 CSIH3.CFG3.BIT.HD3
#define CSIH3ID3 CSIH3.CFG3.BIT.ID3
#define CSIH3IDL3 CSIH3.CFG3.BIT.IDL3
#define CSIH3DAP3 CSIH3.CFG3.BIT.DAP3
#define CSIH3CKP3 CSIH3.CFG3.BIT.CKP3
#define CSIH3DIR3 CSIH3.CFG3.BIT.DIR3
#define CSIH3RCB3 CSIH3.CFG3.BIT.RCB3
#define CSIH3DLS3 CSIH3.CFG3.BIT.DLS3
#define CSIH3PS3 CSIH3.CFG3.BIT.PS3
#define CSIH3BRSS3 CSIH3.CFG3.BIT.BRSS3
#define CSIH3CFG4 CSIH3.CFG4.UINT32
#define CSIH3SP4 CSIH3.CFG4.BIT.SP4
#define CSIH3IN4 CSIH3.CFG4.BIT.IN4
#define CSIH3HD4 CSIH3.CFG4.BIT.HD4
#define CSIH3ID4 CSIH3.CFG4.BIT.ID4
#define CSIH3IDL4 CSIH3.CFG4.BIT.IDL4
#define CSIH3DAP4 CSIH3.CFG4.BIT.DAP4
#define CSIH3CKP4 CSIH3.CFG4.BIT.CKP4
#define CSIH3DIR4 CSIH3.CFG4.BIT.DIR4
#define CSIH3RCB4 CSIH3.CFG4.BIT.RCB4
#define CSIH3DLS4 CSIH3.CFG4.BIT.DLS4
#define CSIH3PS4 CSIH3.CFG4.BIT.PS4
#define CSIH3BRSS4 CSIH3.CFG4.BIT.BRSS4
#define CSIH3CFG5 CSIH3.CFG5.UINT32
#define CSIH3SP5 CSIH3.CFG5.BIT.SP5
#define CSIH3IN5 CSIH3.CFG5.BIT.IN5
#define CSIH3HD5 CSIH3.CFG5.BIT.HD5
#define CSIH3ID5 CSIH3.CFG5.BIT.ID5
#define CSIH3IDL5 CSIH3.CFG5.BIT.IDL5
#define CSIH3DAP5 CSIH3.CFG5.BIT.DAP5
#define CSIH3CKP5 CSIH3.CFG5.BIT.CKP5
#define CSIH3DIR5 CSIH3.CFG5.BIT.DIR5
#define CSIH3RCB5 CSIH3.CFG5.BIT.RCB5
#define CSIH3DLS5 CSIH3.CFG5.BIT.DLS5
#define CSIH3PS5 CSIH3.CFG5.BIT.PS5
#define CSIH3BRSS5 CSIH3.CFG5.BIT.BRSS5
#define CSIH3CFG6 CSIH3.CFG6.UINT32
#define CSIH3SP6 CSIH3.CFG6.BIT.SP6
#define CSIH3IN6 CSIH3.CFG6.BIT.IN6
#define CSIH3HD6 CSIH3.CFG6.BIT.HD6
#define CSIH3ID6 CSIH3.CFG6.BIT.ID6
#define CSIH3IDL6 CSIH3.CFG6.BIT.IDL6
#define CSIH3DAP6 CSIH3.CFG6.BIT.DAP6
#define CSIH3CKP6 CSIH3.CFG6.BIT.CKP6
#define CSIH3DIR6 CSIH3.CFG6.BIT.DIR6
#define CSIH3RCB6 CSIH3.CFG6.BIT.RCB6
#define CSIH3DLS6 CSIH3.CFG6.BIT.DLS6
#define CSIH3PS6 CSIH3.CFG6.BIT.PS6
#define CSIH3BRSS6 CSIH3.CFG6.BIT.BRSS6
#define CSIH3CFG7 CSIH3.CFG7.UINT32
#define CSIH3SP7 CSIH3.CFG7.BIT.SP7
#define CSIH3IN7 CSIH3.CFG7.BIT.IN7
#define CSIH3HD7 CSIH3.CFG7.BIT.HD7
#define CSIH3ID7 CSIH3.CFG7.BIT.ID7
#define CSIH3IDL7 CSIH3.CFG7.BIT.IDL7
#define CSIH3DAP7 CSIH3.CFG7.BIT.DAP7
#define CSIH3CKP7 CSIH3.CFG7.BIT.CKP7
#define CSIH3DIR7 CSIH3.CFG7.BIT.DIR7
#define CSIH3RCB7 CSIH3.CFG7.BIT.RCB7
#define CSIH3DLS7 CSIH3.CFG7.BIT.DLS7
#define CSIH3PS7 CSIH3.CFG7.BIT.PS7
#define CSIH3BRSS7 CSIH3.CFG7.BIT.BRSS7
#define CSIH3BRS0 CSIH3.BRS0.UINT16
#define CSIH3BRS CSIH3.BRS0.BIT.BRS
#define CSIH3BRS1 CSIH3.BRS1.UINT16
#define CSIH3BRS2 CSIH3.BRS2.UINT16
#define CSIH3BRS3 CSIH3.BRS3.UINT16
#define CSIHSELCSIHDMA CSIH.SELCSIHDMA.UINT8
#define CSIHSELCSI0DC CSIH.SELCSIHDMA.BIT.SELCSI0DC
#define CSIHSELCSI0DR CSIH.SELCSIHDMA.BIT.SELCSI0DR
#define CSIHSELCSI1DC CSIH.SELCSIHDMA.BIT.SELCSI1DC
#define CSIHSELCSI1DR CSIH.SELCSIHDMA.BIT.SELCSI1DR

#endif
