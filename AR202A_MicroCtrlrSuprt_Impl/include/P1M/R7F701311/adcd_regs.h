/**********************************************************************************************************************
* Module File Name  : adcd_regs.h
* Module Description: ADC Peripheral Registers
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

#ifndef ADCD_REGS_H
#define ADCD_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint32 GCTRL:6;                                        /* GCTRL[5:0]       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 ADIE:1;                                         /* ADIE             */
    uint32 :5;                                             /* Reserved Bits    */
    uint32 CNVCLS:3;                                       /* CNVCLS[15:13]    */
    uint32 PDE:1;                                          /* PDE              */
    uint32 PUE:1;                                          /* PUE              */
    uint32 :14;                                            /* Reserved Bits    */
} __type839;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR00:16;                                  /* DR00[15:0]       */
    const uint32 DR01:16;                                  /* DR01[31:16]      */
} __type840;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR02:16;                                  /* DR02[15:0]       */
    const uint32 DR03:16;                                  /* DR03[31:16]      */
} __type841;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR04:16;                                  /* DR04[15:0]       */
    const uint32 DR05:16;                                  /* DR05[31:16]      */
} __type842;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR06:16;                                  /* DR06[15:0]       */
    const uint32 DR07:16;                                  /* DR07[31:16]      */
} __type843;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR08:16;                                  /* DR08[15:0]       */
    const uint32 DR09:16;                                  /* DR09[31:16]      */
} __type844;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR10:16;                                  /* DR10[15:0]       */
    const uint32 DR11:16;                                  /* DR11[31:16]      */
} __type845;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR12:16;                                  /* DR12[15:0]       */
    const uint32 DR13:16;                                  /* DR13[31:16]      */
} __type846;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR14:16;                                  /* DR14[15:0]       */
    const uint32 DR15:16;                                  /* DR15[31:16]      */
} __type847;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR16:16;                                  /* DR16[15:0]       */
    const uint32 DR17:16;                                  /* DR17[31:16]      */
} __type848;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR18:16;                                  /* DR18[15:0]       */
    const uint32 DR19:16;                                  /* DR19[31:16]      */
} __type849;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR20:16;                                  /* DR20[15:0]       */
    const uint32 DR21:16;                                  /* DR21[31:16]      */
} __type850;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR22:16;                                  /* DR22[15:0]       */
    const uint32 DR23:16;                                  /* DR23[31:16]      */
} __type851;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR00:16;                                  /* DR00[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type852;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR01:16;                                  /* DR01[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type853;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR02:16;                                  /* DR02[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type854;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR03:16;                                  /* DR03[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type855;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR04:16;                                  /* DR04[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type856;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR05:16;                                  /* DR05[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type857;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR06:16;                                  /* DR06[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type858;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR07:16;                                  /* DR07[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type859;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR08:16;                                  /* DR08[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type860;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR09:16;                                  /* DR09[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type861;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR10:16;                                  /* DR10[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type862;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR11:16;                                  /* DR11[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type863;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR12:16;                                  /* DR12[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type864;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR13:16;                                  /* DR13[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type865;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR14:16;                                  /* DR14[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type866;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR15:16;                                  /* DR15[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type867;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR16:16;                                  /* DR16[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type868;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR17:16;                                  /* DR17[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type869;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR18:16;                                  /* DR18[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type870;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR19:16;                                  /* DR19[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type871;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR20:16;                                  /* DR20[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type872;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR21:16;                                  /* DR21[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type873;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR22:16;                                  /* DR22[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type874;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DR23:16;                                  /* DR23[15:0]       */
    const uint32 ID:5;                                     /* ID[20:16]        */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 PRTY:1;                                   /* PRTY             */
    const uint32 WFLG:1;                                   /* WFLG             */
    uint32 :6;                                             /* Reserved Bits    */
} __type875;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ADSTART:1;                                      /* ADSTART          */
    uint8  :7;                                             /* Reserved Bits    */
} __type876;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ADTSTART:1;                                     /* ADTSTART         */
    uint8  :7;                                             /* Reserved Bits    */
} __type877;
typedef struct 
{                                                          /* Bit Access       */
    uint16 SMPCR:16;                                       /* SMPCR[15:0]      */
} __type878;
typedef struct 
{                                                          /* Bit Access       */
    uint8  HALT:1;                                         /* HALT             */
    uint8  :7;                                             /* Reserved Bits    */
} __type879;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SUSMTD:2;                                       /* SUSMTD[1:0]      */
    uint8  :6;                                             /* Reserved Bits    */
} __type880;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MSKCFMT:4;                                      /* MSKCFMT[3:0]     */
    uint8  :4;                                             /* Reserved Bits    */
} __type881;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 MPXCUR:5;                                 /* MPXCUR[4:0]      */
    uint32 :11;                                            /* Reserved Bits    */
    const uint32 MSKC:16;                                  /* MSKC[31:16]      */
} __type882;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MPXOW:4;                                        /* MPXOW[3:0]       */
    uint8  :4;                                             /* Reserved Bits    */
} __type883;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ADDNT:1;                                        /* ADDNT            */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  DFMT:1;                                         /* DFMT             */
    uint8  :3;                                             /* Reserved Bits    */
} __type884;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ENDP:6;                                         /* ENDP[5:0]        */
    uint8  :2;                                             /* Reserved Bits    */
} __type885;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IDEIE:1;                                        /* IDEIE            */
    uint8  PEIE:1;                                         /* PEIE             */
    uint8  OWEIE:1;                                        /* OWEIE            */
    uint8  ULEIE:1;                                        /* ULEIE            */
    uint8  RDCLRE:1;                                       /* RDCLRE           */
    uint8  :3;                                             /* Reserved Bits    */
} __type886;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TDLV:2;                                         /* TDLV[1:0]        */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  TDE:1;                                          /* TDE              */
} __type887;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ODPW:6;                                         /* ODPW[5:0]        */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 ODE:1;                                          /* ODE              */
    uint32 :23;                                            /* Reserved Bits    */
    uint32 ODDE:1;                                         /* ODDE             */
} __type888;
typedef struct 
{                                                          /* Bit Access       */
    uint32 LLMTB:16;                                       /* LLMTB[15:0]      */
    uint32 ULMTB:16;                                       /* ULMTB[31:16]     */
} __type889;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IDEC:1;                                         /* IDEC             */
    uint8  PEC:1;                                          /* PEC              */
    uint8  OWEC:1;                                         /* OWEC             */
    uint8  ULEC:1;                                         /* ULEC             */
    uint8  :4;                                             /* Reserved Bits    */
} __type890;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  ULECAP:6;                                 /* ULECAP[5:0]      */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  ULE:1;                                    /* ULE              */
} __type891;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  OWECAP:6;                                 /* OWECAP[5:0]      */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  OWE:1;                                    /* OWE              */
} __type892;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  PECAP:6;                                  /* PECAP[5:0]       */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  PE:1;                                     /* PE               */
} __type893;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  IDECAP:6;                                 /* IDECAP[5:0]      */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  IDE:1;                                    /* IDE              */
} __type894;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SMPST:1;                                        /* SMPST            */
    uint8  :7;                                             /* Reserved Bits    */
} __type895;
typedef struct 
{                                                          /* Bit Access       */
    uint8  THSTP:1;                                        /* THSTP            */
    uint8  :7;                                             /* Reserved Bits    */
} __type896;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ASMPMSK:1;                                      /* ASMPMSK          */
    uint8  :7;                                             /* Reserved Bits    */
} __type897;
typedef struct 
{                                                          /* Bit Access       */
    uint8  HLDST:1;                                        /* HLDST            */
    uint8  :7;                                             /* Reserved Bits    */
} __type898;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SGS:2;                                          /* SGS[1:0]         */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  HLDTE:1;                                        /* HLDTE            */
    uint8  HLDCTE:1;                                       /* HLDCTE           */
    uint8  :2;                                             /* Reserved Bits    */
} __type899;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TH0E:1;                                         /* TH0E             */
    uint8  TH1E:1;                                         /* TH1E             */
    uint8  TH2E:1;                                         /* TH2E             */
    uint8  TH3E:1;                                         /* TH3E             */
    uint8  TH4E:1;                                         /* TH4E             */
    uint8  TH5E:1;                                         /* TH5E             */
    uint8  :2;                                             /* Reserved Bits    */
} __type900;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TH0GS:1;                                        /* TH0GS            */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 TH1GS:1;                                        /* TH1GS            */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 TH2GS:1;                                        /* TH2GS            */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 TH3GS:1;                                        /* TH3GS            */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 TH4GS:1;                                        /* TH4GS            */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 TH5GS:1;                                        /* TH5GS            */
    uint16 :5;                                             /* Reserved Bits    */
} __type901;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SGST:1;                                         /* SGST             */
    uint8  :7;                                             /* Reserved Bits    */
} __type902;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TRGMD:1;                                        /* TRGMD            */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  ADIE:1;                                         /* ADIE             */
    uint8  SCANMD:1;                                       /* SCANMD           */
    uint8  ADSTARTE:1;                                     /* ADSTARTE         */
    uint8  :1;                                             /* Reserved Bits    */
} __type903;
typedef struct 
{                                                          /* Bit Access       */
    uint8  VCSP:6;                                         /* VCSP[5:0]        */
    uint8  :2;                                             /* Reserved Bits    */
} __type904;
typedef struct 
{                                                          /* Bit Access       */
    uint8  VCEP:6;                                         /* VCEP[5:0]        */
    uint8  :2;                                             /* Reserved Bits    */
} __type905;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MCYC:8;                                         /* MCYC[7:0]        */
} __type906;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  SGACT:1;                                  /* SGACT            */
    uint8  :6;                                             /* Reserved Bits    */
} __type907;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ULS:2;                                          /* ULS[1:0]         */
    uint8  :6;                                             /* Reserved Bits    */
} __type908;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ADTST:1;                                        /* ADTST            */
    uint8  :7;                                             /* Reserved Bits    */
} __type909;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ADTEND:1;                                       /* ADTEND           */
    uint8  :7;                                             /* Reserved Bits    */
} __type910;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TRGMD:2;                                        /* TRGMD[1:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  ADIE:1;                                         /* ADIE             */
    uint8  SCANMD:1;                                       /* SCANMD           */
    uint8  ADSTARTE:1;                                     /* ADSTARTE         */
    uint8  ADTSTARTE:1;                                    /* ADTSTARTE        */
} __type911;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :1;                                             /* Reserved Bits    */
    const uint8  SGACT:1;                                  /* SGACT            */
    const uint8  ADTACT:1;                                 /* ADTACT           */
    uint8  :5;                                             /* Reserved Bits    */
} __type912;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADTIP:21;                                       /* ADTIP[20:0]      */
    uint32 :11;                                            /* Reserved Bits    */
} __type913;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADTPR:21;                                       /* ADTPR[20:0]      */
    uint32 :11;                                            /* Reserved Bits    */
} __type914;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADOPDIG000:1;                                   /* ADOPDIG000       */
    uint32 ADOPDIG001:1;                                   /* ADOPDIG001       */
    uint32 ADOPDIG002:1;                                   /* ADOPDIG002       */
    uint32 ADOPDIG003:1;                                   /* ADOPDIG003       */
    uint32 ADOPDIG004:1;                                   /* ADOPDIG004       */
    uint32 ADOPDIG005:1;                                   /* ADOPDIG005       */
    uint32 ADOPDIG006:1;                                   /* ADOPDIG006       */
    uint32 ADOPDIG007:1;                                   /* ADOPDIG007       */
    uint32 ADOPDIG008:1;                                   /* ADOPDIG008       */
    uint32 ADOPDIG009:1;                                   /* ADOPDIG009       */
    uint32 ADOPDIG010:1;                                   /* ADOPDIG010       */
    uint32 ADOPDIG011:1;                                   /* ADOPDIG011       */
    uint32 :20;                                            /* Reserved Bits    */
} __type915;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TH0E:1;                                         /* TH0E             */
    uint8  TH1E:1;                                         /* TH1E             */
    uint8  TH2E:1;                                         /* TH2E             */
    uint8  TH3E:1;                                         /* TH3E             */
    uint8  :4;                                             /* Reserved Bits    */
} __type916;
typedef struct 
{                                                          /* Bit Access       */
    uint16 TH0GS:1;                                        /* TH0GS            */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 TH1GS:1;                                        /* TH1GS            */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 TH2GS:1;                                        /* TH2GS            */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 TH3GS:1;                                        /* TH3GS            */
    uint16 :9;                                             /* Reserved Bits    */
} __type917;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADOPDIG100:1;                                   /* ADOPDIG100       */
    uint32 ADOPDIG101:1;                                   /* ADOPDIG101       */
    uint32 ADOPDIG102:1;                                   /* ADOPDIG102       */
    uint32 ADOPDIG103:1;                                   /* ADOPDIG103       */
    uint32 ADOPDIG104:1;                                   /* ADOPDIG104       */
    uint32 ADOPDIG105:1;                                   /* ADOPDIG105       */
    uint32 ADOPDIG106:1;                                   /* ADOPDIG106       */
    uint32 ADOPDIG107:1;                                   /* ADOPDIG107       */
    uint32 ADOPDIG108:1;                                   /* ADOPDIG108       */
    uint32 ADOPDIG109:1;                                   /* ADOPDIG109       */
    uint32 ADOPDIG110:1;                                   /* ADOPDIG110       */
    uint32 ADOPDIG111:1;                                   /* ADOPDIG111       */
    uint32 :20;                                            /* Reserved Bits    */
} __type918;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type839 BIT;                                         /* Bit Access       */
} __type2118;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type840 BIT;                                   /* Bit Access       */
} __type2119;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type841 BIT;                                   /* Bit Access       */
} __type2120;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type842 BIT;                                   /* Bit Access       */
} __type2121;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type843 BIT;                                   /* Bit Access       */
} __type2122;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type844 BIT;                                   /* Bit Access       */
} __type2123;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type845 BIT;                                   /* Bit Access       */
} __type2124;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type846 BIT;                                   /* Bit Access       */
} __type2125;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type847 BIT;                                   /* Bit Access       */
} __type2126;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type848 BIT;                                   /* Bit Access       */
} __type2127;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type849 BIT;                                   /* Bit Access       */
} __type2128;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type850 BIT;                                   /* Bit Access       */
} __type2129;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type851 BIT;                                   /* Bit Access       */
} __type2130;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type852 BIT;                                   /* Bit Access       */
} __type2131;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type853 BIT;                                   /* Bit Access       */
} __type2132;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type854 BIT;                                   /* Bit Access       */
} __type2133;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type855 BIT;                                   /* Bit Access       */
} __type2134;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type856 BIT;                                   /* Bit Access       */
} __type2135;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type857 BIT;                                   /* Bit Access       */
} __type2136;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type858 BIT;                                   /* Bit Access       */
} __type2137;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type859 BIT;                                   /* Bit Access       */
} __type2138;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type860 BIT;                                   /* Bit Access       */
} __type2139;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type861 BIT;                                   /* Bit Access       */
} __type2140;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type862 BIT;                                   /* Bit Access       */
} __type2141;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type863 BIT;                                   /* Bit Access       */
} __type2142;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type864 BIT;                                   /* Bit Access       */
} __type2143;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type865 BIT;                                   /* Bit Access       */
} __type2144;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type866 BIT;                                   /* Bit Access       */
} __type2145;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type867 BIT;                                   /* Bit Access       */
} __type2146;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type868 BIT;                                   /* Bit Access       */
} __type2147;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type869 BIT;                                   /* Bit Access       */
} __type2148;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type870 BIT;                                   /* Bit Access       */
} __type2149;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type871 BIT;                                   /* Bit Access       */
} __type2150;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type872 BIT;                                   /* Bit Access       */
} __type2151;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type873 BIT;                                   /* Bit Access       */
} __type2152;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type874 BIT;                                   /* Bit Access       */
} __type2153;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type875 BIT;                                   /* Bit Access       */
} __type2154;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type876 BIT;                                         /* Bit Access       */
} __type2155;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type877 BIT;                                         /* Bit Access       */
} __type2156;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type878 BIT;                                         /* Bit Access       */
} __type2157;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type879 BIT;                                         /* Bit Access       */
} __type2158;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type880 BIT;                                         /* Bit Access       */
} __type2159;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type881 BIT;                                         /* Bit Access       */
} __type2160;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type882 BIT;                                   /* Bit Access       */
} __type2161;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type883 BIT;                                         /* Bit Access       */
} __type2162;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type884 BIT;                                         /* Bit Access       */
} __type2163;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type885 BIT;                                         /* Bit Access       */
} __type2164;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type886 BIT;                                         /* Bit Access       */
} __type2165;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type887 BIT;                                         /* Bit Access       */
} __type2166;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type888 BIT;                                         /* Bit Access       */
} __type2167;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type889 BIT;                                         /* Bit Access       */
} __type2168;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type890 BIT;                                         /* Bit Access       */
} __type2169;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type891 BIT;                                   /* Bit Access       */
} __type2170;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type892 BIT;                                   /* Bit Access       */
} __type2171;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type893 BIT;                                   /* Bit Access       */
} __type2172;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type894 BIT;                                   /* Bit Access       */
} __type2173;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type895 BIT;                                         /* Bit Access       */
} __type2174;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type896 BIT;                                         /* Bit Access       */
} __type2175;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type897 BIT;                                         /* Bit Access       */
} __type2176;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type898 BIT;                                         /* Bit Access       */
} __type2177;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type899 BIT;                                         /* Bit Access       */
} __type2178;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type900 BIT;                                         /* Bit Access       */
} __type2179;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type901 BIT;                                         /* Bit Access       */
} __type2180;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type902 BIT;                                         /* Bit Access       */
} __type2181;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type903 BIT;                                         /* Bit Access       */
} __type2182;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type904 BIT;                                         /* Bit Access       */
} __type2183;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type905 BIT;                                         /* Bit Access       */
} __type2184;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type906 BIT;                                         /* Bit Access       */
} __type2185;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type907 BIT;                                   /* Bit Access       */
} __type2186;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type908 BIT;                                         /* Bit Access       */
} __type2187;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type909 BIT;                                         /* Bit Access       */
} __type2188;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type910 BIT;                                         /* Bit Access       */
} __type2189;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type911 BIT;                                         /* Bit Access       */
} __type2190;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type912 BIT;                                   /* Bit Access       */
} __type2191;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type913 BIT;                                         /* Bit Access       */
} __type2192;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type914 BIT;                                         /* Bit Access       */
} __type2193;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type915 BIT;                                         /* Bit Access       */
} __type2194;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type916 BIT;                                         /* Bit Access       */
} __type2195;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type917 BIT;                                         /* Bit Access       */
} __type2196;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type918 BIT;                                         /* Bit Access       */
} __type2197;

typedef struct 
{                                                          /* Module           */
    __type2118 VCR00;                                      /* VCR00            */
    __type2118 VCR01;                                      /* VCR01            */
    __type2118 VCR02;                                      /* VCR02            */
    __type2118 VCR03;                                      /* VCR03            */
    __type2118 VCR04;                                      /* VCR04            */
    __type2118 VCR05;                                      /* VCR05            */
    __type2118 VCR06;                                      /* VCR06            */
    __type2118 VCR07;                                      /* VCR07            */
    __type2118 VCR08;                                      /* VCR08            */
    __type2118 VCR09;                                      /* VCR09            */
    __type2118 VCR10;                                      /* VCR10            */
    __type2118 VCR11;                                      /* VCR11            */
    __type2118 VCR12;                                      /* VCR12            */
    __type2118 VCR13;                                      /* VCR13            */
    __type2118 VCR14;                                      /* VCR14            */
    __type2118 VCR15;                                      /* VCR15            */
    __type2118 VCR16;                                      /* VCR16            */
    __type2118 VCR17;                                      /* VCR17            */
    __type2118 VCR18;                                      /* VCR18            */
    __type2118 VCR19;                                      /* VCR19            */
    __type2118 VCR20;                                      /* VCR20            */
    __type2118 VCR21;                                      /* VCR21            */
    __type2118 VCR22;                                      /* VCR22            */
    __type2118 VCR23;                                      /* VCR23            */
    uint8  dummy672[160];                                  /* Reserved         */
    const __type2119 DR00;                                 /* DR00             */
    const __type2120 DR02;                                 /* DR02             */
    const __type2121 DR04;                                 /* DR04             */
    const __type2122 DR06;                                 /* DR06             */
    const __type2123 DR08;                                 /* DR08             */
    const __type2124 DR10;                                 /* DR10             */
    const __type2125 DR12;                                 /* DR12             */
    const __type2126 DR14;                                 /* DR14             */
    const __type2127 DR16;                                 /* DR16             */
    const __type2128 DR18;                                 /* DR18             */
    const __type2129 DR20;                                 /* DR20             */
    const __type2130 DR22;                                 /* DR22             */
    uint8  dummy673[208];                                  /* Reserved         */
    const __type2131 DIR00;                                /* DIR00            */
    const __type2132 DIR01;                                /* DIR01            */
    const __type2133 DIR02;                                /* DIR02            */
    const __type2134 DIR03;                                /* DIR03            */
    const __type2135 DIR04;                                /* DIR04            */
    const __type2136 DIR05;                                /* DIR05            */
    const __type2137 DIR06;                                /* DIR06            */
    const __type2138 DIR07;                                /* DIR07            */
    const __type2139 DIR08;                                /* DIR08            */
    const __type2140 DIR09;                                /* DIR09            */
    const __type2141 DIR10;                                /* DIR10            */
    const __type2142 DIR11;                                /* DIR11            */
    const __type2143 DIR12;                                /* DIR12            */
    const __type2144 DIR13;                                /* DIR13            */
    const __type2145 DIR14;                                /* DIR14            */
    const __type2146 DIR15;                                /* DIR15            */
    const __type2147 DIR16;                                /* DIR16            */
    const __type2148 DIR17;                                /* DIR17            */
    const __type2149 DIR18;                                /* DIR18            */
    const __type2150 DIR19;                                /* DIR19            */
    const __type2151 DIR20;                                /* DIR20            */
    const __type2152 DIR21;                                /* DIR21            */
    const __type2153 DIR22;                                /* DIR22            */
    const __type2154 DIR23;                                /* DIR23            */
    uint8  dummy674[160];                                  /* Reserved         */
    __type2155 ADSYNSTCR;                                  /* ADSYNSTCR        */
    uint8  dummy675[3];                                    /* Reserved         */
    __type2156 ADTSYNSTCR;                                 /* ADTSYNSTCR       */
    uint8  dummy676[59];                                   /* Reserved         */
    __type2157 SMPCR;                                      /* SMPCR            */
    uint8  dummy677[62];                                   /* Reserved         */
    __type2158 ADHALTR;                                    /* ADHALTR          */
    uint8  dummy678[3];                                    /* Reserved         */
    __type2159 ADCR1;                                      /* ADCR1            */
    uint8  dummy679[3];                                    /* Reserved         */
    __type2160 MPXCURCR;                                   /* MPXCURCR         */
    uint8  dummy680[3];                                    /* Reserved         */
    const __type2161 MPXCURR;                              /* MPXCURR          */
    __type2162 MPXOWR;                                     /* MPXOWR           */
    uint8  dummy681[7];                                    /* Reserved         */
    __type2163 ADCR2;                                      /* ADCR2            */
    uint8  dummy682[7];                                    /* Reserved         */
    __type2164 ADENDP0;                                    /* ADENDP0          */
    uint8  dummy683[3];                                    /* Reserved         */
    __type2164 ADENDP1;                                    /* ADENDP1          */
    uint8  dummy684[3];                                    /* Reserved         */
    __type2164 ADENDP2;                                    /* ADENDP2          */
    uint8  dummy685[3];                                    /* Reserved         */
    __type2164 ADENDP3;                                    /* ADENDP3          */
    uint8  dummy686[3];                                    /* Reserved         */
    __type2164 ADENDP4;                                    /* ADENDP4          */
    uint8  dummy687[15];                                   /* Reserved         */
    __type2165 SFTCR;                                      /* SFTCR            */
    uint8  dummy688[3];                                    /* Reserved         */
    __type2166 TDCR;                                       /* TDCR             */
    uint8  dummy689[3];                                    /* Reserved         */
    __type2167 ODCR;                                       /* ODCR             */
    __type2168 ULLMTBR0;                                   /* ULLMTBR0         */
    __type2168 ULLMTBR1;                                   /* ULLMTBR1         */
    __type2168 ULLMTBR2;                                   /* ULLMTBR2         */
    __type2169 ECR;                                        /* ECR              */
    uint8  dummy690[3];                                    /* Reserved         */
    const __type2170 ULER;                                 /* ULER             */
    uint8  dummy691[3];                                    /* Reserved         */
    const __type2171 OWER;                                 /* OWER             */
    uint8  dummy692[3];                                    /* Reserved         */
    const __type2172 PER;                                  /* PER              */
    uint8  dummy693[3];                                    /* Reserved         */
    const __type2173 IDER;                                 /* IDER             */
    uint8  dummy694[23];                                   /* Reserved         */
    __type2174 THSMPSTCR;                                  /* THSMPSTCR        */
    uint8  dummy695[3];                                    /* Reserved         */
    __type2175 THSTPCR;                                    /* THSTPCR          */
    uint8  dummy696[3];                                    /* Reserved         */
    __type2176 THCR;                                       /* THCR             */
    uint8  dummy697[7];                                    /* Reserved         */
    __type2177 THAHLDSTCR;                                 /* THAHLDSTCR       */
    uint8  dummy698[3];                                    /* Reserved         */
    __type2177 THBHLDSTCR;                                 /* THBHLDSTCR       */
    uint8  dummy699[11];                                   /* Reserved         */
    __type2178 THACR;                                      /* THACR            */
    uint8  dummy700[3];                                    /* Reserved         */
    __type2178 THBCR;                                      /* THBCR            */
    uint8  dummy701[11];                                   /* Reserved         */
    __type2179 THER;                                       /* THER             */
    uint8  dummy702[3];                                    /* Reserved         */
    __type2180 THGSR;                                      /* THGSR            */
    uint8  dummy703[74];                                   /* Reserved         */
    __type2181 SGSTCR0;                                    /* SGSTCR0          */
    uint8  dummy704[15];                                   /* Reserved         */
    __type2182 SGCR0;                                      /* SGCR0            */
    uint8  dummy705[3];                                    /* Reserved         */
    __type2183 SGVCSP0;                                    /* SGVCSP0          */
    uint8  dummy706[3];                                    /* Reserved         */
    __type2184 SGVCEP0;                                    /* SGVCEP0          */
    uint8  dummy707[3];                                    /* Reserved         */
    __type2185 SGMCYCR0;                                   /* SGMCYCR0         */
    uint8  dummy708[7];                                    /* Reserved         */
    const __type2186 SGSR0;                                /* SGSR0            */
    uint8  dummy709[11];                                   /* Reserved         */
    __type2187 ULLMSR0;                                    /* ULLMSR0          */
    uint8  dummy710[79];                                   /* Reserved         */
    __type2181 SGSTCR1;                                    /* SGSTCR1          */
    uint8  dummy711[15];                                   /* Reserved         */
    __type2182 SGCR1;                                      /* SGCR1            */
    uint8  dummy712[3];                                    /* Reserved         */
    __type2183 SGVCSP1;                                    /* SGVCSP1          */
    uint8  dummy713[3];                                    /* Reserved         */
    __type2184 SGVCEP1;                                    /* SGVCEP1          */
    uint8  dummy714[3];                                    /* Reserved         */
    __type2185 SGMCYCR1;                                   /* SGMCYCR1         */
    uint8  dummy715[7];                                    /* Reserved         */
    const __type2186 SGSR1;                                /* SGSR1            */
    uint8  dummy716[11];                                   /* Reserved         */
    __type2187 ULLMSR1;                                    /* ULLMSR1          */
    uint8  dummy717[79];                                   /* Reserved         */
    __type2181 SGSTCR2;                                    /* SGSTCR2          */
    uint8  dummy718[15];                                   /* Reserved         */
    __type2182 SGCR2;                                      /* SGCR2            */
    uint8  dummy719[3];                                    /* Reserved         */
    __type2183 SGVCSP2;                                    /* SGVCSP2          */
    uint8  dummy720[3];                                    /* Reserved         */
    __type2184 SGVCEP2;                                    /* SGVCEP2          */
    uint8  dummy721[3];                                    /* Reserved         */
    __type2185 SGMCYCR2;                                   /* SGMCYCR2         */
    uint8  dummy722[7];                                    /* Reserved         */
    const __type2186 SGSR2;                                /* SGSR2            */
    uint8  dummy723[11];                                   /* Reserved         */
    __type2187 ULLMSR2;                                    /* ULLMSR2          */
    uint8  dummy724[79];                                   /* Reserved         */
    __type2181 SGSTCR3;                                    /* SGSTCR3          */
    uint8  dummy725[7];                                    /* Reserved         */
    __type2188 ADTSTCR3;                                   /* ADTSTCR3         */
    uint8  dummy726[3];                                    /* Reserved         */
    __type2189 ADTENDCR3;                                  /* ADTENDCR3        */
    uint8  dummy727[3];                                    /* Reserved         */
    __type2190 SGCR3;                                      /* SGCR3            */
    uint8  dummy728[3];                                    /* Reserved         */
    __type2183 SGVCSP3;                                    /* SGVCSP3          */
    uint8  dummy729[3];                                    /* Reserved         */
    __type2184 SGVCEP3;                                    /* SGVCEP3          */
    uint8  dummy730[3];                                    /* Reserved         */
    __type2185 SGMCYCR3;                                   /* SGMCYCR3         */
    uint8  dummy731[7];                                    /* Reserved         */
    const __type2191 SGSR3;                                /* SGSR3            */
    uint8  dummy732[3];                                    /* Reserved         */
    __type2192 ADTIPR3;                                    /* ADTIPR3          */
    __type2193 ADTPRR3;                                    /* ADTPRR3          */
    __type2187 ULLMSR3;                                    /* ULLMSR3          */
    uint8  dummy733[79];                                   /* Reserved         */
    __type2181 SGSTCR4;                                    /* SGSTCR4          */
    uint8  dummy734[7];                                    /* Reserved         */
    __type2188 ADTSTCR4;                                   /* ADTSTCR4         */
    uint8  dummy735[3];                                    /* Reserved         */
    __type2189 ADTENDCR4;                                  /* ADTENDCR4        */
    uint8  dummy736[3];                                    /* Reserved         */
    __type2190 SGCR4;                                      /* SGCR4            */
    uint8  dummy737[3];                                    /* Reserved         */
    __type2183 SGVCSP4;                                    /* SGVCSP4          */
    uint8  dummy738[3];                                    /* Reserved         */
    __type2184 SGVCEP4;                                    /* SGVCEP4          */
    uint8  dummy739[3];                                    /* Reserved         */
    __type2185 SGMCYCR4;                                   /* SGMCYCR4         */
    uint8  dummy740[7];                                    /* Reserved         */
    const __type2191 SGSR4;                                /* SGSR4            */
    uint8  dummy741[3];                                    /* Reserved         */
    __type2192 ADTIPR4;                                    /* ADTIPR4          */
    __type2193 ADTPRR4;                                    /* ADTPRR4          */
    __type2187 ULLMSR4;                                    /* ULLMSR4          */
    uint8  dummy742[10575];                                /* Reserved         */
    __type2194 ADOPDIG0;                                   /* ADOPDIG0         */
} __type2613;
typedef struct 
{                                                          /* Module           */
    __type2118 VCR00;                                      /* VCR00            */
    __type2118 VCR01;                                      /* VCR01            */
    __type2118 VCR02;                                      /* VCR02            */
    __type2118 VCR03;                                      /* VCR03            */
    __type2118 VCR04;                                      /* VCR04            */
    __type2118 VCR05;                                      /* VCR05            */
    __type2118 VCR06;                                      /* VCR06            */
    __type2118 VCR07;                                      /* VCR07            */
    __type2118 VCR08;                                      /* VCR08            */
    __type2118 VCR09;                                      /* VCR09            */
    __type2118 VCR10;                                      /* VCR10            */
    __type2118 VCR11;                                      /* VCR11            */
    __type2118 VCR12;                                      /* VCR12            */
    __type2118 VCR13;                                      /* VCR13            */
    __type2118 VCR14;                                      /* VCR14            */
    __type2118 VCR15;                                      /* VCR15            */
    __type2118 VCR16;                                      /* VCR16            */
    __type2118 VCR17;                                      /* VCR17            */
    __type2118 VCR18;                                      /* VCR18            */
    __type2118 VCR19;                                      /* VCR19            */
    __type2118 VCR20;                                      /* VCR20            */
    __type2118 VCR21;                                      /* VCR21            */
    __type2118 VCR22;                                      /* VCR22            */
    __type2118 VCR23;                                      /* VCR23            */
    uint8  dummy743[160];                                  /* Reserved         */
    const __type2119 DR00;                                 /* DR00             */
    const __type2120 DR02;                                 /* DR02             */
    const __type2121 DR04;                                 /* DR04             */
    const __type2122 DR06;                                 /* DR06             */
    const __type2123 DR08;                                 /* DR08             */
    const __type2124 DR10;                                 /* DR10             */
    const __type2125 DR12;                                 /* DR12             */
    const __type2126 DR14;                                 /* DR14             */
    const __type2127 DR16;                                 /* DR16             */
    const __type2128 DR18;                                 /* DR18             */
    const __type2129 DR20;                                 /* DR20             */
    const __type2130 DR22;                                 /* DR22             */
    uint8  dummy744[208];                                  /* Reserved         */
    const __type2131 DIR00;                                /* DIR00            */
    const __type2132 DIR01;                                /* DIR01            */
    const __type2133 DIR02;                                /* DIR02            */
    const __type2134 DIR03;                                /* DIR03            */
    const __type2135 DIR04;                                /* DIR04            */
    const __type2136 DIR05;                                /* DIR05            */
    const __type2137 DIR06;                                /* DIR06            */
    const __type2138 DIR07;                                /* DIR07            */
    const __type2139 DIR08;                                /* DIR08            */
    const __type2140 DIR09;                                /* DIR09            */
    const __type2141 DIR10;                                /* DIR10            */
    const __type2142 DIR11;                                /* DIR11            */
    const __type2143 DIR12;                                /* DIR12            */
    const __type2144 DIR13;                                /* DIR13            */
    const __type2145 DIR14;                                /* DIR14            */
    const __type2146 DIR15;                                /* DIR15            */
    const __type2147 DIR16;                                /* DIR16            */
    const __type2148 DIR17;                                /* DIR17            */
    const __type2149 DIR18;                                /* DIR18            */
    const __type2150 DIR19;                                /* DIR19            */
    const __type2151 DIR20;                                /* DIR20            */
    const __type2152 DIR21;                                /* DIR21            */
    const __type2153 DIR22;                                /* DIR22            */
    const __type2154 DIR23;                                /* DIR23            */
    uint8  dummy745[224];                                  /* Reserved         */
    __type2157 SMPCR;                                      /* SMPCR            */
    uint8  dummy746[62];                                   /* Reserved         */
    __type2158 ADHALTR;                                    /* ADHALTR          */
    uint8  dummy747[3];                                    /* Reserved         */
    __type2159 ADCR1;                                      /* ADCR1            */
    uint8  dummy748[3];                                    /* Reserved         */
    __type2160 MPXCURCR;                                   /* MPXCURCR         */
    uint8  dummy749[3];                                    /* Reserved         */
    const __type2161 MPXCURR;                              /* MPXCURR          */
    __type2162 MPXOWR;                                     /* MPXOWR           */
    uint8  dummy750[7];                                    /* Reserved         */
    __type2163 ADCR2;                                      /* ADCR2            */
    uint8  dummy751[7];                                    /* Reserved         */
    __type2164 ADENDP0;                                    /* ADENDP0          */
    uint8  dummy752[3];                                    /* Reserved         */
    __type2164 ADENDP1;                                    /* ADENDP1          */
    uint8  dummy753[3];                                    /* Reserved         */
    __type2164 ADENDP2;                                    /* ADENDP2          */
    uint8  dummy754[3];                                    /* Reserved         */
    __type2164 ADENDP3;                                    /* ADENDP3          */
    uint8  dummy755[3];                                    /* Reserved         */
    __type2164 ADENDP4;                                    /* ADENDP4          */
    uint8  dummy756[15];                                   /* Reserved         */
    __type2165 SFTCR;                                      /* SFTCR            */
    uint8  dummy757[3];                                    /* Reserved         */
    __type2166 TDCR;                                       /* TDCR             */
    uint8  dummy758[3];                                    /* Reserved         */
    __type2167 ODCR;                                       /* ODCR             */
    __type2168 ULLMTBR0;                                   /* ULLMTBR0         */
    __type2168 ULLMTBR1;                                   /* ULLMTBR1         */
    __type2168 ULLMTBR2;                                   /* ULLMTBR2         */
    __type2169 ECR;                                        /* ECR              */
    uint8  dummy759[3];                                    /* Reserved         */
    const __type2170 ULER;                                 /* ULER             */
    uint8  dummy760[3];                                    /* Reserved         */
    const __type2171 OWER;                                 /* OWER             */
    uint8  dummy761[3];                                    /* Reserved         */
    const __type2172 PER;                                  /* PER              */
    uint8  dummy762[3];                                    /* Reserved         */
    const __type2173 IDER;                                 /* IDER             */
    uint8  dummy763[23];                                   /* Reserved         */
    __type2174 THSMPSTCR;                                  /* THSMPSTCR        */
    uint8  dummy764[3];                                    /* Reserved         */
    __type2175 THSTPCR;                                    /* THSTPCR          */
    uint8  dummy765[3];                                    /* Reserved         */
    __type2176 THCR;                                       /* THCR             */
    uint8  dummy766[7];                                    /* Reserved         */
    __type2177 THAHLDSTCR;                                 /* THAHLDSTCR       */
    uint8  dummy767[3];                                    /* Reserved         */
    __type2177 THBHLDSTCR;                                 /* THBHLDSTCR       */
    uint8  dummy768[11];                                   /* Reserved         */
    __type2178 THACR;                                      /* THACR            */
    uint8  dummy769[3];                                    /* Reserved         */
    __type2178 THBCR;                                      /* THBCR            */
    uint8  dummy770[11];                                   /* Reserved         */
    __type2195 THER;                                       /* THER             */
    uint8  dummy771[3];                                    /* Reserved         */
    __type2196 THGSR;                                      /* THGSR            */
    uint8  dummy772[74];                                   /* Reserved         */
    __type2181 SGSTCR0;                                    /* SGSTCR0          */
    uint8  dummy773[15];                                   /* Reserved         */
    __type2182 SGCR0;                                      /* SGCR0            */
    uint8  dummy774[3];                                    /* Reserved         */
    __type2183 SGVCSP0;                                    /* SGVCSP0          */
    uint8  dummy775[3];                                    /* Reserved         */
    __type2184 SGVCEP0;                                    /* SGVCEP0          */
    uint8  dummy776[3];                                    /* Reserved         */
    __type2185 SGMCYCR0;                                   /* SGMCYCR0         */
    uint8  dummy777[7];                                    /* Reserved         */
    const __type2186 SGSR0;                                /* SGSR0            */
    uint8  dummy778[11];                                   /* Reserved         */
    __type2187 ULLMSR0;                                    /* ULLMSR0          */
    uint8  dummy779[79];                                   /* Reserved         */
    __type2181 SGSTCR1;                                    /* SGSTCR1          */
    uint8  dummy780[15];                                   /* Reserved         */
    __type2182 SGCR1;                                      /* SGCR1            */
    uint8  dummy781[3];                                    /* Reserved         */
    __type2183 SGVCSP1;                                    /* SGVCSP1          */
    uint8  dummy782[3];                                    /* Reserved         */
    __type2184 SGVCEP1;                                    /* SGVCEP1          */
    uint8  dummy783[3];                                    /* Reserved         */
    __type2185 SGMCYCR1;                                   /* SGMCYCR1         */
    uint8  dummy784[7];                                    /* Reserved         */
    const __type2186 SGSR1;                                /* SGSR1            */
    uint8  dummy785[11];                                   /* Reserved         */
    __type2187 ULLMSR1;                                    /* ULLMSR1          */
    uint8  dummy786[79];                                   /* Reserved         */
    __type2181 SGSTCR2;                                    /* SGSTCR2          */
    uint8  dummy787[15];                                   /* Reserved         */
    __type2182 SGCR2;                                      /* SGCR2            */
    uint8  dummy788[3];                                    /* Reserved         */
    __type2183 SGVCSP2;                                    /* SGVCSP2          */
    uint8  dummy789[3];                                    /* Reserved         */
    __type2184 SGVCEP2;                                    /* SGVCEP2          */
    uint8  dummy790[3];                                    /* Reserved         */
    __type2185 SGMCYCR2;                                   /* SGMCYCR2         */
    uint8  dummy791[7];                                    /* Reserved         */
    const __type2186 SGSR2;                                /* SGSR2            */
    uint8  dummy792[11];                                   /* Reserved         */
    __type2187 ULLMSR2;                                    /* ULLMSR2          */
    uint8  dummy793[79];                                   /* Reserved         */
    __type2181 SGSTCR3;                                    /* SGSTCR3          */
    uint8  dummy794[7];                                    /* Reserved         */
    __type2188 ADTSTCR3;                                   /* ADTSTCR3         */
    uint8  dummy795[3];                                    /* Reserved         */
    __type2189 ADTENDCR3;                                  /* ADTENDCR3        */
    uint8  dummy796[3];                                    /* Reserved         */
    __type2190 SGCR3;                                      /* SGCR3            */
    uint8  dummy797[3];                                    /* Reserved         */
    __type2183 SGVCSP3;                                    /* SGVCSP3          */
    uint8  dummy798[3];                                    /* Reserved         */
    __type2184 SGVCEP3;                                    /* SGVCEP3          */
    uint8  dummy799[3];                                    /* Reserved         */
    __type2185 SGMCYCR3;                                   /* SGMCYCR3         */
    uint8  dummy800[7];                                    /* Reserved         */
    const __type2191 SGSR3;                                /* SGSR3            */
    uint8  dummy801[3];                                    /* Reserved         */
    __type2192 ADTIPR3;                                    /* ADTIPR3          */
    __type2193 ADTPRR3;                                    /* ADTPRR3          */
    __type2187 ULLMSR3;                                    /* ULLMSR3          */
    uint8  dummy802[79];                                   /* Reserved         */
    __type2181 SGSTCR4;                                    /* SGSTCR4          */
    uint8  dummy803[7];                                    /* Reserved         */
    __type2188 ADTSTCR4;                                   /* ADTSTCR4         */
    uint8  dummy804[3];                                    /* Reserved         */
    __type2189 ADTENDCR4;                                  /* ADTENDCR4        */
    uint8  dummy805[3];                                    /* Reserved         */
    __type2190 SGCR4;                                      /* SGCR4            */
    uint8  dummy806[3];                                    /* Reserved         */
    __type2183 SGVCSP4;                                    /* SGVCSP4          */
    uint8  dummy807[3];                                    /* Reserved         */
    __type2184 SGVCEP4;                                    /* SGVCEP4          */
    uint8  dummy808[3];                                    /* Reserved         */
    __type2185 SGMCYCR4;                                   /* SGMCYCR4         */
    uint8  dummy809[7];                                    /* Reserved         */
    const __type2191 SGSR4;                                /* SGSR4            */
    uint8  dummy810[3];                                    /* Reserved         */
    __type2192 ADTIPR4;                                    /* ADTIPR4          */
    __type2193 ADTPRR4;                                    /* ADTPRR4          */
    __type2187 ULLMSR4;                                    /* ULLMSR4          */
    uint8  dummy811[6543];                                 /* Reserved         */
    __type2197 ADOPDIG1;                                   /* ADOPDIG1         */
} __type2614;

__IOREG(ADCD0, 0xFFF20000, __READ_WRITE, __type2613);                 /* ADCD0 */
__IOREG(ADCD1, 0xFFF21000, __READ_WRITE, __type2614);                 /* ADCD1 */

#define ADCD0VCR00 ADCD0.VCR00.UINT32
#define ADCD0GCTRL ADCD0.VCR00.BIT.GCTRL
#define ADCD0ADIE ADCD0.VCR00.BIT.ADIE
#define ADCD0CNVCLS ADCD0.VCR00.BIT.CNVCLS
#define ADCD0PDE ADCD0.VCR00.BIT.PDE
#define ADCD0PUE ADCD0.VCR00.BIT.PUE
#define ADCD0VCR01 ADCD0.VCR01.UINT32
#define ADCD0VCR02 ADCD0.VCR02.UINT32
#define ADCD0VCR03 ADCD0.VCR03.UINT32
#define ADCD0VCR04 ADCD0.VCR04.UINT32
#define ADCD0VCR05 ADCD0.VCR05.UINT32
#define ADCD0VCR06 ADCD0.VCR06.UINT32
#define ADCD0VCR07 ADCD0.VCR07.UINT32
#define ADCD0VCR08 ADCD0.VCR08.UINT32
#define ADCD0VCR09 ADCD0.VCR09.UINT32
#define ADCD0VCR10 ADCD0.VCR10.UINT32
#define ADCD0VCR11 ADCD0.VCR11.UINT32
#define ADCD0VCR12 ADCD0.VCR12.UINT32
#define ADCD0VCR13 ADCD0.VCR13.UINT32
#define ADCD0VCR14 ADCD0.VCR14.UINT32
#define ADCD0VCR15 ADCD0.VCR15.UINT32
#define ADCD0VCR16 ADCD0.VCR16.UINT32
#define ADCD0VCR17 ADCD0.VCR17.UINT32
#define ADCD0VCR18 ADCD0.VCR18.UINT32
#define ADCD0VCR19 ADCD0.VCR19.UINT32
#define ADCD0VCR20 ADCD0.VCR20.UINT32
#define ADCD0VCR21 ADCD0.VCR21.UINT32
#define ADCD0VCR22 ADCD0.VCR22.UINT32
#define ADCD0VCR23 ADCD0.VCR23.UINT32
#define ADCD0DR00 ADCD0.DR00.UINT32
#define ADCD0DR01 ADCD0.DR00.BIT.DR01
#define ADCD0DR02 ADCD0.DR02.UINT32
#define ADCD0DR03 ADCD0.DR02.BIT.DR03
#define ADCD0DR04 ADCD0.DR04.UINT32
#define ADCD0DR05 ADCD0.DR04.BIT.DR05
#define ADCD0DR06 ADCD0.DR06.UINT32
#define ADCD0DR07 ADCD0.DR06.BIT.DR07
#define ADCD0DR08 ADCD0.DR08.UINT32
#define ADCD0DR09 ADCD0.DR08.BIT.DR09
#define ADCD0DR10 ADCD0.DR10.UINT32
#define ADCD0DR11 ADCD0.DR10.BIT.DR11
#define ADCD0DR12 ADCD0.DR12.UINT32
#define ADCD0DR13 ADCD0.DR12.BIT.DR13
#define ADCD0DR14 ADCD0.DR14.UINT32
#define ADCD0DR15 ADCD0.DR14.BIT.DR15
#define ADCD0DR16 ADCD0.DR16.UINT32
#define ADCD0DR17 ADCD0.DR16.BIT.DR17
#define ADCD0DR18 ADCD0.DR18.UINT32
#define ADCD0DR19 ADCD0.DR18.BIT.DR19
#define ADCD0DR20 ADCD0.DR20.UINT32
#define ADCD0DR21 ADCD0.DR20.BIT.DR21
#define ADCD0DR22 ADCD0.DR22.UINT32
#define ADCD0DR23 ADCD0.DR22.BIT.DR23
#define ADCD0DIR00 ADCD0.DIR00.UINT32
#define ADCD0ID ADCD0.DIR00.BIT.ID
#define ADCD0PRTY ADCD0.DIR00.BIT.PRTY
#define ADCD0WFLG ADCD0.DIR00.BIT.WFLG
#define ADCD0DIR01 ADCD0.DIR01.UINT32
#define ADCD0DIR02 ADCD0.DIR02.UINT32
#define ADCD0DIR03 ADCD0.DIR03.UINT32
#define ADCD0DIR04 ADCD0.DIR04.UINT32
#define ADCD0DIR05 ADCD0.DIR05.UINT32
#define ADCD0DIR06 ADCD0.DIR06.UINT32
#define ADCD0DIR07 ADCD0.DIR07.UINT32
#define ADCD0DIR08 ADCD0.DIR08.UINT32
#define ADCD0DIR09 ADCD0.DIR09.UINT32
#define ADCD0DIR10 ADCD0.DIR10.UINT32
#define ADCD0DIR11 ADCD0.DIR11.UINT32
#define ADCD0DIR12 ADCD0.DIR12.UINT32
#define ADCD0DIR13 ADCD0.DIR13.UINT32
#define ADCD0DIR14 ADCD0.DIR14.UINT32
#define ADCD0DIR15 ADCD0.DIR15.UINT32
#define ADCD0DIR16 ADCD0.DIR16.UINT32
#define ADCD0DIR17 ADCD0.DIR17.UINT32
#define ADCD0DIR18 ADCD0.DIR18.UINT32
#define ADCD0DIR19 ADCD0.DIR19.UINT32
#define ADCD0DIR20 ADCD0.DIR20.UINT32
#define ADCD0DIR21 ADCD0.DIR21.UINT32
#define ADCD0DIR22 ADCD0.DIR22.UINT32
#define ADCD0DIR23 ADCD0.DIR23.UINT32
#define ADCD0ADSYNSTCR ADCD0.ADSYNSTCR.UINT8
#define ADCD0ADSTART ADCD0.ADSYNSTCR.BIT.ADSTART
#define ADCD0ADTSYNSTCR ADCD0.ADTSYNSTCR.UINT8
#define ADCD0ADTSTART ADCD0.ADTSYNSTCR.BIT.ADTSTART
#define ADCD0SMPCR ADCD0.SMPCR.UINT16
#define ADCD0ADHALTR ADCD0.ADHALTR.UINT8
#define ADCD0HALT ADCD0.ADHALTR.BIT.HALT
#define ADCD0ADCR1 ADCD0.ADCR1.UINT8
#define ADCD0SUSMTD ADCD0.ADCR1.BIT.SUSMTD
#define ADCD0MPXCURCR ADCD0.MPXCURCR.UINT8
#define ADCD0MSKCFMT ADCD0.MPXCURCR.BIT.MSKCFMT
#define ADCD0MPXCURR ADCD0.MPXCURR.UINT32
#define ADCD0MPXCUR ADCD0.MPXCURR.BIT.MPXCUR
#define ADCD0MSKC ADCD0.MPXCURR.BIT.MSKC
#define ADCD0MPXOWR ADCD0.MPXOWR.UINT8
#define ADCD0MPXOW ADCD0.MPXOWR.BIT.MPXOW
#define ADCD0ADCR2 ADCD0.ADCR2.UINT8
#define ADCD0ADDNT ADCD0.ADCR2.BIT.ADDNT
#define ADCD0DFMT ADCD0.ADCR2.BIT.DFMT
#define ADCD0ADENDP0 ADCD0.ADENDP0.UINT8
#define ADCD0ENDP ADCD0.ADENDP0.BIT.ENDP
#define ADCD0ADENDP1 ADCD0.ADENDP1.UINT8
#define ADCD0ADENDP2 ADCD0.ADENDP2.UINT8
#define ADCD0ADENDP3 ADCD0.ADENDP3.UINT8
#define ADCD0ADENDP4 ADCD0.ADENDP4.UINT8
#define ADCD0SFTCR ADCD0.SFTCR.UINT8
#define ADCD0IDEIE ADCD0.SFTCR.BIT.IDEIE
#define ADCD0PEIE ADCD0.SFTCR.BIT.PEIE
#define ADCD0OWEIE ADCD0.SFTCR.BIT.OWEIE
#define ADCD0ULEIE ADCD0.SFTCR.BIT.ULEIE
#define ADCD0RDCLRE ADCD0.SFTCR.BIT.RDCLRE
#define ADCD0TDCR ADCD0.TDCR.UINT8
#define ADCD0TDLV ADCD0.TDCR.BIT.TDLV
#define ADCD0TDE ADCD0.TDCR.BIT.TDE
#define ADCD0ODCR ADCD0.ODCR.UINT32
#define ADCD0ODPW ADCD0.ODCR.BIT.ODPW
#define ADCD0ODE ADCD0.ODCR.BIT.ODE
#define ADCD0ODDE ADCD0.ODCR.BIT.ODDE
#define ADCD0ULLMTBR0 ADCD0.ULLMTBR0.UINT32
#define ADCD0LLMTB ADCD0.ULLMTBR0.BIT.LLMTB
#define ADCD0ULMTB ADCD0.ULLMTBR0.BIT.ULMTB
#define ADCD0ULLMTBR1 ADCD0.ULLMTBR1.UINT32
#define ADCD0ULLMTBR2 ADCD0.ULLMTBR2.UINT32
#define ADCD0ECR ADCD0.ECR.UINT8
#define ADCD0IDEC ADCD0.ECR.BIT.IDEC
#define ADCD0PEC ADCD0.ECR.BIT.PEC
#define ADCD0OWEC ADCD0.ECR.BIT.OWEC
#define ADCD0ULEC ADCD0.ECR.BIT.ULEC
#define ADCD0ULER ADCD0.ULER.UINT8
#define ADCD0ULECAP ADCD0.ULER.BIT.ULECAP
#define ADCD0ULE ADCD0.ULER.BIT.ULE
#define ADCD0OWER ADCD0.OWER.UINT8
#define ADCD0OWECAP ADCD0.OWER.BIT.OWECAP
#define ADCD0OWE ADCD0.OWER.BIT.OWE
#define ADCD0PER ADCD0.PER.UINT8
#define ADCD0PECAP ADCD0.PER.BIT.PECAP
#define ADCD0PE ADCD0.PER.BIT.PE
#define ADCD0IDER ADCD0.IDER.UINT8
#define ADCD0IDECAP ADCD0.IDER.BIT.IDECAP
#define ADCD0IDE ADCD0.IDER.BIT.IDE
#define ADCD0THSMPSTCR ADCD0.THSMPSTCR.UINT8
#define ADCD0SMPST ADCD0.THSMPSTCR.BIT.SMPST
#define ADCD0THSTPCR ADCD0.THSTPCR.UINT8
#define ADCD0THSTP ADCD0.THSTPCR.BIT.THSTP
#define ADCD0THCR ADCD0.THCR.UINT8
#define ADCD0ASMPMSK ADCD0.THCR.BIT.ASMPMSK
#define ADCD0THAHLDSTCR ADCD0.THAHLDSTCR.UINT8
#define ADCD0HLDST ADCD0.THAHLDSTCR.BIT.HLDST
#define ADCD0THBHLDSTCR ADCD0.THBHLDSTCR.UINT8
#define ADCD0THACR ADCD0.THACR.UINT8
#define ADCD0SGS ADCD0.THACR.BIT.SGS
#define ADCD0HLDTE ADCD0.THACR.BIT.HLDTE
#define ADCD0HLDCTE ADCD0.THACR.BIT.HLDCTE
#define ADCD0THBCR ADCD0.THBCR.UINT8
#define ADCD0THER ADCD0.THER.UINT8
#define ADCD0TH0E ADCD0.THER.BIT.TH0E
#define ADCD0TH1E ADCD0.THER.BIT.TH1E
#define ADCD0TH2E ADCD0.THER.BIT.TH2E
#define ADCD0TH3E ADCD0.THER.BIT.TH3E
#define ADCD0TH4E ADCD0.THER.BIT.TH4E
#define ADCD0TH5E ADCD0.THER.BIT.TH5E
#define ADCD0THGSR ADCD0.THGSR.UINT16
#define ADCD0TH0GS ADCD0.THGSR.BIT.TH0GS
#define ADCD0TH1GS ADCD0.THGSR.BIT.TH1GS
#define ADCD0TH2GS ADCD0.THGSR.BIT.TH2GS
#define ADCD0TH3GS ADCD0.THGSR.BIT.TH3GS
#define ADCD0TH4GS ADCD0.THGSR.BIT.TH4GS
#define ADCD0TH5GS ADCD0.THGSR.BIT.TH5GS
#define ADCD0SGSTCR0 ADCD0.SGSTCR0.UINT8
#define ADCD0SGST ADCD0.SGSTCR0.BIT.SGST
#define ADCD0SGCR0 ADCD0.SGCR0.UINT8
#define ADCD0TRGMD ADCD0.SGCR0.BIT.TRGMD
#define ADCD0SCANMD ADCD0.SGCR0.BIT.SCANMD
#define ADCD0ADSTARTE ADCD0.SGCR0.BIT.ADSTARTE
#define ADCD0SGVCSP0 ADCD0.SGVCSP0.UINT8
#define ADCD0VCSP ADCD0.SGVCSP0.BIT.VCSP
#define ADCD0SGVCEP0 ADCD0.SGVCEP0.UINT8
#define ADCD0VCEP ADCD0.SGVCEP0.BIT.VCEP
#define ADCD0SGMCYCR0 ADCD0.SGMCYCR0.UINT8
#define ADCD0MCYC ADCD0.SGMCYCR0.BIT.MCYC
#define ADCD0SGSR0 ADCD0.SGSR0.UINT8
#define ADCD0SGACT ADCD0.SGSR0.BIT.SGACT
#define ADCD0ULLMSR0 ADCD0.ULLMSR0.UINT8
#define ADCD0ULS ADCD0.ULLMSR0.BIT.ULS
#define ADCD0SGSTCR1 ADCD0.SGSTCR1.UINT8
#define ADCD0SGCR1 ADCD0.SGCR1.UINT8
#define ADCD0SGVCSP1 ADCD0.SGVCSP1.UINT8
#define ADCD0SGVCEP1 ADCD0.SGVCEP1.UINT8
#define ADCD0SGMCYCR1 ADCD0.SGMCYCR1.UINT8
#define ADCD0SGSR1 ADCD0.SGSR1.UINT8
#define ADCD0ULLMSR1 ADCD0.ULLMSR1.UINT8
#define ADCD0SGSTCR2 ADCD0.SGSTCR2.UINT8
#define ADCD0SGCR2 ADCD0.SGCR2.UINT8
#define ADCD0SGVCSP2 ADCD0.SGVCSP2.UINT8
#define ADCD0SGVCEP2 ADCD0.SGVCEP2.UINT8
#define ADCD0SGMCYCR2 ADCD0.SGMCYCR2.UINT8
#define ADCD0SGSR2 ADCD0.SGSR2.UINT8
#define ADCD0ULLMSR2 ADCD0.ULLMSR2.UINT8
#define ADCD0SGSTCR3 ADCD0.SGSTCR3.UINT8
#define ADCD0ADTSTCR3 ADCD0.ADTSTCR3.UINT8
#define ADCD0ADTST ADCD0.ADTSTCR3.BIT.ADTST
#define ADCD0ADTENDCR3 ADCD0.ADTENDCR3.UINT8
#define ADCD0ADTEND ADCD0.ADTENDCR3.BIT.ADTEND
#define ADCD0SGCR3 ADCD0.SGCR3.UINT8
#define ADCD0ADTSTARTE ADCD0.SGCR3.BIT.ADTSTARTE
#define ADCD0SGVCSP3 ADCD0.SGVCSP3.UINT8
#define ADCD0SGVCEP3 ADCD0.SGVCEP3.UINT8
#define ADCD0SGMCYCR3 ADCD0.SGMCYCR3.UINT8
#define ADCD0SGSR3 ADCD0.SGSR3.UINT8
#define ADCD0ADTACT ADCD0.SGSR3.BIT.ADTACT
#define ADCD0ADTIPR3 ADCD0.ADTIPR3.UINT32
#define ADCD0ADTIP ADCD0.ADTIPR3.BIT.ADTIP
#define ADCD0ADTPRR3 ADCD0.ADTPRR3.UINT32
#define ADCD0ADTPR ADCD0.ADTPRR3.BIT.ADTPR
#define ADCD0ULLMSR3 ADCD0.ULLMSR3.UINT8
#define ADCD0SGSTCR4 ADCD0.SGSTCR4.UINT8
#define ADCD0ADTSTCR4 ADCD0.ADTSTCR4.UINT8
#define ADCD0ADTENDCR4 ADCD0.ADTENDCR4.UINT8
#define ADCD0SGCR4 ADCD0.SGCR4.UINT8
#define ADCD0SGVCSP4 ADCD0.SGVCSP4.UINT8
#define ADCD0SGVCEP4 ADCD0.SGVCEP4.UINT8
#define ADCD0SGMCYCR4 ADCD0.SGMCYCR4.UINT8
#define ADCD0SGSR4 ADCD0.SGSR4.UINT8
#define ADCD0ADTIPR4 ADCD0.ADTIPR4.UINT32
#define ADCD0ADTPRR4 ADCD0.ADTPRR4.UINT32
#define ADCD0ULLMSR4 ADCD0.ULLMSR4.UINT8
#define ADCD0ADOPDIG0 ADCD0.ADOPDIG0.UINT32
#define ADCD0ADOPDIG000 ADCD0.ADOPDIG0.BIT.ADOPDIG000
#define ADCD0ADOPDIG001 ADCD0.ADOPDIG0.BIT.ADOPDIG001
#define ADCD0ADOPDIG002 ADCD0.ADOPDIG0.BIT.ADOPDIG002
#define ADCD0ADOPDIG003 ADCD0.ADOPDIG0.BIT.ADOPDIG003
#define ADCD0ADOPDIG004 ADCD0.ADOPDIG0.BIT.ADOPDIG004
#define ADCD0ADOPDIG005 ADCD0.ADOPDIG0.BIT.ADOPDIG005
#define ADCD0ADOPDIG006 ADCD0.ADOPDIG0.BIT.ADOPDIG006
#define ADCD0ADOPDIG007 ADCD0.ADOPDIG0.BIT.ADOPDIG007
#define ADCD0ADOPDIG008 ADCD0.ADOPDIG0.BIT.ADOPDIG008
#define ADCD0ADOPDIG009 ADCD0.ADOPDIG0.BIT.ADOPDIG009
#define ADCD0ADOPDIG010 ADCD0.ADOPDIG0.BIT.ADOPDIG010
#define ADCD0ADOPDIG011 ADCD0.ADOPDIG0.BIT.ADOPDIG011
#define ADCD1VCR00 ADCD1.VCR00.UINT32
#define ADCD1GCTRL ADCD1.VCR00.BIT.GCTRL
#define ADCD1ADIE ADCD1.VCR00.BIT.ADIE
#define ADCD1CNVCLS ADCD1.VCR00.BIT.CNVCLS
#define ADCD1PDE ADCD1.VCR00.BIT.PDE
#define ADCD1PUE ADCD1.VCR00.BIT.PUE
#define ADCD1VCR01 ADCD1.VCR01.UINT32
#define ADCD1VCR02 ADCD1.VCR02.UINT32
#define ADCD1VCR03 ADCD1.VCR03.UINT32
#define ADCD1VCR04 ADCD1.VCR04.UINT32
#define ADCD1VCR05 ADCD1.VCR05.UINT32
#define ADCD1VCR06 ADCD1.VCR06.UINT32
#define ADCD1VCR07 ADCD1.VCR07.UINT32
#define ADCD1VCR08 ADCD1.VCR08.UINT32
#define ADCD1VCR09 ADCD1.VCR09.UINT32
#define ADCD1VCR10 ADCD1.VCR10.UINT32
#define ADCD1VCR11 ADCD1.VCR11.UINT32
#define ADCD1VCR12 ADCD1.VCR12.UINT32
#define ADCD1VCR13 ADCD1.VCR13.UINT32
#define ADCD1VCR14 ADCD1.VCR14.UINT32
#define ADCD1VCR15 ADCD1.VCR15.UINT32
#define ADCD1VCR16 ADCD1.VCR16.UINT32
#define ADCD1VCR17 ADCD1.VCR17.UINT32
#define ADCD1VCR18 ADCD1.VCR18.UINT32
#define ADCD1VCR19 ADCD1.VCR19.UINT32
#define ADCD1VCR20 ADCD1.VCR20.UINT32
#define ADCD1VCR21 ADCD1.VCR21.UINT32
#define ADCD1VCR22 ADCD1.VCR22.UINT32
#define ADCD1VCR23 ADCD1.VCR23.UINT32
#define ADCD1DR00 ADCD1.DR00.UINT32
#define ADCD1DR01 ADCD1.DR00.BIT.DR01
#define ADCD1DR02 ADCD1.DR02.UINT32
#define ADCD1DR03 ADCD1.DR02.BIT.DR03
#define ADCD1DR04 ADCD1.DR04.UINT32
#define ADCD1DR05 ADCD1.DR04.BIT.DR05
#define ADCD1DR06 ADCD1.DR06.UINT32
#define ADCD1DR07 ADCD1.DR06.BIT.DR07
#define ADCD1DR08 ADCD1.DR08.UINT32
#define ADCD1DR09 ADCD1.DR08.BIT.DR09
#define ADCD1DR10 ADCD1.DR10.UINT32
#define ADCD1DR11 ADCD1.DR10.BIT.DR11
#define ADCD1DR12 ADCD1.DR12.UINT32
#define ADCD1DR13 ADCD1.DR12.BIT.DR13
#define ADCD1DR14 ADCD1.DR14.UINT32
#define ADCD1DR15 ADCD1.DR14.BIT.DR15
#define ADCD1DR16 ADCD1.DR16.UINT32
#define ADCD1DR17 ADCD1.DR16.BIT.DR17
#define ADCD1DR18 ADCD1.DR18.UINT32
#define ADCD1DR19 ADCD1.DR18.BIT.DR19
#define ADCD1DR20 ADCD1.DR20.UINT32
#define ADCD1DR21 ADCD1.DR20.BIT.DR21
#define ADCD1DR22 ADCD1.DR22.UINT32
#define ADCD1DR23 ADCD1.DR22.BIT.DR23
#define ADCD1DIR00 ADCD1.DIR00.UINT32
#define ADCD1ID ADCD1.DIR00.BIT.ID
#define ADCD1PRTY ADCD1.DIR00.BIT.PRTY
#define ADCD1WFLG ADCD1.DIR00.BIT.WFLG
#define ADCD1DIR01 ADCD1.DIR01.UINT32
#define ADCD1DIR02 ADCD1.DIR02.UINT32
#define ADCD1DIR03 ADCD1.DIR03.UINT32
#define ADCD1DIR04 ADCD1.DIR04.UINT32
#define ADCD1DIR05 ADCD1.DIR05.UINT32
#define ADCD1DIR06 ADCD1.DIR06.UINT32
#define ADCD1DIR07 ADCD1.DIR07.UINT32
#define ADCD1DIR08 ADCD1.DIR08.UINT32
#define ADCD1DIR09 ADCD1.DIR09.UINT32
#define ADCD1DIR10 ADCD1.DIR10.UINT32
#define ADCD1DIR11 ADCD1.DIR11.UINT32
#define ADCD1DIR12 ADCD1.DIR12.UINT32
#define ADCD1DIR13 ADCD1.DIR13.UINT32
#define ADCD1DIR14 ADCD1.DIR14.UINT32
#define ADCD1DIR15 ADCD1.DIR15.UINT32
#define ADCD1DIR16 ADCD1.DIR16.UINT32
#define ADCD1DIR17 ADCD1.DIR17.UINT32
#define ADCD1DIR18 ADCD1.DIR18.UINT32
#define ADCD1DIR19 ADCD1.DIR19.UINT32
#define ADCD1DIR20 ADCD1.DIR20.UINT32
#define ADCD1DIR21 ADCD1.DIR21.UINT32
#define ADCD1DIR22 ADCD1.DIR22.UINT32
#define ADCD1DIR23 ADCD1.DIR23.UINT32
#define ADCD1SMPCR ADCD1.SMPCR.UINT16
#define ADCD1ADHALTR ADCD1.ADHALTR.UINT8
#define ADCD1HALT ADCD1.ADHALTR.BIT.HALT
#define ADCD1ADCR1 ADCD1.ADCR1.UINT8
#define ADCD1SUSMTD ADCD1.ADCR1.BIT.SUSMTD
#define ADCD1MPXCURCR ADCD1.MPXCURCR.UINT8
#define ADCD1MSKCFMT ADCD1.MPXCURCR.BIT.MSKCFMT
#define ADCD1MPXCURR ADCD1.MPXCURR.UINT32
#define ADCD1MPXCUR ADCD1.MPXCURR.BIT.MPXCUR
#define ADCD1MSKC ADCD1.MPXCURR.BIT.MSKC
#define ADCD1MPXOWR ADCD1.MPXOWR.UINT8
#define ADCD1MPXOW ADCD1.MPXOWR.BIT.MPXOW
#define ADCD1ADCR2 ADCD1.ADCR2.UINT8
#define ADCD1ADDNT ADCD1.ADCR2.BIT.ADDNT
#define ADCD1DFMT ADCD1.ADCR2.BIT.DFMT
#define ADCD1ADENDP0 ADCD1.ADENDP0.UINT8
#define ADCD1ENDP ADCD1.ADENDP0.BIT.ENDP
#define ADCD1ADENDP1 ADCD1.ADENDP1.UINT8
#define ADCD1ADENDP2 ADCD1.ADENDP2.UINT8
#define ADCD1ADENDP3 ADCD1.ADENDP3.UINT8
#define ADCD1ADENDP4 ADCD1.ADENDP4.UINT8
#define ADCD1SFTCR ADCD1.SFTCR.UINT8
#define ADCD1IDEIE ADCD1.SFTCR.BIT.IDEIE
#define ADCD1PEIE ADCD1.SFTCR.BIT.PEIE
#define ADCD1OWEIE ADCD1.SFTCR.BIT.OWEIE
#define ADCD1ULEIE ADCD1.SFTCR.BIT.ULEIE
#define ADCD1RDCLRE ADCD1.SFTCR.BIT.RDCLRE
#define ADCD1TDCR ADCD1.TDCR.UINT8
#define ADCD1TDLV ADCD1.TDCR.BIT.TDLV
#define ADCD1TDE ADCD1.TDCR.BIT.TDE
#define ADCD1ODCR ADCD1.ODCR.UINT32
#define ADCD1ODPW ADCD1.ODCR.BIT.ODPW
#define ADCD1ODE ADCD1.ODCR.BIT.ODE
#define ADCD1ODDE ADCD1.ODCR.BIT.ODDE
#define ADCD1ULLMTBR0 ADCD1.ULLMTBR0.UINT32
#define ADCD1LLMTB ADCD1.ULLMTBR0.BIT.LLMTB
#define ADCD1ULMTB ADCD1.ULLMTBR0.BIT.ULMTB
#define ADCD1ULLMTBR1 ADCD1.ULLMTBR1.UINT32
#define ADCD1ULLMTBR2 ADCD1.ULLMTBR2.UINT32
#define ADCD1ECR ADCD1.ECR.UINT8
#define ADCD1IDEC ADCD1.ECR.BIT.IDEC
#define ADCD1PEC ADCD1.ECR.BIT.PEC
#define ADCD1OWEC ADCD1.ECR.BIT.OWEC
#define ADCD1ULEC ADCD1.ECR.BIT.ULEC
#define ADCD1ULER ADCD1.ULER.UINT8
#define ADCD1ULECAP ADCD1.ULER.BIT.ULECAP
#define ADCD1ULE ADCD1.ULER.BIT.ULE
#define ADCD1OWER ADCD1.OWER.UINT8
#define ADCD1OWECAP ADCD1.OWER.BIT.OWECAP
#define ADCD1OWE ADCD1.OWER.BIT.OWE
#define ADCD1PER ADCD1.PER.UINT8
#define ADCD1PECAP ADCD1.PER.BIT.PECAP
#define ADCD1PE ADCD1.PER.BIT.PE
#define ADCD1IDER ADCD1.IDER.UINT8
#define ADCD1IDECAP ADCD1.IDER.BIT.IDECAP
#define ADCD1IDE ADCD1.IDER.BIT.IDE
#define ADCD1THSMPSTCR ADCD1.THSMPSTCR.UINT8
#define ADCD1SMPST ADCD1.THSMPSTCR.BIT.SMPST
#define ADCD1THSTPCR ADCD1.THSTPCR.UINT8
#define ADCD1THSTP ADCD1.THSTPCR.BIT.THSTP
#define ADCD1THCR ADCD1.THCR.UINT8
#define ADCD1ASMPMSK ADCD1.THCR.BIT.ASMPMSK
#define ADCD1THAHLDSTCR ADCD1.THAHLDSTCR.UINT8
#define ADCD1HLDST ADCD1.THAHLDSTCR.BIT.HLDST
#define ADCD1THBHLDSTCR ADCD1.THBHLDSTCR.UINT8
#define ADCD1THACR ADCD1.THACR.UINT8
#define ADCD1SGS ADCD1.THACR.BIT.SGS
#define ADCD1HLDTE ADCD1.THACR.BIT.HLDTE
#define ADCD1HLDCTE ADCD1.THACR.BIT.HLDCTE
#define ADCD1THBCR ADCD1.THBCR.UINT8
#define ADCD1THER ADCD1.THER.UINT8
#define ADCD1TH0E ADCD1.THER.BIT.TH0E
#define ADCD1TH1E ADCD1.THER.BIT.TH1E
#define ADCD1TH2E ADCD1.THER.BIT.TH2E
#define ADCD1TH3E ADCD1.THER.BIT.TH3E
#define ADCD1THGSR ADCD1.THGSR.UINT16
#define ADCD1TH0GS ADCD1.THGSR.BIT.TH0GS
#define ADCD1TH1GS ADCD1.THGSR.BIT.TH1GS
#define ADCD1TH2GS ADCD1.THGSR.BIT.TH2GS
#define ADCD1TH3GS ADCD1.THGSR.BIT.TH3GS
#define ADCD1SGSTCR0 ADCD1.SGSTCR0.UINT8
#define ADCD1SGST ADCD1.SGSTCR0.BIT.SGST
#define ADCD1SGCR0 ADCD1.SGCR0.UINT8
#define ADCD1TRGMD ADCD1.SGCR0.BIT.TRGMD
#define ADCD1SCANMD ADCD1.SGCR0.BIT.SCANMD
#define ADCD1ADSTARTE ADCD1.SGCR0.BIT.ADSTARTE
#define ADCD1SGVCSP0 ADCD1.SGVCSP0.UINT8
#define ADCD1VCSP ADCD1.SGVCSP0.BIT.VCSP
#define ADCD1SGVCEP0 ADCD1.SGVCEP0.UINT8
#define ADCD1VCEP ADCD1.SGVCEP0.BIT.VCEP
#define ADCD1SGMCYCR0 ADCD1.SGMCYCR0.UINT8
#define ADCD1MCYC ADCD1.SGMCYCR0.BIT.MCYC
#define ADCD1SGSR0 ADCD1.SGSR0.UINT8
#define ADCD1SGACT ADCD1.SGSR0.BIT.SGACT
#define ADCD1ULLMSR0 ADCD1.ULLMSR0.UINT8
#define ADCD1ULS ADCD1.ULLMSR0.BIT.ULS
#define ADCD1SGSTCR1 ADCD1.SGSTCR1.UINT8
#define ADCD1SGCR1 ADCD1.SGCR1.UINT8
#define ADCD1SGVCSP1 ADCD1.SGVCSP1.UINT8
#define ADCD1SGVCEP1 ADCD1.SGVCEP1.UINT8
#define ADCD1SGMCYCR1 ADCD1.SGMCYCR1.UINT8
#define ADCD1SGSR1 ADCD1.SGSR1.UINT8
#define ADCD1ULLMSR1 ADCD1.ULLMSR1.UINT8
#define ADCD1SGSTCR2 ADCD1.SGSTCR2.UINT8
#define ADCD1SGCR2 ADCD1.SGCR2.UINT8
#define ADCD1SGVCSP2 ADCD1.SGVCSP2.UINT8
#define ADCD1SGVCEP2 ADCD1.SGVCEP2.UINT8
#define ADCD1SGMCYCR2 ADCD1.SGMCYCR2.UINT8
#define ADCD1SGSR2 ADCD1.SGSR2.UINT8
#define ADCD1ULLMSR2 ADCD1.ULLMSR2.UINT8
#define ADCD1SGSTCR3 ADCD1.SGSTCR3.UINT8
#define ADCD1ADTSTCR3 ADCD1.ADTSTCR3.UINT8
#define ADCD1ADTST ADCD1.ADTSTCR3.BIT.ADTST
#define ADCD1ADTENDCR3 ADCD1.ADTENDCR3.UINT8
#define ADCD1ADTEND ADCD1.ADTENDCR3.BIT.ADTEND
#define ADCD1SGCR3 ADCD1.SGCR3.UINT8
#define ADCD1ADTSTARTE ADCD1.SGCR3.BIT.ADTSTARTE
#define ADCD1SGVCSP3 ADCD1.SGVCSP3.UINT8
#define ADCD1SGVCEP3 ADCD1.SGVCEP3.UINT8
#define ADCD1SGMCYCR3 ADCD1.SGMCYCR3.UINT8
#define ADCD1SGSR3 ADCD1.SGSR3.UINT8
#define ADCD1ADTACT ADCD1.SGSR3.BIT.ADTACT
#define ADCD1ADTIPR3 ADCD1.ADTIPR3.UINT32
#define ADCD1ADTIP ADCD1.ADTIPR3.BIT.ADTIP
#define ADCD1ADTPRR3 ADCD1.ADTPRR3.UINT32
#define ADCD1ADTPR ADCD1.ADTPRR3.BIT.ADTPR
#define ADCD1ULLMSR3 ADCD1.ULLMSR3.UINT8
#define ADCD1SGSTCR4 ADCD1.SGSTCR4.UINT8
#define ADCD1ADTSTCR4 ADCD1.ADTSTCR4.UINT8
#define ADCD1ADTENDCR4 ADCD1.ADTENDCR4.UINT8
#define ADCD1SGCR4 ADCD1.SGCR4.UINT8
#define ADCD1SGVCSP4 ADCD1.SGVCSP4.UINT8
#define ADCD1SGVCEP4 ADCD1.SGVCEP4.UINT8
#define ADCD1SGMCYCR4 ADCD1.SGMCYCR4.UINT8
#define ADCD1SGSR4 ADCD1.SGSR4.UINT8
#define ADCD1ADTIPR4 ADCD1.ADTIPR4.UINT32
#define ADCD1ADTPRR4 ADCD1.ADTPRR4.UINT32
#define ADCD1ULLMSR4 ADCD1.ULLMSR4.UINT8
#define ADCD1ADOPDIG1 ADCD1.ADOPDIG1.UINT32
#define ADCD1ADOPDIG100 ADCD1.ADOPDIG1.BIT.ADOPDIG100
#define ADCD1ADOPDIG101 ADCD1.ADOPDIG1.BIT.ADOPDIG101
#define ADCD1ADOPDIG102 ADCD1.ADOPDIG1.BIT.ADOPDIG102
#define ADCD1ADOPDIG103 ADCD1.ADOPDIG1.BIT.ADOPDIG103
#define ADCD1ADOPDIG104 ADCD1.ADOPDIG1.BIT.ADOPDIG104
#define ADCD1ADOPDIG105 ADCD1.ADOPDIG1.BIT.ADOPDIG105
#define ADCD1ADOPDIG106 ADCD1.ADOPDIG1.BIT.ADOPDIG106
#define ADCD1ADOPDIG107 ADCD1.ADOPDIG1.BIT.ADOPDIG107
#define ADCD1ADOPDIG108 ADCD1.ADOPDIG1.BIT.ADOPDIG108
#define ADCD1ADOPDIG109 ADCD1.ADOPDIG1.BIT.ADOPDIG109
#define ADCD1ADOPDIG110 ADCD1.ADOPDIG1.BIT.ADOPDIG110
#define ADCD1ADOPDIG111 ADCD1.ADOPDIG1.BIT.ADOPDIG111

#endif
