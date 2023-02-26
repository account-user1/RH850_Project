/**********************************************************************************************************************
* Module File Name  : ecc_regs.h
* Module Description: ECC Modules Peripheral Registers
* Project           : CBD
* Author            : Lucas Wendling
***********************************************************************************************************************
* Version Control:
* %version:          2 %
* %derived_by:       mzjphh %
*----------------------------------------------------------------------------
* Date      Rev      Author         Change Description
* -------   -------  --------  ----------------------------------------------
* 12/16/14  1        LWW       Initial version derived from dr7f701311.dvf.h v1 in tools directory
* 09/14/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef ECC_REGS_H
#define ECC_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint16 ECCDIS:1;                                       /* ECCDIS           */
    uint16 :13;                                            /* Reserved Bits    */
    uint16 PROT:2;                                         /* PROT[15:14]      */
    uint16 :16;                                            /* Reserved Bits    */
} __type346;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SEDIE:1;                                        /* SEDIE            */
    uint8  DEDIE:1;                                        /* DEDIE            */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type347;
typedef struct 
{                                                          /* Bit Access       */
    uint8  STCLR0:1;                                       /* STCLR0           */
    uint8  STCLR1:1;                                       /* STCLR1           */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type348;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  ERROVF0:1;                                /* ERROVF0          */
    const uint8  ERROVF1:1;                                /* ERROVF1          */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type349;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  SEDF0:1;                                  /* SEDF0            */
    const uint8  DEDF0:1;                                  /* DEDF0            */
    uint8  :6;                                             /* Reserved Bits    */
    const uint8  SEDF1:1;                                  /* SEDF1            */
    const uint8  DEDF1:1;                                  /* DEDF1            */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type350;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 EADR:9;                                   /* EADR[8:0]        */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type351;
typedef struct 
{                                                          /* Bit Access       */
    uint8  STCLR0:1;                                       /* STCLR0           */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type352;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  ERROVF0:1;                                /* ERROVF0          */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type353;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  SEDF0:1;                                  /* SEDF0            */
    const uint8  DEDF0:1;                                  /* DEDF0            */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type354;
typedef struct 
{                                                          /* Bit Access       */
    uint16 APARIDIS:1;                                     /* APARIDIS         */
    uint16 APTESTA:1;                                      /* APTESTA          */
    uint16 :12;                                            /* Reserved Bits    */
    uint16 PROT:2;                                         /* PROT[15:14]      */
    uint16 :16;                                            /* Reserved Bits    */
} __type355;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ECCDIS:1;                                       /* ECCDIS           */
    uint16 SECDIS:1;                                       /* SECDIS           */
    uint16 :12;                                            /* Reserved Bits    */
    uint16 PROT:2;                                         /* PROT[15:14]      */
    uint16 :16;                                            /* Reserved Bits    */
} __type356;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SEDIE:1;                                        /* SEDIE            */
    uint8  DEDIE:1;                                        /* DEDIE            */
    uint8  APEIE:1;                                        /* APEIE            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type357;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  SEDF0:1;                                  /* SEDF0            */
    const uint8  DEDF0:1;                                  /* DEDF0            */
    const uint8  APEF0:1;                                  /* APEF0            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type358;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :4;                                             /* Reserved Bits    */
    const uint32 EADR:21;                                  /* EADR[24:4]       */
    uint8  :7;                                             /* Reserved Bits    */
} __type359;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ECCTST:1;                                       /* ECCTST           */
    uint16 :13;                                            /* Reserved Bits    */
    uint16 PROT:2;                                         /* PROT[15:14]      */
    uint16 :16;                                            /* Reserved Bits    */
} __type360;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ECCDIS:1;                                       /* ECCDIS           */
    uint16 SEDDIS:1;                                       /* SEDDIS           */
    uint16 :12;                                            /* Reserved Bits    */
    uint16 PROT:2;                                         /* PROT[15:14]      */
} __type361;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  SEDF:1;                                   /* SEDF             */
    const uint8  DEDF:1;                                   /* DEDF             */
    uint8  :6;                                             /* Reserved Bits    */
} __type362;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ERRCLR:1;                                       /* ERRCLR           */
    uint8  :7;                                             /* Reserved Bits    */
} __type363;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  ERROVF:1;                                 /* ERROVF           */
    uint8  :7;                                             /* Reserved Bits    */
} __type364;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ERROVFCLR:1;                                    /* ERROVFCLR        */
    uint8  :7;                                             /* Reserved Bits    */
} __type365;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SEDIE:1;                                        /* SEDIE            */
    uint8  DEDIE:1;                                        /* DEDIE            */
    uint8  :6;                                             /* Reserved Bits    */
} __type366;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :2;                                             /* Reserved Bits    */
    const uint32 DFEADR:19;                                /* DFEADR[20:2]     */
    uint32 :11;                                            /* Reserved Bits    */
} __type367;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ECCTST:1;                                       /* ECCTST           */
    uint16 :13;                                            /* Reserved Bits    */
    uint16 PROT:2;                                         /* PROT[15:14]      */
} __type368;
typedef struct 
{                                                          /* Bit Access       */
    uint16 DATSEL:1;                                       /* DATSEL           */
    uint16 ECCTST:1;                                       /* ECCTST           */
    uint16 :12;                                            /* Reserved Bits    */
    uint16 PROT:2;                                         /* PROT[15:14]      */
    uint16 :16;                                            /* Reserved Bits    */
} __type369;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 LRDATBF0:7;                               /* LRDATBF0[6:0]    */
    uint32 :9;                                             /* Reserved Bits    */
    const uint32 LRDATBF1:7;                               /* LRDATBF1[22:16]  */
    uint32 :9;                                             /* Reserved Bits    */
} __type370;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 LRDATBF2:7;                               /* LRDATBF2[6:0]    */
    uint32 :9;                                             /* Reserved Bits    */
    const uint32 LRDATBF3:7;                               /* LRDATBF3[22:16]  */
    uint32 :9;                                             /* Reserved Bits    */
} __type371;
typedef struct 
{                                                          /* Bit Access       */
    uint8  STCLR0:1;                                       /* STCLR0           */
    uint8  STCLR1:1;                                       /* STCLR1           */
    uint8  STCLR2:1;                                       /* STCLR2           */
    uint8  STCLR3:1;                                       /* STCLR3           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type372;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  ERROVF0:1;                                /* ERROVF0          */
    const uint8  ERROVF1:1;                                /* ERROVF1          */
    const uint8  ERROVF2:1;                                /* ERROVF2          */
    const uint8  ERROVF3:1;                                /* ERROVF3          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type373;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  SEDF0:1;                                  /* SEDF0            */
    const uint8  DEDF0:1;                                  /* DEDF0            */
    uint8  :6;                                             /* Reserved Bits    */
    const uint8  SEDF1:1;                                  /* SEDF1            */
    const uint8  DEDF1:1;                                  /* DEDF1            */
    uint8  :6;                                             /* Reserved Bits    */
    const uint8  SEDF2:1;                                  /* SEDF2            */
    const uint8  DEDF2:1;                                  /* DEDF2            */
    uint8  :6;                                             /* Reserved Bits    */
    const uint8  SEDF3:1;                                  /* SEDF3            */
    const uint8  DEDF3:1;                                  /* DEDF3            */
    uint8  :6;                                             /* Reserved Bits    */
} __type374;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 EADR:15;                                  /* EADR[14:0]       */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type375;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  ECEMF:1;                                  /* ECEMF            */
    const uint8  ECER1F:1;                                 /* ECER1F           */
    const uint8  ECER2F:1;                                 /* ECER2F           */
    uint8  EC1EDIC:1;                                      /* EC1EDIC          */
    uint8  EC2EDIC:1;                                      /* EC2EDIC          */
    uint8  EC1ECP:1;                                       /* EC1ECP           */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  ECTHM:1;                                        /* ECTHM            */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  ECER1C:1;                                       /* ECER1C           */
    uint8  ECER2C:1;                                       /* ECER2C           */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  EMCA:2;                                         /* EMCA[15:14]      */
    const uint8  ECSEDF0:1;                                /* ECSEDF0          */
    const uint8  ECDEDF0:1;                                /* ECDEDF0          */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type380;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ECREIS:1;                                       /* ECREIS           */
    uint8  ECDCS:1;                                        /* ECDCS            */
    uint8  ECENS:1;                                        /* ECENS            */
    uint8  ECREOS:1;                                       /* ECREOS           */
    uint8  ECTRRS:1;                                       /* ECTRRS           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  ECTMCE:1;                                       /* ECTMCE           */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  ETMA:2;                                         /* ETMA[15:14]      */
} __type381;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ERDB:7;                                         /* ERDB[6:0]        */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  ECRD:7;                                   /* ECRD[14:8]       */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  HORD:7;                                   /* HORD[22:16]      */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  SYND:7;                                   /* SYND[30:24]      */
    uint8  :1;                                             /* Reserved Bits    */
} __type382;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ECEDB:32;                                       /* ECEDB[31:0]      */
} __type383;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 ECEAD:32;                                 /* ECEAD[31:0]      */
} __type384;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    __type346 BIT;                                         /* Bit Access       */
} __type1625;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type347 BIT;                                         /* Bit Access       */
} __type1626;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type348 BIT;                                         /* Bit Access       */
} __type1627;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type349 BIT;                                   /* Bit Access       */
} __type1628;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type350 BIT;                                   /* Bit Access       */
} __type1629;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type351 BIT;                                   /* Bit Access       */
} __type1630;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type352 BIT;                                         /* Bit Access       */
} __type1631;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type353 BIT;                                   /* Bit Access       */
} __type1632;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type354 BIT;                                   /* Bit Access       */
} __type1633;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    __type355 BIT;                                         /* Bit Access       */
} __type1634;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    __type356 BIT;                                         /* Bit Access       */
} __type1635;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type357 BIT;                                         /* Bit Access       */
} __type1636;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type358 BIT;                                   /* Bit Access       */
} __type1637;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type359 BIT;                                   /* Bit Access       */
} __type1638;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    __type360 BIT;                                         /* Bit Access       */
} __type1639;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type361 BIT;                                         /* Bit Access       */
} __type1640;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type362 BIT;                                   /* Bit Access       */
} __type1641;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type363 BIT;                                         /* Bit Access       */
} __type1642;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type364 BIT;                                   /* Bit Access       */
} __type1643;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type365 BIT;                                         /* Bit Access       */
} __type1644;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type366 BIT;                                         /* Bit Access       */
} __type1645;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type367 BIT;                                   /* Bit Access       */
} __type1646;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type368 BIT;                                         /* Bit Access       */
} __type1647;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    __type369 BIT;                                         /* Bit Access       */
} __type1648;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type370 BIT;                                   /* Bit Access       */
} __type1649;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type371 BIT;                                   /* Bit Access       */
} __type1650;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type372 BIT;                                         /* Bit Access       */
} __type1651;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type373 BIT;                                   /* Bit Access       */
} __type1652;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type374 BIT;                                   /* Bit Access       */
} __type1653;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type375 BIT;                                   /* Bit Access       */
} __type1654;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type380 BIT;                                         /* Bit Access       */
} __type1659;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type381 BIT;                                         /* Bit Access       */
} __type1660;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } ERDB;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } ECRD;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } HORD;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } SYND;
    } REGS8;
    __type382 BIT;                                         /* Bit Access       */
} __type1661;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type383 BIT;                                         /* Bit Access       */
} __type1662;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type384 BIT;                                   /* Bit Access       */
} __type1663;

typedef struct 
{                                                          /* Module           */
    __type1625 IDECCCTL_PE1;                               /* IDECCCTL_PE1     */
    __type1626 IDERRINT_PE1;                               /* IDERRINT_PE1     */
    __type1627 IDSTCLR_PE1;                                /* IDSTCLR_PE1      */
    const __type1628 IDOVFSTR_PE1;                         /* IDOVFSTR_PE1     */
    const __type1629 ID1STERSTR_PE1;                       /* ID1STERSTR_PE1   */
    uint8  dummy212[60];                                   /* Reserved         */
    const __type1630 ID1STEADR0_PE1;                       /* ID1STEADR0_PE1   */
    const __type1630 ID1STEADR1_PE1;                       /* ID1STEADR1_PE1   */
    uint8  dummy213[4008];                                 /* Reserved         */
    __type1625 ITECCCTL_PE1;                               /* ITECCCTL_PE1     */
    __type1626 ITERRINT_PE1;                               /* ITERRINT_PE1     */
    __type1631 ITSTCLR_PE1;                                /* ITSTCLR_PE1      */
    const __type1632 ITOVFSTR_PE1;                         /* ITOVFSTR_PE1     */
    const __type1633 IT1STERSTR_PE1;                       /* IT1STERSTR_PE1   */
    uint8  dummy214[60];                                   /* Reserved         */
    const __type1630 IT1STEADR0_PE1;                       /* IT1STEADR0_PE1   */
} __type2580;
typedef struct 
{                                                          /* Module           */
    __type1634 CFAPCTL;                                    /* CFAPCTL          */
    uint8  dummy215[508];                                  /* Reserved         */
    __type1635 CFECCCTL_VCI;                               /* CFECCCTL_VCI     */
    __type1636 CFERRINT_VCI;                               /* CFERRINT_VCI     */
    __type1631 CFSTCLR_VCI;                                /* CFSTCLR_VCI      */
    const __type1632 CFOVFSTR_VCI;                         /* CFOVFSTR_VCI     */
    const __type1637 CF1STERSTR_VCI;                       /* CF1STERSTR_VCI   */
    uint8  dummy216[60];                                   /* Reserved         */
    const __type1638 CF1STEADR0_VCI;                       /* CF1STEADR0_VCI   */
    uint8  dummy217[252];                                  /* Reserved         */
    __type1639 CFSTSTCTL_VCI;                              /* CFSTSTCTL_VCI    */
    uint8  dummy218[172];                                  /* Reserved         */
    __type1635 CFECCCTL_PE1;                               /* CFECCCTL_PE1     */
    __type1636 CFERRINT_PE1;                               /* CFERRINT_PE1     */
    __type1631 CFSTCLR_PE1;                                /* CFSTCLR_PE1      */
    const __type1632 CFOVFSTR_PE1;                         /* CFOVFSTR_PE1     */
    const __type1637 CF1STERSTR_PE1;                       /* CF1STERSTR_PE1   */
    uint8  dummy219[60];                                   /* Reserved         */
    const __type1638 CF1STEADR0_PE1;                       /* CF1STEADR0_PE1   */
    uint8  dummy220[252];                                  /* Reserved         */
    __type1639 CFSTSTCTL_PE1;                              /* CFSTSTCTL_PE1    */
} __type2581;
typedef struct 
{                                                          /* Module           */
    __type1640 DFECCCTL;                                   /* DFECCCTL         */
    uint8  dummy221[2];                                    /* Reserved         */
    const __type1641 DFERSTR;                              /* DFERSTR          */
    uint8  dummy222[3];                                    /* Reserved         */
    __type1642 DFERSTC;                                    /* DFERSTC          */
    uint8  dummy223[3];                                    /* Reserved         */
    const __type1643 DFOVFSTR;                             /* DFOVFSTR         */
    uint8  dummy224[3];                                    /* Reserved         */
    __type1644 DFOVFSTC;                                   /* DFOVFSTC         */
    uint8  dummy225[3];                                    /* Reserved         */
    __type1645 DFERRINT;                                   /* DFERRINT         */
    uint8  dummy226[3];                                    /* Reserved         */
    const __type1646 DFEADR;                               /* DFEADR           */
    __type1647 DFTSTCTL;                                   /* DFTSTCTL         */
} __type2582;
typedef struct 
{                                                          /* Module           */
    __type1648 LRTSTCTL_PE1;                               /* LRTSTCTL_PE1     */
    const __type1649 LRTDATBF0_PE1;                        /* LRTDATBF0_PE1    */
    const __type1650 LRTDATBF1_PE1;                        /* LRTDATBF1_PE1    */
    uint8  dummy227[1008];                                 /* Reserved         */
    __type1635 LRECCCTL_PE1;                               /* LRECCCTL_PE1     */
    __type1626 LRERRINT_PE1;                               /* LRERRINT_PE1     */
    __type1651 LRSTCLR_PE1;                                /* LRSTCLR_PE1      */
    const __type1652 LROVFSTR_PE1;                         /* LROVFSTR_PE1     */
    const __type1653 LR1STERSTR_PE1;                       /* LR1STERSTR_PE1   */
    uint8  dummy228[60];                                   /* Reserved         */
    const __type1654 LR1STEADR0_PE1;                       /* LR1STEADR0_PE1   */
    const __type1654 LR1STEADR1_PE1;                       /* LR1STEADR1_PE1   */
    const __type1654 LR1STEADR2_PE1;                       /* LR1STEADR2_PE1   */
    const __type1654 LR1STEADR3_PE1;                       /* LR1STEADR3_PE1   */
} __type2583;
typedef struct 
{                                                          /* Module           */
    __type1659 CTL;                                        /* CTL              */
    __type1660 TMC;                                        /* TMC              */
    uint8  dummy233[2];                                    /* Reserved         */
    __type1661 TRC;                                        /* TRC              */
    __type1662 TED;                                        /* TED              */
    const __type1663 EAD0;                                 /* EAD0             */
    uint8  dummy234[44];                                   /* Reserved         */
} __type2585;

__IOREG(ECCIC1, 0xFFC60400, __READ_WRITE, __type2580);                /* ECCIC1 */
__IOREG(ECCFLI, 0xFFC62000, __READ_WRITE, __type2581);                /* ECCFLI */
__IOREG(ECCEEP, 0xFFC62C00, __READ_WRITE, __type2582);                /* ECCEEP */
__IOREG(ECCCPU1, 0xFFC65004, __READ_WRITE, __type2583);               /* ECCCPU1 */
__IOREG(ECCCSIH0, 0xFFC70000, __READ_WRITE, __type2585);              /* ECCCSIH0 */
__IOREG(ECCCSIH1, 0xFFC70040, __READ_WRITE, __type2585);              /* ECCCSIH1 */
__IOREG(ECCCSIH2, 0xFFC70080, __READ_WRITE, __type2585);              /* ECCCSIH2 */
__IOREG(ECCCSIH3, 0xFFC700C0, __READ_WRITE, __type2585);              /* ECCCSIH3 */
__IOREG(ECCRCAN0, 0xFFC71000, __READ_WRITE, __type2585);              /* ECCRCAN0 */
__IOREG(ECCFLX0, 0xFFC72000, __READ_WRITE, __type2585);               /* ECCFLX0 */
__IOREG(ECCFLX0T1, 0xFFC72040, __READ_WRITE, __type2585);             /* ECCFLX0T1 */
__IOREG(ECCFLX0T0, 0xFFC72080, __READ_WRITE, __type2585);             /* ECCFLX0T0 */
__IOREGARRAY(ECCCSIH, 4, 0xFFC70000, __READ_WRITE, __type2585);       /* ECCCSIH[4] */
__IOREGARRAY(ECCFLX0T, 2, 0xFFC72040, __READ_WRITE, __type2585);      /* ECCFLX0T[2] */

#define ECCIC1IDECCCTL_PE1 ECCIC1.IDECCCTL_PE1.UINT32
#define ECCIC1IDECCCTL_PE1L ECCIC1.IDECCCTL_PE1.UINT16[L]
#define ECCIC1IDECCCTL_PE1H ECCIC1.IDECCCTL_PE1.UINT16[H]
#define ECCIC1ECCDIS ECCIC1.IDECCCTL_PE1.BIT.ECCDIS
#define ECCIC1PROT ECCIC1.IDECCCTL_PE1.BIT.PROT
#define ECCIC1IDERRINT_PE1 ECCIC1.IDERRINT_PE1.UINT32
#define ECCIC1IDERRINT_PE1L ECCIC1.IDERRINT_PE1.UINT16[L]
#define ECCIC1IDERRINT_PE1LL ECCIC1.IDERRINT_PE1.UINT8[LL]
#define ECCIC1IDERRINT_PE1LH ECCIC1.IDERRINT_PE1.UINT8[LH]
#define ECCIC1IDERRINT_PE1H ECCIC1.IDERRINT_PE1.UINT16[H]
#define ECCIC1IDERRINT_PE1HL ECCIC1.IDERRINT_PE1.UINT8[HL]
#define ECCIC1IDERRINT_PE1HH ECCIC1.IDERRINT_PE1.UINT8[HH]
#define ECCIC1SEDIE ECCIC1.IDERRINT_PE1.BIT.SEDIE
#define ECCIC1DEDIE ECCIC1.IDERRINT_PE1.BIT.DEDIE
#define ECCIC1IDSTCLR_PE1 ECCIC1.IDSTCLR_PE1.UINT32
#define ECCIC1IDSTCLR_PE1L ECCIC1.IDSTCLR_PE1.UINT16[L]
#define ECCIC1IDSTCLR_PE1LL ECCIC1.IDSTCLR_PE1.UINT8[LL]
#define ECCIC1IDSTCLR_PE1LH ECCIC1.IDSTCLR_PE1.UINT8[LH]
#define ECCIC1IDSTCLR_PE1H ECCIC1.IDSTCLR_PE1.UINT16[H]
#define ECCIC1IDSTCLR_PE1HL ECCIC1.IDSTCLR_PE1.UINT8[HL]
#define ECCIC1IDSTCLR_PE1HH ECCIC1.IDSTCLR_PE1.UINT8[HH]
#define ECCIC1STCLR0 ECCIC1.IDSTCLR_PE1.BIT.STCLR0
#define ECCIC1STCLR1 ECCIC1.IDSTCLR_PE1.BIT.STCLR1
#define ECCIC1IDOVFSTR_PE1 ECCIC1.IDOVFSTR_PE1.UINT32
#define ECCIC1IDOVFSTR_PE1L ECCIC1.IDOVFSTR_PE1.UINT16[L]
#define ECCIC1IDOVFSTR_PE1LL ECCIC1.IDOVFSTR_PE1.UINT8[LL]
#define ECCIC1IDOVFSTR_PE1LH ECCIC1.IDOVFSTR_PE1.UINT8[LH]
#define ECCIC1IDOVFSTR_PE1H ECCIC1.IDOVFSTR_PE1.UINT16[H]
#define ECCIC1IDOVFSTR_PE1HL ECCIC1.IDOVFSTR_PE1.UINT8[HL]
#define ECCIC1IDOVFSTR_PE1HH ECCIC1.IDOVFSTR_PE1.UINT8[HH]
#define ECCIC1ERROVF0 ECCIC1.IDOVFSTR_PE1.BIT.ERROVF0
#define ECCIC1ERROVF1 ECCIC1.IDOVFSTR_PE1.BIT.ERROVF1
#define ECCIC1ID1STERSTR_PE1 ECCIC1.ID1STERSTR_PE1.UINT32
#define ECCIC1ID1STERSTR_PE1L ECCIC1.ID1STERSTR_PE1.UINT16[L]
#define ECCIC1ID1STERSTR_PE1LL ECCIC1.ID1STERSTR_PE1.UINT8[LL]
#define ECCIC1ID1STERSTR_PE1LH ECCIC1.ID1STERSTR_PE1.UINT8[LH]
#define ECCIC1ID1STERSTR_PE1H ECCIC1.ID1STERSTR_PE1.UINT16[H]
#define ECCIC1ID1STERSTR_PE1HL ECCIC1.ID1STERSTR_PE1.UINT8[HL]
#define ECCIC1ID1STERSTR_PE1HH ECCIC1.ID1STERSTR_PE1.UINT8[HH]
#define ECCIC1SEDF0 ECCIC1.ID1STERSTR_PE1.BIT.SEDF0
#define ECCIC1DEDF0 ECCIC1.ID1STERSTR_PE1.BIT.DEDF0
#define ECCIC1SEDF1 ECCIC1.ID1STERSTR_PE1.BIT.SEDF1
#define ECCIC1DEDF1 ECCIC1.ID1STERSTR_PE1.BIT.DEDF1
#define ECCIC1ID1STEADR0_PE1 ECCIC1.ID1STEADR0_PE1.UINT32
#define ECCIC1ID1STEADR0_PE1L ECCIC1.ID1STEADR0_PE1.UINT16[L]
#define ECCIC1ID1STEADR0_PE1LL ECCIC1.ID1STEADR0_PE1.UINT8[LL]
#define ECCIC1ID1STEADR0_PE1LH ECCIC1.ID1STEADR0_PE1.UINT8[LH]
#define ECCIC1ID1STEADR0_PE1H ECCIC1.ID1STEADR0_PE1.UINT16[H]
#define ECCIC1ID1STEADR0_PE1HL ECCIC1.ID1STEADR0_PE1.UINT8[HL]
#define ECCIC1ID1STEADR0_PE1HH ECCIC1.ID1STEADR0_PE1.UINT8[HH]
#define ECCIC1EADR ECCIC1.ID1STEADR0_PE1.BIT.EADR
#define ECCIC1ID1STEADR1_PE1 ECCIC1.ID1STEADR1_PE1.UINT32
#define ECCIC1ID1STEADR1_PE1L ECCIC1.ID1STEADR1_PE1.UINT16[L]
#define ECCIC1ID1STEADR1_PE1LL ECCIC1.ID1STEADR1_PE1.UINT8[LL]
#define ECCIC1ID1STEADR1_PE1LH ECCIC1.ID1STEADR1_PE1.UINT8[LH]
#define ECCIC1ID1STEADR1_PE1H ECCIC1.ID1STEADR1_PE1.UINT16[H]
#define ECCIC1ID1STEADR1_PE1HL ECCIC1.ID1STEADR1_PE1.UINT8[HL]
#define ECCIC1ID1STEADR1_PE1HH ECCIC1.ID1STEADR1_PE1.UINT8[HH]
#define ECCIC1ITECCCTL_PE1 ECCIC1.ITECCCTL_PE1.UINT32
#define ECCIC1ITECCCTL_PE1L ECCIC1.ITECCCTL_PE1.UINT16[L]
#define ECCIC1ITECCCTL_PE1H ECCIC1.ITECCCTL_PE1.UINT16[H]
#define ECCIC1ITERRINT_PE1 ECCIC1.ITERRINT_PE1.UINT32
#define ECCIC1ITERRINT_PE1L ECCIC1.ITERRINT_PE1.UINT16[L]
#define ECCIC1ITERRINT_PE1LL ECCIC1.ITERRINT_PE1.UINT8[LL]
#define ECCIC1ITERRINT_PE1LH ECCIC1.ITERRINT_PE1.UINT8[LH]
#define ECCIC1ITERRINT_PE1H ECCIC1.ITERRINT_PE1.UINT16[H]
#define ECCIC1ITERRINT_PE1HL ECCIC1.ITERRINT_PE1.UINT8[HL]
#define ECCIC1ITERRINT_PE1HH ECCIC1.ITERRINT_PE1.UINT8[HH]
#define ECCIC1ITSTCLR_PE1 ECCIC1.ITSTCLR_PE1.UINT32
#define ECCIC1ITSTCLR_PE1L ECCIC1.ITSTCLR_PE1.UINT16[L]
#define ECCIC1ITSTCLR_PE1LL ECCIC1.ITSTCLR_PE1.UINT8[LL]
#define ECCIC1ITSTCLR_PE1LH ECCIC1.ITSTCLR_PE1.UINT8[LH]
#define ECCIC1ITSTCLR_PE1H ECCIC1.ITSTCLR_PE1.UINT16[H]
#define ECCIC1ITSTCLR_PE1HL ECCIC1.ITSTCLR_PE1.UINT8[HL]
#define ECCIC1ITSTCLR_PE1HH ECCIC1.ITSTCLR_PE1.UINT8[HH]
#define ECCIC1ITOVFSTR_PE1 ECCIC1.ITOVFSTR_PE1.UINT32
#define ECCIC1ITOVFSTR_PE1L ECCIC1.ITOVFSTR_PE1.UINT16[L]
#define ECCIC1ITOVFSTR_PE1LL ECCIC1.ITOVFSTR_PE1.UINT8[LL]
#define ECCIC1ITOVFSTR_PE1LH ECCIC1.ITOVFSTR_PE1.UINT8[LH]
#define ECCIC1ITOVFSTR_PE1H ECCIC1.ITOVFSTR_PE1.UINT16[H]
#define ECCIC1ITOVFSTR_PE1HL ECCIC1.ITOVFSTR_PE1.UINT8[HL]
#define ECCIC1ITOVFSTR_PE1HH ECCIC1.ITOVFSTR_PE1.UINT8[HH]
#define ECCIC1IT1STERSTR_PE1 ECCIC1.IT1STERSTR_PE1.UINT32
#define ECCIC1IT1STERSTR_PE1L ECCIC1.IT1STERSTR_PE1.UINT16[L]
#define ECCIC1IT1STERSTR_PE1LL ECCIC1.IT1STERSTR_PE1.UINT8[LL]
#define ECCIC1IT1STERSTR_PE1LH ECCIC1.IT1STERSTR_PE1.UINT8[LH]
#define ECCIC1IT1STERSTR_PE1H ECCIC1.IT1STERSTR_PE1.UINT16[H]
#define ECCIC1IT1STERSTR_PE1HL ECCIC1.IT1STERSTR_PE1.UINT8[HL]
#define ECCIC1IT1STERSTR_PE1HH ECCIC1.IT1STERSTR_PE1.UINT8[HH]
#define ECCIC1IT1STEADR0_PE1 ECCIC1.IT1STEADR0_PE1.UINT32
#define ECCIC1IT1STEADR0_PE1L ECCIC1.IT1STEADR0_PE1.UINT16[L]
#define ECCIC1IT1STEADR0_PE1LL ECCIC1.IT1STEADR0_PE1.UINT8[LL]
#define ECCIC1IT1STEADR0_PE1LH ECCIC1.IT1STEADR0_PE1.UINT8[LH]
#define ECCIC1IT1STEADR0_PE1H ECCIC1.IT1STEADR0_PE1.UINT16[H]
#define ECCIC1IT1STEADR0_PE1HL ECCIC1.IT1STEADR0_PE1.UINT8[HL]
#define ECCIC1IT1STEADR0_PE1HH ECCIC1.IT1STEADR0_PE1.UINT8[HH]
#define ECCFLICFAPCTL ECCFLI.CFAPCTL.UINT32
#define ECCFLICFAPCTLL ECCFLI.CFAPCTL.UINT16[L]
#define ECCFLIAPARIDIS ECCFLI.CFAPCTL.BIT.APARIDIS
#define ECCFLIAPTESTA ECCFLI.CFAPCTL.BIT.APTESTA
#define ECCFLIPROT ECCFLI.CFAPCTL.BIT.PROT
#define ECCFLICFECCCTL_VCI ECCFLI.CFECCCTL_VCI.UINT32
#define ECCFLICFECCCTL_VCIL ECCFLI.CFECCCTL_VCI.UINT16[L]
#define ECCFLIECCDIS ECCFLI.CFECCCTL_VCI.BIT.ECCDIS
#define ECCFLISECDIS ECCFLI.CFECCCTL_VCI.BIT.SECDIS
#define ECCFLICFERRINT_VCI ECCFLI.CFERRINT_VCI.UINT32
#define ECCFLICFERRINT_VCIL ECCFLI.CFERRINT_VCI.UINT16[L]
#define ECCFLICFERRINT_VCILL ECCFLI.CFERRINT_VCI.UINT8[LL]
#define ECCFLISEDIE ECCFLI.CFERRINT_VCI.BIT.SEDIE
#define ECCFLIDEDIE ECCFLI.CFERRINT_VCI.BIT.DEDIE
#define ECCFLIAPEIE ECCFLI.CFERRINT_VCI.BIT.APEIE
#define ECCFLICFSTCLR_VCI ECCFLI.CFSTCLR_VCI.UINT32
#define ECCFLICFSTCLR_VCIL ECCFLI.CFSTCLR_VCI.UINT16[L]
#define ECCFLICFSTCLR_VCILL ECCFLI.CFSTCLR_VCI.UINT8[LL]
#define ECCFLISTCLR0 ECCFLI.CFSTCLR_VCI.BIT.STCLR0
#define ECCFLICFOVFSTR_VCI ECCFLI.CFOVFSTR_VCI.UINT32
#define ECCFLICFOVFSTR_VCIL ECCFLI.CFOVFSTR_VCI.UINT16[L]
#define ECCFLICFOVFSTR_VCILL ECCFLI.CFOVFSTR_VCI.UINT8[LL]
#define ECCFLIERROVF0 ECCFLI.CFOVFSTR_VCI.BIT.ERROVF0
#define ECCFLICF1STERSTR_VCI ECCFLI.CF1STERSTR_VCI.UINT32
#define ECCFLICF1STERSTR_VCIL ECCFLI.CF1STERSTR_VCI.UINT16[L]
#define ECCFLICF1STERSTR_VCILL ECCFLI.CF1STERSTR_VCI.UINT8[LL]
#define ECCFLISEDF0 ECCFLI.CF1STERSTR_VCI.BIT.SEDF0
#define ECCFLIDEDF0 ECCFLI.CF1STERSTR_VCI.BIT.DEDF0
#define ECCFLIAPEF0 ECCFLI.CF1STERSTR_VCI.BIT.APEF0
#define ECCFLICF1STEADR0_VCI ECCFLI.CF1STEADR0_VCI.UINT32
#define ECCFLICF1STEADR0_VCIL ECCFLI.CF1STEADR0_VCI.UINT16[L]
#define ECCFLICF1STEADR0_VCILL ECCFLI.CF1STEADR0_VCI.UINT8[LL]
#define ECCFLIEADR ECCFLI.CF1STEADR0_VCI.BIT.EADR
#define ECCFLICFSTSTCTL_VCI ECCFLI.CFSTSTCTL_VCI.UINT32
#define ECCFLICFSTSTCTL_VCIL ECCFLI.CFSTSTCTL_VCI.UINT16[L]
#define ECCFLIECCTST ECCFLI.CFSTSTCTL_VCI.BIT.ECCTST
#define ECCFLICFECCCTL_PE1 ECCFLI.CFECCCTL_PE1.UINT32
#define ECCFLICFECCCTL_PE1L ECCFLI.CFECCCTL_PE1.UINT16[L]
#define ECCFLICFERRINT_PE1 ECCFLI.CFERRINT_PE1.UINT32
#define ECCFLICFERRINT_PE1L ECCFLI.CFERRINT_PE1.UINT16[L]
#define ECCFLICFERRINT_PE1LL ECCFLI.CFERRINT_PE1.UINT8[LL]
#define ECCFLICFSTCLR_PE1 ECCFLI.CFSTCLR_PE1.UINT32
#define ECCFLICFSTCLR_PE1L ECCFLI.CFSTCLR_PE1.UINT16[L]
#define ECCFLICFSTCLR_PE1LL ECCFLI.CFSTCLR_PE1.UINT8[LL]
#define ECCFLICFOVFSTR_PE1 ECCFLI.CFOVFSTR_PE1.UINT32
#define ECCFLICFOVFSTR_PE1L ECCFLI.CFOVFSTR_PE1.UINT16[L]
#define ECCFLICFOVFSTR_PE1LL ECCFLI.CFOVFSTR_PE1.UINT8[LL]
#define ECCFLICF1STERSTR_PE1 ECCFLI.CF1STERSTR_PE1.UINT32
#define ECCFLICF1STERSTR_PE1L ECCFLI.CF1STERSTR_PE1.UINT16[L]
#define ECCFLICF1STERSTR_PE1LL ECCFLI.CF1STERSTR_PE1.UINT8[LL]
#define ECCFLICF1STEADR0_PE1 ECCFLI.CF1STEADR0_PE1.UINT32
#define ECCFLICF1STEADR0_PE1L ECCFLI.CF1STEADR0_PE1.UINT16[L]
#define ECCFLICF1STEADR0_PE1LL ECCFLI.CF1STEADR0_PE1.UINT8[LL]
#define ECCFLICFSTSTCTL_PE1 ECCFLI.CFSTSTCTL_PE1.UINT32
#define ECCFLICFSTSTCTL_PE1L ECCFLI.CFSTSTCTL_PE1.UINT16[L]
#define ECCEEPDFECCCTL ECCEEP.DFECCCTL.UINT16
#define ECCEEPECCDIS ECCEEP.DFECCCTL.BIT.ECCDIS
#define ECCEEPSEDDIS ECCEEP.DFECCCTL.BIT.SEDDIS
#define ECCEEPPROT ECCEEP.DFECCCTL.BIT.PROT
#define ECCEEPDFERSTR ECCEEP.DFERSTR.UINT8
#define ECCEEPSEDF ECCEEP.DFERSTR.BIT.SEDF
#define ECCEEPDEDF ECCEEP.DFERSTR.BIT.DEDF
#define ECCEEPDFERSTC ECCEEP.DFERSTC.UINT8
#define ECCEEPERRCLR ECCEEP.DFERSTC.BIT.ERRCLR
#define ECCEEPDFOVFSTR ECCEEP.DFOVFSTR.UINT8
#define ECCEEPERROVF ECCEEP.DFOVFSTR.BIT.ERROVF
#define ECCEEPDFOVFSTC ECCEEP.DFOVFSTC.UINT8
#define ECCEEPERROVFCLR ECCEEP.DFOVFSTC.BIT.ERROVFCLR
#define ECCEEPDFERRINT ECCEEP.DFERRINT.UINT8
#define ECCEEPSEDIE ECCEEP.DFERRINT.BIT.SEDIE
#define ECCEEPDEDIE ECCEEP.DFERRINT.BIT.DEDIE
#define ECCEEPDFEADR ECCEEP.DFEADR.UINT32
#define ECCEEPDFTSTCTL ECCEEP.DFTSTCTL.UINT16
#define ECCEEPECCTST ECCEEP.DFTSTCTL.BIT.ECCTST
#define ECCCPU1LRTSTCTL_PE1 ECCCPU1.LRTSTCTL_PE1.UINT32
#define ECCCPU1LRTSTCTL_PE1L ECCCPU1.LRTSTCTL_PE1.UINT16[L]
#define ECCCPU1LRTSTCTL_PE1H ECCCPU1.LRTSTCTL_PE1.UINT16[H]
#define ECCCPU1DATSEL ECCCPU1.LRTSTCTL_PE1.BIT.DATSEL
#define ECCCPU1ECCTST ECCCPU1.LRTSTCTL_PE1.BIT.ECCTST
#define ECCCPU1PROT ECCCPU1.LRTSTCTL_PE1.BIT.PROT
#define ECCCPU1LRTDATBF0_PE1 ECCCPU1.LRTDATBF0_PE1.UINT32
#define ECCCPU1LRDATBF0 ECCCPU1.LRTDATBF0_PE1.BIT.LRDATBF0
#define ECCCPU1LRDATBF1 ECCCPU1.LRTDATBF0_PE1.BIT.LRDATBF1
#define ECCCPU1LRTDATBF1_PE1 ECCCPU1.LRTDATBF1_PE1.UINT32
#define ECCCPU1LRDATBF2 ECCCPU1.LRTDATBF1_PE1.BIT.LRDATBF2
#define ECCCPU1LRDATBF3 ECCCPU1.LRTDATBF1_PE1.BIT.LRDATBF3
#define ECCCPU1LRECCCTL_PE1 ECCCPU1.LRECCCTL_PE1.UINT32
#define ECCCPU1LRECCCTL_PE1L ECCCPU1.LRECCCTL_PE1.UINT16[L]
#define ECCCPU1LRECCCTL_PE1H ECCCPU1.LRECCCTL_PE1.UINT16[H]
#define ECCCPU1ECCDIS ECCCPU1.LRECCCTL_PE1.BIT.ECCDIS
#define ECCCPU1SECDIS ECCCPU1.LRECCCTL_PE1.BIT.SECDIS
#define ECCCPU1LRERRINT_PE1 ECCCPU1.LRERRINT_PE1.UINT32
#define ECCCPU1LRERRINT_PE1L ECCCPU1.LRERRINT_PE1.UINT16[L]
#define ECCCPU1LRERRINT_PE1LL ECCCPU1.LRERRINT_PE1.UINT8[LL]
#define ECCCPU1LRERRINT_PE1LH ECCCPU1.LRERRINT_PE1.UINT8[LH]
#define ECCCPU1LRERRINT_PE1H ECCCPU1.LRERRINT_PE1.UINT16[H]
#define ECCCPU1LRERRINT_PE1HL ECCCPU1.LRERRINT_PE1.UINT8[HL]
#define ECCCPU1LRERRINT_PE1HH ECCCPU1.LRERRINT_PE1.UINT8[HH]
#define ECCCPU1SEDIE ECCCPU1.LRERRINT_PE1.BIT.SEDIE
#define ECCCPU1DEDIE ECCCPU1.LRERRINT_PE1.BIT.DEDIE
#define ECCCPU1LRSTCLR_PE1 ECCCPU1.LRSTCLR_PE1.UINT32
#define ECCCPU1LRSTCLR_PE1L ECCCPU1.LRSTCLR_PE1.UINT16[L]
#define ECCCPU1LRSTCLR_PE1LL ECCCPU1.LRSTCLR_PE1.UINT8[LL]
#define ECCCPU1LRSTCLR_PE1LH ECCCPU1.LRSTCLR_PE1.UINT8[LH]
#define ECCCPU1LRSTCLR_PE1H ECCCPU1.LRSTCLR_PE1.UINT16[H]
#define ECCCPU1LRSTCLR_PE1HL ECCCPU1.LRSTCLR_PE1.UINT8[HL]
#define ECCCPU1LRSTCLR_PE1HH ECCCPU1.LRSTCLR_PE1.UINT8[HH]
#define ECCCPU1STCLR0 ECCCPU1.LRSTCLR_PE1.BIT.STCLR0
#define ECCCPU1STCLR1 ECCCPU1.LRSTCLR_PE1.BIT.STCLR1
#define ECCCPU1STCLR2 ECCCPU1.LRSTCLR_PE1.BIT.STCLR2
#define ECCCPU1STCLR3 ECCCPU1.LRSTCLR_PE1.BIT.STCLR3
#define ECCCPU1LROVFSTR_PE1 ECCCPU1.LROVFSTR_PE1.UINT32
#define ECCCPU1LROVFSTR_PE1L ECCCPU1.LROVFSTR_PE1.UINT16[L]
#define ECCCPU1LROVFSTR_PE1LL ECCCPU1.LROVFSTR_PE1.UINT8[LL]
#define ECCCPU1LROVFSTR_PE1LH ECCCPU1.LROVFSTR_PE1.UINT8[LH]
#define ECCCPU1LROVFSTR_PE1H ECCCPU1.LROVFSTR_PE1.UINT16[H]
#define ECCCPU1LROVFSTR_PE1HL ECCCPU1.LROVFSTR_PE1.UINT8[HL]
#define ECCCPU1LROVFSTR_PE1HH ECCCPU1.LROVFSTR_PE1.UINT8[HH]
#define ECCCPU1ERROVF0 ECCCPU1.LROVFSTR_PE1.BIT.ERROVF0
#define ECCCPU1ERROVF1 ECCCPU1.LROVFSTR_PE1.BIT.ERROVF1
#define ECCCPU1ERROVF2 ECCCPU1.LROVFSTR_PE1.BIT.ERROVF2
#define ECCCPU1ERROVF3 ECCCPU1.LROVFSTR_PE1.BIT.ERROVF3
#define ECCCPU1LR1STERSTR_PE1 ECCCPU1.LR1STERSTR_PE1.UINT32
#define ECCCPU1LR1STERSTR_PE1L ECCCPU1.LR1STERSTR_PE1.UINT16[L]
#define ECCCPU1LR1STERSTR_PE1LL ECCCPU1.LR1STERSTR_PE1.UINT8[LL]
#define ECCCPU1LR1STERSTR_PE1LH ECCCPU1.LR1STERSTR_PE1.UINT8[LH]
#define ECCCPU1LR1STERSTR_PE1H ECCCPU1.LR1STERSTR_PE1.UINT16[H]
#define ECCCPU1LR1STERSTR_PE1HL ECCCPU1.LR1STERSTR_PE1.UINT8[HL]
#define ECCCPU1LR1STERSTR_PE1HH ECCCPU1.LR1STERSTR_PE1.UINT8[HH]
#define ECCCPU1SEDF0 ECCCPU1.LR1STERSTR_PE1.BIT.SEDF0
#define ECCCPU1DEDF0 ECCCPU1.LR1STERSTR_PE1.BIT.DEDF0
#define ECCCPU1SEDF1 ECCCPU1.LR1STERSTR_PE1.BIT.SEDF1
#define ECCCPU1DEDF1 ECCCPU1.LR1STERSTR_PE1.BIT.DEDF1
#define ECCCPU1SEDF2 ECCCPU1.LR1STERSTR_PE1.BIT.SEDF2
#define ECCCPU1DEDF2 ECCCPU1.LR1STERSTR_PE1.BIT.DEDF2
#define ECCCPU1SEDF3 ECCCPU1.LR1STERSTR_PE1.BIT.SEDF3
#define ECCCPU1DEDF3 ECCCPU1.LR1STERSTR_PE1.BIT.DEDF3
#define ECCCPU1LR1STEADR0_PE1 ECCCPU1.LR1STEADR0_PE1.UINT32
#define ECCCPU1LR1STEADR0_PE1L ECCCPU1.LR1STEADR0_PE1.UINT16[L]
#define ECCCPU1LR1STEADR0_PE1LL ECCCPU1.LR1STEADR0_PE1.UINT8[LL]
#define ECCCPU1LR1STEADR0_PE1LH ECCCPU1.LR1STEADR0_PE1.UINT8[LH]
#define ECCCPU1LR1STEADR0_PE1H ECCCPU1.LR1STEADR0_PE1.UINT16[H]
#define ECCCPU1LR1STEADR0_PE1HL ECCCPU1.LR1STEADR0_PE1.UINT8[HL]
#define ECCCPU1LR1STEADR0_PE1HH ECCCPU1.LR1STEADR0_PE1.UINT8[HH]
#define ECCCPU1EADR ECCCPU1.LR1STEADR0_PE1.BIT.EADR
#define ECCCPU1LR1STEADR1_PE1 ECCCPU1.LR1STEADR1_PE1.UINT32
#define ECCCPU1LR1STEADR1_PE1L ECCCPU1.LR1STEADR1_PE1.UINT16[L]
#define ECCCPU1LR1STEADR1_PE1LL ECCCPU1.LR1STEADR1_PE1.UINT8[LL]
#define ECCCPU1LR1STEADR1_PE1LH ECCCPU1.LR1STEADR1_PE1.UINT8[LH]
#define ECCCPU1LR1STEADR1_PE1H ECCCPU1.LR1STEADR1_PE1.UINT16[H]
#define ECCCPU1LR1STEADR1_PE1HL ECCCPU1.LR1STEADR1_PE1.UINT8[HL]
#define ECCCPU1LR1STEADR1_PE1HH ECCCPU1.LR1STEADR1_PE1.UINT8[HH]
#define ECCCPU1LR1STEADR2_PE1 ECCCPU1.LR1STEADR2_PE1.UINT32
#define ECCCPU1LR1STEADR2_PE1L ECCCPU1.LR1STEADR2_PE1.UINT16[L]
#define ECCCPU1LR1STEADR2_PE1LL ECCCPU1.LR1STEADR2_PE1.UINT8[LL]
#define ECCCPU1LR1STEADR2_PE1LH ECCCPU1.LR1STEADR2_PE1.UINT8[LH]
#define ECCCPU1LR1STEADR2_PE1H ECCCPU1.LR1STEADR2_PE1.UINT16[H]
#define ECCCPU1LR1STEADR2_PE1HL ECCCPU1.LR1STEADR2_PE1.UINT8[HL]
#define ECCCPU1LR1STEADR2_PE1HH ECCCPU1.LR1STEADR2_PE1.UINT8[HH]
#define ECCCPU1LR1STEADR3_PE1 ECCCPU1.LR1STEADR3_PE1.UINT32
#define ECCCPU1LR1STEADR3_PE1L ECCCPU1.LR1STEADR3_PE1.UINT16[L]
#define ECCCPU1LR1STEADR3_PE1LL ECCCPU1.LR1STEADR3_PE1.UINT8[LL]
#define ECCCPU1LR1STEADR3_PE1LH ECCCPU1.LR1STEADR3_PE1.UINT8[LH]
#define ECCCPU1LR1STEADR3_PE1H ECCCPU1.LR1STEADR3_PE1.UINT16[H]
#define ECCCPU1LR1STEADR3_PE1HL ECCCPU1.LR1STEADR3_PE1.UINT8[HL]
#define ECCCPU1LR1STEADR3_PE1HH ECCCPU1.LR1STEADR3_PE1.UINT8[HH]
#define ECCCSIH0CTL ECCCSIH0.CTL.UINT32
#define ECCCSIH0CTLL ECCCSIH0.CTL.UINT16[L]
#define ECCCSIH0CTLLL ECCCSIH0.CTL.UINT8[LL]
#define ECCCSIH0CTLLH ECCCSIH0.CTL.UINT8[LH]
#define ECCCSIH0CTLH ECCCSIH0.CTL.UINT16[H]
#define ECCCSIH0CTLHL ECCCSIH0.CTL.UINT8[HL]
#define ECCCSIH0CTLHH ECCCSIH0.CTL.UINT8[HH]
#define ECCCSIH0ECEMF ECCCSIH0.CTL.BIT.ECEMF
#define ECCCSIH0ECER1F ECCCSIH0.CTL.BIT.ECER1F
#define ECCCSIH0ECER2F ECCCSIH0.CTL.BIT.ECER2F
#define ECCCSIH0EC1EDIC ECCCSIH0.CTL.BIT.EC1EDIC
#define ECCCSIH0EC2EDIC ECCCSIH0.CTL.BIT.EC2EDIC
#define ECCCSIH0EC1ECP ECCCSIH0.CTL.BIT.EC1ECP
#define ECCCSIH0ECTHM ECCCSIH0.CTL.BIT.ECTHM
#define ECCCSIH0ECER1C ECCCSIH0.CTL.BIT.ECER1C
#define ECCCSIH0ECER2C ECCCSIH0.CTL.BIT.ECER2C
#define ECCCSIH0EMCA ECCCSIH0.CTL.BIT.EMCA
#define ECCCSIH0ECSEDF0 ECCCSIH0.CTL.BIT.ECSEDF0
#define ECCCSIH0ECDEDF0 ECCCSIH0.CTL.BIT.ECDEDF0
#define ECCCSIH0TMC ECCCSIH0.TMC.UINT16
#define ECCCSIH0TMCL ECCCSIH0.TMC.UINT8[L]
#define ECCCSIH0TMCH ECCCSIH0.TMC.UINT8[H]
#define ECCCSIH0ECREIS ECCCSIH0.TMC.BIT.ECREIS
#define ECCCSIH0ECDCS ECCCSIH0.TMC.BIT.ECDCS
#define ECCCSIH0ECENS ECCCSIH0.TMC.BIT.ECENS
#define ECCCSIH0ECREOS ECCCSIH0.TMC.BIT.ECREOS
#define ECCCSIH0ECTRRS ECCCSIH0.TMC.BIT.ECTRRS
#define ECCCSIH0ECTMCE ECCCSIH0.TMC.BIT.ECTMCE
#define ECCCSIH0ETMA ECCCSIH0.TMC.BIT.ETMA
#define ECCCSIH0TRC ECCCSIH0.TRC.UINT32
#define ECCCSIH0ERDB ECCCSIH0.TRC.UINT8[LL]
#define ECCCSIH0ECRD ECCCSIH0.TRC.UINT8[LH]
#define ECCCSIH0HORD ECCCSIH0.TRC.UINT8[HL]
#define ECCCSIH0SYND ECCCSIH0.TRC.UINT8[HH]
#define ECCCSIH0TED ECCCSIH0.TED.UINT32
#define ECCCSIH0ECEDB ECCCSIH0.TED.BIT.ECEDB
#define ECCCSIH0EAD0 ECCCSIH0.EAD0.UINT32
#define ECCCSIH0ECEAD ECCCSIH0.EAD0.BIT.ECEAD
#define ECCCSIH1CTL ECCCSIH1.CTL.UINT32
#define ECCCSIH1CTLL ECCCSIH1.CTL.UINT16[L]
#define ECCCSIH1CTLLL ECCCSIH1.CTL.UINT8[LL]
#define ECCCSIH1CTLLH ECCCSIH1.CTL.UINT8[LH]
#define ECCCSIH1CTLH ECCCSIH1.CTL.UINT16[H]
#define ECCCSIH1CTLHL ECCCSIH1.CTL.UINT8[HL]
#define ECCCSIH1CTLHH ECCCSIH1.CTL.UINT8[HH]
#define ECCCSIH1ECEMF ECCCSIH1.CTL.BIT.ECEMF
#define ECCCSIH1ECER1F ECCCSIH1.CTL.BIT.ECER1F
#define ECCCSIH1ECER2F ECCCSIH1.CTL.BIT.ECER2F
#define ECCCSIH1EC1EDIC ECCCSIH1.CTL.BIT.EC1EDIC
#define ECCCSIH1EC2EDIC ECCCSIH1.CTL.BIT.EC2EDIC
#define ECCCSIH1EC1ECP ECCCSIH1.CTL.BIT.EC1ECP
#define ECCCSIH1ECTHM ECCCSIH1.CTL.BIT.ECTHM
#define ECCCSIH1ECER1C ECCCSIH1.CTL.BIT.ECER1C
#define ECCCSIH1ECER2C ECCCSIH1.CTL.BIT.ECER2C
#define ECCCSIH1EMCA ECCCSIH1.CTL.BIT.EMCA
#define ECCCSIH1ECSEDF0 ECCCSIH1.CTL.BIT.ECSEDF0
#define ECCCSIH1ECDEDF0 ECCCSIH1.CTL.BIT.ECDEDF0
#define ECCCSIH1TMC ECCCSIH1.TMC.UINT16
#define ECCCSIH1TMCL ECCCSIH1.TMC.UINT8[L]
#define ECCCSIH1TMCH ECCCSIH1.TMC.UINT8[H]
#define ECCCSIH1ECREIS ECCCSIH1.TMC.BIT.ECREIS
#define ECCCSIH1ECDCS ECCCSIH1.TMC.BIT.ECDCS
#define ECCCSIH1ECENS ECCCSIH1.TMC.BIT.ECENS
#define ECCCSIH1ECREOS ECCCSIH1.TMC.BIT.ECREOS
#define ECCCSIH1ECTRRS ECCCSIH1.TMC.BIT.ECTRRS
#define ECCCSIH1ECTMCE ECCCSIH1.TMC.BIT.ECTMCE
#define ECCCSIH1ETMA ECCCSIH1.TMC.BIT.ETMA
#define ECCCSIH1TRC ECCCSIH1.TRC.UINT32
#define ECCCSIH1ERDB ECCCSIH1.TRC.UINT8[LL]
#define ECCCSIH1ECRD ECCCSIH1.TRC.UINT8[LH]
#define ECCCSIH1HORD ECCCSIH1.TRC.UINT8[HL]
#define ECCCSIH1SYND ECCCSIH1.TRC.UINT8[HH]
#define ECCCSIH1TED ECCCSIH1.TED.UINT32
#define ECCCSIH1ECEDB ECCCSIH1.TED.BIT.ECEDB
#define ECCCSIH1EAD0 ECCCSIH1.EAD0.UINT32
#define ECCCSIH1ECEAD ECCCSIH1.EAD0.BIT.ECEAD
#define ECCCSIH2CTL ECCCSIH2.CTL.UINT32
#define ECCCSIH2CTLL ECCCSIH2.CTL.UINT16[L]
#define ECCCSIH2CTLLL ECCCSIH2.CTL.UINT8[LL]
#define ECCCSIH2CTLLH ECCCSIH2.CTL.UINT8[LH]
#define ECCCSIH2CTLH ECCCSIH2.CTL.UINT16[H]
#define ECCCSIH2CTLHL ECCCSIH2.CTL.UINT8[HL]
#define ECCCSIH2CTLHH ECCCSIH2.CTL.UINT8[HH]
#define ECCCSIH2ECEMF ECCCSIH2.CTL.BIT.ECEMF
#define ECCCSIH2ECER1F ECCCSIH2.CTL.BIT.ECER1F
#define ECCCSIH2ECER2F ECCCSIH2.CTL.BIT.ECER2F
#define ECCCSIH2EC1EDIC ECCCSIH2.CTL.BIT.EC1EDIC
#define ECCCSIH2EC2EDIC ECCCSIH2.CTL.BIT.EC2EDIC
#define ECCCSIH2EC1ECP ECCCSIH2.CTL.BIT.EC1ECP
#define ECCCSIH2ECTHM ECCCSIH2.CTL.BIT.ECTHM
#define ECCCSIH2ECER1C ECCCSIH2.CTL.BIT.ECER1C
#define ECCCSIH2ECER2C ECCCSIH2.CTL.BIT.ECER2C
#define ECCCSIH2EMCA ECCCSIH2.CTL.BIT.EMCA
#define ECCCSIH2ECSEDF0 ECCCSIH2.CTL.BIT.ECSEDF0
#define ECCCSIH2ECDEDF0 ECCCSIH2.CTL.BIT.ECDEDF0
#define ECCCSIH2TMC ECCCSIH2.TMC.UINT16
#define ECCCSIH2TMCL ECCCSIH2.TMC.UINT8[L]
#define ECCCSIH2TMCH ECCCSIH2.TMC.UINT8[H]
#define ECCCSIH2ECREIS ECCCSIH2.TMC.BIT.ECREIS
#define ECCCSIH2ECDCS ECCCSIH2.TMC.BIT.ECDCS
#define ECCCSIH2ECENS ECCCSIH2.TMC.BIT.ECENS
#define ECCCSIH2ECREOS ECCCSIH2.TMC.BIT.ECREOS
#define ECCCSIH2ECTRRS ECCCSIH2.TMC.BIT.ECTRRS
#define ECCCSIH2ECTMCE ECCCSIH2.TMC.BIT.ECTMCE
#define ECCCSIH2ETMA ECCCSIH2.TMC.BIT.ETMA
#define ECCCSIH2TRC ECCCSIH2.TRC.UINT32
#define ECCCSIH2ERDB ECCCSIH2.TRC.UINT8[LL]
#define ECCCSIH2ECRD ECCCSIH2.TRC.UINT8[LH]
#define ECCCSIH2HORD ECCCSIH2.TRC.UINT8[HL]
#define ECCCSIH2SYND ECCCSIH2.TRC.UINT8[HH]
#define ECCCSIH2TED ECCCSIH2.TED.UINT32
#define ECCCSIH2ECEDB ECCCSIH2.TED.BIT.ECEDB
#define ECCCSIH2EAD0 ECCCSIH2.EAD0.UINT32
#define ECCCSIH2ECEAD ECCCSIH2.EAD0.BIT.ECEAD
#define ECCCSIH3CTL ECCCSIH3.CTL.UINT32
#define ECCCSIH3CTLL ECCCSIH3.CTL.UINT16[L]
#define ECCCSIH3CTLLL ECCCSIH3.CTL.UINT8[LL]
#define ECCCSIH3CTLLH ECCCSIH3.CTL.UINT8[LH]
#define ECCCSIH3CTLH ECCCSIH3.CTL.UINT16[H]
#define ECCCSIH3CTLHL ECCCSIH3.CTL.UINT8[HL]
#define ECCCSIH3CTLHH ECCCSIH3.CTL.UINT8[HH]
#define ECCCSIH3ECEMF ECCCSIH3.CTL.BIT.ECEMF
#define ECCCSIH3ECER1F ECCCSIH3.CTL.BIT.ECER1F
#define ECCCSIH3ECER2F ECCCSIH3.CTL.BIT.ECER2F
#define ECCCSIH3EC1EDIC ECCCSIH3.CTL.BIT.EC1EDIC
#define ECCCSIH3EC2EDIC ECCCSIH3.CTL.BIT.EC2EDIC
#define ECCCSIH3EC1ECP ECCCSIH3.CTL.BIT.EC1ECP
#define ECCCSIH3ECTHM ECCCSIH3.CTL.BIT.ECTHM
#define ECCCSIH3ECER1C ECCCSIH3.CTL.BIT.ECER1C
#define ECCCSIH3ECER2C ECCCSIH3.CTL.BIT.ECER2C
#define ECCCSIH3EMCA ECCCSIH3.CTL.BIT.EMCA
#define ECCCSIH3ECSEDF0 ECCCSIH3.CTL.BIT.ECSEDF0
#define ECCCSIH3ECDEDF0 ECCCSIH3.CTL.BIT.ECDEDF0
#define ECCCSIH3TMC ECCCSIH3.TMC.UINT16
#define ECCCSIH3TMCL ECCCSIH3.TMC.UINT8[L]
#define ECCCSIH3TMCH ECCCSIH3.TMC.UINT8[H]
#define ECCCSIH3ECREIS ECCCSIH3.TMC.BIT.ECREIS
#define ECCCSIH3ECDCS ECCCSIH3.TMC.BIT.ECDCS
#define ECCCSIH3ECENS ECCCSIH3.TMC.BIT.ECENS
#define ECCCSIH3ECREOS ECCCSIH3.TMC.BIT.ECREOS
#define ECCCSIH3ECTRRS ECCCSIH3.TMC.BIT.ECTRRS
#define ECCCSIH3ECTMCE ECCCSIH3.TMC.BIT.ECTMCE
#define ECCCSIH3ETMA ECCCSIH3.TMC.BIT.ETMA
#define ECCCSIH3TRC ECCCSIH3.TRC.UINT32
#define ECCCSIH3ERDB ECCCSIH3.TRC.UINT8[LL]
#define ECCCSIH3ECRD ECCCSIH3.TRC.UINT8[LH]
#define ECCCSIH3HORD ECCCSIH3.TRC.UINT8[HL]
#define ECCCSIH3SYND ECCCSIH3.TRC.UINT8[HH]
#define ECCCSIH3TED ECCCSIH3.TED.UINT32
#define ECCCSIH3ECEDB ECCCSIH3.TED.BIT.ECEDB
#define ECCCSIH3EAD0 ECCCSIH3.EAD0.UINT32
#define ECCCSIH3ECEAD ECCCSIH3.EAD0.BIT.ECEAD
#define ECCRCAN0CTL ECCRCAN0.CTL.UINT32
#define ECCRCAN0CTLL ECCRCAN0.CTL.UINT16[L]
#define ECCRCAN0CTLLL ECCRCAN0.CTL.UINT8[LL]
#define ECCRCAN0CTLLH ECCRCAN0.CTL.UINT8[LH]
#define ECCRCAN0CTLH ECCRCAN0.CTL.UINT16[H]
#define ECCRCAN0CTLHL ECCRCAN0.CTL.UINT8[HL]
#define ECCRCAN0CTLHH ECCRCAN0.CTL.UINT8[HH]
#define ECCRCAN0ECEMF ECCRCAN0.CTL.BIT.ECEMF
#define ECCRCAN0ECER1F ECCRCAN0.CTL.BIT.ECER1F
#define ECCRCAN0ECER2F ECCRCAN0.CTL.BIT.ECER2F
#define ECCRCAN0EC1EDIC ECCRCAN0.CTL.BIT.EC1EDIC
#define ECCRCAN0EC2EDIC ECCRCAN0.CTL.BIT.EC2EDIC
#define ECCRCAN0EC1ECP ECCRCAN0.CTL.BIT.EC1ECP
#define ECCRCAN0ECTHM ECCRCAN0.CTL.BIT.ECTHM
#define ECCRCAN0ECER1C ECCRCAN0.CTL.BIT.ECER1C
#define ECCRCAN0ECER2C ECCRCAN0.CTL.BIT.ECER2C
#define ECCRCAN0EMCA ECCRCAN0.CTL.BIT.EMCA
#define ECCRCAN0ECSEDF0 ECCRCAN0.CTL.BIT.ECSEDF0
#define ECCRCAN0ECDEDF0 ECCRCAN0.CTL.BIT.ECDEDF0
#define ECCRCAN0TMC ECCRCAN0.TMC.UINT16
#define ECCRCAN0TMCL ECCRCAN0.TMC.UINT8[L]
#define ECCRCAN0TMCH ECCRCAN0.TMC.UINT8[H]
#define ECCRCAN0ECREIS ECCRCAN0.TMC.BIT.ECREIS
#define ECCRCAN0ECDCS ECCRCAN0.TMC.BIT.ECDCS
#define ECCRCAN0ECENS ECCRCAN0.TMC.BIT.ECENS
#define ECCRCAN0ECREOS ECCRCAN0.TMC.BIT.ECREOS
#define ECCRCAN0ECTRRS ECCRCAN0.TMC.BIT.ECTRRS
#define ECCRCAN0ECTMCE ECCRCAN0.TMC.BIT.ECTMCE
#define ECCRCAN0ETMA ECCRCAN0.TMC.BIT.ETMA
#define ECCRCAN0TRC ECCRCAN0.TRC.UINT32
#define ECCRCAN0ERDB ECCRCAN0.TRC.UINT8[LL]
#define ECCRCAN0ECRD ECCRCAN0.TRC.UINT8[LH]
#define ECCRCAN0HORD ECCRCAN0.TRC.UINT8[HL]
#define ECCRCAN0SYND ECCRCAN0.TRC.UINT8[HH]
#define ECCRCAN0TED ECCRCAN0.TED.UINT32
#define ECCRCAN0ECEDB ECCRCAN0.TED.BIT.ECEDB
#define ECCRCAN0EAD0 ECCRCAN0.EAD0.UINT32
#define ECCRCAN0ECEAD ECCRCAN0.EAD0.BIT.ECEAD
#define ECCFLX0CTL ECCFLX0.CTL.UINT32
#define ECCFLX0CTLL ECCFLX0.CTL.UINT16[L]
#define ECCFLX0CTLLL ECCFLX0.CTL.UINT8[LL]
#define ECCFLX0CTLLH ECCFLX0.CTL.UINT8[LH]
#define ECCFLX0CTLH ECCFLX0.CTL.UINT16[H]
#define ECCFLX0CTLHL ECCFLX0.CTL.UINT8[HL]
#define ECCFLX0CTLHH ECCFLX0.CTL.UINT8[HH]
#define ECCFLX0ECEMF ECCFLX0.CTL.BIT.ECEMF
#define ECCFLX0ECER1F ECCFLX0.CTL.BIT.ECER1F
#define ECCFLX0ECER2F ECCFLX0.CTL.BIT.ECER2F
#define ECCFLX0EC1EDIC ECCFLX0.CTL.BIT.EC1EDIC
#define ECCFLX0EC2EDIC ECCFLX0.CTL.BIT.EC2EDIC
#define ECCFLX0EC1ECP ECCFLX0.CTL.BIT.EC1ECP
#define ECCFLX0ECTHM ECCFLX0.CTL.BIT.ECTHM
#define ECCFLX0ECER1C ECCFLX0.CTL.BIT.ECER1C
#define ECCFLX0ECER2C ECCFLX0.CTL.BIT.ECER2C
#define ECCFLX0EMCA ECCFLX0.CTL.BIT.EMCA
#define ECCFLX0ECSEDF0 ECCFLX0.CTL.BIT.ECSEDF0
#define ECCFLX0ECDEDF0 ECCFLX0.CTL.BIT.ECDEDF0
#define ECCFLX0TMC ECCFLX0.TMC.UINT16
#define ECCFLX0TMCL ECCFLX0.TMC.UINT8[L]
#define ECCFLX0TMCH ECCFLX0.TMC.UINT8[H]
#define ECCFLX0ECREIS ECCFLX0.TMC.BIT.ECREIS
#define ECCFLX0ECDCS ECCFLX0.TMC.BIT.ECDCS
#define ECCFLX0ECENS ECCFLX0.TMC.BIT.ECENS
#define ECCFLX0ECREOS ECCFLX0.TMC.BIT.ECREOS
#define ECCFLX0ECTRRS ECCFLX0.TMC.BIT.ECTRRS
#define ECCFLX0ECTMCE ECCFLX0.TMC.BIT.ECTMCE
#define ECCFLX0ETMA ECCFLX0.TMC.BIT.ETMA
#define ECCFLX0TRC ECCFLX0.TRC.UINT32
#define ECCFLX0ERDB ECCFLX0.TRC.UINT8[LL]
#define ECCFLX0ECRD ECCFLX0.TRC.UINT8[LH]
#define ECCFLX0HORD ECCFLX0.TRC.UINT8[HL]
#define ECCFLX0SYND ECCFLX0.TRC.UINT8[HH]
#define ECCFLX0TED ECCFLX0.TED.UINT32
#define ECCFLX0ECEDB ECCFLX0.TED.BIT.ECEDB
#define ECCFLX0EAD0 ECCFLX0.EAD0.UINT32
#define ECCFLX0ECEAD ECCFLX0.EAD0.BIT.ECEAD
#define ECCFLX0T1CTL ECCFLX0T1.CTL.UINT32
#define ECCFLX0T1CTLL ECCFLX0T1.CTL.UINT16[L]
#define ECCFLX0T1CTLLL ECCFLX0T1.CTL.UINT8[LL]
#define ECCFLX0T1CTLLH ECCFLX0T1.CTL.UINT8[LH]
#define ECCFLX0T1CTLH ECCFLX0T1.CTL.UINT16[H]
#define ECCFLX0T1CTLHL ECCFLX0T1.CTL.UINT8[HL]
#define ECCFLX0T1CTLHH ECCFLX0T1.CTL.UINT8[HH]
#define ECCFLX0T1ECEMF ECCFLX0T1.CTL.BIT.ECEMF
#define ECCFLX0T1ECER1F ECCFLX0T1.CTL.BIT.ECER1F
#define ECCFLX0T1ECER2F ECCFLX0T1.CTL.BIT.ECER2F
#define ECCFLX0T1EC1EDIC ECCFLX0T1.CTL.BIT.EC1EDIC
#define ECCFLX0T1EC2EDIC ECCFLX0T1.CTL.BIT.EC2EDIC
#define ECCFLX0T1EC1ECP ECCFLX0T1.CTL.BIT.EC1ECP
#define ECCFLX0T1ECTHM ECCFLX0T1.CTL.BIT.ECTHM
#define ECCFLX0T1ECER1C ECCFLX0T1.CTL.BIT.ECER1C
#define ECCFLX0T1ECER2C ECCFLX0T1.CTL.BIT.ECER2C
#define ECCFLX0T1EMCA ECCFLX0T1.CTL.BIT.EMCA
#define ECCFLX0T1ECSEDF0 ECCFLX0T1.CTL.BIT.ECSEDF0
#define ECCFLX0T1ECDEDF0 ECCFLX0T1.CTL.BIT.ECDEDF0
#define ECCFLX0T1TMC ECCFLX0T1.TMC.UINT16
#define ECCFLX0T1TMCL ECCFLX0T1.TMC.UINT8[L]
#define ECCFLX0T1TMCH ECCFLX0T1.TMC.UINT8[H]
#define ECCFLX0T1ECREIS ECCFLX0T1.TMC.BIT.ECREIS
#define ECCFLX0T1ECDCS ECCFLX0T1.TMC.BIT.ECDCS
#define ECCFLX0T1ECENS ECCFLX0T1.TMC.BIT.ECENS
#define ECCFLX0T1ECREOS ECCFLX0T1.TMC.BIT.ECREOS
#define ECCFLX0T1ECTRRS ECCFLX0T1.TMC.BIT.ECTRRS
#define ECCFLX0T1ECTMCE ECCFLX0T1.TMC.BIT.ECTMCE
#define ECCFLX0T1ETMA ECCFLX0T1.TMC.BIT.ETMA
#define ECCFLX0T1TRC ECCFLX0T1.TRC.UINT32
#define ECCFLX0T1ERDB ECCFLX0T1.TRC.UINT8[LL]
#define ECCFLX0T1ECRD ECCFLX0T1.TRC.UINT8[LH]
#define ECCFLX0T1HORD ECCFLX0T1.TRC.UINT8[HL]
#define ECCFLX0T1SYND ECCFLX0T1.TRC.UINT8[HH]
#define ECCFLX0T1TED ECCFLX0T1.TED.UINT32
#define ECCFLX0T1ECEDB ECCFLX0T1.TED.BIT.ECEDB
#define ECCFLX0T1EAD0 ECCFLX0T1.EAD0.UINT32
#define ECCFLX0T1ECEAD ECCFLX0T1.EAD0.BIT.ECEAD
#define ECCFLX0T0CTL ECCFLX0T0.CTL.UINT32
#define ECCFLX0T0CTLL ECCFLX0T0.CTL.UINT16[L]
#define ECCFLX0T0CTLLL ECCFLX0T0.CTL.UINT8[LL]
#define ECCFLX0T0CTLLH ECCFLX0T0.CTL.UINT8[LH]
#define ECCFLX0T0CTLH ECCFLX0T0.CTL.UINT16[H]
#define ECCFLX0T0CTLHL ECCFLX0T0.CTL.UINT8[HL]
#define ECCFLX0T0CTLHH ECCFLX0T0.CTL.UINT8[HH]
#define ECCFLX0T0ECEMF ECCFLX0T0.CTL.BIT.ECEMF
#define ECCFLX0T0ECER1F ECCFLX0T0.CTL.BIT.ECER1F
#define ECCFLX0T0ECER2F ECCFLX0T0.CTL.BIT.ECER2F
#define ECCFLX0T0EC1EDIC ECCFLX0T0.CTL.BIT.EC1EDIC
#define ECCFLX0T0EC2EDIC ECCFLX0T0.CTL.BIT.EC2EDIC
#define ECCFLX0T0EC1ECP ECCFLX0T0.CTL.BIT.EC1ECP
#define ECCFLX0T0ECTHM ECCFLX0T0.CTL.BIT.ECTHM
#define ECCFLX0T0ECER1C ECCFLX0T0.CTL.BIT.ECER1C
#define ECCFLX0T0ECER2C ECCFLX0T0.CTL.BIT.ECER2C
#define ECCFLX0T0EMCA ECCFLX0T0.CTL.BIT.EMCA
#define ECCFLX0T0ECSEDF0 ECCFLX0T0.CTL.BIT.ECSEDF0
#define ECCFLX0T0ECDEDF0 ECCFLX0T0.CTL.BIT.ECDEDF0
#define ECCFLX0T0TMC ECCFLX0T0.TMC.UINT16
#define ECCFLX0T0TMCL ECCFLX0T0.TMC.UINT8[L]
#define ECCFLX0T0TMCH ECCFLX0T0.TMC.UINT8[H]
#define ECCFLX0T0ECREIS ECCFLX0T0.TMC.BIT.ECREIS
#define ECCFLX0T0ECDCS ECCFLX0T0.TMC.BIT.ECDCS
#define ECCFLX0T0ECENS ECCFLX0T0.TMC.BIT.ECENS
#define ECCFLX0T0ECREOS ECCFLX0T0.TMC.BIT.ECREOS
#define ECCFLX0T0ECTRRS ECCFLX0T0.TMC.BIT.ECTRRS
#define ECCFLX0T0ECTMCE ECCFLX0T0.TMC.BIT.ECTMCE
#define ECCFLX0T0ETMA ECCFLX0T0.TMC.BIT.ETMA
#define ECCFLX0T0TRC ECCFLX0T0.TRC.UINT32
#define ECCFLX0T0ERDB ECCFLX0T0.TRC.UINT8[LL]
#define ECCFLX0T0ECRD ECCFLX0T0.TRC.UINT8[LH]
#define ECCFLX0T0HORD ECCFLX0T0.TRC.UINT8[HL]
#define ECCFLX0T0SYND ECCFLX0T0.TRC.UINT8[HH]
#define ECCFLX0T0TED ECCFLX0T0.TED.UINT32
#define ECCFLX0T0ECEDB ECCFLX0T0.TED.BIT.ECEDB
#define ECCFLX0T0EAD0 ECCFLX0T0.EAD0.UINT32
#define ECCFLX0T0ECEAD ECCFLX0T0.EAD0.BIT.ECEAD
#endif
