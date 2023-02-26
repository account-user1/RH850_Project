/**********************************************************************************************************************
* Module File Name  : csig_regs.h
* Module Description: Clocked Serial Interface G Peripheral Registers
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
* 06/09/15  2        KMC       Removed typedefs that needed to be moved to reg_common -- common to csig and csih
* 09/15/15  3        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef CSIG_REGS_H
#define CSIG_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  MBS:1;                                          /* MBS              */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  RXE:1;                                          /* RXE              */
    uint8  TXE:1;                                          /* TXE              */
    uint8  PWR:1;                                          /* PWR              */
} __type566;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 OVE:1;                                    /* OVE              */
    const uint32 PE:1;                                     /* PE               */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 DCE:1;                                    /* DCE              */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 TSF:1;                                    /* TSF              */
    uint32 :24;                                            /* Reserved Bits    */
} __type567;
typedef struct 
{                                                          /* Bit Access       */
    uint16 OVEC:1;                                         /* OVEC             */
    uint16 PEC:1;                                          /* PEC              */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 DCEC:1;                                         /* DCEC             */
    uint16 :12;                                            /* Reserved Bits    */
} __type568;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 HSE:1;                                          /* HSE              */
    uint32 SIT:1;                                          /* SIT              */
    uint32 LBM:1;                                          /* LBM              */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 DCS:1;                                          /* DCS              */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 EDLE:1;                                         /* EDLE             */
    uint32 :8;                                             /* Reserved Bits    */
    uint32 SLIT:1;                                         /* SLIT             */
    uint32 CKR:1;                                          /* CKR              */
    uint32 :14;                                            /* Reserved Bits    */
} __type569;
typedef struct 
{                                                          /* Bit Access       */
    uint16 BRS:12;                                         /* BRS[11:0]        */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 PRS:3;                                          /* PRS[15:13]       */
} __type570;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SCE:1;                                          /* SCE              */
    uint8  :7;                                             /* Reserved Bits    */
} __type571;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TX:16;                                          /* TX[15:0]         */
    uint32 :13;                                            /* Reserved Bits    */
    uint32 EDL:1;                                          /* EDL              */
    uint32 :2;                                             /* Reserved Bits    */
} __type572;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :16;                                            /* Reserved Bits    */
    uint32 DAP:1;                                          /* DAP              */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 DIR:1;                                          /* DIR              */
    uint32 :5;                                             /* Reserved Bits    */
    uint32 DLS:4;                                          /* DLS[27:24]       */
    uint32 PS:2;                                           /* PS[29:28]        */
    uint32 :2;                                             /* Reserved Bits    */
} __type573;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type566 BIT;                                         /* Bit Access       */
} __type1845;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type567 BIT;                                   /* Bit Access       */
} __type1846;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type568 BIT;                                         /* Bit Access       */
} __type1847;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type569 BIT;                                         /* Bit Access       */
} __type1848;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type570 BIT;                                         /* Bit Access       */
} __type1849;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type571 BIT;                                         /* Bit Access       */
} __type1850;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type572 BIT;                                         /* Bit Access       */
} __type1851;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type573 BIT;                                         /* Bit Access       */
} __type1852;

typedef struct 
{                                                          /* Module           */
    __type1845 CTL0;                                       /* CTL0             */
    uint8  dummy312[3];                                    /* Reserved         */
    const __type1846 STR0;                                 /* STR0             */
    __type1847 STCR0;                                      /* STCR0            */
    uint8  dummy313[6];                                    /* Reserved         */
    __type1848 CTL1;                                       /* CTL1             */
    __type1849 CTL2;                                       /* CTL2             */
    uint8  dummy314[4074];                                 /* Reserved         */
    __type1850 BCTL0;                                      /* BCTL0            */
    uint8  dummy315[3];                                    /* Reserved         */
    __type1851 TX0W;                                       /* TX0W             */
    __type1831 TX0H;                                       /* TX0H             */
    uint8  dummy316[2];                                    /* Reserved         */
    const __type1833 RX0;                                  /* RX0              */
    uint8  dummy317[2];                                    /* Reserved         */
    __type1852 CFG0;                                       /* CFG0             */
} __type2595;

__IOREG(CSIG0, 0xFFD8A000, __READ_WRITE, __type2595);                 /* CSIG0 */

#define CSIG0CTL0 CSIG0.CTL0.UINT8
#define CSIG0MBS CSIG0.CTL0.BIT.MBS
#define CSIG0RXE CSIG0.CTL0.BIT.RXE
#define CSIG0TXE CSIG0.CTL0.BIT.TXE
#define CSIG0PWR CSIG0.CTL0.BIT.PWR
#define CSIG0STR0 CSIG0.STR0.UINT32
#define CSIG0OVE CSIG0.STR0.BIT.OVE
#define CSIG0PE CSIG0.STR0.BIT.PE
#define CSIG0DCE CSIG0.STR0.BIT.DCE
#define CSIG0TSF CSIG0.STR0.BIT.TSF
#define CSIG0STCR0 CSIG0.STCR0.UINT16
#define CSIG0OVEC CSIG0.STCR0.BIT.OVEC
#define CSIG0PEC CSIG0.STCR0.BIT.PEC
#define CSIG0DCEC CSIG0.STCR0.BIT.DCEC
#define CSIG0CTL1 CSIG0.CTL1.UINT32
#define CSIG0HSE CSIG0.CTL1.BIT.HSE
#define CSIG0SIT CSIG0.CTL1.BIT.SIT
#define CSIG0LBM CSIG0.CTL1.BIT.LBM
#define CSIG0DCS CSIG0.CTL1.BIT.DCS
#define CSIG0EDLE CSIG0.CTL1.BIT.EDLE
#define CSIG0SLIT CSIG0.CTL1.BIT.SLIT
#define CSIG0CKR CSIG0.CTL1.BIT.CKR
#define CSIG0CTL2 CSIG0.CTL2.UINT16
#define CSIG0BRS CSIG0.CTL2.BIT.BRS
#define CSIG0PRS CSIG0.CTL2.BIT.PRS
#define CSIG0BCTL0 CSIG0.BCTL0.UINT8
#define CSIG0SCE CSIG0.BCTL0.BIT.SCE
#define CSIG0TX0W CSIG0.TX0W.UINT32
#define CSIG0TX CSIG0.TX0W.BIT.TX
#define CSIG0EDL CSIG0.TX0W.BIT.EDL
#define CSIG0TX0H CSIG0.TX0H.UINT16
#define CSIG0RX0 CSIG0.RX0.UINT16
#define CSIG0RX CSIG0.RX0.BIT.RX
#define CSIG0CFG0 CSIG0.CFG0.UINT32
#define CSIG0DAP CSIG0.CFG0.BIT.DAP
#define CSIG0DIR CSIG0.CFG0.BIT.DIR
#define CSIG0DLS CSIG0.CFG0.BIT.DLS
#define CSIG0PS CSIG0.CFG0.BIT.PS

#endif
