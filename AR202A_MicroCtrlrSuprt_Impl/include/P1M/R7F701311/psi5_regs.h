/**********************************************************************************************************************
* Module File Name  : psi5_regs.h
* Module Description: Peripheral Sensor Interface 5 Peripheral Registers
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

#ifndef PSI5_REGS_H
#define PSI5_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint32 CHEN:1;                                         /* CHEN             */
    uint32 :31;                                            /* Reserved Bits    */
} __type664;
typedef struct 
{                                                          /* Bit Access       */
    uint32 IPTIMEN:1;                                      /* IPTIMEN          */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 TSCLR:1;                                        /* TSCLR            */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 MSTSLV:1;                                       /* MSTSLV           */
    uint32 :15;                                            /* Reserved Bits    */
} __type665;
typedef struct 
{                                                          /* Bit Access       */
    uint32 COUNTVAL:32;                                    /* COUNTVAL[31:0]   */
} __type666;
typedef struct 
{                                                          /* Bit Access       */
    uint32 COMMODE:3;                                      /* COMMODE[2:0]     */
    uint32 :29;                                            /* Reserved Bits    */
} __type667;
typedef struct 
{                                                          /* Bit Access       */
    uint32 BITRATECNT:16;                                  /* BITRATECNT[15:0] */
    uint32 :16;                                            /* Reserved Bits    */
} __type668;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TTTTCNT:16;                                     /* TTTTCNT[15:0]    */
    uint32 :16;                                            /* Reserved Bits    */
} __type669;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 INT_RXMEXIST:1;                           /* INT_RXMEXIST     */
    const uint32 INT_RXMFOVF:1;                            /* INT_RXMFOVF      */
    const uint32 INT_RXMERR:1;                             /* INT_RXMERR       */
    const uint32 INT_RXDEXIST:1;                           /* INT_RXDEXIST     */
    const uint32 INT_RXDFOVF:1;                            /* INT_RXDFOVF      */
    const uint32 INT_RXDERR:1;                             /* INT_RXDERR       */
    const uint32 INT_RXDSCNFERR:1;                         /* INT_RXDSCNFERR   */
    uint32 :9;                                             /* Reserved Bits    */
    const uint32 INT_TXDEMPTY:1;                           /* INT_TXDEMPTY     */
    const uint32 INT_SYNCST:1;                             /* INT_SYNCST       */
    const uint32 INT_SYNCED:1;                             /* INT_SYNCED       */
    uint32 :13;                                            /* Reserved Bits    */
} __type670;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SHORTCNT:14;                                    /* SHORTCNT[13:0]   */
    uint32 DEFTXVAL:1;                                     /* DEFTXVAL         */
    uint32 PHYMODE:1;                                      /* PHYMODE          */
    uint32 LONGCNT:16;                                     /* LONGCNT[31:16]   */
} __type671;
typedef struct 
{                                                          /* Bit Access       */
    uint32 VALTIMSYNC:1;                                   /* VALTIMSYNC       */
    uint32 :31;                                            /* Reserved Bits    */
} __type672;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 TXDEMPTY:1;                               /* TXDEMPTY         */
    uint32 :7;                                             /* Reserved Bits    */
    const uint32 SYNCST:1;                                 /* SYNCST           */
    const uint32 SYNCED:1;                                 /* SYNCED           */
    uint32 :22;                                            /* Reserved Bits    */
} __type673;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :8;                                             /* Reserved Bits    */
    uint32 SYNCSTCLR:1;                                    /* SYNCSTCLR        */
    uint32 SYNCEDCLR:1;                                    /* SYNCEDCLR        */
    uint32 :22;                                            /* Reserved Bits    */
} __type674;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TXDEMPTYINTEN:1;                                /* TXDEMPTYINTEN    */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 SYNCSTINTEN:1;                                  /* SYNCSTINTEN      */
    uint32 SYNCEDINTEN:1;                                  /* SYNCEDINTEN      */
    uint32 :22;                                            /* Reserved Bits    */
} __type675;
typedef struct 
{                                                          /* Bit Access       */
    uint32 FRMFORMAT:3;                                    /* FRMFORMAT[2:0]   */
    uint32 :29;                                            /* Reserved Bits    */
} __type676;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TXDATA:32;                                      /* TXDATA[31:0]     */
} __type677;
typedef struct 
{                                                          /* Bit Access       */
    uint32 SMPLPROD:8;                                     /* SMPLPROD[7:0]    */
    uint32 :24;                                            /* Reserved Bits    */
} __type678;
typedef struct 
{                                                          /* Bit Access       */
    uint32 OFFSETCNT:20;                                   /* OFFSETCNT[19:0]  */
    uint32 LENGTH:5;                                       /* LENGTH[24:20]    */
    uint32 ERRDET:1;                                       /* ERRDET           */
    uint32 PASCMP:1;                                       /* PASCMP           */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 SLTEN:1;                                        /* SLTEN            */
} __type679;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RXDATA:32;                                /* RXDATA[31:0]     */
} __type680;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RXSTATUS:1;                               /* RXSTATUS         */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 RXSLOTNUM:4;                              /* RXSLOTNUM[7:4]   */
    const uint32 RXCHKD:3;                                 /* RXCHKD[10:8]     */
    uint32 :21;                                            /* Reserved Bits    */
} __type681;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RXDTIM:32;                                /* RXDTIM[31:0]     */
} __type682;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RXDST:32;                                 /* RXDST[31:0]      */
} __type683;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RXDEXIST:1;                               /* RXDEXIST         */
    uint32 :7;                                             /* Reserved Bits    */
    const uint32 RXDFOVF:1;                                /* RXDFOVF          */
    uint32 :7;                                             /* Reserved Bits    */
    const uint32 RXDERR:1;                                 /* RXDERR           */
    uint32 :7;                                             /* Reserved Bits    */
    const uint32 RXDSCNFERR:1;                             /* RXDSCNFERR       */
    uint32 :7;                                             /* Reserved Bits    */
} __type684;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :8;                                             /* Reserved Bits    */
    uint32 RXDFOVFCLR:1;                                   /* RXDFOVFCLR       */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 RXDERRCLR:1;                                    /* RXDERRCLR        */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 RXDSCNFERRCLR:1;                                /* RXDSCNFERRCLR    */
    uint32 :7;                                             /* Reserved Bits    */
} __type685;
typedef struct 
{                                                          /* Bit Access       */
    uint32 RXDEXISTINTEN:1;                                /* RXDEXISTINTEN    */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 RXDFOVFINTEN:1;                                 /* RXDFOVFINTEN     */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 RXDERRINTEN:1;                                  /* RXDERRINTEN      */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 RXDSCNFERRINTEN:1;                              /* RXDSCNFERRINTEN  */
    uint32 :7;                                             /* Reserved Bits    */
} __type686;
typedef struct 
{                                                          /* Bit Access       */
    uint32 RXM1EN:1;                                       /* RXM1EN           */
    uint32 RXM2EN:1;                                       /* RXM2EN           */
    uint32 RXM3EN:1;                                       /* RXM3EN           */
    uint32 RXM4EN:1;                                       /* RXM4EN           */
    uint32 RXM5EN:1;                                       /* RXM5EN           */
    uint32 RXM6EN:1;                                       /* RXM6EN           */
    uint32 RXM7EN:1;                                       /* RXM7EN           */
    uint32 RXM8EN:1;                                       /* RXM8EN           */
    uint32 :24;                                            /* Reserved Bits    */
} __type687;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 DATAFIELD:16;                             /* DATAFIELD[15:0]  */
    const uint32 SERIALID:8;                               /* SERIALID[23:16]  */
    uint32 :7;                                             /* Reserved Bits    */
    const uint32 CONFIGBIT:1;                              /* CONFIGBIT        */
} __type688;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RXSTATUS:1;                               /* RXSTATUS         */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 SLOTNUM:4;                                /* SLOTNUM[7:4]     */
    const uint32 RXCRC:6;                                  /* RXCRC[13:8]      */
    uint32 :2;                                             /* Reserved Bits    */
    const uint32 RXSYNC:3;                                 /* RXSYNC[18:16]    */
    uint32 :13;                                            /* Reserved Bits    */
} __type689;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RXMTIM:32;                                /* RXMTIM[31:0]     */
} __type690;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RXMFIFO:32;                               /* RXMFIFO[31:0]    */
} __type691;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 RXMEXIST:1;                               /* RXMEXIST         */
    uint32 :7;                                             /* Reserved Bits    */
    const uint32 RXMFOVF:1;                                /* RXMFOVF          */
    uint32 :7;                                             /* Reserved Bits    */
    const uint32 RXMERR:1;                                 /* RXMERR           */
    uint32 :15;                                            /* Reserved Bits    */
} __type692;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :8;                                             /* Reserved Bits    */
    uint32 RXMFOVFCLR:1;                                   /* RXMFOVFCLR       */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 RXMERRCLR:1;                                    /* RXMERRCLR        */
    uint32 :15;                                            /* Reserved Bits    */
} __type693;
typedef struct 
{                                                          /* Bit Access       */
    uint32 RXMEXISTINTEN:1;                                /* RXMEXISTINTEN    */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 RXMFOVFINTEN:1;                                 /* RXMFOVFINTEN     */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 RXMERRINTEN:1;                                  /* RXMERRINTEN      */
    uint32 :15;                                            /* Reserved Bits    */
} __type694;
typedef struct 
{                                                          /* Bit Access       */
    uint32 MSSEL0:1;                                       /* MSSEL0           */
    uint32 :31;                                            /* Reserved Bits    */
} __type695;

typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type664 BIT;                                         /* Bit Access       */
} __type1943;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type665 BIT;                                         /* Bit Access       */
} __type1944;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type666 BIT;                                         /* Bit Access       */
} __type1945;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type667 BIT;                                         /* Bit Access       */
} __type1946;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type668 BIT;                                         /* Bit Access       */
} __type1947;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type669 BIT;                                         /* Bit Access       */
} __type1948;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type670 BIT;                                   /* Bit Access       */
} __type1949;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type671 BIT;                                         /* Bit Access       */
} __type1950;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type672 BIT;                                         /* Bit Access       */
} __type1951;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type673 BIT;                                   /* Bit Access       */
} __type1952;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type674 BIT;                                         /* Bit Access       */
} __type1953;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type675 BIT;                                         /* Bit Access       */
} __type1954;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type676 BIT;                                         /* Bit Access       */
} __type1955;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type677 BIT;                                         /* Bit Access       */
} __type1956;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type678 BIT;                                         /* Bit Access       */
} __type1957;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type679 BIT;                                         /* Bit Access       */
} __type1958;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type680 BIT;                                   /* Bit Access       */
} __type1959;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type681 BIT;                                   /* Bit Access       */
} __type1960;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type682 BIT;                                   /* Bit Access       */
} __type1961;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type683 BIT;                                   /* Bit Access       */
} __type1962;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type684 BIT;                                   /* Bit Access       */
} __type1963;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type685 BIT;                                         /* Bit Access       */
} __type1964;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type686 BIT;                                         /* Bit Access       */
} __type1965;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type687 BIT;                                         /* Bit Access       */
} __type1966;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type688 BIT;                                   /* Bit Access       */
} __type1967;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type689 BIT;                                   /* Bit Access       */
} __type1968;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type690 BIT;                                   /* Bit Access       */
} __type1969;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type691 BIT;                                   /* Bit Access       */
} __type1970;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type692 BIT;                                   /* Bit Access       */
} __type1971;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type693 BIT;                                         /* Bit Access       */
} __type1972;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type694 BIT;                                         /* Bit Access       */
} __type1973;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type695 BIT;                                         /* Bit Access       */
} __type1974;

typedef struct 
{                                                          /* Module           */
    __type1943 CHCTRL;                                     /* CHCTRL           */
    uint8  dummy374[12];                                   /* Reserved         */
    __type1944 IPTIMERCTRL;                                /* IPTIMERCTRL      */
    __type1945 IPTIMER;                                    /* IPTIMER          */
    uint8  dummy375[8];                                    /* Reserved         */
    __type1946 OPMCOMM;                                    /* OPMCOMM          */
    __type1947 OPMBITRATE;                                 /* OPMBITRATE       */
    __type1948 OPMCYCT;                                    /* OPMCYCT          */
    uint8  dummy376[4];                                    /* Reserved         */
    const __type1949 PSI5INT;                              /* PSI5INT          */
    uint8  dummy377[12];                                   /* Reserved         */
    const uint32 EMRXDATA;                                 /* EMRXDATA         */
    const uint32 EMRXDST;                                  /* EMRXDST          */
    const uint32 EMRXDTIM;                                 /* EMRXDTIM         */
    const uint32 EMRXDFIFO;                                /* EMRXDFIFO        */
    const uint32 EMRXMRXMSG;                               /* EMRXMRXMSG       */
    const uint32 EMRXMRXST;                                /* EMRXMRXST        */
    const uint32 EMRXMRXTIM;                               /* EMRXMRXTIM       */
    const uint32 EMRXMFIFO;                                /* EMRXMFIFO        */
    uint8  dummy378[32];                                   /* Reserved         */
    __type1950 TXSETTING;                                  /* TXSETTING        */
    __type1951 SYNCCTRL;                                   /* SYNCCTRL         */
    const __type1952 TXST;                                 /* TXST             */
    __type1953 TXSTCLR;                                    /* TXSTCLR          */
    __type1954 TXSTINTEN;                                  /* TXSTINTEN        */
    __type1955 TXDCTRL;                                    /* TXDCTRL          */
    __type1956 TXDATA;                                     /* TXDATA           */
    uint8  dummy379[100];                                  /* Reserved         */
    __type1957 RXSPLSET;                                   /* RXSPLSET         */
    uint8  dummy380[4];                                    /* Reserved         */
    __type1958 RXS1SET;                                    /* RXS1SET          */
    __type1958 RXS2SET;                                    /* RXS2SET          */
    __type1958 RXS3SET;                                    /* RXS3SET          */
    __type1958 RXS4SET;                                    /* RXS4SET          */
    __type1958 RXS5SET;                                    /* RXS5SET          */
    __type1958 RXS6SET;                                    /* RXS6SET          */
    __type1958 RXS7SET;                                    /* RXS7SET          */
    __type1958 RXS8SET;                                    /* RXS8SET          */
    const __type1959 RXDATA;                               /* RXDATA           */
    const __type1960 RXDST;                                /* RXDST            */
    const __type1961 RXDTIM;                               /* RXDTIM           */
    const __type1962 RXDFIFO;                              /* RXDFIFO          */
    const __type1963 RXMODST;                              /* RXMODST          */
    __type1964 RXMODSTCLR;                                 /* RXMODSTCLR       */
    __type1965 RXMODSTINTEN;                               /* RXMODSTINTEN     */
    uint8  dummy381[60];                                   /* Reserved         */
    __type1966 RXMSET;                                     /* RXMSET           */
    const __type1967 RXMRXMSG;                             /* RXMRXMSG         */
    const __type1968 RXMRXST;                              /* RXMRXST          */
    const __type1969 RXMRXTIM;                             /* RXMRXTIM         */
    const __type1970 RXMFIFO;                              /* RXMFIFO          */
    const __type1971 RXMMST;                               /* RXMMST           */
    __type1972 RXMMSTCLR;                                  /* RXMMSTCLR        */
    __type1973 RXMMSTINTEN;                                /* RXMMSTINTEN      */
} __type2603;
typedef struct 
{                                                          /* Module           */
    __type1974 TSSEL;                                      /* TSSEL            */
} __type2604;

__IOREG(PSI50, 0xFFE00000, __READ_WRITE, __type2603);                 /* PSI50 */
__IOREG(PSI51, 0xFFE01000, __READ_WRITE, __type2603);                 /* PSI51 */
__IOREG(PSI5, 0xFFE03000, __READ_WRITE, __type2604);                  /* PSI5 */

#define PSI50CHCTRL PSI50.CHCTRL.UINT32
#define PSI50CHEN PSI50.CHCTRL.BIT.CHEN
#define PSI50IPTIMERCTRL PSI50.IPTIMERCTRL.UINT32
#define PSI50IPTIMEN PSI50.IPTIMERCTRL.BIT.IPTIMEN
#define PSI50TSCLR PSI50.IPTIMERCTRL.BIT.TSCLR
#define PSI50MSTSLV PSI50.IPTIMERCTRL.BIT.MSTSLV
#define PSI50IPTIMER PSI50.IPTIMER.UINT32
#define PSI50COUNTVAL PSI50.IPTIMER.BIT.COUNTVAL
#define PSI50OPMCOMM PSI50.OPMCOMM.UINT32
#define PSI50COMMODE PSI50.OPMCOMM.BIT.COMMODE
#define PSI50OPMBITRATE PSI50.OPMBITRATE.UINT32
#define PSI50BITRATECNT PSI50.OPMBITRATE.BIT.BITRATECNT
#define PSI50OPMCYCT PSI50.OPMCYCT.UINT32
#define PSI50TTTTCNT PSI50.OPMCYCT.BIT.TTTTCNT
#define PSI50PSI5INT PSI50.PSI5INT.UINT32
#define PSI50INT_RXMEXIST PSI50.PSI5INT.BIT.INT_RXMEXIST
#define PSI50INT_RXMFOVF PSI50.PSI5INT.BIT.INT_RXMFOVF
#define PSI50INT_RXMERR PSI50.PSI5INT.BIT.INT_RXMERR
#define PSI50INT_RXDEXIST PSI50.PSI5INT.BIT.INT_RXDEXIST
#define PSI50INT_RXDFOVF PSI50.PSI5INT.BIT.INT_RXDFOVF
#define PSI50INT_RXDERR PSI50.PSI5INT.BIT.INT_RXDERR
#define PSI50INT_RXDSCNFERR PSI50.PSI5INT.BIT.INT_RXDSCNFERR
#define PSI50INT_TXDEMPTY PSI50.PSI5INT.BIT.INT_TXDEMPTY
#define PSI50INT_SYNCST PSI50.PSI5INT.BIT.INT_SYNCST
#define PSI50INT_SYNCED PSI50.PSI5INT.BIT.INT_SYNCED
#define PSI50EMRXDATA PSI50.EMRXDATA
#define PSI50EMRXDST PSI50.EMRXDST
#define PSI50EMRXDTIM PSI50.EMRXDTIM
#define PSI50EMRXDFIFO PSI50.EMRXDFIFO
#define PSI50EMRXMRXMSG PSI50.EMRXMRXMSG
#define PSI50EMRXMRXST PSI50.EMRXMRXST
#define PSI50EMRXMRXTIM PSI50.EMRXMRXTIM
#define PSI50EMRXMFIFO PSI50.EMRXMFIFO
#define PSI50TXSETTING PSI50.TXSETTING.UINT32
#define PSI50SHORTCNT PSI50.TXSETTING.BIT.SHORTCNT
#define PSI50DEFTXVAL PSI50.TXSETTING.BIT.DEFTXVAL
#define PSI50PHYMODE PSI50.TXSETTING.BIT.PHYMODE
#define PSI50LONGCNT PSI50.TXSETTING.BIT.LONGCNT
#define PSI50SYNCCTRL PSI50.SYNCCTRL.UINT32
#define PSI50VALTIMSYNC PSI50.SYNCCTRL.BIT.VALTIMSYNC
#define PSI50TXST PSI50.TXST.UINT32
#define PSI50TXDEMPTY PSI50.TXST.BIT.TXDEMPTY
#define PSI50SYNCST PSI50.TXST.BIT.SYNCST
#define PSI50SYNCED PSI50.TXST.BIT.SYNCED
#define PSI50TXSTCLR PSI50.TXSTCLR.UINT32
#define PSI50SYNCSTCLR PSI50.TXSTCLR.BIT.SYNCSTCLR
#define PSI50SYNCEDCLR PSI50.TXSTCLR.BIT.SYNCEDCLR
#define PSI50TXSTINTEN PSI50.TXSTINTEN.UINT32
#define PSI50TXDEMPTYINTEN PSI50.TXSTINTEN.BIT.TXDEMPTYINTEN
#define PSI50SYNCSTINTEN PSI50.TXSTINTEN.BIT.SYNCSTINTEN
#define PSI50SYNCEDINTEN PSI50.TXSTINTEN.BIT.SYNCEDINTEN
#define PSI50TXDCTRL PSI50.TXDCTRL.UINT32
#define PSI50FRMFORMAT PSI50.TXDCTRL.BIT.FRMFORMAT
#define PSI50TXDATA PSI50.TXDATA.UINT32
#define PSI50RXSPLSET PSI50.RXSPLSET.UINT32
#define PSI50SMPLPROD PSI50.RXSPLSET.BIT.SMPLPROD
#define PSI50RXS1SET PSI50.RXS1SET.UINT32
#define PSI50OFFSETCNT PSI50.RXS1SET.BIT.OFFSETCNT
#define PSI50LENGTH PSI50.RXS1SET.BIT.LENGTH
#define PSI50ERRDET PSI50.RXS1SET.BIT.ERRDET
#define PSI50PASCMP PSI50.RXS1SET.BIT.PASCMP
#define PSI50SLTEN PSI50.RXS1SET.BIT.SLTEN
#define PSI50RXS2SET PSI50.RXS2SET.UINT32
#define PSI50RXS3SET PSI50.RXS3SET.UINT32
#define PSI50RXS4SET PSI50.RXS4SET.UINT32
#define PSI50RXS5SET PSI50.RXS5SET.UINT32
#define PSI50RXS6SET PSI50.RXS6SET.UINT32
#define PSI50RXS7SET PSI50.RXS7SET.UINT32
#define PSI50RXS8SET PSI50.RXS8SET.UINT32
#define PSI50RXDATA PSI50.RXDATA.UINT32
#define PSI50RXDST PSI50.RXDST.UINT32
#define PSI50RXSTATUS PSI50.RXDST.BIT.RXSTATUS
#define PSI50RXSLOTNUM PSI50.RXDST.BIT.RXSLOTNUM
#define PSI50RXCHKD PSI50.RXDST.BIT.RXCHKD
#define PSI50RXDTIM PSI50.RXDTIM.UINT32
#define PSI50RXDFIFO PSI50.RXDFIFO.UINT32
#define PSI50RXMODST PSI50.RXMODST.UINT32
#define PSI50RXDEXIST PSI50.RXMODST.BIT.RXDEXIST
#define PSI50RXDFOVF PSI50.RXMODST.BIT.RXDFOVF
#define PSI50RXDERR PSI50.RXMODST.BIT.RXDERR
#define PSI50RXDSCNFERR PSI50.RXMODST.BIT.RXDSCNFERR
#define PSI50RXMODSTCLR PSI50.RXMODSTCLR.UINT32
#define PSI50RXDFOVFCLR PSI50.RXMODSTCLR.BIT.RXDFOVFCLR
#define PSI50RXDERRCLR PSI50.RXMODSTCLR.BIT.RXDERRCLR
#define PSI50RXDSCNFERRCLR PSI50.RXMODSTCLR.BIT.RXDSCNFERRCLR
#define PSI50RXMODSTINTEN PSI50.RXMODSTINTEN.UINT32
#define PSI50RXDEXISTINTEN PSI50.RXMODSTINTEN.BIT.RXDEXISTINTEN
#define PSI50RXDFOVFINTEN PSI50.RXMODSTINTEN.BIT.RXDFOVFINTEN
#define PSI50RXDERRINTEN PSI50.RXMODSTINTEN.BIT.RXDERRINTEN
#define PSI50RXDSCNFERRINTEN PSI50.RXMODSTINTEN.BIT.RXDSCNFERRINTEN
#define PSI50RXMSET PSI50.RXMSET.UINT32
#define PSI50RXM1EN PSI50.RXMSET.BIT.RXM1EN
#define PSI50RXM2EN PSI50.RXMSET.BIT.RXM2EN
#define PSI50RXM3EN PSI50.RXMSET.BIT.RXM3EN
#define PSI50RXM4EN PSI50.RXMSET.BIT.RXM4EN
#define PSI50RXM5EN PSI50.RXMSET.BIT.RXM5EN
#define PSI50RXM6EN PSI50.RXMSET.BIT.RXM6EN
#define PSI50RXM7EN PSI50.RXMSET.BIT.RXM7EN
#define PSI50RXM8EN PSI50.RXMSET.BIT.RXM8EN
#define PSI50RXMRXMSG PSI50.RXMRXMSG.UINT32
#define PSI50DATAFIELD PSI50.RXMRXMSG.BIT.DATAFIELD
#define PSI50SERIALID PSI50.RXMRXMSG.BIT.SERIALID
#define PSI50CONFIGBIT PSI50.RXMRXMSG.BIT.CONFIGBIT
#define PSI50RXMRXST PSI50.RXMRXST.UINT32
#define PSI50SLOTNUM PSI50.RXMRXST.BIT.SLOTNUM
#define PSI50RXCRC PSI50.RXMRXST.BIT.RXCRC
#define PSI50RXSYNC PSI50.RXMRXST.BIT.RXSYNC
#define PSI50RXMRXTIM PSI50.RXMRXTIM.UINT32
#define PSI50RXMTIM PSI50.RXMRXTIM.BIT.RXMTIM
#define PSI50RXMFIFO PSI50.RXMFIFO.UINT32
#define PSI50RXMMST PSI50.RXMMST.UINT32
#define PSI50RXMEXIST PSI50.RXMMST.BIT.RXMEXIST
#define PSI50RXMFOVF PSI50.RXMMST.BIT.RXMFOVF
#define PSI50RXMERR PSI50.RXMMST.BIT.RXMERR
#define PSI50RXMMSTCLR PSI50.RXMMSTCLR.UINT32
#define PSI50RXMFOVFCLR PSI50.RXMMSTCLR.BIT.RXMFOVFCLR
#define PSI50RXMERRCLR PSI50.RXMMSTCLR.BIT.RXMERRCLR
#define PSI50RXMMSTINTEN PSI50.RXMMSTINTEN.UINT32
#define PSI50RXMEXISTINTEN PSI50.RXMMSTINTEN.BIT.RXMEXISTINTEN
#define PSI50RXMFOVFINTEN PSI50.RXMMSTINTEN.BIT.RXMFOVFINTEN
#define PSI50RXMERRINTEN PSI50.RXMMSTINTEN.BIT.RXMERRINTEN
#define PSI51CHCTRL PSI51.CHCTRL.UINT32
#define PSI51CHEN PSI51.CHCTRL.BIT.CHEN
#define PSI51IPTIMERCTRL PSI51.IPTIMERCTRL.UINT32
#define PSI51IPTIMEN PSI51.IPTIMERCTRL.BIT.IPTIMEN
#define PSI51TSCLR PSI51.IPTIMERCTRL.BIT.TSCLR
#define PSI51MSTSLV PSI51.IPTIMERCTRL.BIT.MSTSLV
#define PSI51IPTIMER PSI51.IPTIMER.UINT32
#define PSI51COUNTVAL PSI51.IPTIMER.BIT.COUNTVAL
#define PSI51OPMCOMM PSI51.OPMCOMM.UINT32
#define PSI51COMMODE PSI51.OPMCOMM.BIT.COMMODE
#define PSI51OPMBITRATE PSI51.OPMBITRATE.UINT32
#define PSI51BITRATECNT PSI51.OPMBITRATE.BIT.BITRATECNT
#define PSI51OPMCYCT PSI51.OPMCYCT.UINT32
#define PSI51TTTTCNT PSI51.OPMCYCT.BIT.TTTTCNT
#define PSI51PSI5INT PSI51.PSI5INT.UINT32
#define PSI51INT_RXMEXIST PSI51.PSI5INT.BIT.INT_RXMEXIST
#define PSI51INT_RXMFOVF PSI51.PSI5INT.BIT.INT_RXMFOVF
#define PSI51INT_RXMERR PSI51.PSI5INT.BIT.INT_RXMERR
#define PSI51INT_RXDEXIST PSI51.PSI5INT.BIT.INT_RXDEXIST
#define PSI51INT_RXDFOVF PSI51.PSI5INT.BIT.INT_RXDFOVF
#define PSI51INT_RXDERR PSI51.PSI5INT.BIT.INT_RXDERR
#define PSI51INT_RXDSCNFERR PSI51.PSI5INT.BIT.INT_RXDSCNFERR
#define PSI51INT_TXDEMPTY PSI51.PSI5INT.BIT.INT_TXDEMPTY
#define PSI51INT_SYNCST PSI51.PSI5INT.BIT.INT_SYNCST
#define PSI51INT_SYNCED PSI51.PSI5INT.BIT.INT_SYNCED
#define PSI51EMRXDATA PSI51.EMRXDATA
#define PSI51EMRXDST PSI51.EMRXDST
#define PSI51EMRXDTIM PSI51.EMRXDTIM
#define PSI51EMRXDFIFO PSI51.EMRXDFIFO
#define PSI51EMRXMRXMSG PSI51.EMRXMRXMSG
#define PSI51EMRXMRXST PSI51.EMRXMRXST
#define PSI51EMRXMRXTIM PSI51.EMRXMRXTIM
#define PSI51EMRXMFIFO PSI51.EMRXMFIFO
#define PSI51TXSETTING PSI51.TXSETTING.UINT32
#define PSI51SHORTCNT PSI51.TXSETTING.BIT.SHORTCNT
#define PSI51DEFTXVAL PSI51.TXSETTING.BIT.DEFTXVAL
#define PSI51PHYMODE PSI51.TXSETTING.BIT.PHYMODE
#define PSI51LONGCNT PSI51.TXSETTING.BIT.LONGCNT
#define PSI51SYNCCTRL PSI51.SYNCCTRL.UINT32
#define PSI51VALTIMSYNC PSI51.SYNCCTRL.BIT.VALTIMSYNC
#define PSI51TXST PSI51.TXST.UINT32
#define PSI51TXDEMPTY PSI51.TXST.BIT.TXDEMPTY
#define PSI51SYNCST PSI51.TXST.BIT.SYNCST
#define PSI51SYNCED PSI51.TXST.BIT.SYNCED
#define PSI51TXSTCLR PSI51.TXSTCLR.UINT32
#define PSI51SYNCSTCLR PSI51.TXSTCLR.BIT.SYNCSTCLR
#define PSI51SYNCEDCLR PSI51.TXSTCLR.BIT.SYNCEDCLR
#define PSI51TXSTINTEN PSI51.TXSTINTEN.UINT32
#define PSI51TXDEMPTYINTEN PSI51.TXSTINTEN.BIT.TXDEMPTYINTEN
#define PSI51SYNCSTINTEN PSI51.TXSTINTEN.BIT.SYNCSTINTEN
#define PSI51SYNCEDINTEN PSI51.TXSTINTEN.BIT.SYNCEDINTEN
#define PSI51TXDCTRL PSI51.TXDCTRL.UINT32
#define PSI51FRMFORMAT PSI51.TXDCTRL.BIT.FRMFORMAT
#define PSI51TXDATA PSI51.TXDATA.UINT32
#define PSI51RXSPLSET PSI51.RXSPLSET.UINT32
#define PSI51SMPLPROD PSI51.RXSPLSET.BIT.SMPLPROD
#define PSI51RXS1SET PSI51.RXS1SET.UINT32
#define PSI51OFFSETCNT PSI51.RXS1SET.BIT.OFFSETCNT
#define PSI51LENGTH PSI51.RXS1SET.BIT.LENGTH
#define PSI51ERRDET PSI51.RXS1SET.BIT.ERRDET
#define PSI51PASCMP PSI51.RXS1SET.BIT.PASCMP
#define PSI51SLTEN PSI51.RXS1SET.BIT.SLTEN
#define PSI51RXS2SET PSI51.RXS2SET.UINT32
#define PSI51RXS3SET PSI51.RXS3SET.UINT32
#define PSI51RXS4SET PSI51.RXS4SET.UINT32
#define PSI51RXS5SET PSI51.RXS5SET.UINT32
#define PSI51RXS6SET PSI51.RXS6SET.UINT32
#define PSI51RXS7SET PSI51.RXS7SET.UINT32
#define PSI51RXS8SET PSI51.RXS8SET.UINT32
#define PSI51RXDATA PSI51.RXDATA.UINT32
#define PSI51RXDST PSI51.RXDST.UINT32
#define PSI51RXSTATUS PSI51.RXDST.BIT.RXSTATUS
#define PSI51RXSLOTNUM PSI51.RXDST.BIT.RXSLOTNUM
#define PSI51RXCHKD PSI51.RXDST.BIT.RXCHKD
#define PSI51RXDTIM PSI51.RXDTIM.UINT32
#define PSI51RXDFIFO PSI51.RXDFIFO.UINT32
#define PSI51RXMODST PSI51.RXMODST.UINT32
#define PSI51RXDEXIST PSI51.RXMODST.BIT.RXDEXIST
#define PSI51RXDFOVF PSI51.RXMODST.BIT.RXDFOVF
#define PSI51RXDERR PSI51.RXMODST.BIT.RXDERR
#define PSI51RXDSCNFERR PSI51.RXMODST.BIT.RXDSCNFERR
#define PSI51RXMODSTCLR PSI51.RXMODSTCLR.UINT32
#define PSI51RXDFOVFCLR PSI51.RXMODSTCLR.BIT.RXDFOVFCLR
#define PSI51RXDERRCLR PSI51.RXMODSTCLR.BIT.RXDERRCLR
#define PSI51RXDSCNFERRCLR PSI51.RXMODSTCLR.BIT.RXDSCNFERRCLR
#define PSI51RXMODSTINTEN PSI51.RXMODSTINTEN.UINT32
#define PSI51RXDEXISTINTEN PSI51.RXMODSTINTEN.BIT.RXDEXISTINTEN
#define PSI51RXDFOVFINTEN PSI51.RXMODSTINTEN.BIT.RXDFOVFINTEN
#define PSI51RXDERRINTEN PSI51.RXMODSTINTEN.BIT.RXDERRINTEN
#define PSI51RXDSCNFERRINTEN PSI51.RXMODSTINTEN.BIT.RXDSCNFERRINTEN
#define PSI51RXMSET PSI51.RXMSET.UINT32
#define PSI51RXM1EN PSI51.RXMSET.BIT.RXM1EN
#define PSI51RXM2EN PSI51.RXMSET.BIT.RXM2EN
#define PSI51RXM3EN PSI51.RXMSET.BIT.RXM3EN
#define PSI51RXM4EN PSI51.RXMSET.BIT.RXM4EN
#define PSI51RXM5EN PSI51.RXMSET.BIT.RXM5EN
#define PSI51RXM6EN PSI51.RXMSET.BIT.RXM6EN
#define PSI51RXM7EN PSI51.RXMSET.BIT.RXM7EN
#define PSI51RXM8EN PSI51.RXMSET.BIT.RXM8EN
#define PSI51RXMRXMSG PSI51.RXMRXMSG.UINT32
#define PSI51DATAFIELD PSI51.RXMRXMSG.BIT.DATAFIELD
#define PSI51SERIALID PSI51.RXMRXMSG.BIT.SERIALID
#define PSI51CONFIGBIT PSI51.RXMRXMSG.BIT.CONFIGBIT
#define PSI51RXMRXST PSI51.RXMRXST.UINT32
#define PSI51SLOTNUM PSI51.RXMRXST.BIT.SLOTNUM
#define PSI51RXCRC PSI51.RXMRXST.BIT.RXCRC
#define PSI51RXSYNC PSI51.RXMRXST.BIT.RXSYNC
#define PSI51RXMRXTIM PSI51.RXMRXTIM.UINT32
#define PSI51RXMTIM PSI51.RXMRXTIM.BIT.RXMTIM
#define PSI51RXMFIFO PSI51.RXMFIFO.UINT32
#define PSI51RXMMST PSI51.RXMMST.UINT32
#define PSI51RXMEXIST PSI51.RXMMST.BIT.RXMEXIST
#define PSI51RXMFOVF PSI51.RXMMST.BIT.RXMFOVF
#define PSI51RXMERR PSI51.RXMMST.BIT.RXMERR
#define PSI51RXMMSTCLR PSI51.RXMMSTCLR.UINT32
#define PSI51RXMFOVFCLR PSI51.RXMMSTCLR.BIT.RXMFOVFCLR
#define PSI51RXMERRCLR PSI51.RXMMSTCLR.BIT.RXMERRCLR
#define PSI51RXMMSTINTEN PSI51.RXMMSTINTEN.UINT32
#define PSI51RXMEXISTINTEN PSI51.RXMMSTINTEN.BIT.RXMEXISTINTEN
#define PSI51RXMFOVFINTEN PSI51.RXMMSTINTEN.BIT.RXMFOVFINTEN
#define PSI51RXMERRINTEN PSI51.RXMMSTINTEN.BIT.RXMERRINTEN
#define PSI5TSSEL PSI5.TSSEL.UINT32
#define PSI5MSSEL0 PSI5.TSSEL.BIT.MSSEL0

#endif
