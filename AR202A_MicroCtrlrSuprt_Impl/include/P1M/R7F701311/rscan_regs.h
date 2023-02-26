/**********************************************************************************************************************
* Module File Name  : rscan_regs.h
* Module Description: RS-CAN Peripheral Registers
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

#ifndef RSCAN_REGS_H
#define RSCAN_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint16 BRP:10;                                         /* BRP[9:0]         */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  TSEG1:4;                                        /* TSEG1[19:16]     */
    uint8  TSEG2:3;                                        /* TSEG2[22:20]     */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  SJW:2;                                          /* SJW[25:24]       */
    uint8  :6;                                             /* Reserved Bits    */
} __type386;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CHMDC:2;                                        /* CHMDC[1:0]       */
    uint8  CSLPR:1;                                        /* CSLPR            */
    uint8  RTBO:1;                                         /* RTBO             */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  BEIE:1;                                         /* BEIE             */
    uint8  EWIE:1;                                         /* EWIE             */
    uint8  EPIE:1;                                         /* EPIE             */
    uint8  BOEIE:1;                                        /* BOEIE            */
    uint8  BORIE:1;                                        /* BORIE            */
    uint8  OLIE:1;                                         /* OLIE             */
    uint8  BLIE:1;                                         /* BLIE             */
    uint8  ALIE:1;                                         /* ALIE             */
    uint8  TAIE:1;                                         /* TAIE             */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  BOM:2;                                          /* BOM[22:21]       */
    uint8  ERRD:1;                                         /* ERRD             */
    uint8  CTME:1;                                         /* CTME             */
    uint8  CTMS:2;                                         /* CTMS[26:25]      */
    uint8  :5;                                             /* Reserved Bits    */
} __type387;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  CRSTSTS:1;                                /* CRSTSTS          */
    const uint8  CHLTSTS:1;                                /* CHLTSTS          */
    const uint8  CSLPSTS:1;                                /* CSLPSTS          */
    const uint8  EPSTS:1;                                  /* EPSTS            */
    const uint8  BOSTS:1;                                  /* BOSTS            */
    const uint8  TRMSTS:1;                                 /* TRMSTS           */
    const uint8  RECSTS:1;                                 /* RECSTS           */
    const uint8  COMSTS:1;                                 /* COMSTS           */
    uint8  :8;                                             /* Reserved Bits    */
    const uint8  REC:8;                                    /* REC[23:16]       */
    const uint8  TEC:8;                                    /* TEC[31:24]       */
} __type388;
typedef struct 
{                                                          /* Bit Access       */
    uint8  BEF:1;                                          /* BEF              */
    uint8  EWF:1;                                          /* EWF              */
    uint8  EPF:1;                                          /* EPF              */
    uint8  BOEF:1;                                         /* BOEF             */
    uint8  BORF:1;                                         /* BORF             */
    uint8  OVLF:1;                                         /* OVLF             */
    uint8  BLF:1;                                          /* BLF              */
    uint8  ALF:1;                                          /* ALF              */
    uint8  SERR:1;                                         /* SERR             */
    uint8  FERR:1;                                         /* FERR             */
    uint8  AERR:1;                                         /* AERR             */
    uint8  CERR:1;                                         /* CERR             */
    uint8  B1ERR:1;                                        /* B1ERR            */
    uint8  B0ERR:1;                                        /* B0ERR            */
    uint8  ADERR:1;                                        /* ADERR            */
    uint8  :1;                                             /* Reserved Bits    */
    const uint16 CRCREG:15;                                /* CRCREG[30:16]    */
    uint8  :1;                                             /* Reserved Bits    */
} __type389;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TPRI:1;                                         /* TPRI             */
    uint8  DCE:1;                                          /* DCE              */
    uint8  DRE:1;                                          /* DRE              */
    uint8  MME:1;                                          /* MME              */
    uint8  DCS:1;                                          /* DCS              */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  TSP:4;                                          /* TSP[11:8]        */
    uint8  TSSS:1;                                         /* TSSS             */
    uint8  TSBTCS:3;                                       /* TSBTCS[15:13]    */
    uint16 ITRCP:16;                                       /* ITRCP[31:16]     */
} __type390;
typedef struct 
{                                                          /* Bit Access       */
    uint8  GMDC:2;                                         /* GMDC[1:0]        */
    uint8  GSLPR:1;                                        /* GSLPR            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  DEIE:1;                                         /* DEIE             */
    uint8  MEIE:1;                                         /* MEIE             */
    uint8  THLEIE:1;                                       /* THLEIE           */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  TSRST:1;                                        /* TSRST            */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type391;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  GRSTSTS:1;                                /* GRSTSTS          */
    const uint8  GHLTSTS:1;                                /* GHLTSTS          */
    const uint8  GSLPSTS:1;                                /* GSLPSTS          */
    const uint8  GRAMINIT:1;                               /* GRAMINIT         */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type392;
typedef struct 
{                                                          /* Bit Access       */
    uint8  DEF:1;                                          /* DEF              */
    const uint8  MES:1;                                    /* MES              */
    const uint8  THLES:1;                                  /* THLES            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type393;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 TS:16;                                    /* TS[15:0]         */
    uint16 :16;                                            /* Reserved Bits    */
} __type394;
typedef struct 
{                                                          /* Bit Access       */
    uint8  AFLPN:5;                                        /* AFLPN[4:0]       */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  AFLDAE:1;                                       /* AFLDAE           */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type395;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  RNC1:8;                                         /* RNC1[23:16]      */
    uint8  RNC0:8;                                         /* RNC0[31:24]      */
} __type396;
typedef struct 
{                                                          /* Bit Access       */
    uint8  NRXMB:8;                                        /* NRXMB[7:0]       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type397;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RMNS0:1;                                        /* RMNS0            */
    uint8  RMNS1:1;                                        /* RMNS1            */
    uint8  RMNS2:1;                                        /* RMNS2            */
    uint8  RMNS3:1;                                        /* RMNS3            */
    uint8  RMNS4:1;                                        /* RMNS4            */
    uint8  RMNS5:1;                                        /* RMNS5            */
    uint8  RMNS6:1;                                        /* RMNS6            */
    uint8  RMNS7:1;                                        /* RMNS7            */
    uint8  RMNS8:1;                                        /* RMNS8            */
    uint8  RMNS9:1;                                        /* RMNS9            */
    uint8  RMNS10:1;                                       /* RMNS10           */
    uint8  RMNS11:1;                                       /* RMNS11           */
    uint8  RMNS12:1;                                       /* RMNS12           */
    uint8  RMNS13:1;                                       /* RMNS13           */
    uint8  RMNS14:1;                                       /* RMNS14           */
    uint8  RMNS15:1;                                       /* RMNS15           */
    uint8  RMNS16:1;                                       /* RMNS16           */
    uint8  RMNS17:1;                                       /* RMNS17           */
    uint8  RMNS18:1;                                       /* RMNS18           */
    uint8  RMNS19:1;                                       /* RMNS19           */
    uint8  RMNS20:1;                                       /* RMNS20           */
    uint8  RMNS21:1;                                       /* RMNS21           */
    uint8  RMNS22:1;                                       /* RMNS22           */
    uint8  RMNS23:1;                                       /* RMNS23           */
    uint8  RMNS24:1;                                       /* RMNS24           */
    uint8  RMNS25:1;                                       /* RMNS25           */
    uint8  RMNS26:1;                                       /* RMNS26           */
    uint8  RMNS27:1;                                       /* RMNS27           */
    uint8  RMNS28:1;                                       /* RMNS28           */
    uint8  RMNS29:1;                                       /* RMNS29           */
    uint8  RMNS30:1;                                       /* RMNS30           */
    uint8  RMNS31:1;                                       /* RMNS31           */
} __type398;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RFE:1;                                          /* RFE              */
    uint8  RFIE:1;                                         /* RFIE             */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  RFDC:3;                                         /* RFDC[10:8]       */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  RFIM:1;                                         /* RFIM             */
    uint8  RFIGCV:3;                                       /* RFIGCV[15:13]    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type399;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RFEMP:1;                                  /* RFEMP            */
    const uint8  RFFLL:1;                                  /* RFFLL            */
    uint8  RFMLT:1;                                        /* RFMLT            */
    uint8  RFIF:1;                                         /* RFIF             */
    uint8  :4;                                             /* Reserved Bits    */
    const uint8  RFMC:8;                                   /* RFMC[15:8]       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type400;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RFPC:8;                                         /* RFPC[7:0]        */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type401;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CFE:1;                                          /* CFE              */
    uint8  CFRXIE:1;                                       /* CFRXIE           */
    uint8  CFTXIE:1;                                       /* CFTXIE           */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  CFDC:3;                                         /* CFDC[10:8]       */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  CFIM:1;                                         /* CFIM             */
    uint8  CFIGCV:3;                                       /* CFIGCV[15:13]    */
    uint8  CFM:2;                                          /* CFM[17:16]       */
    uint8  CFITSS:1;                                       /* CFITSS           */
    uint8  CFITR:1;                                        /* CFITR            */
    uint8  CFTML:4;                                        /* CFTML[23:20]     */
    uint8  CFITT:8;                                        /* CFITT[31:24]     */
} __type402;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  CFEMP:1;                                  /* CFEMP            */
    const uint8  CFFLL:1;                                  /* CFFLL            */
    uint8  CFMLT:1;                                        /* CFMLT            */
    uint8  CFRXIF:1;                                       /* CFRXIF           */
    uint8  CFTXIF:1;                                       /* CFTXIF           */
    uint8  :3;                                             /* Reserved Bits    */
    const uint8  CFMC:8;                                   /* CFMC[15:8]       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type403;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CFPC:8;                                         /* CFPC[7:0]        */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type404;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RF0EMP:1;                                 /* RF0EMP           */
    const uint8  RF1EMP:1;                                 /* RF1EMP           */
    const uint8  RF2EMP:1;                                 /* RF2EMP           */
    const uint8  RF3EMP:1;                                 /* RF3EMP           */
    const uint8  RF4EMP:1;                                 /* RF4EMP           */
    const uint8  RF5EMP:1;                                 /* RF5EMP           */
    const uint8  RF6EMP:1;                                 /* RF6EMP           */
    const uint8  RF7EMP:1;                                 /* RF7EMP           */
    const uint8  CF0EMP:1;                                 /* CF0EMP           */
    const uint8  CF1EMP:1;                                 /* CF1EMP           */
    const uint8  CF2EMP:1;                                 /* CF2EMP           */
    const uint8  CF3EMP:1;                                 /* CF3EMP           */
    const uint8  CF4EMP:1;                                 /* CF4EMP           */
    const uint8  CF5EMP:1;                                 /* CF5EMP           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type405;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RF0FLL:1;                                 /* RF0FLL           */
    const uint8  RF1FLL:1;                                 /* RF1FLL           */
    const uint8  RF2FLL:1;                                 /* RF2FLL           */
    const uint8  RF3FLL:1;                                 /* RF3FLL           */
    const uint8  RF4FLL:1;                                 /* RF4FLL           */
    const uint8  RF5FLL:1;                                 /* RF5FLL           */
    const uint8  RF6FLL:1;                                 /* RF6FLL           */
    const uint8  RF7FLL:1;                                 /* RF7FLL           */
    const uint8  CF0FLL:1;                                 /* CF0FLL           */
    const uint8  CF1FLL:1;                                 /* CF1FLL           */
    const uint8  CF2FLL:1;                                 /* CF2FLL           */
    const uint8  CF3FLL:1;                                 /* CF3FLL           */
    const uint8  CF4FLL:1;                                 /* CF4FLL           */
    const uint8  CF5FLL:1;                                 /* CF5FLL           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type406;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RF0MLT:1;                                 /* RF0MLT           */
    const uint8  RF1MLT:1;                                 /* RF1MLT           */
    const uint8  RF2MLT:1;                                 /* RF2MLT           */
    const uint8  RF3MLT:1;                                 /* RF3MLT           */
    const uint8  RF4MLT:1;                                 /* RF4MLT           */
    const uint8  RF5MLT:1;                                 /* RF5MLT           */
    const uint8  RF6MLT:1;                                 /* RF6MLT           */
    const uint8  RF7MLT:1;                                 /* RF7MLT           */
    const uint8  CF0MLT:1;                                 /* CF0MLT           */
    const uint8  CF1MLT:1;                                 /* CF1MLT           */
    const uint8  CF2MLT:1;                                 /* CF2MLT           */
    const uint8  CF3MLT:1;                                 /* CF3MLT           */
    const uint8  CF4MLT:1;                                 /* CF4MLT           */
    const uint8  CF5MLT:1;                                 /* CF5MLT           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type407;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RF0IF:1;                                  /* RF0IF            */
    const uint8  RF1IF:1;                                  /* RF1IF            */
    const uint8  RF2IF:1;                                  /* RF2IF            */
    const uint8  RF3IF:1;                                  /* RF3IF            */
    const uint8  RF4IF:1;                                  /* RF4IF            */
    const uint8  RF5IF:1;                                  /* RF5IF            */
    const uint8  RF6IF:1;                                  /* RF6IF            */
    const uint8  RF7IF:1;                                  /* RF7IF            */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type408;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  CF0RXIF:1;                                /* CF0RXIF          */
    const uint8  CF1RXIF:1;                                /* CF1RXIF          */
    const uint8  CF2RXIF:1;                                /* CF2RXIF          */
    const uint8  CF3RXIF:1;                                /* CF3RXIF          */
    const uint8  CF4RXIF:1;                                /* CF4RXIF          */
    const uint8  CF5RXIF:1;                                /* CF5RXIF          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type409;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  CF0TXIF:1;                                /* CF0TXIF          */
    const uint8  CF1TXIF:1;                                /* CF1TXIF          */
    const uint8  CF2TXIF:1;                                /* CF2TXIF          */
    const uint8  CF3TXIF:1;                                /* CF3TXIF          */
    const uint8  CF4TXIF:1;                                /* CF4TXIF          */
    const uint8  CF5TXIF:1;                                /* CF5TXIF          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type410;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TMTR:1;                                         /* TMTR             */
    uint8  TMTAR:1;                                        /* TMTAR            */
    uint8  TMOM:1;                                         /* TMOM             */
    uint8  :5;                                             /* Reserved Bits    */
} __type411;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TMTSTS:1;                                 /* TMTSTS           */
    uint8  TMTRF:2;                                        /* TMTRF[2:1]       */
    const uint8  TMTRM:1;                                  /* TMTRM            */
    const uint8  TMTARM:1;                                 /* TMTARM           */
    uint8  :3;                                             /* Reserved Bits    */
} __type412;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TMTRSTS0:1;                               /* TMTRSTS0         */
    const uint8  TMTRSTS1:1;                               /* TMTRSTS1         */
    const uint8  TMTRSTS2:1;                               /* TMTRSTS2         */
    const uint8  TMTRSTS3:1;                               /* TMTRSTS3         */
    const uint8  TMTRSTS4:1;                               /* TMTRSTS4         */
    const uint8  TMTRSTS5:1;                               /* TMTRSTS5         */
    const uint8  TMTRSTS6:1;                               /* TMTRSTS6         */
    const uint8  TMTRSTS7:1;                               /* TMTRSTS7         */
    const uint8  TMTRSTS8:1;                               /* TMTRSTS8         */
    const uint8  TMTRSTS9:1;                               /* TMTRSTS9         */
    const uint8  TMTRSTS10:1;                              /* TMTRSTS10        */
    const uint8  TMTRSTS11:1;                              /* TMTRSTS11        */
    const uint8  TMTRSTS12:1;                              /* TMTRSTS12        */
    const uint8  TMTRSTS13:1;                              /* TMTRSTS13        */
    const uint8  TMTRSTS14:1;                              /* TMTRSTS14        */
    const uint8  TMTRSTS15:1;                              /* TMTRSTS15        */
    const uint8  TMTRSTS16:1;                              /* TMTRSTS16        */
    const uint8  TMTRSTS17:1;                              /* TMTRSTS17        */
    const uint8  TMTRSTS18:1;                              /* TMTRSTS18        */
    const uint8  TMTRSTS19:1;                              /* TMTRSTS19        */
    const uint8  TMTRSTS20:1;                              /* TMTRSTS20        */
    const uint8  TMTRSTS21:1;                              /* TMTRSTS21        */
    const uint8  TMTRSTS22:1;                              /* TMTRSTS22        */
    const uint8  TMTRSTS23:1;                              /* TMTRSTS23        */
    const uint8  TMTRSTS24:1;                              /* TMTRSTS24        */
    const uint8  TMTRSTS25:1;                              /* TMTRSTS25        */
    const uint8  TMTRSTS26:1;                              /* TMTRSTS26        */
    const uint8  TMTRSTS27:1;                              /* TMTRSTS27        */
    const uint8  TMTRSTS28:1;                              /* TMTRSTS28        */
    const uint8  TMTRSTS29:1;                              /* TMTRSTS29        */
    const uint8  TMTRSTS30:1;                              /* TMTRSTS30        */
    const uint8  TMTRSTS31:1;                              /* TMTRSTS31        */
} __type413;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TMTARSTS0:1;                              /* TMTARSTS0        */
    const uint8  TMTARSTS1:1;                              /* TMTARSTS1        */
    const uint8  TMTARSTS2:1;                              /* TMTARSTS2        */
    const uint8  TMTARSTS3:1;                              /* TMTARSTS3        */
    const uint8  TMTARSTS4:1;                              /* TMTARSTS4        */
    const uint8  TMTARSTS5:1;                              /* TMTARSTS5        */
    const uint8  TMTARSTS6:1;                              /* TMTARSTS6        */
    const uint8  TMTARSTS7:1;                              /* TMTARSTS7        */
    const uint8  TMTARSTS8:1;                              /* TMTARSTS8        */
    const uint8  TMTARSTS9:1;                              /* TMTARSTS9        */
    const uint8  TMTARSTS10:1;                             /* TMTARSTS10       */
    const uint8  TMTARSTS11:1;                             /* TMTARSTS11       */
    const uint8  TMTARSTS12:1;                             /* TMTARSTS12       */
    const uint8  TMTARSTS13:1;                             /* TMTARSTS13       */
    const uint8  TMTARSTS14:1;                             /* TMTARSTS14       */
    const uint8  TMTARSTS15:1;                             /* TMTARSTS15       */
    const uint8  TMTARSTS16:1;                             /* TMTARSTS16       */
    const uint8  TMTARSTS17:1;                             /* TMTARSTS17       */
    const uint8  TMTARSTS18:1;                             /* TMTARSTS18       */
    const uint8  TMTARSTS19:1;                             /* TMTARSTS19       */
    const uint8  TMTARSTS20:1;                             /* TMTARSTS20       */
    const uint8  TMTARSTS21:1;                             /* TMTARSTS21       */
    const uint8  TMTARSTS22:1;                             /* TMTARSTS22       */
    const uint8  TMTARSTS23:1;                             /* TMTARSTS23       */
    const uint8  TMTARSTS24:1;                             /* TMTARSTS24       */
    const uint8  TMTARSTS25:1;                             /* TMTARSTS25       */
    const uint8  TMTARSTS26:1;                             /* TMTARSTS26       */
    const uint8  TMTARSTS27:1;                             /* TMTARSTS27       */
    const uint8  TMTARSTS28:1;                             /* TMTARSTS28       */
    const uint8  TMTARSTS29:1;                             /* TMTARSTS29       */
    const uint8  TMTARSTS30:1;                             /* TMTARSTS30       */
    const uint8  TMTARSTS31:1;                             /* TMTARSTS31       */
} __type414;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TMTCSTS0:1;                               /* TMTCSTS0         */
    const uint8  TMTCSTS1:1;                               /* TMTCSTS1         */
    const uint8  TMTCSTS2:1;                               /* TMTCSTS2         */
    const uint8  TMTCSTS3:1;                               /* TMTCSTS3         */
    const uint8  TMTCSTS4:1;                               /* TMTCSTS4         */
    const uint8  TMTCSTS5:1;                               /* TMTCSTS5         */
    const uint8  TMTCSTS6:1;                               /* TMTCSTS6         */
    const uint8  TMTCSTS7:1;                               /* TMTCSTS7         */
    const uint8  TMTCSTS8:1;                               /* TMTCSTS8         */
    const uint8  TMTCSTS9:1;                               /* TMTCSTS9         */
    const uint8  TMTCSTS10:1;                              /* TMTCSTS10        */
    const uint8  TMTCSTS11:1;                              /* TMTCSTS11        */
    const uint8  TMTCSTS12:1;                              /* TMTCSTS12        */
    const uint8  TMTCSTS13:1;                              /* TMTCSTS13        */
    const uint8  TMTCSTS14:1;                              /* TMTCSTS14        */
    const uint8  TMTCSTS15:1;                              /* TMTCSTS15        */
    const uint8  TMTCSTS16:1;                              /* TMTCSTS16        */
    const uint8  TMTCSTS17:1;                              /* TMTCSTS17        */
    const uint8  TMTCSTS18:1;                              /* TMTCSTS18        */
    const uint8  TMTCSTS19:1;                              /* TMTCSTS19        */
    const uint8  TMTCSTS20:1;                              /* TMTCSTS20        */
    const uint8  TMTCSTS21:1;                              /* TMTCSTS21        */
    const uint8  TMTCSTS22:1;                              /* TMTCSTS22        */
    const uint8  TMTCSTS23:1;                              /* TMTCSTS23        */
    const uint8  TMTCSTS24:1;                              /* TMTCSTS24        */
    const uint8  TMTCSTS25:1;                              /* TMTCSTS25        */
    const uint8  TMTCSTS26:1;                              /* TMTCSTS26        */
    const uint8  TMTCSTS27:1;                              /* TMTCSTS27        */
    const uint8  TMTCSTS28:1;                              /* TMTCSTS28        */
    const uint8  TMTCSTS29:1;                              /* TMTCSTS29        */
    const uint8  TMTCSTS30:1;                              /* TMTCSTS30        */
    const uint8  TMTCSTS31:1;                              /* TMTCSTS31        */
} __type415;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TMTASTS0:1;                               /* TMTASTS0         */
    const uint8  TMTASTS1:1;                               /* TMTASTS1         */
    const uint8  TMTASTS2:1;                               /* TMTASTS2         */
    const uint8  TMTASTS3:1;                               /* TMTASTS3         */
    const uint8  TMTASTS4:1;                               /* TMTASTS4         */
    const uint8  TMTASTS5:1;                               /* TMTASTS5         */
    const uint8  TMTASTS6:1;                               /* TMTASTS6         */
    const uint8  TMTASTS7:1;                               /* TMTASTS7         */
    const uint8  TMTASTS8:1;                               /* TMTASTS8         */
    const uint8  TMTASTS9:1;                               /* TMTASTS9         */
    const uint8  TMTASTS10:1;                              /* TMTASTS10        */
    const uint8  TMTASTS11:1;                              /* TMTASTS11        */
    const uint8  TMTASTS12:1;                              /* TMTASTS12        */
    const uint8  TMTASTS13:1;                              /* TMTASTS13        */
    const uint8  TMTASTS14:1;                              /* TMTASTS14        */
    const uint8  TMTASTS15:1;                              /* TMTASTS15        */
    const uint8  TMTASTS16:1;                              /* TMTASTS16        */
    const uint8  TMTASTS17:1;                              /* TMTASTS17        */
    const uint8  TMTASTS18:1;                              /* TMTASTS18        */
    const uint8  TMTASTS19:1;                              /* TMTASTS19        */
    const uint8  TMTASTS20:1;                              /* TMTASTS20        */
    const uint8  TMTASTS21:1;                              /* TMTASTS21        */
    const uint8  TMTASTS22:1;                              /* TMTASTS22        */
    const uint8  TMTASTS23:1;                              /* TMTASTS23        */
    const uint8  TMTASTS24:1;                              /* TMTASTS24        */
    const uint8  TMTASTS25:1;                              /* TMTASTS25        */
    const uint8  TMTASTS26:1;                              /* TMTASTS26        */
    const uint8  TMTASTS27:1;                              /* TMTASTS27        */
    const uint8  TMTASTS28:1;                              /* TMTASTS28        */
    const uint8  TMTASTS29:1;                              /* TMTASTS29        */
    const uint8  TMTASTS30:1;                              /* TMTASTS30        */
    const uint8  TMTASTS31:1;                              /* TMTASTS31        */
} __type416;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TMIE0:1;                                        /* TMIE0            */
    uint8  TMIE1:1;                                        /* TMIE1            */
    uint8  TMIE2:1;                                        /* TMIE2            */
    uint8  TMIE3:1;                                        /* TMIE3            */
    uint8  TMIE4:1;                                        /* TMIE4            */
    uint8  TMIE5:1;                                        /* TMIE5            */
    uint8  TMIE6:1;                                        /* TMIE6            */
    uint8  TMIE7:1;                                        /* TMIE7            */
    uint8  TMIE8:1;                                        /* TMIE8            */
    uint8  TMIE9:1;                                        /* TMIE9            */
    uint8  TMIE10:1;                                       /* TMIE10           */
    uint8  TMIE11:1;                                       /* TMIE11           */
    uint8  TMIE12:1;                                       /* TMIE12           */
    uint8  TMIE13:1;                                       /* TMIE13           */
    uint8  TMIE14:1;                                       /* TMIE14           */
    uint8  TMIE15:1;                                       /* TMIE15           */
    uint8  TMIE16:1;                                       /* TMIE16           */
    uint8  TMIE17:1;                                       /* TMIE17           */
    uint8  TMIE18:1;                                       /* TMIE18           */
    uint8  TMIE19:1;                                       /* TMIE19           */
    uint8  TMIE20:1;                                       /* TMIE20           */
    uint8  TMIE21:1;                                       /* TMIE21           */
    uint8  TMIE22:1;                                       /* TMIE22           */
    uint8  TMIE23:1;                                       /* TMIE23           */
    uint8  TMIE24:1;                                       /* TMIE24           */
    uint8  TMIE25:1;                                       /* TMIE25           */
    uint8  TMIE26:1;                                       /* TMIE26           */
    uint8  TMIE27:1;                                       /* TMIE27           */
    uint8  TMIE28:1;                                       /* TMIE28           */
    uint8  TMIE29:1;                                       /* TMIE29           */
    uint8  TMIE30:1;                                       /* TMIE30           */
    uint8  TMIE31:1;                                       /* TMIE31           */
} __type417;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TXQE:1;                                         /* TXQE             */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  TXQDC:4;                                        /* TXQDC[11:8]      */
    uint8  TXQIE:1;                                        /* TXQIE            */
    uint8  TXQIM:1;                                        /* TXQIM            */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type418;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TXQEMP:1;                                 /* TXQEMP           */
    const uint8  TXQFLL:1;                                 /* TXQFLL           */
    uint8  TXQIF:1;                                        /* TXQIF            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type419;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TXQPC:8;                                        /* TXQPC[7:0]       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type420;
typedef struct 
{                                                          /* Bit Access       */
    uint8  THLE:1;                                         /* THLE             */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  THLIE:1;                                        /* THLIE            */
    uint8  THLIM:1;                                        /* THLIM            */
    uint8  THLDTE:1;                                       /* THLDTE           */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type421;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  THLEMP:1;                                 /* THLEMP           */
    const uint8  THLFLL:1;                                 /* THLFLL           */
    uint8  THLELT:1;                                       /* THLELT           */
    uint8  THLIF:1;                                        /* THLIF            */
    uint8  :4;                                             /* Reserved Bits    */
    const uint8  THLMC:5;                                  /* THLMC[12:8]      */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type422;
typedef struct 
{                                                          /* Bit Access       */
    uint8  THLPC:8;                                        /* THLPC[7:0]       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type423;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TSIF0:1;                                  /* TSIF0            */
    const uint8  TAIF0:1;                                  /* TAIF0            */
    const uint8  TQIF0:1;                                  /* TQIF0            */
    const uint8  CFTIF0:1;                                 /* CFTIF0           */
    const uint8  THIF0:1;                                  /* THIF0            */
    uint8  :3;                                             /* Reserved Bits    */
    const uint8  TSIF1:1;                                  /* TSIF1            */
    const uint8  TAIF1:1;                                  /* TAIF1            */
    const uint8  TQIF1:1;                                  /* TQIF1            */
    const uint8  CFTIF1:1;                                 /* CFTIF1           */
    const uint8  THIF1:1;                                  /* THIF1            */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type424;
typedef struct 
{                                                          /* Bit Access       */
    uint8  C0ICBCE:1;                                      /* C0ICBCE          */
    uint8  C1ICBCE:1;                                      /* C1ICBCE          */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  RTMPS:7;                                        /* RTMPS[22:16]     */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type425;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ICBCTME:1;                                      /* ICBCTME          */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  RTME:1;                                         /* RTME             */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type426;
typedef struct 
{                                                          /* Bit Access       */
    uint16 LOCK:16;                                        /* LOCK[15:0]       */
    uint16 :16;                                            /* Reserved Bits    */
} __type427;
typedef struct 
{                                                          /* Bit Access       */
    uint32 GAFLID:29;                                      /* GAFLID[28:0]     */
    uint8  GAFLLB:1;                                       /* GAFLLB           */
    uint8  GAFLRTR:1;                                      /* GAFLRTR          */
    uint8  GAFLIDE:1;                                      /* GAFLIDE          */
} __type428;
typedef struct 
{                                                          /* Bit Access       */
    uint32 GAFLIDM:29;                                     /* GAFLIDM[28:0]    */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  GAFLRTRM:1;                                     /* GAFLRTRM         */
    uint8  GAFLIDEM:1;                                     /* GAFLIDEM         */
} __type429;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  GAFLRMDP:7;                                     /* GAFLRMDP[14:8]   */
    uint8  GAFLRMV:1;                                      /* GAFLRMV          */
    uint16 GAFLPTR:12;                                     /* GAFLPTR[27:16]   */
    uint8  GAFLDLC:4;                                      /* GAFLDLC[31:28]   */
} __type430;
typedef struct 
{                                                          /* Bit Access       */
    uint16 GAFLFDP:14;                                     /* GAFLFDP[13:0]    */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type431;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RMID:29;                                  /* RMID[28:0]       */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  RMRTR:1;                                  /* RMRTR            */
    const uint8  RMIDE:1;                                  /* RMIDE            */
} __type432;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 RMTS:16;                                  /* RMTS[15:0]       */
    const uint16 RMPTR:12;                                 /* RMPTR[27:16]     */
    const uint8  RMDLC:4;                                  /* RMDLC[31:28]     */
} __type433;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RMDB0:8;                                  /* RMDB0[7:0]       */
    const uint8  RMDB1:8;                                  /* RMDB1[15:8]      */
    const uint8  RMDB2:8;                                  /* RMDB2[23:16]     */
    const uint8  RMDB3:8;                                  /* RMDB3[31:24]     */
} __type434;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RMDB4:8;                                  /* RMDB4[7:0]       */
    const uint8  RMDB5:8;                                  /* RMDB5[15:8]      */
    const uint8  RMDB6:8;                                  /* RMDB6[23:16]     */
    const uint8  RMDB7:8;                                  /* RMDB7[31:24]     */
} __type435;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RFID:29;                                  /* RFID[28:0]       */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  RFRTR:1;                                  /* RFRTR            */
    const uint8  RFIDE:1;                                  /* RFIDE            */
} __type436;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 RFTS:16;                                  /* RFTS[15:0]       */
    const uint16 RFPTR:12;                                 /* RFPTR[27:16]     */
    const uint8  RFDLC:4;                                  /* RFDLC[31:28]     */
} __type437;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RFDB0:8;                                  /* RFDB0[7:0]       */
    const uint8  RFDB1:8;                                  /* RFDB1[15:8]      */
    const uint8  RFDB2:8;                                  /* RFDB2[23:16]     */
    const uint8  RFDB3:8;                                  /* RFDB3[31:24]     */
} __type438;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  RFDB4:8;                                  /* RFDB4[7:0]       */
    const uint8  RFDB5:8;                                  /* RFDB5[15:8]      */
    const uint8  RFDB6:8;                                  /* RFDB6[23:16]     */
    const uint8  RFDB7:8;                                  /* RFDB7[31:24]     */
} __type439;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CFID:29;                                        /* CFID[28:0]       */
    uint8  THLEN:1;                                        /* THLEN            */
    uint8  CFRTR:1;                                        /* CFRTR            */
    uint8  CFIDE:1;                                        /* CFIDE            */
} __type440;
typedef struct 
{                                                          /* Bit Access       */
    uint16 CFTS:16;                                        /* CFTS[15:0]       */
    uint16 CFPTR:12;                                       /* CFPTR[27:16]     */
    uint8  CFDLC:4;                                        /* CFDLC[31:28]     */
} __type441;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CFDB0:8;                                        /* CFDB0[7:0]       */
    uint8  CFDB1:8;                                        /* CFDB1[15:8]      */
    uint8  CFDB2:8;                                        /* CFDB2[23:16]     */
    uint8  CFDB3:8;                                        /* CFDB3[31:24]     */
} __type442;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CFDB4:8;                                        /* CFDB4[7:0]       */
    uint8  CFDB5:8;                                        /* CFDB5[15:8]      */
    uint8  CFDB6:8;                                        /* CFDB6[23:16]     */
    uint8  CFDB7:8;                                        /* CFDB7[31:24]     */
} __type443;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TMID:29;                                        /* TMID[28:0]       */
    uint8  THLEN:1;                                        /* THLEN            */
    uint8  TMRTR:1;                                        /* TMRTR            */
    uint8  TMIDE:1;                                        /* TMIDE            */
} __type444;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  TMPTR:8;                                        /* TMPTR[23:16]     */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  TMDLC:4;                                        /* TMDLC[31:28]     */
} __type445;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TMDB0:8;                                        /* TMDB0[7:0]       */
    uint8  TMDB1:8;                                        /* TMDB1[15:8]      */
    uint8  TMDB2:8;                                        /* TMDB2[23:16]     */
    uint8  TMDB3:8;                                        /* TMDB3[31:24]     */
} __type446;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TMDB4:8;                                        /* TMDB4[7:0]       */
    uint8  TMDB5:8;                                        /* TMDB5[15:8]      */
    uint8  TMDB6:8;                                        /* TMDB6[23:16]     */
    uint8  TMDB7:8;                                        /* TMDB7[31:24]     */
} __type447;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  BT:3;                                     /* BT[2:0]          */
    const uint8  BN:4;                                     /* BN[6:3]          */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  TID:8;                                    /* TID[15:8]        */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type448;
typedef struct 
{                                                          /* Bit Access       */
    uint32 RDTA:32;                                        /* RDTA[31:0]       */
} __type449;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type386 BIT;                                         /* Bit Access       */
} __type1665;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type387 BIT;                                         /* Bit Access       */
} __type1666;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type388 BIT;                                   /* Bit Access       */
} __type1667;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type389 BIT;                                         /* Bit Access       */
} __type1668;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type390 BIT;                                         /* Bit Access       */
} __type1669;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type391 BIT;                                         /* Bit Access       */
} __type1670;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type392 BIT;                                   /* Bit Access       */
} __type1671;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type393 BIT;                                         /* Bit Access       */
} __type1672;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    const __type394 BIT;                                   /* Bit Access       */
} __type1673;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type395 BIT;                                         /* Bit Access       */
} __type1674;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type396 BIT;                                         /* Bit Access       */
} __type1675;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type397 BIT;                                         /* Bit Access       */
} __type1676;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type398 BIT;                                         /* Bit Access       */
} __type1677;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type399 BIT;                                         /* Bit Access       */
} __type1678;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type400 BIT;                                         /* Bit Access       */
} __type1679;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type401 BIT;                                         /* Bit Access       */
} __type1680;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type402 BIT;                                         /* Bit Access       */
} __type1681;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type403 BIT;                                         /* Bit Access       */
} __type1682;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type404 BIT;                                         /* Bit Access       */
} __type1683;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type405 BIT;                                   /* Bit Access       */
} __type1684;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type406 BIT;                                   /* Bit Access       */
} __type1685;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type407 BIT;                                   /* Bit Access       */
} __type1686;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type408 BIT;                                   /* Bit Access       */
} __type1687;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type409 BIT;                                   /* Bit Access       */
} __type1688;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type410 BIT;                                   /* Bit Access       */
} __type1689;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type411 BIT;                                         /* Bit Access       */
} __type1690;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type412 BIT;                                         /* Bit Access       */
} __type1691;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type413 BIT;                                   /* Bit Access       */
} __type1692;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type414 BIT;                                   /* Bit Access       */
} __type1693;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type415 BIT;                                   /* Bit Access       */
} __type1694;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type416 BIT;                                   /* Bit Access       */
} __type1695;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type417 BIT;                                         /* Bit Access       */
} __type1696;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type418 BIT;                                         /* Bit Access       */
} __type1697;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type419 BIT;                                         /* Bit Access       */
} __type1698;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type420 BIT;                                         /* Bit Access       */
} __type1699;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type421 BIT;                                         /* Bit Access       */
} __type1700;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type422 BIT;                                         /* Bit Access       */
} __type1701;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type423 BIT;                                         /* Bit Access       */
} __type1702;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type424 BIT;                                   /* Bit Access       */
} __type1703;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type425 BIT;                                         /* Bit Access       */
} __type1704;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type426 BIT;                                         /* Bit Access       */
} __type1705;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    __type427 BIT;                                         /* Bit Access       */
} __type1706;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type428 BIT;                                         /* Bit Access       */
} __type1707;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type429 BIT;                                         /* Bit Access       */
} __type1708;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type430 BIT;                                         /* Bit Access       */
} __type1709;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type431 BIT;                                         /* Bit Access       */
} __type1710;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type432 BIT;                                   /* Bit Access       */
} __type1711;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type433 BIT;                                   /* Bit Access       */
} __type1712;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type434 BIT;                                   /* Bit Access       */
} __type1713;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type435 BIT;                                   /* Bit Access       */
} __type1714;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type436 BIT;                                   /* Bit Access       */
} __type1715;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type437 BIT;                                   /* Bit Access       */
} __type1716;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type438 BIT;                                   /* Bit Access       */
} __type1717;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type439 BIT;                                   /* Bit Access       */
} __type1718;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type440 BIT;                                         /* Bit Access       */
} __type1719;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type441 BIT;                                         /* Bit Access       */
} __type1720;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type442 BIT;                                         /* Bit Access       */
} __type1721;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type443 BIT;                                         /* Bit Access       */
} __type1722;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type444 BIT;                                         /* Bit Access       */
} __type1723;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type445 BIT;                                         /* Bit Access       */
} __type1724;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type446 BIT;                                         /* Bit Access       */
} __type1725;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type447 BIT;                                         /* Bit Access       */
} __type1726;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    const __type448 BIT;                                   /* Bit Access       */
} __type1727;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type449 BIT;                                         /* Bit Access       */
} __type1728;

typedef struct 
{                                                          /* Module           */
    __type1665 C0CFG;                                      /* C0CFG            */
    __type1666 C0CTR;                                      /* C0CTR            */
    const __type1667 C0STS;                                /* C0STS            */
    __type1668 C0ERFL;                                     /* C0ERFL           */
    __type1665 C1CFG;                                      /* C1CFG            */
    __type1666 C1CTR;                                      /* C1CTR            */
    const __type1667 C1STS;                                /* C1STS            */
    __type1668 C1ERFL;                                     /* C1ERFL           */
    uint8  dummy235[100];                                  /* Reserved         */
    __type1669 GCFG;                                       /* GCFG             */
    __type1670 GCTR;                                       /* GCTR             */
    const __type1671 GSTS;                                 /* GSTS             */
    __type1672 GERFL;                                      /* GERFL            */
    const __type1673 GTSC;                                 /* GTSC             */
    __type1674 GAFLECTR;                                   /* GAFLECTR         */
    __type1675 GAFLCFG0;                                   /* GAFLCFG0         */
    uint8  dummy236[4];                                    /* Reserved         */
    __type1676 RMNB;                                       /* RMNB             */
    __type1677 RMND0;                                      /* RMND0            */
    uint8  dummy237[12];                                   /* Reserved         */
    __type1678 RFCC0;                                      /* RFCC0            */
    __type1678 RFCC1;                                      /* RFCC1            */
    __type1678 RFCC2;                                      /* RFCC2            */
    __type1678 RFCC3;                                      /* RFCC3            */
    __type1678 RFCC4;                                      /* RFCC4            */
    __type1678 RFCC5;                                      /* RFCC5            */
    __type1678 RFCC6;                                      /* RFCC6            */
    __type1678 RFCC7;                                      /* RFCC7            */
    __type1679 RFSTS0;                                     /* RFSTS0           */
    __type1679 RFSTS1;                                     /* RFSTS1           */
    __type1679 RFSTS2;                                     /* RFSTS2           */
    __type1679 RFSTS3;                                     /* RFSTS3           */
    __type1679 RFSTS4;                                     /* RFSTS4           */
    __type1679 RFSTS5;                                     /* RFSTS5           */
    __type1679 RFSTS6;                                     /* RFSTS6           */
    __type1679 RFSTS7;                                     /* RFSTS7           */
    __type1680 RFPCTR0;                                    /* RFPCTR0          */
    __type1680 RFPCTR1;                                    /* RFPCTR1          */
    __type1680 RFPCTR2;                                    /* RFPCTR2          */
    __type1680 RFPCTR3;                                    /* RFPCTR3          */
    __type1680 RFPCTR4;                                    /* RFPCTR4          */
    __type1680 RFPCTR5;                                    /* RFPCTR5          */
    __type1680 RFPCTR6;                                    /* RFPCTR6          */
    __type1680 RFPCTR7;                                    /* RFPCTR7          */
    __type1681 CFCC0;                                      /* CFCC0            */
    __type1681 CFCC1;                                      /* CFCC1            */
    __type1681 CFCC2;                                      /* CFCC2            */
    __type1681 CFCC3;                                      /* CFCC3            */
    __type1681 CFCC4;                                      /* CFCC4            */
    __type1681 CFCC5;                                      /* CFCC5            */
    uint8  dummy238[72];                                   /* Reserved         */
    __type1682 CFSTS0;                                     /* CFSTS0           */
    __type1682 CFSTS1;                                     /* CFSTS1           */
    __type1682 CFSTS2;                                     /* CFSTS2           */
    __type1682 CFSTS3;                                     /* CFSTS3           */
    __type1682 CFSTS4;                                     /* CFSTS4           */
    __type1682 CFSTS5;                                     /* CFSTS5           */
    uint8  dummy239[72];                                   /* Reserved         */
    __type1683 CFPCTR0;                                    /* CFPCTR0          */
    __type1683 CFPCTR1;                                    /* CFPCTR1          */
    __type1683 CFPCTR2;                                    /* CFPCTR2          */
    __type1683 CFPCTR3;                                    /* CFPCTR3          */
    __type1683 CFPCTR4;                                    /* CFPCTR4          */
    __type1683 CFPCTR5;                                    /* CFPCTR5          */
    uint8  dummy240[72];                                   /* Reserved         */
    const __type1684 FESTS;                                /* FESTS            */
    const __type1685 FFSTS;                                /* FFSTS            */
    const __type1686 FMSTS;                                /* FMSTS            */
    const __type1687 RFISTS;                               /* RFISTS           */
    const __type1688 CFRISTS;                              /* CFRISTS          */
    const __type1689 CFTISTS;                              /* CFTISTS          */
    __type1690 TMC0;                                       /* TMC0             */
    __type1690 TMC1;                                       /* TMC1             */
    __type1690 TMC2;                                       /* TMC2             */
    __type1690 TMC3;                                       /* TMC3             */
    __type1690 TMC4;                                       /* TMC4             */
    __type1690 TMC5;                                       /* TMC5             */
    __type1690 TMC6;                                       /* TMC6             */
    __type1690 TMC7;                                       /* TMC7             */
    __type1690 TMC8;                                       /* TMC8             */
    __type1690 TMC9;                                       /* TMC9             */
    __type1690 TMC10;                                      /* TMC10            */
    __type1690 TMC11;                                      /* TMC11            */
    __type1690 TMC12;                                      /* TMC12            */
    __type1690 TMC13;                                      /* TMC13            */
    __type1690 TMC14;                                      /* TMC14            */
    __type1690 TMC15;                                      /* TMC15            */
    __type1690 TMC16;                                      /* TMC16            */
    __type1690 TMC17;                                      /* TMC17            */
    __type1690 TMC18;                                      /* TMC18            */
    __type1690 TMC19;                                      /* TMC19            */
    __type1690 TMC20;                                      /* TMC20            */
    __type1690 TMC21;                                      /* TMC21            */
    __type1690 TMC22;                                      /* TMC22            */
    __type1690 TMC23;                                      /* TMC23            */
    __type1690 TMC24;                                      /* TMC24            */
    __type1690 TMC25;                                      /* TMC25            */
    __type1690 TMC26;                                      /* TMC26            */
    __type1690 TMC27;                                      /* TMC27            */
    __type1690 TMC28;                                      /* TMC28            */
    __type1690 TMC29;                                      /* TMC29            */
    __type1690 TMC30;                                      /* TMC30            */
    __type1690 TMC31;                                      /* TMC31            */
    uint8  dummy241[96];                                   /* Reserved         */
    __type1691 TMSTS0;                                     /* TMSTS0           */
    __type1691 TMSTS1;                                     /* TMSTS1           */
    __type1691 TMSTS2;                                     /* TMSTS2           */
    __type1691 TMSTS3;                                     /* TMSTS3           */
    __type1691 TMSTS4;                                     /* TMSTS4           */
    __type1691 TMSTS5;                                     /* TMSTS5           */
    __type1691 TMSTS6;                                     /* TMSTS6           */
    __type1691 TMSTS7;                                     /* TMSTS7           */
    __type1691 TMSTS8;                                     /* TMSTS8           */
    __type1691 TMSTS9;                                     /* TMSTS9           */
    __type1691 TMSTS10;                                    /* TMSTS10          */
    __type1691 TMSTS11;                                    /* TMSTS11          */
    __type1691 TMSTS12;                                    /* TMSTS12          */
    __type1691 TMSTS13;                                    /* TMSTS13          */
    __type1691 TMSTS14;                                    /* TMSTS14          */
    __type1691 TMSTS15;                                    /* TMSTS15          */
    __type1691 TMSTS16;                                    /* TMSTS16          */
    __type1691 TMSTS17;                                    /* TMSTS17          */
    __type1691 TMSTS18;                                    /* TMSTS18          */
    __type1691 TMSTS19;                                    /* TMSTS19          */
    __type1691 TMSTS20;                                    /* TMSTS20          */
    __type1691 TMSTS21;                                    /* TMSTS21          */
    __type1691 TMSTS22;                                    /* TMSTS22          */
    __type1691 TMSTS23;                                    /* TMSTS23          */
    __type1691 TMSTS24;                                    /* TMSTS24          */
    __type1691 TMSTS25;                                    /* TMSTS25          */
    __type1691 TMSTS26;                                    /* TMSTS26          */
    __type1691 TMSTS27;                                    /* TMSTS27          */
    __type1691 TMSTS28;                                    /* TMSTS28          */
    __type1691 TMSTS29;                                    /* TMSTS29          */
    __type1691 TMSTS30;                                    /* TMSTS30          */
    __type1691 TMSTS31;                                    /* TMSTS31          */
    uint8  dummy242[96];                                   /* Reserved         */
    const __type1692 TMTRSTS0;                             /* TMTRSTS0         */
    uint8  dummy243[12];                                   /* Reserved         */
    const __type1693 TMTARSTS0;                            /* TMTARSTS0        */
    uint8  dummy244[12];                                   /* Reserved         */
    const __type1694 TMTCSTS0;                             /* TMTCSTS0         */
    uint8  dummy245[12];                                   /* Reserved         */
    const __type1695 TMTASTS0;                             /* TMTASTS0         */
    uint8  dummy246[12];                                   /* Reserved         */
    __type1696 TMIEC0;                                     /* TMIEC0           */
    uint8  dummy247[12];                                   /* Reserved         */
    __type1697 TXQCC0;                                     /* TXQCC0           */
    __type1697 TXQCC1;                                     /* TXQCC1           */
    uint8  dummy248[24];                                   /* Reserved         */
    __type1698 TXQSTS0;                                    /* TXQSTS0          */
    __type1698 TXQSTS1;                                    /* TXQSTS1          */
    uint8  dummy249[24];                                   /* Reserved         */
    __type1699 TXQPCTR0;                                   /* TXQPCTR0         */
    __type1699 TXQPCTR1;                                   /* TXQPCTR1         */
    uint8  dummy250[24];                                   /* Reserved         */
    __type1700 THLCC0;                                     /* THLCC0           */
    __type1700 THLCC1;                                     /* THLCC1           */
    uint8  dummy251[24];                                   /* Reserved         */
    __type1701 THLSTS0;                                    /* THLSTS0          */
    __type1701 THLSTS1;                                    /* THLSTS1          */
    uint8  dummy252[24];                                   /* Reserved         */
    __type1702 THLPCTR0;                                   /* THLPCTR0         */
    __type1702 THLPCTR1;                                   /* THLPCTR1         */
    uint8  dummy253[24];                                   /* Reserved         */
    const __type1703 GTINTSTS0;                            /* GTINTSTS0        */
    uint8  dummy254[4];                                    /* Reserved         */
    __type1704 GTSTCFG;                                    /* GTSTCFG          */
    __type1705 GTSTCTR;                                    /* GTSTCTR          */
    uint8  dummy255[12];                                   /* Reserved         */
    __type1706 GLOCKK;                                     /* GLOCKK           */
    uint8  dummy256[128];                                  /* Reserved         */
    __type1707 GAFLID0;                                    /* GAFLID0          */
    __type1708 GAFLM0;                                     /* GAFLM0           */
    __type1709 GAFLP00;                                    /* GAFLP00          */
    __type1710 GAFLP10;                                    /* GAFLP10          */
    __type1707 GAFLID1;                                    /* GAFLID1          */
    __type1708 GAFLM1;                                     /* GAFLM1           */
    __type1709 GAFLP01;                                    /* GAFLP01          */
    __type1710 GAFLP11;                                    /* GAFLP11          */
    __type1707 GAFLID2;                                    /* GAFLID2          */
    __type1708 GAFLM2;                                     /* GAFLM2           */
    __type1709 GAFLP02;                                    /* GAFLP02          */
    __type1710 GAFLP12;                                    /* GAFLP12          */
    __type1707 GAFLID3;                                    /* GAFLID3          */
    __type1708 GAFLM3;                                     /* GAFLM3           */
    __type1709 GAFLP03;                                    /* GAFLP03          */
    __type1710 GAFLP13;                                    /* GAFLP13          */
    __type1707 GAFLID4;                                    /* GAFLID4          */
    __type1708 GAFLM4;                                     /* GAFLM4           */
    __type1709 GAFLP04;                                    /* GAFLP04          */
    __type1710 GAFLP14;                                    /* GAFLP14          */
    __type1707 GAFLID5;                                    /* GAFLID5          */
    __type1708 GAFLM5;                                     /* GAFLM5           */
    __type1709 GAFLP05;                                    /* GAFLP05          */
    __type1710 GAFLP15;                                    /* GAFLP15          */
    __type1707 GAFLID6;                                    /* GAFLID6          */
    __type1708 GAFLM6;                                     /* GAFLM6           */
    __type1709 GAFLP06;                                    /* GAFLP06          */
    __type1710 GAFLP16;                                    /* GAFLP16          */
    __type1707 GAFLID7;                                    /* GAFLID7          */
    __type1708 GAFLM7;                                     /* GAFLM7           */
    __type1709 GAFLP07;                                    /* GAFLP07          */
    __type1710 GAFLP17;                                    /* GAFLP17          */
    __type1707 GAFLID8;                                    /* GAFLID8          */
    __type1708 GAFLM8;                                     /* GAFLM8           */
    __type1709 GAFLP08;                                    /* GAFLP08          */
    __type1710 GAFLP18;                                    /* GAFLP18          */
    __type1707 GAFLID9;                                    /* GAFLID9          */
    __type1708 GAFLM9;                                     /* GAFLM9           */
    __type1709 GAFLP09;                                    /* GAFLP09          */
    __type1710 GAFLP19;                                    /* GAFLP19          */
    __type1707 GAFLID10;                                   /* GAFLID10         */
    __type1708 GAFLM10;                                    /* GAFLM10          */
    __type1709 GAFLP010;                                   /* GAFLP010         */
    __type1710 GAFLP110;                                   /* GAFLP110         */
    __type1707 GAFLID11;                                   /* GAFLID11         */
    __type1708 GAFLM11;                                    /* GAFLM11          */
    __type1709 GAFLP011;                                   /* GAFLP011         */
    __type1710 GAFLP111;                                   /* GAFLP111         */
    __type1707 GAFLID12;                                   /* GAFLID12         */
    __type1708 GAFLM12;                                    /* GAFLM12          */
    __type1709 GAFLP012;                                   /* GAFLP012         */
    __type1710 GAFLP112;                                   /* GAFLP112         */
    __type1707 GAFLID13;                                   /* GAFLID13         */
    __type1708 GAFLM13;                                    /* GAFLM13          */
    __type1709 GAFLP013;                                   /* GAFLP013         */
    __type1710 GAFLP113;                                   /* GAFLP113         */
    __type1707 GAFLID14;                                   /* GAFLID14         */
    __type1708 GAFLM14;                                    /* GAFLM14          */
    __type1709 GAFLP014;                                   /* GAFLP014         */
    __type1710 GAFLP114;                                   /* GAFLP114         */
    __type1707 GAFLID15;                                   /* GAFLID15         */
    __type1708 GAFLM15;                                    /* GAFLM15          */
    __type1709 GAFLP015;                                   /* GAFLP015         */
    __type1710 GAFLP115;                                   /* GAFLP115         */
    const __type1711 RMID0;                                /* RMID0            */
    const __type1712 RMPTR0;                               /* RMPTR0           */
    const __type1713 RMDF00;                               /* RMDF00           */
    const __type1714 RMDF10;                               /* RMDF10           */
    const __type1711 RMID1;                                /* RMID1            */
    const __type1712 RMPTR1;                               /* RMPTR1           */
    const __type1713 RMDF01;                               /* RMDF01           */
    const __type1714 RMDF11;                               /* RMDF11           */
    const __type1711 RMID2;                                /* RMID2            */
    const __type1712 RMPTR2;                               /* RMPTR2           */
    const __type1713 RMDF02;                               /* RMDF02           */
    const __type1714 RMDF12;                               /* RMDF12           */
    const __type1711 RMID3;                                /* RMID3            */
    const __type1712 RMPTR3;                               /* RMPTR3           */
    const __type1713 RMDF03;                               /* RMDF03           */
    const __type1714 RMDF13;                               /* RMDF13           */
    const __type1711 RMID4;                                /* RMID4            */
    const __type1712 RMPTR4;                               /* RMPTR4           */
    const __type1713 RMDF04;                               /* RMDF04           */
    const __type1714 RMDF14;                               /* RMDF14           */
    const __type1711 RMID5;                                /* RMID5            */
    const __type1712 RMPTR5;                               /* RMPTR5           */
    const __type1713 RMDF05;                               /* RMDF05           */
    const __type1714 RMDF15;                               /* RMDF15           */
    const __type1711 RMID6;                                /* RMID6            */
    const __type1712 RMPTR6;                               /* RMPTR6           */
    const __type1713 RMDF06;                               /* RMDF06           */
    const __type1714 RMDF16;                               /* RMDF16           */
    const __type1711 RMID7;                                /* RMID7            */
    const __type1712 RMPTR7;                               /* RMPTR7           */
    const __type1713 RMDF07;                               /* RMDF07           */
    const __type1714 RMDF17;                               /* RMDF17           */
    const __type1711 RMID8;                                /* RMID8            */
    const __type1712 RMPTR8;                               /* RMPTR8           */
    const __type1713 RMDF08;                               /* RMDF08           */
    const __type1714 RMDF18;                               /* RMDF18           */
    const __type1711 RMID9;                                /* RMID9            */
    const __type1712 RMPTR9;                               /* RMPTR9           */
    const __type1713 RMDF09;                               /* RMDF09           */
    const __type1714 RMDF19;                               /* RMDF19           */
    const __type1711 RMID10;                               /* RMID10           */
    const __type1712 RMPTR10;                              /* RMPTR10          */
    const __type1713 RMDF010;                              /* RMDF010          */
    const __type1714 RMDF110;                              /* RMDF110          */
    const __type1711 RMID11;                               /* RMID11           */
    const __type1712 RMPTR11;                              /* RMPTR11          */
    const __type1713 RMDF011;                              /* RMDF011          */
    const __type1714 RMDF111;                              /* RMDF111          */
    const __type1711 RMID12;                               /* RMID12           */
    const __type1712 RMPTR12;                              /* RMPTR12          */
    const __type1713 RMDF012;                              /* RMDF012          */
    const __type1714 RMDF112;                              /* RMDF112          */
    const __type1711 RMID13;                               /* RMID13           */
    const __type1712 RMPTR13;                              /* RMPTR13          */
    const __type1713 RMDF013;                              /* RMDF013          */
    const __type1714 RMDF113;                              /* RMDF113          */
    const __type1711 RMID14;                               /* RMID14           */
    const __type1712 RMPTR14;                              /* RMPTR14          */
    const __type1713 RMDF014;                              /* RMDF014          */
    const __type1714 RMDF114;                              /* RMDF114          */
    const __type1711 RMID15;                               /* RMID15           */
    const __type1712 RMPTR15;                              /* RMPTR15          */
    const __type1713 RMDF015;                              /* RMDF015          */
    const __type1714 RMDF115;                              /* RMDF115          */
    const __type1711 RMID16;                               /* RMID16           */
    const __type1712 RMPTR16;                              /* RMPTR16          */
    const __type1713 RMDF016;                              /* RMDF016          */
    const __type1714 RMDF116;                              /* RMDF116          */
    const __type1711 RMID17;                               /* RMID17           */
    const __type1712 RMPTR17;                              /* RMPTR17          */
    const __type1713 RMDF017;                              /* RMDF017          */
    const __type1714 RMDF117;                              /* RMDF117          */
    const __type1711 RMID18;                               /* RMID18           */
    const __type1712 RMPTR18;                              /* RMPTR18          */
    const __type1713 RMDF018;                              /* RMDF018          */
    const __type1714 RMDF118;                              /* RMDF118          */
    const __type1711 RMID19;                               /* RMID19           */
    const __type1712 RMPTR19;                              /* RMPTR19          */
    const __type1713 RMDF019;                              /* RMDF019          */
    const __type1714 RMDF119;                              /* RMDF119          */
    const __type1711 RMID20;                               /* RMID20           */
    const __type1712 RMPTR20;                              /* RMPTR20          */
    const __type1713 RMDF020;                              /* RMDF020          */
    const __type1714 RMDF120;                              /* RMDF120          */
    const __type1711 RMID21;                               /* RMID21           */
    const __type1712 RMPTR21;                              /* RMPTR21          */
    const __type1713 RMDF021;                              /* RMDF021          */
    const __type1714 RMDF121;                              /* RMDF121          */
    const __type1711 RMID22;                               /* RMID22           */
    const __type1712 RMPTR22;                              /* RMPTR22          */
    const __type1713 RMDF022;                              /* RMDF022          */
    const __type1714 RMDF122;                              /* RMDF122          */
    const __type1711 RMID23;                               /* RMID23           */
    const __type1712 RMPTR23;                              /* RMPTR23          */
    const __type1713 RMDF023;                              /* RMDF023          */
    const __type1714 RMDF123;                              /* RMDF123          */
    const __type1711 RMID24;                               /* RMID24           */
    const __type1712 RMPTR24;                              /* RMPTR24          */
    const __type1713 RMDF024;                              /* RMDF024          */
    const __type1714 RMDF124;                              /* RMDF124          */
    const __type1711 RMID25;                               /* RMID25           */
    const __type1712 RMPTR25;                              /* RMPTR25          */
    const __type1713 RMDF025;                              /* RMDF025          */
    const __type1714 RMDF125;                              /* RMDF125          */
    const __type1711 RMID26;                               /* RMID26           */
    const __type1712 RMPTR26;                              /* RMPTR26          */
    const __type1713 RMDF026;                              /* RMDF026          */
    const __type1714 RMDF126;                              /* RMDF126          */
    const __type1711 RMID27;                               /* RMID27           */
    const __type1712 RMPTR27;                              /* RMPTR27          */
    const __type1713 RMDF027;                              /* RMDF027          */
    const __type1714 RMDF127;                              /* RMDF127          */
    const __type1711 RMID28;                               /* RMID28           */
    const __type1712 RMPTR28;                              /* RMPTR28          */
    const __type1713 RMDF028;                              /* RMDF028          */
    const __type1714 RMDF128;                              /* RMDF128          */
    const __type1711 RMID29;                               /* RMID29           */
    const __type1712 RMPTR29;                              /* RMPTR29          */
    const __type1713 RMDF029;                              /* RMDF029          */
    const __type1714 RMDF129;                              /* RMDF129          */
    const __type1711 RMID30;                               /* RMID30           */
    const __type1712 RMPTR30;                              /* RMPTR30          */
    const __type1713 RMDF030;                              /* RMDF030          */
    const __type1714 RMDF130;                              /* RMDF130          */
    const __type1711 RMID31;                               /* RMID31           */
    const __type1712 RMPTR31;                              /* RMPTR31          */
    const __type1713 RMDF031;                              /* RMDF031          */
    const __type1714 RMDF131;                              /* RMDF131          */
    uint8  dummy257[1536];                                 /* Reserved         */
    const __type1715 RFID0;                                /* RFID0            */
    const __type1716 RFPTR0;                               /* RFPTR0           */
    const __type1717 RFDF00;                               /* RFDF00           */
    const __type1718 RFDF10;                               /* RFDF10           */
    const __type1715 RFID1;                                /* RFID1            */
    const __type1716 RFPTR1;                               /* RFPTR1           */
    const __type1717 RFDF01;                               /* RFDF01           */
    const __type1718 RFDF11;                               /* RFDF11           */
    const __type1715 RFID2;                                /* RFID2            */
    const __type1716 RFPTR2;                               /* RFPTR2           */
    const __type1717 RFDF02;                               /* RFDF02           */
    const __type1718 RFDF12;                               /* RFDF12           */
    const __type1715 RFID3;                                /* RFID3            */
    const __type1716 RFPTR3;                               /* RFPTR3           */
    const __type1717 RFDF03;                               /* RFDF03           */
    const __type1718 RFDF13;                               /* RFDF13           */
    const __type1715 RFID4;                                /* RFID4            */
    const __type1716 RFPTR4;                               /* RFPTR4           */
    const __type1717 RFDF04;                               /* RFDF04           */
    const __type1718 RFDF14;                               /* RFDF14           */
    const __type1715 RFID5;                                /* RFID5            */
    const __type1716 RFPTR5;                               /* RFPTR5           */
    const __type1717 RFDF05;                               /* RFDF05           */
    const __type1718 RFDF15;                               /* RFDF15           */
    const __type1715 RFID6;                                /* RFID6            */
    const __type1716 RFPTR6;                               /* RFPTR6           */
    const __type1717 RFDF06;                               /* RFDF06           */
    const __type1718 RFDF16;                               /* RFDF16           */
    const __type1715 RFID7;                                /* RFID7            */
    const __type1716 RFPTR7;                               /* RFPTR7           */
    const __type1717 RFDF07;                               /* RFDF07           */
    const __type1718 RFDF17;                               /* RFDF17           */
    __type1719 CFID0;                                      /* CFID0            */
    __type1720 CFPTR0;                                     /* CFPTR0           */
    __type1721 CFDF00;                                     /* CFDF00           */
    __type1722 CFDF10;                                     /* CFDF10           */
    __type1719 CFID1;                                      /* CFID1            */
    __type1720 CFPTR1;                                     /* CFPTR1           */
    __type1721 CFDF01;                                     /* CFDF01           */
    __type1722 CFDF11;                                     /* CFDF11           */
    __type1719 CFID2;                                      /* CFID2            */
    __type1720 CFPTR2;                                     /* CFPTR2           */
    __type1721 CFDF02;                                     /* CFDF02           */
    __type1722 CFDF12;                                     /* CFDF12           */
    __type1719 CFID3;                                      /* CFID3            */
    __type1720 CFPTR3;                                     /* CFPTR3           */
    __type1721 CFDF03;                                     /* CFDF03           */
    __type1722 CFDF13;                                     /* CFDF13           */
    __type1719 CFID4;                                      /* CFID4            */
    __type1720 CFPTR4;                                     /* CFPTR4           */
    __type1721 CFDF04;                                     /* CFDF04           */
    __type1722 CFDF14;                                     /* CFDF14           */
    __type1719 CFID5;                                      /* CFID5            */
    __type1720 CFPTR5;                                     /* CFPTR5           */
    __type1721 CFDF05;                                     /* CFDF05           */
    __type1722 CFDF15;                                     /* CFDF15           */
    uint8  dummy258[288];                                  /* Reserved         */
    __type1723 TMID0;                                      /* TMID0            */
    __type1724 TMPTR0;                                     /* TMPTR0           */
    __type1725 TMDF00;                                     /* TMDF00           */
    __type1726 TMDF10;                                     /* TMDF10           */
    __type1723 TMID1;                                      /* TMID1            */
    __type1724 TMPTR1;                                     /* TMPTR1           */
    __type1725 TMDF01;                                     /* TMDF01           */
    __type1726 TMDF11;                                     /* TMDF11           */
    __type1723 TMID2;                                      /* TMID2            */
    __type1724 TMPTR2;                                     /* TMPTR2           */
    __type1725 TMDF02;                                     /* TMDF02           */
    __type1726 TMDF12;                                     /* TMDF12           */
    __type1723 TMID3;                                      /* TMID3            */
    __type1724 TMPTR3;                                     /* TMPTR3           */
    __type1725 TMDF03;                                     /* TMDF03           */
    __type1726 TMDF13;                                     /* TMDF13           */
    __type1723 TMID4;                                      /* TMID4            */
    __type1724 TMPTR4;                                     /* TMPTR4           */
    __type1725 TMDF04;                                     /* TMDF04           */
    __type1726 TMDF14;                                     /* TMDF14           */
    __type1723 TMID5;                                      /* TMID5            */
    __type1724 TMPTR5;                                     /* TMPTR5           */
    __type1725 TMDF05;                                     /* TMDF05           */
    __type1726 TMDF15;                                     /* TMDF15           */
    __type1723 TMID6;                                      /* TMID6            */
    __type1724 TMPTR6;                                     /* TMPTR6           */
    __type1725 TMDF06;                                     /* TMDF06           */
    __type1726 TMDF16;                                     /* TMDF16           */
    __type1723 TMID7;                                      /* TMID7            */
    __type1724 TMPTR7;                                     /* TMPTR7           */
    __type1725 TMDF07;                                     /* TMDF07           */
    __type1726 TMDF17;                                     /* TMDF17           */
    __type1723 TMID8;                                      /* TMID8            */
    __type1724 TMPTR8;                                     /* TMPTR8           */
    __type1725 TMDF08;                                     /* TMDF08           */
    __type1726 TMDF18;                                     /* TMDF18           */
    __type1723 TMID9;                                      /* TMID9            */
    __type1724 TMPTR9;                                     /* TMPTR9           */
    __type1725 TMDF09;                                     /* TMDF09           */
    __type1726 TMDF19;                                     /* TMDF19           */
    __type1723 TMID10;                                     /* TMID10           */
    __type1724 TMPTR10;                                    /* TMPTR10          */
    __type1725 TMDF010;                                    /* TMDF010          */
    __type1726 TMDF110;                                    /* TMDF110          */
    __type1723 TMID11;                                     /* TMID11           */
    __type1724 TMPTR11;                                    /* TMPTR11          */
    __type1725 TMDF011;                                    /* TMDF011          */
    __type1726 TMDF111;                                    /* TMDF111          */
    __type1723 TMID12;                                     /* TMID12           */
    __type1724 TMPTR12;                                    /* TMPTR12          */
    __type1725 TMDF012;                                    /* TMDF012          */
    __type1726 TMDF112;                                    /* TMDF112          */
    __type1723 TMID13;                                     /* TMID13           */
    __type1724 TMPTR13;                                    /* TMPTR13          */
    __type1725 TMDF013;                                    /* TMDF013          */
    __type1726 TMDF113;                                    /* TMDF113          */
    __type1723 TMID14;                                     /* TMID14           */
    __type1724 TMPTR14;                                    /* TMPTR14          */
    __type1725 TMDF014;                                    /* TMDF014          */
    __type1726 TMDF114;                                    /* TMDF114          */
    __type1723 TMID15;                                     /* TMID15           */
    __type1724 TMPTR15;                                    /* TMPTR15          */
    __type1725 TMDF015;                                    /* TMDF015          */
    __type1726 TMDF115;                                    /* TMDF115          */
    __type1723 TMID16;                                     /* TMID16           */
    __type1724 TMPTR16;                                    /* TMPTR16          */
    __type1725 TMDF016;                                    /* TMDF016          */
    __type1726 TMDF116;                                    /* TMDF116          */
    __type1723 TMID17;                                     /* TMID17           */
    __type1724 TMPTR17;                                    /* TMPTR17          */
    __type1725 TMDF017;                                    /* TMDF017          */
    __type1726 TMDF117;                                    /* TMDF117          */
    __type1723 TMID18;                                     /* TMID18           */
    __type1724 TMPTR18;                                    /* TMPTR18          */
    __type1725 TMDF018;                                    /* TMDF018          */
    __type1726 TMDF118;                                    /* TMDF118          */
    __type1723 TMID19;                                     /* TMID19           */
    __type1724 TMPTR19;                                    /* TMPTR19          */
    __type1725 TMDF019;                                    /* TMDF019          */
    __type1726 TMDF119;                                    /* TMDF119          */
    __type1723 TMID20;                                     /* TMID20           */
    __type1724 TMPTR20;                                    /* TMPTR20          */
    __type1725 TMDF020;                                    /* TMDF020          */
    __type1726 TMDF120;                                    /* TMDF120          */
    __type1723 TMID21;                                     /* TMID21           */
    __type1724 TMPTR21;                                    /* TMPTR21          */
    __type1725 TMDF021;                                    /* TMDF021          */
    __type1726 TMDF121;                                    /* TMDF121          */
    __type1723 TMID22;                                     /* TMID22           */
    __type1724 TMPTR22;                                    /* TMPTR22          */
    __type1725 TMDF022;                                    /* TMDF022          */
    __type1726 TMDF122;                                    /* TMDF122          */
    __type1723 TMID23;                                     /* TMID23           */
    __type1724 TMPTR23;                                    /* TMPTR23          */
    __type1725 TMDF023;                                    /* TMDF023          */
    __type1726 TMDF123;                                    /* TMDF123          */
    __type1723 TMID24;                                     /* TMID24           */
    __type1724 TMPTR24;                                    /* TMPTR24          */
    __type1725 TMDF024;                                    /* TMDF024          */
    __type1726 TMDF124;                                    /* TMDF124          */
    __type1723 TMID25;                                     /* TMID25           */
    __type1724 TMPTR25;                                    /* TMPTR25          */
    __type1725 TMDF025;                                    /* TMDF025          */
    __type1726 TMDF125;                                    /* TMDF125          */
    __type1723 TMID26;                                     /* TMID26           */
    __type1724 TMPTR26;                                    /* TMPTR26          */
    __type1725 TMDF026;                                    /* TMDF026          */
    __type1726 TMDF126;                                    /* TMDF126          */
    __type1723 TMID27;                                     /* TMID27           */
    __type1724 TMPTR27;                                    /* TMPTR27          */
    __type1725 TMDF027;                                    /* TMDF027          */
    __type1726 TMDF127;                                    /* TMDF127          */
    __type1723 TMID28;                                     /* TMID28           */
    __type1724 TMPTR28;                                    /* TMPTR28          */
    __type1725 TMDF028;                                    /* TMDF028          */
    __type1726 TMDF128;                                    /* TMDF128          */
    __type1723 TMID29;                                     /* TMID29           */
    __type1724 TMPTR29;                                    /* TMPTR29          */
    __type1725 TMDF029;                                    /* TMDF029          */
    __type1726 TMDF129;                                    /* TMDF129          */
    __type1723 TMID30;                                     /* TMID30           */
    __type1724 TMPTR30;                                    /* TMPTR30          */
    __type1725 TMDF030;                                    /* TMDF030          */
    __type1726 TMDF130;                                    /* TMDF130          */
    __type1723 TMID31;                                     /* TMID31           */
    __type1724 TMPTR31;                                    /* TMPTR31          */
    __type1725 TMDF031;                                    /* TMDF031          */
    __type1726 TMDF131;                                    /* TMDF131          */
    uint8  dummy259[1536];                                 /* Reserved         */
    const __type1727 THLACC0;                              /* THLACC0          */
    const __type1727 THLACC1;                              /* THLACC1          */
    uint8  dummy260[248];                                  /* Reserved         */
    __type1728 RPGACC0;                                    /* RPGACC0          */
    __type1728 RPGACC1;                                    /* RPGACC1          */
    __type1728 RPGACC2;                                    /* RPGACC2          */
    __type1728 RPGACC3;                                    /* RPGACC3          */
    __type1728 RPGACC4;                                    /* RPGACC4          */
    __type1728 RPGACC5;                                    /* RPGACC5          */
    __type1728 RPGACC6;                                    /* RPGACC6          */
    __type1728 RPGACC7;                                    /* RPGACC7          */
    __type1728 RPGACC8;                                    /* RPGACC8          */
    __type1728 RPGACC9;                                    /* RPGACC9          */
    __type1728 RPGACC10;                                   /* RPGACC10         */
    __type1728 RPGACC11;                                   /* RPGACC11         */
    __type1728 RPGACC12;                                   /* RPGACC12         */
    __type1728 RPGACC13;                                   /* RPGACC13         */
    __type1728 RPGACC14;                                   /* RPGACC14         */
    __type1728 RPGACC15;                                   /* RPGACC15         */
    __type1728 RPGACC16;                                   /* RPGACC16         */
    __type1728 RPGACC17;                                   /* RPGACC17         */
    __type1728 RPGACC18;                                   /* RPGACC18         */
    __type1728 RPGACC19;                                   /* RPGACC19         */
    __type1728 RPGACC20;                                   /* RPGACC20         */
    __type1728 RPGACC21;                                   /* RPGACC21         */
    __type1728 RPGACC22;                                   /* RPGACC22         */
    __type1728 RPGACC23;                                   /* RPGACC23         */
    __type1728 RPGACC24;                                   /* RPGACC24         */
    __type1728 RPGACC25;                                   /* RPGACC25         */
    __type1728 RPGACC26;                                   /* RPGACC26         */
    __type1728 RPGACC27;                                   /* RPGACC27         */
    __type1728 RPGACC28;                                   /* RPGACC28         */
    __type1728 RPGACC29;                                   /* RPGACC29         */
    __type1728 RPGACC30;                                   /* RPGACC30         */
    __type1728 RPGACC31;                                   /* RPGACC31         */
    __type1728 RPGACC32;                                   /* RPGACC32         */
    __type1728 RPGACC33;                                   /* RPGACC33         */
    __type1728 RPGACC34;                                   /* RPGACC34         */
    __type1728 RPGACC35;                                   /* RPGACC35         */
    __type1728 RPGACC36;                                   /* RPGACC36         */
    __type1728 RPGACC37;                                   /* RPGACC37         */
    __type1728 RPGACC38;                                   /* RPGACC38         */
    __type1728 RPGACC39;                                   /* RPGACC39         */
    __type1728 RPGACC40;                                   /* RPGACC40         */
    __type1728 RPGACC41;                                   /* RPGACC41         */
    __type1728 RPGACC42;                                   /* RPGACC42         */
    __type1728 RPGACC43;                                   /* RPGACC43         */
    __type1728 RPGACC44;                                   /* RPGACC44         */
    __type1728 RPGACC45;                                   /* RPGACC45         */
    __type1728 RPGACC46;                                   /* RPGACC46         */
    __type1728 RPGACC47;                                   /* RPGACC47         */
    __type1728 RPGACC48;                                   /* RPGACC48         */
    __type1728 RPGACC49;                                   /* RPGACC49         */
    __type1728 RPGACC50;                                   /* RPGACC50         */
    __type1728 RPGACC51;                                   /* RPGACC51         */
    __type1728 RPGACC52;                                   /* RPGACC52         */
    __type1728 RPGACC53;                                   /* RPGACC53         */
    __type1728 RPGACC54;                                   /* RPGACC54         */
    __type1728 RPGACC55;                                   /* RPGACC55         */
    __type1728 RPGACC56;                                   /* RPGACC56         */
    __type1728 RPGACC57;                                   /* RPGACC57         */
    __type1728 RPGACC58;                                   /* RPGACC58         */
    __type1728 RPGACC59;                                   /* RPGACC59         */
    __type1728 RPGACC60;                                   /* RPGACC60         */
    __type1728 RPGACC61;                                   /* RPGACC61         */
    __type1728 RPGACC62;                                   /* RPGACC62         */
    __type1728 RPGACC63;                                   /* RPGACC63         */
} __type2587;

__IOREG(RSCAN0, 0xFFD20000, __READ_WRITE, __type2587);                /* RSCAN0 */

#define RSCAN0C0CFG RSCAN0.C0CFG.UINT32
#define RSCAN0C0CFGL RSCAN0.C0CFG.UINT16[L]
#define RSCAN0C0CFGLL RSCAN0.C0CFG.UINT8[LL]
#define RSCAN0C0CFGLH RSCAN0.C0CFG.UINT8[LH]
#define RSCAN0C0CFGH RSCAN0.C0CFG.UINT16[H]
#define RSCAN0C0CFGHL RSCAN0.C0CFG.UINT8[HL]
#define RSCAN0C0CFGHH RSCAN0.C0CFG.UINT8[HH]
#define RSCAN0BRP RSCAN0.C0CFG.BIT.BRP
#define RSCAN0TSEG1 RSCAN0.C0CFG.BIT.TSEG1
#define RSCAN0TSEG2 RSCAN0.C0CFG.BIT.TSEG2
#define RSCAN0SJW RSCAN0.C0CFG.BIT.SJW
#define RSCAN0C0CTR RSCAN0.C0CTR.UINT32
#define RSCAN0C0CTRL RSCAN0.C0CTR.UINT16[L]
#define RSCAN0C0CTRLL RSCAN0.C0CTR.UINT8[LL]
#define RSCAN0C0CTRLH RSCAN0.C0CTR.UINT8[LH]
#define RSCAN0C0CTRH RSCAN0.C0CTR.UINT16[H]
#define RSCAN0C0CTRHL RSCAN0.C0CTR.UINT8[HL]
#define RSCAN0C0CTRHH RSCAN0.C0CTR.UINT8[HH]
#define RSCAN0CHMDC RSCAN0.C0CTR.BIT.CHMDC
#define RSCAN0CSLPR RSCAN0.C0CTR.BIT.CSLPR
#define RSCAN0RTBO RSCAN0.C0CTR.BIT.RTBO
#define RSCAN0BEIE RSCAN0.C0CTR.BIT.BEIE
#define RSCAN0EWIE RSCAN0.C0CTR.BIT.EWIE
#define RSCAN0EPIE RSCAN0.C0CTR.BIT.EPIE
#define RSCAN0BOEIE RSCAN0.C0CTR.BIT.BOEIE
#define RSCAN0BORIE RSCAN0.C0CTR.BIT.BORIE
#define RSCAN0OLIE RSCAN0.C0CTR.BIT.OLIE
#define RSCAN0BLIE RSCAN0.C0CTR.BIT.BLIE
#define RSCAN0ALIE RSCAN0.C0CTR.BIT.ALIE
#define RSCAN0TAIE RSCAN0.C0CTR.BIT.TAIE
#define RSCAN0BOM RSCAN0.C0CTR.BIT.BOM
#define RSCAN0ERRD RSCAN0.C0CTR.BIT.ERRD
#define RSCAN0CTME RSCAN0.C0CTR.BIT.CTME
#define RSCAN0CTMS RSCAN0.C0CTR.BIT.CTMS
#define RSCAN0C0STS RSCAN0.C0STS.UINT32
#define RSCAN0C0STSL RSCAN0.C0STS.UINT16[L]
#define RSCAN0C0STSLL RSCAN0.C0STS.UINT8[LL]
#define RSCAN0C0STSLH RSCAN0.C0STS.UINT8[LH]
#define RSCAN0C0STSH RSCAN0.C0STS.UINT16[H]
#define RSCAN0C0STSHL RSCAN0.C0STS.UINT8[HL]
#define RSCAN0C0STSHH RSCAN0.C0STS.UINT8[HH]
#define RSCAN0CRSTSTS RSCAN0.C0STS.BIT.CRSTSTS
#define RSCAN0CHLTSTS RSCAN0.C0STS.BIT.CHLTSTS
#define RSCAN0CSLPSTS RSCAN0.C0STS.BIT.CSLPSTS
#define RSCAN0EPSTS RSCAN0.C0STS.BIT.EPSTS
#define RSCAN0BOSTS RSCAN0.C0STS.BIT.BOSTS
#define RSCAN0TRMSTS RSCAN0.C0STS.BIT.TRMSTS
#define RSCAN0RECSTS RSCAN0.C0STS.BIT.RECSTS
#define RSCAN0COMSTS RSCAN0.C0STS.BIT.COMSTS
#define RSCAN0REC RSCAN0.C0STS.BIT.REC
#define RSCAN0TEC RSCAN0.C0STS.BIT.TEC
#define RSCAN0C0ERFL RSCAN0.C0ERFL.UINT32
#define RSCAN0C0ERFLL RSCAN0.C0ERFL.UINT16[L]
#define RSCAN0C0ERFLLL RSCAN0.C0ERFL.UINT8[LL]
#define RSCAN0C0ERFLLH RSCAN0.C0ERFL.UINT8[LH]
#define RSCAN0C0ERFLH RSCAN0.C0ERFL.UINT16[H]
#define RSCAN0C0ERFLHL RSCAN0.C0ERFL.UINT8[HL]
#define RSCAN0C0ERFLHH RSCAN0.C0ERFL.UINT8[HH]
#define RSCAN0BEF RSCAN0.C0ERFL.BIT.BEF
#define RSCAN0EWF RSCAN0.C0ERFL.BIT.EWF
#define RSCAN0EPF RSCAN0.C0ERFL.BIT.EPF
#define RSCAN0BOEF RSCAN0.C0ERFL.BIT.BOEF
#define RSCAN0BORF RSCAN0.C0ERFL.BIT.BORF
#define RSCAN0OVLF RSCAN0.C0ERFL.BIT.OVLF
#define RSCAN0BLF RSCAN0.C0ERFL.BIT.BLF
#define RSCAN0ALF RSCAN0.C0ERFL.BIT.ALF
#define RSCAN0SERR RSCAN0.C0ERFL.BIT.SERR
#define RSCAN0FERR RSCAN0.C0ERFL.BIT.FERR
#define RSCAN0AERR RSCAN0.C0ERFL.BIT.AERR
#define RSCAN0CERR RSCAN0.C0ERFL.BIT.CERR
#define RSCAN0B1ERR RSCAN0.C0ERFL.BIT.B1ERR
#define RSCAN0B0ERR RSCAN0.C0ERFL.BIT.B0ERR
#define RSCAN0ADERR RSCAN0.C0ERFL.BIT.ADERR
#define RSCAN0CRCREG RSCAN0.C0ERFL.BIT.CRCREG
#define RSCAN0C1CFG RSCAN0.C1CFG.UINT32
#define RSCAN0C1CFGL RSCAN0.C1CFG.UINT16[L]
#define RSCAN0C1CFGLL RSCAN0.C1CFG.UINT8[LL]
#define RSCAN0C1CFGLH RSCAN0.C1CFG.UINT8[LH]
#define RSCAN0C1CFGH RSCAN0.C1CFG.UINT16[H]
#define RSCAN0C1CFGHL RSCAN0.C1CFG.UINT8[HL]
#define RSCAN0C1CFGHH RSCAN0.C1CFG.UINT8[HH]
#define RSCAN0C1CTR RSCAN0.C1CTR.UINT32
#define RSCAN0C1CTRL RSCAN0.C1CTR.UINT16[L]
#define RSCAN0C1CTRLL RSCAN0.C1CTR.UINT8[LL]
#define RSCAN0C1CTRLH RSCAN0.C1CTR.UINT8[LH]
#define RSCAN0C1CTRH RSCAN0.C1CTR.UINT16[H]
#define RSCAN0C1CTRHL RSCAN0.C1CTR.UINT8[HL]
#define RSCAN0C1CTRHH RSCAN0.C1CTR.UINT8[HH]
#define RSCAN0C1STS RSCAN0.C1STS.UINT32
#define RSCAN0C1STSL RSCAN0.C1STS.UINT16[L]
#define RSCAN0C1STSLL RSCAN0.C1STS.UINT8[LL]
#define RSCAN0C1STSLH RSCAN0.C1STS.UINT8[LH]
#define RSCAN0C1STSH RSCAN0.C1STS.UINT16[H]
#define RSCAN0C1STSHL RSCAN0.C1STS.UINT8[HL]
#define RSCAN0C1STSHH RSCAN0.C1STS.UINT8[HH]
#define RSCAN0C1ERFL RSCAN0.C1ERFL.UINT32
#define RSCAN0C1ERFLL RSCAN0.C1ERFL.UINT16[L]
#define RSCAN0C1ERFLLL RSCAN0.C1ERFL.UINT8[LL]
#define RSCAN0C1ERFLLH RSCAN0.C1ERFL.UINT8[LH]
#define RSCAN0C1ERFLH RSCAN0.C1ERFL.UINT16[H]
#define RSCAN0C1ERFLHL RSCAN0.C1ERFL.UINT8[HL]
#define RSCAN0C1ERFLHH RSCAN0.C1ERFL.UINT8[HH]
#define RSCAN0GCFG RSCAN0.GCFG.UINT32
#define RSCAN0GCFGL RSCAN0.GCFG.UINT16[L]
#define RSCAN0GCFGLL RSCAN0.GCFG.UINT8[LL]
#define RSCAN0GCFGLH RSCAN0.GCFG.UINT8[LH]
#define RSCAN0GCFGH RSCAN0.GCFG.UINT16[H]
#define RSCAN0GCFGHL RSCAN0.GCFG.UINT8[HL]
#define RSCAN0GCFGHH RSCAN0.GCFG.UINT8[HH]
#define RSCAN0TPRI RSCAN0.GCFG.BIT.TPRI
#define RSCAN0DCE RSCAN0.GCFG.BIT.DCE
#define RSCAN0DRE RSCAN0.GCFG.BIT.DRE
#define RSCAN0MME RSCAN0.GCFG.BIT.MME
#define RSCAN0DCS RSCAN0.GCFG.BIT.DCS
#define RSCAN0TSP RSCAN0.GCFG.BIT.TSP
#define RSCAN0TSSS RSCAN0.GCFG.BIT.TSSS
#define RSCAN0TSBTCS RSCAN0.GCFG.BIT.TSBTCS
#define RSCAN0ITRCP RSCAN0.GCFG.BIT.ITRCP
#define RSCAN0GCTR RSCAN0.GCTR.UINT32
#define RSCAN0GCTRL RSCAN0.GCTR.UINT16[L]
#define RSCAN0GCTRLL RSCAN0.GCTR.UINT8[LL]
#define RSCAN0GCTRLH RSCAN0.GCTR.UINT8[LH]
#define RSCAN0GCTRH RSCAN0.GCTR.UINT16[H]
#define RSCAN0GCTRHL RSCAN0.GCTR.UINT8[HL]
#define RSCAN0GCTRHH RSCAN0.GCTR.UINT8[HH]
#define RSCAN0GMDC RSCAN0.GCTR.BIT.GMDC
#define RSCAN0GSLPR RSCAN0.GCTR.BIT.GSLPR
#define RSCAN0DEIE RSCAN0.GCTR.BIT.DEIE
#define RSCAN0MEIE RSCAN0.GCTR.BIT.MEIE
#define RSCAN0THLEIE RSCAN0.GCTR.BIT.THLEIE
#define RSCAN0TSRST RSCAN0.GCTR.BIT.TSRST
#define RSCAN0GSTS RSCAN0.GSTS.UINT32
#define RSCAN0GSTSL RSCAN0.GSTS.UINT16[L]
#define RSCAN0GSTSLL RSCAN0.GSTS.UINT8[LL]
#define RSCAN0GSTSLH RSCAN0.GSTS.UINT8[LH]
#define RSCAN0GSTSH RSCAN0.GSTS.UINT16[H]
#define RSCAN0GSTSHL RSCAN0.GSTS.UINT8[HL]
#define RSCAN0GSTSHH RSCAN0.GSTS.UINT8[HH]
#define RSCAN0GRSTSTS RSCAN0.GSTS.BIT.GRSTSTS
#define RSCAN0GHLTSTS RSCAN0.GSTS.BIT.GHLTSTS
#define RSCAN0GSLPSTS RSCAN0.GSTS.BIT.GSLPSTS
#define RSCAN0GRAMINIT RSCAN0.GSTS.BIT.GRAMINIT
#define RSCAN0GERFL RSCAN0.GERFL.UINT32
#define RSCAN0GERFLL RSCAN0.GERFL.UINT16[L]
#define RSCAN0GERFLLL RSCAN0.GERFL.UINT8[LL]
#define RSCAN0GERFLLH RSCAN0.GERFL.UINT8[LH]
#define RSCAN0GERFLH RSCAN0.GERFL.UINT16[H]
#define RSCAN0GERFLHL RSCAN0.GERFL.UINT8[HL]
#define RSCAN0GERFLHH RSCAN0.GERFL.UINT8[HH]
#define RSCAN0DEF RSCAN0.GERFL.BIT.DEF
#define RSCAN0MES RSCAN0.GERFL.BIT.MES
#define RSCAN0THLES RSCAN0.GERFL.BIT.THLES
#define RSCAN0GTSC RSCAN0.GTSC.UINT32
#define RSCAN0GTSCL RSCAN0.GTSC.UINT16[L]
#define RSCAN0GTSCH RSCAN0.GTSC.UINT16[H]
#define RSCAN0TS RSCAN0.GTSC.BIT.TS
#define RSCAN0GAFLECTR RSCAN0.GAFLECTR.UINT32
#define RSCAN0GAFLECTRL RSCAN0.GAFLECTR.UINT16[L]
#define RSCAN0GAFLECTRLL RSCAN0.GAFLECTR.UINT8[LL]
#define RSCAN0GAFLECTRLH RSCAN0.GAFLECTR.UINT8[LH]
#define RSCAN0GAFLECTRH RSCAN0.GAFLECTR.UINT16[H]
#define RSCAN0GAFLECTRHL RSCAN0.GAFLECTR.UINT8[HL]
#define RSCAN0GAFLECTRHH RSCAN0.GAFLECTR.UINT8[HH]
#define RSCAN0AFLPN RSCAN0.GAFLECTR.BIT.AFLPN
#define RSCAN0AFLDAE RSCAN0.GAFLECTR.BIT.AFLDAE
#define RSCAN0GAFLCFG0 RSCAN0.GAFLCFG0.UINT32
#define RSCAN0GAFLCFG0L RSCAN0.GAFLCFG0.UINT16[L]
#define RSCAN0GAFLCFG0LL RSCAN0.GAFLCFG0.UINT8[LL]
#define RSCAN0GAFLCFG0LH RSCAN0.GAFLCFG0.UINT8[LH]
#define RSCAN0GAFLCFG0H RSCAN0.GAFLCFG0.UINT16[H]
#define RSCAN0GAFLCFG0HL RSCAN0.GAFLCFG0.UINT8[HL]
#define RSCAN0GAFLCFG0HH RSCAN0.GAFLCFG0.UINT8[HH]
#define RSCAN0RNC1 RSCAN0.GAFLCFG0.BIT.RNC1
#define RSCAN0RNC0 RSCAN0.GAFLCFG0.BIT.RNC0
#define RSCAN0RMNB RSCAN0.RMNB.UINT32
#define RSCAN0RMNBL RSCAN0.RMNB.UINT16[L]
#define RSCAN0RMNBLL RSCAN0.RMNB.UINT8[LL]
#define RSCAN0RMNBLH RSCAN0.RMNB.UINT8[LH]
#define RSCAN0RMNBH RSCAN0.RMNB.UINT16[H]
#define RSCAN0RMNBHL RSCAN0.RMNB.UINT8[HL]
#define RSCAN0RMNBHH RSCAN0.RMNB.UINT8[HH]
#define RSCAN0NRXMB RSCAN0.RMNB.BIT.NRXMB
#define RSCAN0RMND0 RSCAN0.RMND0.UINT32
#define RSCAN0RMND0L RSCAN0.RMND0.UINT16[L]
#define RSCAN0RMND0LL RSCAN0.RMND0.UINT8[LL]
#define RSCAN0RMND0LH RSCAN0.RMND0.UINT8[LH]
#define RSCAN0RMND0H RSCAN0.RMND0.UINT16[H]
#define RSCAN0RMND0HL RSCAN0.RMND0.UINT8[HL]
#define RSCAN0RMND0HH RSCAN0.RMND0.UINT8[HH]
#define RSCAN0RMNS0 RSCAN0.RMND0.BIT.RMNS0
#define RSCAN0RMNS1 RSCAN0.RMND0.BIT.RMNS1
#define RSCAN0RMNS2 RSCAN0.RMND0.BIT.RMNS2
#define RSCAN0RMNS3 RSCAN0.RMND0.BIT.RMNS3
#define RSCAN0RMNS4 RSCAN0.RMND0.BIT.RMNS4
#define RSCAN0RMNS5 RSCAN0.RMND0.BIT.RMNS5
#define RSCAN0RMNS6 RSCAN0.RMND0.BIT.RMNS6
#define RSCAN0RMNS7 RSCAN0.RMND0.BIT.RMNS7
#define RSCAN0RMNS8 RSCAN0.RMND0.BIT.RMNS8
#define RSCAN0RMNS9 RSCAN0.RMND0.BIT.RMNS9
#define RSCAN0RMNS10 RSCAN0.RMND0.BIT.RMNS10
#define RSCAN0RMNS11 RSCAN0.RMND0.BIT.RMNS11
#define RSCAN0RMNS12 RSCAN0.RMND0.BIT.RMNS12
#define RSCAN0RMNS13 RSCAN0.RMND0.BIT.RMNS13
#define RSCAN0RMNS14 RSCAN0.RMND0.BIT.RMNS14
#define RSCAN0RMNS15 RSCAN0.RMND0.BIT.RMNS15
#define RSCAN0RMNS16 RSCAN0.RMND0.BIT.RMNS16
#define RSCAN0RMNS17 RSCAN0.RMND0.BIT.RMNS17
#define RSCAN0RMNS18 RSCAN0.RMND0.BIT.RMNS18
#define RSCAN0RMNS19 RSCAN0.RMND0.BIT.RMNS19
#define RSCAN0RMNS20 RSCAN0.RMND0.BIT.RMNS20
#define RSCAN0RMNS21 RSCAN0.RMND0.BIT.RMNS21
#define RSCAN0RMNS22 RSCAN0.RMND0.BIT.RMNS22
#define RSCAN0RMNS23 RSCAN0.RMND0.BIT.RMNS23
#define RSCAN0RMNS24 RSCAN0.RMND0.BIT.RMNS24
#define RSCAN0RMNS25 RSCAN0.RMND0.BIT.RMNS25
#define RSCAN0RMNS26 RSCAN0.RMND0.BIT.RMNS26
#define RSCAN0RMNS27 RSCAN0.RMND0.BIT.RMNS27
#define RSCAN0RMNS28 RSCAN0.RMND0.BIT.RMNS28
#define RSCAN0RMNS29 RSCAN0.RMND0.BIT.RMNS29
#define RSCAN0RMNS30 RSCAN0.RMND0.BIT.RMNS30
#define RSCAN0RMNS31 RSCAN0.RMND0.BIT.RMNS31
#define RSCAN0RFCC0 RSCAN0.RFCC0.UINT32
#define RSCAN0RFCC0L RSCAN0.RFCC0.UINT16[L]
#define RSCAN0RFCC0LL RSCAN0.RFCC0.UINT8[LL]
#define RSCAN0RFCC0LH RSCAN0.RFCC0.UINT8[LH]
#define RSCAN0RFCC0H RSCAN0.RFCC0.UINT16[H]
#define RSCAN0RFCC0HL RSCAN0.RFCC0.UINT8[HL]
#define RSCAN0RFCC0HH RSCAN0.RFCC0.UINT8[HH]
#define RSCAN0RFE RSCAN0.RFCC0.BIT.RFE
#define RSCAN0RFIE RSCAN0.RFCC0.BIT.RFIE
#define RSCAN0RFDC RSCAN0.RFCC0.BIT.RFDC
#define RSCAN0RFIM RSCAN0.RFCC0.BIT.RFIM
#define RSCAN0RFIGCV RSCAN0.RFCC0.BIT.RFIGCV
#define RSCAN0RFCC1 RSCAN0.RFCC1.UINT32
#define RSCAN0RFCC1L RSCAN0.RFCC1.UINT16[L]
#define RSCAN0RFCC1LL RSCAN0.RFCC1.UINT8[LL]
#define RSCAN0RFCC1LH RSCAN0.RFCC1.UINT8[LH]
#define RSCAN0RFCC1H RSCAN0.RFCC1.UINT16[H]
#define RSCAN0RFCC1HL RSCAN0.RFCC1.UINT8[HL]
#define RSCAN0RFCC1HH RSCAN0.RFCC1.UINT8[HH]
#define RSCAN0RFCC2 RSCAN0.RFCC2.UINT32
#define RSCAN0RFCC2L RSCAN0.RFCC2.UINT16[L]
#define RSCAN0RFCC2LL RSCAN0.RFCC2.UINT8[LL]
#define RSCAN0RFCC2LH RSCAN0.RFCC2.UINT8[LH]
#define RSCAN0RFCC2H RSCAN0.RFCC2.UINT16[H]
#define RSCAN0RFCC2HL RSCAN0.RFCC2.UINT8[HL]
#define RSCAN0RFCC2HH RSCAN0.RFCC2.UINT8[HH]
#define RSCAN0RFCC3 RSCAN0.RFCC3.UINT32
#define RSCAN0RFCC3L RSCAN0.RFCC3.UINT16[L]
#define RSCAN0RFCC3LL RSCAN0.RFCC3.UINT8[LL]
#define RSCAN0RFCC3LH RSCAN0.RFCC3.UINT8[LH]
#define RSCAN0RFCC3H RSCAN0.RFCC3.UINT16[H]
#define RSCAN0RFCC3HL RSCAN0.RFCC3.UINT8[HL]
#define RSCAN0RFCC3HH RSCAN0.RFCC3.UINT8[HH]
#define RSCAN0RFCC4 RSCAN0.RFCC4.UINT32
#define RSCAN0RFCC4L RSCAN0.RFCC4.UINT16[L]
#define RSCAN0RFCC4LL RSCAN0.RFCC4.UINT8[LL]
#define RSCAN0RFCC4LH RSCAN0.RFCC4.UINT8[LH]
#define RSCAN0RFCC4H RSCAN0.RFCC4.UINT16[H]
#define RSCAN0RFCC4HL RSCAN0.RFCC4.UINT8[HL]
#define RSCAN0RFCC4HH RSCAN0.RFCC4.UINT8[HH]
#define RSCAN0RFCC5 RSCAN0.RFCC5.UINT32
#define RSCAN0RFCC5L RSCAN0.RFCC5.UINT16[L]
#define RSCAN0RFCC5LL RSCAN0.RFCC5.UINT8[LL]
#define RSCAN0RFCC5LH RSCAN0.RFCC5.UINT8[LH]
#define RSCAN0RFCC5H RSCAN0.RFCC5.UINT16[H]
#define RSCAN0RFCC5HL RSCAN0.RFCC5.UINT8[HL]
#define RSCAN0RFCC5HH RSCAN0.RFCC5.UINT8[HH]
#define RSCAN0RFCC6 RSCAN0.RFCC6.UINT32
#define RSCAN0RFCC6L RSCAN0.RFCC6.UINT16[L]
#define RSCAN0RFCC6LL RSCAN0.RFCC6.UINT8[LL]
#define RSCAN0RFCC6LH RSCAN0.RFCC6.UINT8[LH]
#define RSCAN0RFCC6H RSCAN0.RFCC6.UINT16[H]
#define RSCAN0RFCC6HL RSCAN0.RFCC6.UINT8[HL]
#define RSCAN0RFCC6HH RSCAN0.RFCC6.UINT8[HH]
#define RSCAN0RFCC7 RSCAN0.RFCC7.UINT32
#define RSCAN0RFCC7L RSCAN0.RFCC7.UINT16[L]
#define RSCAN0RFCC7LL RSCAN0.RFCC7.UINT8[LL]
#define RSCAN0RFCC7LH RSCAN0.RFCC7.UINT8[LH]
#define RSCAN0RFCC7H RSCAN0.RFCC7.UINT16[H]
#define RSCAN0RFCC7HL RSCAN0.RFCC7.UINT8[HL]
#define RSCAN0RFCC7HH RSCAN0.RFCC7.UINT8[HH]
#define RSCAN0RFSTS0 RSCAN0.RFSTS0.UINT32
#define RSCAN0RFSTS0L RSCAN0.RFSTS0.UINT16[L]
#define RSCAN0RFSTS0LL RSCAN0.RFSTS0.UINT8[LL]
#define RSCAN0RFSTS0LH RSCAN0.RFSTS0.UINT8[LH]
#define RSCAN0RFSTS0H RSCAN0.RFSTS0.UINT16[H]
#define RSCAN0RFSTS0HL RSCAN0.RFSTS0.UINT8[HL]
#define RSCAN0RFSTS0HH RSCAN0.RFSTS0.UINT8[HH]
#define RSCAN0RFEMP RSCAN0.RFSTS0.BIT.RFEMP
#define RSCAN0RFFLL RSCAN0.RFSTS0.BIT.RFFLL
#define RSCAN0RFMLT RSCAN0.RFSTS0.BIT.RFMLT
#define RSCAN0RFIF RSCAN0.RFSTS0.BIT.RFIF
#define RSCAN0RFMC RSCAN0.RFSTS0.BIT.RFMC
#define RSCAN0RFSTS1 RSCAN0.RFSTS1.UINT32
#define RSCAN0RFSTS1L RSCAN0.RFSTS1.UINT16[L]
#define RSCAN0RFSTS1LL RSCAN0.RFSTS1.UINT8[LL]
#define RSCAN0RFSTS1LH RSCAN0.RFSTS1.UINT8[LH]
#define RSCAN0RFSTS1H RSCAN0.RFSTS1.UINT16[H]
#define RSCAN0RFSTS1HL RSCAN0.RFSTS1.UINT8[HL]
#define RSCAN0RFSTS1HH RSCAN0.RFSTS1.UINT8[HH]
#define RSCAN0RFSTS2 RSCAN0.RFSTS2.UINT32
#define RSCAN0RFSTS2L RSCAN0.RFSTS2.UINT16[L]
#define RSCAN0RFSTS2LL RSCAN0.RFSTS2.UINT8[LL]
#define RSCAN0RFSTS2LH RSCAN0.RFSTS2.UINT8[LH]
#define RSCAN0RFSTS2H RSCAN0.RFSTS2.UINT16[H]
#define RSCAN0RFSTS2HL RSCAN0.RFSTS2.UINT8[HL]
#define RSCAN0RFSTS2HH RSCAN0.RFSTS2.UINT8[HH]
#define RSCAN0RFSTS3 RSCAN0.RFSTS3.UINT32
#define RSCAN0RFSTS3L RSCAN0.RFSTS3.UINT16[L]
#define RSCAN0RFSTS3LL RSCAN0.RFSTS3.UINT8[LL]
#define RSCAN0RFSTS3LH RSCAN0.RFSTS3.UINT8[LH]
#define RSCAN0RFSTS3H RSCAN0.RFSTS3.UINT16[H]
#define RSCAN0RFSTS3HL RSCAN0.RFSTS3.UINT8[HL]
#define RSCAN0RFSTS3HH RSCAN0.RFSTS3.UINT8[HH]
#define RSCAN0RFSTS4 RSCAN0.RFSTS4.UINT32
#define RSCAN0RFSTS4L RSCAN0.RFSTS4.UINT16[L]
#define RSCAN0RFSTS4LL RSCAN0.RFSTS4.UINT8[LL]
#define RSCAN0RFSTS4LH RSCAN0.RFSTS4.UINT8[LH]
#define RSCAN0RFSTS4H RSCAN0.RFSTS4.UINT16[H]
#define RSCAN0RFSTS4HL RSCAN0.RFSTS4.UINT8[HL]
#define RSCAN0RFSTS4HH RSCAN0.RFSTS4.UINT8[HH]
#define RSCAN0RFSTS5 RSCAN0.RFSTS5.UINT32
#define RSCAN0RFSTS5L RSCAN0.RFSTS5.UINT16[L]
#define RSCAN0RFSTS5LL RSCAN0.RFSTS5.UINT8[LL]
#define RSCAN0RFSTS5LH RSCAN0.RFSTS5.UINT8[LH]
#define RSCAN0RFSTS5H RSCAN0.RFSTS5.UINT16[H]
#define RSCAN0RFSTS5HL RSCAN0.RFSTS5.UINT8[HL]
#define RSCAN0RFSTS5HH RSCAN0.RFSTS5.UINT8[HH]
#define RSCAN0RFSTS6 RSCAN0.RFSTS6.UINT32
#define RSCAN0RFSTS6L RSCAN0.RFSTS6.UINT16[L]
#define RSCAN0RFSTS6LL RSCAN0.RFSTS6.UINT8[LL]
#define RSCAN0RFSTS6LH RSCAN0.RFSTS6.UINT8[LH]
#define RSCAN0RFSTS6H RSCAN0.RFSTS6.UINT16[H]
#define RSCAN0RFSTS6HL RSCAN0.RFSTS6.UINT8[HL]
#define RSCAN0RFSTS6HH RSCAN0.RFSTS6.UINT8[HH]
#define RSCAN0RFSTS7 RSCAN0.RFSTS7.UINT32
#define RSCAN0RFSTS7L RSCAN0.RFSTS7.UINT16[L]
#define RSCAN0RFSTS7LL RSCAN0.RFSTS7.UINT8[LL]
#define RSCAN0RFSTS7LH RSCAN0.RFSTS7.UINT8[LH]
#define RSCAN0RFSTS7H RSCAN0.RFSTS7.UINT16[H]
#define RSCAN0RFSTS7HL RSCAN0.RFSTS7.UINT8[HL]
#define RSCAN0RFSTS7HH RSCAN0.RFSTS7.UINT8[HH]
#define RSCAN0RFPCTR0 RSCAN0.RFPCTR0.UINT32
#define RSCAN0RFPCTR0L RSCAN0.RFPCTR0.UINT16[L]
#define RSCAN0RFPCTR0LL RSCAN0.RFPCTR0.UINT8[LL]
#define RSCAN0RFPCTR0LH RSCAN0.RFPCTR0.UINT8[LH]
#define RSCAN0RFPCTR0H RSCAN0.RFPCTR0.UINT16[H]
#define RSCAN0RFPCTR0HL RSCAN0.RFPCTR0.UINT8[HL]
#define RSCAN0RFPCTR0HH RSCAN0.RFPCTR0.UINT8[HH]
#define RSCAN0RFPC RSCAN0.RFPCTR0.BIT.RFPC
#define RSCAN0RFPCTR1 RSCAN0.RFPCTR1.UINT32
#define RSCAN0RFPCTR1L RSCAN0.RFPCTR1.UINT16[L]
#define RSCAN0RFPCTR1LL RSCAN0.RFPCTR1.UINT8[LL]
#define RSCAN0RFPCTR1LH RSCAN0.RFPCTR1.UINT8[LH]
#define RSCAN0RFPCTR1H RSCAN0.RFPCTR1.UINT16[H]
#define RSCAN0RFPCTR1HL RSCAN0.RFPCTR1.UINT8[HL]
#define RSCAN0RFPCTR1HH RSCAN0.RFPCTR1.UINT8[HH]
#define RSCAN0RFPCTR2 RSCAN0.RFPCTR2.UINT32
#define RSCAN0RFPCTR2L RSCAN0.RFPCTR2.UINT16[L]
#define RSCAN0RFPCTR2LL RSCAN0.RFPCTR2.UINT8[LL]
#define RSCAN0RFPCTR2LH RSCAN0.RFPCTR2.UINT8[LH]
#define RSCAN0RFPCTR2H RSCAN0.RFPCTR2.UINT16[H]
#define RSCAN0RFPCTR2HL RSCAN0.RFPCTR2.UINT8[HL]
#define RSCAN0RFPCTR2HH RSCAN0.RFPCTR2.UINT8[HH]
#define RSCAN0RFPCTR3 RSCAN0.RFPCTR3.UINT32
#define RSCAN0RFPCTR3L RSCAN0.RFPCTR3.UINT16[L]
#define RSCAN0RFPCTR3LL RSCAN0.RFPCTR3.UINT8[LL]
#define RSCAN0RFPCTR3LH RSCAN0.RFPCTR3.UINT8[LH]
#define RSCAN0RFPCTR3H RSCAN0.RFPCTR3.UINT16[H]
#define RSCAN0RFPCTR3HL RSCAN0.RFPCTR3.UINT8[HL]
#define RSCAN0RFPCTR3HH RSCAN0.RFPCTR3.UINT8[HH]
#define RSCAN0RFPCTR4 RSCAN0.RFPCTR4.UINT32
#define RSCAN0RFPCTR4L RSCAN0.RFPCTR4.UINT16[L]
#define RSCAN0RFPCTR4LL RSCAN0.RFPCTR4.UINT8[LL]
#define RSCAN0RFPCTR4LH RSCAN0.RFPCTR4.UINT8[LH]
#define RSCAN0RFPCTR4H RSCAN0.RFPCTR4.UINT16[H]
#define RSCAN0RFPCTR4HL RSCAN0.RFPCTR4.UINT8[HL]
#define RSCAN0RFPCTR4HH RSCAN0.RFPCTR4.UINT8[HH]
#define RSCAN0RFPCTR5 RSCAN0.RFPCTR5.UINT32
#define RSCAN0RFPCTR5L RSCAN0.RFPCTR5.UINT16[L]
#define RSCAN0RFPCTR5LL RSCAN0.RFPCTR5.UINT8[LL]
#define RSCAN0RFPCTR5LH RSCAN0.RFPCTR5.UINT8[LH]
#define RSCAN0RFPCTR5H RSCAN0.RFPCTR5.UINT16[H]
#define RSCAN0RFPCTR5HL RSCAN0.RFPCTR5.UINT8[HL]
#define RSCAN0RFPCTR5HH RSCAN0.RFPCTR5.UINT8[HH]
#define RSCAN0RFPCTR6 RSCAN0.RFPCTR6.UINT32
#define RSCAN0RFPCTR6L RSCAN0.RFPCTR6.UINT16[L]
#define RSCAN0RFPCTR6LL RSCAN0.RFPCTR6.UINT8[LL]
#define RSCAN0RFPCTR6LH RSCAN0.RFPCTR6.UINT8[LH]
#define RSCAN0RFPCTR6H RSCAN0.RFPCTR6.UINT16[H]
#define RSCAN0RFPCTR6HL RSCAN0.RFPCTR6.UINT8[HL]
#define RSCAN0RFPCTR6HH RSCAN0.RFPCTR6.UINT8[HH]
#define RSCAN0RFPCTR7 RSCAN0.RFPCTR7.UINT32
#define RSCAN0RFPCTR7L RSCAN0.RFPCTR7.UINT16[L]
#define RSCAN0RFPCTR7LL RSCAN0.RFPCTR7.UINT8[LL]
#define RSCAN0RFPCTR7LH RSCAN0.RFPCTR7.UINT8[LH]
#define RSCAN0RFPCTR7H RSCAN0.RFPCTR7.UINT16[H]
#define RSCAN0RFPCTR7HL RSCAN0.RFPCTR7.UINT8[HL]
#define RSCAN0RFPCTR7HH RSCAN0.RFPCTR7.UINT8[HH]
#define RSCAN0CFCC0 RSCAN0.CFCC0.UINT32
#define RSCAN0CFCC0L RSCAN0.CFCC0.UINT16[L]
#define RSCAN0CFCC0LL RSCAN0.CFCC0.UINT8[LL]
#define RSCAN0CFCC0LH RSCAN0.CFCC0.UINT8[LH]
#define RSCAN0CFCC0H RSCAN0.CFCC0.UINT16[H]
#define RSCAN0CFCC0HL RSCAN0.CFCC0.UINT8[HL]
#define RSCAN0CFCC0HH RSCAN0.CFCC0.UINT8[HH]
#define RSCAN0CFE RSCAN0.CFCC0.BIT.CFE
#define RSCAN0CFRXIE RSCAN0.CFCC0.BIT.CFRXIE
#define RSCAN0CFTXIE RSCAN0.CFCC0.BIT.CFTXIE
#define RSCAN0CFDC RSCAN0.CFCC0.BIT.CFDC
#define RSCAN0CFIM RSCAN0.CFCC0.BIT.CFIM
#define RSCAN0CFIGCV RSCAN0.CFCC0.BIT.CFIGCV
#define RSCAN0CFM RSCAN0.CFCC0.BIT.CFM
#define RSCAN0CFITSS RSCAN0.CFCC0.BIT.CFITSS
#define RSCAN0CFITR RSCAN0.CFCC0.BIT.CFITR
#define RSCAN0CFTML RSCAN0.CFCC0.BIT.CFTML
#define RSCAN0CFITT RSCAN0.CFCC0.BIT.CFITT
#define RSCAN0CFCC1 RSCAN0.CFCC1.UINT32
#define RSCAN0CFCC1L RSCAN0.CFCC1.UINT16[L]
#define RSCAN0CFCC1LL RSCAN0.CFCC1.UINT8[LL]
#define RSCAN0CFCC1LH RSCAN0.CFCC1.UINT8[LH]
#define RSCAN0CFCC1H RSCAN0.CFCC1.UINT16[H]
#define RSCAN0CFCC1HL RSCAN0.CFCC1.UINT8[HL]
#define RSCAN0CFCC1HH RSCAN0.CFCC1.UINT8[HH]
#define RSCAN0CFCC2 RSCAN0.CFCC2.UINT32
#define RSCAN0CFCC2L RSCAN0.CFCC2.UINT16[L]
#define RSCAN0CFCC2LL RSCAN0.CFCC2.UINT8[LL]
#define RSCAN0CFCC2LH RSCAN0.CFCC2.UINT8[LH]
#define RSCAN0CFCC2H RSCAN0.CFCC2.UINT16[H]
#define RSCAN0CFCC2HL RSCAN0.CFCC2.UINT8[HL]
#define RSCAN0CFCC2HH RSCAN0.CFCC2.UINT8[HH]
#define RSCAN0CFCC3 RSCAN0.CFCC3.UINT32
#define RSCAN0CFCC3L RSCAN0.CFCC3.UINT16[L]
#define RSCAN0CFCC3LL RSCAN0.CFCC3.UINT8[LL]
#define RSCAN0CFCC3LH RSCAN0.CFCC3.UINT8[LH]
#define RSCAN0CFCC3H RSCAN0.CFCC3.UINT16[H]
#define RSCAN0CFCC3HL RSCAN0.CFCC3.UINT8[HL]
#define RSCAN0CFCC3HH RSCAN0.CFCC3.UINT8[HH]
#define RSCAN0CFCC4 RSCAN0.CFCC4.UINT32
#define RSCAN0CFCC4L RSCAN0.CFCC4.UINT16[L]
#define RSCAN0CFCC4LL RSCAN0.CFCC4.UINT8[LL]
#define RSCAN0CFCC4LH RSCAN0.CFCC4.UINT8[LH]
#define RSCAN0CFCC4H RSCAN0.CFCC4.UINT16[H]
#define RSCAN0CFCC4HL RSCAN0.CFCC4.UINT8[HL]
#define RSCAN0CFCC4HH RSCAN0.CFCC4.UINT8[HH]
#define RSCAN0CFCC5 RSCAN0.CFCC5.UINT32
#define RSCAN0CFCC5L RSCAN0.CFCC5.UINT16[L]
#define RSCAN0CFCC5LL RSCAN0.CFCC5.UINT8[LL]
#define RSCAN0CFCC5LH RSCAN0.CFCC5.UINT8[LH]
#define RSCAN0CFCC5H RSCAN0.CFCC5.UINT16[H]
#define RSCAN0CFCC5HL RSCAN0.CFCC5.UINT8[HL]
#define RSCAN0CFCC5HH RSCAN0.CFCC5.UINT8[HH]
#define RSCAN0CFSTS0 RSCAN0.CFSTS0.UINT32
#define RSCAN0CFSTS0L RSCAN0.CFSTS0.UINT16[L]
#define RSCAN0CFSTS0LL RSCAN0.CFSTS0.UINT8[LL]
#define RSCAN0CFSTS0LH RSCAN0.CFSTS0.UINT8[LH]
#define RSCAN0CFSTS0H RSCAN0.CFSTS0.UINT16[H]
#define RSCAN0CFSTS0HL RSCAN0.CFSTS0.UINT8[HL]
#define RSCAN0CFSTS0HH RSCAN0.CFSTS0.UINT8[HH]
#define RSCAN0CFEMP RSCAN0.CFSTS0.BIT.CFEMP
#define RSCAN0CFFLL RSCAN0.CFSTS0.BIT.CFFLL
#define RSCAN0CFMLT RSCAN0.CFSTS0.BIT.CFMLT
#define RSCAN0CFRXIF RSCAN0.CFSTS0.BIT.CFRXIF
#define RSCAN0CFTXIF RSCAN0.CFSTS0.BIT.CFTXIF
#define RSCAN0CFMC RSCAN0.CFSTS0.BIT.CFMC
#define RSCAN0CFSTS1 RSCAN0.CFSTS1.UINT32
#define RSCAN0CFSTS1L RSCAN0.CFSTS1.UINT16[L]
#define RSCAN0CFSTS1LL RSCAN0.CFSTS1.UINT8[LL]
#define RSCAN0CFSTS1LH RSCAN0.CFSTS1.UINT8[LH]
#define RSCAN0CFSTS1H RSCAN0.CFSTS1.UINT16[H]
#define RSCAN0CFSTS1HL RSCAN0.CFSTS1.UINT8[HL]
#define RSCAN0CFSTS1HH RSCAN0.CFSTS1.UINT8[HH]
#define RSCAN0CFSTS2 RSCAN0.CFSTS2.UINT32
#define RSCAN0CFSTS2L RSCAN0.CFSTS2.UINT16[L]
#define RSCAN0CFSTS2LL RSCAN0.CFSTS2.UINT8[LL]
#define RSCAN0CFSTS2LH RSCAN0.CFSTS2.UINT8[LH]
#define RSCAN0CFSTS2H RSCAN0.CFSTS2.UINT16[H]
#define RSCAN0CFSTS2HL RSCAN0.CFSTS2.UINT8[HL]
#define RSCAN0CFSTS2HH RSCAN0.CFSTS2.UINT8[HH]
#define RSCAN0CFSTS3 RSCAN0.CFSTS3.UINT32
#define RSCAN0CFSTS3L RSCAN0.CFSTS3.UINT16[L]
#define RSCAN0CFSTS3LL RSCAN0.CFSTS3.UINT8[LL]
#define RSCAN0CFSTS3LH RSCAN0.CFSTS3.UINT8[LH]
#define RSCAN0CFSTS3H RSCAN0.CFSTS3.UINT16[H]
#define RSCAN0CFSTS3HL RSCAN0.CFSTS3.UINT8[HL]
#define RSCAN0CFSTS3HH RSCAN0.CFSTS3.UINT8[HH]
#define RSCAN0CFSTS4 RSCAN0.CFSTS4.UINT32
#define RSCAN0CFSTS4L RSCAN0.CFSTS4.UINT16[L]
#define RSCAN0CFSTS4LL RSCAN0.CFSTS4.UINT8[LL]
#define RSCAN0CFSTS4LH RSCAN0.CFSTS4.UINT8[LH]
#define RSCAN0CFSTS4H RSCAN0.CFSTS4.UINT16[H]
#define RSCAN0CFSTS4HL RSCAN0.CFSTS4.UINT8[HL]
#define RSCAN0CFSTS4HH RSCAN0.CFSTS4.UINT8[HH]
#define RSCAN0CFSTS5 RSCAN0.CFSTS5.UINT32
#define RSCAN0CFSTS5L RSCAN0.CFSTS5.UINT16[L]
#define RSCAN0CFSTS5LL RSCAN0.CFSTS5.UINT8[LL]
#define RSCAN0CFSTS5LH RSCAN0.CFSTS5.UINT8[LH]
#define RSCAN0CFSTS5H RSCAN0.CFSTS5.UINT16[H]
#define RSCAN0CFSTS5HL RSCAN0.CFSTS5.UINT8[HL]
#define RSCAN0CFSTS5HH RSCAN0.CFSTS5.UINT8[HH]
#define RSCAN0CFPCTR0 RSCAN0.CFPCTR0.UINT32
#define RSCAN0CFPCTR0L RSCAN0.CFPCTR0.UINT16[L]
#define RSCAN0CFPCTR0LL RSCAN0.CFPCTR0.UINT8[LL]
#define RSCAN0CFPCTR0LH RSCAN0.CFPCTR0.UINT8[LH]
#define RSCAN0CFPCTR0H RSCAN0.CFPCTR0.UINT16[H]
#define RSCAN0CFPCTR0HL RSCAN0.CFPCTR0.UINT8[HL]
#define RSCAN0CFPCTR0HH RSCAN0.CFPCTR0.UINT8[HH]
#define RSCAN0CFPC RSCAN0.CFPCTR0.BIT.CFPC
#define RSCAN0CFPCTR1 RSCAN0.CFPCTR1.UINT32
#define RSCAN0CFPCTR1L RSCAN0.CFPCTR1.UINT16[L]
#define RSCAN0CFPCTR1LL RSCAN0.CFPCTR1.UINT8[LL]
#define RSCAN0CFPCTR1LH RSCAN0.CFPCTR1.UINT8[LH]
#define RSCAN0CFPCTR1H RSCAN0.CFPCTR1.UINT16[H]
#define RSCAN0CFPCTR1HL RSCAN0.CFPCTR1.UINT8[HL]
#define RSCAN0CFPCTR1HH RSCAN0.CFPCTR1.UINT8[HH]
#define RSCAN0CFPCTR2 RSCAN0.CFPCTR2.UINT32
#define RSCAN0CFPCTR2L RSCAN0.CFPCTR2.UINT16[L]
#define RSCAN0CFPCTR2LL RSCAN0.CFPCTR2.UINT8[LL]
#define RSCAN0CFPCTR2LH RSCAN0.CFPCTR2.UINT8[LH]
#define RSCAN0CFPCTR2H RSCAN0.CFPCTR2.UINT16[H]
#define RSCAN0CFPCTR2HL RSCAN0.CFPCTR2.UINT8[HL]
#define RSCAN0CFPCTR2HH RSCAN0.CFPCTR2.UINT8[HH]
#define RSCAN0CFPCTR3 RSCAN0.CFPCTR3.UINT32
#define RSCAN0CFPCTR3L RSCAN0.CFPCTR3.UINT16[L]
#define RSCAN0CFPCTR3LL RSCAN0.CFPCTR3.UINT8[LL]
#define RSCAN0CFPCTR3LH RSCAN0.CFPCTR3.UINT8[LH]
#define RSCAN0CFPCTR3H RSCAN0.CFPCTR3.UINT16[H]
#define RSCAN0CFPCTR3HL RSCAN0.CFPCTR3.UINT8[HL]
#define RSCAN0CFPCTR3HH RSCAN0.CFPCTR3.UINT8[HH]
#define RSCAN0CFPCTR4 RSCAN0.CFPCTR4.UINT32
#define RSCAN0CFPCTR4L RSCAN0.CFPCTR4.UINT16[L]
#define RSCAN0CFPCTR4LL RSCAN0.CFPCTR4.UINT8[LL]
#define RSCAN0CFPCTR4LH RSCAN0.CFPCTR4.UINT8[LH]
#define RSCAN0CFPCTR4H RSCAN0.CFPCTR4.UINT16[H]
#define RSCAN0CFPCTR4HL RSCAN0.CFPCTR4.UINT8[HL]
#define RSCAN0CFPCTR4HH RSCAN0.CFPCTR4.UINT8[HH]
#define RSCAN0CFPCTR5 RSCAN0.CFPCTR5.UINT32
#define RSCAN0CFPCTR5L RSCAN0.CFPCTR5.UINT16[L]
#define RSCAN0CFPCTR5LL RSCAN0.CFPCTR5.UINT8[LL]
#define RSCAN0CFPCTR5LH RSCAN0.CFPCTR5.UINT8[LH]
#define RSCAN0CFPCTR5H RSCAN0.CFPCTR5.UINT16[H]
#define RSCAN0CFPCTR5HL RSCAN0.CFPCTR5.UINT8[HL]
#define RSCAN0CFPCTR5HH RSCAN0.CFPCTR5.UINT8[HH]
#define RSCAN0FESTS RSCAN0.FESTS.UINT32
#define RSCAN0FESTSL RSCAN0.FESTS.UINT16[L]
#define RSCAN0FESTSLL RSCAN0.FESTS.UINT8[LL]
#define RSCAN0FESTSLH RSCAN0.FESTS.UINT8[LH]
#define RSCAN0FESTSH RSCAN0.FESTS.UINT16[H]
#define RSCAN0FESTSHL RSCAN0.FESTS.UINT8[HL]
#define RSCAN0FESTSHH RSCAN0.FESTS.UINT8[HH]
#define RSCAN0RF0EMP RSCAN0.FESTS.BIT.RF0EMP
#define RSCAN0RF1EMP RSCAN0.FESTS.BIT.RF1EMP
#define RSCAN0RF2EMP RSCAN0.FESTS.BIT.RF2EMP
#define RSCAN0RF3EMP RSCAN0.FESTS.BIT.RF3EMP
#define RSCAN0RF4EMP RSCAN0.FESTS.BIT.RF4EMP
#define RSCAN0RF5EMP RSCAN0.FESTS.BIT.RF5EMP
#define RSCAN0RF6EMP RSCAN0.FESTS.BIT.RF6EMP
#define RSCAN0RF7EMP RSCAN0.FESTS.BIT.RF7EMP
#define RSCAN0CF0EMP RSCAN0.FESTS.BIT.CF0EMP
#define RSCAN0CF1EMP RSCAN0.FESTS.BIT.CF1EMP
#define RSCAN0CF2EMP RSCAN0.FESTS.BIT.CF2EMP
#define RSCAN0CF3EMP RSCAN0.FESTS.BIT.CF3EMP
#define RSCAN0CF4EMP RSCAN0.FESTS.BIT.CF4EMP
#define RSCAN0CF5EMP RSCAN0.FESTS.BIT.CF5EMP
#define RSCAN0FFSTS RSCAN0.FFSTS.UINT32
#define RSCAN0FFSTSL RSCAN0.FFSTS.UINT16[L]
#define RSCAN0FFSTSLL RSCAN0.FFSTS.UINT8[LL]
#define RSCAN0FFSTSLH RSCAN0.FFSTS.UINT8[LH]
#define RSCAN0FFSTSH RSCAN0.FFSTS.UINT16[H]
#define RSCAN0FFSTSHL RSCAN0.FFSTS.UINT8[HL]
#define RSCAN0FFSTSHH RSCAN0.FFSTS.UINT8[HH]
#define RSCAN0RF0FLL RSCAN0.FFSTS.BIT.RF0FLL
#define RSCAN0RF1FLL RSCAN0.FFSTS.BIT.RF1FLL
#define RSCAN0RF2FLL RSCAN0.FFSTS.BIT.RF2FLL
#define RSCAN0RF3FLL RSCAN0.FFSTS.BIT.RF3FLL
#define RSCAN0RF4FLL RSCAN0.FFSTS.BIT.RF4FLL
#define RSCAN0RF5FLL RSCAN0.FFSTS.BIT.RF5FLL
#define RSCAN0RF6FLL RSCAN0.FFSTS.BIT.RF6FLL
#define RSCAN0RF7FLL RSCAN0.FFSTS.BIT.RF7FLL
#define RSCAN0CF0FLL RSCAN0.FFSTS.BIT.CF0FLL
#define RSCAN0CF1FLL RSCAN0.FFSTS.BIT.CF1FLL
#define RSCAN0CF2FLL RSCAN0.FFSTS.BIT.CF2FLL
#define RSCAN0CF3FLL RSCAN0.FFSTS.BIT.CF3FLL
#define RSCAN0CF4FLL RSCAN0.FFSTS.BIT.CF4FLL
#define RSCAN0CF5FLL RSCAN0.FFSTS.BIT.CF5FLL
#define RSCAN0FMSTS RSCAN0.FMSTS.UINT32
#define RSCAN0FMSTSL RSCAN0.FMSTS.UINT16[L]
#define RSCAN0FMSTSLL RSCAN0.FMSTS.UINT8[LL]
#define RSCAN0FMSTSLH RSCAN0.FMSTS.UINT8[LH]
#define RSCAN0FMSTSH RSCAN0.FMSTS.UINT16[H]
#define RSCAN0FMSTSHL RSCAN0.FMSTS.UINT8[HL]
#define RSCAN0FMSTSHH RSCAN0.FMSTS.UINT8[HH]
#define RSCAN0RF0MLT RSCAN0.FMSTS.BIT.RF0MLT
#define RSCAN0RF1MLT RSCAN0.FMSTS.BIT.RF1MLT
#define RSCAN0RF2MLT RSCAN0.FMSTS.BIT.RF2MLT
#define RSCAN0RF3MLT RSCAN0.FMSTS.BIT.RF3MLT
#define RSCAN0RF4MLT RSCAN0.FMSTS.BIT.RF4MLT
#define RSCAN0RF5MLT RSCAN0.FMSTS.BIT.RF5MLT
#define RSCAN0RF6MLT RSCAN0.FMSTS.BIT.RF6MLT
#define RSCAN0RF7MLT RSCAN0.FMSTS.BIT.RF7MLT
#define RSCAN0CF0MLT RSCAN0.FMSTS.BIT.CF0MLT
#define RSCAN0CF1MLT RSCAN0.FMSTS.BIT.CF1MLT
#define RSCAN0CF2MLT RSCAN0.FMSTS.BIT.CF2MLT
#define RSCAN0CF3MLT RSCAN0.FMSTS.BIT.CF3MLT
#define RSCAN0CF4MLT RSCAN0.FMSTS.BIT.CF4MLT
#define RSCAN0CF5MLT RSCAN0.FMSTS.BIT.CF5MLT
#define RSCAN0RFISTS RSCAN0.RFISTS.UINT32
#define RSCAN0RFISTSL RSCAN0.RFISTS.UINT16[L]
#define RSCAN0RFISTSLL RSCAN0.RFISTS.UINT8[LL]
#define RSCAN0RFISTSLH RSCAN0.RFISTS.UINT8[LH]
#define RSCAN0RFISTSH RSCAN0.RFISTS.UINT16[H]
#define RSCAN0RFISTSHL RSCAN0.RFISTS.UINT8[HL]
#define RSCAN0RFISTSHH RSCAN0.RFISTS.UINT8[HH]
#define RSCAN0RF0IF RSCAN0.RFISTS.BIT.RF0IF
#define RSCAN0RF1IF RSCAN0.RFISTS.BIT.RF1IF
#define RSCAN0RF2IF RSCAN0.RFISTS.BIT.RF2IF
#define RSCAN0RF3IF RSCAN0.RFISTS.BIT.RF3IF
#define RSCAN0RF4IF RSCAN0.RFISTS.BIT.RF4IF
#define RSCAN0RF5IF RSCAN0.RFISTS.BIT.RF5IF
#define RSCAN0RF6IF RSCAN0.RFISTS.BIT.RF6IF
#define RSCAN0RF7IF RSCAN0.RFISTS.BIT.RF7IF
#define RSCAN0CFRISTS RSCAN0.CFRISTS.UINT32
#define RSCAN0CFRISTSL RSCAN0.CFRISTS.UINT16[L]
#define RSCAN0CFRISTSLL RSCAN0.CFRISTS.UINT8[LL]
#define RSCAN0CFRISTSLH RSCAN0.CFRISTS.UINT8[LH]
#define RSCAN0CFRISTSH RSCAN0.CFRISTS.UINT16[H]
#define RSCAN0CFRISTSHL RSCAN0.CFRISTS.UINT8[HL]
#define RSCAN0CFRISTSHH RSCAN0.CFRISTS.UINT8[HH]
#define RSCAN0CF0RXIF RSCAN0.CFRISTS.BIT.CF0RXIF
#define RSCAN0CF1RXIF RSCAN0.CFRISTS.BIT.CF1RXIF
#define RSCAN0CF2RXIF RSCAN0.CFRISTS.BIT.CF2RXIF
#define RSCAN0CF3RXIF RSCAN0.CFRISTS.BIT.CF3RXIF
#define RSCAN0CF4RXIF RSCAN0.CFRISTS.BIT.CF4RXIF
#define RSCAN0CF5RXIF RSCAN0.CFRISTS.BIT.CF5RXIF
#define RSCAN0CFTISTS RSCAN0.CFTISTS.UINT32
#define RSCAN0CFTISTSL RSCAN0.CFTISTS.UINT16[L]
#define RSCAN0CFTISTSLL RSCAN0.CFTISTS.UINT8[LL]
#define RSCAN0CFTISTSLH RSCAN0.CFTISTS.UINT8[LH]
#define RSCAN0CFTISTSH RSCAN0.CFTISTS.UINT16[H]
#define RSCAN0CFTISTSHL RSCAN0.CFTISTS.UINT8[HL]
#define RSCAN0CFTISTSHH RSCAN0.CFTISTS.UINT8[HH]
#define RSCAN0CF0TXIF RSCAN0.CFTISTS.BIT.CF0TXIF
#define RSCAN0CF1TXIF RSCAN0.CFTISTS.BIT.CF1TXIF
#define RSCAN0CF2TXIF RSCAN0.CFTISTS.BIT.CF2TXIF
#define RSCAN0CF3TXIF RSCAN0.CFTISTS.BIT.CF3TXIF
#define RSCAN0CF4TXIF RSCAN0.CFTISTS.BIT.CF4TXIF
#define RSCAN0CF5TXIF RSCAN0.CFTISTS.BIT.CF5TXIF
#define RSCAN0TMC0 RSCAN0.TMC0.UINT8
#define RSCAN0TMTR RSCAN0.TMC0.BIT.TMTR
#define RSCAN0TMTAR RSCAN0.TMC0.BIT.TMTAR
#define RSCAN0TMOM RSCAN0.TMC0.BIT.TMOM
#define RSCAN0TMC1 RSCAN0.TMC1.UINT8
#define RSCAN0TMC2 RSCAN0.TMC2.UINT8
#define RSCAN0TMC3 RSCAN0.TMC3.UINT8
#define RSCAN0TMC4 RSCAN0.TMC4.UINT8
#define RSCAN0TMC5 RSCAN0.TMC5.UINT8
#define RSCAN0TMC6 RSCAN0.TMC6.UINT8
#define RSCAN0TMC7 RSCAN0.TMC7.UINT8
#define RSCAN0TMC8 RSCAN0.TMC8.UINT8
#define RSCAN0TMC9 RSCAN0.TMC9.UINT8
#define RSCAN0TMC10 RSCAN0.TMC10.UINT8
#define RSCAN0TMC11 RSCAN0.TMC11.UINT8
#define RSCAN0TMC12 RSCAN0.TMC12.UINT8
#define RSCAN0TMC13 RSCAN0.TMC13.UINT8
#define RSCAN0TMC14 RSCAN0.TMC14.UINT8
#define RSCAN0TMC15 RSCAN0.TMC15.UINT8
#define RSCAN0TMC16 RSCAN0.TMC16.UINT8
#define RSCAN0TMC17 RSCAN0.TMC17.UINT8
#define RSCAN0TMC18 RSCAN0.TMC18.UINT8
#define RSCAN0TMC19 RSCAN0.TMC19.UINT8
#define RSCAN0TMC20 RSCAN0.TMC20.UINT8
#define RSCAN0TMC21 RSCAN0.TMC21.UINT8
#define RSCAN0TMC22 RSCAN0.TMC22.UINT8
#define RSCAN0TMC23 RSCAN0.TMC23.UINT8
#define RSCAN0TMC24 RSCAN0.TMC24.UINT8
#define RSCAN0TMC25 RSCAN0.TMC25.UINT8
#define RSCAN0TMC26 RSCAN0.TMC26.UINT8
#define RSCAN0TMC27 RSCAN0.TMC27.UINT8
#define RSCAN0TMC28 RSCAN0.TMC28.UINT8
#define RSCAN0TMC29 RSCAN0.TMC29.UINT8
#define RSCAN0TMC30 RSCAN0.TMC30.UINT8
#define RSCAN0TMC31 RSCAN0.TMC31.UINT8
#define RSCAN0TMSTS0 RSCAN0.TMSTS0.UINT8
#define RSCAN0TMTSTS RSCAN0.TMSTS0.BIT.TMTSTS
#define RSCAN0TMTRF RSCAN0.TMSTS0.BIT.TMTRF
#define RSCAN0TMTRM RSCAN0.TMSTS0.BIT.TMTRM
#define RSCAN0TMTARM RSCAN0.TMSTS0.BIT.TMTARM
#define RSCAN0TMSTS1 RSCAN0.TMSTS1.UINT8
#define RSCAN0TMSTS2 RSCAN0.TMSTS2.UINT8
#define RSCAN0TMSTS3 RSCAN0.TMSTS3.UINT8
#define RSCAN0TMSTS4 RSCAN0.TMSTS4.UINT8
#define RSCAN0TMSTS5 RSCAN0.TMSTS5.UINT8
#define RSCAN0TMSTS6 RSCAN0.TMSTS6.UINT8
#define RSCAN0TMSTS7 RSCAN0.TMSTS7.UINT8
#define RSCAN0TMSTS8 RSCAN0.TMSTS8.UINT8
#define RSCAN0TMSTS9 RSCAN0.TMSTS9.UINT8
#define RSCAN0TMSTS10 RSCAN0.TMSTS10.UINT8
#define RSCAN0TMSTS11 RSCAN0.TMSTS11.UINT8
#define RSCAN0TMSTS12 RSCAN0.TMSTS12.UINT8
#define RSCAN0TMSTS13 RSCAN0.TMSTS13.UINT8
#define RSCAN0TMSTS14 RSCAN0.TMSTS14.UINT8
#define RSCAN0TMSTS15 RSCAN0.TMSTS15.UINT8
#define RSCAN0TMSTS16 RSCAN0.TMSTS16.UINT8
#define RSCAN0TMSTS17 RSCAN0.TMSTS17.UINT8
#define RSCAN0TMSTS18 RSCAN0.TMSTS18.UINT8
#define RSCAN0TMSTS19 RSCAN0.TMSTS19.UINT8
#define RSCAN0TMSTS20 RSCAN0.TMSTS20.UINT8
#define RSCAN0TMSTS21 RSCAN0.TMSTS21.UINT8
#define RSCAN0TMSTS22 RSCAN0.TMSTS22.UINT8
#define RSCAN0TMSTS23 RSCAN0.TMSTS23.UINT8
#define RSCAN0TMSTS24 RSCAN0.TMSTS24.UINT8
#define RSCAN0TMSTS25 RSCAN0.TMSTS25.UINT8
#define RSCAN0TMSTS26 RSCAN0.TMSTS26.UINT8
#define RSCAN0TMSTS27 RSCAN0.TMSTS27.UINT8
#define RSCAN0TMSTS28 RSCAN0.TMSTS28.UINT8
#define RSCAN0TMSTS29 RSCAN0.TMSTS29.UINT8
#define RSCAN0TMSTS30 RSCAN0.TMSTS30.UINT8
#define RSCAN0TMSTS31 RSCAN0.TMSTS31.UINT8
#define RSCAN0TMTRSTS0 RSCAN0.TMTRSTS0.UINT32
#define RSCAN0TMTRSTS0L RSCAN0.TMTRSTS0.UINT16[L]
#define RSCAN0TMTRSTS0LL RSCAN0.TMTRSTS0.UINT8[LL]
#define RSCAN0TMTRSTS0LH RSCAN0.TMTRSTS0.UINT8[LH]
#define RSCAN0TMTRSTS0H RSCAN0.TMTRSTS0.UINT16[H]
#define RSCAN0TMTRSTS0HL RSCAN0.TMTRSTS0.UINT8[HL]
#define RSCAN0TMTRSTS0HH RSCAN0.TMTRSTS0.UINT8[HH]
#define RSCAN0TMTRSTS1 RSCAN0.TMTRSTS0.BIT.TMTRSTS1
#define RSCAN0TMTRSTS2 RSCAN0.TMTRSTS0.BIT.TMTRSTS2
#define RSCAN0TMTRSTS3 RSCAN0.TMTRSTS0.BIT.TMTRSTS3
#define RSCAN0TMTRSTS4 RSCAN0.TMTRSTS0.BIT.TMTRSTS4
#define RSCAN0TMTRSTS5 RSCAN0.TMTRSTS0.BIT.TMTRSTS5
#define RSCAN0TMTRSTS6 RSCAN0.TMTRSTS0.BIT.TMTRSTS6
#define RSCAN0TMTRSTS7 RSCAN0.TMTRSTS0.BIT.TMTRSTS7
#define RSCAN0TMTRSTS8 RSCAN0.TMTRSTS0.BIT.TMTRSTS8
#define RSCAN0TMTRSTS9 RSCAN0.TMTRSTS0.BIT.TMTRSTS9
#define RSCAN0TMTRSTS10 RSCAN0.TMTRSTS0.BIT.TMTRSTS10
#define RSCAN0TMTRSTS11 RSCAN0.TMTRSTS0.BIT.TMTRSTS11
#define RSCAN0TMTRSTS12 RSCAN0.TMTRSTS0.BIT.TMTRSTS12
#define RSCAN0TMTRSTS13 RSCAN0.TMTRSTS0.BIT.TMTRSTS13
#define RSCAN0TMTRSTS14 RSCAN0.TMTRSTS0.BIT.TMTRSTS14
#define RSCAN0TMTRSTS15 RSCAN0.TMTRSTS0.BIT.TMTRSTS15
#define RSCAN0TMTRSTS16 RSCAN0.TMTRSTS0.BIT.TMTRSTS16
#define RSCAN0TMTRSTS17 RSCAN0.TMTRSTS0.BIT.TMTRSTS17
#define RSCAN0TMTRSTS18 RSCAN0.TMTRSTS0.BIT.TMTRSTS18
#define RSCAN0TMTRSTS19 RSCAN0.TMTRSTS0.BIT.TMTRSTS19
#define RSCAN0TMTRSTS20 RSCAN0.TMTRSTS0.BIT.TMTRSTS20
#define RSCAN0TMTRSTS21 RSCAN0.TMTRSTS0.BIT.TMTRSTS21
#define RSCAN0TMTRSTS22 RSCAN0.TMTRSTS0.BIT.TMTRSTS22
#define RSCAN0TMTRSTS23 RSCAN0.TMTRSTS0.BIT.TMTRSTS23
#define RSCAN0TMTRSTS24 RSCAN0.TMTRSTS0.BIT.TMTRSTS24
#define RSCAN0TMTRSTS25 RSCAN0.TMTRSTS0.BIT.TMTRSTS25
#define RSCAN0TMTRSTS26 RSCAN0.TMTRSTS0.BIT.TMTRSTS26
#define RSCAN0TMTRSTS27 RSCAN0.TMTRSTS0.BIT.TMTRSTS27
#define RSCAN0TMTRSTS28 RSCAN0.TMTRSTS0.BIT.TMTRSTS28
#define RSCAN0TMTRSTS29 RSCAN0.TMTRSTS0.BIT.TMTRSTS29
#define RSCAN0TMTRSTS30 RSCAN0.TMTRSTS0.BIT.TMTRSTS30
#define RSCAN0TMTRSTS31 RSCAN0.TMTRSTS0.BIT.TMTRSTS31
#define RSCAN0TMTARSTS0 RSCAN0.TMTARSTS0.UINT32
#define RSCAN0TMTARSTS0L RSCAN0.TMTARSTS0.UINT16[L]
#define RSCAN0TMTARSTS0LL RSCAN0.TMTARSTS0.UINT8[LL]
#define RSCAN0TMTARSTS0LH RSCAN0.TMTARSTS0.UINT8[LH]
#define RSCAN0TMTARSTS0H RSCAN0.TMTARSTS0.UINT16[H]
#define RSCAN0TMTARSTS0HL RSCAN0.TMTARSTS0.UINT8[HL]
#define RSCAN0TMTARSTS0HH RSCAN0.TMTARSTS0.UINT8[HH]
#define RSCAN0TMTARSTS1 RSCAN0.TMTARSTS0.BIT.TMTARSTS1
#define RSCAN0TMTARSTS2 RSCAN0.TMTARSTS0.BIT.TMTARSTS2
#define RSCAN0TMTARSTS3 RSCAN0.TMTARSTS0.BIT.TMTARSTS3
#define RSCAN0TMTARSTS4 RSCAN0.TMTARSTS0.BIT.TMTARSTS4
#define RSCAN0TMTARSTS5 RSCAN0.TMTARSTS0.BIT.TMTARSTS5
#define RSCAN0TMTARSTS6 RSCAN0.TMTARSTS0.BIT.TMTARSTS6
#define RSCAN0TMTARSTS7 RSCAN0.TMTARSTS0.BIT.TMTARSTS7
#define RSCAN0TMTARSTS8 RSCAN0.TMTARSTS0.BIT.TMTARSTS8
#define RSCAN0TMTARSTS9 RSCAN0.TMTARSTS0.BIT.TMTARSTS9
#define RSCAN0TMTARSTS10 RSCAN0.TMTARSTS0.BIT.TMTARSTS10
#define RSCAN0TMTARSTS11 RSCAN0.TMTARSTS0.BIT.TMTARSTS11
#define RSCAN0TMTARSTS12 RSCAN0.TMTARSTS0.BIT.TMTARSTS12
#define RSCAN0TMTARSTS13 RSCAN0.TMTARSTS0.BIT.TMTARSTS13
#define RSCAN0TMTARSTS14 RSCAN0.TMTARSTS0.BIT.TMTARSTS14
#define RSCAN0TMTARSTS15 RSCAN0.TMTARSTS0.BIT.TMTARSTS15
#define RSCAN0TMTARSTS16 RSCAN0.TMTARSTS0.BIT.TMTARSTS16
#define RSCAN0TMTARSTS17 RSCAN0.TMTARSTS0.BIT.TMTARSTS17
#define RSCAN0TMTARSTS18 RSCAN0.TMTARSTS0.BIT.TMTARSTS18
#define RSCAN0TMTARSTS19 RSCAN0.TMTARSTS0.BIT.TMTARSTS19
#define RSCAN0TMTARSTS20 RSCAN0.TMTARSTS0.BIT.TMTARSTS20
#define RSCAN0TMTARSTS21 RSCAN0.TMTARSTS0.BIT.TMTARSTS21
#define RSCAN0TMTARSTS22 RSCAN0.TMTARSTS0.BIT.TMTARSTS22
#define RSCAN0TMTARSTS23 RSCAN0.TMTARSTS0.BIT.TMTARSTS23
#define RSCAN0TMTARSTS24 RSCAN0.TMTARSTS0.BIT.TMTARSTS24
#define RSCAN0TMTARSTS25 RSCAN0.TMTARSTS0.BIT.TMTARSTS25
#define RSCAN0TMTARSTS26 RSCAN0.TMTARSTS0.BIT.TMTARSTS26
#define RSCAN0TMTARSTS27 RSCAN0.TMTARSTS0.BIT.TMTARSTS27
#define RSCAN0TMTARSTS28 RSCAN0.TMTARSTS0.BIT.TMTARSTS28
#define RSCAN0TMTARSTS29 RSCAN0.TMTARSTS0.BIT.TMTARSTS29
#define RSCAN0TMTARSTS30 RSCAN0.TMTARSTS0.BIT.TMTARSTS30
#define RSCAN0TMTARSTS31 RSCAN0.TMTARSTS0.BIT.TMTARSTS31
#define RSCAN0TMTCSTS0 RSCAN0.TMTCSTS0.UINT32
#define RSCAN0TMTCSTS0L RSCAN0.TMTCSTS0.UINT16[L]
#define RSCAN0TMTCSTS0LL RSCAN0.TMTCSTS0.UINT8[LL]
#define RSCAN0TMTCSTS0LH RSCAN0.TMTCSTS0.UINT8[LH]
#define RSCAN0TMTCSTS0H RSCAN0.TMTCSTS0.UINT16[H]
#define RSCAN0TMTCSTS0HL RSCAN0.TMTCSTS0.UINT8[HL]
#define RSCAN0TMTCSTS0HH RSCAN0.TMTCSTS0.UINT8[HH]
#define RSCAN0TMTCSTS1 RSCAN0.TMTCSTS0.BIT.TMTCSTS1
#define RSCAN0TMTCSTS2 RSCAN0.TMTCSTS0.BIT.TMTCSTS2
#define RSCAN0TMTCSTS3 RSCAN0.TMTCSTS0.BIT.TMTCSTS3
#define RSCAN0TMTCSTS4 RSCAN0.TMTCSTS0.BIT.TMTCSTS4
#define RSCAN0TMTCSTS5 RSCAN0.TMTCSTS0.BIT.TMTCSTS5
#define RSCAN0TMTCSTS6 RSCAN0.TMTCSTS0.BIT.TMTCSTS6
#define RSCAN0TMTCSTS7 RSCAN0.TMTCSTS0.BIT.TMTCSTS7
#define RSCAN0TMTCSTS8 RSCAN0.TMTCSTS0.BIT.TMTCSTS8
#define RSCAN0TMTCSTS9 RSCAN0.TMTCSTS0.BIT.TMTCSTS9
#define RSCAN0TMTCSTS10 RSCAN0.TMTCSTS0.BIT.TMTCSTS10
#define RSCAN0TMTCSTS11 RSCAN0.TMTCSTS0.BIT.TMTCSTS11
#define RSCAN0TMTCSTS12 RSCAN0.TMTCSTS0.BIT.TMTCSTS12
#define RSCAN0TMTCSTS13 RSCAN0.TMTCSTS0.BIT.TMTCSTS13
#define RSCAN0TMTCSTS14 RSCAN0.TMTCSTS0.BIT.TMTCSTS14
#define RSCAN0TMTCSTS15 RSCAN0.TMTCSTS0.BIT.TMTCSTS15
#define RSCAN0TMTCSTS16 RSCAN0.TMTCSTS0.BIT.TMTCSTS16
#define RSCAN0TMTCSTS17 RSCAN0.TMTCSTS0.BIT.TMTCSTS17
#define RSCAN0TMTCSTS18 RSCAN0.TMTCSTS0.BIT.TMTCSTS18
#define RSCAN0TMTCSTS19 RSCAN0.TMTCSTS0.BIT.TMTCSTS19
#define RSCAN0TMTCSTS20 RSCAN0.TMTCSTS0.BIT.TMTCSTS20
#define RSCAN0TMTCSTS21 RSCAN0.TMTCSTS0.BIT.TMTCSTS21
#define RSCAN0TMTCSTS22 RSCAN0.TMTCSTS0.BIT.TMTCSTS22
#define RSCAN0TMTCSTS23 RSCAN0.TMTCSTS0.BIT.TMTCSTS23
#define RSCAN0TMTCSTS24 RSCAN0.TMTCSTS0.BIT.TMTCSTS24
#define RSCAN0TMTCSTS25 RSCAN0.TMTCSTS0.BIT.TMTCSTS25
#define RSCAN0TMTCSTS26 RSCAN0.TMTCSTS0.BIT.TMTCSTS26
#define RSCAN0TMTCSTS27 RSCAN0.TMTCSTS0.BIT.TMTCSTS27
#define RSCAN0TMTCSTS28 RSCAN0.TMTCSTS0.BIT.TMTCSTS28
#define RSCAN0TMTCSTS29 RSCAN0.TMTCSTS0.BIT.TMTCSTS29
#define RSCAN0TMTCSTS30 RSCAN0.TMTCSTS0.BIT.TMTCSTS30
#define RSCAN0TMTCSTS31 RSCAN0.TMTCSTS0.BIT.TMTCSTS31
#define RSCAN0TMTASTS0 RSCAN0.TMTASTS0.UINT32
#define RSCAN0TMTASTS0L RSCAN0.TMTASTS0.UINT16[L]
#define RSCAN0TMTASTS0LL RSCAN0.TMTASTS0.UINT8[LL]
#define RSCAN0TMTASTS0LH RSCAN0.TMTASTS0.UINT8[LH]
#define RSCAN0TMTASTS0H RSCAN0.TMTASTS0.UINT16[H]
#define RSCAN0TMTASTS0HL RSCAN0.TMTASTS0.UINT8[HL]
#define RSCAN0TMTASTS0HH RSCAN0.TMTASTS0.UINT8[HH]
#define RSCAN0TMTASTS1 RSCAN0.TMTASTS0.BIT.TMTASTS1
#define RSCAN0TMTASTS2 RSCAN0.TMTASTS0.BIT.TMTASTS2
#define RSCAN0TMTASTS3 RSCAN0.TMTASTS0.BIT.TMTASTS3
#define RSCAN0TMTASTS4 RSCAN0.TMTASTS0.BIT.TMTASTS4
#define RSCAN0TMTASTS5 RSCAN0.TMTASTS0.BIT.TMTASTS5
#define RSCAN0TMTASTS6 RSCAN0.TMTASTS0.BIT.TMTASTS6
#define RSCAN0TMTASTS7 RSCAN0.TMTASTS0.BIT.TMTASTS7
#define RSCAN0TMTASTS8 RSCAN0.TMTASTS0.BIT.TMTASTS8
#define RSCAN0TMTASTS9 RSCAN0.TMTASTS0.BIT.TMTASTS9
#define RSCAN0TMTASTS10 RSCAN0.TMTASTS0.BIT.TMTASTS10
#define RSCAN0TMTASTS11 RSCAN0.TMTASTS0.BIT.TMTASTS11
#define RSCAN0TMTASTS12 RSCAN0.TMTASTS0.BIT.TMTASTS12
#define RSCAN0TMTASTS13 RSCAN0.TMTASTS0.BIT.TMTASTS13
#define RSCAN0TMTASTS14 RSCAN0.TMTASTS0.BIT.TMTASTS14
#define RSCAN0TMTASTS15 RSCAN0.TMTASTS0.BIT.TMTASTS15
#define RSCAN0TMTASTS16 RSCAN0.TMTASTS0.BIT.TMTASTS16
#define RSCAN0TMTASTS17 RSCAN0.TMTASTS0.BIT.TMTASTS17
#define RSCAN0TMTASTS18 RSCAN0.TMTASTS0.BIT.TMTASTS18
#define RSCAN0TMTASTS19 RSCAN0.TMTASTS0.BIT.TMTASTS19
#define RSCAN0TMTASTS20 RSCAN0.TMTASTS0.BIT.TMTASTS20
#define RSCAN0TMTASTS21 RSCAN0.TMTASTS0.BIT.TMTASTS21
#define RSCAN0TMTASTS22 RSCAN0.TMTASTS0.BIT.TMTASTS22
#define RSCAN0TMTASTS23 RSCAN0.TMTASTS0.BIT.TMTASTS23
#define RSCAN0TMTASTS24 RSCAN0.TMTASTS0.BIT.TMTASTS24
#define RSCAN0TMTASTS25 RSCAN0.TMTASTS0.BIT.TMTASTS25
#define RSCAN0TMTASTS26 RSCAN0.TMTASTS0.BIT.TMTASTS26
#define RSCAN0TMTASTS27 RSCAN0.TMTASTS0.BIT.TMTASTS27
#define RSCAN0TMTASTS28 RSCAN0.TMTASTS0.BIT.TMTASTS28
#define RSCAN0TMTASTS29 RSCAN0.TMTASTS0.BIT.TMTASTS29
#define RSCAN0TMTASTS30 RSCAN0.TMTASTS0.BIT.TMTASTS30
#define RSCAN0TMTASTS31 RSCAN0.TMTASTS0.BIT.TMTASTS31
#define RSCAN0TMIEC0 RSCAN0.TMIEC0.UINT32
#define RSCAN0TMIEC0L RSCAN0.TMIEC0.UINT16[L]
#define RSCAN0TMIEC0LL RSCAN0.TMIEC0.UINT8[LL]
#define RSCAN0TMIEC0LH RSCAN0.TMIEC0.UINT8[LH]
#define RSCAN0TMIEC0H RSCAN0.TMIEC0.UINT16[H]
#define RSCAN0TMIEC0HL RSCAN0.TMIEC0.UINT8[HL]
#define RSCAN0TMIEC0HH RSCAN0.TMIEC0.UINT8[HH]
#define RSCAN0TMIE0 RSCAN0.TMIEC0.BIT.TMIE0
#define RSCAN0TMIE1 RSCAN0.TMIEC0.BIT.TMIE1
#define RSCAN0TMIE2 RSCAN0.TMIEC0.BIT.TMIE2
#define RSCAN0TMIE3 RSCAN0.TMIEC0.BIT.TMIE3
#define RSCAN0TMIE4 RSCAN0.TMIEC0.BIT.TMIE4
#define RSCAN0TMIE5 RSCAN0.TMIEC0.BIT.TMIE5
#define RSCAN0TMIE6 RSCAN0.TMIEC0.BIT.TMIE6
#define RSCAN0TMIE7 RSCAN0.TMIEC0.BIT.TMIE7
#define RSCAN0TMIE8 RSCAN0.TMIEC0.BIT.TMIE8
#define RSCAN0TMIE9 RSCAN0.TMIEC0.BIT.TMIE9
#define RSCAN0TMIE10 RSCAN0.TMIEC0.BIT.TMIE10
#define RSCAN0TMIE11 RSCAN0.TMIEC0.BIT.TMIE11
#define RSCAN0TMIE12 RSCAN0.TMIEC0.BIT.TMIE12
#define RSCAN0TMIE13 RSCAN0.TMIEC0.BIT.TMIE13
#define RSCAN0TMIE14 RSCAN0.TMIEC0.BIT.TMIE14
#define RSCAN0TMIE15 RSCAN0.TMIEC0.BIT.TMIE15
#define RSCAN0TMIE16 RSCAN0.TMIEC0.BIT.TMIE16
#define RSCAN0TMIE17 RSCAN0.TMIEC0.BIT.TMIE17
#define RSCAN0TMIE18 RSCAN0.TMIEC0.BIT.TMIE18
#define RSCAN0TMIE19 RSCAN0.TMIEC0.BIT.TMIE19
#define RSCAN0TMIE20 RSCAN0.TMIEC0.BIT.TMIE20
#define RSCAN0TMIE21 RSCAN0.TMIEC0.BIT.TMIE21
#define RSCAN0TMIE22 RSCAN0.TMIEC0.BIT.TMIE22
#define RSCAN0TMIE23 RSCAN0.TMIEC0.BIT.TMIE23
#define RSCAN0TMIE24 RSCAN0.TMIEC0.BIT.TMIE24
#define RSCAN0TMIE25 RSCAN0.TMIEC0.BIT.TMIE25
#define RSCAN0TMIE26 RSCAN0.TMIEC0.BIT.TMIE26
#define RSCAN0TMIE27 RSCAN0.TMIEC0.BIT.TMIE27
#define RSCAN0TMIE28 RSCAN0.TMIEC0.BIT.TMIE28
#define RSCAN0TMIE29 RSCAN0.TMIEC0.BIT.TMIE29
#define RSCAN0TMIE30 RSCAN0.TMIEC0.BIT.TMIE30
#define RSCAN0TMIE31 RSCAN0.TMIEC0.BIT.TMIE31
#define RSCAN0TXQCC0 RSCAN0.TXQCC0.UINT32
#define RSCAN0TXQCC0L RSCAN0.TXQCC0.UINT16[L]
#define RSCAN0TXQCC0LL RSCAN0.TXQCC0.UINT8[LL]
#define RSCAN0TXQCC0LH RSCAN0.TXQCC0.UINT8[LH]
#define RSCAN0TXQCC0H RSCAN0.TXQCC0.UINT16[H]
#define RSCAN0TXQCC0HL RSCAN0.TXQCC0.UINT8[HL]
#define RSCAN0TXQCC0HH RSCAN0.TXQCC0.UINT8[HH]
#define RSCAN0TXQE RSCAN0.TXQCC0.BIT.TXQE
#define RSCAN0TXQDC RSCAN0.TXQCC0.BIT.TXQDC
#define RSCAN0TXQIE RSCAN0.TXQCC0.BIT.TXQIE
#define RSCAN0TXQIM RSCAN0.TXQCC0.BIT.TXQIM
#define RSCAN0TXQCC1 RSCAN0.TXQCC1.UINT32
#define RSCAN0TXQCC1L RSCAN0.TXQCC1.UINT16[L]
#define RSCAN0TXQCC1LL RSCAN0.TXQCC1.UINT8[LL]
#define RSCAN0TXQCC1LH RSCAN0.TXQCC1.UINT8[LH]
#define RSCAN0TXQCC1H RSCAN0.TXQCC1.UINT16[H]
#define RSCAN0TXQCC1HL RSCAN0.TXQCC1.UINT8[HL]
#define RSCAN0TXQCC1HH RSCAN0.TXQCC1.UINT8[HH]
#define RSCAN0TXQSTS0 RSCAN0.TXQSTS0.UINT32
#define RSCAN0TXQSTS0L RSCAN0.TXQSTS0.UINT16[L]
#define RSCAN0TXQSTS0LL RSCAN0.TXQSTS0.UINT8[LL]
#define RSCAN0TXQSTS0LH RSCAN0.TXQSTS0.UINT8[LH]
#define RSCAN0TXQSTS0H RSCAN0.TXQSTS0.UINT16[H]
#define RSCAN0TXQSTS0HL RSCAN0.TXQSTS0.UINT8[HL]
#define RSCAN0TXQSTS0HH RSCAN0.TXQSTS0.UINT8[HH]
#define RSCAN0TXQEMP RSCAN0.TXQSTS0.BIT.TXQEMP
#define RSCAN0TXQFLL RSCAN0.TXQSTS0.BIT.TXQFLL
#define RSCAN0TXQIF RSCAN0.TXQSTS0.BIT.TXQIF
#define RSCAN0TXQSTS1 RSCAN0.TXQSTS1.UINT32
#define RSCAN0TXQSTS1L RSCAN0.TXQSTS1.UINT16[L]
#define RSCAN0TXQSTS1LL RSCAN0.TXQSTS1.UINT8[LL]
#define RSCAN0TXQSTS1LH RSCAN0.TXQSTS1.UINT8[LH]
#define RSCAN0TXQSTS1H RSCAN0.TXQSTS1.UINT16[H]
#define RSCAN0TXQSTS1HL RSCAN0.TXQSTS1.UINT8[HL]
#define RSCAN0TXQSTS1HH RSCAN0.TXQSTS1.UINT8[HH]
#define RSCAN0TXQPCTR0 RSCAN0.TXQPCTR0.UINT32
#define RSCAN0TXQPCTR0L RSCAN0.TXQPCTR0.UINT16[L]
#define RSCAN0TXQPCTR0LL RSCAN0.TXQPCTR0.UINT8[LL]
#define RSCAN0TXQPCTR0LH RSCAN0.TXQPCTR0.UINT8[LH]
#define RSCAN0TXQPCTR0H RSCAN0.TXQPCTR0.UINT16[H]
#define RSCAN0TXQPCTR0HL RSCAN0.TXQPCTR0.UINT8[HL]
#define RSCAN0TXQPCTR0HH RSCAN0.TXQPCTR0.UINT8[HH]
#define RSCAN0TXQPC RSCAN0.TXQPCTR0.BIT.TXQPC
#define RSCAN0TXQPCTR1 RSCAN0.TXQPCTR1.UINT32
#define RSCAN0TXQPCTR1L RSCAN0.TXQPCTR1.UINT16[L]
#define RSCAN0TXQPCTR1LL RSCAN0.TXQPCTR1.UINT8[LL]
#define RSCAN0TXQPCTR1LH RSCAN0.TXQPCTR1.UINT8[LH]
#define RSCAN0TXQPCTR1H RSCAN0.TXQPCTR1.UINT16[H]
#define RSCAN0TXQPCTR1HL RSCAN0.TXQPCTR1.UINT8[HL]
#define RSCAN0TXQPCTR1HH RSCAN0.TXQPCTR1.UINT8[HH]
#define RSCAN0THLCC0 RSCAN0.THLCC0.UINT32
#define RSCAN0THLCC0L RSCAN0.THLCC0.UINT16[L]
#define RSCAN0THLCC0LL RSCAN0.THLCC0.UINT8[LL]
#define RSCAN0THLCC0LH RSCAN0.THLCC0.UINT8[LH]
#define RSCAN0THLCC0H RSCAN0.THLCC0.UINT16[H]
#define RSCAN0THLCC0HL RSCAN0.THLCC0.UINT8[HL]
#define RSCAN0THLCC0HH RSCAN0.THLCC0.UINT8[HH]
#define RSCAN0THLE RSCAN0.THLCC0.BIT.THLE
#define RSCAN0THLIE RSCAN0.THLCC0.BIT.THLIE
#define RSCAN0THLIM RSCAN0.THLCC0.BIT.THLIM
#define RSCAN0THLDTE RSCAN0.THLCC0.BIT.THLDTE
#define RSCAN0THLCC1 RSCAN0.THLCC1.UINT32
#define RSCAN0THLCC1L RSCAN0.THLCC1.UINT16[L]
#define RSCAN0THLCC1LL RSCAN0.THLCC1.UINT8[LL]
#define RSCAN0THLCC1LH RSCAN0.THLCC1.UINT8[LH]
#define RSCAN0THLCC1H RSCAN0.THLCC1.UINT16[H]
#define RSCAN0THLCC1HL RSCAN0.THLCC1.UINT8[HL]
#define RSCAN0THLCC1HH RSCAN0.THLCC1.UINT8[HH]
#define RSCAN0THLSTS0 RSCAN0.THLSTS0.UINT32
#define RSCAN0THLSTS0L RSCAN0.THLSTS0.UINT16[L]
#define RSCAN0THLSTS0LL RSCAN0.THLSTS0.UINT8[LL]
#define RSCAN0THLSTS0LH RSCAN0.THLSTS0.UINT8[LH]
#define RSCAN0THLSTS0H RSCAN0.THLSTS0.UINT16[H]
#define RSCAN0THLSTS0HL RSCAN0.THLSTS0.UINT8[HL]
#define RSCAN0THLSTS0HH RSCAN0.THLSTS0.UINT8[HH]
#define RSCAN0THLEMP RSCAN0.THLSTS0.BIT.THLEMP
#define RSCAN0THLFLL RSCAN0.THLSTS0.BIT.THLFLL
#define RSCAN0THLELT RSCAN0.THLSTS0.BIT.THLELT
#define RSCAN0THLIF RSCAN0.THLSTS0.BIT.THLIF
#define RSCAN0THLMC RSCAN0.THLSTS0.BIT.THLMC
#define RSCAN0THLSTS1 RSCAN0.THLSTS1.UINT32
#define RSCAN0THLSTS1L RSCAN0.THLSTS1.UINT16[L]
#define RSCAN0THLSTS1LL RSCAN0.THLSTS1.UINT8[LL]
#define RSCAN0THLSTS1LH RSCAN0.THLSTS1.UINT8[LH]
#define RSCAN0THLSTS1H RSCAN0.THLSTS1.UINT16[H]
#define RSCAN0THLSTS1HL RSCAN0.THLSTS1.UINT8[HL]
#define RSCAN0THLSTS1HH RSCAN0.THLSTS1.UINT8[HH]
#define RSCAN0THLPCTR0 RSCAN0.THLPCTR0.UINT32
#define RSCAN0THLPCTR0L RSCAN0.THLPCTR0.UINT16[L]
#define RSCAN0THLPCTR0LL RSCAN0.THLPCTR0.UINT8[LL]
#define RSCAN0THLPCTR0LH RSCAN0.THLPCTR0.UINT8[LH]
#define RSCAN0THLPCTR0H RSCAN0.THLPCTR0.UINT16[H]
#define RSCAN0THLPCTR0HL RSCAN0.THLPCTR0.UINT8[HL]
#define RSCAN0THLPCTR0HH RSCAN0.THLPCTR0.UINT8[HH]
#define RSCAN0THLPC RSCAN0.THLPCTR0.BIT.THLPC
#define RSCAN0THLPCTR1 RSCAN0.THLPCTR1.UINT32
#define RSCAN0THLPCTR1L RSCAN0.THLPCTR1.UINT16[L]
#define RSCAN0THLPCTR1LL RSCAN0.THLPCTR1.UINT8[LL]
#define RSCAN0THLPCTR1LH RSCAN0.THLPCTR1.UINT8[LH]
#define RSCAN0THLPCTR1H RSCAN0.THLPCTR1.UINT16[H]
#define RSCAN0THLPCTR1HL RSCAN0.THLPCTR1.UINT8[HL]
#define RSCAN0THLPCTR1HH RSCAN0.THLPCTR1.UINT8[HH]
#define RSCAN0GTINTSTS0 RSCAN0.GTINTSTS0.UINT32
#define RSCAN0GTINTSTS0L RSCAN0.GTINTSTS0.UINT16[L]
#define RSCAN0GTINTSTS0LL RSCAN0.GTINTSTS0.UINT8[LL]
#define RSCAN0GTINTSTS0LH RSCAN0.GTINTSTS0.UINT8[LH]
#define RSCAN0GTINTSTS0H RSCAN0.GTINTSTS0.UINT16[H]
#define RSCAN0GTINTSTS0HL RSCAN0.GTINTSTS0.UINT8[HL]
#define RSCAN0GTINTSTS0HH RSCAN0.GTINTSTS0.UINT8[HH]
#define RSCAN0TSIF0 RSCAN0.GTINTSTS0.BIT.TSIF0
#define RSCAN0TAIF0 RSCAN0.GTINTSTS0.BIT.TAIF0
#define RSCAN0TQIF0 RSCAN0.GTINTSTS0.BIT.TQIF0
#define RSCAN0CFTIF0 RSCAN0.GTINTSTS0.BIT.CFTIF0
#define RSCAN0THIF0 RSCAN0.GTINTSTS0.BIT.THIF0
#define RSCAN0TSIF1 RSCAN0.GTINTSTS0.BIT.TSIF1
#define RSCAN0TAIF1 RSCAN0.GTINTSTS0.BIT.TAIF1
#define RSCAN0TQIF1 RSCAN0.GTINTSTS0.BIT.TQIF1
#define RSCAN0CFTIF1 RSCAN0.GTINTSTS0.BIT.CFTIF1
#define RSCAN0THIF1 RSCAN0.GTINTSTS0.BIT.THIF1
#define RSCAN0GTSTCFG RSCAN0.GTSTCFG.UINT32
#define RSCAN0GTSTCFGL RSCAN0.GTSTCFG.UINT16[L]
#define RSCAN0GTSTCFGLL RSCAN0.GTSTCFG.UINT8[LL]
#define RSCAN0GTSTCFGLH RSCAN0.GTSTCFG.UINT8[LH]
#define RSCAN0GTSTCFGH RSCAN0.GTSTCFG.UINT16[H]
#define RSCAN0GTSTCFGHL RSCAN0.GTSTCFG.UINT8[HL]
#define RSCAN0GTSTCFGHH RSCAN0.GTSTCFG.UINT8[HH]
#define RSCAN0C0ICBCE RSCAN0.GTSTCFG.BIT.C0ICBCE
#define RSCAN0C1ICBCE RSCAN0.GTSTCFG.BIT.C1ICBCE
#define RSCAN0RTMPS RSCAN0.GTSTCFG.BIT.RTMPS
#define RSCAN0GTSTCTR RSCAN0.GTSTCTR.UINT32
#define RSCAN0GTSTCTRL RSCAN0.GTSTCTR.UINT16[L]
#define RSCAN0GTSTCTRLL RSCAN0.GTSTCTR.UINT8[LL]
#define RSCAN0GTSTCTRLH RSCAN0.GTSTCTR.UINT8[LH]
#define RSCAN0GTSTCTRH RSCAN0.GTSTCTR.UINT16[H]
#define RSCAN0GTSTCTRHL RSCAN0.GTSTCTR.UINT8[HL]
#define RSCAN0GTSTCTRHH RSCAN0.GTSTCTR.UINT8[HH]
#define RSCAN0ICBCTME RSCAN0.GTSTCTR.BIT.ICBCTME
#define RSCAN0RTME RSCAN0.GTSTCTR.BIT.RTME
#define RSCAN0GLOCKK RSCAN0.GLOCKK.UINT32
#define RSCAN0GLOCKKL RSCAN0.GLOCKK.UINT16[L]
#define RSCAN0GLOCKKH RSCAN0.GLOCKK.UINT16[H]
#define RSCAN0LOCK RSCAN0.GLOCKK.BIT.LOCK
#define RSCAN0GAFLID0 RSCAN0.GAFLID0.UINT32
#define RSCAN0GAFLID0L RSCAN0.GAFLID0.UINT16[L]
#define RSCAN0GAFLID0LL RSCAN0.GAFLID0.UINT8[LL]
#define RSCAN0GAFLID0LH RSCAN0.GAFLID0.UINT8[LH]
#define RSCAN0GAFLID0H RSCAN0.GAFLID0.UINT16[H]
#define RSCAN0GAFLID0HL RSCAN0.GAFLID0.UINT8[HL]
#define RSCAN0GAFLID0HH RSCAN0.GAFLID0.UINT8[HH]
#define RSCAN0GAFLID RSCAN0.GAFLID0.BIT.GAFLID
#define RSCAN0GAFLLB RSCAN0.GAFLID0.BIT.GAFLLB
#define RSCAN0GAFLRTR RSCAN0.GAFLID0.BIT.GAFLRTR
#define RSCAN0GAFLIDE RSCAN0.GAFLID0.BIT.GAFLIDE
#define RSCAN0GAFLM0 RSCAN0.GAFLM0.UINT32
#define RSCAN0GAFLM0L RSCAN0.GAFLM0.UINT16[L]
#define RSCAN0GAFLM0LL RSCAN0.GAFLM0.UINT8[LL]
#define RSCAN0GAFLM0LH RSCAN0.GAFLM0.UINT8[LH]
#define RSCAN0GAFLM0H RSCAN0.GAFLM0.UINT16[H]
#define RSCAN0GAFLM0HL RSCAN0.GAFLM0.UINT8[HL]
#define RSCAN0GAFLM0HH RSCAN0.GAFLM0.UINT8[HH]
#define RSCAN0GAFLIDM RSCAN0.GAFLM0.BIT.GAFLIDM
#define RSCAN0GAFLRTRM RSCAN0.GAFLM0.BIT.GAFLRTRM
#define RSCAN0GAFLIDEM RSCAN0.GAFLM0.BIT.GAFLIDEM
#define RSCAN0GAFLP00 RSCAN0.GAFLP00.UINT32
#define RSCAN0GAFLP00L RSCAN0.GAFLP00.UINT16[L]
#define RSCAN0GAFLP00LL RSCAN0.GAFLP00.UINT8[LL]
#define RSCAN0GAFLP00LH RSCAN0.GAFLP00.UINT8[LH]
#define RSCAN0GAFLP00H RSCAN0.GAFLP00.UINT16[H]
#define RSCAN0GAFLP00HL RSCAN0.GAFLP00.UINT8[HL]
#define RSCAN0GAFLP00HH RSCAN0.GAFLP00.UINT8[HH]
#define RSCAN0GAFLRMDP RSCAN0.GAFLP00.BIT.GAFLRMDP
#define RSCAN0GAFLRMV RSCAN0.GAFLP00.BIT.GAFLRMV
#define RSCAN0GAFLPTR RSCAN0.GAFLP00.BIT.GAFLPTR
#define RSCAN0GAFLDLC RSCAN0.GAFLP00.BIT.GAFLDLC
#define RSCAN0GAFLP10 RSCAN0.GAFLP10.UINT32
#define RSCAN0GAFLP10L RSCAN0.GAFLP10.UINT16[L]
#define RSCAN0GAFLP10LL RSCAN0.GAFLP10.UINT8[LL]
#define RSCAN0GAFLP10LH RSCAN0.GAFLP10.UINT8[LH]
#define RSCAN0GAFLP10H RSCAN0.GAFLP10.UINT16[H]
#define RSCAN0GAFLP10HL RSCAN0.GAFLP10.UINT8[HL]
#define RSCAN0GAFLP10HH RSCAN0.GAFLP10.UINT8[HH]
#define RSCAN0GAFLFDP RSCAN0.GAFLP10.BIT.GAFLFDP
#define RSCAN0GAFLID1 RSCAN0.GAFLID1.UINT32
#define RSCAN0GAFLID1L RSCAN0.GAFLID1.UINT16[L]
#define RSCAN0GAFLID1LL RSCAN0.GAFLID1.UINT8[LL]
#define RSCAN0GAFLID1LH RSCAN0.GAFLID1.UINT8[LH]
#define RSCAN0GAFLID1H RSCAN0.GAFLID1.UINT16[H]
#define RSCAN0GAFLID1HL RSCAN0.GAFLID1.UINT8[HL]
#define RSCAN0GAFLID1HH RSCAN0.GAFLID1.UINT8[HH]
#define RSCAN0GAFLM1 RSCAN0.GAFLM1.UINT32
#define RSCAN0GAFLM1L RSCAN0.GAFLM1.UINT16[L]
#define RSCAN0GAFLM1LL RSCAN0.GAFLM1.UINT8[LL]
#define RSCAN0GAFLM1LH RSCAN0.GAFLM1.UINT8[LH]
#define RSCAN0GAFLM1H RSCAN0.GAFLM1.UINT16[H]
#define RSCAN0GAFLM1HL RSCAN0.GAFLM1.UINT8[HL]
#define RSCAN0GAFLM1HH RSCAN0.GAFLM1.UINT8[HH]
#define RSCAN0GAFLP01 RSCAN0.GAFLP01.UINT32
#define RSCAN0GAFLP01L RSCAN0.GAFLP01.UINT16[L]
#define RSCAN0GAFLP01LL RSCAN0.GAFLP01.UINT8[LL]
#define RSCAN0GAFLP01LH RSCAN0.GAFLP01.UINT8[LH]
#define RSCAN0GAFLP01H RSCAN0.GAFLP01.UINT16[H]
#define RSCAN0GAFLP01HL RSCAN0.GAFLP01.UINT8[HL]
#define RSCAN0GAFLP01HH RSCAN0.GAFLP01.UINT8[HH]
#define RSCAN0GAFLP11 RSCAN0.GAFLP11.UINT32
#define RSCAN0GAFLP11L RSCAN0.GAFLP11.UINT16[L]
#define RSCAN0GAFLP11LL RSCAN0.GAFLP11.UINT8[LL]
#define RSCAN0GAFLP11LH RSCAN0.GAFLP11.UINT8[LH]
#define RSCAN0GAFLP11H RSCAN0.GAFLP11.UINT16[H]
#define RSCAN0GAFLP11HL RSCAN0.GAFLP11.UINT8[HL]
#define RSCAN0GAFLP11HH RSCAN0.GAFLP11.UINT8[HH]
#define RSCAN0GAFLID2 RSCAN0.GAFLID2.UINT32
#define RSCAN0GAFLID2L RSCAN0.GAFLID2.UINT16[L]
#define RSCAN0GAFLID2LL RSCAN0.GAFLID2.UINT8[LL]
#define RSCAN0GAFLID2LH RSCAN0.GAFLID2.UINT8[LH]
#define RSCAN0GAFLID2H RSCAN0.GAFLID2.UINT16[H]
#define RSCAN0GAFLID2HL RSCAN0.GAFLID2.UINT8[HL]
#define RSCAN0GAFLID2HH RSCAN0.GAFLID2.UINT8[HH]
#define RSCAN0GAFLM2 RSCAN0.GAFLM2.UINT32
#define RSCAN0GAFLM2L RSCAN0.GAFLM2.UINT16[L]
#define RSCAN0GAFLM2LL RSCAN0.GAFLM2.UINT8[LL]
#define RSCAN0GAFLM2LH RSCAN0.GAFLM2.UINT8[LH]
#define RSCAN0GAFLM2H RSCAN0.GAFLM2.UINT16[H]
#define RSCAN0GAFLM2HL RSCAN0.GAFLM2.UINT8[HL]
#define RSCAN0GAFLM2HH RSCAN0.GAFLM2.UINT8[HH]
#define RSCAN0GAFLP02 RSCAN0.GAFLP02.UINT32
#define RSCAN0GAFLP02L RSCAN0.GAFLP02.UINT16[L]
#define RSCAN0GAFLP02LL RSCAN0.GAFLP02.UINT8[LL]
#define RSCAN0GAFLP02LH RSCAN0.GAFLP02.UINT8[LH]
#define RSCAN0GAFLP02H RSCAN0.GAFLP02.UINT16[H]
#define RSCAN0GAFLP02HL RSCAN0.GAFLP02.UINT8[HL]
#define RSCAN0GAFLP02HH RSCAN0.GAFLP02.UINT8[HH]
#define RSCAN0GAFLP12 RSCAN0.GAFLP12.UINT32
#define RSCAN0GAFLP12L RSCAN0.GAFLP12.UINT16[L]
#define RSCAN0GAFLP12LL RSCAN0.GAFLP12.UINT8[LL]
#define RSCAN0GAFLP12LH RSCAN0.GAFLP12.UINT8[LH]
#define RSCAN0GAFLP12H RSCAN0.GAFLP12.UINT16[H]
#define RSCAN0GAFLP12HL RSCAN0.GAFLP12.UINT8[HL]
#define RSCAN0GAFLP12HH RSCAN0.GAFLP12.UINT8[HH]
#define RSCAN0GAFLID3 RSCAN0.GAFLID3.UINT32
#define RSCAN0GAFLID3L RSCAN0.GAFLID3.UINT16[L]
#define RSCAN0GAFLID3LL RSCAN0.GAFLID3.UINT8[LL]
#define RSCAN0GAFLID3LH RSCAN0.GAFLID3.UINT8[LH]
#define RSCAN0GAFLID3H RSCAN0.GAFLID3.UINT16[H]
#define RSCAN0GAFLID3HL RSCAN0.GAFLID3.UINT8[HL]
#define RSCAN0GAFLID3HH RSCAN0.GAFLID3.UINT8[HH]
#define RSCAN0GAFLM3 RSCAN0.GAFLM3.UINT32
#define RSCAN0GAFLM3L RSCAN0.GAFLM3.UINT16[L]
#define RSCAN0GAFLM3LL RSCAN0.GAFLM3.UINT8[LL]
#define RSCAN0GAFLM3LH RSCAN0.GAFLM3.UINT8[LH]
#define RSCAN0GAFLM3H RSCAN0.GAFLM3.UINT16[H]
#define RSCAN0GAFLM3HL RSCAN0.GAFLM3.UINT8[HL]
#define RSCAN0GAFLM3HH RSCAN0.GAFLM3.UINT8[HH]
#define RSCAN0GAFLP03 RSCAN0.GAFLP03.UINT32
#define RSCAN0GAFLP03L RSCAN0.GAFLP03.UINT16[L]
#define RSCAN0GAFLP03LL RSCAN0.GAFLP03.UINT8[LL]
#define RSCAN0GAFLP03LH RSCAN0.GAFLP03.UINT8[LH]
#define RSCAN0GAFLP03H RSCAN0.GAFLP03.UINT16[H]
#define RSCAN0GAFLP03HL RSCAN0.GAFLP03.UINT8[HL]
#define RSCAN0GAFLP03HH RSCAN0.GAFLP03.UINT8[HH]
#define RSCAN0GAFLP13 RSCAN0.GAFLP13.UINT32
#define RSCAN0GAFLP13L RSCAN0.GAFLP13.UINT16[L]
#define RSCAN0GAFLP13LL RSCAN0.GAFLP13.UINT8[LL]
#define RSCAN0GAFLP13LH RSCAN0.GAFLP13.UINT8[LH]
#define RSCAN0GAFLP13H RSCAN0.GAFLP13.UINT16[H]
#define RSCAN0GAFLP13HL RSCAN0.GAFLP13.UINT8[HL]
#define RSCAN0GAFLP13HH RSCAN0.GAFLP13.UINT8[HH]
#define RSCAN0GAFLID4 RSCAN0.GAFLID4.UINT32
#define RSCAN0GAFLID4L RSCAN0.GAFLID4.UINT16[L]
#define RSCAN0GAFLID4LL RSCAN0.GAFLID4.UINT8[LL]
#define RSCAN0GAFLID4LH RSCAN0.GAFLID4.UINT8[LH]
#define RSCAN0GAFLID4H RSCAN0.GAFLID4.UINT16[H]
#define RSCAN0GAFLID4HL RSCAN0.GAFLID4.UINT8[HL]
#define RSCAN0GAFLID4HH RSCAN0.GAFLID4.UINT8[HH]
#define RSCAN0GAFLM4 RSCAN0.GAFLM4.UINT32
#define RSCAN0GAFLM4L RSCAN0.GAFLM4.UINT16[L]
#define RSCAN0GAFLM4LL RSCAN0.GAFLM4.UINT8[LL]
#define RSCAN0GAFLM4LH RSCAN0.GAFLM4.UINT8[LH]
#define RSCAN0GAFLM4H RSCAN0.GAFLM4.UINT16[H]
#define RSCAN0GAFLM4HL RSCAN0.GAFLM4.UINT8[HL]
#define RSCAN0GAFLM4HH RSCAN0.GAFLM4.UINT8[HH]
#define RSCAN0GAFLP04 RSCAN0.GAFLP04.UINT32
#define RSCAN0GAFLP04L RSCAN0.GAFLP04.UINT16[L]
#define RSCAN0GAFLP04LL RSCAN0.GAFLP04.UINT8[LL]
#define RSCAN0GAFLP04LH RSCAN0.GAFLP04.UINT8[LH]
#define RSCAN0GAFLP04H RSCAN0.GAFLP04.UINT16[H]
#define RSCAN0GAFLP04HL RSCAN0.GAFLP04.UINT8[HL]
#define RSCAN0GAFLP04HH RSCAN0.GAFLP04.UINT8[HH]
#define RSCAN0GAFLP14 RSCAN0.GAFLP14.UINT32
#define RSCAN0GAFLP14L RSCAN0.GAFLP14.UINT16[L]
#define RSCAN0GAFLP14LL RSCAN0.GAFLP14.UINT8[LL]
#define RSCAN0GAFLP14LH RSCAN0.GAFLP14.UINT8[LH]
#define RSCAN0GAFLP14H RSCAN0.GAFLP14.UINT16[H]
#define RSCAN0GAFLP14HL RSCAN0.GAFLP14.UINT8[HL]
#define RSCAN0GAFLP14HH RSCAN0.GAFLP14.UINT8[HH]
#define RSCAN0GAFLID5 RSCAN0.GAFLID5.UINT32
#define RSCAN0GAFLID5L RSCAN0.GAFLID5.UINT16[L]
#define RSCAN0GAFLID5LL RSCAN0.GAFLID5.UINT8[LL]
#define RSCAN0GAFLID5LH RSCAN0.GAFLID5.UINT8[LH]
#define RSCAN0GAFLID5H RSCAN0.GAFLID5.UINT16[H]
#define RSCAN0GAFLID5HL RSCAN0.GAFLID5.UINT8[HL]
#define RSCAN0GAFLID5HH RSCAN0.GAFLID5.UINT8[HH]
#define RSCAN0GAFLM5 RSCAN0.GAFLM5.UINT32
#define RSCAN0GAFLM5L RSCAN0.GAFLM5.UINT16[L]
#define RSCAN0GAFLM5LL RSCAN0.GAFLM5.UINT8[LL]
#define RSCAN0GAFLM5LH RSCAN0.GAFLM5.UINT8[LH]
#define RSCAN0GAFLM5H RSCAN0.GAFLM5.UINT16[H]
#define RSCAN0GAFLM5HL RSCAN0.GAFLM5.UINT8[HL]
#define RSCAN0GAFLM5HH RSCAN0.GAFLM5.UINT8[HH]
#define RSCAN0GAFLP05 RSCAN0.GAFLP05.UINT32
#define RSCAN0GAFLP05L RSCAN0.GAFLP05.UINT16[L]
#define RSCAN0GAFLP05LL RSCAN0.GAFLP05.UINT8[LL]
#define RSCAN0GAFLP05LH RSCAN0.GAFLP05.UINT8[LH]
#define RSCAN0GAFLP05H RSCAN0.GAFLP05.UINT16[H]
#define RSCAN0GAFLP05HL RSCAN0.GAFLP05.UINT8[HL]
#define RSCAN0GAFLP05HH RSCAN0.GAFLP05.UINT8[HH]
#define RSCAN0GAFLP15 RSCAN0.GAFLP15.UINT32
#define RSCAN0GAFLP15L RSCAN0.GAFLP15.UINT16[L]
#define RSCAN0GAFLP15LL RSCAN0.GAFLP15.UINT8[LL]
#define RSCAN0GAFLP15LH RSCAN0.GAFLP15.UINT8[LH]
#define RSCAN0GAFLP15H RSCAN0.GAFLP15.UINT16[H]
#define RSCAN0GAFLP15HL RSCAN0.GAFLP15.UINT8[HL]
#define RSCAN0GAFLP15HH RSCAN0.GAFLP15.UINT8[HH]
#define RSCAN0GAFLID6 RSCAN0.GAFLID6.UINT32
#define RSCAN0GAFLID6L RSCAN0.GAFLID6.UINT16[L]
#define RSCAN0GAFLID6LL RSCAN0.GAFLID6.UINT8[LL]
#define RSCAN0GAFLID6LH RSCAN0.GAFLID6.UINT8[LH]
#define RSCAN0GAFLID6H RSCAN0.GAFLID6.UINT16[H]
#define RSCAN0GAFLID6HL RSCAN0.GAFLID6.UINT8[HL]
#define RSCAN0GAFLID6HH RSCAN0.GAFLID6.UINT8[HH]
#define RSCAN0GAFLM6 RSCAN0.GAFLM6.UINT32
#define RSCAN0GAFLM6L RSCAN0.GAFLM6.UINT16[L]
#define RSCAN0GAFLM6LL RSCAN0.GAFLM6.UINT8[LL]
#define RSCAN0GAFLM6LH RSCAN0.GAFLM6.UINT8[LH]
#define RSCAN0GAFLM6H RSCAN0.GAFLM6.UINT16[H]
#define RSCAN0GAFLM6HL RSCAN0.GAFLM6.UINT8[HL]
#define RSCAN0GAFLM6HH RSCAN0.GAFLM6.UINT8[HH]
#define RSCAN0GAFLP06 RSCAN0.GAFLP06.UINT32
#define RSCAN0GAFLP06L RSCAN0.GAFLP06.UINT16[L]
#define RSCAN0GAFLP06LL RSCAN0.GAFLP06.UINT8[LL]
#define RSCAN0GAFLP06LH RSCAN0.GAFLP06.UINT8[LH]
#define RSCAN0GAFLP06H RSCAN0.GAFLP06.UINT16[H]
#define RSCAN0GAFLP06HL RSCAN0.GAFLP06.UINT8[HL]
#define RSCAN0GAFLP06HH RSCAN0.GAFLP06.UINT8[HH]
#define RSCAN0GAFLP16 RSCAN0.GAFLP16.UINT32
#define RSCAN0GAFLP16L RSCAN0.GAFLP16.UINT16[L]
#define RSCAN0GAFLP16LL RSCAN0.GAFLP16.UINT8[LL]
#define RSCAN0GAFLP16LH RSCAN0.GAFLP16.UINT8[LH]
#define RSCAN0GAFLP16H RSCAN0.GAFLP16.UINT16[H]
#define RSCAN0GAFLP16HL RSCAN0.GAFLP16.UINT8[HL]
#define RSCAN0GAFLP16HH RSCAN0.GAFLP16.UINT8[HH]
#define RSCAN0GAFLID7 RSCAN0.GAFLID7.UINT32
#define RSCAN0GAFLID7L RSCAN0.GAFLID7.UINT16[L]
#define RSCAN0GAFLID7LL RSCAN0.GAFLID7.UINT8[LL]
#define RSCAN0GAFLID7LH RSCAN0.GAFLID7.UINT8[LH]
#define RSCAN0GAFLID7H RSCAN0.GAFLID7.UINT16[H]
#define RSCAN0GAFLID7HL RSCAN0.GAFLID7.UINT8[HL]
#define RSCAN0GAFLID7HH RSCAN0.GAFLID7.UINT8[HH]
#define RSCAN0GAFLM7 RSCAN0.GAFLM7.UINT32
#define RSCAN0GAFLM7L RSCAN0.GAFLM7.UINT16[L]
#define RSCAN0GAFLM7LL RSCAN0.GAFLM7.UINT8[LL]
#define RSCAN0GAFLM7LH RSCAN0.GAFLM7.UINT8[LH]
#define RSCAN0GAFLM7H RSCAN0.GAFLM7.UINT16[H]
#define RSCAN0GAFLM7HL RSCAN0.GAFLM7.UINT8[HL]
#define RSCAN0GAFLM7HH RSCAN0.GAFLM7.UINT8[HH]
#define RSCAN0GAFLP07 RSCAN0.GAFLP07.UINT32
#define RSCAN0GAFLP07L RSCAN0.GAFLP07.UINT16[L]
#define RSCAN0GAFLP07LL RSCAN0.GAFLP07.UINT8[LL]
#define RSCAN0GAFLP07LH RSCAN0.GAFLP07.UINT8[LH]
#define RSCAN0GAFLP07H RSCAN0.GAFLP07.UINT16[H]
#define RSCAN0GAFLP07HL RSCAN0.GAFLP07.UINT8[HL]
#define RSCAN0GAFLP07HH RSCAN0.GAFLP07.UINT8[HH]
#define RSCAN0GAFLP17 RSCAN0.GAFLP17.UINT32
#define RSCAN0GAFLP17L RSCAN0.GAFLP17.UINT16[L]
#define RSCAN0GAFLP17LL RSCAN0.GAFLP17.UINT8[LL]
#define RSCAN0GAFLP17LH RSCAN0.GAFLP17.UINT8[LH]
#define RSCAN0GAFLP17H RSCAN0.GAFLP17.UINT16[H]
#define RSCAN0GAFLP17HL RSCAN0.GAFLP17.UINT8[HL]
#define RSCAN0GAFLP17HH RSCAN0.GAFLP17.UINT8[HH]
#define RSCAN0GAFLID8 RSCAN0.GAFLID8.UINT32
#define RSCAN0GAFLID8L RSCAN0.GAFLID8.UINT16[L]
#define RSCAN0GAFLID8LL RSCAN0.GAFLID8.UINT8[LL]
#define RSCAN0GAFLID8LH RSCAN0.GAFLID8.UINT8[LH]
#define RSCAN0GAFLID8H RSCAN0.GAFLID8.UINT16[H]
#define RSCAN0GAFLID8HL RSCAN0.GAFLID8.UINT8[HL]
#define RSCAN0GAFLID8HH RSCAN0.GAFLID8.UINT8[HH]
#define RSCAN0GAFLM8 RSCAN0.GAFLM8.UINT32
#define RSCAN0GAFLM8L RSCAN0.GAFLM8.UINT16[L]
#define RSCAN0GAFLM8LL RSCAN0.GAFLM8.UINT8[LL]
#define RSCAN0GAFLM8LH RSCAN0.GAFLM8.UINT8[LH]
#define RSCAN0GAFLM8H RSCAN0.GAFLM8.UINT16[H]
#define RSCAN0GAFLM8HL RSCAN0.GAFLM8.UINT8[HL]
#define RSCAN0GAFLM8HH RSCAN0.GAFLM8.UINT8[HH]
#define RSCAN0GAFLP08 RSCAN0.GAFLP08.UINT32
#define RSCAN0GAFLP08L RSCAN0.GAFLP08.UINT16[L]
#define RSCAN0GAFLP08LL RSCAN0.GAFLP08.UINT8[LL]
#define RSCAN0GAFLP08LH RSCAN0.GAFLP08.UINT8[LH]
#define RSCAN0GAFLP08H RSCAN0.GAFLP08.UINT16[H]
#define RSCAN0GAFLP08HL RSCAN0.GAFLP08.UINT8[HL]
#define RSCAN0GAFLP08HH RSCAN0.GAFLP08.UINT8[HH]
#define RSCAN0GAFLP18 RSCAN0.GAFLP18.UINT32
#define RSCAN0GAFLP18L RSCAN0.GAFLP18.UINT16[L]
#define RSCAN0GAFLP18LL RSCAN0.GAFLP18.UINT8[LL]
#define RSCAN0GAFLP18LH RSCAN0.GAFLP18.UINT8[LH]
#define RSCAN0GAFLP18H RSCAN0.GAFLP18.UINT16[H]
#define RSCAN0GAFLP18HL RSCAN0.GAFLP18.UINT8[HL]
#define RSCAN0GAFLP18HH RSCAN0.GAFLP18.UINT8[HH]
#define RSCAN0GAFLID9 RSCAN0.GAFLID9.UINT32
#define RSCAN0GAFLID9L RSCAN0.GAFLID9.UINT16[L]
#define RSCAN0GAFLID9LL RSCAN0.GAFLID9.UINT8[LL]
#define RSCAN0GAFLID9LH RSCAN0.GAFLID9.UINT8[LH]
#define RSCAN0GAFLID9H RSCAN0.GAFLID9.UINT16[H]
#define RSCAN0GAFLID9HL RSCAN0.GAFLID9.UINT8[HL]
#define RSCAN0GAFLID9HH RSCAN0.GAFLID9.UINT8[HH]
#define RSCAN0GAFLM9 RSCAN0.GAFLM9.UINT32
#define RSCAN0GAFLM9L RSCAN0.GAFLM9.UINT16[L]
#define RSCAN0GAFLM9LL RSCAN0.GAFLM9.UINT8[LL]
#define RSCAN0GAFLM9LH RSCAN0.GAFLM9.UINT8[LH]
#define RSCAN0GAFLM9H RSCAN0.GAFLM9.UINT16[H]
#define RSCAN0GAFLM9HL RSCAN0.GAFLM9.UINT8[HL]
#define RSCAN0GAFLM9HH RSCAN0.GAFLM9.UINT8[HH]
#define RSCAN0GAFLP09 RSCAN0.GAFLP09.UINT32
#define RSCAN0GAFLP09L RSCAN0.GAFLP09.UINT16[L]
#define RSCAN0GAFLP09LL RSCAN0.GAFLP09.UINT8[LL]
#define RSCAN0GAFLP09LH RSCAN0.GAFLP09.UINT8[LH]
#define RSCAN0GAFLP09H RSCAN0.GAFLP09.UINT16[H]
#define RSCAN0GAFLP09HL RSCAN0.GAFLP09.UINT8[HL]
#define RSCAN0GAFLP09HH RSCAN0.GAFLP09.UINT8[HH]
#define RSCAN0GAFLP19 RSCAN0.GAFLP19.UINT32
#define RSCAN0GAFLP19L RSCAN0.GAFLP19.UINT16[L]
#define RSCAN0GAFLP19LL RSCAN0.GAFLP19.UINT8[LL]
#define RSCAN0GAFLP19LH RSCAN0.GAFLP19.UINT8[LH]
#define RSCAN0GAFLP19H RSCAN0.GAFLP19.UINT16[H]
#define RSCAN0GAFLP19HL RSCAN0.GAFLP19.UINT8[HL]
#define RSCAN0GAFLP19HH RSCAN0.GAFLP19.UINT8[HH]
#define RSCAN0GAFLID10 RSCAN0.GAFLID10.UINT32
#define RSCAN0GAFLID10L RSCAN0.GAFLID10.UINT16[L]
#define RSCAN0GAFLID10LL RSCAN0.GAFLID10.UINT8[LL]
#define RSCAN0GAFLID10LH RSCAN0.GAFLID10.UINT8[LH]
#define RSCAN0GAFLID10H RSCAN0.GAFLID10.UINT16[H]
#define RSCAN0GAFLID10HL RSCAN0.GAFLID10.UINT8[HL]
#define RSCAN0GAFLID10HH RSCAN0.GAFLID10.UINT8[HH]
#define RSCAN0GAFLM10 RSCAN0.GAFLM10.UINT32
#define RSCAN0GAFLM10L RSCAN0.GAFLM10.UINT16[L]
#define RSCAN0GAFLM10LL RSCAN0.GAFLM10.UINT8[LL]
#define RSCAN0GAFLM10LH RSCAN0.GAFLM10.UINT8[LH]
#define RSCAN0GAFLM10H RSCAN0.GAFLM10.UINT16[H]
#define RSCAN0GAFLM10HL RSCAN0.GAFLM10.UINT8[HL]
#define RSCAN0GAFLM10HH RSCAN0.GAFLM10.UINT8[HH]
#define RSCAN0GAFLP010 RSCAN0.GAFLP010.UINT32
#define RSCAN0GAFLP010L RSCAN0.GAFLP010.UINT16[L]
#define RSCAN0GAFLP010LL RSCAN0.GAFLP010.UINT8[LL]
#define RSCAN0GAFLP010LH RSCAN0.GAFLP010.UINT8[LH]
#define RSCAN0GAFLP010H RSCAN0.GAFLP010.UINT16[H]
#define RSCAN0GAFLP010HL RSCAN0.GAFLP010.UINT8[HL]
#define RSCAN0GAFLP010HH RSCAN0.GAFLP010.UINT8[HH]
#define RSCAN0GAFLP110 RSCAN0.GAFLP110.UINT32
#define RSCAN0GAFLP110L RSCAN0.GAFLP110.UINT16[L]
#define RSCAN0GAFLP110LL RSCAN0.GAFLP110.UINT8[LL]
#define RSCAN0GAFLP110LH RSCAN0.GAFLP110.UINT8[LH]
#define RSCAN0GAFLP110H RSCAN0.GAFLP110.UINT16[H]
#define RSCAN0GAFLP110HL RSCAN0.GAFLP110.UINT8[HL]
#define RSCAN0GAFLP110HH RSCAN0.GAFLP110.UINT8[HH]
#define RSCAN0GAFLID11 RSCAN0.GAFLID11.UINT32
#define RSCAN0GAFLID11L RSCAN0.GAFLID11.UINT16[L]
#define RSCAN0GAFLID11LL RSCAN0.GAFLID11.UINT8[LL]
#define RSCAN0GAFLID11LH RSCAN0.GAFLID11.UINT8[LH]
#define RSCAN0GAFLID11H RSCAN0.GAFLID11.UINT16[H]
#define RSCAN0GAFLID11HL RSCAN0.GAFLID11.UINT8[HL]
#define RSCAN0GAFLID11HH RSCAN0.GAFLID11.UINT8[HH]
#define RSCAN0GAFLM11 RSCAN0.GAFLM11.UINT32
#define RSCAN0GAFLM11L RSCAN0.GAFLM11.UINT16[L]
#define RSCAN0GAFLM11LL RSCAN0.GAFLM11.UINT8[LL]
#define RSCAN0GAFLM11LH RSCAN0.GAFLM11.UINT8[LH]
#define RSCAN0GAFLM11H RSCAN0.GAFLM11.UINT16[H]
#define RSCAN0GAFLM11HL RSCAN0.GAFLM11.UINT8[HL]
#define RSCAN0GAFLM11HH RSCAN0.GAFLM11.UINT8[HH]
#define RSCAN0GAFLP011 RSCAN0.GAFLP011.UINT32
#define RSCAN0GAFLP011L RSCAN0.GAFLP011.UINT16[L]
#define RSCAN0GAFLP011LL RSCAN0.GAFLP011.UINT8[LL]
#define RSCAN0GAFLP011LH RSCAN0.GAFLP011.UINT8[LH]
#define RSCAN0GAFLP011H RSCAN0.GAFLP011.UINT16[H]
#define RSCAN0GAFLP011HL RSCAN0.GAFLP011.UINT8[HL]
#define RSCAN0GAFLP011HH RSCAN0.GAFLP011.UINT8[HH]
#define RSCAN0GAFLP111 RSCAN0.GAFLP111.UINT32
#define RSCAN0GAFLP111L RSCAN0.GAFLP111.UINT16[L]
#define RSCAN0GAFLP111LL RSCAN0.GAFLP111.UINT8[LL]
#define RSCAN0GAFLP111LH RSCAN0.GAFLP111.UINT8[LH]
#define RSCAN0GAFLP111H RSCAN0.GAFLP111.UINT16[H]
#define RSCAN0GAFLP111HL RSCAN0.GAFLP111.UINT8[HL]
#define RSCAN0GAFLP111HH RSCAN0.GAFLP111.UINT8[HH]
#define RSCAN0GAFLID12 RSCAN0.GAFLID12.UINT32
#define RSCAN0GAFLID12L RSCAN0.GAFLID12.UINT16[L]
#define RSCAN0GAFLID12LL RSCAN0.GAFLID12.UINT8[LL]
#define RSCAN0GAFLID12LH RSCAN0.GAFLID12.UINT8[LH]
#define RSCAN0GAFLID12H RSCAN0.GAFLID12.UINT16[H]
#define RSCAN0GAFLID12HL RSCAN0.GAFLID12.UINT8[HL]
#define RSCAN0GAFLID12HH RSCAN0.GAFLID12.UINT8[HH]
#define RSCAN0GAFLM12 RSCAN0.GAFLM12.UINT32
#define RSCAN0GAFLM12L RSCAN0.GAFLM12.UINT16[L]
#define RSCAN0GAFLM12LL RSCAN0.GAFLM12.UINT8[LL]
#define RSCAN0GAFLM12LH RSCAN0.GAFLM12.UINT8[LH]
#define RSCAN0GAFLM12H RSCAN0.GAFLM12.UINT16[H]
#define RSCAN0GAFLM12HL RSCAN0.GAFLM12.UINT8[HL]
#define RSCAN0GAFLM12HH RSCAN0.GAFLM12.UINT8[HH]
#define RSCAN0GAFLP012 RSCAN0.GAFLP012.UINT32
#define RSCAN0GAFLP012L RSCAN0.GAFLP012.UINT16[L]
#define RSCAN0GAFLP012LL RSCAN0.GAFLP012.UINT8[LL]
#define RSCAN0GAFLP012LH RSCAN0.GAFLP012.UINT8[LH]
#define RSCAN0GAFLP012H RSCAN0.GAFLP012.UINT16[H]
#define RSCAN0GAFLP012HL RSCAN0.GAFLP012.UINT8[HL]
#define RSCAN0GAFLP012HH RSCAN0.GAFLP012.UINT8[HH]
#define RSCAN0GAFLP112 RSCAN0.GAFLP112.UINT32
#define RSCAN0GAFLP112L RSCAN0.GAFLP112.UINT16[L]
#define RSCAN0GAFLP112LL RSCAN0.GAFLP112.UINT8[LL]
#define RSCAN0GAFLP112LH RSCAN0.GAFLP112.UINT8[LH]
#define RSCAN0GAFLP112H RSCAN0.GAFLP112.UINT16[H]
#define RSCAN0GAFLP112HL RSCAN0.GAFLP112.UINT8[HL]
#define RSCAN0GAFLP112HH RSCAN0.GAFLP112.UINT8[HH]
#define RSCAN0GAFLID13 RSCAN0.GAFLID13.UINT32
#define RSCAN0GAFLID13L RSCAN0.GAFLID13.UINT16[L]
#define RSCAN0GAFLID13LL RSCAN0.GAFLID13.UINT8[LL]
#define RSCAN0GAFLID13LH RSCAN0.GAFLID13.UINT8[LH]
#define RSCAN0GAFLID13H RSCAN0.GAFLID13.UINT16[H]
#define RSCAN0GAFLID13HL RSCAN0.GAFLID13.UINT8[HL]
#define RSCAN0GAFLID13HH RSCAN0.GAFLID13.UINT8[HH]
#define RSCAN0GAFLM13 RSCAN0.GAFLM13.UINT32
#define RSCAN0GAFLM13L RSCAN0.GAFLM13.UINT16[L]
#define RSCAN0GAFLM13LL RSCAN0.GAFLM13.UINT8[LL]
#define RSCAN0GAFLM13LH RSCAN0.GAFLM13.UINT8[LH]
#define RSCAN0GAFLM13H RSCAN0.GAFLM13.UINT16[H]
#define RSCAN0GAFLM13HL RSCAN0.GAFLM13.UINT8[HL]
#define RSCAN0GAFLM13HH RSCAN0.GAFLM13.UINT8[HH]
#define RSCAN0GAFLP013 RSCAN0.GAFLP013.UINT32
#define RSCAN0GAFLP013L RSCAN0.GAFLP013.UINT16[L]
#define RSCAN0GAFLP013LL RSCAN0.GAFLP013.UINT8[LL]
#define RSCAN0GAFLP013LH RSCAN0.GAFLP013.UINT8[LH]
#define RSCAN0GAFLP013H RSCAN0.GAFLP013.UINT16[H]
#define RSCAN0GAFLP013HL RSCAN0.GAFLP013.UINT8[HL]
#define RSCAN0GAFLP013HH RSCAN0.GAFLP013.UINT8[HH]
#define RSCAN0GAFLP113 RSCAN0.GAFLP113.UINT32
#define RSCAN0GAFLP113L RSCAN0.GAFLP113.UINT16[L]
#define RSCAN0GAFLP113LL RSCAN0.GAFLP113.UINT8[LL]
#define RSCAN0GAFLP113LH RSCAN0.GAFLP113.UINT8[LH]
#define RSCAN0GAFLP113H RSCAN0.GAFLP113.UINT16[H]
#define RSCAN0GAFLP113HL RSCAN0.GAFLP113.UINT8[HL]
#define RSCAN0GAFLP113HH RSCAN0.GAFLP113.UINT8[HH]
#define RSCAN0GAFLID14 RSCAN0.GAFLID14.UINT32
#define RSCAN0GAFLID14L RSCAN0.GAFLID14.UINT16[L]
#define RSCAN0GAFLID14LL RSCAN0.GAFLID14.UINT8[LL]
#define RSCAN0GAFLID14LH RSCAN0.GAFLID14.UINT8[LH]
#define RSCAN0GAFLID14H RSCAN0.GAFLID14.UINT16[H]
#define RSCAN0GAFLID14HL RSCAN0.GAFLID14.UINT8[HL]
#define RSCAN0GAFLID14HH RSCAN0.GAFLID14.UINT8[HH]
#define RSCAN0GAFLM14 RSCAN0.GAFLM14.UINT32
#define RSCAN0GAFLM14L RSCAN0.GAFLM14.UINT16[L]
#define RSCAN0GAFLM14LL RSCAN0.GAFLM14.UINT8[LL]
#define RSCAN0GAFLM14LH RSCAN0.GAFLM14.UINT8[LH]
#define RSCAN0GAFLM14H RSCAN0.GAFLM14.UINT16[H]
#define RSCAN0GAFLM14HL RSCAN0.GAFLM14.UINT8[HL]
#define RSCAN0GAFLM14HH RSCAN0.GAFLM14.UINT8[HH]
#define RSCAN0GAFLP014 RSCAN0.GAFLP014.UINT32
#define RSCAN0GAFLP014L RSCAN0.GAFLP014.UINT16[L]
#define RSCAN0GAFLP014LL RSCAN0.GAFLP014.UINT8[LL]
#define RSCAN0GAFLP014LH RSCAN0.GAFLP014.UINT8[LH]
#define RSCAN0GAFLP014H RSCAN0.GAFLP014.UINT16[H]
#define RSCAN0GAFLP014HL RSCAN0.GAFLP014.UINT8[HL]
#define RSCAN0GAFLP014HH RSCAN0.GAFLP014.UINT8[HH]
#define RSCAN0GAFLP114 RSCAN0.GAFLP114.UINT32
#define RSCAN0GAFLP114L RSCAN0.GAFLP114.UINT16[L]
#define RSCAN0GAFLP114LL RSCAN0.GAFLP114.UINT8[LL]
#define RSCAN0GAFLP114LH RSCAN0.GAFLP114.UINT8[LH]
#define RSCAN0GAFLP114H RSCAN0.GAFLP114.UINT16[H]
#define RSCAN0GAFLP114HL RSCAN0.GAFLP114.UINT8[HL]
#define RSCAN0GAFLP114HH RSCAN0.GAFLP114.UINT8[HH]
#define RSCAN0GAFLID15 RSCAN0.GAFLID15.UINT32
#define RSCAN0GAFLID15L RSCAN0.GAFLID15.UINT16[L]
#define RSCAN0GAFLID15LL RSCAN0.GAFLID15.UINT8[LL]
#define RSCAN0GAFLID15LH RSCAN0.GAFLID15.UINT8[LH]
#define RSCAN0GAFLID15H RSCAN0.GAFLID15.UINT16[H]
#define RSCAN0GAFLID15HL RSCAN0.GAFLID15.UINT8[HL]
#define RSCAN0GAFLID15HH RSCAN0.GAFLID15.UINT8[HH]
#define RSCAN0GAFLM15 RSCAN0.GAFLM15.UINT32
#define RSCAN0GAFLM15L RSCAN0.GAFLM15.UINT16[L]
#define RSCAN0GAFLM15LL RSCAN0.GAFLM15.UINT8[LL]
#define RSCAN0GAFLM15LH RSCAN0.GAFLM15.UINT8[LH]
#define RSCAN0GAFLM15H RSCAN0.GAFLM15.UINT16[H]
#define RSCAN0GAFLM15HL RSCAN0.GAFLM15.UINT8[HL]
#define RSCAN0GAFLM15HH RSCAN0.GAFLM15.UINT8[HH]
#define RSCAN0GAFLP015 RSCAN0.GAFLP015.UINT32
#define RSCAN0GAFLP015L RSCAN0.GAFLP015.UINT16[L]
#define RSCAN0GAFLP015LL RSCAN0.GAFLP015.UINT8[LL]
#define RSCAN0GAFLP015LH RSCAN0.GAFLP015.UINT8[LH]
#define RSCAN0GAFLP015H RSCAN0.GAFLP015.UINT16[H]
#define RSCAN0GAFLP015HL RSCAN0.GAFLP015.UINT8[HL]
#define RSCAN0GAFLP015HH RSCAN0.GAFLP015.UINT8[HH]
#define RSCAN0GAFLP115 RSCAN0.GAFLP115.UINT32
#define RSCAN0GAFLP115L RSCAN0.GAFLP115.UINT16[L]
#define RSCAN0GAFLP115LL RSCAN0.GAFLP115.UINT8[LL]
#define RSCAN0GAFLP115LH RSCAN0.GAFLP115.UINT8[LH]
#define RSCAN0GAFLP115H RSCAN0.GAFLP115.UINT16[H]
#define RSCAN0GAFLP115HL RSCAN0.GAFLP115.UINT8[HL]
#define RSCAN0GAFLP115HH RSCAN0.GAFLP115.UINT8[HH]
#define RSCAN0RMID0 RSCAN0.RMID0.UINT32
#define RSCAN0RMID0L RSCAN0.RMID0.UINT16[L]
#define RSCAN0RMID0LL RSCAN0.RMID0.UINT8[LL]
#define RSCAN0RMID0LH RSCAN0.RMID0.UINT8[LH]
#define RSCAN0RMID0H RSCAN0.RMID0.UINT16[H]
#define RSCAN0RMID0HL RSCAN0.RMID0.UINT8[HL]
#define RSCAN0RMID0HH RSCAN0.RMID0.UINT8[HH]
#define RSCAN0RMID RSCAN0.RMID0.BIT.RMID
#define RSCAN0RMRTR RSCAN0.RMID0.BIT.RMRTR
#define RSCAN0RMIDE RSCAN0.RMID0.BIT.RMIDE
#define RSCAN0RMPTR0 RSCAN0.RMPTR0.UINT32
#define RSCAN0RMPTR0L RSCAN0.RMPTR0.UINT16[L]
#define RSCAN0RMPTR0LL RSCAN0.RMPTR0.UINT8[LL]
#define RSCAN0RMPTR0LH RSCAN0.RMPTR0.UINT8[LH]
#define RSCAN0RMPTR0H RSCAN0.RMPTR0.UINT16[H]
#define RSCAN0RMPTR0HL RSCAN0.RMPTR0.UINT8[HL]
#define RSCAN0RMPTR0HH RSCAN0.RMPTR0.UINT8[HH]
#define RSCAN0RMTS RSCAN0.RMPTR0.BIT.RMTS
#define RSCAN0RMPTR RSCAN0.RMPTR0.BIT.RMPTR
#define RSCAN0RMDLC RSCAN0.RMPTR0.BIT.RMDLC
#define RSCAN0RMDF00 RSCAN0.RMDF00.UINT32
#define RSCAN0RMDF00L RSCAN0.RMDF00.UINT16[L]
#define RSCAN0RMDF00LL RSCAN0.RMDF00.UINT8[LL]
#define RSCAN0RMDF00LH RSCAN0.RMDF00.UINT8[LH]
#define RSCAN0RMDF00H RSCAN0.RMDF00.UINT16[H]
#define RSCAN0RMDF00HL RSCAN0.RMDF00.UINT8[HL]
#define RSCAN0RMDF00HH RSCAN0.RMDF00.UINT8[HH]
#define RSCAN0RMDB0 RSCAN0.RMDF00.BIT.RMDB0
#define RSCAN0RMDB1 RSCAN0.RMDF00.BIT.RMDB1
#define RSCAN0RMDB2 RSCAN0.RMDF00.BIT.RMDB2
#define RSCAN0RMDB3 RSCAN0.RMDF00.BIT.RMDB3
#define RSCAN0RMDF10 RSCAN0.RMDF10.UINT32
#define RSCAN0RMDF10L RSCAN0.RMDF10.UINT16[L]
#define RSCAN0RMDF10LL RSCAN0.RMDF10.UINT8[LL]
#define RSCAN0RMDF10LH RSCAN0.RMDF10.UINT8[LH]
#define RSCAN0RMDF10H RSCAN0.RMDF10.UINT16[H]
#define RSCAN0RMDF10HL RSCAN0.RMDF10.UINT8[HL]
#define RSCAN0RMDF10HH RSCAN0.RMDF10.UINT8[HH]
#define RSCAN0RMDB4 RSCAN0.RMDF10.BIT.RMDB4
#define RSCAN0RMDB5 RSCAN0.RMDF10.BIT.RMDB5
#define RSCAN0RMDB6 RSCAN0.RMDF10.BIT.RMDB6
#define RSCAN0RMDB7 RSCAN0.RMDF10.BIT.RMDB7
#define RSCAN0RMID1 RSCAN0.RMID1.UINT32
#define RSCAN0RMID1L RSCAN0.RMID1.UINT16[L]
#define RSCAN0RMID1LL RSCAN0.RMID1.UINT8[LL]
#define RSCAN0RMID1LH RSCAN0.RMID1.UINT8[LH]
#define RSCAN0RMID1H RSCAN0.RMID1.UINT16[H]
#define RSCAN0RMID1HL RSCAN0.RMID1.UINT8[HL]
#define RSCAN0RMID1HH RSCAN0.RMID1.UINT8[HH]
#define RSCAN0RMPTR1 RSCAN0.RMPTR1.UINT32
#define RSCAN0RMPTR1L RSCAN0.RMPTR1.UINT16[L]
#define RSCAN0RMPTR1LL RSCAN0.RMPTR1.UINT8[LL]
#define RSCAN0RMPTR1LH RSCAN0.RMPTR1.UINT8[LH]
#define RSCAN0RMPTR1H RSCAN0.RMPTR1.UINT16[H]
#define RSCAN0RMPTR1HL RSCAN0.RMPTR1.UINT8[HL]
#define RSCAN0RMPTR1HH RSCAN0.RMPTR1.UINT8[HH]
#define RSCAN0RMDF01 RSCAN0.RMDF01.UINT32
#define RSCAN0RMDF01L RSCAN0.RMDF01.UINT16[L]
#define RSCAN0RMDF01LL RSCAN0.RMDF01.UINT8[LL]
#define RSCAN0RMDF01LH RSCAN0.RMDF01.UINT8[LH]
#define RSCAN0RMDF01H RSCAN0.RMDF01.UINT16[H]
#define RSCAN0RMDF01HL RSCAN0.RMDF01.UINT8[HL]
#define RSCAN0RMDF01HH RSCAN0.RMDF01.UINT8[HH]
#define RSCAN0RMDF11 RSCAN0.RMDF11.UINT32
#define RSCAN0RMDF11L RSCAN0.RMDF11.UINT16[L]
#define RSCAN0RMDF11LL RSCAN0.RMDF11.UINT8[LL]
#define RSCAN0RMDF11LH RSCAN0.RMDF11.UINT8[LH]
#define RSCAN0RMDF11H RSCAN0.RMDF11.UINT16[H]
#define RSCAN0RMDF11HL RSCAN0.RMDF11.UINT8[HL]
#define RSCAN0RMDF11HH RSCAN0.RMDF11.UINT8[HH]
#define RSCAN0RMID2 RSCAN0.RMID2.UINT32
#define RSCAN0RMID2L RSCAN0.RMID2.UINT16[L]
#define RSCAN0RMID2LL RSCAN0.RMID2.UINT8[LL]
#define RSCAN0RMID2LH RSCAN0.RMID2.UINT8[LH]
#define RSCAN0RMID2H RSCAN0.RMID2.UINT16[H]
#define RSCAN0RMID2HL RSCAN0.RMID2.UINT8[HL]
#define RSCAN0RMID2HH RSCAN0.RMID2.UINT8[HH]
#define RSCAN0RMPTR2 RSCAN0.RMPTR2.UINT32
#define RSCAN0RMPTR2L RSCAN0.RMPTR2.UINT16[L]
#define RSCAN0RMPTR2LL RSCAN0.RMPTR2.UINT8[LL]
#define RSCAN0RMPTR2LH RSCAN0.RMPTR2.UINT8[LH]
#define RSCAN0RMPTR2H RSCAN0.RMPTR2.UINT16[H]
#define RSCAN0RMPTR2HL RSCAN0.RMPTR2.UINT8[HL]
#define RSCAN0RMPTR2HH RSCAN0.RMPTR2.UINT8[HH]
#define RSCAN0RMDF02 RSCAN0.RMDF02.UINT32
#define RSCAN0RMDF02L RSCAN0.RMDF02.UINT16[L]
#define RSCAN0RMDF02LL RSCAN0.RMDF02.UINT8[LL]
#define RSCAN0RMDF02LH RSCAN0.RMDF02.UINT8[LH]
#define RSCAN0RMDF02H RSCAN0.RMDF02.UINT16[H]
#define RSCAN0RMDF02HL RSCAN0.RMDF02.UINT8[HL]
#define RSCAN0RMDF02HH RSCAN0.RMDF02.UINT8[HH]
#define RSCAN0RMDF12 RSCAN0.RMDF12.UINT32
#define RSCAN0RMDF12L RSCAN0.RMDF12.UINT16[L]
#define RSCAN0RMDF12LL RSCAN0.RMDF12.UINT8[LL]
#define RSCAN0RMDF12LH RSCAN0.RMDF12.UINT8[LH]
#define RSCAN0RMDF12H RSCAN0.RMDF12.UINT16[H]
#define RSCAN0RMDF12HL RSCAN0.RMDF12.UINT8[HL]
#define RSCAN0RMDF12HH RSCAN0.RMDF12.UINT8[HH]
#define RSCAN0RMID3 RSCAN0.RMID3.UINT32
#define RSCAN0RMID3L RSCAN0.RMID3.UINT16[L]
#define RSCAN0RMID3LL RSCAN0.RMID3.UINT8[LL]
#define RSCAN0RMID3LH RSCAN0.RMID3.UINT8[LH]
#define RSCAN0RMID3H RSCAN0.RMID3.UINT16[H]
#define RSCAN0RMID3HL RSCAN0.RMID3.UINT8[HL]
#define RSCAN0RMID3HH RSCAN0.RMID3.UINT8[HH]
#define RSCAN0RMPTR3 RSCAN0.RMPTR3.UINT32
#define RSCAN0RMPTR3L RSCAN0.RMPTR3.UINT16[L]
#define RSCAN0RMPTR3LL RSCAN0.RMPTR3.UINT8[LL]
#define RSCAN0RMPTR3LH RSCAN0.RMPTR3.UINT8[LH]
#define RSCAN0RMPTR3H RSCAN0.RMPTR3.UINT16[H]
#define RSCAN0RMPTR3HL RSCAN0.RMPTR3.UINT8[HL]
#define RSCAN0RMPTR3HH RSCAN0.RMPTR3.UINT8[HH]
#define RSCAN0RMDF03 RSCAN0.RMDF03.UINT32
#define RSCAN0RMDF03L RSCAN0.RMDF03.UINT16[L]
#define RSCAN0RMDF03LL RSCAN0.RMDF03.UINT8[LL]
#define RSCAN0RMDF03LH RSCAN0.RMDF03.UINT8[LH]
#define RSCAN0RMDF03H RSCAN0.RMDF03.UINT16[H]
#define RSCAN0RMDF03HL RSCAN0.RMDF03.UINT8[HL]
#define RSCAN0RMDF03HH RSCAN0.RMDF03.UINT8[HH]
#define RSCAN0RMDF13 RSCAN0.RMDF13.UINT32
#define RSCAN0RMDF13L RSCAN0.RMDF13.UINT16[L]
#define RSCAN0RMDF13LL RSCAN0.RMDF13.UINT8[LL]
#define RSCAN0RMDF13LH RSCAN0.RMDF13.UINT8[LH]
#define RSCAN0RMDF13H RSCAN0.RMDF13.UINT16[H]
#define RSCAN0RMDF13HL RSCAN0.RMDF13.UINT8[HL]
#define RSCAN0RMDF13HH RSCAN0.RMDF13.UINT8[HH]
#define RSCAN0RMID4 RSCAN0.RMID4.UINT32
#define RSCAN0RMID4L RSCAN0.RMID4.UINT16[L]
#define RSCAN0RMID4LL RSCAN0.RMID4.UINT8[LL]
#define RSCAN0RMID4LH RSCAN0.RMID4.UINT8[LH]
#define RSCAN0RMID4H RSCAN0.RMID4.UINT16[H]
#define RSCAN0RMID4HL RSCAN0.RMID4.UINT8[HL]
#define RSCAN0RMID4HH RSCAN0.RMID4.UINT8[HH]
#define RSCAN0RMPTR4 RSCAN0.RMPTR4.UINT32
#define RSCAN0RMPTR4L RSCAN0.RMPTR4.UINT16[L]
#define RSCAN0RMPTR4LL RSCAN0.RMPTR4.UINT8[LL]
#define RSCAN0RMPTR4LH RSCAN0.RMPTR4.UINT8[LH]
#define RSCAN0RMPTR4H RSCAN0.RMPTR4.UINT16[H]
#define RSCAN0RMPTR4HL RSCAN0.RMPTR4.UINT8[HL]
#define RSCAN0RMPTR4HH RSCAN0.RMPTR4.UINT8[HH]
#define RSCAN0RMDF04 RSCAN0.RMDF04.UINT32
#define RSCAN0RMDF04L RSCAN0.RMDF04.UINT16[L]
#define RSCAN0RMDF04LL RSCAN0.RMDF04.UINT8[LL]
#define RSCAN0RMDF04LH RSCAN0.RMDF04.UINT8[LH]
#define RSCAN0RMDF04H RSCAN0.RMDF04.UINT16[H]
#define RSCAN0RMDF04HL RSCAN0.RMDF04.UINT8[HL]
#define RSCAN0RMDF04HH RSCAN0.RMDF04.UINT8[HH]
#define RSCAN0RMDF14 RSCAN0.RMDF14.UINT32
#define RSCAN0RMDF14L RSCAN0.RMDF14.UINT16[L]
#define RSCAN0RMDF14LL RSCAN0.RMDF14.UINT8[LL]
#define RSCAN0RMDF14LH RSCAN0.RMDF14.UINT8[LH]
#define RSCAN0RMDF14H RSCAN0.RMDF14.UINT16[H]
#define RSCAN0RMDF14HL RSCAN0.RMDF14.UINT8[HL]
#define RSCAN0RMDF14HH RSCAN0.RMDF14.UINT8[HH]
#define RSCAN0RMID5 RSCAN0.RMID5.UINT32
#define RSCAN0RMID5L RSCAN0.RMID5.UINT16[L]
#define RSCAN0RMID5LL RSCAN0.RMID5.UINT8[LL]
#define RSCAN0RMID5LH RSCAN0.RMID5.UINT8[LH]
#define RSCAN0RMID5H RSCAN0.RMID5.UINT16[H]
#define RSCAN0RMID5HL RSCAN0.RMID5.UINT8[HL]
#define RSCAN0RMID5HH RSCAN0.RMID5.UINT8[HH]
#define RSCAN0RMPTR5 RSCAN0.RMPTR5.UINT32
#define RSCAN0RMPTR5L RSCAN0.RMPTR5.UINT16[L]
#define RSCAN0RMPTR5LL RSCAN0.RMPTR5.UINT8[LL]
#define RSCAN0RMPTR5LH RSCAN0.RMPTR5.UINT8[LH]
#define RSCAN0RMPTR5H RSCAN0.RMPTR5.UINT16[H]
#define RSCAN0RMPTR5HL RSCAN0.RMPTR5.UINT8[HL]
#define RSCAN0RMPTR5HH RSCAN0.RMPTR5.UINT8[HH]
#define RSCAN0RMDF05 RSCAN0.RMDF05.UINT32
#define RSCAN0RMDF05L RSCAN0.RMDF05.UINT16[L]
#define RSCAN0RMDF05LL RSCAN0.RMDF05.UINT8[LL]
#define RSCAN0RMDF05LH RSCAN0.RMDF05.UINT8[LH]
#define RSCAN0RMDF05H RSCAN0.RMDF05.UINT16[H]
#define RSCAN0RMDF05HL RSCAN0.RMDF05.UINT8[HL]
#define RSCAN0RMDF05HH RSCAN0.RMDF05.UINT8[HH]
#define RSCAN0RMDF15 RSCAN0.RMDF15.UINT32
#define RSCAN0RMDF15L RSCAN0.RMDF15.UINT16[L]
#define RSCAN0RMDF15LL RSCAN0.RMDF15.UINT8[LL]
#define RSCAN0RMDF15LH RSCAN0.RMDF15.UINT8[LH]
#define RSCAN0RMDF15H RSCAN0.RMDF15.UINT16[H]
#define RSCAN0RMDF15HL RSCAN0.RMDF15.UINT8[HL]
#define RSCAN0RMDF15HH RSCAN0.RMDF15.UINT8[HH]
#define RSCAN0RMID6 RSCAN0.RMID6.UINT32
#define RSCAN0RMID6L RSCAN0.RMID6.UINT16[L]
#define RSCAN0RMID6LL RSCAN0.RMID6.UINT8[LL]
#define RSCAN0RMID6LH RSCAN0.RMID6.UINT8[LH]
#define RSCAN0RMID6H RSCAN0.RMID6.UINT16[H]
#define RSCAN0RMID6HL RSCAN0.RMID6.UINT8[HL]
#define RSCAN0RMID6HH RSCAN0.RMID6.UINT8[HH]
#define RSCAN0RMPTR6 RSCAN0.RMPTR6.UINT32
#define RSCAN0RMPTR6L RSCAN0.RMPTR6.UINT16[L]
#define RSCAN0RMPTR6LL RSCAN0.RMPTR6.UINT8[LL]
#define RSCAN0RMPTR6LH RSCAN0.RMPTR6.UINT8[LH]
#define RSCAN0RMPTR6H RSCAN0.RMPTR6.UINT16[H]
#define RSCAN0RMPTR6HL RSCAN0.RMPTR6.UINT8[HL]
#define RSCAN0RMPTR6HH RSCAN0.RMPTR6.UINT8[HH]
#define RSCAN0RMDF06 RSCAN0.RMDF06.UINT32
#define RSCAN0RMDF06L RSCAN0.RMDF06.UINT16[L]
#define RSCAN0RMDF06LL RSCAN0.RMDF06.UINT8[LL]
#define RSCAN0RMDF06LH RSCAN0.RMDF06.UINT8[LH]
#define RSCAN0RMDF06H RSCAN0.RMDF06.UINT16[H]
#define RSCAN0RMDF06HL RSCAN0.RMDF06.UINT8[HL]
#define RSCAN0RMDF06HH RSCAN0.RMDF06.UINT8[HH]
#define RSCAN0RMDF16 RSCAN0.RMDF16.UINT32
#define RSCAN0RMDF16L RSCAN0.RMDF16.UINT16[L]
#define RSCAN0RMDF16LL RSCAN0.RMDF16.UINT8[LL]
#define RSCAN0RMDF16LH RSCAN0.RMDF16.UINT8[LH]
#define RSCAN0RMDF16H RSCAN0.RMDF16.UINT16[H]
#define RSCAN0RMDF16HL RSCAN0.RMDF16.UINT8[HL]
#define RSCAN0RMDF16HH RSCAN0.RMDF16.UINT8[HH]
#define RSCAN0RMID7 RSCAN0.RMID7.UINT32
#define RSCAN0RMID7L RSCAN0.RMID7.UINT16[L]
#define RSCAN0RMID7LL RSCAN0.RMID7.UINT8[LL]
#define RSCAN0RMID7LH RSCAN0.RMID7.UINT8[LH]
#define RSCAN0RMID7H RSCAN0.RMID7.UINT16[H]
#define RSCAN0RMID7HL RSCAN0.RMID7.UINT8[HL]
#define RSCAN0RMID7HH RSCAN0.RMID7.UINT8[HH]
#define RSCAN0RMPTR7 RSCAN0.RMPTR7.UINT32
#define RSCAN0RMPTR7L RSCAN0.RMPTR7.UINT16[L]
#define RSCAN0RMPTR7LL RSCAN0.RMPTR7.UINT8[LL]
#define RSCAN0RMPTR7LH RSCAN0.RMPTR7.UINT8[LH]
#define RSCAN0RMPTR7H RSCAN0.RMPTR7.UINT16[H]
#define RSCAN0RMPTR7HL RSCAN0.RMPTR7.UINT8[HL]
#define RSCAN0RMPTR7HH RSCAN0.RMPTR7.UINT8[HH]
#define RSCAN0RMDF07 RSCAN0.RMDF07.UINT32
#define RSCAN0RMDF07L RSCAN0.RMDF07.UINT16[L]
#define RSCAN0RMDF07LL RSCAN0.RMDF07.UINT8[LL]
#define RSCAN0RMDF07LH RSCAN0.RMDF07.UINT8[LH]
#define RSCAN0RMDF07H RSCAN0.RMDF07.UINT16[H]
#define RSCAN0RMDF07HL RSCAN0.RMDF07.UINT8[HL]
#define RSCAN0RMDF07HH RSCAN0.RMDF07.UINT8[HH]
#define RSCAN0RMDF17 RSCAN0.RMDF17.UINT32
#define RSCAN0RMDF17L RSCAN0.RMDF17.UINT16[L]
#define RSCAN0RMDF17LL RSCAN0.RMDF17.UINT8[LL]
#define RSCAN0RMDF17LH RSCAN0.RMDF17.UINT8[LH]
#define RSCAN0RMDF17H RSCAN0.RMDF17.UINT16[H]
#define RSCAN0RMDF17HL RSCAN0.RMDF17.UINT8[HL]
#define RSCAN0RMDF17HH RSCAN0.RMDF17.UINT8[HH]
#define RSCAN0RMID8 RSCAN0.RMID8.UINT32
#define RSCAN0RMID8L RSCAN0.RMID8.UINT16[L]
#define RSCAN0RMID8LL RSCAN0.RMID8.UINT8[LL]
#define RSCAN0RMID8LH RSCAN0.RMID8.UINT8[LH]
#define RSCAN0RMID8H RSCAN0.RMID8.UINT16[H]
#define RSCAN0RMID8HL RSCAN0.RMID8.UINT8[HL]
#define RSCAN0RMID8HH RSCAN0.RMID8.UINT8[HH]
#define RSCAN0RMPTR8 RSCAN0.RMPTR8.UINT32
#define RSCAN0RMPTR8L RSCAN0.RMPTR8.UINT16[L]
#define RSCAN0RMPTR8LL RSCAN0.RMPTR8.UINT8[LL]
#define RSCAN0RMPTR8LH RSCAN0.RMPTR8.UINT8[LH]
#define RSCAN0RMPTR8H RSCAN0.RMPTR8.UINT16[H]
#define RSCAN0RMPTR8HL RSCAN0.RMPTR8.UINT8[HL]
#define RSCAN0RMPTR8HH RSCAN0.RMPTR8.UINT8[HH]
#define RSCAN0RMDF08 RSCAN0.RMDF08.UINT32
#define RSCAN0RMDF08L RSCAN0.RMDF08.UINT16[L]
#define RSCAN0RMDF08LL RSCAN0.RMDF08.UINT8[LL]
#define RSCAN0RMDF08LH RSCAN0.RMDF08.UINT8[LH]
#define RSCAN0RMDF08H RSCAN0.RMDF08.UINT16[H]
#define RSCAN0RMDF08HL RSCAN0.RMDF08.UINT8[HL]
#define RSCAN0RMDF08HH RSCAN0.RMDF08.UINT8[HH]
#define RSCAN0RMDF18 RSCAN0.RMDF18.UINT32
#define RSCAN0RMDF18L RSCAN0.RMDF18.UINT16[L]
#define RSCAN0RMDF18LL RSCAN0.RMDF18.UINT8[LL]
#define RSCAN0RMDF18LH RSCAN0.RMDF18.UINT8[LH]
#define RSCAN0RMDF18H RSCAN0.RMDF18.UINT16[H]
#define RSCAN0RMDF18HL RSCAN0.RMDF18.UINT8[HL]
#define RSCAN0RMDF18HH RSCAN0.RMDF18.UINT8[HH]
#define RSCAN0RMID9 RSCAN0.RMID9.UINT32
#define RSCAN0RMID9L RSCAN0.RMID9.UINT16[L]
#define RSCAN0RMID9LL RSCAN0.RMID9.UINT8[LL]
#define RSCAN0RMID9LH RSCAN0.RMID9.UINT8[LH]
#define RSCAN0RMID9H RSCAN0.RMID9.UINT16[H]
#define RSCAN0RMID9HL RSCAN0.RMID9.UINT8[HL]
#define RSCAN0RMID9HH RSCAN0.RMID9.UINT8[HH]
#define RSCAN0RMPTR9 RSCAN0.RMPTR9.UINT32
#define RSCAN0RMPTR9L RSCAN0.RMPTR9.UINT16[L]
#define RSCAN0RMPTR9LL RSCAN0.RMPTR9.UINT8[LL]
#define RSCAN0RMPTR9LH RSCAN0.RMPTR9.UINT8[LH]
#define RSCAN0RMPTR9H RSCAN0.RMPTR9.UINT16[H]
#define RSCAN0RMPTR9HL RSCAN0.RMPTR9.UINT8[HL]
#define RSCAN0RMPTR9HH RSCAN0.RMPTR9.UINT8[HH]
#define RSCAN0RMDF09 RSCAN0.RMDF09.UINT32
#define RSCAN0RMDF09L RSCAN0.RMDF09.UINT16[L]
#define RSCAN0RMDF09LL RSCAN0.RMDF09.UINT8[LL]
#define RSCAN0RMDF09LH RSCAN0.RMDF09.UINT8[LH]
#define RSCAN0RMDF09H RSCAN0.RMDF09.UINT16[H]
#define RSCAN0RMDF09HL RSCAN0.RMDF09.UINT8[HL]
#define RSCAN0RMDF09HH RSCAN0.RMDF09.UINT8[HH]
#define RSCAN0RMDF19 RSCAN0.RMDF19.UINT32
#define RSCAN0RMDF19L RSCAN0.RMDF19.UINT16[L]
#define RSCAN0RMDF19LL RSCAN0.RMDF19.UINT8[LL]
#define RSCAN0RMDF19LH RSCAN0.RMDF19.UINT8[LH]
#define RSCAN0RMDF19H RSCAN0.RMDF19.UINT16[H]
#define RSCAN0RMDF19HL RSCAN0.RMDF19.UINT8[HL]
#define RSCAN0RMDF19HH RSCAN0.RMDF19.UINT8[HH]
#define RSCAN0RMID10 RSCAN0.RMID10.UINT32
#define RSCAN0RMID10L RSCAN0.RMID10.UINT16[L]
#define RSCAN0RMID10LL RSCAN0.RMID10.UINT8[LL]
#define RSCAN0RMID10LH RSCAN0.RMID10.UINT8[LH]
#define RSCAN0RMID10H RSCAN0.RMID10.UINT16[H]
#define RSCAN0RMID10HL RSCAN0.RMID10.UINT8[HL]
#define RSCAN0RMID10HH RSCAN0.RMID10.UINT8[HH]
#define RSCAN0RMPTR10 RSCAN0.RMPTR10.UINT32
#define RSCAN0RMPTR10L RSCAN0.RMPTR10.UINT16[L]
#define RSCAN0RMPTR10LL RSCAN0.RMPTR10.UINT8[LL]
#define RSCAN0RMPTR10LH RSCAN0.RMPTR10.UINT8[LH]
#define RSCAN0RMPTR10H RSCAN0.RMPTR10.UINT16[H]
#define RSCAN0RMPTR10HL RSCAN0.RMPTR10.UINT8[HL]
#define RSCAN0RMPTR10HH RSCAN0.RMPTR10.UINT8[HH]
#define RSCAN0RMDF010 RSCAN0.RMDF010.UINT32
#define RSCAN0RMDF010L RSCAN0.RMDF010.UINT16[L]
#define RSCAN0RMDF010LL RSCAN0.RMDF010.UINT8[LL]
#define RSCAN0RMDF010LH RSCAN0.RMDF010.UINT8[LH]
#define RSCAN0RMDF010H RSCAN0.RMDF010.UINT16[H]
#define RSCAN0RMDF010HL RSCAN0.RMDF010.UINT8[HL]
#define RSCAN0RMDF010HH RSCAN0.RMDF010.UINT8[HH]
#define RSCAN0RMDF110 RSCAN0.RMDF110.UINT32
#define RSCAN0RMDF110L RSCAN0.RMDF110.UINT16[L]
#define RSCAN0RMDF110LL RSCAN0.RMDF110.UINT8[LL]
#define RSCAN0RMDF110LH RSCAN0.RMDF110.UINT8[LH]
#define RSCAN0RMDF110H RSCAN0.RMDF110.UINT16[H]
#define RSCAN0RMDF110HL RSCAN0.RMDF110.UINT8[HL]
#define RSCAN0RMDF110HH RSCAN0.RMDF110.UINT8[HH]
#define RSCAN0RMID11 RSCAN0.RMID11.UINT32
#define RSCAN0RMID11L RSCAN0.RMID11.UINT16[L]
#define RSCAN0RMID11LL RSCAN0.RMID11.UINT8[LL]
#define RSCAN0RMID11LH RSCAN0.RMID11.UINT8[LH]
#define RSCAN0RMID11H RSCAN0.RMID11.UINT16[H]
#define RSCAN0RMID11HL RSCAN0.RMID11.UINT8[HL]
#define RSCAN0RMID11HH RSCAN0.RMID11.UINT8[HH]
#define RSCAN0RMPTR11 RSCAN0.RMPTR11.UINT32
#define RSCAN0RMPTR11L RSCAN0.RMPTR11.UINT16[L]
#define RSCAN0RMPTR11LL RSCAN0.RMPTR11.UINT8[LL]
#define RSCAN0RMPTR11LH RSCAN0.RMPTR11.UINT8[LH]
#define RSCAN0RMPTR11H RSCAN0.RMPTR11.UINT16[H]
#define RSCAN0RMPTR11HL RSCAN0.RMPTR11.UINT8[HL]
#define RSCAN0RMPTR11HH RSCAN0.RMPTR11.UINT8[HH]
#define RSCAN0RMDF011 RSCAN0.RMDF011.UINT32
#define RSCAN0RMDF011L RSCAN0.RMDF011.UINT16[L]
#define RSCAN0RMDF011LL RSCAN0.RMDF011.UINT8[LL]
#define RSCAN0RMDF011LH RSCAN0.RMDF011.UINT8[LH]
#define RSCAN0RMDF011H RSCAN0.RMDF011.UINT16[H]
#define RSCAN0RMDF011HL RSCAN0.RMDF011.UINT8[HL]
#define RSCAN0RMDF011HH RSCAN0.RMDF011.UINT8[HH]
#define RSCAN0RMDF111 RSCAN0.RMDF111.UINT32
#define RSCAN0RMDF111L RSCAN0.RMDF111.UINT16[L]
#define RSCAN0RMDF111LL RSCAN0.RMDF111.UINT8[LL]
#define RSCAN0RMDF111LH RSCAN0.RMDF111.UINT8[LH]
#define RSCAN0RMDF111H RSCAN0.RMDF111.UINT16[H]
#define RSCAN0RMDF111HL RSCAN0.RMDF111.UINT8[HL]
#define RSCAN0RMDF111HH RSCAN0.RMDF111.UINT8[HH]
#define RSCAN0RMID12 RSCAN0.RMID12.UINT32
#define RSCAN0RMID12L RSCAN0.RMID12.UINT16[L]
#define RSCAN0RMID12LL RSCAN0.RMID12.UINT8[LL]
#define RSCAN0RMID12LH RSCAN0.RMID12.UINT8[LH]
#define RSCAN0RMID12H RSCAN0.RMID12.UINT16[H]
#define RSCAN0RMID12HL RSCAN0.RMID12.UINT8[HL]
#define RSCAN0RMID12HH RSCAN0.RMID12.UINT8[HH]
#define RSCAN0RMPTR12 RSCAN0.RMPTR12.UINT32
#define RSCAN0RMPTR12L RSCAN0.RMPTR12.UINT16[L]
#define RSCAN0RMPTR12LL RSCAN0.RMPTR12.UINT8[LL]
#define RSCAN0RMPTR12LH RSCAN0.RMPTR12.UINT8[LH]
#define RSCAN0RMPTR12H RSCAN0.RMPTR12.UINT16[H]
#define RSCAN0RMPTR12HL RSCAN0.RMPTR12.UINT8[HL]
#define RSCAN0RMPTR12HH RSCAN0.RMPTR12.UINT8[HH]
#define RSCAN0RMDF012 RSCAN0.RMDF012.UINT32
#define RSCAN0RMDF012L RSCAN0.RMDF012.UINT16[L]
#define RSCAN0RMDF012LL RSCAN0.RMDF012.UINT8[LL]
#define RSCAN0RMDF012LH RSCAN0.RMDF012.UINT8[LH]
#define RSCAN0RMDF012H RSCAN0.RMDF012.UINT16[H]
#define RSCAN0RMDF012HL RSCAN0.RMDF012.UINT8[HL]
#define RSCAN0RMDF012HH RSCAN0.RMDF012.UINT8[HH]
#define RSCAN0RMDF112 RSCAN0.RMDF112.UINT32
#define RSCAN0RMDF112L RSCAN0.RMDF112.UINT16[L]
#define RSCAN0RMDF112LL RSCAN0.RMDF112.UINT8[LL]
#define RSCAN0RMDF112LH RSCAN0.RMDF112.UINT8[LH]
#define RSCAN0RMDF112H RSCAN0.RMDF112.UINT16[H]
#define RSCAN0RMDF112HL RSCAN0.RMDF112.UINT8[HL]
#define RSCAN0RMDF112HH RSCAN0.RMDF112.UINT8[HH]
#define RSCAN0RMID13 RSCAN0.RMID13.UINT32
#define RSCAN0RMID13L RSCAN0.RMID13.UINT16[L]
#define RSCAN0RMID13LL RSCAN0.RMID13.UINT8[LL]
#define RSCAN0RMID13LH RSCAN0.RMID13.UINT8[LH]
#define RSCAN0RMID13H RSCAN0.RMID13.UINT16[H]
#define RSCAN0RMID13HL RSCAN0.RMID13.UINT8[HL]
#define RSCAN0RMID13HH RSCAN0.RMID13.UINT8[HH]
#define RSCAN0RMPTR13 RSCAN0.RMPTR13.UINT32
#define RSCAN0RMPTR13L RSCAN0.RMPTR13.UINT16[L]
#define RSCAN0RMPTR13LL RSCAN0.RMPTR13.UINT8[LL]
#define RSCAN0RMPTR13LH RSCAN0.RMPTR13.UINT8[LH]
#define RSCAN0RMPTR13H RSCAN0.RMPTR13.UINT16[H]
#define RSCAN0RMPTR13HL RSCAN0.RMPTR13.UINT8[HL]
#define RSCAN0RMPTR13HH RSCAN0.RMPTR13.UINT8[HH]
#define RSCAN0RMDF013 RSCAN0.RMDF013.UINT32
#define RSCAN0RMDF013L RSCAN0.RMDF013.UINT16[L]
#define RSCAN0RMDF013LL RSCAN0.RMDF013.UINT8[LL]
#define RSCAN0RMDF013LH RSCAN0.RMDF013.UINT8[LH]
#define RSCAN0RMDF013H RSCAN0.RMDF013.UINT16[H]
#define RSCAN0RMDF013HL RSCAN0.RMDF013.UINT8[HL]
#define RSCAN0RMDF013HH RSCAN0.RMDF013.UINT8[HH]
#define RSCAN0RMDF113 RSCAN0.RMDF113.UINT32
#define RSCAN0RMDF113L RSCAN0.RMDF113.UINT16[L]
#define RSCAN0RMDF113LL RSCAN0.RMDF113.UINT8[LL]
#define RSCAN0RMDF113LH RSCAN0.RMDF113.UINT8[LH]
#define RSCAN0RMDF113H RSCAN0.RMDF113.UINT16[H]
#define RSCAN0RMDF113HL RSCAN0.RMDF113.UINT8[HL]
#define RSCAN0RMDF113HH RSCAN0.RMDF113.UINT8[HH]
#define RSCAN0RMID14 RSCAN0.RMID14.UINT32
#define RSCAN0RMID14L RSCAN0.RMID14.UINT16[L]
#define RSCAN0RMID14LL RSCAN0.RMID14.UINT8[LL]
#define RSCAN0RMID14LH RSCAN0.RMID14.UINT8[LH]
#define RSCAN0RMID14H RSCAN0.RMID14.UINT16[H]
#define RSCAN0RMID14HL RSCAN0.RMID14.UINT8[HL]
#define RSCAN0RMID14HH RSCAN0.RMID14.UINT8[HH]
#define RSCAN0RMPTR14 RSCAN0.RMPTR14.UINT32
#define RSCAN0RMPTR14L RSCAN0.RMPTR14.UINT16[L]
#define RSCAN0RMPTR14LL RSCAN0.RMPTR14.UINT8[LL]
#define RSCAN0RMPTR14LH RSCAN0.RMPTR14.UINT8[LH]
#define RSCAN0RMPTR14H RSCAN0.RMPTR14.UINT16[H]
#define RSCAN0RMPTR14HL RSCAN0.RMPTR14.UINT8[HL]
#define RSCAN0RMPTR14HH RSCAN0.RMPTR14.UINT8[HH]
#define RSCAN0RMDF014 RSCAN0.RMDF014.UINT32
#define RSCAN0RMDF014L RSCAN0.RMDF014.UINT16[L]
#define RSCAN0RMDF014LL RSCAN0.RMDF014.UINT8[LL]
#define RSCAN0RMDF014LH RSCAN0.RMDF014.UINT8[LH]
#define RSCAN0RMDF014H RSCAN0.RMDF014.UINT16[H]
#define RSCAN0RMDF014HL RSCAN0.RMDF014.UINT8[HL]
#define RSCAN0RMDF014HH RSCAN0.RMDF014.UINT8[HH]
#define RSCAN0RMDF114 RSCAN0.RMDF114.UINT32
#define RSCAN0RMDF114L RSCAN0.RMDF114.UINT16[L]
#define RSCAN0RMDF114LL RSCAN0.RMDF114.UINT8[LL]
#define RSCAN0RMDF114LH RSCAN0.RMDF114.UINT8[LH]
#define RSCAN0RMDF114H RSCAN0.RMDF114.UINT16[H]
#define RSCAN0RMDF114HL RSCAN0.RMDF114.UINT8[HL]
#define RSCAN0RMDF114HH RSCAN0.RMDF114.UINT8[HH]
#define RSCAN0RMID15 RSCAN0.RMID15.UINT32
#define RSCAN0RMID15L RSCAN0.RMID15.UINT16[L]
#define RSCAN0RMID15LL RSCAN0.RMID15.UINT8[LL]
#define RSCAN0RMID15LH RSCAN0.RMID15.UINT8[LH]
#define RSCAN0RMID15H RSCAN0.RMID15.UINT16[H]
#define RSCAN0RMID15HL RSCAN0.RMID15.UINT8[HL]
#define RSCAN0RMID15HH RSCAN0.RMID15.UINT8[HH]
#define RSCAN0RMPTR15 RSCAN0.RMPTR15.UINT32
#define RSCAN0RMPTR15L RSCAN0.RMPTR15.UINT16[L]
#define RSCAN0RMPTR15LL RSCAN0.RMPTR15.UINT8[LL]
#define RSCAN0RMPTR15LH RSCAN0.RMPTR15.UINT8[LH]
#define RSCAN0RMPTR15H RSCAN0.RMPTR15.UINT16[H]
#define RSCAN0RMPTR15HL RSCAN0.RMPTR15.UINT8[HL]
#define RSCAN0RMPTR15HH RSCAN0.RMPTR15.UINT8[HH]
#define RSCAN0RMDF015 RSCAN0.RMDF015.UINT32
#define RSCAN0RMDF015L RSCAN0.RMDF015.UINT16[L]
#define RSCAN0RMDF015LL RSCAN0.RMDF015.UINT8[LL]
#define RSCAN0RMDF015LH RSCAN0.RMDF015.UINT8[LH]
#define RSCAN0RMDF015H RSCAN0.RMDF015.UINT16[H]
#define RSCAN0RMDF015HL RSCAN0.RMDF015.UINT8[HL]
#define RSCAN0RMDF015HH RSCAN0.RMDF015.UINT8[HH]
#define RSCAN0RMDF115 RSCAN0.RMDF115.UINT32
#define RSCAN0RMDF115L RSCAN0.RMDF115.UINT16[L]
#define RSCAN0RMDF115LL RSCAN0.RMDF115.UINT8[LL]
#define RSCAN0RMDF115LH RSCAN0.RMDF115.UINT8[LH]
#define RSCAN0RMDF115H RSCAN0.RMDF115.UINT16[H]
#define RSCAN0RMDF115HL RSCAN0.RMDF115.UINT8[HL]
#define RSCAN0RMDF115HH RSCAN0.RMDF115.UINT8[HH]
#define RSCAN0RMID16 RSCAN0.RMID16.UINT32
#define RSCAN0RMID16L RSCAN0.RMID16.UINT16[L]
#define RSCAN0RMID16LL RSCAN0.RMID16.UINT8[LL]
#define RSCAN0RMID16LH RSCAN0.RMID16.UINT8[LH]
#define RSCAN0RMID16H RSCAN0.RMID16.UINT16[H]
#define RSCAN0RMID16HL RSCAN0.RMID16.UINT8[HL]
#define RSCAN0RMID16HH RSCAN0.RMID16.UINT8[HH]
#define RSCAN0RMPTR16 RSCAN0.RMPTR16.UINT32
#define RSCAN0RMPTR16L RSCAN0.RMPTR16.UINT16[L]
#define RSCAN0RMPTR16LL RSCAN0.RMPTR16.UINT8[LL]
#define RSCAN0RMPTR16LH RSCAN0.RMPTR16.UINT8[LH]
#define RSCAN0RMPTR16H RSCAN0.RMPTR16.UINT16[H]
#define RSCAN0RMPTR16HL RSCAN0.RMPTR16.UINT8[HL]
#define RSCAN0RMPTR16HH RSCAN0.RMPTR16.UINT8[HH]
#define RSCAN0RMDF016 RSCAN0.RMDF016.UINT32
#define RSCAN0RMDF016L RSCAN0.RMDF016.UINT16[L]
#define RSCAN0RMDF016LL RSCAN0.RMDF016.UINT8[LL]
#define RSCAN0RMDF016LH RSCAN0.RMDF016.UINT8[LH]
#define RSCAN0RMDF016H RSCAN0.RMDF016.UINT16[H]
#define RSCAN0RMDF016HL RSCAN0.RMDF016.UINT8[HL]
#define RSCAN0RMDF016HH RSCAN0.RMDF016.UINT8[HH]
#define RSCAN0RMDF116 RSCAN0.RMDF116.UINT32
#define RSCAN0RMDF116L RSCAN0.RMDF116.UINT16[L]
#define RSCAN0RMDF116LL RSCAN0.RMDF116.UINT8[LL]
#define RSCAN0RMDF116LH RSCAN0.RMDF116.UINT8[LH]
#define RSCAN0RMDF116H RSCAN0.RMDF116.UINT16[H]
#define RSCAN0RMDF116HL RSCAN0.RMDF116.UINT8[HL]
#define RSCAN0RMDF116HH RSCAN0.RMDF116.UINT8[HH]
#define RSCAN0RMID17 RSCAN0.RMID17.UINT32
#define RSCAN0RMID17L RSCAN0.RMID17.UINT16[L]
#define RSCAN0RMID17LL RSCAN0.RMID17.UINT8[LL]
#define RSCAN0RMID17LH RSCAN0.RMID17.UINT8[LH]
#define RSCAN0RMID17H RSCAN0.RMID17.UINT16[H]
#define RSCAN0RMID17HL RSCAN0.RMID17.UINT8[HL]
#define RSCAN0RMID17HH RSCAN0.RMID17.UINT8[HH]
#define RSCAN0RMPTR17 RSCAN0.RMPTR17.UINT32
#define RSCAN0RMPTR17L RSCAN0.RMPTR17.UINT16[L]
#define RSCAN0RMPTR17LL RSCAN0.RMPTR17.UINT8[LL]
#define RSCAN0RMPTR17LH RSCAN0.RMPTR17.UINT8[LH]
#define RSCAN0RMPTR17H RSCAN0.RMPTR17.UINT16[H]
#define RSCAN0RMPTR17HL RSCAN0.RMPTR17.UINT8[HL]
#define RSCAN0RMPTR17HH RSCAN0.RMPTR17.UINT8[HH]
#define RSCAN0RMDF017 RSCAN0.RMDF017.UINT32
#define RSCAN0RMDF017L RSCAN0.RMDF017.UINT16[L]
#define RSCAN0RMDF017LL RSCAN0.RMDF017.UINT8[LL]
#define RSCAN0RMDF017LH RSCAN0.RMDF017.UINT8[LH]
#define RSCAN0RMDF017H RSCAN0.RMDF017.UINT16[H]
#define RSCAN0RMDF017HL RSCAN0.RMDF017.UINT8[HL]
#define RSCAN0RMDF017HH RSCAN0.RMDF017.UINT8[HH]
#define RSCAN0RMDF117 RSCAN0.RMDF117.UINT32
#define RSCAN0RMDF117L RSCAN0.RMDF117.UINT16[L]
#define RSCAN0RMDF117LL RSCAN0.RMDF117.UINT8[LL]
#define RSCAN0RMDF117LH RSCAN0.RMDF117.UINT8[LH]
#define RSCAN0RMDF117H RSCAN0.RMDF117.UINT16[H]
#define RSCAN0RMDF117HL RSCAN0.RMDF117.UINT8[HL]
#define RSCAN0RMDF117HH RSCAN0.RMDF117.UINT8[HH]
#define RSCAN0RMID18 RSCAN0.RMID18.UINT32
#define RSCAN0RMID18L RSCAN0.RMID18.UINT16[L]
#define RSCAN0RMID18LL RSCAN0.RMID18.UINT8[LL]
#define RSCAN0RMID18LH RSCAN0.RMID18.UINT8[LH]
#define RSCAN0RMID18H RSCAN0.RMID18.UINT16[H]
#define RSCAN0RMID18HL RSCAN0.RMID18.UINT8[HL]
#define RSCAN0RMID18HH RSCAN0.RMID18.UINT8[HH]
#define RSCAN0RMPTR18 RSCAN0.RMPTR18.UINT32
#define RSCAN0RMPTR18L RSCAN0.RMPTR18.UINT16[L]
#define RSCAN0RMPTR18LL RSCAN0.RMPTR18.UINT8[LL]
#define RSCAN0RMPTR18LH RSCAN0.RMPTR18.UINT8[LH]
#define RSCAN0RMPTR18H RSCAN0.RMPTR18.UINT16[H]
#define RSCAN0RMPTR18HL RSCAN0.RMPTR18.UINT8[HL]
#define RSCAN0RMPTR18HH RSCAN0.RMPTR18.UINT8[HH]
#define RSCAN0RMDF018 RSCAN0.RMDF018.UINT32
#define RSCAN0RMDF018L RSCAN0.RMDF018.UINT16[L]
#define RSCAN0RMDF018LL RSCAN0.RMDF018.UINT8[LL]
#define RSCAN0RMDF018LH RSCAN0.RMDF018.UINT8[LH]
#define RSCAN0RMDF018H RSCAN0.RMDF018.UINT16[H]
#define RSCAN0RMDF018HL RSCAN0.RMDF018.UINT8[HL]
#define RSCAN0RMDF018HH RSCAN0.RMDF018.UINT8[HH]
#define RSCAN0RMDF118 RSCAN0.RMDF118.UINT32
#define RSCAN0RMDF118L RSCAN0.RMDF118.UINT16[L]
#define RSCAN0RMDF118LL RSCAN0.RMDF118.UINT8[LL]
#define RSCAN0RMDF118LH RSCAN0.RMDF118.UINT8[LH]
#define RSCAN0RMDF118H RSCAN0.RMDF118.UINT16[H]
#define RSCAN0RMDF118HL RSCAN0.RMDF118.UINT8[HL]
#define RSCAN0RMDF118HH RSCAN0.RMDF118.UINT8[HH]
#define RSCAN0RMID19 RSCAN0.RMID19.UINT32
#define RSCAN0RMID19L RSCAN0.RMID19.UINT16[L]
#define RSCAN0RMID19LL RSCAN0.RMID19.UINT8[LL]
#define RSCAN0RMID19LH RSCAN0.RMID19.UINT8[LH]
#define RSCAN0RMID19H RSCAN0.RMID19.UINT16[H]
#define RSCAN0RMID19HL RSCAN0.RMID19.UINT8[HL]
#define RSCAN0RMID19HH RSCAN0.RMID19.UINT8[HH]
#define RSCAN0RMPTR19 RSCAN0.RMPTR19.UINT32
#define RSCAN0RMPTR19L RSCAN0.RMPTR19.UINT16[L]
#define RSCAN0RMPTR19LL RSCAN0.RMPTR19.UINT8[LL]
#define RSCAN0RMPTR19LH RSCAN0.RMPTR19.UINT8[LH]
#define RSCAN0RMPTR19H RSCAN0.RMPTR19.UINT16[H]
#define RSCAN0RMPTR19HL RSCAN0.RMPTR19.UINT8[HL]
#define RSCAN0RMPTR19HH RSCAN0.RMPTR19.UINT8[HH]
#define RSCAN0RMDF019 RSCAN0.RMDF019.UINT32
#define RSCAN0RMDF019L RSCAN0.RMDF019.UINT16[L]
#define RSCAN0RMDF019LL RSCAN0.RMDF019.UINT8[LL]
#define RSCAN0RMDF019LH RSCAN0.RMDF019.UINT8[LH]
#define RSCAN0RMDF019H RSCAN0.RMDF019.UINT16[H]
#define RSCAN0RMDF019HL RSCAN0.RMDF019.UINT8[HL]
#define RSCAN0RMDF019HH RSCAN0.RMDF019.UINT8[HH]
#define RSCAN0RMDF119 RSCAN0.RMDF119.UINT32
#define RSCAN0RMDF119L RSCAN0.RMDF119.UINT16[L]
#define RSCAN0RMDF119LL RSCAN0.RMDF119.UINT8[LL]
#define RSCAN0RMDF119LH RSCAN0.RMDF119.UINT8[LH]
#define RSCAN0RMDF119H RSCAN0.RMDF119.UINT16[H]
#define RSCAN0RMDF119HL RSCAN0.RMDF119.UINT8[HL]
#define RSCAN0RMDF119HH RSCAN0.RMDF119.UINT8[HH]
#define RSCAN0RMID20 RSCAN0.RMID20.UINT32
#define RSCAN0RMID20L RSCAN0.RMID20.UINT16[L]
#define RSCAN0RMID20LL RSCAN0.RMID20.UINT8[LL]
#define RSCAN0RMID20LH RSCAN0.RMID20.UINT8[LH]
#define RSCAN0RMID20H RSCAN0.RMID20.UINT16[H]
#define RSCAN0RMID20HL RSCAN0.RMID20.UINT8[HL]
#define RSCAN0RMID20HH RSCAN0.RMID20.UINT8[HH]
#define RSCAN0RMPTR20 RSCAN0.RMPTR20.UINT32
#define RSCAN0RMPTR20L RSCAN0.RMPTR20.UINT16[L]
#define RSCAN0RMPTR20LL RSCAN0.RMPTR20.UINT8[LL]
#define RSCAN0RMPTR20LH RSCAN0.RMPTR20.UINT8[LH]
#define RSCAN0RMPTR20H RSCAN0.RMPTR20.UINT16[H]
#define RSCAN0RMPTR20HL RSCAN0.RMPTR20.UINT8[HL]
#define RSCAN0RMPTR20HH RSCAN0.RMPTR20.UINT8[HH]
#define RSCAN0RMDF020 RSCAN0.RMDF020.UINT32
#define RSCAN0RMDF020L RSCAN0.RMDF020.UINT16[L]
#define RSCAN0RMDF020LL RSCAN0.RMDF020.UINT8[LL]
#define RSCAN0RMDF020LH RSCAN0.RMDF020.UINT8[LH]
#define RSCAN0RMDF020H RSCAN0.RMDF020.UINT16[H]
#define RSCAN0RMDF020HL RSCAN0.RMDF020.UINT8[HL]
#define RSCAN0RMDF020HH RSCAN0.RMDF020.UINT8[HH]
#define RSCAN0RMDF120 RSCAN0.RMDF120.UINT32
#define RSCAN0RMDF120L RSCAN0.RMDF120.UINT16[L]
#define RSCAN0RMDF120LL RSCAN0.RMDF120.UINT8[LL]
#define RSCAN0RMDF120LH RSCAN0.RMDF120.UINT8[LH]
#define RSCAN0RMDF120H RSCAN0.RMDF120.UINT16[H]
#define RSCAN0RMDF120HL RSCAN0.RMDF120.UINT8[HL]
#define RSCAN0RMDF120HH RSCAN0.RMDF120.UINT8[HH]
#define RSCAN0RMID21 RSCAN0.RMID21.UINT32
#define RSCAN0RMID21L RSCAN0.RMID21.UINT16[L]
#define RSCAN0RMID21LL RSCAN0.RMID21.UINT8[LL]
#define RSCAN0RMID21LH RSCAN0.RMID21.UINT8[LH]
#define RSCAN0RMID21H RSCAN0.RMID21.UINT16[H]
#define RSCAN0RMID21HL RSCAN0.RMID21.UINT8[HL]
#define RSCAN0RMID21HH RSCAN0.RMID21.UINT8[HH]
#define RSCAN0RMPTR21 RSCAN0.RMPTR21.UINT32
#define RSCAN0RMPTR21L RSCAN0.RMPTR21.UINT16[L]
#define RSCAN0RMPTR21LL RSCAN0.RMPTR21.UINT8[LL]
#define RSCAN0RMPTR21LH RSCAN0.RMPTR21.UINT8[LH]
#define RSCAN0RMPTR21H RSCAN0.RMPTR21.UINT16[H]
#define RSCAN0RMPTR21HL RSCAN0.RMPTR21.UINT8[HL]
#define RSCAN0RMPTR21HH RSCAN0.RMPTR21.UINT8[HH]
#define RSCAN0RMDF021 RSCAN0.RMDF021.UINT32
#define RSCAN0RMDF021L RSCAN0.RMDF021.UINT16[L]
#define RSCAN0RMDF021LL RSCAN0.RMDF021.UINT8[LL]
#define RSCAN0RMDF021LH RSCAN0.RMDF021.UINT8[LH]
#define RSCAN0RMDF021H RSCAN0.RMDF021.UINT16[H]
#define RSCAN0RMDF021HL RSCAN0.RMDF021.UINT8[HL]
#define RSCAN0RMDF021HH RSCAN0.RMDF021.UINT8[HH]
#define RSCAN0RMDF121 RSCAN0.RMDF121.UINT32
#define RSCAN0RMDF121L RSCAN0.RMDF121.UINT16[L]
#define RSCAN0RMDF121LL RSCAN0.RMDF121.UINT8[LL]
#define RSCAN0RMDF121LH RSCAN0.RMDF121.UINT8[LH]
#define RSCAN0RMDF121H RSCAN0.RMDF121.UINT16[H]
#define RSCAN0RMDF121HL RSCAN0.RMDF121.UINT8[HL]
#define RSCAN0RMDF121HH RSCAN0.RMDF121.UINT8[HH]
#define RSCAN0RMID22 RSCAN0.RMID22.UINT32
#define RSCAN0RMID22L RSCAN0.RMID22.UINT16[L]
#define RSCAN0RMID22LL RSCAN0.RMID22.UINT8[LL]
#define RSCAN0RMID22LH RSCAN0.RMID22.UINT8[LH]
#define RSCAN0RMID22H RSCAN0.RMID22.UINT16[H]
#define RSCAN0RMID22HL RSCAN0.RMID22.UINT8[HL]
#define RSCAN0RMID22HH RSCAN0.RMID22.UINT8[HH]
#define RSCAN0RMPTR22 RSCAN0.RMPTR22.UINT32
#define RSCAN0RMPTR22L RSCAN0.RMPTR22.UINT16[L]
#define RSCAN0RMPTR22LL RSCAN0.RMPTR22.UINT8[LL]
#define RSCAN0RMPTR22LH RSCAN0.RMPTR22.UINT8[LH]
#define RSCAN0RMPTR22H RSCAN0.RMPTR22.UINT16[H]
#define RSCAN0RMPTR22HL RSCAN0.RMPTR22.UINT8[HL]
#define RSCAN0RMPTR22HH RSCAN0.RMPTR22.UINT8[HH]
#define RSCAN0RMDF022 RSCAN0.RMDF022.UINT32
#define RSCAN0RMDF022L RSCAN0.RMDF022.UINT16[L]
#define RSCAN0RMDF022LL RSCAN0.RMDF022.UINT8[LL]
#define RSCAN0RMDF022LH RSCAN0.RMDF022.UINT8[LH]
#define RSCAN0RMDF022H RSCAN0.RMDF022.UINT16[H]
#define RSCAN0RMDF022HL RSCAN0.RMDF022.UINT8[HL]
#define RSCAN0RMDF022HH RSCAN0.RMDF022.UINT8[HH]
#define RSCAN0RMDF122 RSCAN0.RMDF122.UINT32
#define RSCAN0RMDF122L RSCAN0.RMDF122.UINT16[L]
#define RSCAN0RMDF122LL RSCAN0.RMDF122.UINT8[LL]
#define RSCAN0RMDF122LH RSCAN0.RMDF122.UINT8[LH]
#define RSCAN0RMDF122H RSCAN0.RMDF122.UINT16[H]
#define RSCAN0RMDF122HL RSCAN0.RMDF122.UINT8[HL]
#define RSCAN0RMDF122HH RSCAN0.RMDF122.UINT8[HH]
#define RSCAN0RMID23 RSCAN0.RMID23.UINT32
#define RSCAN0RMID23L RSCAN0.RMID23.UINT16[L]
#define RSCAN0RMID23LL RSCAN0.RMID23.UINT8[LL]
#define RSCAN0RMID23LH RSCAN0.RMID23.UINT8[LH]
#define RSCAN0RMID23H RSCAN0.RMID23.UINT16[H]
#define RSCAN0RMID23HL RSCAN0.RMID23.UINT8[HL]
#define RSCAN0RMID23HH RSCAN0.RMID23.UINT8[HH]
#define RSCAN0RMPTR23 RSCAN0.RMPTR23.UINT32
#define RSCAN0RMPTR23L RSCAN0.RMPTR23.UINT16[L]
#define RSCAN0RMPTR23LL RSCAN0.RMPTR23.UINT8[LL]
#define RSCAN0RMPTR23LH RSCAN0.RMPTR23.UINT8[LH]
#define RSCAN0RMPTR23H RSCAN0.RMPTR23.UINT16[H]
#define RSCAN0RMPTR23HL RSCAN0.RMPTR23.UINT8[HL]
#define RSCAN0RMPTR23HH RSCAN0.RMPTR23.UINT8[HH]
#define RSCAN0RMDF023 RSCAN0.RMDF023.UINT32
#define RSCAN0RMDF023L RSCAN0.RMDF023.UINT16[L]
#define RSCAN0RMDF023LL RSCAN0.RMDF023.UINT8[LL]
#define RSCAN0RMDF023LH RSCAN0.RMDF023.UINT8[LH]
#define RSCAN0RMDF023H RSCAN0.RMDF023.UINT16[H]
#define RSCAN0RMDF023HL RSCAN0.RMDF023.UINT8[HL]
#define RSCAN0RMDF023HH RSCAN0.RMDF023.UINT8[HH]
#define RSCAN0RMDF123 RSCAN0.RMDF123.UINT32
#define RSCAN0RMDF123L RSCAN0.RMDF123.UINT16[L]
#define RSCAN0RMDF123LL RSCAN0.RMDF123.UINT8[LL]
#define RSCAN0RMDF123LH RSCAN0.RMDF123.UINT8[LH]
#define RSCAN0RMDF123H RSCAN0.RMDF123.UINT16[H]
#define RSCAN0RMDF123HL RSCAN0.RMDF123.UINT8[HL]
#define RSCAN0RMDF123HH RSCAN0.RMDF123.UINT8[HH]
#define RSCAN0RMID24 RSCAN0.RMID24.UINT32
#define RSCAN0RMID24L RSCAN0.RMID24.UINT16[L]
#define RSCAN0RMID24LL RSCAN0.RMID24.UINT8[LL]
#define RSCAN0RMID24LH RSCAN0.RMID24.UINT8[LH]
#define RSCAN0RMID24H RSCAN0.RMID24.UINT16[H]
#define RSCAN0RMID24HL RSCAN0.RMID24.UINT8[HL]
#define RSCAN0RMID24HH RSCAN0.RMID24.UINT8[HH]
#define RSCAN0RMPTR24 RSCAN0.RMPTR24.UINT32
#define RSCAN0RMPTR24L RSCAN0.RMPTR24.UINT16[L]
#define RSCAN0RMPTR24LL RSCAN0.RMPTR24.UINT8[LL]
#define RSCAN0RMPTR24LH RSCAN0.RMPTR24.UINT8[LH]
#define RSCAN0RMPTR24H RSCAN0.RMPTR24.UINT16[H]
#define RSCAN0RMPTR24HL RSCAN0.RMPTR24.UINT8[HL]
#define RSCAN0RMPTR24HH RSCAN0.RMPTR24.UINT8[HH]
#define RSCAN0RMDF024 RSCAN0.RMDF024.UINT32
#define RSCAN0RMDF024L RSCAN0.RMDF024.UINT16[L]
#define RSCAN0RMDF024LL RSCAN0.RMDF024.UINT8[LL]
#define RSCAN0RMDF024LH RSCAN0.RMDF024.UINT8[LH]
#define RSCAN0RMDF024H RSCAN0.RMDF024.UINT16[H]
#define RSCAN0RMDF024HL RSCAN0.RMDF024.UINT8[HL]
#define RSCAN0RMDF024HH RSCAN0.RMDF024.UINT8[HH]
#define RSCAN0RMDF124 RSCAN0.RMDF124.UINT32
#define RSCAN0RMDF124L RSCAN0.RMDF124.UINT16[L]
#define RSCAN0RMDF124LL RSCAN0.RMDF124.UINT8[LL]
#define RSCAN0RMDF124LH RSCAN0.RMDF124.UINT8[LH]
#define RSCAN0RMDF124H RSCAN0.RMDF124.UINT16[H]
#define RSCAN0RMDF124HL RSCAN0.RMDF124.UINT8[HL]
#define RSCAN0RMDF124HH RSCAN0.RMDF124.UINT8[HH]
#define RSCAN0RMID25 RSCAN0.RMID25.UINT32
#define RSCAN0RMID25L RSCAN0.RMID25.UINT16[L]
#define RSCAN0RMID25LL RSCAN0.RMID25.UINT8[LL]
#define RSCAN0RMID25LH RSCAN0.RMID25.UINT8[LH]
#define RSCAN0RMID25H RSCAN0.RMID25.UINT16[H]
#define RSCAN0RMID25HL RSCAN0.RMID25.UINT8[HL]
#define RSCAN0RMID25HH RSCAN0.RMID25.UINT8[HH]
#define RSCAN0RMPTR25 RSCAN0.RMPTR25.UINT32
#define RSCAN0RMPTR25L RSCAN0.RMPTR25.UINT16[L]
#define RSCAN0RMPTR25LL RSCAN0.RMPTR25.UINT8[LL]
#define RSCAN0RMPTR25LH RSCAN0.RMPTR25.UINT8[LH]
#define RSCAN0RMPTR25H RSCAN0.RMPTR25.UINT16[H]
#define RSCAN0RMPTR25HL RSCAN0.RMPTR25.UINT8[HL]
#define RSCAN0RMPTR25HH RSCAN0.RMPTR25.UINT8[HH]
#define RSCAN0RMDF025 RSCAN0.RMDF025.UINT32
#define RSCAN0RMDF025L RSCAN0.RMDF025.UINT16[L]
#define RSCAN0RMDF025LL RSCAN0.RMDF025.UINT8[LL]
#define RSCAN0RMDF025LH RSCAN0.RMDF025.UINT8[LH]
#define RSCAN0RMDF025H RSCAN0.RMDF025.UINT16[H]
#define RSCAN0RMDF025HL RSCAN0.RMDF025.UINT8[HL]
#define RSCAN0RMDF025HH RSCAN0.RMDF025.UINT8[HH]
#define RSCAN0RMDF125 RSCAN0.RMDF125.UINT32
#define RSCAN0RMDF125L RSCAN0.RMDF125.UINT16[L]
#define RSCAN0RMDF125LL RSCAN0.RMDF125.UINT8[LL]
#define RSCAN0RMDF125LH RSCAN0.RMDF125.UINT8[LH]
#define RSCAN0RMDF125H RSCAN0.RMDF125.UINT16[H]
#define RSCAN0RMDF125HL RSCAN0.RMDF125.UINT8[HL]
#define RSCAN0RMDF125HH RSCAN0.RMDF125.UINT8[HH]
#define RSCAN0RMID26 RSCAN0.RMID26.UINT32
#define RSCAN0RMID26L RSCAN0.RMID26.UINT16[L]
#define RSCAN0RMID26LL RSCAN0.RMID26.UINT8[LL]
#define RSCAN0RMID26LH RSCAN0.RMID26.UINT8[LH]
#define RSCAN0RMID26H RSCAN0.RMID26.UINT16[H]
#define RSCAN0RMID26HL RSCAN0.RMID26.UINT8[HL]
#define RSCAN0RMID26HH RSCAN0.RMID26.UINT8[HH]
#define RSCAN0RMPTR26 RSCAN0.RMPTR26.UINT32
#define RSCAN0RMPTR26L RSCAN0.RMPTR26.UINT16[L]
#define RSCAN0RMPTR26LL RSCAN0.RMPTR26.UINT8[LL]
#define RSCAN0RMPTR26LH RSCAN0.RMPTR26.UINT8[LH]
#define RSCAN0RMPTR26H RSCAN0.RMPTR26.UINT16[H]
#define RSCAN0RMPTR26HL RSCAN0.RMPTR26.UINT8[HL]
#define RSCAN0RMPTR26HH RSCAN0.RMPTR26.UINT8[HH]
#define RSCAN0RMDF026 RSCAN0.RMDF026.UINT32
#define RSCAN0RMDF026L RSCAN0.RMDF026.UINT16[L]
#define RSCAN0RMDF026LL RSCAN0.RMDF026.UINT8[LL]
#define RSCAN0RMDF026LH RSCAN0.RMDF026.UINT8[LH]
#define RSCAN0RMDF026H RSCAN0.RMDF026.UINT16[H]
#define RSCAN0RMDF026HL RSCAN0.RMDF026.UINT8[HL]
#define RSCAN0RMDF026HH RSCAN0.RMDF026.UINT8[HH]
#define RSCAN0RMDF126 RSCAN0.RMDF126.UINT32
#define RSCAN0RMDF126L RSCAN0.RMDF126.UINT16[L]
#define RSCAN0RMDF126LL RSCAN0.RMDF126.UINT8[LL]
#define RSCAN0RMDF126LH RSCAN0.RMDF126.UINT8[LH]
#define RSCAN0RMDF126H RSCAN0.RMDF126.UINT16[H]
#define RSCAN0RMDF126HL RSCAN0.RMDF126.UINT8[HL]
#define RSCAN0RMDF126HH RSCAN0.RMDF126.UINT8[HH]
#define RSCAN0RMID27 RSCAN0.RMID27.UINT32
#define RSCAN0RMID27L RSCAN0.RMID27.UINT16[L]
#define RSCAN0RMID27LL RSCAN0.RMID27.UINT8[LL]
#define RSCAN0RMID27LH RSCAN0.RMID27.UINT8[LH]
#define RSCAN0RMID27H RSCAN0.RMID27.UINT16[H]
#define RSCAN0RMID27HL RSCAN0.RMID27.UINT8[HL]
#define RSCAN0RMID27HH RSCAN0.RMID27.UINT8[HH]
#define RSCAN0RMPTR27 RSCAN0.RMPTR27.UINT32
#define RSCAN0RMPTR27L RSCAN0.RMPTR27.UINT16[L]
#define RSCAN0RMPTR27LL RSCAN0.RMPTR27.UINT8[LL]
#define RSCAN0RMPTR27LH RSCAN0.RMPTR27.UINT8[LH]
#define RSCAN0RMPTR27H RSCAN0.RMPTR27.UINT16[H]
#define RSCAN0RMPTR27HL RSCAN0.RMPTR27.UINT8[HL]
#define RSCAN0RMPTR27HH RSCAN0.RMPTR27.UINT8[HH]
#define RSCAN0RMDF027 RSCAN0.RMDF027.UINT32
#define RSCAN0RMDF027L RSCAN0.RMDF027.UINT16[L]
#define RSCAN0RMDF027LL RSCAN0.RMDF027.UINT8[LL]
#define RSCAN0RMDF027LH RSCAN0.RMDF027.UINT8[LH]
#define RSCAN0RMDF027H RSCAN0.RMDF027.UINT16[H]
#define RSCAN0RMDF027HL RSCAN0.RMDF027.UINT8[HL]
#define RSCAN0RMDF027HH RSCAN0.RMDF027.UINT8[HH]
#define RSCAN0RMDF127 RSCAN0.RMDF127.UINT32
#define RSCAN0RMDF127L RSCAN0.RMDF127.UINT16[L]
#define RSCAN0RMDF127LL RSCAN0.RMDF127.UINT8[LL]
#define RSCAN0RMDF127LH RSCAN0.RMDF127.UINT8[LH]
#define RSCAN0RMDF127H RSCAN0.RMDF127.UINT16[H]
#define RSCAN0RMDF127HL RSCAN0.RMDF127.UINT8[HL]
#define RSCAN0RMDF127HH RSCAN0.RMDF127.UINT8[HH]
#define RSCAN0RMID28 RSCAN0.RMID28.UINT32
#define RSCAN0RMID28L RSCAN0.RMID28.UINT16[L]
#define RSCAN0RMID28LL RSCAN0.RMID28.UINT8[LL]
#define RSCAN0RMID28LH RSCAN0.RMID28.UINT8[LH]
#define RSCAN0RMID28H RSCAN0.RMID28.UINT16[H]
#define RSCAN0RMID28HL RSCAN0.RMID28.UINT8[HL]
#define RSCAN0RMID28HH RSCAN0.RMID28.UINT8[HH]
#define RSCAN0RMPTR28 RSCAN0.RMPTR28.UINT32
#define RSCAN0RMPTR28L RSCAN0.RMPTR28.UINT16[L]
#define RSCAN0RMPTR28LL RSCAN0.RMPTR28.UINT8[LL]
#define RSCAN0RMPTR28LH RSCAN0.RMPTR28.UINT8[LH]
#define RSCAN0RMPTR28H RSCAN0.RMPTR28.UINT16[H]
#define RSCAN0RMPTR28HL RSCAN0.RMPTR28.UINT8[HL]
#define RSCAN0RMPTR28HH RSCAN0.RMPTR28.UINT8[HH]
#define RSCAN0RMDF028 RSCAN0.RMDF028.UINT32
#define RSCAN0RMDF028L RSCAN0.RMDF028.UINT16[L]
#define RSCAN0RMDF028LL RSCAN0.RMDF028.UINT8[LL]
#define RSCAN0RMDF028LH RSCAN0.RMDF028.UINT8[LH]
#define RSCAN0RMDF028H RSCAN0.RMDF028.UINT16[H]
#define RSCAN0RMDF028HL RSCAN0.RMDF028.UINT8[HL]
#define RSCAN0RMDF028HH RSCAN0.RMDF028.UINT8[HH]
#define RSCAN0RMDF128 RSCAN0.RMDF128.UINT32
#define RSCAN0RMDF128L RSCAN0.RMDF128.UINT16[L]
#define RSCAN0RMDF128LL RSCAN0.RMDF128.UINT8[LL]
#define RSCAN0RMDF128LH RSCAN0.RMDF128.UINT8[LH]
#define RSCAN0RMDF128H RSCAN0.RMDF128.UINT16[H]
#define RSCAN0RMDF128HL RSCAN0.RMDF128.UINT8[HL]
#define RSCAN0RMDF128HH RSCAN0.RMDF128.UINT8[HH]
#define RSCAN0RMID29 RSCAN0.RMID29.UINT32
#define RSCAN0RMID29L RSCAN0.RMID29.UINT16[L]
#define RSCAN0RMID29LL RSCAN0.RMID29.UINT8[LL]
#define RSCAN0RMID29LH RSCAN0.RMID29.UINT8[LH]
#define RSCAN0RMID29H RSCAN0.RMID29.UINT16[H]
#define RSCAN0RMID29HL RSCAN0.RMID29.UINT8[HL]
#define RSCAN0RMID29HH RSCAN0.RMID29.UINT8[HH]
#define RSCAN0RMPTR29 RSCAN0.RMPTR29.UINT32
#define RSCAN0RMPTR29L RSCAN0.RMPTR29.UINT16[L]
#define RSCAN0RMPTR29LL RSCAN0.RMPTR29.UINT8[LL]
#define RSCAN0RMPTR29LH RSCAN0.RMPTR29.UINT8[LH]
#define RSCAN0RMPTR29H RSCAN0.RMPTR29.UINT16[H]
#define RSCAN0RMPTR29HL RSCAN0.RMPTR29.UINT8[HL]
#define RSCAN0RMPTR29HH RSCAN0.RMPTR29.UINT8[HH]
#define RSCAN0RMDF029 RSCAN0.RMDF029.UINT32
#define RSCAN0RMDF029L RSCAN0.RMDF029.UINT16[L]
#define RSCAN0RMDF029LL RSCAN0.RMDF029.UINT8[LL]
#define RSCAN0RMDF029LH RSCAN0.RMDF029.UINT8[LH]
#define RSCAN0RMDF029H RSCAN0.RMDF029.UINT16[H]
#define RSCAN0RMDF029HL RSCAN0.RMDF029.UINT8[HL]
#define RSCAN0RMDF029HH RSCAN0.RMDF029.UINT8[HH]
#define RSCAN0RMDF129 RSCAN0.RMDF129.UINT32
#define RSCAN0RMDF129L RSCAN0.RMDF129.UINT16[L]
#define RSCAN0RMDF129LL RSCAN0.RMDF129.UINT8[LL]
#define RSCAN0RMDF129LH RSCAN0.RMDF129.UINT8[LH]
#define RSCAN0RMDF129H RSCAN0.RMDF129.UINT16[H]
#define RSCAN0RMDF129HL RSCAN0.RMDF129.UINT8[HL]
#define RSCAN0RMDF129HH RSCAN0.RMDF129.UINT8[HH]
#define RSCAN0RMID30 RSCAN0.RMID30.UINT32
#define RSCAN0RMID30L RSCAN0.RMID30.UINT16[L]
#define RSCAN0RMID30LL RSCAN0.RMID30.UINT8[LL]
#define RSCAN0RMID30LH RSCAN0.RMID30.UINT8[LH]
#define RSCAN0RMID30H RSCAN0.RMID30.UINT16[H]
#define RSCAN0RMID30HL RSCAN0.RMID30.UINT8[HL]
#define RSCAN0RMID30HH RSCAN0.RMID30.UINT8[HH]
#define RSCAN0RMPTR30 RSCAN0.RMPTR30.UINT32
#define RSCAN0RMPTR30L RSCAN0.RMPTR30.UINT16[L]
#define RSCAN0RMPTR30LL RSCAN0.RMPTR30.UINT8[LL]
#define RSCAN0RMPTR30LH RSCAN0.RMPTR30.UINT8[LH]
#define RSCAN0RMPTR30H RSCAN0.RMPTR30.UINT16[H]
#define RSCAN0RMPTR30HL RSCAN0.RMPTR30.UINT8[HL]
#define RSCAN0RMPTR30HH RSCAN0.RMPTR30.UINT8[HH]
#define RSCAN0RMDF030 RSCAN0.RMDF030.UINT32
#define RSCAN0RMDF030L RSCAN0.RMDF030.UINT16[L]
#define RSCAN0RMDF030LL RSCAN0.RMDF030.UINT8[LL]
#define RSCAN0RMDF030LH RSCAN0.RMDF030.UINT8[LH]
#define RSCAN0RMDF030H RSCAN0.RMDF030.UINT16[H]
#define RSCAN0RMDF030HL RSCAN0.RMDF030.UINT8[HL]
#define RSCAN0RMDF030HH RSCAN0.RMDF030.UINT8[HH]
#define RSCAN0RMDF130 RSCAN0.RMDF130.UINT32
#define RSCAN0RMDF130L RSCAN0.RMDF130.UINT16[L]
#define RSCAN0RMDF130LL RSCAN0.RMDF130.UINT8[LL]
#define RSCAN0RMDF130LH RSCAN0.RMDF130.UINT8[LH]
#define RSCAN0RMDF130H RSCAN0.RMDF130.UINT16[H]
#define RSCAN0RMDF130HL RSCAN0.RMDF130.UINT8[HL]
#define RSCAN0RMDF130HH RSCAN0.RMDF130.UINT8[HH]
#define RSCAN0RMID31 RSCAN0.RMID31.UINT32
#define RSCAN0RMID31L RSCAN0.RMID31.UINT16[L]
#define RSCAN0RMID31LL RSCAN0.RMID31.UINT8[LL]
#define RSCAN0RMID31LH RSCAN0.RMID31.UINT8[LH]
#define RSCAN0RMID31H RSCAN0.RMID31.UINT16[H]
#define RSCAN0RMID31HL RSCAN0.RMID31.UINT8[HL]
#define RSCAN0RMID31HH RSCAN0.RMID31.UINT8[HH]
#define RSCAN0RMPTR31 RSCAN0.RMPTR31.UINT32
#define RSCAN0RMPTR31L RSCAN0.RMPTR31.UINT16[L]
#define RSCAN0RMPTR31LL RSCAN0.RMPTR31.UINT8[LL]
#define RSCAN0RMPTR31LH RSCAN0.RMPTR31.UINT8[LH]
#define RSCAN0RMPTR31H RSCAN0.RMPTR31.UINT16[H]
#define RSCAN0RMPTR31HL RSCAN0.RMPTR31.UINT8[HL]
#define RSCAN0RMPTR31HH RSCAN0.RMPTR31.UINT8[HH]
#define RSCAN0RMDF031 RSCAN0.RMDF031.UINT32
#define RSCAN0RMDF031L RSCAN0.RMDF031.UINT16[L]
#define RSCAN0RMDF031LL RSCAN0.RMDF031.UINT8[LL]
#define RSCAN0RMDF031LH RSCAN0.RMDF031.UINT8[LH]
#define RSCAN0RMDF031H RSCAN0.RMDF031.UINT16[H]
#define RSCAN0RMDF031HL RSCAN0.RMDF031.UINT8[HL]
#define RSCAN0RMDF031HH RSCAN0.RMDF031.UINT8[HH]
#define RSCAN0RMDF131 RSCAN0.RMDF131.UINT32
#define RSCAN0RMDF131L RSCAN0.RMDF131.UINT16[L]
#define RSCAN0RMDF131LL RSCAN0.RMDF131.UINT8[LL]
#define RSCAN0RMDF131LH RSCAN0.RMDF131.UINT8[LH]
#define RSCAN0RMDF131H RSCAN0.RMDF131.UINT16[H]
#define RSCAN0RMDF131HL RSCAN0.RMDF131.UINT8[HL]
#define RSCAN0RMDF131HH RSCAN0.RMDF131.UINT8[HH]
#define RSCAN0RFID0 RSCAN0.RFID0.UINT32
#define RSCAN0RFID0L RSCAN0.RFID0.UINT16[L]
#define RSCAN0RFID0LL RSCAN0.RFID0.UINT8[LL]
#define RSCAN0RFID0LH RSCAN0.RFID0.UINT8[LH]
#define RSCAN0RFID0H RSCAN0.RFID0.UINT16[H]
#define RSCAN0RFID0HL RSCAN0.RFID0.UINT8[HL]
#define RSCAN0RFID0HH RSCAN0.RFID0.UINT8[HH]
#define RSCAN0RFID RSCAN0.RFID0.BIT.RFID
#define RSCAN0RFRTR RSCAN0.RFID0.BIT.RFRTR
#define RSCAN0RFIDE RSCAN0.RFID0.BIT.RFIDE
#define RSCAN0RFPTR0 RSCAN0.RFPTR0.UINT32
#define RSCAN0RFPTR0L RSCAN0.RFPTR0.UINT16[L]
#define RSCAN0RFPTR0LL RSCAN0.RFPTR0.UINT8[LL]
#define RSCAN0RFPTR0LH RSCAN0.RFPTR0.UINT8[LH]
#define RSCAN0RFPTR0H RSCAN0.RFPTR0.UINT16[H]
#define RSCAN0RFPTR0HL RSCAN0.RFPTR0.UINT8[HL]
#define RSCAN0RFPTR0HH RSCAN0.RFPTR0.UINT8[HH]
#define RSCAN0RFTS RSCAN0.RFPTR0.BIT.RFTS
#define RSCAN0RFPTR RSCAN0.RFPTR0.BIT.RFPTR
#define RSCAN0RFDLC RSCAN0.RFPTR0.BIT.RFDLC
#define RSCAN0RFDF00 RSCAN0.RFDF00.UINT32
#define RSCAN0RFDF00L RSCAN0.RFDF00.UINT16[L]
#define RSCAN0RFDF00LL RSCAN0.RFDF00.UINT8[LL]
#define RSCAN0RFDF00LH RSCAN0.RFDF00.UINT8[LH]
#define RSCAN0RFDF00H RSCAN0.RFDF00.UINT16[H]
#define RSCAN0RFDF00HL RSCAN0.RFDF00.UINT8[HL]
#define RSCAN0RFDF00HH RSCAN0.RFDF00.UINT8[HH]
#define RSCAN0RFDB0 RSCAN0.RFDF00.BIT.RFDB0
#define RSCAN0RFDB1 RSCAN0.RFDF00.BIT.RFDB1
#define RSCAN0RFDB2 RSCAN0.RFDF00.BIT.RFDB2
#define RSCAN0RFDB3 RSCAN0.RFDF00.BIT.RFDB3
#define RSCAN0RFDF10 RSCAN0.RFDF10.UINT32
#define RSCAN0RFDF10L RSCAN0.RFDF10.UINT16[L]
#define RSCAN0RFDF10LL RSCAN0.RFDF10.UINT8[LL]
#define RSCAN0RFDF10LH RSCAN0.RFDF10.UINT8[LH]
#define RSCAN0RFDF10H RSCAN0.RFDF10.UINT16[H]
#define RSCAN0RFDF10HL RSCAN0.RFDF10.UINT8[HL]
#define RSCAN0RFDF10HH RSCAN0.RFDF10.UINT8[HH]
#define RSCAN0RFDB4 RSCAN0.RFDF10.BIT.RFDB4
#define RSCAN0RFDB5 RSCAN0.RFDF10.BIT.RFDB5
#define RSCAN0RFDB6 RSCAN0.RFDF10.BIT.RFDB6
#define RSCAN0RFDB7 RSCAN0.RFDF10.BIT.RFDB7
#define RSCAN0RFID1 RSCAN0.RFID1.UINT32
#define RSCAN0RFID1L RSCAN0.RFID1.UINT16[L]
#define RSCAN0RFID1LL RSCAN0.RFID1.UINT8[LL]
#define RSCAN0RFID1LH RSCAN0.RFID1.UINT8[LH]
#define RSCAN0RFID1H RSCAN0.RFID1.UINT16[H]
#define RSCAN0RFID1HL RSCAN0.RFID1.UINT8[HL]
#define RSCAN0RFID1HH RSCAN0.RFID1.UINT8[HH]
#define RSCAN0RFPTR1 RSCAN0.RFPTR1.UINT32
#define RSCAN0RFPTR1L RSCAN0.RFPTR1.UINT16[L]
#define RSCAN0RFPTR1LL RSCAN0.RFPTR1.UINT8[LL]
#define RSCAN0RFPTR1LH RSCAN0.RFPTR1.UINT8[LH]
#define RSCAN0RFPTR1H RSCAN0.RFPTR1.UINT16[H]
#define RSCAN0RFPTR1HL RSCAN0.RFPTR1.UINT8[HL]
#define RSCAN0RFPTR1HH RSCAN0.RFPTR1.UINT8[HH]
#define RSCAN0RFDF01 RSCAN0.RFDF01.UINT32
#define RSCAN0RFDF01L RSCAN0.RFDF01.UINT16[L]
#define RSCAN0RFDF01LL RSCAN0.RFDF01.UINT8[LL]
#define RSCAN0RFDF01LH RSCAN0.RFDF01.UINT8[LH]
#define RSCAN0RFDF01H RSCAN0.RFDF01.UINT16[H]
#define RSCAN0RFDF01HL RSCAN0.RFDF01.UINT8[HL]
#define RSCAN0RFDF01HH RSCAN0.RFDF01.UINT8[HH]
#define RSCAN0RFDF11 RSCAN0.RFDF11.UINT32
#define RSCAN0RFDF11L RSCAN0.RFDF11.UINT16[L]
#define RSCAN0RFDF11LL RSCAN0.RFDF11.UINT8[LL]
#define RSCAN0RFDF11LH RSCAN0.RFDF11.UINT8[LH]
#define RSCAN0RFDF11H RSCAN0.RFDF11.UINT16[H]
#define RSCAN0RFDF11HL RSCAN0.RFDF11.UINT8[HL]
#define RSCAN0RFDF11HH RSCAN0.RFDF11.UINT8[HH]
#define RSCAN0RFID2 RSCAN0.RFID2.UINT32
#define RSCAN0RFID2L RSCAN0.RFID2.UINT16[L]
#define RSCAN0RFID2LL RSCAN0.RFID2.UINT8[LL]
#define RSCAN0RFID2LH RSCAN0.RFID2.UINT8[LH]
#define RSCAN0RFID2H RSCAN0.RFID2.UINT16[H]
#define RSCAN0RFID2HL RSCAN0.RFID2.UINT8[HL]
#define RSCAN0RFID2HH RSCAN0.RFID2.UINT8[HH]
#define RSCAN0RFPTR2 RSCAN0.RFPTR2.UINT32
#define RSCAN0RFPTR2L RSCAN0.RFPTR2.UINT16[L]
#define RSCAN0RFPTR2LL RSCAN0.RFPTR2.UINT8[LL]
#define RSCAN0RFPTR2LH RSCAN0.RFPTR2.UINT8[LH]
#define RSCAN0RFPTR2H RSCAN0.RFPTR2.UINT16[H]
#define RSCAN0RFPTR2HL RSCAN0.RFPTR2.UINT8[HL]
#define RSCAN0RFPTR2HH RSCAN0.RFPTR2.UINT8[HH]
#define RSCAN0RFDF02 RSCAN0.RFDF02.UINT32
#define RSCAN0RFDF02L RSCAN0.RFDF02.UINT16[L]
#define RSCAN0RFDF02LL RSCAN0.RFDF02.UINT8[LL]
#define RSCAN0RFDF02LH RSCAN0.RFDF02.UINT8[LH]
#define RSCAN0RFDF02H RSCAN0.RFDF02.UINT16[H]
#define RSCAN0RFDF02HL RSCAN0.RFDF02.UINT8[HL]
#define RSCAN0RFDF02HH RSCAN0.RFDF02.UINT8[HH]
#define RSCAN0RFDF12 RSCAN0.RFDF12.UINT32
#define RSCAN0RFDF12L RSCAN0.RFDF12.UINT16[L]
#define RSCAN0RFDF12LL RSCAN0.RFDF12.UINT8[LL]
#define RSCAN0RFDF12LH RSCAN0.RFDF12.UINT8[LH]
#define RSCAN0RFDF12H RSCAN0.RFDF12.UINT16[H]
#define RSCAN0RFDF12HL RSCAN0.RFDF12.UINT8[HL]
#define RSCAN0RFDF12HH RSCAN0.RFDF12.UINT8[HH]
#define RSCAN0RFID3 RSCAN0.RFID3.UINT32
#define RSCAN0RFID3L RSCAN0.RFID3.UINT16[L]
#define RSCAN0RFID3LL RSCAN0.RFID3.UINT8[LL]
#define RSCAN0RFID3LH RSCAN0.RFID3.UINT8[LH]
#define RSCAN0RFID3H RSCAN0.RFID3.UINT16[H]
#define RSCAN0RFID3HL RSCAN0.RFID3.UINT8[HL]
#define RSCAN0RFID3HH RSCAN0.RFID3.UINT8[HH]
#define RSCAN0RFPTR3 RSCAN0.RFPTR3.UINT32
#define RSCAN0RFPTR3L RSCAN0.RFPTR3.UINT16[L]
#define RSCAN0RFPTR3LL RSCAN0.RFPTR3.UINT8[LL]
#define RSCAN0RFPTR3LH RSCAN0.RFPTR3.UINT8[LH]
#define RSCAN0RFPTR3H RSCAN0.RFPTR3.UINT16[H]
#define RSCAN0RFPTR3HL RSCAN0.RFPTR3.UINT8[HL]
#define RSCAN0RFPTR3HH RSCAN0.RFPTR3.UINT8[HH]
#define RSCAN0RFDF03 RSCAN0.RFDF03.UINT32
#define RSCAN0RFDF03L RSCAN0.RFDF03.UINT16[L]
#define RSCAN0RFDF03LL RSCAN0.RFDF03.UINT8[LL]
#define RSCAN0RFDF03LH RSCAN0.RFDF03.UINT8[LH]
#define RSCAN0RFDF03H RSCAN0.RFDF03.UINT16[H]
#define RSCAN0RFDF03HL RSCAN0.RFDF03.UINT8[HL]
#define RSCAN0RFDF03HH RSCAN0.RFDF03.UINT8[HH]
#define RSCAN0RFDF13 RSCAN0.RFDF13.UINT32
#define RSCAN0RFDF13L RSCAN0.RFDF13.UINT16[L]
#define RSCAN0RFDF13LL RSCAN0.RFDF13.UINT8[LL]
#define RSCAN0RFDF13LH RSCAN0.RFDF13.UINT8[LH]
#define RSCAN0RFDF13H RSCAN0.RFDF13.UINT16[H]
#define RSCAN0RFDF13HL RSCAN0.RFDF13.UINT8[HL]
#define RSCAN0RFDF13HH RSCAN0.RFDF13.UINT8[HH]
#define RSCAN0RFID4 RSCAN0.RFID4.UINT32
#define RSCAN0RFID4L RSCAN0.RFID4.UINT16[L]
#define RSCAN0RFID4LL RSCAN0.RFID4.UINT8[LL]
#define RSCAN0RFID4LH RSCAN0.RFID4.UINT8[LH]
#define RSCAN0RFID4H RSCAN0.RFID4.UINT16[H]
#define RSCAN0RFID4HL RSCAN0.RFID4.UINT8[HL]
#define RSCAN0RFID4HH RSCAN0.RFID4.UINT8[HH]
#define RSCAN0RFPTR4 RSCAN0.RFPTR4.UINT32
#define RSCAN0RFPTR4L RSCAN0.RFPTR4.UINT16[L]
#define RSCAN0RFPTR4LL RSCAN0.RFPTR4.UINT8[LL]
#define RSCAN0RFPTR4LH RSCAN0.RFPTR4.UINT8[LH]
#define RSCAN0RFPTR4H RSCAN0.RFPTR4.UINT16[H]
#define RSCAN0RFPTR4HL RSCAN0.RFPTR4.UINT8[HL]
#define RSCAN0RFPTR4HH RSCAN0.RFPTR4.UINT8[HH]
#define RSCAN0RFDF04 RSCAN0.RFDF04.UINT32
#define RSCAN0RFDF04L RSCAN0.RFDF04.UINT16[L]
#define RSCAN0RFDF04LL RSCAN0.RFDF04.UINT8[LL]
#define RSCAN0RFDF04LH RSCAN0.RFDF04.UINT8[LH]
#define RSCAN0RFDF04H RSCAN0.RFDF04.UINT16[H]
#define RSCAN0RFDF04HL RSCAN0.RFDF04.UINT8[HL]
#define RSCAN0RFDF04HH RSCAN0.RFDF04.UINT8[HH]
#define RSCAN0RFDF14 RSCAN0.RFDF14.UINT32
#define RSCAN0RFDF14L RSCAN0.RFDF14.UINT16[L]
#define RSCAN0RFDF14LL RSCAN0.RFDF14.UINT8[LL]
#define RSCAN0RFDF14LH RSCAN0.RFDF14.UINT8[LH]
#define RSCAN0RFDF14H RSCAN0.RFDF14.UINT16[H]
#define RSCAN0RFDF14HL RSCAN0.RFDF14.UINT8[HL]
#define RSCAN0RFDF14HH RSCAN0.RFDF14.UINT8[HH]
#define RSCAN0RFID5 RSCAN0.RFID5.UINT32
#define RSCAN0RFID5L RSCAN0.RFID5.UINT16[L]
#define RSCAN0RFID5LL RSCAN0.RFID5.UINT8[LL]
#define RSCAN0RFID5LH RSCAN0.RFID5.UINT8[LH]
#define RSCAN0RFID5H RSCAN0.RFID5.UINT16[H]
#define RSCAN0RFID5HL RSCAN0.RFID5.UINT8[HL]
#define RSCAN0RFID5HH RSCAN0.RFID5.UINT8[HH]
#define RSCAN0RFPTR5 RSCAN0.RFPTR5.UINT32
#define RSCAN0RFPTR5L RSCAN0.RFPTR5.UINT16[L]
#define RSCAN0RFPTR5LL RSCAN0.RFPTR5.UINT8[LL]
#define RSCAN0RFPTR5LH RSCAN0.RFPTR5.UINT8[LH]
#define RSCAN0RFPTR5H RSCAN0.RFPTR5.UINT16[H]
#define RSCAN0RFPTR5HL RSCAN0.RFPTR5.UINT8[HL]
#define RSCAN0RFPTR5HH RSCAN0.RFPTR5.UINT8[HH]
#define RSCAN0RFDF05 RSCAN0.RFDF05.UINT32
#define RSCAN0RFDF05L RSCAN0.RFDF05.UINT16[L]
#define RSCAN0RFDF05LL RSCAN0.RFDF05.UINT8[LL]
#define RSCAN0RFDF05LH RSCAN0.RFDF05.UINT8[LH]
#define RSCAN0RFDF05H RSCAN0.RFDF05.UINT16[H]
#define RSCAN0RFDF05HL RSCAN0.RFDF05.UINT8[HL]
#define RSCAN0RFDF05HH RSCAN0.RFDF05.UINT8[HH]
#define RSCAN0RFDF15 RSCAN0.RFDF15.UINT32
#define RSCAN0RFDF15L RSCAN0.RFDF15.UINT16[L]
#define RSCAN0RFDF15LL RSCAN0.RFDF15.UINT8[LL]
#define RSCAN0RFDF15LH RSCAN0.RFDF15.UINT8[LH]
#define RSCAN0RFDF15H RSCAN0.RFDF15.UINT16[H]
#define RSCAN0RFDF15HL RSCAN0.RFDF15.UINT8[HL]
#define RSCAN0RFDF15HH RSCAN0.RFDF15.UINT8[HH]
#define RSCAN0RFID6 RSCAN0.RFID6.UINT32
#define RSCAN0RFID6L RSCAN0.RFID6.UINT16[L]
#define RSCAN0RFID6LL RSCAN0.RFID6.UINT8[LL]
#define RSCAN0RFID6LH RSCAN0.RFID6.UINT8[LH]
#define RSCAN0RFID6H RSCAN0.RFID6.UINT16[H]
#define RSCAN0RFID6HL RSCAN0.RFID6.UINT8[HL]
#define RSCAN0RFID6HH RSCAN0.RFID6.UINT8[HH]
#define RSCAN0RFPTR6 RSCAN0.RFPTR6.UINT32
#define RSCAN0RFPTR6L RSCAN0.RFPTR6.UINT16[L]
#define RSCAN0RFPTR6LL RSCAN0.RFPTR6.UINT8[LL]
#define RSCAN0RFPTR6LH RSCAN0.RFPTR6.UINT8[LH]
#define RSCAN0RFPTR6H RSCAN0.RFPTR6.UINT16[H]
#define RSCAN0RFPTR6HL RSCAN0.RFPTR6.UINT8[HL]
#define RSCAN0RFPTR6HH RSCAN0.RFPTR6.UINT8[HH]
#define RSCAN0RFDF06 RSCAN0.RFDF06.UINT32
#define RSCAN0RFDF06L RSCAN0.RFDF06.UINT16[L]
#define RSCAN0RFDF06LL RSCAN0.RFDF06.UINT8[LL]
#define RSCAN0RFDF06LH RSCAN0.RFDF06.UINT8[LH]
#define RSCAN0RFDF06H RSCAN0.RFDF06.UINT16[H]
#define RSCAN0RFDF06HL RSCAN0.RFDF06.UINT8[HL]
#define RSCAN0RFDF06HH RSCAN0.RFDF06.UINT8[HH]
#define RSCAN0RFDF16 RSCAN0.RFDF16.UINT32
#define RSCAN0RFDF16L RSCAN0.RFDF16.UINT16[L]
#define RSCAN0RFDF16LL RSCAN0.RFDF16.UINT8[LL]
#define RSCAN0RFDF16LH RSCAN0.RFDF16.UINT8[LH]
#define RSCAN0RFDF16H RSCAN0.RFDF16.UINT16[H]
#define RSCAN0RFDF16HL RSCAN0.RFDF16.UINT8[HL]
#define RSCAN0RFDF16HH RSCAN0.RFDF16.UINT8[HH]
#define RSCAN0RFID7 RSCAN0.RFID7.UINT32
#define RSCAN0RFID7L RSCAN0.RFID7.UINT16[L]
#define RSCAN0RFID7LL RSCAN0.RFID7.UINT8[LL]
#define RSCAN0RFID7LH RSCAN0.RFID7.UINT8[LH]
#define RSCAN0RFID7H RSCAN0.RFID7.UINT16[H]
#define RSCAN0RFID7HL RSCAN0.RFID7.UINT8[HL]
#define RSCAN0RFID7HH RSCAN0.RFID7.UINT8[HH]
#define RSCAN0RFPTR7 RSCAN0.RFPTR7.UINT32
#define RSCAN0RFPTR7L RSCAN0.RFPTR7.UINT16[L]
#define RSCAN0RFPTR7LL RSCAN0.RFPTR7.UINT8[LL]
#define RSCAN0RFPTR7LH RSCAN0.RFPTR7.UINT8[LH]
#define RSCAN0RFPTR7H RSCAN0.RFPTR7.UINT16[H]
#define RSCAN0RFPTR7HL RSCAN0.RFPTR7.UINT8[HL]
#define RSCAN0RFPTR7HH RSCAN0.RFPTR7.UINT8[HH]
#define RSCAN0RFDF07 RSCAN0.RFDF07.UINT32
#define RSCAN0RFDF07L RSCAN0.RFDF07.UINT16[L]
#define RSCAN0RFDF07LL RSCAN0.RFDF07.UINT8[LL]
#define RSCAN0RFDF07LH RSCAN0.RFDF07.UINT8[LH]
#define RSCAN0RFDF07H RSCAN0.RFDF07.UINT16[H]
#define RSCAN0RFDF07HL RSCAN0.RFDF07.UINT8[HL]
#define RSCAN0RFDF07HH RSCAN0.RFDF07.UINT8[HH]
#define RSCAN0RFDF17 RSCAN0.RFDF17.UINT32
#define RSCAN0RFDF17L RSCAN0.RFDF17.UINT16[L]
#define RSCAN0RFDF17LL RSCAN0.RFDF17.UINT8[LL]
#define RSCAN0RFDF17LH RSCAN0.RFDF17.UINT8[LH]
#define RSCAN0RFDF17H RSCAN0.RFDF17.UINT16[H]
#define RSCAN0RFDF17HL RSCAN0.RFDF17.UINT8[HL]
#define RSCAN0RFDF17HH RSCAN0.RFDF17.UINT8[HH]
#define RSCAN0CFID0 RSCAN0.CFID0.UINT32
#define RSCAN0CFID0L RSCAN0.CFID0.UINT16[L]
#define RSCAN0CFID0LL RSCAN0.CFID0.UINT8[LL]
#define RSCAN0CFID0LH RSCAN0.CFID0.UINT8[LH]
#define RSCAN0CFID0H RSCAN0.CFID0.UINT16[H]
#define RSCAN0CFID0HL RSCAN0.CFID0.UINT8[HL]
#define RSCAN0CFID0HH RSCAN0.CFID0.UINT8[HH]
#define RSCAN0CFID RSCAN0.CFID0.BIT.CFID
#define RSCAN0THLEN RSCAN0.CFID0.BIT.THLEN
#define RSCAN0CFRTR RSCAN0.CFID0.BIT.CFRTR
#define RSCAN0CFIDE RSCAN0.CFID0.BIT.CFIDE
#define RSCAN0CFPTR0 RSCAN0.CFPTR0.UINT32
#define RSCAN0CFPTR0L RSCAN0.CFPTR0.UINT16[L]
#define RSCAN0CFPTR0LL RSCAN0.CFPTR0.UINT8[LL]
#define RSCAN0CFPTR0LH RSCAN0.CFPTR0.UINT8[LH]
#define RSCAN0CFPTR0H RSCAN0.CFPTR0.UINT16[H]
#define RSCAN0CFPTR0HL RSCAN0.CFPTR0.UINT8[HL]
#define RSCAN0CFPTR0HH RSCAN0.CFPTR0.UINT8[HH]
#define RSCAN0CFTS RSCAN0.CFPTR0.BIT.CFTS
#define RSCAN0CFPTR RSCAN0.CFPTR0.BIT.CFPTR
#define RSCAN0CFDLC RSCAN0.CFPTR0.BIT.CFDLC
#define RSCAN0CFDF00 RSCAN0.CFDF00.UINT32
#define RSCAN0CFDF00L RSCAN0.CFDF00.UINT16[L]
#define RSCAN0CFDF00LL RSCAN0.CFDF00.UINT8[LL]
#define RSCAN0CFDF00LH RSCAN0.CFDF00.UINT8[LH]
#define RSCAN0CFDF00H RSCAN0.CFDF00.UINT16[H]
#define RSCAN0CFDF00HL RSCAN0.CFDF00.UINT8[HL]
#define RSCAN0CFDF00HH RSCAN0.CFDF00.UINT8[HH]
#define RSCAN0CFDB0 RSCAN0.CFDF00.BIT.CFDB0
#define RSCAN0CFDB1 RSCAN0.CFDF00.BIT.CFDB1
#define RSCAN0CFDB2 RSCAN0.CFDF00.BIT.CFDB2
#define RSCAN0CFDB3 RSCAN0.CFDF00.BIT.CFDB3
#define RSCAN0CFDF10 RSCAN0.CFDF10.UINT32
#define RSCAN0CFDF10L RSCAN0.CFDF10.UINT16[L]
#define RSCAN0CFDF10LL RSCAN0.CFDF10.UINT8[LL]
#define RSCAN0CFDF10LH RSCAN0.CFDF10.UINT8[LH]
#define RSCAN0CFDF10H RSCAN0.CFDF10.UINT16[H]
#define RSCAN0CFDF10HL RSCAN0.CFDF10.UINT8[HL]
#define RSCAN0CFDF10HH RSCAN0.CFDF10.UINT8[HH]
#define RSCAN0CFDB4 RSCAN0.CFDF10.BIT.CFDB4
#define RSCAN0CFDB5 RSCAN0.CFDF10.BIT.CFDB5
#define RSCAN0CFDB6 RSCAN0.CFDF10.BIT.CFDB6
#define RSCAN0CFDB7 RSCAN0.CFDF10.BIT.CFDB7
#define RSCAN0CFID1 RSCAN0.CFID1.UINT32
#define RSCAN0CFID1L RSCAN0.CFID1.UINT16[L]
#define RSCAN0CFID1LL RSCAN0.CFID1.UINT8[LL]
#define RSCAN0CFID1LH RSCAN0.CFID1.UINT8[LH]
#define RSCAN0CFID1H RSCAN0.CFID1.UINT16[H]
#define RSCAN0CFID1HL RSCAN0.CFID1.UINT8[HL]
#define RSCAN0CFID1HH RSCAN0.CFID1.UINT8[HH]
#define RSCAN0CFPTR1 RSCAN0.CFPTR1.UINT32
#define RSCAN0CFPTR1L RSCAN0.CFPTR1.UINT16[L]
#define RSCAN0CFPTR1LL RSCAN0.CFPTR1.UINT8[LL]
#define RSCAN0CFPTR1LH RSCAN0.CFPTR1.UINT8[LH]
#define RSCAN0CFPTR1H RSCAN0.CFPTR1.UINT16[H]
#define RSCAN0CFPTR1HL RSCAN0.CFPTR1.UINT8[HL]
#define RSCAN0CFPTR1HH RSCAN0.CFPTR1.UINT8[HH]
#define RSCAN0CFDF01 RSCAN0.CFDF01.UINT32
#define RSCAN0CFDF01L RSCAN0.CFDF01.UINT16[L]
#define RSCAN0CFDF01LL RSCAN0.CFDF01.UINT8[LL]
#define RSCAN0CFDF01LH RSCAN0.CFDF01.UINT8[LH]
#define RSCAN0CFDF01H RSCAN0.CFDF01.UINT16[H]
#define RSCAN0CFDF01HL RSCAN0.CFDF01.UINT8[HL]
#define RSCAN0CFDF01HH RSCAN0.CFDF01.UINT8[HH]
#define RSCAN0CFDF11 RSCAN0.CFDF11.UINT32
#define RSCAN0CFDF11L RSCAN0.CFDF11.UINT16[L]
#define RSCAN0CFDF11LL RSCAN0.CFDF11.UINT8[LL]
#define RSCAN0CFDF11LH RSCAN0.CFDF11.UINT8[LH]
#define RSCAN0CFDF11H RSCAN0.CFDF11.UINT16[H]
#define RSCAN0CFDF11HL RSCAN0.CFDF11.UINT8[HL]
#define RSCAN0CFDF11HH RSCAN0.CFDF11.UINT8[HH]
#define RSCAN0CFID2 RSCAN0.CFID2.UINT32
#define RSCAN0CFID2L RSCAN0.CFID2.UINT16[L]
#define RSCAN0CFID2LL RSCAN0.CFID2.UINT8[LL]
#define RSCAN0CFID2LH RSCAN0.CFID2.UINT8[LH]
#define RSCAN0CFID2H RSCAN0.CFID2.UINT16[H]
#define RSCAN0CFID2HL RSCAN0.CFID2.UINT8[HL]
#define RSCAN0CFID2HH RSCAN0.CFID2.UINT8[HH]
#define RSCAN0CFPTR2 RSCAN0.CFPTR2.UINT32
#define RSCAN0CFPTR2L RSCAN0.CFPTR2.UINT16[L]
#define RSCAN0CFPTR2LL RSCAN0.CFPTR2.UINT8[LL]
#define RSCAN0CFPTR2LH RSCAN0.CFPTR2.UINT8[LH]
#define RSCAN0CFPTR2H RSCAN0.CFPTR2.UINT16[H]
#define RSCAN0CFPTR2HL RSCAN0.CFPTR2.UINT8[HL]
#define RSCAN0CFPTR2HH RSCAN0.CFPTR2.UINT8[HH]
#define RSCAN0CFDF02 RSCAN0.CFDF02.UINT32
#define RSCAN0CFDF02L RSCAN0.CFDF02.UINT16[L]
#define RSCAN0CFDF02LL RSCAN0.CFDF02.UINT8[LL]
#define RSCAN0CFDF02LH RSCAN0.CFDF02.UINT8[LH]
#define RSCAN0CFDF02H RSCAN0.CFDF02.UINT16[H]
#define RSCAN0CFDF02HL RSCAN0.CFDF02.UINT8[HL]
#define RSCAN0CFDF02HH RSCAN0.CFDF02.UINT8[HH]
#define RSCAN0CFDF12 RSCAN0.CFDF12.UINT32
#define RSCAN0CFDF12L RSCAN0.CFDF12.UINT16[L]
#define RSCAN0CFDF12LL RSCAN0.CFDF12.UINT8[LL]
#define RSCAN0CFDF12LH RSCAN0.CFDF12.UINT8[LH]
#define RSCAN0CFDF12H RSCAN0.CFDF12.UINT16[H]
#define RSCAN0CFDF12HL RSCAN0.CFDF12.UINT8[HL]
#define RSCAN0CFDF12HH RSCAN0.CFDF12.UINT8[HH]
#define RSCAN0CFID3 RSCAN0.CFID3.UINT32
#define RSCAN0CFID3L RSCAN0.CFID3.UINT16[L]
#define RSCAN0CFID3LL RSCAN0.CFID3.UINT8[LL]
#define RSCAN0CFID3LH RSCAN0.CFID3.UINT8[LH]
#define RSCAN0CFID3H RSCAN0.CFID3.UINT16[H]
#define RSCAN0CFID3HL RSCAN0.CFID3.UINT8[HL]
#define RSCAN0CFID3HH RSCAN0.CFID3.UINT8[HH]
#define RSCAN0CFPTR3 RSCAN0.CFPTR3.UINT32
#define RSCAN0CFPTR3L RSCAN0.CFPTR3.UINT16[L]
#define RSCAN0CFPTR3LL RSCAN0.CFPTR3.UINT8[LL]
#define RSCAN0CFPTR3LH RSCAN0.CFPTR3.UINT8[LH]
#define RSCAN0CFPTR3H RSCAN0.CFPTR3.UINT16[H]
#define RSCAN0CFPTR3HL RSCAN0.CFPTR3.UINT8[HL]
#define RSCAN0CFPTR3HH RSCAN0.CFPTR3.UINT8[HH]
#define RSCAN0CFDF03 RSCAN0.CFDF03.UINT32
#define RSCAN0CFDF03L RSCAN0.CFDF03.UINT16[L]
#define RSCAN0CFDF03LL RSCAN0.CFDF03.UINT8[LL]
#define RSCAN0CFDF03LH RSCAN0.CFDF03.UINT8[LH]
#define RSCAN0CFDF03H RSCAN0.CFDF03.UINT16[H]
#define RSCAN0CFDF03HL RSCAN0.CFDF03.UINT8[HL]
#define RSCAN0CFDF03HH RSCAN0.CFDF03.UINT8[HH]
#define RSCAN0CFDF13 RSCAN0.CFDF13.UINT32
#define RSCAN0CFDF13L RSCAN0.CFDF13.UINT16[L]
#define RSCAN0CFDF13LL RSCAN0.CFDF13.UINT8[LL]
#define RSCAN0CFDF13LH RSCAN0.CFDF13.UINT8[LH]
#define RSCAN0CFDF13H RSCAN0.CFDF13.UINT16[H]
#define RSCAN0CFDF13HL RSCAN0.CFDF13.UINT8[HL]
#define RSCAN0CFDF13HH RSCAN0.CFDF13.UINT8[HH]
#define RSCAN0CFID4 RSCAN0.CFID4.UINT32
#define RSCAN0CFID4L RSCAN0.CFID4.UINT16[L]
#define RSCAN0CFID4LL RSCAN0.CFID4.UINT8[LL]
#define RSCAN0CFID4LH RSCAN0.CFID4.UINT8[LH]
#define RSCAN0CFID4H RSCAN0.CFID4.UINT16[H]
#define RSCAN0CFID4HL RSCAN0.CFID4.UINT8[HL]
#define RSCAN0CFID4HH RSCAN0.CFID4.UINT8[HH]
#define RSCAN0CFPTR4 RSCAN0.CFPTR4.UINT32
#define RSCAN0CFPTR4L RSCAN0.CFPTR4.UINT16[L]
#define RSCAN0CFPTR4LL RSCAN0.CFPTR4.UINT8[LL]
#define RSCAN0CFPTR4LH RSCAN0.CFPTR4.UINT8[LH]
#define RSCAN0CFPTR4H RSCAN0.CFPTR4.UINT16[H]
#define RSCAN0CFPTR4HL RSCAN0.CFPTR4.UINT8[HL]
#define RSCAN0CFPTR4HH RSCAN0.CFPTR4.UINT8[HH]
#define RSCAN0CFDF04 RSCAN0.CFDF04.UINT32
#define RSCAN0CFDF04L RSCAN0.CFDF04.UINT16[L]
#define RSCAN0CFDF04LL RSCAN0.CFDF04.UINT8[LL]
#define RSCAN0CFDF04LH RSCAN0.CFDF04.UINT8[LH]
#define RSCAN0CFDF04H RSCAN0.CFDF04.UINT16[H]
#define RSCAN0CFDF04HL RSCAN0.CFDF04.UINT8[HL]
#define RSCAN0CFDF04HH RSCAN0.CFDF04.UINT8[HH]
#define RSCAN0CFDF14 RSCAN0.CFDF14.UINT32
#define RSCAN0CFDF14L RSCAN0.CFDF14.UINT16[L]
#define RSCAN0CFDF14LL RSCAN0.CFDF14.UINT8[LL]
#define RSCAN0CFDF14LH RSCAN0.CFDF14.UINT8[LH]
#define RSCAN0CFDF14H RSCAN0.CFDF14.UINT16[H]
#define RSCAN0CFDF14HL RSCAN0.CFDF14.UINT8[HL]
#define RSCAN0CFDF14HH RSCAN0.CFDF14.UINT8[HH]
#define RSCAN0CFID5 RSCAN0.CFID5.UINT32
#define RSCAN0CFID5L RSCAN0.CFID5.UINT16[L]
#define RSCAN0CFID5LL RSCAN0.CFID5.UINT8[LL]
#define RSCAN0CFID5LH RSCAN0.CFID5.UINT8[LH]
#define RSCAN0CFID5H RSCAN0.CFID5.UINT16[H]
#define RSCAN0CFID5HL RSCAN0.CFID5.UINT8[HL]
#define RSCAN0CFID5HH RSCAN0.CFID5.UINT8[HH]
#define RSCAN0CFPTR5 RSCAN0.CFPTR5.UINT32
#define RSCAN0CFPTR5L RSCAN0.CFPTR5.UINT16[L]
#define RSCAN0CFPTR5LL RSCAN0.CFPTR5.UINT8[LL]
#define RSCAN0CFPTR5LH RSCAN0.CFPTR5.UINT8[LH]
#define RSCAN0CFPTR5H RSCAN0.CFPTR5.UINT16[H]
#define RSCAN0CFPTR5HL RSCAN0.CFPTR5.UINT8[HL]
#define RSCAN0CFPTR5HH RSCAN0.CFPTR5.UINT8[HH]
#define RSCAN0CFDF05 RSCAN0.CFDF05.UINT32
#define RSCAN0CFDF05L RSCAN0.CFDF05.UINT16[L]
#define RSCAN0CFDF05LL RSCAN0.CFDF05.UINT8[LL]
#define RSCAN0CFDF05LH RSCAN0.CFDF05.UINT8[LH]
#define RSCAN0CFDF05H RSCAN0.CFDF05.UINT16[H]
#define RSCAN0CFDF05HL RSCAN0.CFDF05.UINT8[HL]
#define RSCAN0CFDF05HH RSCAN0.CFDF05.UINT8[HH]
#define RSCAN0CFDF15 RSCAN0.CFDF15.UINT32
#define RSCAN0CFDF15L RSCAN0.CFDF15.UINT16[L]
#define RSCAN0CFDF15LL RSCAN0.CFDF15.UINT8[LL]
#define RSCAN0CFDF15LH RSCAN0.CFDF15.UINT8[LH]
#define RSCAN0CFDF15H RSCAN0.CFDF15.UINT16[H]
#define RSCAN0CFDF15HL RSCAN0.CFDF15.UINT8[HL]
#define RSCAN0CFDF15HH RSCAN0.CFDF15.UINT8[HH]
#define RSCAN0TMID0 RSCAN0.TMID0.UINT32
#define RSCAN0TMID0L RSCAN0.TMID0.UINT16[L]
#define RSCAN0TMID0LL RSCAN0.TMID0.UINT8[LL]
#define RSCAN0TMID0LH RSCAN0.TMID0.UINT8[LH]
#define RSCAN0TMID0H RSCAN0.TMID0.UINT16[H]
#define RSCAN0TMID0HL RSCAN0.TMID0.UINT8[HL]
#define RSCAN0TMID0HH RSCAN0.TMID0.UINT8[HH]
#define RSCAN0TMID RSCAN0.TMID0.BIT.TMID
#define RSCAN0TMRTR RSCAN0.TMID0.BIT.TMRTR
#define RSCAN0TMIDE RSCAN0.TMID0.BIT.TMIDE
#define RSCAN0TMPTR0 RSCAN0.TMPTR0.UINT32
#define RSCAN0TMPTR0L RSCAN0.TMPTR0.UINT16[L]
#define RSCAN0TMPTR0LL RSCAN0.TMPTR0.UINT8[LL]
#define RSCAN0TMPTR0LH RSCAN0.TMPTR0.UINT8[LH]
#define RSCAN0TMPTR0H RSCAN0.TMPTR0.UINT16[H]
#define RSCAN0TMPTR0HL RSCAN0.TMPTR0.UINT8[HL]
#define RSCAN0TMPTR0HH RSCAN0.TMPTR0.UINT8[HH]
#define RSCAN0TMPTR RSCAN0.TMPTR0.BIT.TMPTR
#define RSCAN0TMDLC RSCAN0.TMPTR0.BIT.TMDLC
#define RSCAN0TMDF00 RSCAN0.TMDF00.UINT32
#define RSCAN0TMDF00L RSCAN0.TMDF00.UINT16[L]
#define RSCAN0TMDF00LL RSCAN0.TMDF00.UINT8[LL]
#define RSCAN0TMDF00LH RSCAN0.TMDF00.UINT8[LH]
#define RSCAN0TMDF00H RSCAN0.TMDF00.UINT16[H]
#define RSCAN0TMDF00HL RSCAN0.TMDF00.UINT8[HL]
#define RSCAN0TMDF00HH RSCAN0.TMDF00.UINT8[HH]
#define RSCAN0TMDB0 RSCAN0.TMDF00.BIT.TMDB0
#define RSCAN0TMDB1 RSCAN0.TMDF00.BIT.TMDB1
#define RSCAN0TMDB2 RSCAN0.TMDF00.BIT.TMDB2
#define RSCAN0TMDB3 RSCAN0.TMDF00.BIT.TMDB3
#define RSCAN0TMDF10 RSCAN0.TMDF10.UINT32
#define RSCAN0TMDF10L RSCAN0.TMDF10.UINT16[L]
#define RSCAN0TMDF10LL RSCAN0.TMDF10.UINT8[LL]
#define RSCAN0TMDF10LH RSCAN0.TMDF10.UINT8[LH]
#define RSCAN0TMDF10H RSCAN0.TMDF10.UINT16[H]
#define RSCAN0TMDF10HL RSCAN0.TMDF10.UINT8[HL]
#define RSCAN0TMDF10HH RSCAN0.TMDF10.UINT8[HH]
#define RSCAN0TMDB4 RSCAN0.TMDF10.BIT.TMDB4
#define RSCAN0TMDB5 RSCAN0.TMDF10.BIT.TMDB5
#define RSCAN0TMDB6 RSCAN0.TMDF10.BIT.TMDB6
#define RSCAN0TMDB7 RSCAN0.TMDF10.BIT.TMDB7
#define RSCAN0TMID1 RSCAN0.TMID1.UINT32
#define RSCAN0TMID1L RSCAN0.TMID1.UINT16[L]
#define RSCAN0TMID1LL RSCAN0.TMID1.UINT8[LL]
#define RSCAN0TMID1LH RSCAN0.TMID1.UINT8[LH]
#define RSCAN0TMID1H RSCAN0.TMID1.UINT16[H]
#define RSCAN0TMID1HL RSCAN0.TMID1.UINT8[HL]
#define RSCAN0TMID1HH RSCAN0.TMID1.UINT8[HH]
#define RSCAN0TMPTR1 RSCAN0.TMPTR1.UINT32
#define RSCAN0TMPTR1L RSCAN0.TMPTR1.UINT16[L]
#define RSCAN0TMPTR1LL RSCAN0.TMPTR1.UINT8[LL]
#define RSCAN0TMPTR1LH RSCAN0.TMPTR1.UINT8[LH]
#define RSCAN0TMPTR1H RSCAN0.TMPTR1.UINT16[H]
#define RSCAN0TMPTR1HL RSCAN0.TMPTR1.UINT8[HL]
#define RSCAN0TMPTR1HH RSCAN0.TMPTR1.UINT8[HH]
#define RSCAN0TMDF01 RSCAN0.TMDF01.UINT32
#define RSCAN0TMDF01L RSCAN0.TMDF01.UINT16[L]
#define RSCAN0TMDF01LL RSCAN0.TMDF01.UINT8[LL]
#define RSCAN0TMDF01LH RSCAN0.TMDF01.UINT8[LH]
#define RSCAN0TMDF01H RSCAN0.TMDF01.UINT16[H]
#define RSCAN0TMDF01HL RSCAN0.TMDF01.UINT8[HL]
#define RSCAN0TMDF01HH RSCAN0.TMDF01.UINT8[HH]
#define RSCAN0TMDF11 RSCAN0.TMDF11.UINT32
#define RSCAN0TMDF11L RSCAN0.TMDF11.UINT16[L]
#define RSCAN0TMDF11LL RSCAN0.TMDF11.UINT8[LL]
#define RSCAN0TMDF11LH RSCAN0.TMDF11.UINT8[LH]
#define RSCAN0TMDF11H RSCAN0.TMDF11.UINT16[H]
#define RSCAN0TMDF11HL RSCAN0.TMDF11.UINT8[HL]
#define RSCAN0TMDF11HH RSCAN0.TMDF11.UINT8[HH]
#define RSCAN0TMID2 RSCAN0.TMID2.UINT32
#define RSCAN0TMID2L RSCAN0.TMID2.UINT16[L]
#define RSCAN0TMID2LL RSCAN0.TMID2.UINT8[LL]
#define RSCAN0TMID2LH RSCAN0.TMID2.UINT8[LH]
#define RSCAN0TMID2H RSCAN0.TMID2.UINT16[H]
#define RSCAN0TMID2HL RSCAN0.TMID2.UINT8[HL]
#define RSCAN0TMID2HH RSCAN0.TMID2.UINT8[HH]
#define RSCAN0TMPTR2 RSCAN0.TMPTR2.UINT32
#define RSCAN0TMPTR2L RSCAN0.TMPTR2.UINT16[L]
#define RSCAN0TMPTR2LL RSCAN0.TMPTR2.UINT8[LL]
#define RSCAN0TMPTR2LH RSCAN0.TMPTR2.UINT8[LH]
#define RSCAN0TMPTR2H RSCAN0.TMPTR2.UINT16[H]
#define RSCAN0TMPTR2HL RSCAN0.TMPTR2.UINT8[HL]
#define RSCAN0TMPTR2HH RSCAN0.TMPTR2.UINT8[HH]
#define RSCAN0TMDF02 RSCAN0.TMDF02.UINT32
#define RSCAN0TMDF02L RSCAN0.TMDF02.UINT16[L]
#define RSCAN0TMDF02LL RSCAN0.TMDF02.UINT8[LL]
#define RSCAN0TMDF02LH RSCAN0.TMDF02.UINT8[LH]
#define RSCAN0TMDF02H RSCAN0.TMDF02.UINT16[H]
#define RSCAN0TMDF02HL RSCAN0.TMDF02.UINT8[HL]
#define RSCAN0TMDF02HH RSCAN0.TMDF02.UINT8[HH]
#define RSCAN0TMDF12 RSCAN0.TMDF12.UINT32
#define RSCAN0TMDF12L RSCAN0.TMDF12.UINT16[L]
#define RSCAN0TMDF12LL RSCAN0.TMDF12.UINT8[LL]
#define RSCAN0TMDF12LH RSCAN0.TMDF12.UINT8[LH]
#define RSCAN0TMDF12H RSCAN0.TMDF12.UINT16[H]
#define RSCAN0TMDF12HL RSCAN0.TMDF12.UINT8[HL]
#define RSCAN0TMDF12HH RSCAN0.TMDF12.UINT8[HH]
#define RSCAN0TMID3 RSCAN0.TMID3.UINT32
#define RSCAN0TMID3L RSCAN0.TMID3.UINT16[L]
#define RSCAN0TMID3LL RSCAN0.TMID3.UINT8[LL]
#define RSCAN0TMID3LH RSCAN0.TMID3.UINT8[LH]
#define RSCAN0TMID3H RSCAN0.TMID3.UINT16[H]
#define RSCAN0TMID3HL RSCAN0.TMID3.UINT8[HL]
#define RSCAN0TMID3HH RSCAN0.TMID3.UINT8[HH]
#define RSCAN0TMPTR3 RSCAN0.TMPTR3.UINT32
#define RSCAN0TMPTR3L RSCAN0.TMPTR3.UINT16[L]
#define RSCAN0TMPTR3LL RSCAN0.TMPTR3.UINT8[LL]
#define RSCAN0TMPTR3LH RSCAN0.TMPTR3.UINT8[LH]
#define RSCAN0TMPTR3H RSCAN0.TMPTR3.UINT16[H]
#define RSCAN0TMPTR3HL RSCAN0.TMPTR3.UINT8[HL]
#define RSCAN0TMPTR3HH RSCAN0.TMPTR3.UINT8[HH]
#define RSCAN0TMDF03 RSCAN0.TMDF03.UINT32
#define RSCAN0TMDF03L RSCAN0.TMDF03.UINT16[L]
#define RSCAN0TMDF03LL RSCAN0.TMDF03.UINT8[LL]
#define RSCAN0TMDF03LH RSCAN0.TMDF03.UINT8[LH]
#define RSCAN0TMDF03H RSCAN0.TMDF03.UINT16[H]
#define RSCAN0TMDF03HL RSCAN0.TMDF03.UINT8[HL]
#define RSCAN0TMDF03HH RSCAN0.TMDF03.UINT8[HH]
#define RSCAN0TMDF13 RSCAN0.TMDF13.UINT32
#define RSCAN0TMDF13L RSCAN0.TMDF13.UINT16[L]
#define RSCAN0TMDF13LL RSCAN0.TMDF13.UINT8[LL]
#define RSCAN0TMDF13LH RSCAN0.TMDF13.UINT8[LH]
#define RSCAN0TMDF13H RSCAN0.TMDF13.UINT16[H]
#define RSCAN0TMDF13HL RSCAN0.TMDF13.UINT8[HL]
#define RSCAN0TMDF13HH RSCAN0.TMDF13.UINT8[HH]
#define RSCAN0TMID4 RSCAN0.TMID4.UINT32
#define RSCAN0TMID4L RSCAN0.TMID4.UINT16[L]
#define RSCAN0TMID4LL RSCAN0.TMID4.UINT8[LL]
#define RSCAN0TMID4LH RSCAN0.TMID4.UINT8[LH]
#define RSCAN0TMID4H RSCAN0.TMID4.UINT16[H]
#define RSCAN0TMID4HL RSCAN0.TMID4.UINT8[HL]
#define RSCAN0TMID4HH RSCAN0.TMID4.UINT8[HH]
#define RSCAN0TMPTR4 RSCAN0.TMPTR4.UINT32
#define RSCAN0TMPTR4L RSCAN0.TMPTR4.UINT16[L]
#define RSCAN0TMPTR4LL RSCAN0.TMPTR4.UINT8[LL]
#define RSCAN0TMPTR4LH RSCAN0.TMPTR4.UINT8[LH]
#define RSCAN0TMPTR4H RSCAN0.TMPTR4.UINT16[H]
#define RSCAN0TMPTR4HL RSCAN0.TMPTR4.UINT8[HL]
#define RSCAN0TMPTR4HH RSCAN0.TMPTR4.UINT8[HH]
#define RSCAN0TMDF04 RSCAN0.TMDF04.UINT32
#define RSCAN0TMDF04L RSCAN0.TMDF04.UINT16[L]
#define RSCAN0TMDF04LL RSCAN0.TMDF04.UINT8[LL]
#define RSCAN0TMDF04LH RSCAN0.TMDF04.UINT8[LH]
#define RSCAN0TMDF04H RSCAN0.TMDF04.UINT16[H]
#define RSCAN0TMDF04HL RSCAN0.TMDF04.UINT8[HL]
#define RSCAN0TMDF04HH RSCAN0.TMDF04.UINT8[HH]
#define RSCAN0TMDF14 RSCAN0.TMDF14.UINT32
#define RSCAN0TMDF14L RSCAN0.TMDF14.UINT16[L]
#define RSCAN0TMDF14LL RSCAN0.TMDF14.UINT8[LL]
#define RSCAN0TMDF14LH RSCAN0.TMDF14.UINT8[LH]
#define RSCAN0TMDF14H RSCAN0.TMDF14.UINT16[H]
#define RSCAN0TMDF14HL RSCAN0.TMDF14.UINT8[HL]
#define RSCAN0TMDF14HH RSCAN0.TMDF14.UINT8[HH]
#define RSCAN0TMID5 RSCAN0.TMID5.UINT32
#define RSCAN0TMID5L RSCAN0.TMID5.UINT16[L]
#define RSCAN0TMID5LL RSCAN0.TMID5.UINT8[LL]
#define RSCAN0TMID5LH RSCAN0.TMID5.UINT8[LH]
#define RSCAN0TMID5H RSCAN0.TMID5.UINT16[H]
#define RSCAN0TMID5HL RSCAN0.TMID5.UINT8[HL]
#define RSCAN0TMID5HH RSCAN0.TMID5.UINT8[HH]
#define RSCAN0TMPTR5 RSCAN0.TMPTR5.UINT32
#define RSCAN0TMPTR5L RSCAN0.TMPTR5.UINT16[L]
#define RSCAN0TMPTR5LL RSCAN0.TMPTR5.UINT8[LL]
#define RSCAN0TMPTR5LH RSCAN0.TMPTR5.UINT8[LH]
#define RSCAN0TMPTR5H RSCAN0.TMPTR5.UINT16[H]
#define RSCAN0TMPTR5HL RSCAN0.TMPTR5.UINT8[HL]
#define RSCAN0TMPTR5HH RSCAN0.TMPTR5.UINT8[HH]
#define RSCAN0TMDF05 RSCAN0.TMDF05.UINT32
#define RSCAN0TMDF05L RSCAN0.TMDF05.UINT16[L]
#define RSCAN0TMDF05LL RSCAN0.TMDF05.UINT8[LL]
#define RSCAN0TMDF05LH RSCAN0.TMDF05.UINT8[LH]
#define RSCAN0TMDF05H RSCAN0.TMDF05.UINT16[H]
#define RSCAN0TMDF05HL RSCAN0.TMDF05.UINT8[HL]
#define RSCAN0TMDF05HH RSCAN0.TMDF05.UINT8[HH]
#define RSCAN0TMDF15 RSCAN0.TMDF15.UINT32
#define RSCAN0TMDF15L RSCAN0.TMDF15.UINT16[L]
#define RSCAN0TMDF15LL RSCAN0.TMDF15.UINT8[LL]
#define RSCAN0TMDF15LH RSCAN0.TMDF15.UINT8[LH]
#define RSCAN0TMDF15H RSCAN0.TMDF15.UINT16[H]
#define RSCAN0TMDF15HL RSCAN0.TMDF15.UINT8[HL]
#define RSCAN0TMDF15HH RSCAN0.TMDF15.UINT8[HH]
#define RSCAN0TMID6 RSCAN0.TMID6.UINT32
#define RSCAN0TMID6L RSCAN0.TMID6.UINT16[L]
#define RSCAN0TMID6LL RSCAN0.TMID6.UINT8[LL]
#define RSCAN0TMID6LH RSCAN0.TMID6.UINT8[LH]
#define RSCAN0TMID6H RSCAN0.TMID6.UINT16[H]
#define RSCAN0TMID6HL RSCAN0.TMID6.UINT8[HL]
#define RSCAN0TMID6HH RSCAN0.TMID6.UINT8[HH]
#define RSCAN0TMPTR6 RSCAN0.TMPTR6.UINT32
#define RSCAN0TMPTR6L RSCAN0.TMPTR6.UINT16[L]
#define RSCAN0TMPTR6LL RSCAN0.TMPTR6.UINT8[LL]
#define RSCAN0TMPTR6LH RSCAN0.TMPTR6.UINT8[LH]
#define RSCAN0TMPTR6H RSCAN0.TMPTR6.UINT16[H]
#define RSCAN0TMPTR6HL RSCAN0.TMPTR6.UINT8[HL]
#define RSCAN0TMPTR6HH RSCAN0.TMPTR6.UINT8[HH]
#define RSCAN0TMDF06 RSCAN0.TMDF06.UINT32
#define RSCAN0TMDF06L RSCAN0.TMDF06.UINT16[L]
#define RSCAN0TMDF06LL RSCAN0.TMDF06.UINT8[LL]
#define RSCAN0TMDF06LH RSCAN0.TMDF06.UINT8[LH]
#define RSCAN0TMDF06H RSCAN0.TMDF06.UINT16[H]
#define RSCAN0TMDF06HL RSCAN0.TMDF06.UINT8[HL]
#define RSCAN0TMDF06HH RSCAN0.TMDF06.UINT8[HH]
#define RSCAN0TMDF16 RSCAN0.TMDF16.UINT32
#define RSCAN0TMDF16L RSCAN0.TMDF16.UINT16[L]
#define RSCAN0TMDF16LL RSCAN0.TMDF16.UINT8[LL]
#define RSCAN0TMDF16LH RSCAN0.TMDF16.UINT8[LH]
#define RSCAN0TMDF16H RSCAN0.TMDF16.UINT16[H]
#define RSCAN0TMDF16HL RSCAN0.TMDF16.UINT8[HL]
#define RSCAN0TMDF16HH RSCAN0.TMDF16.UINT8[HH]
#define RSCAN0TMID7 RSCAN0.TMID7.UINT32
#define RSCAN0TMID7L RSCAN0.TMID7.UINT16[L]
#define RSCAN0TMID7LL RSCAN0.TMID7.UINT8[LL]
#define RSCAN0TMID7LH RSCAN0.TMID7.UINT8[LH]
#define RSCAN0TMID7H RSCAN0.TMID7.UINT16[H]
#define RSCAN0TMID7HL RSCAN0.TMID7.UINT8[HL]
#define RSCAN0TMID7HH RSCAN0.TMID7.UINT8[HH]
#define RSCAN0TMPTR7 RSCAN0.TMPTR7.UINT32
#define RSCAN0TMPTR7L RSCAN0.TMPTR7.UINT16[L]
#define RSCAN0TMPTR7LL RSCAN0.TMPTR7.UINT8[LL]
#define RSCAN0TMPTR7LH RSCAN0.TMPTR7.UINT8[LH]
#define RSCAN0TMPTR7H RSCAN0.TMPTR7.UINT16[H]
#define RSCAN0TMPTR7HL RSCAN0.TMPTR7.UINT8[HL]
#define RSCAN0TMPTR7HH RSCAN0.TMPTR7.UINT8[HH]
#define RSCAN0TMDF07 RSCAN0.TMDF07.UINT32
#define RSCAN0TMDF07L RSCAN0.TMDF07.UINT16[L]
#define RSCAN0TMDF07LL RSCAN0.TMDF07.UINT8[LL]
#define RSCAN0TMDF07LH RSCAN0.TMDF07.UINT8[LH]
#define RSCAN0TMDF07H RSCAN0.TMDF07.UINT16[H]
#define RSCAN0TMDF07HL RSCAN0.TMDF07.UINT8[HL]
#define RSCAN0TMDF07HH RSCAN0.TMDF07.UINT8[HH]
#define RSCAN0TMDF17 RSCAN0.TMDF17.UINT32
#define RSCAN0TMDF17L RSCAN0.TMDF17.UINT16[L]
#define RSCAN0TMDF17LL RSCAN0.TMDF17.UINT8[LL]
#define RSCAN0TMDF17LH RSCAN0.TMDF17.UINT8[LH]
#define RSCAN0TMDF17H RSCAN0.TMDF17.UINT16[H]
#define RSCAN0TMDF17HL RSCAN0.TMDF17.UINT8[HL]
#define RSCAN0TMDF17HH RSCAN0.TMDF17.UINT8[HH]
#define RSCAN0TMID8 RSCAN0.TMID8.UINT32
#define RSCAN0TMID8L RSCAN0.TMID8.UINT16[L]
#define RSCAN0TMID8LL RSCAN0.TMID8.UINT8[LL]
#define RSCAN0TMID8LH RSCAN0.TMID8.UINT8[LH]
#define RSCAN0TMID8H RSCAN0.TMID8.UINT16[H]
#define RSCAN0TMID8HL RSCAN0.TMID8.UINT8[HL]
#define RSCAN0TMID8HH RSCAN0.TMID8.UINT8[HH]
#define RSCAN0TMPTR8 RSCAN0.TMPTR8.UINT32
#define RSCAN0TMPTR8L RSCAN0.TMPTR8.UINT16[L]
#define RSCAN0TMPTR8LL RSCAN0.TMPTR8.UINT8[LL]
#define RSCAN0TMPTR8LH RSCAN0.TMPTR8.UINT8[LH]
#define RSCAN0TMPTR8H RSCAN0.TMPTR8.UINT16[H]
#define RSCAN0TMPTR8HL RSCAN0.TMPTR8.UINT8[HL]
#define RSCAN0TMPTR8HH RSCAN0.TMPTR8.UINT8[HH]
#define RSCAN0TMDF08 RSCAN0.TMDF08.UINT32
#define RSCAN0TMDF08L RSCAN0.TMDF08.UINT16[L]
#define RSCAN0TMDF08LL RSCAN0.TMDF08.UINT8[LL]
#define RSCAN0TMDF08LH RSCAN0.TMDF08.UINT8[LH]
#define RSCAN0TMDF08H RSCAN0.TMDF08.UINT16[H]
#define RSCAN0TMDF08HL RSCAN0.TMDF08.UINT8[HL]
#define RSCAN0TMDF08HH RSCAN0.TMDF08.UINT8[HH]
#define RSCAN0TMDF18 RSCAN0.TMDF18.UINT32
#define RSCAN0TMDF18L RSCAN0.TMDF18.UINT16[L]
#define RSCAN0TMDF18LL RSCAN0.TMDF18.UINT8[LL]
#define RSCAN0TMDF18LH RSCAN0.TMDF18.UINT8[LH]
#define RSCAN0TMDF18H RSCAN0.TMDF18.UINT16[H]
#define RSCAN0TMDF18HL RSCAN0.TMDF18.UINT8[HL]
#define RSCAN0TMDF18HH RSCAN0.TMDF18.UINT8[HH]
#define RSCAN0TMID9 RSCAN0.TMID9.UINT32
#define RSCAN0TMID9L RSCAN0.TMID9.UINT16[L]
#define RSCAN0TMID9LL RSCAN0.TMID9.UINT8[LL]
#define RSCAN0TMID9LH RSCAN0.TMID9.UINT8[LH]
#define RSCAN0TMID9H RSCAN0.TMID9.UINT16[H]
#define RSCAN0TMID9HL RSCAN0.TMID9.UINT8[HL]
#define RSCAN0TMID9HH RSCAN0.TMID9.UINT8[HH]
#define RSCAN0TMPTR9 RSCAN0.TMPTR9.UINT32
#define RSCAN0TMPTR9L RSCAN0.TMPTR9.UINT16[L]
#define RSCAN0TMPTR9LL RSCAN0.TMPTR9.UINT8[LL]
#define RSCAN0TMPTR9LH RSCAN0.TMPTR9.UINT8[LH]
#define RSCAN0TMPTR9H RSCAN0.TMPTR9.UINT16[H]
#define RSCAN0TMPTR9HL RSCAN0.TMPTR9.UINT8[HL]
#define RSCAN0TMPTR9HH RSCAN0.TMPTR9.UINT8[HH]
#define RSCAN0TMDF09 RSCAN0.TMDF09.UINT32
#define RSCAN0TMDF09L RSCAN0.TMDF09.UINT16[L]
#define RSCAN0TMDF09LL RSCAN0.TMDF09.UINT8[LL]
#define RSCAN0TMDF09LH RSCAN0.TMDF09.UINT8[LH]
#define RSCAN0TMDF09H RSCAN0.TMDF09.UINT16[H]
#define RSCAN0TMDF09HL RSCAN0.TMDF09.UINT8[HL]
#define RSCAN0TMDF09HH RSCAN0.TMDF09.UINT8[HH]
#define RSCAN0TMDF19 RSCAN0.TMDF19.UINT32
#define RSCAN0TMDF19L RSCAN0.TMDF19.UINT16[L]
#define RSCAN0TMDF19LL RSCAN0.TMDF19.UINT8[LL]
#define RSCAN0TMDF19LH RSCAN0.TMDF19.UINT8[LH]
#define RSCAN0TMDF19H RSCAN0.TMDF19.UINT16[H]
#define RSCAN0TMDF19HL RSCAN0.TMDF19.UINT8[HL]
#define RSCAN0TMDF19HH RSCAN0.TMDF19.UINT8[HH]
#define RSCAN0TMID10 RSCAN0.TMID10.UINT32
#define RSCAN0TMID10L RSCAN0.TMID10.UINT16[L]
#define RSCAN0TMID10LL RSCAN0.TMID10.UINT8[LL]
#define RSCAN0TMID10LH RSCAN0.TMID10.UINT8[LH]
#define RSCAN0TMID10H RSCAN0.TMID10.UINT16[H]
#define RSCAN0TMID10HL RSCAN0.TMID10.UINT8[HL]
#define RSCAN0TMID10HH RSCAN0.TMID10.UINT8[HH]
#define RSCAN0TMPTR10 RSCAN0.TMPTR10.UINT32
#define RSCAN0TMPTR10L RSCAN0.TMPTR10.UINT16[L]
#define RSCAN0TMPTR10LL RSCAN0.TMPTR10.UINT8[LL]
#define RSCAN0TMPTR10LH RSCAN0.TMPTR10.UINT8[LH]
#define RSCAN0TMPTR10H RSCAN0.TMPTR10.UINT16[H]
#define RSCAN0TMPTR10HL RSCAN0.TMPTR10.UINT8[HL]
#define RSCAN0TMPTR10HH RSCAN0.TMPTR10.UINT8[HH]
#define RSCAN0TMDF010 RSCAN0.TMDF010.UINT32
#define RSCAN0TMDF010L RSCAN0.TMDF010.UINT16[L]
#define RSCAN0TMDF010LL RSCAN0.TMDF010.UINT8[LL]
#define RSCAN0TMDF010LH RSCAN0.TMDF010.UINT8[LH]
#define RSCAN0TMDF010H RSCAN0.TMDF010.UINT16[H]
#define RSCAN0TMDF010HL RSCAN0.TMDF010.UINT8[HL]
#define RSCAN0TMDF010HH RSCAN0.TMDF010.UINT8[HH]
#define RSCAN0TMDF110 RSCAN0.TMDF110.UINT32
#define RSCAN0TMDF110L RSCAN0.TMDF110.UINT16[L]
#define RSCAN0TMDF110LL RSCAN0.TMDF110.UINT8[LL]
#define RSCAN0TMDF110LH RSCAN0.TMDF110.UINT8[LH]
#define RSCAN0TMDF110H RSCAN0.TMDF110.UINT16[H]
#define RSCAN0TMDF110HL RSCAN0.TMDF110.UINT8[HL]
#define RSCAN0TMDF110HH RSCAN0.TMDF110.UINT8[HH]
#define RSCAN0TMID11 RSCAN0.TMID11.UINT32
#define RSCAN0TMID11L RSCAN0.TMID11.UINT16[L]
#define RSCAN0TMID11LL RSCAN0.TMID11.UINT8[LL]
#define RSCAN0TMID11LH RSCAN0.TMID11.UINT8[LH]
#define RSCAN0TMID11H RSCAN0.TMID11.UINT16[H]
#define RSCAN0TMID11HL RSCAN0.TMID11.UINT8[HL]
#define RSCAN0TMID11HH RSCAN0.TMID11.UINT8[HH]
#define RSCAN0TMPTR11 RSCAN0.TMPTR11.UINT32
#define RSCAN0TMPTR11L RSCAN0.TMPTR11.UINT16[L]
#define RSCAN0TMPTR11LL RSCAN0.TMPTR11.UINT8[LL]
#define RSCAN0TMPTR11LH RSCAN0.TMPTR11.UINT8[LH]
#define RSCAN0TMPTR11H RSCAN0.TMPTR11.UINT16[H]
#define RSCAN0TMPTR11HL RSCAN0.TMPTR11.UINT8[HL]
#define RSCAN0TMPTR11HH RSCAN0.TMPTR11.UINT8[HH]
#define RSCAN0TMDF011 RSCAN0.TMDF011.UINT32
#define RSCAN0TMDF011L RSCAN0.TMDF011.UINT16[L]
#define RSCAN0TMDF011LL RSCAN0.TMDF011.UINT8[LL]
#define RSCAN0TMDF011LH RSCAN0.TMDF011.UINT8[LH]
#define RSCAN0TMDF011H RSCAN0.TMDF011.UINT16[H]
#define RSCAN0TMDF011HL RSCAN0.TMDF011.UINT8[HL]
#define RSCAN0TMDF011HH RSCAN0.TMDF011.UINT8[HH]
#define RSCAN0TMDF111 RSCAN0.TMDF111.UINT32
#define RSCAN0TMDF111L RSCAN0.TMDF111.UINT16[L]
#define RSCAN0TMDF111LL RSCAN0.TMDF111.UINT8[LL]
#define RSCAN0TMDF111LH RSCAN0.TMDF111.UINT8[LH]
#define RSCAN0TMDF111H RSCAN0.TMDF111.UINT16[H]
#define RSCAN0TMDF111HL RSCAN0.TMDF111.UINT8[HL]
#define RSCAN0TMDF111HH RSCAN0.TMDF111.UINT8[HH]
#define RSCAN0TMID12 RSCAN0.TMID12.UINT32
#define RSCAN0TMID12L RSCAN0.TMID12.UINT16[L]
#define RSCAN0TMID12LL RSCAN0.TMID12.UINT8[LL]
#define RSCAN0TMID12LH RSCAN0.TMID12.UINT8[LH]
#define RSCAN0TMID12H RSCAN0.TMID12.UINT16[H]
#define RSCAN0TMID12HL RSCAN0.TMID12.UINT8[HL]
#define RSCAN0TMID12HH RSCAN0.TMID12.UINT8[HH]
#define RSCAN0TMPTR12 RSCAN0.TMPTR12.UINT32
#define RSCAN0TMPTR12L RSCAN0.TMPTR12.UINT16[L]
#define RSCAN0TMPTR12LL RSCAN0.TMPTR12.UINT8[LL]
#define RSCAN0TMPTR12LH RSCAN0.TMPTR12.UINT8[LH]
#define RSCAN0TMPTR12H RSCAN0.TMPTR12.UINT16[H]
#define RSCAN0TMPTR12HL RSCAN0.TMPTR12.UINT8[HL]
#define RSCAN0TMPTR12HH RSCAN0.TMPTR12.UINT8[HH]
#define RSCAN0TMDF012 RSCAN0.TMDF012.UINT32
#define RSCAN0TMDF012L RSCAN0.TMDF012.UINT16[L]
#define RSCAN0TMDF012LL RSCAN0.TMDF012.UINT8[LL]
#define RSCAN0TMDF012LH RSCAN0.TMDF012.UINT8[LH]
#define RSCAN0TMDF012H RSCAN0.TMDF012.UINT16[H]
#define RSCAN0TMDF012HL RSCAN0.TMDF012.UINT8[HL]
#define RSCAN0TMDF012HH RSCAN0.TMDF012.UINT8[HH]
#define RSCAN0TMDF112 RSCAN0.TMDF112.UINT32
#define RSCAN0TMDF112L RSCAN0.TMDF112.UINT16[L]
#define RSCAN0TMDF112LL RSCAN0.TMDF112.UINT8[LL]
#define RSCAN0TMDF112LH RSCAN0.TMDF112.UINT8[LH]
#define RSCAN0TMDF112H RSCAN0.TMDF112.UINT16[H]
#define RSCAN0TMDF112HL RSCAN0.TMDF112.UINT8[HL]
#define RSCAN0TMDF112HH RSCAN0.TMDF112.UINT8[HH]
#define RSCAN0TMID13 RSCAN0.TMID13.UINT32
#define RSCAN0TMID13L RSCAN0.TMID13.UINT16[L]
#define RSCAN0TMID13LL RSCAN0.TMID13.UINT8[LL]
#define RSCAN0TMID13LH RSCAN0.TMID13.UINT8[LH]
#define RSCAN0TMID13H RSCAN0.TMID13.UINT16[H]
#define RSCAN0TMID13HL RSCAN0.TMID13.UINT8[HL]
#define RSCAN0TMID13HH RSCAN0.TMID13.UINT8[HH]
#define RSCAN0TMPTR13 RSCAN0.TMPTR13.UINT32
#define RSCAN0TMPTR13L RSCAN0.TMPTR13.UINT16[L]
#define RSCAN0TMPTR13LL RSCAN0.TMPTR13.UINT8[LL]
#define RSCAN0TMPTR13LH RSCAN0.TMPTR13.UINT8[LH]
#define RSCAN0TMPTR13H RSCAN0.TMPTR13.UINT16[H]
#define RSCAN0TMPTR13HL RSCAN0.TMPTR13.UINT8[HL]
#define RSCAN0TMPTR13HH RSCAN0.TMPTR13.UINT8[HH]
#define RSCAN0TMDF013 RSCAN0.TMDF013.UINT32
#define RSCAN0TMDF013L RSCAN0.TMDF013.UINT16[L]
#define RSCAN0TMDF013LL RSCAN0.TMDF013.UINT8[LL]
#define RSCAN0TMDF013LH RSCAN0.TMDF013.UINT8[LH]
#define RSCAN0TMDF013H RSCAN0.TMDF013.UINT16[H]
#define RSCAN0TMDF013HL RSCAN0.TMDF013.UINT8[HL]
#define RSCAN0TMDF013HH RSCAN0.TMDF013.UINT8[HH]
#define RSCAN0TMDF113 RSCAN0.TMDF113.UINT32
#define RSCAN0TMDF113L RSCAN0.TMDF113.UINT16[L]
#define RSCAN0TMDF113LL RSCAN0.TMDF113.UINT8[LL]
#define RSCAN0TMDF113LH RSCAN0.TMDF113.UINT8[LH]
#define RSCAN0TMDF113H RSCAN0.TMDF113.UINT16[H]
#define RSCAN0TMDF113HL RSCAN0.TMDF113.UINT8[HL]
#define RSCAN0TMDF113HH RSCAN0.TMDF113.UINT8[HH]
#define RSCAN0TMID14 RSCAN0.TMID14.UINT32
#define RSCAN0TMID14L RSCAN0.TMID14.UINT16[L]
#define RSCAN0TMID14LL RSCAN0.TMID14.UINT8[LL]
#define RSCAN0TMID14LH RSCAN0.TMID14.UINT8[LH]
#define RSCAN0TMID14H RSCAN0.TMID14.UINT16[H]
#define RSCAN0TMID14HL RSCAN0.TMID14.UINT8[HL]
#define RSCAN0TMID14HH RSCAN0.TMID14.UINT8[HH]
#define RSCAN0TMPTR14 RSCAN0.TMPTR14.UINT32
#define RSCAN0TMPTR14L RSCAN0.TMPTR14.UINT16[L]
#define RSCAN0TMPTR14LL RSCAN0.TMPTR14.UINT8[LL]
#define RSCAN0TMPTR14LH RSCAN0.TMPTR14.UINT8[LH]
#define RSCAN0TMPTR14H RSCAN0.TMPTR14.UINT16[H]
#define RSCAN0TMPTR14HL RSCAN0.TMPTR14.UINT8[HL]
#define RSCAN0TMPTR14HH RSCAN0.TMPTR14.UINT8[HH]
#define RSCAN0TMDF014 RSCAN0.TMDF014.UINT32
#define RSCAN0TMDF014L RSCAN0.TMDF014.UINT16[L]
#define RSCAN0TMDF014LL RSCAN0.TMDF014.UINT8[LL]
#define RSCAN0TMDF014LH RSCAN0.TMDF014.UINT8[LH]
#define RSCAN0TMDF014H RSCAN0.TMDF014.UINT16[H]
#define RSCAN0TMDF014HL RSCAN0.TMDF014.UINT8[HL]
#define RSCAN0TMDF014HH RSCAN0.TMDF014.UINT8[HH]
#define RSCAN0TMDF114 RSCAN0.TMDF114.UINT32
#define RSCAN0TMDF114L RSCAN0.TMDF114.UINT16[L]
#define RSCAN0TMDF114LL RSCAN0.TMDF114.UINT8[LL]
#define RSCAN0TMDF114LH RSCAN0.TMDF114.UINT8[LH]
#define RSCAN0TMDF114H RSCAN0.TMDF114.UINT16[H]
#define RSCAN0TMDF114HL RSCAN0.TMDF114.UINT8[HL]
#define RSCAN0TMDF114HH RSCAN0.TMDF114.UINT8[HH]
#define RSCAN0TMID15 RSCAN0.TMID15.UINT32
#define RSCAN0TMID15L RSCAN0.TMID15.UINT16[L]
#define RSCAN0TMID15LL RSCAN0.TMID15.UINT8[LL]
#define RSCAN0TMID15LH RSCAN0.TMID15.UINT8[LH]
#define RSCAN0TMID15H RSCAN0.TMID15.UINT16[H]
#define RSCAN0TMID15HL RSCAN0.TMID15.UINT8[HL]
#define RSCAN0TMID15HH RSCAN0.TMID15.UINT8[HH]
#define RSCAN0TMPTR15 RSCAN0.TMPTR15.UINT32
#define RSCAN0TMPTR15L RSCAN0.TMPTR15.UINT16[L]
#define RSCAN0TMPTR15LL RSCAN0.TMPTR15.UINT8[LL]
#define RSCAN0TMPTR15LH RSCAN0.TMPTR15.UINT8[LH]
#define RSCAN0TMPTR15H RSCAN0.TMPTR15.UINT16[H]
#define RSCAN0TMPTR15HL RSCAN0.TMPTR15.UINT8[HL]
#define RSCAN0TMPTR15HH RSCAN0.TMPTR15.UINT8[HH]
#define RSCAN0TMDF015 RSCAN0.TMDF015.UINT32
#define RSCAN0TMDF015L RSCAN0.TMDF015.UINT16[L]
#define RSCAN0TMDF015LL RSCAN0.TMDF015.UINT8[LL]
#define RSCAN0TMDF015LH RSCAN0.TMDF015.UINT8[LH]
#define RSCAN0TMDF015H RSCAN0.TMDF015.UINT16[H]
#define RSCAN0TMDF015HL RSCAN0.TMDF015.UINT8[HL]
#define RSCAN0TMDF015HH RSCAN0.TMDF015.UINT8[HH]
#define RSCAN0TMDF115 RSCAN0.TMDF115.UINT32
#define RSCAN0TMDF115L RSCAN0.TMDF115.UINT16[L]
#define RSCAN0TMDF115LL RSCAN0.TMDF115.UINT8[LL]
#define RSCAN0TMDF115LH RSCAN0.TMDF115.UINT8[LH]
#define RSCAN0TMDF115H RSCAN0.TMDF115.UINT16[H]
#define RSCAN0TMDF115HL RSCAN0.TMDF115.UINT8[HL]
#define RSCAN0TMDF115HH RSCAN0.TMDF115.UINT8[HH]
#define RSCAN0TMID16 RSCAN0.TMID16.UINT32
#define RSCAN0TMID16L RSCAN0.TMID16.UINT16[L]
#define RSCAN0TMID16LL RSCAN0.TMID16.UINT8[LL]
#define RSCAN0TMID16LH RSCAN0.TMID16.UINT8[LH]
#define RSCAN0TMID16H RSCAN0.TMID16.UINT16[H]
#define RSCAN0TMID16HL RSCAN0.TMID16.UINT8[HL]
#define RSCAN0TMID16HH RSCAN0.TMID16.UINT8[HH]
#define RSCAN0TMPTR16 RSCAN0.TMPTR16.UINT32
#define RSCAN0TMPTR16L RSCAN0.TMPTR16.UINT16[L]
#define RSCAN0TMPTR16LL RSCAN0.TMPTR16.UINT8[LL]
#define RSCAN0TMPTR16LH RSCAN0.TMPTR16.UINT8[LH]
#define RSCAN0TMPTR16H RSCAN0.TMPTR16.UINT16[H]
#define RSCAN0TMPTR16HL RSCAN0.TMPTR16.UINT8[HL]
#define RSCAN0TMPTR16HH RSCAN0.TMPTR16.UINT8[HH]
#define RSCAN0TMDF016 RSCAN0.TMDF016.UINT32
#define RSCAN0TMDF016L RSCAN0.TMDF016.UINT16[L]
#define RSCAN0TMDF016LL RSCAN0.TMDF016.UINT8[LL]
#define RSCAN0TMDF016LH RSCAN0.TMDF016.UINT8[LH]
#define RSCAN0TMDF016H RSCAN0.TMDF016.UINT16[H]
#define RSCAN0TMDF016HL RSCAN0.TMDF016.UINT8[HL]
#define RSCAN0TMDF016HH RSCAN0.TMDF016.UINT8[HH]
#define RSCAN0TMDF116 RSCAN0.TMDF116.UINT32
#define RSCAN0TMDF116L RSCAN0.TMDF116.UINT16[L]
#define RSCAN0TMDF116LL RSCAN0.TMDF116.UINT8[LL]
#define RSCAN0TMDF116LH RSCAN0.TMDF116.UINT8[LH]
#define RSCAN0TMDF116H RSCAN0.TMDF116.UINT16[H]
#define RSCAN0TMDF116HL RSCAN0.TMDF116.UINT8[HL]
#define RSCAN0TMDF116HH RSCAN0.TMDF116.UINT8[HH]
#define RSCAN0TMID17 RSCAN0.TMID17.UINT32
#define RSCAN0TMID17L RSCAN0.TMID17.UINT16[L]
#define RSCAN0TMID17LL RSCAN0.TMID17.UINT8[LL]
#define RSCAN0TMID17LH RSCAN0.TMID17.UINT8[LH]
#define RSCAN0TMID17H RSCAN0.TMID17.UINT16[H]
#define RSCAN0TMID17HL RSCAN0.TMID17.UINT8[HL]
#define RSCAN0TMID17HH RSCAN0.TMID17.UINT8[HH]
#define RSCAN0TMPTR17 RSCAN0.TMPTR17.UINT32
#define RSCAN0TMPTR17L RSCAN0.TMPTR17.UINT16[L]
#define RSCAN0TMPTR17LL RSCAN0.TMPTR17.UINT8[LL]
#define RSCAN0TMPTR17LH RSCAN0.TMPTR17.UINT8[LH]
#define RSCAN0TMPTR17H RSCAN0.TMPTR17.UINT16[H]
#define RSCAN0TMPTR17HL RSCAN0.TMPTR17.UINT8[HL]
#define RSCAN0TMPTR17HH RSCAN0.TMPTR17.UINT8[HH]
#define RSCAN0TMDF017 RSCAN0.TMDF017.UINT32
#define RSCAN0TMDF017L RSCAN0.TMDF017.UINT16[L]
#define RSCAN0TMDF017LL RSCAN0.TMDF017.UINT8[LL]
#define RSCAN0TMDF017LH RSCAN0.TMDF017.UINT8[LH]
#define RSCAN0TMDF017H RSCAN0.TMDF017.UINT16[H]
#define RSCAN0TMDF017HL RSCAN0.TMDF017.UINT8[HL]
#define RSCAN0TMDF017HH RSCAN0.TMDF017.UINT8[HH]
#define RSCAN0TMDF117 RSCAN0.TMDF117.UINT32
#define RSCAN0TMDF117L RSCAN0.TMDF117.UINT16[L]
#define RSCAN0TMDF117LL RSCAN0.TMDF117.UINT8[LL]
#define RSCAN0TMDF117LH RSCAN0.TMDF117.UINT8[LH]
#define RSCAN0TMDF117H RSCAN0.TMDF117.UINT16[H]
#define RSCAN0TMDF117HL RSCAN0.TMDF117.UINT8[HL]
#define RSCAN0TMDF117HH RSCAN0.TMDF117.UINT8[HH]
#define RSCAN0TMID18 RSCAN0.TMID18.UINT32
#define RSCAN0TMID18L RSCAN0.TMID18.UINT16[L]
#define RSCAN0TMID18LL RSCAN0.TMID18.UINT8[LL]
#define RSCAN0TMID18LH RSCAN0.TMID18.UINT8[LH]
#define RSCAN0TMID18H RSCAN0.TMID18.UINT16[H]
#define RSCAN0TMID18HL RSCAN0.TMID18.UINT8[HL]
#define RSCAN0TMID18HH RSCAN0.TMID18.UINT8[HH]
#define RSCAN0TMPTR18 RSCAN0.TMPTR18.UINT32
#define RSCAN0TMPTR18L RSCAN0.TMPTR18.UINT16[L]
#define RSCAN0TMPTR18LL RSCAN0.TMPTR18.UINT8[LL]
#define RSCAN0TMPTR18LH RSCAN0.TMPTR18.UINT8[LH]
#define RSCAN0TMPTR18H RSCAN0.TMPTR18.UINT16[H]
#define RSCAN0TMPTR18HL RSCAN0.TMPTR18.UINT8[HL]
#define RSCAN0TMPTR18HH RSCAN0.TMPTR18.UINT8[HH]
#define RSCAN0TMDF018 RSCAN0.TMDF018.UINT32
#define RSCAN0TMDF018L RSCAN0.TMDF018.UINT16[L]
#define RSCAN0TMDF018LL RSCAN0.TMDF018.UINT8[LL]
#define RSCAN0TMDF018LH RSCAN0.TMDF018.UINT8[LH]
#define RSCAN0TMDF018H RSCAN0.TMDF018.UINT16[H]
#define RSCAN0TMDF018HL RSCAN0.TMDF018.UINT8[HL]
#define RSCAN0TMDF018HH RSCAN0.TMDF018.UINT8[HH]
#define RSCAN0TMDF118 RSCAN0.TMDF118.UINT32
#define RSCAN0TMDF118L RSCAN0.TMDF118.UINT16[L]
#define RSCAN0TMDF118LL RSCAN0.TMDF118.UINT8[LL]
#define RSCAN0TMDF118LH RSCAN0.TMDF118.UINT8[LH]
#define RSCAN0TMDF118H RSCAN0.TMDF118.UINT16[H]
#define RSCAN0TMDF118HL RSCAN0.TMDF118.UINT8[HL]
#define RSCAN0TMDF118HH RSCAN0.TMDF118.UINT8[HH]
#define RSCAN0TMID19 RSCAN0.TMID19.UINT32
#define RSCAN0TMID19L RSCAN0.TMID19.UINT16[L]
#define RSCAN0TMID19LL RSCAN0.TMID19.UINT8[LL]
#define RSCAN0TMID19LH RSCAN0.TMID19.UINT8[LH]
#define RSCAN0TMID19H RSCAN0.TMID19.UINT16[H]
#define RSCAN0TMID19HL RSCAN0.TMID19.UINT8[HL]
#define RSCAN0TMID19HH RSCAN0.TMID19.UINT8[HH]
#define RSCAN0TMPTR19 RSCAN0.TMPTR19.UINT32
#define RSCAN0TMPTR19L RSCAN0.TMPTR19.UINT16[L]
#define RSCAN0TMPTR19LL RSCAN0.TMPTR19.UINT8[LL]
#define RSCAN0TMPTR19LH RSCAN0.TMPTR19.UINT8[LH]
#define RSCAN0TMPTR19H RSCAN0.TMPTR19.UINT16[H]
#define RSCAN0TMPTR19HL RSCAN0.TMPTR19.UINT8[HL]
#define RSCAN0TMPTR19HH RSCAN0.TMPTR19.UINT8[HH]
#define RSCAN0TMDF019 RSCAN0.TMDF019.UINT32
#define RSCAN0TMDF019L RSCAN0.TMDF019.UINT16[L]
#define RSCAN0TMDF019LL RSCAN0.TMDF019.UINT8[LL]
#define RSCAN0TMDF019LH RSCAN0.TMDF019.UINT8[LH]
#define RSCAN0TMDF019H RSCAN0.TMDF019.UINT16[H]
#define RSCAN0TMDF019HL RSCAN0.TMDF019.UINT8[HL]
#define RSCAN0TMDF019HH RSCAN0.TMDF019.UINT8[HH]
#define RSCAN0TMDF119 RSCAN0.TMDF119.UINT32
#define RSCAN0TMDF119L RSCAN0.TMDF119.UINT16[L]
#define RSCAN0TMDF119LL RSCAN0.TMDF119.UINT8[LL]
#define RSCAN0TMDF119LH RSCAN0.TMDF119.UINT8[LH]
#define RSCAN0TMDF119H RSCAN0.TMDF119.UINT16[H]
#define RSCAN0TMDF119HL RSCAN0.TMDF119.UINT8[HL]
#define RSCAN0TMDF119HH RSCAN0.TMDF119.UINT8[HH]
#define RSCAN0TMID20 RSCAN0.TMID20.UINT32
#define RSCAN0TMID20L RSCAN0.TMID20.UINT16[L]
#define RSCAN0TMID20LL RSCAN0.TMID20.UINT8[LL]
#define RSCAN0TMID20LH RSCAN0.TMID20.UINT8[LH]
#define RSCAN0TMID20H RSCAN0.TMID20.UINT16[H]
#define RSCAN0TMID20HL RSCAN0.TMID20.UINT8[HL]
#define RSCAN0TMID20HH RSCAN0.TMID20.UINT8[HH]
#define RSCAN0TMPTR20 RSCAN0.TMPTR20.UINT32
#define RSCAN0TMPTR20L RSCAN0.TMPTR20.UINT16[L]
#define RSCAN0TMPTR20LL RSCAN0.TMPTR20.UINT8[LL]
#define RSCAN0TMPTR20LH RSCAN0.TMPTR20.UINT8[LH]
#define RSCAN0TMPTR20H RSCAN0.TMPTR20.UINT16[H]
#define RSCAN0TMPTR20HL RSCAN0.TMPTR20.UINT8[HL]
#define RSCAN0TMPTR20HH RSCAN0.TMPTR20.UINT8[HH]
#define RSCAN0TMDF020 RSCAN0.TMDF020.UINT32
#define RSCAN0TMDF020L RSCAN0.TMDF020.UINT16[L]
#define RSCAN0TMDF020LL RSCAN0.TMDF020.UINT8[LL]
#define RSCAN0TMDF020LH RSCAN0.TMDF020.UINT8[LH]
#define RSCAN0TMDF020H RSCAN0.TMDF020.UINT16[H]
#define RSCAN0TMDF020HL RSCAN0.TMDF020.UINT8[HL]
#define RSCAN0TMDF020HH RSCAN0.TMDF020.UINT8[HH]
#define RSCAN0TMDF120 RSCAN0.TMDF120.UINT32
#define RSCAN0TMDF120L RSCAN0.TMDF120.UINT16[L]
#define RSCAN0TMDF120LL RSCAN0.TMDF120.UINT8[LL]
#define RSCAN0TMDF120LH RSCAN0.TMDF120.UINT8[LH]
#define RSCAN0TMDF120H RSCAN0.TMDF120.UINT16[H]
#define RSCAN0TMDF120HL RSCAN0.TMDF120.UINT8[HL]
#define RSCAN0TMDF120HH RSCAN0.TMDF120.UINT8[HH]
#define RSCAN0TMID21 RSCAN0.TMID21.UINT32
#define RSCAN0TMID21L RSCAN0.TMID21.UINT16[L]
#define RSCAN0TMID21LL RSCAN0.TMID21.UINT8[LL]
#define RSCAN0TMID21LH RSCAN0.TMID21.UINT8[LH]
#define RSCAN0TMID21H RSCAN0.TMID21.UINT16[H]
#define RSCAN0TMID21HL RSCAN0.TMID21.UINT8[HL]
#define RSCAN0TMID21HH RSCAN0.TMID21.UINT8[HH]
#define RSCAN0TMPTR21 RSCAN0.TMPTR21.UINT32
#define RSCAN0TMPTR21L RSCAN0.TMPTR21.UINT16[L]
#define RSCAN0TMPTR21LL RSCAN0.TMPTR21.UINT8[LL]
#define RSCAN0TMPTR21LH RSCAN0.TMPTR21.UINT8[LH]
#define RSCAN0TMPTR21H RSCAN0.TMPTR21.UINT16[H]
#define RSCAN0TMPTR21HL RSCAN0.TMPTR21.UINT8[HL]
#define RSCAN0TMPTR21HH RSCAN0.TMPTR21.UINT8[HH]
#define RSCAN0TMDF021 RSCAN0.TMDF021.UINT32
#define RSCAN0TMDF021L RSCAN0.TMDF021.UINT16[L]
#define RSCAN0TMDF021LL RSCAN0.TMDF021.UINT8[LL]
#define RSCAN0TMDF021LH RSCAN0.TMDF021.UINT8[LH]
#define RSCAN0TMDF021H RSCAN0.TMDF021.UINT16[H]
#define RSCAN0TMDF021HL RSCAN0.TMDF021.UINT8[HL]
#define RSCAN0TMDF021HH RSCAN0.TMDF021.UINT8[HH]
#define RSCAN0TMDF121 RSCAN0.TMDF121.UINT32
#define RSCAN0TMDF121L RSCAN0.TMDF121.UINT16[L]
#define RSCAN0TMDF121LL RSCAN0.TMDF121.UINT8[LL]
#define RSCAN0TMDF121LH RSCAN0.TMDF121.UINT8[LH]
#define RSCAN0TMDF121H RSCAN0.TMDF121.UINT16[H]
#define RSCAN0TMDF121HL RSCAN0.TMDF121.UINT8[HL]
#define RSCAN0TMDF121HH RSCAN0.TMDF121.UINT8[HH]
#define RSCAN0TMID22 RSCAN0.TMID22.UINT32
#define RSCAN0TMID22L RSCAN0.TMID22.UINT16[L]
#define RSCAN0TMID22LL RSCAN0.TMID22.UINT8[LL]
#define RSCAN0TMID22LH RSCAN0.TMID22.UINT8[LH]
#define RSCAN0TMID22H RSCAN0.TMID22.UINT16[H]
#define RSCAN0TMID22HL RSCAN0.TMID22.UINT8[HL]
#define RSCAN0TMID22HH RSCAN0.TMID22.UINT8[HH]
#define RSCAN0TMPTR22 RSCAN0.TMPTR22.UINT32
#define RSCAN0TMPTR22L RSCAN0.TMPTR22.UINT16[L]
#define RSCAN0TMPTR22LL RSCAN0.TMPTR22.UINT8[LL]
#define RSCAN0TMPTR22LH RSCAN0.TMPTR22.UINT8[LH]
#define RSCAN0TMPTR22H RSCAN0.TMPTR22.UINT16[H]
#define RSCAN0TMPTR22HL RSCAN0.TMPTR22.UINT8[HL]
#define RSCAN0TMPTR22HH RSCAN0.TMPTR22.UINT8[HH]
#define RSCAN0TMDF022 RSCAN0.TMDF022.UINT32
#define RSCAN0TMDF022L RSCAN0.TMDF022.UINT16[L]
#define RSCAN0TMDF022LL RSCAN0.TMDF022.UINT8[LL]
#define RSCAN0TMDF022LH RSCAN0.TMDF022.UINT8[LH]
#define RSCAN0TMDF022H RSCAN0.TMDF022.UINT16[H]
#define RSCAN0TMDF022HL RSCAN0.TMDF022.UINT8[HL]
#define RSCAN0TMDF022HH RSCAN0.TMDF022.UINT8[HH]
#define RSCAN0TMDF122 RSCAN0.TMDF122.UINT32
#define RSCAN0TMDF122L RSCAN0.TMDF122.UINT16[L]
#define RSCAN0TMDF122LL RSCAN0.TMDF122.UINT8[LL]
#define RSCAN0TMDF122LH RSCAN0.TMDF122.UINT8[LH]
#define RSCAN0TMDF122H RSCAN0.TMDF122.UINT16[H]
#define RSCAN0TMDF122HL RSCAN0.TMDF122.UINT8[HL]
#define RSCAN0TMDF122HH RSCAN0.TMDF122.UINT8[HH]
#define RSCAN0TMID23 RSCAN0.TMID23.UINT32
#define RSCAN0TMID23L RSCAN0.TMID23.UINT16[L]
#define RSCAN0TMID23LL RSCAN0.TMID23.UINT8[LL]
#define RSCAN0TMID23LH RSCAN0.TMID23.UINT8[LH]
#define RSCAN0TMID23H RSCAN0.TMID23.UINT16[H]
#define RSCAN0TMID23HL RSCAN0.TMID23.UINT8[HL]
#define RSCAN0TMID23HH RSCAN0.TMID23.UINT8[HH]
#define RSCAN0TMPTR23 RSCAN0.TMPTR23.UINT32
#define RSCAN0TMPTR23L RSCAN0.TMPTR23.UINT16[L]
#define RSCAN0TMPTR23LL RSCAN0.TMPTR23.UINT8[LL]
#define RSCAN0TMPTR23LH RSCAN0.TMPTR23.UINT8[LH]
#define RSCAN0TMPTR23H RSCAN0.TMPTR23.UINT16[H]
#define RSCAN0TMPTR23HL RSCAN0.TMPTR23.UINT8[HL]
#define RSCAN0TMPTR23HH RSCAN0.TMPTR23.UINT8[HH]
#define RSCAN0TMDF023 RSCAN0.TMDF023.UINT32
#define RSCAN0TMDF023L RSCAN0.TMDF023.UINT16[L]
#define RSCAN0TMDF023LL RSCAN0.TMDF023.UINT8[LL]
#define RSCAN0TMDF023LH RSCAN0.TMDF023.UINT8[LH]
#define RSCAN0TMDF023H RSCAN0.TMDF023.UINT16[H]
#define RSCAN0TMDF023HL RSCAN0.TMDF023.UINT8[HL]
#define RSCAN0TMDF023HH RSCAN0.TMDF023.UINT8[HH]
#define RSCAN0TMDF123 RSCAN0.TMDF123.UINT32
#define RSCAN0TMDF123L RSCAN0.TMDF123.UINT16[L]
#define RSCAN0TMDF123LL RSCAN0.TMDF123.UINT8[LL]
#define RSCAN0TMDF123LH RSCAN0.TMDF123.UINT8[LH]
#define RSCAN0TMDF123H RSCAN0.TMDF123.UINT16[H]
#define RSCAN0TMDF123HL RSCAN0.TMDF123.UINT8[HL]
#define RSCAN0TMDF123HH RSCAN0.TMDF123.UINT8[HH]
#define RSCAN0TMID24 RSCAN0.TMID24.UINT32
#define RSCAN0TMID24L RSCAN0.TMID24.UINT16[L]
#define RSCAN0TMID24LL RSCAN0.TMID24.UINT8[LL]
#define RSCAN0TMID24LH RSCAN0.TMID24.UINT8[LH]
#define RSCAN0TMID24H RSCAN0.TMID24.UINT16[H]
#define RSCAN0TMID24HL RSCAN0.TMID24.UINT8[HL]
#define RSCAN0TMID24HH RSCAN0.TMID24.UINT8[HH]
#define RSCAN0TMPTR24 RSCAN0.TMPTR24.UINT32
#define RSCAN0TMPTR24L RSCAN0.TMPTR24.UINT16[L]
#define RSCAN0TMPTR24LL RSCAN0.TMPTR24.UINT8[LL]
#define RSCAN0TMPTR24LH RSCAN0.TMPTR24.UINT8[LH]
#define RSCAN0TMPTR24H RSCAN0.TMPTR24.UINT16[H]
#define RSCAN0TMPTR24HL RSCAN0.TMPTR24.UINT8[HL]
#define RSCAN0TMPTR24HH RSCAN0.TMPTR24.UINT8[HH]
#define RSCAN0TMDF024 RSCAN0.TMDF024.UINT32
#define RSCAN0TMDF024L RSCAN0.TMDF024.UINT16[L]
#define RSCAN0TMDF024LL RSCAN0.TMDF024.UINT8[LL]
#define RSCAN0TMDF024LH RSCAN0.TMDF024.UINT8[LH]
#define RSCAN0TMDF024H RSCAN0.TMDF024.UINT16[H]
#define RSCAN0TMDF024HL RSCAN0.TMDF024.UINT8[HL]
#define RSCAN0TMDF024HH RSCAN0.TMDF024.UINT8[HH]
#define RSCAN0TMDF124 RSCAN0.TMDF124.UINT32
#define RSCAN0TMDF124L RSCAN0.TMDF124.UINT16[L]
#define RSCAN0TMDF124LL RSCAN0.TMDF124.UINT8[LL]
#define RSCAN0TMDF124LH RSCAN0.TMDF124.UINT8[LH]
#define RSCAN0TMDF124H RSCAN0.TMDF124.UINT16[H]
#define RSCAN0TMDF124HL RSCAN0.TMDF124.UINT8[HL]
#define RSCAN0TMDF124HH RSCAN0.TMDF124.UINT8[HH]
#define RSCAN0TMID25 RSCAN0.TMID25.UINT32
#define RSCAN0TMID25L RSCAN0.TMID25.UINT16[L]
#define RSCAN0TMID25LL RSCAN0.TMID25.UINT8[LL]
#define RSCAN0TMID25LH RSCAN0.TMID25.UINT8[LH]
#define RSCAN0TMID25H RSCAN0.TMID25.UINT16[H]
#define RSCAN0TMID25HL RSCAN0.TMID25.UINT8[HL]
#define RSCAN0TMID25HH RSCAN0.TMID25.UINT8[HH]
#define RSCAN0TMPTR25 RSCAN0.TMPTR25.UINT32
#define RSCAN0TMPTR25L RSCAN0.TMPTR25.UINT16[L]
#define RSCAN0TMPTR25LL RSCAN0.TMPTR25.UINT8[LL]
#define RSCAN0TMPTR25LH RSCAN0.TMPTR25.UINT8[LH]
#define RSCAN0TMPTR25H RSCAN0.TMPTR25.UINT16[H]
#define RSCAN0TMPTR25HL RSCAN0.TMPTR25.UINT8[HL]
#define RSCAN0TMPTR25HH RSCAN0.TMPTR25.UINT8[HH]
#define RSCAN0TMDF025 RSCAN0.TMDF025.UINT32
#define RSCAN0TMDF025L RSCAN0.TMDF025.UINT16[L]
#define RSCAN0TMDF025LL RSCAN0.TMDF025.UINT8[LL]
#define RSCAN0TMDF025LH RSCAN0.TMDF025.UINT8[LH]
#define RSCAN0TMDF025H RSCAN0.TMDF025.UINT16[H]
#define RSCAN0TMDF025HL RSCAN0.TMDF025.UINT8[HL]
#define RSCAN0TMDF025HH RSCAN0.TMDF025.UINT8[HH]
#define RSCAN0TMDF125 RSCAN0.TMDF125.UINT32
#define RSCAN0TMDF125L RSCAN0.TMDF125.UINT16[L]
#define RSCAN0TMDF125LL RSCAN0.TMDF125.UINT8[LL]
#define RSCAN0TMDF125LH RSCAN0.TMDF125.UINT8[LH]
#define RSCAN0TMDF125H RSCAN0.TMDF125.UINT16[H]
#define RSCAN0TMDF125HL RSCAN0.TMDF125.UINT8[HL]
#define RSCAN0TMDF125HH RSCAN0.TMDF125.UINT8[HH]
#define RSCAN0TMID26 RSCAN0.TMID26.UINT32
#define RSCAN0TMID26L RSCAN0.TMID26.UINT16[L]
#define RSCAN0TMID26LL RSCAN0.TMID26.UINT8[LL]
#define RSCAN0TMID26LH RSCAN0.TMID26.UINT8[LH]
#define RSCAN0TMID26H RSCAN0.TMID26.UINT16[H]
#define RSCAN0TMID26HL RSCAN0.TMID26.UINT8[HL]
#define RSCAN0TMID26HH RSCAN0.TMID26.UINT8[HH]
#define RSCAN0TMPTR26 RSCAN0.TMPTR26.UINT32
#define RSCAN0TMPTR26L RSCAN0.TMPTR26.UINT16[L]
#define RSCAN0TMPTR26LL RSCAN0.TMPTR26.UINT8[LL]
#define RSCAN0TMPTR26LH RSCAN0.TMPTR26.UINT8[LH]
#define RSCAN0TMPTR26H RSCAN0.TMPTR26.UINT16[H]
#define RSCAN0TMPTR26HL RSCAN0.TMPTR26.UINT8[HL]
#define RSCAN0TMPTR26HH RSCAN0.TMPTR26.UINT8[HH]
#define RSCAN0TMDF026 RSCAN0.TMDF026.UINT32
#define RSCAN0TMDF026L RSCAN0.TMDF026.UINT16[L]
#define RSCAN0TMDF026LL RSCAN0.TMDF026.UINT8[LL]
#define RSCAN0TMDF026LH RSCAN0.TMDF026.UINT8[LH]
#define RSCAN0TMDF026H RSCAN0.TMDF026.UINT16[H]
#define RSCAN0TMDF026HL RSCAN0.TMDF026.UINT8[HL]
#define RSCAN0TMDF026HH RSCAN0.TMDF026.UINT8[HH]
#define RSCAN0TMDF126 RSCAN0.TMDF126.UINT32
#define RSCAN0TMDF126L RSCAN0.TMDF126.UINT16[L]
#define RSCAN0TMDF126LL RSCAN0.TMDF126.UINT8[LL]
#define RSCAN0TMDF126LH RSCAN0.TMDF126.UINT8[LH]
#define RSCAN0TMDF126H RSCAN0.TMDF126.UINT16[H]
#define RSCAN0TMDF126HL RSCAN0.TMDF126.UINT8[HL]
#define RSCAN0TMDF126HH RSCAN0.TMDF126.UINT8[HH]
#define RSCAN0TMID27 RSCAN0.TMID27.UINT32
#define RSCAN0TMID27L RSCAN0.TMID27.UINT16[L]
#define RSCAN0TMID27LL RSCAN0.TMID27.UINT8[LL]
#define RSCAN0TMID27LH RSCAN0.TMID27.UINT8[LH]
#define RSCAN0TMID27H RSCAN0.TMID27.UINT16[H]
#define RSCAN0TMID27HL RSCAN0.TMID27.UINT8[HL]
#define RSCAN0TMID27HH RSCAN0.TMID27.UINT8[HH]
#define RSCAN0TMPTR27 RSCAN0.TMPTR27.UINT32
#define RSCAN0TMPTR27L RSCAN0.TMPTR27.UINT16[L]
#define RSCAN0TMPTR27LL RSCAN0.TMPTR27.UINT8[LL]
#define RSCAN0TMPTR27LH RSCAN0.TMPTR27.UINT8[LH]
#define RSCAN0TMPTR27H RSCAN0.TMPTR27.UINT16[H]
#define RSCAN0TMPTR27HL RSCAN0.TMPTR27.UINT8[HL]
#define RSCAN0TMPTR27HH RSCAN0.TMPTR27.UINT8[HH]
#define RSCAN0TMDF027 RSCAN0.TMDF027.UINT32
#define RSCAN0TMDF027L RSCAN0.TMDF027.UINT16[L]
#define RSCAN0TMDF027LL RSCAN0.TMDF027.UINT8[LL]
#define RSCAN0TMDF027LH RSCAN0.TMDF027.UINT8[LH]
#define RSCAN0TMDF027H RSCAN0.TMDF027.UINT16[H]
#define RSCAN0TMDF027HL RSCAN0.TMDF027.UINT8[HL]
#define RSCAN0TMDF027HH RSCAN0.TMDF027.UINT8[HH]
#define RSCAN0TMDF127 RSCAN0.TMDF127.UINT32
#define RSCAN0TMDF127L RSCAN0.TMDF127.UINT16[L]
#define RSCAN0TMDF127LL RSCAN0.TMDF127.UINT8[LL]
#define RSCAN0TMDF127LH RSCAN0.TMDF127.UINT8[LH]
#define RSCAN0TMDF127H RSCAN0.TMDF127.UINT16[H]
#define RSCAN0TMDF127HL RSCAN0.TMDF127.UINT8[HL]
#define RSCAN0TMDF127HH RSCAN0.TMDF127.UINT8[HH]
#define RSCAN0TMID28 RSCAN0.TMID28.UINT32
#define RSCAN0TMID28L RSCAN0.TMID28.UINT16[L]
#define RSCAN0TMID28LL RSCAN0.TMID28.UINT8[LL]
#define RSCAN0TMID28LH RSCAN0.TMID28.UINT8[LH]
#define RSCAN0TMID28H RSCAN0.TMID28.UINT16[H]
#define RSCAN0TMID28HL RSCAN0.TMID28.UINT8[HL]
#define RSCAN0TMID28HH RSCAN0.TMID28.UINT8[HH]
#define RSCAN0TMPTR28 RSCAN0.TMPTR28.UINT32
#define RSCAN0TMPTR28L RSCAN0.TMPTR28.UINT16[L]
#define RSCAN0TMPTR28LL RSCAN0.TMPTR28.UINT8[LL]
#define RSCAN0TMPTR28LH RSCAN0.TMPTR28.UINT8[LH]
#define RSCAN0TMPTR28H RSCAN0.TMPTR28.UINT16[H]
#define RSCAN0TMPTR28HL RSCAN0.TMPTR28.UINT8[HL]
#define RSCAN0TMPTR28HH RSCAN0.TMPTR28.UINT8[HH]
#define RSCAN0TMDF028 RSCAN0.TMDF028.UINT32
#define RSCAN0TMDF028L RSCAN0.TMDF028.UINT16[L]
#define RSCAN0TMDF028LL RSCAN0.TMDF028.UINT8[LL]
#define RSCAN0TMDF028LH RSCAN0.TMDF028.UINT8[LH]
#define RSCAN0TMDF028H RSCAN0.TMDF028.UINT16[H]
#define RSCAN0TMDF028HL RSCAN0.TMDF028.UINT8[HL]
#define RSCAN0TMDF028HH RSCAN0.TMDF028.UINT8[HH]
#define RSCAN0TMDF128 RSCAN0.TMDF128.UINT32
#define RSCAN0TMDF128L RSCAN0.TMDF128.UINT16[L]
#define RSCAN0TMDF128LL RSCAN0.TMDF128.UINT8[LL]
#define RSCAN0TMDF128LH RSCAN0.TMDF128.UINT8[LH]
#define RSCAN0TMDF128H RSCAN0.TMDF128.UINT16[H]
#define RSCAN0TMDF128HL RSCAN0.TMDF128.UINT8[HL]
#define RSCAN0TMDF128HH RSCAN0.TMDF128.UINT8[HH]
#define RSCAN0TMID29 RSCAN0.TMID29.UINT32
#define RSCAN0TMID29L RSCAN0.TMID29.UINT16[L]
#define RSCAN0TMID29LL RSCAN0.TMID29.UINT8[LL]
#define RSCAN0TMID29LH RSCAN0.TMID29.UINT8[LH]
#define RSCAN0TMID29H RSCAN0.TMID29.UINT16[H]
#define RSCAN0TMID29HL RSCAN0.TMID29.UINT8[HL]
#define RSCAN0TMID29HH RSCAN0.TMID29.UINT8[HH]
#define RSCAN0TMPTR29 RSCAN0.TMPTR29.UINT32
#define RSCAN0TMPTR29L RSCAN0.TMPTR29.UINT16[L]
#define RSCAN0TMPTR29LL RSCAN0.TMPTR29.UINT8[LL]
#define RSCAN0TMPTR29LH RSCAN0.TMPTR29.UINT8[LH]
#define RSCAN0TMPTR29H RSCAN0.TMPTR29.UINT16[H]
#define RSCAN0TMPTR29HL RSCAN0.TMPTR29.UINT8[HL]
#define RSCAN0TMPTR29HH RSCAN0.TMPTR29.UINT8[HH]
#define RSCAN0TMDF029 RSCAN0.TMDF029.UINT32
#define RSCAN0TMDF029L RSCAN0.TMDF029.UINT16[L]
#define RSCAN0TMDF029LL RSCAN0.TMDF029.UINT8[LL]
#define RSCAN0TMDF029LH RSCAN0.TMDF029.UINT8[LH]
#define RSCAN0TMDF029H RSCAN0.TMDF029.UINT16[H]
#define RSCAN0TMDF029HL RSCAN0.TMDF029.UINT8[HL]
#define RSCAN0TMDF029HH RSCAN0.TMDF029.UINT8[HH]
#define RSCAN0TMDF129 RSCAN0.TMDF129.UINT32
#define RSCAN0TMDF129L RSCAN0.TMDF129.UINT16[L]
#define RSCAN0TMDF129LL RSCAN0.TMDF129.UINT8[LL]
#define RSCAN0TMDF129LH RSCAN0.TMDF129.UINT8[LH]
#define RSCAN0TMDF129H RSCAN0.TMDF129.UINT16[H]
#define RSCAN0TMDF129HL RSCAN0.TMDF129.UINT8[HL]
#define RSCAN0TMDF129HH RSCAN0.TMDF129.UINT8[HH]
#define RSCAN0TMID30 RSCAN0.TMID30.UINT32
#define RSCAN0TMID30L RSCAN0.TMID30.UINT16[L]
#define RSCAN0TMID30LL RSCAN0.TMID30.UINT8[LL]
#define RSCAN0TMID30LH RSCAN0.TMID30.UINT8[LH]
#define RSCAN0TMID30H RSCAN0.TMID30.UINT16[H]
#define RSCAN0TMID30HL RSCAN0.TMID30.UINT8[HL]
#define RSCAN0TMID30HH RSCAN0.TMID30.UINT8[HH]
#define RSCAN0TMPTR30 RSCAN0.TMPTR30.UINT32
#define RSCAN0TMPTR30L RSCAN0.TMPTR30.UINT16[L]
#define RSCAN0TMPTR30LL RSCAN0.TMPTR30.UINT8[LL]
#define RSCAN0TMPTR30LH RSCAN0.TMPTR30.UINT8[LH]
#define RSCAN0TMPTR30H RSCAN0.TMPTR30.UINT16[H]
#define RSCAN0TMPTR30HL RSCAN0.TMPTR30.UINT8[HL]
#define RSCAN0TMPTR30HH RSCAN0.TMPTR30.UINT8[HH]
#define RSCAN0TMDF030 RSCAN0.TMDF030.UINT32
#define RSCAN0TMDF030L RSCAN0.TMDF030.UINT16[L]
#define RSCAN0TMDF030LL RSCAN0.TMDF030.UINT8[LL]
#define RSCAN0TMDF030LH RSCAN0.TMDF030.UINT8[LH]
#define RSCAN0TMDF030H RSCAN0.TMDF030.UINT16[H]
#define RSCAN0TMDF030HL RSCAN0.TMDF030.UINT8[HL]
#define RSCAN0TMDF030HH RSCAN0.TMDF030.UINT8[HH]
#define RSCAN0TMDF130 RSCAN0.TMDF130.UINT32
#define RSCAN0TMDF130L RSCAN0.TMDF130.UINT16[L]
#define RSCAN0TMDF130LL RSCAN0.TMDF130.UINT8[LL]
#define RSCAN0TMDF130LH RSCAN0.TMDF130.UINT8[LH]
#define RSCAN0TMDF130H RSCAN0.TMDF130.UINT16[H]
#define RSCAN0TMDF130HL RSCAN0.TMDF130.UINT8[HL]
#define RSCAN0TMDF130HH RSCAN0.TMDF130.UINT8[HH]
#define RSCAN0TMID31 RSCAN0.TMID31.UINT32
#define RSCAN0TMID31L RSCAN0.TMID31.UINT16[L]
#define RSCAN0TMID31LL RSCAN0.TMID31.UINT8[LL]
#define RSCAN0TMID31LH RSCAN0.TMID31.UINT8[LH]
#define RSCAN0TMID31H RSCAN0.TMID31.UINT16[H]
#define RSCAN0TMID31HL RSCAN0.TMID31.UINT8[HL]
#define RSCAN0TMID31HH RSCAN0.TMID31.UINT8[HH]
#define RSCAN0TMPTR31 RSCAN0.TMPTR31.UINT32
#define RSCAN0TMPTR31L RSCAN0.TMPTR31.UINT16[L]
#define RSCAN0TMPTR31LL RSCAN0.TMPTR31.UINT8[LL]
#define RSCAN0TMPTR31LH RSCAN0.TMPTR31.UINT8[LH]
#define RSCAN0TMPTR31H RSCAN0.TMPTR31.UINT16[H]
#define RSCAN0TMPTR31HL RSCAN0.TMPTR31.UINT8[HL]
#define RSCAN0TMPTR31HH RSCAN0.TMPTR31.UINT8[HH]
#define RSCAN0TMDF031 RSCAN0.TMDF031.UINT32
#define RSCAN0TMDF031L RSCAN0.TMDF031.UINT16[L]
#define RSCAN0TMDF031LL RSCAN0.TMDF031.UINT8[LL]
#define RSCAN0TMDF031LH RSCAN0.TMDF031.UINT8[LH]
#define RSCAN0TMDF031H RSCAN0.TMDF031.UINT16[H]
#define RSCAN0TMDF031HL RSCAN0.TMDF031.UINT8[HL]
#define RSCAN0TMDF031HH RSCAN0.TMDF031.UINT8[HH]
#define RSCAN0TMDF131 RSCAN0.TMDF131.UINT32
#define RSCAN0TMDF131L RSCAN0.TMDF131.UINT16[L]
#define RSCAN0TMDF131LL RSCAN0.TMDF131.UINT8[LL]
#define RSCAN0TMDF131LH RSCAN0.TMDF131.UINT8[LH]
#define RSCAN0TMDF131H RSCAN0.TMDF131.UINT16[H]
#define RSCAN0TMDF131HL RSCAN0.TMDF131.UINT8[HL]
#define RSCAN0TMDF131HH RSCAN0.TMDF131.UINT8[HH]
#define RSCAN0THLACC0 RSCAN0.THLACC0.UINT32
#define RSCAN0THLACC0L RSCAN0.THLACC0.UINT16[L]
#define RSCAN0THLACC0LL RSCAN0.THLACC0.UINT8[LL]
#define RSCAN0THLACC0LH RSCAN0.THLACC0.UINT8[LH]
#define RSCAN0THLACC0H RSCAN0.THLACC0.UINT16[H]
#define RSCAN0THLACC0HL RSCAN0.THLACC0.UINT8[HL]
#define RSCAN0THLACC0HH RSCAN0.THLACC0.UINT8[HH]
#define RSCAN0BT RSCAN0.THLACC0.BIT.BT
#define RSCAN0BN RSCAN0.THLACC0.BIT.BN
#define RSCAN0TID RSCAN0.THLACC0.BIT.TID
#define RSCAN0THLACC1 RSCAN0.THLACC1.UINT32
#define RSCAN0THLACC1L RSCAN0.THLACC1.UINT16[L]
#define RSCAN0THLACC1LL RSCAN0.THLACC1.UINT8[LL]
#define RSCAN0THLACC1LH RSCAN0.THLACC1.UINT8[LH]
#define RSCAN0THLACC1H RSCAN0.THLACC1.UINT16[H]
#define RSCAN0THLACC1HL RSCAN0.THLACC1.UINT8[HL]
#define RSCAN0THLACC1HH RSCAN0.THLACC1.UINT8[HH]
#define RSCAN0RPGACC0 RSCAN0.RPGACC0.UINT32
#define RSCAN0RPGACC0L RSCAN0.RPGACC0.UINT16[L]
#define RSCAN0RPGACC0LL RSCAN0.RPGACC0.UINT8[LL]
#define RSCAN0RPGACC0LH RSCAN0.RPGACC0.UINT8[LH]
#define RSCAN0RPGACC0H RSCAN0.RPGACC0.UINT16[H]
#define RSCAN0RPGACC0HL RSCAN0.RPGACC0.UINT8[HL]
#define RSCAN0RPGACC0HH RSCAN0.RPGACC0.UINT8[HH]
#define RSCAN0RDTA RSCAN0.RPGACC0.BIT.RDTA
#define RSCAN0RPGACC1 RSCAN0.RPGACC1.UINT32
#define RSCAN0RPGACC1L RSCAN0.RPGACC1.UINT16[L]
#define RSCAN0RPGACC1LL RSCAN0.RPGACC1.UINT8[LL]
#define RSCAN0RPGACC1LH RSCAN0.RPGACC1.UINT8[LH]
#define RSCAN0RPGACC1H RSCAN0.RPGACC1.UINT16[H]
#define RSCAN0RPGACC1HL RSCAN0.RPGACC1.UINT8[HL]
#define RSCAN0RPGACC1HH RSCAN0.RPGACC1.UINT8[HH]
#define RSCAN0RPGACC2 RSCAN0.RPGACC2.UINT32
#define RSCAN0RPGACC2L RSCAN0.RPGACC2.UINT16[L]
#define RSCAN0RPGACC2LL RSCAN0.RPGACC2.UINT8[LL]
#define RSCAN0RPGACC2LH RSCAN0.RPGACC2.UINT8[LH]
#define RSCAN0RPGACC2H RSCAN0.RPGACC2.UINT16[H]
#define RSCAN0RPGACC2HL RSCAN0.RPGACC2.UINT8[HL]
#define RSCAN0RPGACC2HH RSCAN0.RPGACC2.UINT8[HH]
#define RSCAN0RPGACC3 RSCAN0.RPGACC3.UINT32
#define RSCAN0RPGACC3L RSCAN0.RPGACC3.UINT16[L]
#define RSCAN0RPGACC3LL RSCAN0.RPGACC3.UINT8[LL]
#define RSCAN0RPGACC3LH RSCAN0.RPGACC3.UINT8[LH]
#define RSCAN0RPGACC3H RSCAN0.RPGACC3.UINT16[H]
#define RSCAN0RPGACC3HL RSCAN0.RPGACC3.UINT8[HL]
#define RSCAN0RPGACC3HH RSCAN0.RPGACC3.UINT8[HH]
#define RSCAN0RPGACC4 RSCAN0.RPGACC4.UINT32
#define RSCAN0RPGACC4L RSCAN0.RPGACC4.UINT16[L]
#define RSCAN0RPGACC4LL RSCAN0.RPGACC4.UINT8[LL]
#define RSCAN0RPGACC4LH RSCAN0.RPGACC4.UINT8[LH]
#define RSCAN0RPGACC4H RSCAN0.RPGACC4.UINT16[H]
#define RSCAN0RPGACC4HL RSCAN0.RPGACC4.UINT8[HL]
#define RSCAN0RPGACC4HH RSCAN0.RPGACC4.UINT8[HH]
#define RSCAN0RPGACC5 RSCAN0.RPGACC5.UINT32
#define RSCAN0RPGACC5L RSCAN0.RPGACC5.UINT16[L]
#define RSCAN0RPGACC5LL RSCAN0.RPGACC5.UINT8[LL]
#define RSCAN0RPGACC5LH RSCAN0.RPGACC5.UINT8[LH]
#define RSCAN0RPGACC5H RSCAN0.RPGACC5.UINT16[H]
#define RSCAN0RPGACC5HL RSCAN0.RPGACC5.UINT8[HL]
#define RSCAN0RPGACC5HH RSCAN0.RPGACC5.UINT8[HH]
#define RSCAN0RPGACC6 RSCAN0.RPGACC6.UINT32
#define RSCAN0RPGACC6L RSCAN0.RPGACC6.UINT16[L]
#define RSCAN0RPGACC6LL RSCAN0.RPGACC6.UINT8[LL]
#define RSCAN0RPGACC6LH RSCAN0.RPGACC6.UINT8[LH]
#define RSCAN0RPGACC6H RSCAN0.RPGACC6.UINT16[H]
#define RSCAN0RPGACC6HL RSCAN0.RPGACC6.UINT8[HL]
#define RSCAN0RPGACC6HH RSCAN0.RPGACC6.UINT8[HH]
#define RSCAN0RPGACC7 RSCAN0.RPGACC7.UINT32
#define RSCAN0RPGACC7L RSCAN0.RPGACC7.UINT16[L]
#define RSCAN0RPGACC7LL RSCAN0.RPGACC7.UINT8[LL]
#define RSCAN0RPGACC7LH RSCAN0.RPGACC7.UINT8[LH]
#define RSCAN0RPGACC7H RSCAN0.RPGACC7.UINT16[H]
#define RSCAN0RPGACC7HL RSCAN0.RPGACC7.UINT8[HL]
#define RSCAN0RPGACC7HH RSCAN0.RPGACC7.UINT8[HH]
#define RSCAN0RPGACC8 RSCAN0.RPGACC8.UINT32
#define RSCAN0RPGACC8L RSCAN0.RPGACC8.UINT16[L]
#define RSCAN0RPGACC8LL RSCAN0.RPGACC8.UINT8[LL]
#define RSCAN0RPGACC8LH RSCAN0.RPGACC8.UINT8[LH]
#define RSCAN0RPGACC8H RSCAN0.RPGACC8.UINT16[H]
#define RSCAN0RPGACC8HL RSCAN0.RPGACC8.UINT8[HL]
#define RSCAN0RPGACC8HH RSCAN0.RPGACC8.UINT8[HH]
#define RSCAN0RPGACC9 RSCAN0.RPGACC9.UINT32
#define RSCAN0RPGACC9L RSCAN0.RPGACC9.UINT16[L]
#define RSCAN0RPGACC9LL RSCAN0.RPGACC9.UINT8[LL]
#define RSCAN0RPGACC9LH RSCAN0.RPGACC9.UINT8[LH]
#define RSCAN0RPGACC9H RSCAN0.RPGACC9.UINT16[H]
#define RSCAN0RPGACC9HL RSCAN0.RPGACC9.UINT8[HL]
#define RSCAN0RPGACC9HH RSCAN0.RPGACC9.UINT8[HH]
#define RSCAN0RPGACC10 RSCAN0.RPGACC10.UINT32
#define RSCAN0RPGACC10L RSCAN0.RPGACC10.UINT16[L]
#define RSCAN0RPGACC10LL RSCAN0.RPGACC10.UINT8[LL]
#define RSCAN0RPGACC10LH RSCAN0.RPGACC10.UINT8[LH]
#define RSCAN0RPGACC10H RSCAN0.RPGACC10.UINT16[H]
#define RSCAN0RPGACC10HL RSCAN0.RPGACC10.UINT8[HL]
#define RSCAN0RPGACC10HH RSCAN0.RPGACC10.UINT8[HH]
#define RSCAN0RPGACC11 RSCAN0.RPGACC11.UINT32
#define RSCAN0RPGACC11L RSCAN0.RPGACC11.UINT16[L]
#define RSCAN0RPGACC11LL RSCAN0.RPGACC11.UINT8[LL]
#define RSCAN0RPGACC11LH RSCAN0.RPGACC11.UINT8[LH]
#define RSCAN0RPGACC11H RSCAN0.RPGACC11.UINT16[H]
#define RSCAN0RPGACC11HL RSCAN0.RPGACC11.UINT8[HL]
#define RSCAN0RPGACC11HH RSCAN0.RPGACC11.UINT8[HH]
#define RSCAN0RPGACC12 RSCAN0.RPGACC12.UINT32
#define RSCAN0RPGACC12L RSCAN0.RPGACC12.UINT16[L]
#define RSCAN0RPGACC12LL RSCAN0.RPGACC12.UINT8[LL]
#define RSCAN0RPGACC12LH RSCAN0.RPGACC12.UINT8[LH]
#define RSCAN0RPGACC12H RSCAN0.RPGACC12.UINT16[H]
#define RSCAN0RPGACC12HL RSCAN0.RPGACC12.UINT8[HL]
#define RSCAN0RPGACC12HH RSCAN0.RPGACC12.UINT8[HH]
#define RSCAN0RPGACC13 RSCAN0.RPGACC13.UINT32
#define RSCAN0RPGACC13L RSCAN0.RPGACC13.UINT16[L]
#define RSCAN0RPGACC13LL RSCAN0.RPGACC13.UINT8[LL]
#define RSCAN0RPGACC13LH RSCAN0.RPGACC13.UINT8[LH]
#define RSCAN0RPGACC13H RSCAN0.RPGACC13.UINT16[H]
#define RSCAN0RPGACC13HL RSCAN0.RPGACC13.UINT8[HL]
#define RSCAN0RPGACC13HH RSCAN0.RPGACC13.UINT8[HH]
#define RSCAN0RPGACC14 RSCAN0.RPGACC14.UINT32
#define RSCAN0RPGACC14L RSCAN0.RPGACC14.UINT16[L]
#define RSCAN0RPGACC14LL RSCAN0.RPGACC14.UINT8[LL]
#define RSCAN0RPGACC14LH RSCAN0.RPGACC14.UINT8[LH]
#define RSCAN0RPGACC14H RSCAN0.RPGACC14.UINT16[H]
#define RSCAN0RPGACC14HL RSCAN0.RPGACC14.UINT8[HL]
#define RSCAN0RPGACC14HH RSCAN0.RPGACC14.UINT8[HH]
#define RSCAN0RPGACC15 RSCAN0.RPGACC15.UINT32
#define RSCAN0RPGACC15L RSCAN0.RPGACC15.UINT16[L]
#define RSCAN0RPGACC15LL RSCAN0.RPGACC15.UINT8[LL]
#define RSCAN0RPGACC15LH RSCAN0.RPGACC15.UINT8[LH]
#define RSCAN0RPGACC15H RSCAN0.RPGACC15.UINT16[H]
#define RSCAN0RPGACC15HL RSCAN0.RPGACC15.UINT8[HL]
#define RSCAN0RPGACC15HH RSCAN0.RPGACC15.UINT8[HH]
#define RSCAN0RPGACC16 RSCAN0.RPGACC16.UINT32
#define RSCAN0RPGACC16L RSCAN0.RPGACC16.UINT16[L]
#define RSCAN0RPGACC16LL RSCAN0.RPGACC16.UINT8[LL]
#define RSCAN0RPGACC16LH RSCAN0.RPGACC16.UINT8[LH]
#define RSCAN0RPGACC16H RSCAN0.RPGACC16.UINT16[H]
#define RSCAN0RPGACC16HL RSCAN0.RPGACC16.UINT8[HL]
#define RSCAN0RPGACC16HH RSCAN0.RPGACC16.UINT8[HH]
#define RSCAN0RPGACC17 RSCAN0.RPGACC17.UINT32
#define RSCAN0RPGACC17L RSCAN0.RPGACC17.UINT16[L]
#define RSCAN0RPGACC17LL RSCAN0.RPGACC17.UINT8[LL]
#define RSCAN0RPGACC17LH RSCAN0.RPGACC17.UINT8[LH]
#define RSCAN0RPGACC17H RSCAN0.RPGACC17.UINT16[H]
#define RSCAN0RPGACC17HL RSCAN0.RPGACC17.UINT8[HL]
#define RSCAN0RPGACC17HH RSCAN0.RPGACC17.UINT8[HH]
#define RSCAN0RPGACC18 RSCAN0.RPGACC18.UINT32
#define RSCAN0RPGACC18L RSCAN0.RPGACC18.UINT16[L]
#define RSCAN0RPGACC18LL RSCAN0.RPGACC18.UINT8[LL]
#define RSCAN0RPGACC18LH RSCAN0.RPGACC18.UINT8[LH]
#define RSCAN0RPGACC18H RSCAN0.RPGACC18.UINT16[H]
#define RSCAN0RPGACC18HL RSCAN0.RPGACC18.UINT8[HL]
#define RSCAN0RPGACC18HH RSCAN0.RPGACC18.UINT8[HH]
#define RSCAN0RPGACC19 RSCAN0.RPGACC19.UINT32
#define RSCAN0RPGACC19L RSCAN0.RPGACC19.UINT16[L]
#define RSCAN0RPGACC19LL RSCAN0.RPGACC19.UINT8[LL]
#define RSCAN0RPGACC19LH RSCAN0.RPGACC19.UINT8[LH]
#define RSCAN0RPGACC19H RSCAN0.RPGACC19.UINT16[H]
#define RSCAN0RPGACC19HL RSCAN0.RPGACC19.UINT8[HL]
#define RSCAN0RPGACC19HH RSCAN0.RPGACC19.UINT8[HH]
#define RSCAN0RPGACC20 RSCAN0.RPGACC20.UINT32
#define RSCAN0RPGACC20L RSCAN0.RPGACC20.UINT16[L]
#define RSCAN0RPGACC20LL RSCAN0.RPGACC20.UINT8[LL]
#define RSCAN0RPGACC20LH RSCAN0.RPGACC20.UINT8[LH]
#define RSCAN0RPGACC20H RSCAN0.RPGACC20.UINT16[H]
#define RSCAN0RPGACC20HL RSCAN0.RPGACC20.UINT8[HL]
#define RSCAN0RPGACC20HH RSCAN0.RPGACC20.UINT8[HH]
#define RSCAN0RPGACC21 RSCAN0.RPGACC21.UINT32
#define RSCAN0RPGACC21L RSCAN0.RPGACC21.UINT16[L]
#define RSCAN0RPGACC21LL RSCAN0.RPGACC21.UINT8[LL]
#define RSCAN0RPGACC21LH RSCAN0.RPGACC21.UINT8[LH]
#define RSCAN0RPGACC21H RSCAN0.RPGACC21.UINT16[H]
#define RSCAN0RPGACC21HL RSCAN0.RPGACC21.UINT8[HL]
#define RSCAN0RPGACC21HH RSCAN0.RPGACC21.UINT8[HH]
#define RSCAN0RPGACC22 RSCAN0.RPGACC22.UINT32
#define RSCAN0RPGACC22L RSCAN0.RPGACC22.UINT16[L]
#define RSCAN0RPGACC22LL RSCAN0.RPGACC22.UINT8[LL]
#define RSCAN0RPGACC22LH RSCAN0.RPGACC22.UINT8[LH]
#define RSCAN0RPGACC22H RSCAN0.RPGACC22.UINT16[H]
#define RSCAN0RPGACC22HL RSCAN0.RPGACC22.UINT8[HL]
#define RSCAN0RPGACC22HH RSCAN0.RPGACC22.UINT8[HH]
#define RSCAN0RPGACC23 RSCAN0.RPGACC23.UINT32
#define RSCAN0RPGACC23L RSCAN0.RPGACC23.UINT16[L]
#define RSCAN0RPGACC23LL RSCAN0.RPGACC23.UINT8[LL]
#define RSCAN0RPGACC23LH RSCAN0.RPGACC23.UINT8[LH]
#define RSCAN0RPGACC23H RSCAN0.RPGACC23.UINT16[H]
#define RSCAN0RPGACC23HL RSCAN0.RPGACC23.UINT8[HL]
#define RSCAN0RPGACC23HH RSCAN0.RPGACC23.UINT8[HH]
#define RSCAN0RPGACC24 RSCAN0.RPGACC24.UINT32
#define RSCAN0RPGACC24L RSCAN0.RPGACC24.UINT16[L]
#define RSCAN0RPGACC24LL RSCAN0.RPGACC24.UINT8[LL]
#define RSCAN0RPGACC24LH RSCAN0.RPGACC24.UINT8[LH]
#define RSCAN0RPGACC24H RSCAN0.RPGACC24.UINT16[H]
#define RSCAN0RPGACC24HL RSCAN0.RPGACC24.UINT8[HL]
#define RSCAN0RPGACC24HH RSCAN0.RPGACC24.UINT8[HH]
#define RSCAN0RPGACC25 RSCAN0.RPGACC25.UINT32
#define RSCAN0RPGACC25L RSCAN0.RPGACC25.UINT16[L]
#define RSCAN0RPGACC25LL RSCAN0.RPGACC25.UINT8[LL]
#define RSCAN0RPGACC25LH RSCAN0.RPGACC25.UINT8[LH]
#define RSCAN0RPGACC25H RSCAN0.RPGACC25.UINT16[H]
#define RSCAN0RPGACC25HL RSCAN0.RPGACC25.UINT8[HL]
#define RSCAN0RPGACC25HH RSCAN0.RPGACC25.UINT8[HH]
#define RSCAN0RPGACC26 RSCAN0.RPGACC26.UINT32
#define RSCAN0RPGACC26L RSCAN0.RPGACC26.UINT16[L]
#define RSCAN0RPGACC26LL RSCAN0.RPGACC26.UINT8[LL]
#define RSCAN0RPGACC26LH RSCAN0.RPGACC26.UINT8[LH]
#define RSCAN0RPGACC26H RSCAN0.RPGACC26.UINT16[H]
#define RSCAN0RPGACC26HL RSCAN0.RPGACC26.UINT8[HL]
#define RSCAN0RPGACC26HH RSCAN0.RPGACC26.UINT8[HH]
#define RSCAN0RPGACC27 RSCAN0.RPGACC27.UINT32
#define RSCAN0RPGACC27L RSCAN0.RPGACC27.UINT16[L]
#define RSCAN0RPGACC27LL RSCAN0.RPGACC27.UINT8[LL]
#define RSCAN0RPGACC27LH RSCAN0.RPGACC27.UINT8[LH]
#define RSCAN0RPGACC27H RSCAN0.RPGACC27.UINT16[H]
#define RSCAN0RPGACC27HL RSCAN0.RPGACC27.UINT8[HL]
#define RSCAN0RPGACC27HH RSCAN0.RPGACC27.UINT8[HH]
#define RSCAN0RPGACC28 RSCAN0.RPGACC28.UINT32
#define RSCAN0RPGACC28L RSCAN0.RPGACC28.UINT16[L]
#define RSCAN0RPGACC28LL RSCAN0.RPGACC28.UINT8[LL]
#define RSCAN0RPGACC28LH RSCAN0.RPGACC28.UINT8[LH]
#define RSCAN0RPGACC28H RSCAN0.RPGACC28.UINT16[H]
#define RSCAN0RPGACC28HL RSCAN0.RPGACC28.UINT8[HL]
#define RSCAN0RPGACC28HH RSCAN0.RPGACC28.UINT8[HH]
#define RSCAN0RPGACC29 RSCAN0.RPGACC29.UINT32
#define RSCAN0RPGACC29L RSCAN0.RPGACC29.UINT16[L]
#define RSCAN0RPGACC29LL RSCAN0.RPGACC29.UINT8[LL]
#define RSCAN0RPGACC29LH RSCAN0.RPGACC29.UINT8[LH]
#define RSCAN0RPGACC29H RSCAN0.RPGACC29.UINT16[H]
#define RSCAN0RPGACC29HL RSCAN0.RPGACC29.UINT8[HL]
#define RSCAN0RPGACC29HH RSCAN0.RPGACC29.UINT8[HH]
#define RSCAN0RPGACC30 RSCAN0.RPGACC30.UINT32
#define RSCAN0RPGACC30L RSCAN0.RPGACC30.UINT16[L]
#define RSCAN0RPGACC30LL RSCAN0.RPGACC30.UINT8[LL]
#define RSCAN0RPGACC30LH RSCAN0.RPGACC30.UINT8[LH]
#define RSCAN0RPGACC30H RSCAN0.RPGACC30.UINT16[H]
#define RSCAN0RPGACC30HL RSCAN0.RPGACC30.UINT8[HL]
#define RSCAN0RPGACC30HH RSCAN0.RPGACC30.UINT8[HH]
#define RSCAN0RPGACC31 RSCAN0.RPGACC31.UINT32
#define RSCAN0RPGACC31L RSCAN0.RPGACC31.UINT16[L]
#define RSCAN0RPGACC31LL RSCAN0.RPGACC31.UINT8[LL]
#define RSCAN0RPGACC31LH RSCAN0.RPGACC31.UINT8[LH]
#define RSCAN0RPGACC31H RSCAN0.RPGACC31.UINT16[H]
#define RSCAN0RPGACC31HL RSCAN0.RPGACC31.UINT8[HL]
#define RSCAN0RPGACC31HH RSCAN0.RPGACC31.UINT8[HH]
#define RSCAN0RPGACC32 RSCAN0.RPGACC32.UINT32
#define RSCAN0RPGACC32L RSCAN0.RPGACC32.UINT16[L]
#define RSCAN0RPGACC32LL RSCAN0.RPGACC32.UINT8[LL]
#define RSCAN0RPGACC32LH RSCAN0.RPGACC32.UINT8[LH]
#define RSCAN0RPGACC32H RSCAN0.RPGACC32.UINT16[H]
#define RSCAN0RPGACC32HL RSCAN0.RPGACC32.UINT8[HL]
#define RSCAN0RPGACC32HH RSCAN0.RPGACC32.UINT8[HH]
#define RSCAN0RPGACC33 RSCAN0.RPGACC33.UINT32
#define RSCAN0RPGACC33L RSCAN0.RPGACC33.UINT16[L]
#define RSCAN0RPGACC33LL RSCAN0.RPGACC33.UINT8[LL]
#define RSCAN0RPGACC33LH RSCAN0.RPGACC33.UINT8[LH]
#define RSCAN0RPGACC33H RSCAN0.RPGACC33.UINT16[H]
#define RSCAN0RPGACC33HL RSCAN0.RPGACC33.UINT8[HL]
#define RSCAN0RPGACC33HH RSCAN0.RPGACC33.UINT8[HH]
#define RSCAN0RPGACC34 RSCAN0.RPGACC34.UINT32
#define RSCAN0RPGACC34L RSCAN0.RPGACC34.UINT16[L]
#define RSCAN0RPGACC34LL RSCAN0.RPGACC34.UINT8[LL]
#define RSCAN0RPGACC34LH RSCAN0.RPGACC34.UINT8[LH]
#define RSCAN0RPGACC34H RSCAN0.RPGACC34.UINT16[H]
#define RSCAN0RPGACC34HL RSCAN0.RPGACC34.UINT8[HL]
#define RSCAN0RPGACC34HH RSCAN0.RPGACC34.UINT8[HH]
#define RSCAN0RPGACC35 RSCAN0.RPGACC35.UINT32
#define RSCAN0RPGACC35L RSCAN0.RPGACC35.UINT16[L]
#define RSCAN0RPGACC35LL RSCAN0.RPGACC35.UINT8[LL]
#define RSCAN0RPGACC35LH RSCAN0.RPGACC35.UINT8[LH]
#define RSCAN0RPGACC35H RSCAN0.RPGACC35.UINT16[H]
#define RSCAN0RPGACC35HL RSCAN0.RPGACC35.UINT8[HL]
#define RSCAN0RPGACC35HH RSCAN0.RPGACC35.UINT8[HH]
#define RSCAN0RPGACC36 RSCAN0.RPGACC36.UINT32
#define RSCAN0RPGACC36L RSCAN0.RPGACC36.UINT16[L]
#define RSCAN0RPGACC36LL RSCAN0.RPGACC36.UINT8[LL]
#define RSCAN0RPGACC36LH RSCAN0.RPGACC36.UINT8[LH]
#define RSCAN0RPGACC36H RSCAN0.RPGACC36.UINT16[H]
#define RSCAN0RPGACC36HL RSCAN0.RPGACC36.UINT8[HL]
#define RSCAN0RPGACC36HH RSCAN0.RPGACC36.UINT8[HH]
#define RSCAN0RPGACC37 RSCAN0.RPGACC37.UINT32
#define RSCAN0RPGACC37L RSCAN0.RPGACC37.UINT16[L]
#define RSCAN0RPGACC37LL RSCAN0.RPGACC37.UINT8[LL]
#define RSCAN0RPGACC37LH RSCAN0.RPGACC37.UINT8[LH]
#define RSCAN0RPGACC37H RSCAN0.RPGACC37.UINT16[H]
#define RSCAN0RPGACC37HL RSCAN0.RPGACC37.UINT8[HL]
#define RSCAN0RPGACC37HH RSCAN0.RPGACC37.UINT8[HH]
#define RSCAN0RPGACC38 RSCAN0.RPGACC38.UINT32
#define RSCAN0RPGACC38L RSCAN0.RPGACC38.UINT16[L]
#define RSCAN0RPGACC38LL RSCAN0.RPGACC38.UINT8[LL]
#define RSCAN0RPGACC38LH RSCAN0.RPGACC38.UINT8[LH]
#define RSCAN0RPGACC38H RSCAN0.RPGACC38.UINT16[H]
#define RSCAN0RPGACC38HL RSCAN0.RPGACC38.UINT8[HL]
#define RSCAN0RPGACC38HH RSCAN0.RPGACC38.UINT8[HH]
#define RSCAN0RPGACC39 RSCAN0.RPGACC39.UINT32
#define RSCAN0RPGACC39L RSCAN0.RPGACC39.UINT16[L]
#define RSCAN0RPGACC39LL RSCAN0.RPGACC39.UINT8[LL]
#define RSCAN0RPGACC39LH RSCAN0.RPGACC39.UINT8[LH]
#define RSCAN0RPGACC39H RSCAN0.RPGACC39.UINT16[H]
#define RSCAN0RPGACC39HL RSCAN0.RPGACC39.UINT8[HL]
#define RSCAN0RPGACC39HH RSCAN0.RPGACC39.UINT8[HH]
#define RSCAN0RPGACC40 RSCAN0.RPGACC40.UINT32
#define RSCAN0RPGACC40L RSCAN0.RPGACC40.UINT16[L]
#define RSCAN0RPGACC40LL RSCAN0.RPGACC40.UINT8[LL]
#define RSCAN0RPGACC40LH RSCAN0.RPGACC40.UINT8[LH]
#define RSCAN0RPGACC40H RSCAN0.RPGACC40.UINT16[H]
#define RSCAN0RPGACC40HL RSCAN0.RPGACC40.UINT8[HL]
#define RSCAN0RPGACC40HH RSCAN0.RPGACC40.UINT8[HH]
#define RSCAN0RPGACC41 RSCAN0.RPGACC41.UINT32
#define RSCAN0RPGACC41L RSCAN0.RPGACC41.UINT16[L]
#define RSCAN0RPGACC41LL RSCAN0.RPGACC41.UINT8[LL]
#define RSCAN0RPGACC41LH RSCAN0.RPGACC41.UINT8[LH]
#define RSCAN0RPGACC41H RSCAN0.RPGACC41.UINT16[H]
#define RSCAN0RPGACC41HL RSCAN0.RPGACC41.UINT8[HL]
#define RSCAN0RPGACC41HH RSCAN0.RPGACC41.UINT8[HH]
#define RSCAN0RPGACC42 RSCAN0.RPGACC42.UINT32
#define RSCAN0RPGACC42L RSCAN0.RPGACC42.UINT16[L]
#define RSCAN0RPGACC42LL RSCAN0.RPGACC42.UINT8[LL]
#define RSCAN0RPGACC42LH RSCAN0.RPGACC42.UINT8[LH]
#define RSCAN0RPGACC42H RSCAN0.RPGACC42.UINT16[H]
#define RSCAN0RPGACC42HL RSCAN0.RPGACC42.UINT8[HL]
#define RSCAN0RPGACC42HH RSCAN0.RPGACC42.UINT8[HH]
#define RSCAN0RPGACC43 RSCAN0.RPGACC43.UINT32
#define RSCAN0RPGACC43L RSCAN0.RPGACC43.UINT16[L]
#define RSCAN0RPGACC43LL RSCAN0.RPGACC43.UINT8[LL]
#define RSCAN0RPGACC43LH RSCAN0.RPGACC43.UINT8[LH]
#define RSCAN0RPGACC43H RSCAN0.RPGACC43.UINT16[H]
#define RSCAN0RPGACC43HL RSCAN0.RPGACC43.UINT8[HL]
#define RSCAN0RPGACC43HH RSCAN0.RPGACC43.UINT8[HH]
#define RSCAN0RPGACC44 RSCAN0.RPGACC44.UINT32
#define RSCAN0RPGACC44L RSCAN0.RPGACC44.UINT16[L]
#define RSCAN0RPGACC44LL RSCAN0.RPGACC44.UINT8[LL]
#define RSCAN0RPGACC44LH RSCAN0.RPGACC44.UINT8[LH]
#define RSCAN0RPGACC44H RSCAN0.RPGACC44.UINT16[H]
#define RSCAN0RPGACC44HL RSCAN0.RPGACC44.UINT8[HL]
#define RSCAN0RPGACC44HH RSCAN0.RPGACC44.UINT8[HH]
#define RSCAN0RPGACC45 RSCAN0.RPGACC45.UINT32
#define RSCAN0RPGACC45L RSCAN0.RPGACC45.UINT16[L]
#define RSCAN0RPGACC45LL RSCAN0.RPGACC45.UINT8[LL]
#define RSCAN0RPGACC45LH RSCAN0.RPGACC45.UINT8[LH]
#define RSCAN0RPGACC45H RSCAN0.RPGACC45.UINT16[H]
#define RSCAN0RPGACC45HL RSCAN0.RPGACC45.UINT8[HL]
#define RSCAN0RPGACC45HH RSCAN0.RPGACC45.UINT8[HH]
#define RSCAN0RPGACC46 RSCAN0.RPGACC46.UINT32
#define RSCAN0RPGACC46L RSCAN0.RPGACC46.UINT16[L]
#define RSCAN0RPGACC46LL RSCAN0.RPGACC46.UINT8[LL]
#define RSCAN0RPGACC46LH RSCAN0.RPGACC46.UINT8[LH]
#define RSCAN0RPGACC46H RSCAN0.RPGACC46.UINT16[H]
#define RSCAN0RPGACC46HL RSCAN0.RPGACC46.UINT8[HL]
#define RSCAN0RPGACC46HH RSCAN0.RPGACC46.UINT8[HH]
#define RSCAN0RPGACC47 RSCAN0.RPGACC47.UINT32
#define RSCAN0RPGACC47L RSCAN0.RPGACC47.UINT16[L]
#define RSCAN0RPGACC47LL RSCAN0.RPGACC47.UINT8[LL]
#define RSCAN0RPGACC47LH RSCAN0.RPGACC47.UINT8[LH]
#define RSCAN0RPGACC47H RSCAN0.RPGACC47.UINT16[H]
#define RSCAN0RPGACC47HL RSCAN0.RPGACC47.UINT8[HL]
#define RSCAN0RPGACC47HH RSCAN0.RPGACC47.UINT8[HH]
#define RSCAN0RPGACC48 RSCAN0.RPGACC48.UINT32
#define RSCAN0RPGACC48L RSCAN0.RPGACC48.UINT16[L]
#define RSCAN0RPGACC48LL RSCAN0.RPGACC48.UINT8[LL]
#define RSCAN0RPGACC48LH RSCAN0.RPGACC48.UINT8[LH]
#define RSCAN0RPGACC48H RSCAN0.RPGACC48.UINT16[H]
#define RSCAN0RPGACC48HL RSCAN0.RPGACC48.UINT8[HL]
#define RSCAN0RPGACC48HH RSCAN0.RPGACC48.UINT8[HH]
#define RSCAN0RPGACC49 RSCAN0.RPGACC49.UINT32
#define RSCAN0RPGACC49L RSCAN0.RPGACC49.UINT16[L]
#define RSCAN0RPGACC49LL RSCAN0.RPGACC49.UINT8[LL]
#define RSCAN0RPGACC49LH RSCAN0.RPGACC49.UINT8[LH]
#define RSCAN0RPGACC49H RSCAN0.RPGACC49.UINT16[H]
#define RSCAN0RPGACC49HL RSCAN0.RPGACC49.UINT8[HL]
#define RSCAN0RPGACC49HH RSCAN0.RPGACC49.UINT8[HH]
#define RSCAN0RPGACC50 RSCAN0.RPGACC50.UINT32
#define RSCAN0RPGACC50L RSCAN0.RPGACC50.UINT16[L]
#define RSCAN0RPGACC50LL RSCAN0.RPGACC50.UINT8[LL]
#define RSCAN0RPGACC50LH RSCAN0.RPGACC50.UINT8[LH]
#define RSCAN0RPGACC50H RSCAN0.RPGACC50.UINT16[H]
#define RSCAN0RPGACC50HL RSCAN0.RPGACC50.UINT8[HL]
#define RSCAN0RPGACC50HH RSCAN0.RPGACC50.UINT8[HH]
#define RSCAN0RPGACC51 RSCAN0.RPGACC51.UINT32
#define RSCAN0RPGACC51L RSCAN0.RPGACC51.UINT16[L]
#define RSCAN0RPGACC51LL RSCAN0.RPGACC51.UINT8[LL]
#define RSCAN0RPGACC51LH RSCAN0.RPGACC51.UINT8[LH]
#define RSCAN0RPGACC51H RSCAN0.RPGACC51.UINT16[H]
#define RSCAN0RPGACC51HL RSCAN0.RPGACC51.UINT8[HL]
#define RSCAN0RPGACC51HH RSCAN0.RPGACC51.UINT8[HH]
#define RSCAN0RPGACC52 RSCAN0.RPGACC52.UINT32
#define RSCAN0RPGACC52L RSCAN0.RPGACC52.UINT16[L]
#define RSCAN0RPGACC52LL RSCAN0.RPGACC52.UINT8[LL]
#define RSCAN0RPGACC52LH RSCAN0.RPGACC52.UINT8[LH]
#define RSCAN0RPGACC52H RSCAN0.RPGACC52.UINT16[H]
#define RSCAN0RPGACC52HL RSCAN0.RPGACC52.UINT8[HL]
#define RSCAN0RPGACC52HH RSCAN0.RPGACC52.UINT8[HH]
#define RSCAN0RPGACC53 RSCAN0.RPGACC53.UINT32
#define RSCAN0RPGACC53L RSCAN0.RPGACC53.UINT16[L]
#define RSCAN0RPGACC53LL RSCAN0.RPGACC53.UINT8[LL]
#define RSCAN0RPGACC53LH RSCAN0.RPGACC53.UINT8[LH]
#define RSCAN0RPGACC53H RSCAN0.RPGACC53.UINT16[H]
#define RSCAN0RPGACC53HL RSCAN0.RPGACC53.UINT8[HL]
#define RSCAN0RPGACC53HH RSCAN0.RPGACC53.UINT8[HH]
#define RSCAN0RPGACC54 RSCAN0.RPGACC54.UINT32
#define RSCAN0RPGACC54L RSCAN0.RPGACC54.UINT16[L]
#define RSCAN0RPGACC54LL RSCAN0.RPGACC54.UINT8[LL]
#define RSCAN0RPGACC54LH RSCAN0.RPGACC54.UINT8[LH]
#define RSCAN0RPGACC54H RSCAN0.RPGACC54.UINT16[H]
#define RSCAN0RPGACC54HL RSCAN0.RPGACC54.UINT8[HL]
#define RSCAN0RPGACC54HH RSCAN0.RPGACC54.UINT8[HH]
#define RSCAN0RPGACC55 RSCAN0.RPGACC55.UINT32
#define RSCAN0RPGACC55L RSCAN0.RPGACC55.UINT16[L]
#define RSCAN0RPGACC55LL RSCAN0.RPGACC55.UINT8[LL]
#define RSCAN0RPGACC55LH RSCAN0.RPGACC55.UINT8[LH]
#define RSCAN0RPGACC55H RSCAN0.RPGACC55.UINT16[H]
#define RSCAN0RPGACC55HL RSCAN0.RPGACC55.UINT8[HL]
#define RSCAN0RPGACC55HH RSCAN0.RPGACC55.UINT8[HH]
#define RSCAN0RPGACC56 RSCAN0.RPGACC56.UINT32
#define RSCAN0RPGACC56L RSCAN0.RPGACC56.UINT16[L]
#define RSCAN0RPGACC56LL RSCAN0.RPGACC56.UINT8[LL]
#define RSCAN0RPGACC56LH RSCAN0.RPGACC56.UINT8[LH]
#define RSCAN0RPGACC56H RSCAN0.RPGACC56.UINT16[H]
#define RSCAN0RPGACC56HL RSCAN0.RPGACC56.UINT8[HL]
#define RSCAN0RPGACC56HH RSCAN0.RPGACC56.UINT8[HH]
#define RSCAN0RPGACC57 RSCAN0.RPGACC57.UINT32
#define RSCAN0RPGACC57L RSCAN0.RPGACC57.UINT16[L]
#define RSCAN0RPGACC57LL RSCAN0.RPGACC57.UINT8[LL]
#define RSCAN0RPGACC57LH RSCAN0.RPGACC57.UINT8[LH]
#define RSCAN0RPGACC57H RSCAN0.RPGACC57.UINT16[H]
#define RSCAN0RPGACC57HL RSCAN0.RPGACC57.UINT8[HL]
#define RSCAN0RPGACC57HH RSCAN0.RPGACC57.UINT8[HH]
#define RSCAN0RPGACC58 RSCAN0.RPGACC58.UINT32
#define RSCAN0RPGACC58L RSCAN0.RPGACC58.UINT16[L]
#define RSCAN0RPGACC58LL RSCAN0.RPGACC58.UINT8[LL]
#define RSCAN0RPGACC58LH RSCAN0.RPGACC58.UINT8[LH]
#define RSCAN0RPGACC58H RSCAN0.RPGACC58.UINT16[H]
#define RSCAN0RPGACC58HL RSCAN0.RPGACC58.UINT8[HL]
#define RSCAN0RPGACC58HH RSCAN0.RPGACC58.UINT8[HH]
#define RSCAN0RPGACC59 RSCAN0.RPGACC59.UINT32
#define RSCAN0RPGACC59L RSCAN0.RPGACC59.UINT16[L]
#define RSCAN0RPGACC59LL RSCAN0.RPGACC59.UINT8[LL]
#define RSCAN0RPGACC59LH RSCAN0.RPGACC59.UINT8[LH]
#define RSCAN0RPGACC59H RSCAN0.RPGACC59.UINT16[H]
#define RSCAN0RPGACC59HL RSCAN0.RPGACC59.UINT8[HL]
#define RSCAN0RPGACC59HH RSCAN0.RPGACC59.UINT8[HH]
#define RSCAN0RPGACC60 RSCAN0.RPGACC60.UINT32
#define RSCAN0RPGACC60L RSCAN0.RPGACC60.UINT16[L]
#define RSCAN0RPGACC60LL RSCAN0.RPGACC60.UINT8[LL]
#define RSCAN0RPGACC60LH RSCAN0.RPGACC60.UINT8[LH]
#define RSCAN0RPGACC60H RSCAN0.RPGACC60.UINT16[H]
#define RSCAN0RPGACC60HL RSCAN0.RPGACC60.UINT8[HL]
#define RSCAN0RPGACC60HH RSCAN0.RPGACC60.UINT8[HH]
#define RSCAN0RPGACC61 RSCAN0.RPGACC61.UINT32
#define RSCAN0RPGACC61L RSCAN0.RPGACC61.UINT16[L]
#define RSCAN0RPGACC61LL RSCAN0.RPGACC61.UINT8[LL]
#define RSCAN0RPGACC61LH RSCAN0.RPGACC61.UINT8[LH]
#define RSCAN0RPGACC61H RSCAN0.RPGACC61.UINT16[H]
#define RSCAN0RPGACC61HL RSCAN0.RPGACC61.UINT8[HL]
#define RSCAN0RPGACC61HH RSCAN0.RPGACC61.UINT8[HH]
#define RSCAN0RPGACC62 RSCAN0.RPGACC62.UINT32
#define RSCAN0RPGACC62L RSCAN0.RPGACC62.UINT16[L]
#define RSCAN0RPGACC62LL RSCAN0.RPGACC62.UINT8[LL]
#define RSCAN0RPGACC62LH RSCAN0.RPGACC62.UINT8[LH]
#define RSCAN0RPGACC62H RSCAN0.RPGACC62.UINT16[H]
#define RSCAN0RPGACC62HL RSCAN0.RPGACC62.UINT8[HL]
#define RSCAN0RPGACC62HH RSCAN0.RPGACC62.UINT8[HH]
#define RSCAN0RPGACC63 RSCAN0.RPGACC63.UINT32
#define RSCAN0RPGACC63L RSCAN0.RPGACC63.UINT16[L]
#define RSCAN0RPGACC63LL RSCAN0.RPGACC63.UINT8[LL]
#define RSCAN0RPGACC63LH RSCAN0.RPGACC63.UINT8[LH]
#define RSCAN0RPGACC63H RSCAN0.RPGACC63.UINT16[H]
#define RSCAN0RPGACC63HL RSCAN0.RPGACC63.UINT8[HL]
#define RSCAN0RPGACC63HH RSCAN0.RPGACC63.UINT8[HH]

#endif
