/**********************************************************************************************************************
* Module File Name  : ecm_regs.h
* Module Description: Error Control Module Peripheral Registers
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

#ifndef ECM_REGS_H
#define ECM_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  EST:1;                                          /* EST              */
    uint8  :7;                                             /* Reserved Bits    */
} __type451;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ECT:1;                                          /* ECT              */
    uint8  :7;                                             /* Reserved Bits    */
} __type452;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 SSE000:1;                                 /* SSE000           */
    const uint32 SSE001:1;                                 /* SSE001           */
    uint32 :2;                                             /* Reserved Bits    */
    const uint32 SSE004:1;                                 /* SSE004           */
    const uint32 SSE005:1;                                 /* SSE005           */
    const uint32 SSE006:1;                                 /* SSE006           */
    const uint32 SSE007:1;                                 /* SSE007           */
    const uint32 SSE008:1;                                 /* SSE008           */
    const uint32 SSE009:1;                                 /* SSE009           */
    const uint32 SSE010:1;                                 /* SSE010           */
    const uint32 SSE011:1;                                 /* SSE011           */
    const uint32 SSE012:1;                                 /* SSE012           */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 SSE014:1;                                 /* SSE014           */
    const uint32 SSE015:1;                                 /* SSE015           */
    const uint32 SSE016:1;                                 /* SSE016           */
    const uint32 SSE017:1;                                 /* SSE017           */
    const uint32 SSE018:1;                                 /* SSE018           */
    const uint32 SSE019:1;                                 /* SSE019           */
    const uint32 SSE020:1;                                 /* SSE020           */
    const uint32 SSE021:1;                                 /* SSE021           */
    const uint32 SSE022:1;                                 /* SSE022           */
    const uint32 SSE023:1;                                 /* SSE023           */
    const uint32 SSE024:1;                                 /* SSE024           */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 SSE026:1;                                 /* SSE026           */
    const uint32 SSE027:1;                                 /* SSE027           */
    const uint32 SSE028:1;                                 /* SSE028           */
    const uint32 SSE029:1;                                 /* SSE029           */
    const uint32 SSE030:1;                                 /* SSE030           */
    const uint32 SSE031:1;                                 /* SSE031           */
} __type453;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 SSE100:1;                                 /* SSE100           */
    const uint32 SSE101:1;                                 /* SSE101           */
    const uint32 SSE102:1;                                 /* SSE102           */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 SSE104:1;                                 /* SSE104           */
    const uint32 SSE105:1;                                 /* SSE105           */
    const uint32 SSE106:1;                                 /* SSE106           */
    const uint32 SSE107:1;                                 /* SSE107           */
    const uint32 SSE108:1;                                 /* SSE108           */
    const uint32 SSE109:1;                                 /* SSE109           */
    const uint32 SSE110:1;                                 /* SSE110           */
    uint32 :18;                                            /* Reserved Bits    */
    const uint32 SSE129:1;                                 /* SSE129           */
    const uint32 SSE130:1;                                 /* SSE130           */
    const uint32 SSE131:1;                                 /* SSE131           */
} __type454;
typedef struct 
{                                                          /* Bit Access       */
    uint32 REG0:8;                                         /* REG0[7:0]        */
    uint32 :24;                                            /* Reserved Bits    */
} __type455;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SL0:1;                                          /* SL0              */
    uint8  :7;                                             /* Reserved Bits    */
} __type456;
typedef struct 
{                                                          /* Bit Access       */
    uint32 MIE000:1;                                       /* MIE000           */
    uint32 MIE001:1;                                       /* MIE001           */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 MIE004:1;                                       /* MIE004           */
    uint32 MIE005:1;                                       /* MIE005           */
    uint32 MIE006:1;                                       /* MIE006           */
    uint32 MIE007:1;                                       /* MIE007           */
    uint32 MIE008:1;                                       /* MIE008           */
    uint32 MIE009:1;                                       /* MIE009           */
    uint32 MIE010:1;                                       /* MIE010           */
    uint32 MIE011:1;                                       /* MIE011           */
    uint32 MIE012:1;                                       /* MIE012           */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 MIE014:1;                                       /* MIE014           */
    uint32 MIE015:1;                                       /* MIE015           */
    uint32 MIE016:1;                                       /* MIE016           */
    uint32 MIE017:1;                                       /* MIE017           */
    uint32 MIE018:1;                                       /* MIE018           */
    uint32 MIE019:1;                                       /* MIE019           */
    uint32 MIE020:1;                                       /* MIE020           */
    uint32 MIE021:1;                                       /* MIE021           */
    uint32 MIE022:1;                                       /* MIE022           */
    uint32 MIE023:1;                                       /* MIE023           */
    uint32 MIE024:1;                                       /* MIE024           */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 MIE026:1;                                       /* MIE026           */
    uint32 MIE027:1;                                       /* MIE027           */
    uint32 MIE028:1;                                       /* MIE028           */
    uint32 MIE029:1;                                       /* MIE029           */
    uint32 MIE030:1;                                       /* MIE030           */
    uint32 MIE031:1;                                       /* MIE031           */
} __type457;
typedef struct 
{                                                          /* Bit Access       */
    uint32 MIE100:1;                                       /* MIE100           */
    uint32 MIE101:1;                                       /* MIE101           */
    uint32 MIE102:1;                                       /* MIE102           */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 MIE104:1;                                       /* MIE104           */
    uint32 MIE105:1;                                       /* MIE105           */
    uint32 MIE106:1;                                       /* MIE106           */
    uint32 MIE107:1;                                       /* MIE107           */
    uint32 MIE108:1;                                       /* MIE108           */
    uint32 MIE109:1;                                       /* MIE109           */
    uint32 MIE110:1;                                       /* MIE110           */
    uint32 :21;                                            /* Reserved Bits    */
} __type458;
typedef struct 
{                                                          /* Bit Access       */
    uint32 NMIE000:1;                                      /* NMIE000          */
    uint32 NMIE001:1;                                      /* NMIE001          */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 NMIE004:1;                                      /* NMIE004          */
    uint32 NMIE005:1;                                      /* NMIE005          */
    uint32 NMIE006:1;                                      /* NMIE006          */
    uint32 NMIE007:1;                                      /* NMIE007          */
    uint32 NMIE008:1;                                      /* NMIE008          */
    uint32 NMIE009:1;                                      /* NMIE009          */
    uint32 NMIE010:1;                                      /* NMIE010          */
    uint32 NMIE011:1;                                      /* NMIE011          */
    uint32 NMIE012:1;                                      /* NMIE012          */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 NMIE014:1;                                      /* NMIE014          */
    uint32 NMIE015:1;                                      /* NMIE015          */
    uint32 NMIE016:1;                                      /* NMIE016          */
    uint32 NMIE017:1;                                      /* NMIE017          */
    uint32 NMIE018:1;                                      /* NMIE018          */
    uint32 NMIE019:1;                                      /* NMIE019          */
    uint32 NMIE020:1;                                      /* NMIE020          */
    uint32 NMIE021:1;                                      /* NMIE021          */
    uint32 NMIE022:1;                                      /* NMIE022          */
    uint32 NMIE023:1;                                      /* NMIE023          */
    uint32 NMIE024:1;                                      /* NMIE024          */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 NMIE026:1;                                      /* NMIE026          */
    uint32 NMIE027:1;                                      /* NMIE027          */
    uint32 NMIE028:1;                                      /* NMIE028          */
    uint32 NMIE029:1;                                      /* NMIE029          */
    uint32 NMIE030:1;                                      /* NMIE030          */
    uint32 NMIE031:1;                                      /* NMIE031          */
} __type459;
typedef struct 
{                                                          /* Bit Access       */
    uint32 NMIE100:1;                                      /* NMIE100          */
    uint32 NMIE101:1;                                      /* NMIE101          */
    uint32 NMIE102:1;                                      /* NMIE102          */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 NMIE104:1;                                      /* NMIE104          */
    uint32 NMIE105:1;                                      /* NMIE105          */
    uint32 NMIE106:1;                                      /* NMIE106          */
    uint32 NMIE107:1;                                      /* NMIE107          */
    uint32 NMIE108:1;                                      /* NMIE108          */
    uint32 NMIE109:1;                                      /* NMIE109          */
    uint32 NMIE110:1;                                      /* NMIE110          */
    uint32 :21;                                            /* Reserved Bits    */
} __type460;
typedef struct 
{                                                          /* Bit Access       */
    uint32 IRE000:1;                                       /* IRE000           */
    uint32 IRE001:1;                                       /* IRE001           */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 IRE004:1;                                       /* IRE004           */
    uint32 IRE005:1;                                       /* IRE005           */
    uint32 IRE006:1;                                       /* IRE006           */
    uint32 IRE007:1;                                       /* IRE007           */
    uint32 IRE008:1;                                       /* IRE008           */
    uint32 IRE009:1;                                       /* IRE009           */
    uint32 IRE010:1;                                       /* IRE010           */
    uint32 IRE011:1;                                       /* IRE011           */
    uint32 IRE012:1;                                       /* IRE012           */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 IRE014:1;                                       /* IRE014           */
    uint32 IRE015:1;                                       /* IRE015           */
    uint32 IRE016:1;                                       /* IRE016           */
    uint32 IRE017:1;                                       /* IRE017           */
    uint32 IRE018:1;                                       /* IRE018           */
    uint32 IRE019:1;                                       /* IRE019           */
    uint32 IRE020:1;                                       /* IRE020           */
    uint32 IRE021:1;                                       /* IRE021           */
    uint32 IRE022:1;                                       /* IRE022           */
    uint32 IRE023:1;                                       /* IRE023           */
    uint32 IRE024:1;                                       /* IRE024           */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 IRE026:1;                                       /* IRE026           */
    uint32 IRE027:1;                                       /* IRE027           */
    uint32 IRE028:1;                                       /* IRE028           */
    uint32 IRE029:1;                                       /* IRE029           */
    uint32 IRE030:1;                                       /* IRE030           */
    uint32 IRE031:1;                                       /* IRE031           */
} __type461;
typedef struct 
{                                                          /* Bit Access       */
    uint32 IRE100:1;                                       /* IRE100           */
    uint32 IRE101:1;                                       /* IRE101           */
    uint32 IRE102:1;                                       /* IRE102           */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 IRE104:1;                                       /* IRE104           */
    uint32 IRE105:1;                                       /* IRE105           */
    uint32 IRE106:1;                                       /* IRE106           */
    uint32 IRE107:1;                                       /* IRE107           */
    uint32 IRE108:1;                                       /* IRE108           */
    uint32 IRE109:1;                                       /* IRE109           */
    uint32 IRE110:1;                                       /* IRE110           */
    uint32 :18;                                            /* Reserved Bits    */
    uint32 IRE129:1;                                       /* IRE129           */
    uint32 :2;                                             /* Reserved Bits    */
} __type462;
typedef struct 
{                                                          /* Bit Access       */
    uint32 EMK000:1;                                       /* EMK000           */
    uint32 EMK001:1;                                       /* EMK001           */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 EMK004:1;                                       /* EMK004           */
    uint32 EMK005:1;                                       /* EMK005           */
    uint32 EMK006:1;                                       /* EMK006           */
    uint32 EMK007:1;                                       /* EMK007           */
    uint32 EMK008:1;                                       /* EMK008           */
    uint32 EMK009:1;                                       /* EMK009           */
    uint32 EMK010:1;                                       /* EMK010           */
    uint32 EMK011:1;                                       /* EMK011           */
    uint32 EMK012:1;                                       /* EMK012           */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 EMK014:1;                                       /* EMK014           */
    uint32 EMK015:1;                                       /* EMK015           */
    uint32 EMK016:1;                                       /* EMK016           */
    uint32 EMK017:1;                                       /* EMK017           */
    uint32 EMK018:1;                                       /* EMK018           */
    uint32 EMK019:1;                                       /* EMK019           */
    uint32 EMK020:1;                                       /* EMK020           */
    uint32 EMK021:1;                                       /* EMK021           */
    uint32 EMK022:1;                                       /* EMK022           */
    uint32 EMK023:1;                                       /* EMK023           */
    uint32 EMK024:1;                                       /* EMK024           */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 EMK026:1;                                       /* EMK026           */
    uint32 EMK027:1;                                       /* EMK027           */
    uint32 EMK028:1;                                       /* EMK028           */
    uint32 EMK029:1;                                       /* EMK029           */
    uint32 EMK030:1;                                       /* EMK030           */
    uint32 EMK031:1;                                       /* EMK031           */
} __type463;
typedef struct 
{                                                          /* Bit Access       */
    uint32 EMK100:1;                                       /* EMK100           */
    uint32 EMK101:1;                                       /* EMK101           */
    uint32 EMK102:1;                                       /* EMK102           */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 EMK104:1;                                       /* EMK104           */
    uint32 EMK105:1;                                       /* EMK105           */
    uint32 EMK106:1;                                       /* EMK106           */
    uint32 EMK107:1;                                       /* EMK107           */
    uint32 EMK108:1;                                       /* EMK108           */
    uint32 EMK109:1;                                       /* EMK109           */
    uint32 EMK110:1;                                       /* EMK110           */
    uint32 :18;                                            /* Reserved Bits    */
    uint32 EMK129:1;                                       /* EMK129           */
    uint32 :2;                                             /* Reserved Bits    */
} __type464;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CLSSE000:1;                                     /* CLSSE000         */
    uint32 CLSSE001:1;                                     /* CLSSE001         */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 CLSSE004:1;                                     /* CLSSE004         */
    uint32 CLSSE005:1;                                     /* CLSSE005         */
    uint32 CLSSE006:1;                                     /* CLSSE006         */
    uint32 CLSSE007:1;                                     /* CLSSE007         */
    uint32 CLSSE008:1;                                     /* CLSSE008         */
    uint32 CLSSE009:1;                                     /* CLSSE009         */
    uint32 CLSSE010:1;                                     /* CLSSE010         */
    uint32 CLSSE011:1;                                     /* CLSSE011         */
    uint32 CLSSE012:1;                                     /* CLSSE012         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CLSSE014:1;                                     /* CLSSE014         */
    uint32 CLSSE015:1;                                     /* CLSSE015         */
    uint32 CLSSE016:1;                                     /* CLSSE016         */
    uint32 CLSSE017:1;                                     /* CLSSE017         */
    uint32 CLSSE018:1;                                     /* CLSSE018         */
    uint32 CLSSE019:1;                                     /* CLSSE019         */
    uint32 CLSSE020:1;                                     /* CLSSE020         */
    uint32 CLSSE021:1;                                     /* CLSSE021         */
    uint32 CLSSE022:1;                                     /* CLSSE022         */
    uint32 CLSSE023:1;                                     /* CLSSE023         */
    uint32 CLSSE024:1;                                     /* CLSSE024         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CLSSE026:1;                                     /* CLSSE026         */
    uint32 CLSSE027:1;                                     /* CLSSE027         */
    uint32 CLSSE028:1;                                     /* CLSSE028         */
    uint32 CLSSE029:1;                                     /* CLSSE029         */
    uint32 CLSSE030:1;                                     /* CLSSE030         */
    uint32 CLSSE031:1;                                     /* CLSSE031         */
} __type465;
typedef struct 
{                                                          /* Bit Access       */
    uint32 CLSSE100:1;                                     /* CLSSE100         */
    uint32 CLSSE101:1;                                     /* CLSSE101         */
    uint32 CLSSE102:1;                                     /* CLSSE102         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 CLSSE104:1;                                     /* CLSSE104         */
    uint32 CLSSE105:1;                                     /* CLSSE105         */
    uint32 CLSSE106:1;                                     /* CLSSE106         */
    uint32 CLSSE107:1;                                     /* CLSSE107         */
    uint32 CLSSE108:1;                                     /* CLSSE108         */
    uint32 CLSSE109:1;                                     /* CLSSE109         */
    uint32 CLSSE110:1;                                     /* CLSSE110         */
    uint32 :18;                                            /* Reserved Bits    */
    uint32 CLSSE129:1;                                     /* CLSSE129         */
    uint32 CLSSE130:1;                                     /* CLSSE130         */
    uint32 :1;                                             /* Reserved Bits    */
} __type466;
typedef struct 
{                                                          /* Bit Access       */
    uint32 REG1:8;                                         /* REG1[7:0]        */
    uint32 :24;                                            /* Reserved Bits    */
} __type467;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PE000:1;                                        /* PE000            */
    uint32 PE001:1;                                        /* PE001            */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 PE004:1;                                        /* PE004            */
    uint32 PE005:1;                                        /* PE005            */
    uint32 PE006:1;                                        /* PE006            */
    uint32 PE007:1;                                        /* PE007            */
    uint32 PE008:1;                                        /* PE008            */
    uint32 PE009:1;                                        /* PE009            */
    uint32 PE010:1;                                        /* PE010            */
    uint32 PE011:1;                                        /* PE011            */
    uint32 PE012:1;                                        /* PE012            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PE014:1;                                        /* PE014            */
    uint32 PE015:1;                                        /* PE015            */
    uint32 PE016:1;                                        /* PE016            */
    uint32 PE017:1;                                        /* PE017            */
    uint32 PE018:1;                                        /* PE018            */
    uint32 PE019:1;                                        /* PE019            */
    uint32 PE020:1;                                        /* PE020            */
    uint32 PE021:1;                                        /* PE021            */
    uint32 PE022:1;                                        /* PE022            */
    uint32 PE023:1;                                        /* PE023            */
    uint32 PE024:1;                                        /* PE024            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PE026:1;                                        /* PE026            */
    uint32 PE027:1;                                        /* PE027            */
    uint32 PE028:1;                                        /* PE028            */
    uint32 PE029:1;                                        /* PE029            */
    uint32 PE030:1;                                        /* PE030            */
    uint32 PE031:1;                                        /* PE031            */
} __type469;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PE100:1;                                        /* PE100            */
    uint32 PE101:1;                                        /* PE101            */
    uint32 PE102:1;                                        /* PE102            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PE104:1;                                        /* PE104            */
    uint32 PE105:1;                                        /* PE105            */
    uint32 PE106:1;                                        /* PE106            */
    uint32 PE107:1;                                        /* PE107            */
    uint32 PE108:1;                                        /* PE108            */
    uint32 PE109:1;                                        /* PE109            */
    uint32 PE110:1;                                        /* PE110            */
    uint32 :18;                                            /* Reserved Bits    */
    uint32 PE129:1;                                        /* PE129            */
    uint32 :2;                                             /* Reserved Bits    */
} __type470;
typedef struct 
{                                                          /* Bit Access       */
    uint8  STA:1;                                          /* STA              */
    uint8  STP:1;                                          /* STP              */
    uint8  :6;                                             /* Reserved Bits    */
} __type471;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TE000:1;                                        /* TE000            */
    uint32 TE001:1;                                        /* TE001            */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 TE004:1;                                        /* TE004            */
    uint32 TE005:1;                                        /* TE005            */
    uint32 TE006:1;                                        /* TE006            */
    uint32 TE007:1;                                        /* TE007            */
    uint32 TE008:1;                                        /* TE008            */
    uint32 TE009:1;                                        /* TE009            */
    uint32 TE010:1;                                        /* TE010            */
    uint32 TE011:1;                                        /* TE011            */
    uint32 TE012:1;                                        /* TE012            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 TE014:1;                                        /* TE014            */
    uint32 TE015:1;                                        /* TE015            */
    uint32 TE016:1;                                        /* TE016            */
    uint32 TE017:1;                                        /* TE017            */
    uint32 TE018:1;                                        /* TE018            */
    uint32 TE019:1;                                        /* TE019            */
    uint32 TE020:1;                                        /* TE020            */
    uint32 TE021:1;                                        /* TE021            */
    uint32 TE022:1;                                        /* TE022            */
    uint32 TE023:1;                                        /* TE023            */
    uint32 TE024:1;                                        /* TE024            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 TE026:1;                                        /* TE026            */
    uint32 TE027:1;                                        /* TE027            */
    uint32 TE028:1;                                        /* TE028            */
    uint32 TE029:1;                                        /* TE029            */
    uint32 TE030:1;                                        /* TE030            */
    uint32 TE031:1;                                        /* TE031            */
} __type472;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TE100:1;                                        /* TE100            */
    uint32 TE101:1;                                        /* TE101            */
    uint32 TE102:1;                                        /* TE102            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 TE104:1;                                        /* TE104            */
    uint32 TE105:1;                                        /* TE105            */
    uint32 TE106:1;                                        /* TE106            */
    uint32 TE107:1;                                        /* TE107            */
    uint32 TE108:1;                                        /* TE108            */
    uint32 TE109:1;                                        /* TE109            */
    uint32 TE110:1;                                        /* TE110            */
    uint32 :21;                                            /* Reserved Bits    */
} __type473;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TE200:1;                                        /* TE200            */
    uint32 TE201:1;                                        /* TE201            */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 TE204:1;                                        /* TE204            */
    uint32 TE205:1;                                        /* TE205            */
    uint32 TE206:1;                                        /* TE206            */
    uint32 TE207:1;                                        /* TE207            */
    uint32 TE208:1;                                        /* TE208            */
    uint32 TE209:1;                                        /* TE209            */
    uint32 TE210:1;                                        /* TE210            */
    uint32 TE211:1;                                        /* TE211            */
    uint32 TE212:1;                                        /* TE212            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 TE214:1;                                        /* TE214            */
    uint32 TE215:1;                                        /* TE215            */
    uint32 TE216:1;                                        /* TE216            */
    uint32 TE217:1;                                        /* TE217            */
    uint32 TE218:1;                                        /* TE218            */
    uint32 TE219:1;                                        /* TE219            */
    uint32 TE220:1;                                        /* TE220            */
    uint32 TE221:1;                                        /* TE221            */
    uint32 TE222:1;                                        /* TE222            */
    uint32 TE223:1;                                        /* TE223            */
    uint32 TE224:1;                                        /* TE224            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 TE226:1;                                        /* TE226            */
    uint32 TE227:1;                                        /* TE227            */
    uint32 TE228:1;                                        /* TE228            */
    uint32 TE229:1;                                        /* TE229            */
    uint32 TE230:1;                                        /* TE230            */
    uint32 TE231:1;                                        /* TE231            */
} __type474;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TE300:1;                                        /* TE300            */
    uint32 TE301:1;                                        /* TE301            */
    uint32 TE302:1;                                        /* TE302            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 TE304:1;                                        /* TE304            */
    uint32 TE305:1;                                        /* TE305            */
    uint32 TE306:1;                                        /* TE306            */
    uint32 TE307:1;                                        /* TE307            */
    uint32 TE308:1;                                        /* TE308            */
    uint32 TE309:1;                                        /* TE309            */
    uint32 TE310:1;                                        /* TE310            */
    uint32 :21;                                            /* Reserved Bits    */
} __type475;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TMSL:1;                                         /* TMSL             */
    uint8  :7;                                             /* Reserved Bits    */
} __type476;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type451 BIT;                                         /* Bit Access       */
} __type1730;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type452 BIT;                                         /* Bit Access       */
} __type1731;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type453 BIT;                                   /* Bit Access       */
} __type1732;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type454 BIT;                                   /* Bit Access       */
} __type1733;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type455 BIT;                                         /* Bit Access       */
} __type1734;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type456 BIT;                                         /* Bit Access       */
} __type1735;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type457 BIT;                                         /* Bit Access       */
} __type1736;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type458 BIT;                                         /* Bit Access       */
} __type1737;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type459 BIT;                                         /* Bit Access       */
} __type1738;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type460 BIT;                                         /* Bit Access       */
} __type1739;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type461 BIT;                                         /* Bit Access       */
} __type1740;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type462 BIT;                                         /* Bit Access       */
} __type1741;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type463 BIT;                                         /* Bit Access       */
} __type1742;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type464 BIT;                                         /* Bit Access       */
} __type1743;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type465 BIT;                                         /* Bit Access       */
} __type1744;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type466 BIT;                                         /* Bit Access       */
} __type1745;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type467 BIT;                                         /* Bit Access       */
} __type1746;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type469 BIT;                                         /* Bit Access       */
} __type1748;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type470 BIT;                                         /* Bit Access       */
} __type1749;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type471 BIT;                                         /* Bit Access       */
} __type1750;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type472 BIT;                                         /* Bit Access       */
} __type1751;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type473 BIT;                                         /* Bit Access       */
} __type1752;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type474 BIT;                                         /* Bit Access       */
} __type1753;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type475 BIT;                                         /* Bit Access       */
} __type1754;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type476 BIT;                                         /* Bit Access       */
} __type1755;

typedef struct 
{                                                          /* Module           */
    __type1730 ESET;                                       /* ESET             */
    uint8  dummy263[3];                                    /* Reserved         */
    __type1731 ECLR;                                       /* ECLR             */
    uint8  dummy264[3];                                    /* Reserved         */
    const __type1732 ESSTR0;                               /* ESSTR0           */
    const __type1733 ESSTR1;                               /* ESSTR1           */
    __type1734 PCMD0;                                      /* PCMD0            */
} __type2589;
typedef struct 
{                                                          /* Module           */
    __type1735 EPCFG;                                      /* EPCFG            */
    uint8  dummy265[3];                                    /* Reserved         */
    __type1736 MICFG0;                                     /* MICFG0           */
    __type1737 MICFG1;                                     /* MICFG1           */
    __type1738 NMICFG0;                                    /* NMICFG0          */
    __type1739 NMICFG1;                                    /* NMICFG1          */
    __type1740 IRCFG0;                                     /* IRCFG0           */
    __type1741 IRCFG1;                                     /* IRCFG1           */
    __type1742 EMK0;                                       /* EMK0             */
    __type1743 EMK1;                                       /* EMK1             */
    __type1744 ESSTC0;                                     /* ESSTC0           */
    __type1745 ESSTC1;                                     /* ESSTC1           */
    __type1746 PCMD1;                                      /* PCMD1            */
    const __type1747 PS;                                   /* PS               */
    uint8  dummy266[3];                                    /* Reserved         */
    __type1748 PE0;                                        /* PE0              */
    __type1749 PE1;                                        /* PE1              */
    __type1750 DTMCTL;                                     /* DTMCTL           */
    uint8  dummy267[3];                                    /* Reserved         */
    const uint16 DTMR;                                     /* DTMR             */
    uint8  dummy268[2];                                    /* Reserved         */
    uint16 DTMCMP;                                         /* DTMCMP           */
    uint8  dummy269[2];                                    /* Reserved         */
    __type1751 DTMCFG0;                                    /* DTMCFG0          */
    __type1752 DTMCFG1;                                    /* DTMCFG1          */
    __type1753 DTMCFG2;                                    /* DTMCFG2          */
    __type1754 DTMCFG3;                                    /* DTMCFG3          */
    uint8  dummy270[4008];                                 /* Reserved         */
    __type1755 EPCTL;                                      /* EPCTL            */
} __type2590;

__IOREG(ECMM, 0xFFD60000, __READ_WRITE, __type2589);                  /* ECMM */
__IOREG(ECMC, 0xFFD61000, __READ_WRITE, __type2589);                  /* ECMC */
__IOREG(ECM, 0xFFD62000, __READ_WRITE, __type2590);                   /* ECM */

#define ECMMESET ECMM.ESET.UINT8
#define ECMMEST ECMM.ESET.BIT.EST
#define ECMMECLR ECMM.ECLR.UINT8
#define ECMMECT ECMM.ECLR.BIT.ECT
#define ECMMESSTR0 ECMM.ESSTR0.UINT32
#define ECMMSSE000 ECMM.ESSTR0.BIT.SSE000
#define ECMMSSE001 ECMM.ESSTR0.BIT.SSE001
#define ECMMSSE004 ECMM.ESSTR0.BIT.SSE004
#define ECMMSSE005 ECMM.ESSTR0.BIT.SSE005
#define ECMMSSE006 ECMM.ESSTR0.BIT.SSE006
#define ECMMSSE007 ECMM.ESSTR0.BIT.SSE007
#define ECMMSSE008 ECMM.ESSTR0.BIT.SSE008
#define ECMMSSE009 ECMM.ESSTR0.BIT.SSE009
#define ECMMSSE010 ECMM.ESSTR0.BIT.SSE010
#define ECMMSSE011 ECMM.ESSTR0.BIT.SSE011
#define ECMMSSE012 ECMM.ESSTR0.BIT.SSE012
#define ECMMSSE014 ECMM.ESSTR0.BIT.SSE014
#define ECMMSSE015 ECMM.ESSTR0.BIT.SSE015
#define ECMMSSE016 ECMM.ESSTR0.BIT.SSE016
#define ECMMSSE017 ECMM.ESSTR0.BIT.SSE017
#define ECMMSSE018 ECMM.ESSTR0.BIT.SSE018
#define ECMMSSE019 ECMM.ESSTR0.BIT.SSE019
#define ECMMSSE020 ECMM.ESSTR0.BIT.SSE020
#define ECMMSSE021 ECMM.ESSTR0.BIT.SSE021
#define ECMMSSE022 ECMM.ESSTR0.BIT.SSE022
#define ECMMSSE023 ECMM.ESSTR0.BIT.SSE023
#define ECMMSSE024 ECMM.ESSTR0.BIT.SSE024
#define ECMMSSE026 ECMM.ESSTR0.BIT.SSE026
#define ECMMSSE027 ECMM.ESSTR0.BIT.SSE027
#define ECMMSSE028 ECMM.ESSTR0.BIT.SSE028
#define ECMMSSE029 ECMM.ESSTR0.BIT.SSE029
#define ECMMSSE030 ECMM.ESSTR0.BIT.SSE030
#define ECMMSSE031 ECMM.ESSTR0.BIT.SSE031
#define ECMMESSTR1 ECMM.ESSTR1.UINT32
#define ECMMSSE100 ECMM.ESSTR1.BIT.SSE100
#define ECMMSSE101 ECMM.ESSTR1.BIT.SSE101
#define ECMMSSE102 ECMM.ESSTR1.BIT.SSE102
#define ECMMSSE104 ECMM.ESSTR1.BIT.SSE104
#define ECMMSSE105 ECMM.ESSTR1.BIT.SSE105
#define ECMMSSE106 ECMM.ESSTR1.BIT.SSE106
#define ECMMSSE107 ECMM.ESSTR1.BIT.SSE107
#define ECMMSSE108 ECMM.ESSTR1.BIT.SSE108
#define ECMMSSE109 ECMM.ESSTR1.BIT.SSE109
#define ECMMSSE110 ECMM.ESSTR1.BIT.SSE110
#define ECMMSSE129 ECMM.ESSTR1.BIT.SSE129
#define ECMMSSE130 ECMM.ESSTR1.BIT.SSE130
#define ECMMSSE131 ECMM.ESSTR1.BIT.SSE131
#define ECMMPCMD0 ECMM.PCMD0.UINT32
#define ECMMREG0 ECMM.PCMD0.BIT.REG0
#define ECMCESET ECMC.ESET.UINT8
#define ECMCEST ECMC.ESET.BIT.EST
#define ECMCECLR ECMC.ECLR.UINT8
#define ECMCECT ECMC.ECLR.BIT.ECT
#define ECMCESSTR0 ECMC.ESSTR0.UINT32
#define ECMCSSE000 ECMC.ESSTR0.BIT.SSE000
#define ECMCSSE001 ECMC.ESSTR0.BIT.SSE001
#define ECMCSSE004 ECMC.ESSTR0.BIT.SSE004
#define ECMCSSE005 ECMC.ESSTR0.BIT.SSE005
#define ECMCSSE006 ECMC.ESSTR0.BIT.SSE006
#define ECMCSSE007 ECMC.ESSTR0.BIT.SSE007
#define ECMCSSE008 ECMC.ESSTR0.BIT.SSE008
#define ECMCSSE009 ECMC.ESSTR0.BIT.SSE009
#define ECMCSSE010 ECMC.ESSTR0.BIT.SSE010
#define ECMCSSE011 ECMC.ESSTR0.BIT.SSE011
#define ECMCSSE012 ECMC.ESSTR0.BIT.SSE012
#define ECMCSSE014 ECMC.ESSTR0.BIT.SSE014
#define ECMCSSE015 ECMC.ESSTR0.BIT.SSE015
#define ECMCSSE016 ECMC.ESSTR0.BIT.SSE016
#define ECMCSSE017 ECMC.ESSTR0.BIT.SSE017
#define ECMCSSE018 ECMC.ESSTR0.BIT.SSE018
#define ECMCSSE019 ECMC.ESSTR0.BIT.SSE019
#define ECMCSSE020 ECMC.ESSTR0.BIT.SSE020
#define ECMCSSE021 ECMC.ESSTR0.BIT.SSE021
#define ECMCSSE022 ECMC.ESSTR0.BIT.SSE022
#define ECMCSSE023 ECMC.ESSTR0.BIT.SSE023
#define ECMCSSE024 ECMC.ESSTR0.BIT.SSE024
#define ECMCSSE026 ECMC.ESSTR0.BIT.SSE026
#define ECMCSSE027 ECMC.ESSTR0.BIT.SSE027
#define ECMCSSE028 ECMC.ESSTR0.BIT.SSE028
#define ECMCSSE029 ECMC.ESSTR0.BIT.SSE029
#define ECMCSSE030 ECMC.ESSTR0.BIT.SSE030
#define ECMCSSE031 ECMC.ESSTR0.BIT.SSE031
#define ECMCESSTR1 ECMC.ESSTR1.UINT32
#define ECMCSSE100 ECMC.ESSTR1.BIT.SSE100
#define ECMCSSE101 ECMC.ESSTR1.BIT.SSE101
#define ECMCSSE102 ECMC.ESSTR1.BIT.SSE102
#define ECMCSSE104 ECMC.ESSTR1.BIT.SSE104
#define ECMCSSE105 ECMC.ESSTR1.BIT.SSE105
#define ECMCSSE106 ECMC.ESSTR1.BIT.SSE106
#define ECMCSSE107 ECMC.ESSTR1.BIT.SSE107
#define ECMCSSE108 ECMC.ESSTR1.BIT.SSE108
#define ECMCSSE109 ECMC.ESSTR1.BIT.SSE109
#define ECMCSSE110 ECMC.ESSTR1.BIT.SSE110
#define ECMCSSE129 ECMC.ESSTR1.BIT.SSE129
#define ECMCSSE130 ECMC.ESSTR1.BIT.SSE130
#define ECMCSSE131 ECMC.ESSTR1.BIT.SSE131
#define ECMCPCMD0 ECMC.PCMD0.UINT32
#define ECMCREG0 ECMC.PCMD0.BIT.REG0
#define ECMEPCFG ECM.EPCFG.UINT8
#define ECMSL0 ECM.EPCFG.BIT.SL0
#define ECMMICFG0 ECM.MICFG0.UINT32
#define ECMMIE000 ECM.MICFG0.BIT.MIE000
#define ECMMIE001 ECM.MICFG0.BIT.MIE001
#define ECMMIE004 ECM.MICFG0.BIT.MIE004
#define ECMMIE005 ECM.MICFG0.BIT.MIE005
#define ECMMIE006 ECM.MICFG0.BIT.MIE006
#define ECMMIE007 ECM.MICFG0.BIT.MIE007
#define ECMMIE008 ECM.MICFG0.BIT.MIE008
#define ECMMIE009 ECM.MICFG0.BIT.MIE009
#define ECMMIE010 ECM.MICFG0.BIT.MIE010
#define ECMMIE011 ECM.MICFG0.BIT.MIE011
#define ECMMIE012 ECM.MICFG0.BIT.MIE012
#define ECMMIE014 ECM.MICFG0.BIT.MIE014
#define ECMMIE015 ECM.MICFG0.BIT.MIE015
#define ECMMIE016 ECM.MICFG0.BIT.MIE016
#define ECMMIE017 ECM.MICFG0.BIT.MIE017
#define ECMMIE018 ECM.MICFG0.BIT.MIE018
#define ECMMIE019 ECM.MICFG0.BIT.MIE019
#define ECMMIE020 ECM.MICFG0.BIT.MIE020
#define ECMMIE021 ECM.MICFG0.BIT.MIE021
#define ECMMIE022 ECM.MICFG0.BIT.MIE022
#define ECMMIE023 ECM.MICFG0.BIT.MIE023
#define ECMMIE024 ECM.MICFG0.BIT.MIE024
#define ECMMIE026 ECM.MICFG0.BIT.MIE026
#define ECMMIE027 ECM.MICFG0.BIT.MIE027
#define ECMMIE028 ECM.MICFG0.BIT.MIE028
#define ECMMIE029 ECM.MICFG0.BIT.MIE029
#define ECMMIE030 ECM.MICFG0.BIT.MIE030
#define ECMMIE031 ECM.MICFG0.BIT.MIE031
#define ECMMICFG1 ECM.MICFG1.UINT32
#define ECMMIE100 ECM.MICFG1.BIT.MIE100
#define ECMMIE101 ECM.MICFG1.BIT.MIE101
#define ECMMIE102 ECM.MICFG1.BIT.MIE102
#define ECMMIE104 ECM.MICFG1.BIT.MIE104
#define ECMMIE105 ECM.MICFG1.BIT.MIE105
#define ECMMIE106 ECM.MICFG1.BIT.MIE106
#define ECMMIE107 ECM.MICFG1.BIT.MIE107
#define ECMMIE108 ECM.MICFG1.BIT.MIE108
#define ECMMIE109 ECM.MICFG1.BIT.MIE109
#define ECMMIE110 ECM.MICFG1.BIT.MIE110
#define ECMNMICFG0 ECM.NMICFG0.UINT32
#define ECMNMIE000 ECM.NMICFG0.BIT.NMIE000
#define ECMNMIE001 ECM.NMICFG0.BIT.NMIE001
#define ECMNMIE004 ECM.NMICFG0.BIT.NMIE004
#define ECMNMIE005 ECM.NMICFG0.BIT.NMIE005
#define ECMNMIE006 ECM.NMICFG0.BIT.NMIE006
#define ECMNMIE007 ECM.NMICFG0.BIT.NMIE007
#define ECMNMIE008 ECM.NMICFG0.BIT.NMIE008
#define ECMNMIE009 ECM.NMICFG0.BIT.NMIE009
#define ECMNMIE010 ECM.NMICFG0.BIT.NMIE010
#define ECMNMIE011 ECM.NMICFG0.BIT.NMIE011
#define ECMNMIE012 ECM.NMICFG0.BIT.NMIE012
#define ECMNMIE014 ECM.NMICFG0.BIT.NMIE014
#define ECMNMIE015 ECM.NMICFG0.BIT.NMIE015
#define ECMNMIE016 ECM.NMICFG0.BIT.NMIE016
#define ECMNMIE017 ECM.NMICFG0.BIT.NMIE017
#define ECMNMIE018 ECM.NMICFG0.BIT.NMIE018
#define ECMNMIE019 ECM.NMICFG0.BIT.NMIE019
#define ECMNMIE020 ECM.NMICFG0.BIT.NMIE020
#define ECMNMIE021 ECM.NMICFG0.BIT.NMIE021
#define ECMNMIE022 ECM.NMICFG0.BIT.NMIE022
#define ECMNMIE023 ECM.NMICFG0.BIT.NMIE023
#define ECMNMIE024 ECM.NMICFG0.BIT.NMIE024
#define ECMNMIE026 ECM.NMICFG0.BIT.NMIE026
#define ECMNMIE027 ECM.NMICFG0.BIT.NMIE027
#define ECMNMIE028 ECM.NMICFG0.BIT.NMIE028
#define ECMNMIE029 ECM.NMICFG0.BIT.NMIE029
#define ECMNMIE030 ECM.NMICFG0.BIT.NMIE030
#define ECMNMIE031 ECM.NMICFG0.BIT.NMIE031
#define ECMNMICFG1 ECM.NMICFG1.UINT32
#define ECMNMIE100 ECM.NMICFG1.BIT.NMIE100
#define ECMNMIE101 ECM.NMICFG1.BIT.NMIE101
#define ECMNMIE102 ECM.NMICFG1.BIT.NMIE102
#define ECMNMIE104 ECM.NMICFG1.BIT.NMIE104
#define ECMNMIE105 ECM.NMICFG1.BIT.NMIE105
#define ECMNMIE106 ECM.NMICFG1.BIT.NMIE106
#define ECMNMIE107 ECM.NMICFG1.BIT.NMIE107
#define ECMNMIE108 ECM.NMICFG1.BIT.NMIE108
#define ECMNMIE109 ECM.NMICFG1.BIT.NMIE109
#define ECMNMIE110 ECM.NMICFG1.BIT.NMIE110
#define ECMIRCFG0 ECM.IRCFG0.UINT32
#define ECMIRE000 ECM.IRCFG0.BIT.IRE000
#define ECMIRE001 ECM.IRCFG0.BIT.IRE001
#define ECMIRE004 ECM.IRCFG0.BIT.IRE004
#define ECMIRE005 ECM.IRCFG0.BIT.IRE005
#define ECMIRE006 ECM.IRCFG0.BIT.IRE006
#define ECMIRE007 ECM.IRCFG0.BIT.IRE007
#define ECMIRE008 ECM.IRCFG0.BIT.IRE008
#define ECMIRE009 ECM.IRCFG0.BIT.IRE009
#define ECMIRE010 ECM.IRCFG0.BIT.IRE010
#define ECMIRE011 ECM.IRCFG0.BIT.IRE011
#define ECMIRE012 ECM.IRCFG0.BIT.IRE012
#define ECMIRE014 ECM.IRCFG0.BIT.IRE014
#define ECMIRE015 ECM.IRCFG0.BIT.IRE015
#define ECMIRE016 ECM.IRCFG0.BIT.IRE016
#define ECMIRE017 ECM.IRCFG0.BIT.IRE017
#define ECMIRE018 ECM.IRCFG0.BIT.IRE018
#define ECMIRE019 ECM.IRCFG0.BIT.IRE019
#define ECMIRE020 ECM.IRCFG0.BIT.IRE020
#define ECMIRE021 ECM.IRCFG0.BIT.IRE021
#define ECMIRE022 ECM.IRCFG0.BIT.IRE022
#define ECMIRE023 ECM.IRCFG0.BIT.IRE023
#define ECMIRE024 ECM.IRCFG0.BIT.IRE024
#define ECMIRE026 ECM.IRCFG0.BIT.IRE026
#define ECMIRE027 ECM.IRCFG0.BIT.IRE027
#define ECMIRE028 ECM.IRCFG0.BIT.IRE028
#define ECMIRE029 ECM.IRCFG0.BIT.IRE029
#define ECMIRE030 ECM.IRCFG0.BIT.IRE030
#define ECMIRE031 ECM.IRCFG0.BIT.IRE031
#define ECMIRCFG1 ECM.IRCFG1.UINT32
#define ECMIRE100 ECM.IRCFG1.BIT.IRE100
#define ECMIRE101 ECM.IRCFG1.BIT.IRE101
#define ECMIRE102 ECM.IRCFG1.BIT.IRE102
#define ECMIRE104 ECM.IRCFG1.BIT.IRE104
#define ECMIRE105 ECM.IRCFG1.BIT.IRE105
#define ECMIRE106 ECM.IRCFG1.BIT.IRE106
#define ECMIRE107 ECM.IRCFG1.BIT.IRE107
#define ECMIRE108 ECM.IRCFG1.BIT.IRE108
#define ECMIRE109 ECM.IRCFG1.BIT.IRE109
#define ECMIRE110 ECM.IRCFG1.BIT.IRE110
#define ECMIRE129 ECM.IRCFG1.BIT.IRE129
#define ECMEMK0 ECM.EMK0.UINT32
#define ECMEMK000 ECM.EMK0.BIT.EMK000
#define ECMEMK001 ECM.EMK0.BIT.EMK001
#define ECMEMK004 ECM.EMK0.BIT.EMK004
#define ECMEMK005 ECM.EMK0.BIT.EMK005
#define ECMEMK006 ECM.EMK0.BIT.EMK006
#define ECMEMK007 ECM.EMK0.BIT.EMK007
#define ECMEMK008 ECM.EMK0.BIT.EMK008
#define ECMEMK009 ECM.EMK0.BIT.EMK009
#define ECMEMK010 ECM.EMK0.BIT.EMK010
#define ECMEMK011 ECM.EMK0.BIT.EMK011
#define ECMEMK012 ECM.EMK0.BIT.EMK012
#define ECMEMK014 ECM.EMK0.BIT.EMK014
#define ECMEMK015 ECM.EMK0.BIT.EMK015
#define ECMEMK016 ECM.EMK0.BIT.EMK016
#define ECMEMK017 ECM.EMK0.BIT.EMK017
#define ECMEMK018 ECM.EMK0.BIT.EMK018
#define ECMEMK019 ECM.EMK0.BIT.EMK019
#define ECMEMK020 ECM.EMK0.BIT.EMK020
#define ECMEMK021 ECM.EMK0.BIT.EMK021
#define ECMEMK022 ECM.EMK0.BIT.EMK022
#define ECMEMK023 ECM.EMK0.BIT.EMK023
#define ECMEMK024 ECM.EMK0.BIT.EMK024
#define ECMEMK026 ECM.EMK0.BIT.EMK026
#define ECMEMK027 ECM.EMK0.BIT.EMK027
#define ECMEMK028 ECM.EMK0.BIT.EMK028
#define ECMEMK029 ECM.EMK0.BIT.EMK029
#define ECMEMK030 ECM.EMK0.BIT.EMK030
#define ECMEMK031 ECM.EMK0.BIT.EMK031
#define ECMEMK1 ECM.EMK1.UINT32
#define ECMEMK100 ECM.EMK1.BIT.EMK100
#define ECMEMK101 ECM.EMK1.BIT.EMK101
#define ECMEMK102 ECM.EMK1.BIT.EMK102
#define ECMEMK104 ECM.EMK1.BIT.EMK104
#define ECMEMK105 ECM.EMK1.BIT.EMK105
#define ECMEMK106 ECM.EMK1.BIT.EMK106
#define ECMEMK107 ECM.EMK1.BIT.EMK107
#define ECMEMK108 ECM.EMK1.BIT.EMK108
#define ECMEMK109 ECM.EMK1.BIT.EMK109
#define ECMEMK110 ECM.EMK1.BIT.EMK110
#define ECMEMK129 ECM.EMK1.BIT.EMK129
#define ECMESSTC0 ECM.ESSTC0.UINT32
#define ECMCLSSE000 ECM.ESSTC0.BIT.CLSSE000
#define ECMCLSSE001 ECM.ESSTC0.BIT.CLSSE001
#define ECMCLSSE004 ECM.ESSTC0.BIT.CLSSE004
#define ECMCLSSE005 ECM.ESSTC0.BIT.CLSSE005
#define ECMCLSSE006 ECM.ESSTC0.BIT.CLSSE006
#define ECMCLSSE007 ECM.ESSTC0.BIT.CLSSE007
#define ECMCLSSE008 ECM.ESSTC0.BIT.CLSSE008
#define ECMCLSSE009 ECM.ESSTC0.BIT.CLSSE009
#define ECMCLSSE010 ECM.ESSTC0.BIT.CLSSE010
#define ECMCLSSE011 ECM.ESSTC0.BIT.CLSSE011
#define ECMCLSSE012 ECM.ESSTC0.BIT.CLSSE012
#define ECMCLSSE014 ECM.ESSTC0.BIT.CLSSE014
#define ECMCLSSE015 ECM.ESSTC0.BIT.CLSSE015
#define ECMCLSSE016 ECM.ESSTC0.BIT.CLSSE016
#define ECMCLSSE017 ECM.ESSTC0.BIT.CLSSE017
#define ECMCLSSE018 ECM.ESSTC0.BIT.CLSSE018
#define ECMCLSSE019 ECM.ESSTC0.BIT.CLSSE019
#define ECMCLSSE020 ECM.ESSTC0.BIT.CLSSE020
#define ECMCLSSE021 ECM.ESSTC0.BIT.CLSSE021
#define ECMCLSSE022 ECM.ESSTC0.BIT.CLSSE022
#define ECMCLSSE023 ECM.ESSTC0.BIT.CLSSE023
#define ECMCLSSE024 ECM.ESSTC0.BIT.CLSSE024
#define ECMCLSSE026 ECM.ESSTC0.BIT.CLSSE026
#define ECMCLSSE027 ECM.ESSTC0.BIT.CLSSE027
#define ECMCLSSE028 ECM.ESSTC0.BIT.CLSSE028
#define ECMCLSSE029 ECM.ESSTC0.BIT.CLSSE029
#define ECMCLSSE030 ECM.ESSTC0.BIT.CLSSE030
#define ECMCLSSE031 ECM.ESSTC0.BIT.CLSSE031
#define ECMESSTC1 ECM.ESSTC1.UINT32
#define ECMCLSSE100 ECM.ESSTC1.BIT.CLSSE100
#define ECMCLSSE101 ECM.ESSTC1.BIT.CLSSE101
#define ECMCLSSE102 ECM.ESSTC1.BIT.CLSSE102
#define ECMCLSSE104 ECM.ESSTC1.BIT.CLSSE104
#define ECMCLSSE105 ECM.ESSTC1.BIT.CLSSE105
#define ECMCLSSE106 ECM.ESSTC1.BIT.CLSSE106
#define ECMCLSSE107 ECM.ESSTC1.BIT.CLSSE107
#define ECMCLSSE108 ECM.ESSTC1.BIT.CLSSE108
#define ECMCLSSE109 ECM.ESSTC1.BIT.CLSSE109
#define ECMCLSSE110 ECM.ESSTC1.BIT.CLSSE110
#define ECMCLSSE129 ECM.ESSTC1.BIT.CLSSE129
#define ECMCLSSE130 ECM.ESSTC1.BIT.CLSSE130
#define ECMPCMD1 ECM.PCMD1.UINT32
#define ECMREG1 ECM.PCMD1.BIT.REG1
#define ECMPS ECM.PS.UINT8
#define ECMPRERR ECM.PS.BIT.PRERR
#define ECMPE0 ECM.PE0.UINT32
#define ECMPE000 ECM.PE0.BIT.PE000
#define ECMPE001 ECM.PE0.BIT.PE001
#define ECMPE004 ECM.PE0.BIT.PE004
#define ECMPE005 ECM.PE0.BIT.PE005
#define ECMPE006 ECM.PE0.BIT.PE006
#define ECMPE007 ECM.PE0.BIT.PE007
#define ECMPE008 ECM.PE0.BIT.PE008
#define ECMPE009 ECM.PE0.BIT.PE009
#define ECMPE010 ECM.PE0.BIT.PE010
#define ECMPE011 ECM.PE0.BIT.PE011
#define ECMPE012 ECM.PE0.BIT.PE012
#define ECMPE014 ECM.PE0.BIT.PE014
#define ECMPE015 ECM.PE0.BIT.PE015
#define ECMPE016 ECM.PE0.BIT.PE016
#define ECMPE017 ECM.PE0.BIT.PE017
#define ECMPE018 ECM.PE0.BIT.PE018
#define ECMPE019 ECM.PE0.BIT.PE019
#define ECMPE020 ECM.PE0.BIT.PE020
#define ECMPE021 ECM.PE0.BIT.PE021
#define ECMPE022 ECM.PE0.BIT.PE022
#define ECMPE023 ECM.PE0.BIT.PE023
#define ECMPE024 ECM.PE0.BIT.PE024
#define ECMPE026 ECM.PE0.BIT.PE026
#define ECMPE027 ECM.PE0.BIT.PE027
#define ECMPE028 ECM.PE0.BIT.PE028
#define ECMPE029 ECM.PE0.BIT.PE029
#define ECMPE030 ECM.PE0.BIT.PE030
#define ECMPE031 ECM.PE0.BIT.PE031
#define ECMPE1 ECM.PE1.UINT32
#define ECMPE100 ECM.PE1.BIT.PE100
#define ECMPE101 ECM.PE1.BIT.PE101
#define ECMPE102 ECM.PE1.BIT.PE102
#define ECMPE104 ECM.PE1.BIT.PE104
#define ECMPE105 ECM.PE1.BIT.PE105
#define ECMPE106 ECM.PE1.BIT.PE106
#define ECMPE107 ECM.PE1.BIT.PE107
#define ECMPE108 ECM.PE1.BIT.PE108
#define ECMPE109 ECM.PE1.BIT.PE109
#define ECMPE110 ECM.PE1.BIT.PE110
#define ECMPE129 ECM.PE1.BIT.PE129
#define ECMDTMCTL ECM.DTMCTL.UINT8
#define ECMSTA ECM.DTMCTL.BIT.STA
#define ECMSTP ECM.DTMCTL.BIT.STP
#define ECMDTMR ECM.DTMR
#define ECMDTMCMP ECM.DTMCMP
#define ECMDTMCFG0 ECM.DTMCFG0.UINT32
#define ECMTE000 ECM.DTMCFG0.BIT.TE000
#define ECMTE001 ECM.DTMCFG0.BIT.TE001
#define ECMTE004 ECM.DTMCFG0.BIT.TE004
#define ECMTE005 ECM.DTMCFG0.BIT.TE005
#define ECMTE006 ECM.DTMCFG0.BIT.TE006
#define ECMTE007 ECM.DTMCFG0.BIT.TE007
#define ECMTE008 ECM.DTMCFG0.BIT.TE008
#define ECMTE009 ECM.DTMCFG0.BIT.TE009
#define ECMTE010 ECM.DTMCFG0.BIT.TE010
#define ECMTE011 ECM.DTMCFG0.BIT.TE011
#define ECMTE012 ECM.DTMCFG0.BIT.TE012
#define ECMTE014 ECM.DTMCFG0.BIT.TE014
#define ECMTE015 ECM.DTMCFG0.BIT.TE015
#define ECMTE016 ECM.DTMCFG0.BIT.TE016
#define ECMTE017 ECM.DTMCFG0.BIT.TE017
#define ECMTE018 ECM.DTMCFG0.BIT.TE018
#define ECMTE019 ECM.DTMCFG0.BIT.TE019
#define ECMTE020 ECM.DTMCFG0.BIT.TE020
#define ECMTE021 ECM.DTMCFG0.BIT.TE021
#define ECMTE022 ECM.DTMCFG0.BIT.TE022
#define ECMTE023 ECM.DTMCFG0.BIT.TE023
#define ECMTE024 ECM.DTMCFG0.BIT.TE024
#define ECMTE026 ECM.DTMCFG0.BIT.TE026
#define ECMTE027 ECM.DTMCFG0.BIT.TE027
#define ECMTE028 ECM.DTMCFG0.BIT.TE028
#define ECMTE029 ECM.DTMCFG0.BIT.TE029
#define ECMTE030 ECM.DTMCFG0.BIT.TE030
#define ECMTE031 ECM.DTMCFG0.BIT.TE031
#define ECMDTMCFG1 ECM.DTMCFG1.UINT32
#define ECMTE100 ECM.DTMCFG1.BIT.TE100
#define ECMTE101 ECM.DTMCFG1.BIT.TE101
#define ECMTE102 ECM.DTMCFG1.BIT.TE102
#define ECMTE104 ECM.DTMCFG1.BIT.TE104
#define ECMTE105 ECM.DTMCFG1.BIT.TE105
#define ECMTE106 ECM.DTMCFG1.BIT.TE106
#define ECMTE107 ECM.DTMCFG1.BIT.TE107
#define ECMTE108 ECM.DTMCFG1.BIT.TE108
#define ECMTE109 ECM.DTMCFG1.BIT.TE109
#define ECMTE110 ECM.DTMCFG1.BIT.TE110
#define ECMDTMCFG2 ECM.DTMCFG2.UINT32
#define ECMTE200 ECM.DTMCFG2.BIT.TE200
#define ECMTE201 ECM.DTMCFG2.BIT.TE201
#define ECMTE204 ECM.DTMCFG2.BIT.TE204
#define ECMTE205 ECM.DTMCFG2.BIT.TE205
#define ECMTE206 ECM.DTMCFG2.BIT.TE206
#define ECMTE207 ECM.DTMCFG2.BIT.TE207
#define ECMTE208 ECM.DTMCFG2.BIT.TE208
#define ECMTE209 ECM.DTMCFG2.BIT.TE209
#define ECMTE210 ECM.DTMCFG2.BIT.TE210
#define ECMTE211 ECM.DTMCFG2.BIT.TE211
#define ECMTE212 ECM.DTMCFG2.BIT.TE212
#define ECMTE214 ECM.DTMCFG2.BIT.TE214
#define ECMTE215 ECM.DTMCFG2.BIT.TE215
#define ECMTE216 ECM.DTMCFG2.BIT.TE216
#define ECMTE217 ECM.DTMCFG2.BIT.TE217
#define ECMTE218 ECM.DTMCFG2.BIT.TE218
#define ECMTE219 ECM.DTMCFG2.BIT.TE219
#define ECMTE220 ECM.DTMCFG2.BIT.TE220
#define ECMTE221 ECM.DTMCFG2.BIT.TE221
#define ECMTE222 ECM.DTMCFG2.BIT.TE222
#define ECMTE223 ECM.DTMCFG2.BIT.TE223
#define ECMTE224 ECM.DTMCFG2.BIT.TE224
#define ECMTE226 ECM.DTMCFG2.BIT.TE226
#define ECMTE227 ECM.DTMCFG2.BIT.TE227
#define ECMTE228 ECM.DTMCFG2.BIT.TE228
#define ECMTE229 ECM.DTMCFG2.BIT.TE229
#define ECMTE230 ECM.DTMCFG2.BIT.TE230
#define ECMTE231 ECM.DTMCFG2.BIT.TE231
#define ECMDTMCFG3 ECM.DTMCFG3.UINT32
#define ECMTE300 ECM.DTMCFG3.BIT.TE300
#define ECMTE301 ECM.DTMCFG3.BIT.TE301
#define ECMTE302 ECM.DTMCFG3.BIT.TE302
#define ECMTE304 ECM.DTMCFG3.BIT.TE304
#define ECMTE305 ECM.DTMCFG3.BIT.TE305
#define ECMTE306 ECM.DTMCFG3.BIT.TE306
#define ECMTE307 ECM.DTMCFG3.BIT.TE307
#define ECMTE308 ECM.DTMCFG3.BIT.TE308
#define ECMTE309 ECM.DTMCFG3.BIT.TE309
#define ECMTE310 ECM.DTMCFG3.BIT.TE310
#define ECMEPCTL ECM.EPCTL.UINT8
#define ECMTMSL ECM.EPCTL.BIT.TMSL

#endif
