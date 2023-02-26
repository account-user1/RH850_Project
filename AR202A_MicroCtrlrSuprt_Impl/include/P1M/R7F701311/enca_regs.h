/**********************************************************************************************************************
* Module File Name  : enca_regs.h
* Module Description: Encoder Timer Peripheral Registers
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
* 09/15/15  2        NJS       Updated to account for changes in dr7f701311.dvf.h v2 in tools directory
**********************************************************************************************************************/

#ifndef ENCA_REGS_H
#define ENCA_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"


typedef struct 
{                                                          /* Bit Access       */
    const uint8  OVF:1;                                    /* OVF              */
    const uint8  UDF:1;                                    /* UDF              */
    const uint8  CSF:1;                                    /* CSF              */
    uint8  :5;                                             /* Reserved Bits    */
} __type815;
typedef struct 
{                                                          /* Bit Access       */
    uint8  CLOV:1;                                         /* CLOV             */
    uint8  CLUD:1;                                         /* CLUD             */
    uint8  :6;                                             /* Reserved Bits    */
} __type816;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TIS10:2;                                        /* TIS10[1:0]       */
    uint8  TIS32:2;                                        /* TIS32[3:2]       */
    uint8  :4;                                             /* Reserved Bits    */
} __type817;
typedef struct 
{                                                          /* Bit Access       */
    uint16 UDS:2;                                          /* UDS[1:0]         */
    uint16 ECM0:1;                                         /* ECM0             */
    uint16 ECM1:1;                                         /* ECM1             */
    uint16 LDE:1;                                          /* LDE              */
    uint16 :2;                                             /* Reserved Bits    */
    uint16 CTS:1;                                          /* CTS              */
    uint16 CRM0:1;                                         /* CRM0             */
    uint16 CRM1:1;                                         /* CRM1             */
    uint16 :4;                                             /* Reserved Bits    */
    uint16 MCS:1;                                          /* MCS              */
    uint16 CME:1;                                          /* CME              */
} __type818;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIS:2;                                          /* EIS[1:0]         */
    uint8  ECS:2;                                          /* ECS[3:2]         */
    uint8  ACL:1;                                          /* ACL              */
    uint8  BCL:1;                                          /* BCL              */
    uint8  ZCL:1;                                          /* ZCL              */
    uint8  SCE:1;                                          /* SCE              */
} __type819;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type815 BIT;                                   /* Bit Access       */
} __type2094;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type816 BIT;                                         /* Bit Access       */
} __type2095;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type817 BIT;                                         /* Bit Access       */
} __type2096;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type818 BIT;                                         /* Bit Access       */
} __type2097;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type819 BIT;                                         /* Bit Access       */
} __type2098;

typedef struct 
{                                                          /* Module           */
    uint16 CCR0;                                           /* CCR0             */
    uint8  dummy576[2];                                    /* Reserved         */
    uint16 CCR1;                                           /* CCR1             */
    uint8  dummy577[2];                                    /* Reserved         */
    uint16 CNT;                                            /* CNT              */
    uint8  dummy578[2];                                    /* Reserved         */
    const __type2094 FLG;                                  /* FLG              */
    uint8  dummy579[3];                                    /* Reserved         */
    __type2095 FGC;                                        /* FGC              */
    uint8  dummy580[3];                                    /* Reserved         */
    const __type1817 TE;                                   /* TE               */
    uint8  dummy581[3];                                    /* Reserved         */
    __type1818 TS;                                         /* TS               */
    uint8  dummy582[3];                                    /* Reserved         */
    __type1819 TT;                                         /* TT               */
    uint8  dummy583[3];                                    /* Reserved         */
    __type2096 IOC0;                                       /* IOC0             */
    uint8  dummy584[31];                                   /* Reserved         */
    __type2097 CTL;                                        /* CTL              */
    uint8  dummy585[2];                                    /* Reserved         */
    __type2098 IOC1;                                       /* IOC1             */
    uint8  dummy586[4027];                                 /* Reserved         */
} __type2610;

__IOREG(ENCA0, 0xFFE80000, __READ_WRITE, __type2610);                 /* ENCA0 */
__IOREG(ENCA1, 0xFFE81000, __READ_WRITE, __type2610);                 /* ENCA1 */

__IOREGARRAY(ENCA, 2, 0xFFE80000, __READ_WRITE, __type2610);          /* ENCA[2] */

#define ENCA0CCR0 ENCA0.CCR0
#define ENCA0CCR1 ENCA0.CCR1
#define ENCA0CNT ENCA0.CNT
#define ENCA0FLG ENCA0.FLG.UINT8
#define ENCA0OVF ENCA0.FLG.BIT.OVF
#define ENCA0UDF ENCA0.FLG.BIT.UDF
#define ENCA0CSF ENCA0.FLG.BIT.CSF
#define ENCA0FGC ENCA0.FGC.UINT8
#define ENCA0CLOV ENCA0.FGC.BIT.CLOV
#define ENCA0CLUD ENCA0.FGC.BIT.CLUD
#define ENCA0TE ENCA0.TE.UINT8
#define ENCA0TS ENCA0.TS.UINT8
#define ENCA0TT ENCA0.TT.UINT8
#define ENCA0IOC0 ENCA0.IOC0.UINT8
#define ENCA0TIS10 ENCA0.IOC0.BIT.TIS10
#define ENCA0TIS32 ENCA0.IOC0.BIT.TIS32
#define ENCA0CTL ENCA0.CTL.UINT16
#define ENCA0UDS ENCA0.CTL.BIT.UDS
#define ENCA0ECM0 ENCA0.CTL.BIT.ECM0
#define ENCA0ECM1 ENCA0.CTL.BIT.ECM1
#define ENCA0LDE ENCA0.CTL.BIT.LDE
#define ENCA0CTS ENCA0.CTL.BIT.CTS
#define ENCA0CRM0 ENCA0.CTL.BIT.CRM0
#define ENCA0CRM1 ENCA0.CTL.BIT.CRM1
#define ENCA0MCS ENCA0.CTL.BIT.MCS
#define ENCA0CME ENCA0.CTL.BIT.CME
#define ENCA0IOC1 ENCA0.IOC1.UINT8
#define ENCA0EIS ENCA0.IOC1.BIT.EIS
#define ENCA0ECS ENCA0.IOC1.BIT.ECS
#define ENCA0ACL ENCA0.IOC1.BIT.ACL
#define ENCA0BCL ENCA0.IOC1.BIT.BCL
#define ENCA0ZCL ENCA0.IOC1.BIT.ZCL
#define ENCA0SCE ENCA0.IOC1.BIT.SCE
#define ENCA1CCR0 ENCA1.CCR0
#define ENCA1CCR1 ENCA1.CCR1
#define ENCA1CNT ENCA1.CNT
#define ENCA1FLG ENCA1.FLG.UINT8
#define ENCA1OVF ENCA1.FLG.BIT.OVF
#define ENCA1UDF ENCA1.FLG.BIT.UDF
#define ENCA1CSF ENCA1.FLG.BIT.CSF
#define ENCA1FGC ENCA1.FGC.UINT8
#define ENCA1CLOV ENCA1.FGC.BIT.CLOV
#define ENCA1CLUD ENCA1.FGC.BIT.CLUD
#define ENCA1TE ENCA1.TE.UINT8
#define ENCA1TS ENCA1.TS.UINT8
#define ENCA1TT ENCA1.TT.UINT8
#define ENCA1IOC0 ENCA1.IOC0.UINT8
#define ENCA1TIS10 ENCA1.IOC0.BIT.TIS10
#define ENCA1TIS32 ENCA1.IOC0.BIT.TIS32
#define ENCA1CTL ENCA1.CTL.UINT16
#define ENCA1UDS ENCA1.CTL.BIT.UDS
#define ENCA1ECM0 ENCA1.CTL.BIT.ECM0
#define ENCA1ECM1 ENCA1.CTL.BIT.ECM1
#define ENCA1LDE ENCA1.CTL.BIT.LDE
#define ENCA1CTS ENCA1.CTL.BIT.CTS
#define ENCA1CRM0 ENCA1.CTL.BIT.CRM0
#define ENCA1CRM1 ENCA1.CTL.BIT.CRM1
#define ENCA1MCS ENCA1.CTL.BIT.MCS
#define ENCA1CME ENCA1.CTL.BIT.CME
#define ENCA1IOC1 ENCA1.IOC1.UINT8
#define ENCA1EIS ENCA1.IOC1.BIT.EIS
#define ENCA1ECS ENCA1.IOC1.BIT.ECS
#define ENCA1ACL ENCA1.IOC1.BIT.ACL
#define ENCA1BCL ENCA1.IOC1.BIT.BCL
#define ENCA1ZCL ENCA1.IOC1.BIT.ZCL
#define ENCA1SCE ENCA1.IOC1.BIT.SCE

#endif
