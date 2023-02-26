/**********************************************************************************************************************
* Module File Name  : flash_regs.h
* Module Description: Flash Peripheral Registers
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
* 09/11/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef FLASH_REGS_H
#define FLASH_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint32 PUP:1;                                          /* PUP              */
    uint32 :31;                                            /* Reserved Bits    */
} __type96;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PC:8;                                           /* PC[7:0]          */
    uint32 :24;                                            /* Reserved Bits    */
} __type97;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 PRERR:1;                                  /* PRERR            */
    uint32 :31;                                            /* Reserved Bits    */
} __type98;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  IDST:1;                                   /* IDST             */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type99;
typedef struct 
{                                                          /* Bit Access       */
    uint8  FRDCYCLD:4;                                     /* FRDCYCLD[3:0]    */
    uint8  :4;                                             /* Reserved Bits    */
} __type100;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :4;                                             /* Reserved Bits    */
    const uint32 OPAUDR0:1;                                /* OPAUDR0          */
    uint32 :9;                                             /* Reserved Bits    */
    const uint32 OPEVTI:1;                                 /* OPEVTI           */
    const uint32 OPEVTO:1;                                 /* OPEVTO           */
    uint32 :4;                                             /* Reserved Bits    */
    const uint32 OPCM2MDS:1;                               /* OPCM2MDS         */
    const uint32 OPWDMDS:1;                                /* OPWDMDS          */
    const uint32 OPWDVAC:1;                                /* OPWDVAC          */
    uint32 :2;                                             /* Reserved Bits    */
    const uint32 OPWDOVF:3;                                /* OPWDOVF[27:25]   */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 OPWDRUN:1;                                /* OPWDRUN          */
} __type101;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :29;                                            /* Reserved Bits    */
    const uint32 OPJTAG:2;                                 /* OPJTAG[30:29]    */
    uint32 :1;                                             /* Reserved Bits    */
} __type102;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 TSNREFDL:12;                              /* TSNREFDL[11:0]   */
    uint32 :4;                                             /* Reserved Bits    */
    const uint32 TSNREFDH:12;                              /* TSNREFDH[27:16]  */
    uint32 :4;                                             /* Reserved Bits    */
} __type103;
typedef struct 
{                                                          /* Bit Access       */
    uint32 FHVE3CNT:1;                                     /* FHVE3CNT         */
    uint32 :31;                                            /* Reserved Bits    */
} __type104;
typedef struct 
{                                                          /* Bit Access       */
    uint32 FHVE15CNT:1;                                    /* FHVE15CNT        */
    uint32 :31;                                            /* Reserved Bits    */
} __type105;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type96 BIT;                                          /* Bit Access       */
} __type1375;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type97 BIT;                                          /* Bit Access       */
} __type1376;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type98 BIT;                                    /* Bit Access       */
} __type1377;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type99 BIT;                                    /* Bit Access       */
} __type1378;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type100 BIT;                                         /* Bit Access       */
} __type1379;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type101 BIT;                                   /* Bit Access       */
} __type1380;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type102 BIT;                                   /* Bit Access       */
} __type1381;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type103 BIT;                                   /* Bit Access       */
} __type1382;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type104 BIT;                                         /* Bit Access       */
} __type1383;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type105 BIT;                                         /* Bit Access       */
} __type1384;

typedef struct 
{                                                          /* Module           */
    __type1375 CNT;                                        /* CNT              */
    __type1376 PCMD;                                       /* PCMD             */
    const __type1377 PS;                                   /* PS               */
} __type2560;
typedef struct 
{                                                          /* Module           */
    uint32 SELFID0;                                        /* SELFID0          */
    uint32 SELFID1;                                        /* SELFID1          */
    uint32 SELFID2;                                        /* SELFID2          */
    uint32 SELFID3;                                        /* SELFID3          */
    const __type1378 SELFIDST;                             /* SELFIDST         */
    uint8  dummy16[2430972];                               /* Reserved         */
    __type1379 EEPRDCYCL;                                  /* EEPRDCYCL        */
    uint8  dummy17[485407];                                /* Reserved         */
    const __type1380 OPBT0;                                /* OPBT0            */
    uint8  dummy18[4];                                     /* Reserved         */
    const __type1381 OPBT2;                                /* OPBT2            */
    uint8  dummy19[148];                                   /* Reserved         */
    const uint32 PRDNAME1;                                 /* PRDNAME1         */
    const uint32 PRDNAME2;                                 /* PRDNAME2         */
    const uint32 PRDNAME3;                                 /* PRDNAME3         */
    const uint32 PRDNAME4;                                 /* PRDNAME4         */
    uint8  dummy20[188];                                   /* Reserved         */
    const __type1382 TSNREFD;                              /* TSNREFD          */
    uint8  dummy21[2826864];                               /* Reserved         */
    __type1383 FHVE3;                                      /* FHVE3            */
    uint8  dummy22[32796];                                 /* Reserved         */
    __type1384 FHVE15;                                     /* FHVE15           */
} __type2561;

__IOREG(FLMD, 0xFFA00000, __READ_WRITE, __type2560);                  /* FLMD */
__IOREG(FLASH, 0xFFA08000, __READ_WRITE, __type2561);                 /* FLASH */

#define FLMDCNT FLMD.CNT.UINT32
#define FLMDPUP FLMD.CNT.BIT.PUP
#define FLMDPCMD FLMD.PCMD.UINT32
#define FLMDPC FLMD.PCMD.BIT.PC
#define FLMDPS FLMD.PS.UINT32
#define FLMDPRERR FLMD.PS.BIT.PRERR
#define FLASHSELFID0 FLASH.SELFID0
#define FLASHSELFID1 FLASH.SELFID1
#define FLASHSELFID2 FLASH.SELFID2
#define FLASHSELFID3 FLASH.SELFID3
#define FLASHSELFIDST FLASH.SELFIDST.UINT32
#define FLASHSELFIDSTL FLASH.SELFIDST.UINT16[L]
#define FLASHSELFIDSTLL FLASH.SELFIDST.UINT8[LL]
#define FLASHSELFIDSTLH FLASH.SELFIDST.UINT8[LH]
#define FLASHSELFIDSTH FLASH.SELFIDST.UINT16[H]
#define FLASHSELFIDSTHL FLASH.SELFIDST.UINT8[HL]
#define FLASHSELFIDSTHH FLASH.SELFIDST.UINT8[HH]
#define FLASHIDST FLASH.SELFIDST.BIT.IDST
#define FLASHEEPRDCYCL FLASH.EEPRDCYCL.UINT8
#define FLASHFRDCYCLD FLASH.EEPRDCYCL.BIT.FRDCYCLD
#define FLASHOPBT0 FLASH.OPBT0.UINT32
#define FLASHOPAUDR0 FLASH.OPBT0.BIT.OPAUDR0
#define FLASHOPEVTI FLASH.OPBT0.BIT.OPEVTI
#define FLASHOPEVTO FLASH.OPBT0.BIT.OPEVTO
#define FLASHOPCM2MDS FLASH.OPBT0.BIT.OPCM2MDS
#define FLASHOPWDMDS FLASH.OPBT0.BIT.OPWDMDS
#define FLASHOPWDVAC FLASH.OPBT0.BIT.OPWDVAC
#define FLASHOPWDOVF FLASH.OPBT0.BIT.OPWDOVF
#define FLASHOPWDRUN FLASH.OPBT0.BIT.OPWDRUN
#define FLASHOPBT2 FLASH.OPBT2.UINT32
#define FLASHOPJTAG FLASH.OPBT2.BIT.OPJTAG
#define FLASHPRDNAME1 FLASH.PRDNAME1
#define FLASHPRDNAME2 FLASH.PRDNAME2
#define FLASHPRDNAME3 FLASH.PRDNAME3
#define FLASHPRDNAME4 FLASH.PRDNAME4
#define FLASHTSNREFD FLASH.TSNREFD.UINT32
#define FLASHTSNREFDL FLASH.TSNREFD.BIT.TSNREFDL
#define FLASHTSNREFDH FLASH.TSNREFD.BIT.TSNREFDH
#define FLASHFHVE3 FLASH.FHVE3.UINT32
#define FLASHFHVE3CNT FLASH.FHVE3.BIT.FHVE3CNT
#define FLASHFHVE15 FLASH.FHVE15.UINT32
#define FLASHFHVE15CNT FLASH.FHVE15.BIT.FHVE15CNT


#endif
