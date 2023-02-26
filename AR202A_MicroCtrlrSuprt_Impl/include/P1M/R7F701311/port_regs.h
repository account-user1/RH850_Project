/**********************************************************************************************************************
* Module File Name  : port_regs.h
* Module Description: Port/Pin Registers
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

#ifndef PORT_REGS_H
#define PORT_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint16 P0_0:1;                                         /* P0_0             */
    uint16 P0_1:1;                                         /* P0_1             */
    uint16 P0_2:1;                                         /* P0_2             */
    uint16 P0_3:1;                                         /* P0_3             */
    uint16 P0_4:1;                                         /* P0_4             */
    uint16 P0_5:1;                                         /* P0_5             */
    uint16 P0_6:1;                                         /* P0_6             */
    uint16 P0_7:1;                                         /* P0_7             */
    uint16 P0_8:1;                                         /* P0_8             */
    uint16 P0_9:1;                                         /* P0_9             */
    uint16 P0_10:1;                                        /* P0_10            */
    uint16 P0_11:1;                                        /* P0_11            */
    uint16 P0_12:1;                                        /* P0_12            */
    uint16 P0_13:1;                                        /* P0_13            */
    uint16 P0_14:1;                                        /* P0_14            */
    uint16 :1;                                             /* Reserved Bits    */
} __type142;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PSR0_0:1;                                       /* PSR0_0           */
    uint32 PSR0_1:1;                                       /* PSR0_1           */
    uint32 PSR0_2:1;                                       /* PSR0_2           */
    uint32 PSR0_3:1;                                       /* PSR0_3           */
    uint32 PSR0_4:1;                                       /* PSR0_4           */
    uint32 PSR0_5:1;                                       /* PSR0_5           */
    uint32 PSR0_6:1;                                       /* PSR0_6           */
    uint32 PSR0_7:1;                                       /* PSR0_7           */
    uint32 PSR0_8:1;                                       /* PSR0_8           */
    uint32 PSR0_9:1;                                       /* PSR0_9           */
    uint32 PSR0_10:1;                                      /* PSR0_10          */
    uint32 PSR0_11:1;                                      /* PSR0_11          */
    uint32 PSR0_12:1;                                      /* PSR0_12          */
    uint32 PSR0_13:1;                                      /* PSR0_13          */
    uint32 PSR0_14:1;                                      /* PSR0_14          */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PSR0_16:1;                                      /* PSR0_16          */
    uint32 PSR0_17:1;                                      /* PSR0_17          */
    uint32 PSR0_18:1;                                      /* PSR0_18          */
    uint32 PSR0_19:1;                                      /* PSR0_19          */
    uint32 PSR0_20:1;                                      /* PSR0_20          */
    uint32 PSR0_21:1;                                      /* PSR0_21          */
    uint32 PSR0_22:1;                                      /* PSR0_22          */
    uint32 PSR0_23:1;                                      /* PSR0_23          */
    uint32 PSR0_24:1;                                      /* PSR0_24          */
    uint32 PSR0_25:1;                                      /* PSR0_25          */
    uint32 PSR0_26:1;                                      /* PSR0_26          */
    uint32 PSR0_27:1;                                      /* PSR0_27          */
    uint32 PSR0_28:1;                                      /* PSR0_28          */
    uint32 PSR0_29:1;                                      /* PSR0_29          */
    uint32 PSR0_30:1;                                      /* PSR0_30          */
    uint32 :1;                                             /* Reserved Bits    */
} __type143;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PNOT0_0:1;                                      /* PNOT0_0          */
    uint16 PNOT0_1:1;                                      /* PNOT0_1          */
    uint16 PNOT0_2:1;                                      /* PNOT0_2          */
    uint16 PNOT0_3:1;                                      /* PNOT0_3          */
    uint16 PNOT0_4:1;                                      /* PNOT0_4          */
    uint16 PNOT0_5:1;                                      /* PNOT0_5          */
    uint16 PNOT0_6:1;                                      /* PNOT0_6          */
    uint16 PNOT0_7:1;                                      /* PNOT0_7          */
    uint16 PNOT0_8:1;                                      /* PNOT0_8          */
    uint16 PNOT0_9:1;                                      /* PNOT0_9          */
    uint16 PNOT0_10:1;                                     /* PNOT0_10         */
    uint16 PNOT0_11:1;                                     /* PNOT0_11         */
    uint16 PNOT0_12:1;                                     /* PNOT0_12         */
    uint16 PNOT0_13:1;                                     /* PNOT0_13         */
    uint16 PNOT0_14:1;                                     /* PNOT0_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type144;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 PPR0_0:1;                                 /* PPR0_0           */
    const uint16 PPR0_1:1;                                 /* PPR0_1           */
    const uint16 PPR0_2:1;                                 /* PPR0_2           */
    const uint16 PPR0_3:1;                                 /* PPR0_3           */
    const uint16 PPR0_4:1;                                 /* PPR0_4           */
    const uint16 PPR0_5:1;                                 /* PPR0_5           */
    const uint16 PPR0_6:1;                                 /* PPR0_6           */
    const uint16 PPR0_7:1;                                 /* PPR0_7           */
    const uint16 PPR0_8:1;                                 /* PPR0_8           */
    const uint16 PPR0_9:1;                                 /* PPR0_9           */
    const uint16 PPR0_10:1;                                /* PPR0_10          */
    const uint16 PPR0_11:1;                                /* PPR0_11          */
    const uint16 PPR0_12:1;                                /* PPR0_12          */
    const uint16 PPR0_13:1;                                /* PPR0_13          */
    const uint16 PPR0_14:1;                                /* PPR0_14          */
    uint16 :1;                                             /* Reserved Bits    */
} __type145;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PM0_0:1;                                        /* PM0_0            */
    uint16 PM0_1:1;                                        /* PM0_1            */
    uint16 PM0_2:1;                                        /* PM0_2            */
    uint16 PM0_3:1;                                        /* PM0_3            */
    uint16 PM0_4:1;                                        /* PM0_4            */
    uint16 PM0_5:1;                                        /* PM0_5            */
    uint16 PM0_6:1;                                        /* PM0_6            */
    uint16 PM0_7:1;                                        /* PM0_7            */
    uint16 PM0_8:1;                                        /* PM0_8            */
    uint16 PM0_9:1;                                        /* PM0_9            */
    uint16 PM0_10:1;                                       /* PM0_10           */
    uint16 PM0_11:1;                                       /* PM0_11           */
    uint16 PM0_12:1;                                       /* PM0_12           */
    uint16 PM0_13:1;                                       /* PM0_13           */
    uint16 PM0_14:1;                                       /* PM0_14           */
    uint16 :1;                                             /* Reserved Bits    */
} __type146;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PMC0_0:1;                                       /* PMC0_0           */
    uint16 PMC0_1:1;                                       /* PMC0_1           */
    uint16 PMC0_2:1;                                       /* PMC0_2           */
    uint16 PMC0_3:1;                                       /* PMC0_3           */
    uint16 PMC0_4:1;                                       /* PMC0_4           */
    uint16 PMC0_5:1;                                       /* PMC0_5           */
    uint16 PMC0_6:1;                                       /* PMC0_6           */
    uint16 PMC0_7:1;                                       /* PMC0_7           */
    uint16 PMC0_8:1;                                       /* PMC0_8           */
    uint16 PMC0_9:1;                                       /* PMC0_9           */
    uint16 PMC0_10:1;                                      /* PMC0_10          */
    uint16 PMC0_11:1;                                      /* PMC0_11          */
    uint16 PMC0_12:1;                                      /* PMC0_12          */
    uint16 PMC0_13:1;                                      /* PMC0_13          */
    uint16 PMC0_14:1;                                      /* PMC0_14          */
    uint16 :1;                                             /* Reserved Bits    */
} __type147;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFC0_0:1;                                       /* PFC0_0           */
    uint16 PFC0_1:1;                                       /* PFC0_1           */
    uint16 PFC0_2:1;                                       /* PFC0_2           */
    uint16 PFC0_3:1;                                       /* PFC0_3           */
    uint16 PFC0_4:1;                                       /* PFC0_4           */
    uint16 PFC0_5:1;                                       /* PFC0_5           */
    uint16 PFC0_6:1;                                       /* PFC0_6           */
    uint16 PFC0_7:1;                                       /* PFC0_7           */
    uint16 PFC0_8:1;                                       /* PFC0_8           */
    uint16 PFC0_9:1;                                       /* PFC0_9           */
    uint16 PFC0_10:1;                                      /* PFC0_10          */
    uint16 PFC0_11:1;                                      /* PFC0_11          */
    uint16 PFC0_12:1;                                      /* PFC0_12          */
    uint16 PFC0_13:1;                                      /* PFC0_13          */
    uint16 PFC0_14:1;                                      /* PFC0_14          */
    uint16 :1;                                             /* Reserved Bits    */
} __type148;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFCE0_0:1;                                      /* PFCE0_0          */
    uint16 PFCE0_1:1;                                      /* PFCE0_1          */
    uint16 PFCE0_2:1;                                      /* PFCE0_2          */
    uint16 PFCE0_3:1;                                      /* PFCE0_3          */
    uint16 PFCE0_4:1;                                      /* PFCE0_4          */
    uint16 PFCE0_5:1;                                      /* PFCE0_5          */
    uint16 PFCE0_6:1;                                      /* PFCE0_6          */
    uint16 PFCE0_7:1;                                      /* PFCE0_7          */
    uint16 PFCE0_8:1;                                      /* PFCE0_8          */
    uint16 PFCE0_9:1;                                      /* PFCE0_9          */
    uint16 :3;                                             /* Reserved Bits    */
    uint16 PFCE0_13:1;                                     /* PFCE0_13         */
    uint16 :2;                                             /* Reserved Bits    */
} __type149;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PMSR0_0:1;                                      /* PMSR0_0          */
    uint32 PMSR0_1:1;                                      /* PMSR0_1          */
    uint32 PMSR0_2:1;                                      /* PMSR0_2          */
    uint32 PMSR0_3:1;                                      /* PMSR0_3          */
    uint32 PMSR0_4:1;                                      /* PMSR0_4          */
    uint32 PMSR0_5:1;                                      /* PMSR0_5          */
    uint32 PMSR0_6:1;                                      /* PMSR0_6          */
    uint32 PMSR0_7:1;                                      /* PMSR0_7          */
    uint32 PMSR0_8:1;                                      /* PMSR0_8          */
    uint32 PMSR0_9:1;                                      /* PMSR0_9          */
    uint32 PMSR0_10:1;                                     /* PMSR0_10         */
    uint32 PMSR0_11:1;                                     /* PMSR0_11         */
    uint32 PMSR0_12:1;                                     /* PMSR0_12         */
    uint32 PMSR0_13:1;                                     /* PMSR0_13         */
    uint32 PMSR0_14:1;                                     /* PMSR0_14         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PMSR0_16:1;                                     /* PMSR0_16         */
    uint32 PMSR0_17:1;                                     /* PMSR0_17         */
    uint32 PMSR0_18:1;                                     /* PMSR0_18         */
    uint32 PMSR0_19:1;                                     /* PMSR0_19         */
    uint32 PMSR0_20:1;                                     /* PMSR0_20         */
    uint32 PMSR0_21:1;                                     /* PMSR0_21         */
    uint32 PMSR0_22:1;                                     /* PMSR0_22         */
    uint32 PMSR0_23:1;                                     /* PMSR0_23         */
    uint32 PMSR0_24:1;                                     /* PMSR0_24         */
    uint32 PMSR0_25:1;                                     /* PMSR0_25         */
    uint32 PMSR0_26:1;                                     /* PMSR0_26         */
    uint32 PMSR0_27:1;                                     /* PMSR0_27         */
    uint32 PMSR0_28:1;                                     /* PMSR0_28         */
    uint32 PMSR0_29:1;                                     /* PMSR0_29         */
    uint32 PMSR0_30:1;                                     /* PMSR0_30         */
    uint32 :1;                                             /* Reserved Bits    */
} __type150;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PMCSR0_0:1;                                     /* PMCSR0_0         */
    uint32 PMCSR0_1:1;                                     /* PMCSR0_1         */
    uint32 PMCSR0_2:1;                                     /* PMCSR0_2         */
    uint32 PMCSR0_3:1;                                     /* PMCSR0_3         */
    uint32 PMCSR0_4:1;                                     /* PMCSR0_4         */
    uint32 PMCSR0_5:1;                                     /* PMCSR0_5         */
    uint32 PMCSR0_6:1;                                     /* PMCSR0_6         */
    uint32 PMCSR0_7:1;                                     /* PMCSR0_7         */
    uint32 PMCSR0_8:1;                                     /* PMCSR0_8         */
    uint32 PMCSR0_9:1;                                     /* PMCSR0_9         */
    uint32 PMCSR0_10:1;                                    /* PMCSR0_10        */
    uint32 PMCSR0_11:1;                                    /* PMCSR0_11        */
    uint32 PMCSR0_12:1;                                    /* PMCSR0_12        */
    uint32 PMCSR0_13:1;                                    /* PMCSR0_13        */
    uint32 PMCSR0_14:1;                                    /* PMCSR0_14        */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PMCSR0_16:1;                                    /* PMCSR0_16        */
    uint32 PMCSR0_17:1;                                    /* PMCSR0_17        */
    uint32 PMCSR0_18:1;                                    /* PMCSR0_18        */
    uint32 PMCSR0_19:1;                                    /* PMCSR0_19        */
    uint32 PMCSR0_20:1;                                    /* PMCSR0_20        */
    uint32 PMCSR0_21:1;                                    /* PMCSR0_21        */
    uint32 PMCSR0_22:1;                                    /* PMCSR0_22        */
    uint32 PMCSR0_23:1;                                    /* PMCSR0_23        */
    uint32 PMCSR0_24:1;                                    /* PMCSR0_24        */
    uint32 PMCSR0_25:1;                                    /* PMCSR0_25        */
    uint32 PMCSR0_26:1;                                    /* PMCSR0_26        */
    uint32 PMCSR0_27:1;                                    /* PMCSR0_27        */
    uint32 PMCSR0_28:1;                                    /* PMCSR0_28        */
    uint32 PMCSR0_29:1;                                    /* PMCSR0_29        */
    uint32 PMCSR0_30:1;                                    /* PMCSR0_30        */
    uint32 :1;                                             /* Reserved Bits    */
} __type151;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFCAE0_0:1;                                     /* PFCAE0_0         */
    uint16 PFCAE0_1:1;                                     /* PFCAE0_1         */
    uint16 PFCAE0_2:1;                                     /* PFCAE0_2         */
    uint16 PFCAE0_3:1;                                     /* PFCAE0_3         */
    uint16 PFCAE0_4:1;                                     /* PFCAE0_4         */
    uint16 PFCAE0_5:1;                                     /* PFCAE0_5         */
    uint16 PFCAE0_6:1;                                     /* PFCAE0_6         */
    uint16 PFCAE0_7:1;                                     /* PFCAE0_7         */
    uint16 PFCAE0_8:1;                                     /* PFCAE0_8         */
    uint16 :7;                                             /* Reserved Bits    */
} __type152;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PINV0_0:1;                                      /* PINV0_0          */
    uint32 PINV0_1:1;                                      /* PINV0_1          */
    uint32 PINV0_2:1;                                      /* PINV0_2          */
    uint32 PINV0_3:1;                                      /* PINV0_3          */
    uint32 PINV0_4:1;                                      /* PINV0_4          */
    uint32 PINV0_5:1;                                      /* PINV0_5          */
    uint32 PINV0_6:1;                                      /* PINV0_6          */
    uint32 PINV0_7:1;                                      /* PINV0_7          */
    uint32 PINV0_8:1;                                      /* PINV0_8          */
    uint32 PINV0_9:1;                                      /* PINV0_9          */
    uint32 PINV0_10:1;                                     /* PINV0_10         */
    uint32 PINV0_11:1;                                     /* PINV0_11         */
    uint32 PINV0_12:1;                                     /* PINV0_12         */
    uint32 PINV0_13:1;                                     /* PINV0_13         */
    uint32 PINV0_14:1;                                     /* PINV0_14         */
    uint32 :17;                                            /* Reserved Bits    */
} __type153;
typedef struct 
{                                                          /* Bit Access       */
    uint16 P1_0:1;                                         /* P1_0             */
    uint16 P1_1:1;                                         /* P1_1             */
    uint16 P1_2:1;                                         /* P1_2             */
    uint16 P1_3:1;                                         /* P1_3             */
    uint16 P1_4:1;                                         /* P1_4             */
    uint16 :11;                                            /* Reserved Bits    */
} __type154;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PSR1_0:1;                                       /* PSR1_0           */
    uint32 PSR1_1:1;                                       /* PSR1_1           */
    uint32 PSR1_2:1;                                       /* PSR1_2           */
    uint32 PSR1_3:1;                                       /* PSR1_3           */
    uint32 PSR1_4:1;                                       /* PSR1_4           */
    uint32 :11;                                            /* Reserved Bits    */
    uint32 PSR1_16:1;                                      /* PSR1_16          */
    uint32 PSR1_17:1;                                      /* PSR1_17          */
    uint32 PSR1_18:1;                                      /* PSR1_18          */
    uint32 PSR1_19:1;                                      /* PSR1_19          */
    uint32 PSR1_20:1;                                      /* PSR1_20          */
    uint32 :11;                                            /* Reserved Bits    */
} __type155;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PNOT1_0:1;                                      /* PNOT1_0          */
    uint16 PNOT1_1:1;                                      /* PNOT1_1          */
    uint16 PNOT1_2:1;                                      /* PNOT1_2          */
    uint16 PNOT1_3:1;                                      /* PNOT1_3          */
    uint16 PNOT1_4:1;                                      /* PNOT1_4          */
    uint16 :11;                                            /* Reserved Bits    */
} __type156;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 PPR1_0:1;                                 /* PPR1_0           */
    const uint16 PPR1_1:1;                                 /* PPR1_1           */
    const uint16 PPR1_2:1;                                 /* PPR1_2           */
    const uint16 PPR1_3:1;                                 /* PPR1_3           */
    const uint16 PPR1_4:1;                                 /* PPR1_4           */
    uint16 :11;                                            /* Reserved Bits    */
} __type157;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PM1_0:1;                                        /* PM1_0            */
    uint16 PM1_1:1;                                        /* PM1_1            */
    uint16 PM1_2:1;                                        /* PM1_2            */
    uint16 PM1_3:1;                                        /* PM1_3            */
    uint16 PM1_4:1;                                        /* PM1_4            */
    uint16 :11;                                            /* Reserved Bits    */
} __type158;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PMC1_0:1;                                       /* PMC1_0           */
    uint16 PMC1_1:1;                                       /* PMC1_1           */
    uint16 PMC1_2:1;                                       /* PMC1_2           */
    uint16 PMC1_3:1;                                       /* PMC1_3           */
    uint16 PMC1_4:1;                                       /* PMC1_4           */
    uint16 :11;                                            /* Reserved Bits    */
} __type159;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFC1_0:1;                                       /* PFC1_0           */
    uint16 PFC1_1:1;                                       /* PFC1_1           */
    uint16 PFC1_2:1;                                       /* PFC1_2           */
    uint16 PFC1_3:1;                                       /* PFC1_3           */
    uint16 PFC1_4:1;                                       /* PFC1_4           */
    uint16 :11;                                            /* Reserved Bits    */
} __type160;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFCE1_0:1;                                      /* PFCE1_0          */
    uint16 PFCE1_1:1;                                      /* PFCE1_1          */
    uint16 PFCE1_2:1;                                      /* PFCE1_2          */
    uint16 PFCE1_3:1;                                      /* PFCE1_3          */
    uint16 PFCE1_4:1;                                      /* PFCE1_4          */
    uint16 :11;                                            /* Reserved Bits    */
} __type161;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PMSR1_0:1;                                      /* PMSR1_0          */
    uint32 PMSR1_1:1;                                      /* PMSR1_1          */
    uint32 PMSR1_2:1;                                      /* PMSR1_2          */
    uint32 PMSR1_3:1;                                      /* PMSR1_3          */
    uint32 PMSR1_4:1;                                      /* PMSR1_4          */
    uint32 :11;                                            /* Reserved Bits    */
    uint32 PMSR1_16:1;                                     /* PMSR1_16         */
    uint32 PMSR1_17:1;                                     /* PMSR1_17         */
    uint32 PMSR1_18:1;                                     /* PMSR1_18         */
    uint32 PMSR1_19:1;                                     /* PMSR1_19         */
    uint32 PMSR1_20:1;                                     /* PMSR1_20         */
    uint32 :11;                                            /* Reserved Bits    */
} __type162;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PMCSR1_0:1;                                     /* PMCSR1_0         */
    uint32 PMCSR1_1:1;                                     /* PMCSR1_1         */
    uint32 PMCSR1_2:1;                                     /* PMCSR1_2         */
    uint32 PMCSR1_3:1;                                     /* PMCSR1_3         */
    uint32 PMCSR1_4:1;                                     /* PMCSR1_4         */
    uint32 :11;                                            /* Reserved Bits    */
    uint32 PMCSR1_16:1;                                    /* PMCSR1_16        */
    uint32 PMCSR1_17:1;                                    /* PMCSR1_17        */
    uint32 PMCSR1_18:1;                                    /* PMCSR1_18        */
    uint32 PMCSR1_19:1;                                    /* PMCSR1_19        */
    uint32 PMCSR1_20:1;                                    /* PMCSR1_20        */
    uint32 :11;                                            /* Reserved Bits    */
} __type163;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFCAE1_0:1;                                     /* PFCAE1_0         */
    uint16 PFCAE1_1:1;                                     /* PFCAE1_1         */
    uint16 PFCAE1_2:1;                                     /* PFCAE1_2         */
    uint16 PFCAE1_3:1;                                     /* PFCAE1_3         */
    uint16 PFCAE1_4:1;                                     /* PFCAE1_4         */
    uint16 :11;                                            /* Reserved Bits    */
} __type164;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PINV1_0:1;                                      /* PINV1_0          */
    uint32 PINV1_1:1;                                      /* PINV1_1          */
    uint32 PINV1_2:1;                                      /* PINV1_2          */
    uint32 PINV1_3:1;                                      /* PINV1_3          */
    uint32 PINV1_4:1;                                      /* PINV1_4          */
    uint32 :27;                                            /* Reserved Bits    */
} __type165;
typedef struct 
{                                                          /* Bit Access       */
    uint16 P2_0:1;                                         /* P2_0             */
    uint16 P2_1:1;                                         /* P2_1             */
    uint16 P2_2:1;                                         /* P2_2             */
    uint16 P2_3:1;                                         /* P2_3             */
    uint16 P2_4:1;                                         /* P2_4             */
    uint16 P2_5:1;                                         /* P2_5             */
    uint16 P2_6:1;                                         /* P2_6             */
    uint16 P2_7:1;                                         /* P2_7             */
    uint16 P2_8:1;                                         /* P2_8             */
    uint16 P2_9:1;                                         /* P2_9             */
    uint16 P2_10:1;                                        /* P2_10            */
    uint16 P2_11:1;                                        /* P2_11            */
    uint16 P2_12:1;                                        /* P2_12            */
    uint16 P2_13:1;                                        /* P2_13            */
    uint16 P2_14:1;                                        /* P2_14            */
    uint16 P2_15:1;                                        /* P2_15            */
} __type166;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PSR2_0:1;                                       /* PSR2_0           */
    uint32 PSR2_1:1;                                       /* PSR2_1           */
    uint32 PSR2_2:1;                                       /* PSR2_2           */
    uint32 PSR2_3:1;                                       /* PSR2_3           */
    uint32 PSR2_4:1;                                       /* PSR2_4           */
    uint32 PSR2_5:1;                                       /* PSR2_5           */
    uint32 PSR2_6:1;                                       /* PSR2_6           */
    uint32 PSR2_7:1;                                       /* PSR2_7           */
    uint32 PSR2_8:1;                                       /* PSR2_8           */
    uint32 PSR2_9:1;                                       /* PSR2_9           */
    uint32 PSR2_10:1;                                      /* PSR2_10          */
    uint32 PSR2_11:1;                                      /* PSR2_11          */
    uint32 PSR2_12:1;                                      /* PSR2_12          */
    uint32 PSR2_13:1;                                      /* PSR2_13          */
    uint32 PSR2_14:1;                                      /* PSR2_14          */
    uint32 PSR2_15:1;                                      /* PSR2_15          */
    uint32 PSR2_16:1;                                      /* PSR2_16          */
    uint32 PSR2_17:1;                                      /* PSR2_17          */
    uint32 PSR2_18:1;                                      /* PSR2_18          */
    uint32 PSR2_19:1;                                      /* PSR2_19          */
    uint32 PSR2_20:1;                                      /* PSR2_20          */
    uint32 PSR2_21:1;                                      /* PSR2_21          */
    uint32 PSR2_22:1;                                      /* PSR2_22          */
    uint32 PSR2_23:1;                                      /* PSR2_23          */
    uint32 PSR2_24:1;                                      /* PSR2_24          */
    uint32 PSR2_25:1;                                      /* PSR2_25          */
    uint32 PSR2_26:1;                                      /* PSR2_26          */
    uint32 PSR2_27:1;                                      /* PSR2_27          */
    uint32 PSR2_28:1;                                      /* PSR2_28          */
    uint32 PSR2_29:1;                                      /* PSR2_29          */
    uint32 PSR2_30:1;                                      /* PSR2_30          */
    uint32 PSR2_31:1;                                      /* PSR2_31          */
} __type167;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PNOT2_0:1;                                      /* PNOT2_0          */
    uint16 PNOT2_1:1;                                      /* PNOT2_1          */
    uint16 PNOT2_2:1;                                      /* PNOT2_2          */
    uint16 PNOT2_3:1;                                      /* PNOT2_3          */
    uint16 PNOT2_4:1;                                      /* PNOT2_4          */
    uint16 PNOT2_5:1;                                      /* PNOT2_5          */
    uint16 PNOT2_6:1;                                      /* PNOT2_6          */
    uint16 PNOT2_7:1;                                      /* PNOT2_7          */
    uint16 PNOT2_8:1;                                      /* PNOT2_8          */
    uint16 PNOT2_9:1;                                      /* PNOT2_9          */
    uint16 PNOT2_10:1;                                     /* PNOT2_10         */
    uint16 PNOT2_11:1;                                     /* PNOT2_11         */
    uint16 PNOT2_12:1;                                     /* PNOT2_12         */
    uint16 PNOT2_13:1;                                     /* PNOT2_13         */
    uint16 PNOT2_14:1;                                     /* PNOT2_14         */
    uint16 PNOT2_15:1;                                     /* PNOT2_15         */
} __type168;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 PPR2_0:1;                                 /* PPR2_0           */
    const uint16 PPR2_1:1;                                 /* PPR2_1           */
    const uint16 PPR2_2:1;                                 /* PPR2_2           */
    const uint16 PPR2_3:1;                                 /* PPR2_3           */
    const uint16 PPR2_4:1;                                 /* PPR2_4           */
    const uint16 PPR2_5:1;                                 /* PPR2_5           */
    const uint16 PPR2_6:1;                                 /* PPR2_6           */
    const uint16 PPR2_7:1;                                 /* PPR2_7           */
    const uint16 PPR2_8:1;                                 /* PPR2_8           */
    const uint16 PPR2_9:1;                                 /* PPR2_9           */
    const uint16 PPR2_10:1;                                /* PPR2_10          */
    const uint16 PPR2_11:1;                                /* PPR2_11          */
    const uint16 PPR2_12:1;                                /* PPR2_12          */
    const uint16 PPR2_13:1;                                /* PPR2_13          */
    const uint16 PPR2_14:1;                                /* PPR2_14          */
    const uint16 PPR2_15:1;                                /* PPR2_15          */
} __type169;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PM2_0:1;                                        /* PM2_0            */
    uint16 PM2_1:1;                                        /* PM2_1            */
    uint16 PM2_2:1;                                        /* PM2_2            */
    uint16 PM2_3:1;                                        /* PM2_3            */
    uint16 PM2_4:1;                                        /* PM2_4            */
    uint16 PM2_5:1;                                        /* PM2_5            */
    uint16 PM2_6:1;                                        /* PM2_6            */
    uint16 PM2_7:1;                                        /* PM2_7            */
    uint16 PM2_8:1;                                        /* PM2_8            */
    uint16 PM2_9:1;                                        /* PM2_9            */
    uint16 PM2_10:1;                                       /* PM2_10           */
    uint16 PM2_11:1;                                       /* PM2_11           */
    uint16 PM2_12:1;                                       /* PM2_12           */
    uint16 PM2_13:1;                                       /* PM2_13           */
    uint16 PM2_14:1;                                       /* PM2_14           */
    uint16 PM2_15:1;                                       /* PM2_15           */
} __type170;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PMC2_0:1;                                       /* PMC2_0           */
    uint16 PMC2_1:1;                                       /* PMC2_1           */
    uint16 PMC2_2:1;                                       /* PMC2_2           */
    uint16 PMC2_3:1;                                       /* PMC2_3           */
    uint16 PMC2_4:1;                                       /* PMC2_4           */
    uint16 PMC2_5:1;                                       /* PMC2_5           */
    uint16 PMC2_6:1;                                       /* PMC2_6           */
    uint16 PMC2_7:1;                                       /* PMC2_7           */
    uint16 PMC2_8:1;                                       /* PMC2_8           */
    uint16 PMC2_9:1;                                       /* PMC2_9           */
    uint16 PMC2_10:1;                                      /* PMC2_10          */
    uint16 PMC2_11:1;                                      /* PMC2_11          */
    uint16 PMC2_12:1;                                      /* PMC2_12          */
    uint16 PMC2_13:1;                                      /* PMC2_13          */
    uint16 PMC2_14:1;                                      /* PMC2_14          */
    uint16 PMC2_15:1;                                      /* PMC2_15          */
} __type171;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFC2_0:1;                                       /* PFC2_0           */
    uint16 PFC2_1:1;                                       /* PFC2_1           */
    uint16 PFC2_2:1;                                       /* PFC2_2           */
    uint16 PFC2_3:1;                                       /* PFC2_3           */
    uint16 PFC2_4:1;                                       /* PFC2_4           */
    uint16 PFC2_5:1;                                       /* PFC2_5           */
    uint16 PFC2_6:1;                                       /* PFC2_6           */
    uint16 PFC2_7:1;                                       /* PFC2_7           */
    uint16 PFC2_8:1;                                       /* PFC2_8           */
    uint16 PFC2_9:1;                                       /* PFC2_9           */
    uint16 PFC2_10:1;                                      /* PFC2_10          */
    uint16 PFC2_11:1;                                      /* PFC2_11          */
    uint16 PFC2_12:1;                                      /* PFC2_12          */
    uint16 PFC2_13:1;                                      /* PFC2_13          */
    uint16 PFC2_14:1;                                      /* PFC2_14          */
    uint16 PFC2_15:1;                                      /* PFC2_15          */
} __type172;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFCE2_0:1;                                      /* PFCE2_0          */
    uint16 PFCE2_1:1;                                      /* PFCE2_1          */
    uint16 PFCE2_2:1;                                      /* PFCE2_2          */
    uint16 PFCE2_3:1;                                      /* PFCE2_3          */
    uint16 PFCE2_4:1;                                      /* PFCE2_4          */
    uint16 PFCE2_5:1;                                      /* PFCE2_5          */
    uint16 PFCE2_6:1;                                      /* PFCE2_6          */
    uint16 PFCE2_7:1;                                      /* PFCE2_7          */
    uint16 PFCE2_8:1;                                      /* PFCE2_8          */
    uint16 PFCE2_9:1;                                      /* PFCE2_9          */
    uint16 PFCE2_10:1;                                     /* PFCE2_10         */
    uint16 PFCE2_11:1;                                     /* PFCE2_11         */
    uint16 PFCE2_12:1;                                     /* PFCE2_12         */
    uint16 PFCE2_13:1;                                     /* PFCE2_13         */
    uint16 PFCE2_14:1;                                     /* PFCE2_14         */
    uint16 PFCE2_15:1;                                     /* PFCE2_15         */
} __type173;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PMSR2_0:1;                                      /* PMSR2_0          */
    uint32 PMSR2_1:1;                                      /* PMSR2_1          */
    uint32 PMSR2_2:1;                                      /* PMSR2_2          */
    uint32 PMSR2_3:1;                                      /* PMSR2_3          */
    uint32 PMSR2_4:1;                                      /* PMSR2_4          */
    uint32 PMSR2_5:1;                                      /* PMSR2_5          */
    uint32 PMSR2_6:1;                                      /* PMSR2_6          */
    uint32 PMSR2_7:1;                                      /* PMSR2_7          */
    uint32 PMSR2_8:1;                                      /* PMSR2_8          */
    uint32 PMSR2_9:1;                                      /* PMSR2_9          */
    uint32 PMSR2_10:1;                                     /* PMSR2_10         */
    uint32 PMSR2_11:1;                                     /* PMSR2_11         */
    uint32 PMSR2_12:1;                                     /* PMSR2_12         */
    uint32 PMSR2_13:1;                                     /* PMSR2_13         */
    uint32 PMSR2_14:1;                                     /* PMSR2_14         */
    uint32 PMSR2_15:1;                                     /* PMSR2_15         */
    uint32 PMSR2_16:1;                                     /* PMSR2_16         */
    uint32 PMSR2_17:1;                                     /* PMSR2_17         */
    uint32 PMSR2_18:1;                                     /* PMSR2_18         */
    uint32 PMSR2_19:1;                                     /* PMSR2_19         */
    uint32 PMSR2_20:1;                                     /* PMSR2_20         */
    uint32 PMSR2_21:1;                                     /* PMSR2_21         */
    uint32 PMSR2_22:1;                                     /* PMSR2_22         */
    uint32 PMSR2_23:1;                                     /* PMSR2_23         */
    uint32 PMSR2_24:1;                                     /* PMSR2_24         */
    uint32 PMSR2_25:1;                                     /* PMSR2_25         */
    uint32 PMSR2_26:1;                                     /* PMSR2_26         */
    uint32 PMSR2_27:1;                                     /* PMSR2_27         */
    uint32 PMSR2_28:1;                                     /* PMSR2_28         */
    uint32 PMSR2_29:1;                                     /* PMSR2_29         */
    uint32 PMSR2_30:1;                                     /* PMSR2_30         */
    uint32 PMSR2_31:1;                                     /* PMSR2_31         */
} __type174;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PMCSR2_0:1;                                     /* PMCSR2_0         */
    uint32 PMCSR2_1:1;                                     /* PMCSR2_1         */
    uint32 PMCSR2_2:1;                                     /* PMCSR2_2         */
    uint32 PMCSR2_3:1;                                     /* PMCSR2_3         */
    uint32 PMCSR2_4:1;                                     /* PMCSR2_4         */
    uint32 PMCSR2_5:1;                                     /* PMCSR2_5         */
    uint32 PMCSR2_6:1;                                     /* PMCSR2_6         */
    uint32 PMCSR2_7:1;                                     /* PMCSR2_7         */
    uint32 PMCSR2_8:1;                                     /* PMCSR2_8         */
    uint32 PMCSR2_9:1;                                     /* PMCSR2_9         */
    uint32 PMCSR2_10:1;                                    /* PMCSR2_10        */
    uint32 PMCSR2_11:1;                                    /* PMCSR2_11        */
    uint32 PMCSR2_12:1;                                    /* PMCSR2_12        */
    uint32 PMCSR2_13:1;                                    /* PMCSR2_13        */
    uint32 PMCSR2_14:1;                                    /* PMCSR2_14        */
    uint32 PMCSR2_15:1;                                    /* PMCSR2_15        */
    uint32 PMCSR2_16:1;                                    /* PMCSR2_16        */
    uint32 PMCSR2_17:1;                                    /* PMCSR2_17        */
    uint32 PMCSR2_18:1;                                    /* PMCSR2_18        */
    uint32 PMCSR2_19:1;                                    /* PMCSR2_19        */
    uint32 PMCSR2_20:1;                                    /* PMCSR2_20        */
    uint32 PMCSR2_21:1;                                    /* PMCSR2_21        */
    uint32 PMCSR2_22:1;                                    /* PMCSR2_22        */
    uint32 PMCSR2_23:1;                                    /* PMCSR2_23        */
    uint32 PMCSR2_24:1;                                    /* PMCSR2_24        */
    uint32 PMCSR2_25:1;                                    /* PMCSR2_25        */
    uint32 PMCSR2_26:1;                                    /* PMCSR2_26        */
    uint32 PMCSR2_27:1;                                    /* PMCSR2_27        */
    uint32 PMCSR2_28:1;                                    /* PMCSR2_28        */
    uint32 PMCSR2_29:1;                                    /* PMCSR2_29        */
    uint32 PMCSR2_30:1;                                    /* PMCSR2_30        */
    uint32 PMCSR2_31:1;                                    /* PMCSR2_31        */
} __type175;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 PFCAE2_1:1;                                     /* PFCAE2_1         */
    uint16 PFCAE2_2:1;                                     /* PFCAE2_2         */
    uint16 PFCAE2_3:1;                                     /* PFCAE2_3         */
    uint16 PFCAE2_4:1;                                     /* PFCAE2_4         */
    uint16 PFCAE2_5:1;                                     /* PFCAE2_5         */
    uint16 PFCAE2_6:1;                                     /* PFCAE2_6         */
    uint16 PFCAE2_7:1;                                     /* PFCAE2_7         */
    uint16 PFCAE2_8:1;                                     /* PFCAE2_8         */
    uint16 PFCAE2_9:1;                                     /* PFCAE2_9         */
    uint16 PFCAE2_10:1;                                    /* PFCAE2_10        */
    uint16 PFCAE2_11:1;                                    /* PFCAE2_11        */
    uint16 PFCAE2_12:1;                                    /* PFCAE2_12        */
    uint16 PFCAE2_13:1;                                    /* PFCAE2_13        */
    uint16 PFCAE2_14:1;                                    /* PFCAE2_14        */
    uint16 PFCAE2_15:1;                                    /* PFCAE2_15        */
} __type176;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PINV2_0:1;                                      /* PINV2_0          */
    uint32 PINV2_1:1;                                      /* PINV2_1          */
    uint32 PINV2_2:1;                                      /* PINV2_2          */
    uint32 PINV2_3:1;                                      /* PINV2_3          */
    uint32 PINV2_4:1;                                      /* PINV2_4          */
    uint32 PINV2_5:1;                                      /* PINV2_5          */
    uint32 PINV2_6:1;                                      /* PINV2_6          */
    uint32 PINV2_7:1;                                      /* PINV2_7          */
    uint32 PINV2_8:1;                                      /* PINV2_8          */
    uint32 PINV2_9:1;                                      /* PINV2_9          */
    uint32 PINV2_10:1;                                     /* PINV2_10         */
    uint32 PINV2_11:1;                                     /* PINV2_11         */
    uint32 PINV2_12:1;                                     /* PINV2_12         */
    uint32 PINV2_13:1;                                     /* PINV2_13         */
    uint32 PINV2_14:1;                                     /* PINV2_14         */
    uint32 PINV2_15:1;                                     /* PINV2_15         */
    uint32 :16;                                            /* Reserved Bits    */
} __type177;
typedef struct 
{                                                          /* Bit Access       */
    uint16 P3_0:1;                                         /* P3_0             */
    uint16 P3_1:1;                                         /* P3_1             */
    uint16 P3_2:1;                                         /* P3_2             */
    uint16 P3_3:1;                                         /* P3_3             */
    uint16 P3_4:1;                                         /* P3_4             */
    uint16 P3_5:1;                                         /* P3_5             */
    uint16 P3_6:1;                                         /* P3_6             */
    uint16 P3_7:1;                                         /* P3_7             */
    uint16 P3_8:1;                                         /* P3_8             */
    uint16 P3_9:1;                                         /* P3_9             */
    uint16 P3_10:1;                                        /* P3_10            */
    uint16 P3_11:1;                                        /* P3_11            */
    uint16 P3_12:1;                                        /* P3_12            */
    uint16 P3_13:1;                                        /* P3_13            */
    uint16 P3_14:1;                                        /* P3_14            */
    uint16 :1;                                             /* Reserved Bits    */
} __type178;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PSR3_0:1;                                       /* PSR3_0           */
    uint32 PSR3_1:1;                                       /* PSR3_1           */
    uint32 PSR3_2:1;                                       /* PSR3_2           */
    uint32 PSR3_3:1;                                       /* PSR3_3           */
    uint32 PSR3_4:1;                                       /* PSR3_4           */
    uint32 PSR3_5:1;                                       /* PSR3_5           */
    uint32 PSR3_6:1;                                       /* PSR3_6           */
    uint32 PSR3_7:1;                                       /* PSR3_7           */
    uint32 PSR3_8:1;                                       /* PSR3_8           */
    uint32 PSR3_9:1;                                       /* PSR3_9           */
    uint32 PSR3_10:1;                                      /* PSR3_10          */
    uint32 PSR3_11:1;                                      /* PSR3_11          */
    uint32 PSR3_12:1;                                      /* PSR3_12          */
    uint32 PSR3_13:1;                                      /* PSR3_13          */
    uint32 PSR3_14:1;                                      /* PSR3_14          */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PSR3_16:1;                                      /* PSR3_16          */
    uint32 PSR3_17:1;                                      /* PSR3_17          */
    uint32 PSR3_18:1;                                      /* PSR3_18          */
    uint32 PSR3_19:1;                                      /* PSR3_19          */
    uint32 PSR3_20:1;                                      /* PSR3_20          */
    uint32 PSR3_21:1;                                      /* PSR3_21          */
    uint32 PSR3_22:1;                                      /* PSR3_22          */
    uint32 PSR3_23:1;                                      /* PSR3_23          */
    uint32 PSR3_24:1;                                      /* PSR3_24          */
    uint32 PSR3_25:1;                                      /* PSR3_25          */
    uint32 PSR3_26:1;                                      /* PSR3_26          */
    uint32 PSR3_27:1;                                      /* PSR3_27          */
    uint32 PSR3_28:1;                                      /* PSR3_28          */
    uint32 PSR3_29:1;                                      /* PSR3_29          */
    uint32 PSR3_30:1;                                      /* PSR3_30          */
    uint32 :1;                                             /* Reserved Bits    */
} __type179;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PNOT3_0:1;                                      /* PNOT3_0          */
    uint16 PNOT3_1:1;                                      /* PNOT3_1          */
    uint16 PNOT3_2:1;                                      /* PNOT3_2          */
    uint16 PNOT3_3:1;                                      /* PNOT3_3          */
    uint16 PNOT3_4:1;                                      /* PNOT3_4          */
    uint16 PNOT3_5:1;                                      /* PNOT3_5          */
    uint16 PNOT3_6:1;                                      /* PNOT3_6          */
    uint16 PNOT3_7:1;                                      /* PNOT3_7          */
    uint16 PNOT3_8:1;                                      /* PNOT3_8          */
    uint16 PNOT3_9:1;                                      /* PNOT3_9          */
    uint16 PNOT3_10:1;                                     /* PNOT3_10         */
    uint16 PNOT3_11:1;                                     /* PNOT3_11         */
    uint16 PNOT3_12:1;                                     /* PNOT3_12         */
    uint16 PNOT3_13:1;                                     /* PNOT3_13         */
    uint16 PNOT3_14:1;                                     /* PNOT3_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type180;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 PPR3_0:1;                                 /* PPR3_0           */
    const uint16 PPR3_1:1;                                 /* PPR3_1           */
    const uint16 PPR3_2:1;                                 /* PPR3_2           */
    const uint16 PPR3_3:1;                                 /* PPR3_3           */
    const uint16 PPR3_4:1;                                 /* PPR3_4           */
    const uint16 PPR3_5:1;                                 /* PPR3_5           */
    const uint16 PPR3_6:1;                                 /* PPR3_6           */
    const uint16 PPR3_7:1;                                 /* PPR3_7           */
    const uint16 PPR3_8:1;                                 /* PPR3_8           */
    const uint16 PPR3_9:1;                                 /* PPR3_9           */
    const uint16 PPR3_10:1;                                /* PPR3_10          */
    const uint16 PPR3_11:1;                                /* PPR3_11          */
    const uint16 PPR3_12:1;                                /* PPR3_12          */
    const uint16 PPR3_13:1;                                /* PPR3_13          */
    const uint16 PPR3_14:1;                                /* PPR3_14          */
    uint16 :1;                                             /* Reserved Bits    */
} __type181;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PM3_0:1;                                        /* PM3_0            */
    uint16 PM3_1:1;                                        /* PM3_1            */
    uint16 PM3_2:1;                                        /* PM3_2            */
    uint16 PM3_3:1;                                        /* PM3_3            */
    uint16 PM3_4:1;                                        /* PM3_4            */
    uint16 PM3_5:1;                                        /* PM3_5            */
    uint16 PM3_6:1;                                        /* PM3_6            */
    uint16 PM3_7:1;                                        /* PM3_7            */
    uint16 PM3_8:1;                                        /* PM3_8            */
    uint16 PM3_9:1;                                        /* PM3_9            */
    uint16 PM3_10:1;                                       /* PM3_10           */
    uint16 PM3_11:1;                                       /* PM3_11           */
    uint16 PM3_12:1;                                       /* PM3_12           */
    uint16 PM3_13:1;                                       /* PM3_13           */
    uint16 PM3_14:1;                                       /* PM3_14           */
    uint16 :1;                                             /* Reserved Bits    */
} __type182;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PMC3_0:1;                                       /* PMC3_0           */
    uint16 PMC3_1:1;                                       /* PMC3_1           */
    uint16 PMC3_2:1;                                       /* PMC3_2           */
    uint16 PMC3_3:1;                                       /* PMC3_3           */
    uint16 PMC3_4:1;                                       /* PMC3_4           */
    uint16 PMC3_5:1;                                       /* PMC3_5           */
    uint16 PMC3_6:1;                                       /* PMC3_6           */
    uint16 PMC3_7:1;                                       /* PMC3_7           */
    uint16 PMC3_8:1;                                       /* PMC3_8           */
    uint16 PMC3_9:1;                                       /* PMC3_9           */
    uint16 PMC3_10:1;                                      /* PMC3_10          */
    uint16 PMC3_11:1;                                      /* PMC3_11          */
    uint16 PMC3_12:1;                                      /* PMC3_12          */
    uint16 PMC3_13:1;                                      /* PMC3_13          */
    uint16 PMC3_14:1;                                      /* PMC3_14          */
    uint16 :1;                                             /* Reserved Bits    */
} __type183;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFC3_0:1;                                       /* PFC3_0           */
    uint16 PFC3_1:1;                                       /* PFC3_1           */
    uint16 PFC3_2:1;                                       /* PFC3_2           */
    uint16 PFC3_3:1;                                       /* PFC3_3           */
    uint16 PFC3_4:1;                                       /* PFC3_4           */
    uint16 PFC3_5:1;                                       /* PFC3_5           */
    uint16 PFC3_6:1;                                       /* PFC3_6           */
    uint16 PFC3_7:1;                                       /* PFC3_7           */
    uint16 PFC3_8:1;                                       /* PFC3_8           */
    uint16 PFC3_9:1;                                       /* PFC3_9           */
    uint16 PFC3_10:1;                                      /* PFC3_10          */
    uint16 PFC3_11:1;                                      /* PFC3_11          */
    uint16 PFC3_12:1;                                      /* PFC3_12          */
    uint16 PFC3_13:1;                                      /* PFC3_13          */
    uint16 PFC3_14:1;                                      /* PFC3_14          */
    uint16 :1;                                             /* Reserved Bits    */
} __type184;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFCE3_0:1;                                      /* PFCE3_0          */
    uint16 PFCE3_1:1;                                      /* PFCE3_1          */
    uint16 PFCE3_2:1;                                      /* PFCE3_2          */
    uint16 PFCE3_3:1;                                      /* PFCE3_3          */
    uint16 PFCE3_4:1;                                      /* PFCE3_4          */
    uint16 PFCE3_5:1;                                      /* PFCE3_5          */
    uint16 PFCE3_6:1;                                      /* PFCE3_6          */
    uint16 PFCE3_7:1;                                      /* PFCE3_7          */
    uint16 PFCE3_8:1;                                      /* PFCE3_8          */
    uint16 PFCE3_9:1;                                      /* PFCE3_9          */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 PFCE3_11:1;                                     /* PFCE3_11         */
    uint16 PFCE3_12:1;                                     /* PFCE3_12         */
    uint16 PFCE3_13:1;                                     /* PFCE3_13         */
    uint16 PFCE3_14:1;                                     /* PFCE3_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type185;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PMSR3_0:1;                                      /* PMSR3_0          */
    uint32 PMSR3_1:1;                                      /* PMSR3_1          */
    uint32 PMSR3_2:1;                                      /* PMSR3_2          */
    uint32 PMSR3_3:1;                                      /* PMSR3_3          */
    uint32 PMSR3_4:1;                                      /* PMSR3_4          */
    uint32 PMSR3_5:1;                                      /* PMSR3_5          */
    uint32 PMSR3_6:1;                                      /* PMSR3_6          */
    uint32 PMSR3_7:1;                                      /* PMSR3_7          */
    uint32 PMSR3_8:1;                                      /* PMSR3_8          */
    uint32 PMSR3_9:1;                                      /* PMSR3_9          */
    uint32 PMSR3_10:1;                                     /* PMSR3_10         */
    uint32 PMSR3_11:1;                                     /* PMSR3_11         */
    uint32 PMSR3_12:1;                                     /* PMSR3_12         */
    uint32 PMSR3_13:1;                                     /* PMSR3_13         */
    uint32 PMSR3_14:1;                                     /* PMSR3_14         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PMSR3_16:1;                                     /* PMSR3_16         */
    uint32 PMSR3_17:1;                                     /* PMSR3_17         */
    uint32 PMSR3_18:1;                                     /* PMSR3_18         */
    uint32 PMSR3_19:1;                                     /* PMSR3_19         */
    uint32 PMSR3_20:1;                                     /* PMSR3_20         */
    uint32 PMSR3_21:1;                                     /* PMSR3_21         */
    uint32 PMSR3_22:1;                                     /* PMSR3_22         */
    uint32 PMSR3_23:1;                                     /* PMSR3_23         */
    uint32 PMSR3_24:1;                                     /* PMSR3_24         */
    uint32 PMSR3_25:1;                                     /* PMSR3_25         */
    uint32 PMSR3_26:1;                                     /* PMSR3_26         */
    uint32 PMSR3_27:1;                                     /* PMSR3_27         */
    uint32 PMSR3_28:1;                                     /* PMSR3_28         */
    uint32 PMSR3_29:1;                                     /* PMSR3_29         */
    uint32 PMSR3_30:1;                                     /* PMSR3_30         */
    uint32 :1;                                             /* Reserved Bits    */
} __type186;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PMCSR3_0:1;                                     /* PMCSR3_0         */
    uint32 PMCSR3_1:1;                                     /* PMCSR3_1         */
    uint32 PMCSR3_2:1;                                     /* PMCSR3_2         */
    uint32 PMCSR3_3:1;                                     /* PMCSR3_3         */
    uint32 PMCSR3_4:1;                                     /* PMCSR3_4         */
    uint32 PMCSR3_5:1;                                     /* PMCSR3_5         */
    uint32 PMCSR3_6:1;                                     /* PMCSR3_6         */
    uint32 PMCSR3_7:1;                                     /* PMCSR3_7         */
    uint32 PMCSR3_8:1;                                     /* PMCSR3_8         */
    uint32 PMCSR3_9:1;                                     /* PMCSR3_9         */
    uint32 PMCSR3_10:1;                                    /* PMCSR3_10        */
    uint32 PMCSR3_11:1;                                    /* PMCSR3_11        */
    uint32 PMCSR3_12:1;                                    /* PMCSR3_12        */
    uint32 PMCSR3_13:1;                                    /* PMCSR3_13        */
    uint32 PMCSR3_14:1;                                    /* PMCSR3_14        */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PMCSR3_16:1;                                    /* PMCSR3_16        */
    uint32 PMCSR3_17:1;                                    /* PMCSR3_17        */
    uint32 PMCSR3_18:1;                                    /* PMCSR3_18        */
    uint32 PMCSR3_19:1;                                    /* PMCSR3_19        */
    uint32 PMCSR3_20:1;                                    /* PMCSR3_20        */
    uint32 PMCSR3_21:1;                                    /* PMCSR3_21        */
    uint32 PMCSR3_22:1;                                    /* PMCSR3_22        */
    uint32 PMCSR3_23:1;                                    /* PMCSR3_23        */
    uint32 PMCSR3_24:1;                                    /* PMCSR3_24        */
    uint32 PMCSR3_25:1;                                    /* PMCSR3_25        */
    uint32 PMCSR3_26:1;                                    /* PMCSR3_26        */
    uint32 PMCSR3_27:1;                                    /* PMCSR3_27        */
    uint32 PMCSR3_28:1;                                    /* PMCSR3_28        */
    uint32 PMCSR3_29:1;                                    /* PMCSR3_29        */
    uint32 PMCSR3_30:1;                                    /* PMCSR3_30        */
    uint32 :1;                                             /* Reserved Bits    */
} __type187;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFCAE3_0:1;                                     /* PFCAE3_0         */
    uint16 PFCAE3_1:1;                                     /* PFCAE3_1         */
    uint16 PFCAE3_2:1;                                     /* PFCAE3_2         */
    uint16 PFCAE3_3:1;                                     /* PFCAE3_3         */
    uint16 PFCAE3_4:1;                                     /* PFCAE3_4         */
    uint16 PFCAE3_5:1;                                     /* PFCAE3_5         */
    uint16 PFCAE3_6:1;                                     /* PFCAE3_6         */
    uint16 PFCAE3_7:1;                                     /* PFCAE3_7         */
    uint16 PFCAE3_8:1;                                     /* PFCAE3_8         */
    uint16 PFCAE3_9:1;                                     /* PFCAE3_9         */
    uint16 PFCAE3_10:1;                                    /* PFCAE3_10        */
    uint16 PFCAE3_11:1;                                    /* PFCAE3_11        */
    uint16 PFCAE3_12:1;                                    /* PFCAE3_12        */
    uint16 PFCAE3_13:1;                                    /* PFCAE3_13        */
    uint16 PFCAE3_14:1;                                    /* PFCAE3_14        */
    uint16 :1;                                             /* Reserved Bits    */
} __type188;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PINV3_0:1;                                      /* PINV3_0          */
    uint32 PINV3_1:1;                                      /* PINV3_1          */
    uint32 PINV3_2:1;                                      /* PINV3_2          */
    uint32 PINV3_3:1;                                      /* PINV3_3          */
    uint32 PINV3_4:1;                                      /* PINV3_4          */
    uint32 PINV3_5:1;                                      /* PINV3_5          */
    uint32 PINV3_6:1;                                      /* PINV3_6          */
    uint32 PINV3_7:1;                                      /* PINV3_7          */
    uint32 PINV3_8:1;                                      /* PINV3_8          */
    uint32 PINV3_9:1;                                      /* PINV3_9          */
    uint32 PINV3_10:1;                                     /* PINV3_10         */
    uint32 PINV3_11:1;                                     /* PINV3_11         */
    uint32 PINV3_12:1;                                     /* PINV3_12         */
    uint32 PINV3_13:1;                                     /* PINV3_13         */
    uint32 PINV3_14:1;                                     /* PINV3_14         */
    uint32 :17;                                            /* Reserved Bits    */
} __type189;
typedef struct 
{                                                          /* Bit Access       */
    uint16 P4_0:1;                                         /* P4_0             */
    uint16 P4_1:1;                                         /* P4_1             */
    uint16 P4_2:1;                                         /* P4_2             */
    uint16 P4_3:1;                                         /* P4_3             */
    uint16 P4_4:1;                                         /* P4_4             */
    uint16 P4_5:1;                                         /* P4_5             */
    uint16 P4_6:1;                                         /* P4_6             */
    uint16 P4_7:1;                                         /* P4_7             */
    uint16 P4_8:1;                                         /* P4_8             */
    uint16 P4_9:1;                                         /* P4_9             */
    uint16 P4_10:1;                                        /* P4_10            */
    uint16 P4_11:1;                                        /* P4_11            */
    uint16 P4_12:1;                                        /* P4_12            */
    uint16 P4_13:1;                                        /* P4_13            */
    uint16 P4_14:1;                                        /* P4_14            */
    uint16 :1;                                             /* Reserved Bits    */
} __type190;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PSR4_0:1;                                       /* PSR4_0           */
    uint32 PSR4_1:1;                                       /* PSR4_1           */
    uint32 PSR4_2:1;                                       /* PSR4_2           */
    uint32 PSR4_3:1;                                       /* PSR4_3           */
    uint32 PSR4_4:1;                                       /* PSR4_4           */
    uint32 PSR4_5:1;                                       /* PSR4_5           */
    uint32 PSR4_6:1;                                       /* PSR4_6           */
    uint32 PSR4_7:1;                                       /* PSR4_7           */
    uint32 PSR4_8:1;                                       /* PSR4_8           */
    uint32 PSR4_9:1;                                       /* PSR4_9           */
    uint32 PSR4_10:1;                                      /* PSR4_10          */
    uint32 PSR4_11:1;                                      /* PSR4_11          */
    uint32 PSR4_12:1;                                      /* PSR4_12          */
    uint32 PSR4_13:1;                                      /* PSR4_13          */
    uint32 PSR4_14:1;                                      /* PSR4_14          */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PSR4_16:1;                                      /* PSR4_16          */
    uint32 PSR4_17:1;                                      /* PSR4_17          */
    uint32 PSR4_18:1;                                      /* PSR4_18          */
    uint32 PSR4_19:1;                                      /* PSR4_19          */
    uint32 PSR4_20:1;                                      /* PSR4_20          */
    uint32 PSR4_21:1;                                      /* PSR4_21          */
    uint32 PSR4_22:1;                                      /* PSR4_22          */
    uint32 PSR4_23:1;                                      /* PSR4_23          */
    uint32 PSR4_24:1;                                      /* PSR4_24          */
    uint32 PSR4_25:1;                                      /* PSR4_25          */
    uint32 PSR4_26:1;                                      /* PSR4_26          */
    uint32 PSR4_27:1;                                      /* PSR4_27          */
    uint32 PSR4_28:1;                                      /* PSR4_28          */
    uint32 PSR4_29:1;                                      /* PSR4_29          */
    uint32 PSR4_30:1;                                      /* PSR4_30          */
    uint32 :1;                                             /* Reserved Bits    */
} __type191;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PNOT4_0:1;                                      /* PNOT4_0          */
    uint16 PNOT4_1:1;                                      /* PNOT4_1          */
    uint16 PNOT4_2:1;                                      /* PNOT4_2          */
    uint16 PNOT4_3:1;                                      /* PNOT4_3          */
    uint16 PNOT4_4:1;                                      /* PNOT4_4          */
    uint16 PNOT4_5:1;                                      /* PNOT4_5          */
    uint16 PNOT4_6:1;                                      /* PNOT4_6          */
    uint16 PNOT4_7:1;                                      /* PNOT4_7          */
    uint16 PNOT4_8:1;                                      /* PNOT4_8          */
    uint16 PNOT4_9:1;                                      /* PNOT4_9          */
    uint16 PNOT4_10:1;                                     /* PNOT4_10         */
    uint16 PNOT4_11:1;                                     /* PNOT4_11         */
    uint16 PNOT4_12:1;                                     /* PNOT4_12         */
    uint16 PNOT4_13:1;                                     /* PNOT4_13         */
    uint16 PNOT4_14:1;                                     /* PNOT4_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type192;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 PPR4_0:1;                                 /* PPR4_0           */
    const uint16 PPR4_1:1;                                 /* PPR4_1           */
    const uint16 PPR4_2:1;                                 /* PPR4_2           */
    const uint16 PPR4_3:1;                                 /* PPR4_3           */
    const uint16 PPR4_4:1;                                 /* PPR4_4           */
    const uint16 PPR4_5:1;                                 /* PPR4_5           */
    const uint16 PPR4_6:1;                                 /* PPR4_6           */
    const uint16 PPR4_7:1;                                 /* PPR4_7           */
    const uint16 PPR4_8:1;                                 /* PPR4_8           */
    const uint16 PPR4_9:1;                                 /* PPR4_9           */
    const uint16 PPR4_10:1;                                /* PPR4_10          */
    const uint16 PPR4_11:1;                                /* PPR4_11          */
    const uint16 PPR4_12:1;                                /* PPR4_12          */
    const uint16 PPR4_13:1;                                /* PPR4_13          */
    const uint16 PPR4_14:1;                                /* PPR4_14          */
    uint16 :1;                                             /* Reserved Bits    */
} __type193;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PM4_0:1;                                        /* PM4_0            */
    uint16 PM4_1:1;                                        /* PM4_1            */
    uint16 PM4_2:1;                                        /* PM4_2            */
    uint16 PM4_3:1;                                        /* PM4_3            */
    uint16 PM4_4:1;                                        /* PM4_4            */
    uint16 PM4_5:1;                                        /* PM4_5            */
    uint16 PM4_6:1;                                        /* PM4_6            */
    uint16 PM4_7:1;                                        /* PM4_7            */
    uint16 PM4_8:1;                                        /* PM4_8            */
    uint16 PM4_9:1;                                        /* PM4_9            */
    uint16 PM4_10:1;                                       /* PM4_10           */
    uint16 PM4_11:1;                                       /* PM4_11           */
    uint16 PM4_12:1;                                       /* PM4_12           */
    uint16 PM4_13:1;                                       /* PM4_13           */
    uint16 PM4_14:1;                                       /* PM4_14           */
    uint16 :1;                                             /* Reserved Bits    */
} __type194;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PMC4_0:1;                                       /* PMC4_0           */
    uint16 PMC4_1:1;                                       /* PMC4_1           */
    uint16 PMC4_2:1;                                       /* PMC4_2           */
    uint16 PMC4_3:1;                                       /* PMC4_3           */
    uint16 PMC4_4:1;                                       /* PMC4_4           */
    uint16 PMC4_5:1;                                       /* PMC4_5           */
    uint16 PMC4_6:1;                                       /* PMC4_6           */
    uint16 PMC4_7:1;                                       /* PMC4_7           */
    uint16 PMC4_8:1;                                       /* PMC4_8           */
    uint16 PMC4_9:1;                                       /* PMC4_9           */
    uint16 PMC4_10:1;                                      /* PMC4_10          */
    uint16 PMC4_11:1;                                      /* PMC4_11          */
    uint16 PMC4_12:1;                                      /* PMC4_12          */
    uint16 PMC4_13:1;                                      /* PMC4_13          */
    uint16 PMC4_14:1;                                      /* PMC4_14          */
    uint16 :1;                                             /* Reserved Bits    */
} __type195;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFC4_0:1;                                       /* PFC4_0           */
    uint16 PFC4_1:1;                                       /* PFC4_1           */
    uint16 PFC4_2:1;                                       /* PFC4_2           */
    uint16 PFC4_3:1;                                       /* PFC4_3           */
    uint16 PFC4_4:1;                                       /* PFC4_4           */
    uint16 PFC4_5:1;                                       /* PFC4_5           */
    uint16 PFC4_6:1;                                       /* PFC4_6           */
    uint16 PFC4_7:1;                                       /* PFC4_7           */
    uint16 PFC4_8:1;                                       /* PFC4_8           */
    uint16 PFC4_9:1;                                       /* PFC4_9           */
    uint16 PFC4_10:1;                                      /* PFC4_10          */
    uint16 PFC4_11:1;                                      /* PFC4_11          */
    uint16 PFC4_12:1;                                      /* PFC4_12          */
    uint16 PFC4_13:1;                                      /* PFC4_13          */
    uint16 PFC4_14:1;                                      /* PFC4_14          */
    uint16 :1;                                             /* Reserved Bits    */
} __type196;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFCE4_0:1;                                      /* PFCE4_0          */
    uint16 PFCE4_1:1;                                      /* PFCE4_1          */
    uint16 PFCE4_2:1;                                      /* PFCE4_2          */
    uint16 PFCE4_3:1;                                      /* PFCE4_3          */
    uint16 PFCE4_4:1;                                      /* PFCE4_4          */
    uint16 PFCE4_5:1;                                      /* PFCE4_5          */
    uint16 PFCE4_6:1;                                      /* PFCE4_6          */
    uint16 PFCE4_7:1;                                      /* PFCE4_7          */
    uint16 PFCE4_8:1;                                      /* PFCE4_8          */
    uint16 PFCE4_9:1;                                      /* PFCE4_9          */
    uint16 PFCE4_10:1;                                     /* PFCE4_10         */
    uint16 PFCE4_11:1;                                     /* PFCE4_11         */
    uint16 PFCE4_12:1;                                     /* PFCE4_12         */
    uint16 PFCE4_13:1;                                     /* PFCE4_13         */
    uint16 PFCE4_14:1;                                     /* PFCE4_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type197;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PMSR4_0:1;                                      /* PMSR4_0          */
    uint32 PMSR4_1:1;                                      /* PMSR4_1          */
    uint32 PMSR4_2:1;                                      /* PMSR4_2          */
    uint32 PMSR4_3:1;                                      /* PMSR4_3          */
    uint32 PMSR4_4:1;                                      /* PMSR4_4          */
    uint32 PMSR4_5:1;                                      /* PMSR4_5          */
    uint32 PMSR4_6:1;                                      /* PMSR4_6          */
    uint32 PMSR4_7:1;                                      /* PMSR4_7          */
    uint32 PMSR4_8:1;                                      /* PMSR4_8          */
    uint32 PMSR4_9:1;                                      /* PMSR4_9          */
    uint32 PMSR4_10:1;                                     /* PMSR4_10         */
    uint32 PMSR4_11:1;                                     /* PMSR4_11         */
    uint32 PMSR4_12:1;                                     /* PMSR4_12         */
    uint32 PMSR4_13:1;                                     /* PMSR4_13         */
    uint32 PMSR4_14:1;                                     /* PMSR4_14         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PMSR4_16:1;                                     /* PMSR4_16         */
    uint32 PMSR4_17:1;                                     /* PMSR4_17         */
    uint32 PMSR4_18:1;                                     /* PMSR4_18         */
    uint32 PMSR4_19:1;                                     /* PMSR4_19         */
    uint32 PMSR4_20:1;                                     /* PMSR4_20         */
    uint32 PMSR4_21:1;                                     /* PMSR4_21         */
    uint32 PMSR4_22:1;                                     /* PMSR4_22         */
    uint32 PMSR4_23:1;                                     /* PMSR4_23         */
    uint32 PMSR4_24:1;                                     /* PMSR4_24         */
    uint32 PMSR4_25:1;                                     /* PMSR4_25         */
    uint32 PMSR4_26:1;                                     /* PMSR4_26         */
    uint32 PMSR4_27:1;                                     /* PMSR4_27         */
    uint32 PMSR4_28:1;                                     /* PMSR4_28         */
    uint32 PMSR4_29:1;                                     /* PMSR4_29         */
    uint32 PMSR4_30:1;                                     /* PMSR4_30         */
    uint32 :1;                                             /* Reserved Bits    */
} __type198;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PMCSR4_0:1;                                     /* PMCSR4_0         */
    uint32 PMCSR4_1:1;                                     /* PMCSR4_1         */
    uint32 PMCSR4_2:1;                                     /* PMCSR4_2         */
    uint32 PMCSR4_3:1;                                     /* PMCSR4_3         */
    uint32 PMCSR4_4:1;                                     /* PMCSR4_4         */
    uint32 PMCSR4_5:1;                                     /* PMCSR4_5         */
    uint32 PMCSR4_6:1;                                     /* PMCSR4_6         */
    uint32 PMCSR4_7:1;                                     /* PMCSR4_7         */
    uint32 PMCSR4_8:1;                                     /* PMCSR4_8         */
    uint32 PMCSR4_9:1;                                     /* PMCSR4_9         */
    uint32 PMCSR4_10:1;                                    /* PMCSR4_10        */
    uint32 PMCSR4_11:1;                                    /* PMCSR4_11        */
    uint32 PMCSR4_12:1;                                    /* PMCSR4_12        */
    uint32 PMCSR4_13:1;                                    /* PMCSR4_13        */
    uint32 PMCSR4_14:1;                                    /* PMCSR4_14        */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PMCSR4_16:1;                                    /* PMCSR4_16        */
    uint32 PMCSR4_17:1;                                    /* PMCSR4_17        */
    uint32 PMCSR4_18:1;                                    /* PMCSR4_18        */
    uint32 PMCSR4_19:1;                                    /* PMCSR4_19        */
    uint32 PMCSR4_20:1;                                    /* PMCSR4_20        */
    uint32 PMCSR4_21:1;                                    /* PMCSR4_21        */
    uint32 PMCSR4_22:1;                                    /* PMCSR4_22        */
    uint32 PMCSR4_23:1;                                    /* PMCSR4_23        */
    uint32 PMCSR4_24:1;                                    /* PMCSR4_24        */
    uint32 PMCSR4_25:1;                                    /* PMCSR4_25        */
    uint32 PMCSR4_26:1;                                    /* PMCSR4_26        */
    uint32 PMCSR4_27:1;                                    /* PMCSR4_27        */
    uint32 PMCSR4_28:1;                                    /* PMCSR4_28        */
    uint32 PMCSR4_29:1;                                    /* PMCSR4_29        */
    uint32 PMCSR4_30:1;                                    /* PMCSR4_30        */
    uint32 :1;                                             /* Reserved Bits    */
} __type199;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFCAE4_0:1;                                     /* PFCAE4_0         */
    uint16 PFCAE4_1:1;                                     /* PFCAE4_1         */
    uint16 PFCAE4_2:1;                                     /* PFCAE4_2         */
    uint16 PFCAE4_3:1;                                     /* PFCAE4_3         */
    uint16 PFCAE4_4:1;                                     /* PFCAE4_4         */
    uint16 PFCAE4_5:1;                                     /* PFCAE4_5         */
    uint16 PFCAE4_6:1;                                     /* PFCAE4_6         */
    uint16 PFCAE4_7:1;                                     /* PFCAE4_7         */
    uint16 PFCAE4_8:1;                                     /* PFCAE4_8         */
    uint16 PFCAE4_9:1;                                     /* PFCAE4_9         */
    uint16 PFCAE4_10:1;                                    /* PFCAE4_10        */
    uint16 PFCAE4_11:1;                                    /* PFCAE4_11        */
    uint16 PFCAE4_12:1;                                    /* PFCAE4_12        */
    uint16 PFCAE4_13:1;                                    /* PFCAE4_13        */
    uint16 PFCAE4_14:1;                                    /* PFCAE4_14        */
    uint16 :1;                                             /* Reserved Bits    */
} __type200;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PINV4_0:1;                                      /* PINV4_0          */
    uint32 PINV4_1:1;                                      /* PINV4_1          */
    uint32 PINV4_2:1;                                      /* PINV4_2          */
    uint32 PINV4_3:1;                                      /* PINV4_3          */
    uint32 PINV4_4:1;                                      /* PINV4_4          */
    uint32 PINV4_5:1;                                      /* PINV4_5          */
    uint32 PINV4_6:1;                                      /* PINV4_6          */
    uint32 PINV4_7:1;                                      /* PINV4_7          */
    uint32 PINV4_8:1;                                      /* PINV4_8          */
    uint32 PINV4_9:1;                                      /* PINV4_9          */
    uint32 PINV4_10:1;                                     /* PINV4_10         */
    uint32 PINV4_11:1;                                     /* PINV4_11         */
    uint32 PINV4_12:1;                                     /* PINV4_12         */
    uint32 PINV4_13:1;                                     /* PINV4_13         */
    uint32 PINV4_14:1;                                     /* PINV4_14         */
    uint32 :17;                                            /* Reserved Bits    */
} __type201;
typedef struct 
{                                                          /* Bit Access       */
    uint16 P5_0:1;                                         /* P5_0             */
    uint16 P5_1:1;                                         /* P5_1             */
    uint16 P5_2:1;                                         /* P5_2             */
    uint16 P5_3:1;                                         /* P5_3             */
    uint16 P5_4:1;                                         /* P5_4             */
    uint16 P5_5:1;                                         /* P5_5             */
    uint16 P5_6:1;                                         /* P5_6             */
    uint16 P5_7:1;                                         /* P5_7             */
    uint16 P5_8:1;                                         /* P5_8             */
    uint16 P5_9:1;                                         /* P5_9             */
    uint16 P5_10:1;                                        /* P5_10            */
    uint16 P5_11:1;                                        /* P5_11            */
    uint16 P5_12:1;                                        /* P5_12            */
    uint16 P5_13:1;                                        /* P5_13            */
    uint16 P5_14:1;                                        /* P5_14            */
    uint16 P5_15:1;                                        /* P5_15            */
} __type202;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PSR5_0:1;                                       /* PSR5_0           */
    uint32 PSR5_1:1;                                       /* PSR5_1           */
    uint32 PSR5_2:1;                                       /* PSR5_2           */
    uint32 PSR5_3:1;                                       /* PSR5_3           */
    uint32 PSR5_4:1;                                       /* PSR5_4           */
    uint32 PSR5_5:1;                                       /* PSR5_5           */
    uint32 PSR5_6:1;                                       /* PSR5_6           */
    uint32 PSR5_7:1;                                       /* PSR5_7           */
    uint32 PSR5_8:1;                                       /* PSR5_8           */
    uint32 PSR5_9:1;                                       /* PSR5_9           */
    uint32 PSR5_10:1;                                      /* PSR5_10          */
    uint32 PSR5_11:1;                                      /* PSR5_11          */
    uint32 PSR5_12:1;                                      /* PSR5_12          */
    uint32 PSR5_13:1;                                      /* PSR5_13          */
    uint32 PSR5_14:1;                                      /* PSR5_14          */
    uint32 PSR5_15:1;                                      /* PSR5_15          */
    uint32 PSR5_16:1;                                      /* PSR5_16          */
    uint32 PSR5_17:1;                                      /* PSR5_17          */
    uint32 PSR5_18:1;                                      /* PSR5_18          */
    uint32 PSR5_19:1;                                      /* PSR5_19          */
    uint32 PSR5_20:1;                                      /* PSR5_20          */
    uint32 PSR5_21:1;                                      /* PSR5_21          */
    uint32 PSR5_22:1;                                      /* PSR5_22          */
    uint32 PSR5_23:1;                                      /* PSR5_23          */
    uint32 PSR5_24:1;                                      /* PSR5_24          */
    uint32 PSR5_25:1;                                      /* PSR5_25          */
    uint32 PSR5_26:1;                                      /* PSR5_26          */
    uint32 PSR5_27:1;                                      /* PSR5_27          */
    uint32 PSR5_28:1;                                      /* PSR5_28          */
    uint32 PSR5_29:1;                                      /* PSR5_29          */
    uint32 PSR5_30:1;                                      /* PSR5_30          */
    uint32 PSR5_31:1;                                      /* PSR5_31          */
} __type203;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PNOT5_0:1;                                      /* PNOT5_0          */
    uint16 PNOT5_1:1;                                      /* PNOT5_1          */
    uint16 PNOT5_2:1;                                      /* PNOT5_2          */
    uint16 PNOT5_3:1;                                      /* PNOT5_3          */
    uint16 PNOT5_4:1;                                      /* PNOT5_4          */
    uint16 PNOT5_5:1;                                      /* PNOT5_5          */
    uint16 PNOT5_6:1;                                      /* PNOT5_6          */
    uint16 PNOT5_7:1;                                      /* PNOT5_7          */
    uint16 PNOT5_8:1;                                      /* PNOT5_8          */
    uint16 PNOT5_9:1;                                      /* PNOT5_9          */
    uint16 PNOT5_10:1;                                     /* PNOT5_10         */
    uint16 PNOT5_11:1;                                     /* PNOT5_11         */
    uint16 PNOT5_12:1;                                     /* PNOT5_12         */
    uint16 PNOT5_13:1;                                     /* PNOT5_13         */
    uint16 PNOT5_14:1;                                     /* PNOT5_14         */
    uint16 PNOT5_15:1;                                     /* PNOT5_15         */
} __type204;
typedef struct 
{                                                          /* Bit Access       */
    const uint16 PPR5_0:1;                                 /* PPR5_0           */
    const uint16 PPR5_1:1;                                 /* PPR5_1           */
    const uint16 PPR5_2:1;                                 /* PPR5_2           */
    const uint16 PPR5_3:1;                                 /* PPR5_3           */
    const uint16 PPR5_4:1;                                 /* PPR5_4           */
    const uint16 PPR5_5:1;                                 /* PPR5_5           */
    const uint16 PPR5_6:1;                                 /* PPR5_6           */
    const uint16 PPR5_7:1;                                 /* PPR5_7           */
    const uint16 PPR5_8:1;                                 /* PPR5_8           */
    const uint16 PPR5_9:1;                                 /* PPR5_9           */
    const uint16 PPR5_10:1;                                /* PPR5_10          */
    const uint16 PPR5_11:1;                                /* PPR5_11          */
    const uint16 PPR5_12:1;                                /* PPR5_12          */
    const uint16 PPR5_13:1;                                /* PPR5_13          */
    const uint16 PPR5_14:1;                                /* PPR5_14          */
    const uint16 PPR5_15:1;                                /* PPR5_15          */
} __type205;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PM5_0:1;                                        /* PM5_0            */
    uint16 PM5_1:1;                                        /* PM5_1            */
    uint16 PM5_2:1;                                        /* PM5_2            */
    uint16 PM5_3:1;                                        /* PM5_3            */
    uint16 PM5_4:1;                                        /* PM5_4            */
    uint16 PM5_5:1;                                        /* PM5_5            */
    uint16 PM5_6:1;                                        /* PM5_6            */
    uint16 PM5_7:1;                                        /* PM5_7            */
    uint16 PM5_8:1;                                        /* PM5_8            */
    uint16 PM5_9:1;                                        /* PM5_9            */
    uint16 PM5_10:1;                                       /* PM5_10           */
    uint16 PM5_11:1;                                       /* PM5_11           */
    uint16 PM5_12:1;                                       /* PM5_12           */
    uint16 PM5_13:1;                                       /* PM5_13           */
    uint16 PM5_14:1;                                       /* PM5_14           */
    uint16 PM5_15:1;                                       /* PM5_15           */
} __type206;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PMC5_0:1;                                       /* PMC5_0           */
    uint16 PMC5_1:1;                                       /* PMC5_1           */
    uint16 PMC5_2:1;                                       /* PMC5_2           */
    uint16 PMC5_3:1;                                       /* PMC5_3           */
    uint16 PMC5_4:1;                                       /* PMC5_4           */
    uint16 PMC5_5:1;                                       /* PMC5_5           */
    uint16 PMC5_6:1;                                       /* PMC5_6           */
    uint16 PMC5_7:1;                                       /* PMC5_7           */
    uint16 PMC5_8:1;                                       /* PMC5_8           */
    uint16 PMC5_9:1;                                       /* PMC5_9           */
    uint16 PMC5_10:1;                                      /* PMC5_10          */
    uint16 PMC5_11:1;                                      /* PMC5_11          */
    uint16 PMC5_12:1;                                      /* PMC5_12          */
    uint16 PMC5_13:1;                                      /* PMC5_13          */
    uint16 PMC5_14:1;                                      /* PMC5_14          */
    uint16 PMC5_15:1;                                      /* PMC5_15          */
} __type207;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFC5_0:1;                                       /* PFC5_0           */
    uint16 PFC5_1:1;                                       /* PFC5_1           */
    uint16 PFC5_2:1;                                       /* PFC5_2           */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 PFC5_4:1;                                       /* PFC5_4           */
    uint16 PFC5_5:1;                                       /* PFC5_5           */
    uint16 PFC5_6:1;                                       /* PFC5_6           */
    uint16 PFC5_7:1;                                       /* PFC5_7           */
    uint16 PFC5_8:1;                                       /* PFC5_8           */
    uint16 PFC5_9:1;                                       /* PFC5_9           */
    uint16 PFC5_10:1;                                      /* PFC5_10          */
    uint16 PFC5_11:1;                                      /* PFC5_11          */
    uint16 PFC5_12:1;                                      /* PFC5_12          */
    uint16 PFC5_13:1;                                      /* PFC5_13          */
    uint16 PFC5_14:1;                                      /* PFC5_14          */
    uint16 PFC5_15:1;                                      /* PFC5_15          */
} __type208;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFCE5_0:1;                                      /* PFCE5_0          */
    uint16 PFCE5_1:1;                                      /* PFCE5_1          */
    uint16 PFCE5_2:1;                                      /* PFCE5_2          */
    uint16 PFCE5_3:1;                                      /* PFCE5_3          */
    uint16 PFCE5_4:1;                                      /* PFCE5_4          */
    uint16 PFCE5_5:1;                                      /* PFCE5_5          */
    uint16 PFCE5_6:1;                                      /* PFCE5_6          */
    uint16 PFCE5_7:1;                                      /* PFCE5_7          */
    uint16 PFCE5_8:1;                                      /* PFCE5_8          */
    uint16 PFCE5_9:1;                                      /* PFCE5_9          */
    uint16 PFCE5_10:1;                                     /* PFCE5_10         */
    uint16 PFCE5_11:1;                                     /* PFCE5_11         */
    uint16 PFCE5_12:1;                                     /* PFCE5_12         */
    uint16 PFCE5_13:1;                                     /* PFCE5_13         */
    uint16 PFCE5_14:1;                                     /* PFCE5_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type209;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PMSR5_0:1;                                      /* PMSR5_0          */
    uint32 PMSR5_1:1;                                      /* PMSR5_1          */
    uint32 PMSR5_2:1;                                      /* PMSR5_2          */
    uint32 PMSR5_3:1;                                      /* PMSR5_3          */
    uint32 PMSR5_4:1;                                      /* PMSR5_4          */
    uint32 PMSR5_5:1;                                      /* PMSR5_5          */
    uint32 PMSR5_6:1;                                      /* PMSR5_6          */
    uint32 PMSR5_7:1;                                      /* PMSR5_7          */
    uint32 PMSR5_8:1;                                      /* PMSR5_8          */
    uint32 PMSR5_9:1;                                      /* PMSR5_9          */
    uint32 PMSR5_10:1;                                     /* PMSR5_10         */
    uint32 PMSR5_11:1;                                     /* PMSR5_11         */
    uint32 PMSR5_12:1;                                     /* PMSR5_12         */
    uint32 PMSR5_13:1;                                     /* PMSR5_13         */
    uint32 PMSR5_14:1;                                     /* PMSR5_14         */
    uint32 PMSR5_15:1;                                     /* PMSR5_15         */
    uint32 PMSR5_16:1;                                     /* PMSR5_16         */
    uint32 PMSR5_17:1;                                     /* PMSR5_17         */
    uint32 PMSR5_18:1;                                     /* PMSR5_18         */
    uint32 PMSR5_19:1;                                     /* PMSR5_19         */
    uint32 PMSR5_20:1;                                     /* PMSR5_20         */
    uint32 PMSR5_21:1;                                     /* PMSR5_21         */
    uint32 PMSR5_22:1;                                     /* PMSR5_22         */
    uint32 PMSR5_23:1;                                     /* PMSR5_23         */
    uint32 PMSR5_24:1;                                     /* PMSR5_24         */
    uint32 PMSR5_25:1;                                     /* PMSR5_25         */
    uint32 PMSR5_26:1;                                     /* PMSR5_26         */
    uint32 PMSR5_27:1;                                     /* PMSR5_27         */
    uint32 PMSR5_28:1;                                     /* PMSR5_28         */
    uint32 PMSR5_29:1;                                     /* PMSR5_29         */
    uint32 PMSR5_30:1;                                     /* PMSR5_30         */
    uint32 PMSR5_31:1;                                     /* PMSR5_31         */
} __type210;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PMCSR5_0:1;                                     /* PMCSR5_0         */
    uint32 PMCSR5_1:1;                                     /* PMCSR5_1         */
    uint32 PMCSR5_2:1;                                     /* PMCSR5_2         */
    uint32 PMCSR5_3:1;                                     /* PMCSR5_3         */
    uint32 PMCSR5_4:1;                                     /* PMCSR5_4         */
    uint32 PMCSR5_5:1;                                     /* PMCSR5_5         */
    uint32 PMCSR5_6:1;                                     /* PMCSR5_6         */
    uint32 PMCSR5_7:1;                                     /* PMCSR5_7         */
    uint32 PMCSR5_8:1;                                     /* PMCSR5_8         */
    uint32 PMCSR5_9:1;                                     /* PMCSR5_9         */
    uint32 PMCSR5_10:1;                                    /* PMCSR5_10        */
    uint32 PMCSR5_11:1;                                    /* PMCSR5_11        */
    uint32 PMCSR5_12:1;                                    /* PMCSR5_12        */
    uint32 PMCSR5_13:1;                                    /* PMCSR5_13        */
    uint32 PMCSR5_14:1;                                    /* PMCSR5_14        */
    uint32 PMCSR5_15:1;                                    /* PMCSR5_15        */
    uint32 PMCSR5_16:1;                                    /* PMCSR5_16        */
    uint32 PMCSR5_17:1;                                    /* PMCSR5_17        */
    uint32 PMCSR5_18:1;                                    /* PMCSR5_18        */
    uint32 PMCSR5_19:1;                                    /* PMCSR5_19        */
    uint32 PMCSR5_20:1;                                    /* PMCSR5_20        */
    uint32 PMCSR5_21:1;                                    /* PMCSR5_21        */
    uint32 PMCSR5_22:1;                                    /* PMCSR5_22        */
    uint32 PMCSR5_23:1;                                    /* PMCSR5_23        */
    uint32 PMCSR5_24:1;                                    /* PMCSR5_24        */
    uint32 PMCSR5_25:1;                                    /* PMCSR5_25        */
    uint32 PMCSR5_26:1;                                    /* PMCSR5_26        */
    uint32 PMCSR5_27:1;                                    /* PMCSR5_27        */
    uint32 PMCSR5_28:1;                                    /* PMCSR5_28        */
    uint32 PMCSR5_29:1;                                    /* PMCSR5_29        */
    uint32 PMCSR5_30:1;                                    /* PMCSR5_30        */
    uint32 PMCSR5_31:1;                                    /* PMCSR5_31        */
} __type211;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PFCAE5_0:1;                                     /* PFCAE5_0         */
    uint16 PFCAE5_1:1;                                     /* PFCAE5_1         */
    uint16 PFCAE5_2:1;                                     /* PFCAE5_2         */
    uint16 PFCAE5_3:1;                                     /* PFCAE5_3         */
    uint16 PFCAE5_4:1;                                     /* PFCAE5_4         */
    uint16 PFCAE5_5:1;                                     /* PFCAE5_5         */
    uint16 PFCAE5_6:1;                                     /* PFCAE5_6         */
    uint16 PFCAE5_7:1;                                     /* PFCAE5_7         */
    uint16 PFCAE5_8:1;                                     /* PFCAE5_8         */
    uint16 PFCAE5_9:1;                                     /* PFCAE5_9         */
    uint16 PFCAE5_10:1;                                    /* PFCAE5_10        */
    uint16 :2;                                             /* Reserved Bits    */
    uint16 PFCAE5_13:1;                                    /* PFCAE5_13        */
    uint16 PFCAE5_14:1;                                    /* PFCAE5_14        */
    uint16 PFCAE5_15:1;                                    /* PFCAE5_15        */
} __type212;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PINV5_0:1;                                      /* PINV5_0          */
    uint32 PINV5_1:1;                                      /* PINV5_1          */
    uint32 PINV5_2:1;                                      /* PINV5_2          */
    uint32 PINV5_3:1;                                      /* PINV5_3          */
    uint32 PINV5_4:1;                                      /* PINV5_4          */
    uint32 PINV5_5:1;                                      /* PINV5_5          */
    uint32 PINV5_6:1;                                      /* PINV5_6          */
    uint32 PINV5_7:1;                                      /* PINV5_7          */
    uint32 PINV5_8:1;                                      /* PINV5_8          */
    uint32 PINV5_9:1;                                      /* PINV5_9          */
    uint32 PINV5_10:1;                                     /* PINV5_10         */
    uint32 PINV5_11:1;                                     /* PINV5_11         */
    uint32 PINV5_12:1;                                     /* PINV5_12         */
    uint32 PINV5_13:1;                                     /* PINV5_13         */
    uint32 PINV5_14:1;                                     /* PINV5_14         */
    uint32 PINV5_15:1;                                     /* PINV5_15         */
    uint32 :16;                                            /* Reserved Bits    */
} __type213;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PFC:1;                                          /* PFC              */
    uint32 PFCE:1;                                         /* PFCE             */
    uint32 PFCAE:1;                                        /* PFCAE            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PM:1;                                           /* PM               */
    uint32 PIPC:1;                                         /* PIPC             */
    uint32 PMC:1;                                          /* PMC              */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PPR:1;                                    /* PPR              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 P:1;                                            /* P                */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 PIBC:1;                                         /* PIBC             */
    uint32 PBDC:1;                                         /* PBDC             */
    uint32 PD:1;                                           /* PD               */
    uint32 PU:1;                                           /* PU               */
    uint32 :4;                                             /* Reserved Bits    */
    const uint32 PDSC:1;                                   /* PDSC             */
    const uint32 PUCC:1;                                   /* PUCC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PODCE:1;                                  /* PODCE            */
    const uint32 PODC:1;                                   /* PODC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PINV:1;                                   /* PINV             */
    uint32 :1;                                             /* Reserved Bits    */
} __type214;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PFC:1;                                          /* PFC              */
    uint32 PFCE:1;                                         /* PFCE             */
    uint32 PFCAE:1;                                        /* PFCAE            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PM:1;                                           /* PM               */
    uint32 PIPC:1;                                         /* PIPC             */
    uint32 PMC:1;                                          /* PMC              */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PPR:1;                                    /* PPR              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 P:1;                                            /* P                */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 PIBC:1;                                         /* PIBC             */
    uint32 PBDC:1;                                         /* PBDC             */
    uint32 PD:1;                                           /* PD               */
    uint32 PU:1;                                           /* PU               */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 PISA:1;                                         /* PISA             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PDSC:1;                                   /* PDSC             */
    const uint32 PUCC:1;                                   /* PUCC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PODCE:1;                                  /* PODCE            */
    const uint32 PODC:1;                                   /* PODC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PINV:1;                                   /* PINV             */
    uint32 :1;                                             /* Reserved Bits    */
} __type215;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PFC:1;                                          /* PFC              */
    uint32 PFCE:1;                                         /* PFCE             */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 PM:1;                                           /* PM               */
    uint32 PIPC:1;                                         /* PIPC             */
    uint32 PMC:1;                                          /* PMC              */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PPR:1;                                    /* PPR              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 P:1;                                            /* P                */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 PIBC:1;                                         /* PIBC             */
    uint32 PBDC:1;                                         /* PBDC             */
    uint32 PD:1;                                           /* PD               */
    uint32 PU:1;                                           /* PU               */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 PISA:1;                                         /* PISA             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PDSC:1;                                   /* PDSC             */
    const uint32 PUCC:1;                                   /* PUCC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PODCE:1;                                  /* PODCE            */
    const uint32 PODC:1;                                   /* PODC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PINV:1;                                   /* PINV             */
    uint32 :1;                                             /* Reserved Bits    */
} __type216;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PFC:1;                                          /* PFC              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 PM:1;                                           /* PM               */
    uint32 PIPC:1;                                         /* PIPC             */
    uint32 PMC:1;                                          /* PMC              */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PPR:1;                                    /* PPR              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 P:1;                                            /* P                */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 PIBC:1;                                         /* PIBC             */
    uint32 PBDC:1;                                         /* PBDC             */
    uint32 PD:1;                                           /* PD               */
    uint32 PU:1;                                           /* PU               */
    uint32 :4;                                             /* Reserved Bits    */
    const uint32 PDSC:1;                                   /* PDSC             */
    const uint32 PUCC:1;                                   /* PUCC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PODCE:1;                                  /* PODCE            */
    const uint32 PODC:1;                                   /* PODC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PINV:1;                                   /* PINV             */
    uint32 :1;                                             /* Reserved Bits    */
} __type217;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PFC:1;                                          /* PFC              */
    uint32 PFCE:1;                                         /* PFCE             */
    uint32 PFCAE:1;                                        /* PFCAE            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PM:1;                                           /* PM               */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PMC:1;                                          /* PMC              */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PPR:1;                                    /* PPR              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 P:1;                                            /* P                */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 PIBC:1;                                         /* PIBC             */
    uint32 PBDC:1;                                         /* PBDC             */
    uint32 PD:1;                                           /* PD               */
    uint32 PU:1;                                           /* PU               */
    uint32 :4;                                             /* Reserved Bits    */
    const uint32 PDSC:1;                                   /* PDSC             */
    const uint32 PUCC:1;                                   /* PUCC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PODCE:1;                                  /* PODCE            */
    const uint32 PODC:1;                                   /* PODC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PINV:1;                                   /* PINV             */
    uint32 :1;                                             /* Reserved Bits    */
} __type218;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PFC:1;                                          /* PFC              */
    uint32 PFCE:1;                                         /* PFCE             */
    uint32 PFCAE:1;                                        /* PFCAE            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PM:1;                                           /* PM               */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PMC:1;                                          /* PMC              */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PPR:1;                                    /* PPR              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 P:1;                                            /* P                */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 PIBC:1;                                         /* PIBC             */
    uint32 PBDC:1;                                         /* PBDC             */
    uint32 PD:1;                                           /* PD               */
    uint32 PU:1;                                           /* PU               */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 PISA:1;                                         /* PISA             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PDSC:1;                                   /* PDSC             */
    const uint32 PUCC:1;                                   /* PUCC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PODCE:1;                                  /* PODCE            */
    const uint32 PODC:1;                                   /* PODC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PINV:1;                                   /* PINV             */
    uint32 :1;                                             /* Reserved Bits    */
} __type219;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PFC:1;                                          /* PFC              */
    uint32 PFCE:1;                                         /* PFCE             */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 PM:1;                                           /* PM               */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PMC:1;                                          /* PMC              */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PPR:1;                                    /* PPR              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 P:1;                                            /* P                */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 PIBC:1;                                         /* PIBC             */
    uint32 PBDC:1;                                         /* PBDC             */
    uint32 PD:1;                                           /* PD               */
    uint32 PU:1;                                           /* PU               */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 PISA:1;                                         /* PISA             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PDSC:1;                                   /* PDSC             */
    const uint32 PUCC:1;                                   /* PUCC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PODCE:1;                                  /* PODCE            */
    const uint32 PODC:1;                                   /* PODC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PINV:1;                                   /* PINV             */
    uint32 :1;                                             /* Reserved Bits    */
} __type220;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PFC:1;                                          /* PFC              */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PFCAE:1;                                        /* PFCAE            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PM:1;                                           /* PM               */
    uint32 PIPC:1;                                         /* PIPC             */
    uint32 PMC:1;                                          /* PMC              */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PPR:1;                                    /* PPR              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 P:1;                                            /* P                */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 PIBC:1;                                         /* PIBC             */
    uint32 PBDC:1;                                         /* PBDC             */
    uint32 PD:1;                                           /* PD               */
    uint32 PU:1;                                           /* PU               */
    uint32 :4;                                             /* Reserved Bits    */
    const uint32 PDSC:1;                                   /* PDSC             */
    const uint32 PUCC:1;                                   /* PUCC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PODCE:1;                                  /* PODCE            */
    const uint32 PODC:1;                                   /* PODC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PINV:1;                                   /* PINV             */
    uint32 :1;                                             /* Reserved Bits    */
} __type221;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PFCE:1;                                         /* PFCE             */
    uint32 PFCAE:1;                                        /* PFCAE            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PM:1;                                           /* PM               */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PMC:1;                                          /* PMC              */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PPR:1;                                    /* PPR              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 P:1;                                            /* P                */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 PIBC:1;                                         /* PIBC             */
    uint32 PBDC:1;                                         /* PBDC             */
    uint32 PD:1;                                           /* PD               */
    uint32 PU:1;                                           /* PU               */
    uint32 :4;                                             /* Reserved Bits    */
    const uint32 PDSC:1;                                   /* PDSC             */
    const uint32 PUCC:1;                                   /* PUCC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PODCE:1;                                  /* PODCE            */
    const uint32 PODC:1;                                   /* PODC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PINV:1;                                   /* PINV             */
    uint32 :1;                                             /* Reserved Bits    */
} __type222;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PFC:1;                                          /* PFC              */
    uint32 PFCE:1;                                         /* PFCE             */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 PM:1;                                           /* PM               */
    uint32 PIPC:1;                                         /* PIPC             */
    uint32 PMC:1;                                          /* PMC              */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PPR:1;                                    /* PPR              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 P:1;                                            /* P                */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 PIBC:1;                                         /* PIBC             */
    uint32 PBDC:1;                                         /* PBDC             */
    uint32 PD:1;                                           /* PD               */
    uint32 PU:1;                                           /* PU               */
    uint32 :4;                                             /* Reserved Bits    */
    const uint32 PDSC:1;                                   /* PDSC             */
    const uint32 PUCC:1;                                   /* PUCC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PODCE:1;                                  /* PODCE            */
    const uint32 PODC:1;                                   /* PODC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PINV:1;                                   /* PINV             */
    uint32 :1;                                             /* Reserved Bits    */
} __type223;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PFC:1;                                          /* PFC              */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PFCAE:1;                                        /* PFCAE            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PM:1;                                           /* PM               */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 PMC:1;                                          /* PMC              */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PPR:1;                                    /* PPR              */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 P:1;                                            /* P                */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 PIBC:1;                                         /* PIBC             */
    uint32 PBDC:1;                                         /* PBDC             */
    uint32 PD:1;                                           /* PD               */
    uint32 PU:1;                                           /* PU               */
    uint32 :4;                                             /* Reserved Bits    */
    const uint32 PDSC:1;                                   /* PDSC             */
    const uint32 PUCC:1;                                   /* PUCC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PODCE:1;                                  /* PODCE            */
    const uint32 PODC:1;                                   /* PODC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 PINV:1;                                   /* PINV             */
    uint32 :1;                                             /* Reserved Bits    */
} __type224;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PIBC0_0:1;                                      /* PIBC0_0          */
    uint16 PIBC0_1:1;                                      /* PIBC0_1          */
    uint16 PIBC0_2:1;                                      /* PIBC0_2          */
    uint16 PIBC0_3:1;                                      /* PIBC0_3          */
    uint16 PIBC0_4:1;                                      /* PIBC0_4          */
    uint16 PIBC0_5:1;                                      /* PIBC0_5          */
    uint16 PIBC0_6:1;                                      /* PIBC0_6          */
    uint16 PIBC0_7:1;                                      /* PIBC0_7          */
    uint16 PIBC0_8:1;                                      /* PIBC0_8          */
    uint16 PIBC0_9:1;                                      /* PIBC0_9          */
    uint16 PIBC0_10:1;                                     /* PIBC0_10         */
    uint16 PIBC0_11:1;                                     /* PIBC0_11         */
    uint16 PIBC0_12:1;                                     /* PIBC0_12         */
    uint16 PIBC0_13:1;                                     /* PIBC0_13         */
    uint16 PIBC0_14:1;                                     /* PIBC0_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type225;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PBDC0_0:1;                                      /* PBDC0_0          */
    uint16 PBDC0_1:1;                                      /* PBDC0_1          */
    uint16 PBDC0_2:1;                                      /* PBDC0_2          */
    uint16 PBDC0_3:1;                                      /* PBDC0_3          */
    uint16 PBDC0_4:1;                                      /* PBDC0_4          */
    uint16 PBDC0_5:1;                                      /* PBDC0_5          */
    uint16 PBDC0_6:1;                                      /* PBDC0_6          */
    uint16 PBDC0_7:1;                                      /* PBDC0_7          */
    uint16 PBDC0_8:1;                                      /* PBDC0_8          */
    uint16 PBDC0_9:1;                                      /* PBDC0_9          */
    uint16 PBDC0_10:1;                                     /* PBDC0_10         */
    uint16 PBDC0_11:1;                                     /* PBDC0_11         */
    uint16 PBDC0_12:1;                                     /* PBDC0_12         */
    uint16 PBDC0_13:1;                                     /* PBDC0_13         */
    uint16 PBDC0_14:1;                                     /* PBDC0_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type226;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PIPC0_0:1;                                      /* PIPC0_0          */
    uint16 PIPC0_1:1;                                      /* PIPC0_1          */
    uint16 PIPC0_2:1;                                      /* PIPC0_2          */
    uint16 PIPC0_3:1;                                      /* PIPC0_3          */
    uint16 PIPC0_4:1;                                      /* PIPC0_4          */
    uint16 PIPC0_5:1;                                      /* PIPC0_5          */
    uint16 PIPC0_6:1;                                      /* PIPC0_6          */
    uint16 PIPC0_7:1;                                      /* PIPC0_7          */
    uint16 PIPC0_8:1;                                      /* PIPC0_8          */
    uint16 PIPC0_9:1;                                      /* PIPC0_9          */
    uint16 PIPC0_10:1;                                     /* PIPC0_10         */
    uint16 PIPC0_11:1;                                     /* PIPC0_11         */
    uint16 PIPC0_12:1;                                     /* PIPC0_12         */
    uint16 PIPC0_13:1;                                     /* PIPC0_13         */
    uint16 PIPC0_14:1;                                     /* PIPC0_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type227;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PU0_0:1;                                        /* PU0_0            */
    uint16 PU0_1:1;                                        /* PU0_1            */
    uint16 PU0_2:1;                                        /* PU0_2            */
    uint16 PU0_3:1;                                        /* PU0_3            */
    uint16 PU0_4:1;                                        /* PU0_4            */
    uint16 PU0_5:1;                                        /* PU0_5            */
    uint16 PU0_6:1;                                        /* PU0_6            */
    uint16 PU0_7:1;                                        /* PU0_7            */
    uint16 PU0_8:1;                                        /* PU0_8            */
    uint16 PU0_9:1;                                        /* PU0_9            */
    uint16 PU0_10:1;                                       /* PU0_10           */
    uint16 PU0_11:1;                                       /* PU0_11           */
    uint16 PU0_12:1;                                       /* PU0_12           */
    uint16 PU0_13:1;                                       /* PU0_13           */
    uint16 PU0_14:1;                                       /* PU0_14           */
    uint16 :1;                                             /* Reserved Bits    */
} __type228;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PD0_0:1;                                        /* PD0_0            */
    uint16 PD0_1:1;                                        /* PD0_1            */
    uint16 PD0_2:1;                                        /* PD0_2            */
    uint16 PD0_3:1;                                        /* PD0_3            */
    uint16 PD0_4:1;                                        /* PD0_4            */
    uint16 PD0_5:1;                                        /* PD0_5            */
    uint16 PD0_6:1;                                        /* PD0_6            */
    uint16 PD0_7:1;                                        /* PD0_7            */
    uint16 PD0_8:1;                                        /* PD0_8            */
    uint16 PD0_9:1;                                        /* PD0_9            */
    uint16 PD0_10:1;                                       /* PD0_10           */
    uint16 PD0_11:1;                                       /* PD0_11           */
    uint16 PD0_12:1;                                       /* PD0_12           */
    uint16 PD0_13:1;                                       /* PD0_13           */
    uint16 PD0_14:1;                                       /* PD0_14           */
    uint16 :1;                                             /* Reserved Bits    */
} __type229;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PODC0_0:1;                                      /* PODC0_0          */
    uint32 PODC0_1:1;                                      /* PODC0_1          */
    uint32 PODC0_2:1;                                      /* PODC0_2          */
    uint32 PODC0_3:1;                                      /* PODC0_3          */
    uint32 PODC0_4:1;                                      /* PODC0_4          */
    uint32 PODC0_5:1;                                      /* PODC0_5          */
    uint32 PODC0_6:1;                                      /* PODC0_6          */
    uint32 PODC0_7:1;                                      /* PODC0_7          */
    uint32 PODC0_8:1;                                      /* PODC0_8          */
    uint32 PODC0_9:1;                                      /* PODC0_9          */
    uint32 PODC0_10:1;                                     /* PODC0_10         */
    uint32 PODC0_11:1;                                     /* PODC0_11         */
    uint32 PODC0_12:1;                                     /* PODC0_12         */
    uint32 PODC0_13:1;                                     /* PODC0_13         */
    uint32 PODC0_14:1;                                     /* PODC0_14         */
    uint32 :17;                                            /* Reserved Bits    */
} __type230;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PDSC0_0:1;                                      /* PDSC0_0          */
    uint32 PDSC0_1:1;                                      /* PDSC0_1          */
    uint32 PDSC0_2:1;                                      /* PDSC0_2          */
    uint32 PDSC0_3:1;                                      /* PDSC0_3          */
    uint32 PDSC0_4:1;                                      /* PDSC0_4          */
    uint32 PDSC0_5:1;                                      /* PDSC0_5          */
    uint32 PDSC0_6:1;                                      /* PDSC0_6          */
    uint32 PDSC0_7:1;                                      /* PDSC0_7          */
    uint32 PDSC0_8:1;                                      /* PDSC0_8          */
    uint32 PDSC0_9:1;                                      /* PDSC0_9          */
    uint32 PDSC0_10:1;                                     /* PDSC0_10         */
    uint32 PDSC0_11:1;                                     /* PDSC0_11         */
    uint32 PDSC0_12:1;                                     /* PDSC0_12         */
    uint32 PDSC0_13:1;                                     /* PDSC0_13         */
    uint32 PDSC0_14:1;                                     /* PDSC0_14         */
    uint32 :17;                                            /* Reserved Bits    */
} __type231;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PUCC0_0:1;                                      /* PUCC0_0          */
    uint32 PUCC0_1:1;                                      /* PUCC0_1          */
    uint32 PUCC0_2:1;                                      /* PUCC0_2          */
    uint32 PUCC0_3:1;                                      /* PUCC0_3          */
    uint32 PUCC0_4:1;                                      /* PUCC0_4          */
    uint32 PUCC0_5:1;                                      /* PUCC0_5          */
    uint32 PUCC0_6:1;                                      /* PUCC0_6          */
    uint32 PUCC0_7:1;                                      /* PUCC0_7          */
    uint32 PUCC0_8:1;                                      /* PUCC0_8          */
    uint32 PUCC0_9:1;                                      /* PUCC0_9          */
    uint32 PUCC0_10:1;                                     /* PUCC0_10         */
    uint32 PUCC0_11:1;                                     /* PUCC0_11         */
    uint32 PUCC0_12:1;                                     /* PUCC0_12         */
    uint32 PUCC0_13:1;                                     /* PUCC0_13         */
    uint32 PUCC0_14:1;                                     /* PUCC0_14         */
    uint32 :17;                                            /* Reserved Bits    */
} __type232;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :3;                                             /* Reserved Bits    */
    uint16 PISA0_3:1;                                      /* PISA0_3          */
    uint16 PISA0_4:1;                                      /* PISA0_4          */
    uint16 PISA0_5:1;                                      /* PISA0_5          */
    uint16 PISA0_6:1;                                      /* PISA0_6          */
    uint16 PISA0_7:1;                                      /* PISA0_7          */
    uint16 PISA0_8:1;                                      /* PISA0_8          */
    uint16 PISA0_9:1;                                      /* PISA0_9          */
    uint16 :3;                                             /* Reserved Bits    */
    uint16 PISA0_13:1;                                     /* PISA0_13         */
    uint16 :2;                                             /* Reserved Bits    */
} __type233;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PCMD0:8;                                        /* PCMD0[7:0]       */
    uint32 :24;                                            /* Reserved Bits    */
} __type234;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 PPROTS0_0:1;                              /* PPROTS0_0        */
    uint32 :31;                                            /* Reserved Bits    */
} __type235;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PODCE0_0:1;                                     /* PODCE0_0         */
    uint32 PODCE0_1:1;                                     /* PODCE0_1         */
    uint32 PODCE0_2:1;                                     /* PODCE0_2         */
    uint32 PODCE0_3:1;                                     /* PODCE0_3         */
    uint32 PODCE0_4:1;                                     /* PODCE0_4         */
    uint32 PODCE0_5:1;                                     /* PODCE0_5         */
    uint32 PODCE0_6:1;                                     /* PODCE0_6         */
    uint32 PODCE0_7:1;                                     /* PODCE0_7         */
    uint32 PODCE0_8:1;                                     /* PODCE0_8         */
    uint32 PODCE0_9:1;                                     /* PODCE0_9         */
    uint32 PODCE0_10:1;                                    /* PODCE0_10        */
    uint32 PODCE0_11:1;                                    /* PODCE0_11        */
    uint32 PODCE0_12:1;                                    /* PODCE0_12        */
    uint32 PODCE0_13:1;                                    /* PODCE0_13        */
    uint32 PODCE0_14:1;                                    /* PODCE0_14        */
    uint32 :17;                                            /* Reserved Bits    */
} __type236;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PIBC1_0:1;                                      /* PIBC1_0          */
    uint16 PIBC1_1:1;                                      /* PIBC1_1          */
    uint16 PIBC1_2:1;                                      /* PIBC1_2          */
    uint16 PIBC1_3:1;                                      /* PIBC1_3          */
    uint16 PIBC1_4:1;                                      /* PIBC1_4          */
    uint16 :11;                                            /* Reserved Bits    */
} __type237;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PBDC1_0:1;                                      /* PBDC1_0          */
    uint16 PBDC1_1:1;                                      /* PBDC1_1          */
    uint16 PBDC1_2:1;                                      /* PBDC1_2          */
    uint16 PBDC1_3:1;                                      /* PBDC1_3          */
    uint16 PBDC1_4:1;                                      /* PBDC1_4          */
    uint16 :11;                                            /* Reserved Bits    */
} __type238;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :3;                                             /* Reserved Bits    */
    uint16 PIPC1_3:1;                                      /* PIPC1_3          */
    uint16 PIPC1_4:1;                                      /* PIPC1_4          */
    uint16 :11;                                            /* Reserved Bits    */
} __type239;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PU1_0:1;                                        /* PU1_0            */
    uint16 PU1_1:1;                                        /* PU1_1            */
    uint16 PU1_2:1;                                        /* PU1_2            */
    uint16 PU1_3:1;                                        /* PU1_3            */
    uint16 PU1_4:1;                                        /* PU1_4            */
    uint16 :11;                                            /* Reserved Bits    */
} __type240;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PD1_0:1;                                        /* PD1_0            */
    uint16 PD1_1:1;                                        /* PD1_1            */
    uint16 PD1_2:1;                                        /* PD1_2            */
    uint16 PD1_3:1;                                        /* PD1_3            */
    uint16 PD1_4:1;                                        /* PD1_4            */
    uint16 :11;                                            /* Reserved Bits    */
} __type241;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PODC1_0:1;                                      /* PODC1_0          */
    uint32 PODC1_1:1;                                      /* PODC1_1          */
    uint32 PODC1_2:1;                                      /* PODC1_2          */
    uint32 PODC1_3:1;                                      /* PODC1_3          */
    uint32 PODC1_4:1;                                      /* PODC1_4          */
    uint32 :27;                                            /* Reserved Bits    */
} __type242;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PDSC1_0:1;                                      /* PDSC1_0          */
    uint32 PDSC1_1:1;                                      /* PDSC1_1          */
    uint32 PDSC1_2:1;                                      /* PDSC1_2          */
    uint32 PDSC1_3:1;                                      /* PDSC1_3          */
    uint32 PDSC1_4:1;                                      /* PDSC1_4          */
    uint32 :27;                                            /* Reserved Bits    */
} __type243;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PUCC1_0:1;                                      /* PUCC1_0          */
    uint32 PUCC1_1:1;                                      /* PUCC1_1          */
    uint32 PUCC1_2:1;                                      /* PUCC1_2          */
    uint32 PUCC1_3:1;                                      /* PUCC1_3          */
    uint32 PUCC1_4:1;                                      /* PUCC1_4          */
    uint32 :27;                                            /* Reserved Bits    */
} __type244;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 PISA1_1:1;                                      /* PISA1_1          */
    uint16 PISA1_2:1;                                      /* PISA1_2          */
    uint16 PISA1_3:1;                                      /* PISA1_3          */
    uint16 PISA1_4:1;                                      /* PISA1_4          */
    uint16 :11;                                            /* Reserved Bits    */
} __type245;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PCMD1:8;                                        /* PCMD1[7:0]       */
    uint32 :24;                                            /* Reserved Bits    */
} __type246;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 PPROTS1_0:1;                              /* PPROTS1_0        */
    uint32 :31;                                            /* Reserved Bits    */
} __type247;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PODCE1_0:1;                                     /* PODCE1_0         */
    uint32 PODCE1_1:1;                                     /* PODCE1_1         */
    uint32 PODCE1_2:1;                                     /* PODCE1_2         */
    uint32 PODCE1_3:1;                                     /* PODCE1_3         */
    uint32 PODCE1_4:1;                                     /* PODCE1_4         */
    uint32 :27;                                            /* Reserved Bits    */
} __type248;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PIBC2_0:1;                                      /* PIBC2_0          */
    uint16 PIBC2_1:1;                                      /* PIBC2_1          */
    uint16 PIBC2_2:1;                                      /* PIBC2_2          */
    uint16 PIBC2_3:1;                                      /* PIBC2_3          */
    uint16 PIBC2_4:1;                                      /* PIBC2_4          */
    uint16 PIBC2_5:1;                                      /* PIBC2_5          */
    uint16 PIBC2_6:1;                                      /* PIBC2_6          */
    uint16 PIBC2_7:1;                                      /* PIBC2_7          */
    uint16 PIBC2_8:1;                                      /* PIBC2_8          */
    uint16 PIBC2_9:1;                                      /* PIBC2_9          */
    uint16 PIBC2_10:1;                                     /* PIBC2_10         */
    uint16 PIBC2_11:1;                                     /* PIBC2_11         */
    uint16 PIBC2_12:1;                                     /* PIBC2_12         */
    uint16 PIBC2_13:1;                                     /* PIBC2_13         */
    uint16 PIBC2_14:1;                                     /* PIBC2_14         */
    uint16 PIBC2_15:1;                                     /* PIBC2_15         */
} __type249;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PBDC2_0:1;                                      /* PBDC2_0          */
    uint16 PBDC2_1:1;                                      /* PBDC2_1          */
    uint16 PBDC2_2:1;                                      /* PBDC2_2          */
    uint16 PBDC2_3:1;                                      /* PBDC2_3          */
    uint16 PBDC2_4:1;                                      /* PBDC2_4          */
    uint16 PBDC2_5:1;                                      /* PBDC2_5          */
    uint16 PBDC2_6:1;                                      /* PBDC2_6          */
    uint16 PBDC2_7:1;                                      /* PBDC2_7          */
    uint16 PBDC2_8:1;                                      /* PBDC2_8          */
    uint16 PBDC2_9:1;                                      /* PBDC2_9          */
    uint16 PBDC2_10:1;                                     /* PBDC2_10         */
    uint16 PBDC2_11:1;                                     /* PBDC2_11         */
    uint16 PBDC2_12:1;                                     /* PBDC2_12         */
    uint16 PBDC2_13:1;                                     /* PBDC2_13         */
    uint16 PBDC2_14:1;                                     /* PBDC2_14         */
    uint16 PBDC2_15:1;                                     /* PBDC2_15         */
} __type250;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 PIPC2_1:1;                                      /* PIPC2_1          */
    uint16 PIPC2_2:1;                                      /* PIPC2_2          */
    uint16 PIPC2_3:1;                                      /* PIPC2_3          */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 PIPC2_5:1;                                      /* PIPC2_5          */
    uint16 PIPC2_6:1;                                      /* PIPC2_6          */
    uint16 PIPC2_7:1;                                      /* PIPC2_7          */
    uint16 PIPC2_8:1;                                      /* PIPC2_8          */
    uint16 PIPC2_9:1;                                      /* PIPC2_9          */
    uint16 :2;                                             /* Reserved Bits    */
    uint16 PIPC2_12:1;                                     /* PIPC2_12         */
    uint16 :3;                                             /* Reserved Bits    */
} __type251;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PU2_0:1;                                        /* PU2_0            */
    uint16 PU2_1:1;                                        /* PU2_1            */
    uint16 PU2_2:1;                                        /* PU2_2            */
    uint16 PU2_3:1;                                        /* PU2_3            */
    uint16 PU2_4:1;                                        /* PU2_4            */
    uint16 PU2_5:1;                                        /* PU2_5            */
    uint16 PU2_6:1;                                        /* PU2_6            */
    uint16 PU2_7:1;                                        /* PU2_7            */
    uint16 PU2_8:1;                                        /* PU2_8            */
    uint16 PU2_9:1;                                        /* PU2_9            */
    uint16 PU2_10:1;                                       /* PU2_10           */
    uint16 PU2_11:1;                                       /* PU2_11           */
    uint16 PU2_12:1;                                       /* PU2_12           */
    uint16 PU2_13:1;                                       /* PU2_13           */
    uint16 PU2_14:1;                                       /* PU2_14           */
    uint16 PU2_15:1;                                       /* PU2_15           */
} __type252;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PD2_0:1;                                        /* PD2_0            */
    uint16 PD2_1:1;                                        /* PD2_1            */
    uint16 PD2_2:1;                                        /* PD2_2            */
    uint16 PD2_3:1;                                        /* PD2_3            */
    uint16 PD2_4:1;                                        /* PD2_4            */
    uint16 PD2_5:1;                                        /* PD2_5            */
    uint16 PD2_6:1;                                        /* PD2_6            */
    uint16 PD2_7:1;                                        /* PD2_7            */
    uint16 PD2_8:1;                                        /* PD2_8            */
    uint16 PD2_9:1;                                        /* PD2_9            */
    uint16 PD2_10:1;                                       /* PD2_10           */
    uint16 PD2_11:1;                                       /* PD2_11           */
    uint16 PD2_12:1;                                       /* PD2_12           */
    uint16 PD2_13:1;                                       /* PD2_13           */
    uint16 PD2_14:1;                                       /* PD2_14           */
    uint16 PD2_15:1;                                       /* PD2_15           */
} __type253;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PODC2_0:1;                                      /* PODC2_0          */
    uint32 PODC2_1:1;                                      /* PODC2_1          */
    uint32 PODC2_2:1;                                      /* PODC2_2          */
    uint32 PODC2_3:1;                                      /* PODC2_3          */
    uint32 PODC2_4:1;                                      /* PODC2_4          */
    uint32 PODC2_5:1;                                      /* PODC2_5          */
    uint32 PODC2_6:1;                                      /* PODC2_6          */
    uint32 PODC2_7:1;                                      /* PODC2_7          */
    uint32 PODC2_8:1;                                      /* PODC2_8          */
    uint32 PODC2_9:1;                                      /* PODC2_9          */
    uint32 PODC2_10:1;                                     /* PODC2_10         */
    uint32 PODC2_11:1;                                     /* PODC2_11         */
    uint32 PODC2_12:1;                                     /* PODC2_12         */
    uint32 PODC2_13:1;                                     /* PODC2_13         */
    uint32 PODC2_14:1;                                     /* PODC2_14         */
    uint32 PODC2_15:1;                                     /* PODC2_15         */
    uint32 :16;                                            /* Reserved Bits    */
} __type254;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PDSC2_0:1;                                      /* PDSC2_0          */
    uint32 PDSC2_1:1;                                      /* PDSC2_1          */
    uint32 PDSC2_2:1;                                      /* PDSC2_2          */
    uint32 PDSC2_3:1;                                      /* PDSC2_3          */
    uint32 PDSC2_4:1;                                      /* PDSC2_4          */
    uint32 PDSC2_5:1;                                      /* PDSC2_5          */
    uint32 PDSC2_6:1;                                      /* PDSC2_6          */
    uint32 PDSC2_7:1;                                      /* PDSC2_7          */
    uint32 PDSC2_8:1;                                      /* PDSC2_8          */
    uint32 PDSC2_9:1;                                      /* PDSC2_9          */
    uint32 PDSC2_10:1;                                     /* PDSC2_10         */
    uint32 PDSC2_11:1;                                     /* PDSC2_11         */
    uint32 PDSC2_12:1;                                     /* PDSC2_12         */
    uint32 PDSC2_13:1;                                     /* PDSC2_13         */
    uint32 PDSC2_14:1;                                     /* PDSC2_14         */
    uint32 PDSC2_15:1;                                     /* PDSC2_15         */
    uint32 :16;                                            /* Reserved Bits    */
} __type255;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PUCC2_0:1;                                      /* PUCC2_0          */
    uint32 PUCC2_1:1;                                      /* PUCC2_1          */
    uint32 PUCC2_2:1;                                      /* PUCC2_2          */
    uint32 PUCC2_3:1;                                      /* PUCC2_3          */
    uint32 PUCC2_4:1;                                      /* PUCC2_4          */
    uint32 PUCC2_5:1;                                      /* PUCC2_5          */
    uint32 PUCC2_6:1;                                      /* PUCC2_6          */
    uint32 PUCC2_7:1;                                      /* PUCC2_7          */
    uint32 PUCC2_8:1;                                      /* PUCC2_8          */
    uint32 PUCC2_9:1;                                      /* PUCC2_9          */
    uint32 PUCC2_10:1;                                     /* PUCC2_10         */
    uint32 PUCC2_11:1;                                     /* PUCC2_11         */
    uint32 PUCC2_12:1;                                     /* PUCC2_12         */
    uint32 PUCC2_13:1;                                     /* PUCC2_13         */
    uint32 PUCC2_14:1;                                     /* PUCC2_14         */
    uint32 PUCC2_15:1;                                     /* PUCC2_15         */
    uint32 :16;                                            /* Reserved Bits    */
} __type256;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PISA2_0:1;                                      /* PISA2_0          */
    uint16 PISA2_1:1;                                      /* PISA2_1          */
    uint16 PISA2_2:1;                                      /* PISA2_2          */
    uint16 :2;                                             /* Reserved Bits    */
    uint16 PISA2_5:1;                                      /* PISA2_5          */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 PISA2_7:1;                                      /* PISA2_7          */
    uint16 :4;                                             /* Reserved Bits    */
    uint16 PISA2_12:1;                                     /* PISA2_12         */
    uint16 :3;                                             /* Reserved Bits    */
} __type257;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PCMD2:8;                                        /* PCMD2[7:0]       */
    uint32 :24;                                            /* Reserved Bits    */
} __type258;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 PPROTS2_0:1;                              /* PPROTS2_0        */
    uint32 :31;                                            /* Reserved Bits    */
} __type259;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PODCE2_0:1;                                     /* PODCE2_0         */
    uint32 PODCE2_1:1;                                     /* PODCE2_1         */
    uint32 PODCE2_2:1;                                     /* PODCE2_2         */
    uint32 PODCE2_3:1;                                     /* PODCE2_3         */
    uint32 PODCE2_4:1;                                     /* PODCE2_4         */
    uint32 PODCE2_5:1;                                     /* PODCE2_5         */
    uint32 PODCE2_6:1;                                     /* PODCE2_6         */
    uint32 PODCE2_7:1;                                     /* PODCE2_7         */
    uint32 PODCE2_8:1;                                     /* PODCE2_8         */
    uint32 PODCE2_9:1;                                     /* PODCE2_9         */
    uint32 PODCE2_10:1;                                    /* PODCE2_10        */
    uint32 PODCE2_11:1;                                    /* PODCE2_11        */
    uint32 PODCE2_12:1;                                    /* PODCE2_12        */
    uint32 PODCE2_13:1;                                    /* PODCE2_13        */
    uint32 PODCE2_14:1;                                    /* PODCE2_14        */
    uint32 PODCE2_15:1;                                    /* PODCE2_15        */
    uint32 :16;                                            /* Reserved Bits    */
} __type260;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PIBC3_0:1;                                      /* PIBC3_0          */
    uint16 PIBC3_1:1;                                      /* PIBC3_1          */
    uint16 PIBC3_2:1;                                      /* PIBC3_2          */
    uint16 PIBC3_3:1;                                      /* PIBC3_3          */
    uint16 PIBC3_4:1;                                      /* PIBC3_4          */
    uint16 PIBC3_5:1;                                      /* PIBC3_5          */
    uint16 PIBC3_6:1;                                      /* PIBC3_6          */
    uint16 PIBC3_7:1;                                      /* PIBC3_7          */
    uint16 PIBC3_8:1;                                      /* PIBC3_8          */
    uint16 PIBC3_9:1;                                      /* PIBC3_9          */
    uint16 PIBC3_10:1;                                     /* PIBC3_10         */
    uint16 PIBC3_11:1;                                     /* PIBC3_11         */
    uint16 PIBC3_12:1;                                     /* PIBC3_12         */
    uint16 PIBC3_13:1;                                     /* PIBC3_13         */
    uint16 PIBC3_14:1;                                     /* PIBC3_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type261;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PBDC3_0:1;                                      /* PBDC3_0          */
    uint16 PBDC3_1:1;                                      /* PBDC3_1          */
    uint16 PBDC3_2:1;                                      /* PBDC3_2          */
    uint16 PBDC3_3:1;                                      /* PBDC3_3          */
    uint16 PBDC3_4:1;                                      /* PBDC3_4          */
    uint16 PBDC3_5:1;                                      /* PBDC3_5          */
    uint16 PBDC3_6:1;                                      /* PBDC3_6          */
    uint16 PBDC3_7:1;                                      /* PBDC3_7          */
    uint16 PBDC3_8:1;                                      /* PBDC3_8          */
    uint16 PBDC3_9:1;                                      /* PBDC3_9          */
    uint16 PBDC3_10:1;                                     /* PBDC3_10         */
    uint16 PBDC3_11:1;                                     /* PBDC3_11         */
    uint16 PBDC3_12:1;                                     /* PBDC3_12         */
    uint16 PBDC3_13:1;                                     /* PBDC3_13         */
    uint16 PBDC3_14:1;                                     /* PBDC3_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type262;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PIPC3_0:1;                                      /* PIPC3_0          */
    uint16 PIPC3_1:1;                                      /* PIPC3_1          */
    uint16 PIPC3_2:1;                                      /* PIPC3_2          */
    uint16 :4;                                             /* Reserved Bits    */
    uint16 PIPC3_7:1;                                      /* PIPC3_7          */
    uint16 PIPC3_8:1;                                      /* PIPC3_8          */
    uint16 PIPC3_9:1;                                      /* PIPC3_9          */
    uint16 PIPC3_10:1;                                     /* PIPC3_10         */
    uint16 PIPC3_11:1;                                     /* PIPC3_11         */
    uint16 PIPC3_12:1;                                     /* PIPC3_12         */
    uint16 PIPC3_13:1;                                     /* PIPC3_13         */
    uint16 PIPC3_14:1;                                     /* PIPC3_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type263;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PU3_0:1;                                        /* PU3_0            */
    uint16 PU3_1:1;                                        /* PU3_1            */
    uint16 PU3_2:1;                                        /* PU3_2            */
    uint16 PU3_3:1;                                        /* PU3_3            */
    uint16 PU3_4:1;                                        /* PU3_4            */
    uint16 PU3_5:1;                                        /* PU3_5            */
    uint16 PU3_6:1;                                        /* PU3_6            */
    uint16 PU3_7:1;                                        /* PU3_7            */
    uint16 PU3_8:1;                                        /* PU3_8            */
    uint16 PU3_9:1;                                        /* PU3_9            */
    uint16 PU3_10:1;                                       /* PU3_10           */
    uint16 PU3_11:1;                                       /* PU3_11           */
    uint16 PU3_12:1;                                       /* PU3_12           */
    uint16 PU3_13:1;                                       /* PU3_13           */
    uint16 PU3_14:1;                                       /* PU3_14           */
    uint16 :1;                                             /* Reserved Bits    */
} __type264;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PD3_0:1;                                        /* PD3_0            */
    uint16 PD3_1:1;                                        /* PD3_1            */
    uint16 PD3_2:1;                                        /* PD3_2            */
    uint16 PD3_3:1;                                        /* PD3_3            */
    uint16 PD3_4:1;                                        /* PD3_4            */
    uint16 PD3_5:1;                                        /* PD3_5            */
    uint16 PD3_6:1;                                        /* PD3_6            */
    uint16 PD3_7:1;                                        /* PD3_7            */
    uint16 PD3_8:1;                                        /* PD3_8            */
    uint16 PD3_9:1;                                        /* PD3_9            */
    uint16 PD3_10:1;                                       /* PD3_10           */
    uint16 PD3_11:1;                                       /* PD3_11           */
    uint16 PD3_12:1;                                       /* PD3_12           */
    uint16 PD3_13:1;                                       /* PD3_13           */
    uint16 PD3_14:1;                                       /* PD3_14           */
    uint16 :1;                                             /* Reserved Bits    */
} __type265;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PODC3_0:1;                                      /* PODC3_0          */
    uint32 PODC3_1:1;                                      /* PODC3_1          */
    uint32 PODC3_2:1;                                      /* PODC3_2          */
    uint32 PODC3_3:1;                                      /* PODC3_3          */
    uint32 PODC3_4:1;                                      /* PODC3_4          */
    uint32 PODC3_5:1;                                      /* PODC3_5          */
    uint32 PODC3_6:1;                                      /* PODC3_6          */
    uint32 PODC3_7:1;                                      /* PODC3_7          */
    uint32 PODC3_8:1;                                      /* PODC3_8          */
    uint32 PODC3_9:1;                                      /* PODC3_9          */
    uint32 PODC3_10:1;                                     /* PODC3_10         */
    uint32 PODC3_11:1;                                     /* PODC3_11         */
    uint32 PODC3_12:1;                                     /* PODC3_12         */
    uint32 PODC3_13:1;                                     /* PODC3_13         */
    uint32 PODC3_14:1;                                     /* PODC3_14         */
    uint32 :17;                                            /* Reserved Bits    */
} __type266;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PDSC3_0:1;                                      /* PDSC3_0          */
    uint32 PDSC3_1:1;                                      /* PDSC3_1          */
    uint32 PDSC3_2:1;                                      /* PDSC3_2          */
    uint32 PDSC3_3:1;                                      /* PDSC3_3          */
    uint32 PDSC3_4:1;                                      /* PDSC3_4          */
    uint32 PDSC3_5:1;                                      /* PDSC3_5          */
    uint32 PDSC3_6:1;                                      /* PDSC3_6          */
    uint32 PDSC3_7:1;                                      /* PDSC3_7          */
    uint32 PDSC3_8:1;                                      /* PDSC3_8          */
    uint32 PDSC3_9:1;                                      /* PDSC3_9          */
    uint32 PDSC3_10:1;                                     /* PDSC3_10         */
    uint32 PDSC3_11:1;                                     /* PDSC3_11         */
    uint32 PDSC3_12:1;                                     /* PDSC3_12         */
    uint32 PDSC3_13:1;                                     /* PDSC3_13         */
    uint32 PDSC3_14:1;                                     /* PDSC3_14         */
    uint32 :17;                                            /* Reserved Bits    */
} __type267;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PUCC3_0:1;                                      /* PUCC3_0          */
    uint32 PUCC3_1:1;                                      /* PUCC3_1          */
    uint32 PUCC3_2:1;                                      /* PUCC3_2          */
    uint32 PUCC3_3:1;                                      /* PUCC3_3          */
    uint32 PUCC3_4:1;                                      /* PUCC3_4          */
    uint32 PUCC3_5:1;                                      /* PUCC3_5          */
    uint32 PUCC3_6:1;                                      /* PUCC3_6          */
    uint32 PUCC3_7:1;                                      /* PUCC3_7          */
    uint32 PUCC3_8:1;                                      /* PUCC3_8          */
    uint32 PUCC3_9:1;                                      /* PUCC3_9          */
    uint32 PUCC3_10:1;                                     /* PUCC3_10         */
    uint32 PUCC3_11:1;                                     /* PUCC3_11         */
    uint32 PUCC3_12:1;                                     /* PUCC3_12         */
    uint32 PUCC3_13:1;                                     /* PUCC3_13         */
    uint32 PUCC3_14:1;                                     /* PUCC3_14         */
    uint32 :17;                                            /* Reserved Bits    */
} __type268;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PISA3_0:1;                                      /* PISA3_0          */
    uint16 PISA3_1:1;                                      /* PISA3_1          */
    uint16 :12;                                            /* Reserved Bits    */
    uint16 PISA3_14:1;                                     /* PISA3_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type269;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PCMD3:8;                                        /* PCMD3[7:0]       */
    uint32 :24;                                            /* Reserved Bits    */
} __type270;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 PPROTS3_0:1;                              /* PPROTS3_0        */
    uint32 :31;                                            /* Reserved Bits    */
} __type271;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PODCE3_0:1;                                     /* PODCE3_0         */
    uint32 PODCE3_1:1;                                     /* PODCE3_1         */
    uint32 PODCE3_2:1;                                     /* PODCE3_2         */
    uint32 PODCE3_3:1;                                     /* PODCE3_3         */
    uint32 PODCE3_4:1;                                     /* PODCE3_4         */
    uint32 PODCE3_5:1;                                     /* PODCE3_5         */
    uint32 PODCE3_6:1;                                     /* PODCE3_6         */
    uint32 PODCE3_7:1;                                     /* PODCE3_7         */
    uint32 PODCE3_8:1;                                     /* PODCE3_8         */
    uint32 PODCE3_9:1;                                     /* PODCE3_9         */
    uint32 PODCE3_10:1;                                    /* PODCE3_10        */
    uint32 PODCE3_11:1;                                    /* PODCE3_11        */
    uint32 PODCE3_12:1;                                    /* PODCE3_12        */
    uint32 PODCE3_13:1;                                    /* PODCE3_13        */
    uint32 PODCE3_14:1;                                    /* PODCE3_14        */
    uint32 :17;                                            /* Reserved Bits    */
} __type272;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PIBC4_0:1;                                      /* PIBC4_0          */
    uint16 PIBC4_1:1;                                      /* PIBC4_1          */
    uint16 PIBC4_2:1;                                      /* PIBC4_2          */
    uint16 PIBC4_3:1;                                      /* PIBC4_3          */
    uint16 PIBC4_4:1;                                      /* PIBC4_4          */
    uint16 PIBC4_5:1;                                      /* PIBC4_5          */
    uint16 PIBC4_6:1;                                      /* PIBC4_6          */
    uint16 PIBC4_7:1;                                      /* PIBC4_7          */
    uint16 PIBC4_8:1;                                      /* PIBC4_8          */
    uint16 PIBC4_9:1;                                      /* PIBC4_9          */
    uint16 PIBC4_10:1;                                     /* PIBC4_10         */
    uint16 PIBC4_11:1;                                     /* PIBC4_11         */
    uint16 PIBC4_12:1;                                     /* PIBC4_12         */
    uint16 PIBC4_13:1;                                     /* PIBC4_13         */
    uint16 PIBC4_14:1;                                     /* PIBC4_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type273;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PBDC4_0:1;                                      /* PBDC4_0          */
    uint16 PBDC4_1:1;                                      /* PBDC4_1          */
    uint16 PBDC4_2:1;                                      /* PBDC4_2          */
    uint16 PBDC4_3:1;                                      /* PBDC4_3          */
    uint16 PBDC4_4:1;                                      /* PBDC4_4          */
    uint16 PBDC4_5:1;                                      /* PBDC4_5          */
    uint16 PBDC4_6:1;                                      /* PBDC4_6          */
    uint16 PBDC4_7:1;                                      /* PBDC4_7          */
    uint16 PBDC4_8:1;                                      /* PBDC4_8          */
    uint16 PBDC4_9:1;                                      /* PBDC4_9          */
    uint16 PBDC4_10:1;                                     /* PBDC4_10         */
    uint16 PBDC4_11:1;                                     /* PBDC4_11         */
    uint16 PBDC4_12:1;                                     /* PBDC4_12         */
    uint16 PBDC4_13:1;                                     /* PBDC4_13         */
    uint16 PBDC4_14:1;                                     /* PBDC4_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type274;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PIPC4_0:1;                                      /* PIPC4_0          */
    uint16 PIPC4_1:1;                                      /* PIPC4_1          */
    uint16 PIPC4_2:1;                                      /* PIPC4_2          */
    uint16 PIPC4_3:1;                                      /* PIPC4_3          */
    uint16 PIPC4_4:1;                                      /* PIPC4_4          */
    uint16 PIPC4_5:1;                                      /* PIPC4_5          */
    uint16 PIPC4_6:1;                                      /* PIPC4_6          */
    uint16 :9;                                             /* Reserved Bits    */
} __type275;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PU4_0:1;                                        /* PU4_0            */
    uint16 PU4_1:1;                                        /* PU4_1            */
    uint16 PU4_2:1;                                        /* PU4_2            */
    uint16 PU4_3:1;                                        /* PU4_3            */
    uint16 PU4_4:1;                                        /* PU4_4            */
    uint16 PU4_5:1;                                        /* PU4_5            */
    uint16 PU4_6:1;                                        /* PU4_6            */
    uint16 PU4_7:1;                                        /* PU4_7            */
    uint16 PU4_8:1;                                        /* PU4_8            */
    uint16 PU4_9:1;                                        /* PU4_9            */
    uint16 PU4_10:1;                                       /* PU4_10           */
    uint16 PU4_11:1;                                       /* PU4_11           */
    uint16 PU4_12:1;                                       /* PU4_12           */
    uint16 PU4_13:1;                                       /* PU4_13           */
    uint16 PU4_14:1;                                       /* PU4_14           */
    uint16 :1;                                             /* Reserved Bits    */
} __type276;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PD4_0:1;                                        /* PD4_0            */
    uint16 PD4_1:1;                                        /* PD4_1            */
    uint16 PD4_2:1;                                        /* PD4_2            */
    uint16 PD4_3:1;                                        /* PD4_3            */
    uint16 PD4_4:1;                                        /* PD4_4            */
    uint16 PD4_5:1;                                        /* PD4_5            */
    uint16 PD4_6:1;                                        /* PD4_6            */
    uint16 PD4_7:1;                                        /* PD4_7            */
    uint16 PD4_8:1;                                        /* PD4_8            */
    uint16 PD4_9:1;                                        /* PD4_9            */
    uint16 PD4_10:1;                                       /* PD4_10           */
    uint16 PD4_11:1;                                       /* PD4_11           */
    uint16 PD4_12:1;                                       /* PD4_12           */
    uint16 PD4_13:1;                                       /* PD4_13           */
    uint16 PD4_14:1;                                       /* PD4_14           */
    uint16 :1;                                             /* Reserved Bits    */
} __type277;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PODC4_0:1;                                      /* PODC4_0          */
    uint32 PODC4_1:1;                                      /* PODC4_1          */
    uint32 PODC4_2:1;                                      /* PODC4_2          */
    uint32 PODC4_3:1;                                      /* PODC4_3          */
    uint32 PODC4_4:1;                                      /* PODC4_4          */
    uint32 PODC4_5:1;                                      /* PODC4_5          */
    uint32 PODC4_6:1;                                      /* PODC4_6          */
    uint32 PODC4_7:1;                                      /* PODC4_7          */
    uint32 PODC4_8:1;                                      /* PODC4_8          */
    uint32 PODC4_9:1;                                      /* PODC4_9          */
    uint32 PODC4_10:1;                                     /* PODC4_10         */
    uint32 PODC4_11:1;                                     /* PODC4_11         */
    uint32 PODC4_12:1;                                     /* PODC4_12         */
    uint32 PODC4_13:1;                                     /* PODC4_13         */
    uint32 PODC4_14:1;                                     /* PODC4_14         */
    uint32 :17;                                            /* Reserved Bits    */
} __type278;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PDSC4_0:1;                                      /* PDSC4_0          */
    uint32 PDSC4_1:1;                                      /* PDSC4_1          */
    uint32 PDSC4_2:1;                                      /* PDSC4_2          */
    uint32 PDSC4_3:1;                                      /* PDSC4_3          */
    uint32 PDSC4_4:1;                                      /* PDSC4_4          */
    uint32 PDSC4_5:1;                                      /* PDSC4_5          */
    uint32 PDSC4_6:1;                                      /* PDSC4_6          */
    uint32 PDSC4_7:1;                                      /* PDSC4_7          */
    uint32 PDSC4_8:1;                                      /* PDSC4_8          */
    uint32 PDSC4_9:1;                                      /* PDSC4_9          */
    uint32 PDSC4_10:1;                                     /* PDSC4_10         */
    uint32 PDSC4_11:1;                                     /* PDSC4_11         */
    uint32 PDSC4_12:1;                                     /* PDSC4_12         */
    uint32 PDSC4_13:1;                                     /* PDSC4_13         */
    uint32 PDSC4_14:1;                                     /* PDSC4_14         */
    uint32 :17;                                            /* Reserved Bits    */
} __type279;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PUCC4_0:1;                                      /* PUCC4_0          */
    uint32 PUCC4_1:1;                                      /* PUCC4_1          */
    uint32 PUCC4_2:1;                                      /* PUCC4_2          */
    uint32 PUCC4_3:1;                                      /* PUCC4_3          */
    uint32 PUCC4_4:1;                                      /* PUCC4_4          */
    uint32 PUCC4_5:1;                                      /* PUCC4_5          */
    uint32 PUCC4_6:1;                                      /* PUCC4_6          */
    uint32 PUCC4_7:1;                                      /* PUCC4_7          */
    uint32 PUCC4_8:1;                                      /* PUCC4_8          */
    uint32 PUCC4_9:1;                                      /* PUCC4_9          */
    uint32 PUCC4_10:1;                                     /* PUCC4_10         */
    uint32 PUCC4_11:1;                                     /* PUCC4_11         */
    uint32 PUCC4_12:1;                                     /* PUCC4_12         */
    uint32 PUCC4_13:1;                                     /* PUCC4_13         */
    uint32 PUCC4_14:1;                                     /* PUCC4_14         */
    uint32 :17;                                            /* Reserved Bits    */
} __type280;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PISA4_0:1;                                      /* PISA4_0          */
    uint16 PISA4_1:1;                                      /* PISA4_1          */
    uint16 PISA4_2:1;                                      /* PISA4_2          */
    uint16 PISA4_3:1;                                      /* PISA4_3          */
    uint16 PISA4_4:1;                                      /* PISA4_4          */
    uint16 PISA4_5:1;                                      /* PISA4_5          */
    uint16 PISA4_6:1;                                      /* PISA4_6          */
    uint16 :2;                                             /* Reserved Bits    */
    uint16 PISA4_9:1;                                      /* PISA4_9          */
    uint16 PISA4_10:1;                                     /* PISA4_10         */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 PISA4_12:1;                                     /* PISA4_12         */
    uint16 PISA4_13:1;                                     /* PISA4_13         */
    uint16 :2;                                             /* Reserved Bits    */
} __type281;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PCMD4:8;                                        /* PCMD4[7:0]       */
    uint32 :24;                                            /* Reserved Bits    */
} __type282;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 PPROTS4_0:1;                              /* PPROTS4_0        */
    uint32 :31;                                            /* Reserved Bits    */
} __type283;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PODCE4_0:1;                                     /* PODCE4_0         */
    uint32 PODCE4_1:1;                                     /* PODCE4_1         */
    uint32 PODCE4_2:1;                                     /* PODCE4_2         */
    uint32 PODCE4_3:1;                                     /* PODCE4_3         */
    uint32 PODCE4_4:1;                                     /* PODCE4_4         */
    uint32 PODCE4_5:1;                                     /* PODCE4_5         */
    uint32 PODCE4_6:1;                                     /* PODCE4_6         */
    uint32 PODCE4_7:1;                                     /* PODCE4_7         */
    uint32 PODCE4_8:1;                                     /* PODCE4_8         */
    uint32 PODCE4_9:1;                                     /* PODCE4_9         */
    uint32 PODCE4_10:1;                                    /* PODCE4_10        */
    uint32 PODCE4_11:1;                                    /* PODCE4_11        */
    uint32 PODCE4_12:1;                                    /* PODCE4_12        */
    uint32 PODCE4_13:1;                                    /* PODCE4_13        */
    uint32 PODCE4_14:1;                                    /* PODCE4_14        */
    uint32 :17;                                            /* Reserved Bits    */
} __type284;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PIBC5_0:1;                                      /* PIBC5_0          */
    uint16 PIBC5_1:1;                                      /* PIBC5_1          */
    uint16 PIBC5_2:1;                                      /* PIBC5_2          */
    uint16 PIBC5_3:1;                                      /* PIBC5_3          */
    uint16 PIBC5_4:1;                                      /* PIBC5_4          */
    uint16 PIBC5_5:1;                                      /* PIBC5_5          */
    uint16 PIBC5_6:1;                                      /* PIBC5_6          */
    uint16 PIBC5_7:1;                                      /* PIBC5_7          */
    uint16 PIBC5_8:1;                                      /* PIBC5_8          */
    uint16 PIBC5_9:1;                                      /* PIBC5_9          */
    uint16 PIBC5_10:1;                                     /* PIBC5_10         */
    uint16 PIBC5_11:1;                                     /* PIBC5_11         */
    uint16 PIBC5_12:1;                                     /* PIBC5_12         */
    uint16 PIBC5_13:1;                                     /* PIBC5_13         */
    uint16 PIBC5_14:1;                                     /* PIBC5_14         */
    uint16 PIBC5_15:1;                                     /* PIBC5_15         */
} __type285;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PBDC5_0:1;                                      /* PBDC5_0          */
    uint16 PBDC5_1:1;                                      /* PBDC5_1          */
    uint16 PBDC5_2:1;                                      /* PBDC5_2          */
    uint16 PBDC5_3:1;                                      /* PBDC5_3          */
    uint16 PBDC5_4:1;                                      /* PBDC5_4          */
    uint16 PBDC5_5:1;                                      /* PBDC5_5          */
    uint16 PBDC5_6:1;                                      /* PBDC5_6          */
    uint16 PBDC5_7:1;                                      /* PBDC5_7          */
    uint16 PBDC5_8:1;                                      /* PBDC5_8          */
    uint16 PBDC5_9:1;                                      /* PBDC5_9          */
    uint16 PBDC5_10:1;                                     /* PBDC5_10         */
    uint16 PBDC5_11:1;                                     /* PBDC5_11         */
    uint16 PBDC5_12:1;                                     /* PBDC5_12         */
    uint16 PBDC5_13:1;                                     /* PBDC5_13         */
    uint16 PBDC5_14:1;                                     /* PBDC5_14         */
    uint16 PBDC5_15:1;                                     /* PBDC5_15         */
} __type286;
typedef struct 
{                                                          /* Bit Access       */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 PIPC5_1:1;                                      /* PIPC5_1          */
    uint16 PIPC5_2:1;                                      /* PIPC5_2          */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 PIPC5_4:1;                                      /* PIPC5_4          */
    uint16 PIPC5_5:1;                                      /* PIPC5_5          */
    uint16 PIPC5_6:1;                                      /* PIPC5_6          */
    uint16 PIPC5_7:1;                                      /* PIPC5_7          */
    uint16 PIPC5_8:1;                                      /* PIPC5_8          */
    uint16 PIPC5_9:1;                                      /* PIPC5_9          */
    uint16 PIPC5_10:1;                                     /* PIPC5_10         */
    uint16 PIPC5_11:1;                                     /* PIPC5_11         */
    uint16 PIPC5_12:1;                                     /* PIPC5_12         */
    uint16 PIPC5_13:1;                                     /* PIPC5_13         */
    uint16 PIPC5_14:1;                                     /* PIPC5_14         */
    uint16 :1;                                             /* Reserved Bits    */
} __type287;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PU5_0:1;                                        /* PU5_0            */
    uint16 PU5_1:1;                                        /* PU5_1            */
    uint16 PU5_2:1;                                        /* PU5_2            */
    uint16 PU5_3:1;                                        /* PU5_3            */
    uint16 PU5_4:1;                                        /* PU5_4            */
    uint16 PU5_5:1;                                        /* PU5_5            */
    uint16 PU5_6:1;                                        /* PU5_6            */
    uint16 PU5_7:1;                                        /* PU5_7            */
    uint16 PU5_8:1;                                        /* PU5_8            */
    uint16 PU5_9:1;                                        /* PU5_9            */
    uint16 PU5_10:1;                                       /* PU5_10           */
    uint16 PU5_11:1;                                       /* PU5_11           */
    uint16 PU5_12:1;                                       /* PU5_12           */
    uint16 PU5_13:1;                                       /* PU5_13           */
    uint16 PU5_14:1;                                       /* PU5_14           */
    uint16 PU5_15:1;                                       /* PU5_15           */
} __type288;
typedef struct 
{                                                          /* Bit Access       */
    uint16 PD5_0:1;                                        /* PD5_0            */
    uint16 PD5_1:1;                                        /* PD5_1            */
    uint16 PD5_2:1;                                        /* PD5_2            */
    uint16 PD5_3:1;                                        /* PD5_3            */
    uint16 PD5_4:1;                                        /* PD5_4            */
    uint16 PD5_5:1;                                        /* PD5_5            */
    uint16 PD5_6:1;                                        /* PD5_6            */
    uint16 PD5_7:1;                                        /* PD5_7            */
    uint16 PD5_8:1;                                        /* PD5_8            */
    uint16 PD5_9:1;                                        /* PD5_9            */
    uint16 PD5_10:1;                                       /* PD5_10           */
    uint16 PD5_11:1;                                       /* PD5_11           */
    uint16 PD5_12:1;                                       /* PD5_12           */
    uint16 PD5_13:1;                                       /* PD5_13           */
    uint16 PD5_14:1;                                       /* PD5_14           */
    uint16 PD5_15:1;                                       /* PD5_15           */
} __type289;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PODC5_0:1;                                      /* PODC5_0          */
    uint32 PODC5_1:1;                                      /* PODC5_1          */
    uint32 PODC5_2:1;                                      /* PODC5_2          */
    uint32 PODC5_3:1;                                      /* PODC5_3          */
    uint32 PODC5_4:1;                                      /* PODC5_4          */
    uint32 PODC5_5:1;                                      /* PODC5_5          */
    uint32 PODC5_6:1;                                      /* PODC5_6          */
    uint32 PODC5_7:1;                                      /* PODC5_7          */
    uint32 PODC5_8:1;                                      /* PODC5_8          */
    uint32 PODC5_9:1;                                      /* PODC5_9          */
    uint32 PODC5_10:1;                                     /* PODC5_10         */
    uint32 PODC5_11:1;                                     /* PODC5_11         */
    uint32 PODC5_12:1;                                     /* PODC5_12         */
    uint32 PODC5_13:1;                                     /* PODC5_13         */
    uint32 PODC5_14:1;                                     /* PODC5_14         */
    uint32 PODC5_15:1;                                     /* PODC5_15         */
    uint32 :16;                                            /* Reserved Bits    */
} __type290;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PDSC5_0:1;                                      /* PDSC5_0          */
    uint32 PDSC5_1:1;                                      /* PDSC5_1          */
    uint32 PDSC5_2:1;                                      /* PDSC5_2          */
    uint32 PDSC5_3:1;                                      /* PDSC5_3          */
    uint32 PDSC5_4:1;                                      /* PDSC5_4          */
    uint32 PDSC5_5:1;                                      /* PDSC5_5          */
    uint32 PDSC5_6:1;                                      /* PDSC5_6          */
    uint32 PDSC5_7:1;                                      /* PDSC5_7          */
    uint32 PDSC5_8:1;                                      /* PDSC5_8          */
    uint32 PDSC5_9:1;                                      /* PDSC5_9          */
    uint32 PDSC5_10:1;                                     /* PDSC5_10         */
    uint32 PDSC5_11:1;                                     /* PDSC5_11         */
    uint32 PDSC5_12:1;                                     /* PDSC5_12         */
    uint32 PDSC5_13:1;                                     /* PDSC5_13         */
    uint32 PDSC5_14:1;                                     /* PDSC5_14         */
    uint32 PDSC5_15:1;                                     /* PDSC5_15         */
    uint32 :16;                                            /* Reserved Bits    */
} __type291;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PUCC5_0:1;                                      /* PUCC5_0          */
    uint32 PUCC5_1:1;                                      /* PUCC5_1          */
    uint32 PUCC5_2:1;                                      /* PUCC5_2          */
    uint32 PUCC5_3:1;                                      /* PUCC5_3          */
    uint32 PUCC5_4:1;                                      /* PUCC5_4          */
    uint32 PUCC5_5:1;                                      /* PUCC5_5          */
    uint32 PUCC5_6:1;                                      /* PUCC5_6          */
    uint32 PUCC5_7:1;                                      /* PUCC5_7          */
    uint32 PUCC5_8:1;                                      /* PUCC5_8          */
    uint32 PUCC5_9:1;                                      /* PUCC5_9          */
    uint32 PUCC5_10:1;                                     /* PUCC5_10         */
    uint32 PUCC5_11:1;                                     /* PUCC5_11         */
    uint32 PUCC5_12:1;                                     /* PUCC5_12         */
    uint32 PUCC5_13:1;                                     /* PUCC5_13         */
    uint32 PUCC5_14:1;                                     /* PUCC5_14         */
    uint32 PUCC5_15:1;                                     /* PUCC5_15         */
    uint32 :16;                                            /* Reserved Bits    */
} __type292;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PCMD5:8;                                        /* PCMD5[7:0]       */
    uint32 :24;                                            /* Reserved Bits    */
} __type293;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 PPROTS5_0:1;                              /* PPROTS5_0        */
    uint32 :31;                                            /* Reserved Bits    */
} __type294;
typedef struct 
{                                                          /* Bit Access       */
    uint32 PODCE5_0:1;                                     /* PODCE5_0         */
    uint32 PODCE5_1:1;                                     /* PODCE5_1         */
    uint32 PODCE5_2:1;                                     /* PODCE5_2         */
    uint32 PODCE5_3:1;                                     /* PODCE5_3         */
    uint32 PODCE5_4:1;                                     /* PODCE5_4         */
    uint32 PODCE5_5:1;                                     /* PODCE5_5         */
    uint32 PODCE5_6:1;                                     /* PODCE5_6         */
    uint32 PODCE5_7:1;                                     /* PODCE5_7         */
    uint32 PODCE5_8:1;                                     /* PODCE5_8         */
    uint32 PODCE5_9:1;                                     /* PODCE5_9         */
    uint32 PODCE5_10:1;                                    /* PODCE5_10        */
    uint32 PODCE5_11:1;                                    /* PODCE5_11        */
    uint32 PODCE5_12:1;                                    /* PODCE5_12        */
    uint32 PODCE5_13:1;                                    /* PODCE5_13        */
    uint32 PODCE5_14:1;                                    /* PODCE5_14        */
    uint32 PODCE5_15:1;                                    /* PODCE5_15        */
    uint32 :16;                                            /* Reserved Bits    */
} __type295;
typedef struct 
{                                                          /* Bit Access       */
    uint8  JP0_0:1;                                        /* JP0_0            */
    uint8  JP0_1:1;                                        /* JP0_1            */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  JP0_3:1;                                        /* JP0_3            */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  JP0_5:1;                                        /* JP0_5            */
    uint8  :2;                                             /* Reserved Bits    */
} __type296;
typedef struct 
{                                                          /* Bit Access       */
    uint32 JPSR0_0:1;                                      /* JPSR0_0          */
    uint32 JPSR0_1:1;                                      /* JPSR0_1          */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPSR0_3:1;                                      /* JPSR0_3          */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPSR0_5:1;                                      /* JPSR0_5          */
    uint32 :10;                                            /* Reserved Bits    */
    uint32 JPSR0_16:1;                                     /* JPSR0_16         */
    uint32 JPSR0_17:1;                                     /* JPSR0_17         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPSR0_19:1;                                     /* JPSR0_19         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPSR0_21:1;                                     /* JPSR0_21         */
    uint32 :10;                                            /* Reserved Bits    */
} __type297;
typedef struct 
{                                                          /* Bit Access       */
    uint8  JPNOT0_0:1;                                     /* JPNOT0_0         */
    uint8  JPNOT0_1:1;                                     /* JPNOT0_1         */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  JPNOT0_3:1;                                     /* JPNOT0_3         */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  JPNOT0_5:1;                                     /* JPNOT0_5         */
    uint8  :2;                                             /* Reserved Bits    */
} __type298;
typedef struct 
{                                                          /* Bit Access       */
    const uint8  JPPR0_0:1;                                /* JPPR0_0          */
    const uint8  JPPR0_1:1;                                /* JPPR0_1          */
    const uint8  JPPR0_2:1;                                /* JPPR0_2          */
    const uint8  JPPR0_3:1;                                /* JPPR0_3          */
    const uint8  JPPR0_4:1;                                /* JPPR0_4          */
    const uint8  JPPR0_5:1;                                /* JPPR0_5          */
    uint8  :2;                                             /* Reserved Bits    */
} __type299;
typedef struct 
{                                                          /* Bit Access       */
    uint8  JPM0_0:1;                                       /* JPM0_0           */
    uint8  JPM0_1:1;                                       /* JPM0_1           */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  JPM0_3:1;                                       /* JPM0_3           */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  JPM0_5:1;                                       /* JPM0_5           */
    uint8  :2;                                             /* Reserved Bits    */
} __type300;
typedef struct 
{                                                          /* Bit Access       */
    uint8  JPMC0_0:1;                                      /* JPMC0_0          */
    uint8  JPMC0_1:1;                                      /* JPMC0_1          */
    uint8  JPMC0_2:1;                                      /* JPMC0_2          */
    uint8  :5;                                             /* Reserved Bits    */
} __type301;
typedef struct 
{                                                          /* Bit Access       */
    uint8  JPFCE0_0:1;                                     /* JPFCE0_0         */
    uint8  JPFCE0_1:1;                                     /* JPFCE0_1         */
    uint8  JPFCE0_2:1;                                     /* JPFCE0_2         */
    uint8  :5;                                             /* Reserved Bits    */
} __type302;
typedef struct 
{                                                          /* Bit Access       */
    uint32 JPMSR0_0:1;                                     /* JPMSR0_0         */
    uint32 JPMSR0_1:1;                                     /* JPMSR0_1         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPMSR0_3:1;                                     /* JPMSR0_3         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPMSR0_5:1;                                     /* JPMSR0_5         */
    uint32 :10;                                            /* Reserved Bits    */
    uint32 JPMSR0_16:1;                                    /* JPMSR0_16        */
    uint32 JPMSR0_17:1;                                    /* JPMSR0_17        */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPMSR0_19:1;                                    /* JPMSR0_19        */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPMSR0_21:1;                                    /* JPMSR0_21        */
    uint32 :10;                                            /* Reserved Bits    */
} __type303;
typedef struct 
{                                                          /* Bit Access       */
    uint32 JPMCSR0_0:1;                                    /* JPMCSR0_0        */
    uint32 JPMCSR0_1:1;                                    /* JPMCSR0_1        */
    uint32 JPMCSR0_2:1;                                    /* JPMCSR0_2        */
    uint32 :13;                                            /* Reserved Bits    */
    uint32 JPMCSR0_16:1;                                   /* JPMCSR0_16       */
    uint32 JPMCSR0_17:1;                                   /* JPMCSR0_17       */
    uint32 JPMCSR0_18:1;                                   /* JPMCSR0_18       */
    uint32 :13;                                            /* Reserved Bits    */
} __type304;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPFCE:1;                                        /* JPFCE            */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 JPM:1;                                          /* JPM              */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPMC:1;                                         /* JPMC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 JPPR:1;                                   /* JPPR             */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 JP:1;                                           /* JP               */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 JPIBC:1;                                        /* JPIBC            */
    uint32 JPBDC:1;                                        /* JPBDC            */
    uint32 JPD:1;                                          /* JPD              */
    uint32 JPU:1;                                          /* JPU              */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 JPISA:1;                                        /* JPISA            */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 JPDSC:1;                                  /* JPDSC            */
    const uint32 JPUCC:1;                                  /* JPUCC            */
    uint32 :2;                                             /* Reserved Bits    */
    const uint32 JPODC:1;                                  /* JPODC            */
    uint32 :3;                                             /* Reserved Bits    */
} __type305;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPFCE:1;                                        /* JPFCE            */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 JPMC:1;                                         /* JPMC             */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 JPPR:1;                                   /* JPPR             */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 JPIBC:1;                                        /* JPIBC            */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPD:1;                                          /* JPD              */
    uint32 JPU:1;                                          /* JPU              */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 JPISA:1;                                        /* JPISA            */
    uint32 :9;                                             /* Reserved Bits    */
} __type306;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 JPM:1;                                          /* JPM              */
    uint32 :3;                                             /* Reserved Bits    */
    const uint32 JPPR:1;                                   /* JPPR             */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 JP:1;                                           /* JP               */
    uint32 :3;                                             /* Reserved Bits    */
    uint32 JPIBC:1;                                        /* JPIBC            */
    uint32 JPBDC:1;                                        /* JPBDC            */
    uint32 JPD:1;                                          /* JPD              */
    uint32 JPU:1;                                          /* JPU              */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 JPISA:1;                                        /* JPISA            */
    uint32 :1;                                             /* Reserved Bits    */
    const uint32 JPDSC:1;                                  /* JPDSC            */
    const uint32 JPUCC:1;                                  /* JPUCC            */
    uint32 :2;                                             /* Reserved Bits    */
    const uint32 JPODC:1;                                  /* JPODC            */
    uint32 :3;                                             /* Reserved Bits    */
} __type307;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :8;                                             /* Reserved Bits    */
    const uint32 JPPR:1;                                   /* JPPR             */
    uint32 :23;                                            /* Reserved Bits    */
} __type308;
typedef struct 
{                                                          /* Bit Access       */
    uint8  JPIBC0_0:1;                                     /* JPIBC0_0         */
    uint8  JPIBC0_1:1;                                     /* JPIBC0_1         */
    uint8  JPIBC0_2:1;                                     /* JPIBC0_2         */
    uint8  JPIBC0_3:1;                                     /* JPIBC0_3         */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  JPIBC0_5:1;                                     /* JPIBC0_5         */
    uint8  :2;                                             /* Reserved Bits    */
} __type309;
typedef struct 
{                                                          /* Bit Access       */
    uint8  JPBDC0_0:1;                                     /* JPBDC0_0         */
    uint8  JPBDC0_1:1;                                     /* JPBDC0_1         */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  JPBDC0_3:1;                                     /* JPBDC0_3         */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  JPBDC0_5:1;                                     /* JPBDC0_5         */
    uint8  :2;                                             /* Reserved Bits    */
} __type310;
typedef struct 
{                                                          /* Bit Access       */
    uint8  JPU0_0:1;                                       /* JPU0_0           */
    uint8  JPU0_1:1;                                       /* JPU0_1           */
    uint8  JPU0_2:1;                                       /* JPU0_2           */
    uint8  JPU0_3:1;                                       /* JPU0_3           */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  JPU0_5:1;                                       /* JPU0_5           */
    uint8  :2;                                             /* Reserved Bits    */
} __type311;
typedef struct 
{                                                          /* Bit Access       */
    uint8  JPD0_0:1;                                       /* JPD0_0           */
    uint8  JPD0_1:1;                                       /* JPD0_1           */
    uint8  JPD0_2:1;                                       /* JPD0_2           */
    uint8  JPD0_3:1;                                       /* JPD0_3           */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  JPD0_5:1;                                       /* JPD0_5           */
    uint8  :2;                                             /* Reserved Bits    */
} __type312;
typedef struct 
{                                                          /* Bit Access       */
    uint32 JPODC0_0:1;                                     /* JPODC0_0         */
    uint32 JPODC0_1:1;                                     /* JPODC0_1         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPODC0_3:1;                                     /* JPODC0_3         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPODC0_5:1;                                     /* JPODC0_5         */
    uint32 :26;                                            /* Reserved Bits    */
} __type313;
typedef struct 
{                                                          /* Bit Access       */
    uint32 JPDSC0_0:1;                                     /* JPDSC0_0         */
    uint32 JPDSC0_1:1;                                     /* JPDSC0_1         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPDSC0_3:1;                                     /* JPDSC0_3         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPDSC0_5:1;                                     /* JPDSC0_5         */
    uint32 :26;                                            /* Reserved Bits    */
} __type314;
typedef struct 
{                                                          /* Bit Access       */
    uint32 JPUCC0_0:1;                                     /* JPUCC0_0         */
    uint32 JPUCC0_1:1;                                     /* JPUCC0_1         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPUCC0_3:1;                                     /* JPUCC0_3         */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 JPUCC0_5:1;                                     /* JPUCC0_5         */
    uint32 :26;                                            /* Reserved Bits    */
} __type315;
typedef struct 
{                                                          /* Bit Access       */
    uint8  JPISA0_0:1;                                     /* JPISA0_0         */
    uint8  JPISA0_1:1;                                     /* JPISA0_1         */
    uint8  JPISA0_2:1;                                     /* JPISA0_2         */
    uint8  JPISA0_3:1;                                     /* JPISA0_3         */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  JPISA0_5:1;                                     /* JPISA0_5         */
    uint8  :2;                                             /* Reserved Bits    */
} __type316;
typedef struct 
{                                                          /* Bit Access       */
    uint32 JPCMD0:8;                                       /* JPCMD0[7:0]      */
    uint32 :24;                                            /* Reserved Bits    */
} __type317;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 JPPROTS0_0:1;                             /* JPPROTS0_0       */
    uint32 :31;                                            /* Reserved Bits    */
} __type318;

typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type142 BIT;                                         /* Bit Access       */
} __type1421;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type143 BIT;                                         /* Bit Access       */
} __type1422;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type144 BIT;                                         /* Bit Access       */
} __type1423;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type145 BIT;                                   /* Bit Access       */
} __type1424;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type146 BIT;                                         /* Bit Access       */
} __type1425;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type147 BIT;                                         /* Bit Access       */
} __type1426;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type148 BIT;                                         /* Bit Access       */
} __type1427;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type149 BIT;                                         /* Bit Access       */
} __type1428;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type150 BIT;                                         /* Bit Access       */
} __type1429;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type151 BIT;                                         /* Bit Access       */
} __type1430;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type152 BIT;                                         /* Bit Access       */
} __type1431;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type153 BIT;                                         /* Bit Access       */
} __type1432;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type154 BIT;                                         /* Bit Access       */
} __type1433;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type155 BIT;                                         /* Bit Access       */
} __type1434;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type156 BIT;                                         /* Bit Access       */
} __type1435;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type157 BIT;                                   /* Bit Access       */
} __type1436;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type158 BIT;                                         /* Bit Access       */
} __type1437;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type159 BIT;                                         /* Bit Access       */
} __type1438;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type160 BIT;                                         /* Bit Access       */
} __type1439;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type161 BIT;                                         /* Bit Access       */
} __type1440;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type162 BIT;                                         /* Bit Access       */
} __type1441;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type163 BIT;                                         /* Bit Access       */
} __type1442;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type164 BIT;                                         /* Bit Access       */
} __type1443;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type165 BIT;                                         /* Bit Access       */
} __type1444;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type166 BIT;                                         /* Bit Access       */
} __type1445;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type167 BIT;                                         /* Bit Access       */
} __type1446;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type168 BIT;                                         /* Bit Access       */
} __type1447;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type169 BIT;                                   /* Bit Access       */
} __type1448;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type170 BIT;                                         /* Bit Access       */
} __type1449;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type171 BIT;                                         /* Bit Access       */
} __type1450;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type172 BIT;                                         /* Bit Access       */
} __type1451;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type173 BIT;                                         /* Bit Access       */
} __type1452;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type174 BIT;                                         /* Bit Access       */
} __type1453;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type175 BIT;                                         /* Bit Access       */
} __type1454;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type176 BIT;                                         /* Bit Access       */
} __type1455;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type177 BIT;                                         /* Bit Access       */
} __type1456;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type178 BIT;                                         /* Bit Access       */
} __type1457;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type179 BIT;                                         /* Bit Access       */
} __type1458;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type180 BIT;                                         /* Bit Access       */
} __type1459;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type181 BIT;                                   /* Bit Access       */
} __type1460;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type182 BIT;                                         /* Bit Access       */
} __type1461;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type183 BIT;                                         /* Bit Access       */
} __type1462;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type184 BIT;                                         /* Bit Access       */
} __type1463;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type185 BIT;                                         /* Bit Access       */
} __type1464;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type186 BIT;                                         /* Bit Access       */
} __type1465;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type187 BIT;                                         /* Bit Access       */
} __type1466;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type188 BIT;                                         /* Bit Access       */
} __type1467;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type189 BIT;                                         /* Bit Access       */
} __type1468;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type190 BIT;                                         /* Bit Access       */
} __type1469;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type191 BIT;                                         /* Bit Access       */
} __type1470;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type192 BIT;                                         /* Bit Access       */
} __type1471;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type193 BIT;                                   /* Bit Access       */
} __type1472;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type194 BIT;                                         /* Bit Access       */
} __type1473;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type195 BIT;                                         /* Bit Access       */
} __type1474;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type196 BIT;                                         /* Bit Access       */
} __type1475;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type197 BIT;                                         /* Bit Access       */
} __type1476;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type198 BIT;                                         /* Bit Access       */
} __type1477;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type199 BIT;                                         /* Bit Access       */
} __type1478;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type200 BIT;                                         /* Bit Access       */
} __type1479;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type201 BIT;                                         /* Bit Access       */
} __type1480;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type202 BIT;                                         /* Bit Access       */
} __type1481;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type203 BIT;                                         /* Bit Access       */
} __type1482;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type204 BIT;                                         /* Bit Access       */
} __type1483;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    const __type205 BIT;                                   /* Bit Access       */
} __type1484;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type206 BIT;                                         /* Bit Access       */
} __type1485;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type207 BIT;                                         /* Bit Access       */
} __type1486;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type208 BIT;                                         /* Bit Access       */
} __type1487;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type209 BIT;                                         /* Bit Access       */
} __type1488;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type210 BIT;                                         /* Bit Access       */
} __type1489;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type211 BIT;                                         /* Bit Access       */
} __type1490;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type212 BIT;                                         /* Bit Access       */
} __type1491;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type213 BIT;                                         /* Bit Access       */
} __type1492;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type214 BIT;                                         /* Bit Access       */
} __type1493;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type215 BIT;                                         /* Bit Access       */
} __type1494;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type216 BIT;                                         /* Bit Access       */
} __type1495;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type217 BIT;                                         /* Bit Access       */
} __type1496;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type218 BIT;                                         /* Bit Access       */
} __type1497;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type219 BIT;                                         /* Bit Access       */
} __type1498;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type220 BIT;                                         /* Bit Access       */
} __type1499;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type221 BIT;                                         /* Bit Access       */
} __type1500;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type222 BIT;                                         /* Bit Access       */
} __type1501;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type223 BIT;                                         /* Bit Access       */
} __type1502;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type224 BIT;                                         /* Bit Access       */
} __type1503;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type225 BIT;                                         /* Bit Access       */
} __type1504;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type226 BIT;                                         /* Bit Access       */
} __type1505;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type227 BIT;                                         /* Bit Access       */
} __type1506;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type228 BIT;                                         /* Bit Access       */
} __type1507;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type229 BIT;                                         /* Bit Access       */
} __type1508;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type230 BIT;                                         /* Bit Access       */
} __type1509;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type231 BIT;                                         /* Bit Access       */
} __type1510;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type232 BIT;                                         /* Bit Access       */
} __type1511;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type233 BIT;                                         /* Bit Access       */
} __type1512;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type234 BIT;                                         /* Bit Access       */
} __type1513;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type235 BIT;                                   /* Bit Access       */
} __type1514;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type236 BIT;                                         /* Bit Access       */
} __type1515;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type237 BIT;                                         /* Bit Access       */
} __type1516;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type238 BIT;                                         /* Bit Access       */
} __type1517;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type239 BIT;                                         /* Bit Access       */
} __type1518;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type240 BIT;                                         /* Bit Access       */
} __type1519;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type241 BIT;                                         /* Bit Access       */
} __type1520;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type242 BIT;                                         /* Bit Access       */
} __type1521;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type243 BIT;                                         /* Bit Access       */
} __type1522;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type244 BIT;                                         /* Bit Access       */
} __type1523;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type245 BIT;                                         /* Bit Access       */
} __type1524;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type246 BIT;                                         /* Bit Access       */
} __type1525;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type247 BIT;                                   /* Bit Access       */
} __type1526;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type248 BIT;                                         /* Bit Access       */
} __type1527;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type249 BIT;                                         /* Bit Access       */
} __type1528;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type250 BIT;                                         /* Bit Access       */
} __type1529;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type251 BIT;                                         /* Bit Access       */
} __type1530;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type252 BIT;                                         /* Bit Access       */
} __type1531;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type253 BIT;                                         /* Bit Access       */
} __type1532;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type254 BIT;                                         /* Bit Access       */
} __type1533;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type255 BIT;                                         /* Bit Access       */
} __type1534;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type256 BIT;                                         /* Bit Access       */
} __type1535;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type257 BIT;                                         /* Bit Access       */
} __type1536;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type258 BIT;                                         /* Bit Access       */
} __type1537;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type259 BIT;                                   /* Bit Access       */
} __type1538;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type260 BIT;                                         /* Bit Access       */
} __type1539;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type261 BIT;                                         /* Bit Access       */
} __type1540;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type262 BIT;                                         /* Bit Access       */
} __type1541;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type263 BIT;                                         /* Bit Access       */
} __type1542;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type264 BIT;                                         /* Bit Access       */
} __type1543;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type265 BIT;                                         /* Bit Access       */
} __type1544;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type266 BIT;                                         /* Bit Access       */
} __type1545;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type267 BIT;                                         /* Bit Access       */
} __type1546;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type268 BIT;                                         /* Bit Access       */
} __type1547;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type269 BIT;                                         /* Bit Access       */
} __type1548;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type270 BIT;                                         /* Bit Access       */
} __type1549;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type271 BIT;                                   /* Bit Access       */
} __type1550;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type272 BIT;                                         /* Bit Access       */
} __type1551;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type273 BIT;                                         /* Bit Access       */
} __type1552;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type274 BIT;                                         /* Bit Access       */
} __type1553;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type275 BIT;                                         /* Bit Access       */
} __type1554;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type276 BIT;                                         /* Bit Access       */
} __type1555;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type277 BIT;                                         /* Bit Access       */
} __type1556;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type278 BIT;                                         /* Bit Access       */
} __type1557;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type279 BIT;                                         /* Bit Access       */
} __type1558;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type280 BIT;                                         /* Bit Access       */
} __type1559;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type281 BIT;                                         /* Bit Access       */
} __type1560;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type282 BIT;                                         /* Bit Access       */
} __type1561;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type283 BIT;                                   /* Bit Access       */
} __type1562;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type284 BIT;                                         /* Bit Access       */
} __type1563;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type285 BIT;                                         /* Bit Access       */
} __type1564;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type286 BIT;                                         /* Bit Access       */
} __type1565;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type287 BIT;                                         /* Bit Access       */
} __type1566;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type288 BIT;                                         /* Bit Access       */
} __type1567;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type289 BIT;                                         /* Bit Access       */
} __type1568;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type290 BIT;                                         /* Bit Access       */
} __type1569;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type291 BIT;                                         /* Bit Access       */
} __type1570;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type292 BIT;                                         /* Bit Access       */
} __type1571;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type293 BIT;                                         /* Bit Access       */
} __type1572;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type294 BIT;                                   /* Bit Access       */
} __type1573;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type295 BIT;                                         /* Bit Access       */
} __type1574;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type296 BIT;                                         /* Bit Access       */
} __type1575;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type297 BIT;                                         /* Bit Access       */
} __type1576;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type298 BIT;                                         /* Bit Access       */
} __type1577;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    const __type299 BIT;                                   /* Bit Access       */
} __type1578;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type300 BIT;                                         /* Bit Access       */
} __type1579;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type301 BIT;                                         /* Bit Access       */
} __type1580;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type302 BIT;                                         /* Bit Access       */
} __type1581;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type303 BIT;                                         /* Bit Access       */
} __type1582;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type304 BIT;                                         /* Bit Access       */
} __type1583;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type305 BIT;                                         /* Bit Access       */
} __type1584;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type306 BIT;                                         /* Bit Access       */
} __type1585;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type307 BIT;                                         /* Bit Access       */
} __type1586;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type308 BIT;                                         /* Bit Access       */
} __type1587;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type309 BIT;                                         /* Bit Access       */
} __type1588;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type310 BIT;                                         /* Bit Access       */
} __type1589;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type311 BIT;                                         /* Bit Access       */
} __type1590;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type312 BIT;                                         /* Bit Access       */
} __type1591;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type313 BIT;                                         /* Bit Access       */
} __type1592;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type314 BIT;                                         /* Bit Access       */
} __type1593;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type315 BIT;                                         /* Bit Access       */
} __type1594;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type316 BIT;                                         /* Bit Access       */
} __type1595;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type317 BIT;                                         /* Bit Access       */
} __type1596;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type318 BIT;                                   /* Bit Access       */
} __type1597;

typedef struct 
{                                                          /* Module           */
    __type1421 P0;                                         /* P0               */
    uint8  dummy52[2];                                     /* Reserved         */
    __type1422 PSR0;                                       /* PSR0             */
    __type1423 PNOT0;                                      /* PNOT0            */
    uint8  dummy53[2];                                     /* Reserved         */
    const __type1424 PPR0;                                 /* PPR0             */
    uint8  dummy54[2];                                     /* Reserved         */
    __type1425 PM0;                                        /* PM0              */
    uint8  dummy55[2];                                     /* Reserved         */
    __type1426 PMC0;                                       /* PMC0             */
    uint8  dummy56[2];                                     /* Reserved         */
    __type1427 PFC0;                                       /* PFC0             */
    uint8  dummy57[2];                                     /* Reserved         */
    __type1428 PFCE0;                                      /* PFCE0            */
    uint8  dummy58[2];                                     /* Reserved         */
    __type1429 PMSR0;                                      /* PMSR0            */
    __type1430 PMCSR0;                                     /* PMCSR0           */
    __type1431 PFCAE0;                                     /* PFCAE0           */
    uint8  dummy59[6];                                     /* Reserved         */
    __type1432 PINV0;                                      /* PINV0            */
    uint8  dummy60[12];                                    /* Reserved         */
    __type1433 P1;                                         /* P1               */
    uint8  dummy61[2];                                     /* Reserved         */
    __type1434 PSR1;                                       /* PSR1             */
    __type1435 PNOT1;                                      /* PNOT1            */
    uint8  dummy62[2];                                     /* Reserved         */
    const __type1436 PPR1;                                 /* PPR1             */
    uint8  dummy63[2];                                     /* Reserved         */
    __type1437 PM1;                                        /* PM1              */
    uint8  dummy64[2];                                     /* Reserved         */
    __type1438 PMC1;                                       /* PMC1             */
    uint8  dummy65[2];                                     /* Reserved         */
    __type1439 PFC1;                                       /* PFC1             */
    uint8  dummy66[2];                                     /* Reserved         */
    __type1440 PFCE1;                                      /* PFCE1            */
    uint8  dummy67[2];                                     /* Reserved         */
    __type1441 PMSR1;                                      /* PMSR1            */
    __type1442 PMCSR1;                                     /* PMCSR1           */
    __type1443 PFCAE1;                                     /* PFCAE1           */
    uint8  dummy68[6];                                     /* Reserved         */
    __type1444 PINV1;                                      /* PINV1            */
    uint8  dummy69[12];                                    /* Reserved         */
    __type1445 P2;                                         /* P2               */
    uint8  dummy70[2];                                     /* Reserved         */
    __type1446 PSR2;                                       /* PSR2             */
    __type1447 PNOT2;                                      /* PNOT2            */
    uint8  dummy71[2];                                     /* Reserved         */
    const __type1448 PPR2;                                 /* PPR2             */
    uint8  dummy72[2];                                     /* Reserved         */
    __type1449 PM2;                                        /* PM2              */
    uint8  dummy73[2];                                     /* Reserved         */
    __type1450 PMC2;                                       /* PMC2             */
    uint8  dummy74[2];                                     /* Reserved         */
    __type1451 PFC2;                                       /* PFC2             */
    uint8  dummy75[2];                                     /* Reserved         */
    __type1452 PFCE2;                                      /* PFCE2            */
    uint8  dummy76[2];                                     /* Reserved         */
    __type1453 PMSR2;                                      /* PMSR2            */
    __type1454 PMCSR2;                                     /* PMCSR2           */
    __type1455 PFCAE2;                                     /* PFCAE2           */
    uint8  dummy77[6];                                     /* Reserved         */
    __type1456 PINV2;                                      /* PINV2            */
    uint8  dummy78[12];                                    /* Reserved         */
    __type1457 P3;                                         /* P3               */
    uint8  dummy79[2];                                     /* Reserved         */
    __type1458 PSR3;                                       /* PSR3             */
    __type1459 PNOT3;                                      /* PNOT3            */
    uint8  dummy80[2];                                     /* Reserved         */
    const __type1460 PPR3;                                 /* PPR3             */
    uint8  dummy81[2];                                     /* Reserved         */
    __type1461 PM3;                                        /* PM3              */
    uint8  dummy82[2];                                     /* Reserved         */
    __type1462 PMC3;                                       /* PMC3             */
    uint8  dummy83[2];                                     /* Reserved         */
    __type1463 PFC3;                                       /* PFC3             */
    uint8  dummy84[2];                                     /* Reserved         */
    __type1464 PFCE3;                                      /* PFCE3            */
    uint8  dummy85[2];                                     /* Reserved         */
    __type1465 PMSR3;                                      /* PMSR3            */
    __type1466 PMCSR3;                                     /* PMCSR3           */
    __type1467 PFCAE3;                                     /* PFCAE3           */
    uint8  dummy86[6];                                     /* Reserved         */
    __type1468 PINV3;                                      /* PINV3            */
    uint8  dummy87[12];                                    /* Reserved         */
    __type1469 P4;                                         /* P4               */
    uint8  dummy88[2];                                     /* Reserved         */
    __type1470 PSR4;                                       /* PSR4             */
    __type1471 PNOT4;                                      /* PNOT4            */
    uint8  dummy89[2];                                     /* Reserved         */
    const __type1472 PPR4;                                 /* PPR4             */
    uint8  dummy90[2];                                     /* Reserved         */
    __type1473 PM4;                                        /* PM4              */
    uint8  dummy91[2];                                     /* Reserved         */
    __type1474 PMC4;                                       /* PMC4             */
    uint8  dummy92[2];                                     /* Reserved         */
    __type1475 PFC4;                                       /* PFC4             */
    uint8  dummy93[2];                                     /* Reserved         */
    __type1476 PFCE4;                                      /* PFCE4            */
    uint8  dummy94[2];                                     /* Reserved         */
    __type1477 PMSR4;                                      /* PMSR4            */
    __type1478 PMCSR4;                                     /* PMCSR4           */
    __type1479 PFCAE4;                                     /* PFCAE4           */
    uint8  dummy95[6];                                     /* Reserved         */
    __type1480 PINV4;                                      /* PINV4            */
    uint8  dummy96[12];                                    /* Reserved         */
    __type1481 P5;                                         /* P5               */
    uint8  dummy97[2];                                     /* Reserved         */
    __type1482 PSR5;                                       /* PSR5             */
    __type1483 PNOT5;                                      /* PNOT5            */
    uint8  dummy98[2];                                     /* Reserved         */
    const __type1484 PPR5;                                 /* PPR5             */
    uint8  dummy99[2];                                     /* Reserved         */
    __type1485 PM5;                                        /* PM5              */
    uint8  dummy100[2];                                    /* Reserved         */
    __type1486 PMC5;                                       /* PMC5             */
    uint8  dummy101[2];                                    /* Reserved         */
    __type1487 PFC5;                                       /* PFC5             */
    uint8  dummy102[2];                                    /* Reserved         */
    __type1488 PFCE5;                                      /* PFCE5            */
    uint8  dummy103[2];                                    /* Reserved         */
    __type1489 PMSR5;                                      /* PMSR5            */
    __type1490 PMCSR5;                                     /* PMCSR5           */
    __type1491 PFCAE5;                                     /* PFCAE5           */
    uint8  dummy104[6];                                    /* Reserved         */
    __type1492 PINV5;                                      /* PINV5            */
    uint8  dummy105[7820];                                 /* Reserved         */
    __type1493 PCR0_0;                                     /* PCR0_0           */
    __type1493 PCR0_1;                                     /* PCR0_1           */
    __type1493 PCR0_2;                                     /* PCR0_2           */
    __type1494 PCR0_3;                                     /* PCR0_3           */
    __type1494 PCR0_4;                                     /* PCR0_4           */
    __type1494 PCR0_5;                                     /* PCR0_5           */
    __type1494 PCR0_6;                                     /* PCR0_6           */
    __type1494 PCR0_7;                                     /* PCR0_7           */
    __type1494 PCR0_8;                                     /* PCR0_8           */
    __type1495 PCR0_9;                                     /* PCR0_9           */
    __type1496 PCR0_10;                                    /* PCR0_10          */
    __type1496 PCR0_11;                                    /* PCR0_11          */
    __type1496 PCR0_12;                                    /* PCR0_12          */
    __type1495 PCR0_13;                                    /* PCR0_13          */
    __type1496 PCR0_14;                                    /* PCR0_14          */
    uint8  dummy106[4];                                    /* Reserved         */
    __type1497 PCR1_0;                                     /* PCR1_0           */
    __type1498 PCR1_1;                                     /* PCR1_1           */
    __type1498 PCR1_2;                                     /* PCR1_2           */
    __type1494 PCR1_3;                                     /* PCR1_3           */
    __type1494 PCR1_4;                                     /* PCR1_4           */
    uint8  dummy107[44];                                   /* Reserved         */
    __type1499 PCR2_0;                                     /* PCR2_0           */
    __type1494 PCR2_1;                                     /* PCR2_1           */
    __type1494 PCR2_2;                                     /* PCR2_2           */
    __type1493 PCR2_3;                                     /* PCR2_3           */
    __type1497 PCR2_4;                                     /* PCR2_4           */
    __type1494 PCR2_5;                                     /* PCR2_5           */
    __type1493 PCR2_6;                                     /* PCR2_6           */
    __type1494 PCR2_7;                                     /* PCR2_7           */
    __type1493 PCR2_8;                                     /* PCR2_8           */
    __type1493 PCR2_9;                                     /* PCR2_9           */
    __type1497 PCR2_10;                                    /* PCR2_10          */
    __type1497 PCR2_11;                                    /* PCR2_11          */
    __type1494 PCR2_12;                                    /* PCR2_12          */
    __type1497 PCR2_13;                                    /* PCR2_13          */
    __type1497 PCR2_14;                                    /* PCR2_14          */
    __type1497 PCR2_15;                                    /* PCR2_15          */
    __type1494 PCR3_0;                                     /* PCR3_0           */
    __type1494 PCR3_1;                                     /* PCR3_1           */
    __type1493 PCR3_2;                                     /* PCR3_2           */
    __type1497 PCR3_3;                                     /* PCR3_3           */
    __type1497 PCR3_4;                                     /* PCR3_4           */
    __type1497 PCR3_5;                                     /* PCR3_5           */
    __type1497 PCR3_6;                                     /* PCR3_6           */
    __type1493 PCR3_7;                                     /* PCR3_7           */
    __type1493 PCR3_8;                                     /* PCR3_8           */
    __type1493 PCR3_9;                                     /* PCR3_9           */
    __type1500 PCR3_10;                                    /* PCR3_10          */
    __type1493 PCR3_11;                                    /* PCR3_11          */
    __type1493 PCR3_12;                                    /* PCR3_12          */
    __type1493 PCR3_13;                                    /* PCR3_13          */
    __type1494 PCR3_14;                                    /* PCR3_14          */
    uint8  dummy108[4];                                    /* Reserved         */
    __type1494 PCR4_0;                                     /* PCR4_0           */
    __type1494 PCR4_1;                                     /* PCR4_1           */
    __type1494 PCR4_2;                                     /* PCR4_2           */
    __type1494 PCR4_3;                                     /* PCR4_3           */
    __type1494 PCR4_4;                                     /* PCR4_4           */
    __type1494 PCR4_5;                                     /* PCR4_5           */
    __type1494 PCR4_6;                                     /* PCR4_6           */
    __type1497 PCR4_7;                                     /* PCR4_7           */
    __type1497 PCR4_8;                                     /* PCR4_8           */
    __type1498 PCR4_9;                                     /* PCR4_9           */
    __type1498 PCR4_10;                                    /* PCR4_10          */
    __type1497 PCR4_11;                                    /* PCR4_11          */
    __type1498 PCR4_12;                                    /* PCR4_12          */
    __type1498 PCR4_13;                                    /* PCR4_13          */
    __type1497 PCR4_14;                                    /* PCR4_14          */
    uint8  dummy109[4];                                    /* Reserved         */
    __type1497 PCR5_0;                                     /* PCR5_0           */
    __type1493 PCR5_1;                                     /* PCR5_1           */
    __type1493 PCR5_2;                                     /* PCR5_2           */
    __type1501 PCR5_3;                                     /* PCR5_3           */
    __type1493 PCR5_4;                                     /* PCR5_4           */
    __type1493 PCR5_5;                                     /* PCR5_5           */
    __type1493 PCR5_6;                                     /* PCR5_6           */
    __type1493 PCR5_7;                                     /* PCR5_7           */
    __type1493 PCR5_8;                                     /* PCR5_8           */
    __type1493 PCR5_9;                                     /* PCR5_9           */
    __type1493 PCR5_10;                                    /* PCR5_10          */
    __type1502 PCR5_11;                                    /* PCR5_11          */
    __type1502 PCR5_12;                                    /* PCR5_12          */
    __type1493 PCR5_13;                                    /* PCR5_13          */
    __type1493 PCR5_14;                                    /* PCR5_14          */
    __type1503 PCR5_15;                                    /* PCR5_15          */
    uint8  dummy110[7808];                                 /* Reserved         */
    __type1504 PIBC0;                                      /* PIBC0            */
    uint8  dummy111[2];                                    /* Reserved         */
    __type1505 PBDC0;                                      /* PBDC0            */
    uint8  dummy112[2];                                    /* Reserved         */
    __type1506 PIPC0;                                      /* PIPC0            */
    uint8  dummy113[2];                                    /* Reserved         */
    __type1507 PU0;                                        /* PU0              */
    uint8  dummy114[2];                                    /* Reserved         */
    __type1508 PD0;                                        /* PD0              */
    uint8  dummy115[2];                                    /* Reserved         */
    __type1509 PODC0;                                      /* PODC0            */
    __type1510 PDSC0;                                      /* PDSC0            */
    uint8  dummy116[12];                                   /* Reserved         */
    __type1511 PUCC0;                                      /* PUCC0            */
    __type1512 PISA0;                                      /* PISA0            */
    uint8  dummy117[2];                                    /* Reserved         */
    __type1513 PPCMD0;                                     /* PPCMD0           */
    const __type1514 PPROTS0;                              /* PPROTS0          */
    uint8  dummy118[4];                                    /* Reserved         */
    __type1515 PODCE0;                                     /* PODCE0           */
    __type1516 PIBC1;                                      /* PIBC1            */
    uint8  dummy119[2];                                    /* Reserved         */
    __type1517 PBDC1;                                      /* PBDC1            */
    uint8  dummy120[2];                                    /* Reserved         */
    __type1518 PIPC1;                                      /* PIPC1            */
    uint8  dummy121[2];                                    /* Reserved         */
    __type1519 PU1;                                        /* PU1              */
    uint8  dummy122[2];                                    /* Reserved         */
    __type1520 PD1;                                        /* PD1              */
    uint8  dummy123[2];                                    /* Reserved         */
    __type1521 PODC1;                                      /* PODC1            */
    __type1522 PDSC1;                                      /* PDSC1            */
    uint8  dummy124[12];                                   /* Reserved         */
    __type1523 PUCC1;                                      /* PUCC1            */
    __type1524 PISA1;                                      /* PISA1            */
    uint8  dummy125[2];                                    /* Reserved         */
    __type1525 PPCMD1;                                     /* PPCMD1           */
    const __type1526 PPROTS1;                              /* PPROTS1          */
    uint8  dummy126[4];                                    /* Reserved         */
    __type1527 PODCE1;                                     /* PODCE1           */
    __type1528 PIBC2;                                      /* PIBC2            */
    uint8  dummy127[2];                                    /* Reserved         */
    __type1529 PBDC2;                                      /* PBDC2            */
    uint8  dummy128[2];                                    /* Reserved         */
    __type1530 PIPC2;                                      /* PIPC2            */
    uint8  dummy129[2];                                    /* Reserved         */
    __type1531 PU2;                                        /* PU2              */
    uint8  dummy130[2];                                    /* Reserved         */
    __type1532 PD2;                                        /* PD2              */
    uint8  dummy131[2];                                    /* Reserved         */
    __type1533 PODC2;                                      /* PODC2            */
    __type1534 PDSC2;                                      /* PDSC2            */
    uint8  dummy132[12];                                   /* Reserved         */
    __type1535 PUCC2;                                      /* PUCC2            */
    __type1536 PISA2;                                      /* PISA2            */
    uint8  dummy133[2];                                    /* Reserved         */
    __type1537 PPCMD2;                                     /* PPCMD2           */
    const __type1538 PPROTS2;                              /* PPROTS2          */
    uint8  dummy134[4];                                    /* Reserved         */
    __type1539 PODCE2;                                     /* PODCE2           */
    __type1540 PIBC3;                                      /* PIBC3            */
    uint8  dummy135[2];                                    /* Reserved         */
    __type1541 PBDC3;                                      /* PBDC3            */
    uint8  dummy136[2];                                    /* Reserved         */
    __type1542 PIPC3;                                      /* PIPC3            */
    uint8  dummy137[2];                                    /* Reserved         */
    __type1543 PU3;                                        /* PU3              */
    uint8  dummy138[2];                                    /* Reserved         */
    __type1544 PD3;                                        /* PD3              */
    uint8  dummy139[2];                                    /* Reserved         */
    __type1545 PODC3;                                      /* PODC3            */
    __type1546 PDSC3;                                      /* PDSC3            */
    uint8  dummy140[12];                                   /* Reserved         */
    __type1547 PUCC3;                                      /* PUCC3            */
    __type1548 PISA3;                                      /* PISA3            */
    uint8  dummy141[2];                                    /* Reserved         */
    __type1549 PPCMD3;                                     /* PPCMD3           */
    const __type1550 PPROTS3;                              /* PPROTS3          */
    uint8  dummy142[4];                                    /* Reserved         */
    __type1551 PODCE3;                                     /* PODCE3           */
    __type1552 PIBC4;                                      /* PIBC4            */
    uint8  dummy143[2];                                    /* Reserved         */
    __type1553 PBDC4;                                      /* PBDC4            */
    uint8  dummy144[2];                                    /* Reserved         */
    __type1554 PIPC4;                                      /* PIPC4            */
    uint8  dummy145[2];                                    /* Reserved         */
    __type1555 PU4;                                        /* PU4              */
    uint8  dummy146[2];                                    /* Reserved         */
    __type1556 PD4;                                        /* PD4              */
    uint8  dummy147[2];                                    /* Reserved         */
    __type1557 PODC4;                                      /* PODC4            */
    __type1558 PDSC4;                                      /* PDSC4            */
    uint8  dummy148[12];                                   /* Reserved         */
    __type1559 PUCC4;                                      /* PUCC4            */
    __type1560 PISA4;                                      /* PISA4            */
    uint8  dummy149[2];                                    /* Reserved         */
    __type1561 PPCMD4;                                     /* PPCMD4           */
    const __type1562 PPROTS4;                              /* PPROTS4          */
    uint8  dummy150[4];                                    /* Reserved         */
    __type1563 PODCE4;                                     /* PODCE4           */
    __type1564 PIBC5;                                      /* PIBC5            */
    uint8  dummy151[2];                                    /* Reserved         */
    __type1565 PBDC5;                                      /* PBDC5            */
    uint8  dummy152[2];                                    /* Reserved         */
    __type1566 PIPC5;                                      /* PIPC5            */
    uint8  dummy153[2];                                    /* Reserved         */
    __type1567 PU5;                                        /* PU5              */
    uint8  dummy154[2];                                    /* Reserved         */
    __type1568 PD5;                                        /* PD5              */
    uint8  dummy155[2];                                    /* Reserved         */
    __type1569 PODC5;                                      /* PODC5            */
    __type1570 PDSC5;                                      /* PDSC5            */
    uint8  dummy156[12];                                   /* Reserved         */
    __type1571 PUCC5;                                      /* PUCC5            */
    uint8  dummy157[4];                                    /* Reserved         */
    __type1572 PPCMD5;                                     /* PPCMD5           */
    const __type1573 PPROTS5;                              /* PPROTS5          */
    uint8  dummy158[4];                                    /* Reserved         */
    __type1574 PODCE5;                                     /* PODCE5           */
} __type2565;
typedef struct 
{                                                          /* Module           */
    __type1575 JP0;                                        /* JP0              */
    uint8  dummy159[3];                                    /* Reserved         */
    __type1576 JPSR0;                                      /* JPSR0            */
    __type1577 JPNOT0;                                     /* JPNOT0           */
    uint8  dummy160[3];                                    /* Reserved         */
    const __type1578 JPPR0;                                /* JPPR0            */
    uint8  dummy161[3];                                    /* Reserved         */
    __type1579 JPM0;                                       /* JPM0             */
    uint8  dummy162[3];                                    /* Reserved         */
    __type1580 JPMC0;                                      /* JPMC0            */
    uint8  dummy163[7];                                    /* Reserved         */
    __type1581 JPFCE0;                                     /* JPFCE0           */
    uint8  dummy164[3];                                    /* Reserved         */
    __type1582 JPMSR0;                                     /* JPMSR0           */
    __type1583 JPMCSR0;                                    /* JPMCSR0          */
    uint8  dummy165[8152];                                 /* Reserved         */
    __type1584 JPCR0_0;                                    /* JPCR0_0          */
    __type1584 JPCR0_1;                                    /* JPCR0_1          */
    __type1585 JPCR0_2;                                    /* JPCR0_2          */
    __type1586 JPCR0_3;                                    /* JPCR0_3          */
    __type1587 JPCR0_4;                                    /* JPCR0_4          */
    __type1586 JPCR0_5;                                    /* JPCR0_5          */
    uint8  dummy166[8168];                                 /* Reserved         */
    __type1588 JPIBC0;                                     /* JPIBC0           */
    uint8  dummy167[3];                                    /* Reserved         */
    __type1589 JPBDC0;                                     /* JPBDC0           */
    uint8  dummy168[7];                                    /* Reserved         */
    __type1590 JPU0;                                       /* JPU0             */
    uint8  dummy169[3];                                    /* Reserved         */
    __type1591 JPD0;                                       /* JPD0             */
    uint8  dummy170[3];                                    /* Reserved         */
    __type1592 JPODC0;                                     /* JPODC0           */
    __type1593 JPDSC0;                                     /* JPDSC0           */
    uint8  dummy171[12];                                   /* Reserved         */
    __type1594 JPUCC0;                                     /* JPUCC0           */
    __type1595 JPISA0;                                     /* JPISA0           */
    uint8  dummy172[3];                                    /* Reserved         */
    __type1596 JPPCMD0;                                    /* JPPCMD0          */
    const __type1597 JPPROTS0;                             /* JPPROTS0         */
} __type2566;

__IOREG(PORT, 0xFFC10000, __READ_WRITE, __type2565);                  /* PORT */
__IOREG(PORTJ, 0xFFC20000, __READ_WRITE, __type2566);                 /* PORTJ */

#define PORTP0 PORT.P0.UINT16
#define PORTP0_0 PORT.P0.BIT.P0_0
#define PORTP0_1 PORT.P0.BIT.P0_1
#define PORTP0_2 PORT.P0.BIT.P0_2
#define PORTP0_3 PORT.P0.BIT.P0_3
#define PORTP0_4 PORT.P0.BIT.P0_4
#define PORTP0_5 PORT.P0.BIT.P0_5
#define PORTP0_6 PORT.P0.BIT.P0_6
#define PORTP0_7 PORT.P0.BIT.P0_7
#define PORTP0_8 PORT.P0.BIT.P0_8
#define PORTP0_9 PORT.P0.BIT.P0_9
#define PORTP0_10 PORT.P0.BIT.P0_10
#define PORTP0_11 PORT.P0.BIT.P0_11
#define PORTP0_12 PORT.P0.BIT.P0_12
#define PORTP0_13 PORT.P0.BIT.P0_13
#define PORTP0_14 PORT.P0.BIT.P0_14
#define PORTPSR0 PORT.PSR0.UINT32
#define PORTPSR0_0 PORT.PSR0.BIT.PSR0_0
#define PORTPSR0_1 PORT.PSR0.BIT.PSR0_1
#define PORTPSR0_2 PORT.PSR0.BIT.PSR0_2
#define PORTPSR0_3 PORT.PSR0.BIT.PSR0_3
#define PORTPSR0_4 PORT.PSR0.BIT.PSR0_4
#define PORTPSR0_5 PORT.PSR0.BIT.PSR0_5
#define PORTPSR0_6 PORT.PSR0.BIT.PSR0_6
#define PORTPSR0_7 PORT.PSR0.BIT.PSR0_7
#define PORTPSR0_8 PORT.PSR0.BIT.PSR0_8
#define PORTPSR0_9 PORT.PSR0.BIT.PSR0_9
#define PORTPSR0_10 PORT.PSR0.BIT.PSR0_10
#define PORTPSR0_11 PORT.PSR0.BIT.PSR0_11
#define PORTPSR0_12 PORT.PSR0.BIT.PSR0_12
#define PORTPSR0_13 PORT.PSR0.BIT.PSR0_13
#define PORTPSR0_14 PORT.PSR0.BIT.PSR0_14
#define PORTPSR0_16 PORT.PSR0.BIT.PSR0_16
#define PORTPSR0_17 PORT.PSR0.BIT.PSR0_17
#define PORTPSR0_18 PORT.PSR0.BIT.PSR0_18
#define PORTPSR0_19 PORT.PSR0.BIT.PSR0_19
#define PORTPSR0_20 PORT.PSR0.BIT.PSR0_20
#define PORTPSR0_21 PORT.PSR0.BIT.PSR0_21
#define PORTPSR0_22 PORT.PSR0.BIT.PSR0_22
#define PORTPSR0_23 PORT.PSR0.BIT.PSR0_23
#define PORTPSR0_24 PORT.PSR0.BIT.PSR0_24
#define PORTPSR0_25 PORT.PSR0.BIT.PSR0_25
#define PORTPSR0_26 PORT.PSR0.BIT.PSR0_26
#define PORTPSR0_27 PORT.PSR0.BIT.PSR0_27
#define PORTPSR0_28 PORT.PSR0.BIT.PSR0_28
#define PORTPSR0_29 PORT.PSR0.BIT.PSR0_29
#define PORTPSR0_30 PORT.PSR0.BIT.PSR0_30
#define PORTPNOT0 PORT.PNOT0.UINT16
#define PORTPNOT0_0 PORT.PNOT0.BIT.PNOT0_0
#define PORTPNOT0_1 PORT.PNOT0.BIT.PNOT0_1
#define PORTPNOT0_2 PORT.PNOT0.BIT.PNOT0_2
#define PORTPNOT0_3 PORT.PNOT0.BIT.PNOT0_3
#define PORTPNOT0_4 PORT.PNOT0.BIT.PNOT0_4
#define PORTPNOT0_5 PORT.PNOT0.BIT.PNOT0_5
#define PORTPNOT0_6 PORT.PNOT0.BIT.PNOT0_6
#define PORTPNOT0_7 PORT.PNOT0.BIT.PNOT0_7
#define PORTPNOT0_8 PORT.PNOT0.BIT.PNOT0_8
#define PORTPNOT0_9 PORT.PNOT0.BIT.PNOT0_9
#define PORTPNOT0_10 PORT.PNOT0.BIT.PNOT0_10
#define PORTPNOT0_11 PORT.PNOT0.BIT.PNOT0_11
#define PORTPNOT0_12 PORT.PNOT0.BIT.PNOT0_12
#define PORTPNOT0_13 PORT.PNOT0.BIT.PNOT0_13
#define PORTPNOT0_14 PORT.PNOT0.BIT.PNOT0_14
#define PORTPPR0 PORT.PPR0.UINT16
#define PORTPPR0_0 PORT.PPR0.BIT.PPR0_0
#define PORTPPR0_1 PORT.PPR0.BIT.PPR0_1
#define PORTPPR0_2 PORT.PPR0.BIT.PPR0_2
#define PORTPPR0_3 PORT.PPR0.BIT.PPR0_3
#define PORTPPR0_4 PORT.PPR0.BIT.PPR0_4
#define PORTPPR0_5 PORT.PPR0.BIT.PPR0_5
#define PORTPPR0_6 PORT.PPR0.BIT.PPR0_6
#define PORTPPR0_7 PORT.PPR0.BIT.PPR0_7
#define PORTPPR0_8 PORT.PPR0.BIT.PPR0_8
#define PORTPPR0_9 PORT.PPR0.BIT.PPR0_9
#define PORTPPR0_10 PORT.PPR0.BIT.PPR0_10
#define PORTPPR0_11 PORT.PPR0.BIT.PPR0_11
#define PORTPPR0_12 PORT.PPR0.BIT.PPR0_12
#define PORTPPR0_13 PORT.PPR0.BIT.PPR0_13
#define PORTPPR0_14 PORT.PPR0.BIT.PPR0_14
#define PORTPM0 PORT.PM0.UINT16
#define PORTPM0_0 PORT.PM0.BIT.PM0_0
#define PORTPM0_1 PORT.PM0.BIT.PM0_1
#define PORTPM0_2 PORT.PM0.BIT.PM0_2
#define PORTPM0_3 PORT.PM0.BIT.PM0_3
#define PORTPM0_4 PORT.PM0.BIT.PM0_4
#define PORTPM0_5 PORT.PM0.BIT.PM0_5
#define PORTPM0_6 PORT.PM0.BIT.PM0_6
#define PORTPM0_7 PORT.PM0.BIT.PM0_7
#define PORTPM0_8 PORT.PM0.BIT.PM0_8
#define PORTPM0_9 PORT.PM0.BIT.PM0_9
#define PORTPM0_10 PORT.PM0.BIT.PM0_10
#define PORTPM0_11 PORT.PM0.BIT.PM0_11
#define PORTPM0_12 PORT.PM0.BIT.PM0_12
#define PORTPM0_13 PORT.PM0.BIT.PM0_13
#define PORTPM0_14 PORT.PM0.BIT.PM0_14
#define PORTPMC0 PORT.PMC0.UINT16
#define PORTPMC0_0 PORT.PMC0.BIT.PMC0_0
#define PORTPMC0_1 PORT.PMC0.BIT.PMC0_1
#define PORTPMC0_2 PORT.PMC0.BIT.PMC0_2
#define PORTPMC0_3 PORT.PMC0.BIT.PMC0_3
#define PORTPMC0_4 PORT.PMC0.BIT.PMC0_4
#define PORTPMC0_5 PORT.PMC0.BIT.PMC0_5
#define PORTPMC0_6 PORT.PMC0.BIT.PMC0_6
#define PORTPMC0_7 PORT.PMC0.BIT.PMC0_7
#define PORTPMC0_8 PORT.PMC0.BIT.PMC0_8
#define PORTPMC0_9 PORT.PMC0.BIT.PMC0_9
#define PORTPMC0_10 PORT.PMC0.BIT.PMC0_10
#define PORTPMC0_11 PORT.PMC0.BIT.PMC0_11
#define PORTPMC0_12 PORT.PMC0.BIT.PMC0_12
#define PORTPMC0_13 PORT.PMC0.BIT.PMC0_13
#define PORTPMC0_14 PORT.PMC0.BIT.PMC0_14
#define PORTPFC0 PORT.PFC0.UINT16
#define PORTPFC0_0 PORT.PFC0.BIT.PFC0_0
#define PORTPFC0_1 PORT.PFC0.BIT.PFC0_1
#define PORTPFC0_2 PORT.PFC0.BIT.PFC0_2
#define PORTPFC0_3 PORT.PFC0.BIT.PFC0_3
#define PORTPFC0_4 PORT.PFC0.BIT.PFC0_4
#define PORTPFC0_5 PORT.PFC0.BIT.PFC0_5
#define PORTPFC0_6 PORT.PFC0.BIT.PFC0_6
#define PORTPFC0_7 PORT.PFC0.BIT.PFC0_7
#define PORTPFC0_8 PORT.PFC0.BIT.PFC0_8
#define PORTPFC0_9 PORT.PFC0.BIT.PFC0_9
#define PORTPFC0_10 PORT.PFC0.BIT.PFC0_10
#define PORTPFC0_11 PORT.PFC0.BIT.PFC0_11
#define PORTPFC0_12 PORT.PFC0.BIT.PFC0_12
#define PORTPFC0_13 PORT.PFC0.BIT.PFC0_13
#define PORTPFC0_14 PORT.PFC0.BIT.PFC0_14
#define PORTPFCE0 PORT.PFCE0.UINT16
#define PORTPFCE0_0 PORT.PFCE0.BIT.PFCE0_0
#define PORTPFCE0_1 PORT.PFCE0.BIT.PFCE0_1
#define PORTPFCE0_2 PORT.PFCE0.BIT.PFCE0_2
#define PORTPFCE0_3 PORT.PFCE0.BIT.PFCE0_3
#define PORTPFCE0_4 PORT.PFCE0.BIT.PFCE0_4
#define PORTPFCE0_5 PORT.PFCE0.BIT.PFCE0_5
#define PORTPFCE0_6 PORT.PFCE0.BIT.PFCE0_6
#define PORTPFCE0_7 PORT.PFCE0.BIT.PFCE0_7
#define PORTPFCE0_8 PORT.PFCE0.BIT.PFCE0_8
#define PORTPFCE0_9 PORT.PFCE0.BIT.PFCE0_9
#define PORTPFCE0_13 PORT.PFCE0.BIT.PFCE0_13
#define PORTPMSR0 PORT.PMSR0.UINT32
#define PORTPMSR0_0 PORT.PMSR0.BIT.PMSR0_0
#define PORTPMSR0_1 PORT.PMSR0.BIT.PMSR0_1
#define PORTPMSR0_2 PORT.PMSR0.BIT.PMSR0_2
#define PORTPMSR0_3 PORT.PMSR0.BIT.PMSR0_3
#define PORTPMSR0_4 PORT.PMSR0.BIT.PMSR0_4
#define PORTPMSR0_5 PORT.PMSR0.BIT.PMSR0_5
#define PORTPMSR0_6 PORT.PMSR0.BIT.PMSR0_6
#define PORTPMSR0_7 PORT.PMSR0.BIT.PMSR0_7
#define PORTPMSR0_8 PORT.PMSR0.BIT.PMSR0_8
#define PORTPMSR0_9 PORT.PMSR0.BIT.PMSR0_9
#define PORTPMSR0_10 PORT.PMSR0.BIT.PMSR0_10
#define PORTPMSR0_11 PORT.PMSR0.BIT.PMSR0_11
#define PORTPMSR0_12 PORT.PMSR0.BIT.PMSR0_12
#define PORTPMSR0_13 PORT.PMSR0.BIT.PMSR0_13
#define PORTPMSR0_14 PORT.PMSR0.BIT.PMSR0_14
#define PORTPMSR0_16 PORT.PMSR0.BIT.PMSR0_16
#define PORTPMSR0_17 PORT.PMSR0.BIT.PMSR0_17
#define PORTPMSR0_18 PORT.PMSR0.BIT.PMSR0_18
#define PORTPMSR0_19 PORT.PMSR0.BIT.PMSR0_19
#define PORTPMSR0_20 PORT.PMSR0.BIT.PMSR0_20
#define PORTPMSR0_21 PORT.PMSR0.BIT.PMSR0_21
#define PORTPMSR0_22 PORT.PMSR0.BIT.PMSR0_22
#define PORTPMSR0_23 PORT.PMSR0.BIT.PMSR0_23
#define PORTPMSR0_24 PORT.PMSR0.BIT.PMSR0_24
#define PORTPMSR0_25 PORT.PMSR0.BIT.PMSR0_25
#define PORTPMSR0_26 PORT.PMSR0.BIT.PMSR0_26
#define PORTPMSR0_27 PORT.PMSR0.BIT.PMSR0_27
#define PORTPMSR0_28 PORT.PMSR0.BIT.PMSR0_28
#define PORTPMSR0_29 PORT.PMSR0.BIT.PMSR0_29
#define PORTPMSR0_30 PORT.PMSR0.BIT.PMSR0_30
#define PORTPMCSR0 PORT.PMCSR0.UINT32
#define PORTPMCSR0_0 PORT.PMCSR0.BIT.PMCSR0_0
#define PORTPMCSR0_1 PORT.PMCSR0.BIT.PMCSR0_1
#define PORTPMCSR0_2 PORT.PMCSR0.BIT.PMCSR0_2
#define PORTPMCSR0_3 PORT.PMCSR0.BIT.PMCSR0_3
#define PORTPMCSR0_4 PORT.PMCSR0.BIT.PMCSR0_4
#define PORTPMCSR0_5 PORT.PMCSR0.BIT.PMCSR0_5
#define PORTPMCSR0_6 PORT.PMCSR0.BIT.PMCSR0_6
#define PORTPMCSR0_7 PORT.PMCSR0.BIT.PMCSR0_7
#define PORTPMCSR0_8 PORT.PMCSR0.BIT.PMCSR0_8
#define PORTPMCSR0_9 PORT.PMCSR0.BIT.PMCSR0_9
#define PORTPMCSR0_10 PORT.PMCSR0.BIT.PMCSR0_10
#define PORTPMCSR0_11 PORT.PMCSR0.BIT.PMCSR0_11
#define PORTPMCSR0_12 PORT.PMCSR0.BIT.PMCSR0_12
#define PORTPMCSR0_13 PORT.PMCSR0.BIT.PMCSR0_13
#define PORTPMCSR0_14 PORT.PMCSR0.BIT.PMCSR0_14
#define PORTPMCSR0_16 PORT.PMCSR0.BIT.PMCSR0_16
#define PORTPMCSR0_17 PORT.PMCSR0.BIT.PMCSR0_17
#define PORTPMCSR0_18 PORT.PMCSR0.BIT.PMCSR0_18
#define PORTPMCSR0_19 PORT.PMCSR0.BIT.PMCSR0_19
#define PORTPMCSR0_20 PORT.PMCSR0.BIT.PMCSR0_20
#define PORTPMCSR0_21 PORT.PMCSR0.BIT.PMCSR0_21
#define PORTPMCSR0_22 PORT.PMCSR0.BIT.PMCSR0_22
#define PORTPMCSR0_23 PORT.PMCSR0.BIT.PMCSR0_23
#define PORTPMCSR0_24 PORT.PMCSR0.BIT.PMCSR0_24
#define PORTPMCSR0_25 PORT.PMCSR0.BIT.PMCSR0_25
#define PORTPMCSR0_26 PORT.PMCSR0.BIT.PMCSR0_26
#define PORTPMCSR0_27 PORT.PMCSR0.BIT.PMCSR0_27
#define PORTPMCSR0_28 PORT.PMCSR0.BIT.PMCSR0_28
#define PORTPMCSR0_29 PORT.PMCSR0.BIT.PMCSR0_29
#define PORTPMCSR0_30 PORT.PMCSR0.BIT.PMCSR0_30
#define PORTPFCAE0 PORT.PFCAE0.UINT16
#define PORTPFCAE0_0 PORT.PFCAE0.BIT.PFCAE0_0
#define PORTPFCAE0_1 PORT.PFCAE0.BIT.PFCAE0_1
#define PORTPFCAE0_2 PORT.PFCAE0.BIT.PFCAE0_2
#define PORTPFCAE0_3 PORT.PFCAE0.BIT.PFCAE0_3
#define PORTPFCAE0_4 PORT.PFCAE0.BIT.PFCAE0_4
#define PORTPFCAE0_5 PORT.PFCAE0.BIT.PFCAE0_5
#define PORTPFCAE0_6 PORT.PFCAE0.BIT.PFCAE0_6
#define PORTPFCAE0_7 PORT.PFCAE0.BIT.PFCAE0_7
#define PORTPFCAE0_8 PORT.PFCAE0.BIT.PFCAE0_8
#define PORTPINV0 PORT.PINV0.UINT32
#define PORTPINV0_0 PORT.PINV0.BIT.PINV0_0
#define PORTPINV0_1 PORT.PINV0.BIT.PINV0_1
#define PORTPINV0_2 PORT.PINV0.BIT.PINV0_2
#define PORTPINV0_3 PORT.PINV0.BIT.PINV0_3
#define PORTPINV0_4 PORT.PINV0.BIT.PINV0_4
#define PORTPINV0_5 PORT.PINV0.BIT.PINV0_5
#define PORTPINV0_6 PORT.PINV0.BIT.PINV0_6
#define PORTPINV0_7 PORT.PINV0.BIT.PINV0_7
#define PORTPINV0_8 PORT.PINV0.BIT.PINV0_8
#define PORTPINV0_9 PORT.PINV0.BIT.PINV0_9
#define PORTPINV0_10 PORT.PINV0.BIT.PINV0_10
#define PORTPINV0_11 PORT.PINV0.BIT.PINV0_11
#define PORTPINV0_12 PORT.PINV0.BIT.PINV0_12
#define PORTPINV0_13 PORT.PINV0.BIT.PINV0_13
#define PORTPINV0_14 PORT.PINV0.BIT.PINV0_14
#define PORTP1 PORT.P1.UINT16
#define PORTP1_0 PORT.P1.BIT.P1_0
#define PORTP1_1 PORT.P1.BIT.P1_1
#define PORTP1_2 PORT.P1.BIT.P1_2
#define PORTP1_3 PORT.P1.BIT.P1_3
#define PORTP1_4 PORT.P1.BIT.P1_4
#define PORTPSR1 PORT.PSR1.UINT32
#define PORTPSR1_0 PORT.PSR1.BIT.PSR1_0
#define PORTPSR1_1 PORT.PSR1.BIT.PSR1_1
#define PORTPSR1_2 PORT.PSR1.BIT.PSR1_2
#define PORTPSR1_3 PORT.PSR1.BIT.PSR1_3
#define PORTPSR1_4 PORT.PSR1.BIT.PSR1_4
#define PORTPSR1_16 PORT.PSR1.BIT.PSR1_16
#define PORTPSR1_17 PORT.PSR1.BIT.PSR1_17
#define PORTPSR1_18 PORT.PSR1.BIT.PSR1_18
#define PORTPSR1_19 PORT.PSR1.BIT.PSR1_19
#define PORTPSR1_20 PORT.PSR1.BIT.PSR1_20
#define PORTPNOT1 PORT.PNOT1.UINT16
#define PORTPNOT1_0 PORT.PNOT1.BIT.PNOT1_0
#define PORTPNOT1_1 PORT.PNOT1.BIT.PNOT1_1
#define PORTPNOT1_2 PORT.PNOT1.BIT.PNOT1_2
#define PORTPNOT1_3 PORT.PNOT1.BIT.PNOT1_3
#define PORTPNOT1_4 PORT.PNOT1.BIT.PNOT1_4
#define PORTPPR1 PORT.PPR1.UINT16
#define PORTPPR1_0 PORT.PPR1.BIT.PPR1_0
#define PORTPPR1_1 PORT.PPR1.BIT.PPR1_1
#define PORTPPR1_2 PORT.PPR1.BIT.PPR1_2
#define PORTPPR1_3 PORT.PPR1.BIT.PPR1_3
#define PORTPPR1_4 PORT.PPR1.BIT.PPR1_4
#define PORTPM1 PORT.PM1.UINT16
#define PORTPM1_0 PORT.PM1.BIT.PM1_0
#define PORTPM1_1 PORT.PM1.BIT.PM1_1
#define PORTPM1_2 PORT.PM1.BIT.PM1_2
#define PORTPM1_3 PORT.PM1.BIT.PM1_3
#define PORTPM1_4 PORT.PM1.BIT.PM1_4
#define PORTPMC1 PORT.PMC1.UINT16
#define PORTPMC1_0 PORT.PMC1.BIT.PMC1_0
#define PORTPMC1_1 PORT.PMC1.BIT.PMC1_1
#define PORTPMC1_2 PORT.PMC1.BIT.PMC1_2
#define PORTPMC1_3 PORT.PMC1.BIT.PMC1_3
#define PORTPMC1_4 PORT.PMC1.BIT.PMC1_4
#define PORTPFC1 PORT.PFC1.UINT16
#define PORTPFC1_0 PORT.PFC1.BIT.PFC1_0
#define PORTPFC1_1 PORT.PFC1.BIT.PFC1_1
#define PORTPFC1_2 PORT.PFC1.BIT.PFC1_2
#define PORTPFC1_3 PORT.PFC1.BIT.PFC1_3
#define PORTPFC1_4 PORT.PFC1.BIT.PFC1_4
#define PORTPFCE1 PORT.PFCE1.UINT16
#define PORTPFCE1_0 PORT.PFCE1.BIT.PFCE1_0
#define PORTPFCE1_1 PORT.PFCE1.BIT.PFCE1_1
#define PORTPFCE1_2 PORT.PFCE1.BIT.PFCE1_2
#define PORTPFCE1_3 PORT.PFCE1.BIT.PFCE1_3
#define PORTPFCE1_4 PORT.PFCE1.BIT.PFCE1_4
#define PORTPMSR1 PORT.PMSR1.UINT32
#define PORTPMSR1_0 PORT.PMSR1.BIT.PMSR1_0
#define PORTPMSR1_1 PORT.PMSR1.BIT.PMSR1_1
#define PORTPMSR1_2 PORT.PMSR1.BIT.PMSR1_2
#define PORTPMSR1_3 PORT.PMSR1.BIT.PMSR1_3
#define PORTPMSR1_4 PORT.PMSR1.BIT.PMSR1_4
#define PORTPMSR1_16 PORT.PMSR1.BIT.PMSR1_16
#define PORTPMSR1_17 PORT.PMSR1.BIT.PMSR1_17
#define PORTPMSR1_18 PORT.PMSR1.BIT.PMSR1_18
#define PORTPMSR1_19 PORT.PMSR1.BIT.PMSR1_19
#define PORTPMSR1_20 PORT.PMSR1.BIT.PMSR1_20
#define PORTPMCSR1 PORT.PMCSR1.UINT32
#define PORTPMCSR1_0 PORT.PMCSR1.BIT.PMCSR1_0
#define PORTPMCSR1_1 PORT.PMCSR1.BIT.PMCSR1_1
#define PORTPMCSR1_2 PORT.PMCSR1.BIT.PMCSR1_2
#define PORTPMCSR1_3 PORT.PMCSR1.BIT.PMCSR1_3
#define PORTPMCSR1_4 PORT.PMCSR1.BIT.PMCSR1_4
#define PORTPMCSR1_16 PORT.PMCSR1.BIT.PMCSR1_16
#define PORTPMCSR1_17 PORT.PMCSR1.BIT.PMCSR1_17
#define PORTPMCSR1_18 PORT.PMCSR1.BIT.PMCSR1_18
#define PORTPMCSR1_19 PORT.PMCSR1.BIT.PMCSR1_19
#define PORTPMCSR1_20 PORT.PMCSR1.BIT.PMCSR1_20
#define PORTPFCAE1 PORT.PFCAE1.UINT16
#define PORTPFCAE1_0 PORT.PFCAE1.BIT.PFCAE1_0
#define PORTPFCAE1_1 PORT.PFCAE1.BIT.PFCAE1_1
#define PORTPFCAE1_2 PORT.PFCAE1.BIT.PFCAE1_2
#define PORTPFCAE1_3 PORT.PFCAE1.BIT.PFCAE1_3
#define PORTPFCAE1_4 PORT.PFCAE1.BIT.PFCAE1_4
#define PORTPINV1 PORT.PINV1.UINT32
#define PORTPINV1_0 PORT.PINV1.BIT.PINV1_0
#define PORTPINV1_1 PORT.PINV1.BIT.PINV1_1
#define PORTPINV1_2 PORT.PINV1.BIT.PINV1_2
#define PORTPINV1_3 PORT.PINV1.BIT.PINV1_3
#define PORTPINV1_4 PORT.PINV1.BIT.PINV1_4
#define PORTP2 PORT.P2.UINT16
#define PORTP2_0 PORT.P2.BIT.P2_0
#define PORTP2_1 PORT.P2.BIT.P2_1
#define PORTP2_2 PORT.P2.BIT.P2_2
#define PORTP2_3 PORT.P2.BIT.P2_3
#define PORTP2_4 PORT.P2.BIT.P2_4
#define PORTP2_5 PORT.P2.BIT.P2_5
#define PORTP2_6 PORT.P2.BIT.P2_6
#define PORTP2_7 PORT.P2.BIT.P2_7
#define PORTP2_8 PORT.P2.BIT.P2_8
#define PORTP2_9 PORT.P2.BIT.P2_9
#define PORTP2_10 PORT.P2.BIT.P2_10
#define PORTP2_11 PORT.P2.BIT.P2_11
#define PORTP2_12 PORT.P2.BIT.P2_12
#define PORTP2_13 PORT.P2.BIT.P2_13
#define PORTP2_14 PORT.P2.BIT.P2_14
#define PORTP2_15 PORT.P2.BIT.P2_15
#define PORTPSR2 PORT.PSR2.UINT32
#define PORTPSR2_0 PORT.PSR2.BIT.PSR2_0
#define PORTPSR2_1 PORT.PSR2.BIT.PSR2_1
#define PORTPSR2_2 PORT.PSR2.BIT.PSR2_2
#define PORTPSR2_3 PORT.PSR2.BIT.PSR2_3
#define PORTPSR2_4 PORT.PSR2.BIT.PSR2_4
#define PORTPSR2_5 PORT.PSR2.BIT.PSR2_5
#define PORTPSR2_6 PORT.PSR2.BIT.PSR2_6
#define PORTPSR2_7 PORT.PSR2.BIT.PSR2_7
#define PORTPSR2_8 PORT.PSR2.BIT.PSR2_8
#define PORTPSR2_9 PORT.PSR2.BIT.PSR2_9
#define PORTPSR2_10 PORT.PSR2.BIT.PSR2_10
#define PORTPSR2_11 PORT.PSR2.BIT.PSR2_11
#define PORTPSR2_12 PORT.PSR2.BIT.PSR2_12
#define PORTPSR2_13 PORT.PSR2.BIT.PSR2_13
#define PORTPSR2_14 PORT.PSR2.BIT.PSR2_14
#define PORTPSR2_15 PORT.PSR2.BIT.PSR2_15
#define PORTPSR2_16 PORT.PSR2.BIT.PSR2_16
#define PORTPSR2_17 PORT.PSR2.BIT.PSR2_17
#define PORTPSR2_18 PORT.PSR2.BIT.PSR2_18
#define PORTPSR2_19 PORT.PSR2.BIT.PSR2_19
#define PORTPSR2_20 PORT.PSR2.BIT.PSR2_20
#define PORTPSR2_21 PORT.PSR2.BIT.PSR2_21
#define PORTPSR2_22 PORT.PSR2.BIT.PSR2_22
#define PORTPSR2_23 PORT.PSR2.BIT.PSR2_23
#define PORTPSR2_24 PORT.PSR2.BIT.PSR2_24
#define PORTPSR2_25 PORT.PSR2.BIT.PSR2_25
#define PORTPSR2_26 PORT.PSR2.BIT.PSR2_26
#define PORTPSR2_27 PORT.PSR2.BIT.PSR2_27
#define PORTPSR2_28 PORT.PSR2.BIT.PSR2_28
#define PORTPSR2_29 PORT.PSR2.BIT.PSR2_29
#define PORTPSR2_30 PORT.PSR2.BIT.PSR2_30
#define PORTPSR2_31 PORT.PSR2.BIT.PSR2_31
#define PORTPNOT2 PORT.PNOT2.UINT16
#define PORTPNOT2_0 PORT.PNOT2.BIT.PNOT2_0
#define PORTPNOT2_1 PORT.PNOT2.BIT.PNOT2_1
#define PORTPNOT2_2 PORT.PNOT2.BIT.PNOT2_2
#define PORTPNOT2_3 PORT.PNOT2.BIT.PNOT2_3
#define PORTPNOT2_4 PORT.PNOT2.BIT.PNOT2_4
#define PORTPNOT2_5 PORT.PNOT2.BIT.PNOT2_5
#define PORTPNOT2_6 PORT.PNOT2.BIT.PNOT2_6
#define PORTPNOT2_7 PORT.PNOT2.BIT.PNOT2_7
#define PORTPNOT2_8 PORT.PNOT2.BIT.PNOT2_8
#define PORTPNOT2_9 PORT.PNOT2.BIT.PNOT2_9
#define PORTPNOT2_10 PORT.PNOT2.BIT.PNOT2_10
#define PORTPNOT2_11 PORT.PNOT2.BIT.PNOT2_11
#define PORTPNOT2_12 PORT.PNOT2.BIT.PNOT2_12
#define PORTPNOT2_13 PORT.PNOT2.BIT.PNOT2_13
#define PORTPNOT2_14 PORT.PNOT2.BIT.PNOT2_14
#define PORTPNOT2_15 PORT.PNOT2.BIT.PNOT2_15
#define PORTPPR2 PORT.PPR2.UINT16
#define PORTPPR2_0 PORT.PPR2.BIT.PPR2_0
#define PORTPPR2_1 PORT.PPR2.BIT.PPR2_1
#define PORTPPR2_2 PORT.PPR2.BIT.PPR2_2
#define PORTPPR2_3 PORT.PPR2.BIT.PPR2_3
#define PORTPPR2_4 PORT.PPR2.BIT.PPR2_4
#define PORTPPR2_5 PORT.PPR2.BIT.PPR2_5
#define PORTPPR2_6 PORT.PPR2.BIT.PPR2_6
#define PORTPPR2_7 PORT.PPR2.BIT.PPR2_7
#define PORTPPR2_8 PORT.PPR2.BIT.PPR2_8
#define PORTPPR2_9 PORT.PPR2.BIT.PPR2_9
#define PORTPPR2_10 PORT.PPR2.BIT.PPR2_10
#define PORTPPR2_11 PORT.PPR2.BIT.PPR2_11
#define PORTPPR2_12 PORT.PPR2.BIT.PPR2_12
#define PORTPPR2_13 PORT.PPR2.BIT.PPR2_13
#define PORTPPR2_14 PORT.PPR2.BIT.PPR2_14
#define PORTPPR2_15 PORT.PPR2.BIT.PPR2_15
#define PORTPM2 PORT.PM2.UINT16
#define PORTPM2_0 PORT.PM2.BIT.PM2_0
#define PORTPM2_1 PORT.PM2.BIT.PM2_1
#define PORTPM2_2 PORT.PM2.BIT.PM2_2
#define PORTPM2_3 PORT.PM2.BIT.PM2_3
#define PORTPM2_4 PORT.PM2.BIT.PM2_4
#define PORTPM2_5 PORT.PM2.BIT.PM2_5
#define PORTPM2_6 PORT.PM2.BIT.PM2_6
#define PORTPM2_7 PORT.PM2.BIT.PM2_7
#define PORTPM2_8 PORT.PM2.BIT.PM2_8
#define PORTPM2_9 PORT.PM2.BIT.PM2_9
#define PORTPM2_10 PORT.PM2.BIT.PM2_10
#define PORTPM2_11 PORT.PM2.BIT.PM2_11
#define PORTPM2_12 PORT.PM2.BIT.PM2_12
#define PORTPM2_13 PORT.PM2.BIT.PM2_13
#define PORTPM2_14 PORT.PM2.BIT.PM2_14
#define PORTPM2_15 PORT.PM2.BIT.PM2_15
#define PORTPMC2 PORT.PMC2.UINT16
#define PORTPMC2_0 PORT.PMC2.BIT.PMC2_0
#define PORTPMC2_1 PORT.PMC2.BIT.PMC2_1
#define PORTPMC2_2 PORT.PMC2.BIT.PMC2_2
#define PORTPMC2_3 PORT.PMC2.BIT.PMC2_3
#define PORTPMC2_4 PORT.PMC2.BIT.PMC2_4
#define PORTPMC2_5 PORT.PMC2.BIT.PMC2_5
#define PORTPMC2_6 PORT.PMC2.BIT.PMC2_6
#define PORTPMC2_7 PORT.PMC2.BIT.PMC2_7
#define PORTPMC2_8 PORT.PMC2.BIT.PMC2_8
#define PORTPMC2_9 PORT.PMC2.BIT.PMC2_9
#define PORTPMC2_10 PORT.PMC2.BIT.PMC2_10
#define PORTPMC2_11 PORT.PMC2.BIT.PMC2_11
#define PORTPMC2_12 PORT.PMC2.BIT.PMC2_12
#define PORTPMC2_13 PORT.PMC2.BIT.PMC2_13
#define PORTPMC2_14 PORT.PMC2.BIT.PMC2_14
#define PORTPMC2_15 PORT.PMC2.BIT.PMC2_15
#define PORTPFC2 PORT.PFC2.UINT16
#define PORTPFC2_0 PORT.PFC2.BIT.PFC2_0
#define PORTPFC2_1 PORT.PFC2.BIT.PFC2_1
#define PORTPFC2_2 PORT.PFC2.BIT.PFC2_2
#define PORTPFC2_3 PORT.PFC2.BIT.PFC2_3
#define PORTPFC2_4 PORT.PFC2.BIT.PFC2_4
#define PORTPFC2_5 PORT.PFC2.BIT.PFC2_5
#define PORTPFC2_6 PORT.PFC2.BIT.PFC2_6
#define PORTPFC2_7 PORT.PFC2.BIT.PFC2_7
#define PORTPFC2_8 PORT.PFC2.BIT.PFC2_8
#define PORTPFC2_9 PORT.PFC2.BIT.PFC2_9
#define PORTPFC2_10 PORT.PFC2.BIT.PFC2_10
#define PORTPFC2_11 PORT.PFC2.BIT.PFC2_11
#define PORTPFC2_12 PORT.PFC2.BIT.PFC2_12
#define PORTPFC2_13 PORT.PFC2.BIT.PFC2_13
#define PORTPFC2_14 PORT.PFC2.BIT.PFC2_14
#define PORTPFC2_15 PORT.PFC2.BIT.PFC2_15
#define PORTPFCE2 PORT.PFCE2.UINT16
#define PORTPFCE2_0 PORT.PFCE2.BIT.PFCE2_0
#define PORTPFCE2_1 PORT.PFCE2.BIT.PFCE2_1
#define PORTPFCE2_2 PORT.PFCE2.BIT.PFCE2_2
#define PORTPFCE2_3 PORT.PFCE2.BIT.PFCE2_3
#define PORTPFCE2_4 PORT.PFCE2.BIT.PFCE2_4
#define PORTPFCE2_5 PORT.PFCE2.BIT.PFCE2_5
#define PORTPFCE2_6 PORT.PFCE2.BIT.PFCE2_6
#define PORTPFCE2_7 PORT.PFCE2.BIT.PFCE2_7
#define PORTPFCE2_8 PORT.PFCE2.BIT.PFCE2_8
#define PORTPFCE2_9 PORT.PFCE2.BIT.PFCE2_9
#define PORTPFCE2_10 PORT.PFCE2.BIT.PFCE2_10
#define PORTPFCE2_11 PORT.PFCE2.BIT.PFCE2_11
#define PORTPFCE2_12 PORT.PFCE2.BIT.PFCE2_12
#define PORTPFCE2_13 PORT.PFCE2.BIT.PFCE2_13
#define PORTPFCE2_14 PORT.PFCE2.BIT.PFCE2_14
#define PORTPFCE2_15 PORT.PFCE2.BIT.PFCE2_15
#define PORTPMSR2 PORT.PMSR2.UINT32
#define PORTPMSR2_0 PORT.PMSR2.BIT.PMSR2_0
#define PORTPMSR2_1 PORT.PMSR2.BIT.PMSR2_1
#define PORTPMSR2_2 PORT.PMSR2.BIT.PMSR2_2
#define PORTPMSR2_3 PORT.PMSR2.BIT.PMSR2_3
#define PORTPMSR2_4 PORT.PMSR2.BIT.PMSR2_4
#define PORTPMSR2_5 PORT.PMSR2.BIT.PMSR2_5
#define PORTPMSR2_6 PORT.PMSR2.BIT.PMSR2_6
#define PORTPMSR2_7 PORT.PMSR2.BIT.PMSR2_7
#define PORTPMSR2_8 PORT.PMSR2.BIT.PMSR2_8
#define PORTPMSR2_9 PORT.PMSR2.BIT.PMSR2_9
#define PORTPMSR2_10 PORT.PMSR2.BIT.PMSR2_10
#define PORTPMSR2_11 PORT.PMSR2.BIT.PMSR2_11
#define PORTPMSR2_12 PORT.PMSR2.BIT.PMSR2_12
#define PORTPMSR2_13 PORT.PMSR2.BIT.PMSR2_13
#define PORTPMSR2_14 PORT.PMSR2.BIT.PMSR2_14
#define PORTPMSR2_15 PORT.PMSR2.BIT.PMSR2_15
#define PORTPMSR2_16 PORT.PMSR2.BIT.PMSR2_16
#define PORTPMSR2_17 PORT.PMSR2.BIT.PMSR2_17
#define PORTPMSR2_18 PORT.PMSR2.BIT.PMSR2_18
#define PORTPMSR2_19 PORT.PMSR2.BIT.PMSR2_19
#define PORTPMSR2_20 PORT.PMSR2.BIT.PMSR2_20
#define PORTPMSR2_21 PORT.PMSR2.BIT.PMSR2_21
#define PORTPMSR2_22 PORT.PMSR2.BIT.PMSR2_22
#define PORTPMSR2_23 PORT.PMSR2.BIT.PMSR2_23
#define PORTPMSR2_24 PORT.PMSR2.BIT.PMSR2_24
#define PORTPMSR2_25 PORT.PMSR2.BIT.PMSR2_25
#define PORTPMSR2_26 PORT.PMSR2.BIT.PMSR2_26
#define PORTPMSR2_27 PORT.PMSR2.BIT.PMSR2_27
#define PORTPMSR2_28 PORT.PMSR2.BIT.PMSR2_28
#define PORTPMSR2_29 PORT.PMSR2.BIT.PMSR2_29
#define PORTPMSR2_30 PORT.PMSR2.BIT.PMSR2_30
#define PORTPMSR2_31 PORT.PMSR2.BIT.PMSR2_31
#define PORTPMCSR2 PORT.PMCSR2.UINT32
#define PORTPMCSR2_0 PORT.PMCSR2.BIT.PMCSR2_0
#define PORTPMCSR2_1 PORT.PMCSR2.BIT.PMCSR2_1
#define PORTPMCSR2_2 PORT.PMCSR2.BIT.PMCSR2_2
#define PORTPMCSR2_3 PORT.PMCSR2.BIT.PMCSR2_3
#define PORTPMCSR2_4 PORT.PMCSR2.BIT.PMCSR2_4
#define PORTPMCSR2_5 PORT.PMCSR2.BIT.PMCSR2_5
#define PORTPMCSR2_6 PORT.PMCSR2.BIT.PMCSR2_6
#define PORTPMCSR2_7 PORT.PMCSR2.BIT.PMCSR2_7
#define PORTPMCSR2_8 PORT.PMCSR2.BIT.PMCSR2_8
#define PORTPMCSR2_9 PORT.PMCSR2.BIT.PMCSR2_9
#define PORTPMCSR2_10 PORT.PMCSR2.BIT.PMCSR2_10
#define PORTPMCSR2_11 PORT.PMCSR2.BIT.PMCSR2_11
#define PORTPMCSR2_12 PORT.PMCSR2.BIT.PMCSR2_12
#define PORTPMCSR2_13 PORT.PMCSR2.BIT.PMCSR2_13
#define PORTPMCSR2_14 PORT.PMCSR2.BIT.PMCSR2_14
#define PORTPMCSR2_15 PORT.PMCSR2.BIT.PMCSR2_15
#define PORTPMCSR2_16 PORT.PMCSR2.BIT.PMCSR2_16
#define PORTPMCSR2_17 PORT.PMCSR2.BIT.PMCSR2_17
#define PORTPMCSR2_18 PORT.PMCSR2.BIT.PMCSR2_18
#define PORTPMCSR2_19 PORT.PMCSR2.BIT.PMCSR2_19
#define PORTPMCSR2_20 PORT.PMCSR2.BIT.PMCSR2_20
#define PORTPMCSR2_21 PORT.PMCSR2.BIT.PMCSR2_21
#define PORTPMCSR2_22 PORT.PMCSR2.BIT.PMCSR2_22
#define PORTPMCSR2_23 PORT.PMCSR2.BIT.PMCSR2_23
#define PORTPMCSR2_24 PORT.PMCSR2.BIT.PMCSR2_24
#define PORTPMCSR2_25 PORT.PMCSR2.BIT.PMCSR2_25
#define PORTPMCSR2_26 PORT.PMCSR2.BIT.PMCSR2_26
#define PORTPMCSR2_27 PORT.PMCSR2.BIT.PMCSR2_27
#define PORTPMCSR2_28 PORT.PMCSR2.BIT.PMCSR2_28
#define PORTPMCSR2_29 PORT.PMCSR2.BIT.PMCSR2_29
#define PORTPMCSR2_30 PORT.PMCSR2.BIT.PMCSR2_30
#define PORTPMCSR2_31 PORT.PMCSR2.BIT.PMCSR2_31
#define PORTPFCAE2 PORT.PFCAE2.UINT16
#define PORTPFCAE2_1 PORT.PFCAE2.BIT.PFCAE2_1
#define PORTPFCAE2_2 PORT.PFCAE2.BIT.PFCAE2_2
#define PORTPFCAE2_3 PORT.PFCAE2.BIT.PFCAE2_3
#define PORTPFCAE2_4 PORT.PFCAE2.BIT.PFCAE2_4
#define PORTPFCAE2_5 PORT.PFCAE2.BIT.PFCAE2_5
#define PORTPFCAE2_6 PORT.PFCAE2.BIT.PFCAE2_6
#define PORTPFCAE2_7 PORT.PFCAE2.BIT.PFCAE2_7
#define PORTPFCAE2_8 PORT.PFCAE2.BIT.PFCAE2_8
#define PORTPFCAE2_9 PORT.PFCAE2.BIT.PFCAE2_9
#define PORTPFCAE2_10 PORT.PFCAE2.BIT.PFCAE2_10
#define PORTPFCAE2_11 PORT.PFCAE2.BIT.PFCAE2_11
#define PORTPFCAE2_12 PORT.PFCAE2.BIT.PFCAE2_12
#define PORTPFCAE2_13 PORT.PFCAE2.BIT.PFCAE2_13
#define PORTPFCAE2_14 PORT.PFCAE2.BIT.PFCAE2_14
#define PORTPFCAE2_15 PORT.PFCAE2.BIT.PFCAE2_15
#define PORTPINV2 PORT.PINV2.UINT32
#define PORTPINV2_0 PORT.PINV2.BIT.PINV2_0
#define PORTPINV2_1 PORT.PINV2.BIT.PINV2_1
#define PORTPINV2_2 PORT.PINV2.BIT.PINV2_2
#define PORTPINV2_3 PORT.PINV2.BIT.PINV2_3
#define PORTPINV2_4 PORT.PINV2.BIT.PINV2_4
#define PORTPINV2_5 PORT.PINV2.BIT.PINV2_5
#define PORTPINV2_6 PORT.PINV2.BIT.PINV2_6
#define PORTPINV2_7 PORT.PINV2.BIT.PINV2_7
#define PORTPINV2_8 PORT.PINV2.BIT.PINV2_8
#define PORTPINV2_9 PORT.PINV2.BIT.PINV2_9
#define PORTPINV2_10 PORT.PINV2.BIT.PINV2_10
#define PORTPINV2_11 PORT.PINV2.BIT.PINV2_11
#define PORTPINV2_12 PORT.PINV2.BIT.PINV2_12
#define PORTPINV2_13 PORT.PINV2.BIT.PINV2_13
#define PORTPINV2_14 PORT.PINV2.BIT.PINV2_14
#define PORTPINV2_15 PORT.PINV2.BIT.PINV2_15
#define PORTP3 PORT.P3.UINT16
#define PORTP3_0 PORT.P3.BIT.P3_0
#define PORTP3_1 PORT.P3.BIT.P3_1
#define PORTP3_2 PORT.P3.BIT.P3_2
#define PORTP3_3 PORT.P3.BIT.P3_3
#define PORTP3_4 PORT.P3.BIT.P3_4
#define PORTP3_5 PORT.P3.BIT.P3_5
#define PORTP3_6 PORT.P3.BIT.P3_6
#define PORTP3_7 PORT.P3.BIT.P3_7
#define PORTP3_8 PORT.P3.BIT.P3_8
#define PORTP3_9 PORT.P3.BIT.P3_9
#define PORTP3_10 PORT.P3.BIT.P3_10
#define PORTP3_11 PORT.P3.BIT.P3_11
#define PORTP3_12 PORT.P3.BIT.P3_12
#define PORTP3_13 PORT.P3.BIT.P3_13
#define PORTP3_14 PORT.P3.BIT.P3_14
#define PORTPSR3 PORT.PSR3.UINT32
#define PORTPSR3_0 PORT.PSR3.BIT.PSR3_0
#define PORTPSR3_1 PORT.PSR3.BIT.PSR3_1
#define PORTPSR3_2 PORT.PSR3.BIT.PSR3_2
#define PORTPSR3_3 PORT.PSR3.BIT.PSR3_3
#define PORTPSR3_4 PORT.PSR3.BIT.PSR3_4
#define PORTPSR3_5 PORT.PSR3.BIT.PSR3_5
#define PORTPSR3_6 PORT.PSR3.BIT.PSR3_6
#define PORTPSR3_7 PORT.PSR3.BIT.PSR3_7
#define PORTPSR3_8 PORT.PSR3.BIT.PSR3_8
#define PORTPSR3_9 PORT.PSR3.BIT.PSR3_9
#define PORTPSR3_10 PORT.PSR3.BIT.PSR3_10
#define PORTPSR3_11 PORT.PSR3.BIT.PSR3_11
#define PORTPSR3_12 PORT.PSR3.BIT.PSR3_12
#define PORTPSR3_13 PORT.PSR3.BIT.PSR3_13
#define PORTPSR3_14 PORT.PSR3.BIT.PSR3_14
#define PORTPSR3_16 PORT.PSR3.BIT.PSR3_16
#define PORTPSR3_17 PORT.PSR3.BIT.PSR3_17
#define PORTPSR3_18 PORT.PSR3.BIT.PSR3_18
#define PORTPSR3_19 PORT.PSR3.BIT.PSR3_19
#define PORTPSR3_20 PORT.PSR3.BIT.PSR3_20
#define PORTPSR3_21 PORT.PSR3.BIT.PSR3_21
#define PORTPSR3_22 PORT.PSR3.BIT.PSR3_22
#define PORTPSR3_23 PORT.PSR3.BIT.PSR3_23
#define PORTPSR3_24 PORT.PSR3.BIT.PSR3_24
#define PORTPSR3_25 PORT.PSR3.BIT.PSR3_25
#define PORTPSR3_26 PORT.PSR3.BIT.PSR3_26
#define PORTPSR3_27 PORT.PSR3.BIT.PSR3_27
#define PORTPSR3_28 PORT.PSR3.BIT.PSR3_28
#define PORTPSR3_29 PORT.PSR3.BIT.PSR3_29
#define PORTPSR3_30 PORT.PSR3.BIT.PSR3_30
#define PORTPNOT3 PORT.PNOT3.UINT16
#define PORTPNOT3_0 PORT.PNOT3.BIT.PNOT3_0
#define PORTPNOT3_1 PORT.PNOT3.BIT.PNOT3_1
#define PORTPNOT3_2 PORT.PNOT3.BIT.PNOT3_2
#define PORTPNOT3_3 PORT.PNOT3.BIT.PNOT3_3
#define PORTPNOT3_4 PORT.PNOT3.BIT.PNOT3_4
#define PORTPNOT3_5 PORT.PNOT3.BIT.PNOT3_5
#define PORTPNOT3_6 PORT.PNOT3.BIT.PNOT3_6
#define PORTPNOT3_7 PORT.PNOT3.BIT.PNOT3_7
#define PORTPNOT3_8 PORT.PNOT3.BIT.PNOT3_8
#define PORTPNOT3_9 PORT.PNOT3.BIT.PNOT3_9
#define PORTPNOT3_10 PORT.PNOT3.BIT.PNOT3_10
#define PORTPNOT3_11 PORT.PNOT3.BIT.PNOT3_11
#define PORTPNOT3_12 PORT.PNOT3.BIT.PNOT3_12
#define PORTPNOT3_13 PORT.PNOT3.BIT.PNOT3_13
#define PORTPNOT3_14 PORT.PNOT3.BIT.PNOT3_14
#define PORTPPR3 PORT.PPR3.UINT16
#define PORTPPR3_0 PORT.PPR3.BIT.PPR3_0
#define PORTPPR3_1 PORT.PPR3.BIT.PPR3_1
#define PORTPPR3_2 PORT.PPR3.BIT.PPR3_2
#define PORTPPR3_3 PORT.PPR3.BIT.PPR3_3
#define PORTPPR3_4 PORT.PPR3.BIT.PPR3_4
#define PORTPPR3_5 PORT.PPR3.BIT.PPR3_5
#define PORTPPR3_6 PORT.PPR3.BIT.PPR3_6
#define PORTPPR3_7 PORT.PPR3.BIT.PPR3_7
#define PORTPPR3_8 PORT.PPR3.BIT.PPR3_8
#define PORTPPR3_9 PORT.PPR3.BIT.PPR3_9
#define PORTPPR3_10 PORT.PPR3.BIT.PPR3_10
#define PORTPPR3_11 PORT.PPR3.BIT.PPR3_11
#define PORTPPR3_12 PORT.PPR3.BIT.PPR3_12
#define PORTPPR3_13 PORT.PPR3.BIT.PPR3_13
#define PORTPPR3_14 PORT.PPR3.BIT.PPR3_14
#define PORTPM3 PORT.PM3.UINT16
#define PORTPM3_0 PORT.PM3.BIT.PM3_0
#define PORTPM3_1 PORT.PM3.BIT.PM3_1
#define PORTPM3_2 PORT.PM3.BIT.PM3_2
#define PORTPM3_3 PORT.PM3.BIT.PM3_3
#define PORTPM3_4 PORT.PM3.BIT.PM3_4
#define PORTPM3_5 PORT.PM3.BIT.PM3_5
#define PORTPM3_6 PORT.PM3.BIT.PM3_6
#define PORTPM3_7 PORT.PM3.BIT.PM3_7
#define PORTPM3_8 PORT.PM3.BIT.PM3_8
#define PORTPM3_9 PORT.PM3.BIT.PM3_9
#define PORTPM3_10 PORT.PM3.BIT.PM3_10
#define PORTPM3_11 PORT.PM3.BIT.PM3_11
#define PORTPM3_12 PORT.PM3.BIT.PM3_12
#define PORTPM3_13 PORT.PM3.BIT.PM3_13
#define PORTPM3_14 PORT.PM3.BIT.PM3_14
#define PORTPMC3 PORT.PMC3.UINT16
#define PORTPMC3_0 PORT.PMC3.BIT.PMC3_0
#define PORTPMC3_1 PORT.PMC3.BIT.PMC3_1
#define PORTPMC3_2 PORT.PMC3.BIT.PMC3_2
#define PORTPMC3_3 PORT.PMC3.BIT.PMC3_3
#define PORTPMC3_4 PORT.PMC3.BIT.PMC3_4
#define PORTPMC3_5 PORT.PMC3.BIT.PMC3_5
#define PORTPMC3_6 PORT.PMC3.BIT.PMC3_6
#define PORTPMC3_7 PORT.PMC3.BIT.PMC3_7
#define PORTPMC3_8 PORT.PMC3.BIT.PMC3_8
#define PORTPMC3_9 PORT.PMC3.BIT.PMC3_9
#define PORTPMC3_10 PORT.PMC3.BIT.PMC3_10
#define PORTPMC3_11 PORT.PMC3.BIT.PMC3_11
#define PORTPMC3_12 PORT.PMC3.BIT.PMC3_12
#define PORTPMC3_13 PORT.PMC3.BIT.PMC3_13
#define PORTPMC3_14 PORT.PMC3.BIT.PMC3_14
#define PORTPFC3 PORT.PFC3.UINT16
#define PORTPFC3_0 PORT.PFC3.BIT.PFC3_0
#define PORTPFC3_1 PORT.PFC3.BIT.PFC3_1
#define PORTPFC3_2 PORT.PFC3.BIT.PFC3_2
#define PORTPFC3_3 PORT.PFC3.BIT.PFC3_3
#define PORTPFC3_4 PORT.PFC3.BIT.PFC3_4
#define PORTPFC3_5 PORT.PFC3.BIT.PFC3_5
#define PORTPFC3_6 PORT.PFC3.BIT.PFC3_6
#define PORTPFC3_7 PORT.PFC3.BIT.PFC3_7
#define PORTPFC3_8 PORT.PFC3.BIT.PFC3_8
#define PORTPFC3_9 PORT.PFC3.BIT.PFC3_9
#define PORTPFC3_10 PORT.PFC3.BIT.PFC3_10
#define PORTPFC3_11 PORT.PFC3.BIT.PFC3_11
#define PORTPFC3_12 PORT.PFC3.BIT.PFC3_12
#define PORTPFC3_13 PORT.PFC3.BIT.PFC3_13
#define PORTPFC3_14 PORT.PFC3.BIT.PFC3_14
#define PORTPFCE3 PORT.PFCE3.UINT16
#define PORTPFCE3_0 PORT.PFCE3.BIT.PFCE3_0
#define PORTPFCE3_1 PORT.PFCE3.BIT.PFCE3_1
#define PORTPFCE3_2 PORT.PFCE3.BIT.PFCE3_2
#define PORTPFCE3_3 PORT.PFCE3.BIT.PFCE3_3
#define PORTPFCE3_4 PORT.PFCE3.BIT.PFCE3_4
#define PORTPFCE3_5 PORT.PFCE3.BIT.PFCE3_5
#define PORTPFCE3_6 PORT.PFCE3.BIT.PFCE3_6
#define PORTPFCE3_7 PORT.PFCE3.BIT.PFCE3_7
#define PORTPFCE3_8 PORT.PFCE3.BIT.PFCE3_8
#define PORTPFCE3_9 PORT.PFCE3.BIT.PFCE3_9
#define PORTPFCE3_11 PORT.PFCE3.BIT.PFCE3_11
#define PORTPFCE3_12 PORT.PFCE3.BIT.PFCE3_12
#define PORTPFCE3_13 PORT.PFCE3.BIT.PFCE3_13
#define PORTPFCE3_14 PORT.PFCE3.BIT.PFCE3_14
#define PORTPMSR3 PORT.PMSR3.UINT32
#define PORTPMSR3_0 PORT.PMSR3.BIT.PMSR3_0
#define PORTPMSR3_1 PORT.PMSR3.BIT.PMSR3_1
#define PORTPMSR3_2 PORT.PMSR3.BIT.PMSR3_2
#define PORTPMSR3_3 PORT.PMSR3.BIT.PMSR3_3
#define PORTPMSR3_4 PORT.PMSR3.BIT.PMSR3_4
#define PORTPMSR3_5 PORT.PMSR3.BIT.PMSR3_5
#define PORTPMSR3_6 PORT.PMSR3.BIT.PMSR3_6
#define PORTPMSR3_7 PORT.PMSR3.BIT.PMSR3_7
#define PORTPMSR3_8 PORT.PMSR3.BIT.PMSR3_8
#define PORTPMSR3_9 PORT.PMSR3.BIT.PMSR3_9
#define PORTPMSR3_10 PORT.PMSR3.BIT.PMSR3_10
#define PORTPMSR3_11 PORT.PMSR3.BIT.PMSR3_11
#define PORTPMSR3_12 PORT.PMSR3.BIT.PMSR3_12
#define PORTPMSR3_13 PORT.PMSR3.BIT.PMSR3_13
#define PORTPMSR3_14 PORT.PMSR3.BIT.PMSR3_14
#define PORTPMSR3_16 PORT.PMSR3.BIT.PMSR3_16
#define PORTPMSR3_17 PORT.PMSR3.BIT.PMSR3_17
#define PORTPMSR3_18 PORT.PMSR3.BIT.PMSR3_18
#define PORTPMSR3_19 PORT.PMSR3.BIT.PMSR3_19
#define PORTPMSR3_20 PORT.PMSR3.BIT.PMSR3_20
#define PORTPMSR3_21 PORT.PMSR3.BIT.PMSR3_21
#define PORTPMSR3_22 PORT.PMSR3.BIT.PMSR3_22
#define PORTPMSR3_23 PORT.PMSR3.BIT.PMSR3_23
#define PORTPMSR3_24 PORT.PMSR3.BIT.PMSR3_24
#define PORTPMSR3_25 PORT.PMSR3.BIT.PMSR3_25
#define PORTPMSR3_26 PORT.PMSR3.BIT.PMSR3_26
#define PORTPMSR3_27 PORT.PMSR3.BIT.PMSR3_27
#define PORTPMSR3_28 PORT.PMSR3.BIT.PMSR3_28
#define PORTPMSR3_29 PORT.PMSR3.BIT.PMSR3_29
#define PORTPMSR3_30 PORT.PMSR3.BIT.PMSR3_30
#define PORTPMCSR3 PORT.PMCSR3.UINT32
#define PORTPMCSR3_0 PORT.PMCSR3.BIT.PMCSR3_0
#define PORTPMCSR3_1 PORT.PMCSR3.BIT.PMCSR3_1
#define PORTPMCSR3_2 PORT.PMCSR3.BIT.PMCSR3_2
#define PORTPMCSR3_3 PORT.PMCSR3.BIT.PMCSR3_3
#define PORTPMCSR3_4 PORT.PMCSR3.BIT.PMCSR3_4
#define PORTPMCSR3_5 PORT.PMCSR3.BIT.PMCSR3_5
#define PORTPMCSR3_6 PORT.PMCSR3.BIT.PMCSR3_6
#define PORTPMCSR3_7 PORT.PMCSR3.BIT.PMCSR3_7
#define PORTPMCSR3_8 PORT.PMCSR3.BIT.PMCSR3_8
#define PORTPMCSR3_9 PORT.PMCSR3.BIT.PMCSR3_9
#define PORTPMCSR3_10 PORT.PMCSR3.BIT.PMCSR3_10
#define PORTPMCSR3_11 PORT.PMCSR3.BIT.PMCSR3_11
#define PORTPMCSR3_12 PORT.PMCSR3.BIT.PMCSR3_12
#define PORTPMCSR3_13 PORT.PMCSR3.BIT.PMCSR3_13
#define PORTPMCSR3_14 PORT.PMCSR3.BIT.PMCSR3_14
#define PORTPMCSR3_16 PORT.PMCSR3.BIT.PMCSR3_16
#define PORTPMCSR3_17 PORT.PMCSR3.BIT.PMCSR3_17
#define PORTPMCSR3_18 PORT.PMCSR3.BIT.PMCSR3_18
#define PORTPMCSR3_19 PORT.PMCSR3.BIT.PMCSR3_19
#define PORTPMCSR3_20 PORT.PMCSR3.BIT.PMCSR3_20
#define PORTPMCSR3_21 PORT.PMCSR3.BIT.PMCSR3_21
#define PORTPMCSR3_22 PORT.PMCSR3.BIT.PMCSR3_22
#define PORTPMCSR3_23 PORT.PMCSR3.BIT.PMCSR3_23
#define PORTPMCSR3_24 PORT.PMCSR3.BIT.PMCSR3_24
#define PORTPMCSR3_25 PORT.PMCSR3.BIT.PMCSR3_25
#define PORTPMCSR3_26 PORT.PMCSR3.BIT.PMCSR3_26
#define PORTPMCSR3_27 PORT.PMCSR3.BIT.PMCSR3_27
#define PORTPMCSR3_28 PORT.PMCSR3.BIT.PMCSR3_28
#define PORTPMCSR3_29 PORT.PMCSR3.BIT.PMCSR3_29
#define PORTPMCSR3_30 PORT.PMCSR3.BIT.PMCSR3_30
#define PORTPFCAE3 PORT.PFCAE3.UINT16
#define PORTPFCAE3_0 PORT.PFCAE3.BIT.PFCAE3_0
#define PORTPFCAE3_1 PORT.PFCAE3.BIT.PFCAE3_1
#define PORTPFCAE3_2 PORT.PFCAE3.BIT.PFCAE3_2
#define PORTPFCAE3_3 PORT.PFCAE3.BIT.PFCAE3_3
#define PORTPFCAE3_4 PORT.PFCAE3.BIT.PFCAE3_4
#define PORTPFCAE3_5 PORT.PFCAE3.BIT.PFCAE3_5
#define PORTPFCAE3_6 PORT.PFCAE3.BIT.PFCAE3_6
#define PORTPFCAE3_7 PORT.PFCAE3.BIT.PFCAE3_7
#define PORTPFCAE3_8 PORT.PFCAE3.BIT.PFCAE3_8
#define PORTPFCAE3_9 PORT.PFCAE3.BIT.PFCAE3_9
#define PORTPFCAE3_10 PORT.PFCAE3.BIT.PFCAE3_10
#define PORTPFCAE3_11 PORT.PFCAE3.BIT.PFCAE3_11
#define PORTPFCAE3_12 PORT.PFCAE3.BIT.PFCAE3_12
#define PORTPFCAE3_13 PORT.PFCAE3.BIT.PFCAE3_13
#define PORTPFCAE3_14 PORT.PFCAE3.BIT.PFCAE3_14
#define PORTPINV3 PORT.PINV3.UINT32
#define PORTPINV3_0 PORT.PINV3.BIT.PINV3_0
#define PORTPINV3_1 PORT.PINV3.BIT.PINV3_1
#define PORTPINV3_2 PORT.PINV3.BIT.PINV3_2
#define PORTPINV3_3 PORT.PINV3.BIT.PINV3_3
#define PORTPINV3_4 PORT.PINV3.BIT.PINV3_4
#define PORTPINV3_5 PORT.PINV3.BIT.PINV3_5
#define PORTPINV3_6 PORT.PINV3.BIT.PINV3_6
#define PORTPINV3_7 PORT.PINV3.BIT.PINV3_7
#define PORTPINV3_8 PORT.PINV3.BIT.PINV3_8
#define PORTPINV3_9 PORT.PINV3.BIT.PINV3_9
#define PORTPINV3_10 PORT.PINV3.BIT.PINV3_10
#define PORTPINV3_11 PORT.PINV3.BIT.PINV3_11
#define PORTPINV3_12 PORT.PINV3.BIT.PINV3_12
#define PORTPINV3_13 PORT.PINV3.BIT.PINV3_13
#define PORTPINV3_14 PORT.PINV3.BIT.PINV3_14
#define PORTP4 PORT.P4.UINT16
#define PORTP4_0 PORT.P4.BIT.P4_0
#define PORTP4_1 PORT.P4.BIT.P4_1
#define PORTP4_2 PORT.P4.BIT.P4_2
#define PORTP4_3 PORT.P4.BIT.P4_3
#define PORTP4_4 PORT.P4.BIT.P4_4
#define PORTP4_5 PORT.P4.BIT.P4_5
#define PORTP4_6 PORT.P4.BIT.P4_6
#define PORTP4_7 PORT.P4.BIT.P4_7
#define PORTP4_8 PORT.P4.BIT.P4_8
#define PORTP4_9 PORT.P4.BIT.P4_9
#define PORTP4_10 PORT.P4.BIT.P4_10
#define PORTP4_11 PORT.P4.BIT.P4_11
#define PORTP4_12 PORT.P4.BIT.P4_12
#define PORTP4_13 PORT.P4.BIT.P4_13
#define PORTP4_14 PORT.P4.BIT.P4_14
#define PORTPSR4 PORT.PSR4.UINT32
#define PORTPSR4_0 PORT.PSR4.BIT.PSR4_0
#define PORTPSR4_1 PORT.PSR4.BIT.PSR4_1
#define PORTPSR4_2 PORT.PSR4.BIT.PSR4_2
#define PORTPSR4_3 PORT.PSR4.BIT.PSR4_3
#define PORTPSR4_4 PORT.PSR4.BIT.PSR4_4
#define PORTPSR4_5 PORT.PSR4.BIT.PSR4_5
#define PORTPSR4_6 PORT.PSR4.BIT.PSR4_6
#define PORTPSR4_7 PORT.PSR4.BIT.PSR4_7
#define PORTPSR4_8 PORT.PSR4.BIT.PSR4_8
#define PORTPSR4_9 PORT.PSR4.BIT.PSR4_9
#define PORTPSR4_10 PORT.PSR4.BIT.PSR4_10
#define PORTPSR4_11 PORT.PSR4.BIT.PSR4_11
#define PORTPSR4_12 PORT.PSR4.BIT.PSR4_12
#define PORTPSR4_13 PORT.PSR4.BIT.PSR4_13
#define PORTPSR4_14 PORT.PSR4.BIT.PSR4_14
#define PORTPSR4_16 PORT.PSR4.BIT.PSR4_16
#define PORTPSR4_17 PORT.PSR4.BIT.PSR4_17
#define PORTPSR4_18 PORT.PSR4.BIT.PSR4_18
#define PORTPSR4_19 PORT.PSR4.BIT.PSR4_19
#define PORTPSR4_20 PORT.PSR4.BIT.PSR4_20
#define PORTPSR4_21 PORT.PSR4.BIT.PSR4_21
#define PORTPSR4_22 PORT.PSR4.BIT.PSR4_22
#define PORTPSR4_23 PORT.PSR4.BIT.PSR4_23
#define PORTPSR4_24 PORT.PSR4.BIT.PSR4_24
#define PORTPSR4_25 PORT.PSR4.BIT.PSR4_25
#define PORTPSR4_26 PORT.PSR4.BIT.PSR4_26
#define PORTPSR4_27 PORT.PSR4.BIT.PSR4_27
#define PORTPSR4_28 PORT.PSR4.BIT.PSR4_28
#define PORTPSR4_29 PORT.PSR4.BIT.PSR4_29
#define PORTPSR4_30 PORT.PSR4.BIT.PSR4_30
#define PORTPNOT4 PORT.PNOT4.UINT16
#define PORTPNOT4_0 PORT.PNOT4.BIT.PNOT4_0
#define PORTPNOT4_1 PORT.PNOT4.BIT.PNOT4_1
#define PORTPNOT4_2 PORT.PNOT4.BIT.PNOT4_2
#define PORTPNOT4_3 PORT.PNOT4.BIT.PNOT4_3
#define PORTPNOT4_4 PORT.PNOT4.BIT.PNOT4_4
#define PORTPNOT4_5 PORT.PNOT4.BIT.PNOT4_5
#define PORTPNOT4_6 PORT.PNOT4.BIT.PNOT4_6
#define PORTPNOT4_7 PORT.PNOT4.BIT.PNOT4_7
#define PORTPNOT4_8 PORT.PNOT4.BIT.PNOT4_8
#define PORTPNOT4_9 PORT.PNOT4.BIT.PNOT4_9
#define PORTPNOT4_10 PORT.PNOT4.BIT.PNOT4_10
#define PORTPNOT4_11 PORT.PNOT4.BIT.PNOT4_11
#define PORTPNOT4_12 PORT.PNOT4.BIT.PNOT4_12
#define PORTPNOT4_13 PORT.PNOT4.BIT.PNOT4_13
#define PORTPNOT4_14 PORT.PNOT4.BIT.PNOT4_14
#define PORTPPR4 PORT.PPR4.UINT16
#define PORTPPR4_0 PORT.PPR4.BIT.PPR4_0
#define PORTPPR4_1 PORT.PPR4.BIT.PPR4_1
#define PORTPPR4_2 PORT.PPR4.BIT.PPR4_2
#define PORTPPR4_3 PORT.PPR4.BIT.PPR4_3
#define PORTPPR4_4 PORT.PPR4.BIT.PPR4_4
#define PORTPPR4_5 PORT.PPR4.BIT.PPR4_5
#define PORTPPR4_6 PORT.PPR4.BIT.PPR4_6
#define PORTPPR4_7 PORT.PPR4.BIT.PPR4_7
#define PORTPPR4_8 PORT.PPR4.BIT.PPR4_8
#define PORTPPR4_9 PORT.PPR4.BIT.PPR4_9
#define PORTPPR4_10 PORT.PPR4.BIT.PPR4_10
#define PORTPPR4_11 PORT.PPR4.BIT.PPR4_11
#define PORTPPR4_12 PORT.PPR4.BIT.PPR4_12
#define PORTPPR4_13 PORT.PPR4.BIT.PPR4_13
#define PORTPPR4_14 PORT.PPR4.BIT.PPR4_14
#define PORTPM4 PORT.PM4.UINT16
#define PORTPM4_0 PORT.PM4.BIT.PM4_0
#define PORTPM4_1 PORT.PM4.BIT.PM4_1
#define PORTPM4_2 PORT.PM4.BIT.PM4_2
#define PORTPM4_3 PORT.PM4.BIT.PM4_3
#define PORTPM4_4 PORT.PM4.BIT.PM4_4
#define PORTPM4_5 PORT.PM4.BIT.PM4_5
#define PORTPM4_6 PORT.PM4.BIT.PM4_6
#define PORTPM4_7 PORT.PM4.BIT.PM4_7
#define PORTPM4_8 PORT.PM4.BIT.PM4_8
#define PORTPM4_9 PORT.PM4.BIT.PM4_9
#define PORTPM4_10 PORT.PM4.BIT.PM4_10
#define PORTPM4_11 PORT.PM4.BIT.PM4_11
#define PORTPM4_12 PORT.PM4.BIT.PM4_12
#define PORTPM4_13 PORT.PM4.BIT.PM4_13
#define PORTPM4_14 PORT.PM4.BIT.PM4_14
#define PORTPMC4 PORT.PMC4.UINT16
#define PORTPMC4_0 PORT.PMC4.BIT.PMC4_0
#define PORTPMC4_1 PORT.PMC4.BIT.PMC4_1
#define PORTPMC4_2 PORT.PMC4.BIT.PMC4_2
#define PORTPMC4_3 PORT.PMC4.BIT.PMC4_3
#define PORTPMC4_4 PORT.PMC4.BIT.PMC4_4
#define PORTPMC4_5 PORT.PMC4.BIT.PMC4_5
#define PORTPMC4_6 PORT.PMC4.BIT.PMC4_6
#define PORTPMC4_7 PORT.PMC4.BIT.PMC4_7
#define PORTPMC4_8 PORT.PMC4.BIT.PMC4_8
#define PORTPMC4_9 PORT.PMC4.BIT.PMC4_9
#define PORTPMC4_10 PORT.PMC4.BIT.PMC4_10
#define PORTPMC4_11 PORT.PMC4.BIT.PMC4_11
#define PORTPMC4_12 PORT.PMC4.BIT.PMC4_12
#define PORTPMC4_13 PORT.PMC4.BIT.PMC4_13
#define PORTPMC4_14 PORT.PMC4.BIT.PMC4_14
#define PORTPFC4 PORT.PFC4.UINT16
#define PORTPFC4_0 PORT.PFC4.BIT.PFC4_0
#define PORTPFC4_1 PORT.PFC4.BIT.PFC4_1
#define PORTPFC4_2 PORT.PFC4.BIT.PFC4_2
#define PORTPFC4_3 PORT.PFC4.BIT.PFC4_3
#define PORTPFC4_4 PORT.PFC4.BIT.PFC4_4
#define PORTPFC4_5 PORT.PFC4.BIT.PFC4_5
#define PORTPFC4_6 PORT.PFC4.BIT.PFC4_6
#define PORTPFC4_7 PORT.PFC4.BIT.PFC4_7
#define PORTPFC4_8 PORT.PFC4.BIT.PFC4_8
#define PORTPFC4_9 PORT.PFC4.BIT.PFC4_9
#define PORTPFC4_10 PORT.PFC4.BIT.PFC4_10
#define PORTPFC4_11 PORT.PFC4.BIT.PFC4_11
#define PORTPFC4_12 PORT.PFC4.BIT.PFC4_12
#define PORTPFC4_13 PORT.PFC4.BIT.PFC4_13
#define PORTPFC4_14 PORT.PFC4.BIT.PFC4_14
#define PORTPFCE4 PORT.PFCE4.UINT16
#define PORTPFCE4_0 PORT.PFCE4.BIT.PFCE4_0
#define PORTPFCE4_1 PORT.PFCE4.BIT.PFCE4_1
#define PORTPFCE4_2 PORT.PFCE4.BIT.PFCE4_2
#define PORTPFCE4_3 PORT.PFCE4.BIT.PFCE4_3
#define PORTPFCE4_4 PORT.PFCE4.BIT.PFCE4_4
#define PORTPFCE4_5 PORT.PFCE4.BIT.PFCE4_5
#define PORTPFCE4_6 PORT.PFCE4.BIT.PFCE4_6
#define PORTPFCE4_7 PORT.PFCE4.BIT.PFCE4_7
#define PORTPFCE4_8 PORT.PFCE4.BIT.PFCE4_8
#define PORTPFCE4_9 PORT.PFCE4.BIT.PFCE4_9
#define PORTPFCE4_10 PORT.PFCE4.BIT.PFCE4_10
#define PORTPFCE4_11 PORT.PFCE4.BIT.PFCE4_11
#define PORTPFCE4_12 PORT.PFCE4.BIT.PFCE4_12
#define PORTPFCE4_13 PORT.PFCE4.BIT.PFCE4_13
#define PORTPFCE4_14 PORT.PFCE4.BIT.PFCE4_14
#define PORTPMSR4 PORT.PMSR4.UINT32
#define PORTPMSR4_0 PORT.PMSR4.BIT.PMSR4_0
#define PORTPMSR4_1 PORT.PMSR4.BIT.PMSR4_1
#define PORTPMSR4_2 PORT.PMSR4.BIT.PMSR4_2
#define PORTPMSR4_3 PORT.PMSR4.BIT.PMSR4_3
#define PORTPMSR4_4 PORT.PMSR4.BIT.PMSR4_4
#define PORTPMSR4_5 PORT.PMSR4.BIT.PMSR4_5
#define PORTPMSR4_6 PORT.PMSR4.BIT.PMSR4_6
#define PORTPMSR4_7 PORT.PMSR4.BIT.PMSR4_7
#define PORTPMSR4_8 PORT.PMSR4.BIT.PMSR4_8
#define PORTPMSR4_9 PORT.PMSR4.BIT.PMSR4_9
#define PORTPMSR4_10 PORT.PMSR4.BIT.PMSR4_10
#define PORTPMSR4_11 PORT.PMSR4.BIT.PMSR4_11
#define PORTPMSR4_12 PORT.PMSR4.BIT.PMSR4_12
#define PORTPMSR4_13 PORT.PMSR4.BIT.PMSR4_13
#define PORTPMSR4_14 PORT.PMSR4.BIT.PMSR4_14
#define PORTPMSR4_16 PORT.PMSR4.BIT.PMSR4_16
#define PORTPMSR4_17 PORT.PMSR4.BIT.PMSR4_17
#define PORTPMSR4_18 PORT.PMSR4.BIT.PMSR4_18
#define PORTPMSR4_19 PORT.PMSR4.BIT.PMSR4_19
#define PORTPMSR4_20 PORT.PMSR4.BIT.PMSR4_20
#define PORTPMSR4_21 PORT.PMSR4.BIT.PMSR4_21
#define PORTPMSR4_22 PORT.PMSR4.BIT.PMSR4_22
#define PORTPMSR4_23 PORT.PMSR4.BIT.PMSR4_23
#define PORTPMSR4_24 PORT.PMSR4.BIT.PMSR4_24
#define PORTPMSR4_25 PORT.PMSR4.BIT.PMSR4_25
#define PORTPMSR4_26 PORT.PMSR4.BIT.PMSR4_26
#define PORTPMSR4_27 PORT.PMSR4.BIT.PMSR4_27
#define PORTPMSR4_28 PORT.PMSR4.BIT.PMSR4_28
#define PORTPMSR4_29 PORT.PMSR4.BIT.PMSR4_29
#define PORTPMSR4_30 PORT.PMSR4.BIT.PMSR4_30
#define PORTPMCSR4 PORT.PMCSR4.UINT32
#define PORTPMCSR4_0 PORT.PMCSR4.BIT.PMCSR4_0
#define PORTPMCSR4_1 PORT.PMCSR4.BIT.PMCSR4_1
#define PORTPMCSR4_2 PORT.PMCSR4.BIT.PMCSR4_2
#define PORTPMCSR4_3 PORT.PMCSR4.BIT.PMCSR4_3
#define PORTPMCSR4_4 PORT.PMCSR4.BIT.PMCSR4_4
#define PORTPMCSR4_5 PORT.PMCSR4.BIT.PMCSR4_5
#define PORTPMCSR4_6 PORT.PMCSR4.BIT.PMCSR4_6
#define PORTPMCSR4_7 PORT.PMCSR4.BIT.PMCSR4_7
#define PORTPMCSR4_8 PORT.PMCSR4.BIT.PMCSR4_8
#define PORTPMCSR4_9 PORT.PMCSR4.BIT.PMCSR4_9
#define PORTPMCSR4_10 PORT.PMCSR4.BIT.PMCSR4_10
#define PORTPMCSR4_11 PORT.PMCSR4.BIT.PMCSR4_11
#define PORTPMCSR4_12 PORT.PMCSR4.BIT.PMCSR4_12
#define PORTPMCSR4_13 PORT.PMCSR4.BIT.PMCSR4_13
#define PORTPMCSR4_14 PORT.PMCSR4.BIT.PMCSR4_14
#define PORTPMCSR4_16 PORT.PMCSR4.BIT.PMCSR4_16
#define PORTPMCSR4_17 PORT.PMCSR4.BIT.PMCSR4_17
#define PORTPMCSR4_18 PORT.PMCSR4.BIT.PMCSR4_18
#define PORTPMCSR4_19 PORT.PMCSR4.BIT.PMCSR4_19
#define PORTPMCSR4_20 PORT.PMCSR4.BIT.PMCSR4_20
#define PORTPMCSR4_21 PORT.PMCSR4.BIT.PMCSR4_21
#define PORTPMCSR4_22 PORT.PMCSR4.BIT.PMCSR4_22
#define PORTPMCSR4_23 PORT.PMCSR4.BIT.PMCSR4_23
#define PORTPMCSR4_24 PORT.PMCSR4.BIT.PMCSR4_24
#define PORTPMCSR4_25 PORT.PMCSR4.BIT.PMCSR4_25
#define PORTPMCSR4_26 PORT.PMCSR4.BIT.PMCSR4_26
#define PORTPMCSR4_27 PORT.PMCSR4.BIT.PMCSR4_27
#define PORTPMCSR4_28 PORT.PMCSR4.BIT.PMCSR4_28
#define PORTPMCSR4_29 PORT.PMCSR4.BIT.PMCSR4_29
#define PORTPMCSR4_30 PORT.PMCSR4.BIT.PMCSR4_30
#define PORTPFCAE4 PORT.PFCAE4.UINT16
#define PORTPFCAE4_0 PORT.PFCAE4.BIT.PFCAE4_0
#define PORTPFCAE4_1 PORT.PFCAE4.BIT.PFCAE4_1
#define PORTPFCAE4_2 PORT.PFCAE4.BIT.PFCAE4_2
#define PORTPFCAE4_3 PORT.PFCAE4.BIT.PFCAE4_3
#define PORTPFCAE4_4 PORT.PFCAE4.BIT.PFCAE4_4
#define PORTPFCAE4_5 PORT.PFCAE4.BIT.PFCAE4_5
#define PORTPFCAE4_6 PORT.PFCAE4.BIT.PFCAE4_6
#define PORTPFCAE4_7 PORT.PFCAE4.BIT.PFCAE4_7
#define PORTPFCAE4_8 PORT.PFCAE4.BIT.PFCAE4_8
#define PORTPFCAE4_9 PORT.PFCAE4.BIT.PFCAE4_9
#define PORTPFCAE4_10 PORT.PFCAE4.BIT.PFCAE4_10
#define PORTPFCAE4_11 PORT.PFCAE4.BIT.PFCAE4_11
#define PORTPFCAE4_12 PORT.PFCAE4.BIT.PFCAE4_12
#define PORTPFCAE4_13 PORT.PFCAE4.BIT.PFCAE4_13
#define PORTPFCAE4_14 PORT.PFCAE4.BIT.PFCAE4_14
#define PORTPINV4 PORT.PINV4.UINT32
#define PORTPINV4_0 PORT.PINV4.BIT.PINV4_0
#define PORTPINV4_1 PORT.PINV4.BIT.PINV4_1
#define PORTPINV4_2 PORT.PINV4.BIT.PINV4_2
#define PORTPINV4_3 PORT.PINV4.BIT.PINV4_3
#define PORTPINV4_4 PORT.PINV4.BIT.PINV4_4
#define PORTPINV4_5 PORT.PINV4.BIT.PINV4_5
#define PORTPINV4_6 PORT.PINV4.BIT.PINV4_6
#define PORTPINV4_7 PORT.PINV4.BIT.PINV4_7
#define PORTPINV4_8 PORT.PINV4.BIT.PINV4_8
#define PORTPINV4_9 PORT.PINV4.BIT.PINV4_9
#define PORTPINV4_10 PORT.PINV4.BIT.PINV4_10
#define PORTPINV4_11 PORT.PINV4.BIT.PINV4_11
#define PORTPINV4_12 PORT.PINV4.BIT.PINV4_12
#define PORTPINV4_13 PORT.PINV4.BIT.PINV4_13
#define PORTPINV4_14 PORT.PINV4.BIT.PINV4_14
#define PORTP5 PORT.P5.UINT16
#define PORTP5_0 PORT.P5.BIT.P5_0
#define PORTP5_1 PORT.P5.BIT.P5_1
#define PORTP5_2 PORT.P5.BIT.P5_2
#define PORTP5_3 PORT.P5.BIT.P5_3
#define PORTP5_4 PORT.P5.BIT.P5_4
#define PORTP5_5 PORT.P5.BIT.P5_5
#define PORTP5_6 PORT.P5.BIT.P5_6
#define PORTP5_7 PORT.P5.BIT.P5_7
#define PORTP5_8 PORT.P5.BIT.P5_8
#define PORTP5_9 PORT.P5.BIT.P5_9
#define PORTP5_10 PORT.P5.BIT.P5_10
#define PORTP5_11 PORT.P5.BIT.P5_11
#define PORTP5_12 PORT.P5.BIT.P5_12
#define PORTP5_13 PORT.P5.BIT.P5_13
#define PORTP5_14 PORT.P5.BIT.P5_14
#define PORTP5_15 PORT.P5.BIT.P5_15
#define PORTPSR5 PORT.PSR5.UINT32
#define PORTPSR5_0 PORT.PSR5.BIT.PSR5_0
#define PORTPSR5_1 PORT.PSR5.BIT.PSR5_1
#define PORTPSR5_2 PORT.PSR5.BIT.PSR5_2
#define PORTPSR5_3 PORT.PSR5.BIT.PSR5_3
#define PORTPSR5_4 PORT.PSR5.BIT.PSR5_4
#define PORTPSR5_5 PORT.PSR5.BIT.PSR5_5
#define PORTPSR5_6 PORT.PSR5.BIT.PSR5_6
#define PORTPSR5_7 PORT.PSR5.BIT.PSR5_7
#define PORTPSR5_8 PORT.PSR5.BIT.PSR5_8
#define PORTPSR5_9 PORT.PSR5.BIT.PSR5_9
#define PORTPSR5_10 PORT.PSR5.BIT.PSR5_10
#define PORTPSR5_11 PORT.PSR5.BIT.PSR5_11
#define PORTPSR5_12 PORT.PSR5.BIT.PSR5_12
#define PORTPSR5_13 PORT.PSR5.BIT.PSR5_13
#define PORTPSR5_14 PORT.PSR5.BIT.PSR5_14
#define PORTPSR5_15 PORT.PSR5.BIT.PSR5_15
#define PORTPSR5_16 PORT.PSR5.BIT.PSR5_16
#define PORTPSR5_17 PORT.PSR5.BIT.PSR5_17
#define PORTPSR5_18 PORT.PSR5.BIT.PSR5_18
#define PORTPSR5_19 PORT.PSR5.BIT.PSR5_19
#define PORTPSR5_20 PORT.PSR5.BIT.PSR5_20
#define PORTPSR5_21 PORT.PSR5.BIT.PSR5_21
#define PORTPSR5_22 PORT.PSR5.BIT.PSR5_22
#define PORTPSR5_23 PORT.PSR5.BIT.PSR5_23
#define PORTPSR5_24 PORT.PSR5.BIT.PSR5_24
#define PORTPSR5_25 PORT.PSR5.BIT.PSR5_25
#define PORTPSR5_26 PORT.PSR5.BIT.PSR5_26
#define PORTPSR5_27 PORT.PSR5.BIT.PSR5_27
#define PORTPSR5_28 PORT.PSR5.BIT.PSR5_28
#define PORTPSR5_29 PORT.PSR5.BIT.PSR5_29
#define PORTPSR5_30 PORT.PSR5.BIT.PSR5_30
#define PORTPSR5_31 PORT.PSR5.BIT.PSR5_31
#define PORTPNOT5 PORT.PNOT5.UINT16
#define PORTPNOT5_0 PORT.PNOT5.BIT.PNOT5_0
#define PORTPNOT5_1 PORT.PNOT5.BIT.PNOT5_1
#define PORTPNOT5_2 PORT.PNOT5.BIT.PNOT5_2
#define PORTPNOT5_3 PORT.PNOT5.BIT.PNOT5_3
#define PORTPNOT5_4 PORT.PNOT5.BIT.PNOT5_4
#define PORTPNOT5_5 PORT.PNOT5.BIT.PNOT5_5
#define PORTPNOT5_6 PORT.PNOT5.BIT.PNOT5_6
#define PORTPNOT5_7 PORT.PNOT5.BIT.PNOT5_7
#define PORTPNOT5_8 PORT.PNOT5.BIT.PNOT5_8
#define PORTPNOT5_9 PORT.PNOT5.BIT.PNOT5_9
#define PORTPNOT5_10 PORT.PNOT5.BIT.PNOT5_10
#define PORTPNOT5_11 PORT.PNOT5.BIT.PNOT5_11
#define PORTPNOT5_12 PORT.PNOT5.BIT.PNOT5_12
#define PORTPNOT5_13 PORT.PNOT5.BIT.PNOT5_13
#define PORTPNOT5_14 PORT.PNOT5.BIT.PNOT5_14
#define PORTPNOT5_15 PORT.PNOT5.BIT.PNOT5_15
#define PORTPPR5 PORT.PPR5.UINT16
#define PORTPPR5_0 PORT.PPR5.BIT.PPR5_0
#define PORTPPR5_1 PORT.PPR5.BIT.PPR5_1
#define PORTPPR5_2 PORT.PPR5.BIT.PPR5_2
#define PORTPPR5_3 PORT.PPR5.BIT.PPR5_3
#define PORTPPR5_4 PORT.PPR5.BIT.PPR5_4
#define PORTPPR5_5 PORT.PPR5.BIT.PPR5_5
#define PORTPPR5_6 PORT.PPR5.BIT.PPR5_6
#define PORTPPR5_7 PORT.PPR5.BIT.PPR5_7
#define PORTPPR5_8 PORT.PPR5.BIT.PPR5_8
#define PORTPPR5_9 PORT.PPR5.BIT.PPR5_9
#define PORTPPR5_10 PORT.PPR5.BIT.PPR5_10
#define PORTPPR5_11 PORT.PPR5.BIT.PPR5_11
#define PORTPPR5_12 PORT.PPR5.BIT.PPR5_12
#define PORTPPR5_13 PORT.PPR5.BIT.PPR5_13
#define PORTPPR5_14 PORT.PPR5.BIT.PPR5_14
#define PORTPPR5_15 PORT.PPR5.BIT.PPR5_15
#define PORTPM5 PORT.PM5.UINT16
#define PORTPM5_0 PORT.PM5.BIT.PM5_0
#define PORTPM5_1 PORT.PM5.BIT.PM5_1
#define PORTPM5_2 PORT.PM5.BIT.PM5_2
#define PORTPM5_3 PORT.PM5.BIT.PM5_3
#define PORTPM5_4 PORT.PM5.BIT.PM5_4
#define PORTPM5_5 PORT.PM5.BIT.PM5_5
#define PORTPM5_6 PORT.PM5.BIT.PM5_6
#define PORTPM5_7 PORT.PM5.BIT.PM5_7
#define PORTPM5_8 PORT.PM5.BIT.PM5_8
#define PORTPM5_9 PORT.PM5.BIT.PM5_9
#define PORTPM5_10 PORT.PM5.BIT.PM5_10
#define PORTPM5_11 PORT.PM5.BIT.PM5_11
#define PORTPM5_12 PORT.PM5.BIT.PM5_12
#define PORTPM5_13 PORT.PM5.BIT.PM5_13
#define PORTPM5_14 PORT.PM5.BIT.PM5_14
#define PORTPM5_15 PORT.PM5.BIT.PM5_15
#define PORTPMC5 PORT.PMC5.UINT16
#define PORTPMC5_0 PORT.PMC5.BIT.PMC5_0
#define PORTPMC5_1 PORT.PMC5.BIT.PMC5_1
#define PORTPMC5_2 PORT.PMC5.BIT.PMC5_2
#define PORTPMC5_3 PORT.PMC5.BIT.PMC5_3
#define PORTPMC5_4 PORT.PMC5.BIT.PMC5_4
#define PORTPMC5_5 PORT.PMC5.BIT.PMC5_5
#define PORTPMC5_6 PORT.PMC5.BIT.PMC5_6
#define PORTPMC5_7 PORT.PMC5.BIT.PMC5_7
#define PORTPMC5_8 PORT.PMC5.BIT.PMC5_8
#define PORTPMC5_9 PORT.PMC5.BIT.PMC5_9
#define PORTPMC5_10 PORT.PMC5.BIT.PMC5_10
#define PORTPMC5_11 PORT.PMC5.BIT.PMC5_11
#define PORTPMC5_12 PORT.PMC5.BIT.PMC5_12
#define PORTPMC5_13 PORT.PMC5.BIT.PMC5_13
#define PORTPMC5_14 PORT.PMC5.BIT.PMC5_14
#define PORTPMC5_15 PORT.PMC5.BIT.PMC5_15
#define PORTPFC5 PORT.PFC5.UINT16
#define PORTPFC5_0 PORT.PFC5.BIT.PFC5_0
#define PORTPFC5_1 PORT.PFC5.BIT.PFC5_1
#define PORTPFC5_2 PORT.PFC5.BIT.PFC5_2
#define PORTPFC5_4 PORT.PFC5.BIT.PFC5_4
#define PORTPFC5_5 PORT.PFC5.BIT.PFC5_5
#define PORTPFC5_6 PORT.PFC5.BIT.PFC5_6
#define PORTPFC5_7 PORT.PFC5.BIT.PFC5_7
#define PORTPFC5_8 PORT.PFC5.BIT.PFC5_8
#define PORTPFC5_9 PORT.PFC5.BIT.PFC5_9
#define PORTPFC5_10 PORT.PFC5.BIT.PFC5_10
#define PORTPFC5_11 PORT.PFC5.BIT.PFC5_11
#define PORTPFC5_12 PORT.PFC5.BIT.PFC5_12
#define PORTPFC5_13 PORT.PFC5.BIT.PFC5_13
#define PORTPFC5_14 PORT.PFC5.BIT.PFC5_14
#define PORTPFC5_15 PORT.PFC5.BIT.PFC5_15
#define PORTPFCE5 PORT.PFCE5.UINT16
#define PORTPFCE5_0 PORT.PFCE5.BIT.PFCE5_0
#define PORTPFCE5_1 PORT.PFCE5.BIT.PFCE5_1
#define PORTPFCE5_2 PORT.PFCE5.BIT.PFCE5_2
#define PORTPFCE5_3 PORT.PFCE5.BIT.PFCE5_3
#define PORTPFCE5_4 PORT.PFCE5.BIT.PFCE5_4
#define PORTPFCE5_5 PORT.PFCE5.BIT.PFCE5_5
#define PORTPFCE5_6 PORT.PFCE5.BIT.PFCE5_6
#define PORTPFCE5_7 PORT.PFCE5.BIT.PFCE5_7
#define PORTPFCE5_8 PORT.PFCE5.BIT.PFCE5_8
#define PORTPFCE5_9 PORT.PFCE5.BIT.PFCE5_9
#define PORTPFCE5_10 PORT.PFCE5.BIT.PFCE5_10
#define PORTPFCE5_11 PORT.PFCE5.BIT.PFCE5_11
#define PORTPFCE5_12 PORT.PFCE5.BIT.PFCE5_12
#define PORTPFCE5_13 PORT.PFCE5.BIT.PFCE5_13
#define PORTPFCE5_14 PORT.PFCE5.BIT.PFCE5_14
#define PORTPMSR5 PORT.PMSR5.UINT32
#define PORTPMSR5_0 PORT.PMSR5.BIT.PMSR5_0
#define PORTPMSR5_1 PORT.PMSR5.BIT.PMSR5_1
#define PORTPMSR5_2 PORT.PMSR5.BIT.PMSR5_2
#define PORTPMSR5_3 PORT.PMSR5.BIT.PMSR5_3
#define PORTPMSR5_4 PORT.PMSR5.BIT.PMSR5_4
#define PORTPMSR5_5 PORT.PMSR5.BIT.PMSR5_5
#define PORTPMSR5_6 PORT.PMSR5.BIT.PMSR5_6
#define PORTPMSR5_7 PORT.PMSR5.BIT.PMSR5_7
#define PORTPMSR5_8 PORT.PMSR5.BIT.PMSR5_8
#define PORTPMSR5_9 PORT.PMSR5.BIT.PMSR5_9
#define PORTPMSR5_10 PORT.PMSR5.BIT.PMSR5_10
#define PORTPMSR5_11 PORT.PMSR5.BIT.PMSR5_11
#define PORTPMSR5_12 PORT.PMSR5.BIT.PMSR5_12
#define PORTPMSR5_13 PORT.PMSR5.BIT.PMSR5_13
#define PORTPMSR5_14 PORT.PMSR5.BIT.PMSR5_14
#define PORTPMSR5_15 PORT.PMSR5.BIT.PMSR5_15
#define PORTPMSR5_16 PORT.PMSR5.BIT.PMSR5_16
#define PORTPMSR5_17 PORT.PMSR5.BIT.PMSR5_17
#define PORTPMSR5_18 PORT.PMSR5.BIT.PMSR5_18
#define PORTPMSR5_19 PORT.PMSR5.BIT.PMSR5_19
#define PORTPMSR5_20 PORT.PMSR5.BIT.PMSR5_20
#define PORTPMSR5_21 PORT.PMSR5.BIT.PMSR5_21
#define PORTPMSR5_22 PORT.PMSR5.BIT.PMSR5_22
#define PORTPMSR5_23 PORT.PMSR5.BIT.PMSR5_23
#define PORTPMSR5_24 PORT.PMSR5.BIT.PMSR5_24
#define PORTPMSR5_25 PORT.PMSR5.BIT.PMSR5_25
#define PORTPMSR5_26 PORT.PMSR5.BIT.PMSR5_26
#define PORTPMSR5_27 PORT.PMSR5.BIT.PMSR5_27
#define PORTPMSR5_28 PORT.PMSR5.BIT.PMSR5_28
#define PORTPMSR5_29 PORT.PMSR5.BIT.PMSR5_29
#define PORTPMSR5_30 PORT.PMSR5.BIT.PMSR5_30
#define PORTPMSR5_31 PORT.PMSR5.BIT.PMSR5_31
#define PORTPMCSR5 PORT.PMCSR5.UINT32
#define PORTPMCSR5_0 PORT.PMCSR5.BIT.PMCSR5_0
#define PORTPMCSR5_1 PORT.PMCSR5.BIT.PMCSR5_1
#define PORTPMCSR5_2 PORT.PMCSR5.BIT.PMCSR5_2
#define PORTPMCSR5_3 PORT.PMCSR5.BIT.PMCSR5_3
#define PORTPMCSR5_4 PORT.PMCSR5.BIT.PMCSR5_4
#define PORTPMCSR5_5 PORT.PMCSR5.BIT.PMCSR5_5
#define PORTPMCSR5_6 PORT.PMCSR5.BIT.PMCSR5_6
#define PORTPMCSR5_7 PORT.PMCSR5.BIT.PMCSR5_7
#define PORTPMCSR5_8 PORT.PMCSR5.BIT.PMCSR5_8
#define PORTPMCSR5_9 PORT.PMCSR5.BIT.PMCSR5_9
#define PORTPMCSR5_10 PORT.PMCSR5.BIT.PMCSR5_10
#define PORTPMCSR5_11 PORT.PMCSR5.BIT.PMCSR5_11
#define PORTPMCSR5_12 PORT.PMCSR5.BIT.PMCSR5_12
#define PORTPMCSR5_13 PORT.PMCSR5.BIT.PMCSR5_13
#define PORTPMCSR5_14 PORT.PMCSR5.BIT.PMCSR5_14
#define PORTPMCSR5_15 PORT.PMCSR5.BIT.PMCSR5_15
#define PORTPMCSR5_16 PORT.PMCSR5.BIT.PMCSR5_16
#define PORTPMCSR5_17 PORT.PMCSR5.BIT.PMCSR5_17
#define PORTPMCSR5_18 PORT.PMCSR5.BIT.PMCSR5_18
#define PORTPMCSR5_19 PORT.PMCSR5.BIT.PMCSR5_19
#define PORTPMCSR5_20 PORT.PMCSR5.BIT.PMCSR5_20
#define PORTPMCSR5_21 PORT.PMCSR5.BIT.PMCSR5_21
#define PORTPMCSR5_22 PORT.PMCSR5.BIT.PMCSR5_22
#define PORTPMCSR5_23 PORT.PMCSR5.BIT.PMCSR5_23
#define PORTPMCSR5_24 PORT.PMCSR5.BIT.PMCSR5_24
#define PORTPMCSR5_25 PORT.PMCSR5.BIT.PMCSR5_25
#define PORTPMCSR5_26 PORT.PMCSR5.BIT.PMCSR5_26
#define PORTPMCSR5_27 PORT.PMCSR5.BIT.PMCSR5_27
#define PORTPMCSR5_28 PORT.PMCSR5.BIT.PMCSR5_28
#define PORTPMCSR5_29 PORT.PMCSR5.BIT.PMCSR5_29
#define PORTPMCSR5_30 PORT.PMCSR5.BIT.PMCSR5_30
#define PORTPMCSR5_31 PORT.PMCSR5.BIT.PMCSR5_31
#define PORTPFCAE5 PORT.PFCAE5.UINT16
#define PORTPFCAE5_0 PORT.PFCAE5.BIT.PFCAE5_0
#define PORTPFCAE5_1 PORT.PFCAE5.BIT.PFCAE5_1
#define PORTPFCAE5_2 PORT.PFCAE5.BIT.PFCAE5_2
#define PORTPFCAE5_3 PORT.PFCAE5.BIT.PFCAE5_3
#define PORTPFCAE5_4 PORT.PFCAE5.BIT.PFCAE5_4
#define PORTPFCAE5_5 PORT.PFCAE5.BIT.PFCAE5_5
#define PORTPFCAE5_6 PORT.PFCAE5.BIT.PFCAE5_6
#define PORTPFCAE5_7 PORT.PFCAE5.BIT.PFCAE5_7
#define PORTPFCAE5_8 PORT.PFCAE5.BIT.PFCAE5_8
#define PORTPFCAE5_9 PORT.PFCAE5.BIT.PFCAE5_9
#define PORTPFCAE5_10 PORT.PFCAE5.BIT.PFCAE5_10
#define PORTPFCAE5_13 PORT.PFCAE5.BIT.PFCAE5_13
#define PORTPFCAE5_14 PORT.PFCAE5.BIT.PFCAE5_14
#define PORTPFCAE5_15 PORT.PFCAE5.BIT.PFCAE5_15
#define PORTPINV5 PORT.PINV5.UINT32
#define PORTPINV5_0 PORT.PINV5.BIT.PINV5_0
#define PORTPINV5_1 PORT.PINV5.BIT.PINV5_1
#define PORTPINV5_2 PORT.PINV5.BIT.PINV5_2
#define PORTPINV5_3 PORT.PINV5.BIT.PINV5_3
#define PORTPINV5_4 PORT.PINV5.BIT.PINV5_4
#define PORTPINV5_5 PORT.PINV5.BIT.PINV5_5
#define PORTPINV5_6 PORT.PINV5.BIT.PINV5_6
#define PORTPINV5_7 PORT.PINV5.BIT.PINV5_7
#define PORTPINV5_8 PORT.PINV5.BIT.PINV5_8
#define PORTPINV5_9 PORT.PINV5.BIT.PINV5_9
#define PORTPINV5_10 PORT.PINV5.BIT.PINV5_10
#define PORTPINV5_11 PORT.PINV5.BIT.PINV5_11
#define PORTPINV5_12 PORT.PINV5.BIT.PINV5_12
#define PORTPINV5_13 PORT.PINV5.BIT.PINV5_13
#define PORTPINV5_14 PORT.PINV5.BIT.PINV5_14
#define PORTPINV5_15 PORT.PINV5.BIT.PINV5_15
#define PORTPCR0_0 PORT.PCR0_0.UINT32
#define PORTPFC PORT.PCR0_0.BIT.PFC
#define PORTPFCE PORT.PCR0_0.BIT.PFCE
#define PORTPFCAE PORT.PCR0_0.BIT.PFCAE
#define PORTPM PORT.PCR0_0.BIT.PM
#define PORTPIPC PORT.PCR0_0.BIT.PIPC
#define PORTPMC PORT.PCR0_0.BIT.PMC
#define PORTPPR PORT.PCR0_0.BIT.PPR
#define PORTP PORT.PCR0_0.BIT.P
#define PORTPIBC PORT.PCR0_0.BIT.PIBC
#define PORTPBDC PORT.PCR0_0.BIT.PBDC
#define PORTPD PORT.PCR0_0.BIT.PD
#define PORTPU PORT.PCR0_0.BIT.PU
#define PORTPDSC PORT.PCR0_0.BIT.PDSC
#define PORTPUCC PORT.PCR0_0.BIT.PUCC
#define PORTPODCE PORT.PCR0_0.BIT.PODCE
#define PORTPODC PORT.PCR0_0.BIT.PODC
#define PORTPINV PORT.PCR0_0.BIT.PINV
#define PORTPCR0_1 PORT.PCR0_1.UINT32
#define PORTPCR0_2 PORT.PCR0_2.UINT32
#define PORTPCR0_3 PORT.PCR0_3.UINT32
#define PORTPISA PORT.PCR0_3.BIT.PISA
#define PORTPCR0_4 PORT.PCR0_4.UINT32
#define PORTPCR0_5 PORT.PCR0_5.UINT32
#define PORTPCR0_6 PORT.PCR0_6.UINT32
#define PORTPCR0_7 PORT.PCR0_7.UINT32
#define PORTPCR0_8 PORT.PCR0_8.UINT32
#define PORTPCR0_9 PORT.PCR0_9.UINT32
#define PORTPCR0_10 PORT.PCR0_10.UINT32
#define PORTPCR0_11 PORT.PCR0_11.UINT32
#define PORTPCR0_12 PORT.PCR0_12.UINT32
#define PORTPCR0_13 PORT.PCR0_13.UINT32
#define PORTPCR0_14 PORT.PCR0_14.UINT32
#define PORTPCR1_0 PORT.PCR1_0.UINT32
#define PORTPCR1_1 PORT.PCR1_1.UINT32
#define PORTPCR1_2 PORT.PCR1_2.UINT32
#define PORTPCR1_3 PORT.PCR1_3.UINT32
#define PORTPCR1_4 PORT.PCR1_4.UINT32
#define PORTPCR2_0 PORT.PCR2_0.UINT32
#define PORTPCR2_1 PORT.PCR2_1.UINT32
#define PORTPCR2_2 PORT.PCR2_2.UINT32
#define PORTPCR2_3 PORT.PCR2_3.UINT32
#define PORTPCR2_4 PORT.PCR2_4.UINT32
#define PORTPCR2_5 PORT.PCR2_5.UINT32
#define PORTPCR2_6 PORT.PCR2_6.UINT32
#define PORTPCR2_7 PORT.PCR2_7.UINT32
#define PORTPCR2_8 PORT.PCR2_8.UINT32
#define PORTPCR2_9 PORT.PCR2_9.UINT32
#define PORTPCR2_10 PORT.PCR2_10.UINT32
#define PORTPCR2_11 PORT.PCR2_11.UINT32
#define PORTPCR2_12 PORT.PCR2_12.UINT32
#define PORTPCR2_13 PORT.PCR2_13.UINT32
#define PORTPCR2_14 PORT.PCR2_14.UINT32
#define PORTPCR2_15 PORT.PCR2_15.UINT32
#define PORTPCR3_0 PORT.PCR3_0.UINT32
#define PORTPCR3_1 PORT.PCR3_1.UINT32
#define PORTPCR3_2 PORT.PCR3_2.UINT32
#define PORTPCR3_3 PORT.PCR3_3.UINT32
#define PORTPCR3_4 PORT.PCR3_4.UINT32
#define PORTPCR3_5 PORT.PCR3_5.UINT32
#define PORTPCR3_6 PORT.PCR3_6.UINT32
#define PORTPCR3_7 PORT.PCR3_7.UINT32
#define PORTPCR3_8 PORT.PCR3_8.UINT32
#define PORTPCR3_9 PORT.PCR3_9.UINT32
#define PORTPCR3_10 PORT.PCR3_10.UINT32
#define PORTPCR3_11 PORT.PCR3_11.UINT32
#define PORTPCR3_12 PORT.PCR3_12.UINT32
#define PORTPCR3_13 PORT.PCR3_13.UINT32
#define PORTPCR3_14 PORT.PCR3_14.UINT32
#define PORTPCR4_0 PORT.PCR4_0.UINT32
#define PORTPCR4_1 PORT.PCR4_1.UINT32
#define PORTPCR4_2 PORT.PCR4_2.UINT32
#define PORTPCR4_3 PORT.PCR4_3.UINT32
#define PORTPCR4_4 PORT.PCR4_4.UINT32
#define PORTPCR4_5 PORT.PCR4_5.UINT32
#define PORTPCR4_6 PORT.PCR4_6.UINT32
#define PORTPCR4_7 PORT.PCR4_7.UINT32
#define PORTPCR4_8 PORT.PCR4_8.UINT32
#define PORTPCR4_9 PORT.PCR4_9.UINT32
#define PORTPCR4_10 PORT.PCR4_10.UINT32
#define PORTPCR4_11 PORT.PCR4_11.UINT32
#define PORTPCR4_12 PORT.PCR4_12.UINT32
#define PORTPCR4_13 PORT.PCR4_13.UINT32
#define PORTPCR4_14 PORT.PCR4_14.UINT32
#define PORTPCR5_0 PORT.PCR5_0.UINT32
#define PORTPCR5_1 PORT.PCR5_1.UINT32
#define PORTPCR5_2 PORT.PCR5_2.UINT32
#define PORTPCR5_3 PORT.PCR5_3.UINT32
#define PORTPCR5_4 PORT.PCR5_4.UINT32
#define PORTPCR5_5 PORT.PCR5_5.UINT32
#define PORTPCR5_6 PORT.PCR5_6.UINT32
#define PORTPCR5_7 PORT.PCR5_7.UINT32
#define PORTPCR5_8 PORT.PCR5_8.UINT32
#define PORTPCR5_9 PORT.PCR5_9.UINT32
#define PORTPCR5_10 PORT.PCR5_10.UINT32
#define PORTPCR5_11 PORT.PCR5_11.UINT32
#define PORTPCR5_12 PORT.PCR5_12.UINT32
#define PORTPCR5_13 PORT.PCR5_13.UINT32
#define PORTPCR5_14 PORT.PCR5_14.UINT32
#define PORTPCR5_15 PORT.PCR5_15.UINT32
#define PORTPIBC0 PORT.PIBC0.UINT16
#define PORTPIBC0_0 PORT.PIBC0.BIT.PIBC0_0
#define PORTPIBC0_1 PORT.PIBC0.BIT.PIBC0_1
#define PORTPIBC0_2 PORT.PIBC0.BIT.PIBC0_2
#define PORTPIBC0_3 PORT.PIBC0.BIT.PIBC0_3
#define PORTPIBC0_4 PORT.PIBC0.BIT.PIBC0_4
#define PORTPIBC0_5 PORT.PIBC0.BIT.PIBC0_5
#define PORTPIBC0_6 PORT.PIBC0.BIT.PIBC0_6
#define PORTPIBC0_7 PORT.PIBC0.BIT.PIBC0_7
#define PORTPIBC0_8 PORT.PIBC0.BIT.PIBC0_8
#define PORTPIBC0_9 PORT.PIBC0.BIT.PIBC0_9
#define PORTPIBC0_10 PORT.PIBC0.BIT.PIBC0_10
#define PORTPIBC0_11 PORT.PIBC0.BIT.PIBC0_11
#define PORTPIBC0_12 PORT.PIBC0.BIT.PIBC0_12
#define PORTPIBC0_13 PORT.PIBC0.BIT.PIBC0_13
#define PORTPIBC0_14 PORT.PIBC0.BIT.PIBC0_14
#define PORTPBDC0 PORT.PBDC0.UINT16
#define PORTPBDC0_0 PORT.PBDC0.BIT.PBDC0_0
#define PORTPBDC0_1 PORT.PBDC0.BIT.PBDC0_1
#define PORTPBDC0_2 PORT.PBDC0.BIT.PBDC0_2
#define PORTPBDC0_3 PORT.PBDC0.BIT.PBDC0_3
#define PORTPBDC0_4 PORT.PBDC0.BIT.PBDC0_4
#define PORTPBDC0_5 PORT.PBDC0.BIT.PBDC0_5
#define PORTPBDC0_6 PORT.PBDC0.BIT.PBDC0_6
#define PORTPBDC0_7 PORT.PBDC0.BIT.PBDC0_7
#define PORTPBDC0_8 PORT.PBDC0.BIT.PBDC0_8
#define PORTPBDC0_9 PORT.PBDC0.BIT.PBDC0_9
#define PORTPBDC0_10 PORT.PBDC0.BIT.PBDC0_10
#define PORTPBDC0_11 PORT.PBDC0.BIT.PBDC0_11
#define PORTPBDC0_12 PORT.PBDC0.BIT.PBDC0_12
#define PORTPBDC0_13 PORT.PBDC0.BIT.PBDC0_13
#define PORTPBDC0_14 PORT.PBDC0.BIT.PBDC0_14
#define PORTPIPC0 PORT.PIPC0.UINT16
#define PORTPIPC0_0 PORT.PIPC0.BIT.PIPC0_0
#define PORTPIPC0_1 PORT.PIPC0.BIT.PIPC0_1
#define PORTPIPC0_2 PORT.PIPC0.BIT.PIPC0_2
#define PORTPIPC0_3 PORT.PIPC0.BIT.PIPC0_3
#define PORTPIPC0_4 PORT.PIPC0.BIT.PIPC0_4
#define PORTPIPC0_5 PORT.PIPC0.BIT.PIPC0_5
#define PORTPIPC0_6 PORT.PIPC0.BIT.PIPC0_6
#define PORTPIPC0_7 PORT.PIPC0.BIT.PIPC0_7
#define PORTPIPC0_8 PORT.PIPC0.BIT.PIPC0_8
#define PORTPIPC0_9 PORT.PIPC0.BIT.PIPC0_9
#define PORTPIPC0_10 PORT.PIPC0.BIT.PIPC0_10
#define PORTPIPC0_11 PORT.PIPC0.BIT.PIPC0_11
#define PORTPIPC0_12 PORT.PIPC0.BIT.PIPC0_12
#define PORTPIPC0_13 PORT.PIPC0.BIT.PIPC0_13
#define PORTPIPC0_14 PORT.PIPC0.BIT.PIPC0_14
#define PORTPU0 PORT.PU0.UINT16
#define PORTPU0_0 PORT.PU0.BIT.PU0_0
#define PORTPU0_1 PORT.PU0.BIT.PU0_1
#define PORTPU0_2 PORT.PU0.BIT.PU0_2
#define PORTPU0_3 PORT.PU0.BIT.PU0_3
#define PORTPU0_4 PORT.PU0.BIT.PU0_4
#define PORTPU0_5 PORT.PU0.BIT.PU0_5
#define PORTPU0_6 PORT.PU0.BIT.PU0_6
#define PORTPU0_7 PORT.PU0.BIT.PU0_7
#define PORTPU0_8 PORT.PU0.BIT.PU0_8
#define PORTPU0_9 PORT.PU0.BIT.PU0_9
#define PORTPU0_10 PORT.PU0.BIT.PU0_10
#define PORTPU0_11 PORT.PU0.BIT.PU0_11
#define PORTPU0_12 PORT.PU0.BIT.PU0_12
#define PORTPU0_13 PORT.PU0.BIT.PU0_13
#define PORTPU0_14 PORT.PU0.BIT.PU0_14
#define PORTPD0 PORT.PD0.UINT16
#define PORTPD0_0 PORT.PD0.BIT.PD0_0
#define PORTPD0_1 PORT.PD0.BIT.PD0_1
#define PORTPD0_2 PORT.PD0.BIT.PD0_2
#define PORTPD0_3 PORT.PD0.BIT.PD0_3
#define PORTPD0_4 PORT.PD0.BIT.PD0_4
#define PORTPD0_5 PORT.PD0.BIT.PD0_5
#define PORTPD0_6 PORT.PD0.BIT.PD0_6
#define PORTPD0_7 PORT.PD0.BIT.PD0_7
#define PORTPD0_8 PORT.PD0.BIT.PD0_8
#define PORTPD0_9 PORT.PD0.BIT.PD0_9
#define PORTPD0_10 PORT.PD0.BIT.PD0_10
#define PORTPD0_11 PORT.PD0.BIT.PD0_11
#define PORTPD0_12 PORT.PD0.BIT.PD0_12
#define PORTPD0_13 PORT.PD0.BIT.PD0_13
#define PORTPD0_14 PORT.PD0.BIT.PD0_14
#define PORTPODC0 PORT.PODC0.UINT32
#define PORTPODC0_0 PORT.PODC0.BIT.PODC0_0
#define PORTPODC0_1 PORT.PODC0.BIT.PODC0_1
#define PORTPODC0_2 PORT.PODC0.BIT.PODC0_2
#define PORTPODC0_3 PORT.PODC0.BIT.PODC0_3
#define PORTPODC0_4 PORT.PODC0.BIT.PODC0_4
#define PORTPODC0_5 PORT.PODC0.BIT.PODC0_5
#define PORTPODC0_6 PORT.PODC0.BIT.PODC0_6
#define PORTPODC0_7 PORT.PODC0.BIT.PODC0_7
#define PORTPODC0_8 PORT.PODC0.BIT.PODC0_8
#define PORTPODC0_9 PORT.PODC0.BIT.PODC0_9
#define PORTPODC0_10 PORT.PODC0.BIT.PODC0_10
#define PORTPODC0_11 PORT.PODC0.BIT.PODC0_11
#define PORTPODC0_12 PORT.PODC0.BIT.PODC0_12
#define PORTPODC0_13 PORT.PODC0.BIT.PODC0_13
#define PORTPODC0_14 PORT.PODC0.BIT.PODC0_14
#define PORTPDSC0 PORT.PDSC0.UINT32
#define PORTPDSC0_0 PORT.PDSC0.BIT.PDSC0_0
#define PORTPDSC0_1 PORT.PDSC0.BIT.PDSC0_1
#define PORTPDSC0_2 PORT.PDSC0.BIT.PDSC0_2
#define PORTPDSC0_3 PORT.PDSC0.BIT.PDSC0_3
#define PORTPDSC0_4 PORT.PDSC0.BIT.PDSC0_4
#define PORTPDSC0_5 PORT.PDSC0.BIT.PDSC0_5
#define PORTPDSC0_6 PORT.PDSC0.BIT.PDSC0_6
#define PORTPDSC0_7 PORT.PDSC0.BIT.PDSC0_7
#define PORTPDSC0_8 PORT.PDSC0.BIT.PDSC0_8
#define PORTPDSC0_9 PORT.PDSC0.BIT.PDSC0_9
#define PORTPDSC0_10 PORT.PDSC0.BIT.PDSC0_10
#define PORTPDSC0_11 PORT.PDSC0.BIT.PDSC0_11
#define PORTPDSC0_12 PORT.PDSC0.BIT.PDSC0_12
#define PORTPDSC0_13 PORT.PDSC0.BIT.PDSC0_13
#define PORTPDSC0_14 PORT.PDSC0.BIT.PDSC0_14
#define PORTPUCC0 PORT.PUCC0.UINT32
#define PORTPUCC0_0 PORT.PUCC0.BIT.PUCC0_0
#define PORTPUCC0_1 PORT.PUCC0.BIT.PUCC0_1
#define PORTPUCC0_2 PORT.PUCC0.BIT.PUCC0_2
#define PORTPUCC0_3 PORT.PUCC0.BIT.PUCC0_3
#define PORTPUCC0_4 PORT.PUCC0.BIT.PUCC0_4
#define PORTPUCC0_5 PORT.PUCC0.BIT.PUCC0_5
#define PORTPUCC0_6 PORT.PUCC0.BIT.PUCC0_6
#define PORTPUCC0_7 PORT.PUCC0.BIT.PUCC0_7
#define PORTPUCC0_8 PORT.PUCC0.BIT.PUCC0_8
#define PORTPUCC0_9 PORT.PUCC0.BIT.PUCC0_9
#define PORTPUCC0_10 PORT.PUCC0.BIT.PUCC0_10
#define PORTPUCC0_11 PORT.PUCC0.BIT.PUCC0_11
#define PORTPUCC0_12 PORT.PUCC0.BIT.PUCC0_12
#define PORTPUCC0_13 PORT.PUCC0.BIT.PUCC0_13
#define PORTPUCC0_14 PORT.PUCC0.BIT.PUCC0_14
#define PORTPISA0 PORT.PISA0.UINT16
#define PORTPISA0_3 PORT.PISA0.BIT.PISA0_3
#define PORTPISA0_4 PORT.PISA0.BIT.PISA0_4
#define PORTPISA0_5 PORT.PISA0.BIT.PISA0_5
#define PORTPISA0_6 PORT.PISA0.BIT.PISA0_6
#define PORTPISA0_7 PORT.PISA0.BIT.PISA0_7
#define PORTPISA0_8 PORT.PISA0.BIT.PISA0_8
#define PORTPISA0_9 PORT.PISA0.BIT.PISA0_9
#define PORTPISA0_13 PORT.PISA0.BIT.PISA0_13
#define PORTPPCMD0 PORT.PPCMD0.UINT32
#define PORTPCMD0 PORT.PPCMD0.BIT.PCMD0
#define PORTPPROTS0 PORT.PPROTS0.UINT32
#define PORTPPROTS0_0 PORT.PPROTS0.BIT.PPROTS0_0
#define PORTPODCE0 PORT.PODCE0.UINT32
#define PORTPODCE0_0 PORT.PODCE0.BIT.PODCE0_0
#define PORTPODCE0_1 PORT.PODCE0.BIT.PODCE0_1
#define PORTPODCE0_2 PORT.PODCE0.BIT.PODCE0_2
#define PORTPODCE0_3 PORT.PODCE0.BIT.PODCE0_3
#define PORTPODCE0_4 PORT.PODCE0.BIT.PODCE0_4
#define PORTPODCE0_5 PORT.PODCE0.BIT.PODCE0_5
#define PORTPODCE0_6 PORT.PODCE0.BIT.PODCE0_6
#define PORTPODCE0_7 PORT.PODCE0.BIT.PODCE0_7
#define PORTPODCE0_8 PORT.PODCE0.BIT.PODCE0_8
#define PORTPODCE0_9 PORT.PODCE0.BIT.PODCE0_9
#define PORTPODCE0_10 PORT.PODCE0.BIT.PODCE0_10
#define PORTPODCE0_11 PORT.PODCE0.BIT.PODCE0_11
#define PORTPODCE0_12 PORT.PODCE0.BIT.PODCE0_12
#define PORTPODCE0_13 PORT.PODCE0.BIT.PODCE0_13
#define PORTPODCE0_14 PORT.PODCE0.BIT.PODCE0_14
#define PORTPIBC1 PORT.PIBC1.UINT16
#define PORTPIBC1_0 PORT.PIBC1.BIT.PIBC1_0
#define PORTPIBC1_1 PORT.PIBC1.BIT.PIBC1_1
#define PORTPIBC1_2 PORT.PIBC1.BIT.PIBC1_2
#define PORTPIBC1_3 PORT.PIBC1.BIT.PIBC1_3
#define PORTPIBC1_4 PORT.PIBC1.BIT.PIBC1_4
#define PORTPBDC1 PORT.PBDC1.UINT16
#define PORTPBDC1_0 PORT.PBDC1.BIT.PBDC1_0
#define PORTPBDC1_1 PORT.PBDC1.BIT.PBDC1_1
#define PORTPBDC1_2 PORT.PBDC1.BIT.PBDC1_2
#define PORTPBDC1_3 PORT.PBDC1.BIT.PBDC1_3
#define PORTPBDC1_4 PORT.PBDC1.BIT.PBDC1_4
#define PORTPIPC1 PORT.PIPC1.UINT16
#define PORTPIPC1_3 PORT.PIPC1.BIT.PIPC1_3
#define PORTPIPC1_4 PORT.PIPC1.BIT.PIPC1_4
#define PORTPU1 PORT.PU1.UINT16
#define PORTPU1_0 PORT.PU1.BIT.PU1_0
#define PORTPU1_1 PORT.PU1.BIT.PU1_1
#define PORTPU1_2 PORT.PU1.BIT.PU1_2
#define PORTPU1_3 PORT.PU1.BIT.PU1_3
#define PORTPU1_4 PORT.PU1.BIT.PU1_4
#define PORTPD1 PORT.PD1.UINT16
#define PORTPD1_0 PORT.PD1.BIT.PD1_0
#define PORTPD1_1 PORT.PD1.BIT.PD1_1
#define PORTPD1_2 PORT.PD1.BIT.PD1_2
#define PORTPD1_3 PORT.PD1.BIT.PD1_3
#define PORTPD1_4 PORT.PD1.BIT.PD1_4
#define PORTPODC1 PORT.PODC1.UINT32
#define PORTPODC1_0 PORT.PODC1.BIT.PODC1_0
#define PORTPODC1_1 PORT.PODC1.BIT.PODC1_1
#define PORTPODC1_2 PORT.PODC1.BIT.PODC1_2
#define PORTPODC1_3 PORT.PODC1.BIT.PODC1_3
#define PORTPODC1_4 PORT.PODC1.BIT.PODC1_4
#define PORTPDSC1 PORT.PDSC1.UINT32
#define PORTPDSC1_0 PORT.PDSC1.BIT.PDSC1_0
#define PORTPDSC1_1 PORT.PDSC1.BIT.PDSC1_1
#define PORTPDSC1_2 PORT.PDSC1.BIT.PDSC1_2
#define PORTPDSC1_3 PORT.PDSC1.BIT.PDSC1_3
#define PORTPDSC1_4 PORT.PDSC1.BIT.PDSC1_4
#define PORTPUCC1 PORT.PUCC1.UINT32
#define PORTPUCC1_0 PORT.PUCC1.BIT.PUCC1_0
#define PORTPUCC1_1 PORT.PUCC1.BIT.PUCC1_1
#define PORTPUCC1_2 PORT.PUCC1.BIT.PUCC1_2
#define PORTPUCC1_3 PORT.PUCC1.BIT.PUCC1_3
#define PORTPUCC1_4 PORT.PUCC1.BIT.PUCC1_4
#define PORTPISA1 PORT.PISA1.UINT16
#define PORTPISA1_1 PORT.PISA1.BIT.PISA1_1
#define PORTPISA1_2 PORT.PISA1.BIT.PISA1_2
#define PORTPISA1_3 PORT.PISA1.BIT.PISA1_3
#define PORTPISA1_4 PORT.PISA1.BIT.PISA1_4
#define PORTPPCMD1 PORT.PPCMD1.UINT32
#define PORTPCMD1 PORT.PPCMD1.BIT.PCMD1
#define PORTPPROTS1 PORT.PPROTS1.UINT32
#define PORTPPROTS1_0 PORT.PPROTS1.BIT.PPROTS1_0
#define PORTPODCE1 PORT.PODCE1.UINT32
#define PORTPODCE1_0 PORT.PODCE1.BIT.PODCE1_0
#define PORTPODCE1_1 PORT.PODCE1.BIT.PODCE1_1
#define PORTPODCE1_2 PORT.PODCE1.BIT.PODCE1_2
#define PORTPODCE1_3 PORT.PODCE1.BIT.PODCE1_3
#define PORTPODCE1_4 PORT.PODCE1.BIT.PODCE1_4
#define PORTPIBC2 PORT.PIBC2.UINT16
#define PORTPIBC2_0 PORT.PIBC2.BIT.PIBC2_0
#define PORTPIBC2_1 PORT.PIBC2.BIT.PIBC2_1
#define PORTPIBC2_2 PORT.PIBC2.BIT.PIBC2_2
#define PORTPIBC2_3 PORT.PIBC2.BIT.PIBC2_3
#define PORTPIBC2_4 PORT.PIBC2.BIT.PIBC2_4
#define PORTPIBC2_5 PORT.PIBC2.BIT.PIBC2_5
#define PORTPIBC2_6 PORT.PIBC2.BIT.PIBC2_6
#define PORTPIBC2_7 PORT.PIBC2.BIT.PIBC2_7
#define PORTPIBC2_8 PORT.PIBC2.BIT.PIBC2_8
#define PORTPIBC2_9 PORT.PIBC2.BIT.PIBC2_9
#define PORTPIBC2_10 PORT.PIBC2.BIT.PIBC2_10
#define PORTPIBC2_11 PORT.PIBC2.BIT.PIBC2_11
#define PORTPIBC2_12 PORT.PIBC2.BIT.PIBC2_12
#define PORTPIBC2_13 PORT.PIBC2.BIT.PIBC2_13
#define PORTPIBC2_14 PORT.PIBC2.BIT.PIBC2_14
#define PORTPIBC2_15 PORT.PIBC2.BIT.PIBC2_15
#define PORTPBDC2 PORT.PBDC2.UINT16
#define PORTPBDC2_0 PORT.PBDC2.BIT.PBDC2_0
#define PORTPBDC2_1 PORT.PBDC2.BIT.PBDC2_1
#define PORTPBDC2_2 PORT.PBDC2.BIT.PBDC2_2
#define PORTPBDC2_3 PORT.PBDC2.BIT.PBDC2_3
#define PORTPBDC2_4 PORT.PBDC2.BIT.PBDC2_4
#define PORTPBDC2_5 PORT.PBDC2.BIT.PBDC2_5
#define PORTPBDC2_6 PORT.PBDC2.BIT.PBDC2_6
#define PORTPBDC2_7 PORT.PBDC2.BIT.PBDC2_7
#define PORTPBDC2_8 PORT.PBDC2.BIT.PBDC2_8
#define PORTPBDC2_9 PORT.PBDC2.BIT.PBDC2_9
#define PORTPBDC2_10 PORT.PBDC2.BIT.PBDC2_10
#define PORTPBDC2_11 PORT.PBDC2.BIT.PBDC2_11
#define PORTPBDC2_12 PORT.PBDC2.BIT.PBDC2_12
#define PORTPBDC2_13 PORT.PBDC2.BIT.PBDC2_13
#define PORTPBDC2_14 PORT.PBDC2.BIT.PBDC2_14
#define PORTPBDC2_15 PORT.PBDC2.BIT.PBDC2_15
#define PORTPIPC2 PORT.PIPC2.UINT16
#define PORTPIPC2_1 PORT.PIPC2.BIT.PIPC2_1
#define PORTPIPC2_2 PORT.PIPC2.BIT.PIPC2_2
#define PORTPIPC2_3 PORT.PIPC2.BIT.PIPC2_3
#define PORTPIPC2_5 PORT.PIPC2.BIT.PIPC2_5
#define PORTPIPC2_6 PORT.PIPC2.BIT.PIPC2_6
#define PORTPIPC2_7 PORT.PIPC2.BIT.PIPC2_7
#define PORTPIPC2_8 PORT.PIPC2.BIT.PIPC2_8
#define PORTPIPC2_9 PORT.PIPC2.BIT.PIPC2_9
#define PORTPIPC2_12 PORT.PIPC2.BIT.PIPC2_12
#define PORTPU2 PORT.PU2.UINT16
#define PORTPU2_0 PORT.PU2.BIT.PU2_0
#define PORTPU2_1 PORT.PU2.BIT.PU2_1
#define PORTPU2_2 PORT.PU2.BIT.PU2_2
#define PORTPU2_3 PORT.PU2.BIT.PU2_3
#define PORTPU2_4 PORT.PU2.BIT.PU2_4
#define PORTPU2_5 PORT.PU2.BIT.PU2_5
#define PORTPU2_6 PORT.PU2.BIT.PU2_6
#define PORTPU2_7 PORT.PU2.BIT.PU2_7
#define PORTPU2_8 PORT.PU2.BIT.PU2_8
#define PORTPU2_9 PORT.PU2.BIT.PU2_9
#define PORTPU2_10 PORT.PU2.BIT.PU2_10
#define PORTPU2_11 PORT.PU2.BIT.PU2_11
#define PORTPU2_12 PORT.PU2.BIT.PU2_12
#define PORTPU2_13 PORT.PU2.BIT.PU2_13
#define PORTPU2_14 PORT.PU2.BIT.PU2_14
#define PORTPU2_15 PORT.PU2.BIT.PU2_15
#define PORTPD2 PORT.PD2.UINT16
#define PORTPD2_0 PORT.PD2.BIT.PD2_0
#define PORTPD2_1 PORT.PD2.BIT.PD2_1
#define PORTPD2_2 PORT.PD2.BIT.PD2_2
#define PORTPD2_3 PORT.PD2.BIT.PD2_3
#define PORTPD2_4 PORT.PD2.BIT.PD2_4
#define PORTPD2_5 PORT.PD2.BIT.PD2_5
#define PORTPD2_6 PORT.PD2.BIT.PD2_6
#define PORTPD2_7 PORT.PD2.BIT.PD2_7
#define PORTPD2_8 PORT.PD2.BIT.PD2_8
#define PORTPD2_9 PORT.PD2.BIT.PD2_9
#define PORTPD2_10 PORT.PD2.BIT.PD2_10
#define PORTPD2_11 PORT.PD2.BIT.PD2_11
#define PORTPD2_12 PORT.PD2.BIT.PD2_12
#define PORTPD2_13 PORT.PD2.BIT.PD2_13
#define PORTPD2_14 PORT.PD2.BIT.PD2_14
#define PORTPD2_15 PORT.PD2.BIT.PD2_15
#define PORTPODC2 PORT.PODC2.UINT32
#define PORTPODC2_0 PORT.PODC2.BIT.PODC2_0
#define PORTPODC2_1 PORT.PODC2.BIT.PODC2_1
#define PORTPODC2_2 PORT.PODC2.BIT.PODC2_2
#define PORTPODC2_3 PORT.PODC2.BIT.PODC2_3
#define PORTPODC2_4 PORT.PODC2.BIT.PODC2_4
#define PORTPODC2_5 PORT.PODC2.BIT.PODC2_5
#define PORTPODC2_6 PORT.PODC2.BIT.PODC2_6
#define PORTPODC2_7 PORT.PODC2.BIT.PODC2_7
#define PORTPODC2_8 PORT.PODC2.BIT.PODC2_8
#define PORTPODC2_9 PORT.PODC2.BIT.PODC2_9
#define PORTPODC2_10 PORT.PODC2.BIT.PODC2_10
#define PORTPODC2_11 PORT.PODC2.BIT.PODC2_11
#define PORTPODC2_12 PORT.PODC2.BIT.PODC2_12
#define PORTPODC2_13 PORT.PODC2.BIT.PODC2_13
#define PORTPODC2_14 PORT.PODC2.BIT.PODC2_14
#define PORTPODC2_15 PORT.PODC2.BIT.PODC2_15
#define PORTPDSC2 PORT.PDSC2.UINT32
#define PORTPDSC2_0 PORT.PDSC2.BIT.PDSC2_0
#define PORTPDSC2_1 PORT.PDSC2.BIT.PDSC2_1
#define PORTPDSC2_2 PORT.PDSC2.BIT.PDSC2_2
#define PORTPDSC2_3 PORT.PDSC2.BIT.PDSC2_3
#define PORTPDSC2_4 PORT.PDSC2.BIT.PDSC2_4
#define PORTPDSC2_5 PORT.PDSC2.BIT.PDSC2_5
#define PORTPDSC2_6 PORT.PDSC2.BIT.PDSC2_6
#define PORTPDSC2_7 PORT.PDSC2.BIT.PDSC2_7
#define PORTPDSC2_8 PORT.PDSC2.BIT.PDSC2_8
#define PORTPDSC2_9 PORT.PDSC2.BIT.PDSC2_9
#define PORTPDSC2_10 PORT.PDSC2.BIT.PDSC2_10
#define PORTPDSC2_11 PORT.PDSC2.BIT.PDSC2_11
#define PORTPDSC2_12 PORT.PDSC2.BIT.PDSC2_12
#define PORTPDSC2_13 PORT.PDSC2.BIT.PDSC2_13
#define PORTPDSC2_14 PORT.PDSC2.BIT.PDSC2_14
#define PORTPDSC2_15 PORT.PDSC2.BIT.PDSC2_15
#define PORTPUCC2 PORT.PUCC2.UINT32
#define PORTPUCC2_0 PORT.PUCC2.BIT.PUCC2_0
#define PORTPUCC2_1 PORT.PUCC2.BIT.PUCC2_1
#define PORTPUCC2_2 PORT.PUCC2.BIT.PUCC2_2
#define PORTPUCC2_3 PORT.PUCC2.BIT.PUCC2_3
#define PORTPUCC2_4 PORT.PUCC2.BIT.PUCC2_4
#define PORTPUCC2_5 PORT.PUCC2.BIT.PUCC2_5
#define PORTPUCC2_6 PORT.PUCC2.BIT.PUCC2_6
#define PORTPUCC2_7 PORT.PUCC2.BIT.PUCC2_7
#define PORTPUCC2_8 PORT.PUCC2.BIT.PUCC2_8
#define PORTPUCC2_9 PORT.PUCC2.BIT.PUCC2_9
#define PORTPUCC2_10 PORT.PUCC2.BIT.PUCC2_10
#define PORTPUCC2_11 PORT.PUCC2.BIT.PUCC2_11
#define PORTPUCC2_12 PORT.PUCC2.BIT.PUCC2_12
#define PORTPUCC2_13 PORT.PUCC2.BIT.PUCC2_13
#define PORTPUCC2_14 PORT.PUCC2.BIT.PUCC2_14
#define PORTPUCC2_15 PORT.PUCC2.BIT.PUCC2_15
#define PORTPISA2 PORT.PISA2.UINT16
#define PORTPISA2_0 PORT.PISA2.BIT.PISA2_0
#define PORTPISA2_1 PORT.PISA2.BIT.PISA2_1
#define PORTPISA2_2 PORT.PISA2.BIT.PISA2_2
#define PORTPISA2_5 PORT.PISA2.BIT.PISA2_5
#define PORTPISA2_7 PORT.PISA2.BIT.PISA2_7
#define PORTPISA2_12 PORT.PISA2.BIT.PISA2_12
#define PORTPPCMD2 PORT.PPCMD2.UINT32
#define PORTPCMD2 PORT.PPCMD2.BIT.PCMD2
#define PORTPPROTS2 PORT.PPROTS2.UINT32
#define PORTPPROTS2_0 PORT.PPROTS2.BIT.PPROTS2_0
#define PORTPODCE2 PORT.PODCE2.UINT32
#define PORTPODCE2_0 PORT.PODCE2.BIT.PODCE2_0
#define PORTPODCE2_1 PORT.PODCE2.BIT.PODCE2_1
#define PORTPODCE2_2 PORT.PODCE2.BIT.PODCE2_2
#define PORTPODCE2_3 PORT.PODCE2.BIT.PODCE2_3
#define PORTPODCE2_4 PORT.PODCE2.BIT.PODCE2_4
#define PORTPODCE2_5 PORT.PODCE2.BIT.PODCE2_5
#define PORTPODCE2_6 PORT.PODCE2.BIT.PODCE2_6
#define PORTPODCE2_7 PORT.PODCE2.BIT.PODCE2_7
#define PORTPODCE2_8 PORT.PODCE2.BIT.PODCE2_8
#define PORTPODCE2_9 PORT.PODCE2.BIT.PODCE2_9
#define PORTPODCE2_10 PORT.PODCE2.BIT.PODCE2_10
#define PORTPODCE2_11 PORT.PODCE2.BIT.PODCE2_11
#define PORTPODCE2_12 PORT.PODCE2.BIT.PODCE2_12
#define PORTPODCE2_13 PORT.PODCE2.BIT.PODCE2_13
#define PORTPODCE2_14 PORT.PODCE2.BIT.PODCE2_14
#define PORTPODCE2_15 PORT.PODCE2.BIT.PODCE2_15
#define PORTPIBC3 PORT.PIBC3.UINT16
#define PORTPIBC3_0 PORT.PIBC3.BIT.PIBC3_0
#define PORTPIBC3_1 PORT.PIBC3.BIT.PIBC3_1
#define PORTPIBC3_2 PORT.PIBC3.BIT.PIBC3_2
#define PORTPIBC3_3 PORT.PIBC3.BIT.PIBC3_3
#define PORTPIBC3_4 PORT.PIBC3.BIT.PIBC3_4
#define PORTPIBC3_5 PORT.PIBC3.BIT.PIBC3_5
#define PORTPIBC3_6 PORT.PIBC3.BIT.PIBC3_6
#define PORTPIBC3_7 PORT.PIBC3.BIT.PIBC3_7
#define PORTPIBC3_8 PORT.PIBC3.BIT.PIBC3_8
#define PORTPIBC3_9 PORT.PIBC3.BIT.PIBC3_9
#define PORTPIBC3_10 PORT.PIBC3.BIT.PIBC3_10
#define PORTPIBC3_11 PORT.PIBC3.BIT.PIBC3_11
#define PORTPIBC3_12 PORT.PIBC3.BIT.PIBC3_12
#define PORTPIBC3_13 PORT.PIBC3.BIT.PIBC3_13
#define PORTPIBC3_14 PORT.PIBC3.BIT.PIBC3_14
#define PORTPBDC3 PORT.PBDC3.UINT16
#define PORTPBDC3_0 PORT.PBDC3.BIT.PBDC3_0
#define PORTPBDC3_1 PORT.PBDC3.BIT.PBDC3_1
#define PORTPBDC3_2 PORT.PBDC3.BIT.PBDC3_2
#define PORTPBDC3_3 PORT.PBDC3.BIT.PBDC3_3
#define PORTPBDC3_4 PORT.PBDC3.BIT.PBDC3_4
#define PORTPBDC3_5 PORT.PBDC3.BIT.PBDC3_5
#define PORTPBDC3_6 PORT.PBDC3.BIT.PBDC3_6
#define PORTPBDC3_7 PORT.PBDC3.BIT.PBDC3_7
#define PORTPBDC3_8 PORT.PBDC3.BIT.PBDC3_8
#define PORTPBDC3_9 PORT.PBDC3.BIT.PBDC3_9
#define PORTPBDC3_10 PORT.PBDC3.BIT.PBDC3_10
#define PORTPBDC3_11 PORT.PBDC3.BIT.PBDC3_11
#define PORTPBDC3_12 PORT.PBDC3.BIT.PBDC3_12
#define PORTPBDC3_13 PORT.PBDC3.BIT.PBDC3_13
#define PORTPBDC3_14 PORT.PBDC3.BIT.PBDC3_14
#define PORTPIPC3 PORT.PIPC3.UINT16
#define PORTPIPC3_0 PORT.PIPC3.BIT.PIPC3_0
#define PORTPIPC3_1 PORT.PIPC3.BIT.PIPC3_1
#define PORTPIPC3_2 PORT.PIPC3.BIT.PIPC3_2
#define PORTPIPC3_7 PORT.PIPC3.BIT.PIPC3_7
#define PORTPIPC3_8 PORT.PIPC3.BIT.PIPC3_8
#define PORTPIPC3_9 PORT.PIPC3.BIT.PIPC3_9
#define PORTPIPC3_10 PORT.PIPC3.BIT.PIPC3_10
#define PORTPIPC3_11 PORT.PIPC3.BIT.PIPC3_11
#define PORTPIPC3_12 PORT.PIPC3.BIT.PIPC3_12
#define PORTPIPC3_13 PORT.PIPC3.BIT.PIPC3_13
#define PORTPIPC3_14 PORT.PIPC3.BIT.PIPC3_14
#define PORTPU3 PORT.PU3.UINT16
#define PORTPU3_0 PORT.PU3.BIT.PU3_0
#define PORTPU3_1 PORT.PU3.BIT.PU3_1
#define PORTPU3_2 PORT.PU3.BIT.PU3_2
#define PORTPU3_3 PORT.PU3.BIT.PU3_3
#define PORTPU3_4 PORT.PU3.BIT.PU3_4
#define PORTPU3_5 PORT.PU3.BIT.PU3_5
#define PORTPU3_6 PORT.PU3.BIT.PU3_6
#define PORTPU3_7 PORT.PU3.BIT.PU3_7
#define PORTPU3_8 PORT.PU3.BIT.PU3_8
#define PORTPU3_9 PORT.PU3.BIT.PU3_9
#define PORTPU3_10 PORT.PU3.BIT.PU3_10
#define PORTPU3_11 PORT.PU3.BIT.PU3_11
#define PORTPU3_12 PORT.PU3.BIT.PU3_12
#define PORTPU3_13 PORT.PU3.BIT.PU3_13
#define PORTPU3_14 PORT.PU3.BIT.PU3_14
#define PORTPD3 PORT.PD3.UINT16
#define PORTPD3_0 PORT.PD3.BIT.PD3_0
#define PORTPD3_1 PORT.PD3.BIT.PD3_1
#define PORTPD3_2 PORT.PD3.BIT.PD3_2
#define PORTPD3_3 PORT.PD3.BIT.PD3_3
#define PORTPD3_4 PORT.PD3.BIT.PD3_4
#define PORTPD3_5 PORT.PD3.BIT.PD3_5
#define PORTPD3_6 PORT.PD3.BIT.PD3_6
#define PORTPD3_7 PORT.PD3.BIT.PD3_7
#define PORTPD3_8 PORT.PD3.BIT.PD3_8
#define PORTPD3_9 PORT.PD3.BIT.PD3_9
#define PORTPD3_10 PORT.PD3.BIT.PD3_10
#define PORTPD3_11 PORT.PD3.BIT.PD3_11
#define PORTPD3_12 PORT.PD3.BIT.PD3_12
#define PORTPD3_13 PORT.PD3.BIT.PD3_13
#define PORTPD3_14 PORT.PD3.BIT.PD3_14
#define PORTPODC3 PORT.PODC3.UINT32
#define PORTPODC3_0 PORT.PODC3.BIT.PODC3_0
#define PORTPODC3_1 PORT.PODC3.BIT.PODC3_1
#define PORTPODC3_2 PORT.PODC3.BIT.PODC3_2
#define PORTPODC3_3 PORT.PODC3.BIT.PODC3_3
#define PORTPODC3_4 PORT.PODC3.BIT.PODC3_4
#define PORTPODC3_5 PORT.PODC3.BIT.PODC3_5
#define PORTPODC3_6 PORT.PODC3.BIT.PODC3_6
#define PORTPODC3_7 PORT.PODC3.BIT.PODC3_7
#define PORTPODC3_8 PORT.PODC3.BIT.PODC3_8
#define PORTPODC3_9 PORT.PODC3.BIT.PODC3_9
#define PORTPODC3_10 PORT.PODC3.BIT.PODC3_10
#define PORTPODC3_11 PORT.PODC3.BIT.PODC3_11
#define PORTPODC3_12 PORT.PODC3.BIT.PODC3_12
#define PORTPODC3_13 PORT.PODC3.BIT.PODC3_13
#define PORTPODC3_14 PORT.PODC3.BIT.PODC3_14
#define PORTPDSC3 PORT.PDSC3.UINT32
#define PORTPDSC3_0 PORT.PDSC3.BIT.PDSC3_0
#define PORTPDSC3_1 PORT.PDSC3.BIT.PDSC3_1
#define PORTPDSC3_2 PORT.PDSC3.BIT.PDSC3_2
#define PORTPDSC3_3 PORT.PDSC3.BIT.PDSC3_3
#define PORTPDSC3_4 PORT.PDSC3.BIT.PDSC3_4
#define PORTPDSC3_5 PORT.PDSC3.BIT.PDSC3_5
#define PORTPDSC3_6 PORT.PDSC3.BIT.PDSC3_6
#define PORTPDSC3_7 PORT.PDSC3.BIT.PDSC3_7
#define PORTPDSC3_8 PORT.PDSC3.BIT.PDSC3_8
#define PORTPDSC3_9 PORT.PDSC3.BIT.PDSC3_9
#define PORTPDSC3_10 PORT.PDSC3.BIT.PDSC3_10
#define PORTPDSC3_11 PORT.PDSC3.BIT.PDSC3_11
#define PORTPDSC3_12 PORT.PDSC3.BIT.PDSC3_12
#define PORTPDSC3_13 PORT.PDSC3.BIT.PDSC3_13
#define PORTPDSC3_14 PORT.PDSC3.BIT.PDSC3_14
#define PORTPUCC3 PORT.PUCC3.UINT32
#define PORTPUCC3_0 PORT.PUCC3.BIT.PUCC3_0
#define PORTPUCC3_1 PORT.PUCC3.BIT.PUCC3_1
#define PORTPUCC3_2 PORT.PUCC3.BIT.PUCC3_2
#define PORTPUCC3_3 PORT.PUCC3.BIT.PUCC3_3
#define PORTPUCC3_4 PORT.PUCC3.BIT.PUCC3_4
#define PORTPUCC3_5 PORT.PUCC3.BIT.PUCC3_5
#define PORTPUCC3_6 PORT.PUCC3.BIT.PUCC3_6
#define PORTPUCC3_7 PORT.PUCC3.BIT.PUCC3_7
#define PORTPUCC3_8 PORT.PUCC3.BIT.PUCC3_8
#define PORTPUCC3_9 PORT.PUCC3.BIT.PUCC3_9
#define PORTPUCC3_10 PORT.PUCC3.BIT.PUCC3_10
#define PORTPUCC3_11 PORT.PUCC3.BIT.PUCC3_11
#define PORTPUCC3_12 PORT.PUCC3.BIT.PUCC3_12
#define PORTPUCC3_13 PORT.PUCC3.BIT.PUCC3_13
#define PORTPUCC3_14 PORT.PUCC3.BIT.PUCC3_14
#define PORTPISA3 PORT.PISA3.UINT16
#define PORTPISA3_0 PORT.PISA3.BIT.PISA3_0
#define PORTPISA3_1 PORT.PISA3.BIT.PISA3_1
#define PORTPISA3_14 PORT.PISA3.BIT.PISA3_14
#define PORTPPCMD3 PORT.PPCMD3.UINT32
#define PORTPCMD3 PORT.PPCMD3.BIT.PCMD3
#define PORTPPROTS3 PORT.PPROTS3.UINT32
#define PORTPPROTS3_0 PORT.PPROTS3.BIT.PPROTS3_0
#define PORTPODCE3 PORT.PODCE3.UINT32
#define PORTPODCE3_0 PORT.PODCE3.BIT.PODCE3_0
#define PORTPODCE3_1 PORT.PODCE3.BIT.PODCE3_1
#define PORTPODCE3_2 PORT.PODCE3.BIT.PODCE3_2
#define PORTPODCE3_3 PORT.PODCE3.BIT.PODCE3_3
#define PORTPODCE3_4 PORT.PODCE3.BIT.PODCE3_4
#define PORTPODCE3_5 PORT.PODCE3.BIT.PODCE3_5
#define PORTPODCE3_6 PORT.PODCE3.BIT.PODCE3_6
#define PORTPODCE3_7 PORT.PODCE3.BIT.PODCE3_7
#define PORTPODCE3_8 PORT.PODCE3.BIT.PODCE3_8
#define PORTPODCE3_9 PORT.PODCE3.BIT.PODCE3_9
#define PORTPODCE3_10 PORT.PODCE3.BIT.PODCE3_10
#define PORTPODCE3_11 PORT.PODCE3.BIT.PODCE3_11
#define PORTPODCE3_12 PORT.PODCE3.BIT.PODCE3_12
#define PORTPODCE3_13 PORT.PODCE3.BIT.PODCE3_13
#define PORTPODCE3_14 PORT.PODCE3.BIT.PODCE3_14
#define PORTPIBC4 PORT.PIBC4.UINT16
#define PORTPIBC4_0 PORT.PIBC4.BIT.PIBC4_0
#define PORTPIBC4_1 PORT.PIBC4.BIT.PIBC4_1
#define PORTPIBC4_2 PORT.PIBC4.BIT.PIBC4_2
#define PORTPIBC4_3 PORT.PIBC4.BIT.PIBC4_3
#define PORTPIBC4_4 PORT.PIBC4.BIT.PIBC4_4
#define PORTPIBC4_5 PORT.PIBC4.BIT.PIBC4_5
#define PORTPIBC4_6 PORT.PIBC4.BIT.PIBC4_6
#define PORTPIBC4_7 PORT.PIBC4.BIT.PIBC4_7
#define PORTPIBC4_8 PORT.PIBC4.BIT.PIBC4_8
#define PORTPIBC4_9 PORT.PIBC4.BIT.PIBC4_9
#define PORTPIBC4_10 PORT.PIBC4.BIT.PIBC4_10
#define PORTPIBC4_11 PORT.PIBC4.BIT.PIBC4_11
#define PORTPIBC4_12 PORT.PIBC4.BIT.PIBC4_12
#define PORTPIBC4_13 PORT.PIBC4.BIT.PIBC4_13
#define PORTPIBC4_14 PORT.PIBC4.BIT.PIBC4_14
#define PORTPBDC4 PORT.PBDC4.UINT16
#define PORTPBDC4_0 PORT.PBDC4.BIT.PBDC4_0
#define PORTPBDC4_1 PORT.PBDC4.BIT.PBDC4_1
#define PORTPBDC4_2 PORT.PBDC4.BIT.PBDC4_2
#define PORTPBDC4_3 PORT.PBDC4.BIT.PBDC4_3
#define PORTPBDC4_4 PORT.PBDC4.BIT.PBDC4_4
#define PORTPBDC4_5 PORT.PBDC4.BIT.PBDC4_5
#define PORTPBDC4_6 PORT.PBDC4.BIT.PBDC4_6
#define PORTPBDC4_7 PORT.PBDC4.BIT.PBDC4_7
#define PORTPBDC4_8 PORT.PBDC4.BIT.PBDC4_8
#define PORTPBDC4_9 PORT.PBDC4.BIT.PBDC4_9
#define PORTPBDC4_10 PORT.PBDC4.BIT.PBDC4_10
#define PORTPBDC4_11 PORT.PBDC4.BIT.PBDC4_11
#define PORTPBDC4_12 PORT.PBDC4.BIT.PBDC4_12
#define PORTPBDC4_13 PORT.PBDC4.BIT.PBDC4_13
#define PORTPBDC4_14 PORT.PBDC4.BIT.PBDC4_14
#define PORTPIPC4 PORT.PIPC4.UINT16
#define PORTPIPC4_0 PORT.PIPC4.BIT.PIPC4_0
#define PORTPIPC4_1 PORT.PIPC4.BIT.PIPC4_1
#define PORTPIPC4_2 PORT.PIPC4.BIT.PIPC4_2
#define PORTPIPC4_3 PORT.PIPC4.BIT.PIPC4_3
#define PORTPIPC4_4 PORT.PIPC4.BIT.PIPC4_4
#define PORTPIPC4_5 PORT.PIPC4.BIT.PIPC4_5
#define PORTPIPC4_6 PORT.PIPC4.BIT.PIPC4_6
#define PORTPU4 PORT.PU4.UINT16
#define PORTPU4_0 PORT.PU4.BIT.PU4_0
#define PORTPU4_1 PORT.PU4.BIT.PU4_1
#define PORTPU4_2 PORT.PU4.BIT.PU4_2
#define PORTPU4_3 PORT.PU4.BIT.PU4_3
#define PORTPU4_4 PORT.PU4.BIT.PU4_4
#define PORTPU4_5 PORT.PU4.BIT.PU4_5
#define PORTPU4_6 PORT.PU4.BIT.PU4_6
#define PORTPU4_7 PORT.PU4.BIT.PU4_7
#define PORTPU4_8 PORT.PU4.BIT.PU4_8
#define PORTPU4_9 PORT.PU4.BIT.PU4_9
#define PORTPU4_10 PORT.PU4.BIT.PU4_10
#define PORTPU4_11 PORT.PU4.BIT.PU4_11
#define PORTPU4_12 PORT.PU4.BIT.PU4_12
#define PORTPU4_13 PORT.PU4.BIT.PU4_13
#define PORTPU4_14 PORT.PU4.BIT.PU4_14
#define PORTPD4 PORT.PD4.UINT16
#define PORTPD4_0 PORT.PD4.BIT.PD4_0
#define PORTPD4_1 PORT.PD4.BIT.PD4_1
#define PORTPD4_2 PORT.PD4.BIT.PD4_2
#define PORTPD4_3 PORT.PD4.BIT.PD4_3
#define PORTPD4_4 PORT.PD4.BIT.PD4_4
#define PORTPD4_5 PORT.PD4.BIT.PD4_5
#define PORTPD4_6 PORT.PD4.BIT.PD4_6
#define PORTPD4_7 PORT.PD4.BIT.PD4_7
#define PORTPD4_8 PORT.PD4.BIT.PD4_8
#define PORTPD4_9 PORT.PD4.BIT.PD4_9
#define PORTPD4_10 PORT.PD4.BIT.PD4_10
#define PORTPD4_11 PORT.PD4.BIT.PD4_11
#define PORTPD4_12 PORT.PD4.BIT.PD4_12
#define PORTPD4_13 PORT.PD4.BIT.PD4_13
#define PORTPD4_14 PORT.PD4.BIT.PD4_14
#define PORTPODC4 PORT.PODC4.UINT32
#define PORTPODC4_0 PORT.PODC4.BIT.PODC4_0
#define PORTPODC4_1 PORT.PODC4.BIT.PODC4_1
#define PORTPODC4_2 PORT.PODC4.BIT.PODC4_2
#define PORTPODC4_3 PORT.PODC4.BIT.PODC4_3
#define PORTPODC4_4 PORT.PODC4.BIT.PODC4_4
#define PORTPODC4_5 PORT.PODC4.BIT.PODC4_5
#define PORTPODC4_6 PORT.PODC4.BIT.PODC4_6
#define PORTPODC4_7 PORT.PODC4.BIT.PODC4_7
#define PORTPODC4_8 PORT.PODC4.BIT.PODC4_8
#define PORTPODC4_9 PORT.PODC4.BIT.PODC4_9
#define PORTPODC4_10 PORT.PODC4.BIT.PODC4_10
#define PORTPODC4_11 PORT.PODC4.BIT.PODC4_11
#define PORTPODC4_12 PORT.PODC4.BIT.PODC4_12
#define PORTPODC4_13 PORT.PODC4.BIT.PODC4_13
#define PORTPODC4_14 PORT.PODC4.BIT.PODC4_14
#define PORTPDSC4 PORT.PDSC4.UINT32
#define PORTPDSC4_0 PORT.PDSC4.BIT.PDSC4_0
#define PORTPDSC4_1 PORT.PDSC4.BIT.PDSC4_1
#define PORTPDSC4_2 PORT.PDSC4.BIT.PDSC4_2
#define PORTPDSC4_3 PORT.PDSC4.BIT.PDSC4_3
#define PORTPDSC4_4 PORT.PDSC4.BIT.PDSC4_4
#define PORTPDSC4_5 PORT.PDSC4.BIT.PDSC4_5
#define PORTPDSC4_6 PORT.PDSC4.BIT.PDSC4_6
#define PORTPDSC4_7 PORT.PDSC4.BIT.PDSC4_7
#define PORTPDSC4_8 PORT.PDSC4.BIT.PDSC4_8
#define PORTPDSC4_9 PORT.PDSC4.BIT.PDSC4_9
#define PORTPDSC4_10 PORT.PDSC4.BIT.PDSC4_10
#define PORTPDSC4_11 PORT.PDSC4.BIT.PDSC4_11
#define PORTPDSC4_12 PORT.PDSC4.BIT.PDSC4_12
#define PORTPDSC4_13 PORT.PDSC4.BIT.PDSC4_13
#define PORTPDSC4_14 PORT.PDSC4.BIT.PDSC4_14
#define PORTPUCC4 PORT.PUCC4.UINT32
#define PORTPUCC4_0 PORT.PUCC4.BIT.PUCC4_0
#define PORTPUCC4_1 PORT.PUCC4.BIT.PUCC4_1
#define PORTPUCC4_2 PORT.PUCC4.BIT.PUCC4_2
#define PORTPUCC4_3 PORT.PUCC4.BIT.PUCC4_3
#define PORTPUCC4_4 PORT.PUCC4.BIT.PUCC4_4
#define PORTPUCC4_5 PORT.PUCC4.BIT.PUCC4_5
#define PORTPUCC4_6 PORT.PUCC4.BIT.PUCC4_6
#define PORTPUCC4_7 PORT.PUCC4.BIT.PUCC4_7
#define PORTPUCC4_8 PORT.PUCC4.BIT.PUCC4_8
#define PORTPUCC4_9 PORT.PUCC4.BIT.PUCC4_9
#define PORTPUCC4_10 PORT.PUCC4.BIT.PUCC4_10
#define PORTPUCC4_11 PORT.PUCC4.BIT.PUCC4_11
#define PORTPUCC4_12 PORT.PUCC4.BIT.PUCC4_12
#define PORTPUCC4_13 PORT.PUCC4.BIT.PUCC4_13
#define PORTPUCC4_14 PORT.PUCC4.BIT.PUCC4_14
#define PORTPISA4 PORT.PISA4.UINT16
#define PORTPISA4_0 PORT.PISA4.BIT.PISA4_0
#define PORTPISA4_1 PORT.PISA4.BIT.PISA4_1
#define PORTPISA4_2 PORT.PISA4.BIT.PISA4_2
#define PORTPISA4_3 PORT.PISA4.BIT.PISA4_3
#define PORTPISA4_4 PORT.PISA4.BIT.PISA4_4
#define PORTPISA4_5 PORT.PISA4.BIT.PISA4_5
#define PORTPISA4_6 PORT.PISA4.BIT.PISA4_6
#define PORTPISA4_9 PORT.PISA4.BIT.PISA4_9
#define PORTPISA4_10 PORT.PISA4.BIT.PISA4_10
#define PORTPISA4_12 PORT.PISA4.BIT.PISA4_12
#define PORTPISA4_13 PORT.PISA4.BIT.PISA4_13
#define PORTPPCMD4 PORT.PPCMD4.UINT32
#define PORTPCMD4 PORT.PPCMD4.BIT.PCMD4
#define PORTPPROTS4 PORT.PPROTS4.UINT32
#define PORTPPROTS4_0 PORT.PPROTS4.BIT.PPROTS4_0
#define PORTPODCE4 PORT.PODCE4.UINT32
#define PORTPODCE4_0 PORT.PODCE4.BIT.PODCE4_0
#define PORTPODCE4_1 PORT.PODCE4.BIT.PODCE4_1
#define PORTPODCE4_2 PORT.PODCE4.BIT.PODCE4_2
#define PORTPODCE4_3 PORT.PODCE4.BIT.PODCE4_3
#define PORTPODCE4_4 PORT.PODCE4.BIT.PODCE4_4
#define PORTPODCE4_5 PORT.PODCE4.BIT.PODCE4_5
#define PORTPODCE4_6 PORT.PODCE4.BIT.PODCE4_6
#define PORTPODCE4_7 PORT.PODCE4.BIT.PODCE4_7
#define PORTPODCE4_8 PORT.PODCE4.BIT.PODCE4_8
#define PORTPODCE4_9 PORT.PODCE4.BIT.PODCE4_9
#define PORTPODCE4_10 PORT.PODCE4.BIT.PODCE4_10
#define PORTPODCE4_11 PORT.PODCE4.BIT.PODCE4_11
#define PORTPODCE4_12 PORT.PODCE4.BIT.PODCE4_12
#define PORTPODCE4_13 PORT.PODCE4.BIT.PODCE4_13
#define PORTPODCE4_14 PORT.PODCE4.BIT.PODCE4_14
#define PORTPIBC5 PORT.PIBC5.UINT16
#define PORTPIBC5_0 PORT.PIBC5.BIT.PIBC5_0
#define PORTPIBC5_1 PORT.PIBC5.BIT.PIBC5_1
#define PORTPIBC5_2 PORT.PIBC5.BIT.PIBC5_2
#define PORTPIBC5_3 PORT.PIBC5.BIT.PIBC5_3
#define PORTPIBC5_4 PORT.PIBC5.BIT.PIBC5_4
#define PORTPIBC5_5 PORT.PIBC5.BIT.PIBC5_5
#define PORTPIBC5_6 PORT.PIBC5.BIT.PIBC5_6
#define PORTPIBC5_7 PORT.PIBC5.BIT.PIBC5_7
#define PORTPIBC5_8 PORT.PIBC5.BIT.PIBC5_8
#define PORTPIBC5_9 PORT.PIBC5.BIT.PIBC5_9
#define PORTPIBC5_10 PORT.PIBC5.BIT.PIBC5_10
#define PORTPIBC5_11 PORT.PIBC5.BIT.PIBC5_11
#define PORTPIBC5_12 PORT.PIBC5.BIT.PIBC5_12
#define PORTPIBC5_13 PORT.PIBC5.BIT.PIBC5_13
#define PORTPIBC5_14 PORT.PIBC5.BIT.PIBC5_14
#define PORTPIBC5_15 PORT.PIBC5.BIT.PIBC5_15
#define PORTPBDC5 PORT.PBDC5.UINT16
#define PORTPBDC5_0 PORT.PBDC5.BIT.PBDC5_0
#define PORTPBDC5_1 PORT.PBDC5.BIT.PBDC5_1
#define PORTPBDC5_2 PORT.PBDC5.BIT.PBDC5_2
#define PORTPBDC5_3 PORT.PBDC5.BIT.PBDC5_3
#define PORTPBDC5_4 PORT.PBDC5.BIT.PBDC5_4
#define PORTPBDC5_5 PORT.PBDC5.BIT.PBDC5_5
#define PORTPBDC5_6 PORT.PBDC5.BIT.PBDC5_6
#define PORTPBDC5_7 PORT.PBDC5.BIT.PBDC5_7
#define PORTPBDC5_8 PORT.PBDC5.BIT.PBDC5_8
#define PORTPBDC5_9 PORT.PBDC5.BIT.PBDC5_9
#define PORTPBDC5_10 PORT.PBDC5.BIT.PBDC5_10
#define PORTPBDC5_11 PORT.PBDC5.BIT.PBDC5_11
#define PORTPBDC5_12 PORT.PBDC5.BIT.PBDC5_12
#define PORTPBDC5_13 PORT.PBDC5.BIT.PBDC5_13
#define PORTPBDC5_14 PORT.PBDC5.BIT.PBDC5_14
#define PORTPBDC5_15 PORT.PBDC5.BIT.PBDC5_15
#define PORTPIPC5 PORT.PIPC5.UINT16
#define PORTPIPC5_1 PORT.PIPC5.BIT.PIPC5_1
#define PORTPIPC5_2 PORT.PIPC5.BIT.PIPC5_2
#define PORTPIPC5_4 PORT.PIPC5.BIT.PIPC5_4
#define PORTPIPC5_5 PORT.PIPC5.BIT.PIPC5_5
#define PORTPIPC5_6 PORT.PIPC5.BIT.PIPC5_6
#define PORTPIPC5_7 PORT.PIPC5.BIT.PIPC5_7
#define PORTPIPC5_8 PORT.PIPC5.BIT.PIPC5_8
#define PORTPIPC5_9 PORT.PIPC5.BIT.PIPC5_9
#define PORTPIPC5_10 PORT.PIPC5.BIT.PIPC5_10
#define PORTPIPC5_11 PORT.PIPC5.BIT.PIPC5_11
#define PORTPIPC5_12 PORT.PIPC5.BIT.PIPC5_12
#define PORTPIPC5_13 PORT.PIPC5.BIT.PIPC5_13
#define PORTPIPC5_14 PORT.PIPC5.BIT.PIPC5_14
#define PORTPU5 PORT.PU5.UINT16
#define PORTPU5_0 PORT.PU5.BIT.PU5_0
#define PORTPU5_1 PORT.PU5.BIT.PU5_1
#define PORTPU5_2 PORT.PU5.BIT.PU5_2
#define PORTPU5_3 PORT.PU5.BIT.PU5_3
#define PORTPU5_4 PORT.PU5.BIT.PU5_4
#define PORTPU5_5 PORT.PU5.BIT.PU5_5
#define PORTPU5_6 PORT.PU5.BIT.PU5_6
#define PORTPU5_7 PORT.PU5.BIT.PU5_7
#define PORTPU5_8 PORT.PU5.BIT.PU5_8
#define PORTPU5_9 PORT.PU5.BIT.PU5_9
#define PORTPU5_10 PORT.PU5.BIT.PU5_10
#define PORTPU5_11 PORT.PU5.BIT.PU5_11
#define PORTPU5_12 PORT.PU5.BIT.PU5_12
#define PORTPU5_13 PORT.PU5.BIT.PU5_13
#define PORTPU5_14 PORT.PU5.BIT.PU5_14
#define PORTPU5_15 PORT.PU5.BIT.PU5_15
#define PORTPD5 PORT.PD5.UINT16
#define PORTPD5_0 PORT.PD5.BIT.PD5_0
#define PORTPD5_1 PORT.PD5.BIT.PD5_1
#define PORTPD5_2 PORT.PD5.BIT.PD5_2
#define PORTPD5_3 PORT.PD5.BIT.PD5_3
#define PORTPD5_4 PORT.PD5.BIT.PD5_4
#define PORTPD5_5 PORT.PD5.BIT.PD5_5
#define PORTPD5_6 PORT.PD5.BIT.PD5_6
#define PORTPD5_7 PORT.PD5.BIT.PD5_7
#define PORTPD5_8 PORT.PD5.BIT.PD5_8
#define PORTPD5_9 PORT.PD5.BIT.PD5_9
#define PORTPD5_10 PORT.PD5.BIT.PD5_10
#define PORTPD5_11 PORT.PD5.BIT.PD5_11
#define PORTPD5_12 PORT.PD5.BIT.PD5_12
#define PORTPD5_13 PORT.PD5.BIT.PD5_13
#define PORTPD5_14 PORT.PD5.BIT.PD5_14
#define PORTPD5_15 PORT.PD5.BIT.PD5_15
#define PORTPODC5 PORT.PODC5.UINT32
#define PORTPODC5_0 PORT.PODC5.BIT.PODC5_0
#define PORTPODC5_1 PORT.PODC5.BIT.PODC5_1
#define PORTPODC5_2 PORT.PODC5.BIT.PODC5_2
#define PORTPODC5_3 PORT.PODC5.BIT.PODC5_3
#define PORTPODC5_4 PORT.PODC5.BIT.PODC5_4
#define PORTPODC5_5 PORT.PODC5.BIT.PODC5_5
#define PORTPODC5_6 PORT.PODC5.BIT.PODC5_6
#define PORTPODC5_7 PORT.PODC5.BIT.PODC5_7
#define PORTPODC5_8 PORT.PODC5.BIT.PODC5_8
#define PORTPODC5_9 PORT.PODC5.BIT.PODC5_9
#define PORTPODC5_10 PORT.PODC5.BIT.PODC5_10
#define PORTPODC5_11 PORT.PODC5.BIT.PODC5_11
#define PORTPODC5_12 PORT.PODC5.BIT.PODC5_12
#define PORTPODC5_13 PORT.PODC5.BIT.PODC5_13
#define PORTPODC5_14 PORT.PODC5.BIT.PODC5_14
#define PORTPODC5_15 PORT.PODC5.BIT.PODC5_15
#define PORTPDSC5 PORT.PDSC5.UINT32
#define PORTPDSC5_0 PORT.PDSC5.BIT.PDSC5_0
#define PORTPDSC5_1 PORT.PDSC5.BIT.PDSC5_1
#define PORTPDSC5_2 PORT.PDSC5.BIT.PDSC5_2
#define PORTPDSC5_3 PORT.PDSC5.BIT.PDSC5_3
#define PORTPDSC5_4 PORT.PDSC5.BIT.PDSC5_4
#define PORTPDSC5_5 PORT.PDSC5.BIT.PDSC5_5
#define PORTPDSC5_6 PORT.PDSC5.BIT.PDSC5_6
#define PORTPDSC5_7 PORT.PDSC5.BIT.PDSC5_7
#define PORTPDSC5_8 PORT.PDSC5.BIT.PDSC5_8
#define PORTPDSC5_9 PORT.PDSC5.BIT.PDSC5_9
#define PORTPDSC5_10 PORT.PDSC5.BIT.PDSC5_10
#define PORTPDSC5_11 PORT.PDSC5.BIT.PDSC5_11
#define PORTPDSC5_12 PORT.PDSC5.BIT.PDSC5_12
#define PORTPDSC5_13 PORT.PDSC5.BIT.PDSC5_13
#define PORTPDSC5_14 PORT.PDSC5.BIT.PDSC5_14
#define PORTPDSC5_15 PORT.PDSC5.BIT.PDSC5_15
#define PORTPUCC5 PORT.PUCC5.UINT32
#define PORTPUCC5_0 PORT.PUCC5.BIT.PUCC5_0
#define PORTPUCC5_1 PORT.PUCC5.BIT.PUCC5_1
#define PORTPUCC5_2 PORT.PUCC5.BIT.PUCC5_2
#define PORTPUCC5_3 PORT.PUCC5.BIT.PUCC5_3
#define PORTPUCC5_4 PORT.PUCC5.BIT.PUCC5_4
#define PORTPUCC5_5 PORT.PUCC5.BIT.PUCC5_5
#define PORTPUCC5_6 PORT.PUCC5.BIT.PUCC5_6
#define PORTPUCC5_7 PORT.PUCC5.BIT.PUCC5_7
#define PORTPUCC5_8 PORT.PUCC5.BIT.PUCC5_8
#define PORTPUCC5_9 PORT.PUCC5.BIT.PUCC5_9
#define PORTPUCC5_10 PORT.PUCC5.BIT.PUCC5_10
#define PORTPUCC5_11 PORT.PUCC5.BIT.PUCC5_11
#define PORTPUCC5_12 PORT.PUCC5.BIT.PUCC5_12
#define PORTPUCC5_13 PORT.PUCC5.BIT.PUCC5_13
#define PORTPUCC5_14 PORT.PUCC5.BIT.PUCC5_14
#define PORTPUCC5_15 PORT.PUCC5.BIT.PUCC5_15
#define PORTPPCMD5 PORT.PPCMD5.UINT32
#define PORTPCMD5 PORT.PPCMD5.BIT.PCMD5
#define PORTPPROTS5 PORT.PPROTS5.UINT32
#define PORTPPROTS5_0 PORT.PPROTS5.BIT.PPROTS5_0
#define PORTPODCE5 PORT.PODCE5.UINT32
#define PORTPODCE5_0 PORT.PODCE5.BIT.PODCE5_0
#define PORTPODCE5_1 PORT.PODCE5.BIT.PODCE5_1
#define PORTPODCE5_2 PORT.PODCE5.BIT.PODCE5_2
#define PORTPODCE5_3 PORT.PODCE5.BIT.PODCE5_3
#define PORTPODCE5_4 PORT.PODCE5.BIT.PODCE5_4
#define PORTPODCE5_5 PORT.PODCE5.BIT.PODCE5_5
#define PORTPODCE5_6 PORT.PODCE5.BIT.PODCE5_6
#define PORTPODCE5_7 PORT.PODCE5.BIT.PODCE5_7
#define PORTPODCE5_8 PORT.PODCE5.BIT.PODCE5_8
#define PORTPODCE5_9 PORT.PODCE5.BIT.PODCE5_9
#define PORTPODCE5_10 PORT.PODCE5.BIT.PODCE5_10
#define PORTPODCE5_11 PORT.PODCE5.BIT.PODCE5_11
#define PORTPODCE5_12 PORT.PODCE5.BIT.PODCE5_12
#define PORTPODCE5_13 PORT.PODCE5.BIT.PODCE5_13
#define PORTPODCE5_14 PORT.PODCE5.BIT.PODCE5_14
#define PORTPODCE5_15 PORT.PODCE5.BIT.PODCE5_15
#define PORTJJP0 PORTJ.JP0.UINT8
#define PORTJJP0_0 PORTJ.JP0.BIT.JP0_0
#define PORTJJP0_1 PORTJ.JP0.BIT.JP0_1
#define PORTJJP0_3 PORTJ.JP0.BIT.JP0_3
#define PORTJJP0_5 PORTJ.JP0.BIT.JP0_5
#define PORTJJPSR0 PORTJ.JPSR0.UINT32
#define PORTJJPSR0_0 PORTJ.JPSR0.BIT.JPSR0_0
#define PORTJJPSR0_1 PORTJ.JPSR0.BIT.JPSR0_1
#define PORTJJPSR0_3 PORTJ.JPSR0.BIT.JPSR0_3
#define PORTJJPSR0_5 PORTJ.JPSR0.BIT.JPSR0_5
#define PORTJJPSR0_16 PORTJ.JPSR0.BIT.JPSR0_16
#define PORTJJPSR0_17 PORTJ.JPSR0.BIT.JPSR0_17
#define PORTJJPSR0_19 PORTJ.JPSR0.BIT.JPSR0_19
#define PORTJJPSR0_21 PORTJ.JPSR0.BIT.JPSR0_21
#define PORTJJPNOT0 PORTJ.JPNOT0.UINT8
#define PORTJJPNOT0_0 PORTJ.JPNOT0.BIT.JPNOT0_0
#define PORTJJPNOT0_1 PORTJ.JPNOT0.BIT.JPNOT0_1
#define PORTJJPNOT0_3 PORTJ.JPNOT0.BIT.JPNOT0_3
#define PORTJJPNOT0_5 PORTJ.JPNOT0.BIT.JPNOT0_5
#define PORTJJPPR0 PORTJ.JPPR0.UINT8
#define PORTJJPPR0_0 PORTJ.JPPR0.BIT.JPPR0_0
#define PORTJJPPR0_1 PORTJ.JPPR0.BIT.JPPR0_1
#define PORTJJPPR0_2 PORTJ.JPPR0.BIT.JPPR0_2
#define PORTJJPPR0_3 PORTJ.JPPR0.BIT.JPPR0_3
#define PORTJJPPR0_4 PORTJ.JPPR0.BIT.JPPR0_4
#define PORTJJPPR0_5 PORTJ.JPPR0.BIT.JPPR0_5
#define PORTJJPM0 PORTJ.JPM0.UINT8
#define PORTJJPM0_0 PORTJ.JPM0.BIT.JPM0_0
#define PORTJJPM0_1 PORTJ.JPM0.BIT.JPM0_1
#define PORTJJPM0_3 PORTJ.JPM0.BIT.JPM0_3
#define PORTJJPM0_5 PORTJ.JPM0.BIT.JPM0_5
#define PORTJJPMC0 PORTJ.JPMC0.UINT8
#define PORTJJPMC0_0 PORTJ.JPMC0.BIT.JPMC0_0
#define PORTJJPMC0_1 PORTJ.JPMC0.BIT.JPMC0_1
#define PORTJJPMC0_2 PORTJ.JPMC0.BIT.JPMC0_2
#define PORTJJPFCE0 PORTJ.JPFCE0.UINT8
#define PORTJJPFCE0_0 PORTJ.JPFCE0.BIT.JPFCE0_0
#define PORTJJPFCE0_1 PORTJ.JPFCE0.BIT.JPFCE0_1
#define PORTJJPFCE0_2 PORTJ.JPFCE0.BIT.JPFCE0_2
#define PORTJJPMSR0 PORTJ.JPMSR0.UINT32
#define PORTJJPMSR0_0 PORTJ.JPMSR0.BIT.JPMSR0_0
#define PORTJJPMSR0_1 PORTJ.JPMSR0.BIT.JPMSR0_1
#define PORTJJPMSR0_3 PORTJ.JPMSR0.BIT.JPMSR0_3
#define PORTJJPMSR0_5 PORTJ.JPMSR0.BIT.JPMSR0_5
#define PORTJJPMSR0_16 PORTJ.JPMSR0.BIT.JPMSR0_16
#define PORTJJPMSR0_17 PORTJ.JPMSR0.BIT.JPMSR0_17
#define PORTJJPMSR0_19 PORTJ.JPMSR0.BIT.JPMSR0_19
#define PORTJJPMSR0_21 PORTJ.JPMSR0.BIT.JPMSR0_21
#define PORTJJPMCSR0 PORTJ.JPMCSR0.UINT32
#define PORTJJPMCSR0_0 PORTJ.JPMCSR0.BIT.JPMCSR0_0
#define PORTJJPMCSR0_1 PORTJ.JPMCSR0.BIT.JPMCSR0_1
#define PORTJJPMCSR0_2 PORTJ.JPMCSR0.BIT.JPMCSR0_2
#define PORTJJPMCSR0_16 PORTJ.JPMCSR0.BIT.JPMCSR0_16
#define PORTJJPMCSR0_17 PORTJ.JPMCSR0.BIT.JPMCSR0_17
#define PORTJJPMCSR0_18 PORTJ.JPMCSR0.BIT.JPMCSR0_18
#define PORTJJPCR0_0 PORTJ.JPCR0_0.UINT32
#define PORTJJPFCE PORTJ.JPCR0_0.BIT.JPFCE
#define PORTJJPM PORTJ.JPCR0_0.BIT.JPM
#define PORTJJPMC PORTJ.JPCR0_0.BIT.JPMC
#define PORTJJPPR PORTJ.JPCR0_0.BIT.JPPR
#define PORTJJP PORTJ.JPCR0_0.BIT.JP
#define PORTJJPIBC PORTJ.JPCR0_0.BIT.JPIBC
#define PORTJJPBDC PORTJ.JPCR0_0.BIT.JPBDC
#define PORTJJPD PORTJ.JPCR0_0.BIT.JPD
#define PORTJJPU PORTJ.JPCR0_0.BIT.JPU
#define PORTJJPISA PORTJ.JPCR0_0.BIT.JPISA
#define PORTJJPDSC PORTJ.JPCR0_0.BIT.JPDSC
#define PORTJJPUCC PORTJ.JPCR0_0.BIT.JPUCC
#define PORTJJPODC PORTJ.JPCR0_0.BIT.JPODC
#define PORTJJPCR0_1 PORTJ.JPCR0_1.UINT32
#define PORTJJPCR0_2 PORTJ.JPCR0_2.UINT32
#define PORTJJPCR0_3 PORTJ.JPCR0_3.UINT32
#define PORTJJPCR0_4 PORTJ.JPCR0_4.UINT32
#define PORTJJPCR0_5 PORTJ.JPCR0_5.UINT32
#define PORTJJPIBC0 PORTJ.JPIBC0.UINT8
#define PORTJJPIBC0_0 PORTJ.JPIBC0.BIT.JPIBC0_0
#define PORTJJPIBC0_1 PORTJ.JPIBC0.BIT.JPIBC0_1
#define PORTJJPIBC0_2 PORTJ.JPIBC0.BIT.JPIBC0_2
#define PORTJJPIBC0_3 PORTJ.JPIBC0.BIT.JPIBC0_3
#define PORTJJPIBC0_5 PORTJ.JPIBC0.BIT.JPIBC0_5
#define PORTJJPBDC0 PORTJ.JPBDC0.UINT8
#define PORTJJPBDC0_0 PORTJ.JPBDC0.BIT.JPBDC0_0
#define PORTJJPBDC0_1 PORTJ.JPBDC0.BIT.JPBDC0_1
#define PORTJJPBDC0_3 PORTJ.JPBDC0.BIT.JPBDC0_3
#define PORTJJPBDC0_5 PORTJ.JPBDC0.BIT.JPBDC0_5
#define PORTJJPU0 PORTJ.JPU0.UINT8
#define PORTJJPU0_0 PORTJ.JPU0.BIT.JPU0_0
#define PORTJJPU0_1 PORTJ.JPU0.BIT.JPU0_1
#define PORTJJPU0_2 PORTJ.JPU0.BIT.JPU0_2
#define PORTJJPU0_3 PORTJ.JPU0.BIT.JPU0_3
#define PORTJJPU0_5 PORTJ.JPU0.BIT.JPU0_5
#define PORTJJPD0 PORTJ.JPD0.UINT8
#define PORTJJPD0_0 PORTJ.JPD0.BIT.JPD0_0
#define PORTJJPD0_1 PORTJ.JPD0.BIT.JPD0_1
#define PORTJJPD0_2 PORTJ.JPD0.BIT.JPD0_2
#define PORTJJPD0_3 PORTJ.JPD0.BIT.JPD0_3
#define PORTJJPD0_5 PORTJ.JPD0.BIT.JPD0_5
#define PORTJJPODC0 PORTJ.JPODC0.UINT32
#define PORTJJPODC0_0 PORTJ.JPODC0.BIT.JPODC0_0
#define PORTJJPODC0_1 PORTJ.JPODC0.BIT.JPODC0_1
#define PORTJJPODC0_3 PORTJ.JPODC0.BIT.JPODC0_3
#define PORTJJPODC0_5 PORTJ.JPODC0.BIT.JPODC0_5
#define PORTJJPDSC0 PORTJ.JPDSC0.UINT32
#define PORTJJPDSC0_0 PORTJ.JPDSC0.BIT.JPDSC0_0
#define PORTJJPDSC0_1 PORTJ.JPDSC0.BIT.JPDSC0_1
#define PORTJJPDSC0_3 PORTJ.JPDSC0.BIT.JPDSC0_3
#define PORTJJPDSC0_5 PORTJ.JPDSC0.BIT.JPDSC0_5
#define PORTJJPUCC0 PORTJ.JPUCC0.UINT32
#define PORTJJPUCC0_0 PORTJ.JPUCC0.BIT.JPUCC0_0
#define PORTJJPUCC0_1 PORTJ.JPUCC0.BIT.JPUCC0_1
#define PORTJJPUCC0_3 PORTJ.JPUCC0.BIT.JPUCC0_3
#define PORTJJPUCC0_5 PORTJ.JPUCC0.BIT.JPUCC0_5
#define PORTJJPISA0 PORTJ.JPISA0.UINT8
#define PORTJJPISA0_0 PORTJ.JPISA0.BIT.JPISA0_0
#define PORTJJPISA0_1 PORTJ.JPISA0.BIT.JPISA0_1
#define PORTJJPISA0_2 PORTJ.JPISA0.BIT.JPISA0_2
#define PORTJJPISA0_3 PORTJ.JPISA0.BIT.JPISA0_3
#define PORTJJPISA0_5 PORTJ.JPISA0.BIT.JPISA0_5
#define PORTJJPPCMD0 PORTJ.JPPCMD0.UINT32
#define PORTJJPCMD0 PORTJ.JPPCMD0.BIT.JPCMD0
#define PORTJJPPROTS0 PORTJ.JPPROTS0.UINT32
#define PORTJJPPROTS0_0 PORTJ.JPPROTS0.BIT.JPPROTS0_0

#endif
