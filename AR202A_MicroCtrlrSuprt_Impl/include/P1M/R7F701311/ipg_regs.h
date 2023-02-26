/**********************************************************************************************************************
* Module File Name  : ipg_regs.h
* Module Description: Internal Peripheral Guard Peripheral Registers
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

#ifndef IPG_REGS_H
#define IPG_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint16 VD:1;                                           /* VD               */
    uint16 RD:1;                                           /* RD               */
    uint16 WR:1;                                           /* WR               */
    uint16 EX:1;                                           /* EX               */
    uint16 DS:4;                                           /* DS[7:4]          */
    uint16 :8;                                             /* Reserved Bits    */
} __type943;
typedef struct 
{                                                          /* Bit Access       */
    uint32 EADR:32;                                        /* EADR[31:0]       */
} __type944;
typedef struct 
{                                                          /* Bit Access       */
    uint8  E:1;                                            /* E                */
    uint8  IRE:1;                                          /* IRE              */
    uint8  :6;                                             /* Reserved Bits    */
} __type945;
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
} __type946;
typedef struct 
{                                                          /* Bit Access       */
    uint8  R0:1;                                           /* R0               */
    uint8  W0:1;                                           /* W0               */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  R1:1;                                           /* R1               */
    uint8  W1:1;                                           /* W1               */
    uint8  :2;                                             /* Reserved Bits    */
} __type947;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  R1:1;                                           /* R1               */
    uint8  W1:1;                                           /* W1               */
    uint8  :2;                                             /* Reserved Bits    */
} __type948;
typedef struct 
{                                                          /* Bit Access       */
    uint8  R0:1;                                           /* R0               */
    uint8  W0:1;                                           /* W0               */
    uint8  :6;                                             /* Reserved Bits    */
} __type949;

typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type943 BIT;                                         /* Bit Access       */
} __type2222;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type944 BIT;                                         /* Bit Access       */
} __type2223;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type945 BIT;                                         /* Bit Access       */
} __type2224;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type946 BIT;                                         /* Bit Access       */
} __type2225;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type947 BIT;                                         /* Bit Access       */
} __type2226;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type948 BIT;                                         /* Bit Access       */
} __type2227;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type949 BIT;                                         /* Bit Access       */
} __type2228;

typedef struct 
{                                                          /* Module           */
    uint8  dummy817[2];                                    /* Reserved         */
    __type2222 ECRUM;                                      /* ECRUM            */
    uint8  dummy818[4];                                    /* Reserved         */
    __type2223 ADRUM;                                      /* ADRUM            */
    uint8  dummy819[1];                                    /* Reserved         */
    __type2224 ENUM;                                       /* ENUM             */
    uint8  dummy820[18];                                   /* Reserved         */
    __type2225 PMTUM0;                                     /* PMTUM0           */
    uint8  dummy821[1];                                    /* Reserved         */
    __type2226 PMTUM2;                                     /* PMTUM2           */
    __type2227 PMTUM3;                                     /* PMTUM3           */
    __type2228 PMTUM4;                                     /* PMTUM4           */
} __type2619;

__IOREG(IPG, 0xFFFEE000, __READ_WRITE, __type2619);                   /* IPG */

#define IPGECRUM IPG.ECRUM.UINT16
#define IPGVD IPG.ECRUM.BIT.VD
#define IPGRD IPG.ECRUM.BIT.RD
#define IPGWR IPG.ECRUM.BIT.WR
#define IPGEX IPG.ECRUM.BIT.EX
#define IPGDS IPG.ECRUM.BIT.DS
#define IPGADRUM IPG.ADRUM.UINT32
#define IPGEADR IPG.ADRUM.BIT.EADR
#define IPGENUM IPG.ENUM.UINT8
#define IPGE IPG.ENUM.BIT.E
#define IPGIRE IPG.ENUM.BIT.IRE
#define IPGPMTUM0 IPG.PMTUM0.UINT8
#define IPGR0 IPG.PMTUM0.BIT.R0
#define IPGW0 IPG.PMTUM0.BIT.W0
#define IPGX0 IPG.PMTUM0.BIT.X0
#define IPGR1 IPG.PMTUM0.BIT.R1
#define IPGW1 IPG.PMTUM0.BIT.W1
#define IPGX1 IPG.PMTUM0.BIT.X1
#define IPGPMTUM2 IPG.PMTUM2.UINT8
#define IPGPMTUM3 IPG.PMTUM3.UINT8
#define IPGPMTUM4 IPG.PMTUM4.UINT8

#endif
