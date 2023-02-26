/**********************************************************************************************************************
* Module File Name  : tsg3_regs.h
* Module Description: Motor Control Timer Peripheral Registers
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

#ifndef TSG3_REGS_H
#define TSG3_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 TO1:1;                                          /* TO1              */
    uint16 TO2:1;                                          /* TO2              */
    uint16 TO3:1;                                          /* TO3              */
    uint16 TO4:1;                                          /* TO4              */
    uint16 TO5:1;                                          /* TO5              */
    uint16 TO6:1;                                          /* TO6              */
    uint16 :2;                                             /* Reserved Bits    */
    uint16 OL1:1;                                          /* OL1              */
    uint16 OL2:1;                                          /* OL2              */
    uint16 OL3:1;                                          /* OL3              */
    uint16 OL4:1;                                          /* OL4              */
    uint16 OL5:1;                                          /* OL5              */
    uint16 OL6:1;                                          /* OL6              */
    uint16 :1;                                             /* Reserved Bits    */
} __type752;
typedef struct 
{                                                          /* Bit Access       */
    uint8  RMC:1;                                          /* RMC              */
    uint8  RIA:1;                                          /* RIA              */
    uint8  :6;                                             /* Reserved Bits    */
} __type753;
typedef struct 
{                                                          /* Bit Access       */
    uint16 AT00:1;                                         /* AT00             */
    uint16 AT01:1;                                         /* AT01             */
    uint16 AT02:1;                                         /* AT02             */
    uint16 AT03:1;                                         /* AT03             */
    uint16 AT04:1;                                         /* AT04             */
    uint16 AT05:1;                                         /* AT05             */
    uint16 AT06:1;                                         /* AT06             */
    uint16 AT07:1;                                         /* AT07             */
    uint16 AT08:1;                                         /* AT08             */
    uint16 AT09:1;                                         /* AT09             */
    uint16 ACC:2;                                          /* ACC[11:10]       */
    uint16 :4;                                             /* Reserved Bits    */
} __type754;
typedef struct 
{                                                          /* Bit Access       */
    uint16 AT10:1;                                         /* AT10             */
    uint16 AT11:1;                                         /* AT11             */
    uint16 AT12:1;                                         /* AT12             */
    uint16 AT13:1;                                         /* AT13             */
    uint16 AT14:1;                                         /* AT14             */
    uint16 AT15:1;                                         /* AT15             */
    uint16 AT16:1;                                         /* AT16             */
    uint16 AT17:1;                                         /* AT17             */
    uint16 AT18:1;                                         /* AT18             */
    uint16 AT19:1;                                         /* AT19             */
    uint16 ACC:2;                                          /* ACC[11:10]       */
    uint16 :4;                                             /* Reserved Bits    */
} __type755;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  TE:1;                                     /* TE               */
    const uint8  RSF:1;                                    /* RSF              */
    const uint8  SUF:1;                                    /* SUF              */
    const uint8  CUF:1;                                    /* CUF              */
    uint8  :4;                                             /* Reserved Bits    */
} __type756;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  OPF:3;                                    /* OPF[2:0]         */
    const uint8  TSF:1;                                    /* TSF              */
    uint8  :4;                                             /* Reserved Bits    */
} __type757;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :1;                                             /* Reserved Bits    */
    const uint16 PTF:1;                                    /* PTF              */
    const uint16 PRF:1;                                    /* PRF              */
    const uint16 NDF:1;                                    /* NDF              */
    const uint16 TDF:1;                                    /* TDF              */
    const uint16 PEF:1;                                    /* PEF              */
    const uint16 PPF:1;                                    /* PPF              */
    const uint16 TBF0:1;                                   /* TBF0             */
    const uint16 TBF1:1;                                   /* TBF1             */
    const uint16 TBF2:1;                                   /* TBF2             */
    uint16 :6;                                             /* Reserved Bits    */
} __type758;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 PTR:1;                                          /* PTR              */
    uint16 PRR:1;                                          /* PRR              */
    uint16 NDR:1;                                          /* NDR              */
    uint16 TDR:1;                                          /* TDR              */
    uint16 PER:1;                                          /* PER              */
    uint16 PPR:1;                                          /* PPR              */
    uint16 TBR0:1;                                         /* TBR0             */
    uint16 TBR1:1;                                         /* TBR1             */
    uint16 TBR2:1;                                         /* TBR2             */
    uint16 :6;                                             /* Reserved Bits    */
} __type759;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  PSC:1;                                          /* PSC              */
    uint8  IDC:1;                                          /* IDC              */
    uint8  PSS:1;                                          /* PSS              */
    uint8  POT:1;                                          /* POT              */
    uint8  STE:1;                                          /* STE              */
    uint8  SOC:1;                                          /* SOC              */
    uint8  :1;                                             /* Reserved Bits    */
} __type760;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SPC:3;                                          /* SPC[2:0]         */
    uint8  :5;                                             /* Reserved Bits    */
} __type761;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IMT:1;                                          /* IMT              */
    uint8  :7;                                             /* Reserved Bits    */
} __type762;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP1:16;                                        /* CMP1[15:0]       */
    uint32 CMP2:16;                                        /* CMP2[31:16]      */
} __type763;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP5:16;                                        /* CMP5[15:0]       */
    uint32 CMP6:16;                                        /* CMP6[31:16]      */
} __type764;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP9:16;                                        /* CMP9[15:0]       */
    uint32 CMP10:16;                                       /* CMP10[31:16]     */
} __type765;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP3:16;                                        /* CMP3[15:0]       */
    uint32 CMP4:16;                                        /* CMP4[31:16]      */
} __type766;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP7:16;                                        /* CMP7[15:0]       */
    uint32 CMP8:16;                                        /* CMP8[31:16]      */
} __type767;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP11:16;                                       /* CMP11[15:0]      */
    uint32 CMP12:16;                                       /* CMP12[31:16]     */
} __type768;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DCMP0:16;                                       /* DCMP0[15:0]      */
    uint32 DCMP1:16;                                       /* DCMP1[31:16]     */
} __type769;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DCMP2:16;                                       /* DCMP2[15:0]      */
    uint32 :16;                                            /* Reserved Bits    */
} __type770;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PAT0T:3;                                        /* PAT0T[2:0]       */
    uint32 PAT1T:3;                                        /* PAT1T[5:3]       */
    uint32 PAT2T:3;                                        /* PAT2T[8:6]       */
    uint32 PAT3T:3;                                        /* PAT3T[11:9]      */
    uint32 PAT4T:3;                                        /* PAT4T[14:12]     */
    uint32 PAT5T:3;                                        /* PAT5T[17:15]     */
    uint32 :14;                                            /* Reserved Bits    */
} __type771;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PAT0B:3;                                        /* PAT0B[2:0]       */
    uint32 PAT1B:3;                                        /* PAT1B[5:3]       */
    uint32 PAT2B:3;                                        /* PAT2B[8:6]       */
    uint32 PAT3B:3;                                        /* PAT3B[11:9]      */
    uint32 PAT4B:3;                                        /* PAT4B[14:12]     */
    uint32 PAT5B:3;                                        /* PAT5B[17:15]     */
    uint32 :14;                                            /* Reserved Bits    */
} __type772;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTC0:10;                                        /* DTC0[9:0]        */
    uint32 :22;                                            /* Reserved Bits    */
} __type773;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DTC1:10;                                        /* DTC1[9:0]        */
    uint32 :22;                                            /* Reserved Bits    */
} __type774;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 TOL1:1;                                         /* TOL1             */
    uint32 TOL2:1;                                         /* TOL2             */
    uint32 TOL3:1;                                         /* TOL3             */
    uint32 TOL4:1;                                         /* TOL4             */
    uint32 TOL5:1;                                         /* TOL5             */
    uint32 TOL6:1;                                         /* TOL6             */
    uint32 :25;                                            /* Reserved Bits    */
} __type775;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CKS:1;                                          /* CKS              */
    uint32 :31;                                            /* Reserved Bits    */
} __type776;
typedef struct 
{                                                          /* Bit Access       */
    uint32 RCC:5;                                          /* RCC[4:0]         */
    uint32 VIE:1;                                          /* VIE              */
    uint32 PIE:1;                                          /* PIE              */
    uint32 VRE:1;                                          /* VRE              */
    uint32 PRE:1;                                          /* PRE              */
    uint32 :23;                                            /* Reserved Bits    */
} __type777;
typedef struct 
{                                                          /* Bit Access       */
    uint32 HSPSHWE:18;                                     /* HSPSHWE[17:0]    */
    uint32 :14;                                            /* Reserved Bits    */
} __type778;
typedef struct 
{                                                          /* Bit Access       */
    uint32 HSPSHVE:18;                                     /* HSPSHVE[17:0]    */
    uint32 :14;                                            /* Reserved Bits    */
} __type779;
typedef struct 
{                                                          /* Bit Access       */
    uint32 HSPSHUE:18;                                     /* HSPSHUE[17:0]    */
    uint32 :14;                                            /* Reserved Bits    */
} __type780;
typedef struct 
{                                                          /* Bit Access       */
    uint32 HSPCMWE:18;                                     /* HSPCMWE[17:0]    */
    uint32 :14;                                            /* Reserved Bits    */
} __type781;
typedef struct 
{                                                          /* Bit Access       */
    uint32 HSPCMVE:18;                                     /* HSPCMVE[17:0]    */
    uint32 :14;                                            /* Reserved Bits    */
} __type782;
typedef struct 
{                                                          /* Bit Access       */
    uint32 HSPCMUE:18;                                     /* HSPCMUE[17:0]    */
    uint32 :14;                                            /* Reserved Bits    */
} __type783;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DCMP2E:18;                                      /* DCMP2E[17:0]     */
    uint32 :14;                                            /* Reserved Bits    */
} __type784;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DCMP1E:18;                                      /* DCMP1E[17:0]     */
    uint32 :14;                                            /* Reserved Bits    */
} __type785;
typedef struct 
{                                                          /* Bit Access       */
    uint32 DCMP0E:18;                                      /* DCMP0E[17:0]     */
    uint32 :14;                                            /* Reserved Bits    */
} __type786;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP0E:18;                                       /* CMP0E[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type787;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP12E:18;                                      /* CMP12E[17:0]     */
    uint32 :14;                                            /* Reserved Bits    */
} __type788;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP11E:18;                                      /* CMP11E[17:0]     */
    uint32 :14;                                            /* Reserved Bits    */
} __type789;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP8E:18;                                       /* CMP8E[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type790;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP7E:18;                                       /* CMP7E[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type791;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP4E:18;                                       /* CMP4E[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type792;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP3E:18;                                       /* CMP3E[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type793;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP10E:18;                                      /* CMP10E[17:0]     */
    uint32 :14;                                            /* Reserved Bits    */
} __type794;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP9E:18;                                       /* CMP9E[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type795;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP6E:18;                                       /* CMP6E[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type796;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP5E:18;                                       /* CMP5E[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type797;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP2E:18;                                       /* CMP2E[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type798;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMP1E:18;                                       /* CMP1E[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type799;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMPWE:18;                                       /* CMPWE[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type800;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMPVE:18;                                       /* CMPVE[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type801;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CMPUE:18;                                       /* CMPUE[17:0]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type802;
typedef struct 
{                                                          /* Bit Access       */
    uint32 WPWE:18;                                        /* WPWE[17:0]       */
    uint32 :14;                                            /* Reserved Bits    */
} __type803;
typedef struct 
{                                                          /* Bit Access       */
    uint32 VPWE:18;                                        /* VPWE[17:0]       */
    uint32 :14;                                            /* Reserved Bits    */
} __type804;
typedef struct 
{                                                          /* Bit Access       */
    uint32 UPWE:18;                                        /* UPWE[17:0]       */
    uint32 :14;                                            /* Reserved Bits    */
} __type805;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 CNTE:18;                                  /* CNTE[17:0]       */
    uint32 :14;                                            /* Reserved Bits    */
} __type806;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 SBCE:18;                                  /* SBCE[17:0]       */
    uint32 :14;                                            /* Reserved Bits    */
} __type807;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  TOE1:1;                                         /* TOE1             */
    uint8  TOE2:1;                                         /* TOE2             */
    uint8  TOE3:1;                                         /* TOE3             */
    uint8  TOE4:1;                                         /* TOE4             */
    uint8  TOE5:1;                                         /* TOE5             */
    uint8  TOE6:1;                                         /* TOE6             */
    uint8  :1;                                             /* Reserved Bits    */
} __type808;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TOS:1;                                          /* TOS              */
    uint8  TGS:1;                                          /* TGS              */
    uint8  WOC:1;                                          /* WOC              */
    uint8  EOC:1;                                          /* EOC              */
    uint8  PTS:1;                                          /* PTS              */
    uint8  :3;                                             /* Reserved Bits    */
} __type809;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MD:3;                                           /* MD[2:0]          */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  DWD:1;                                          /* DWD              */
    uint8  :3;                                             /* Reserved Bits    */
} __type810;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PTC:2;                                          /* PTC[1:0]         */
    uint16 PRC:1;                                          /* PRC              */
    uint16 NDC:1;                                          /* NDC              */
    uint16 TDC:1;                                          /* TDC              */
    uint16 PEC:1;                                          /* PEC              */
    uint16 PPC:1;                                          /* PPC              */
    uint16 TBA0:1;                                         /* TBA0             */
    uint16 TBA1:1;                                         /* TBA1             */
    uint16 TBA2:1;                                         /* TBA2             */
    uint16 :6;                                             /* Reserved Bits    */
} __type811;
typedef struct 
{                                                          /* Bit Access       */
    uint16 DTPR:15;                                        /* DTPR[14:0]       */
    uint16 DTCM:1;                                         /* DTCM             */
} __type812;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SPSTL0:1;                                       /* SPSTL0           */
    uint8  SPSTL1:1;                                       /* SPSTL1           */
    uint8  SPSTL2:1;                                       /* SPSTL2           */
    uint8  :5;                                             /* Reserved Bits    */
} __type813;
typedef struct 
{                                                          /* Bit Access       */
    uint8  S120DCO:1;                                      /* S120DCO          */
    uint8  :7;                                             /* Reserved Bits    */
} __type814;

typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type752 BIT;                                         /* Bit Access       */
} __type2031;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type753 BIT;                                         /* Bit Access       */
} __type2032;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type754 BIT;                                         /* Bit Access       */
} __type2033;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type755 BIT;                                         /* Bit Access       */
} __type2034;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type756 BIT;                                   /* Bit Access       */
} __type2035;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type757 BIT;                                   /* Bit Access       */
} __type2036;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type758 BIT;                                   /* Bit Access       */
} __type2037;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type759 BIT;                                         /* Bit Access       */
} __type2038;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type760 BIT;                                         /* Bit Access       */
} __type2039;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type761 BIT;                                         /* Bit Access       */
} __type2040;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type762 BIT;                                         /* Bit Access       */
} __type2041;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type763 BIT;                                         /* Bit Access       */
} __type2042;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type764 BIT;                                         /* Bit Access       */
} __type2043;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type765 BIT;                                         /* Bit Access       */
} __type2044;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type766 BIT;                                         /* Bit Access       */
} __type2045;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type767 BIT;                                         /* Bit Access       */
} __type2046;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type768 BIT;                                         /* Bit Access       */
} __type2047;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type769 BIT;                                         /* Bit Access       */
} __type2048;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type770 BIT;                                         /* Bit Access       */
} __type2049;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type771 BIT;                                         /* Bit Access       */
} __type2050;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type772 BIT;                                         /* Bit Access       */
} __type2051;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type773 BIT;                                         /* Bit Access       */
} __type2052;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type774 BIT;                                         /* Bit Access       */
} __type2053;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type775 BIT;                                         /* Bit Access       */
} __type2054;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type776 BIT;                                         /* Bit Access       */
} __type2055;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type777 BIT;                                         /* Bit Access       */
} __type2056;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type778 BIT;                                         /* Bit Access       */
} __type2057;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type779 BIT;                                         /* Bit Access       */
} __type2058;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type780 BIT;                                         /* Bit Access       */
} __type2059;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type781 BIT;                                         /* Bit Access       */
} __type2060;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type782 BIT;                                         /* Bit Access       */
} __type2061;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type783 BIT;                                         /* Bit Access       */
} __type2062;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type784 BIT;                                         /* Bit Access       */
} __type2063;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type785 BIT;                                         /* Bit Access       */
} __type2064;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type786 BIT;                                         /* Bit Access       */
} __type2065;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type787 BIT;                                         /* Bit Access       */
} __type2066;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type788 BIT;                                         /* Bit Access       */
} __type2067;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type789 BIT;                                         /* Bit Access       */
} __type2068;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type790 BIT;                                         /* Bit Access       */
} __type2069;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type791 BIT;                                         /* Bit Access       */
} __type2070;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type792 BIT;                                         /* Bit Access       */
} __type2071;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type793 BIT;                                         /* Bit Access       */
} __type2072;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type794 BIT;                                         /* Bit Access       */
} __type2073;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type795 BIT;                                         /* Bit Access       */
} __type2074;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type796 BIT;                                         /* Bit Access       */
} __type2075;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type797 BIT;                                         /* Bit Access       */
} __type2076;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type798 BIT;                                         /* Bit Access       */
} __type2077;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type799 BIT;                                         /* Bit Access       */
} __type2078;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type800 BIT;                                         /* Bit Access       */
} __type2079;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type801 BIT;                                         /* Bit Access       */
} __type2080;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type802 BIT;                                         /* Bit Access       */
} __type2081;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type803 BIT;                                         /* Bit Access       */
} __type2082;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type804 BIT;                                         /* Bit Access       */
} __type2083;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type805 BIT;                                         /* Bit Access       */
} __type2084;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type806 BIT;                                   /* Bit Access       */
} __type2085;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type807 BIT;                                   /* Bit Access       */
} __type2086;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type808 BIT;                                         /* Bit Access       */
} __type2087;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type809 BIT;                                         /* Bit Access       */
} __type2088;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type810 BIT;                                         /* Bit Access       */
} __type2089;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type811 BIT;                                         /* Bit Access       */
} __type2090;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type812 BIT;                                         /* Bit Access       */
} __type2091;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type813 BIT;                                         /* Bit Access       */
} __type2092;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type814 BIT;                                         /* Bit Access       */
} __type2093;

typedef struct 
{                                                          /* Module           */
    __type2031 IOC2;                                       /* IOC2             */
    uint8  dummy532[2];                                    /* Reserved         */
    __type2032 CTL3;                                       /* CTL3             */
    uint8  dummy533[3];                                    /* Reserved         */
    __type2033 CTL5;                                       /* CTL5             */
    uint8  dummy534[2];                                    /* Reserved         */
    __type2034 CTL6;                                       /* CTL6             */
    uint8  dummy535[2];                                    /* Reserved         */
    const __type2035 STR0;                                 /* STR0             */
    uint8  dummy536[3];                                    /* Reserved         */
    const __type2036 STR1;                                 /* STR1             */
    uint8  dummy537[3];                                    /* Reserved         */
    const __type2037 STR2;                                 /* STR2             */
    uint8  dummy538[2];                                    /* Reserved         */
    __type2038 STC;                                        /* STC              */
    uint8  dummy539[2];                                    /* Reserved         */
    __type2039 OPT0;                                       /* OPT0             */
    uint8  dummy540[3];                                    /* Reserved         */
    __type2040 OPT1;                                       /* OPT1             */
    uint8  dummy541[3];                                    /* Reserved         */
    const uint16 CNT;                                      /* CNT              */
    uint8  dummy542[2];                                    /* Reserved         */
    const uint16 SBC;                                      /* SBC              */
    uint8  dummy543[2];                                    /* Reserved         */
    __type1818 TRG0;                                       /* TRG0             */
    uint8  dummy544[3];                                    /* Reserved         */
    __type1819 TRG1;                                       /* TRG1             */
    uint8  dummy545[3];                                    /* Reserved         */
    __type2041 TRG2;                                       /* TRG2             */
    uint8  dummy546[7];                                    /* Reserved         */
    __type2042 CMP1W;                                      /* CMP1W            */
    __type2043 CMP5W;                                      /* CMP5W            */
    __type2044 CMP9W;                                      /* CMP9W            */
    __type2045 CMP3W;                                      /* CMP3W            */
    __type2046 CMP7W;                                      /* CMP7W            */
    __type2047 CMP11W;                                     /* CMP11W           */
    uint32 CMP0;                                           /* CMP0             */
    __type2048 DCMP0W;                                     /* DCMP0W           */
    __type2049 DCMP2;                                      /* DCMP2            */
    __type2050 PAT0W;                                      /* PAT0W            */
    __type2051 PAT1W;                                      /* PAT1W            */
    __type2052 DTC0W;                                      /* DTC0W            */
    __type2053 DTC1W;                                      /* DTC1W            */
    __type2054 IOC3;                                       /* IOC3             */
    __type2055 CTL2;                                       /* CTL2             */
    __type2056 CTL4;                                       /* CTL4             */
    uint16 CMP1;                                           /* CMP1             */
    uint8  dummy547[2];                                    /* Reserved         */
    uint16 CMP2;                                           /* CMP2             */
    uint8  dummy548[2];                                    /* Reserved         */
    uint16 CMP5;                                           /* CMP5             */
    uint8  dummy549[2];                                    /* Reserved         */
    uint16 CMP6;                                           /* CMP6             */
    uint8  dummy550[2];                                    /* Reserved         */
    uint16 CMP9;                                           /* CMP9             */
    uint8  dummy551[2];                                    /* Reserved         */
    uint16 CMP10;                                          /* CMP10            */
    uint8  dummy552[2];                                    /* Reserved         */
    uint16 CMP3;                                           /* CMP3             */
    uint8  dummy553[2];                                    /* Reserved         */
    uint16 CMP4;                                           /* CMP4             */
    uint8  dummy554[2];                                    /* Reserved         */
    uint16 CMP7;                                           /* CMP7             */
    uint8  dummy555[2];                                    /* Reserved         */
    uint16 CMP8;                                           /* CMP8             */
    uint8  dummy556[2];                                    /* Reserved         */
    uint16 CMP11;                                          /* CMP11            */
    uint8  dummy557[2];                                    /* Reserved         */
    uint16 CMP12;                                          /* CMP12            */
    uint8  dummy558[2];                                    /* Reserved         */
    uint16 CMPU;                                           /* CMPU             */
    uint8  dummy559[2];                                    /* Reserved         */
    uint16 CMPV;                                           /* CMPV             */
    uint8  dummy560[2];                                    /* Reserved         */
    uint16 CMPW;                                           /* CMPW             */
    uint8  dummy561[2];                                    /* Reserved         */
    uint16 UPW;                                            /* UPW              */
    uint8  dummy562[2];                                    /* Reserved         */
    uint16 VPW;                                            /* VPW              */
    uint8  dummy563[2];                                    /* Reserved         */
    uint16 WPW;                                            /* WPW              */
    uint8  dummy564[90];                                   /* Reserved         */
    __type2057 HSPSHWE;                                    /* HSPSHWE          */
    __type2058 HSPSHVE;                                    /* HSPSHVE          */
    __type2059 HSPSHUE;                                    /* HSPSHUE          */
    __type2060 HSPCMWE;                                    /* HSPCMWE          */
    __type2061 HSPCMVE;                                    /* HSPCMVE          */
    __type2062 HSPCMUE;                                    /* HSPCMUE          */
    uint8  dummy565[8];                                    /* Reserved         */
    __type2063 DCMP2E;                                     /* DCMP2E           */
    __type2064 DCMP1E;                                     /* DCMP1E           */
    __type2065 DCMP0E;                                     /* DCMP0E           */
    __type2066 CMP0E;                                      /* CMP0E            */
    __type2067 CMP12E;                                     /* CMP12E           */
    __type2068 CMP11E;                                     /* CMP11E           */
    __type2069 CMP8E;                                      /* CMP8E            */
    __type2070 CMP7E;                                      /* CMP7E            */
    __type2071 CMP4E;                                      /* CMP4E            */
    __type2072 CMP3E;                                      /* CMP3E            */
    __type2073 CMP10E;                                     /* CMP10E           */
    __type2074 CMP9E;                                      /* CMP9E            */
    __type2075 CMP6E;                                      /* CMP6E            */
    __type2076 CMP5E;                                      /* CMP5E            */
    __type2077 CMP2E;                                      /* CMP2E            */
    __type2078 CMP1E;                                      /* CMP1E            */
    __type2079 CMPWE;                                      /* CMPWE            */
    __type2080 CMPVE;                                      /* CMPVE            */
    __type2081 CMPUE;                                      /* CMPUE            */
    uint8  dummy566[4];                                    /* Reserved         */
    __type2082 WPWE;                                       /* WPWE             */
    __type2083 VPWE;                                       /* VPWE             */
    __type2084 UPWE;                                       /* UPWE             */
    uint8  dummy567[4];                                    /* Reserved         */
    const __type2085 CNTE;                                 /* CNTE             */
    const __type2086 SBCE;                                 /* SBCE             */
    uint8  dummy568[88];                                   /* Reserved         */
    __type2087 IOC0;                                       /* IOC0             */
    uint8  dummy569[3];                                    /* Reserved         */
    __type2088 IOC1;                                       /* IOC1             */
    uint8  dummy570[3];                                    /* Reserved         */
    __type2089 CTL0;                                       /* CTL0             */
    uint8  dummy571[3];                                    /* Reserved         */
    __type2090 CTL1;                                       /* CTL1             */
    uint8  dummy572[2];                                    /* Reserved         */
    __type2091 DTPR;                                       /* DTPR             */
    uint8  dummy573[6];                                    /* Reserved         */
    __type2092 CTL7;                                       /* CTL7             */
    uint8  dummy574[3];                                    /* Reserved         */
    __type2093 CTL8;                                       /* CTL8             */
    uint8  dummy575[3555];                                 /* Reserved         */
} __type2609;

__IOREG(TSG30, 0xFFE70000, __READ_WRITE, __type2609);                 /* TSG30 */
__IOREG(TSG31, 0xFFE71000, __READ_WRITE, __type2609);                 /* TSG31 */
__IOREGARRAY(TSG3, 2, 0xFFE70000, __READ_WRITE, __type2609);          /* TSG3[2] */

#define TSG30IOC2 TSG30.IOC2.UINT16
#define TSG30TO1 TSG30.IOC2.BIT.TO1
#define TSG30TO2 TSG30.IOC2.BIT.TO2
#define TSG30TO3 TSG30.IOC2.BIT.TO3
#define TSG30TO4 TSG30.IOC2.BIT.TO4
#define TSG30TO5 TSG30.IOC2.BIT.TO5
#define TSG30TO6 TSG30.IOC2.BIT.TO6
#define TSG30OL1 TSG30.IOC2.BIT.OL1
#define TSG30OL2 TSG30.IOC2.BIT.OL2
#define TSG30OL3 TSG30.IOC2.BIT.OL3
#define TSG30OL4 TSG30.IOC2.BIT.OL4
#define TSG30OL5 TSG30.IOC2.BIT.OL5
#define TSG30OL6 TSG30.IOC2.BIT.OL6
#define TSG30CTL3 TSG30.CTL3.UINT8
#define TSG30RMC TSG30.CTL3.BIT.RMC
#define TSG30RIA TSG30.CTL3.BIT.RIA
#define TSG30CTL5 TSG30.CTL5.UINT16
#define TSG30AT00 TSG30.CTL5.BIT.AT00
#define TSG30AT01 TSG30.CTL5.BIT.AT01
#define TSG30AT02 TSG30.CTL5.BIT.AT02
#define TSG30AT03 TSG30.CTL5.BIT.AT03
#define TSG30AT04 TSG30.CTL5.BIT.AT04
#define TSG30AT05 TSG30.CTL5.BIT.AT05
#define TSG30AT06 TSG30.CTL5.BIT.AT06
#define TSG30AT07 TSG30.CTL5.BIT.AT07
#define TSG30AT08 TSG30.CTL5.BIT.AT08
#define TSG30AT09 TSG30.CTL5.BIT.AT09
#define TSG30ACC TSG30.CTL5.BIT.ACC
#define TSG30CTL6 TSG30.CTL6.UINT16
#define TSG30AT10 TSG30.CTL6.BIT.AT10
#define TSG30AT11 TSG30.CTL6.BIT.AT11
#define TSG30AT12 TSG30.CTL6.BIT.AT12
#define TSG30AT13 TSG30.CTL6.BIT.AT13
#define TSG30AT14 TSG30.CTL6.BIT.AT14
#define TSG30AT15 TSG30.CTL6.BIT.AT15
#define TSG30AT16 TSG30.CTL6.BIT.AT16
#define TSG30AT17 TSG30.CTL6.BIT.AT17
#define TSG30AT18 TSG30.CTL6.BIT.AT18
#define TSG30AT19 TSG30.CTL6.BIT.AT19
#define TSG30STR0 TSG30.STR0.UINT8
#define TSG30TE TSG30.STR0.BIT.TE
#define TSG30RSF TSG30.STR0.BIT.RSF
#define TSG30SUF TSG30.STR0.BIT.SUF
#define TSG30CUF TSG30.STR0.BIT.CUF
#define TSG30STR1 TSG30.STR1.UINT8
#define TSG30OPF TSG30.STR1.BIT.OPF
#define TSG30TSF TSG30.STR1.BIT.TSF
#define TSG30STR2 TSG30.STR2.UINT16
#define TSG30PTF TSG30.STR2.BIT.PTF
#define TSG30PRF TSG30.STR2.BIT.PRF
#define TSG30NDF TSG30.STR2.BIT.NDF
#define TSG30TDF TSG30.STR2.BIT.TDF
#define TSG30PEF TSG30.STR2.BIT.PEF
#define TSG30PPF TSG30.STR2.BIT.PPF
#define TSG30TBF0 TSG30.STR2.BIT.TBF0
#define TSG30TBF1 TSG30.STR2.BIT.TBF1
#define TSG30TBF2 TSG30.STR2.BIT.TBF2
#define TSG30STC TSG30.STC.UINT16
#define TSG30PTR TSG30.STC.BIT.PTR
#define TSG30PRR TSG30.STC.BIT.PRR
#define TSG30NDR TSG30.STC.BIT.NDR
#define TSG30TDR TSG30.STC.BIT.TDR
#define TSG30PER TSG30.STC.BIT.PER
#define TSG30PPR TSG30.STC.BIT.PPR
#define TSG30TBR0 TSG30.STC.BIT.TBR0
#define TSG30TBR1 TSG30.STC.BIT.TBR1
#define TSG30TBR2 TSG30.STC.BIT.TBR2
#define TSG30OPT0 TSG30.OPT0.UINT8
#define TSG30PSC TSG30.OPT0.BIT.PSC
#define TSG30IDC TSG30.OPT0.BIT.IDC
#define TSG30PSS TSG30.OPT0.BIT.PSS
#define TSG30POT TSG30.OPT0.BIT.POT
#define TSG30STE TSG30.OPT0.BIT.STE
#define TSG30SOC TSG30.OPT0.BIT.SOC
#define TSG30OPT1 TSG30.OPT1.UINT8
#define TSG30SPC TSG30.OPT1.BIT.SPC
#define TSG30CNT TSG30.CNT
#define TSG30SBC TSG30.SBC
#define TSG30TRG0 TSG30.TRG0.UINT8
#define TSG30TS TSG30.TRG0.BIT.TS
#define TSG30TRG1 TSG30.TRG1.UINT8
#define TSG30TT TSG30.TRG1.BIT.TT
#define TSG30TRG2 TSG30.TRG2.UINT8
#define TSG30IMT TSG30.TRG2.BIT.IMT
#define TSG30CMP1W TSG30.CMP1W.UINT32
#define TSG30CMP1 TSG30.CMP1W.BIT.CMP1
#define TSG30CMP2 TSG30.CMP1W.BIT.CMP2
#define TSG30CMP5W TSG30.CMP5W.UINT32
#define TSG30CMP5 TSG30.CMP5W.BIT.CMP5
#define TSG30CMP6 TSG30.CMP5W.BIT.CMP6
#define TSG30CMP9W TSG30.CMP9W.UINT32
#define TSG30CMP9 TSG30.CMP9W.BIT.CMP9
#define TSG30CMP10 TSG30.CMP9W.BIT.CMP10
#define TSG30CMP3W TSG30.CMP3W.UINT32
#define TSG30CMP3 TSG30.CMP3W.BIT.CMP3
#define TSG30CMP4 TSG30.CMP3W.BIT.CMP4
#define TSG30CMP7W TSG30.CMP7W.UINT32
#define TSG30CMP7 TSG30.CMP7W.BIT.CMP7
#define TSG30CMP8 TSG30.CMP7W.BIT.CMP8
#define TSG30CMP11W TSG30.CMP11W.UINT32
#define TSG30CMP11 TSG30.CMP11W.BIT.CMP11
#define TSG30CMP12 TSG30.CMP11W.BIT.CMP12
#define TSG30CMP0 TSG30.CMP0
#define TSG30DCMP0W TSG30.DCMP0W.UINT32
#define TSG30DCMP0 TSG30.DCMP0W.BIT.DCMP0
#define TSG30DCMP1 TSG30.DCMP0W.BIT.DCMP1
#define TSG30DCMP2 TSG30.DCMP2.UINT32
#define TSG30PAT0W TSG30.PAT0W.UINT32
#define TSG30PAT0T TSG30.PAT0W.BIT.PAT0T
#define TSG30PAT1T TSG30.PAT0W.BIT.PAT1T
#define TSG30PAT2T TSG30.PAT0W.BIT.PAT2T
#define TSG30PAT3T TSG30.PAT0W.BIT.PAT3T
#define TSG30PAT4T TSG30.PAT0W.BIT.PAT4T
#define TSG30PAT5T TSG30.PAT0W.BIT.PAT5T
#define TSG30PAT1W TSG30.PAT1W.UINT32
#define TSG30PAT0B TSG30.PAT1W.BIT.PAT0B
#define TSG30PAT1B TSG30.PAT1W.BIT.PAT1B
#define TSG30PAT2B TSG30.PAT1W.BIT.PAT2B
#define TSG30PAT3B TSG30.PAT1W.BIT.PAT3B
#define TSG30PAT4B TSG30.PAT1W.BIT.PAT4B
#define TSG30PAT5B TSG30.PAT1W.BIT.PAT5B
#define TSG30DTC0W TSG30.DTC0W.UINT32
#define TSG30DTC0 TSG30.DTC0W.BIT.DTC0
#define TSG30DTC1W TSG30.DTC1W.UINT32
#define TSG30DTC1 TSG30.DTC1W.BIT.DTC1
#define TSG30IOC3 TSG30.IOC3.UINT32
#define TSG30TOL1 TSG30.IOC3.BIT.TOL1
#define TSG30TOL2 TSG30.IOC3.BIT.TOL2
#define TSG30TOL3 TSG30.IOC3.BIT.TOL3
#define TSG30TOL4 TSG30.IOC3.BIT.TOL4
#define TSG30TOL5 TSG30.IOC3.BIT.TOL5
#define TSG30TOL6 TSG30.IOC3.BIT.TOL6
#define TSG30CTL2 TSG30.CTL2.UINT32
#define TSG30CKS TSG30.CTL2.BIT.CKS
#define TSG30CTL4 TSG30.CTL4.UINT32
#define TSG30RCC TSG30.CTL4.BIT.RCC
#define TSG30VIE TSG30.CTL4.BIT.VIE
#define TSG30PIE TSG30.CTL4.BIT.PIE
#define TSG30VRE TSG30.CTL4.BIT.VRE
#define TSG30PRE TSG30.CTL4.BIT.PRE
#define TSG30CMPU TSG30.CMPU
#define TSG30CMPV TSG30.CMPV
#define TSG30CMPW TSG30.CMPW
#define TSG30UPW TSG30.UPW
#define TSG30VPW TSG30.VPW
#define TSG30WPW TSG30.WPW
#define TSG30HSPSHWE TSG30.HSPSHWE.UINT32
#define TSG30HSPSHVE TSG30.HSPSHVE.UINT32
#define TSG30HSPSHUE TSG30.HSPSHUE.UINT32
#define TSG30HSPCMWE TSG30.HSPCMWE.UINT32
#define TSG30HSPCMVE TSG30.HSPCMVE.UINT32
#define TSG30HSPCMUE TSG30.HSPCMUE.UINT32
#define TSG30DCMP2E TSG30.DCMP2E.UINT32
#define TSG30DCMP1E TSG30.DCMP1E.UINT32
#define TSG30DCMP0E TSG30.DCMP0E.UINT32
#define TSG30CMP0E TSG30.CMP0E.UINT32
#define TSG30CMP12E TSG30.CMP12E.UINT32
#define TSG30CMP11E TSG30.CMP11E.UINT32
#define TSG30CMP8E TSG30.CMP8E.UINT32
#define TSG30CMP7E TSG30.CMP7E.UINT32
#define TSG30CMP4E TSG30.CMP4E.UINT32
#define TSG30CMP3E TSG30.CMP3E.UINT32
#define TSG30CMP10E TSG30.CMP10E.UINT32
#define TSG30CMP9E TSG30.CMP9E.UINT32
#define TSG30CMP6E TSG30.CMP6E.UINT32
#define TSG30CMP5E TSG30.CMP5E.UINT32
#define TSG30CMP2E TSG30.CMP2E.UINT32
#define TSG30CMP1E TSG30.CMP1E.UINT32
#define TSG30CMPWE TSG30.CMPWE.UINT32
#define TSG30CMPVE TSG30.CMPVE.UINT32
#define TSG30CMPUE TSG30.CMPUE.UINT32
#define TSG30WPWE TSG30.WPWE.UINT32
#define TSG30VPWE TSG30.VPWE.UINT32
#define TSG30UPWE TSG30.UPWE.UINT32
#define TSG30CNTE TSG30.CNTE.UINT32
#define TSG30SBCE TSG30.SBCE.UINT32
#define TSG30IOC0 TSG30.IOC0.UINT8
#define TSG30TOE1 TSG30.IOC0.BIT.TOE1
#define TSG30TOE2 TSG30.IOC0.BIT.TOE2
#define TSG30TOE3 TSG30.IOC0.BIT.TOE3
#define TSG30TOE4 TSG30.IOC0.BIT.TOE4
#define TSG30TOE5 TSG30.IOC0.BIT.TOE5
#define TSG30TOE6 TSG30.IOC0.BIT.TOE6
#define TSG30IOC1 TSG30.IOC1.UINT8
#define TSG30TOS TSG30.IOC1.BIT.TOS
#define TSG30TGS TSG30.IOC1.BIT.TGS
#define TSG30WOC TSG30.IOC1.BIT.WOC
#define TSG30EOC TSG30.IOC1.BIT.EOC
#define TSG30PTS TSG30.IOC1.BIT.PTS
#define TSG30CTL0 TSG30.CTL0.UINT8
#define TSG30MD TSG30.CTL0.BIT.MD
#define TSG30DWD TSG30.CTL0.BIT.DWD
#define TSG30CTL1 TSG30.CTL1.UINT16
#define TSG30PTC TSG30.CTL1.BIT.PTC
#define TSG30PRC TSG30.CTL1.BIT.PRC
#define TSG30NDC TSG30.CTL1.BIT.NDC
#define TSG30TDC TSG30.CTL1.BIT.TDC
#define TSG30PEC TSG30.CTL1.BIT.PEC
#define TSG30PPC TSG30.CTL1.BIT.PPC
#define TSG30TBA0 TSG30.CTL1.BIT.TBA0
#define TSG30TBA1 TSG30.CTL1.BIT.TBA1
#define TSG30TBA2 TSG30.CTL1.BIT.TBA2
#define TSG30DTPR TSG30.DTPR.UINT16
#define TSG30DTCM TSG30.DTPR.BIT.DTCM
#define TSG30CTL7 TSG30.CTL7.UINT8
#define TSG30SPSTL0 TSG30.CTL7.BIT.SPSTL0
#define TSG30SPSTL1 TSG30.CTL7.BIT.SPSTL1
#define TSG30SPSTL2 TSG30.CTL7.BIT.SPSTL2
#define TSG30CTL8 TSG30.CTL8.UINT8
#define TSG30S120DCO TSG30.CTL8.BIT.S120DCO
#define TSG31IOC2 TSG31.IOC2.UINT16
#define TSG31TO1 TSG31.IOC2.BIT.TO1
#define TSG31TO2 TSG31.IOC2.BIT.TO2
#define TSG31TO3 TSG31.IOC2.BIT.TO3
#define TSG31TO4 TSG31.IOC2.BIT.TO4
#define TSG31TO5 TSG31.IOC2.BIT.TO5
#define TSG31TO6 TSG31.IOC2.BIT.TO6
#define TSG31OL1 TSG31.IOC2.BIT.OL1
#define TSG31OL2 TSG31.IOC2.BIT.OL2
#define TSG31OL3 TSG31.IOC2.BIT.OL3
#define TSG31OL4 TSG31.IOC2.BIT.OL4
#define TSG31OL5 TSG31.IOC2.BIT.OL5
#define TSG31OL6 TSG31.IOC2.BIT.OL6
#define TSG31CTL3 TSG31.CTL3.UINT8
#define TSG31RMC TSG31.CTL3.BIT.RMC
#define TSG31RIA TSG31.CTL3.BIT.RIA
#define TSG31CTL5 TSG31.CTL5.UINT16
#define TSG31AT00 TSG31.CTL5.BIT.AT00
#define TSG31AT01 TSG31.CTL5.BIT.AT01
#define TSG31AT02 TSG31.CTL5.BIT.AT02
#define TSG31AT03 TSG31.CTL5.BIT.AT03
#define TSG31AT04 TSG31.CTL5.BIT.AT04
#define TSG31AT05 TSG31.CTL5.BIT.AT05
#define TSG31AT06 TSG31.CTL5.BIT.AT06
#define TSG31AT07 TSG31.CTL5.BIT.AT07
#define TSG31AT08 TSG31.CTL5.BIT.AT08
#define TSG31AT09 TSG31.CTL5.BIT.AT09
#define TSG31ACC TSG31.CTL5.BIT.ACC
#define TSG31CTL6 TSG31.CTL6.UINT16
#define TSG31AT10 TSG31.CTL6.BIT.AT10
#define TSG31AT11 TSG31.CTL6.BIT.AT11
#define TSG31AT12 TSG31.CTL6.BIT.AT12
#define TSG31AT13 TSG31.CTL6.BIT.AT13
#define TSG31AT14 TSG31.CTL6.BIT.AT14
#define TSG31AT15 TSG31.CTL6.BIT.AT15
#define TSG31AT16 TSG31.CTL6.BIT.AT16
#define TSG31AT17 TSG31.CTL6.BIT.AT17
#define TSG31AT18 TSG31.CTL6.BIT.AT18
#define TSG31AT19 TSG31.CTL6.BIT.AT19
#define TSG31STR0 TSG31.STR0.UINT8
#define TSG31TE TSG31.STR0.BIT.TE
#define TSG31RSF TSG31.STR0.BIT.RSF
#define TSG31SUF TSG31.STR0.BIT.SUF
#define TSG31CUF TSG31.STR0.BIT.CUF
#define TSG31STR1 TSG31.STR1.UINT8
#define TSG31OPF TSG31.STR1.BIT.OPF
#define TSG31TSF TSG31.STR1.BIT.TSF
#define TSG31STR2 TSG31.STR2.UINT16
#define TSG31PTF TSG31.STR2.BIT.PTF
#define TSG31PRF TSG31.STR2.BIT.PRF
#define TSG31NDF TSG31.STR2.BIT.NDF
#define TSG31TDF TSG31.STR2.BIT.TDF
#define TSG31PEF TSG31.STR2.BIT.PEF
#define TSG31PPF TSG31.STR2.BIT.PPF
#define TSG31TBF0 TSG31.STR2.BIT.TBF0
#define TSG31TBF1 TSG31.STR2.BIT.TBF1
#define TSG31TBF2 TSG31.STR2.BIT.TBF2
#define TSG31STC TSG31.STC.UINT16
#define TSG31PTR TSG31.STC.BIT.PTR
#define TSG31PRR TSG31.STC.BIT.PRR
#define TSG31NDR TSG31.STC.BIT.NDR
#define TSG31TDR TSG31.STC.BIT.TDR
#define TSG31PER TSG31.STC.BIT.PER
#define TSG31PPR TSG31.STC.BIT.PPR
#define TSG31TBR0 TSG31.STC.BIT.TBR0
#define TSG31TBR1 TSG31.STC.BIT.TBR1
#define TSG31TBR2 TSG31.STC.BIT.TBR2
#define TSG31OPT0 TSG31.OPT0.UINT8
#define TSG31PSC TSG31.OPT0.BIT.PSC
#define TSG31IDC TSG31.OPT0.BIT.IDC
#define TSG31PSS TSG31.OPT0.BIT.PSS
#define TSG31POT TSG31.OPT0.BIT.POT
#define TSG31STE TSG31.OPT0.BIT.STE
#define TSG31SOC TSG31.OPT0.BIT.SOC
#define TSG31OPT1 TSG31.OPT1.UINT8
#define TSG31SPC TSG31.OPT1.BIT.SPC
#define TSG31CNT TSG31.CNT
#define TSG31SBC TSG31.SBC
#define TSG31TRG0 TSG31.TRG0.UINT8
#define TSG31TS TSG31.TRG0.BIT.TS
#define TSG31TRG1 TSG31.TRG1.UINT8
#define TSG31TT TSG31.TRG1.BIT.TT
#define TSG31TRG2 TSG31.TRG2.UINT8
#define TSG31IMT TSG31.TRG2.BIT.IMT
#define TSG31CMP1W TSG31.CMP1W.UINT32
#define TSG31CMP1 TSG31.CMP1W.BIT.CMP1
#define TSG31CMP2 TSG31.CMP1W.BIT.CMP2
#define TSG31CMP5W TSG31.CMP5W.UINT32
#define TSG31CMP5 TSG31.CMP5W.BIT.CMP5
#define TSG31CMP6 TSG31.CMP5W.BIT.CMP6
#define TSG31CMP9W TSG31.CMP9W.UINT32
#define TSG31CMP9 TSG31.CMP9W.BIT.CMP9
#define TSG31CMP10 TSG31.CMP9W.BIT.CMP10
#define TSG31CMP3W TSG31.CMP3W.UINT32
#define TSG31CMP3 TSG31.CMP3W.BIT.CMP3
#define TSG31CMP4 TSG31.CMP3W.BIT.CMP4
#define TSG31CMP7W TSG31.CMP7W.UINT32
#define TSG31CMP7 TSG31.CMP7W.BIT.CMP7
#define TSG31CMP8 TSG31.CMP7W.BIT.CMP8
#define TSG31CMP11W TSG31.CMP11W.UINT32
#define TSG31CMP11 TSG31.CMP11W.BIT.CMP11
#define TSG31CMP12 TSG31.CMP11W.BIT.CMP12
#define TSG31CMP0 TSG31.CMP0
#define TSG31DCMP0W TSG31.DCMP0W.UINT32
#define TSG31DCMP0 TSG31.DCMP0W.BIT.DCMP0
#define TSG31DCMP1 TSG31.DCMP0W.BIT.DCMP1
#define TSG31DCMP2 TSG31.DCMP2.UINT32
#define TSG31PAT0W TSG31.PAT0W.UINT32
#define TSG31PAT0T TSG31.PAT0W.BIT.PAT0T
#define TSG31PAT1T TSG31.PAT0W.BIT.PAT1T
#define TSG31PAT2T TSG31.PAT0W.BIT.PAT2T
#define TSG31PAT3T TSG31.PAT0W.BIT.PAT3T
#define TSG31PAT4T TSG31.PAT0W.BIT.PAT4T
#define TSG31PAT5T TSG31.PAT0W.BIT.PAT5T
#define TSG31PAT1W TSG31.PAT1W.UINT32
#define TSG31PAT0B TSG31.PAT1W.BIT.PAT0B
#define TSG31PAT1B TSG31.PAT1W.BIT.PAT1B
#define TSG31PAT2B TSG31.PAT1W.BIT.PAT2B
#define TSG31PAT3B TSG31.PAT1W.BIT.PAT3B
#define TSG31PAT4B TSG31.PAT1W.BIT.PAT4B
#define TSG31PAT5B TSG31.PAT1W.BIT.PAT5B
#define TSG31DTC0W TSG31.DTC0W.UINT32
#define TSG31DTC0 TSG31.DTC0W.BIT.DTC0
#define TSG31DTC1W TSG31.DTC1W.UINT32
#define TSG31DTC1 TSG31.DTC1W.BIT.DTC1
#define TSG31IOC3 TSG31.IOC3.UINT32
#define TSG31TOL1 TSG31.IOC3.BIT.TOL1
#define TSG31TOL2 TSG31.IOC3.BIT.TOL2
#define TSG31TOL3 TSG31.IOC3.BIT.TOL3
#define TSG31TOL4 TSG31.IOC3.BIT.TOL4
#define TSG31TOL5 TSG31.IOC3.BIT.TOL5
#define TSG31TOL6 TSG31.IOC3.BIT.TOL6
#define TSG31CTL2 TSG31.CTL2.UINT32
#define TSG31CKS TSG31.CTL2.BIT.CKS
#define TSG31CTL4 TSG31.CTL4.UINT32
#define TSG31RCC TSG31.CTL4.BIT.RCC
#define TSG31VIE TSG31.CTL4.BIT.VIE
#define TSG31PIE TSG31.CTL4.BIT.PIE
#define TSG31VRE TSG31.CTL4.BIT.VRE
#define TSG31PRE TSG31.CTL4.BIT.PRE
#define TSG31CMPU TSG31.CMPU
#define TSG31CMPV TSG31.CMPV
#define TSG31CMPW TSG31.CMPW
#define TSG31UPW TSG31.UPW
#define TSG31VPW TSG31.VPW
#define TSG31WPW TSG31.WPW
#define TSG31HSPSHWE TSG31.HSPSHWE.UINT32
#define TSG31HSPSHVE TSG31.HSPSHVE.UINT32
#define TSG31HSPSHUE TSG31.HSPSHUE.UINT32
#define TSG31HSPCMWE TSG31.HSPCMWE.UINT32
#define TSG31HSPCMVE TSG31.HSPCMVE.UINT32
#define TSG31HSPCMUE TSG31.HSPCMUE.UINT32
#define TSG31DCMP2E TSG31.DCMP2E.UINT32
#define TSG31DCMP1E TSG31.DCMP1E.UINT32
#define TSG31DCMP0E TSG31.DCMP0E.UINT32
#define TSG31CMP0E TSG31.CMP0E.UINT32
#define TSG31CMP12E TSG31.CMP12E.UINT32
#define TSG31CMP11E TSG31.CMP11E.UINT32
#define TSG31CMP8E TSG31.CMP8E.UINT32
#define TSG31CMP7E TSG31.CMP7E.UINT32
#define TSG31CMP4E TSG31.CMP4E.UINT32
#define TSG31CMP3E TSG31.CMP3E.UINT32
#define TSG31CMP10E TSG31.CMP10E.UINT32
#define TSG31CMP9E TSG31.CMP9E.UINT32
#define TSG31CMP6E TSG31.CMP6E.UINT32
#define TSG31CMP5E TSG31.CMP5E.UINT32
#define TSG31CMP2E TSG31.CMP2E.UINT32
#define TSG31CMP1E TSG31.CMP1E.UINT32
#define TSG31CMPWE TSG31.CMPWE.UINT32
#define TSG31CMPVE TSG31.CMPVE.UINT32
#define TSG31CMPUE TSG31.CMPUE.UINT32
#define TSG31WPWE TSG31.WPWE.UINT32
#define TSG31VPWE TSG31.VPWE.UINT32
#define TSG31UPWE TSG31.UPWE.UINT32
#define TSG31CNTE TSG31.CNTE.UINT32
#define TSG31SBCE TSG31.SBCE.UINT32
#define TSG31IOC0 TSG31.IOC0.UINT8
#define TSG31TOE1 TSG31.IOC0.BIT.TOE1
#define TSG31TOE2 TSG31.IOC0.BIT.TOE2
#define TSG31TOE3 TSG31.IOC0.BIT.TOE3
#define TSG31TOE4 TSG31.IOC0.BIT.TOE4
#define TSG31TOE5 TSG31.IOC0.BIT.TOE5
#define TSG31TOE6 TSG31.IOC0.BIT.TOE6
#define TSG31IOC1 TSG31.IOC1.UINT8
#define TSG31TOS TSG31.IOC1.BIT.TOS
#define TSG31TGS TSG31.IOC1.BIT.TGS
#define TSG31WOC TSG31.IOC1.BIT.WOC
#define TSG31EOC TSG31.IOC1.BIT.EOC
#define TSG31PTS TSG31.IOC1.BIT.PTS
#define TSG31CTL0 TSG31.CTL0.UINT8
#define TSG31MD TSG31.CTL0.BIT.MD
#define TSG31DWD TSG31.CTL0.BIT.DWD
#define TSG31CTL1 TSG31.CTL1.UINT16
#define TSG31PTC TSG31.CTL1.BIT.PTC
#define TSG31PRC TSG31.CTL1.BIT.PRC
#define TSG31NDC TSG31.CTL1.BIT.NDC
#define TSG31TDC TSG31.CTL1.BIT.TDC
#define TSG31PEC TSG31.CTL1.BIT.PEC
#define TSG31PPC TSG31.CTL1.BIT.PPC
#define TSG31TBA0 TSG31.CTL1.BIT.TBA0
#define TSG31TBA1 TSG31.CTL1.BIT.TBA1
#define TSG31TBA2 TSG31.CTL1.BIT.TBA2
#define TSG31DTPR TSG31.DTPR.UINT16
#define TSG31DTCM TSG31.DTPR.BIT.DTCM
#define TSG31CTL7 TSG31.CTL7.UINT8
#define TSG31SPSTL0 TSG31.CTL7.BIT.SPSTL0
#define TSG31SPSTL1 TSG31.CTL7.BIT.SPSTL1
#define TSG31SPSTL2 TSG31.CTL7.BIT.SPSTL2
#define TSG31CTL8 TSG31.CTL8.UINT8
#define TSG31S120DCO TSG31.CTL8.BIT.S120DCO

#endif
