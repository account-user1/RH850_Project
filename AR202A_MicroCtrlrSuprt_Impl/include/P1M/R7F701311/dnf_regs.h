/**********************************************************************************************************************
* Module File Name  : dnf_regs.h
* Module Description: Digital Noise Filter Registers
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

#ifndef DNF_REGS_H
#define DNF_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  PRS:3;                                          /* PRS[2:0]         */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  NFSTS:2;                                        /* NFSTS[6:5]       */
    uint8  :1;                                             /* Reserved Bits    */
} __type319;
typedef struct 
{                                                          /* Bit Access       */
    uint16 NFENL0:1;                                       /* NFENL0           */
    uint16 NFENL1:1;                                       /* NFENL1           */
    uint16 NFENL2:1;                                       /* NFENL2           */
    uint16 :13;                                            /* Reserved Bits    */
} __type320;
typedef struct 
{                                                          /* Bit Access       */
    uint8  NFENL0:1;                                       /* NFENL0           */
    uint8  NFENL1:1;                                       /* NFENL1           */
    uint8  NFENL2:1;                                       /* NFENL2           */
    uint8  :5;                                             /* Reserved Bits    */
} __type321;
typedef struct 
{                                                          /* Bit Access       */
    uint16 NFENL0:1;                                       /* NFENL0           */
    uint16 NFENL1:1;                                       /* NFENL1           */
    uint16 :14;                                            /* Reserved Bits    */
} __type322;
typedef struct 
{                                                          /* Bit Access       */
    uint8  NFENL0:1;                                       /* NFENL0           */
    uint8  NFENL1:1;                                       /* NFENL1           */
    uint8  :6;                                             /* Reserved Bits    */
} __type323;
typedef struct 
{                                                          /* Bit Access       */
    uint16 NFENL0:1;                                       /* NFENL0           */
    uint16 NFENL1:1;                                       /* NFENL1           */
    uint16 NFENL2:1;                                       /* NFENL2           */
    uint16 NFENL3:1;                                       /* NFENL3           */
    uint16 NFENL4:1;                                       /* NFENL4           */
    uint16 :11;                                            /* Reserved Bits    */
} __type324;
typedef struct 
{                                                          /* Bit Access       */
    uint8  NFENL0:1;                                       /* NFENL0           */
    uint8  NFENL1:1;                                       /* NFENL1           */
    uint8  NFENL2:1;                                       /* NFENL2           */
    uint8  NFENL3:1;                                       /* NFENL3           */
    uint8  NFENL4:1;                                       /* NFENL4           */
    uint8  :3;                                             /* Reserved Bits    */
} __type325;
typedef struct 
{                                                          /* Bit Access       */
    uint16 NFENL0:1;                                       /* NFENL0           */
    uint16 NFENL1:1;                                       /* NFENL1           */
    uint16 NFENL2:1;                                       /* NFENL2           */
    uint16 NFENL3:1;                                       /* NFENL3           */
    uint16 NFENL4:1;                                       /* NFENL4           */
    uint16 NFENL5:1;                                       /* NFENL5           */
    uint16 NFENL6:1;                                       /* NFENL6           */
    uint16 NFENL7:1;                                       /* NFENL7           */
    uint16 :8;                                             /* Reserved Bits    */
} __type326;
typedef struct 
{                                                          /* Bit Access       */
    uint8  NFENL0:1;                                       /* NFENL0           */
    uint8  NFENL1:1;                                       /* NFENL1           */
    uint8  NFENL2:1;                                       /* NFENL2           */
    uint8  NFENL3:1;                                       /* NFENL3           */
    uint8  NFENL4:1;                                       /* NFENL4           */
    uint8  NFENL5:1;                                       /* NFENL5           */
    uint8  NFENL6:1;                                       /* NFENL6           */
    uint8  NFENL7:1;                                       /* NFENL7           */
} __type327;
typedef struct 
{                                                          /* Bit Access       */
    uint16 NFENL0:1;                                       /* NFENL0           */
    uint16 :15;                                            /* Reserved Bits    */
} __type328;
typedef struct 
{                                                          /* Bit Access       */
    uint8  NFENL0:1;                                       /* NFENL0           */
    uint8  :7;                                             /* Reserved Bits    */
} __type329;
typedef struct 
{                                                          /* Bit Access       */
    uint16 NFENL0:1;                                       /* NFENL0           */
    uint16 NFENL1:1;                                       /* NFENL1           */
    uint16 NFENL2:1;                                       /* NFENL2           */
    uint16 NFENL3:1;                                       /* NFENL3           */
    uint16 NFENL4:1;                                       /* NFENL4           */
    uint16 NFENL5:1;                                       /* NFENL5           */
    uint16 :10;                                            /* Reserved Bits    */
} __type330;
typedef struct 
{                                                          /* Bit Access       */
    uint8  NFENL0:1;                                       /* NFENL0           */
    uint8  NFENL1:1;                                       /* NFENL1           */
    uint8  NFENL2:1;                                       /* NFENL2           */
    uint8  NFENL3:1;                                       /* NFENL3           */
    uint8  NFENL4:1;                                       /* NFENL4           */
    uint8  NFENL5:1;                                       /* NFENL5           */
    uint8  :2;                                             /* Reserved Bits    */
} __type331;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR0:1;                                        /* INTR0            */
    uint8  INTF0:1;                                        /* INTF0            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  BYPS0:1;                                        /* BYPS0            */
} __type332;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR1:1;                                        /* INTR1            */
    uint8  INTF1:1;                                        /* INTF1            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  BYPS1:1;                                        /* BYPS1            */
} __type333;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR2:1;                                        /* INTR2            */
    uint8  INTF2:1;                                        /* INTF2            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  BYPS2:1;                                        /* BYPS2            */
} __type334;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR3:1;                                        /* INTR3            */
    uint8  INTF3:1;                                        /* INTF3            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  BYPS3:1;                                        /* BYPS3            */
} __type335;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR4:1;                                        /* INTR4            */
    uint8  INTF4:1;                                        /* INTF4            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  BYPS4:1;                                        /* BYPS4            */
} __type336;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR5:1;                                        /* INTR5            */
    uint8  INTF5:1;                                        /* INTF5            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  BYPS5:1;                                        /* BYPS5            */
} __type337;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR6:1;                                        /* INTR6            */
    uint8  INTF6:1;                                        /* INTF6            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  BYPS6:1;                                        /* BYPS6            */
} __type338;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR7:1;                                        /* INTR7            */
    uint8  INTF7:1;                                        /* INTF7            */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  BYPS7:1;                                        /* BYPS7            */
} __type339;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type319 BIT;                                         /* Bit Access       */
} __type1598;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type320 BIT;                                         /* Bit Access       */
} __type1599;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type321 BIT;                                         /* Bit Access       */
} __type1600;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type322 BIT;                                         /* Bit Access       */
} __type1601;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type323 BIT;                                         /* Bit Access       */
} __type1602;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type324 BIT;                                         /* Bit Access       */
} __type1603;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type325 BIT;                                         /* Bit Access       */
} __type1604;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type326 BIT;                                         /* Bit Access       */
} __type1605;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type327 BIT;                                         /* Bit Access       */
} __type1606;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type328 BIT;                                         /* Bit Access       */
} __type1607;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type329 BIT;                                         /* Bit Access       */
} __type1608;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type330 BIT;                                         /* Bit Access       */
} __type1609;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type331 BIT;                                         /* Bit Access       */
} __type1610;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type332 BIT;                                         /* Bit Access       */
} __type1611;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type333 BIT;                                         /* Bit Access       */
} __type1612;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type334 BIT;                                         /* Bit Access       */
} __type1613;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type335 BIT;                                         /* Bit Access       */
} __type1614;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type336 BIT;                                         /* Bit Access       */
} __type1615;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type337 BIT;                                         /* Bit Access       */
} __type1616;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type338 BIT;                                         /* Bit Access       */
} __type1617;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type339 BIT;                                         /* Bit Access       */
} __type1618;

typedef struct 
{                                                          /* Module           */
    __type1598 CTL;                                        /* CTL              */
    uint8  dummy173[3];                                    /* Reserved         */
    __type1599 EN;                                         /* EN               */
    uint8  dummy174[6];                                    /* Reserved         */
    __type1600 ENL;                                        /* ENL              */
} __type2567;
typedef struct 
{                                                          /* Module           */
    __type1598 CTL;                                        /* CTL              */
    uint8  dummy175[3];                                    /* Reserved         */
    __type1601 EN;                                         /* EN               */
    uint8  dummy176[6];                                    /* Reserved         */
    __type1602 ENL;                                        /* ENL              */
} __type2568;
typedef struct 
{                                                          /* Module           */
    __type1598 CTL;                                        /* CTL              */
    uint8  dummy177[3];                                    /* Reserved         */
    __type1603 EN;                                         /* EN               */
    uint8  dummy178[6];                                    /* Reserved         */
    __type1604 ENL;                                        /* ENL              */
} __type2569;
typedef struct 
{                                                          /* Module           */
    __type1598 CTL;                                        /* CTL              */
    uint8  dummy179[3];                                    /* Reserved         */
    __type1605 EN;                                         /* EN               */
    uint8  dummy180[6];                                    /* Reserved         */
    __type1606 ENL;                                        /* ENL              */
} __type2570;
typedef struct 
{                                                          /* Module           */
    __type1598 CTL;                                        /* CTL              */
    uint8  dummy181[3];                                    /* Reserved         */
    __type1607 EN;                                         /* EN               */
    uint8  dummy182[6];                                    /* Reserved         */
    __type1608 ENL;                                        /* ENL              */
} __type2571;
typedef struct 
{                                                          /* Module           */
    __type1598 CTL;                                        /* CTL              */
    uint8  dummy183[3];                                    /* Reserved         */
    __type1609 EN;                                         /* EN               */
    uint8  dummy184[6];                                    /* Reserved         */
    __type1610 ENL;                                        /* ENL              */
} __type2572;
typedef struct 
{                                                          /* Module           */
    __type1611 CTL0;                                       /* CTL0             */
} __type2573;
typedef struct 
{                                                          /* Module           */
    __type1611 CTL0;                                       /* CTL0             */
    uint8  dummy185[3];                                    /* Reserved         */
    __type1612 CTL1;                                       /* CTL1             */
    uint8  dummy186[3];                                    /* Reserved         */
    __type1613 CTL2;                                       /* CTL2             */
    uint8  dummy187[3];                                    /* Reserved         */
    __type1614 CTL3;                                       /* CTL3             */
    uint8  dummy188[3];                                    /* Reserved         */
    __type1615 CTL4;                                       /* CTL4             */
    uint8  dummy189[3];                                    /* Reserved         */
    __type1616 CTL5;                                       /* CTL5             */
    uint8  dummy190[3];                                    /* Reserved         */
    __type1617 CTL6;                                       /* CTL6             */
    uint8  dummy191[3];                                    /* Reserved         */
    __type1618 CTL7;                                       /* CTL7             */
} __type2574;
typedef struct 
{                                                          /* Module           */
    __type1611 CTL0;                                       /* CTL0             */
    uint8  dummy192[3];                                    /* Reserved         */
    __type1612 CTL1;                                       /* CTL1             */
    uint8  dummy193[3];                                    /* Reserved         */
    __type1613 CTL2;                                       /* CTL2             */
    uint8  dummy194[3];                                    /* Reserved         */
    __type1614 CTL3;                                       /* CTL3             */
    uint8  dummy195[3];                                    /* Reserved         */
    __type1615 CTL4;                                       /* CTL4             */
} __type2575;
typedef struct 
{                                                          /* Module           */
    __type1611 CTL0;                                       /* CTL0             */
    uint8  dummy196[3];                                    /* Reserved         */
    __type1612 CTL1;                                       /* CTL1             */
    uint8  dummy197[3];                                    /* Reserved         */
    __type1613 CTL2;                                       /* CTL2             */
    uint8  dummy198[3];                                    /* Reserved         */
    __type1614 CTL3;                                       /* CTL3             */
    uint8  dummy199[3];                                    /* Reserved         */
    __type1615 CTL4;                                       /* CTL4             */
    uint8  dummy200[3];                                    /* Reserved         */
    __type1616 CTL5;                                       /* CTL5             */
} __type2576;
typedef struct 
{                                                          /* Module           */
    __type1611 CTL0;                                       /* CTL0             */
    uint8  dummy201[3];                                    /* Reserved         */
    __type1612 CTL1;                                       /* CTL1             */
} __type2577;

__IOREG(DNFA0, 0xFFC30000, __READ_WRITE, __type2567);                 /* DNFA0 */
__IOREG(DNFA1, 0xFFC30100, __READ_WRITE, __type2568);                 /* DNFA1 */
__IOREG(DNFA2, 0xFFC30200, __READ_WRITE, __type2569);                 /* DNFA2 */
__IOREG(DNFA3, 0xFFC30300, __READ_WRITE, __type2568);                 /* DNFA3 */
__IOREG(DNFA4, 0xFFC30400, __READ_WRITE, __type2568);                 /* DNFA4 */
__IOREG(DNFA5, 0xFFC30500, __READ_WRITE, __type2568);                 /* DNFA5 */
__IOREG(DNFA6, 0xFFC30600, __READ_WRITE, __type2568);                 /* DNFA6 */
__IOREG(DNFA7, 0xFFC30700, __READ_WRITE, __type2568);                 /* DNFA7 */
__IOREG(DNFA8, 0xFFC30800, __READ_WRITE, __type2568);                 /* DNFA8 */
__IOREG(DNFA9, 0xFFC30900, __READ_WRITE, __type2570);                 /* DNFA9 */
__IOREG(DNFA10, 0xFFC30A00, __READ_WRITE, __type2568);                /* DNFA10 */
__IOREG(DNFA11, 0xFFC30B00, __READ_WRITE, __type2568);                /* DNFA11 */
__IOREG(DNFA12, 0xFFC30C00, __READ_WRITE, __type2568);                /* DNFA12 */
__IOREG(DNFA13, 0xFFC30D00, __READ_WRITE, __type2568);                /* DNFA13 */
__IOREG(DNFA14, 0xFFC30E00, __READ_WRITE, __type2570);                /* DNFA14 */
__IOREG(DNFA15, 0xFFC30F00, __READ_WRITE, __type2568);                /* DNFA15 */
__IOREG(DNFA16, 0xFFC31000, __READ_WRITE, __type2568);                /* DNFA16 */
__IOREG(DNFA17, 0xFFC31100, __READ_WRITE, __type2568);                /* DNFA17 */
__IOREG(DNFA18, 0xFFC31200, __READ_WRITE, __type2568);                /* DNFA18 */
__IOREG(DNFA19, 0xFFC31300, __READ_WRITE, __type2570);                /* DNFA19 */
__IOREG(DNFA20, 0xFFC31400, __READ_WRITE, __type2571);                /* DNFA20 */
__IOREG(DNFA21, 0xFFC31500, __READ_WRITE, __type2571);                /* DNFA21 */
__IOREG(DNFA22, 0xFFC31600, __READ_WRITE, __type2571);                /* DNFA22 */
__IOREG(DNFA23, 0xFFC31700, __READ_WRITE, __type2571);                /* DNFA23 */
__IOREG(DNFA24, 0xFFC31800, __READ_WRITE, __type2571);                /* DNFA24 */
__IOREG(DNFA25, 0xFFC31900, __READ_WRITE, __type2571);                /* DNFA25 */
__IOREG(DNFA26, 0xFFC31A00, __READ_WRITE, __type2571);                /* DNFA26 */
__IOREG(DNFA27, 0xFFC31B00, __READ_WRITE, __type2571);                /* DNFA27 */
__IOREG(DNFA28, 0xFFC31C00, __READ_WRITE, __type2571);                /* DNFA28 */
__IOREG(DNFA29, 0xFFC31D00, __READ_WRITE, __type2571);                /* DNFA29 */
__IOREG(DNFA30, 0xFFC31E00, __READ_WRITE, __type2571);                /* DNFA30 */
__IOREG(DNFA31, 0xFFC31F00, __READ_WRITE, __type2571);                /* DNFA31 */
__IOREG(DNFA32, 0xFFC32000, __READ_WRITE, __type2568);                /* DNFA32 */
__IOREG(DNFA33, 0xFFC32100, __READ_WRITE, __type2571);                /* DNFA33 */
__IOREG(DNFA34, 0xFFC32200, __READ_WRITE, __type2571);                /* DNFA34 */
__IOREG(DNFA35, 0xFFC32300, __READ_WRITE, __type2568);                /* DNFA35 */
__IOREG(DNFA36, 0xFFC32400, __READ_WRITE, __type2571);                /* DNFA36 */
__IOREG(DNFA37, 0xFFC32500, __READ_WRITE, __type2571);                /* DNFA37 */
__IOREG(DNFA38, 0xFFC32600, __READ_WRITE, __type2568);                /* DNFA38 */
__IOREG(DNFA39, 0xFFC32700, __READ_WRITE, __type2568);                /* DNFA39 */
__IOREG(DNFA40, 0xFFC32800, __READ_WRITE, __type2569);                /* DNFA40 */
__IOREG(DNFA41, 0xFFC32900, __READ_WRITE, __type2568);                /* DNFA41 */
__IOREG(DNFA42, 0xFFC32A00, __READ_WRITE, __type2572);                /* DNFA42 */
__IOREG(DNFA43, 0xFFC32B00, __READ_WRITE, __type2568);                /* DNFA43 */
__IOREG(FCLA0, 0xFFC34000, __READ_WRITE, __type2573);                 /* FCLA0 */
__IOREG(FCLA1, 0xFFC34020, __READ_WRITE, __type2574);                 /* FCLA1 */
__IOREG(FCLA2, 0xFFC34040, __READ_WRITE, __type2575);                 /* FCLA2 */
__IOREG(FCLA3, 0xFFC34060, __READ_WRITE, __type2576);                 /* FCLA3 */
__IOREG(FCLA4, 0xFFC34080, __READ_WRITE, __type2577);                 /* FCLA4 */

#define DNFA0CTL DNFA0.CTL.UINT8
#define DNFA0PRS DNFA0.CTL.BIT.PRS
#define DNFA0NFSTS DNFA0.CTL.BIT.NFSTS
#define DNFA0EN DNFA0.EN.UINT16
#define DNFA0NFENL0 DNFA0.EN.BIT.NFENL0
#define DNFA0NFENL1 DNFA0.EN.BIT.NFENL1
#define DNFA0NFENL2 DNFA0.EN.BIT.NFENL2
#define DNFA0ENL DNFA0.ENL.UINT8
#define DNFA1CTL DNFA1.CTL.UINT8
#define DNFA1PRS DNFA1.CTL.BIT.PRS
#define DNFA1NFSTS DNFA1.CTL.BIT.NFSTS
#define DNFA1EN DNFA1.EN.UINT16
#define DNFA1NFENL0 DNFA1.EN.BIT.NFENL0
#define DNFA1NFENL1 DNFA1.EN.BIT.NFENL1
#define DNFA1ENL DNFA1.ENL.UINT8
#define DNFA2CTL DNFA2.CTL.UINT8
#define DNFA2PRS DNFA2.CTL.BIT.PRS
#define DNFA2NFSTS DNFA2.CTL.BIT.NFSTS
#define DNFA2EN DNFA2.EN.UINT16
#define DNFA2NFENL0 DNFA2.EN.BIT.NFENL0
#define DNFA2NFENL1 DNFA2.EN.BIT.NFENL1
#define DNFA2NFENL2 DNFA2.EN.BIT.NFENL2
#define DNFA2NFENL3 DNFA2.EN.BIT.NFENL3
#define DNFA2NFENL4 DNFA2.EN.BIT.NFENL4
#define DNFA2ENL DNFA2.ENL.UINT8
#define DNFA3CTL DNFA3.CTL.UINT8
#define DNFA3PRS DNFA3.CTL.BIT.PRS
#define DNFA3NFSTS DNFA3.CTL.BIT.NFSTS
#define DNFA3EN DNFA3.EN.UINT16
#define DNFA3NFENL0 DNFA3.EN.BIT.NFENL0
#define DNFA3NFENL1 DNFA3.EN.BIT.NFENL1
#define DNFA3ENL DNFA3.ENL.UINT8
#define DNFA4CTL DNFA4.CTL.UINT8
#define DNFA4PRS DNFA4.CTL.BIT.PRS
#define DNFA4NFSTS DNFA4.CTL.BIT.NFSTS
#define DNFA4EN DNFA4.EN.UINT16
#define DNFA4NFENL0 DNFA4.EN.BIT.NFENL0
#define DNFA4NFENL1 DNFA4.EN.BIT.NFENL1
#define DNFA4ENL DNFA4.ENL.UINT8
#define DNFA5CTL DNFA5.CTL.UINT8
#define DNFA5PRS DNFA5.CTL.BIT.PRS
#define DNFA5NFSTS DNFA5.CTL.BIT.NFSTS
#define DNFA5EN DNFA5.EN.UINT16
#define DNFA5NFENL0 DNFA5.EN.BIT.NFENL0
#define DNFA5NFENL1 DNFA5.EN.BIT.NFENL1
#define DNFA5ENL DNFA5.ENL.UINT8
#define DNFA6CTL DNFA6.CTL.UINT8
#define DNFA6PRS DNFA6.CTL.BIT.PRS
#define DNFA6NFSTS DNFA6.CTL.BIT.NFSTS
#define DNFA6EN DNFA6.EN.UINT16
#define DNFA6NFENL0 DNFA6.EN.BIT.NFENL0
#define DNFA6NFENL1 DNFA6.EN.BIT.NFENL1
#define DNFA6ENL DNFA6.ENL.UINT8
#define DNFA7CTL DNFA7.CTL.UINT8
#define DNFA7PRS DNFA7.CTL.BIT.PRS
#define DNFA7NFSTS DNFA7.CTL.BIT.NFSTS
#define DNFA7EN DNFA7.EN.UINT16
#define DNFA7NFENL0 DNFA7.EN.BIT.NFENL0
#define DNFA7NFENL1 DNFA7.EN.BIT.NFENL1
#define DNFA7ENL DNFA7.ENL.UINT8
#define DNFA8CTL DNFA8.CTL.UINT8
#define DNFA8PRS DNFA8.CTL.BIT.PRS
#define DNFA8NFSTS DNFA8.CTL.BIT.NFSTS
#define DNFA8EN DNFA8.EN.UINT16
#define DNFA8NFENL0 DNFA8.EN.BIT.NFENL0
#define DNFA8NFENL1 DNFA8.EN.BIT.NFENL1
#define DNFA8ENL DNFA8.ENL.UINT8
#define DNFA9CTL DNFA9.CTL.UINT8
#define DNFA9PRS DNFA9.CTL.BIT.PRS
#define DNFA9NFSTS DNFA9.CTL.BIT.NFSTS
#define DNFA9EN DNFA9.EN.UINT16
#define DNFA9NFENL0 DNFA9.EN.BIT.NFENL0
#define DNFA9NFENL1 DNFA9.EN.BIT.NFENL1
#define DNFA9NFENL2 DNFA9.EN.BIT.NFENL2
#define DNFA9NFENL3 DNFA9.EN.BIT.NFENL3
#define DNFA9NFENL4 DNFA9.EN.BIT.NFENL4
#define DNFA9NFENL5 DNFA9.EN.BIT.NFENL5
#define DNFA9NFENL6 DNFA9.EN.BIT.NFENL6
#define DNFA9NFENL7 DNFA9.EN.BIT.NFENL7
#define DNFA9ENL DNFA9.ENL.UINT8
#define DNFA10CTL DNFA10.CTL.UINT8
#define DNFA10PRS DNFA10.CTL.BIT.PRS
#define DNFA10NFSTS DNFA10.CTL.BIT.NFSTS
#define DNFA10EN DNFA10.EN.UINT16
#define DNFA10NFENL0 DNFA10.EN.BIT.NFENL0
#define DNFA10NFENL1 DNFA10.EN.BIT.NFENL1
#define DNFA10ENL DNFA10.ENL.UINT8
#define DNFA11CTL DNFA11.CTL.UINT8
#define DNFA11PRS DNFA11.CTL.BIT.PRS
#define DNFA11NFSTS DNFA11.CTL.BIT.NFSTS
#define DNFA11EN DNFA11.EN.UINT16
#define DNFA11NFENL0 DNFA11.EN.BIT.NFENL0
#define DNFA11NFENL1 DNFA11.EN.BIT.NFENL1
#define DNFA11ENL DNFA11.ENL.UINT8
#define DNFA12CTL DNFA12.CTL.UINT8
#define DNFA12PRS DNFA12.CTL.BIT.PRS
#define DNFA12NFSTS DNFA12.CTL.BIT.NFSTS
#define DNFA12EN DNFA12.EN.UINT16
#define DNFA12NFENL0 DNFA12.EN.BIT.NFENL0
#define DNFA12NFENL1 DNFA12.EN.BIT.NFENL1
#define DNFA12ENL DNFA12.ENL.UINT8
#define DNFA13CTL DNFA13.CTL.UINT8
#define DNFA13PRS DNFA13.CTL.BIT.PRS
#define DNFA13NFSTS DNFA13.CTL.BIT.NFSTS
#define DNFA13EN DNFA13.EN.UINT16
#define DNFA13NFENL0 DNFA13.EN.BIT.NFENL0
#define DNFA13NFENL1 DNFA13.EN.BIT.NFENL1
#define DNFA13ENL DNFA13.ENL.UINT8
#define DNFA14CTL DNFA14.CTL.UINT8
#define DNFA14PRS DNFA14.CTL.BIT.PRS
#define DNFA14NFSTS DNFA14.CTL.BIT.NFSTS
#define DNFA14EN DNFA14.EN.UINT16
#define DNFA14NFENL0 DNFA14.EN.BIT.NFENL0
#define DNFA14NFENL1 DNFA14.EN.BIT.NFENL1
#define DNFA14NFENL2 DNFA14.EN.BIT.NFENL2
#define DNFA14NFENL3 DNFA14.EN.BIT.NFENL3
#define DNFA14NFENL4 DNFA14.EN.BIT.NFENL4
#define DNFA14NFENL5 DNFA14.EN.BIT.NFENL5
#define DNFA14NFENL6 DNFA14.EN.BIT.NFENL6
#define DNFA14NFENL7 DNFA14.EN.BIT.NFENL7
#define DNFA14ENL DNFA14.ENL.UINT8
#define DNFA15CTL DNFA15.CTL.UINT8
#define DNFA15PRS DNFA15.CTL.BIT.PRS
#define DNFA15NFSTS DNFA15.CTL.BIT.NFSTS
#define DNFA15EN DNFA15.EN.UINT16
#define DNFA15NFENL0 DNFA15.EN.BIT.NFENL0
#define DNFA15NFENL1 DNFA15.EN.BIT.NFENL1
#define DNFA15ENL DNFA15.ENL.UINT8
#define DNFA16CTL DNFA16.CTL.UINT8
#define DNFA16PRS DNFA16.CTL.BIT.PRS
#define DNFA16NFSTS DNFA16.CTL.BIT.NFSTS
#define DNFA16EN DNFA16.EN.UINT16
#define DNFA16NFENL0 DNFA16.EN.BIT.NFENL0
#define DNFA16NFENL1 DNFA16.EN.BIT.NFENL1
#define DNFA16ENL DNFA16.ENL.UINT8
#define DNFA17CTL DNFA17.CTL.UINT8
#define DNFA17PRS DNFA17.CTL.BIT.PRS
#define DNFA17NFSTS DNFA17.CTL.BIT.NFSTS
#define DNFA17EN DNFA17.EN.UINT16
#define DNFA17NFENL0 DNFA17.EN.BIT.NFENL0
#define DNFA17NFENL1 DNFA17.EN.BIT.NFENL1
#define DNFA17ENL DNFA17.ENL.UINT8
#define DNFA18CTL DNFA18.CTL.UINT8
#define DNFA18PRS DNFA18.CTL.BIT.PRS
#define DNFA18NFSTS DNFA18.CTL.BIT.NFSTS
#define DNFA18EN DNFA18.EN.UINT16
#define DNFA18NFENL0 DNFA18.EN.BIT.NFENL0
#define DNFA18NFENL1 DNFA18.EN.BIT.NFENL1
#define DNFA18ENL DNFA18.ENL.UINT8
#define DNFA19CTL DNFA19.CTL.UINT8
#define DNFA19PRS DNFA19.CTL.BIT.PRS
#define DNFA19NFSTS DNFA19.CTL.BIT.NFSTS
#define DNFA19EN DNFA19.EN.UINT16
#define DNFA19NFENL0 DNFA19.EN.BIT.NFENL0
#define DNFA19NFENL1 DNFA19.EN.BIT.NFENL1
#define DNFA19NFENL2 DNFA19.EN.BIT.NFENL2
#define DNFA19NFENL3 DNFA19.EN.BIT.NFENL3
#define DNFA19NFENL4 DNFA19.EN.BIT.NFENL4
#define DNFA19NFENL5 DNFA19.EN.BIT.NFENL5
#define DNFA19NFENL6 DNFA19.EN.BIT.NFENL6
#define DNFA19NFENL7 DNFA19.EN.BIT.NFENL7
#define DNFA19ENL DNFA19.ENL.UINT8
#define DNFA20CTL DNFA20.CTL.UINT8
#define DNFA20PRS DNFA20.CTL.BIT.PRS
#define DNFA20NFSTS DNFA20.CTL.BIT.NFSTS
#define DNFA20EN DNFA20.EN.UINT16
#define DNFA20NFENL0 DNFA20.EN.BIT.NFENL0
#define DNFA20ENL DNFA20.ENL.UINT8
#define DNFA21CTL DNFA21.CTL.UINT8
#define DNFA21PRS DNFA21.CTL.BIT.PRS
#define DNFA21NFSTS DNFA21.CTL.BIT.NFSTS
#define DNFA21EN DNFA21.EN.UINT16
#define DNFA21NFENL0 DNFA21.EN.BIT.NFENL0
#define DNFA21ENL DNFA21.ENL.UINT8
#define DNFA22CTL DNFA22.CTL.UINT8
#define DNFA22PRS DNFA22.CTL.BIT.PRS
#define DNFA22NFSTS DNFA22.CTL.BIT.NFSTS
#define DNFA22EN DNFA22.EN.UINT16
#define DNFA22NFENL0 DNFA22.EN.BIT.NFENL0
#define DNFA22ENL DNFA22.ENL.UINT8
#define DNFA23CTL DNFA23.CTL.UINT8
#define DNFA23PRS DNFA23.CTL.BIT.PRS
#define DNFA23NFSTS DNFA23.CTL.BIT.NFSTS
#define DNFA23EN DNFA23.EN.UINT16
#define DNFA23NFENL0 DNFA23.EN.BIT.NFENL0
#define DNFA23ENL DNFA23.ENL.UINT8
#define DNFA24CTL DNFA24.CTL.UINT8
#define DNFA24PRS DNFA24.CTL.BIT.PRS
#define DNFA24NFSTS DNFA24.CTL.BIT.NFSTS
#define DNFA24EN DNFA24.EN.UINT16
#define DNFA24NFENL0 DNFA24.EN.BIT.NFENL0
#define DNFA24ENL DNFA24.ENL.UINT8
#define DNFA25CTL DNFA25.CTL.UINT8
#define DNFA25PRS DNFA25.CTL.BIT.PRS
#define DNFA25NFSTS DNFA25.CTL.BIT.NFSTS
#define DNFA25EN DNFA25.EN.UINT16
#define DNFA25NFENL0 DNFA25.EN.BIT.NFENL0
#define DNFA25ENL DNFA25.ENL.UINT8
#define DNFA26CTL DNFA26.CTL.UINT8
#define DNFA26PRS DNFA26.CTL.BIT.PRS
#define DNFA26NFSTS DNFA26.CTL.BIT.NFSTS
#define DNFA26EN DNFA26.EN.UINT16
#define DNFA26NFENL0 DNFA26.EN.BIT.NFENL0
#define DNFA26ENL DNFA26.ENL.UINT8
#define DNFA27CTL DNFA27.CTL.UINT8
#define DNFA27PRS DNFA27.CTL.BIT.PRS
#define DNFA27NFSTS DNFA27.CTL.BIT.NFSTS
#define DNFA27EN DNFA27.EN.UINT16
#define DNFA27NFENL0 DNFA27.EN.BIT.NFENL0
#define DNFA27ENL DNFA27.ENL.UINT8
#define DNFA28CTL DNFA28.CTL.UINT8
#define DNFA28PRS DNFA28.CTL.BIT.PRS
#define DNFA28NFSTS DNFA28.CTL.BIT.NFSTS
#define DNFA28EN DNFA28.EN.UINT16
#define DNFA28NFENL0 DNFA28.EN.BIT.NFENL0
#define DNFA28ENL DNFA28.ENL.UINT8
#define DNFA29CTL DNFA29.CTL.UINT8
#define DNFA29PRS DNFA29.CTL.BIT.PRS
#define DNFA29NFSTS DNFA29.CTL.BIT.NFSTS
#define DNFA29EN DNFA29.EN.UINT16
#define DNFA29NFENL0 DNFA29.EN.BIT.NFENL0
#define DNFA29ENL DNFA29.ENL.UINT8
#define DNFA30CTL DNFA30.CTL.UINT8
#define DNFA30PRS DNFA30.CTL.BIT.PRS
#define DNFA30NFSTS DNFA30.CTL.BIT.NFSTS
#define DNFA30EN DNFA30.EN.UINT16
#define DNFA30NFENL0 DNFA30.EN.BIT.NFENL0
#define DNFA30ENL DNFA30.ENL.UINT8
#define DNFA31CTL DNFA31.CTL.UINT8
#define DNFA31PRS DNFA31.CTL.BIT.PRS
#define DNFA31NFSTS DNFA31.CTL.BIT.NFSTS
#define DNFA31EN DNFA31.EN.UINT16
#define DNFA31NFENL0 DNFA31.EN.BIT.NFENL0
#define DNFA31ENL DNFA31.ENL.UINT8
#define DNFA32CTL DNFA32.CTL.UINT8
#define DNFA32PRS DNFA32.CTL.BIT.PRS
#define DNFA32NFSTS DNFA32.CTL.BIT.NFSTS
#define DNFA32EN DNFA32.EN.UINT16
#define DNFA32NFENL0 DNFA32.EN.BIT.NFENL0
#define DNFA32NFENL1 DNFA32.EN.BIT.NFENL1
#define DNFA32ENL DNFA32.ENL.UINT8
#define DNFA33CTL DNFA33.CTL.UINT8
#define DNFA33PRS DNFA33.CTL.BIT.PRS
#define DNFA33NFSTS DNFA33.CTL.BIT.NFSTS
#define DNFA33EN DNFA33.EN.UINT16
#define DNFA33NFENL0 DNFA33.EN.BIT.NFENL0
#define DNFA33ENL DNFA33.ENL.UINT8
#define DNFA34CTL DNFA34.CTL.UINT8
#define DNFA34PRS DNFA34.CTL.BIT.PRS
#define DNFA34NFSTS DNFA34.CTL.BIT.NFSTS
#define DNFA34EN DNFA34.EN.UINT16
#define DNFA34NFENL0 DNFA34.EN.BIT.NFENL0
#define DNFA34ENL DNFA34.ENL.UINT8
#define DNFA35CTL DNFA35.CTL.UINT8
#define DNFA35PRS DNFA35.CTL.BIT.PRS
#define DNFA35NFSTS DNFA35.CTL.BIT.NFSTS
#define DNFA35EN DNFA35.EN.UINT16
#define DNFA35NFENL0 DNFA35.EN.BIT.NFENL0
#define DNFA35NFENL1 DNFA35.EN.BIT.NFENL1
#define DNFA35ENL DNFA35.ENL.UINT8
#define DNFA36CTL DNFA36.CTL.UINT8
#define DNFA36PRS DNFA36.CTL.BIT.PRS
#define DNFA36NFSTS DNFA36.CTL.BIT.NFSTS
#define DNFA36EN DNFA36.EN.UINT16
#define DNFA36NFENL0 DNFA36.EN.BIT.NFENL0
#define DNFA36ENL DNFA36.ENL.UINT8
#define DNFA37CTL DNFA37.CTL.UINT8
#define DNFA37PRS DNFA37.CTL.BIT.PRS
#define DNFA37NFSTS DNFA37.CTL.BIT.NFSTS
#define DNFA37EN DNFA37.EN.UINT16
#define DNFA37NFENL0 DNFA37.EN.BIT.NFENL0
#define DNFA37ENL DNFA37.ENL.UINT8
#define DNFA38CTL DNFA38.CTL.UINT8
#define DNFA38PRS DNFA38.CTL.BIT.PRS
#define DNFA38NFSTS DNFA38.CTL.BIT.NFSTS
#define DNFA38EN DNFA38.EN.UINT16
#define DNFA38NFENL0 DNFA38.EN.BIT.NFENL0
#define DNFA38NFENL1 DNFA38.EN.BIT.NFENL1
#define DNFA38ENL DNFA38.ENL.UINT8
#define DNFA39CTL DNFA39.CTL.UINT8
#define DNFA39PRS DNFA39.CTL.BIT.PRS
#define DNFA39NFSTS DNFA39.CTL.BIT.NFSTS
#define DNFA39EN DNFA39.EN.UINT16
#define DNFA39NFENL0 DNFA39.EN.BIT.NFENL0
#define DNFA39NFENL1 DNFA39.EN.BIT.NFENL1
#define DNFA39ENL DNFA39.ENL.UINT8
#define DNFA40CTL DNFA40.CTL.UINT8
#define DNFA40PRS DNFA40.CTL.BIT.PRS
#define DNFA40NFSTS DNFA40.CTL.BIT.NFSTS
#define DNFA40EN DNFA40.EN.UINT16
#define DNFA40NFENL0 DNFA40.EN.BIT.NFENL0
#define DNFA40NFENL1 DNFA40.EN.BIT.NFENL1
#define DNFA40NFENL2 DNFA40.EN.BIT.NFENL2
#define DNFA40NFENL3 DNFA40.EN.BIT.NFENL3
#define DNFA40NFENL4 DNFA40.EN.BIT.NFENL4
#define DNFA40ENL DNFA40.ENL.UINT8
#define DNFA41CTL DNFA41.CTL.UINT8
#define DNFA41PRS DNFA41.CTL.BIT.PRS
#define DNFA41NFSTS DNFA41.CTL.BIT.NFSTS
#define DNFA41EN DNFA41.EN.UINT16
#define DNFA41NFENL0 DNFA41.EN.BIT.NFENL0
#define DNFA41NFENL1 DNFA41.EN.BIT.NFENL1
#define DNFA41ENL DNFA41.ENL.UINT8
#define DNFA42CTL DNFA42.CTL.UINT8
#define DNFA42PRS DNFA42.CTL.BIT.PRS
#define DNFA42NFSTS DNFA42.CTL.BIT.NFSTS
#define DNFA42EN DNFA42.EN.UINT16
#define DNFA42NFENL0 DNFA42.EN.BIT.NFENL0
#define DNFA42NFENL1 DNFA42.EN.BIT.NFENL1
#define DNFA42NFENL2 DNFA42.EN.BIT.NFENL2
#define DNFA42NFENL3 DNFA42.EN.BIT.NFENL3
#define DNFA42NFENL4 DNFA42.EN.BIT.NFENL4
#define DNFA42NFENL5 DNFA42.EN.BIT.NFENL5
#define DNFA42ENL DNFA42.ENL.UINT8
#define DNFA43CTL DNFA43.CTL.UINT8
#define DNFA43PRS DNFA43.CTL.BIT.PRS
#define DNFA43NFSTS DNFA43.CTL.BIT.NFSTS
#define DNFA43EN DNFA43.EN.UINT16
#define DNFA43NFENL0 DNFA43.EN.BIT.NFENL0
#define DNFA43NFENL1 DNFA43.EN.BIT.NFENL1
#define DNFA43ENL DNFA43.ENL.UINT8
#define FCLA0CTL0 FCLA0.CTL0.UINT8
#define FCLA0INTR0 FCLA0.CTL0.BIT.INTR0
#define FCLA0INTF0 FCLA0.CTL0.BIT.INTF0
#define FCLA0BYPS0 FCLA0.CTL0.BIT.BYPS0
#define FCLA1CTL0 FCLA1.CTL0.UINT8
#define FCLA1INTR0 FCLA1.CTL0.BIT.INTR0
#define FCLA1INTF0 FCLA1.CTL0.BIT.INTF0
#define FCLA1BYPS0 FCLA1.CTL0.BIT.BYPS0
#define FCLA1CTL1 FCLA1.CTL1.UINT8
#define FCLA1INTR1 FCLA1.CTL1.BIT.INTR1
#define FCLA1INTF1 FCLA1.CTL1.BIT.INTF1
#define FCLA1BYPS1 FCLA1.CTL1.BIT.BYPS1
#define FCLA1CTL2 FCLA1.CTL2.UINT8
#define FCLA1INTR2 FCLA1.CTL2.BIT.INTR2
#define FCLA1INTF2 FCLA1.CTL2.BIT.INTF2
#define FCLA1BYPS2 FCLA1.CTL2.BIT.BYPS2
#define FCLA1CTL3 FCLA1.CTL3.UINT8
#define FCLA1INTR3 FCLA1.CTL3.BIT.INTR3
#define FCLA1INTF3 FCLA1.CTL3.BIT.INTF3
#define FCLA1BYPS3 FCLA1.CTL3.BIT.BYPS3
#define FCLA1CTL4 FCLA1.CTL4.UINT8
#define FCLA1INTR4 FCLA1.CTL4.BIT.INTR4
#define FCLA1INTF4 FCLA1.CTL4.BIT.INTF4
#define FCLA1BYPS4 FCLA1.CTL4.BIT.BYPS4
#define FCLA1CTL5 FCLA1.CTL5.UINT8
#define FCLA1INTR5 FCLA1.CTL5.BIT.INTR5
#define FCLA1INTF5 FCLA1.CTL5.BIT.INTF5
#define FCLA1BYPS5 FCLA1.CTL5.BIT.BYPS5
#define FCLA1CTL6 FCLA1.CTL6.UINT8
#define FCLA1INTR6 FCLA1.CTL6.BIT.INTR6
#define FCLA1INTF6 FCLA1.CTL6.BIT.INTF6
#define FCLA1BYPS6 FCLA1.CTL6.BIT.BYPS6
#define FCLA1CTL7 FCLA1.CTL7.UINT8
#define FCLA1INTR7 FCLA1.CTL7.BIT.INTR7
#define FCLA1INTF7 FCLA1.CTL7.BIT.INTF7
#define FCLA1BYPS7 FCLA1.CTL7.BIT.BYPS7
#define FCLA2CTL0 FCLA2.CTL0.UINT8
#define FCLA2INTR0 FCLA2.CTL0.BIT.INTR0
#define FCLA2INTF0 FCLA2.CTL0.BIT.INTF0
#define FCLA2BYPS0 FCLA2.CTL0.BIT.BYPS0
#define FCLA2CTL1 FCLA2.CTL1.UINT8
#define FCLA2INTR1 FCLA2.CTL1.BIT.INTR1
#define FCLA2INTF1 FCLA2.CTL1.BIT.INTF1
#define FCLA2BYPS1 FCLA2.CTL1.BIT.BYPS1
#define FCLA2CTL2 FCLA2.CTL2.UINT8
#define FCLA2INTR2 FCLA2.CTL2.BIT.INTR2
#define FCLA2INTF2 FCLA2.CTL2.BIT.INTF2
#define FCLA2BYPS2 FCLA2.CTL2.BIT.BYPS2
#define FCLA2CTL3 FCLA2.CTL3.UINT8
#define FCLA2INTR3 FCLA2.CTL3.BIT.INTR3
#define FCLA2INTF3 FCLA2.CTL3.BIT.INTF3
#define FCLA2BYPS3 FCLA2.CTL3.BIT.BYPS3
#define FCLA2CTL4 FCLA2.CTL4.UINT8
#define FCLA2INTR4 FCLA2.CTL4.BIT.INTR4
#define FCLA2INTF4 FCLA2.CTL4.BIT.INTF4
#define FCLA2BYPS4 FCLA2.CTL4.BIT.BYPS4
#define FCLA3CTL0 FCLA3.CTL0.UINT8
#define FCLA3INTR0 FCLA3.CTL0.BIT.INTR0
#define FCLA3INTF0 FCLA3.CTL0.BIT.INTF0
#define FCLA3BYPS0 FCLA3.CTL0.BIT.BYPS0
#define FCLA3CTL1 FCLA3.CTL1.UINT8
#define FCLA3INTR1 FCLA3.CTL1.BIT.INTR1
#define FCLA3INTF1 FCLA3.CTL1.BIT.INTF1
#define FCLA3BYPS1 FCLA3.CTL1.BIT.BYPS1
#define FCLA3CTL2 FCLA3.CTL2.UINT8
#define FCLA3INTR2 FCLA3.CTL2.BIT.INTR2
#define FCLA3INTF2 FCLA3.CTL2.BIT.INTF2
#define FCLA3BYPS2 FCLA3.CTL2.BIT.BYPS2
#define FCLA3CTL3 FCLA3.CTL3.UINT8
#define FCLA3INTR3 FCLA3.CTL3.BIT.INTR3
#define FCLA3INTF3 FCLA3.CTL3.BIT.INTF3
#define FCLA3BYPS3 FCLA3.CTL3.BIT.BYPS3
#define FCLA3CTL4 FCLA3.CTL4.UINT8
#define FCLA3INTR4 FCLA3.CTL4.BIT.INTR4
#define FCLA3INTF4 FCLA3.CTL4.BIT.INTF4
#define FCLA3BYPS4 FCLA3.CTL4.BIT.BYPS4
#define FCLA3CTL5 FCLA3.CTL5.UINT8
#define FCLA3INTR5 FCLA3.CTL5.BIT.INTR5
#define FCLA3INTF5 FCLA3.CTL5.BIT.INTF5
#define FCLA3BYPS5 FCLA3.CTL5.BIT.BYPS5
#define FCLA4CTL0 FCLA4.CTL0.UINT8
#define FCLA4INTR0 FCLA4.CTL0.BIT.INTR0
#define FCLA4INTF0 FCLA4.CTL0.BIT.INTF0
#define FCLA4BYPS0 FCLA4.CTL0.BIT.BYPS0
#define FCLA4CTL1 FCLA4.CTL1.UINT8
#define FCLA4INTR1 FCLA4.CTL1.BIT.INTR1
#define FCLA4INTF1 FCLA4.CTL1.BIT.INTF1
#define FCLA4BYPS1 FCLA4.CTL1.BIT.BYPS1

#endif
