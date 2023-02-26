/**********************************************************************************************************************
* Module File Name  : intc_regs.h
* Module Description: Interrupt Controller Peripheral Registers
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

#ifndef INTC_REGS_H
#define INTC_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  C0:8;                                           /* C0[7:0]          */
} __type133;
typedef struct 
{                                                          /* Bit Access       */
    uint8  C1:8;                                           /* C1[7:0]          */
} __type134;
typedef struct 
{                                                          /* Bit Access       */
    uint8  C2:8;                                           /* C2[7:0]          */
} __type135;
typedef struct 
{                                                          /* Bit Access       */
    uint8  C3:8;                                           /* C3[7:0]          */
} __type136;
typedef struct 
{                                                          /* Bit Access       */
    uint8  C4:8;                                           /* C4[7:0]          */
} __type137;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 INTDTS0:1;                                /* INTDTS0          */
    const uint32 INTDTS1:1;                                /* INTDTS1          */
    const uint32 INTDTS2:1;                                /* INTDTS2          */
    const uint32 INTDTS3:1;                                /* INTDTS3          */
    const uint32 INTDTS4:1;                                /* INTDTS4          */
    const uint32 INTDTS5:1;                                /* INTDTS5          */
    const uint32 INTDTS6:1;                                /* INTDTS6          */
    const uint32 INTDTS7:1;                                /* INTDTS7          */
    const uint32 INTDTS8:1;                                /* INTDTS8          */
    const uint32 INTDTS9:1;                                /* INTDTS9          */
    const uint32 INTDTS10:1;                               /* INTDTS10         */
    const uint32 INTDTS11:1;                               /* INTDTS11         */
    const uint32 INTDTS12:1;                               /* INTDTS12         */
    const uint32 INTDTS13:1;                               /* INTDTS13         */
    const uint32 INTDTS14:1;                               /* INTDTS14         */
    const uint32 INTDTS15:1;                               /* INTDTS15         */
    const uint32 INTDTS16:1;                               /* INTDTS16         */
    const uint32 INTDTS17:1;                               /* INTDTS17         */
    const uint32 INTDTS18:1;                               /* INTDTS18         */
    const uint32 INTDTS19:1;                               /* INTDTS19         */
    const uint32 INTDTS20:1;                               /* INTDTS20         */
    const uint32 INTDTS21:1;                               /* INTDTS21         */
    const uint32 INTDTS22:1;                               /* INTDTS22         */
    const uint32 INTDTS23:1;                               /* INTDTS23         */
    const uint32 INTDTS24:1;                               /* INTDTS24         */
    const uint32 INTDTS25:1;                               /* INTDTS25         */
    const uint32 INTDTS26:1;                               /* INTDTS26         */
    const uint32 INTDTS27:1;                               /* INTDTS27         */
    const uint32 INTDTS28:1;                               /* INTDTS28         */
    const uint32 INTDTS29:1;                               /* INTDTS29         */
    const uint32 INTDTS30:1;                               /* INTDTS30         */
    const uint32 INTDTS31:1;                               /* INTDTS31         */
} __type927;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 INTDTS32:1;                               /* INTDTS32         */
    const uint32 INTDTS33:1;                               /* INTDTS33         */
    const uint32 INTDTS34:1;                               /* INTDTS34         */
    const uint32 INTDTS35:1;                               /* INTDTS35         */
    const uint32 INTDTS36:1;                               /* INTDTS36         */
    const uint32 INTDTS37:1;                               /* INTDTS37         */
    const uint32 INTDTS38:1;                               /* INTDTS38         */
    const uint32 INTDTS39:1;                               /* INTDTS39         */
    const uint32 INTDTS40:1;                               /* INTDTS40         */
    const uint32 INTDTS41:1;                               /* INTDTS41         */
    const uint32 INTDTS42:1;                               /* INTDTS42         */
    const uint32 INTDTS43:1;                               /* INTDTS43         */
    const uint32 INTDTS44:1;                               /* INTDTS44         */
    const uint32 INTDTS45:1;                               /* INTDTS45         */
    const uint32 INTDTS46:1;                               /* INTDTS46         */
    const uint32 INTDTS47:1;                               /* INTDTS47         */
    const uint32 INTDTS48:1;                               /* INTDTS48         */
    const uint32 INTDTS49:1;                               /* INTDTS49         */
    const uint32 INTDTS50:1;                               /* INTDTS50         */
    const uint32 INTDTS51:1;                               /* INTDTS51         */
    const uint32 INTDTS52:1;                               /* INTDTS52         */
    const uint32 INTDTS53:1;                               /* INTDTS53         */
    const uint32 INTDTS54:1;                               /* INTDTS54         */
    const uint32 INTDTS55:1;                               /* INTDTS55         */
    const uint32 INTDTS56:1;                               /* INTDTS56         */
    const uint32 INTDTS57:1;                               /* INTDTS57         */
    const uint32 INTDTS58:1;                               /* INTDTS58         */
    const uint32 INTDTS59:1;                               /* INTDTS59         */
    const uint32 INTDTS60:1;                               /* INTDTS60         */
    const uint32 INTDTS61:1;                               /* INTDTS61         */
    const uint32 INTDTS62:1;                               /* INTDTS62         */
    const uint32 INTDTS63:1;                               /* INTDTS63         */
} __type928;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 INTDTS64:1;                               /* INTDTS64         */
    const uint32 INTDTS65:1;                               /* INTDTS65         */
    const uint32 INTDTS66:1;                               /* INTDTS66         */
    const uint32 INTDTS67:1;                               /* INTDTS67         */
    const uint32 INTDTS68:1;                               /* INTDTS68         */
    const uint32 INTDTS69:1;                               /* INTDTS69         */
    const uint32 INTDTS70:1;                               /* INTDTS70         */
    const uint32 INTDTS71:1;                               /* INTDTS71         */
    const uint32 INTDTS72:1;                               /* INTDTS72         */
    const uint32 INTDTS73:1;                               /* INTDTS73         */
    const uint32 INTDTS74:1;                               /* INTDTS74         */
    const uint32 INTDTS75:1;                               /* INTDTS75         */
    const uint32 INTDTS76:1;                               /* INTDTS76         */
    const uint32 INTDTS77:1;                               /* INTDTS77         */
    const uint32 INTDTS78:1;                               /* INTDTS78         */
    const uint32 INTDTS79:1;                               /* INTDTS79         */
    const uint32 INTDTS80:1;                               /* INTDTS80         */
    const uint32 INTDTS81:1;                               /* INTDTS81         */
    const uint32 INTDTS82:1;                               /* INTDTS82         */
    const uint32 INTDTS83:1;                               /* INTDTS83         */
    const uint32 INTDTS84:1;                               /* INTDTS84         */
    const uint32 INTDTS85:1;                               /* INTDTS85         */
    const uint32 INTDTS86:1;                               /* INTDTS86         */
    const uint32 INTDTS87:1;                               /* INTDTS87         */
    const uint32 INTDTS88:1;                               /* INTDTS88         */
    const uint32 INTDTS89:1;                               /* INTDTS89         */
    const uint32 INTDTS90:1;                               /* INTDTS90         */
    const uint32 INTDTS91:1;                               /* INTDTS91         */
    const uint32 INTDTS92:1;                               /* INTDTS92         */
    const uint32 INTDTS93:1;                               /* INTDTS93         */
    const uint32 INTDTS94:1;                               /* INTDTS94         */
    const uint32 INTDTS95:1;                               /* INTDTS95         */
} __type929;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 INTDTS96:1;                               /* INTDTS96         */
    const uint32 INTDTS97:1;                               /* INTDTS97         */
    const uint32 INTDTS98:1;                               /* INTDTS98         */
    const uint32 INTDTS99:1;                               /* INTDTS99         */
    const uint32 INTDTS100:1;                              /* INTDTS100        */
    const uint32 INTDTS101:1;                              /* INTDTS101        */
    const uint32 INTDTS102:1;                              /* INTDTS102        */
    const uint32 INTDTS103:1;                              /* INTDTS103        */
    const uint32 INTDTS104:1;                              /* INTDTS104        */
    const uint32 INTDTS105:1;                              /* INTDTS105        */
    const uint32 INTDTS106:1;                              /* INTDTS106        */
    const uint32 INTDTS107:1;                              /* INTDTS107        */
    const uint32 INTDTS108:1;                              /* INTDTS108        */
    const uint32 INTDTS109:1;                              /* INTDTS109        */
    const uint32 INTDTS110:1;                              /* INTDTS110        */
    const uint32 INTDTS111:1;                              /* INTDTS111        */
    const uint32 INTDTS112:1;                              /* INTDTS112        */
    const uint32 INTDTS113:1;                              /* INTDTS113        */
    const uint32 INTDTS114:1;                              /* INTDTS114        */
    const uint32 INTDTS115:1;                              /* INTDTS115        */
    const uint32 INTDTS116:1;                              /* INTDTS116        */
    const uint32 INTDTS117:1;                              /* INTDTS117        */
    const uint32 INTDTS118:1;                              /* INTDTS118        */
    const uint32 INTDTS119:1;                              /* INTDTS119        */
    const uint32 INTDTS120:1;                              /* INTDTS120        */
    const uint32 INTDTS121:1;                              /* INTDTS121        */
    const uint32 INTDTS122:1;                              /* INTDTS122        */
    const uint32 INTDTS123:1;                              /* INTDTS123        */
    const uint32 INTDTS124:1;                              /* INTDTS124        */
    const uint32 INTDTS125:1;                              /* INTDTS125        */
    const uint32 INTDTS126:1;                              /* INTDTS126        */
    const uint32 INTDTS127:1;                              /* INTDTS127        */
} __type930;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 INTCTDTS0:1;                              /* INTCTDTS0        */
    const uint32 INTCTDTS1:1;                              /* INTCTDTS1        */
    const uint32 INTCTDTS2:1;                              /* INTCTDTS2        */
    const uint32 INTCTDTS3:1;                              /* INTCTDTS3        */
    const uint32 INTCTDTS4:1;                              /* INTCTDTS4        */
    const uint32 INTCTDTS5:1;                              /* INTCTDTS5        */
    const uint32 INTCTDTS6:1;                              /* INTCTDTS6        */
    const uint32 INTCTDTS7:1;                              /* INTCTDTS7        */
    const uint32 INTCTDTS8:1;                              /* INTCTDTS8        */
    const uint32 INTCTDTS9:1;                              /* INTCTDTS9        */
    const uint32 INTCTDTS10:1;                             /* INTCTDTS10       */
    const uint32 INTCTDTS11:1;                             /* INTCTDTS11       */
    const uint32 INTCTDTS12:1;                             /* INTCTDTS12       */
    const uint32 INTCTDTS13:1;                             /* INTCTDTS13       */
    const uint32 INTCTDTS14:1;                             /* INTCTDTS14       */
    const uint32 INTCTDTS15:1;                             /* INTCTDTS15       */
    const uint32 INTCTDTS16:1;                             /* INTCTDTS16       */
    const uint32 INTCTDTS17:1;                             /* INTCTDTS17       */
    const uint32 INTCTDTS18:1;                             /* INTCTDTS18       */
    const uint32 INTCTDTS19:1;                             /* INTCTDTS19       */
    const uint32 INTCTDTS20:1;                             /* INTCTDTS20       */
    const uint32 INTCTDTS21:1;                             /* INTCTDTS21       */
    const uint32 INTCTDTS22:1;                             /* INTCTDTS22       */
    const uint32 INTCTDTS23:1;                             /* INTCTDTS23       */
    const uint32 INTCTDTS24:1;                             /* INTCTDTS24       */
    const uint32 INTCTDTS25:1;                             /* INTCTDTS25       */
    const uint32 INTCTDTS26:1;                             /* INTCTDTS26       */
    const uint32 INTCTDTS27:1;                             /* INTCTDTS27       */
    const uint32 INTCTDTS28:1;                             /* INTCTDTS28       */
    const uint32 INTCTDTS29:1;                             /* INTCTDTS29       */
    const uint32 INTCTDTS30:1;                             /* INTCTDTS30       */
    const uint32 INTCTDTS31:1;                             /* INTCTDTS31       */
} __type931;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 INTCTDTS32:1;                             /* INTCTDTS32       */
    const uint32 INTCTDTS33:1;                             /* INTCTDTS33       */
    const uint32 INTCTDTS34:1;                             /* INTCTDTS34       */
    const uint32 INTCTDTS35:1;                             /* INTCTDTS35       */
    const uint32 INTCTDTS36:1;                             /* INTCTDTS36       */
    const uint32 INTCTDTS37:1;                             /* INTCTDTS37       */
    const uint32 INTCTDTS38:1;                             /* INTCTDTS38       */
    const uint32 INTCTDTS39:1;                             /* INTCTDTS39       */
    const uint32 INTCTDTS40:1;                             /* INTCTDTS40       */
    const uint32 INTCTDTS41:1;                             /* INTCTDTS41       */
    const uint32 INTCTDTS42:1;                             /* INTCTDTS42       */
    const uint32 INTCTDTS43:1;                             /* INTCTDTS43       */
    const uint32 INTCTDTS44:1;                             /* INTCTDTS44       */
    const uint32 INTCTDTS45:1;                             /* INTCTDTS45       */
    const uint32 INTCTDTS46:1;                             /* INTCTDTS46       */
    const uint32 INTCTDTS47:1;                             /* INTCTDTS47       */
    const uint32 INTCTDTS48:1;                             /* INTCTDTS48       */
    const uint32 INTCTDTS49:1;                             /* INTCTDTS49       */
    const uint32 INTCTDTS50:1;                             /* INTCTDTS50       */
    const uint32 INTCTDTS51:1;                             /* INTCTDTS51       */
    const uint32 INTCTDTS52:1;                             /* INTCTDTS52       */
    const uint32 INTCTDTS53:1;                             /* INTCTDTS53       */
    const uint32 INTCTDTS54:1;                             /* INTCTDTS54       */
    const uint32 INTCTDTS55:1;                             /* INTCTDTS55       */
    const uint32 INTCTDTS56:1;                             /* INTCTDTS56       */
    const uint32 INTCTDTS57:1;                             /* INTCTDTS57       */
    const uint32 INTCTDTS58:1;                             /* INTCTDTS58       */
    const uint32 INTCTDTS59:1;                             /* INTCTDTS59       */
    const uint32 INTCTDTS60:1;                             /* INTCTDTS60       */
    const uint32 INTCTDTS61:1;                             /* INTCTDTS61       */
    const uint32 INTCTDTS62:1;                             /* INTCTDTS62       */
    const uint32 INTCTDTS63:1;                             /* INTCTDTS63       */
} __type932;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 INTCTDTS64:1;                             /* INTCTDTS64       */
    const uint32 INTCTDTS65:1;                             /* INTCTDTS65       */
    const uint32 INTCTDTS66:1;                             /* INTCTDTS66       */
    const uint32 INTCTDTS67:1;                             /* INTCTDTS67       */
    const uint32 INTCTDTS68:1;                             /* INTCTDTS68       */
    const uint32 INTCTDTS69:1;                             /* INTCTDTS69       */
    const uint32 INTCTDTS70:1;                             /* INTCTDTS70       */
    const uint32 INTCTDTS71:1;                             /* INTCTDTS71       */
    const uint32 INTCTDTS72:1;                             /* INTCTDTS72       */
    const uint32 INTCTDTS73:1;                             /* INTCTDTS73       */
    const uint32 INTCTDTS74:1;                             /* INTCTDTS74       */
    const uint32 INTCTDTS75:1;                             /* INTCTDTS75       */
    const uint32 INTCTDTS76:1;                             /* INTCTDTS76       */
    const uint32 INTCTDTS77:1;                             /* INTCTDTS77       */
    const uint32 INTCTDTS78:1;                             /* INTCTDTS78       */
    const uint32 INTCTDTS79:1;                             /* INTCTDTS79       */
    const uint32 INTCTDTS80:1;                             /* INTCTDTS80       */
    const uint32 INTCTDTS81:1;                             /* INTCTDTS81       */
    const uint32 INTCTDTS82:1;                             /* INTCTDTS82       */
    const uint32 INTCTDTS83:1;                             /* INTCTDTS83       */
    const uint32 INTCTDTS84:1;                             /* INTCTDTS84       */
    const uint32 INTCTDTS85:1;                             /* INTCTDTS85       */
    const uint32 INTCTDTS86:1;                             /* INTCTDTS86       */
    const uint32 INTCTDTS87:1;                             /* INTCTDTS87       */
    const uint32 INTCTDTS88:1;                             /* INTCTDTS88       */
    const uint32 INTCTDTS89:1;                             /* INTCTDTS89       */
    const uint32 INTCTDTS90:1;                             /* INTCTDTS90       */
    const uint32 INTCTDTS91:1;                             /* INTCTDTS91       */
    const uint32 INTCTDTS92:1;                             /* INTCTDTS92       */
    const uint32 INTCTDTS93:1;                             /* INTCTDTS93       */
    const uint32 INTCTDTS94:1;                             /* INTCTDTS94       */
    const uint32 INTCTDTS95:1;                             /* INTCTDTS95       */
} __type933;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 INTCTDTS96:1;                             /* INTCTDTS96       */
    const uint32 INTCTDTS97:1;                             /* INTCTDTS97       */
    const uint32 INTCTDTS98:1;                             /* INTCTDTS98       */
    const uint32 INTCTDTS99:1;                             /* INTCTDTS99       */
    const uint32 INTCTDTS100:1;                            /* INTCTDTS100      */
    const uint32 INTCTDTS101:1;                            /* INTCTDTS101      */
    const uint32 INTCTDTS102:1;                            /* INTCTDTS102      */
    const uint32 INTCTDTS103:1;                            /* INTCTDTS103      */
    const uint32 INTCTDTS104:1;                            /* INTCTDTS104      */
    const uint32 INTCTDTS105:1;                            /* INTCTDTS105      */
    const uint32 INTCTDTS106:1;                            /* INTCTDTS106      */
    const uint32 INTCTDTS107:1;                            /* INTCTDTS107      */
    const uint32 INTCTDTS108:1;                            /* INTCTDTS108      */
    const uint32 INTCTDTS109:1;                            /* INTCTDTS109      */
    const uint32 INTCTDTS110:1;                            /* INTCTDTS110      */
    const uint32 INTCTDTS111:1;                            /* INTCTDTS111      */
    const uint32 INTCTDTS112:1;                            /* INTCTDTS112      */
    const uint32 INTCTDTS113:1;                            /* INTCTDTS113      */
    const uint32 INTCTDTS114:1;                            /* INTCTDTS114      */
    const uint32 INTCTDTS115:1;                            /* INTCTDTS115      */
    const uint32 INTCTDTS116:1;                            /* INTCTDTS116      */
    const uint32 INTCTDTS117:1;                            /* INTCTDTS117      */
    const uint32 INTCTDTS118:1;                            /* INTCTDTS118      */
    const uint32 INTCTDTS119:1;                            /* INTCTDTS119      */
    const uint32 INTCTDTS120:1;                            /* INTCTDTS120      */
    const uint32 INTCTDTS121:1;                            /* INTCTDTS121      */
    const uint32 INTCTDTS122:1;                            /* INTCTDTS122      */
    const uint32 INTCTDTS123:1;                            /* INTCTDTS123      */
    const uint32 INTCTDTS124:1;                            /* INTCTDTS124      */
    const uint32 INTCTDTS125:1;                            /* INTCTDTS125      */
    const uint32 INTCTDTS126:1;                            /* INTCTDTS126      */
    const uint32 INTCTDTS127:1;                            /* INTCTDTS127      */
} __type934;
typedef struct 
{                                                          /* Bit Access       */
    uint32 INTCLR0:1;                                      /* INTCLR0          */
    uint32 INTCLR1:1;                                      /* INTCLR1          */
    uint32 INTCLR2:1;                                      /* INTCLR2          */
    uint32 INTCLR3:1;                                      /* INTCLR3          */
    uint32 INTCLR4:1;                                      /* INTCLR4          */
    uint32 INTCLR5:1;                                      /* INTCLR5          */
    uint32 INTCLR6:1;                                      /* INTCLR6          */
    uint32 INTCLR7:1;                                      /* INTCLR7          */
    uint32 INTCLR8:1;                                      /* INTCLR8          */
    uint32 INTCLR9:1;                                      /* INTCLR9          */
    uint32 INTCLR10:1;                                     /* INTCLR10         */
    uint32 INTCLR11:1;                                     /* INTCLR11         */
    uint32 INTCLR12:1;                                     /* INTCLR12         */
    uint32 INTCLR13:1;                                     /* INTCLR13         */
    uint32 INTCLR14:1;                                     /* INTCLR14         */
    uint32 INTCLR15:1;                                     /* INTCLR15         */
    uint32 INTCLR16:1;                                     /* INTCLR16         */
    uint32 INTCLR17:1;                                     /* INTCLR17         */
    uint32 INTCLR18:1;                                     /* INTCLR18         */
    uint32 INTCLR19:1;                                     /* INTCLR19         */
    uint32 INTCLR20:1;                                     /* INTCLR20         */
    uint32 INTCLR21:1;                                     /* INTCLR21         */
    uint32 INTCLR22:1;                                     /* INTCLR22         */
    uint32 INTCLR23:1;                                     /* INTCLR23         */
    uint32 INTCLR24:1;                                     /* INTCLR24         */
    uint32 INTCLR25:1;                                     /* INTCLR25         */
    uint32 INTCLR26:1;                                     /* INTCLR26         */
    uint32 INTCLR27:1;                                     /* INTCLR27         */
    uint32 INTCLR28:1;                                     /* INTCLR28         */
    uint32 INTCLR29:1;                                     /* INTCLR29         */
    uint32 INTCLR30:1;                                     /* INTCLR30         */
    uint32 INTCLR31:1;                                     /* INTCLR31         */
} __type935;
typedef struct 
{                                                          /* Bit Access       */
    uint32 INTCLR32:1;                                     /* INTCLR32         */
    uint32 INTCLR33:1;                                     /* INTCLR33         */
    uint32 INTCLR34:1;                                     /* INTCLR34         */
    uint32 INTCLR35:1;                                     /* INTCLR35         */
    uint32 INTCLR36:1;                                     /* INTCLR36         */
    uint32 INTCLR37:1;                                     /* INTCLR37         */
    uint32 INTCLR38:1;                                     /* INTCLR38         */
    uint32 INTCLR39:1;                                     /* INTCLR39         */
    uint32 INTCLR40:1;                                     /* INTCLR40         */
    uint32 INTCLR41:1;                                     /* INTCLR41         */
    uint32 INTCLR42:1;                                     /* INTCLR42         */
    uint32 INTCLR43:1;                                     /* INTCLR43         */
    uint32 INTCLR44:1;                                     /* INTCLR44         */
    uint32 INTCLR45:1;                                     /* INTCLR45         */
    uint32 INTCLR46:1;                                     /* INTCLR46         */
    uint32 INTCLR47:1;                                     /* INTCLR47         */
    uint32 INTCLR48:1;                                     /* INTCLR48         */
    uint32 INTCLR49:1;                                     /* INTCLR49         */
    uint32 INTCLR50:1;                                     /* INTCLR50         */
    uint32 INTCLR51:1;                                     /* INTCLR51         */
    uint32 INTCLR52:1;                                     /* INTCLR52         */
    uint32 INTCLR53:1;                                     /* INTCLR53         */
    uint32 INTCLR54:1;                                     /* INTCLR54         */
    uint32 INTCLR55:1;                                     /* INTCLR55         */
    uint32 INTCLR56:1;                                     /* INTCLR56         */
    uint32 INTCLR57:1;                                     /* INTCLR57         */
    uint32 INTCLR58:1;                                     /* INTCLR58         */
    uint32 INTCLR59:1;                                     /* INTCLR59         */
    uint32 INTCLR60:1;                                     /* INTCLR60         */
    uint32 INTCLR61:1;                                     /* INTCLR61         */
    uint32 INTCLR62:1;                                     /* INTCLR62         */
    uint32 INTCLR63:1;                                     /* INTCLR63         */
} __type936;
typedef struct 
{                                                          /* Bit Access       */
    uint32 INTCLR64:1;                                     /* INTCLR64         */
    uint32 INTCLR65:1;                                     /* INTCLR65         */
    uint32 INTCLR66:1;                                     /* INTCLR66         */
    uint32 INTCLR67:1;                                     /* INTCLR67         */
    uint32 INTCLR68:1;                                     /* INTCLR68         */
    uint32 INTCLR69:1;                                     /* INTCLR69         */
    uint32 INTCLR70:1;                                     /* INTCLR70         */
    uint32 INTCLR71:1;                                     /* INTCLR71         */
    uint32 INTCLR72:1;                                     /* INTCLR72         */
    uint32 INTCLR73:1;                                     /* INTCLR73         */
    uint32 INTCLR74:1;                                     /* INTCLR74         */
    uint32 INTCLR75:1;                                     /* INTCLR75         */
    uint32 INTCLR76:1;                                     /* INTCLR76         */
    uint32 INTCLR77:1;                                     /* INTCLR77         */
    uint32 INTCLR78:1;                                     /* INTCLR78         */
    uint32 INTCLR79:1;                                     /* INTCLR79         */
    uint32 INTCLR80:1;                                     /* INTCLR80         */
    uint32 INTCLR81:1;                                     /* INTCLR81         */
    uint32 INTCLR82:1;                                     /* INTCLR82         */
    uint32 INTCLR83:1;                                     /* INTCLR83         */
    uint32 INTCLR84:1;                                     /* INTCLR84         */
    uint32 INTCLR85:1;                                     /* INTCLR85         */
    uint32 INTCLR86:1;                                     /* INTCLR86         */
    uint32 INTCLR87:1;                                     /* INTCLR87         */
    uint32 INTCLR88:1;                                     /* INTCLR88         */
    uint32 INTCLR89:1;                                     /* INTCLR89         */
    uint32 INTCLR90:1;                                     /* INTCLR90         */
    uint32 INTCLR91:1;                                     /* INTCLR91         */
    uint32 INTCLR92:1;                                     /* INTCLR92         */
    uint32 INTCLR93:1;                                     /* INTCLR93         */
    uint32 INTCLR94:1;                                     /* INTCLR94         */
    uint32 INTCLR95:1;                                     /* INTCLR95         */
} __type937;
typedef struct 
{                                                          /* Bit Access       */
    uint32 INTCLR96:1;                                     /* INTCLR96         */
    uint32 INTCLR97:1;                                     /* INTCLR97         */
    uint32 INTCLR98:1;                                     /* INTCLR98         */
    uint32 INTCLR99:1;                                     /* INTCLR99         */
    uint32 INTCLR100:1;                                    /* INTCLR100        */
    uint32 INTCLR101:1;                                    /* INTCLR101        */
    uint32 INTCLR102:1;                                    /* INTCLR102        */
    uint32 INTCLR103:1;                                    /* INTCLR103        */
    uint32 INTCLR104:1;                                    /* INTCLR104        */
    uint32 INTCLR105:1;                                    /* INTCLR105        */
    uint32 INTCLR106:1;                                    /* INTCLR106        */
    uint32 INTCLR107:1;                                    /* INTCLR107        */
    uint32 INTCLR108:1;                                    /* INTCLR108        */
    uint32 INTCLR109:1;                                    /* INTCLR109        */
    uint32 INTCLR110:1;                                    /* INTCLR110        */
    uint32 INTCLR111:1;                                    /* INTCLR111        */
    uint32 INTCLR112:1;                                    /* INTCLR112        */
    uint32 INTCLR113:1;                                    /* INTCLR113        */
    uint32 INTCLR114:1;                                    /* INTCLR114        */
    uint32 INTCLR115:1;                                    /* INTCLR115        */
    uint32 INTCLR116:1;                                    /* INTCLR116        */
    uint32 INTCLR117:1;                                    /* INTCLR117        */
    uint32 INTCLR118:1;                                    /* INTCLR118        */
    uint32 INTCLR119:1;                                    /* INTCLR119        */
    uint32 INTCLR120:1;                                    /* INTCLR120        */
    uint32 INTCLR121:1;                                    /* INTCLR121        */
    uint32 INTCLR122:1;                                    /* INTCLR122        */
    uint32 INTCLR123:1;                                    /* INTCLR123        */
    uint32 INTCLR124:1;                                    /* INTCLR124        */
    uint32 INTCLR125:1;                                    /* INTCLR125        */
    uint32 INTCLR126:1;                                    /* INTCLR126        */
    uint32 INTCLR127:1;                                    /* INTCLR127        */
} __type938;
typedef struct 
{                                                          /* Bit Access       */
    uint32 INTCTCLR0:1;                                    /* INTCTCLR0        */
    uint32 INTCTCLR1:1;                                    /* INTCTCLR1        */
    uint32 INTCTCLR2:1;                                    /* INTCTCLR2        */
    uint32 INTCTCLR3:1;                                    /* INTCTCLR3        */
    uint32 INTCTCLR4:1;                                    /* INTCTCLR4        */
    uint32 INTCTCLR5:1;                                    /* INTCTCLR5        */
    uint32 INTCTCLR6:1;                                    /* INTCTCLR6        */
    uint32 INTCTCLR7:1;                                    /* INTCTCLR7        */
    uint32 INTCTCLR8:1;                                    /* INTCTCLR8        */
    uint32 INTCTCLR9:1;                                    /* INTCTCLR9        */
    uint32 INTCTCLR10:1;                                   /* INTCTCLR10       */
    uint32 INTCTCLR11:1;                                   /* INTCTCLR11       */
    uint32 INTCTCLR12:1;                                   /* INTCTCLR12       */
    uint32 INTCTCLR13:1;                                   /* INTCTCLR13       */
    uint32 INTCTCLR14:1;                                   /* INTCTCLR14       */
    uint32 INTCTCLR15:1;                                   /* INTCTCLR15       */
    uint32 INTCTCLR16:1;                                   /* INTCTCLR16       */
    uint32 INTCTCLR17:1;                                   /* INTCTCLR17       */
    uint32 INTCTCLR18:1;                                   /* INTCTCLR18       */
    uint32 INTCTCLR19:1;                                   /* INTCTCLR19       */
    uint32 INTCTCLR20:1;                                   /* INTCTCLR20       */
    uint32 INTCTCLR21:1;                                   /* INTCTCLR21       */
    uint32 INTCTCLR22:1;                                   /* INTCTCLR22       */
    uint32 INTCTCLR23:1;                                   /* INTCTCLR23       */
    uint32 INTCTCLR24:1;                                   /* INTCTCLR24       */
    uint32 INTCTCLR25:1;                                   /* INTCTCLR25       */
    uint32 INTCTCLR26:1;                                   /* INTCTCLR26       */
    uint32 INTCTCLR27:1;                                   /* INTCTCLR27       */
    uint32 INTCTCLR28:1;                                   /* INTCTCLR28       */
    uint32 INTCTCLR29:1;                                   /* INTCTCLR29       */
    uint32 INTCTCLR30:1;                                   /* INTCTCLR30       */
    uint32 INTCTCLR31:1;                                   /* INTCTCLR31       */
} __type939;
typedef struct 
{                                                          /* Bit Access       */
    uint32 INTCTCLR32:1;                                   /* INTCTCLR32       */
    uint32 INTCTCLR33:1;                                   /* INTCTCLR33       */
    uint32 INTCTCLR34:1;                                   /* INTCTCLR34       */
    uint32 INTCTCLR35:1;                                   /* INTCTCLR35       */
    uint32 INTCTCLR36:1;                                   /* INTCTCLR36       */
    uint32 INTCTCLR37:1;                                   /* INTCTCLR37       */
    uint32 INTCTCLR38:1;                                   /* INTCTCLR38       */
    uint32 INTCTCLR39:1;                                   /* INTCTCLR39       */
    uint32 INTCTCLR40:1;                                   /* INTCTCLR40       */
    uint32 INTCTCLR41:1;                                   /* INTCTCLR41       */
    uint32 INTCTCLR42:1;                                   /* INTCTCLR42       */
    uint32 INTCTCLR43:1;                                   /* INTCTCLR43       */
    uint32 INTCTCLR44:1;                                   /* INTCTCLR44       */
    uint32 INTCTCLR45:1;                                   /* INTCTCLR45       */
    uint32 INTCTCLR46:1;                                   /* INTCTCLR46       */
    uint32 INTCTCLR47:1;                                   /* INTCTCLR47       */
    uint32 INTCTCLR48:1;                                   /* INTCTCLR48       */
    uint32 INTCTCLR49:1;                                   /* INTCTCLR49       */
    uint32 INTCTCLR50:1;                                   /* INTCTCLR50       */
    uint32 INTCTCLR51:1;                                   /* INTCTCLR51       */
    uint32 INTCTCLR52:1;                                   /* INTCTCLR52       */
    uint32 INTCTCLR53:1;                                   /* INTCTCLR53       */
    uint32 INTCTCLR54:1;                                   /* INTCTCLR54       */
    uint32 INTCTCLR55:1;                                   /* INTCTCLR55       */
    uint32 INTCTCLR56:1;                                   /* INTCTCLR56       */
    uint32 INTCTCLR57:1;                                   /* INTCTCLR57       */
    uint32 INTCTCLR58:1;                                   /* INTCTCLR58       */
    uint32 INTCTCLR59:1;                                   /* INTCTCLR59       */
    uint32 INTCTCLR60:1;                                   /* INTCTCLR60       */
    uint32 INTCTCLR61:1;                                   /* INTCTCLR61       */
    uint32 INTCTCLR62:1;                                   /* INTCTCLR62       */
    uint32 INTCTCLR63:1;                                   /* INTCTCLR63       */
} __type940;
typedef struct 
{                                                          /* Bit Access       */
    uint32 INTCTCLR64:1;                                   /* INTCTCLR64       */
    uint32 INTCTCLR65:1;                                   /* INTCTCLR65       */
    uint32 INTCTCLR66:1;                                   /* INTCTCLR66       */
    uint32 INTCTCLR67:1;                                   /* INTCTCLR67       */
    uint32 INTCTCLR68:1;                                   /* INTCTCLR68       */
    uint32 INTCTCLR69:1;                                   /* INTCTCLR69       */
    uint32 INTCTCLR70:1;                                   /* INTCTCLR70       */
    uint32 INTCTCLR71:1;                                   /* INTCTCLR71       */
    uint32 INTCTCLR72:1;                                   /* INTCTCLR72       */
    uint32 INTCTCLR73:1;                                   /* INTCTCLR73       */
    uint32 INTCTCLR74:1;                                   /* INTCTCLR74       */
    uint32 INTCTCLR75:1;                                   /* INTCTCLR75       */
    uint32 INTCTCLR76:1;                                   /* INTCTCLR76       */
    uint32 INTCTCLR77:1;                                   /* INTCTCLR77       */
    uint32 INTCTCLR78:1;                                   /* INTCTCLR78       */
    uint32 INTCTCLR79:1;                                   /* INTCTCLR79       */
    uint32 INTCTCLR80:1;                                   /* INTCTCLR80       */
    uint32 INTCTCLR81:1;                                   /* INTCTCLR81       */
    uint32 INTCTCLR82:1;                                   /* INTCTCLR82       */
    uint32 INTCTCLR83:1;                                   /* INTCTCLR83       */
    uint32 INTCTCLR84:1;                                   /* INTCTCLR84       */
    uint32 INTCTCLR85:1;                                   /* INTCTCLR85       */
    uint32 INTCTCLR86:1;                                   /* INTCTCLR86       */
    uint32 INTCTCLR87:1;                                   /* INTCTCLR87       */
    uint32 INTCTCLR88:1;                                   /* INTCTCLR88       */
    uint32 INTCTCLR89:1;                                   /* INTCTCLR89       */
    uint32 INTCTCLR90:1;                                   /* INTCTCLR90       */
    uint32 INTCTCLR91:1;                                   /* INTCTCLR91       */
    uint32 INTCTCLR92:1;                                   /* INTCTCLR92       */
    uint32 INTCTCLR93:1;                                   /* INTCTCLR93       */
    uint32 INTCTCLR94:1;                                   /* INTCTCLR94       */
    uint32 INTCTCLR95:1;                                   /* INTCTCLR95       */
} __type941;
typedef struct 
{                                                          /* Bit Access       */
    uint32 INTCTCLR96:1;                                   /* INTCTCLR96       */
    uint32 INTCTCLR97:1;                                   /* INTCTCLR97       */
    uint32 INTCTCLR98:1;                                   /* INTCTCLR98       */
    uint32 INTCTCLR99:1;                                   /* INTCTCLR99       */
    uint32 INTCTCLR100:1;                                  /* INTCTCLR100      */
    uint32 INTCTCLR101:1;                                  /* INTCTCLR101      */
    uint32 INTCTCLR102:1;                                  /* INTCTCLR102      */
    uint32 INTCTCLR103:1;                                  /* INTCTCLR103      */
    uint32 INTCTCLR104:1;                                  /* INTCTCLR104      */
    uint32 INTCTCLR105:1;                                  /* INTCTCLR105      */
    uint32 INTCTCLR106:1;                                  /* INTCTCLR106      */
    uint32 INTCTCLR107:1;                                  /* INTCTCLR107      */
    uint32 INTCTCLR108:1;                                  /* INTCTCLR108      */
    uint32 INTCTCLR109:1;                                  /* INTCTCLR109      */
    uint32 INTCTCLR110:1;                                  /* INTCTCLR110      */
    uint32 INTCTCLR111:1;                                  /* INTCTCLR111      */
    uint32 INTCTCLR112:1;                                  /* INTCTCLR112      */
    uint32 INTCTCLR113:1;                                  /* INTCTCLR113      */
    uint32 INTCTCLR114:1;                                  /* INTCTCLR114      */
    uint32 INTCTCLR115:1;                                  /* INTCTCLR115      */
    uint32 INTCTCLR116:1;                                  /* INTCTCLR116      */
    uint32 INTCTCLR117:1;                                  /* INTCTCLR117      */
    uint32 INTCTCLR118:1;                                  /* INTCTCLR118      */
    uint32 INTCTCLR119:1;                                  /* INTCTCLR119      */
    uint32 INTCTCLR120:1;                                  /* INTCTCLR120      */
    uint32 INTCTCLR121:1;                                  /* INTCTCLR121      */
    uint32 INTCTCLR122:1;                                  /* INTCTCLR122      */
    uint32 INTCTCLR123:1;                                  /* INTCTCLR123      */
    uint32 INTCTCLR124:1;                                  /* INTCTCLR124      */
    uint32 INTCTCLR125:1;                                  /* INTCTCLR125      */
    uint32 INTCTCLR126:1;                                  /* INTCTCLR126      */
    uint32 INTCTCLR127:1;                                  /* INTCTCLR127      */
} __type942;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP8:4;                                         /* EIP8[3:0]        */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB8:1;                                        /* EITB8            */
    uint8  EIMK8:1;                                        /* EIMK8            */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF8:1;                                        /* EIRF8            */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT8:1;                                  /* EICT8            */
} __type961;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP9:4;                                         /* EIP9[3:0]        */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB9:1;                                        /* EITB9            */
    uint8  EIMK9:1;                                        /* EIMK9            */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF9:1;                                        /* EIRF9            */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT9:1;                                  /* EICT9            */
} __type962;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP16:4;                                        /* EIP16[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB16:1;                                       /* EITB16           */
    uint8  EIMK16:1;                                       /* EIMK16           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF16:1;                                       /* EIRF16           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT16:1;                                 /* EICT16           */
} __type963;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP17:4;                                        /* EIP17[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB17:1;                                       /* EITB17           */
    uint8  EIMK17:1;                                       /* EIMK17           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF17:1;                                       /* EIRF17           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT17:1;                                 /* EICT17           */
} __type964;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP18:4;                                        /* EIP18[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB18:1;                                       /* EITB18           */
    uint8  EIMK18:1;                                       /* EIMK18           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF18:1;                                       /* EIRF18           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT18:1;                                 /* EICT18           */
} __type965;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP19:4;                                        /* EIP19[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB19:1;                                       /* EITB19           */
    uint8  EIMK19:1;                                       /* EIMK19           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF19:1;                                       /* EIRF19           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT19:1;                                 /* EICT19           */
} __type966;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP20:4;                                        /* EIP20[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB20:1;                                       /* EITB20           */
    uint8  EIMK20:1;                                       /* EIMK20           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF20:1;                                       /* EIRF20           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT20:1;                                 /* EICT20           */
} __type967;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP21:4;                                        /* EIP21[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB21:1;                                       /* EITB21           */
    uint8  EIMK21:1;                                       /* EIMK21           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF21:1;                                       /* EIRF21           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT21:1;                                 /* EICT21           */
} __type968;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP22:4;                                        /* EIP22[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB22:1;                                       /* EITB22           */
    uint8  EIMK22:1;                                       /* EIMK22           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF22:1;                                       /* EIRF22           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT22:1;                                 /* EICT22           */
} __type969;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP23:4;                                        /* EIP23[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB23:1;                                       /* EITB23           */
    uint8  EIMK23:1;                                       /* EIMK23           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF23:1;                                       /* EIRF23           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT23:1;                                 /* EICT23           */
} __type970;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP24:4;                                        /* EIP24[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB24:1;                                       /* EITB24           */
    uint8  EIMK24:1;                                       /* EIMK24           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF24:1;                                       /* EIRF24           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT24:1;                                 /* EICT24           */
} __type971;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP25:4;                                        /* EIP25[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB25:1;                                       /* EITB25           */
    uint8  EIMK25:1;                                       /* EIMK25           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF25:1;                                       /* EIRF25           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT25:1;                                 /* EICT25           */
} __type972;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP26:4;                                        /* EIP26[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB26:1;                                       /* EITB26           */
    uint8  EIMK26:1;                                       /* EIMK26           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF26:1;                                       /* EIRF26           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT26:1;                                 /* EICT26           */
} __type973;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP27:4;                                        /* EIP27[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB27:1;                                       /* EITB27           */
    uint8  EIMK27:1;                                       /* EIMK27           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF27:1;                                       /* EIRF27           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT27:1;                                 /* EICT27           */
} __type974;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP28:4;                                        /* EIP28[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB28:1;                                       /* EITB28           */
    uint8  EIMK28:1;                                       /* EIMK28           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF28:1;                                       /* EIRF28           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT28:1;                                 /* EICT28           */
} __type975;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP29:4;                                        /* EIP29[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB29:1;                                       /* EITB29           */
    uint8  EIMK29:1;                                       /* EIMK29           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF29:1;                                       /* EIRF29           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT29:1;                                 /* EICT29           */
} __type976;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP30:4;                                        /* EIP30[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB30:1;                                       /* EITB30           */
    uint8  EIMK30:1;                                       /* EIMK30           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF30:1;                                       /* EIRF30           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT30:1;                                 /* EICT30           */
} __type977;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP31:4;                                        /* EIP31[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB31:1;                                       /* EITB31           */
    uint8  EIMK31:1;                                       /* EIMK31           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF31:1;                                       /* EIRF31           */
    uint8  :2;                                             /* Reserved Bits    */
    const uint8  EICT31:1;                                 /* EICT31           */
} __type978;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :4;                                             /* Reserved Bits    */
    const uint8  FNRF:1;                                   /* FNRF             */
    uint8  :3;                                             /* Reserved Bits    */
} __type979;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :4;                                             /* Reserved Bits    */
    const uint8  FIRF:1;                                   /* FIRF             */
    uint8  :3;                                             /* Reserved Bits    */
} __type980;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  IMR0EIMK8:1;                                    /* IMR0EIMK8        */
    uint8  IMR0EIMK9:1;                                    /* IMR0EIMK9        */
    uint8  :6;                                             /* Reserved Bits    */
    uint8  IMR0EIMK16:1;                                   /* IMR0EIMK16       */
    uint8  IMR0EIMK17:1;                                   /* IMR0EIMK17       */
    uint8  IMR0EIMK18:1;                                   /* IMR0EIMK18       */
    uint8  IMR0EIMK19:1;                                   /* IMR0EIMK19       */
    uint8  IMR0EIMK20:1;                                   /* IMR0EIMK20       */
    uint8  IMR0EIMK21:1;                                   /* IMR0EIMK21       */
    uint8  IMR0EIMK22:1;                                   /* IMR0EIMK22       */
    uint8  IMR0EIMK23:1;                                   /* IMR0EIMK23       */
    uint8  IMR0EIMK24:1;                                   /* IMR0EIMK24       */
    uint8  IMR0EIMK25:1;                                   /* IMR0EIMK25       */
    uint8  IMR0EIMK26:1;                                   /* IMR0EIMK26       */
    uint8  IMR0EIMK27:1;                                   /* IMR0EIMK27       */
    uint8  IMR0EIMK28:1;                                   /* IMR0EIMK28       */
    uint8  IMR0EIMK29:1;                                   /* IMR0EIMK29       */
    uint8  IMR0EIMK30:1;                                   /* IMR0EIMK30       */
    uint8  IMR0EIMK31:1;                                   /* IMR0EIMK31       */
} __type981;
typedef struct 
{                                                          /* Bit Access       */
    const uint32 PEID:3;                                   /* PEID[2:0]        */
    uint32 :13;                                            /* Reserved Bits    */
    uint32 GPID:2;                                         /* GPID[17:16]      */
    uint32 :14;                                            /* Reserved Bits    */
} __type982;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP32:4;                                        /* EIP32[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB32:1;                                       /* EITB32           */
    uint8  EIMK32:1;                                       /* EIMK32           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF32:1;                                       /* EIRF32           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT32:1;                                       /* EICT32           */
} __type1031;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP33:4;                                        /* EIP33[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB33:1;                                       /* EITB33           */
    uint8  EIMK33:1;                                       /* EIMK33           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF33:1;                                       /* EIRF33           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT33:1;                                       /* EICT33           */
} __type1032;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP34:4;                                        /* EIP34[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB34:1;                                       /* EITB34           */
    uint8  EIMK34:1;                                       /* EIMK34           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF34:1;                                       /* EIRF34           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT34:1;                                       /* EICT34           */
} __type1033;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP35:4;                                        /* EIP35[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB35:1;                                       /* EITB35           */
    uint8  EIMK35:1;                                       /* EIMK35           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF35:1;                                       /* EIRF35           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT35:1;                                       /* EICT35           */
} __type1034;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP36:4;                                        /* EIP36[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB36:1;                                       /* EITB36           */
    uint8  EIMK36:1;                                       /* EIMK36           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF36:1;                                       /* EIRF36           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT36:1;                                       /* EICT36           */
} __type1035;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP40:4;                                        /* EIP40[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB40:1;                                       /* EITB40           */
    uint8  EIMK40:1;                                       /* EIMK40           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF40:1;                                       /* EIRF40           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT40:1;                                       /* EICT40           */
} __type1036;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP41:4;                                        /* EIP41[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB41:1;                                       /* EITB41           */
    uint8  EIMK41:1;                                       /* EIMK41           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF41:1;                                       /* EIRF41           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT41:1;                                       /* EICT41           */
} __type1037;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP42:4;                                        /* EIP42[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB42:1;                                       /* EITB42           */
    uint8  EIMK42:1;                                       /* EIMK42           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF42:1;                                       /* EIRF42           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT42:1;                                       /* EICT42           */
} __type1038;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP43:4;                                        /* EIP43[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB43:1;                                       /* EITB43           */
    uint8  EIMK43:1;                                       /* EIMK43           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF43:1;                                       /* EIRF43           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT43:1;                                       /* EICT43           */
} __type1039;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP44:4;                                        /* EIP44[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB44:1;                                       /* EITB44           */
    uint8  EIMK44:1;                                       /* EIMK44           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF44:1;                                       /* EIRF44           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT44:1;                                       /* EICT44           */
} __type1040;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP45:4;                                        /* EIP45[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB45:1;                                       /* EITB45           */
    uint8  EIMK45:1;                                       /* EIMK45           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF45:1;                                       /* EIRF45           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT45:1;                                       /* EICT45           */
} __type1041;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP46:4;                                        /* EIP46[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB46:1;                                       /* EITB46           */
    uint8  EIMK46:1;                                       /* EIMK46           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF46:1;                                       /* EIRF46           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT46:1;                                       /* EICT46           */
} __type1042;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP47:4;                                        /* EIP47[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB47:1;                                       /* EITB47           */
    uint8  EIMK47:1;                                       /* EIMK47           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF47:1;                                       /* EIRF47           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT47:1;                                       /* EICT47           */
} __type1043;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP48:4;                                        /* EIP48[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB48:1;                                       /* EITB48           */
    uint8  EIMK48:1;                                       /* EIMK48           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF48:1;                                       /* EIRF48           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT48:1;                                       /* EICT48           */
} __type1044;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP49:4;                                        /* EIP49[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB49:1;                                       /* EITB49           */
    uint8  EIMK49:1;                                       /* EIMK49           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF49:1;                                       /* EIRF49           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT49:1;                                       /* EICT49           */
} __type1045;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP50:4;                                        /* EIP50[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB50:1;                                       /* EITB50           */
    uint8  EIMK50:1;                                       /* EIMK50           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF50:1;                                       /* EIRF50           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT50:1;                                       /* EICT50           */
} __type1046;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP51:4;                                        /* EIP51[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB51:1;                                       /* EITB51           */
    uint8  EIMK51:1;                                       /* EIMK51           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF51:1;                                       /* EIRF51           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT51:1;                                       /* EICT51           */
} __type1047;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP52:4;                                        /* EIP52[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB52:1;                                       /* EITB52           */
    uint8  EIMK52:1;                                       /* EIMK52           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF52:1;                                       /* EIRF52           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT52:1;                                       /* EICT52           */
} __type1048;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP53:4;                                        /* EIP53[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB53:1;                                       /* EITB53           */
    uint8  EIMK53:1;                                       /* EIMK53           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF53:1;                                       /* EIRF53           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT53:1;                                       /* EICT53           */
} __type1049;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP54:4;                                        /* EIP54[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB54:1;                                       /* EITB54           */
    uint8  EIMK54:1;                                       /* EIMK54           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF54:1;                                       /* EIRF54           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT54:1;                                       /* EICT54           */
} __type1050;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP55:4;                                        /* EIP55[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB55:1;                                       /* EITB55           */
    uint8  EIMK55:1;                                       /* EIMK55           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF55:1;                                       /* EIRF55           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT55:1;                                       /* EICT55           */
} __type1051;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP56:4;                                        /* EIP56[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB56:1;                                       /* EITB56           */
    uint8  EIMK56:1;                                       /* EIMK56           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF56:1;                                       /* EIRF56           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT56:1;                                       /* EICT56           */
} __type1052;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP57:4;                                        /* EIP57[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB57:1;                                       /* EITB57           */
    uint8  EIMK57:1;                                       /* EIMK57           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF57:1;                                       /* EIRF57           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT57:1;                                       /* EICT57           */
} __type1053;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP58:4;                                        /* EIP58[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB58:1;                                       /* EITB58           */
    uint8  EIMK58:1;                                       /* EIMK58           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF58:1;                                       /* EIRF58           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT58:1;                                       /* EICT58           */
} __type1054;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP59:4;                                        /* EIP59[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB59:1;                                       /* EITB59           */
    uint8  EIMK59:1;                                       /* EIMK59           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF59:1;                                       /* EIRF59           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT59:1;                                       /* EICT59           */
} __type1055;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP60:4;                                        /* EIP60[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB60:1;                                       /* EITB60           */
    uint8  EIMK60:1;                                       /* EIMK60           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF60:1;                                       /* EIRF60           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT60:1;                                       /* EICT60           */
} __type1056;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP61:4;                                        /* EIP61[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB61:1;                                       /* EITB61           */
    uint8  EIMK61:1;                                       /* EIMK61           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF61:1;                                       /* EIRF61           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT61:1;                                       /* EICT61           */
} __type1057;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP62:4;                                        /* EIP62[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB62:1;                                       /* EITB62           */
    uint8  EIMK62:1;                                       /* EIMK62           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF62:1;                                       /* EIRF62           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT62:1;                                       /* EICT62           */
} __type1058;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP63:4;                                        /* EIP63[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB63:1;                                       /* EITB63           */
    uint8  EIMK63:1;                                       /* EIMK63           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF63:1;                                       /* EIRF63           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT63:1;                                       /* EICT63           */
} __type1059;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP64:4;                                        /* EIP64[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB64:1;                                       /* EITB64           */
    uint8  EIMK64:1;                                       /* EIMK64           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF64:1;                                       /* EIRF64           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT64:1;                                       /* EICT64           */
} __type1060;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP65:4;                                        /* EIP65[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB65:1;                                       /* EITB65           */
    uint8  EIMK65:1;                                       /* EIMK65           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF65:1;                                       /* EIRF65           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT65:1;                                       /* EICT65           */
} __type1061;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP66:4;                                        /* EIP66[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB66:1;                                       /* EITB66           */
    uint8  EIMK66:1;                                       /* EIMK66           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF66:1;                                       /* EIRF66           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT66:1;                                       /* EICT66           */
} __type1062;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP67:4;                                        /* EIP67[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB67:1;                                       /* EITB67           */
    uint8  EIMK67:1;                                       /* EIMK67           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF67:1;                                       /* EIRF67           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT67:1;                                       /* EICT67           */
} __type1063;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP68:4;                                        /* EIP68[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB68:1;                                       /* EITB68           */
    uint8  EIMK68:1;                                       /* EIMK68           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF68:1;                                       /* EIRF68           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT68:1;                                       /* EICT68           */
} __type1064;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP69:4;                                        /* EIP69[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB69:1;                                       /* EITB69           */
    uint8  EIMK69:1;                                       /* EIMK69           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF69:1;                                       /* EIRF69           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT69:1;                                       /* EICT69           */
} __type1065;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP70:4;                                        /* EIP70[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB70:1;                                       /* EITB70           */
    uint8  EIMK70:1;                                       /* EIMK70           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF70:1;                                       /* EIRF70           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT70:1;                                       /* EICT70           */
} __type1066;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP71:4;                                        /* EIP71[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB71:1;                                       /* EITB71           */
    uint8  EIMK71:1;                                       /* EIMK71           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF71:1;                                       /* EIRF71           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT71:1;                                       /* EICT71           */
} __type1067;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP72:4;                                        /* EIP72[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB72:1;                                       /* EITB72           */
    uint8  EIMK72:1;                                       /* EIMK72           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF72:1;                                       /* EIRF72           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT72:1;                                       /* EICT72           */
} __type1068;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP73:4;                                        /* EIP73[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB73:1;                                       /* EITB73           */
    uint8  EIMK73:1;                                       /* EIMK73           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF73:1;                                       /* EIRF73           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT73:1;                                       /* EICT73           */
} __type1069;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP74:4;                                        /* EIP74[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB74:1;                                       /* EITB74           */
    uint8  EIMK74:1;                                       /* EIMK74           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF74:1;                                       /* EIRF74           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT74:1;                                       /* EICT74           */
} __type1070;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP75:4;                                        /* EIP75[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB75:1;                                       /* EITB75           */
    uint8  EIMK75:1;                                       /* EIMK75           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF75:1;                                       /* EIRF75           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT75:1;                                       /* EICT75           */
} __type1071;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP76:4;                                        /* EIP76[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB76:1;                                       /* EITB76           */
    uint8  EIMK76:1;                                       /* EIMK76           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF76:1;                                       /* EIRF76           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT76:1;                                       /* EICT76           */
} __type1072;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP77:4;                                        /* EIP77[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB77:1;                                       /* EITB77           */
    uint8  EIMK77:1;                                       /* EIMK77           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF77:1;                                       /* EIRF77           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT77:1;                                       /* EICT77           */
} __type1073;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP78:4;                                        /* EIP78[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB78:1;                                       /* EITB78           */
    uint8  EIMK78:1;                                       /* EIMK78           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF78:1;                                       /* EIRF78           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT78:1;                                       /* EICT78           */
} __type1074;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP79:4;                                        /* EIP79[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB79:1;                                       /* EITB79           */
    uint8  EIMK79:1;                                       /* EIMK79           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF79:1;                                       /* EIRF79           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT79:1;                                       /* EICT79           */
} __type1075;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP80:4;                                        /* EIP80[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB80:1;                                       /* EITB80           */
    uint8  EIMK80:1;                                       /* EIMK80           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF80:1;                                       /* EIRF80           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT80:1;                                       /* EICT80           */
} __type1076;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP81:4;                                        /* EIP81[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB81:1;                                       /* EITB81           */
    uint8  EIMK81:1;                                       /* EIMK81           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF81:1;                                       /* EIRF81           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT81:1;                                       /* EICT81           */
} __type1077;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP82:4;                                        /* EIP82[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB82:1;                                       /* EITB82           */
    uint8  EIMK82:1;                                       /* EIMK82           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF82:1;                                       /* EIRF82           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT82:1;                                       /* EICT82           */
} __type1078;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP83:4;                                        /* EIP83[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB83:1;                                       /* EITB83           */
    uint8  EIMK83:1;                                       /* EIMK83           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF83:1;                                       /* EIRF83           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT83:1;                                       /* EICT83           */
} __type1079;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP84:4;                                        /* EIP84[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB84:1;                                       /* EITB84           */
    uint8  EIMK84:1;                                       /* EIMK84           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF84:1;                                       /* EIRF84           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT84:1;                                       /* EICT84           */
} __type1080;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP85:4;                                        /* EIP85[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB85:1;                                       /* EITB85           */
    uint8  EIMK85:1;                                       /* EIMK85           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF85:1;                                       /* EIRF85           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT85:1;                                       /* EICT85           */
} __type1081;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP86:4;                                        /* EIP86[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB86:1;                                       /* EITB86           */
    uint8  EIMK86:1;                                       /* EIMK86           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF86:1;                                       /* EIRF86           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT86:1;                                       /* EICT86           */
} __type1082;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP87:4;                                        /* EIP87[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB87:1;                                       /* EITB87           */
    uint8  EIMK87:1;                                       /* EIMK87           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF87:1;                                       /* EIRF87           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT87:1;                                       /* EICT87           */
} __type1083;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP88:4;                                        /* EIP88[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB88:1;                                       /* EITB88           */
    uint8  EIMK88:1;                                       /* EIMK88           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF88:1;                                       /* EIRF88           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT88:1;                                       /* EICT88           */
} __type1084;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP89:4;                                        /* EIP89[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB89:1;                                       /* EITB89           */
    uint8  EIMK89:1;                                       /* EIMK89           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF89:1;                                       /* EIRF89           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT89:1;                                       /* EICT89           */
} __type1085;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP90:4;                                        /* EIP90[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB90:1;                                       /* EITB90           */
    uint8  EIMK90:1;                                       /* EIMK90           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF90:1;                                       /* EIRF90           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT90:1;                                       /* EICT90           */
} __type1086;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP91:4;                                        /* EIP91[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB91:1;                                       /* EITB91           */
    uint8  EIMK91:1;                                       /* EIMK91           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF91:1;                                       /* EIRF91           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT91:1;                                       /* EICT91           */
} __type1087;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP92:4;                                        /* EIP92[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB92:1;                                       /* EITB92           */
    uint8  EIMK92:1;                                       /* EIMK92           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF92:1;                                       /* EIRF92           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT92:1;                                       /* EICT92           */
} __type1088;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP93:4;                                        /* EIP93[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB93:1;                                       /* EITB93           */
    uint8  EIMK93:1;                                       /* EIMK93           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF93:1;                                       /* EIRF93           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT93:1;                                       /* EICT93           */
} __type1089;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP94:4;                                        /* EIP94[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB94:1;                                       /* EITB94           */
    uint8  EIMK94:1;                                       /* EIMK94           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF94:1;                                       /* EIRF94           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT94:1;                                       /* EICT94           */
} __type1090;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP95:4;                                        /* EIP95[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB95:1;                                       /* EITB95           */
    uint8  EIMK95:1;                                       /* EIMK95           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF95:1;                                       /* EIRF95           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT95:1;                                       /* EICT95           */
} __type1091;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP96:4;                                        /* EIP96[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB96:1;                                       /* EITB96           */
    uint8  EIMK96:1;                                       /* EIMK96           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF96:1;                                       /* EIRF96           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT96:1;                                       /* EICT96           */
} __type1092;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP97:4;                                        /* EIP97[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB97:1;                                       /* EITB97           */
    uint8  EIMK97:1;                                       /* EIMK97           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF97:1;                                       /* EIRF97           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT97:1;                                       /* EICT97           */
} __type1093;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP98:4;                                        /* EIP98[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB98:1;                                       /* EITB98           */
    uint8  EIMK98:1;                                       /* EIMK98           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF98:1;                                       /* EIRF98           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT98:1;                                       /* EICT98           */
} __type1094;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP99:4;                                        /* EIP99[3:0]       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB99:1;                                       /* EITB99           */
    uint8  EIMK99:1;                                       /* EIMK99           */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF99:1;                                       /* EIRF99           */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT99:1;                                       /* EICT99           */
} __type1095;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP100:4;                                       /* EIP100[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB100:1;                                      /* EITB100          */
    uint8  EIMK100:1;                                      /* EIMK100          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF100:1;                                      /* EIRF100          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT100:1;                                      /* EICT100          */
} __type1096;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP101:4;                                       /* EIP101[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB101:1;                                      /* EITB101          */
    uint8  EIMK101:1;                                      /* EIMK101          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF101:1;                                      /* EIRF101          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT101:1;                                      /* EICT101          */
} __type1097;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP102:4;                                       /* EIP102[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB102:1;                                      /* EITB102          */
    uint8  EIMK102:1;                                      /* EIMK102          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF102:1;                                      /* EIRF102          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT102:1;                                      /* EICT102          */
} __type1098;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP103:4;                                       /* EIP103[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB103:1;                                      /* EITB103          */
    uint8  EIMK103:1;                                      /* EIMK103          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF103:1;                                      /* EIRF103          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT103:1;                                      /* EICT103          */
} __type1099;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP104:4;                                       /* EIP104[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB104:1;                                      /* EITB104          */
    uint8  EIMK104:1;                                      /* EIMK104          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF104:1;                                      /* EIRF104          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT104:1;                                      /* EICT104          */
} __type1100;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP105:4;                                       /* EIP105[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB105:1;                                      /* EITB105          */
    uint8  EIMK105:1;                                      /* EIMK105          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF105:1;                                      /* EIRF105          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT105:1;                                      /* EICT105          */
} __type1101;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP106:4;                                       /* EIP106[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB106:1;                                      /* EITB106          */
    uint8  EIMK106:1;                                      /* EIMK106          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF106:1;                                      /* EIRF106          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT106:1;                                      /* EICT106          */
} __type1102;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP107:4;                                       /* EIP107[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB107:1;                                      /* EITB107          */
    uint8  EIMK107:1;                                      /* EIMK107          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF107:1;                                      /* EIRF107          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT107:1;                                      /* EICT107          */
} __type1103;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP108:4;                                       /* EIP108[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB108:1;                                      /* EITB108          */
    uint8  EIMK108:1;                                      /* EIMK108          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF108:1;                                      /* EIRF108          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT108:1;                                      /* EICT108          */
} __type1104;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP109:4;                                       /* EIP109[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB109:1;                                      /* EITB109          */
    uint8  EIMK109:1;                                      /* EIMK109          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF109:1;                                      /* EIRF109          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT109:1;                                      /* EICT109          */
} __type1105;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP110:4;                                       /* EIP110[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB110:1;                                      /* EITB110          */
    uint8  EIMK110:1;                                      /* EIMK110          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF110:1;                                      /* EIRF110          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT110:1;                                      /* EICT110          */
} __type1106;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP111:4;                                       /* EIP111[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB111:1;                                      /* EITB111          */
    uint8  EIMK111:1;                                      /* EIMK111          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF111:1;                                      /* EIRF111          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT111:1;                                      /* EICT111          */
} __type1107;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP112:4;                                       /* EIP112[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB112:1;                                      /* EITB112          */
    uint8  EIMK112:1;                                      /* EIMK112          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF112:1;                                      /* EIRF112          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT112:1;                                      /* EICT112          */
} __type1108;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP113:4;                                       /* EIP113[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB113:1;                                      /* EITB113          */
    uint8  EIMK113:1;                                      /* EIMK113          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF113:1;                                      /* EIRF113          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT113:1;                                      /* EICT113          */
} __type1109;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP114:4;                                       /* EIP114[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB114:1;                                      /* EITB114          */
    uint8  EIMK114:1;                                      /* EIMK114          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF114:1;                                      /* EIRF114          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT114:1;                                      /* EICT114          */
} __type1110;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP115:4;                                       /* EIP115[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB115:1;                                      /* EITB115          */
    uint8  EIMK115:1;                                      /* EIMK115          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF115:1;                                      /* EIRF115          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT115:1;                                      /* EICT115          */
} __type1111;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP116:4;                                       /* EIP116[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB116:1;                                      /* EITB116          */
    uint8  EIMK116:1;                                      /* EIMK116          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF116:1;                                      /* EIRF116          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT116:1;                                      /* EICT116          */
} __type1112;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP117:4;                                       /* EIP117[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB117:1;                                      /* EITB117          */
    uint8  EIMK117:1;                                      /* EIMK117          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF117:1;                                      /* EIRF117          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT117:1;                                      /* EICT117          */
} __type1113;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP118:4;                                       /* EIP118[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB118:1;                                      /* EITB118          */
    uint8  EIMK118:1;                                      /* EIMK118          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF118:1;                                      /* EIRF118          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT118:1;                                      /* EICT118          */
} __type1114;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP119:4;                                       /* EIP119[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB119:1;                                      /* EITB119          */
    uint8  EIMK119:1;                                      /* EIMK119          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF119:1;                                      /* EIRF119          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT119:1;                                      /* EICT119          */
} __type1115;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP120:4;                                       /* EIP120[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB120:1;                                      /* EITB120          */
    uint8  EIMK120:1;                                      /* EIMK120          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF120:1;                                      /* EIRF120          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT120:1;                                      /* EICT120          */
} __type1116;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP121:4;                                       /* EIP121[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB121:1;                                      /* EITB121          */
    uint8  EIMK121:1;                                      /* EIMK121          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF121:1;                                      /* EIRF121          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT121:1;                                      /* EICT121          */
} __type1117;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP128:4;                                       /* EIP128[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB128:1;                                      /* EITB128          */
    uint8  EIMK128:1;                                      /* EIMK128          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF128:1;                                      /* EIRF128          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT128:1;                                      /* EICT128          */
} __type1118;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP129:4;                                       /* EIP129[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB129:1;                                      /* EITB129          */
    uint8  EIMK129:1;                                      /* EIMK129          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF129:1;                                      /* EIRF129          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT129:1;                                      /* EICT129          */
} __type1119;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP130:4;                                       /* EIP130[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB130:1;                                      /* EITB130          */
    uint8  EIMK130:1;                                      /* EIMK130          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF130:1;                                      /* EIRF130          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT130:1;                                      /* EICT130          */
} __type1120;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP131:4;                                       /* EIP131[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB131:1;                                      /* EITB131          */
    uint8  EIMK131:1;                                      /* EIMK131          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF131:1;                                      /* EIRF131          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT131:1;                                      /* EICT131          */
} __type1121;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP132:4;                                       /* EIP132[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB132:1;                                      /* EITB132          */
    uint8  EIMK132:1;                                      /* EIMK132          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF132:1;                                      /* EIRF132          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT132:1;                                      /* EICT132          */
} __type1122;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP133:4;                                       /* EIP133[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB133:1;                                      /* EITB133          */
    uint8  EIMK133:1;                                      /* EIMK133          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF133:1;                                      /* EIRF133          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT133:1;                                      /* EICT133          */
} __type1123;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP134:4;                                       /* EIP134[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB134:1;                                      /* EITB134          */
    uint8  EIMK134:1;                                      /* EIMK134          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF134:1;                                      /* EIRF134          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT134:1;                                      /* EICT134          */
} __type1124;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP135:4;                                       /* EIP135[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB135:1;                                      /* EITB135          */
    uint8  EIMK135:1;                                      /* EIMK135          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF135:1;                                      /* EIRF135          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT135:1;                                      /* EICT135          */
} __type1125;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP136:4;                                       /* EIP136[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB136:1;                                      /* EITB136          */
    uint8  EIMK136:1;                                      /* EIMK136          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF136:1;                                      /* EIRF136          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT136:1;                                      /* EICT136          */
} __type1126;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP137:4;                                       /* EIP137[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB137:1;                                      /* EITB137          */
    uint8  EIMK137:1;                                      /* EIMK137          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF137:1;                                      /* EIRF137          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT137:1;                                      /* EICT137          */
} __type1127;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP138:4;                                       /* EIP138[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB138:1;                                      /* EITB138          */
    uint8  EIMK138:1;                                      /* EIMK138          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF138:1;                                      /* EIRF138          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT138:1;                                      /* EICT138          */
} __type1128;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP139:4;                                       /* EIP139[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB139:1;                                      /* EITB139          */
    uint8  EIMK139:1;                                      /* EIMK139          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF139:1;                                      /* EIRF139          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT139:1;                                      /* EICT139          */
} __type1129;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP140:4;                                       /* EIP140[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB140:1;                                      /* EITB140          */
    uint8  EIMK140:1;                                      /* EIMK140          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF140:1;                                      /* EIRF140          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT140:1;                                      /* EICT140          */
} __type1130;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP141:4;                                       /* EIP141[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB141:1;                                      /* EITB141          */
    uint8  EIMK141:1;                                      /* EIMK141          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF141:1;                                      /* EIRF141          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT141:1;                                      /* EICT141          */
} __type1131;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP142:4;                                       /* EIP142[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB142:1;                                      /* EITB142          */
    uint8  EIMK142:1;                                      /* EIMK142          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF142:1;                                      /* EIRF142          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT142:1;                                      /* EICT142          */
} __type1132;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP143:4;                                       /* EIP143[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB143:1;                                      /* EITB143          */
    uint8  EIMK143:1;                                      /* EIMK143          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF143:1;                                      /* EIRF143          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT143:1;                                      /* EICT143          */
} __type1133;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP144:4;                                       /* EIP144[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB144:1;                                      /* EITB144          */
    uint8  EIMK144:1;                                      /* EIMK144          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF144:1;                                      /* EIRF144          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT144:1;                                      /* EICT144          */
} __type1134;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP145:4;                                       /* EIP145[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB145:1;                                      /* EITB145          */
    uint8  EIMK145:1;                                      /* EIMK145          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF145:1;                                      /* EIRF145          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT145:1;                                      /* EICT145          */
} __type1135;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP146:4;                                       /* EIP146[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB146:1;                                      /* EITB146          */
    uint8  EIMK146:1;                                      /* EIMK146          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF146:1;                                      /* EIRF146          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT146:1;                                      /* EICT146          */
} __type1136;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP147:4;                                       /* EIP147[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB147:1;                                      /* EITB147          */
    uint8  EIMK147:1;                                      /* EIMK147          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF147:1;                                      /* EIRF147          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT147:1;                                      /* EICT147          */
} __type1137;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP148:4;                                       /* EIP148[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB148:1;                                      /* EITB148          */
    uint8  EIMK148:1;                                      /* EIMK148          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF148:1;                                      /* EIRF148          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT148:1;                                      /* EICT148          */
} __type1138;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP149:4;                                       /* EIP149[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB149:1;                                      /* EITB149          */
    uint8  EIMK149:1;                                      /* EIMK149          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF149:1;                                      /* EIRF149          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT149:1;                                      /* EICT149          */
} __type1139;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP150:4;                                       /* EIP150[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB150:1;                                      /* EITB150          */
    uint8  EIMK150:1;                                      /* EIMK150          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF150:1;                                      /* EIRF150          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT150:1;                                      /* EICT150          */
} __type1140;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP151:4;                                       /* EIP151[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB151:1;                                      /* EITB151          */
    uint8  EIMK151:1;                                      /* EIMK151          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF151:1;                                      /* EIRF151          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT151:1;                                      /* EICT151          */
} __type1141;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP152:4;                                       /* EIP152[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB152:1;                                      /* EITB152          */
    uint8  EIMK152:1;                                      /* EIMK152          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF152:1;                                      /* EIRF152          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT152:1;                                      /* EICT152          */
} __type1142;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP153:4;                                       /* EIP153[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB153:1;                                      /* EITB153          */
    uint8  EIMK153:1;                                      /* EIMK153          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF153:1;                                      /* EIRF153          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT153:1;                                      /* EICT153          */
} __type1143;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP154:4;                                       /* EIP154[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB154:1;                                      /* EITB154          */
    uint8  EIMK154:1;                                      /* EIMK154          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF154:1;                                      /* EIRF154          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT154:1;                                      /* EICT154          */
} __type1144;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP155:4;                                       /* EIP155[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB155:1;                                      /* EITB155          */
    uint8  EIMK155:1;                                      /* EIMK155          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF155:1;                                      /* EIRF155          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT155:1;                                      /* EICT155          */
} __type1145;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP156:4;                                       /* EIP156[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB156:1;                                      /* EITB156          */
    uint8  EIMK156:1;                                      /* EIMK156          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF156:1;                                      /* EIRF156          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT156:1;                                      /* EICT156          */
} __type1146;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP158:4;                                       /* EIP158[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB158:1;                                      /* EITB158          */
    uint8  EIMK158:1;                                      /* EIMK158          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF158:1;                                      /* EIRF158          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT158:1;                                      /* EICT158          */
} __type1147;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP159:4;                                       /* EIP159[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB159:1;                                      /* EITB159          */
    uint8  EIMK159:1;                                      /* EIMK159          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF159:1;                                      /* EIRF159          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT159:1;                                      /* EICT159          */
} __type1148;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP160:4;                                       /* EIP160[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB160:1;                                      /* EITB160          */
    uint8  EIMK160:1;                                      /* EIMK160          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF160:1;                                      /* EIRF160          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT160:1;                                      /* EICT160          */
} __type1149;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP161:4;                                       /* EIP161[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB161:1;                                      /* EITB161          */
    uint8  EIMK161:1;                                      /* EIMK161          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF161:1;                                      /* EIRF161          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT161:1;                                      /* EICT161          */
} __type1150;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP162:4;                                       /* EIP162[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB162:1;                                      /* EITB162          */
    uint8  EIMK162:1;                                      /* EIMK162          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF162:1;                                      /* EIRF162          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT162:1;                                      /* EICT162          */
} __type1151;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP163:4;                                       /* EIP163[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB163:1;                                      /* EITB163          */
    uint8  EIMK163:1;                                      /* EIMK163          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF163:1;                                      /* EIRF163          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT163:1;                                      /* EICT163          */
} __type1152;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP164:4;                                       /* EIP164[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB164:1;                                      /* EITB164          */
    uint8  EIMK164:1;                                      /* EIMK164          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF164:1;                                      /* EIRF164          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT164:1;                                      /* EICT164          */
} __type1153;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP165:4;                                       /* EIP165[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB165:1;                                      /* EITB165          */
    uint8  EIMK165:1;                                      /* EIMK165          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF165:1;                                      /* EIRF165          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT165:1;                                      /* EICT165          */
} __type1154;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP166:4;                                       /* EIP166[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB166:1;                                      /* EITB166          */
    uint8  EIMK166:1;                                      /* EIMK166          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF166:1;                                      /* EIRF166          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT166:1;                                      /* EICT166          */
} __type1155;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP167:4;                                       /* EIP167[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB167:1;                                      /* EITB167          */
    uint8  EIMK167:1;                                      /* EIMK167          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF167:1;                                      /* EIRF167          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT167:1;                                      /* EICT167          */
} __type1156;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP168:4;                                       /* EIP168[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB168:1;                                      /* EITB168          */
    uint8  EIMK168:1;                                      /* EIMK168          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF168:1;                                      /* EIRF168          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT168:1;                                      /* EICT168          */
} __type1157;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP169:4;                                       /* EIP169[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB169:1;                                      /* EITB169          */
    uint8  EIMK169:1;                                      /* EIMK169          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF169:1;                                      /* EIRF169          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT169:1;                                      /* EICT169          */
} __type1158;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP170:4;                                       /* EIP170[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB170:1;                                      /* EITB170          */
    uint8  EIMK170:1;                                      /* EIMK170          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF170:1;                                      /* EIRF170          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT170:1;                                      /* EICT170          */
} __type1159;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP171:4;                                       /* EIP171[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB171:1;                                      /* EITB171          */
    uint8  EIMK171:1;                                      /* EIMK171          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF171:1;                                      /* EIRF171          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT171:1;                                      /* EICT171          */
} __type1160;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP172:4;                                       /* EIP172[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB172:1;                                      /* EITB172          */
    uint8  EIMK172:1;                                      /* EIMK172          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF172:1;                                      /* EIRF172          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT172:1;                                      /* EICT172          */
} __type1161;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP173:4;                                       /* EIP173[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB173:1;                                      /* EITB173          */
    uint8  EIMK173:1;                                      /* EIMK173          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF173:1;                                      /* EIRF173          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT173:1;                                      /* EICT173          */
} __type1162;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP174:4;                                       /* EIP174[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB174:1;                                      /* EITB174          */
    uint8  EIMK174:1;                                      /* EIMK174          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF174:1;                                      /* EIRF174          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT174:1;                                      /* EICT174          */
} __type1163;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP175:4;                                       /* EIP175[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB175:1;                                      /* EITB175          */
    uint8  EIMK175:1;                                      /* EIMK175          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF175:1;                                      /* EIRF175          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT175:1;                                      /* EICT175          */
} __type1164;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP176:4;                                       /* EIP176[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB176:1;                                      /* EITB176          */
    uint8  EIMK176:1;                                      /* EIMK176          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF176:1;                                      /* EIRF176          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT176:1;                                      /* EICT176          */
} __type1165;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP177:4;                                       /* EIP177[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB177:1;                                      /* EITB177          */
    uint8  EIMK177:1;                                      /* EIMK177          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF177:1;                                      /* EIRF177          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT177:1;                                      /* EICT177          */
} __type1166;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP178:4;                                       /* EIP178[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB178:1;                                      /* EITB178          */
    uint8  EIMK178:1;                                      /* EIMK178          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF178:1;                                      /* EIRF178          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT178:1;                                      /* EICT178          */
} __type1167;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP179:4;                                       /* EIP179[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB179:1;                                      /* EITB179          */
    uint8  EIMK179:1;                                      /* EIMK179          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF179:1;                                      /* EIRF179          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT179:1;                                      /* EICT179          */
} __type1168;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP180:4;                                       /* EIP180[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB180:1;                                      /* EITB180          */
    uint8  EIMK180:1;                                      /* EIMK180          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF180:1;                                      /* EIRF180          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT180:1;                                      /* EICT180          */
} __type1169;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP181:4;                                       /* EIP181[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB181:1;                                      /* EITB181          */
    uint8  EIMK181:1;                                      /* EIMK181          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF181:1;                                      /* EIRF181          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT181:1;                                      /* EICT181          */
} __type1170;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP182:4;                                       /* EIP182[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB182:1;                                      /* EITB182          */
    uint8  EIMK182:1;                                      /* EIMK182          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF182:1;                                      /* EIRF182          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT182:1;                                      /* EICT182          */
} __type1171;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP183:4;                                       /* EIP183[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB183:1;                                      /* EITB183          */
    uint8  EIMK183:1;                                      /* EIMK183          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF183:1;                                      /* EIRF183          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT183:1;                                      /* EICT183          */
} __type1172;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP184:4;                                       /* EIP184[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB184:1;                                      /* EITB184          */
    uint8  EIMK184:1;                                      /* EIMK184          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF184:1;                                      /* EIRF184          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT184:1;                                      /* EICT184          */
} __type1173;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP185:4;                                       /* EIP185[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB185:1;                                      /* EITB185          */
    uint8  EIMK185:1;                                      /* EIMK185          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF185:1;                                      /* EIRF185          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT185:1;                                      /* EICT185          */
} __type1174;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP186:4;                                       /* EIP186[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB186:1;                                      /* EITB186          */
    uint8  EIMK186:1;                                      /* EIMK186          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF186:1;                                      /* EIRF186          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT186:1;                                      /* EICT186          */
} __type1175;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP187:4;                                       /* EIP187[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB187:1;                                      /* EITB187          */
    uint8  EIMK187:1;                                      /* EIMK187          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF187:1;                                      /* EIRF187          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT187:1;                                      /* EICT187          */
} __type1176;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP188:4;                                       /* EIP188[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB188:1;                                      /* EITB188          */
    uint8  EIMK188:1;                                      /* EIMK188          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF188:1;                                      /* EIRF188          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT188:1;                                      /* EICT188          */
} __type1177;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP189:4;                                       /* EIP189[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB189:1;                                      /* EITB189          */
    uint8  EIMK189:1;                                      /* EIMK189          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF189:1;                                      /* EIRF189          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT189:1;                                      /* EICT189          */
} __type1178;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP190:4;                                       /* EIP190[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB190:1;                                      /* EITB190          */
    uint8  EIMK190:1;                                      /* EIMK190          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF190:1;                                      /* EIRF190          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT190:1;                                      /* EICT190          */
} __type1179;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP194:4;                                       /* EIP194[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB194:1;                                      /* EITB194          */
    uint8  EIMK194:1;                                      /* EIMK194          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF194:1;                                      /* EIRF194          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT194:1;                                      /* EICT194          */
} __type1180;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP195:4;                                       /* EIP195[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB195:1;                                      /* EITB195          */
    uint8  EIMK195:1;                                      /* EIMK195          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF195:1;                                      /* EIRF195          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT195:1;                                      /* EICT195          */
} __type1181;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP196:4;                                       /* EIP196[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB196:1;                                      /* EITB196          */
    uint8  EIMK196:1;                                      /* EIMK196          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF196:1;                                      /* EIRF196          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT196:1;                                      /* EICT196          */
} __type1182;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP197:4;                                       /* EIP197[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB197:1;                                      /* EITB197          */
    uint8  EIMK197:1;                                      /* EIMK197          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF197:1;                                      /* EIRF197          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT197:1;                                      /* EICT197          */
} __type1183;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP198:4;                                       /* EIP198[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB198:1;                                      /* EITB198          */
    uint8  EIMK198:1;                                      /* EIMK198          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF198:1;                                      /* EIRF198          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT198:1;                                      /* EICT198          */
} __type1184;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP199:4;                                       /* EIP199[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB199:1;                                      /* EITB199          */
    uint8  EIMK199:1;                                      /* EIMK199          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF199:1;                                      /* EIRF199          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT199:1;                                      /* EICT199          */
} __type1185;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP200:4;                                       /* EIP200[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB200:1;                                      /* EITB200          */
    uint8  EIMK200:1;                                      /* EIMK200          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF200:1;                                      /* EIRF200          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT200:1;                                      /* EICT200          */
} __type1186;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP201:4;                                       /* EIP201[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB201:1;                                      /* EITB201          */
    uint8  EIMK201:1;                                      /* EIMK201          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF201:1;                                      /* EIRF201          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT201:1;                                      /* EICT201          */
} __type1187;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP202:4;                                       /* EIP202[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB202:1;                                      /* EITB202          */
    uint8  EIMK202:1;                                      /* EIMK202          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF202:1;                                      /* EIRF202          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT202:1;                                      /* EICT202          */
} __type1188;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP203:4;                                       /* EIP203[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB203:1;                                      /* EITB203          */
    uint8  EIMK203:1;                                      /* EIMK203          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF203:1;                                      /* EIRF203          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT203:1;                                      /* EICT203          */
} __type1189;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP204:4;                                       /* EIP204[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB204:1;                                      /* EITB204          */
    uint8  EIMK204:1;                                      /* EIMK204          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF204:1;                                      /* EIRF204          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT204:1;                                      /* EICT204          */
} __type1190;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP218:4;                                       /* EIP218[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB218:1;                                      /* EITB218          */
    uint8  EIMK218:1;                                      /* EIMK218          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF218:1;                                      /* EIRF218          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT218:1;                                      /* EICT218          */
} __type1191;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP219:4;                                       /* EIP219[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB219:1;                                      /* EITB219          */
    uint8  EIMK219:1;                                      /* EIMK219          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF219:1;                                      /* EIRF219          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT219:1;                                      /* EICT219          */
} __type1192;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP220:4;                                       /* EIP220[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB220:1;                                      /* EITB220          */
    uint8  EIMK220:1;                                      /* EIMK220          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF220:1;                                      /* EIRF220          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT220:1;                                      /* EICT220          */
} __type1193;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP221:4;                                       /* EIP221[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB221:1;                                      /* EITB221          */
    uint8  EIMK221:1;                                      /* EIMK221          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF221:1;                                      /* EIRF221          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT221:1;                                      /* EICT221          */
} __type1194;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP226:4;                                       /* EIP226[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB226:1;                                      /* EITB226          */
    uint8  EIMK226:1;                                      /* EIMK226          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF226:1;                                      /* EIRF226          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT226:1;                                      /* EICT226          */
} __type1195;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP227:4;                                       /* EIP227[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB227:1;                                      /* EITB227          */
    uint8  EIMK227:1;                                      /* EIMK227          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF227:1;                                      /* EIRF227          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT227:1;                                      /* EICT227          */
} __type1196;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP228:4;                                       /* EIP228[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB228:1;                                      /* EITB228          */
    uint8  EIMK228:1;                                      /* EIMK228          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF228:1;                                      /* EIRF228          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT228:1;                                      /* EICT228          */
} __type1197;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP229:4;                                       /* EIP229[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB229:1;                                      /* EITB229          */
    uint8  EIMK229:1;                                      /* EIMK229          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF229:1;                                      /* EIRF229          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT229:1;                                      /* EICT229          */
} __type1198;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP230:4;                                       /* EIP230[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB230:1;                                      /* EITB230          */
    uint8  EIMK230:1;                                      /* EIMK230          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF230:1;                                      /* EIRF230          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT230:1;                                      /* EICT230          */
} __type1199;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP231:4;                                       /* EIP231[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB231:1;                                      /* EITB231          */
    uint8  EIMK231:1;                                      /* EIMK231          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF231:1;                                      /* EIRF231          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT231:1;                                      /* EICT231          */
} __type1200;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP232:4;                                       /* EIP232[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB232:1;                                      /* EITB232          */
    uint8  EIMK232:1;                                      /* EIMK232          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF232:1;                                      /* EIRF232          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT232:1;                                      /* EICT232          */
} __type1201;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP233:4;                                       /* EIP233[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB233:1;                                      /* EITB233          */
    uint8  EIMK233:1;                                      /* EIMK233          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF233:1;                                      /* EIRF233          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT233:1;                                      /* EICT233          */
} __type1202;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP234:4;                                       /* EIP234[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB234:1;                                      /* EITB234          */
    uint8  EIMK234:1;                                      /* EIMK234          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF234:1;                                      /* EIRF234          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT234:1;                                      /* EICT234          */
} __type1203;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP235:4;                                       /* EIP235[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB235:1;                                      /* EITB235          */
    uint8  EIMK235:1;                                      /* EIMK235          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF235:1;                                      /* EIRF235          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT235:1;                                      /* EICT235          */
} __type1204;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP236:4;                                       /* EIP236[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB236:1;                                      /* EITB236          */
    uint8  EIMK236:1;                                      /* EIMK236          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF236:1;                                      /* EIRF236          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT236:1;                                      /* EICT236          */
} __type1205;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP237:4;                                       /* EIP237[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB237:1;                                      /* EITB237          */
    uint8  EIMK237:1;                                      /* EIMK237          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF237:1;                                      /* EIRF237          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT237:1;                                      /* EICT237          */
} __type1206;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP238:4;                                       /* EIP238[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB238:1;                                      /* EITB238          */
    uint8  EIMK238:1;                                      /* EIMK238          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF238:1;                                      /* EIRF238          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT238:1;                                      /* EICT238          */
} __type1207;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP239:4;                                       /* EIP239[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB239:1;                                      /* EITB239          */
    uint8  EIMK239:1;                                      /* EIMK239          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF239:1;                                      /* EIRF239          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT239:1;                                      /* EICT239          */
} __type1208;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP240:4;                                       /* EIP240[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB240:1;                                      /* EITB240          */
    uint8  EIMK240:1;                                      /* EIMK240          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF240:1;                                      /* EIRF240          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT240:1;                                      /* EICT240          */
} __type1209;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP241:4;                                       /* EIP241[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB241:1;                                      /* EITB241          */
    uint8  EIMK241:1;                                      /* EIMK241          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF241:1;                                      /* EIRF241          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT241:1;                                      /* EICT241          */
} __type1210;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP242:4;                                       /* EIP242[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB242:1;                                      /* EITB242          */
    uint8  EIMK242:1;                                      /* EIMK242          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF242:1;                                      /* EIRF242          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT242:1;                                      /* EICT242          */
} __type1211;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP243:4;                                       /* EIP243[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB243:1;                                      /* EITB243          */
    uint8  EIMK243:1;                                      /* EIMK243          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF243:1;                                      /* EIRF243          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT243:1;                                      /* EICT243          */
} __type1212;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP244:4;                                       /* EIP244[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB244:1;                                      /* EITB244          */
    uint8  EIMK244:1;                                      /* EIMK244          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF244:1;                                      /* EIRF244          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT244:1;                                      /* EICT244          */
} __type1213;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP245:4;                                       /* EIP245[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB245:1;                                      /* EITB245          */
    uint8  EIMK245:1;                                      /* EIMK245          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF245:1;                                      /* EIRF245          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT245:1;                                      /* EICT245          */
} __type1214;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP246:4;                                       /* EIP246[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB246:1;                                      /* EITB246          */
    uint8  EIMK246:1;                                      /* EIMK246          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF246:1;                                      /* EIRF246          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT246:1;                                      /* EICT246          */
} __type1215;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP247:4;                                       /* EIP247[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB247:1;                                      /* EITB247          */
    uint8  EIMK247:1;                                      /* EIMK247          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF247:1;                                      /* EIRF247          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT247:1;                                      /* EICT247          */
} __type1216;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP248:4;                                       /* EIP248[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB248:1;                                      /* EITB248          */
    uint8  EIMK248:1;                                      /* EIMK248          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF248:1;                                      /* EIRF248          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT248:1;                                      /* EICT248          */
} __type1217;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP249:4;                                       /* EIP249[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB249:1;                                      /* EITB249          */
    uint8  EIMK249:1;                                      /* EIMK249          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF249:1;                                      /* EIRF249          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT249:1;                                      /* EICT249          */
} __type1218;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP250:4;                                       /* EIP250[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB250:1;                                      /* EITB250          */
    uint8  EIMK250:1;                                      /* EIMK250          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF250:1;                                      /* EIRF250          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT250:1;                                      /* EICT250          */
} __type1219;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP251:4;                                       /* EIP251[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB251:1;                                      /* EITB251          */
    uint8  EIMK251:1;                                      /* EIMK251          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF251:1;                                      /* EIRF251          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT251:1;                                      /* EICT251          */
} __type1220;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP252:4;                                       /* EIP252[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB252:1;                                      /* EITB252          */
    uint8  EIMK252:1;                                      /* EIMK252          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF252:1;                                      /* EIRF252          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT252:1;                                      /* EICT252          */
} __type1221;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP253:4;                                       /* EIP253[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB253:1;                                      /* EITB253          */
    uint8  EIMK253:1;                                      /* EIMK253          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF253:1;                                      /* EIRF253          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT253:1;                                      /* EICT253          */
} __type1222;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP254:4;                                       /* EIP254[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB254:1;                                      /* EITB254          */
    uint8  EIMK254:1;                                      /* EIMK254          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF254:1;                                      /* EIRF254          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT254:1;                                      /* EICT254          */
} __type1223;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP256:4;                                       /* EIP256[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB256:1;                                      /* EITB256          */
    uint8  EIMK256:1;                                      /* EIMK256          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF256:1;                                      /* EIRF256          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT256:1;                                      /* EICT256          */
} __type1224;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP257:4;                                       /* EIP257[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB257:1;                                      /* EITB257          */
    uint8  EIMK257:1;                                      /* EIMK257          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF257:1;                                      /* EIRF257          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT257:1;                                      /* EICT257          */
} __type1225;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP258:4;                                       /* EIP258[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB258:1;                                      /* EITB258          */
    uint8  EIMK258:1;                                      /* EIMK258          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF258:1;                                      /* EIRF258          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT258:1;                                      /* EICT258          */
} __type1226;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP259:4;                                       /* EIP259[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB259:1;                                      /* EITB259          */
    uint8  EIMK259:1;                                      /* EIMK259          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF259:1;                                      /* EIRF259          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT259:1;                                      /* EICT259          */
} __type1227;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP260:4;                                       /* EIP260[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB260:1;                                      /* EITB260          */
    uint8  EIMK260:1;                                      /* EIMK260          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF260:1;                                      /* EIRF260          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT260:1;                                      /* EICT260          */
} __type1228;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP261:4;                                       /* EIP261[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB261:1;                                      /* EITB261          */
    uint8  EIMK261:1;                                      /* EIMK261          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF261:1;                                      /* EIRF261          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT261:1;                                      /* EICT261          */
} __type1229;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP262:4;                                       /* EIP262[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB262:1;                                      /* EITB262          */
    uint8  EIMK262:1;                                      /* EIMK262          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF262:1;                                      /* EIRF262          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT262:1;                                      /* EICT262          */
} __type1230;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP263:4;                                       /* EIP263[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB263:1;                                      /* EITB263          */
    uint8  EIMK263:1;                                      /* EIMK263          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF263:1;                                      /* EIRF263          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT263:1;                                      /* EICT263          */
} __type1231;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP264:4;                                       /* EIP264[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB264:1;                                      /* EITB264          */
    uint8  EIMK264:1;                                      /* EIMK264          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF264:1;                                      /* EIRF264          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT264:1;                                      /* EICT264          */
} __type1232;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP265:4;                                       /* EIP265[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB265:1;                                      /* EITB265          */
    uint8  EIMK265:1;                                      /* EIMK265          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF265:1;                                      /* EIRF265          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT265:1;                                      /* EICT265          */
} __type1233;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP266:4;                                       /* EIP266[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB266:1;                                      /* EITB266          */
    uint8  EIMK266:1;                                      /* EIMK266          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF266:1;                                      /* EIRF266          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT266:1;                                      /* EICT266          */
} __type1234;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP267:4;                                       /* EIP267[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB267:1;                                      /* EITB267          */
    uint8  EIMK267:1;                                      /* EIMK267          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF267:1;                                      /* EIRF267          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT267:1;                                      /* EICT267          */
} __type1235;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP268:4;                                       /* EIP268[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB268:1;                                      /* EITB268          */
    uint8  EIMK268:1;                                      /* EIMK268          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF268:1;                                      /* EIRF268          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT268:1;                                      /* EICT268          */
} __type1236;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP269:4;                                       /* EIP269[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB269:1;                                      /* EITB269          */
    uint8  EIMK269:1;                                      /* EIMK269          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF269:1;                                      /* EIRF269          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT269:1;                                      /* EICT269          */
} __type1237;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP270:4;                                       /* EIP270[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB270:1;                                      /* EITB270          */
    uint8  EIMK270:1;                                      /* EIMK270          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF270:1;                                      /* EIRF270          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT270:1;                                      /* EICT270          */
} __type1238;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP271:4;                                       /* EIP271[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB271:1;                                      /* EITB271          */
    uint8  EIMK271:1;                                      /* EIMK271          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF271:1;                                      /* EIRF271          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT271:1;                                      /* EICT271          */
} __type1239;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP272:4;                                       /* EIP272[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB272:1;                                      /* EITB272          */
    uint8  EIMK272:1;                                      /* EIMK272          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF272:1;                                      /* EIRF272          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT272:1;                                      /* EICT272          */
} __type1240;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP273:4;                                       /* EIP273[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB273:1;                                      /* EITB273          */
    uint8  EIMK273:1;                                      /* EIMK273          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF273:1;                                      /* EIRF273          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT273:1;                                      /* EICT273          */
} __type1241;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP274:4;                                       /* EIP274[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB274:1;                                      /* EITB274          */
    uint8  EIMK274:1;                                      /* EIMK274          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF274:1;                                      /* EIRF274          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT274:1;                                      /* EICT274          */
} __type1242;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP275:4;                                       /* EIP275[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB275:1;                                      /* EITB275          */
    uint8  EIMK275:1;                                      /* EIMK275          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF275:1;                                      /* EIRF275          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT275:1;                                      /* EICT275          */
} __type1243;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP276:4;                                       /* EIP276[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB276:1;                                      /* EITB276          */
    uint8  EIMK276:1;                                      /* EIMK276          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF276:1;                                      /* EIRF276          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT276:1;                                      /* EICT276          */
} __type1244;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP277:4;                                       /* EIP277[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB277:1;                                      /* EITB277          */
    uint8  EIMK277:1;                                      /* EIMK277          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF277:1;                                      /* EIRF277          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT277:1;                                      /* EICT277          */
} __type1245;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP278:4;                                       /* EIP278[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB278:1;                                      /* EITB278          */
    uint8  EIMK278:1;                                      /* EIMK278          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF278:1;                                      /* EIRF278          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT278:1;                                      /* EICT278          */
} __type1246;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP279:4;                                       /* EIP279[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB279:1;                                      /* EITB279          */
    uint8  EIMK279:1;                                      /* EIMK279          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF279:1;                                      /* EIRF279          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT279:1;                                      /* EICT279          */
} __type1247;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP280:4;                                       /* EIP280[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB280:1;                                      /* EITB280          */
    uint8  EIMK280:1;                                      /* EIMK280          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF280:1;                                      /* EIRF280          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT280:1;                                      /* EICT280          */
} __type1248;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP281:4;                                       /* EIP281[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB281:1;                                      /* EITB281          */
    uint8  EIMK281:1;                                      /* EIMK281          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF281:1;                                      /* EIRF281          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT281:1;                                      /* EICT281          */
} __type1249;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP282:4;                                       /* EIP282[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB282:1;                                      /* EITB282          */
    uint8  EIMK282:1;                                      /* EIMK282          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF282:1;                                      /* EIRF282          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT282:1;                                      /* EICT282          */
} __type1250;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP283:4;                                       /* EIP283[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB283:1;                                      /* EITB283          */
    uint8  EIMK283:1;                                      /* EIMK283          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF283:1;                                      /* EIRF283          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT283:1;                                      /* EICT283          */
} __type1251;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP284:4;                                       /* EIP284[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB284:1;                                      /* EITB284          */
    uint8  EIMK284:1;                                      /* EIMK284          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF284:1;                                      /* EIRF284          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT284:1;                                      /* EICT284          */
} __type1252;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP285:4;                                       /* EIP285[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB285:1;                                      /* EITB285          */
    uint8  EIMK285:1;                                      /* EIMK285          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF285:1;                                      /* EIRF285          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT285:1;                                      /* EICT285          */
} __type1253;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP286:4;                                       /* EIP286[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB286:1;                                      /* EITB286          */
    uint8  EIMK286:1;                                      /* EIMK286          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF286:1;                                      /* EIRF286          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT286:1;                                      /* EICT286          */
} __type1254;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP287:4;                                       /* EIP287[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB287:1;                                      /* EITB287          */
    uint8  EIMK287:1;                                      /* EIMK287          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF287:1;                                      /* EIRF287          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT287:1;                                      /* EICT287          */
} __type1255;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP288:4;                                       /* EIP288[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB288:1;                                      /* EITB288          */
    uint8  EIMK288:1;                                      /* EIMK288          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF288:1;                                      /* EIRF288          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT288:1;                                      /* EICT288          */
} __type1256;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP289:4;                                       /* EIP289[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB289:1;                                      /* EITB289          */
    uint8  EIMK289:1;                                      /* EIMK289          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF289:1;                                      /* EIRF289          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT289:1;                                      /* EICT289          */
} __type1257;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP290:4;                                       /* EIP290[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB290:1;                                      /* EITB290          */
    uint8  EIMK290:1;                                      /* EIMK290          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF290:1;                                      /* EIRF290          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT290:1;                                      /* EICT290          */
} __type1258;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP291:4;                                       /* EIP291[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB291:1;                                      /* EITB291          */
    uint8  EIMK291:1;                                      /* EIMK291          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF291:1;                                      /* EIRF291          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT291:1;                                      /* EICT291          */
} __type1259;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP294:4;                                       /* EIP294[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB294:1;                                      /* EITB294          */
    uint8  EIMK294:1;                                      /* EIMK294          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF294:1;                                      /* EIRF294          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT294:1;                                      /* EICT294          */
} __type1260;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP295:4;                                       /* EIP295[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB295:1;                                      /* EITB295          */
    uint8  EIMK295:1;                                      /* EIMK295          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF295:1;                                      /* EIRF295          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT295:1;                                      /* EICT295          */
} __type1261;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP296:4;                                       /* EIP296[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB296:1;                                      /* EITB296          */
    uint8  EIMK296:1;                                      /* EIMK296          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF296:1;                                      /* EIRF296          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT296:1;                                      /* EICT296          */
} __type1262;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP297:4;                                       /* EIP297[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB297:1;                                      /* EITB297          */
    uint8  EIMK297:1;                                      /* EIMK297          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF297:1;                                      /* EIRF297          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT297:1;                                      /* EICT297          */
} __type1263;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP298:4;                                       /* EIP298[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB298:1;                                      /* EITB298          */
    uint8  EIMK298:1;                                      /* EIMK298          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF298:1;                                      /* EIRF298          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT298:1;                                      /* EICT298          */
} __type1264;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP379:4;                                       /* EIP379[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB379:1;                                      /* EITB379          */
    uint8  EIMK379:1;                                      /* EIMK379          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF379:1;                                      /* EIRF379          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT379:1;                                      /* EICT379          */
} __type1265;
typedef struct 
{                                                          /* Bit Access       */
    uint8  EIP383:4;                                       /* EIP383[3:0]      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EITB383:1;                                      /* EITB383          */
    uint8  EIMK383:1;                                      /* EIMK383          */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  EIRF383:1;                                      /* EIRF383          */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  EICT383:1;                                      /* EICT383          */
} __type1266;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IMR1EIMK32:1;                                   /* IMR1EIMK32       */
    uint8  IMR1EIMK33:1;                                   /* IMR1EIMK33       */
    uint8  IMR1EIMK34:1;                                   /* IMR1EIMK34       */
    uint8  IMR1EIMK35:1;                                   /* IMR1EIMK35       */
    uint8  IMR1EIMK36:1;                                   /* IMR1EIMK36       */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  IMR1EIMK40:1;                                   /* IMR1EIMK40       */
    uint8  IMR1EIMK41:1;                                   /* IMR1EIMK41       */
    uint8  IMR1EIMK42:1;                                   /* IMR1EIMK42       */
    uint8  IMR1EIMK43:1;                                   /* IMR1EIMK43       */
    uint8  IMR1EIMK44:1;                                   /* IMR1EIMK44       */
    uint8  IMR1EIMK45:1;                                   /* IMR1EIMK45       */
    uint8  IMR1EIMK46:1;                                   /* IMR1EIMK46       */
    uint8  IMR1EIMK47:1;                                   /* IMR1EIMK47       */
    uint8  IMR1EIMK48:1;                                   /* IMR1EIMK48       */
    uint8  IMR1EIMK49:1;                                   /* IMR1EIMK49       */
    uint8  IMR1EIMK50:1;                                   /* IMR1EIMK50       */
    uint8  IMR1EIMK51:1;                                   /* IMR1EIMK51       */
    uint8  IMR1EIMK52:1;                                   /* IMR1EIMK52       */
    uint8  IMR1EIMK53:1;                                   /* IMR1EIMK53       */
    uint8  IMR1EIMK54:1;                                   /* IMR1EIMK54       */
    uint8  IMR1EIMK55:1;                                   /* IMR1EIMK55       */
    uint8  IMR1EIMK56:1;                                   /* IMR1EIMK56       */
    uint8  IMR1EIMK57:1;                                   /* IMR1EIMK57       */
    uint8  IMR1EIMK58:1;                                   /* IMR1EIMK58       */
    uint8  IMR1EIMK59:1;                                   /* IMR1EIMK59       */
    uint8  IMR1EIMK60:1;                                   /* IMR1EIMK60       */
    uint8  IMR1EIMK61:1;                                   /* IMR1EIMK61       */
    uint8  IMR1EIMK62:1;                                   /* IMR1EIMK62       */
    uint8  IMR1EIMK63:1;                                   /* IMR1EIMK63       */
} __type1267;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IMR2EIMK64:1;                                   /* IMR2EIMK64       */
    uint8  IMR2EIMK65:1;                                   /* IMR2EIMK65       */
    uint8  IMR2EIMK66:1;                                   /* IMR2EIMK66       */
    uint8  IMR2EIMK67:1;                                   /* IMR2EIMK67       */
    uint8  IMR2EIMK68:1;                                   /* IMR2EIMK68       */
    uint8  IMR2EIMK69:1;                                   /* IMR2EIMK69       */
    uint8  IMR2EIMK70:1;                                   /* IMR2EIMK70       */
    uint8  IMR2EIMK71:1;                                   /* IMR2EIMK71       */
    uint8  IMR2EIMK72:1;                                   /* IMR2EIMK72       */
    uint8  IMR2EIMK73:1;                                   /* IMR2EIMK73       */
    uint8  IMR2EIMK74:1;                                   /* IMR2EIMK74       */
    uint8  IMR2EIMK75:1;                                   /* IMR2EIMK75       */
    uint8  IMR2EIMK76:1;                                   /* IMR2EIMK76       */
    uint8  IMR2EIMK77:1;                                   /* IMR2EIMK77       */
    uint8  IMR2EIMK78:1;                                   /* IMR2EIMK78       */
    uint8  IMR2EIMK79:1;                                   /* IMR2EIMK79       */
    uint8  IMR2EIMK80:1;                                   /* IMR2EIMK80       */
    uint8  IMR2EIMK81:1;                                   /* IMR2EIMK81       */
    uint8  IMR2EIMK82:1;                                   /* IMR2EIMK82       */
    uint8  IMR2EIMK83:1;                                   /* IMR2EIMK83       */
    uint8  IMR2EIMK84:1;                                   /* IMR2EIMK84       */
    uint8  IMR2EIMK85:1;                                   /* IMR2EIMK85       */
    uint8  IMR2EIMK86:1;                                   /* IMR2EIMK86       */
    uint8  IMR2EIMK87:1;                                   /* IMR2EIMK87       */
    uint8  IMR2EIMK88:1;                                   /* IMR2EIMK88       */
    uint8  IMR2EIMK89:1;                                   /* IMR2EIMK89       */
    uint8  IMR2EIMK90:1;                                   /* IMR2EIMK90       */
    uint8  IMR2EIMK91:1;                                   /* IMR2EIMK91       */
    uint8  IMR2EIMK92:1;                                   /* IMR2EIMK92       */
    uint8  IMR2EIMK93:1;                                   /* IMR2EIMK93       */
    uint8  IMR2EIMK94:1;                                   /* IMR2EIMK94       */
    uint8  IMR2EIMK95:1;                                   /* IMR2EIMK95       */
} __type1268;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IMR3EIMK96:1;                                   /* IMR3EIMK96       */
    uint8  IMR3EIMK97:1;                                   /* IMR3EIMK97       */
    uint8  IMR3EIMK98:1;                                   /* IMR3EIMK98       */
    uint8  IMR3EIMK99:1;                                   /* IMR3EIMK99       */
    uint8  IMR3EIMK100:1;                                  /* IMR3EIMK100      */
    uint8  IMR3EIMK101:1;                                  /* IMR3EIMK101      */
    uint8  IMR3EIMK102:1;                                  /* IMR3EIMK102      */
    uint8  IMR3EIMK103:1;                                  /* IMR3EIMK103      */
    uint8  IMR3EIMK104:1;                                  /* IMR3EIMK104      */
    uint8  IMR3EIMK105:1;                                  /* IMR3EIMK105      */
    uint8  IMR3EIMK106:1;                                  /* IMR3EIMK106      */
    uint8  IMR3EIMK107:1;                                  /* IMR3EIMK107      */
    uint8  IMR3EIMK108:1;                                  /* IMR3EIMK108      */
    uint8  IMR3EIMK109:1;                                  /* IMR3EIMK109      */
    uint8  IMR3EIMK110:1;                                  /* IMR3EIMK110      */
    uint8  IMR3EIMK111:1;                                  /* IMR3EIMK111      */
    uint8  IMR3EIMK112:1;                                  /* IMR3EIMK112      */
    uint8  IMR3EIMK113:1;                                  /* IMR3EIMK113      */
    uint8  IMR3EIMK114:1;                                  /* IMR3EIMK114      */
    uint8  IMR3EIMK115:1;                                  /* IMR3EIMK115      */
    uint8  IMR3EIMK116:1;                                  /* IMR3EIMK116      */
    uint8  IMR3EIMK117:1;                                  /* IMR3EIMK117      */
    uint8  IMR3EIMK118:1;                                  /* IMR3EIMK118      */
    uint8  IMR3EIMK119:1;                                  /* IMR3EIMK119      */
    uint8  IMR3EIMK120:1;                                  /* IMR3EIMK120      */
    uint8  IMR3EIMK121:1;                                  /* IMR3EIMK121      */
    uint8  :6;                                             /* Reserved Bits    */
} __type1269;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IMR4EIMK128:1;                                  /* IMR4EIMK128      */
    uint8  IMR4EIMK129:1;                                  /* IMR4EIMK129      */
    uint8  IMR4EIMK130:1;                                  /* IMR4EIMK130      */
    uint8  IMR4EIMK131:1;                                  /* IMR4EIMK131      */
    uint8  IMR4EIMK132:1;                                  /* IMR4EIMK132      */
    uint8  IMR4EIMK133:1;                                  /* IMR4EIMK133      */
    uint8  IMR4EIMK134:1;                                  /* IMR4EIMK134      */
    uint8  IMR4EIMK135:1;                                  /* IMR4EIMK135      */
    uint8  IMR4EIMK136:1;                                  /* IMR4EIMK136      */
    uint8  IMR4EIMK137:1;                                  /* IMR4EIMK137      */
    uint8  IMR4EIMK138:1;                                  /* IMR4EIMK138      */
    uint8  IMR4EIMK139:1;                                  /* IMR4EIMK139      */
    uint8  IMR4EIMK140:1;                                  /* IMR4EIMK140      */
    uint8  IMR4EIMK141:1;                                  /* IMR4EIMK141      */
    uint8  IMR4EIMK142:1;                                  /* IMR4EIMK142      */
    uint8  IMR4EIMK143:1;                                  /* IMR4EIMK143      */
    uint8  IMR4EIMK144:1;                                  /* IMR4EIMK144      */
    uint8  IMR4EIMK145:1;                                  /* IMR4EIMK145      */
    uint8  IMR4EIMK146:1;                                  /* IMR4EIMK146      */
    uint8  IMR4EIMK147:1;                                  /* IMR4EIMK147      */
    uint8  IMR4EIMK148:1;                                  /* IMR4EIMK148      */
    uint8  IMR4EIMK149:1;                                  /* IMR4EIMK149      */
    uint8  IMR4EIMK150:1;                                  /* IMR4EIMK150      */
    uint8  IMR4EIMK151:1;                                  /* IMR4EIMK151      */
    uint8  IMR4EIMK152:1;                                  /* IMR4EIMK152      */
    uint8  IMR4EIMK153:1;                                  /* IMR4EIMK153      */
    uint8  IMR4EIMK154:1;                                  /* IMR4EIMK154      */
    uint8  IMR4EIMK155:1;                                  /* IMR4EIMK155      */
    uint8  IMR4EIMK156:1;                                  /* IMR4EIMK156      */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  IMR4EIMK158:1;                                  /* IMR4EIMK158      */
    uint8  IMR4EIMK159:1;                                  /* IMR4EIMK159      */
} __type1270;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IMR5EIMK160:1;                                  /* IMR5EIMK160      */
    uint8  IMR5EIMK161:1;                                  /* IMR5EIMK161      */
    uint8  IMR5EIMK162:1;                                  /* IMR5EIMK162      */
    uint8  IMR5EIMK163:1;                                  /* IMR5EIMK163      */
    uint8  IMR5EIMK164:1;                                  /* IMR5EIMK164      */
    uint8  IMR5EIMK165:1;                                  /* IMR5EIMK165      */
    uint8  IMR5EIMK166:1;                                  /* IMR5EIMK166      */
    uint8  IMR5EIMK167:1;                                  /* IMR5EIMK167      */
    uint8  IMR5EIMK168:1;                                  /* IMR5EIMK168      */
    uint8  IMR5EIMK169:1;                                  /* IMR5EIMK169      */
    uint8  IMR5EIMK170:1;                                  /* IMR5EIMK170      */
    uint8  IMR5EIMK171:1;                                  /* IMR5EIMK171      */
    uint8  IMR5EIMK172:1;                                  /* IMR5EIMK172      */
    uint8  IMR5EIMK173:1;                                  /* IMR5EIMK173      */
    uint8  IMR5EIMK174:1;                                  /* IMR5EIMK174      */
    uint8  IMR5EIMK175:1;                                  /* IMR5EIMK175      */
    uint8  IMR5EIMK176:1;                                  /* IMR5EIMK176      */
    uint8  IMR5EIMK177:1;                                  /* IMR5EIMK177      */
    uint8  IMR5EIMK178:1;                                  /* IMR5EIMK178      */
    uint8  IMR5EIMK179:1;                                  /* IMR5EIMK179      */
    uint8  IMR5EIMK180:1;                                  /* IMR5EIMK180      */
    uint8  IMR5EIMK181:1;                                  /* IMR5EIMK181      */
    uint8  IMR5EIMK182:1;                                  /* IMR5EIMK182      */
    uint8  IMR5EIMK183:1;                                  /* IMR5EIMK183      */
    uint8  IMR5EIMK184:1;                                  /* IMR5EIMK184      */
    uint8  IMR5EIMK185:1;                                  /* IMR5EIMK185      */
    uint8  IMR5EIMK186:1;                                  /* IMR5EIMK186      */
    uint8  IMR5EIMK187:1;                                  /* IMR5EIMK187      */
    uint8  IMR5EIMK188:1;                                  /* IMR5EIMK188      */
    uint8  IMR5EIMK189:1;                                  /* IMR5EIMK189      */
    uint8  IMR5EIMK190:1;                                  /* IMR5EIMK190      */
    uint8  :1;                                             /* Reserved Bits    */
} __type1271;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  IMR6EIMK194:1;                                  /* IMR6EIMK194      */
    uint8  IMR6EIMK195:1;                                  /* IMR6EIMK195      */
    uint8  IMR6EIMK196:1;                                  /* IMR6EIMK196      */
    uint8  IMR6EIMK197:1;                                  /* IMR6EIMK197      */
    uint8  IMR6EIMK198:1;                                  /* IMR6EIMK198      */
    uint8  IMR6EIMK199:1;                                  /* IMR6EIMK199      */
    uint8  IMR6EIMK200:1;                                  /* IMR6EIMK200      */
    uint8  IMR6EIMK201:1;                                  /* IMR6EIMK201      */
    uint8  IMR6EIMK202:1;                                  /* IMR6EIMK202      */
    uint8  IMR6EIMK203:1;                                  /* IMR6EIMK203      */
    uint8  IMR6EIMK204:1;                                  /* IMR6EIMK204      */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  IMR6EIMK218:1;                                  /* IMR6EIMK218      */
    uint8  IMR6EIMK219:1;                                  /* IMR6EIMK219      */
    uint8  IMR6EIMK220:1;                                  /* IMR6EIMK220      */
    uint8  IMR6EIMK221:1;                                  /* IMR6EIMK221      */
    uint8  :2;                                             /* Reserved Bits    */
} __type1272;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  IMR7EIMK226:1;                                  /* IMR7EIMK226      */
    uint8  IMR7EIMK227:1;                                  /* IMR7EIMK227      */
    uint8  IMR7EIMK228:1;                                  /* IMR7EIMK228      */
    uint8  IMR7EIMK229:1;                                  /* IMR7EIMK229      */
    uint8  IMR7EIMK230:1;                                  /* IMR7EIMK230      */
    uint8  IMR7EIMK231:1;                                  /* IMR7EIMK231      */
    uint8  IMR7EIMK232:1;                                  /* IMR7EIMK232      */
    uint8  IMR7EIMK233:1;                                  /* IMR7EIMK233      */
    uint8  IMR7EIMK234:1;                                  /* IMR7EIMK234      */
    uint8  IMR7EIMK235:1;                                  /* IMR7EIMK235      */
    uint8  IMR7EIMK236:1;                                  /* IMR7EIMK236      */
    uint8  IMR7EIMK237:1;                                  /* IMR7EIMK237      */
    uint8  IMR7EIMK238:1;                                  /* IMR7EIMK238      */
    uint8  IMR7EIMK239:1;                                  /* IMR7EIMK239      */
    uint8  IMR7EIMK240:1;                                  /* IMR7EIMK240      */
    uint8  IMR7EIMK241:1;                                  /* IMR7EIMK241      */
    uint8  IMR7EIMK242:1;                                  /* IMR7EIMK242      */
    uint8  IMR7EIMK243:1;                                  /* IMR7EIMK243      */
    uint8  IMR7EIMK244:1;                                  /* IMR7EIMK244      */
    uint8  IMR7EIMK245:1;                                  /* IMR7EIMK245      */
    uint8  IMR7EIMK246:1;                                  /* IMR7EIMK246      */
    uint8  IMR7EIMK247:1;                                  /* IMR7EIMK247      */
    uint8  IMR7EIMK248:1;                                  /* IMR7EIMK248      */
    uint8  IMR7EIMK249:1;                                  /* IMR7EIMK249      */
    uint8  IMR7EIMK250:1;                                  /* IMR7EIMK250      */
    uint8  IMR7EIMK251:1;                                  /* IMR7EIMK251      */
    uint8  IMR7EIMK252:1;                                  /* IMR7EIMK252      */
    uint8  IMR7EIMK253:1;                                  /* IMR7EIMK253      */
    uint8  IMR7EIMK254:1;                                  /* IMR7EIMK254      */
    uint8  :1;                                             /* Reserved Bits    */
} __type1273;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IMR8EIMK256:1;                                  /* IMR8EIMK256      */
    uint8  IMR8EIMK257:1;                                  /* IMR8EIMK257      */
    uint8  IMR8EIMK258:1;                                  /* IMR8EIMK258      */
    uint8  IMR8EIMK259:1;                                  /* IMR8EIMK259      */
    uint8  IMR8EIMK260:1;                                  /* IMR8EIMK260      */
    uint8  IMR8EIMK261:1;                                  /* IMR8EIMK261      */
    uint8  IMR8EIMK262:1;                                  /* IMR8EIMK262      */
    uint8  IMR8EIMK263:1;                                  /* IMR8EIMK263      */
    uint8  IMR8EIMK264:1;                                  /* IMR8EIMK264      */
    uint8  IMR8EIMK265:1;                                  /* IMR8EIMK265      */
    uint8  IMR8EIMK266:1;                                  /* IMR8EIMK266      */
    uint8  IMR8EIMK267:1;                                  /* IMR8EIMK267      */
    uint8  IMR8EIMK268:1;                                  /* IMR8EIMK268      */
    uint8  IMR8EIMK269:1;                                  /* IMR8EIMK269      */
    uint8  IMR8EIMK270:1;                                  /* IMR8EIMK270      */
    uint8  IMR8EIMK271:1;                                  /* IMR8EIMK271      */
    uint8  IMR8EIMK272:1;                                  /* IMR8EIMK272      */
    uint8  IMR8EIMK273:1;                                  /* IMR8EIMK273      */
    uint8  IMR8EIMK274:1;                                  /* IMR8EIMK274      */
    uint8  IMR8EIMK275:1;                                  /* IMR8EIMK275      */
    uint8  IMR8EIMK276:1;                                  /* IMR8EIMK276      */
    uint8  IMR8EIMK277:1;                                  /* IMR8EIMK277      */
    uint8  IMR8EIMK278:1;                                  /* IMR8EIMK278      */
    uint8  IMR8EIMK279:1;                                  /* IMR8EIMK279      */
    uint8  IMR8EIMK280:1;                                  /* IMR8EIMK280      */
    uint8  IMR8EIMK281:1;                                  /* IMR8EIMK281      */
    uint8  IMR8EIMK282:1;                                  /* IMR8EIMK282      */
    uint8  IMR8EIMK283:1;                                  /* IMR8EIMK283      */
    uint8  IMR8EIMK284:1;                                  /* IMR8EIMK284      */
    uint8  IMR8EIMK285:1;                                  /* IMR8EIMK285      */
    uint8  IMR8EIMK286:1;                                  /* IMR8EIMK286      */
    uint8  IMR8EIMK287:1;                                  /* IMR8EIMK287      */
} __type1274;
typedef struct 
{                                                          /* Bit Access       */
    uint8  IMR9EIMK288:1;                                  /* IMR9EIMK288      */
    uint8  IMR9EIMK289:1;                                  /* IMR9EIMK289      */
    uint8  IMR9EIMK290:1;                                  /* IMR9EIMK290      */
    uint8  IMR9EIMK291:1;                                  /* IMR9EIMK291      */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  IMR9EIMK294:1;                                  /* IMR9EIMK294      */
    uint8  IMR9EIMK295:1;                                  /* IMR9EIMK295      */
    uint8  IMR9EIMK296:1;                                  /* IMR9EIMK296      */
    uint8  IMR9EIMK297:1;                                  /* IMR9EIMK297      */
    uint8  IMR9EIMK298:1;                                  /* IMR9EIMK298      */
    uint8  :5;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
} __type1275;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :8;                                             /* Reserved Bits    */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  IMR11EIMK379:1;                                 /* IMR11EIMK379     */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  IMR11EIMK383:1;                                 /* IMR11EIMK383     */
} __type1276;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type133 BIT;                                         /* Bit Access       */
} __type1412;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type134 BIT;                                         /* Bit Access       */
} __type1413;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type135 BIT;                                         /* Bit Access       */
} __type1414;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type136 BIT;                                         /* Bit Access       */
} __type1415;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type137 BIT;                                         /* Bit Access       */
} __type1416;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type927 BIT;                                   /* Bit Access       */
} __type2206;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type928 BIT;                                   /* Bit Access       */
} __type2207;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type929 BIT;                                   /* Bit Access       */
} __type2208;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type930 BIT;                                   /* Bit Access       */
} __type2209;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type931 BIT;                                   /* Bit Access       */
} __type2210;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type932 BIT;                                   /* Bit Access       */
} __type2211;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type933 BIT;                                   /* Bit Access       */
} __type2212;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    const __type934 BIT;                                   /* Bit Access       */
} __type2213;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type935 BIT;                                         /* Bit Access       */
} __type2214;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type936 BIT;                                         /* Bit Access       */
} __type2215;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type937 BIT;                                         /* Bit Access       */
} __type2216;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type938 BIT;                                         /* Bit Access       */
} __type2217;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type939 BIT;                                         /* Bit Access       */
} __type2218;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type940 BIT;                                         /* Bit Access       */
} __type2219;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type941 BIT;                                         /* Bit Access       */
} __type2220;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type942 BIT;                                         /* Bit Access       */
} __type2221;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type961 BIT;                                         /* Bit Access       */
} __type2241;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type962 BIT;                                         /* Bit Access       */
} __type2242;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type963 BIT;                                         /* Bit Access       */
} __type2243;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type964 BIT;                                         /* Bit Access       */
} __type2244;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type965 BIT;                                         /* Bit Access       */
} __type2245;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type966 BIT;                                         /* Bit Access       */
} __type2246;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type967 BIT;                                         /* Bit Access       */
} __type2247;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type968 BIT;                                         /* Bit Access       */
} __type2248;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type969 BIT;                                         /* Bit Access       */
} __type2249;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type970 BIT;                                         /* Bit Access       */
} __type2250;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type971 BIT;                                         /* Bit Access       */
} __type2251;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type972 BIT;                                         /* Bit Access       */
} __type2252;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type973 BIT;                                         /* Bit Access       */
} __type2253;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type974 BIT;                                         /* Bit Access       */
} __type2254;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type975 BIT;                                         /* Bit Access       */
} __type2255;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type976 BIT;                                         /* Bit Access       */
} __type2256;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type977 BIT;                                         /* Bit Access       */
} __type2257;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type978 BIT;                                         /* Bit Access       */
} __type2258;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    const __type979 BIT;                                   /* Bit Access       */
} __type2259;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    const __type980 BIT;                                   /* Bit Access       */
} __type2260;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type981 BIT;                                         /* Bit Access       */
} __type2261;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type982 BIT;                                         /* Bit Access       */
} __type2262;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1031 BIT;                                        /* Bit Access       */
} __type2312;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1032 BIT;                                        /* Bit Access       */
} __type2313;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1033 BIT;                                        /* Bit Access       */
} __type2314;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1034 BIT;                                        /* Bit Access       */
} __type2315;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1035 BIT;                                        /* Bit Access       */
} __type2316;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1036 BIT;                                        /* Bit Access       */
} __type2317;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1037 BIT;                                        /* Bit Access       */
} __type2318;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1038 BIT;                                        /* Bit Access       */
} __type2319;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1039 BIT;                                        /* Bit Access       */
} __type2320;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1040 BIT;                                        /* Bit Access       */
} __type2321;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1041 BIT;                                        /* Bit Access       */
} __type2322;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1042 BIT;                                        /* Bit Access       */
} __type2323;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1043 BIT;                                        /* Bit Access       */
} __type2324;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1044 BIT;                                        /* Bit Access       */
} __type2325;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1045 BIT;                                        /* Bit Access       */
} __type2326;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1046 BIT;                                        /* Bit Access       */
} __type2327;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1047 BIT;                                        /* Bit Access       */
} __type2328;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1048 BIT;                                        /* Bit Access       */
} __type2329;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1049 BIT;                                        /* Bit Access       */
} __type2330;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1050 BIT;                                        /* Bit Access       */
} __type2331;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1051 BIT;                                        /* Bit Access       */
} __type2332;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1052 BIT;                                        /* Bit Access       */
} __type2333;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1053 BIT;                                        /* Bit Access       */
} __type2334;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1054 BIT;                                        /* Bit Access       */
} __type2335;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1055 BIT;                                        /* Bit Access       */
} __type2336;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1056 BIT;                                        /* Bit Access       */
} __type2337;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1057 BIT;                                        /* Bit Access       */
} __type2338;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1058 BIT;                                        /* Bit Access       */
} __type2339;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1059 BIT;                                        /* Bit Access       */
} __type2340;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1060 BIT;                                        /* Bit Access       */
} __type2341;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1061 BIT;                                        /* Bit Access       */
} __type2342;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1062 BIT;                                        /* Bit Access       */
} __type2343;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1063 BIT;                                        /* Bit Access       */
} __type2344;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1064 BIT;                                        /* Bit Access       */
} __type2345;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1065 BIT;                                        /* Bit Access       */
} __type2346;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1066 BIT;                                        /* Bit Access       */
} __type2347;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1067 BIT;                                        /* Bit Access       */
} __type2348;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1068 BIT;                                        /* Bit Access       */
} __type2349;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1069 BIT;                                        /* Bit Access       */
} __type2350;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1070 BIT;                                        /* Bit Access       */
} __type2351;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1071 BIT;                                        /* Bit Access       */
} __type2352;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1072 BIT;                                        /* Bit Access       */
} __type2353;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1073 BIT;                                        /* Bit Access       */
} __type2354;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1074 BIT;                                        /* Bit Access       */
} __type2355;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1075 BIT;                                        /* Bit Access       */
} __type2356;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1076 BIT;                                        /* Bit Access       */
} __type2357;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1077 BIT;                                        /* Bit Access       */
} __type2358;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1078 BIT;                                        /* Bit Access       */
} __type2359;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1079 BIT;                                        /* Bit Access       */
} __type2360;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1080 BIT;                                        /* Bit Access       */
} __type2361;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1081 BIT;                                        /* Bit Access       */
} __type2362;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1082 BIT;                                        /* Bit Access       */
} __type2363;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1083 BIT;                                        /* Bit Access       */
} __type2364;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1084 BIT;                                        /* Bit Access       */
} __type2365;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1085 BIT;                                        /* Bit Access       */
} __type2366;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1086 BIT;                                        /* Bit Access       */
} __type2367;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1087 BIT;                                        /* Bit Access       */
} __type2368;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1088 BIT;                                        /* Bit Access       */
} __type2369;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1089 BIT;                                        /* Bit Access       */
} __type2370;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1090 BIT;                                        /* Bit Access       */
} __type2371;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1091 BIT;                                        /* Bit Access       */
} __type2372;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1092 BIT;                                        /* Bit Access       */
} __type2373;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1093 BIT;                                        /* Bit Access       */
} __type2374;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1094 BIT;                                        /* Bit Access       */
} __type2375;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1095 BIT;                                        /* Bit Access       */
} __type2376;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1096 BIT;                                        /* Bit Access       */
} __type2377;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1097 BIT;                                        /* Bit Access       */
} __type2378;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1098 BIT;                                        /* Bit Access       */
} __type2379;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1099 BIT;                                        /* Bit Access       */
} __type2380;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1100 BIT;                                        /* Bit Access       */
} __type2381;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1101 BIT;                                        /* Bit Access       */
} __type2382;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1102 BIT;                                        /* Bit Access       */
} __type2383;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1103 BIT;                                        /* Bit Access       */
} __type2384;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1104 BIT;                                        /* Bit Access       */
} __type2385;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1105 BIT;                                        /* Bit Access       */
} __type2386;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1106 BIT;                                        /* Bit Access       */
} __type2387;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1107 BIT;                                        /* Bit Access       */
} __type2388;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1108 BIT;                                        /* Bit Access       */
} __type2389;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1109 BIT;                                        /* Bit Access       */
} __type2390;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1110 BIT;                                        /* Bit Access       */
} __type2391;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1111 BIT;                                        /* Bit Access       */
} __type2392;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1112 BIT;                                        /* Bit Access       */
} __type2393;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1113 BIT;                                        /* Bit Access       */
} __type2394;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1114 BIT;                                        /* Bit Access       */
} __type2395;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1115 BIT;                                        /* Bit Access       */
} __type2396;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1116 BIT;                                        /* Bit Access       */
} __type2397;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1117 BIT;                                        /* Bit Access       */
} __type2398;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1118 BIT;                                        /* Bit Access       */
} __type2399;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1119 BIT;                                        /* Bit Access       */
} __type2400;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1120 BIT;                                        /* Bit Access       */
} __type2401;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1121 BIT;                                        /* Bit Access       */
} __type2402;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1122 BIT;                                        /* Bit Access       */
} __type2403;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1123 BIT;                                        /* Bit Access       */
} __type2404;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1124 BIT;                                        /* Bit Access       */
} __type2405;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1125 BIT;                                        /* Bit Access       */
} __type2406;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1126 BIT;                                        /* Bit Access       */
} __type2407;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1127 BIT;                                        /* Bit Access       */
} __type2408;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1128 BIT;                                        /* Bit Access       */
} __type2409;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1129 BIT;                                        /* Bit Access       */
} __type2410;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1130 BIT;                                        /* Bit Access       */
} __type2411;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1131 BIT;                                        /* Bit Access       */
} __type2412;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1132 BIT;                                        /* Bit Access       */
} __type2413;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1133 BIT;                                        /* Bit Access       */
} __type2414;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1134 BIT;                                        /* Bit Access       */
} __type2415;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1135 BIT;                                        /* Bit Access       */
} __type2416;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1136 BIT;                                        /* Bit Access       */
} __type2417;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1137 BIT;                                        /* Bit Access       */
} __type2418;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1138 BIT;                                        /* Bit Access       */
} __type2419;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1139 BIT;                                        /* Bit Access       */
} __type2420;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1140 BIT;                                        /* Bit Access       */
} __type2421;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1141 BIT;                                        /* Bit Access       */
} __type2422;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1142 BIT;                                        /* Bit Access       */
} __type2423;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1143 BIT;                                        /* Bit Access       */
} __type2424;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1144 BIT;                                        /* Bit Access       */
} __type2425;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1145 BIT;                                        /* Bit Access       */
} __type2426;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1146 BIT;                                        /* Bit Access       */
} __type2427;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1147 BIT;                                        /* Bit Access       */
} __type2428;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1148 BIT;                                        /* Bit Access       */
} __type2429;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1149 BIT;                                        /* Bit Access       */
} __type2430;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1150 BIT;                                        /* Bit Access       */
} __type2431;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1151 BIT;                                        /* Bit Access       */
} __type2432;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1152 BIT;                                        /* Bit Access       */
} __type2433;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1153 BIT;                                        /* Bit Access       */
} __type2434;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1154 BIT;                                        /* Bit Access       */
} __type2435;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1155 BIT;                                        /* Bit Access       */
} __type2436;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1156 BIT;                                        /* Bit Access       */
} __type2437;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1157 BIT;                                        /* Bit Access       */
} __type2438;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1158 BIT;                                        /* Bit Access       */
} __type2439;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1159 BIT;                                        /* Bit Access       */
} __type2440;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1160 BIT;                                        /* Bit Access       */
} __type2441;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1161 BIT;                                        /* Bit Access       */
} __type2442;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1162 BIT;                                        /* Bit Access       */
} __type2443;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1163 BIT;                                        /* Bit Access       */
} __type2444;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1164 BIT;                                        /* Bit Access       */
} __type2445;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1165 BIT;                                        /* Bit Access       */
} __type2446;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1166 BIT;                                        /* Bit Access       */
} __type2447;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1167 BIT;                                        /* Bit Access       */
} __type2448;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1168 BIT;                                        /* Bit Access       */
} __type2449;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1169 BIT;                                        /* Bit Access       */
} __type2450;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1170 BIT;                                        /* Bit Access       */
} __type2451;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1171 BIT;                                        /* Bit Access       */
} __type2452;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1172 BIT;                                        /* Bit Access       */
} __type2453;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1173 BIT;                                        /* Bit Access       */
} __type2454;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1174 BIT;                                        /* Bit Access       */
} __type2455;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1175 BIT;                                        /* Bit Access       */
} __type2456;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1176 BIT;                                        /* Bit Access       */
} __type2457;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1177 BIT;                                        /* Bit Access       */
} __type2458;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1178 BIT;                                        /* Bit Access       */
} __type2459;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1179 BIT;                                        /* Bit Access       */
} __type2460;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1180 BIT;                                        /* Bit Access       */
} __type2461;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1181 BIT;                                        /* Bit Access       */
} __type2462;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1182 BIT;                                        /* Bit Access       */
} __type2463;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1183 BIT;                                        /* Bit Access       */
} __type2464;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1184 BIT;                                        /* Bit Access       */
} __type2465;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1185 BIT;                                        /* Bit Access       */
} __type2466;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1186 BIT;                                        /* Bit Access       */
} __type2467;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1187 BIT;                                        /* Bit Access       */
} __type2468;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1188 BIT;                                        /* Bit Access       */
} __type2469;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1189 BIT;                                        /* Bit Access       */
} __type2470;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1190 BIT;                                        /* Bit Access       */
} __type2471;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1191 BIT;                                        /* Bit Access       */
} __type2472;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1192 BIT;                                        /* Bit Access       */
} __type2473;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1193 BIT;                                        /* Bit Access       */
} __type2474;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1194 BIT;                                        /* Bit Access       */
} __type2475;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1195 BIT;                                        /* Bit Access       */
} __type2476;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1196 BIT;                                        /* Bit Access       */
} __type2477;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1197 BIT;                                        /* Bit Access       */
} __type2478;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1198 BIT;                                        /* Bit Access       */
} __type2479;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1199 BIT;                                        /* Bit Access       */
} __type2480;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1200 BIT;                                        /* Bit Access       */
} __type2481;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1201 BIT;                                        /* Bit Access       */
} __type2482;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1202 BIT;                                        /* Bit Access       */
} __type2483;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1203 BIT;                                        /* Bit Access       */
} __type2484;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1204 BIT;                                        /* Bit Access       */
} __type2485;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1205 BIT;                                        /* Bit Access       */
} __type2486;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1206 BIT;                                        /* Bit Access       */
} __type2487;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1207 BIT;                                        /* Bit Access       */
} __type2488;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1208 BIT;                                        /* Bit Access       */
} __type2489;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1209 BIT;                                        /* Bit Access       */
} __type2490;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1210 BIT;                                        /* Bit Access       */
} __type2491;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1211 BIT;                                        /* Bit Access       */
} __type2492;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1212 BIT;                                        /* Bit Access       */
} __type2493;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1213 BIT;                                        /* Bit Access       */
} __type2494;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1214 BIT;                                        /* Bit Access       */
} __type2495;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1215 BIT;                                        /* Bit Access       */
} __type2496;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1216 BIT;                                        /* Bit Access       */
} __type2497;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1217 BIT;                                        /* Bit Access       */
} __type2498;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1218 BIT;                                        /* Bit Access       */
} __type2499;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1219 BIT;                                        /* Bit Access       */
} __type2500;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1220 BIT;                                        /* Bit Access       */
} __type2501;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1221 BIT;                                        /* Bit Access       */
} __type2502;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1222 BIT;                                        /* Bit Access       */
} __type2503;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1223 BIT;                                        /* Bit Access       */
} __type2504;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1224 BIT;                                        /* Bit Access       */
} __type2505;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1225 BIT;                                        /* Bit Access       */
} __type2506;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1226 BIT;                                        /* Bit Access       */
} __type2507;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1227 BIT;                                        /* Bit Access       */
} __type2508;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1228 BIT;                                        /* Bit Access       */
} __type2509;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1229 BIT;                                        /* Bit Access       */
} __type2510;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1230 BIT;                                        /* Bit Access       */
} __type2511;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1231 BIT;                                        /* Bit Access       */
} __type2512;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1232 BIT;                                        /* Bit Access       */
} __type2513;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1233 BIT;                                        /* Bit Access       */
} __type2514;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1234 BIT;                                        /* Bit Access       */
} __type2515;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1235 BIT;                                        /* Bit Access       */
} __type2516;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1236 BIT;                                        /* Bit Access       */
} __type2517;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1237 BIT;                                        /* Bit Access       */
} __type2518;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1238 BIT;                                        /* Bit Access       */
} __type2519;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1239 BIT;                                        /* Bit Access       */
} __type2520;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1240 BIT;                                        /* Bit Access       */
} __type2521;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1241 BIT;                                        /* Bit Access       */
} __type2522;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1242 BIT;                                        /* Bit Access       */
} __type2523;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1243 BIT;                                        /* Bit Access       */
} __type2524;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1244 BIT;                                        /* Bit Access       */
} __type2525;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1245 BIT;                                        /* Bit Access       */
} __type2526;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1246 BIT;                                        /* Bit Access       */
} __type2527;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1247 BIT;                                        /* Bit Access       */
} __type2528;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1248 BIT;                                        /* Bit Access       */
} __type2529;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1249 BIT;                                        /* Bit Access       */
} __type2530;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1250 BIT;                                        /* Bit Access       */
} __type2531;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1251 BIT;                                        /* Bit Access       */
} __type2532;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1252 BIT;                                        /* Bit Access       */
} __type2533;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1253 BIT;                                        /* Bit Access       */
} __type2534;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1254 BIT;                                        /* Bit Access       */
} __type2535;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1255 BIT;                                        /* Bit Access       */
} __type2536;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1256 BIT;                                        /* Bit Access       */
} __type2537;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1257 BIT;                                        /* Bit Access       */
} __type2538;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1258 BIT;                                        /* Bit Access       */
} __type2539;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1259 BIT;                                        /* Bit Access       */
} __type2540;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1260 BIT;                                        /* Bit Access       */
} __type2541;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1261 BIT;                                        /* Bit Access       */
} __type2542;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1262 BIT;                                        /* Bit Access       */
} __type2543;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1263 BIT;                                        /* Bit Access       */
} __type2544;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1264 BIT;                                        /* Bit Access       */
} __type2545;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1265 BIT;                                        /* Bit Access       */
} __type2546;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    __type1266 BIT;                                        /* Bit Access       */
} __type2547;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type1267 BIT;                                        /* Bit Access       */
} __type2548;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type1268 BIT;                                        /* Bit Access       */
} __type2549;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type1269 BIT;                                        /* Bit Access       */
} __type2550;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type1270 BIT;                                        /* Bit Access       */
} __type2551;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type1271 BIT;                                        /* Bit Access       */
} __type2552;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type1272 BIT;                                        /* Bit Access       */
} __type2553;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type1273 BIT;                                        /* Bit Access       */
} __type2554;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type1274 BIT;                                        /* Bit Access       */
} __type2555;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type1275 BIT;                                        /* Bit Access       */
} __type2556;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    __type1276 BIT;                                        /* Bit Access       */
} __type2557;

typedef struct 
{                                                          /* Module           */
    __type1412 R0;                                         /* R0               */
    uint8  dummy48[3];                                     /* Reserved         */
    __type1413 R1;                                         /* R1               */
    uint8  dummy49[3];                                     /* Reserved         */
    __type1414 R2;                                         /* R2               */
    uint8  dummy50[3];                                     /* Reserved         */
    __type1415 R3;                                         /* R3               */
    uint8  dummy51[3];                                     /* Reserved         */
    __type1416 R4;                                         /* R4               */
} __type2563;
typedef struct 
{                                                          /* Module           */
    const __type2206 PINT0;                                /* PINT0            */
    const __type2207 PINT1;                                /* PINT1            */
    const __type2208 PINT2;                                /* PINT2            */
    const __type2209 PINT3;                                /* PINT3            */
    const __type2210 PINT4;                                /* PINT4            */
    const __type2211 PINT5;                                /* PINT5            */
    const __type2212 PINT6;                                /* PINT6            */
    const __type2213 PINT7;                                /* PINT7            */
    __type2214 PINTCLR0;                                   /* PINTCLR0         */
    __type2215 PINTCLR1;                                   /* PINTCLR1         */
    __type2216 PINTCLR2;                                   /* PINTCLR2         */
    __type2217 PINTCLR3;                                   /* PINTCLR3         */
    __type2218 PINTCLR4;                                   /* PINTCLR4         */
    __type2219 PINTCLR5;                                   /* PINTCLR5         */
    __type2220 PINTCLR6;                                   /* PINTCLR6         */
    __type2221 PINTCLR7;                                   /* PINTCLR7         */
} __type2618;
typedef struct 
{                                                          /* Module           */
    __type2241 EIC8;                                       /* EIC8             */
    __type2242 EIC9;                                       /* EIC9             */
    uint8  dummy827[12];                                   /* Reserved         */
    __type2243 EIC16;                                      /* EIC16            */
    __type2244 EIC17;                                      /* EIC17            */
    __type2245 EIC18;                                      /* EIC18            */
    __type2246 EIC19;                                      /* EIC19            */
    __type2247 EIC20;                                      /* EIC20            */
    __type2248 EIC21;                                      /* EIC21            */
    __type2249 EIC22;                                      /* EIC22            */
    __type2250 EIC23;                                      /* EIC23            */
    __type2251 EIC24;                                      /* EIC24            */
    __type2252 EIC25;                                      /* EIC25            */
    __type2253 EIC26;                                      /* EIC26            */
    __type2254 EIC27;                                      /* EIC27            */
    __type2255 EIC28;                                      /* EIC28            */
    __type2256 EIC29;                                      /* EIC29            */
    __type2257 EIC30;                                      /* EIC30            */
    __type2258 EIC31;                                      /* EIC31            */
    uint8  dummy828[56];                                   /* Reserved         */
    const __type2259 FNC;                                  /* FNC              */
    const __type2260 FIC;                                  /* FIC              */
    uint8  dummy829[116];                                  /* Reserved         */
    __type2261 IMR0;                                       /* IMR0             */
    uint8  dummy830[44];                                   /* Reserved         */
    __type2262 EIBD8;                                      /* EIBD8            */
    __type2262 EIBD9;                                      /* EIBD9            */
    uint8  dummy831[24];                                   /* Reserved         */
    __type2262 EIBD16;                                     /* EIBD16           */
    __type2262 EIBD17;                                     /* EIBD17           */
    __type2262 EIBD18;                                     /* EIBD18           */
    __type2262 EIBD19;                                     /* EIBD19           */
    __type2262 EIBD20;                                     /* EIBD20           */
    __type2262 EIBD21;                                     /* EIBD21           */
    __type2262 EIBD22;                                     /* EIBD22           */
    __type2262 EIBD23;                                     /* EIBD23           */
    __type2262 EIBD24;                                     /* EIBD24           */
    __type2262 EIBD25;                                     /* EIBD25           */
    __type2262 EIBD26;                                     /* EIBD26           */
    __type2262 EIBD27;                                     /* EIBD27           */
    __type2262 EIBD28;                                     /* EIBD28           */
    __type2262 EIBD29;                                     /* EIBD29           */
    __type2262 EIBD30;                                     /* EIBD30           */
    __type2262 EIBD31;                                     /* EIBD31           */
} __type2622;
typedef struct 
{                                                          /* Module           */
    __type2312 EIC32;                                      /* EIC32            */
    __type2313 EIC33;                                      /* EIC33            */
    __type2314 EIC34;                                      /* EIC34            */
    __type2315 EIC35;                                      /* EIC35            */
    __type2316 EIC36;                                      /* EIC36            */
    uint8  dummy981[6];                                    /* Reserved         */
    __type2317 EIC40;                                      /* EIC40            */
    __type2318 EIC41;                                      /* EIC41            */
    __type2319 EIC42;                                      /* EIC42            */
    __type2320 EIC43;                                      /* EIC43            */
    __type2321 EIC44;                                      /* EIC44            */
    __type2322 EIC45;                                      /* EIC45            */
    __type2323 EIC46;                                      /* EIC46            */
    __type2324 EIC47;                                      /* EIC47            */
    __type2325 EIC48;                                      /* EIC48            */
    __type2326 EIC49;                                      /* EIC49            */
    __type2327 EIC50;                                      /* EIC50            */
    __type2328 EIC51;                                      /* EIC51            */
    __type2329 EIC52;                                      /* EIC52            */
    __type2330 EIC53;                                      /* EIC53            */
    __type2331 EIC54;                                      /* EIC54            */
    __type2332 EIC55;                                      /* EIC55            */
    __type2333 EIC56;                                      /* EIC56            */
    __type2334 EIC57;                                      /* EIC57            */
    __type2335 EIC58;                                      /* EIC58            */
    __type2336 EIC59;                                      /* EIC59            */
    __type2337 EIC60;                                      /* EIC60            */
    __type2338 EIC61;                                      /* EIC61            */
    __type2339 EIC62;                                      /* EIC62            */
    __type2340 EIC63;                                      /* EIC63            */
    __type2341 EIC64;                                      /* EIC64            */
    __type2342 EIC65;                                      /* EIC65            */
    __type2343 EIC66;                                      /* EIC66            */
    __type2344 EIC67;                                      /* EIC67            */
    __type2345 EIC68;                                      /* EIC68            */
    __type2346 EIC69;                                      /* EIC69            */
    __type2347 EIC70;                                      /* EIC70            */
    __type2348 EIC71;                                      /* EIC71            */
    __type2349 EIC72;                                      /* EIC72            */
    __type2350 EIC73;                                      /* EIC73            */
    __type2351 EIC74;                                      /* EIC74            */
    __type2352 EIC75;                                      /* EIC75            */
    __type2353 EIC76;                                      /* EIC76            */
    __type2354 EIC77;                                      /* EIC77            */
    __type2355 EIC78;                                      /* EIC78            */
    __type2356 EIC79;                                      /* EIC79            */
    __type2357 EIC80;                                      /* EIC80            */
    __type2358 EIC81;                                      /* EIC81            */
    __type2359 EIC82;                                      /* EIC82            */
    __type2360 EIC83;                                      /* EIC83            */
    __type2361 EIC84;                                      /* EIC84            */
    __type2362 EIC85;                                      /* EIC85            */
    __type2363 EIC86;                                      /* EIC86            */
    __type2364 EIC87;                                      /* EIC87            */
    __type2365 EIC88;                                      /* EIC88            */
    __type2366 EIC89;                                      /* EIC89            */
    __type2367 EIC90;                                      /* EIC90            */
    __type2368 EIC91;                                      /* EIC91            */
    __type2369 EIC92;                                      /* EIC92            */
    __type2370 EIC93;                                      /* EIC93            */
    __type2371 EIC94;                                      /* EIC94            */
    __type2372 EIC95;                                      /* EIC95            */
    __type2373 EIC96;                                      /* EIC96            */
    __type2374 EIC97;                                      /* EIC97            */
    __type2375 EIC98;                                      /* EIC98            */
    __type2376 EIC99;                                      /* EIC99            */
    __type2377 EIC100;                                     /* EIC100           */
    __type2378 EIC101;                                     /* EIC101           */
    __type2379 EIC102;                                     /* EIC102           */
    __type2380 EIC103;                                     /* EIC103           */
    __type2381 EIC104;                                     /* EIC104           */
    __type2382 EIC105;                                     /* EIC105           */
    __type2383 EIC106;                                     /* EIC106           */
    __type2384 EIC107;                                     /* EIC107           */
    __type2385 EIC108;                                     /* EIC108           */
    __type2386 EIC109;                                     /* EIC109           */
    __type2387 EIC110;                                     /* EIC110           */
    __type2388 EIC111;                                     /* EIC111           */
    __type2389 EIC112;                                     /* EIC112           */
    __type2390 EIC113;                                     /* EIC113           */
    __type2391 EIC114;                                     /* EIC114           */
    __type2392 EIC115;                                     /* EIC115           */
    __type2393 EIC116;                                     /* EIC116           */
    __type2394 EIC117;                                     /* EIC117           */
    __type2395 EIC118;                                     /* EIC118           */
    __type2396 EIC119;                                     /* EIC119           */
    __type2397 EIC120;                                     /* EIC120           */
    __type2398 EIC121;                                     /* EIC121           */
    uint8  dummy982[12];                                   /* Reserved         */
    __type2399 EIC128;                                     /* EIC128           */
    __type2400 EIC129;                                     /* EIC129           */
    __type2401 EIC130;                                     /* EIC130           */
    __type2402 EIC131;                                     /* EIC131           */
    __type2403 EIC132;                                     /* EIC132           */
    __type2404 EIC133;                                     /* EIC133           */
    __type2405 EIC134;                                     /* EIC134           */
    __type2406 EIC135;                                     /* EIC135           */
    __type2407 EIC136;                                     /* EIC136           */
    __type2408 EIC137;                                     /* EIC137           */
    __type2409 EIC138;                                     /* EIC138           */
    __type2410 EIC139;                                     /* EIC139           */
    __type2411 EIC140;                                     /* EIC140           */
    __type2412 EIC141;                                     /* EIC141           */
    __type2413 EIC142;                                     /* EIC142           */
    __type2414 EIC143;                                     /* EIC143           */
    __type2415 EIC144;                                     /* EIC144           */
    __type2416 EIC145;                                     /* EIC145           */
    __type2417 EIC146;                                     /* EIC146           */
    __type2418 EIC147;                                     /* EIC147           */
    __type2419 EIC148;                                     /* EIC148           */
    __type2420 EIC149;                                     /* EIC149           */
    __type2421 EIC150;                                     /* EIC150           */
    __type2422 EIC151;                                     /* EIC151           */
    __type2423 EIC152;                                     /* EIC152           */
    __type2424 EIC153;                                     /* EIC153           */
    __type2425 EIC154;                                     /* EIC154           */
    __type2426 EIC155;                                     /* EIC155           */
    __type2427 EIC156;                                     /* EIC156           */
    uint8  dummy983[2];                                    /* Reserved         */
    __type2428 EIC158;                                     /* EIC158           */
    __type2429 EIC159;                                     /* EIC159           */
    __type2430 EIC160;                                     /* EIC160           */
    __type2431 EIC161;                                     /* EIC161           */
    __type2432 EIC162;                                     /* EIC162           */
    __type2433 EIC163;                                     /* EIC163           */
    __type2434 EIC164;                                     /* EIC164           */
    __type2435 EIC165;                                     /* EIC165           */
    __type2436 EIC166;                                     /* EIC166           */
    __type2437 EIC167;                                     /* EIC167           */
    __type2438 EIC168;                                     /* EIC168           */
    __type2439 EIC169;                                     /* EIC169           */
    __type2440 EIC170;                                     /* EIC170           */
    __type2441 EIC171;                                     /* EIC171           */
    __type2442 EIC172;                                     /* EIC172           */
    __type2443 EIC173;                                     /* EIC173           */
    __type2444 EIC174;                                     /* EIC174           */
    __type2445 EIC175;                                     /* EIC175           */
    __type2446 EIC176;                                     /* EIC176           */
    __type2447 EIC177;                                     /* EIC177           */
    __type2448 EIC178;                                     /* EIC178           */
    __type2449 EIC179;                                     /* EIC179           */
    __type2450 EIC180;                                     /* EIC180           */
    __type2451 EIC181;                                     /* EIC181           */
    __type2452 EIC182;                                     /* EIC182           */
    __type2453 EIC183;                                     /* EIC183           */
    __type2454 EIC184;                                     /* EIC184           */
    __type2455 EIC185;                                     /* EIC185           */
    __type2456 EIC186;                                     /* EIC186           */
    __type2457 EIC187;                                     /* EIC187           */
    __type2458 EIC188;                                     /* EIC188           */
    __type2459 EIC189;                                     /* EIC189           */
    __type2460 EIC190;                                     /* EIC190           */
    uint8  dummy984[6];                                    /* Reserved         */
    __type2461 EIC194;                                     /* EIC194           */
    __type2462 EIC195;                                     /* EIC195           */
    __type2463 EIC196;                                     /* EIC196           */
    __type2464 EIC197;                                     /* EIC197           */
    __type2465 EIC198;                                     /* EIC198           */
    __type2466 EIC199;                                     /* EIC199           */
    __type2467 EIC200;                                     /* EIC200           */
    __type2468 EIC201;                                     /* EIC201           */
    __type2469 EIC202;                                     /* EIC202           */
    __type2470 EIC203;                                     /* EIC203           */
    __type2471 EIC204;                                     /* EIC204           */
    uint8  dummy985[26];                                   /* Reserved         */
    __type2472 EIC218;                                     /* EIC218           */
    __type2473 EIC219;                                     /* EIC219           */
    __type2474 EIC220;                                     /* EIC220           */
    __type2475 EIC221;                                     /* EIC221           */
    uint8  dummy986[8];                                    /* Reserved         */
    __type2476 EIC226;                                     /* EIC226           */
    __type2477 EIC227;                                     /* EIC227           */
    __type2478 EIC228;                                     /* EIC228           */
    __type2479 EIC229;                                     /* EIC229           */
    __type2480 EIC230;                                     /* EIC230           */
    __type2481 EIC231;                                     /* EIC231           */
    __type2482 EIC232;                                     /* EIC232           */
    __type2483 EIC233;                                     /* EIC233           */
    __type2484 EIC234;                                     /* EIC234           */
    __type2485 EIC235;                                     /* EIC235           */
    __type2486 EIC236;                                     /* EIC236           */
    __type2487 EIC237;                                     /* EIC237           */
    __type2488 EIC238;                                     /* EIC238           */
    __type2489 EIC239;                                     /* EIC239           */
    __type2490 EIC240;                                     /* EIC240           */
    __type2491 EIC241;                                     /* EIC241           */
    __type2492 EIC242;                                     /* EIC242           */
    __type2493 EIC243;                                     /* EIC243           */
    __type2494 EIC244;                                     /* EIC244           */
    __type2495 EIC245;                                     /* EIC245           */
    __type2496 EIC246;                                     /* EIC246           */
    __type2497 EIC247;                                     /* EIC247           */
    __type2498 EIC248;                                     /* EIC248           */
    __type2499 EIC249;                                     /* EIC249           */
    __type2500 EIC250;                                     /* EIC250           */
    __type2501 EIC251;                                     /* EIC251           */
    __type2502 EIC252;                                     /* EIC252           */
    __type2503 EIC253;                                     /* EIC253           */
    __type2504 EIC254;                                     /* EIC254           */
    uint8  dummy987[2];                                    /* Reserved         */
    __type2505 EIC256;                                     /* EIC256           */
    __type2506 EIC257;                                     /* EIC257           */
    __type2507 EIC258;                                     /* EIC258           */
    __type2508 EIC259;                                     /* EIC259           */
    __type2509 EIC260;                                     /* EIC260           */
    __type2510 EIC261;                                     /* EIC261           */
    __type2511 EIC262;                                     /* EIC262           */
    __type2512 EIC263;                                     /* EIC263           */
    __type2513 EIC264;                                     /* EIC264           */
    __type2514 EIC265;                                     /* EIC265           */
    __type2515 EIC266;                                     /* EIC266           */
    __type2516 EIC267;                                     /* EIC267           */
    __type2517 EIC268;                                     /* EIC268           */
    __type2518 EIC269;                                     /* EIC269           */
    __type2519 EIC270;                                     /* EIC270           */
    __type2520 EIC271;                                     /* EIC271           */
    __type2521 EIC272;                                     /* EIC272           */
    __type2522 EIC273;                                     /* EIC273           */
    __type2523 EIC274;                                     /* EIC274           */
    __type2524 EIC275;                                     /* EIC275           */
    __type2525 EIC276;                                     /* EIC276           */
    __type2526 EIC277;                                     /* EIC277           */
    __type2527 EIC278;                                     /* EIC278           */
    __type2528 EIC279;                                     /* EIC279           */
    __type2529 EIC280;                                     /* EIC280           */
    __type2530 EIC281;                                     /* EIC281           */
    __type2531 EIC282;                                     /* EIC282           */
    __type2532 EIC283;                                     /* EIC283           */
    __type2533 EIC284;                                     /* EIC284           */
    __type2534 EIC285;                                     /* EIC285           */
    __type2535 EIC286;                                     /* EIC286           */
    __type2536 EIC287;                                     /* EIC287           */
    __type2537 EIC288;                                     /* EIC288           */
    __type2538 EIC289;                                     /* EIC289           */
    __type2539 EIC290;                                     /* EIC290           */
    __type2540 EIC291;                                     /* EIC291           */
    uint8  dummy988[4];                                    /* Reserved         */
    __type2541 EIC294;                                     /* EIC294           */
    __type2542 EIC295;                                     /* EIC295           */
    __type2543 EIC296;                                     /* EIC296           */
    __type2544 EIC297;                                     /* EIC297           */
    __type2545 EIC298;                                     /* EIC298           */
    uint8  dummy989[160];                                  /* Reserved         */
    __type2546 EIC379;                                     /* EIC379           */
    uint8  dummy990[6];                                    /* Reserved         */
    __type2547 EIC383;                                     /* EIC383           */
    uint8  dummy991[260];                                  /* Reserved         */
    __type2548 IMR1;                                       /* IMR1             */
    __type2549 IMR2;                                       /* IMR2             */
    __type2550 IMR3;                                       /* IMR3             */
    __type2551 IMR4;                                       /* IMR4             */
    __type2552 IMR5;                                       /* IMR5             */
    __type2553 IMR6;                                       /* IMR6             */
    __type2554 IMR7;                                       /* IMR7             */
    __type2555 IMR8;                                       /* IMR8             */
    __type2556 IMR9;                                       /* IMR9             */
    uint8  dummy992[4];                                    /* Reserved         */
    __type2557 IMR11;                                      /* IMR11            */
    uint8  dummy993[1104];                                 /* Reserved         */
    __type2262 EIBD32;                                     /* EIBD32           */
    __type2262 EIBD33;                                     /* EIBD33           */
    __type2262 EIBD34;                                     /* EIBD34           */
    __type2262 EIBD35;                                     /* EIBD35           */
    __type2262 EIBD36;                                     /* EIBD36           */
    uint8  dummy994[12];                                   /* Reserved         */
    __type2262 EIBD40;                                     /* EIBD40           */
    __type2262 EIBD41;                                     /* EIBD41           */
    __type2262 EIBD42;                                     /* EIBD42           */
    __type2262 EIBD43;                                     /* EIBD43           */
    __type2262 EIBD44;                                     /* EIBD44           */
    __type2262 EIBD45;                                     /* EIBD45           */
    __type2262 EIBD46;                                     /* EIBD46           */
    __type2262 EIBD47;                                     /* EIBD47           */
    __type2262 EIBD48;                                     /* EIBD48           */
    __type2262 EIBD49;                                     /* EIBD49           */
    __type2262 EIBD50;                                     /* EIBD50           */
    __type2262 EIBD51;                                     /* EIBD51           */
    __type2262 EIBD52;                                     /* EIBD52           */
    __type2262 EIBD53;                                     /* EIBD53           */
    __type2262 EIBD54;                                     /* EIBD54           */
    __type2262 EIBD55;                                     /* EIBD55           */
    __type2262 EIBD56;                                     /* EIBD56           */
    __type2262 EIBD57;                                     /* EIBD57           */
    __type2262 EIBD58;                                     /* EIBD58           */
    __type2262 EIBD59;                                     /* EIBD59           */
    __type2262 EIBD60;                                     /* EIBD60           */
    __type2262 EIBD61;                                     /* EIBD61           */
    __type2262 EIBD62;                                     /* EIBD62           */
    __type2262 EIBD63;                                     /* EIBD63           */
    __type2262 EIBD64;                                     /* EIBD64           */
    __type2262 EIBD65;                                     /* EIBD65           */
    __type2262 EIBD66;                                     /* EIBD66           */
    __type2262 EIBD67;                                     /* EIBD67           */
    __type2262 EIBD68;                                     /* EIBD68           */
    __type2262 EIBD69;                                     /* EIBD69           */
    __type2262 EIBD70;                                     /* EIBD70           */
    __type2262 EIBD71;                                     /* EIBD71           */
    __type2262 EIBD72;                                     /* EIBD72           */
    __type2262 EIBD73;                                     /* EIBD73           */
    __type2262 EIBD74;                                     /* EIBD74           */
    __type2262 EIBD75;                                     /* EIBD75           */
    __type2262 EIBD76;                                     /* EIBD76           */
    __type2262 EIBD77;                                     /* EIBD77           */
    __type2262 EIBD78;                                     /* EIBD78           */
    __type2262 EIBD79;                                     /* EIBD79           */
    __type2262 EIBD80;                                     /* EIBD80           */
    __type2262 EIBD81;                                     /* EIBD81           */
    __type2262 EIBD82;                                     /* EIBD82           */
    __type2262 EIBD83;                                     /* EIBD83           */
    __type2262 EIBD84;                                     /* EIBD84           */
    __type2262 EIBD85;                                     /* EIBD85           */
    __type2262 EIBD86;                                     /* EIBD86           */
    __type2262 EIBD87;                                     /* EIBD87           */
    __type2262 EIBD88;                                     /* EIBD88           */
    __type2262 EIBD89;                                     /* EIBD89           */
    __type2262 EIBD90;                                     /* EIBD90           */
    __type2262 EIBD91;                                     /* EIBD91           */
    __type2262 EIBD92;                                     /* EIBD92           */
    __type2262 EIBD93;                                     /* EIBD93           */
    __type2262 EIBD94;                                     /* EIBD94           */
    __type2262 EIBD95;                                     /* EIBD95           */
    __type2262 EIBD96;                                     /* EIBD96           */
    __type2262 EIBD97;                                     /* EIBD97           */
    __type2262 EIBD98;                                     /* EIBD98           */
    __type2262 EIBD99;                                     /* EIBD99           */
    __type2262 EIBD100;                                    /* EIBD100          */
    __type2262 EIBD101;                                    /* EIBD101          */
    __type2262 EIBD102;                                    /* EIBD102          */
    __type2262 EIBD103;                                    /* EIBD103          */
    __type2262 EIBD104;                                    /* EIBD104          */
    __type2262 EIBD105;                                    /* EIBD105          */
    __type2262 EIBD106;                                    /* EIBD106          */
    __type2262 EIBD107;                                    /* EIBD107          */
    __type2262 EIBD108;                                    /* EIBD108          */
    __type2262 EIBD109;                                    /* EIBD109          */
    __type2262 EIBD110;                                    /* EIBD110          */
    __type2262 EIBD111;                                    /* EIBD111          */
    __type2262 EIBD112;                                    /* EIBD112          */
    __type2262 EIBD113;                                    /* EIBD113          */
    __type2262 EIBD114;                                    /* EIBD114          */
    __type2262 EIBD115;                                    /* EIBD115          */
    __type2262 EIBD116;                                    /* EIBD116          */
    __type2262 EIBD117;                                    /* EIBD117          */
    __type2262 EIBD118;                                    /* EIBD118          */
    __type2262 EIBD119;                                    /* EIBD119          */
    __type2262 EIBD120;                                    /* EIBD120          */
    __type2262 EIBD121;                                    /* EIBD121          */
    uint8  dummy995[24];                                   /* Reserved         */
    __type2262 EIBD128;                                    /* EIBD128          */
    __type2262 EIBD129;                                    /* EIBD129          */
    __type2262 EIBD130;                                    /* EIBD130          */
    __type2262 EIBD131;                                    /* EIBD131          */
    __type2262 EIBD132;                                    /* EIBD132          */
    __type2262 EIBD133;                                    /* EIBD133          */
    __type2262 EIBD134;                                    /* EIBD134          */
    __type2262 EIBD135;                                    /* EIBD135          */
    __type2262 EIBD136;                                    /* EIBD136          */
    __type2262 EIBD137;                                    /* EIBD137          */
    __type2262 EIBD138;                                    /* EIBD138          */
    __type2262 EIBD139;                                    /* EIBD139          */
    __type2262 EIBD140;                                    /* EIBD140          */
    __type2262 EIBD141;                                    /* EIBD141          */
    __type2262 EIBD142;                                    /* EIBD142          */
    __type2262 EIBD143;                                    /* EIBD143          */
    __type2262 EIBD144;                                    /* EIBD144          */
    __type2262 EIBD145;                                    /* EIBD145          */
    __type2262 EIBD146;                                    /* EIBD146          */
    __type2262 EIBD147;                                    /* EIBD147          */
    __type2262 EIBD148;                                    /* EIBD148          */
    __type2262 EIBD149;                                    /* EIBD149          */
    __type2262 EIBD150;                                    /* EIBD150          */
    __type2262 EIBD151;                                    /* EIBD151          */
    __type2262 EIBD152;                                    /* EIBD152          */
    __type2262 EIBD153;                                    /* EIBD153          */
    __type2262 EIBD154;                                    /* EIBD154          */
    __type2262 EIBD155;                                    /* EIBD155          */
    __type2262 EIBD156;                                    /* EIBD156          */
    uint8  dummy996[4];                                    /* Reserved         */
    __type2262 EIBD158;                                    /* EIBD158          */
    __type2262 EIBD159;                                    /* EIBD159          */
    __type2262 EIBD160;                                    /* EIBD160          */
    __type2262 EIBD161;                                    /* EIBD161          */
    __type2262 EIBD162;                                    /* EIBD162          */
    __type2262 EIBD163;                                    /* EIBD163          */
    __type2262 EIBD164;                                    /* EIBD164          */
    __type2262 EIBD165;                                    /* EIBD165          */
    __type2262 EIBD166;                                    /* EIBD166          */
    __type2262 EIBD167;                                    /* EIBD167          */
    __type2262 EIBD168;                                    /* EIBD168          */
    __type2262 EIBD169;                                    /* EIBD169          */
    __type2262 EIBD170;                                    /* EIBD170          */
    __type2262 EIBD171;                                    /* EIBD171          */
    __type2262 EIBD172;                                    /* EIBD172          */
    __type2262 EIBD173;                                    /* EIBD173          */
    __type2262 EIBD174;                                    /* EIBD174          */
    __type2262 EIBD175;                                    /* EIBD175          */
    __type2262 EIBD176;                                    /* EIBD176          */
    __type2262 EIBD177;                                    /* EIBD177          */
    __type2262 EIBD178;                                    /* EIBD178          */
    __type2262 EIBD179;                                    /* EIBD179          */
    __type2262 EIBD180;                                    /* EIBD180          */
    __type2262 EIBD181;                                    /* EIBD181          */
    __type2262 EIBD182;                                    /* EIBD182          */
    __type2262 EIBD183;                                    /* EIBD183          */
    __type2262 EIBD184;                                    /* EIBD184          */
    __type2262 EIBD185;                                    /* EIBD185          */
    __type2262 EIBD186;                                    /* EIBD186          */
    __type2262 EIBD187;                                    /* EIBD187          */
    __type2262 EIBD188;                                    /* EIBD188          */
    __type2262 EIBD189;                                    /* EIBD189          */
    __type2262 EIBD190;                                    /* EIBD190          */
    uint8  dummy997[12];                                   /* Reserved         */
    __type2262 EIBD194;                                    /* EIBD194          */
    __type2262 EIBD195;                                    /* EIBD195          */
    __type2262 EIBD196;                                    /* EIBD196          */
    __type2262 EIBD197;                                    /* EIBD197          */
    __type2262 EIBD198;                                    /* EIBD198          */
    __type2262 EIBD199;                                    /* EIBD199          */
    __type2262 EIBD200;                                    /* EIBD200          */
    __type2262 EIBD201;                                    /* EIBD201          */
    __type2262 EIBD202;                                    /* EIBD202          */
    __type2262 EIBD203;                                    /* EIBD203          */
    __type2262 EIBD204;                                    /* EIBD204          */
    uint8  dummy998[52];                                   /* Reserved         */
    __type2262 EIBD218;                                    /* EIBD218          */
    __type2262 EIBD219;                                    /* EIBD219          */
    __type2262 EIBD220;                                    /* EIBD220          */
    __type2262 EIBD221;                                    /* EIBD221          */
    uint8  dummy999[16];                                   /* Reserved         */
    __type2262 EIBD226;                                    /* EIBD226          */
    __type2262 EIBD227;                                    /* EIBD227          */
    __type2262 EIBD228;                                    /* EIBD228          */
    __type2262 EIBD229;                                    /* EIBD229          */
    __type2262 EIBD230;                                    /* EIBD230          */
    __type2262 EIBD231;                                    /* EIBD231          */
    __type2262 EIBD232;                                    /* EIBD232          */
    __type2262 EIBD233;                                    /* EIBD233          */
    __type2262 EIBD234;                                    /* EIBD234          */
    __type2262 EIBD235;                                    /* EIBD235          */
    __type2262 EIBD236;                                    /* EIBD236          */
    __type2262 EIBD237;                                    /* EIBD237          */
    __type2262 EIBD238;                                    /* EIBD238          */
    __type2262 EIBD239;                                    /* EIBD239          */
    __type2262 EIBD240;                                    /* EIBD240          */
    __type2262 EIBD241;                                    /* EIBD241          */
    __type2262 EIBD242;                                    /* EIBD242          */
    __type2262 EIBD243;                                    /* EIBD243          */
    __type2262 EIBD244;                                    /* EIBD244          */
    __type2262 EIBD245;                                    /* EIBD245          */
    __type2262 EIBD246;                                    /* EIBD246          */
    __type2262 EIBD247;                                    /* EIBD247          */
    __type2262 EIBD248;                                    /* EIBD248          */
    __type2262 EIBD249;                                    /* EIBD249          */
    __type2262 EIBD250;                                    /* EIBD250          */
    __type2262 EIBD251;                                    /* EIBD251          */
    __type2262 EIBD252;                                    /* EIBD252          */
    __type2262 EIBD253;                                    /* EIBD253          */
    __type2262 EIBD254;                                    /* EIBD254          */
    uint8  dummy1000[4];                                   /* Reserved         */
    __type2262 EIBD256;                                    /* EIBD256          */
    __type2262 EIBD257;                                    /* EIBD257          */
    __type2262 EIBD258;                                    /* EIBD258          */
    __type2262 EIBD259;                                    /* EIBD259          */
    __type2262 EIBD260;                                    /* EIBD260          */
    __type2262 EIBD261;                                    /* EIBD261          */
    __type2262 EIBD262;                                    /* EIBD262          */
    __type2262 EIBD263;                                    /* EIBD263          */
    __type2262 EIBD264;                                    /* EIBD264          */
    __type2262 EIBD265;                                    /* EIBD265          */
    __type2262 EIBD266;                                    /* EIBD266          */
    __type2262 EIBD267;                                    /* EIBD267          */
    __type2262 EIBD268;                                    /* EIBD268          */
    __type2262 EIBD269;                                    /* EIBD269          */
    __type2262 EIBD270;                                    /* EIBD270          */
    __type2262 EIBD271;                                    /* EIBD271          */
    __type2262 EIBD272;                                    /* EIBD272          */
    __type2262 EIBD273;                                    /* EIBD273          */
    __type2262 EIBD274;                                    /* EIBD274          */
    __type2262 EIBD275;                                    /* EIBD275          */
    __type2262 EIBD276;                                    /* EIBD276          */
    __type2262 EIBD277;                                    /* EIBD277          */
    __type2262 EIBD278;                                    /* EIBD278          */
    __type2262 EIBD279;                                    /* EIBD279          */
    __type2262 EIBD280;                                    /* EIBD280          */
    __type2262 EIBD281;                                    /* EIBD281          */
    __type2262 EIBD282;                                    /* EIBD282          */
    __type2262 EIBD283;                                    /* EIBD283          */
    __type2262 EIBD284;                                    /* EIBD284          */
    __type2262 EIBD285;                                    /* EIBD285          */
    __type2262 EIBD286;                                    /* EIBD286          */
    __type2262 EIBD287;                                    /* EIBD287          */
    __type2262 EIBD288;                                    /* EIBD288          */
    __type2262 EIBD289;                                    /* EIBD289          */
    __type2262 EIBD290;                                    /* EIBD290          */
    __type2262 EIBD291;                                    /* EIBD291          */
    uint8  dummy1001[8];                                   /* Reserved         */
    __type2262 EIBD294;                                    /* EIBD294          */
    __type2262 EIBD295;                                    /* EIBD295          */
    __type2262 EIBD296;                                    /* EIBD296          */
    __type2262 EIBD297;                                    /* EIBD297          */
    __type2262 EIBD298;                                    /* EIBD298          */
    uint8  dummy1002[320];                                 /* Reserved         */
    __type2262 EIBD379;                                    /* EIBD379          */
    uint8  dummy1003[12];                                  /* Reserved         */
    __type2262 EIBD383;                                    /* EIBD383          */
} __type2626;

__IOREG(SINT, 0xFFC00000, __READ_WRITE, __type2563);                  /* SINT */
__IOREG(INTIF, 0xFFF98000, __READ_WRITE, __type2618);                 /* INTIF */
__IOREG(INTC1, 0xFFFEEA10, __READ_WRITE, __type2622);                 /* INTC1 */
__IOREG(INTC2, 0xFFFFB040, __READ_WRITE, __type2626);                 /* INTC2 */

#define SINTR0 SINT.R0.UINT8
#define SINTC0 SINT.R0.BIT.C0
#define SINTR1 SINT.R1.UINT8
#define SINTC1 SINT.R1.BIT.C1
#define SINTR2 SINT.R2.UINT8
#define SINTC2 SINT.R2.BIT.C2
#define SINTR3 SINT.R3.UINT8
#define SINTC3 SINT.R3.BIT.C3
#define SINTR4 SINT.R4.UINT8
#define SINTC4 SINT.R4.BIT.C4
#define INTIFPINT0 INTIF.PINT0.UINT32
#define INTIFINTDTS0 INTIF.PINT0.BIT.INTDTS0
#define INTIFINTDTS1 INTIF.PINT0.BIT.INTDTS1
#define INTIFINTDTS2 INTIF.PINT0.BIT.INTDTS2
#define INTIFINTDTS3 INTIF.PINT0.BIT.INTDTS3
#define INTIFINTDTS4 INTIF.PINT0.BIT.INTDTS4
#define INTIFINTDTS5 INTIF.PINT0.BIT.INTDTS5
#define INTIFINTDTS6 INTIF.PINT0.BIT.INTDTS6
#define INTIFINTDTS7 INTIF.PINT0.BIT.INTDTS7
#define INTIFINTDTS8 INTIF.PINT0.BIT.INTDTS8
#define INTIFINTDTS9 INTIF.PINT0.BIT.INTDTS9
#define INTIFINTDTS10 INTIF.PINT0.BIT.INTDTS10
#define INTIFINTDTS11 INTIF.PINT0.BIT.INTDTS11
#define INTIFINTDTS12 INTIF.PINT0.BIT.INTDTS12
#define INTIFINTDTS13 INTIF.PINT0.BIT.INTDTS13
#define INTIFINTDTS14 INTIF.PINT0.BIT.INTDTS14
#define INTIFINTDTS15 INTIF.PINT0.BIT.INTDTS15
#define INTIFINTDTS16 INTIF.PINT0.BIT.INTDTS16
#define INTIFINTDTS17 INTIF.PINT0.BIT.INTDTS17
#define INTIFINTDTS18 INTIF.PINT0.BIT.INTDTS18
#define INTIFINTDTS19 INTIF.PINT0.BIT.INTDTS19
#define INTIFINTDTS20 INTIF.PINT0.BIT.INTDTS20
#define INTIFINTDTS21 INTIF.PINT0.BIT.INTDTS21
#define INTIFINTDTS22 INTIF.PINT0.BIT.INTDTS22
#define INTIFINTDTS23 INTIF.PINT0.BIT.INTDTS23
#define INTIFINTDTS24 INTIF.PINT0.BIT.INTDTS24
#define INTIFINTDTS25 INTIF.PINT0.BIT.INTDTS25
#define INTIFINTDTS26 INTIF.PINT0.BIT.INTDTS26
#define INTIFINTDTS27 INTIF.PINT0.BIT.INTDTS27
#define INTIFINTDTS28 INTIF.PINT0.BIT.INTDTS28
#define INTIFINTDTS29 INTIF.PINT0.BIT.INTDTS29
#define INTIFINTDTS30 INTIF.PINT0.BIT.INTDTS30
#define INTIFINTDTS31 INTIF.PINT0.BIT.INTDTS31
#define INTIFPINT1 INTIF.PINT1.UINT32
#define INTIFINTDTS32 INTIF.PINT1.BIT.INTDTS32
#define INTIFINTDTS33 INTIF.PINT1.BIT.INTDTS33
#define INTIFINTDTS34 INTIF.PINT1.BIT.INTDTS34
#define INTIFINTDTS35 INTIF.PINT1.BIT.INTDTS35
#define INTIFINTDTS36 INTIF.PINT1.BIT.INTDTS36
#define INTIFINTDTS37 INTIF.PINT1.BIT.INTDTS37
#define INTIFINTDTS38 INTIF.PINT1.BIT.INTDTS38
#define INTIFINTDTS39 INTIF.PINT1.BIT.INTDTS39
#define INTIFINTDTS40 INTIF.PINT1.BIT.INTDTS40
#define INTIFINTDTS41 INTIF.PINT1.BIT.INTDTS41
#define INTIFINTDTS42 INTIF.PINT1.BIT.INTDTS42
#define INTIFINTDTS43 INTIF.PINT1.BIT.INTDTS43
#define INTIFINTDTS44 INTIF.PINT1.BIT.INTDTS44
#define INTIFINTDTS45 INTIF.PINT1.BIT.INTDTS45
#define INTIFINTDTS46 INTIF.PINT1.BIT.INTDTS46
#define INTIFINTDTS47 INTIF.PINT1.BIT.INTDTS47
#define INTIFINTDTS48 INTIF.PINT1.BIT.INTDTS48
#define INTIFINTDTS49 INTIF.PINT1.BIT.INTDTS49
#define INTIFINTDTS50 INTIF.PINT1.BIT.INTDTS50
#define INTIFINTDTS51 INTIF.PINT1.BIT.INTDTS51
#define INTIFINTDTS52 INTIF.PINT1.BIT.INTDTS52
#define INTIFINTDTS53 INTIF.PINT1.BIT.INTDTS53
#define INTIFINTDTS54 INTIF.PINT1.BIT.INTDTS54
#define INTIFINTDTS55 INTIF.PINT1.BIT.INTDTS55
#define INTIFINTDTS56 INTIF.PINT1.BIT.INTDTS56
#define INTIFINTDTS57 INTIF.PINT1.BIT.INTDTS57
#define INTIFINTDTS58 INTIF.PINT1.BIT.INTDTS58
#define INTIFINTDTS59 INTIF.PINT1.BIT.INTDTS59
#define INTIFINTDTS60 INTIF.PINT1.BIT.INTDTS60
#define INTIFINTDTS61 INTIF.PINT1.BIT.INTDTS61
#define INTIFINTDTS62 INTIF.PINT1.BIT.INTDTS62
#define INTIFINTDTS63 INTIF.PINT1.BIT.INTDTS63
#define INTIFPINT2 INTIF.PINT2.UINT32
#define INTIFINTDTS64 INTIF.PINT2.BIT.INTDTS64
#define INTIFINTDTS65 INTIF.PINT2.BIT.INTDTS65
#define INTIFINTDTS66 INTIF.PINT2.BIT.INTDTS66
#define INTIFINTDTS67 INTIF.PINT2.BIT.INTDTS67
#define INTIFINTDTS68 INTIF.PINT2.BIT.INTDTS68
#define INTIFINTDTS69 INTIF.PINT2.BIT.INTDTS69
#define INTIFINTDTS70 INTIF.PINT2.BIT.INTDTS70
#define INTIFINTDTS71 INTIF.PINT2.BIT.INTDTS71
#define INTIFINTDTS72 INTIF.PINT2.BIT.INTDTS72
#define INTIFINTDTS73 INTIF.PINT2.BIT.INTDTS73
#define INTIFINTDTS74 INTIF.PINT2.BIT.INTDTS74
#define INTIFINTDTS75 INTIF.PINT2.BIT.INTDTS75
#define INTIFINTDTS76 INTIF.PINT2.BIT.INTDTS76
#define INTIFINTDTS77 INTIF.PINT2.BIT.INTDTS77
#define INTIFINTDTS78 INTIF.PINT2.BIT.INTDTS78
#define INTIFINTDTS79 INTIF.PINT2.BIT.INTDTS79
#define INTIFINTDTS80 INTIF.PINT2.BIT.INTDTS80
#define INTIFINTDTS81 INTIF.PINT2.BIT.INTDTS81
#define INTIFINTDTS82 INTIF.PINT2.BIT.INTDTS82
#define INTIFINTDTS83 INTIF.PINT2.BIT.INTDTS83
#define INTIFINTDTS84 INTIF.PINT2.BIT.INTDTS84
#define INTIFINTDTS85 INTIF.PINT2.BIT.INTDTS85
#define INTIFINTDTS86 INTIF.PINT2.BIT.INTDTS86
#define INTIFINTDTS87 INTIF.PINT2.BIT.INTDTS87
#define INTIFINTDTS88 INTIF.PINT2.BIT.INTDTS88
#define INTIFINTDTS89 INTIF.PINT2.BIT.INTDTS89
#define INTIFINTDTS90 INTIF.PINT2.BIT.INTDTS90
#define INTIFINTDTS91 INTIF.PINT2.BIT.INTDTS91
#define INTIFINTDTS92 INTIF.PINT2.BIT.INTDTS92
#define INTIFINTDTS93 INTIF.PINT2.BIT.INTDTS93
#define INTIFINTDTS94 INTIF.PINT2.BIT.INTDTS94
#define INTIFINTDTS95 INTIF.PINT2.BIT.INTDTS95
#define INTIFPINT3 INTIF.PINT3.UINT32
#define INTIFINTDTS96 INTIF.PINT3.BIT.INTDTS96
#define INTIFINTDTS97 INTIF.PINT3.BIT.INTDTS97
#define INTIFINTDTS98 INTIF.PINT3.BIT.INTDTS98
#define INTIFINTDTS99 INTIF.PINT3.BIT.INTDTS99
#define INTIFINTDTS100 INTIF.PINT3.BIT.INTDTS100
#define INTIFINTDTS101 INTIF.PINT3.BIT.INTDTS101
#define INTIFINTDTS102 INTIF.PINT3.BIT.INTDTS102
#define INTIFINTDTS103 INTIF.PINT3.BIT.INTDTS103
#define INTIFINTDTS104 INTIF.PINT3.BIT.INTDTS104
#define INTIFINTDTS105 INTIF.PINT3.BIT.INTDTS105
#define INTIFINTDTS106 INTIF.PINT3.BIT.INTDTS106
#define INTIFINTDTS107 INTIF.PINT3.BIT.INTDTS107
#define INTIFINTDTS108 INTIF.PINT3.BIT.INTDTS108
#define INTIFINTDTS109 INTIF.PINT3.BIT.INTDTS109
#define INTIFINTDTS110 INTIF.PINT3.BIT.INTDTS110
#define INTIFINTDTS111 INTIF.PINT3.BIT.INTDTS111
#define INTIFINTDTS112 INTIF.PINT3.BIT.INTDTS112
#define INTIFINTDTS113 INTIF.PINT3.BIT.INTDTS113
#define INTIFINTDTS114 INTIF.PINT3.BIT.INTDTS114
#define INTIFINTDTS115 INTIF.PINT3.BIT.INTDTS115
#define INTIFINTDTS116 INTIF.PINT3.BIT.INTDTS116
#define INTIFINTDTS117 INTIF.PINT3.BIT.INTDTS117
#define INTIFINTDTS118 INTIF.PINT3.BIT.INTDTS118
#define INTIFINTDTS119 INTIF.PINT3.BIT.INTDTS119
#define INTIFINTDTS120 INTIF.PINT3.BIT.INTDTS120
#define INTIFINTDTS121 INTIF.PINT3.BIT.INTDTS121
#define INTIFINTDTS122 INTIF.PINT3.BIT.INTDTS122
#define INTIFINTDTS123 INTIF.PINT3.BIT.INTDTS123
#define INTIFINTDTS124 INTIF.PINT3.BIT.INTDTS124
#define INTIFINTDTS125 INTIF.PINT3.BIT.INTDTS125
#define INTIFINTDTS126 INTIF.PINT3.BIT.INTDTS126
#define INTIFINTDTS127 INTIF.PINT3.BIT.INTDTS127
#define INTIFPINT4 INTIF.PINT4.UINT32
#define INTIFINTCTDTS0 INTIF.PINT4.BIT.INTCTDTS0
#define INTIFINTCTDTS1 INTIF.PINT4.BIT.INTCTDTS1
#define INTIFINTCTDTS2 INTIF.PINT4.BIT.INTCTDTS2
#define INTIFINTCTDTS3 INTIF.PINT4.BIT.INTCTDTS3
#define INTIFINTCTDTS4 INTIF.PINT4.BIT.INTCTDTS4
#define INTIFINTCTDTS5 INTIF.PINT4.BIT.INTCTDTS5
#define INTIFINTCTDTS6 INTIF.PINT4.BIT.INTCTDTS6
#define INTIFINTCTDTS7 INTIF.PINT4.BIT.INTCTDTS7
#define INTIFINTCTDTS8 INTIF.PINT4.BIT.INTCTDTS8
#define INTIFINTCTDTS9 INTIF.PINT4.BIT.INTCTDTS9
#define INTIFINTCTDTS10 INTIF.PINT4.BIT.INTCTDTS10
#define INTIFINTCTDTS11 INTIF.PINT4.BIT.INTCTDTS11
#define INTIFINTCTDTS12 INTIF.PINT4.BIT.INTCTDTS12
#define INTIFINTCTDTS13 INTIF.PINT4.BIT.INTCTDTS13
#define INTIFINTCTDTS14 INTIF.PINT4.BIT.INTCTDTS14
#define INTIFINTCTDTS15 INTIF.PINT4.BIT.INTCTDTS15
#define INTIFINTCTDTS16 INTIF.PINT4.BIT.INTCTDTS16
#define INTIFINTCTDTS17 INTIF.PINT4.BIT.INTCTDTS17
#define INTIFINTCTDTS18 INTIF.PINT4.BIT.INTCTDTS18
#define INTIFINTCTDTS19 INTIF.PINT4.BIT.INTCTDTS19
#define INTIFINTCTDTS20 INTIF.PINT4.BIT.INTCTDTS20
#define INTIFINTCTDTS21 INTIF.PINT4.BIT.INTCTDTS21
#define INTIFINTCTDTS22 INTIF.PINT4.BIT.INTCTDTS22
#define INTIFINTCTDTS23 INTIF.PINT4.BIT.INTCTDTS23
#define INTIFINTCTDTS24 INTIF.PINT4.BIT.INTCTDTS24
#define INTIFINTCTDTS25 INTIF.PINT4.BIT.INTCTDTS25
#define INTIFINTCTDTS26 INTIF.PINT4.BIT.INTCTDTS26
#define INTIFINTCTDTS27 INTIF.PINT4.BIT.INTCTDTS27
#define INTIFINTCTDTS28 INTIF.PINT4.BIT.INTCTDTS28
#define INTIFINTCTDTS29 INTIF.PINT4.BIT.INTCTDTS29
#define INTIFINTCTDTS30 INTIF.PINT4.BIT.INTCTDTS30
#define INTIFINTCTDTS31 INTIF.PINT4.BIT.INTCTDTS31
#define INTIFPINT5 INTIF.PINT5.UINT32
#define INTIFINTCTDTS32 INTIF.PINT5.BIT.INTCTDTS32
#define INTIFINTCTDTS33 INTIF.PINT5.BIT.INTCTDTS33
#define INTIFINTCTDTS34 INTIF.PINT5.BIT.INTCTDTS34
#define INTIFINTCTDTS35 INTIF.PINT5.BIT.INTCTDTS35
#define INTIFINTCTDTS36 INTIF.PINT5.BIT.INTCTDTS36
#define INTIFINTCTDTS37 INTIF.PINT5.BIT.INTCTDTS37
#define INTIFINTCTDTS38 INTIF.PINT5.BIT.INTCTDTS38
#define INTIFINTCTDTS39 INTIF.PINT5.BIT.INTCTDTS39
#define INTIFINTCTDTS40 INTIF.PINT5.BIT.INTCTDTS40
#define INTIFINTCTDTS41 INTIF.PINT5.BIT.INTCTDTS41
#define INTIFINTCTDTS42 INTIF.PINT5.BIT.INTCTDTS42
#define INTIFINTCTDTS43 INTIF.PINT5.BIT.INTCTDTS43
#define INTIFINTCTDTS44 INTIF.PINT5.BIT.INTCTDTS44
#define INTIFINTCTDTS45 INTIF.PINT5.BIT.INTCTDTS45
#define INTIFINTCTDTS46 INTIF.PINT5.BIT.INTCTDTS46
#define INTIFINTCTDTS47 INTIF.PINT5.BIT.INTCTDTS47
#define INTIFINTCTDTS48 INTIF.PINT5.BIT.INTCTDTS48
#define INTIFINTCTDTS49 INTIF.PINT5.BIT.INTCTDTS49
#define INTIFINTCTDTS50 INTIF.PINT5.BIT.INTCTDTS50
#define INTIFINTCTDTS51 INTIF.PINT5.BIT.INTCTDTS51
#define INTIFINTCTDTS52 INTIF.PINT5.BIT.INTCTDTS52
#define INTIFINTCTDTS53 INTIF.PINT5.BIT.INTCTDTS53
#define INTIFINTCTDTS54 INTIF.PINT5.BIT.INTCTDTS54
#define INTIFINTCTDTS55 INTIF.PINT5.BIT.INTCTDTS55
#define INTIFINTCTDTS56 INTIF.PINT5.BIT.INTCTDTS56
#define INTIFINTCTDTS57 INTIF.PINT5.BIT.INTCTDTS57
#define INTIFINTCTDTS58 INTIF.PINT5.BIT.INTCTDTS58
#define INTIFINTCTDTS59 INTIF.PINT5.BIT.INTCTDTS59
#define INTIFINTCTDTS60 INTIF.PINT5.BIT.INTCTDTS60
#define INTIFINTCTDTS61 INTIF.PINT5.BIT.INTCTDTS61
#define INTIFINTCTDTS62 INTIF.PINT5.BIT.INTCTDTS62
#define INTIFINTCTDTS63 INTIF.PINT5.BIT.INTCTDTS63
#define INTIFPINT6 INTIF.PINT6.UINT32
#define INTIFINTCTDTS64 INTIF.PINT6.BIT.INTCTDTS64
#define INTIFINTCTDTS65 INTIF.PINT6.BIT.INTCTDTS65
#define INTIFINTCTDTS66 INTIF.PINT6.BIT.INTCTDTS66
#define INTIFINTCTDTS67 INTIF.PINT6.BIT.INTCTDTS67
#define INTIFINTCTDTS68 INTIF.PINT6.BIT.INTCTDTS68
#define INTIFINTCTDTS69 INTIF.PINT6.BIT.INTCTDTS69
#define INTIFINTCTDTS70 INTIF.PINT6.BIT.INTCTDTS70
#define INTIFINTCTDTS71 INTIF.PINT6.BIT.INTCTDTS71
#define INTIFINTCTDTS72 INTIF.PINT6.BIT.INTCTDTS72
#define INTIFINTCTDTS73 INTIF.PINT6.BIT.INTCTDTS73
#define INTIFINTCTDTS74 INTIF.PINT6.BIT.INTCTDTS74
#define INTIFINTCTDTS75 INTIF.PINT6.BIT.INTCTDTS75
#define INTIFINTCTDTS76 INTIF.PINT6.BIT.INTCTDTS76
#define INTIFINTCTDTS77 INTIF.PINT6.BIT.INTCTDTS77
#define INTIFINTCTDTS78 INTIF.PINT6.BIT.INTCTDTS78
#define INTIFINTCTDTS79 INTIF.PINT6.BIT.INTCTDTS79
#define INTIFINTCTDTS80 INTIF.PINT6.BIT.INTCTDTS80
#define INTIFINTCTDTS81 INTIF.PINT6.BIT.INTCTDTS81
#define INTIFINTCTDTS82 INTIF.PINT6.BIT.INTCTDTS82
#define INTIFINTCTDTS83 INTIF.PINT6.BIT.INTCTDTS83
#define INTIFINTCTDTS84 INTIF.PINT6.BIT.INTCTDTS84
#define INTIFINTCTDTS85 INTIF.PINT6.BIT.INTCTDTS85
#define INTIFINTCTDTS86 INTIF.PINT6.BIT.INTCTDTS86
#define INTIFINTCTDTS87 INTIF.PINT6.BIT.INTCTDTS87
#define INTIFINTCTDTS88 INTIF.PINT6.BIT.INTCTDTS88
#define INTIFINTCTDTS89 INTIF.PINT6.BIT.INTCTDTS89
#define INTIFINTCTDTS90 INTIF.PINT6.BIT.INTCTDTS90
#define INTIFINTCTDTS91 INTIF.PINT6.BIT.INTCTDTS91
#define INTIFINTCTDTS92 INTIF.PINT6.BIT.INTCTDTS92
#define INTIFINTCTDTS93 INTIF.PINT6.BIT.INTCTDTS93
#define INTIFINTCTDTS94 INTIF.PINT6.BIT.INTCTDTS94
#define INTIFINTCTDTS95 INTIF.PINT6.BIT.INTCTDTS95
#define INTIFPINT7 INTIF.PINT7.UINT32
#define INTIFINTCTDTS96 INTIF.PINT7.BIT.INTCTDTS96
#define INTIFINTCTDTS97 INTIF.PINT7.BIT.INTCTDTS97
#define INTIFINTCTDTS98 INTIF.PINT7.BIT.INTCTDTS98
#define INTIFINTCTDTS99 INTIF.PINT7.BIT.INTCTDTS99
#define INTIFINTCTDTS100 INTIF.PINT7.BIT.INTCTDTS100
#define INTIFINTCTDTS101 INTIF.PINT7.BIT.INTCTDTS101
#define INTIFINTCTDTS102 INTIF.PINT7.BIT.INTCTDTS102
#define INTIFINTCTDTS103 INTIF.PINT7.BIT.INTCTDTS103
#define INTIFINTCTDTS104 INTIF.PINT7.BIT.INTCTDTS104
#define INTIFINTCTDTS105 INTIF.PINT7.BIT.INTCTDTS105
#define INTIFINTCTDTS106 INTIF.PINT7.BIT.INTCTDTS106
#define INTIFINTCTDTS107 INTIF.PINT7.BIT.INTCTDTS107
#define INTIFINTCTDTS108 INTIF.PINT7.BIT.INTCTDTS108
#define INTIFINTCTDTS109 INTIF.PINT7.BIT.INTCTDTS109
#define INTIFINTCTDTS110 INTIF.PINT7.BIT.INTCTDTS110
#define INTIFINTCTDTS111 INTIF.PINT7.BIT.INTCTDTS111
#define INTIFINTCTDTS112 INTIF.PINT7.BIT.INTCTDTS112
#define INTIFINTCTDTS113 INTIF.PINT7.BIT.INTCTDTS113
#define INTIFINTCTDTS114 INTIF.PINT7.BIT.INTCTDTS114
#define INTIFINTCTDTS115 INTIF.PINT7.BIT.INTCTDTS115
#define INTIFINTCTDTS116 INTIF.PINT7.BIT.INTCTDTS116
#define INTIFINTCTDTS117 INTIF.PINT7.BIT.INTCTDTS117
#define INTIFINTCTDTS118 INTIF.PINT7.BIT.INTCTDTS118
#define INTIFINTCTDTS119 INTIF.PINT7.BIT.INTCTDTS119
#define INTIFINTCTDTS120 INTIF.PINT7.BIT.INTCTDTS120
#define INTIFINTCTDTS121 INTIF.PINT7.BIT.INTCTDTS121
#define INTIFINTCTDTS122 INTIF.PINT7.BIT.INTCTDTS122
#define INTIFINTCTDTS123 INTIF.PINT7.BIT.INTCTDTS123
#define INTIFINTCTDTS124 INTIF.PINT7.BIT.INTCTDTS124
#define INTIFINTCTDTS125 INTIF.PINT7.BIT.INTCTDTS125
#define INTIFINTCTDTS126 INTIF.PINT7.BIT.INTCTDTS126
#define INTIFINTCTDTS127 INTIF.PINT7.BIT.INTCTDTS127
#define INTIFPINTCLR0 INTIF.PINTCLR0.UINT32
#define INTIFINTCLR0 INTIF.PINTCLR0.BIT.INTCLR0
#define INTIFINTCLR1 INTIF.PINTCLR0.BIT.INTCLR1
#define INTIFINTCLR2 INTIF.PINTCLR0.BIT.INTCLR2
#define INTIFINTCLR3 INTIF.PINTCLR0.BIT.INTCLR3
#define INTIFINTCLR4 INTIF.PINTCLR0.BIT.INTCLR4
#define INTIFINTCLR5 INTIF.PINTCLR0.BIT.INTCLR5
#define INTIFINTCLR6 INTIF.PINTCLR0.BIT.INTCLR6
#define INTIFINTCLR7 INTIF.PINTCLR0.BIT.INTCLR7
#define INTIFINTCLR8 INTIF.PINTCLR0.BIT.INTCLR8
#define INTIFINTCLR9 INTIF.PINTCLR0.BIT.INTCLR9
#define INTIFINTCLR10 INTIF.PINTCLR0.BIT.INTCLR10
#define INTIFINTCLR11 INTIF.PINTCLR0.BIT.INTCLR11
#define INTIFINTCLR12 INTIF.PINTCLR0.BIT.INTCLR12
#define INTIFINTCLR13 INTIF.PINTCLR0.BIT.INTCLR13
#define INTIFINTCLR14 INTIF.PINTCLR0.BIT.INTCLR14
#define INTIFINTCLR15 INTIF.PINTCLR0.BIT.INTCLR15
#define INTIFINTCLR16 INTIF.PINTCLR0.BIT.INTCLR16
#define INTIFINTCLR17 INTIF.PINTCLR0.BIT.INTCLR17
#define INTIFINTCLR18 INTIF.PINTCLR0.BIT.INTCLR18
#define INTIFINTCLR19 INTIF.PINTCLR0.BIT.INTCLR19
#define INTIFINTCLR20 INTIF.PINTCLR0.BIT.INTCLR20
#define INTIFINTCLR21 INTIF.PINTCLR0.BIT.INTCLR21
#define INTIFINTCLR22 INTIF.PINTCLR0.BIT.INTCLR22
#define INTIFINTCLR23 INTIF.PINTCLR0.BIT.INTCLR23
#define INTIFINTCLR24 INTIF.PINTCLR0.BIT.INTCLR24
#define INTIFINTCLR25 INTIF.PINTCLR0.BIT.INTCLR25
#define INTIFINTCLR26 INTIF.PINTCLR0.BIT.INTCLR26
#define INTIFINTCLR27 INTIF.PINTCLR0.BIT.INTCLR27
#define INTIFINTCLR28 INTIF.PINTCLR0.BIT.INTCLR28
#define INTIFINTCLR29 INTIF.PINTCLR0.BIT.INTCLR29
#define INTIFINTCLR30 INTIF.PINTCLR0.BIT.INTCLR30
#define INTIFINTCLR31 INTIF.PINTCLR0.BIT.INTCLR31
#define INTIFPINTCLR1 INTIF.PINTCLR1.UINT32
#define INTIFINTCLR32 INTIF.PINTCLR1.BIT.INTCLR32
#define INTIFINTCLR33 INTIF.PINTCLR1.BIT.INTCLR33
#define INTIFINTCLR34 INTIF.PINTCLR1.BIT.INTCLR34
#define INTIFINTCLR35 INTIF.PINTCLR1.BIT.INTCLR35
#define INTIFINTCLR36 INTIF.PINTCLR1.BIT.INTCLR36
#define INTIFINTCLR37 INTIF.PINTCLR1.BIT.INTCLR37
#define INTIFINTCLR38 INTIF.PINTCLR1.BIT.INTCLR38
#define INTIFINTCLR39 INTIF.PINTCLR1.BIT.INTCLR39
#define INTIFINTCLR40 INTIF.PINTCLR1.BIT.INTCLR40
#define INTIFINTCLR41 INTIF.PINTCLR1.BIT.INTCLR41
#define INTIFINTCLR42 INTIF.PINTCLR1.BIT.INTCLR42
#define INTIFINTCLR43 INTIF.PINTCLR1.BIT.INTCLR43
#define INTIFINTCLR44 INTIF.PINTCLR1.BIT.INTCLR44
#define INTIFINTCLR45 INTIF.PINTCLR1.BIT.INTCLR45
#define INTIFINTCLR46 INTIF.PINTCLR1.BIT.INTCLR46
#define INTIFINTCLR47 INTIF.PINTCLR1.BIT.INTCLR47
#define INTIFINTCLR48 INTIF.PINTCLR1.BIT.INTCLR48
#define INTIFINTCLR49 INTIF.PINTCLR1.BIT.INTCLR49
#define INTIFINTCLR50 INTIF.PINTCLR1.BIT.INTCLR50
#define INTIFINTCLR51 INTIF.PINTCLR1.BIT.INTCLR51
#define INTIFINTCLR52 INTIF.PINTCLR1.BIT.INTCLR52
#define INTIFINTCLR53 INTIF.PINTCLR1.BIT.INTCLR53
#define INTIFINTCLR54 INTIF.PINTCLR1.BIT.INTCLR54
#define INTIFINTCLR55 INTIF.PINTCLR1.BIT.INTCLR55
#define INTIFINTCLR56 INTIF.PINTCLR1.BIT.INTCLR56
#define INTIFINTCLR57 INTIF.PINTCLR1.BIT.INTCLR57
#define INTIFINTCLR58 INTIF.PINTCLR1.BIT.INTCLR58
#define INTIFINTCLR59 INTIF.PINTCLR1.BIT.INTCLR59
#define INTIFINTCLR60 INTIF.PINTCLR1.BIT.INTCLR60
#define INTIFINTCLR61 INTIF.PINTCLR1.BIT.INTCLR61
#define INTIFINTCLR62 INTIF.PINTCLR1.BIT.INTCLR62
#define INTIFINTCLR63 INTIF.PINTCLR1.BIT.INTCLR63
#define INTIFPINTCLR2 INTIF.PINTCLR2.UINT32
#define INTIFINTCLR64 INTIF.PINTCLR2.BIT.INTCLR64
#define INTIFINTCLR65 INTIF.PINTCLR2.BIT.INTCLR65
#define INTIFINTCLR66 INTIF.PINTCLR2.BIT.INTCLR66
#define INTIFINTCLR67 INTIF.PINTCLR2.BIT.INTCLR67
#define INTIFINTCLR68 INTIF.PINTCLR2.BIT.INTCLR68
#define INTIFINTCLR69 INTIF.PINTCLR2.BIT.INTCLR69
#define INTIFINTCLR70 INTIF.PINTCLR2.BIT.INTCLR70
#define INTIFINTCLR71 INTIF.PINTCLR2.BIT.INTCLR71
#define INTIFINTCLR72 INTIF.PINTCLR2.BIT.INTCLR72
#define INTIFINTCLR73 INTIF.PINTCLR2.BIT.INTCLR73
#define INTIFINTCLR74 INTIF.PINTCLR2.BIT.INTCLR74
#define INTIFINTCLR75 INTIF.PINTCLR2.BIT.INTCLR75
#define INTIFINTCLR76 INTIF.PINTCLR2.BIT.INTCLR76
#define INTIFINTCLR77 INTIF.PINTCLR2.BIT.INTCLR77
#define INTIFINTCLR78 INTIF.PINTCLR2.BIT.INTCLR78
#define INTIFINTCLR79 INTIF.PINTCLR2.BIT.INTCLR79
#define INTIFINTCLR80 INTIF.PINTCLR2.BIT.INTCLR80
#define INTIFINTCLR81 INTIF.PINTCLR2.BIT.INTCLR81
#define INTIFINTCLR82 INTIF.PINTCLR2.BIT.INTCLR82
#define INTIFINTCLR83 INTIF.PINTCLR2.BIT.INTCLR83
#define INTIFINTCLR84 INTIF.PINTCLR2.BIT.INTCLR84
#define INTIFINTCLR85 INTIF.PINTCLR2.BIT.INTCLR85
#define INTIFINTCLR86 INTIF.PINTCLR2.BIT.INTCLR86
#define INTIFINTCLR87 INTIF.PINTCLR2.BIT.INTCLR87
#define INTIFINTCLR88 INTIF.PINTCLR2.BIT.INTCLR88
#define INTIFINTCLR89 INTIF.PINTCLR2.BIT.INTCLR89
#define INTIFINTCLR90 INTIF.PINTCLR2.BIT.INTCLR90
#define INTIFINTCLR91 INTIF.PINTCLR2.BIT.INTCLR91
#define INTIFINTCLR92 INTIF.PINTCLR2.BIT.INTCLR92
#define INTIFINTCLR93 INTIF.PINTCLR2.BIT.INTCLR93
#define INTIFINTCLR94 INTIF.PINTCLR2.BIT.INTCLR94
#define INTIFINTCLR95 INTIF.PINTCLR2.BIT.INTCLR95
#define INTIFPINTCLR3 INTIF.PINTCLR3.UINT32
#define INTIFINTCLR96 INTIF.PINTCLR3.BIT.INTCLR96
#define INTIFINTCLR97 INTIF.PINTCLR3.BIT.INTCLR97
#define INTIFINTCLR98 INTIF.PINTCLR3.BIT.INTCLR98
#define INTIFINTCLR99 INTIF.PINTCLR3.BIT.INTCLR99
#define INTIFINTCLR100 INTIF.PINTCLR3.BIT.INTCLR100
#define INTIFINTCLR101 INTIF.PINTCLR3.BIT.INTCLR101
#define INTIFINTCLR102 INTIF.PINTCLR3.BIT.INTCLR102
#define INTIFINTCLR103 INTIF.PINTCLR3.BIT.INTCLR103
#define INTIFINTCLR104 INTIF.PINTCLR3.BIT.INTCLR104
#define INTIFINTCLR105 INTIF.PINTCLR3.BIT.INTCLR105
#define INTIFINTCLR106 INTIF.PINTCLR3.BIT.INTCLR106
#define INTIFINTCLR107 INTIF.PINTCLR3.BIT.INTCLR107
#define INTIFINTCLR108 INTIF.PINTCLR3.BIT.INTCLR108
#define INTIFINTCLR109 INTIF.PINTCLR3.BIT.INTCLR109
#define INTIFINTCLR110 INTIF.PINTCLR3.BIT.INTCLR110
#define INTIFINTCLR111 INTIF.PINTCLR3.BIT.INTCLR111
#define INTIFINTCLR112 INTIF.PINTCLR3.BIT.INTCLR112
#define INTIFINTCLR113 INTIF.PINTCLR3.BIT.INTCLR113
#define INTIFINTCLR114 INTIF.PINTCLR3.BIT.INTCLR114
#define INTIFINTCLR115 INTIF.PINTCLR3.BIT.INTCLR115
#define INTIFINTCLR116 INTIF.PINTCLR3.BIT.INTCLR116
#define INTIFINTCLR117 INTIF.PINTCLR3.BIT.INTCLR117
#define INTIFINTCLR118 INTIF.PINTCLR3.BIT.INTCLR118
#define INTIFINTCLR119 INTIF.PINTCLR3.BIT.INTCLR119
#define INTIFINTCLR120 INTIF.PINTCLR3.BIT.INTCLR120
#define INTIFINTCLR121 INTIF.PINTCLR3.BIT.INTCLR121
#define INTIFINTCLR122 INTIF.PINTCLR3.BIT.INTCLR122
#define INTIFINTCLR123 INTIF.PINTCLR3.BIT.INTCLR123
#define INTIFINTCLR124 INTIF.PINTCLR3.BIT.INTCLR124
#define INTIFINTCLR125 INTIF.PINTCLR3.BIT.INTCLR125
#define INTIFINTCLR126 INTIF.PINTCLR3.BIT.INTCLR126
#define INTIFINTCLR127 INTIF.PINTCLR3.BIT.INTCLR127
#define INTIFPINTCLR4 INTIF.PINTCLR4.UINT32
#define INTIFINTCTCLR0 INTIF.PINTCLR4.BIT.INTCTCLR0
#define INTIFINTCTCLR1 INTIF.PINTCLR4.BIT.INTCTCLR1
#define INTIFINTCTCLR2 INTIF.PINTCLR4.BIT.INTCTCLR2
#define INTIFINTCTCLR3 INTIF.PINTCLR4.BIT.INTCTCLR3
#define INTIFINTCTCLR4 INTIF.PINTCLR4.BIT.INTCTCLR4
#define INTIFINTCTCLR5 INTIF.PINTCLR4.BIT.INTCTCLR5
#define INTIFINTCTCLR6 INTIF.PINTCLR4.BIT.INTCTCLR6
#define INTIFINTCTCLR7 INTIF.PINTCLR4.BIT.INTCTCLR7
#define INTIFINTCTCLR8 INTIF.PINTCLR4.BIT.INTCTCLR8
#define INTIFINTCTCLR9 INTIF.PINTCLR4.BIT.INTCTCLR9
#define INTIFINTCTCLR10 INTIF.PINTCLR4.BIT.INTCTCLR10
#define INTIFINTCTCLR11 INTIF.PINTCLR4.BIT.INTCTCLR11
#define INTIFINTCTCLR12 INTIF.PINTCLR4.BIT.INTCTCLR12
#define INTIFINTCTCLR13 INTIF.PINTCLR4.BIT.INTCTCLR13
#define INTIFINTCTCLR14 INTIF.PINTCLR4.BIT.INTCTCLR14
#define INTIFINTCTCLR15 INTIF.PINTCLR4.BIT.INTCTCLR15
#define INTIFINTCTCLR16 INTIF.PINTCLR4.BIT.INTCTCLR16
#define INTIFINTCTCLR17 INTIF.PINTCLR4.BIT.INTCTCLR17
#define INTIFINTCTCLR18 INTIF.PINTCLR4.BIT.INTCTCLR18
#define INTIFINTCTCLR19 INTIF.PINTCLR4.BIT.INTCTCLR19
#define INTIFINTCTCLR20 INTIF.PINTCLR4.BIT.INTCTCLR20
#define INTIFINTCTCLR21 INTIF.PINTCLR4.BIT.INTCTCLR21
#define INTIFINTCTCLR22 INTIF.PINTCLR4.BIT.INTCTCLR22
#define INTIFINTCTCLR23 INTIF.PINTCLR4.BIT.INTCTCLR23
#define INTIFINTCTCLR24 INTIF.PINTCLR4.BIT.INTCTCLR24
#define INTIFINTCTCLR25 INTIF.PINTCLR4.BIT.INTCTCLR25
#define INTIFINTCTCLR26 INTIF.PINTCLR4.BIT.INTCTCLR26
#define INTIFINTCTCLR27 INTIF.PINTCLR4.BIT.INTCTCLR27
#define INTIFINTCTCLR28 INTIF.PINTCLR4.BIT.INTCTCLR28
#define INTIFINTCTCLR29 INTIF.PINTCLR4.BIT.INTCTCLR29
#define INTIFINTCTCLR30 INTIF.PINTCLR4.BIT.INTCTCLR30
#define INTIFINTCTCLR31 INTIF.PINTCLR4.BIT.INTCTCLR31
#define INTIFPINTCLR5 INTIF.PINTCLR5.UINT32
#define INTIFINTCTCLR32 INTIF.PINTCLR5.BIT.INTCTCLR32
#define INTIFINTCTCLR33 INTIF.PINTCLR5.BIT.INTCTCLR33
#define INTIFINTCTCLR34 INTIF.PINTCLR5.BIT.INTCTCLR34
#define INTIFINTCTCLR35 INTIF.PINTCLR5.BIT.INTCTCLR35
#define INTIFINTCTCLR36 INTIF.PINTCLR5.BIT.INTCTCLR36
#define INTIFINTCTCLR37 INTIF.PINTCLR5.BIT.INTCTCLR37
#define INTIFINTCTCLR38 INTIF.PINTCLR5.BIT.INTCTCLR38
#define INTIFINTCTCLR39 INTIF.PINTCLR5.BIT.INTCTCLR39
#define INTIFINTCTCLR40 INTIF.PINTCLR5.BIT.INTCTCLR40
#define INTIFINTCTCLR41 INTIF.PINTCLR5.BIT.INTCTCLR41
#define INTIFINTCTCLR42 INTIF.PINTCLR5.BIT.INTCTCLR42
#define INTIFINTCTCLR43 INTIF.PINTCLR5.BIT.INTCTCLR43
#define INTIFINTCTCLR44 INTIF.PINTCLR5.BIT.INTCTCLR44
#define INTIFINTCTCLR45 INTIF.PINTCLR5.BIT.INTCTCLR45
#define INTIFINTCTCLR46 INTIF.PINTCLR5.BIT.INTCTCLR46
#define INTIFINTCTCLR47 INTIF.PINTCLR5.BIT.INTCTCLR47
#define INTIFINTCTCLR48 INTIF.PINTCLR5.BIT.INTCTCLR48
#define INTIFINTCTCLR49 INTIF.PINTCLR5.BIT.INTCTCLR49
#define INTIFINTCTCLR50 INTIF.PINTCLR5.BIT.INTCTCLR50
#define INTIFINTCTCLR51 INTIF.PINTCLR5.BIT.INTCTCLR51
#define INTIFINTCTCLR52 INTIF.PINTCLR5.BIT.INTCTCLR52
#define INTIFINTCTCLR53 INTIF.PINTCLR5.BIT.INTCTCLR53
#define INTIFINTCTCLR54 INTIF.PINTCLR5.BIT.INTCTCLR54
#define INTIFINTCTCLR55 INTIF.PINTCLR5.BIT.INTCTCLR55
#define INTIFINTCTCLR56 INTIF.PINTCLR5.BIT.INTCTCLR56
#define INTIFINTCTCLR57 INTIF.PINTCLR5.BIT.INTCTCLR57
#define INTIFINTCTCLR58 INTIF.PINTCLR5.BIT.INTCTCLR58
#define INTIFINTCTCLR59 INTIF.PINTCLR5.BIT.INTCTCLR59
#define INTIFINTCTCLR60 INTIF.PINTCLR5.BIT.INTCTCLR60
#define INTIFINTCTCLR61 INTIF.PINTCLR5.BIT.INTCTCLR61
#define INTIFINTCTCLR62 INTIF.PINTCLR5.BIT.INTCTCLR62
#define INTIFINTCTCLR63 INTIF.PINTCLR5.BIT.INTCTCLR63
#define INTIFPINTCLR6 INTIF.PINTCLR6.UINT32
#define INTIFINTCTCLR64 INTIF.PINTCLR6.BIT.INTCTCLR64
#define INTIFINTCTCLR65 INTIF.PINTCLR6.BIT.INTCTCLR65
#define INTIFINTCTCLR66 INTIF.PINTCLR6.BIT.INTCTCLR66
#define INTIFINTCTCLR67 INTIF.PINTCLR6.BIT.INTCTCLR67
#define INTIFINTCTCLR68 INTIF.PINTCLR6.BIT.INTCTCLR68
#define INTIFINTCTCLR69 INTIF.PINTCLR6.BIT.INTCTCLR69
#define INTIFINTCTCLR70 INTIF.PINTCLR6.BIT.INTCTCLR70
#define INTIFINTCTCLR71 INTIF.PINTCLR6.BIT.INTCTCLR71
#define INTIFINTCTCLR72 INTIF.PINTCLR6.BIT.INTCTCLR72
#define INTIFINTCTCLR73 INTIF.PINTCLR6.BIT.INTCTCLR73
#define INTIFINTCTCLR74 INTIF.PINTCLR6.BIT.INTCTCLR74
#define INTIFINTCTCLR75 INTIF.PINTCLR6.BIT.INTCTCLR75
#define INTIFINTCTCLR76 INTIF.PINTCLR6.BIT.INTCTCLR76
#define INTIFINTCTCLR77 INTIF.PINTCLR6.BIT.INTCTCLR77
#define INTIFINTCTCLR78 INTIF.PINTCLR6.BIT.INTCTCLR78
#define INTIFINTCTCLR79 INTIF.PINTCLR6.BIT.INTCTCLR79
#define INTIFINTCTCLR80 INTIF.PINTCLR6.BIT.INTCTCLR80
#define INTIFINTCTCLR81 INTIF.PINTCLR6.BIT.INTCTCLR81
#define INTIFINTCTCLR82 INTIF.PINTCLR6.BIT.INTCTCLR82
#define INTIFINTCTCLR83 INTIF.PINTCLR6.BIT.INTCTCLR83
#define INTIFINTCTCLR84 INTIF.PINTCLR6.BIT.INTCTCLR84
#define INTIFINTCTCLR85 INTIF.PINTCLR6.BIT.INTCTCLR85
#define INTIFINTCTCLR86 INTIF.PINTCLR6.BIT.INTCTCLR86
#define INTIFINTCTCLR87 INTIF.PINTCLR6.BIT.INTCTCLR87
#define INTIFINTCTCLR88 INTIF.PINTCLR6.BIT.INTCTCLR88
#define INTIFINTCTCLR89 INTIF.PINTCLR6.BIT.INTCTCLR89
#define INTIFINTCTCLR90 INTIF.PINTCLR6.BIT.INTCTCLR90
#define INTIFINTCTCLR91 INTIF.PINTCLR6.BIT.INTCTCLR91
#define INTIFINTCTCLR92 INTIF.PINTCLR6.BIT.INTCTCLR92
#define INTIFINTCTCLR93 INTIF.PINTCLR6.BIT.INTCTCLR93
#define INTIFINTCTCLR94 INTIF.PINTCLR6.BIT.INTCTCLR94
#define INTIFINTCTCLR95 INTIF.PINTCLR6.BIT.INTCTCLR95
#define INTIFPINTCLR7 INTIF.PINTCLR7.UINT32
#define INTIFINTCTCLR96 INTIF.PINTCLR7.BIT.INTCTCLR96
#define INTIFINTCTCLR97 INTIF.PINTCLR7.BIT.INTCTCLR97
#define INTIFINTCTCLR98 INTIF.PINTCLR7.BIT.INTCTCLR98
#define INTIFINTCTCLR99 INTIF.PINTCLR7.BIT.INTCTCLR99
#define INTIFINTCTCLR100 INTIF.PINTCLR7.BIT.INTCTCLR100
#define INTIFINTCTCLR101 INTIF.PINTCLR7.BIT.INTCTCLR101
#define INTIFINTCTCLR102 INTIF.PINTCLR7.BIT.INTCTCLR102
#define INTIFINTCTCLR103 INTIF.PINTCLR7.BIT.INTCTCLR103
#define INTIFINTCTCLR104 INTIF.PINTCLR7.BIT.INTCTCLR104
#define INTIFINTCTCLR105 INTIF.PINTCLR7.BIT.INTCTCLR105
#define INTIFINTCTCLR106 INTIF.PINTCLR7.BIT.INTCTCLR106
#define INTIFINTCTCLR107 INTIF.PINTCLR7.BIT.INTCTCLR107
#define INTIFINTCTCLR108 INTIF.PINTCLR7.BIT.INTCTCLR108
#define INTIFINTCTCLR109 INTIF.PINTCLR7.BIT.INTCTCLR109
#define INTIFINTCTCLR110 INTIF.PINTCLR7.BIT.INTCTCLR110
#define INTIFINTCTCLR111 INTIF.PINTCLR7.BIT.INTCTCLR111
#define INTIFINTCTCLR112 INTIF.PINTCLR7.BIT.INTCTCLR112
#define INTIFINTCTCLR113 INTIF.PINTCLR7.BIT.INTCTCLR113
#define INTIFINTCTCLR114 INTIF.PINTCLR7.BIT.INTCTCLR114
#define INTIFINTCTCLR115 INTIF.PINTCLR7.BIT.INTCTCLR115
#define INTIFINTCTCLR116 INTIF.PINTCLR7.BIT.INTCTCLR116
#define INTIFINTCTCLR117 INTIF.PINTCLR7.BIT.INTCTCLR117
#define INTIFINTCTCLR118 INTIF.PINTCLR7.BIT.INTCTCLR118
#define INTIFINTCTCLR119 INTIF.PINTCLR7.BIT.INTCTCLR119
#define INTIFINTCTCLR120 INTIF.PINTCLR7.BIT.INTCTCLR120
#define INTIFINTCTCLR121 INTIF.PINTCLR7.BIT.INTCTCLR121
#define INTIFINTCTCLR122 INTIF.PINTCLR7.BIT.INTCTCLR122
#define INTIFINTCTCLR123 INTIF.PINTCLR7.BIT.INTCTCLR123
#define INTIFINTCTCLR124 INTIF.PINTCLR7.BIT.INTCTCLR124
#define INTIFINTCTCLR125 INTIF.PINTCLR7.BIT.INTCTCLR125
#define INTIFINTCTCLR126 INTIF.PINTCLR7.BIT.INTCTCLR126
#define INTIFINTCTCLR127 INTIF.PINTCLR7.BIT.INTCTCLR127
#define INTC1EIC8 INTC1.EIC8.UINT16
#define INTC1EIC8L INTC1.EIC8.UINT8[L]
#define INTC1EIC8H INTC1.EIC8.UINT8[H]
#define INTC1EIP8 INTC1.EIC8.BIT.EIP8
#define INTC1EITB8 INTC1.EIC8.BIT.EITB8
#define INTC1EIMK8 INTC1.EIC8.BIT.EIMK8
#define INTC1EIRF8 INTC1.EIC8.BIT.EIRF8
#define INTC1EICT8 INTC1.EIC8.BIT.EICT8
#define INTC1EIC9 INTC1.EIC9.UINT16
#define INTC1EIC9L INTC1.EIC9.UINT8[L]
#define INTC1EIC9H INTC1.EIC9.UINT8[H]
#define INTC1EIP9 INTC1.EIC9.BIT.EIP9
#define INTC1EITB9 INTC1.EIC9.BIT.EITB9
#define INTC1EIMK9 INTC1.EIC9.BIT.EIMK9
#define INTC1EIRF9 INTC1.EIC9.BIT.EIRF9
#define INTC1EICT9 INTC1.EIC9.BIT.EICT9
#define INTC1EIC16 INTC1.EIC16.UINT16
#define INTC1EIC16L INTC1.EIC16.UINT8[L]
#define INTC1EIC16H INTC1.EIC16.UINT8[H]
#define INTC1EIP16 INTC1.EIC16.BIT.EIP16
#define INTC1EITB16 INTC1.EIC16.BIT.EITB16
#define INTC1EIMK16 INTC1.EIC16.BIT.EIMK16
#define INTC1EIRF16 INTC1.EIC16.BIT.EIRF16
#define INTC1EICT16 INTC1.EIC16.BIT.EICT16
#define INTC1EIC17 INTC1.EIC17.UINT16
#define INTC1EIC17L INTC1.EIC17.UINT8[L]
#define INTC1EIC17H INTC1.EIC17.UINT8[H]
#define INTC1EIP17 INTC1.EIC17.BIT.EIP17
#define INTC1EITB17 INTC1.EIC17.BIT.EITB17
#define INTC1EIMK17 INTC1.EIC17.BIT.EIMK17
#define INTC1EIRF17 INTC1.EIC17.BIT.EIRF17
#define INTC1EICT17 INTC1.EIC17.BIT.EICT17
#define INTC1EIC18 INTC1.EIC18.UINT16
#define INTC1EIC18L INTC1.EIC18.UINT8[L]
#define INTC1EIC18H INTC1.EIC18.UINT8[H]
#define INTC1EIP18 INTC1.EIC18.BIT.EIP18
#define INTC1EITB18 INTC1.EIC18.BIT.EITB18
#define INTC1EIMK18 INTC1.EIC18.BIT.EIMK18
#define INTC1EIRF18 INTC1.EIC18.BIT.EIRF18
#define INTC1EICT18 INTC1.EIC18.BIT.EICT18
#define INTC1EIC19 INTC1.EIC19.UINT16
#define INTC1EIC19L INTC1.EIC19.UINT8[L]
#define INTC1EIC19H INTC1.EIC19.UINT8[H]
#define INTC1EIP19 INTC1.EIC19.BIT.EIP19
#define INTC1EITB19 INTC1.EIC19.BIT.EITB19
#define INTC1EIMK19 INTC1.EIC19.BIT.EIMK19
#define INTC1EIRF19 INTC1.EIC19.BIT.EIRF19
#define INTC1EICT19 INTC1.EIC19.BIT.EICT19
#define INTC1EIC20 INTC1.EIC20.UINT16
#define INTC1EIC20L INTC1.EIC20.UINT8[L]
#define INTC1EIC20H INTC1.EIC20.UINT8[H]
#define INTC1EIP20 INTC1.EIC20.BIT.EIP20
#define INTC1EITB20 INTC1.EIC20.BIT.EITB20
#define INTC1EIMK20 INTC1.EIC20.BIT.EIMK20
#define INTC1EIRF20 INTC1.EIC20.BIT.EIRF20
#define INTC1EICT20 INTC1.EIC20.BIT.EICT20
#define INTC1EIC21 INTC1.EIC21.UINT16
#define INTC1EIC21L INTC1.EIC21.UINT8[L]
#define INTC1EIC21H INTC1.EIC21.UINT8[H]
#define INTC1EIP21 INTC1.EIC21.BIT.EIP21
#define INTC1EITB21 INTC1.EIC21.BIT.EITB21
#define INTC1EIMK21 INTC1.EIC21.BIT.EIMK21
#define INTC1EIRF21 INTC1.EIC21.BIT.EIRF21
#define INTC1EICT21 INTC1.EIC21.BIT.EICT21
#define INTC1EIC22 INTC1.EIC22.UINT16
#define INTC1EIC22L INTC1.EIC22.UINT8[L]
#define INTC1EIC22H INTC1.EIC22.UINT8[H]
#define INTC1EIP22 INTC1.EIC22.BIT.EIP22
#define INTC1EITB22 INTC1.EIC22.BIT.EITB22
#define INTC1EIMK22 INTC1.EIC22.BIT.EIMK22
#define INTC1EIRF22 INTC1.EIC22.BIT.EIRF22
#define INTC1EICT22 INTC1.EIC22.BIT.EICT22
#define INTC1EIC23 INTC1.EIC23.UINT16
#define INTC1EIC23L INTC1.EIC23.UINT8[L]
#define INTC1EIC23H INTC1.EIC23.UINT8[H]
#define INTC1EIP23 INTC1.EIC23.BIT.EIP23
#define INTC1EITB23 INTC1.EIC23.BIT.EITB23
#define INTC1EIMK23 INTC1.EIC23.BIT.EIMK23
#define INTC1EIRF23 INTC1.EIC23.BIT.EIRF23
#define INTC1EICT23 INTC1.EIC23.BIT.EICT23
#define INTC1EIC24 INTC1.EIC24.UINT16
#define INTC1EIC24L INTC1.EIC24.UINT8[L]
#define INTC1EIC24H INTC1.EIC24.UINT8[H]
#define INTC1EIP24 INTC1.EIC24.BIT.EIP24
#define INTC1EITB24 INTC1.EIC24.BIT.EITB24
#define INTC1EIMK24 INTC1.EIC24.BIT.EIMK24
#define INTC1EIRF24 INTC1.EIC24.BIT.EIRF24
#define INTC1EICT24 INTC1.EIC24.BIT.EICT24
#define INTC1EIC25 INTC1.EIC25.UINT16
#define INTC1EIC25L INTC1.EIC25.UINT8[L]
#define INTC1EIC25H INTC1.EIC25.UINT8[H]
#define INTC1EIP25 INTC1.EIC25.BIT.EIP25
#define INTC1EITB25 INTC1.EIC25.BIT.EITB25
#define INTC1EIMK25 INTC1.EIC25.BIT.EIMK25
#define INTC1EIRF25 INTC1.EIC25.BIT.EIRF25
#define INTC1EICT25 INTC1.EIC25.BIT.EICT25
#define INTC1EIC26 INTC1.EIC26.UINT16
#define INTC1EIC26L INTC1.EIC26.UINT8[L]
#define INTC1EIC26H INTC1.EIC26.UINT8[H]
#define INTC1EIP26 INTC1.EIC26.BIT.EIP26
#define INTC1EITB26 INTC1.EIC26.BIT.EITB26
#define INTC1EIMK26 INTC1.EIC26.BIT.EIMK26
#define INTC1EIRF26 INTC1.EIC26.BIT.EIRF26
#define INTC1EICT26 INTC1.EIC26.BIT.EICT26
#define INTC1EIC27 INTC1.EIC27.UINT16
#define INTC1EIC27L INTC1.EIC27.UINT8[L]
#define INTC1EIC27H INTC1.EIC27.UINT8[H]
#define INTC1EIP27 INTC1.EIC27.BIT.EIP27
#define INTC1EITB27 INTC1.EIC27.BIT.EITB27
#define INTC1EIMK27 INTC1.EIC27.BIT.EIMK27
#define INTC1EIRF27 INTC1.EIC27.BIT.EIRF27
#define INTC1EICT27 INTC1.EIC27.BIT.EICT27
#define INTC1EIC28 INTC1.EIC28.UINT16
#define INTC1EIC28L INTC1.EIC28.UINT8[L]
#define INTC1EIC28H INTC1.EIC28.UINT8[H]
#define INTC1EIP28 INTC1.EIC28.BIT.EIP28
#define INTC1EITB28 INTC1.EIC28.BIT.EITB28
#define INTC1EIMK28 INTC1.EIC28.BIT.EIMK28
#define INTC1EIRF28 INTC1.EIC28.BIT.EIRF28
#define INTC1EICT28 INTC1.EIC28.BIT.EICT28
#define INTC1EIC29 INTC1.EIC29.UINT16
#define INTC1EIC29L INTC1.EIC29.UINT8[L]
#define INTC1EIC29H INTC1.EIC29.UINT8[H]
#define INTC1EIP29 INTC1.EIC29.BIT.EIP29
#define INTC1EITB29 INTC1.EIC29.BIT.EITB29
#define INTC1EIMK29 INTC1.EIC29.BIT.EIMK29
#define INTC1EIRF29 INTC1.EIC29.BIT.EIRF29
#define INTC1EICT29 INTC1.EIC29.BIT.EICT29
#define INTC1EIC30 INTC1.EIC30.UINT16
#define INTC1EIC30L INTC1.EIC30.UINT8[L]
#define INTC1EIC30H INTC1.EIC30.UINT8[H]
#define INTC1EIP30 INTC1.EIC30.BIT.EIP30
#define INTC1EITB30 INTC1.EIC30.BIT.EITB30
#define INTC1EIMK30 INTC1.EIC30.BIT.EIMK30
#define INTC1EIRF30 INTC1.EIC30.BIT.EIRF30
#define INTC1EICT30 INTC1.EIC30.BIT.EICT30
#define INTC1EIC31 INTC1.EIC31.UINT16
#define INTC1EIC31L INTC1.EIC31.UINT8[L]
#define INTC1EIC31H INTC1.EIC31.UINT8[H]
#define INTC1EIP31 INTC1.EIC31.BIT.EIP31
#define INTC1EITB31 INTC1.EIC31.BIT.EITB31
#define INTC1EIMK31 INTC1.EIC31.BIT.EIMK31
#define INTC1EIRF31 INTC1.EIC31.BIT.EIRF31
#define INTC1EICT31 INTC1.EIC31.BIT.EICT31
#define INTC1FNC INTC1.FNC.UINT16
#define INTC1FNCL INTC1.FNC.UINT8[L]
#define INTC1FNCH INTC1.FNC.UINT8[H]
#define INTC1FNRF INTC1.FNC.BIT.FNRF
#define INTC1FIC INTC1.FIC.UINT16
#define INTC1FICL INTC1.FIC.UINT8[L]
#define INTC1FICH INTC1.FIC.UINT8[H]
#define INTC1FIRF INTC1.FIC.BIT.FIRF
#define INTC1IMR0 INTC1.IMR0.UINT32
#define INTC1IMR0L INTC1.IMR0.UINT16[L]
#define INTC1IMR0LL INTC1.IMR0.UINT8[LL]
#define INTC1IMR0LH INTC1.IMR0.UINT8[LH]
#define INTC1IMR0H INTC1.IMR0.UINT16[H]
#define INTC1IMR0HL INTC1.IMR0.UINT8[HL]
#define INTC1IMR0HH INTC1.IMR0.UINT8[HH]
#define INTC1IMR0EIMK8 INTC1.IMR0.BIT.IMR0EIMK8
#define INTC1IMR0EIMK9 INTC1.IMR0.BIT.IMR0EIMK9
#define INTC1IMR0EIMK16 INTC1.IMR0.BIT.IMR0EIMK16
#define INTC1IMR0EIMK17 INTC1.IMR0.BIT.IMR0EIMK17
#define INTC1IMR0EIMK18 INTC1.IMR0.BIT.IMR0EIMK18
#define INTC1IMR0EIMK19 INTC1.IMR0.BIT.IMR0EIMK19
#define INTC1IMR0EIMK20 INTC1.IMR0.BIT.IMR0EIMK20
#define INTC1IMR0EIMK21 INTC1.IMR0.BIT.IMR0EIMK21
#define INTC1IMR0EIMK22 INTC1.IMR0.BIT.IMR0EIMK22
#define INTC1IMR0EIMK23 INTC1.IMR0.BIT.IMR0EIMK23
#define INTC1IMR0EIMK24 INTC1.IMR0.BIT.IMR0EIMK24
#define INTC1IMR0EIMK25 INTC1.IMR0.BIT.IMR0EIMK25
#define INTC1IMR0EIMK26 INTC1.IMR0.BIT.IMR0EIMK26
#define INTC1IMR0EIMK27 INTC1.IMR0.BIT.IMR0EIMK27
#define INTC1IMR0EIMK28 INTC1.IMR0.BIT.IMR0EIMK28
#define INTC1IMR0EIMK29 INTC1.IMR0.BIT.IMR0EIMK29
#define INTC1IMR0EIMK30 INTC1.IMR0.BIT.IMR0EIMK30
#define INTC1IMR0EIMK31 INTC1.IMR0.BIT.IMR0EIMK31
#define INTC1EIBD8 INTC1.EIBD8.UINT32
#define INTC1PEID INTC1.EIBD8.BIT.PEID
#define INTC1GPID INTC1.EIBD8.BIT.GPID
#define INTC1EIBD9 INTC1.EIBD9.UINT32
#define INTC1EIBD16 INTC1.EIBD16.UINT32
#define INTC1EIBD17 INTC1.EIBD17.UINT32
#define INTC1EIBD18 INTC1.EIBD18.UINT32
#define INTC1EIBD19 INTC1.EIBD19.UINT32
#define INTC1EIBD20 INTC1.EIBD20.UINT32
#define INTC1EIBD21 INTC1.EIBD21.UINT32
#define INTC1EIBD22 INTC1.EIBD22.UINT32
#define INTC1EIBD23 INTC1.EIBD23.UINT32
#define INTC1EIBD24 INTC1.EIBD24.UINT32
#define INTC1EIBD25 INTC1.EIBD25.UINT32
#define INTC1EIBD26 INTC1.EIBD26.UINT32
#define INTC1EIBD27 INTC1.EIBD27.UINT32
#define INTC1EIBD28 INTC1.EIBD28.UINT32
#define INTC1EIBD29 INTC1.EIBD29.UINT32
#define INTC1EIBD30 INTC1.EIBD30.UINT32
#define INTC1EIBD31 INTC1.EIBD31.UINT32
#define INTC2EIC32 INTC2.EIC32.UINT16
#define INTC2EIC32L INTC2.EIC32.UINT8[L]
#define INTC2EIC32H INTC2.EIC32.UINT8[H]
#define INTC2EIP32 INTC2.EIC32.BIT.EIP32
#define INTC2EITB32 INTC2.EIC32.BIT.EITB32
#define INTC2EIMK32 INTC2.EIC32.BIT.EIMK32
#define INTC2EIRF32 INTC2.EIC32.BIT.EIRF32
#define INTC2EICT32 INTC2.EIC32.BIT.EICT32
#define INTC2EIC33 INTC2.EIC33.UINT16
#define INTC2EIC33L INTC2.EIC33.UINT8[L]
#define INTC2EIC33H INTC2.EIC33.UINT8[H]
#define INTC2EIP33 INTC2.EIC33.BIT.EIP33
#define INTC2EITB33 INTC2.EIC33.BIT.EITB33
#define INTC2EIMK33 INTC2.EIC33.BIT.EIMK33
#define INTC2EIRF33 INTC2.EIC33.BIT.EIRF33
#define INTC2EICT33 INTC2.EIC33.BIT.EICT33
#define INTC2EIC34 INTC2.EIC34.UINT16
#define INTC2EIC34L INTC2.EIC34.UINT8[L]
#define INTC2EIC34H INTC2.EIC34.UINT8[H]
#define INTC2EIP34 INTC2.EIC34.BIT.EIP34
#define INTC2EITB34 INTC2.EIC34.BIT.EITB34
#define INTC2EIMK34 INTC2.EIC34.BIT.EIMK34
#define INTC2EIRF34 INTC2.EIC34.BIT.EIRF34
#define INTC2EICT34 INTC2.EIC34.BIT.EICT34
#define INTC2EIC35 INTC2.EIC35.UINT16
#define INTC2EIC35L INTC2.EIC35.UINT8[L]
#define INTC2EIC35H INTC2.EIC35.UINT8[H]
#define INTC2EIP35 INTC2.EIC35.BIT.EIP35
#define INTC2EITB35 INTC2.EIC35.BIT.EITB35
#define INTC2EIMK35 INTC2.EIC35.BIT.EIMK35
#define INTC2EIRF35 INTC2.EIC35.BIT.EIRF35
#define INTC2EICT35 INTC2.EIC35.BIT.EICT35
#define INTC2EIC36 INTC2.EIC36.UINT16
#define INTC2EIC36L INTC2.EIC36.UINT8[L]
#define INTC2EIC36H INTC2.EIC36.UINT8[H]
#define INTC2EIP36 INTC2.EIC36.BIT.EIP36
#define INTC2EITB36 INTC2.EIC36.BIT.EITB36
#define INTC2EIMK36 INTC2.EIC36.BIT.EIMK36
#define INTC2EIRF36 INTC2.EIC36.BIT.EIRF36
#define INTC2EICT36 INTC2.EIC36.BIT.EICT36
#define INTC2EIC40 INTC2.EIC40.UINT16
#define INTC2EIC40L INTC2.EIC40.UINT8[L]
#define INTC2EIC40H INTC2.EIC40.UINT8[H]
#define INTC2EIP40 INTC2.EIC40.BIT.EIP40
#define INTC2EITB40 INTC2.EIC40.BIT.EITB40
#define INTC2EIMK40 INTC2.EIC40.BIT.EIMK40
#define INTC2EIRF40 INTC2.EIC40.BIT.EIRF40
#define INTC2EICT40 INTC2.EIC40.BIT.EICT40
#define INTC2EIC41 INTC2.EIC41.UINT16
#define INTC2EIC41L INTC2.EIC41.UINT8[L]
#define INTC2EIC41H INTC2.EIC41.UINT8[H]
#define INTC2EIP41 INTC2.EIC41.BIT.EIP41
#define INTC2EITB41 INTC2.EIC41.BIT.EITB41
#define INTC2EIMK41 INTC2.EIC41.BIT.EIMK41
#define INTC2EIRF41 INTC2.EIC41.BIT.EIRF41
#define INTC2EICT41 INTC2.EIC41.BIT.EICT41
#define INTC2EIC42 INTC2.EIC42.UINT16
#define INTC2EIC42L INTC2.EIC42.UINT8[L]
#define INTC2EIC42H INTC2.EIC42.UINT8[H]
#define INTC2EIP42 INTC2.EIC42.BIT.EIP42
#define INTC2EITB42 INTC2.EIC42.BIT.EITB42
#define INTC2EIMK42 INTC2.EIC42.BIT.EIMK42
#define INTC2EIRF42 INTC2.EIC42.BIT.EIRF42
#define INTC2EICT42 INTC2.EIC42.BIT.EICT42
#define INTC2EIC43 INTC2.EIC43.UINT16
#define INTC2EIC43L INTC2.EIC43.UINT8[L]
#define INTC2EIC43H INTC2.EIC43.UINT8[H]
#define INTC2EIP43 INTC2.EIC43.BIT.EIP43
#define INTC2EITB43 INTC2.EIC43.BIT.EITB43
#define INTC2EIMK43 INTC2.EIC43.BIT.EIMK43
#define INTC2EIRF43 INTC2.EIC43.BIT.EIRF43
#define INTC2EICT43 INTC2.EIC43.BIT.EICT43
#define INTC2EIC44 INTC2.EIC44.UINT16
#define INTC2EIC44L INTC2.EIC44.UINT8[L]
#define INTC2EIC44H INTC2.EIC44.UINT8[H]
#define INTC2EIP44 INTC2.EIC44.BIT.EIP44
#define INTC2EITB44 INTC2.EIC44.BIT.EITB44
#define INTC2EIMK44 INTC2.EIC44.BIT.EIMK44
#define INTC2EIRF44 INTC2.EIC44.BIT.EIRF44
#define INTC2EICT44 INTC2.EIC44.BIT.EICT44
#define INTC2EIC45 INTC2.EIC45.UINT16
#define INTC2EIC45L INTC2.EIC45.UINT8[L]
#define INTC2EIC45H INTC2.EIC45.UINT8[H]
#define INTC2EIP45 INTC2.EIC45.BIT.EIP45
#define INTC2EITB45 INTC2.EIC45.BIT.EITB45
#define INTC2EIMK45 INTC2.EIC45.BIT.EIMK45
#define INTC2EIRF45 INTC2.EIC45.BIT.EIRF45
#define INTC2EICT45 INTC2.EIC45.BIT.EICT45
#define INTC2EIC46 INTC2.EIC46.UINT16
#define INTC2EIC46L INTC2.EIC46.UINT8[L]
#define INTC2EIC46H INTC2.EIC46.UINT8[H]
#define INTC2EIP46 INTC2.EIC46.BIT.EIP46
#define INTC2EITB46 INTC2.EIC46.BIT.EITB46
#define INTC2EIMK46 INTC2.EIC46.BIT.EIMK46
#define INTC2EIRF46 INTC2.EIC46.BIT.EIRF46
#define INTC2EICT46 INTC2.EIC46.BIT.EICT46
#define INTC2EIC47 INTC2.EIC47.UINT16
#define INTC2EIC47L INTC2.EIC47.UINT8[L]
#define INTC2EIC47H INTC2.EIC47.UINT8[H]
#define INTC2EIP47 INTC2.EIC47.BIT.EIP47
#define INTC2EITB47 INTC2.EIC47.BIT.EITB47
#define INTC2EIMK47 INTC2.EIC47.BIT.EIMK47
#define INTC2EIRF47 INTC2.EIC47.BIT.EIRF47
#define INTC2EICT47 INTC2.EIC47.BIT.EICT47
#define INTC2EIC48 INTC2.EIC48.UINT16
#define INTC2EIC48L INTC2.EIC48.UINT8[L]
#define INTC2EIC48H INTC2.EIC48.UINT8[H]
#define INTC2EIP48 INTC2.EIC48.BIT.EIP48
#define INTC2EITB48 INTC2.EIC48.BIT.EITB48
#define INTC2EIMK48 INTC2.EIC48.BIT.EIMK48
#define INTC2EIRF48 INTC2.EIC48.BIT.EIRF48
#define INTC2EICT48 INTC2.EIC48.BIT.EICT48
#define INTC2EIC49 INTC2.EIC49.UINT16
#define INTC2EIC49L INTC2.EIC49.UINT8[L]
#define INTC2EIC49H INTC2.EIC49.UINT8[H]
#define INTC2EIP49 INTC2.EIC49.BIT.EIP49
#define INTC2EITB49 INTC2.EIC49.BIT.EITB49
#define INTC2EIMK49 INTC2.EIC49.BIT.EIMK49
#define INTC2EIRF49 INTC2.EIC49.BIT.EIRF49
#define INTC2EICT49 INTC2.EIC49.BIT.EICT49
#define INTC2EIC50 INTC2.EIC50.UINT16
#define INTC2EIC50L INTC2.EIC50.UINT8[L]
#define INTC2EIC50H INTC2.EIC50.UINT8[H]
#define INTC2EIP50 INTC2.EIC50.BIT.EIP50
#define INTC2EITB50 INTC2.EIC50.BIT.EITB50
#define INTC2EIMK50 INTC2.EIC50.BIT.EIMK50
#define INTC2EIRF50 INTC2.EIC50.BIT.EIRF50
#define INTC2EICT50 INTC2.EIC50.BIT.EICT50
#define INTC2EIC51 INTC2.EIC51.UINT16
#define INTC2EIC51L INTC2.EIC51.UINT8[L]
#define INTC2EIC51H INTC2.EIC51.UINT8[H]
#define INTC2EIP51 INTC2.EIC51.BIT.EIP51
#define INTC2EITB51 INTC2.EIC51.BIT.EITB51
#define INTC2EIMK51 INTC2.EIC51.BIT.EIMK51
#define INTC2EIRF51 INTC2.EIC51.BIT.EIRF51
#define INTC2EICT51 INTC2.EIC51.BIT.EICT51
#define INTC2EIC52 INTC2.EIC52.UINT16
#define INTC2EIC52L INTC2.EIC52.UINT8[L]
#define INTC2EIC52H INTC2.EIC52.UINT8[H]
#define INTC2EIP52 INTC2.EIC52.BIT.EIP52
#define INTC2EITB52 INTC2.EIC52.BIT.EITB52
#define INTC2EIMK52 INTC2.EIC52.BIT.EIMK52
#define INTC2EIRF52 INTC2.EIC52.BIT.EIRF52
#define INTC2EICT52 INTC2.EIC52.BIT.EICT52
#define INTC2EIC53 INTC2.EIC53.UINT16
#define INTC2EIC53L INTC2.EIC53.UINT8[L]
#define INTC2EIC53H INTC2.EIC53.UINT8[H]
#define INTC2EIP53 INTC2.EIC53.BIT.EIP53
#define INTC2EITB53 INTC2.EIC53.BIT.EITB53
#define INTC2EIMK53 INTC2.EIC53.BIT.EIMK53
#define INTC2EIRF53 INTC2.EIC53.BIT.EIRF53
#define INTC2EICT53 INTC2.EIC53.BIT.EICT53
#define INTC2EIC54 INTC2.EIC54.UINT16
#define INTC2EIC54L INTC2.EIC54.UINT8[L]
#define INTC2EIC54H INTC2.EIC54.UINT8[H]
#define INTC2EIP54 INTC2.EIC54.BIT.EIP54
#define INTC2EITB54 INTC2.EIC54.BIT.EITB54
#define INTC2EIMK54 INTC2.EIC54.BIT.EIMK54
#define INTC2EIRF54 INTC2.EIC54.BIT.EIRF54
#define INTC2EICT54 INTC2.EIC54.BIT.EICT54
#define INTC2EIC55 INTC2.EIC55.UINT16
#define INTC2EIC55L INTC2.EIC55.UINT8[L]
#define INTC2EIC55H INTC2.EIC55.UINT8[H]
#define INTC2EIP55 INTC2.EIC55.BIT.EIP55
#define INTC2EITB55 INTC2.EIC55.BIT.EITB55
#define INTC2EIMK55 INTC2.EIC55.BIT.EIMK55
#define INTC2EIRF55 INTC2.EIC55.BIT.EIRF55
#define INTC2EICT55 INTC2.EIC55.BIT.EICT55
#define INTC2EIC56 INTC2.EIC56.UINT16
#define INTC2EIC56L INTC2.EIC56.UINT8[L]
#define INTC2EIC56H INTC2.EIC56.UINT8[H]
#define INTC2EIP56 INTC2.EIC56.BIT.EIP56
#define INTC2EITB56 INTC2.EIC56.BIT.EITB56
#define INTC2EIMK56 INTC2.EIC56.BIT.EIMK56
#define INTC2EIRF56 INTC2.EIC56.BIT.EIRF56
#define INTC2EICT56 INTC2.EIC56.BIT.EICT56
#define INTC2EIC57 INTC2.EIC57.UINT16
#define INTC2EIC57L INTC2.EIC57.UINT8[L]
#define INTC2EIC57H INTC2.EIC57.UINT8[H]
#define INTC2EIP57 INTC2.EIC57.BIT.EIP57
#define INTC2EITB57 INTC2.EIC57.BIT.EITB57
#define INTC2EIMK57 INTC2.EIC57.BIT.EIMK57
#define INTC2EIRF57 INTC2.EIC57.BIT.EIRF57
#define INTC2EICT57 INTC2.EIC57.BIT.EICT57
#define INTC2EIC58 INTC2.EIC58.UINT16
#define INTC2EIC58L INTC2.EIC58.UINT8[L]
#define INTC2EIC58H INTC2.EIC58.UINT8[H]
#define INTC2EIP58 INTC2.EIC58.BIT.EIP58
#define INTC2EITB58 INTC2.EIC58.BIT.EITB58
#define INTC2EIMK58 INTC2.EIC58.BIT.EIMK58
#define INTC2EIRF58 INTC2.EIC58.BIT.EIRF58
#define INTC2EICT58 INTC2.EIC58.BIT.EICT58
#define INTC2EIC59 INTC2.EIC59.UINT16
#define INTC2EIC59L INTC2.EIC59.UINT8[L]
#define INTC2EIC59H INTC2.EIC59.UINT8[H]
#define INTC2EIP59 INTC2.EIC59.BIT.EIP59
#define INTC2EITB59 INTC2.EIC59.BIT.EITB59
#define INTC2EIMK59 INTC2.EIC59.BIT.EIMK59
#define INTC2EIRF59 INTC2.EIC59.BIT.EIRF59
#define INTC2EICT59 INTC2.EIC59.BIT.EICT59
#define INTC2EIC60 INTC2.EIC60.UINT16
#define INTC2EIC60L INTC2.EIC60.UINT8[L]
#define INTC2EIC60H INTC2.EIC60.UINT8[H]
#define INTC2EIP60 INTC2.EIC60.BIT.EIP60
#define INTC2EITB60 INTC2.EIC60.BIT.EITB60
#define INTC2EIMK60 INTC2.EIC60.BIT.EIMK60
#define INTC2EIRF60 INTC2.EIC60.BIT.EIRF60
#define INTC2EICT60 INTC2.EIC60.BIT.EICT60
#define INTC2EIC61 INTC2.EIC61.UINT16
#define INTC2EIC61L INTC2.EIC61.UINT8[L]
#define INTC2EIC61H INTC2.EIC61.UINT8[H]
#define INTC2EIP61 INTC2.EIC61.BIT.EIP61
#define INTC2EITB61 INTC2.EIC61.BIT.EITB61
#define INTC2EIMK61 INTC2.EIC61.BIT.EIMK61
#define INTC2EIRF61 INTC2.EIC61.BIT.EIRF61
#define INTC2EICT61 INTC2.EIC61.BIT.EICT61
#define INTC2EIC62 INTC2.EIC62.UINT16
#define INTC2EIC62L INTC2.EIC62.UINT8[L]
#define INTC2EIC62H INTC2.EIC62.UINT8[H]
#define INTC2EIP62 INTC2.EIC62.BIT.EIP62
#define INTC2EITB62 INTC2.EIC62.BIT.EITB62
#define INTC2EIMK62 INTC2.EIC62.BIT.EIMK62
#define INTC2EIRF62 INTC2.EIC62.BIT.EIRF62
#define INTC2EICT62 INTC2.EIC62.BIT.EICT62
#define INTC2EIC63 INTC2.EIC63.UINT16
#define INTC2EIC63L INTC2.EIC63.UINT8[L]
#define INTC2EIC63H INTC2.EIC63.UINT8[H]
#define INTC2EIP63 INTC2.EIC63.BIT.EIP63
#define INTC2EITB63 INTC2.EIC63.BIT.EITB63
#define INTC2EIMK63 INTC2.EIC63.BIT.EIMK63
#define INTC2EIRF63 INTC2.EIC63.BIT.EIRF63
#define INTC2EICT63 INTC2.EIC63.BIT.EICT63
#define INTC2EIC64 INTC2.EIC64.UINT16
#define INTC2EIC64L INTC2.EIC64.UINT8[L]
#define INTC2EIC64H INTC2.EIC64.UINT8[H]
#define INTC2EIP64 INTC2.EIC64.BIT.EIP64
#define INTC2EITB64 INTC2.EIC64.BIT.EITB64
#define INTC2EIMK64 INTC2.EIC64.BIT.EIMK64
#define INTC2EIRF64 INTC2.EIC64.BIT.EIRF64
#define INTC2EICT64 INTC2.EIC64.BIT.EICT64
#define INTC2EIC65 INTC2.EIC65.UINT16
#define INTC2EIC65L INTC2.EIC65.UINT8[L]
#define INTC2EIC65H INTC2.EIC65.UINT8[H]
#define INTC2EIP65 INTC2.EIC65.BIT.EIP65
#define INTC2EITB65 INTC2.EIC65.BIT.EITB65
#define INTC2EIMK65 INTC2.EIC65.BIT.EIMK65
#define INTC2EIRF65 INTC2.EIC65.BIT.EIRF65
#define INTC2EICT65 INTC2.EIC65.BIT.EICT65
#define INTC2EIC66 INTC2.EIC66.UINT16
#define INTC2EIC66L INTC2.EIC66.UINT8[L]
#define INTC2EIC66H INTC2.EIC66.UINT8[H]
#define INTC2EIP66 INTC2.EIC66.BIT.EIP66
#define INTC2EITB66 INTC2.EIC66.BIT.EITB66
#define INTC2EIMK66 INTC2.EIC66.BIT.EIMK66
#define INTC2EIRF66 INTC2.EIC66.BIT.EIRF66
#define INTC2EICT66 INTC2.EIC66.BIT.EICT66
#define INTC2EIC67 INTC2.EIC67.UINT16
#define INTC2EIC67L INTC2.EIC67.UINT8[L]
#define INTC2EIC67H INTC2.EIC67.UINT8[H]
#define INTC2EIP67 INTC2.EIC67.BIT.EIP67
#define INTC2EITB67 INTC2.EIC67.BIT.EITB67
#define INTC2EIMK67 INTC2.EIC67.BIT.EIMK67
#define INTC2EIRF67 INTC2.EIC67.BIT.EIRF67
#define INTC2EICT67 INTC2.EIC67.BIT.EICT67
#define INTC2EIC68 INTC2.EIC68.UINT16
#define INTC2EIC68L INTC2.EIC68.UINT8[L]
#define INTC2EIC68H INTC2.EIC68.UINT8[H]
#define INTC2EIP68 INTC2.EIC68.BIT.EIP68
#define INTC2EITB68 INTC2.EIC68.BIT.EITB68
#define INTC2EIMK68 INTC2.EIC68.BIT.EIMK68
#define INTC2EIRF68 INTC2.EIC68.BIT.EIRF68
#define INTC2EICT68 INTC2.EIC68.BIT.EICT68
#define INTC2EIC69 INTC2.EIC69.UINT16
#define INTC2EIC69L INTC2.EIC69.UINT8[L]
#define INTC2EIC69H INTC2.EIC69.UINT8[H]
#define INTC2EIP69 INTC2.EIC69.BIT.EIP69
#define INTC2EITB69 INTC2.EIC69.BIT.EITB69
#define INTC2EIMK69 INTC2.EIC69.BIT.EIMK69
#define INTC2EIRF69 INTC2.EIC69.BIT.EIRF69
#define INTC2EICT69 INTC2.EIC69.BIT.EICT69
#define INTC2EIC70 INTC2.EIC70.UINT16
#define INTC2EIC70L INTC2.EIC70.UINT8[L]
#define INTC2EIC70H INTC2.EIC70.UINT8[H]
#define INTC2EIP70 INTC2.EIC70.BIT.EIP70
#define INTC2EITB70 INTC2.EIC70.BIT.EITB70
#define INTC2EIMK70 INTC2.EIC70.BIT.EIMK70
#define INTC2EIRF70 INTC2.EIC70.BIT.EIRF70
#define INTC2EICT70 INTC2.EIC70.BIT.EICT70
#define INTC2EIC71 INTC2.EIC71.UINT16
#define INTC2EIC71L INTC2.EIC71.UINT8[L]
#define INTC2EIC71H INTC2.EIC71.UINT8[H]
#define INTC2EIP71 INTC2.EIC71.BIT.EIP71
#define INTC2EITB71 INTC2.EIC71.BIT.EITB71
#define INTC2EIMK71 INTC2.EIC71.BIT.EIMK71
#define INTC2EIRF71 INTC2.EIC71.BIT.EIRF71
#define INTC2EICT71 INTC2.EIC71.BIT.EICT71
#define INTC2EIC72 INTC2.EIC72.UINT16
#define INTC2EIC72L INTC2.EIC72.UINT8[L]
#define INTC2EIC72H INTC2.EIC72.UINT8[H]
#define INTC2EIP72 INTC2.EIC72.BIT.EIP72
#define INTC2EITB72 INTC2.EIC72.BIT.EITB72
#define INTC2EIMK72 INTC2.EIC72.BIT.EIMK72
#define INTC2EIRF72 INTC2.EIC72.BIT.EIRF72
#define INTC2EICT72 INTC2.EIC72.BIT.EICT72
#define INTC2EIC73 INTC2.EIC73.UINT16
#define INTC2EIC73L INTC2.EIC73.UINT8[L]
#define INTC2EIC73H INTC2.EIC73.UINT8[H]
#define INTC2EIP73 INTC2.EIC73.BIT.EIP73
#define INTC2EITB73 INTC2.EIC73.BIT.EITB73
#define INTC2EIMK73 INTC2.EIC73.BIT.EIMK73
#define INTC2EIRF73 INTC2.EIC73.BIT.EIRF73
#define INTC2EICT73 INTC2.EIC73.BIT.EICT73
#define INTC2EIC74 INTC2.EIC74.UINT16
#define INTC2EIC74L INTC2.EIC74.UINT8[L]
#define INTC2EIC74H INTC2.EIC74.UINT8[H]
#define INTC2EIP74 INTC2.EIC74.BIT.EIP74
#define INTC2EITB74 INTC2.EIC74.BIT.EITB74
#define INTC2EIMK74 INTC2.EIC74.BIT.EIMK74
#define INTC2EIRF74 INTC2.EIC74.BIT.EIRF74
#define INTC2EICT74 INTC2.EIC74.BIT.EICT74
#define INTC2EIC75 INTC2.EIC75.UINT16
#define INTC2EIC75L INTC2.EIC75.UINT8[L]
#define INTC2EIC75H INTC2.EIC75.UINT8[H]
#define INTC2EIP75 INTC2.EIC75.BIT.EIP75
#define INTC2EITB75 INTC2.EIC75.BIT.EITB75
#define INTC2EIMK75 INTC2.EIC75.BIT.EIMK75
#define INTC2EIRF75 INTC2.EIC75.BIT.EIRF75
#define INTC2EICT75 INTC2.EIC75.BIT.EICT75
#define INTC2EIC76 INTC2.EIC76.UINT16
#define INTC2EIC76L INTC2.EIC76.UINT8[L]
#define INTC2EIC76H INTC2.EIC76.UINT8[H]
#define INTC2EIP76 INTC2.EIC76.BIT.EIP76
#define INTC2EITB76 INTC2.EIC76.BIT.EITB76
#define INTC2EIMK76 INTC2.EIC76.BIT.EIMK76
#define INTC2EIRF76 INTC2.EIC76.BIT.EIRF76
#define INTC2EICT76 INTC2.EIC76.BIT.EICT76
#define INTC2EIC77 INTC2.EIC77.UINT16
#define INTC2EIC77L INTC2.EIC77.UINT8[L]
#define INTC2EIC77H INTC2.EIC77.UINT8[H]
#define INTC2EIP77 INTC2.EIC77.BIT.EIP77
#define INTC2EITB77 INTC2.EIC77.BIT.EITB77
#define INTC2EIMK77 INTC2.EIC77.BIT.EIMK77
#define INTC2EIRF77 INTC2.EIC77.BIT.EIRF77
#define INTC2EICT77 INTC2.EIC77.BIT.EICT77
#define INTC2EIC78 INTC2.EIC78.UINT16
#define INTC2EIC78L INTC2.EIC78.UINT8[L]
#define INTC2EIC78H INTC2.EIC78.UINT8[H]
#define INTC2EIP78 INTC2.EIC78.BIT.EIP78
#define INTC2EITB78 INTC2.EIC78.BIT.EITB78
#define INTC2EIMK78 INTC2.EIC78.BIT.EIMK78
#define INTC2EIRF78 INTC2.EIC78.BIT.EIRF78
#define INTC2EICT78 INTC2.EIC78.BIT.EICT78
#define INTC2EIC79 INTC2.EIC79.UINT16
#define INTC2EIC79L INTC2.EIC79.UINT8[L]
#define INTC2EIC79H INTC2.EIC79.UINT8[H]
#define INTC2EIP79 INTC2.EIC79.BIT.EIP79
#define INTC2EITB79 INTC2.EIC79.BIT.EITB79
#define INTC2EIMK79 INTC2.EIC79.BIT.EIMK79
#define INTC2EIRF79 INTC2.EIC79.BIT.EIRF79
#define INTC2EICT79 INTC2.EIC79.BIT.EICT79
#define INTC2EIC80 INTC2.EIC80.UINT16
#define INTC2EIC80L INTC2.EIC80.UINT8[L]
#define INTC2EIC80H INTC2.EIC80.UINT8[H]
#define INTC2EIP80 INTC2.EIC80.BIT.EIP80
#define INTC2EITB80 INTC2.EIC80.BIT.EITB80
#define INTC2EIMK80 INTC2.EIC80.BIT.EIMK80
#define INTC2EIRF80 INTC2.EIC80.BIT.EIRF80
#define INTC2EICT80 INTC2.EIC80.BIT.EICT80
#define INTC2EIC81 INTC2.EIC81.UINT16
#define INTC2EIC81L INTC2.EIC81.UINT8[L]
#define INTC2EIC81H INTC2.EIC81.UINT8[H]
#define INTC2EIP81 INTC2.EIC81.BIT.EIP81
#define INTC2EITB81 INTC2.EIC81.BIT.EITB81
#define INTC2EIMK81 INTC2.EIC81.BIT.EIMK81
#define INTC2EIRF81 INTC2.EIC81.BIT.EIRF81
#define INTC2EICT81 INTC2.EIC81.BIT.EICT81
#define INTC2EIC82 INTC2.EIC82.UINT16
#define INTC2EIC82L INTC2.EIC82.UINT8[L]
#define INTC2EIC82H INTC2.EIC82.UINT8[H]
#define INTC2EIP82 INTC2.EIC82.BIT.EIP82
#define INTC2EITB82 INTC2.EIC82.BIT.EITB82
#define INTC2EIMK82 INTC2.EIC82.BIT.EIMK82
#define INTC2EIRF82 INTC2.EIC82.BIT.EIRF82
#define INTC2EICT82 INTC2.EIC82.BIT.EICT82
#define INTC2EIC83 INTC2.EIC83.UINT16
#define INTC2EIC83L INTC2.EIC83.UINT8[L]
#define INTC2EIC83H INTC2.EIC83.UINT8[H]
#define INTC2EIP83 INTC2.EIC83.BIT.EIP83
#define INTC2EITB83 INTC2.EIC83.BIT.EITB83
#define INTC2EIMK83 INTC2.EIC83.BIT.EIMK83
#define INTC2EIRF83 INTC2.EIC83.BIT.EIRF83
#define INTC2EICT83 INTC2.EIC83.BIT.EICT83
#define INTC2EIC84 INTC2.EIC84.UINT16
#define INTC2EIC84L INTC2.EIC84.UINT8[L]
#define INTC2EIC84H INTC2.EIC84.UINT8[H]
#define INTC2EIP84 INTC2.EIC84.BIT.EIP84
#define INTC2EITB84 INTC2.EIC84.BIT.EITB84
#define INTC2EIMK84 INTC2.EIC84.BIT.EIMK84
#define INTC2EIRF84 INTC2.EIC84.BIT.EIRF84
#define INTC2EICT84 INTC2.EIC84.BIT.EICT84
#define INTC2EIC85 INTC2.EIC85.UINT16
#define INTC2EIC85L INTC2.EIC85.UINT8[L]
#define INTC2EIC85H INTC2.EIC85.UINT8[H]
#define INTC2EIP85 INTC2.EIC85.BIT.EIP85
#define INTC2EITB85 INTC2.EIC85.BIT.EITB85
#define INTC2EIMK85 INTC2.EIC85.BIT.EIMK85
#define INTC2EIRF85 INTC2.EIC85.BIT.EIRF85
#define INTC2EICT85 INTC2.EIC85.BIT.EICT85
#define INTC2EIC86 INTC2.EIC86.UINT16
#define INTC2EIC86L INTC2.EIC86.UINT8[L]
#define INTC2EIC86H INTC2.EIC86.UINT8[H]
#define INTC2EIP86 INTC2.EIC86.BIT.EIP86
#define INTC2EITB86 INTC2.EIC86.BIT.EITB86
#define INTC2EIMK86 INTC2.EIC86.BIT.EIMK86
#define INTC2EIRF86 INTC2.EIC86.BIT.EIRF86
#define INTC2EICT86 INTC2.EIC86.BIT.EICT86
#define INTC2EIC87 INTC2.EIC87.UINT16
#define INTC2EIC87L INTC2.EIC87.UINT8[L]
#define INTC2EIC87H INTC2.EIC87.UINT8[H]
#define INTC2EIP87 INTC2.EIC87.BIT.EIP87
#define INTC2EITB87 INTC2.EIC87.BIT.EITB87
#define INTC2EIMK87 INTC2.EIC87.BIT.EIMK87
#define INTC2EIRF87 INTC2.EIC87.BIT.EIRF87
#define INTC2EICT87 INTC2.EIC87.BIT.EICT87
#define INTC2EIC88 INTC2.EIC88.UINT16
#define INTC2EIC88L INTC2.EIC88.UINT8[L]
#define INTC2EIC88H INTC2.EIC88.UINT8[H]
#define INTC2EIP88 INTC2.EIC88.BIT.EIP88
#define INTC2EITB88 INTC2.EIC88.BIT.EITB88
#define INTC2EIMK88 INTC2.EIC88.BIT.EIMK88
#define INTC2EIRF88 INTC2.EIC88.BIT.EIRF88
#define INTC2EICT88 INTC2.EIC88.BIT.EICT88
#define INTC2EIC89 INTC2.EIC89.UINT16
#define INTC2EIC89L INTC2.EIC89.UINT8[L]
#define INTC2EIC89H INTC2.EIC89.UINT8[H]
#define INTC2EIP89 INTC2.EIC89.BIT.EIP89
#define INTC2EITB89 INTC2.EIC89.BIT.EITB89
#define INTC2EIMK89 INTC2.EIC89.BIT.EIMK89
#define INTC2EIRF89 INTC2.EIC89.BIT.EIRF89
#define INTC2EICT89 INTC2.EIC89.BIT.EICT89
#define INTC2EIC90 INTC2.EIC90.UINT16
#define INTC2EIC90L INTC2.EIC90.UINT8[L]
#define INTC2EIC90H INTC2.EIC90.UINT8[H]
#define INTC2EIP90 INTC2.EIC90.BIT.EIP90
#define INTC2EITB90 INTC2.EIC90.BIT.EITB90
#define INTC2EIMK90 INTC2.EIC90.BIT.EIMK90
#define INTC2EIRF90 INTC2.EIC90.BIT.EIRF90
#define INTC2EICT90 INTC2.EIC90.BIT.EICT90
#define INTC2EIC91 INTC2.EIC91.UINT16
#define INTC2EIC91L INTC2.EIC91.UINT8[L]
#define INTC2EIC91H INTC2.EIC91.UINT8[H]
#define INTC2EIP91 INTC2.EIC91.BIT.EIP91
#define INTC2EITB91 INTC2.EIC91.BIT.EITB91
#define INTC2EIMK91 INTC2.EIC91.BIT.EIMK91
#define INTC2EIRF91 INTC2.EIC91.BIT.EIRF91
#define INTC2EICT91 INTC2.EIC91.BIT.EICT91
#define INTC2EIC92 INTC2.EIC92.UINT16
#define INTC2EIC92L INTC2.EIC92.UINT8[L]
#define INTC2EIC92H INTC2.EIC92.UINT8[H]
#define INTC2EIP92 INTC2.EIC92.BIT.EIP92
#define INTC2EITB92 INTC2.EIC92.BIT.EITB92
#define INTC2EIMK92 INTC2.EIC92.BIT.EIMK92
#define INTC2EIRF92 INTC2.EIC92.BIT.EIRF92
#define INTC2EICT92 INTC2.EIC92.BIT.EICT92
#define INTC2EIC93 INTC2.EIC93.UINT16
#define INTC2EIC93L INTC2.EIC93.UINT8[L]
#define INTC2EIC93H INTC2.EIC93.UINT8[H]
#define INTC2EIP93 INTC2.EIC93.BIT.EIP93
#define INTC2EITB93 INTC2.EIC93.BIT.EITB93
#define INTC2EIMK93 INTC2.EIC93.BIT.EIMK93
#define INTC2EIRF93 INTC2.EIC93.BIT.EIRF93
#define INTC2EICT93 INTC2.EIC93.BIT.EICT93
#define INTC2EIC94 INTC2.EIC94.UINT16
#define INTC2EIC94L INTC2.EIC94.UINT8[L]
#define INTC2EIC94H INTC2.EIC94.UINT8[H]
#define INTC2EIP94 INTC2.EIC94.BIT.EIP94
#define INTC2EITB94 INTC2.EIC94.BIT.EITB94
#define INTC2EIMK94 INTC2.EIC94.BIT.EIMK94
#define INTC2EIRF94 INTC2.EIC94.BIT.EIRF94
#define INTC2EICT94 INTC2.EIC94.BIT.EICT94
#define INTC2EIC95 INTC2.EIC95.UINT16
#define INTC2EIC95L INTC2.EIC95.UINT8[L]
#define INTC2EIC95H INTC2.EIC95.UINT8[H]
#define INTC2EIP95 INTC2.EIC95.BIT.EIP95
#define INTC2EITB95 INTC2.EIC95.BIT.EITB95
#define INTC2EIMK95 INTC2.EIC95.BIT.EIMK95
#define INTC2EIRF95 INTC2.EIC95.BIT.EIRF95
#define INTC2EICT95 INTC2.EIC95.BIT.EICT95
#define INTC2EIC96 INTC2.EIC96.UINT16
#define INTC2EIC96L INTC2.EIC96.UINT8[L]
#define INTC2EIC96H INTC2.EIC96.UINT8[H]
#define INTC2EIP96 INTC2.EIC96.BIT.EIP96
#define INTC2EITB96 INTC2.EIC96.BIT.EITB96
#define INTC2EIMK96 INTC2.EIC96.BIT.EIMK96
#define INTC2EIRF96 INTC2.EIC96.BIT.EIRF96
#define INTC2EICT96 INTC2.EIC96.BIT.EICT96
#define INTC2EIC97 INTC2.EIC97.UINT16
#define INTC2EIC97L INTC2.EIC97.UINT8[L]
#define INTC2EIC97H INTC2.EIC97.UINT8[H]
#define INTC2EIP97 INTC2.EIC97.BIT.EIP97
#define INTC2EITB97 INTC2.EIC97.BIT.EITB97
#define INTC2EIMK97 INTC2.EIC97.BIT.EIMK97
#define INTC2EIRF97 INTC2.EIC97.BIT.EIRF97
#define INTC2EICT97 INTC2.EIC97.BIT.EICT97
#define INTC2EIC98 INTC2.EIC98.UINT16
#define INTC2EIC98L INTC2.EIC98.UINT8[L]
#define INTC2EIC98H INTC2.EIC98.UINT8[H]
#define INTC2EIP98 INTC2.EIC98.BIT.EIP98
#define INTC2EITB98 INTC2.EIC98.BIT.EITB98
#define INTC2EIMK98 INTC2.EIC98.BIT.EIMK98
#define INTC2EIRF98 INTC2.EIC98.BIT.EIRF98
#define INTC2EICT98 INTC2.EIC98.BIT.EICT98
#define INTC2EIC99 INTC2.EIC99.UINT16
#define INTC2EIC99L INTC2.EIC99.UINT8[L]
#define INTC2EIC99H INTC2.EIC99.UINT8[H]
#define INTC2EIP99 INTC2.EIC99.BIT.EIP99
#define INTC2EITB99 INTC2.EIC99.BIT.EITB99
#define INTC2EIMK99 INTC2.EIC99.BIT.EIMK99
#define INTC2EIRF99 INTC2.EIC99.BIT.EIRF99
#define INTC2EICT99 INTC2.EIC99.BIT.EICT99
#define INTC2EIC100 INTC2.EIC100.UINT16
#define INTC2EIC100L INTC2.EIC100.UINT8[L]
#define INTC2EIC100H INTC2.EIC100.UINT8[H]
#define INTC2EIP100 INTC2.EIC100.BIT.EIP100
#define INTC2EITB100 INTC2.EIC100.BIT.EITB100
#define INTC2EIMK100 INTC2.EIC100.BIT.EIMK100
#define INTC2EIRF100 INTC2.EIC100.BIT.EIRF100
#define INTC2EICT100 INTC2.EIC100.BIT.EICT100
#define INTC2EIC101 INTC2.EIC101.UINT16
#define INTC2EIC101L INTC2.EIC101.UINT8[L]
#define INTC2EIC101H INTC2.EIC101.UINT8[H]
#define INTC2EIP101 INTC2.EIC101.BIT.EIP101
#define INTC2EITB101 INTC2.EIC101.BIT.EITB101
#define INTC2EIMK101 INTC2.EIC101.BIT.EIMK101
#define INTC2EIRF101 INTC2.EIC101.BIT.EIRF101
#define INTC2EICT101 INTC2.EIC101.BIT.EICT101
#define INTC2EIC102 INTC2.EIC102.UINT16
#define INTC2EIC102L INTC2.EIC102.UINT8[L]
#define INTC2EIC102H INTC2.EIC102.UINT8[H]
#define INTC2EIP102 INTC2.EIC102.BIT.EIP102
#define INTC2EITB102 INTC2.EIC102.BIT.EITB102
#define INTC2EIMK102 INTC2.EIC102.BIT.EIMK102
#define INTC2EIRF102 INTC2.EIC102.BIT.EIRF102
#define INTC2EICT102 INTC2.EIC102.BIT.EICT102
#define INTC2EIC103 INTC2.EIC103.UINT16
#define INTC2EIC103L INTC2.EIC103.UINT8[L]
#define INTC2EIC103H INTC2.EIC103.UINT8[H]
#define INTC2EIP103 INTC2.EIC103.BIT.EIP103
#define INTC2EITB103 INTC2.EIC103.BIT.EITB103
#define INTC2EIMK103 INTC2.EIC103.BIT.EIMK103
#define INTC2EIRF103 INTC2.EIC103.BIT.EIRF103
#define INTC2EICT103 INTC2.EIC103.BIT.EICT103
#define INTC2EIC104 INTC2.EIC104.UINT16
#define INTC2EIC104L INTC2.EIC104.UINT8[L]
#define INTC2EIC104H INTC2.EIC104.UINT8[H]
#define INTC2EIP104 INTC2.EIC104.BIT.EIP104
#define INTC2EITB104 INTC2.EIC104.BIT.EITB104
#define INTC2EIMK104 INTC2.EIC104.BIT.EIMK104
#define INTC2EIRF104 INTC2.EIC104.BIT.EIRF104
#define INTC2EICT104 INTC2.EIC104.BIT.EICT104
#define INTC2EIC105 INTC2.EIC105.UINT16
#define INTC2EIC105L INTC2.EIC105.UINT8[L]
#define INTC2EIC105H INTC2.EIC105.UINT8[H]
#define INTC2EIP105 INTC2.EIC105.BIT.EIP105
#define INTC2EITB105 INTC2.EIC105.BIT.EITB105
#define INTC2EIMK105 INTC2.EIC105.BIT.EIMK105
#define INTC2EIRF105 INTC2.EIC105.BIT.EIRF105
#define INTC2EICT105 INTC2.EIC105.BIT.EICT105
#define INTC2EIC106 INTC2.EIC106.UINT16
#define INTC2EIC106L INTC2.EIC106.UINT8[L]
#define INTC2EIC106H INTC2.EIC106.UINT8[H]
#define INTC2EIP106 INTC2.EIC106.BIT.EIP106
#define INTC2EITB106 INTC2.EIC106.BIT.EITB106
#define INTC2EIMK106 INTC2.EIC106.BIT.EIMK106
#define INTC2EIRF106 INTC2.EIC106.BIT.EIRF106
#define INTC2EICT106 INTC2.EIC106.BIT.EICT106
#define INTC2EIC107 INTC2.EIC107.UINT16
#define INTC2EIC107L INTC2.EIC107.UINT8[L]
#define INTC2EIC107H INTC2.EIC107.UINT8[H]
#define INTC2EIP107 INTC2.EIC107.BIT.EIP107
#define INTC2EITB107 INTC2.EIC107.BIT.EITB107
#define INTC2EIMK107 INTC2.EIC107.BIT.EIMK107
#define INTC2EIRF107 INTC2.EIC107.BIT.EIRF107
#define INTC2EICT107 INTC2.EIC107.BIT.EICT107
#define INTC2EIC108 INTC2.EIC108.UINT16
#define INTC2EIC108L INTC2.EIC108.UINT8[L]
#define INTC2EIC108H INTC2.EIC108.UINT8[H]
#define INTC2EIP108 INTC2.EIC108.BIT.EIP108
#define INTC2EITB108 INTC2.EIC108.BIT.EITB108
#define INTC2EIMK108 INTC2.EIC108.BIT.EIMK108
#define INTC2EIRF108 INTC2.EIC108.BIT.EIRF108
#define INTC2EICT108 INTC2.EIC108.BIT.EICT108
#define INTC2EIC109 INTC2.EIC109.UINT16
#define INTC2EIC109L INTC2.EIC109.UINT8[L]
#define INTC2EIC109H INTC2.EIC109.UINT8[H]
#define INTC2EIP109 INTC2.EIC109.BIT.EIP109
#define INTC2EITB109 INTC2.EIC109.BIT.EITB109
#define INTC2EIMK109 INTC2.EIC109.BIT.EIMK109
#define INTC2EIRF109 INTC2.EIC109.BIT.EIRF109
#define INTC2EICT109 INTC2.EIC109.BIT.EICT109
#define INTC2EIC110 INTC2.EIC110.UINT16
#define INTC2EIC110L INTC2.EIC110.UINT8[L]
#define INTC2EIC110H INTC2.EIC110.UINT8[H]
#define INTC2EIP110 INTC2.EIC110.BIT.EIP110
#define INTC2EITB110 INTC2.EIC110.BIT.EITB110
#define INTC2EIMK110 INTC2.EIC110.BIT.EIMK110
#define INTC2EIRF110 INTC2.EIC110.BIT.EIRF110
#define INTC2EICT110 INTC2.EIC110.BIT.EICT110
#define INTC2EIC111 INTC2.EIC111.UINT16
#define INTC2EIC111L INTC2.EIC111.UINT8[L]
#define INTC2EIC111H INTC2.EIC111.UINT8[H]
#define INTC2EIP111 INTC2.EIC111.BIT.EIP111
#define INTC2EITB111 INTC2.EIC111.BIT.EITB111
#define INTC2EIMK111 INTC2.EIC111.BIT.EIMK111
#define INTC2EIRF111 INTC2.EIC111.BIT.EIRF111
#define INTC2EICT111 INTC2.EIC111.BIT.EICT111
#define INTC2EIC112 INTC2.EIC112.UINT16
#define INTC2EIC112L INTC2.EIC112.UINT8[L]
#define INTC2EIC112H INTC2.EIC112.UINT8[H]
#define INTC2EIP112 INTC2.EIC112.BIT.EIP112
#define INTC2EITB112 INTC2.EIC112.BIT.EITB112
#define INTC2EIMK112 INTC2.EIC112.BIT.EIMK112
#define INTC2EIRF112 INTC2.EIC112.BIT.EIRF112
#define INTC2EICT112 INTC2.EIC112.BIT.EICT112
#define INTC2EIC113 INTC2.EIC113.UINT16
#define INTC2EIC113L INTC2.EIC113.UINT8[L]
#define INTC2EIC113H INTC2.EIC113.UINT8[H]
#define INTC2EIP113 INTC2.EIC113.BIT.EIP113
#define INTC2EITB113 INTC2.EIC113.BIT.EITB113
#define INTC2EIMK113 INTC2.EIC113.BIT.EIMK113
#define INTC2EIRF113 INTC2.EIC113.BIT.EIRF113
#define INTC2EICT113 INTC2.EIC113.BIT.EICT113
#define INTC2EIC114 INTC2.EIC114.UINT16
#define INTC2EIC114L INTC2.EIC114.UINT8[L]
#define INTC2EIC114H INTC2.EIC114.UINT8[H]
#define INTC2EIP114 INTC2.EIC114.BIT.EIP114
#define INTC2EITB114 INTC2.EIC114.BIT.EITB114
#define INTC2EIMK114 INTC2.EIC114.BIT.EIMK114
#define INTC2EIRF114 INTC2.EIC114.BIT.EIRF114
#define INTC2EICT114 INTC2.EIC114.BIT.EICT114
#define INTC2EIC115 INTC2.EIC115.UINT16
#define INTC2EIC115L INTC2.EIC115.UINT8[L]
#define INTC2EIC115H INTC2.EIC115.UINT8[H]
#define INTC2EIP115 INTC2.EIC115.BIT.EIP115
#define INTC2EITB115 INTC2.EIC115.BIT.EITB115
#define INTC2EIMK115 INTC2.EIC115.BIT.EIMK115
#define INTC2EIRF115 INTC2.EIC115.BIT.EIRF115
#define INTC2EICT115 INTC2.EIC115.BIT.EICT115
#define INTC2EIC116 INTC2.EIC116.UINT16
#define INTC2EIC116L INTC2.EIC116.UINT8[L]
#define INTC2EIC116H INTC2.EIC116.UINT8[H]
#define INTC2EIP116 INTC2.EIC116.BIT.EIP116
#define INTC2EITB116 INTC2.EIC116.BIT.EITB116
#define INTC2EIMK116 INTC2.EIC116.BIT.EIMK116
#define INTC2EIRF116 INTC2.EIC116.BIT.EIRF116
#define INTC2EICT116 INTC2.EIC116.BIT.EICT116
#define INTC2EIC117 INTC2.EIC117.UINT16
#define INTC2EIC117L INTC2.EIC117.UINT8[L]
#define INTC2EIC117H INTC2.EIC117.UINT8[H]
#define INTC2EIP117 INTC2.EIC117.BIT.EIP117
#define INTC2EITB117 INTC2.EIC117.BIT.EITB117
#define INTC2EIMK117 INTC2.EIC117.BIT.EIMK117
#define INTC2EIRF117 INTC2.EIC117.BIT.EIRF117
#define INTC2EICT117 INTC2.EIC117.BIT.EICT117
#define INTC2EIC118 INTC2.EIC118.UINT16
#define INTC2EIC118L INTC2.EIC118.UINT8[L]
#define INTC2EIC118H INTC2.EIC118.UINT8[H]
#define INTC2EIP118 INTC2.EIC118.BIT.EIP118
#define INTC2EITB118 INTC2.EIC118.BIT.EITB118
#define INTC2EIMK118 INTC2.EIC118.BIT.EIMK118
#define INTC2EIRF118 INTC2.EIC118.BIT.EIRF118
#define INTC2EICT118 INTC2.EIC118.BIT.EICT118
#define INTC2EIC119 INTC2.EIC119.UINT16
#define INTC2EIC119L INTC2.EIC119.UINT8[L]
#define INTC2EIC119H INTC2.EIC119.UINT8[H]
#define INTC2EIP119 INTC2.EIC119.BIT.EIP119
#define INTC2EITB119 INTC2.EIC119.BIT.EITB119
#define INTC2EIMK119 INTC2.EIC119.BIT.EIMK119
#define INTC2EIRF119 INTC2.EIC119.BIT.EIRF119
#define INTC2EICT119 INTC2.EIC119.BIT.EICT119
#define INTC2EIC120 INTC2.EIC120.UINT16
#define INTC2EIC120L INTC2.EIC120.UINT8[L]
#define INTC2EIC120H INTC2.EIC120.UINT8[H]
#define INTC2EIP120 INTC2.EIC120.BIT.EIP120
#define INTC2EITB120 INTC2.EIC120.BIT.EITB120
#define INTC2EIMK120 INTC2.EIC120.BIT.EIMK120
#define INTC2EIRF120 INTC2.EIC120.BIT.EIRF120
#define INTC2EICT120 INTC2.EIC120.BIT.EICT120
#define INTC2EIC121 INTC2.EIC121.UINT16
#define INTC2EIC121L INTC2.EIC121.UINT8[L]
#define INTC2EIC121H INTC2.EIC121.UINT8[H]
#define INTC2EIP121 INTC2.EIC121.BIT.EIP121
#define INTC2EITB121 INTC2.EIC121.BIT.EITB121
#define INTC2EIMK121 INTC2.EIC121.BIT.EIMK121
#define INTC2EIRF121 INTC2.EIC121.BIT.EIRF121
#define INTC2EICT121 INTC2.EIC121.BIT.EICT121
#define INTC2EIC128 INTC2.EIC128.UINT16
#define INTC2EIC128L INTC2.EIC128.UINT8[L]
#define INTC2EIC128H INTC2.EIC128.UINT8[H]
#define INTC2EIP128 INTC2.EIC128.BIT.EIP128
#define INTC2EITB128 INTC2.EIC128.BIT.EITB128
#define INTC2EIMK128 INTC2.EIC128.BIT.EIMK128
#define INTC2EIRF128 INTC2.EIC128.BIT.EIRF128
#define INTC2EICT128 INTC2.EIC128.BIT.EICT128
#define INTC2EIC129 INTC2.EIC129.UINT16
#define INTC2EIC129L INTC2.EIC129.UINT8[L]
#define INTC2EIC129H INTC2.EIC129.UINT8[H]
#define INTC2EIP129 INTC2.EIC129.BIT.EIP129
#define INTC2EITB129 INTC2.EIC129.BIT.EITB129
#define INTC2EIMK129 INTC2.EIC129.BIT.EIMK129
#define INTC2EIRF129 INTC2.EIC129.BIT.EIRF129
#define INTC2EICT129 INTC2.EIC129.BIT.EICT129
#define INTC2EIC130 INTC2.EIC130.UINT16
#define INTC2EIC130L INTC2.EIC130.UINT8[L]
#define INTC2EIC130H INTC2.EIC130.UINT8[H]
#define INTC2EIP130 INTC2.EIC130.BIT.EIP130
#define INTC2EITB130 INTC2.EIC130.BIT.EITB130
#define INTC2EIMK130 INTC2.EIC130.BIT.EIMK130
#define INTC2EIRF130 INTC2.EIC130.BIT.EIRF130
#define INTC2EICT130 INTC2.EIC130.BIT.EICT130
#define INTC2EIC131 INTC2.EIC131.UINT16
#define INTC2EIC131L INTC2.EIC131.UINT8[L]
#define INTC2EIC131H INTC2.EIC131.UINT8[H]
#define INTC2EIP131 INTC2.EIC131.BIT.EIP131
#define INTC2EITB131 INTC2.EIC131.BIT.EITB131
#define INTC2EIMK131 INTC2.EIC131.BIT.EIMK131
#define INTC2EIRF131 INTC2.EIC131.BIT.EIRF131
#define INTC2EICT131 INTC2.EIC131.BIT.EICT131
#define INTC2EIC132 INTC2.EIC132.UINT16
#define INTC2EIC132L INTC2.EIC132.UINT8[L]
#define INTC2EIC132H INTC2.EIC132.UINT8[H]
#define INTC2EIP132 INTC2.EIC132.BIT.EIP132
#define INTC2EITB132 INTC2.EIC132.BIT.EITB132
#define INTC2EIMK132 INTC2.EIC132.BIT.EIMK132
#define INTC2EIRF132 INTC2.EIC132.BIT.EIRF132
#define INTC2EICT132 INTC2.EIC132.BIT.EICT132
#define INTC2EIC133 INTC2.EIC133.UINT16
#define INTC2EIC133L INTC2.EIC133.UINT8[L]
#define INTC2EIC133H INTC2.EIC133.UINT8[H]
#define INTC2EIP133 INTC2.EIC133.BIT.EIP133
#define INTC2EITB133 INTC2.EIC133.BIT.EITB133
#define INTC2EIMK133 INTC2.EIC133.BIT.EIMK133
#define INTC2EIRF133 INTC2.EIC133.BIT.EIRF133
#define INTC2EICT133 INTC2.EIC133.BIT.EICT133
#define INTC2EIC134 INTC2.EIC134.UINT16
#define INTC2EIC134L INTC2.EIC134.UINT8[L]
#define INTC2EIC134H INTC2.EIC134.UINT8[H]
#define INTC2EIP134 INTC2.EIC134.BIT.EIP134
#define INTC2EITB134 INTC2.EIC134.BIT.EITB134
#define INTC2EIMK134 INTC2.EIC134.BIT.EIMK134
#define INTC2EIRF134 INTC2.EIC134.BIT.EIRF134
#define INTC2EICT134 INTC2.EIC134.BIT.EICT134
#define INTC2EIC135 INTC2.EIC135.UINT16
#define INTC2EIC135L INTC2.EIC135.UINT8[L]
#define INTC2EIC135H INTC2.EIC135.UINT8[H]
#define INTC2EIP135 INTC2.EIC135.BIT.EIP135
#define INTC2EITB135 INTC2.EIC135.BIT.EITB135
#define INTC2EIMK135 INTC2.EIC135.BIT.EIMK135
#define INTC2EIRF135 INTC2.EIC135.BIT.EIRF135
#define INTC2EICT135 INTC2.EIC135.BIT.EICT135
#define INTC2EIC136 INTC2.EIC136.UINT16
#define INTC2EIC136L INTC2.EIC136.UINT8[L]
#define INTC2EIC136H INTC2.EIC136.UINT8[H]
#define INTC2EIP136 INTC2.EIC136.BIT.EIP136
#define INTC2EITB136 INTC2.EIC136.BIT.EITB136
#define INTC2EIMK136 INTC2.EIC136.BIT.EIMK136
#define INTC2EIRF136 INTC2.EIC136.BIT.EIRF136
#define INTC2EICT136 INTC2.EIC136.BIT.EICT136
#define INTC2EIC137 INTC2.EIC137.UINT16
#define INTC2EIC137L INTC2.EIC137.UINT8[L]
#define INTC2EIC137H INTC2.EIC137.UINT8[H]
#define INTC2EIP137 INTC2.EIC137.BIT.EIP137
#define INTC2EITB137 INTC2.EIC137.BIT.EITB137
#define INTC2EIMK137 INTC2.EIC137.BIT.EIMK137
#define INTC2EIRF137 INTC2.EIC137.BIT.EIRF137
#define INTC2EICT137 INTC2.EIC137.BIT.EICT137
#define INTC2EIC138 INTC2.EIC138.UINT16
#define INTC2EIC138L INTC2.EIC138.UINT8[L]
#define INTC2EIC138H INTC2.EIC138.UINT8[H]
#define INTC2EIP138 INTC2.EIC138.BIT.EIP138
#define INTC2EITB138 INTC2.EIC138.BIT.EITB138
#define INTC2EIMK138 INTC2.EIC138.BIT.EIMK138
#define INTC2EIRF138 INTC2.EIC138.BIT.EIRF138
#define INTC2EICT138 INTC2.EIC138.BIT.EICT138
#define INTC2EIC139 INTC2.EIC139.UINT16
#define INTC2EIC139L INTC2.EIC139.UINT8[L]
#define INTC2EIC139H INTC2.EIC139.UINT8[H]
#define INTC2EIP139 INTC2.EIC139.BIT.EIP139
#define INTC2EITB139 INTC2.EIC139.BIT.EITB139
#define INTC2EIMK139 INTC2.EIC139.BIT.EIMK139
#define INTC2EIRF139 INTC2.EIC139.BIT.EIRF139
#define INTC2EICT139 INTC2.EIC139.BIT.EICT139
#define INTC2EIC140 INTC2.EIC140.UINT16
#define INTC2EIC140L INTC2.EIC140.UINT8[L]
#define INTC2EIC140H INTC2.EIC140.UINT8[H]
#define INTC2EIP140 INTC2.EIC140.BIT.EIP140
#define INTC2EITB140 INTC2.EIC140.BIT.EITB140
#define INTC2EIMK140 INTC2.EIC140.BIT.EIMK140
#define INTC2EIRF140 INTC2.EIC140.BIT.EIRF140
#define INTC2EICT140 INTC2.EIC140.BIT.EICT140
#define INTC2EIC141 INTC2.EIC141.UINT16
#define INTC2EIC141L INTC2.EIC141.UINT8[L]
#define INTC2EIC141H INTC2.EIC141.UINT8[H]
#define INTC2EIP141 INTC2.EIC141.BIT.EIP141
#define INTC2EITB141 INTC2.EIC141.BIT.EITB141
#define INTC2EIMK141 INTC2.EIC141.BIT.EIMK141
#define INTC2EIRF141 INTC2.EIC141.BIT.EIRF141
#define INTC2EICT141 INTC2.EIC141.BIT.EICT141
#define INTC2EIC142 INTC2.EIC142.UINT16
#define INTC2EIC142L INTC2.EIC142.UINT8[L]
#define INTC2EIC142H INTC2.EIC142.UINT8[H]
#define INTC2EIP142 INTC2.EIC142.BIT.EIP142
#define INTC2EITB142 INTC2.EIC142.BIT.EITB142
#define INTC2EIMK142 INTC2.EIC142.BIT.EIMK142
#define INTC2EIRF142 INTC2.EIC142.BIT.EIRF142
#define INTC2EICT142 INTC2.EIC142.BIT.EICT142
#define INTC2EIC143 INTC2.EIC143.UINT16
#define INTC2EIC143L INTC2.EIC143.UINT8[L]
#define INTC2EIC143H INTC2.EIC143.UINT8[H]
#define INTC2EIP143 INTC2.EIC143.BIT.EIP143
#define INTC2EITB143 INTC2.EIC143.BIT.EITB143
#define INTC2EIMK143 INTC2.EIC143.BIT.EIMK143
#define INTC2EIRF143 INTC2.EIC143.BIT.EIRF143
#define INTC2EICT143 INTC2.EIC143.BIT.EICT143
#define INTC2EIC144 INTC2.EIC144.UINT16
#define INTC2EIC144L INTC2.EIC144.UINT8[L]
#define INTC2EIC144H INTC2.EIC144.UINT8[H]
#define INTC2EIP144 INTC2.EIC144.BIT.EIP144
#define INTC2EITB144 INTC2.EIC144.BIT.EITB144
#define INTC2EIMK144 INTC2.EIC144.BIT.EIMK144
#define INTC2EIRF144 INTC2.EIC144.BIT.EIRF144
#define INTC2EICT144 INTC2.EIC144.BIT.EICT144
#define INTC2EIC145 INTC2.EIC145.UINT16
#define INTC2EIC145L INTC2.EIC145.UINT8[L]
#define INTC2EIC145H INTC2.EIC145.UINT8[H]
#define INTC2EIP145 INTC2.EIC145.BIT.EIP145
#define INTC2EITB145 INTC2.EIC145.BIT.EITB145
#define INTC2EIMK145 INTC2.EIC145.BIT.EIMK145
#define INTC2EIRF145 INTC2.EIC145.BIT.EIRF145
#define INTC2EICT145 INTC2.EIC145.BIT.EICT145
#define INTC2EIC146 INTC2.EIC146.UINT16
#define INTC2EIC146L INTC2.EIC146.UINT8[L]
#define INTC2EIC146H INTC2.EIC146.UINT8[H]
#define INTC2EIP146 INTC2.EIC146.BIT.EIP146
#define INTC2EITB146 INTC2.EIC146.BIT.EITB146
#define INTC2EIMK146 INTC2.EIC146.BIT.EIMK146
#define INTC2EIRF146 INTC2.EIC146.BIT.EIRF146
#define INTC2EICT146 INTC2.EIC146.BIT.EICT146
#define INTC2EIC147 INTC2.EIC147.UINT16
#define INTC2EIC147L INTC2.EIC147.UINT8[L]
#define INTC2EIC147H INTC2.EIC147.UINT8[H]
#define INTC2EIP147 INTC2.EIC147.BIT.EIP147
#define INTC2EITB147 INTC2.EIC147.BIT.EITB147
#define INTC2EIMK147 INTC2.EIC147.BIT.EIMK147
#define INTC2EIRF147 INTC2.EIC147.BIT.EIRF147
#define INTC2EICT147 INTC2.EIC147.BIT.EICT147
#define INTC2EIC148 INTC2.EIC148.UINT16
#define INTC2EIC148L INTC2.EIC148.UINT8[L]
#define INTC2EIC148H INTC2.EIC148.UINT8[H]
#define INTC2EIP148 INTC2.EIC148.BIT.EIP148
#define INTC2EITB148 INTC2.EIC148.BIT.EITB148
#define INTC2EIMK148 INTC2.EIC148.BIT.EIMK148
#define INTC2EIRF148 INTC2.EIC148.BIT.EIRF148
#define INTC2EICT148 INTC2.EIC148.BIT.EICT148
#define INTC2EIC149 INTC2.EIC149.UINT16
#define INTC2EIC149L INTC2.EIC149.UINT8[L]
#define INTC2EIC149H INTC2.EIC149.UINT8[H]
#define INTC2EIP149 INTC2.EIC149.BIT.EIP149
#define INTC2EITB149 INTC2.EIC149.BIT.EITB149
#define INTC2EIMK149 INTC2.EIC149.BIT.EIMK149
#define INTC2EIRF149 INTC2.EIC149.BIT.EIRF149
#define INTC2EICT149 INTC2.EIC149.BIT.EICT149
#define INTC2EIC150 INTC2.EIC150.UINT16
#define INTC2EIC150L INTC2.EIC150.UINT8[L]
#define INTC2EIC150H INTC2.EIC150.UINT8[H]
#define INTC2EIP150 INTC2.EIC150.BIT.EIP150
#define INTC2EITB150 INTC2.EIC150.BIT.EITB150
#define INTC2EIMK150 INTC2.EIC150.BIT.EIMK150
#define INTC2EIRF150 INTC2.EIC150.BIT.EIRF150
#define INTC2EICT150 INTC2.EIC150.BIT.EICT150
#define INTC2EIC151 INTC2.EIC151.UINT16
#define INTC2EIC151L INTC2.EIC151.UINT8[L]
#define INTC2EIC151H INTC2.EIC151.UINT8[H]
#define INTC2EIP151 INTC2.EIC151.BIT.EIP151
#define INTC2EITB151 INTC2.EIC151.BIT.EITB151
#define INTC2EIMK151 INTC2.EIC151.BIT.EIMK151
#define INTC2EIRF151 INTC2.EIC151.BIT.EIRF151
#define INTC2EICT151 INTC2.EIC151.BIT.EICT151
#define INTC2EIC152 INTC2.EIC152.UINT16
#define INTC2EIC152L INTC2.EIC152.UINT8[L]
#define INTC2EIC152H INTC2.EIC152.UINT8[H]
#define INTC2EIP152 INTC2.EIC152.BIT.EIP152
#define INTC2EITB152 INTC2.EIC152.BIT.EITB152
#define INTC2EIMK152 INTC2.EIC152.BIT.EIMK152
#define INTC2EIRF152 INTC2.EIC152.BIT.EIRF152
#define INTC2EICT152 INTC2.EIC152.BIT.EICT152
#define INTC2EIC153 INTC2.EIC153.UINT16
#define INTC2EIC153L INTC2.EIC153.UINT8[L]
#define INTC2EIC153H INTC2.EIC153.UINT8[H]
#define INTC2EIP153 INTC2.EIC153.BIT.EIP153
#define INTC2EITB153 INTC2.EIC153.BIT.EITB153
#define INTC2EIMK153 INTC2.EIC153.BIT.EIMK153
#define INTC2EIRF153 INTC2.EIC153.BIT.EIRF153
#define INTC2EICT153 INTC2.EIC153.BIT.EICT153
#define INTC2EIC154 INTC2.EIC154.UINT16
#define INTC2EIC154L INTC2.EIC154.UINT8[L]
#define INTC2EIC154H INTC2.EIC154.UINT8[H]
#define INTC2EIP154 INTC2.EIC154.BIT.EIP154
#define INTC2EITB154 INTC2.EIC154.BIT.EITB154
#define INTC2EIMK154 INTC2.EIC154.BIT.EIMK154
#define INTC2EIRF154 INTC2.EIC154.BIT.EIRF154
#define INTC2EICT154 INTC2.EIC154.BIT.EICT154
#define INTC2EIC155 INTC2.EIC155.UINT16
#define INTC2EIC155L INTC2.EIC155.UINT8[L]
#define INTC2EIC155H INTC2.EIC155.UINT8[H]
#define INTC2EIP155 INTC2.EIC155.BIT.EIP155
#define INTC2EITB155 INTC2.EIC155.BIT.EITB155
#define INTC2EIMK155 INTC2.EIC155.BIT.EIMK155
#define INTC2EIRF155 INTC2.EIC155.BIT.EIRF155
#define INTC2EICT155 INTC2.EIC155.BIT.EICT155
#define INTC2EIC156 INTC2.EIC156.UINT16
#define INTC2EIC156L INTC2.EIC156.UINT8[L]
#define INTC2EIC156H INTC2.EIC156.UINT8[H]
#define INTC2EIP156 INTC2.EIC156.BIT.EIP156
#define INTC2EITB156 INTC2.EIC156.BIT.EITB156
#define INTC2EIMK156 INTC2.EIC156.BIT.EIMK156
#define INTC2EIRF156 INTC2.EIC156.BIT.EIRF156
#define INTC2EICT156 INTC2.EIC156.BIT.EICT156
#define INTC2EIC158 INTC2.EIC158.UINT16
#define INTC2EIC158L INTC2.EIC158.UINT8[L]
#define INTC2EIC158H INTC2.EIC158.UINT8[H]
#define INTC2EIP158 INTC2.EIC158.BIT.EIP158
#define INTC2EITB158 INTC2.EIC158.BIT.EITB158
#define INTC2EIMK158 INTC2.EIC158.BIT.EIMK158
#define INTC2EIRF158 INTC2.EIC158.BIT.EIRF158
#define INTC2EICT158 INTC2.EIC158.BIT.EICT158
#define INTC2EIC159 INTC2.EIC159.UINT16
#define INTC2EIC159L INTC2.EIC159.UINT8[L]
#define INTC2EIC159H INTC2.EIC159.UINT8[H]
#define INTC2EIP159 INTC2.EIC159.BIT.EIP159
#define INTC2EITB159 INTC2.EIC159.BIT.EITB159
#define INTC2EIMK159 INTC2.EIC159.BIT.EIMK159
#define INTC2EIRF159 INTC2.EIC159.BIT.EIRF159
#define INTC2EICT159 INTC2.EIC159.BIT.EICT159
#define INTC2EIC160 INTC2.EIC160.UINT16
#define INTC2EIC160L INTC2.EIC160.UINT8[L]
#define INTC2EIC160H INTC2.EIC160.UINT8[H]
#define INTC2EIP160 INTC2.EIC160.BIT.EIP160
#define INTC2EITB160 INTC2.EIC160.BIT.EITB160
#define INTC2EIMK160 INTC2.EIC160.BIT.EIMK160
#define INTC2EIRF160 INTC2.EIC160.BIT.EIRF160
#define INTC2EICT160 INTC2.EIC160.BIT.EICT160
#define INTC2EIC161 INTC2.EIC161.UINT16
#define INTC2EIC161L INTC2.EIC161.UINT8[L]
#define INTC2EIC161H INTC2.EIC161.UINT8[H]
#define INTC2EIP161 INTC2.EIC161.BIT.EIP161
#define INTC2EITB161 INTC2.EIC161.BIT.EITB161
#define INTC2EIMK161 INTC2.EIC161.BIT.EIMK161
#define INTC2EIRF161 INTC2.EIC161.BIT.EIRF161
#define INTC2EICT161 INTC2.EIC161.BIT.EICT161
#define INTC2EIC162 INTC2.EIC162.UINT16
#define INTC2EIC162L INTC2.EIC162.UINT8[L]
#define INTC2EIC162H INTC2.EIC162.UINT8[H]
#define INTC2EIP162 INTC2.EIC162.BIT.EIP162
#define INTC2EITB162 INTC2.EIC162.BIT.EITB162
#define INTC2EIMK162 INTC2.EIC162.BIT.EIMK162
#define INTC2EIRF162 INTC2.EIC162.BIT.EIRF162
#define INTC2EICT162 INTC2.EIC162.BIT.EICT162
#define INTC2EIC163 INTC2.EIC163.UINT16
#define INTC2EIC163L INTC2.EIC163.UINT8[L]
#define INTC2EIC163H INTC2.EIC163.UINT8[H]
#define INTC2EIP163 INTC2.EIC163.BIT.EIP163
#define INTC2EITB163 INTC2.EIC163.BIT.EITB163
#define INTC2EIMK163 INTC2.EIC163.BIT.EIMK163
#define INTC2EIRF163 INTC2.EIC163.BIT.EIRF163
#define INTC2EICT163 INTC2.EIC163.BIT.EICT163
#define INTC2EIC164 INTC2.EIC164.UINT16
#define INTC2EIC164L INTC2.EIC164.UINT8[L]
#define INTC2EIC164H INTC2.EIC164.UINT8[H]
#define INTC2EIP164 INTC2.EIC164.BIT.EIP164
#define INTC2EITB164 INTC2.EIC164.BIT.EITB164
#define INTC2EIMK164 INTC2.EIC164.BIT.EIMK164
#define INTC2EIRF164 INTC2.EIC164.BIT.EIRF164
#define INTC2EICT164 INTC2.EIC164.BIT.EICT164
#define INTC2EIC165 INTC2.EIC165.UINT16
#define INTC2EIC165L INTC2.EIC165.UINT8[L]
#define INTC2EIC165H INTC2.EIC165.UINT8[H]
#define INTC2EIP165 INTC2.EIC165.BIT.EIP165
#define INTC2EITB165 INTC2.EIC165.BIT.EITB165
#define INTC2EIMK165 INTC2.EIC165.BIT.EIMK165
#define INTC2EIRF165 INTC2.EIC165.BIT.EIRF165
#define INTC2EICT165 INTC2.EIC165.BIT.EICT165
#define INTC2EIC166 INTC2.EIC166.UINT16
#define INTC2EIC166L INTC2.EIC166.UINT8[L]
#define INTC2EIC166H INTC2.EIC166.UINT8[H]
#define INTC2EIP166 INTC2.EIC166.BIT.EIP166
#define INTC2EITB166 INTC2.EIC166.BIT.EITB166
#define INTC2EIMK166 INTC2.EIC166.BIT.EIMK166
#define INTC2EIRF166 INTC2.EIC166.BIT.EIRF166
#define INTC2EICT166 INTC2.EIC166.BIT.EICT166
#define INTC2EIC167 INTC2.EIC167.UINT16
#define INTC2EIC167L INTC2.EIC167.UINT8[L]
#define INTC2EIC167H INTC2.EIC167.UINT8[H]
#define INTC2EIP167 INTC2.EIC167.BIT.EIP167
#define INTC2EITB167 INTC2.EIC167.BIT.EITB167
#define INTC2EIMK167 INTC2.EIC167.BIT.EIMK167
#define INTC2EIRF167 INTC2.EIC167.BIT.EIRF167
#define INTC2EICT167 INTC2.EIC167.BIT.EICT167
#define INTC2EIC168 INTC2.EIC168.UINT16
#define INTC2EIC168L INTC2.EIC168.UINT8[L]
#define INTC2EIC168H INTC2.EIC168.UINT8[H]
#define INTC2EIP168 INTC2.EIC168.BIT.EIP168
#define INTC2EITB168 INTC2.EIC168.BIT.EITB168
#define INTC2EIMK168 INTC2.EIC168.BIT.EIMK168
#define INTC2EIRF168 INTC2.EIC168.BIT.EIRF168
#define INTC2EICT168 INTC2.EIC168.BIT.EICT168
#define INTC2EIC169 INTC2.EIC169.UINT16
#define INTC2EIC169L INTC2.EIC169.UINT8[L]
#define INTC2EIC169H INTC2.EIC169.UINT8[H]
#define INTC2EIP169 INTC2.EIC169.BIT.EIP169
#define INTC2EITB169 INTC2.EIC169.BIT.EITB169
#define INTC2EIMK169 INTC2.EIC169.BIT.EIMK169
#define INTC2EIRF169 INTC2.EIC169.BIT.EIRF169
#define INTC2EICT169 INTC2.EIC169.BIT.EICT169
#define INTC2EIC170 INTC2.EIC170.UINT16
#define INTC2EIC170L INTC2.EIC170.UINT8[L]
#define INTC2EIC170H INTC2.EIC170.UINT8[H]
#define INTC2EIP170 INTC2.EIC170.BIT.EIP170
#define INTC2EITB170 INTC2.EIC170.BIT.EITB170
#define INTC2EIMK170 INTC2.EIC170.BIT.EIMK170
#define INTC2EIRF170 INTC2.EIC170.BIT.EIRF170
#define INTC2EICT170 INTC2.EIC170.BIT.EICT170
#define INTC2EIC171 INTC2.EIC171.UINT16
#define INTC2EIC171L INTC2.EIC171.UINT8[L]
#define INTC2EIC171H INTC2.EIC171.UINT8[H]
#define INTC2EIP171 INTC2.EIC171.BIT.EIP171
#define INTC2EITB171 INTC2.EIC171.BIT.EITB171
#define INTC2EIMK171 INTC2.EIC171.BIT.EIMK171
#define INTC2EIRF171 INTC2.EIC171.BIT.EIRF171
#define INTC2EICT171 INTC2.EIC171.BIT.EICT171
#define INTC2EIC172 INTC2.EIC172.UINT16
#define INTC2EIC172L INTC2.EIC172.UINT8[L]
#define INTC2EIC172H INTC2.EIC172.UINT8[H]
#define INTC2EIP172 INTC2.EIC172.BIT.EIP172
#define INTC2EITB172 INTC2.EIC172.BIT.EITB172
#define INTC2EIMK172 INTC2.EIC172.BIT.EIMK172
#define INTC2EIRF172 INTC2.EIC172.BIT.EIRF172
#define INTC2EICT172 INTC2.EIC172.BIT.EICT172
#define INTC2EIC173 INTC2.EIC173.UINT16
#define INTC2EIC173L INTC2.EIC173.UINT8[L]
#define INTC2EIC173H INTC2.EIC173.UINT8[H]
#define INTC2EIP173 INTC2.EIC173.BIT.EIP173
#define INTC2EITB173 INTC2.EIC173.BIT.EITB173
#define INTC2EIMK173 INTC2.EIC173.BIT.EIMK173
#define INTC2EIRF173 INTC2.EIC173.BIT.EIRF173
#define INTC2EICT173 INTC2.EIC173.BIT.EICT173
#define INTC2EIC174 INTC2.EIC174.UINT16
#define INTC2EIC174L INTC2.EIC174.UINT8[L]
#define INTC2EIC174H INTC2.EIC174.UINT8[H]
#define INTC2EIP174 INTC2.EIC174.BIT.EIP174
#define INTC2EITB174 INTC2.EIC174.BIT.EITB174
#define INTC2EIMK174 INTC2.EIC174.BIT.EIMK174
#define INTC2EIRF174 INTC2.EIC174.BIT.EIRF174
#define INTC2EICT174 INTC2.EIC174.BIT.EICT174
#define INTC2EIC175 INTC2.EIC175.UINT16
#define INTC2EIC175L INTC2.EIC175.UINT8[L]
#define INTC2EIC175H INTC2.EIC175.UINT8[H]
#define INTC2EIP175 INTC2.EIC175.BIT.EIP175
#define INTC2EITB175 INTC2.EIC175.BIT.EITB175
#define INTC2EIMK175 INTC2.EIC175.BIT.EIMK175
#define INTC2EIRF175 INTC2.EIC175.BIT.EIRF175
#define INTC2EICT175 INTC2.EIC175.BIT.EICT175
#define INTC2EIC176 INTC2.EIC176.UINT16
#define INTC2EIC176L INTC2.EIC176.UINT8[L]
#define INTC2EIC176H INTC2.EIC176.UINT8[H]
#define INTC2EIP176 INTC2.EIC176.BIT.EIP176
#define INTC2EITB176 INTC2.EIC176.BIT.EITB176
#define INTC2EIMK176 INTC2.EIC176.BIT.EIMK176
#define INTC2EIRF176 INTC2.EIC176.BIT.EIRF176
#define INTC2EICT176 INTC2.EIC176.BIT.EICT176
#define INTC2EIC177 INTC2.EIC177.UINT16
#define INTC2EIC177L INTC2.EIC177.UINT8[L]
#define INTC2EIC177H INTC2.EIC177.UINT8[H]
#define INTC2EIP177 INTC2.EIC177.BIT.EIP177
#define INTC2EITB177 INTC2.EIC177.BIT.EITB177
#define INTC2EIMK177 INTC2.EIC177.BIT.EIMK177
#define INTC2EIRF177 INTC2.EIC177.BIT.EIRF177
#define INTC2EICT177 INTC2.EIC177.BIT.EICT177
#define INTC2EIC178 INTC2.EIC178.UINT16
#define INTC2EIC178L INTC2.EIC178.UINT8[L]
#define INTC2EIC178H INTC2.EIC178.UINT8[H]
#define INTC2EIP178 INTC2.EIC178.BIT.EIP178
#define INTC2EITB178 INTC2.EIC178.BIT.EITB178
#define INTC2EIMK178 INTC2.EIC178.BIT.EIMK178
#define INTC2EIRF178 INTC2.EIC178.BIT.EIRF178
#define INTC2EICT178 INTC2.EIC178.BIT.EICT178
#define INTC2EIC179 INTC2.EIC179.UINT16
#define INTC2EIC179L INTC2.EIC179.UINT8[L]
#define INTC2EIC179H INTC2.EIC179.UINT8[H]
#define INTC2EIP179 INTC2.EIC179.BIT.EIP179
#define INTC2EITB179 INTC2.EIC179.BIT.EITB179
#define INTC2EIMK179 INTC2.EIC179.BIT.EIMK179
#define INTC2EIRF179 INTC2.EIC179.BIT.EIRF179
#define INTC2EICT179 INTC2.EIC179.BIT.EICT179
#define INTC2EIC180 INTC2.EIC180.UINT16
#define INTC2EIC180L INTC2.EIC180.UINT8[L]
#define INTC2EIC180H INTC2.EIC180.UINT8[H]
#define INTC2EIP180 INTC2.EIC180.BIT.EIP180
#define INTC2EITB180 INTC2.EIC180.BIT.EITB180
#define INTC2EIMK180 INTC2.EIC180.BIT.EIMK180
#define INTC2EIRF180 INTC2.EIC180.BIT.EIRF180
#define INTC2EICT180 INTC2.EIC180.BIT.EICT180
#define INTC2EIC181 INTC2.EIC181.UINT16
#define INTC2EIC181L INTC2.EIC181.UINT8[L]
#define INTC2EIC181H INTC2.EIC181.UINT8[H]
#define INTC2EIP181 INTC2.EIC181.BIT.EIP181
#define INTC2EITB181 INTC2.EIC181.BIT.EITB181
#define INTC2EIMK181 INTC2.EIC181.BIT.EIMK181
#define INTC2EIRF181 INTC2.EIC181.BIT.EIRF181
#define INTC2EICT181 INTC2.EIC181.BIT.EICT181
#define INTC2EIC182 INTC2.EIC182.UINT16
#define INTC2EIC182L INTC2.EIC182.UINT8[L]
#define INTC2EIC182H INTC2.EIC182.UINT8[H]
#define INTC2EIP182 INTC2.EIC182.BIT.EIP182
#define INTC2EITB182 INTC2.EIC182.BIT.EITB182
#define INTC2EIMK182 INTC2.EIC182.BIT.EIMK182
#define INTC2EIRF182 INTC2.EIC182.BIT.EIRF182
#define INTC2EICT182 INTC2.EIC182.BIT.EICT182
#define INTC2EIC183 INTC2.EIC183.UINT16
#define INTC2EIC183L INTC2.EIC183.UINT8[L]
#define INTC2EIC183H INTC2.EIC183.UINT8[H]
#define INTC2EIP183 INTC2.EIC183.BIT.EIP183
#define INTC2EITB183 INTC2.EIC183.BIT.EITB183
#define INTC2EIMK183 INTC2.EIC183.BIT.EIMK183
#define INTC2EIRF183 INTC2.EIC183.BIT.EIRF183
#define INTC2EICT183 INTC2.EIC183.BIT.EICT183
#define INTC2EIC184 INTC2.EIC184.UINT16
#define INTC2EIC184L INTC2.EIC184.UINT8[L]
#define INTC2EIC184H INTC2.EIC184.UINT8[H]
#define INTC2EIP184 INTC2.EIC184.BIT.EIP184
#define INTC2EITB184 INTC2.EIC184.BIT.EITB184
#define INTC2EIMK184 INTC2.EIC184.BIT.EIMK184
#define INTC2EIRF184 INTC2.EIC184.BIT.EIRF184
#define INTC2EICT184 INTC2.EIC184.BIT.EICT184
#define INTC2EIC185 INTC2.EIC185.UINT16
#define INTC2EIC185L INTC2.EIC185.UINT8[L]
#define INTC2EIC185H INTC2.EIC185.UINT8[H]
#define INTC2EIP185 INTC2.EIC185.BIT.EIP185
#define INTC2EITB185 INTC2.EIC185.BIT.EITB185
#define INTC2EIMK185 INTC2.EIC185.BIT.EIMK185
#define INTC2EIRF185 INTC2.EIC185.BIT.EIRF185
#define INTC2EICT185 INTC2.EIC185.BIT.EICT185
#define INTC2EIC186 INTC2.EIC186.UINT16
#define INTC2EIC186L INTC2.EIC186.UINT8[L]
#define INTC2EIC186H INTC2.EIC186.UINT8[H]
#define INTC2EIP186 INTC2.EIC186.BIT.EIP186
#define INTC2EITB186 INTC2.EIC186.BIT.EITB186
#define INTC2EIMK186 INTC2.EIC186.BIT.EIMK186
#define INTC2EIRF186 INTC2.EIC186.BIT.EIRF186
#define INTC2EICT186 INTC2.EIC186.BIT.EICT186
#define INTC2EIC187 INTC2.EIC187.UINT16
#define INTC2EIC187L INTC2.EIC187.UINT8[L]
#define INTC2EIC187H INTC2.EIC187.UINT8[H]
#define INTC2EIP187 INTC2.EIC187.BIT.EIP187
#define INTC2EITB187 INTC2.EIC187.BIT.EITB187
#define INTC2EIMK187 INTC2.EIC187.BIT.EIMK187
#define INTC2EIRF187 INTC2.EIC187.BIT.EIRF187
#define INTC2EICT187 INTC2.EIC187.BIT.EICT187
#define INTC2EIC188 INTC2.EIC188.UINT16
#define INTC2EIC188L INTC2.EIC188.UINT8[L]
#define INTC2EIC188H INTC2.EIC188.UINT8[H]
#define INTC2EIP188 INTC2.EIC188.BIT.EIP188
#define INTC2EITB188 INTC2.EIC188.BIT.EITB188
#define INTC2EIMK188 INTC2.EIC188.BIT.EIMK188
#define INTC2EIRF188 INTC2.EIC188.BIT.EIRF188
#define INTC2EICT188 INTC2.EIC188.BIT.EICT188
#define INTC2EIC189 INTC2.EIC189.UINT16
#define INTC2EIC189L INTC2.EIC189.UINT8[L]
#define INTC2EIC189H INTC2.EIC189.UINT8[H]
#define INTC2EIP189 INTC2.EIC189.BIT.EIP189
#define INTC2EITB189 INTC2.EIC189.BIT.EITB189
#define INTC2EIMK189 INTC2.EIC189.BIT.EIMK189
#define INTC2EIRF189 INTC2.EIC189.BIT.EIRF189
#define INTC2EICT189 INTC2.EIC189.BIT.EICT189
#define INTC2EIC190 INTC2.EIC190.UINT16
#define INTC2EIC190L INTC2.EIC190.UINT8[L]
#define INTC2EIC190H INTC2.EIC190.UINT8[H]
#define INTC2EIP190 INTC2.EIC190.BIT.EIP190
#define INTC2EITB190 INTC2.EIC190.BIT.EITB190
#define INTC2EIMK190 INTC2.EIC190.BIT.EIMK190
#define INTC2EIRF190 INTC2.EIC190.BIT.EIRF190
#define INTC2EICT190 INTC2.EIC190.BIT.EICT190
#define INTC2EIC194 INTC2.EIC194.UINT16
#define INTC2EIC194L INTC2.EIC194.UINT8[L]
#define INTC2EIC194H INTC2.EIC194.UINT8[H]
#define INTC2EIP194 INTC2.EIC194.BIT.EIP194
#define INTC2EITB194 INTC2.EIC194.BIT.EITB194
#define INTC2EIMK194 INTC2.EIC194.BIT.EIMK194
#define INTC2EIRF194 INTC2.EIC194.BIT.EIRF194
#define INTC2EICT194 INTC2.EIC194.BIT.EICT194
#define INTC2EIC195 INTC2.EIC195.UINT16
#define INTC2EIC195L INTC2.EIC195.UINT8[L]
#define INTC2EIC195H INTC2.EIC195.UINT8[H]
#define INTC2EIP195 INTC2.EIC195.BIT.EIP195
#define INTC2EITB195 INTC2.EIC195.BIT.EITB195
#define INTC2EIMK195 INTC2.EIC195.BIT.EIMK195
#define INTC2EIRF195 INTC2.EIC195.BIT.EIRF195
#define INTC2EICT195 INTC2.EIC195.BIT.EICT195
#define INTC2EIC196 INTC2.EIC196.UINT16
#define INTC2EIC196L INTC2.EIC196.UINT8[L]
#define INTC2EIC196H INTC2.EIC196.UINT8[H]
#define INTC2EIP196 INTC2.EIC196.BIT.EIP196
#define INTC2EITB196 INTC2.EIC196.BIT.EITB196
#define INTC2EIMK196 INTC2.EIC196.BIT.EIMK196
#define INTC2EIRF196 INTC2.EIC196.BIT.EIRF196
#define INTC2EICT196 INTC2.EIC196.BIT.EICT196
#define INTC2EIC197 INTC2.EIC197.UINT16
#define INTC2EIC197L INTC2.EIC197.UINT8[L]
#define INTC2EIC197H INTC2.EIC197.UINT8[H]
#define INTC2EIP197 INTC2.EIC197.BIT.EIP197
#define INTC2EITB197 INTC2.EIC197.BIT.EITB197
#define INTC2EIMK197 INTC2.EIC197.BIT.EIMK197
#define INTC2EIRF197 INTC2.EIC197.BIT.EIRF197
#define INTC2EICT197 INTC2.EIC197.BIT.EICT197
#define INTC2EIC198 INTC2.EIC198.UINT16
#define INTC2EIC198L INTC2.EIC198.UINT8[L]
#define INTC2EIC198H INTC2.EIC198.UINT8[H]
#define INTC2EIP198 INTC2.EIC198.BIT.EIP198
#define INTC2EITB198 INTC2.EIC198.BIT.EITB198
#define INTC2EIMK198 INTC2.EIC198.BIT.EIMK198
#define INTC2EIRF198 INTC2.EIC198.BIT.EIRF198
#define INTC2EICT198 INTC2.EIC198.BIT.EICT198
#define INTC2EIC199 INTC2.EIC199.UINT16
#define INTC2EIC199L INTC2.EIC199.UINT8[L]
#define INTC2EIC199H INTC2.EIC199.UINT8[H]
#define INTC2EIP199 INTC2.EIC199.BIT.EIP199
#define INTC2EITB199 INTC2.EIC199.BIT.EITB199
#define INTC2EIMK199 INTC2.EIC199.BIT.EIMK199
#define INTC2EIRF199 INTC2.EIC199.BIT.EIRF199
#define INTC2EICT199 INTC2.EIC199.BIT.EICT199
#define INTC2EIC200 INTC2.EIC200.UINT16
#define INTC2EIC200L INTC2.EIC200.UINT8[L]
#define INTC2EIC200H INTC2.EIC200.UINT8[H]
#define INTC2EIP200 INTC2.EIC200.BIT.EIP200
#define INTC2EITB200 INTC2.EIC200.BIT.EITB200
#define INTC2EIMK200 INTC2.EIC200.BIT.EIMK200
#define INTC2EIRF200 INTC2.EIC200.BIT.EIRF200
#define INTC2EICT200 INTC2.EIC200.BIT.EICT200
#define INTC2EIC201 INTC2.EIC201.UINT16
#define INTC2EIC201L INTC2.EIC201.UINT8[L]
#define INTC2EIC201H INTC2.EIC201.UINT8[H]
#define INTC2EIP201 INTC2.EIC201.BIT.EIP201
#define INTC2EITB201 INTC2.EIC201.BIT.EITB201
#define INTC2EIMK201 INTC2.EIC201.BIT.EIMK201
#define INTC2EIRF201 INTC2.EIC201.BIT.EIRF201
#define INTC2EICT201 INTC2.EIC201.BIT.EICT201
#define INTC2EIC202 INTC2.EIC202.UINT16
#define INTC2EIC202L INTC2.EIC202.UINT8[L]
#define INTC2EIC202H INTC2.EIC202.UINT8[H]
#define INTC2EIP202 INTC2.EIC202.BIT.EIP202
#define INTC2EITB202 INTC2.EIC202.BIT.EITB202
#define INTC2EIMK202 INTC2.EIC202.BIT.EIMK202
#define INTC2EIRF202 INTC2.EIC202.BIT.EIRF202
#define INTC2EICT202 INTC2.EIC202.BIT.EICT202
#define INTC2EIC203 INTC2.EIC203.UINT16
#define INTC2EIC203L INTC2.EIC203.UINT8[L]
#define INTC2EIC203H INTC2.EIC203.UINT8[H]
#define INTC2EIP203 INTC2.EIC203.BIT.EIP203
#define INTC2EITB203 INTC2.EIC203.BIT.EITB203
#define INTC2EIMK203 INTC2.EIC203.BIT.EIMK203
#define INTC2EIRF203 INTC2.EIC203.BIT.EIRF203
#define INTC2EICT203 INTC2.EIC203.BIT.EICT203
#define INTC2EIC204 INTC2.EIC204.UINT16
#define INTC2EIC204L INTC2.EIC204.UINT8[L]
#define INTC2EIC204H INTC2.EIC204.UINT8[H]
#define INTC2EIP204 INTC2.EIC204.BIT.EIP204
#define INTC2EITB204 INTC2.EIC204.BIT.EITB204
#define INTC2EIMK204 INTC2.EIC204.BIT.EIMK204
#define INTC2EIRF204 INTC2.EIC204.BIT.EIRF204
#define INTC2EICT204 INTC2.EIC204.BIT.EICT204
#define INTC2EIC218 INTC2.EIC218.UINT16
#define INTC2EIC218L INTC2.EIC218.UINT8[L]
#define INTC2EIC218H INTC2.EIC218.UINT8[H]
#define INTC2EIP218 INTC2.EIC218.BIT.EIP218
#define INTC2EITB218 INTC2.EIC218.BIT.EITB218
#define INTC2EIMK218 INTC2.EIC218.BIT.EIMK218
#define INTC2EIRF218 INTC2.EIC218.BIT.EIRF218
#define INTC2EICT218 INTC2.EIC218.BIT.EICT218
#define INTC2EIC219 INTC2.EIC219.UINT16
#define INTC2EIC219L INTC2.EIC219.UINT8[L]
#define INTC2EIC219H INTC2.EIC219.UINT8[H]
#define INTC2EIP219 INTC2.EIC219.BIT.EIP219
#define INTC2EITB219 INTC2.EIC219.BIT.EITB219
#define INTC2EIMK219 INTC2.EIC219.BIT.EIMK219
#define INTC2EIRF219 INTC2.EIC219.BIT.EIRF219
#define INTC2EICT219 INTC2.EIC219.BIT.EICT219
#define INTC2EIC220 INTC2.EIC220.UINT16
#define INTC2EIC220L INTC2.EIC220.UINT8[L]
#define INTC2EIC220H INTC2.EIC220.UINT8[H]
#define INTC2EIP220 INTC2.EIC220.BIT.EIP220
#define INTC2EITB220 INTC2.EIC220.BIT.EITB220
#define INTC2EIMK220 INTC2.EIC220.BIT.EIMK220
#define INTC2EIRF220 INTC2.EIC220.BIT.EIRF220
#define INTC2EICT220 INTC2.EIC220.BIT.EICT220
#define INTC2EIC221 INTC2.EIC221.UINT16
#define INTC2EIC221L INTC2.EIC221.UINT8[L]
#define INTC2EIC221H INTC2.EIC221.UINT8[H]
#define INTC2EIP221 INTC2.EIC221.BIT.EIP221
#define INTC2EITB221 INTC2.EIC221.BIT.EITB221
#define INTC2EIMK221 INTC2.EIC221.BIT.EIMK221
#define INTC2EIRF221 INTC2.EIC221.BIT.EIRF221
#define INTC2EICT221 INTC2.EIC221.BIT.EICT221
#define INTC2EIC226 INTC2.EIC226.UINT16
#define INTC2EIC226L INTC2.EIC226.UINT8[L]
#define INTC2EIC226H INTC2.EIC226.UINT8[H]
#define INTC2EIP226 INTC2.EIC226.BIT.EIP226
#define INTC2EITB226 INTC2.EIC226.BIT.EITB226
#define INTC2EIMK226 INTC2.EIC226.BIT.EIMK226
#define INTC2EIRF226 INTC2.EIC226.BIT.EIRF226
#define INTC2EICT226 INTC2.EIC226.BIT.EICT226
#define INTC2EIC227 INTC2.EIC227.UINT16
#define INTC2EIC227L INTC2.EIC227.UINT8[L]
#define INTC2EIC227H INTC2.EIC227.UINT8[H]
#define INTC2EIP227 INTC2.EIC227.BIT.EIP227
#define INTC2EITB227 INTC2.EIC227.BIT.EITB227
#define INTC2EIMK227 INTC2.EIC227.BIT.EIMK227
#define INTC2EIRF227 INTC2.EIC227.BIT.EIRF227
#define INTC2EICT227 INTC2.EIC227.BIT.EICT227
#define INTC2EIC228 INTC2.EIC228.UINT16
#define INTC2EIC228L INTC2.EIC228.UINT8[L]
#define INTC2EIC228H INTC2.EIC228.UINT8[H]
#define INTC2EIP228 INTC2.EIC228.BIT.EIP228
#define INTC2EITB228 INTC2.EIC228.BIT.EITB228
#define INTC2EIMK228 INTC2.EIC228.BIT.EIMK228
#define INTC2EIRF228 INTC2.EIC228.BIT.EIRF228
#define INTC2EICT228 INTC2.EIC228.BIT.EICT228
#define INTC2EIC229 INTC2.EIC229.UINT16
#define INTC2EIC229L INTC2.EIC229.UINT8[L]
#define INTC2EIC229H INTC2.EIC229.UINT8[H]
#define INTC2EIP229 INTC2.EIC229.BIT.EIP229
#define INTC2EITB229 INTC2.EIC229.BIT.EITB229
#define INTC2EIMK229 INTC2.EIC229.BIT.EIMK229
#define INTC2EIRF229 INTC2.EIC229.BIT.EIRF229
#define INTC2EICT229 INTC2.EIC229.BIT.EICT229
#define INTC2EIC230 INTC2.EIC230.UINT16
#define INTC2EIC230L INTC2.EIC230.UINT8[L]
#define INTC2EIC230H INTC2.EIC230.UINT8[H]
#define INTC2EIP230 INTC2.EIC230.BIT.EIP230
#define INTC2EITB230 INTC2.EIC230.BIT.EITB230
#define INTC2EIMK230 INTC2.EIC230.BIT.EIMK230
#define INTC2EIRF230 INTC2.EIC230.BIT.EIRF230
#define INTC2EICT230 INTC2.EIC230.BIT.EICT230
#define INTC2EIC231 INTC2.EIC231.UINT16
#define INTC2EIC231L INTC2.EIC231.UINT8[L]
#define INTC2EIC231H INTC2.EIC231.UINT8[H]
#define INTC2EIP231 INTC2.EIC231.BIT.EIP231
#define INTC2EITB231 INTC2.EIC231.BIT.EITB231
#define INTC2EIMK231 INTC2.EIC231.BIT.EIMK231
#define INTC2EIRF231 INTC2.EIC231.BIT.EIRF231
#define INTC2EICT231 INTC2.EIC231.BIT.EICT231
#define INTC2EIC232 INTC2.EIC232.UINT16
#define INTC2EIC232L INTC2.EIC232.UINT8[L]
#define INTC2EIC232H INTC2.EIC232.UINT8[H]
#define INTC2EIP232 INTC2.EIC232.BIT.EIP232
#define INTC2EITB232 INTC2.EIC232.BIT.EITB232
#define INTC2EIMK232 INTC2.EIC232.BIT.EIMK232
#define INTC2EIRF232 INTC2.EIC232.BIT.EIRF232
#define INTC2EICT232 INTC2.EIC232.BIT.EICT232
#define INTC2EIC233 INTC2.EIC233.UINT16
#define INTC2EIC233L INTC2.EIC233.UINT8[L]
#define INTC2EIC233H INTC2.EIC233.UINT8[H]
#define INTC2EIP233 INTC2.EIC233.BIT.EIP233
#define INTC2EITB233 INTC2.EIC233.BIT.EITB233
#define INTC2EIMK233 INTC2.EIC233.BIT.EIMK233
#define INTC2EIRF233 INTC2.EIC233.BIT.EIRF233
#define INTC2EICT233 INTC2.EIC233.BIT.EICT233
#define INTC2EIC234 INTC2.EIC234.UINT16
#define INTC2EIC234L INTC2.EIC234.UINT8[L]
#define INTC2EIC234H INTC2.EIC234.UINT8[H]
#define INTC2EIP234 INTC2.EIC234.BIT.EIP234
#define INTC2EITB234 INTC2.EIC234.BIT.EITB234
#define INTC2EIMK234 INTC2.EIC234.BIT.EIMK234
#define INTC2EIRF234 INTC2.EIC234.BIT.EIRF234
#define INTC2EICT234 INTC2.EIC234.BIT.EICT234
#define INTC2EIC235 INTC2.EIC235.UINT16
#define INTC2EIC235L INTC2.EIC235.UINT8[L]
#define INTC2EIC235H INTC2.EIC235.UINT8[H]
#define INTC2EIP235 INTC2.EIC235.BIT.EIP235
#define INTC2EITB235 INTC2.EIC235.BIT.EITB235
#define INTC2EIMK235 INTC2.EIC235.BIT.EIMK235
#define INTC2EIRF235 INTC2.EIC235.BIT.EIRF235
#define INTC2EICT235 INTC2.EIC235.BIT.EICT235
#define INTC2EIC236 INTC2.EIC236.UINT16
#define INTC2EIC236L INTC2.EIC236.UINT8[L]
#define INTC2EIC236H INTC2.EIC236.UINT8[H]
#define INTC2EIP236 INTC2.EIC236.BIT.EIP236
#define INTC2EITB236 INTC2.EIC236.BIT.EITB236
#define INTC2EIMK236 INTC2.EIC236.BIT.EIMK236
#define INTC2EIRF236 INTC2.EIC236.BIT.EIRF236
#define INTC2EICT236 INTC2.EIC236.BIT.EICT236
#define INTC2EIC237 INTC2.EIC237.UINT16
#define INTC2EIC237L INTC2.EIC237.UINT8[L]
#define INTC2EIC237H INTC2.EIC237.UINT8[H]
#define INTC2EIP237 INTC2.EIC237.BIT.EIP237
#define INTC2EITB237 INTC2.EIC237.BIT.EITB237
#define INTC2EIMK237 INTC2.EIC237.BIT.EIMK237
#define INTC2EIRF237 INTC2.EIC237.BIT.EIRF237
#define INTC2EICT237 INTC2.EIC237.BIT.EICT237
#define INTC2EIC238 INTC2.EIC238.UINT16
#define INTC2EIC238L INTC2.EIC238.UINT8[L]
#define INTC2EIC238H INTC2.EIC238.UINT8[H]
#define INTC2EIP238 INTC2.EIC238.BIT.EIP238
#define INTC2EITB238 INTC2.EIC238.BIT.EITB238
#define INTC2EIMK238 INTC2.EIC238.BIT.EIMK238
#define INTC2EIRF238 INTC2.EIC238.BIT.EIRF238
#define INTC2EICT238 INTC2.EIC238.BIT.EICT238
#define INTC2EIC239 INTC2.EIC239.UINT16
#define INTC2EIC239L INTC2.EIC239.UINT8[L]
#define INTC2EIC239H INTC2.EIC239.UINT8[H]
#define INTC2EIP239 INTC2.EIC239.BIT.EIP239
#define INTC2EITB239 INTC2.EIC239.BIT.EITB239
#define INTC2EIMK239 INTC2.EIC239.BIT.EIMK239
#define INTC2EIRF239 INTC2.EIC239.BIT.EIRF239
#define INTC2EICT239 INTC2.EIC239.BIT.EICT239
#define INTC2EIC240 INTC2.EIC240.UINT16
#define INTC2EIC240L INTC2.EIC240.UINT8[L]
#define INTC2EIC240H INTC2.EIC240.UINT8[H]
#define INTC2EIP240 INTC2.EIC240.BIT.EIP240
#define INTC2EITB240 INTC2.EIC240.BIT.EITB240
#define INTC2EIMK240 INTC2.EIC240.BIT.EIMK240
#define INTC2EIRF240 INTC2.EIC240.BIT.EIRF240
#define INTC2EICT240 INTC2.EIC240.BIT.EICT240
#define INTC2EIC241 INTC2.EIC241.UINT16
#define INTC2EIC241L INTC2.EIC241.UINT8[L]
#define INTC2EIC241H INTC2.EIC241.UINT8[H]
#define INTC2EIP241 INTC2.EIC241.BIT.EIP241
#define INTC2EITB241 INTC2.EIC241.BIT.EITB241
#define INTC2EIMK241 INTC2.EIC241.BIT.EIMK241
#define INTC2EIRF241 INTC2.EIC241.BIT.EIRF241
#define INTC2EICT241 INTC2.EIC241.BIT.EICT241
#define INTC2EIC242 INTC2.EIC242.UINT16
#define INTC2EIC242L INTC2.EIC242.UINT8[L]
#define INTC2EIC242H INTC2.EIC242.UINT8[H]
#define INTC2EIP242 INTC2.EIC242.BIT.EIP242
#define INTC2EITB242 INTC2.EIC242.BIT.EITB242
#define INTC2EIMK242 INTC2.EIC242.BIT.EIMK242
#define INTC2EIRF242 INTC2.EIC242.BIT.EIRF242
#define INTC2EICT242 INTC2.EIC242.BIT.EICT242
#define INTC2EIC243 INTC2.EIC243.UINT16
#define INTC2EIC243L INTC2.EIC243.UINT8[L]
#define INTC2EIC243H INTC2.EIC243.UINT8[H]
#define INTC2EIP243 INTC2.EIC243.BIT.EIP243
#define INTC2EITB243 INTC2.EIC243.BIT.EITB243
#define INTC2EIMK243 INTC2.EIC243.BIT.EIMK243
#define INTC2EIRF243 INTC2.EIC243.BIT.EIRF243
#define INTC2EICT243 INTC2.EIC243.BIT.EICT243
#define INTC2EIC244 INTC2.EIC244.UINT16
#define INTC2EIC244L INTC2.EIC244.UINT8[L]
#define INTC2EIC244H INTC2.EIC244.UINT8[H]
#define INTC2EIP244 INTC2.EIC244.BIT.EIP244
#define INTC2EITB244 INTC2.EIC244.BIT.EITB244
#define INTC2EIMK244 INTC2.EIC244.BIT.EIMK244
#define INTC2EIRF244 INTC2.EIC244.BIT.EIRF244
#define INTC2EICT244 INTC2.EIC244.BIT.EICT244
#define INTC2EIC245 INTC2.EIC245.UINT16
#define INTC2EIC245L INTC2.EIC245.UINT8[L]
#define INTC2EIC245H INTC2.EIC245.UINT8[H]
#define INTC2EIP245 INTC2.EIC245.BIT.EIP245
#define INTC2EITB245 INTC2.EIC245.BIT.EITB245
#define INTC2EIMK245 INTC2.EIC245.BIT.EIMK245
#define INTC2EIRF245 INTC2.EIC245.BIT.EIRF245
#define INTC2EICT245 INTC2.EIC245.BIT.EICT245
#define INTC2EIC246 INTC2.EIC246.UINT16
#define INTC2EIC246L INTC2.EIC246.UINT8[L]
#define INTC2EIC246H INTC2.EIC246.UINT8[H]
#define INTC2EIP246 INTC2.EIC246.BIT.EIP246
#define INTC2EITB246 INTC2.EIC246.BIT.EITB246
#define INTC2EIMK246 INTC2.EIC246.BIT.EIMK246
#define INTC2EIRF246 INTC2.EIC246.BIT.EIRF246
#define INTC2EICT246 INTC2.EIC246.BIT.EICT246
#define INTC2EIC247 INTC2.EIC247.UINT16
#define INTC2EIC247L INTC2.EIC247.UINT8[L]
#define INTC2EIC247H INTC2.EIC247.UINT8[H]
#define INTC2EIP247 INTC2.EIC247.BIT.EIP247
#define INTC2EITB247 INTC2.EIC247.BIT.EITB247
#define INTC2EIMK247 INTC2.EIC247.BIT.EIMK247
#define INTC2EIRF247 INTC2.EIC247.BIT.EIRF247
#define INTC2EICT247 INTC2.EIC247.BIT.EICT247
#define INTC2EIC248 INTC2.EIC248.UINT16
#define INTC2EIC248L INTC2.EIC248.UINT8[L]
#define INTC2EIC248H INTC2.EIC248.UINT8[H]
#define INTC2EIP248 INTC2.EIC248.BIT.EIP248
#define INTC2EITB248 INTC2.EIC248.BIT.EITB248
#define INTC2EIMK248 INTC2.EIC248.BIT.EIMK248
#define INTC2EIRF248 INTC2.EIC248.BIT.EIRF248
#define INTC2EICT248 INTC2.EIC248.BIT.EICT248
#define INTC2EIC249 INTC2.EIC249.UINT16
#define INTC2EIC249L INTC2.EIC249.UINT8[L]
#define INTC2EIC249H INTC2.EIC249.UINT8[H]
#define INTC2EIP249 INTC2.EIC249.BIT.EIP249
#define INTC2EITB249 INTC2.EIC249.BIT.EITB249
#define INTC2EIMK249 INTC2.EIC249.BIT.EIMK249
#define INTC2EIRF249 INTC2.EIC249.BIT.EIRF249
#define INTC2EICT249 INTC2.EIC249.BIT.EICT249
#define INTC2EIC250 INTC2.EIC250.UINT16
#define INTC2EIC250L INTC2.EIC250.UINT8[L]
#define INTC2EIC250H INTC2.EIC250.UINT8[H]
#define INTC2EIP250 INTC2.EIC250.BIT.EIP250
#define INTC2EITB250 INTC2.EIC250.BIT.EITB250
#define INTC2EIMK250 INTC2.EIC250.BIT.EIMK250
#define INTC2EIRF250 INTC2.EIC250.BIT.EIRF250
#define INTC2EICT250 INTC2.EIC250.BIT.EICT250
#define INTC2EIC251 INTC2.EIC251.UINT16
#define INTC2EIC251L INTC2.EIC251.UINT8[L]
#define INTC2EIC251H INTC2.EIC251.UINT8[H]
#define INTC2EIP251 INTC2.EIC251.BIT.EIP251
#define INTC2EITB251 INTC2.EIC251.BIT.EITB251
#define INTC2EIMK251 INTC2.EIC251.BIT.EIMK251
#define INTC2EIRF251 INTC2.EIC251.BIT.EIRF251
#define INTC2EICT251 INTC2.EIC251.BIT.EICT251
#define INTC2EIC252 INTC2.EIC252.UINT16
#define INTC2EIC252L INTC2.EIC252.UINT8[L]
#define INTC2EIC252H INTC2.EIC252.UINT8[H]
#define INTC2EIP252 INTC2.EIC252.BIT.EIP252
#define INTC2EITB252 INTC2.EIC252.BIT.EITB252
#define INTC2EIMK252 INTC2.EIC252.BIT.EIMK252
#define INTC2EIRF252 INTC2.EIC252.BIT.EIRF252
#define INTC2EICT252 INTC2.EIC252.BIT.EICT252
#define INTC2EIC253 INTC2.EIC253.UINT16
#define INTC2EIC253L INTC2.EIC253.UINT8[L]
#define INTC2EIC253H INTC2.EIC253.UINT8[H]
#define INTC2EIP253 INTC2.EIC253.BIT.EIP253
#define INTC2EITB253 INTC2.EIC253.BIT.EITB253
#define INTC2EIMK253 INTC2.EIC253.BIT.EIMK253
#define INTC2EIRF253 INTC2.EIC253.BIT.EIRF253
#define INTC2EICT253 INTC2.EIC253.BIT.EICT253
#define INTC2EIC254 INTC2.EIC254.UINT16
#define INTC2EIC254L INTC2.EIC254.UINT8[L]
#define INTC2EIC254H INTC2.EIC254.UINT8[H]
#define INTC2EIP254 INTC2.EIC254.BIT.EIP254
#define INTC2EITB254 INTC2.EIC254.BIT.EITB254
#define INTC2EIMK254 INTC2.EIC254.BIT.EIMK254
#define INTC2EIRF254 INTC2.EIC254.BIT.EIRF254
#define INTC2EICT254 INTC2.EIC254.BIT.EICT254
#define INTC2EIC256 INTC2.EIC256.UINT16
#define INTC2EIC256L INTC2.EIC256.UINT8[L]
#define INTC2EIC256H INTC2.EIC256.UINT8[H]
#define INTC2EIP256 INTC2.EIC256.BIT.EIP256
#define INTC2EITB256 INTC2.EIC256.BIT.EITB256
#define INTC2EIMK256 INTC2.EIC256.BIT.EIMK256
#define INTC2EIRF256 INTC2.EIC256.BIT.EIRF256
#define INTC2EICT256 INTC2.EIC256.BIT.EICT256
#define INTC2EIC257 INTC2.EIC257.UINT16
#define INTC2EIC257L INTC2.EIC257.UINT8[L]
#define INTC2EIC257H INTC2.EIC257.UINT8[H]
#define INTC2EIP257 INTC2.EIC257.BIT.EIP257
#define INTC2EITB257 INTC2.EIC257.BIT.EITB257
#define INTC2EIMK257 INTC2.EIC257.BIT.EIMK257
#define INTC2EIRF257 INTC2.EIC257.BIT.EIRF257
#define INTC2EICT257 INTC2.EIC257.BIT.EICT257
#define INTC2EIC258 INTC2.EIC258.UINT16
#define INTC2EIC258L INTC2.EIC258.UINT8[L]
#define INTC2EIC258H INTC2.EIC258.UINT8[H]
#define INTC2EIP258 INTC2.EIC258.BIT.EIP258
#define INTC2EITB258 INTC2.EIC258.BIT.EITB258
#define INTC2EIMK258 INTC2.EIC258.BIT.EIMK258
#define INTC2EIRF258 INTC2.EIC258.BIT.EIRF258
#define INTC2EICT258 INTC2.EIC258.BIT.EICT258
#define INTC2EIC259 INTC2.EIC259.UINT16
#define INTC2EIC259L INTC2.EIC259.UINT8[L]
#define INTC2EIC259H INTC2.EIC259.UINT8[H]
#define INTC2EIP259 INTC2.EIC259.BIT.EIP259
#define INTC2EITB259 INTC2.EIC259.BIT.EITB259
#define INTC2EIMK259 INTC2.EIC259.BIT.EIMK259
#define INTC2EIRF259 INTC2.EIC259.BIT.EIRF259
#define INTC2EICT259 INTC2.EIC259.BIT.EICT259
#define INTC2EIC260 INTC2.EIC260.UINT16
#define INTC2EIC260L INTC2.EIC260.UINT8[L]
#define INTC2EIC260H INTC2.EIC260.UINT8[H]
#define INTC2EIP260 INTC2.EIC260.BIT.EIP260
#define INTC2EITB260 INTC2.EIC260.BIT.EITB260
#define INTC2EIMK260 INTC2.EIC260.BIT.EIMK260
#define INTC2EIRF260 INTC2.EIC260.BIT.EIRF260
#define INTC2EICT260 INTC2.EIC260.BIT.EICT260
#define INTC2EIC261 INTC2.EIC261.UINT16
#define INTC2EIC261L INTC2.EIC261.UINT8[L]
#define INTC2EIC261H INTC2.EIC261.UINT8[H]
#define INTC2EIP261 INTC2.EIC261.BIT.EIP261
#define INTC2EITB261 INTC2.EIC261.BIT.EITB261
#define INTC2EIMK261 INTC2.EIC261.BIT.EIMK261
#define INTC2EIRF261 INTC2.EIC261.BIT.EIRF261
#define INTC2EICT261 INTC2.EIC261.BIT.EICT261
#define INTC2EIC262 INTC2.EIC262.UINT16
#define INTC2EIC262L INTC2.EIC262.UINT8[L]
#define INTC2EIC262H INTC2.EIC262.UINT8[H]
#define INTC2EIP262 INTC2.EIC262.BIT.EIP262
#define INTC2EITB262 INTC2.EIC262.BIT.EITB262
#define INTC2EIMK262 INTC2.EIC262.BIT.EIMK262
#define INTC2EIRF262 INTC2.EIC262.BIT.EIRF262
#define INTC2EICT262 INTC2.EIC262.BIT.EICT262
#define INTC2EIC263 INTC2.EIC263.UINT16
#define INTC2EIC263L INTC2.EIC263.UINT8[L]
#define INTC2EIC263H INTC2.EIC263.UINT8[H]
#define INTC2EIP263 INTC2.EIC263.BIT.EIP263
#define INTC2EITB263 INTC2.EIC263.BIT.EITB263
#define INTC2EIMK263 INTC2.EIC263.BIT.EIMK263
#define INTC2EIRF263 INTC2.EIC263.BIT.EIRF263
#define INTC2EICT263 INTC2.EIC263.BIT.EICT263
#define INTC2EIC264 INTC2.EIC264.UINT16
#define INTC2EIC264L INTC2.EIC264.UINT8[L]
#define INTC2EIC264H INTC2.EIC264.UINT8[H]
#define INTC2EIP264 INTC2.EIC264.BIT.EIP264
#define INTC2EITB264 INTC2.EIC264.BIT.EITB264
#define INTC2EIMK264 INTC2.EIC264.BIT.EIMK264
#define INTC2EIRF264 INTC2.EIC264.BIT.EIRF264
#define INTC2EICT264 INTC2.EIC264.BIT.EICT264
#define INTC2EIC265 INTC2.EIC265.UINT16
#define INTC2EIC265L INTC2.EIC265.UINT8[L]
#define INTC2EIC265H INTC2.EIC265.UINT8[H]
#define INTC2EIP265 INTC2.EIC265.BIT.EIP265
#define INTC2EITB265 INTC2.EIC265.BIT.EITB265
#define INTC2EIMK265 INTC2.EIC265.BIT.EIMK265
#define INTC2EIRF265 INTC2.EIC265.BIT.EIRF265
#define INTC2EICT265 INTC2.EIC265.BIT.EICT265
#define INTC2EIC266 INTC2.EIC266.UINT16
#define INTC2EIC266L INTC2.EIC266.UINT8[L]
#define INTC2EIC266H INTC2.EIC266.UINT8[H]
#define INTC2EIP266 INTC2.EIC266.BIT.EIP266
#define INTC2EITB266 INTC2.EIC266.BIT.EITB266
#define INTC2EIMK266 INTC2.EIC266.BIT.EIMK266
#define INTC2EIRF266 INTC2.EIC266.BIT.EIRF266
#define INTC2EICT266 INTC2.EIC266.BIT.EICT266
#define INTC2EIC267 INTC2.EIC267.UINT16
#define INTC2EIC267L INTC2.EIC267.UINT8[L]
#define INTC2EIC267H INTC2.EIC267.UINT8[H]
#define INTC2EIP267 INTC2.EIC267.BIT.EIP267
#define INTC2EITB267 INTC2.EIC267.BIT.EITB267
#define INTC2EIMK267 INTC2.EIC267.BIT.EIMK267
#define INTC2EIRF267 INTC2.EIC267.BIT.EIRF267
#define INTC2EICT267 INTC2.EIC267.BIT.EICT267
#define INTC2EIC268 INTC2.EIC268.UINT16
#define INTC2EIC268L INTC2.EIC268.UINT8[L]
#define INTC2EIC268H INTC2.EIC268.UINT8[H]
#define INTC2EIP268 INTC2.EIC268.BIT.EIP268
#define INTC2EITB268 INTC2.EIC268.BIT.EITB268
#define INTC2EIMK268 INTC2.EIC268.BIT.EIMK268
#define INTC2EIRF268 INTC2.EIC268.BIT.EIRF268
#define INTC2EICT268 INTC2.EIC268.BIT.EICT268
#define INTC2EIC269 INTC2.EIC269.UINT16
#define INTC2EIC269L INTC2.EIC269.UINT8[L]
#define INTC2EIC269H INTC2.EIC269.UINT8[H]
#define INTC2EIP269 INTC2.EIC269.BIT.EIP269
#define INTC2EITB269 INTC2.EIC269.BIT.EITB269
#define INTC2EIMK269 INTC2.EIC269.BIT.EIMK269
#define INTC2EIRF269 INTC2.EIC269.BIT.EIRF269
#define INTC2EICT269 INTC2.EIC269.BIT.EICT269
#define INTC2EIC270 INTC2.EIC270.UINT16
#define INTC2EIC270L INTC2.EIC270.UINT8[L]
#define INTC2EIC270H INTC2.EIC270.UINT8[H]
#define INTC2EIP270 INTC2.EIC270.BIT.EIP270
#define INTC2EITB270 INTC2.EIC270.BIT.EITB270
#define INTC2EIMK270 INTC2.EIC270.BIT.EIMK270
#define INTC2EIRF270 INTC2.EIC270.BIT.EIRF270
#define INTC2EICT270 INTC2.EIC270.BIT.EICT270
#define INTC2EIC271 INTC2.EIC271.UINT16
#define INTC2EIC271L INTC2.EIC271.UINT8[L]
#define INTC2EIC271H INTC2.EIC271.UINT8[H]
#define INTC2EIP271 INTC2.EIC271.BIT.EIP271
#define INTC2EITB271 INTC2.EIC271.BIT.EITB271
#define INTC2EIMK271 INTC2.EIC271.BIT.EIMK271
#define INTC2EIRF271 INTC2.EIC271.BIT.EIRF271
#define INTC2EICT271 INTC2.EIC271.BIT.EICT271
#define INTC2EIC272 INTC2.EIC272.UINT16
#define INTC2EIC272L INTC2.EIC272.UINT8[L]
#define INTC2EIC272H INTC2.EIC272.UINT8[H]
#define INTC2EIP272 INTC2.EIC272.BIT.EIP272
#define INTC2EITB272 INTC2.EIC272.BIT.EITB272
#define INTC2EIMK272 INTC2.EIC272.BIT.EIMK272
#define INTC2EIRF272 INTC2.EIC272.BIT.EIRF272
#define INTC2EICT272 INTC2.EIC272.BIT.EICT272
#define INTC2EIC273 INTC2.EIC273.UINT16
#define INTC2EIC273L INTC2.EIC273.UINT8[L]
#define INTC2EIC273H INTC2.EIC273.UINT8[H]
#define INTC2EIP273 INTC2.EIC273.BIT.EIP273
#define INTC2EITB273 INTC2.EIC273.BIT.EITB273
#define INTC2EIMK273 INTC2.EIC273.BIT.EIMK273
#define INTC2EIRF273 INTC2.EIC273.BIT.EIRF273
#define INTC2EICT273 INTC2.EIC273.BIT.EICT273
#define INTC2EIC274 INTC2.EIC274.UINT16
#define INTC2EIC274L INTC2.EIC274.UINT8[L]
#define INTC2EIC274H INTC2.EIC274.UINT8[H]
#define INTC2EIP274 INTC2.EIC274.BIT.EIP274
#define INTC2EITB274 INTC2.EIC274.BIT.EITB274
#define INTC2EIMK274 INTC2.EIC274.BIT.EIMK274
#define INTC2EIRF274 INTC2.EIC274.BIT.EIRF274
#define INTC2EICT274 INTC2.EIC274.BIT.EICT274
#define INTC2EIC275 INTC2.EIC275.UINT16
#define INTC2EIC275L INTC2.EIC275.UINT8[L]
#define INTC2EIC275H INTC2.EIC275.UINT8[H]
#define INTC2EIP275 INTC2.EIC275.BIT.EIP275
#define INTC2EITB275 INTC2.EIC275.BIT.EITB275
#define INTC2EIMK275 INTC2.EIC275.BIT.EIMK275
#define INTC2EIRF275 INTC2.EIC275.BIT.EIRF275
#define INTC2EICT275 INTC2.EIC275.BIT.EICT275
#define INTC2EIC276 INTC2.EIC276.UINT16
#define INTC2EIC276L INTC2.EIC276.UINT8[L]
#define INTC2EIC276H INTC2.EIC276.UINT8[H]
#define INTC2EIP276 INTC2.EIC276.BIT.EIP276
#define INTC2EITB276 INTC2.EIC276.BIT.EITB276
#define INTC2EIMK276 INTC2.EIC276.BIT.EIMK276
#define INTC2EIRF276 INTC2.EIC276.BIT.EIRF276
#define INTC2EICT276 INTC2.EIC276.BIT.EICT276
#define INTC2EIC277 INTC2.EIC277.UINT16
#define INTC2EIC277L INTC2.EIC277.UINT8[L]
#define INTC2EIC277H INTC2.EIC277.UINT8[H]
#define INTC2EIP277 INTC2.EIC277.BIT.EIP277
#define INTC2EITB277 INTC2.EIC277.BIT.EITB277
#define INTC2EIMK277 INTC2.EIC277.BIT.EIMK277
#define INTC2EIRF277 INTC2.EIC277.BIT.EIRF277
#define INTC2EICT277 INTC2.EIC277.BIT.EICT277
#define INTC2EIC278 INTC2.EIC278.UINT16
#define INTC2EIC278L INTC2.EIC278.UINT8[L]
#define INTC2EIC278H INTC2.EIC278.UINT8[H]
#define INTC2EIP278 INTC2.EIC278.BIT.EIP278
#define INTC2EITB278 INTC2.EIC278.BIT.EITB278
#define INTC2EIMK278 INTC2.EIC278.BIT.EIMK278
#define INTC2EIRF278 INTC2.EIC278.BIT.EIRF278
#define INTC2EICT278 INTC2.EIC278.BIT.EICT278
#define INTC2EIC279 INTC2.EIC279.UINT16
#define INTC2EIC279L INTC2.EIC279.UINT8[L]
#define INTC2EIC279H INTC2.EIC279.UINT8[H]
#define INTC2EIP279 INTC2.EIC279.BIT.EIP279
#define INTC2EITB279 INTC2.EIC279.BIT.EITB279
#define INTC2EIMK279 INTC2.EIC279.BIT.EIMK279
#define INTC2EIRF279 INTC2.EIC279.BIT.EIRF279
#define INTC2EICT279 INTC2.EIC279.BIT.EICT279
#define INTC2EIC280 INTC2.EIC280.UINT16
#define INTC2EIC280L INTC2.EIC280.UINT8[L]
#define INTC2EIC280H INTC2.EIC280.UINT8[H]
#define INTC2EIP280 INTC2.EIC280.BIT.EIP280
#define INTC2EITB280 INTC2.EIC280.BIT.EITB280
#define INTC2EIMK280 INTC2.EIC280.BIT.EIMK280
#define INTC2EIRF280 INTC2.EIC280.BIT.EIRF280
#define INTC2EICT280 INTC2.EIC280.BIT.EICT280
#define INTC2EIC281 INTC2.EIC281.UINT16
#define INTC2EIC281L INTC2.EIC281.UINT8[L]
#define INTC2EIC281H INTC2.EIC281.UINT8[H]
#define INTC2EIP281 INTC2.EIC281.BIT.EIP281
#define INTC2EITB281 INTC2.EIC281.BIT.EITB281
#define INTC2EIMK281 INTC2.EIC281.BIT.EIMK281
#define INTC2EIRF281 INTC2.EIC281.BIT.EIRF281
#define INTC2EICT281 INTC2.EIC281.BIT.EICT281
#define INTC2EIC282 INTC2.EIC282.UINT16
#define INTC2EIC282L INTC2.EIC282.UINT8[L]
#define INTC2EIC282H INTC2.EIC282.UINT8[H]
#define INTC2EIP282 INTC2.EIC282.BIT.EIP282
#define INTC2EITB282 INTC2.EIC282.BIT.EITB282
#define INTC2EIMK282 INTC2.EIC282.BIT.EIMK282
#define INTC2EIRF282 INTC2.EIC282.BIT.EIRF282
#define INTC2EICT282 INTC2.EIC282.BIT.EICT282
#define INTC2EIC283 INTC2.EIC283.UINT16
#define INTC2EIC283L INTC2.EIC283.UINT8[L]
#define INTC2EIC283H INTC2.EIC283.UINT8[H]
#define INTC2EIP283 INTC2.EIC283.BIT.EIP283
#define INTC2EITB283 INTC2.EIC283.BIT.EITB283
#define INTC2EIMK283 INTC2.EIC283.BIT.EIMK283
#define INTC2EIRF283 INTC2.EIC283.BIT.EIRF283
#define INTC2EICT283 INTC2.EIC283.BIT.EICT283
#define INTC2EIC284 INTC2.EIC284.UINT16
#define INTC2EIC284L INTC2.EIC284.UINT8[L]
#define INTC2EIC284H INTC2.EIC284.UINT8[H]
#define INTC2EIP284 INTC2.EIC284.BIT.EIP284
#define INTC2EITB284 INTC2.EIC284.BIT.EITB284
#define INTC2EIMK284 INTC2.EIC284.BIT.EIMK284
#define INTC2EIRF284 INTC2.EIC284.BIT.EIRF284
#define INTC2EICT284 INTC2.EIC284.BIT.EICT284
#define INTC2EIC285 INTC2.EIC285.UINT16
#define INTC2EIC285L INTC2.EIC285.UINT8[L]
#define INTC2EIC285H INTC2.EIC285.UINT8[H]
#define INTC2EIP285 INTC2.EIC285.BIT.EIP285
#define INTC2EITB285 INTC2.EIC285.BIT.EITB285
#define INTC2EIMK285 INTC2.EIC285.BIT.EIMK285
#define INTC2EIRF285 INTC2.EIC285.BIT.EIRF285
#define INTC2EICT285 INTC2.EIC285.BIT.EICT285
#define INTC2EIC286 INTC2.EIC286.UINT16
#define INTC2EIC286L INTC2.EIC286.UINT8[L]
#define INTC2EIC286H INTC2.EIC286.UINT8[H]
#define INTC2EIP286 INTC2.EIC286.BIT.EIP286
#define INTC2EITB286 INTC2.EIC286.BIT.EITB286
#define INTC2EIMK286 INTC2.EIC286.BIT.EIMK286
#define INTC2EIRF286 INTC2.EIC286.BIT.EIRF286
#define INTC2EICT286 INTC2.EIC286.BIT.EICT286
#define INTC2EIC287 INTC2.EIC287.UINT16
#define INTC2EIC287L INTC2.EIC287.UINT8[L]
#define INTC2EIC287H INTC2.EIC287.UINT8[H]
#define INTC2EIP287 INTC2.EIC287.BIT.EIP287
#define INTC2EITB287 INTC2.EIC287.BIT.EITB287
#define INTC2EIMK287 INTC2.EIC287.BIT.EIMK287
#define INTC2EIRF287 INTC2.EIC287.BIT.EIRF287
#define INTC2EICT287 INTC2.EIC287.BIT.EICT287
#define INTC2EIC288 INTC2.EIC288.UINT16
#define INTC2EIC288L INTC2.EIC288.UINT8[L]
#define INTC2EIC288H INTC2.EIC288.UINT8[H]
#define INTC2EIP288 INTC2.EIC288.BIT.EIP288
#define INTC2EITB288 INTC2.EIC288.BIT.EITB288
#define INTC2EIMK288 INTC2.EIC288.BIT.EIMK288
#define INTC2EIRF288 INTC2.EIC288.BIT.EIRF288
#define INTC2EICT288 INTC2.EIC288.BIT.EICT288
#define INTC2EIC289 INTC2.EIC289.UINT16
#define INTC2EIC289L INTC2.EIC289.UINT8[L]
#define INTC2EIC289H INTC2.EIC289.UINT8[H]
#define INTC2EIP289 INTC2.EIC289.BIT.EIP289
#define INTC2EITB289 INTC2.EIC289.BIT.EITB289
#define INTC2EIMK289 INTC2.EIC289.BIT.EIMK289
#define INTC2EIRF289 INTC2.EIC289.BIT.EIRF289
#define INTC2EICT289 INTC2.EIC289.BIT.EICT289
#define INTC2EIC290 INTC2.EIC290.UINT16
#define INTC2EIC290L INTC2.EIC290.UINT8[L]
#define INTC2EIC290H INTC2.EIC290.UINT8[H]
#define INTC2EIP290 INTC2.EIC290.BIT.EIP290
#define INTC2EITB290 INTC2.EIC290.BIT.EITB290
#define INTC2EIMK290 INTC2.EIC290.BIT.EIMK290
#define INTC2EIRF290 INTC2.EIC290.BIT.EIRF290
#define INTC2EICT290 INTC2.EIC290.BIT.EICT290
#define INTC2EIC291 INTC2.EIC291.UINT16
#define INTC2EIC291L INTC2.EIC291.UINT8[L]
#define INTC2EIC291H INTC2.EIC291.UINT8[H]
#define INTC2EIP291 INTC2.EIC291.BIT.EIP291
#define INTC2EITB291 INTC2.EIC291.BIT.EITB291
#define INTC2EIMK291 INTC2.EIC291.BIT.EIMK291
#define INTC2EIRF291 INTC2.EIC291.BIT.EIRF291
#define INTC2EICT291 INTC2.EIC291.BIT.EICT291
#define INTC2EIC294 INTC2.EIC294.UINT16
#define INTC2EIC294L INTC2.EIC294.UINT8[L]
#define INTC2EIC294H INTC2.EIC294.UINT8[H]
#define INTC2EIP294 INTC2.EIC294.BIT.EIP294
#define INTC2EITB294 INTC2.EIC294.BIT.EITB294
#define INTC2EIMK294 INTC2.EIC294.BIT.EIMK294
#define INTC2EIRF294 INTC2.EIC294.BIT.EIRF294
#define INTC2EICT294 INTC2.EIC294.BIT.EICT294
#define INTC2EIC295 INTC2.EIC295.UINT16
#define INTC2EIC295L INTC2.EIC295.UINT8[L]
#define INTC2EIC295H INTC2.EIC295.UINT8[H]
#define INTC2EIP295 INTC2.EIC295.BIT.EIP295
#define INTC2EITB295 INTC2.EIC295.BIT.EITB295
#define INTC2EIMK295 INTC2.EIC295.BIT.EIMK295
#define INTC2EIRF295 INTC2.EIC295.BIT.EIRF295
#define INTC2EICT295 INTC2.EIC295.BIT.EICT295
#define INTC2EIC296 INTC2.EIC296.UINT16
#define INTC2EIC296L INTC2.EIC296.UINT8[L]
#define INTC2EIC296H INTC2.EIC296.UINT8[H]
#define INTC2EIP296 INTC2.EIC296.BIT.EIP296
#define INTC2EITB296 INTC2.EIC296.BIT.EITB296
#define INTC2EIMK296 INTC2.EIC296.BIT.EIMK296
#define INTC2EIRF296 INTC2.EIC296.BIT.EIRF296
#define INTC2EICT296 INTC2.EIC296.BIT.EICT296
#define INTC2EIC297 INTC2.EIC297.UINT16
#define INTC2EIC297L INTC2.EIC297.UINT8[L]
#define INTC2EIC297H INTC2.EIC297.UINT8[H]
#define INTC2EIP297 INTC2.EIC297.BIT.EIP297
#define INTC2EITB297 INTC2.EIC297.BIT.EITB297
#define INTC2EIMK297 INTC2.EIC297.BIT.EIMK297
#define INTC2EIRF297 INTC2.EIC297.BIT.EIRF297
#define INTC2EICT297 INTC2.EIC297.BIT.EICT297
#define INTC2EIC298 INTC2.EIC298.UINT16
#define INTC2EIC298L INTC2.EIC298.UINT8[L]
#define INTC2EIC298H INTC2.EIC298.UINT8[H]
#define INTC2EIP298 INTC2.EIC298.BIT.EIP298
#define INTC2EITB298 INTC2.EIC298.BIT.EITB298
#define INTC2EIMK298 INTC2.EIC298.BIT.EIMK298
#define INTC2EIRF298 INTC2.EIC298.BIT.EIRF298
#define INTC2EICT298 INTC2.EIC298.BIT.EICT298
#define INTC2EIC379 INTC2.EIC379.UINT16
#define INTC2EIC379L INTC2.EIC379.UINT8[L]
#define INTC2EIC379H INTC2.EIC379.UINT8[H]
#define INTC2EIP379 INTC2.EIC379.BIT.EIP379
#define INTC2EITB379 INTC2.EIC379.BIT.EITB379
#define INTC2EIMK379 INTC2.EIC379.BIT.EIMK379
#define INTC2EIRF379 INTC2.EIC379.BIT.EIRF379
#define INTC2EICT379 INTC2.EIC379.BIT.EICT379
#define INTC2EIC383 INTC2.EIC383.UINT16
#define INTC2EIC383L INTC2.EIC383.UINT8[L]
#define INTC2EIC383H INTC2.EIC383.UINT8[H]
#define INTC2EIP383 INTC2.EIC383.BIT.EIP383
#define INTC2EITB383 INTC2.EIC383.BIT.EITB383
#define INTC2EIMK383 INTC2.EIC383.BIT.EIMK383
#define INTC2EIRF383 INTC2.EIC383.BIT.EIRF383
#define INTC2EICT383 INTC2.EIC383.BIT.EICT383
#define INTC2IMR1 INTC2.IMR1.UINT32
#define INTC2IMR1L INTC2.IMR1.UINT16[L]
#define INTC2IMR1LL INTC2.IMR1.UINT8[LL]
#define INTC2IMR1LH INTC2.IMR1.UINT8[LH]
#define INTC2IMR1H INTC2.IMR1.UINT16[H]
#define INTC2IMR1HL INTC2.IMR1.UINT8[HL]
#define INTC2IMR1HH INTC2.IMR1.UINT8[HH]
#define INTC2IMR1EIMK32 INTC2.IMR1.BIT.IMR1EIMK32
#define INTC2IMR1EIMK33 INTC2.IMR1.BIT.IMR1EIMK33
#define INTC2IMR1EIMK34 INTC2.IMR1.BIT.IMR1EIMK34
#define INTC2IMR1EIMK35 INTC2.IMR1.BIT.IMR1EIMK35
#define INTC2IMR1EIMK36 INTC2.IMR1.BIT.IMR1EIMK36
#define INTC2IMR1EIMK40 INTC2.IMR1.BIT.IMR1EIMK40
#define INTC2IMR1EIMK41 INTC2.IMR1.BIT.IMR1EIMK41
#define INTC2IMR1EIMK42 INTC2.IMR1.BIT.IMR1EIMK42
#define INTC2IMR1EIMK43 INTC2.IMR1.BIT.IMR1EIMK43
#define INTC2IMR1EIMK44 INTC2.IMR1.BIT.IMR1EIMK44
#define INTC2IMR1EIMK45 INTC2.IMR1.BIT.IMR1EIMK45
#define INTC2IMR1EIMK46 INTC2.IMR1.BIT.IMR1EIMK46
#define INTC2IMR1EIMK47 INTC2.IMR1.BIT.IMR1EIMK47
#define INTC2IMR1EIMK48 INTC2.IMR1.BIT.IMR1EIMK48
#define INTC2IMR1EIMK49 INTC2.IMR1.BIT.IMR1EIMK49
#define INTC2IMR1EIMK50 INTC2.IMR1.BIT.IMR1EIMK50
#define INTC2IMR1EIMK51 INTC2.IMR1.BIT.IMR1EIMK51
#define INTC2IMR1EIMK52 INTC2.IMR1.BIT.IMR1EIMK52
#define INTC2IMR1EIMK53 INTC2.IMR1.BIT.IMR1EIMK53
#define INTC2IMR1EIMK54 INTC2.IMR1.BIT.IMR1EIMK54
#define INTC2IMR1EIMK55 INTC2.IMR1.BIT.IMR1EIMK55
#define INTC2IMR1EIMK56 INTC2.IMR1.BIT.IMR1EIMK56
#define INTC2IMR1EIMK57 INTC2.IMR1.BIT.IMR1EIMK57
#define INTC2IMR1EIMK58 INTC2.IMR1.BIT.IMR1EIMK58
#define INTC2IMR1EIMK59 INTC2.IMR1.BIT.IMR1EIMK59
#define INTC2IMR1EIMK60 INTC2.IMR1.BIT.IMR1EIMK60
#define INTC2IMR1EIMK61 INTC2.IMR1.BIT.IMR1EIMK61
#define INTC2IMR1EIMK62 INTC2.IMR1.BIT.IMR1EIMK62
#define INTC2IMR1EIMK63 INTC2.IMR1.BIT.IMR1EIMK63
#define INTC2IMR2 INTC2.IMR2.UINT32
#define INTC2IMR2L INTC2.IMR2.UINT16[L]
#define INTC2IMR2LL INTC2.IMR2.UINT8[LL]
#define INTC2IMR2LH INTC2.IMR2.UINT8[LH]
#define INTC2IMR2H INTC2.IMR2.UINT16[H]
#define INTC2IMR2HL INTC2.IMR2.UINT8[HL]
#define INTC2IMR2HH INTC2.IMR2.UINT8[HH]
#define INTC2IMR2EIMK64 INTC2.IMR2.BIT.IMR2EIMK64
#define INTC2IMR2EIMK65 INTC2.IMR2.BIT.IMR2EIMK65
#define INTC2IMR2EIMK66 INTC2.IMR2.BIT.IMR2EIMK66
#define INTC2IMR2EIMK67 INTC2.IMR2.BIT.IMR2EIMK67
#define INTC2IMR2EIMK68 INTC2.IMR2.BIT.IMR2EIMK68
#define INTC2IMR2EIMK69 INTC2.IMR2.BIT.IMR2EIMK69
#define INTC2IMR2EIMK70 INTC2.IMR2.BIT.IMR2EIMK70
#define INTC2IMR2EIMK71 INTC2.IMR2.BIT.IMR2EIMK71
#define INTC2IMR2EIMK72 INTC2.IMR2.BIT.IMR2EIMK72
#define INTC2IMR2EIMK73 INTC2.IMR2.BIT.IMR2EIMK73
#define INTC2IMR2EIMK74 INTC2.IMR2.BIT.IMR2EIMK74
#define INTC2IMR2EIMK75 INTC2.IMR2.BIT.IMR2EIMK75
#define INTC2IMR2EIMK76 INTC2.IMR2.BIT.IMR2EIMK76
#define INTC2IMR2EIMK77 INTC2.IMR2.BIT.IMR2EIMK77
#define INTC2IMR2EIMK78 INTC2.IMR2.BIT.IMR2EIMK78
#define INTC2IMR2EIMK79 INTC2.IMR2.BIT.IMR2EIMK79
#define INTC2IMR2EIMK80 INTC2.IMR2.BIT.IMR2EIMK80
#define INTC2IMR2EIMK81 INTC2.IMR2.BIT.IMR2EIMK81
#define INTC2IMR2EIMK82 INTC2.IMR2.BIT.IMR2EIMK82
#define INTC2IMR2EIMK83 INTC2.IMR2.BIT.IMR2EIMK83
#define INTC2IMR2EIMK84 INTC2.IMR2.BIT.IMR2EIMK84
#define INTC2IMR2EIMK85 INTC2.IMR2.BIT.IMR2EIMK85
#define INTC2IMR2EIMK86 INTC2.IMR2.BIT.IMR2EIMK86
#define INTC2IMR2EIMK87 INTC2.IMR2.BIT.IMR2EIMK87
#define INTC2IMR2EIMK88 INTC2.IMR2.BIT.IMR2EIMK88
#define INTC2IMR2EIMK89 INTC2.IMR2.BIT.IMR2EIMK89
#define INTC2IMR2EIMK90 INTC2.IMR2.BIT.IMR2EIMK90
#define INTC2IMR2EIMK91 INTC2.IMR2.BIT.IMR2EIMK91
#define INTC2IMR2EIMK92 INTC2.IMR2.BIT.IMR2EIMK92
#define INTC2IMR2EIMK93 INTC2.IMR2.BIT.IMR2EIMK93
#define INTC2IMR2EIMK94 INTC2.IMR2.BIT.IMR2EIMK94
#define INTC2IMR2EIMK95 INTC2.IMR2.BIT.IMR2EIMK95
#define INTC2IMR3 INTC2.IMR3.UINT32
#define INTC2IMR3L INTC2.IMR3.UINT16[L]
#define INTC2IMR3LL INTC2.IMR3.UINT8[LL]
#define INTC2IMR3LH INTC2.IMR3.UINT8[LH]
#define INTC2IMR3H INTC2.IMR3.UINT16[H]
#define INTC2IMR3HL INTC2.IMR3.UINT8[HL]
#define INTC2IMR3HH INTC2.IMR3.UINT8[HH]
#define INTC2IMR3EIMK96 INTC2.IMR3.BIT.IMR3EIMK96
#define INTC2IMR3EIMK97 INTC2.IMR3.BIT.IMR3EIMK97
#define INTC2IMR3EIMK98 INTC2.IMR3.BIT.IMR3EIMK98
#define INTC2IMR3EIMK99 INTC2.IMR3.BIT.IMR3EIMK99
#define INTC2IMR3EIMK100 INTC2.IMR3.BIT.IMR3EIMK100
#define INTC2IMR3EIMK101 INTC2.IMR3.BIT.IMR3EIMK101
#define INTC2IMR3EIMK102 INTC2.IMR3.BIT.IMR3EIMK102
#define INTC2IMR3EIMK103 INTC2.IMR3.BIT.IMR3EIMK103
#define INTC2IMR3EIMK104 INTC2.IMR3.BIT.IMR3EIMK104
#define INTC2IMR3EIMK105 INTC2.IMR3.BIT.IMR3EIMK105
#define INTC2IMR3EIMK106 INTC2.IMR3.BIT.IMR3EIMK106
#define INTC2IMR3EIMK107 INTC2.IMR3.BIT.IMR3EIMK107
#define INTC2IMR3EIMK108 INTC2.IMR3.BIT.IMR3EIMK108
#define INTC2IMR3EIMK109 INTC2.IMR3.BIT.IMR3EIMK109
#define INTC2IMR3EIMK110 INTC2.IMR3.BIT.IMR3EIMK110
#define INTC2IMR3EIMK111 INTC2.IMR3.BIT.IMR3EIMK111
#define INTC2IMR3EIMK112 INTC2.IMR3.BIT.IMR3EIMK112
#define INTC2IMR3EIMK113 INTC2.IMR3.BIT.IMR3EIMK113
#define INTC2IMR3EIMK114 INTC2.IMR3.BIT.IMR3EIMK114
#define INTC2IMR3EIMK115 INTC2.IMR3.BIT.IMR3EIMK115
#define INTC2IMR3EIMK116 INTC2.IMR3.BIT.IMR3EIMK116
#define INTC2IMR3EIMK117 INTC2.IMR3.BIT.IMR3EIMK117
#define INTC2IMR3EIMK118 INTC2.IMR3.BIT.IMR3EIMK118
#define INTC2IMR3EIMK119 INTC2.IMR3.BIT.IMR3EIMK119
#define INTC2IMR3EIMK120 INTC2.IMR3.BIT.IMR3EIMK120
#define INTC2IMR3EIMK121 INTC2.IMR3.BIT.IMR3EIMK121
#define INTC2IMR4 INTC2.IMR4.UINT32
#define INTC2IMR4L INTC2.IMR4.UINT16[L]
#define INTC2IMR4LL INTC2.IMR4.UINT8[LL]
#define INTC2IMR4LH INTC2.IMR4.UINT8[LH]
#define INTC2IMR4H INTC2.IMR4.UINT16[H]
#define INTC2IMR4HL INTC2.IMR4.UINT8[HL]
#define INTC2IMR4HH INTC2.IMR4.UINT8[HH]
#define INTC2IMR4EIMK128 INTC2.IMR4.BIT.IMR4EIMK128
#define INTC2IMR4EIMK129 INTC2.IMR4.BIT.IMR4EIMK129
#define INTC2IMR4EIMK130 INTC2.IMR4.BIT.IMR4EIMK130
#define INTC2IMR4EIMK131 INTC2.IMR4.BIT.IMR4EIMK131
#define INTC2IMR4EIMK132 INTC2.IMR4.BIT.IMR4EIMK132
#define INTC2IMR4EIMK133 INTC2.IMR4.BIT.IMR4EIMK133
#define INTC2IMR4EIMK134 INTC2.IMR4.BIT.IMR4EIMK134
#define INTC2IMR4EIMK135 INTC2.IMR4.BIT.IMR4EIMK135
#define INTC2IMR4EIMK136 INTC2.IMR4.BIT.IMR4EIMK136
#define INTC2IMR4EIMK137 INTC2.IMR4.BIT.IMR4EIMK137
#define INTC2IMR4EIMK138 INTC2.IMR4.BIT.IMR4EIMK138
#define INTC2IMR4EIMK139 INTC2.IMR4.BIT.IMR4EIMK139
#define INTC2IMR4EIMK140 INTC2.IMR4.BIT.IMR4EIMK140
#define INTC2IMR4EIMK141 INTC2.IMR4.BIT.IMR4EIMK141
#define INTC2IMR4EIMK142 INTC2.IMR4.BIT.IMR4EIMK142
#define INTC2IMR4EIMK143 INTC2.IMR4.BIT.IMR4EIMK143
#define INTC2IMR4EIMK144 INTC2.IMR4.BIT.IMR4EIMK144
#define INTC2IMR4EIMK145 INTC2.IMR4.BIT.IMR4EIMK145
#define INTC2IMR4EIMK146 INTC2.IMR4.BIT.IMR4EIMK146
#define INTC2IMR4EIMK147 INTC2.IMR4.BIT.IMR4EIMK147
#define INTC2IMR4EIMK148 INTC2.IMR4.BIT.IMR4EIMK148
#define INTC2IMR4EIMK149 INTC2.IMR4.BIT.IMR4EIMK149
#define INTC2IMR4EIMK150 INTC2.IMR4.BIT.IMR4EIMK150
#define INTC2IMR4EIMK151 INTC2.IMR4.BIT.IMR4EIMK151
#define INTC2IMR4EIMK152 INTC2.IMR4.BIT.IMR4EIMK152
#define INTC2IMR4EIMK153 INTC2.IMR4.BIT.IMR4EIMK153
#define INTC2IMR4EIMK154 INTC2.IMR4.BIT.IMR4EIMK154
#define INTC2IMR4EIMK155 INTC2.IMR4.BIT.IMR4EIMK155
#define INTC2IMR4EIMK156 INTC2.IMR4.BIT.IMR4EIMK156
#define INTC2IMR4EIMK158 INTC2.IMR4.BIT.IMR4EIMK158
#define INTC2IMR4EIMK159 INTC2.IMR4.BIT.IMR4EIMK159
#define INTC2IMR5 INTC2.IMR5.UINT32
#define INTC2IMR5L INTC2.IMR5.UINT16[L]
#define INTC2IMR5LL INTC2.IMR5.UINT8[LL]
#define INTC2IMR5LH INTC2.IMR5.UINT8[LH]
#define INTC2IMR5H INTC2.IMR5.UINT16[H]
#define INTC2IMR5HL INTC2.IMR5.UINT8[HL]
#define INTC2IMR5HH INTC2.IMR5.UINT8[HH]
#define INTC2IMR5EIMK160 INTC2.IMR5.BIT.IMR5EIMK160
#define INTC2IMR5EIMK161 INTC2.IMR5.BIT.IMR5EIMK161
#define INTC2IMR5EIMK162 INTC2.IMR5.BIT.IMR5EIMK162
#define INTC2IMR5EIMK163 INTC2.IMR5.BIT.IMR5EIMK163
#define INTC2IMR5EIMK164 INTC2.IMR5.BIT.IMR5EIMK164
#define INTC2IMR5EIMK165 INTC2.IMR5.BIT.IMR5EIMK165
#define INTC2IMR5EIMK166 INTC2.IMR5.BIT.IMR5EIMK166
#define INTC2IMR5EIMK167 INTC2.IMR5.BIT.IMR5EIMK167
#define INTC2IMR5EIMK168 INTC2.IMR5.BIT.IMR5EIMK168
#define INTC2IMR5EIMK169 INTC2.IMR5.BIT.IMR5EIMK169
#define INTC2IMR5EIMK170 INTC2.IMR5.BIT.IMR5EIMK170
#define INTC2IMR5EIMK171 INTC2.IMR5.BIT.IMR5EIMK171
#define INTC2IMR5EIMK172 INTC2.IMR5.BIT.IMR5EIMK172
#define INTC2IMR5EIMK173 INTC2.IMR5.BIT.IMR5EIMK173
#define INTC2IMR5EIMK174 INTC2.IMR5.BIT.IMR5EIMK174
#define INTC2IMR5EIMK175 INTC2.IMR5.BIT.IMR5EIMK175
#define INTC2IMR5EIMK176 INTC2.IMR5.BIT.IMR5EIMK176
#define INTC2IMR5EIMK177 INTC2.IMR5.BIT.IMR5EIMK177
#define INTC2IMR5EIMK178 INTC2.IMR5.BIT.IMR5EIMK178
#define INTC2IMR5EIMK179 INTC2.IMR5.BIT.IMR5EIMK179
#define INTC2IMR5EIMK180 INTC2.IMR5.BIT.IMR5EIMK180
#define INTC2IMR5EIMK181 INTC2.IMR5.BIT.IMR5EIMK181
#define INTC2IMR5EIMK182 INTC2.IMR5.BIT.IMR5EIMK182
#define INTC2IMR5EIMK183 INTC2.IMR5.BIT.IMR5EIMK183
#define INTC2IMR5EIMK184 INTC2.IMR5.BIT.IMR5EIMK184
#define INTC2IMR5EIMK185 INTC2.IMR5.BIT.IMR5EIMK185
#define INTC2IMR5EIMK186 INTC2.IMR5.BIT.IMR5EIMK186
#define INTC2IMR5EIMK187 INTC2.IMR5.BIT.IMR5EIMK187
#define INTC2IMR5EIMK188 INTC2.IMR5.BIT.IMR5EIMK188
#define INTC2IMR5EIMK189 INTC2.IMR5.BIT.IMR5EIMK189
#define INTC2IMR5EIMK190 INTC2.IMR5.BIT.IMR5EIMK190
#define INTC2IMR6 INTC2.IMR6.UINT32
#define INTC2IMR6L INTC2.IMR6.UINT16[L]
#define INTC2IMR6LL INTC2.IMR6.UINT8[LL]
#define INTC2IMR6LH INTC2.IMR6.UINT8[LH]
#define INTC2IMR6H INTC2.IMR6.UINT16[H]
#define INTC2IMR6HL INTC2.IMR6.UINT8[HL]
#define INTC2IMR6HH INTC2.IMR6.UINT8[HH]
#define INTC2IMR6EIMK194 INTC2.IMR6.BIT.IMR6EIMK194
#define INTC2IMR6EIMK195 INTC2.IMR6.BIT.IMR6EIMK195
#define INTC2IMR6EIMK196 INTC2.IMR6.BIT.IMR6EIMK196
#define INTC2IMR6EIMK197 INTC2.IMR6.BIT.IMR6EIMK197
#define INTC2IMR6EIMK198 INTC2.IMR6.BIT.IMR6EIMK198
#define INTC2IMR6EIMK199 INTC2.IMR6.BIT.IMR6EIMK199
#define INTC2IMR6EIMK200 INTC2.IMR6.BIT.IMR6EIMK200
#define INTC2IMR6EIMK201 INTC2.IMR6.BIT.IMR6EIMK201
#define INTC2IMR6EIMK202 INTC2.IMR6.BIT.IMR6EIMK202
#define INTC2IMR6EIMK203 INTC2.IMR6.BIT.IMR6EIMK203
#define INTC2IMR6EIMK204 INTC2.IMR6.BIT.IMR6EIMK204
#define INTC2IMR6EIMK218 INTC2.IMR6.BIT.IMR6EIMK218
#define INTC2IMR6EIMK219 INTC2.IMR6.BIT.IMR6EIMK219
#define INTC2IMR6EIMK220 INTC2.IMR6.BIT.IMR6EIMK220
#define INTC2IMR6EIMK221 INTC2.IMR6.BIT.IMR6EIMK221
#define INTC2IMR7 INTC2.IMR7.UINT32
#define INTC2IMR7L INTC2.IMR7.UINT16[L]
#define INTC2IMR7LL INTC2.IMR7.UINT8[LL]
#define INTC2IMR7LH INTC2.IMR7.UINT8[LH]
#define INTC2IMR7H INTC2.IMR7.UINT16[H]
#define INTC2IMR7HL INTC2.IMR7.UINT8[HL]
#define INTC2IMR7HH INTC2.IMR7.UINT8[HH]
#define INTC2IMR7EIMK226 INTC2.IMR7.BIT.IMR7EIMK226
#define INTC2IMR7EIMK227 INTC2.IMR7.BIT.IMR7EIMK227
#define INTC2IMR7EIMK228 INTC2.IMR7.BIT.IMR7EIMK228
#define INTC2IMR7EIMK229 INTC2.IMR7.BIT.IMR7EIMK229
#define INTC2IMR7EIMK230 INTC2.IMR7.BIT.IMR7EIMK230
#define INTC2IMR7EIMK231 INTC2.IMR7.BIT.IMR7EIMK231
#define INTC2IMR7EIMK232 INTC2.IMR7.BIT.IMR7EIMK232
#define INTC2IMR7EIMK233 INTC2.IMR7.BIT.IMR7EIMK233
#define INTC2IMR7EIMK234 INTC2.IMR7.BIT.IMR7EIMK234
#define INTC2IMR7EIMK235 INTC2.IMR7.BIT.IMR7EIMK235
#define INTC2IMR7EIMK236 INTC2.IMR7.BIT.IMR7EIMK236
#define INTC2IMR7EIMK237 INTC2.IMR7.BIT.IMR7EIMK237
#define INTC2IMR7EIMK238 INTC2.IMR7.BIT.IMR7EIMK238
#define INTC2IMR7EIMK239 INTC2.IMR7.BIT.IMR7EIMK239
#define INTC2IMR7EIMK240 INTC2.IMR7.BIT.IMR7EIMK240
#define INTC2IMR7EIMK241 INTC2.IMR7.BIT.IMR7EIMK241
#define INTC2IMR7EIMK242 INTC2.IMR7.BIT.IMR7EIMK242
#define INTC2IMR7EIMK243 INTC2.IMR7.BIT.IMR7EIMK243
#define INTC2IMR7EIMK244 INTC2.IMR7.BIT.IMR7EIMK244
#define INTC2IMR7EIMK245 INTC2.IMR7.BIT.IMR7EIMK245
#define INTC2IMR7EIMK246 INTC2.IMR7.BIT.IMR7EIMK246
#define INTC2IMR7EIMK247 INTC2.IMR7.BIT.IMR7EIMK247
#define INTC2IMR7EIMK248 INTC2.IMR7.BIT.IMR7EIMK248
#define INTC2IMR7EIMK249 INTC2.IMR7.BIT.IMR7EIMK249
#define INTC2IMR7EIMK250 INTC2.IMR7.BIT.IMR7EIMK250
#define INTC2IMR7EIMK251 INTC2.IMR7.BIT.IMR7EIMK251
#define INTC2IMR7EIMK252 INTC2.IMR7.BIT.IMR7EIMK252
#define INTC2IMR7EIMK253 INTC2.IMR7.BIT.IMR7EIMK253
#define INTC2IMR7EIMK254 INTC2.IMR7.BIT.IMR7EIMK254
#define INTC2IMR8 INTC2.IMR8.UINT32
#define INTC2IMR8L INTC2.IMR8.UINT16[L]
#define INTC2IMR8LL INTC2.IMR8.UINT8[LL]
#define INTC2IMR8LH INTC2.IMR8.UINT8[LH]
#define INTC2IMR8H INTC2.IMR8.UINT16[H]
#define INTC2IMR8HL INTC2.IMR8.UINT8[HL]
#define INTC2IMR8HH INTC2.IMR8.UINT8[HH]
#define INTC2IMR8EIMK256 INTC2.IMR8.BIT.IMR8EIMK256
#define INTC2IMR8EIMK257 INTC2.IMR8.BIT.IMR8EIMK257
#define INTC2IMR8EIMK258 INTC2.IMR8.BIT.IMR8EIMK258
#define INTC2IMR8EIMK259 INTC2.IMR8.BIT.IMR8EIMK259
#define INTC2IMR8EIMK260 INTC2.IMR8.BIT.IMR8EIMK260
#define INTC2IMR8EIMK261 INTC2.IMR8.BIT.IMR8EIMK261
#define INTC2IMR8EIMK262 INTC2.IMR8.BIT.IMR8EIMK262
#define INTC2IMR8EIMK263 INTC2.IMR8.BIT.IMR8EIMK263
#define INTC2IMR8EIMK264 INTC2.IMR8.BIT.IMR8EIMK264
#define INTC2IMR8EIMK265 INTC2.IMR8.BIT.IMR8EIMK265
#define INTC2IMR8EIMK266 INTC2.IMR8.BIT.IMR8EIMK266
#define INTC2IMR8EIMK267 INTC2.IMR8.BIT.IMR8EIMK267
#define INTC2IMR8EIMK268 INTC2.IMR8.BIT.IMR8EIMK268
#define INTC2IMR8EIMK269 INTC2.IMR8.BIT.IMR8EIMK269
#define INTC2IMR8EIMK270 INTC2.IMR8.BIT.IMR8EIMK270
#define INTC2IMR8EIMK271 INTC2.IMR8.BIT.IMR8EIMK271
#define INTC2IMR8EIMK272 INTC2.IMR8.BIT.IMR8EIMK272
#define INTC2IMR8EIMK273 INTC2.IMR8.BIT.IMR8EIMK273
#define INTC2IMR8EIMK274 INTC2.IMR8.BIT.IMR8EIMK274
#define INTC2IMR8EIMK275 INTC2.IMR8.BIT.IMR8EIMK275
#define INTC2IMR8EIMK276 INTC2.IMR8.BIT.IMR8EIMK276
#define INTC2IMR8EIMK277 INTC2.IMR8.BIT.IMR8EIMK277
#define INTC2IMR8EIMK278 INTC2.IMR8.BIT.IMR8EIMK278
#define INTC2IMR8EIMK279 INTC2.IMR8.BIT.IMR8EIMK279
#define INTC2IMR8EIMK280 INTC2.IMR8.BIT.IMR8EIMK280
#define INTC2IMR8EIMK281 INTC2.IMR8.BIT.IMR8EIMK281
#define INTC2IMR8EIMK282 INTC2.IMR8.BIT.IMR8EIMK282
#define INTC2IMR8EIMK283 INTC2.IMR8.BIT.IMR8EIMK283
#define INTC2IMR8EIMK284 INTC2.IMR8.BIT.IMR8EIMK284
#define INTC2IMR8EIMK285 INTC2.IMR8.BIT.IMR8EIMK285
#define INTC2IMR8EIMK286 INTC2.IMR8.BIT.IMR8EIMK286
#define INTC2IMR8EIMK287 INTC2.IMR8.BIT.IMR8EIMK287
#define INTC2IMR9 INTC2.IMR9.UINT32
#define INTC2IMR9L INTC2.IMR9.UINT16[L]
#define INTC2IMR9LL INTC2.IMR9.UINT8[LL]
#define INTC2IMR9LH INTC2.IMR9.UINT8[LH]
#define INTC2IMR9EIMK288 INTC2.IMR9.BIT.IMR9EIMK288
#define INTC2IMR9EIMK289 INTC2.IMR9.BIT.IMR9EIMK289
#define INTC2IMR9EIMK290 INTC2.IMR9.BIT.IMR9EIMK290
#define INTC2IMR9EIMK291 INTC2.IMR9.BIT.IMR9EIMK291
#define INTC2IMR9EIMK294 INTC2.IMR9.BIT.IMR9EIMK294
#define INTC2IMR9EIMK295 INTC2.IMR9.BIT.IMR9EIMK295
#define INTC2IMR9EIMK296 INTC2.IMR9.BIT.IMR9EIMK296
#define INTC2IMR9EIMK297 INTC2.IMR9.BIT.IMR9EIMK297
#define INTC2IMR9EIMK298 INTC2.IMR9.BIT.IMR9EIMK298
#define INTC2IMR11 INTC2.IMR11.UINT32
#define INTC2IMR11L INTC2.IMR11.UINT16[L]
#define INTC2IMR11LL INTC2.IMR11.UINT8[LL]
#define INTC2IMR11LH INTC2.IMR11.UINT8[LH]
#define INTC2IMR11H INTC2.IMR11.UINT16[H]
#define INTC2IMR11HL INTC2.IMR11.UINT8[HL]
#define INTC2IMR11HH INTC2.IMR11.UINT8[HH]
#define INTC2IMR11EIMK379 INTC2.IMR11.BIT.IMR11EIMK379
#define INTC2IMR11EIMK383 INTC2.IMR11.BIT.IMR11EIMK383
#define INTC2EIBD32 INTC2.EIBD32.UINT32
#define INTC2PEID INTC2.EIBD32.BIT.PEID
#define INTC2GPID INTC2.EIBD32.BIT.GPID
#define INTC2EIBD33 INTC2.EIBD33.UINT32
#define INTC2EIBD34 INTC2.EIBD34.UINT32
#define INTC2EIBD35 INTC2.EIBD35.UINT32
#define INTC2EIBD36 INTC2.EIBD36.UINT32
#define INTC2EIBD40 INTC2.EIBD40.UINT32
#define INTC2EIBD41 INTC2.EIBD41.UINT32
#define INTC2EIBD42 INTC2.EIBD42.UINT32
#define INTC2EIBD43 INTC2.EIBD43.UINT32
#define INTC2EIBD44 INTC2.EIBD44.UINT32
#define INTC2EIBD45 INTC2.EIBD45.UINT32
#define INTC2EIBD46 INTC2.EIBD46.UINT32
#define INTC2EIBD47 INTC2.EIBD47.UINT32
#define INTC2EIBD48 INTC2.EIBD48.UINT32
#define INTC2EIBD49 INTC2.EIBD49.UINT32
#define INTC2EIBD50 INTC2.EIBD50.UINT32
#define INTC2EIBD51 INTC2.EIBD51.UINT32
#define INTC2EIBD52 INTC2.EIBD52.UINT32
#define INTC2EIBD53 INTC2.EIBD53.UINT32
#define INTC2EIBD54 INTC2.EIBD54.UINT32
#define INTC2EIBD55 INTC2.EIBD55.UINT32
#define INTC2EIBD56 INTC2.EIBD56.UINT32
#define INTC2EIBD57 INTC2.EIBD57.UINT32
#define INTC2EIBD58 INTC2.EIBD58.UINT32
#define INTC2EIBD59 INTC2.EIBD59.UINT32
#define INTC2EIBD60 INTC2.EIBD60.UINT32
#define INTC2EIBD61 INTC2.EIBD61.UINT32
#define INTC2EIBD62 INTC2.EIBD62.UINT32
#define INTC2EIBD63 INTC2.EIBD63.UINT32
#define INTC2EIBD64 INTC2.EIBD64.UINT32
#define INTC2EIBD65 INTC2.EIBD65.UINT32
#define INTC2EIBD66 INTC2.EIBD66.UINT32
#define INTC2EIBD67 INTC2.EIBD67.UINT32
#define INTC2EIBD68 INTC2.EIBD68.UINT32
#define INTC2EIBD69 INTC2.EIBD69.UINT32
#define INTC2EIBD70 INTC2.EIBD70.UINT32
#define INTC2EIBD71 INTC2.EIBD71.UINT32
#define INTC2EIBD72 INTC2.EIBD72.UINT32
#define INTC2EIBD73 INTC2.EIBD73.UINT32
#define INTC2EIBD74 INTC2.EIBD74.UINT32
#define INTC2EIBD75 INTC2.EIBD75.UINT32
#define INTC2EIBD76 INTC2.EIBD76.UINT32
#define INTC2EIBD77 INTC2.EIBD77.UINT32
#define INTC2EIBD78 INTC2.EIBD78.UINT32
#define INTC2EIBD79 INTC2.EIBD79.UINT32
#define INTC2EIBD80 INTC2.EIBD80.UINT32
#define INTC2EIBD81 INTC2.EIBD81.UINT32
#define INTC2EIBD82 INTC2.EIBD82.UINT32
#define INTC2EIBD83 INTC2.EIBD83.UINT32
#define INTC2EIBD84 INTC2.EIBD84.UINT32
#define INTC2EIBD85 INTC2.EIBD85.UINT32
#define INTC2EIBD86 INTC2.EIBD86.UINT32
#define INTC2EIBD87 INTC2.EIBD87.UINT32
#define INTC2EIBD88 INTC2.EIBD88.UINT32
#define INTC2EIBD89 INTC2.EIBD89.UINT32
#define INTC2EIBD90 INTC2.EIBD90.UINT32
#define INTC2EIBD91 INTC2.EIBD91.UINT32
#define INTC2EIBD92 INTC2.EIBD92.UINT32
#define INTC2EIBD93 INTC2.EIBD93.UINT32
#define INTC2EIBD94 INTC2.EIBD94.UINT32
#define INTC2EIBD95 INTC2.EIBD95.UINT32
#define INTC2EIBD96 INTC2.EIBD96.UINT32
#define INTC2EIBD97 INTC2.EIBD97.UINT32
#define INTC2EIBD98 INTC2.EIBD98.UINT32
#define INTC2EIBD99 INTC2.EIBD99.UINT32
#define INTC2EIBD100 INTC2.EIBD100.UINT32
#define INTC2EIBD101 INTC2.EIBD101.UINT32
#define INTC2EIBD102 INTC2.EIBD102.UINT32
#define INTC2EIBD103 INTC2.EIBD103.UINT32
#define INTC2EIBD104 INTC2.EIBD104.UINT32
#define INTC2EIBD105 INTC2.EIBD105.UINT32
#define INTC2EIBD106 INTC2.EIBD106.UINT32
#define INTC2EIBD107 INTC2.EIBD107.UINT32
#define INTC2EIBD108 INTC2.EIBD108.UINT32
#define INTC2EIBD109 INTC2.EIBD109.UINT32
#define INTC2EIBD110 INTC2.EIBD110.UINT32
#define INTC2EIBD111 INTC2.EIBD111.UINT32
#define INTC2EIBD112 INTC2.EIBD112.UINT32
#define INTC2EIBD113 INTC2.EIBD113.UINT32
#define INTC2EIBD114 INTC2.EIBD114.UINT32
#define INTC2EIBD115 INTC2.EIBD115.UINT32
#define INTC2EIBD116 INTC2.EIBD116.UINT32
#define INTC2EIBD117 INTC2.EIBD117.UINT32
#define INTC2EIBD118 INTC2.EIBD118.UINT32
#define INTC2EIBD119 INTC2.EIBD119.UINT32
#define INTC2EIBD120 INTC2.EIBD120.UINT32
#define INTC2EIBD121 INTC2.EIBD121.UINT32
#define INTC2EIBD128 INTC2.EIBD128.UINT32
#define INTC2EIBD129 INTC2.EIBD129.UINT32
#define INTC2EIBD130 INTC2.EIBD130.UINT32
#define INTC2EIBD131 INTC2.EIBD131.UINT32
#define INTC2EIBD132 INTC2.EIBD132.UINT32
#define INTC2EIBD133 INTC2.EIBD133.UINT32
#define INTC2EIBD134 INTC2.EIBD134.UINT32
#define INTC2EIBD135 INTC2.EIBD135.UINT32
#define INTC2EIBD136 INTC2.EIBD136.UINT32
#define INTC2EIBD137 INTC2.EIBD137.UINT32
#define INTC2EIBD138 INTC2.EIBD138.UINT32
#define INTC2EIBD139 INTC2.EIBD139.UINT32
#define INTC2EIBD140 INTC2.EIBD140.UINT32
#define INTC2EIBD141 INTC2.EIBD141.UINT32
#define INTC2EIBD142 INTC2.EIBD142.UINT32
#define INTC2EIBD143 INTC2.EIBD143.UINT32
#define INTC2EIBD144 INTC2.EIBD144.UINT32
#define INTC2EIBD145 INTC2.EIBD145.UINT32
#define INTC2EIBD146 INTC2.EIBD146.UINT32
#define INTC2EIBD147 INTC2.EIBD147.UINT32
#define INTC2EIBD148 INTC2.EIBD148.UINT32
#define INTC2EIBD149 INTC2.EIBD149.UINT32
#define INTC2EIBD150 INTC2.EIBD150.UINT32
#define INTC2EIBD151 INTC2.EIBD151.UINT32
#define INTC2EIBD152 INTC2.EIBD152.UINT32
#define INTC2EIBD153 INTC2.EIBD153.UINT32
#define INTC2EIBD154 INTC2.EIBD154.UINT32
#define INTC2EIBD155 INTC2.EIBD155.UINT32
#define INTC2EIBD156 INTC2.EIBD156.UINT32
#define INTC2EIBD158 INTC2.EIBD158.UINT32
#define INTC2EIBD159 INTC2.EIBD159.UINT32
#define INTC2EIBD160 INTC2.EIBD160.UINT32
#define INTC2EIBD161 INTC2.EIBD161.UINT32
#define INTC2EIBD162 INTC2.EIBD162.UINT32
#define INTC2EIBD163 INTC2.EIBD163.UINT32
#define INTC2EIBD164 INTC2.EIBD164.UINT32
#define INTC2EIBD165 INTC2.EIBD165.UINT32
#define INTC2EIBD166 INTC2.EIBD166.UINT32
#define INTC2EIBD167 INTC2.EIBD167.UINT32
#define INTC2EIBD168 INTC2.EIBD168.UINT32
#define INTC2EIBD169 INTC2.EIBD169.UINT32
#define INTC2EIBD170 INTC2.EIBD170.UINT32
#define INTC2EIBD171 INTC2.EIBD171.UINT32
#define INTC2EIBD172 INTC2.EIBD172.UINT32
#define INTC2EIBD173 INTC2.EIBD173.UINT32
#define INTC2EIBD174 INTC2.EIBD174.UINT32
#define INTC2EIBD175 INTC2.EIBD175.UINT32
#define INTC2EIBD176 INTC2.EIBD176.UINT32
#define INTC2EIBD177 INTC2.EIBD177.UINT32
#define INTC2EIBD178 INTC2.EIBD178.UINT32
#define INTC2EIBD179 INTC2.EIBD179.UINT32
#define INTC2EIBD180 INTC2.EIBD180.UINT32
#define INTC2EIBD181 INTC2.EIBD181.UINT32
#define INTC2EIBD182 INTC2.EIBD182.UINT32
#define INTC2EIBD183 INTC2.EIBD183.UINT32
#define INTC2EIBD184 INTC2.EIBD184.UINT32
#define INTC2EIBD185 INTC2.EIBD185.UINT32
#define INTC2EIBD186 INTC2.EIBD186.UINT32
#define INTC2EIBD187 INTC2.EIBD187.UINT32
#define INTC2EIBD188 INTC2.EIBD188.UINT32
#define INTC2EIBD189 INTC2.EIBD189.UINT32
#define INTC2EIBD190 INTC2.EIBD190.UINT32
#define INTC2EIBD194 INTC2.EIBD194.UINT32
#define INTC2EIBD195 INTC2.EIBD195.UINT32
#define INTC2EIBD196 INTC2.EIBD196.UINT32
#define INTC2EIBD197 INTC2.EIBD197.UINT32
#define INTC2EIBD198 INTC2.EIBD198.UINT32
#define INTC2EIBD199 INTC2.EIBD199.UINT32
#define INTC2EIBD200 INTC2.EIBD200.UINT32
#define INTC2EIBD201 INTC2.EIBD201.UINT32
#define INTC2EIBD202 INTC2.EIBD202.UINT32
#define INTC2EIBD203 INTC2.EIBD203.UINT32
#define INTC2EIBD204 INTC2.EIBD204.UINT32
#define INTC2EIBD218 INTC2.EIBD218.UINT32
#define INTC2EIBD219 INTC2.EIBD219.UINT32
#define INTC2EIBD220 INTC2.EIBD220.UINT32
#define INTC2EIBD221 INTC2.EIBD221.UINT32
#define INTC2EIBD226 INTC2.EIBD226.UINT32
#define INTC2EIBD227 INTC2.EIBD227.UINT32
#define INTC2EIBD228 INTC2.EIBD228.UINT32
#define INTC2EIBD229 INTC2.EIBD229.UINT32
#define INTC2EIBD230 INTC2.EIBD230.UINT32
#define INTC2EIBD231 INTC2.EIBD231.UINT32
#define INTC2EIBD232 INTC2.EIBD232.UINT32
#define INTC2EIBD233 INTC2.EIBD233.UINT32
#define INTC2EIBD234 INTC2.EIBD234.UINT32
#define INTC2EIBD235 INTC2.EIBD235.UINT32
#define INTC2EIBD236 INTC2.EIBD236.UINT32
#define INTC2EIBD237 INTC2.EIBD237.UINT32
#define INTC2EIBD238 INTC2.EIBD238.UINT32
#define INTC2EIBD239 INTC2.EIBD239.UINT32
#define INTC2EIBD240 INTC2.EIBD240.UINT32
#define INTC2EIBD241 INTC2.EIBD241.UINT32
#define INTC2EIBD242 INTC2.EIBD242.UINT32
#define INTC2EIBD243 INTC2.EIBD243.UINT32
#define INTC2EIBD244 INTC2.EIBD244.UINT32
#define INTC2EIBD245 INTC2.EIBD245.UINT32
#define INTC2EIBD246 INTC2.EIBD246.UINT32
#define INTC2EIBD247 INTC2.EIBD247.UINT32
#define INTC2EIBD248 INTC2.EIBD248.UINT32
#define INTC2EIBD249 INTC2.EIBD249.UINT32
#define INTC2EIBD250 INTC2.EIBD250.UINT32
#define INTC2EIBD251 INTC2.EIBD251.UINT32
#define INTC2EIBD252 INTC2.EIBD252.UINT32
#define INTC2EIBD253 INTC2.EIBD253.UINT32
#define INTC2EIBD254 INTC2.EIBD254.UINT32
#define INTC2EIBD256 INTC2.EIBD256.UINT32
#define INTC2EIBD257 INTC2.EIBD257.UINT32
#define INTC2EIBD258 INTC2.EIBD258.UINT32
#define INTC2EIBD259 INTC2.EIBD259.UINT32
#define INTC2EIBD260 INTC2.EIBD260.UINT32
#define INTC2EIBD261 INTC2.EIBD261.UINT32
#define INTC2EIBD262 INTC2.EIBD262.UINT32
#define INTC2EIBD263 INTC2.EIBD263.UINT32
#define INTC2EIBD264 INTC2.EIBD264.UINT32
#define INTC2EIBD265 INTC2.EIBD265.UINT32
#define INTC2EIBD266 INTC2.EIBD266.UINT32
#define INTC2EIBD267 INTC2.EIBD267.UINT32
#define INTC2EIBD268 INTC2.EIBD268.UINT32
#define INTC2EIBD269 INTC2.EIBD269.UINT32
#define INTC2EIBD270 INTC2.EIBD270.UINT32
#define INTC2EIBD271 INTC2.EIBD271.UINT32
#define INTC2EIBD272 INTC2.EIBD272.UINT32
#define INTC2EIBD273 INTC2.EIBD273.UINT32
#define INTC2EIBD274 INTC2.EIBD274.UINT32
#define INTC2EIBD275 INTC2.EIBD275.UINT32
#define INTC2EIBD276 INTC2.EIBD276.UINT32
#define INTC2EIBD277 INTC2.EIBD277.UINT32
#define INTC2EIBD278 INTC2.EIBD278.UINT32
#define INTC2EIBD279 INTC2.EIBD279.UINT32
#define INTC2EIBD280 INTC2.EIBD280.UINT32
#define INTC2EIBD281 INTC2.EIBD281.UINT32
#define INTC2EIBD282 INTC2.EIBD282.UINT32
#define INTC2EIBD283 INTC2.EIBD283.UINT32
#define INTC2EIBD284 INTC2.EIBD284.UINT32
#define INTC2EIBD285 INTC2.EIBD285.UINT32
#define INTC2EIBD286 INTC2.EIBD286.UINT32
#define INTC2EIBD287 INTC2.EIBD287.UINT32
#define INTC2EIBD288 INTC2.EIBD288.UINT32
#define INTC2EIBD289 INTC2.EIBD289.UINT32
#define INTC2EIBD290 INTC2.EIBD290.UINT32
#define INTC2EIBD291 INTC2.EIBD291.UINT32
#define INTC2EIBD294 INTC2.EIBD294.UINT32
#define INTC2EIBD295 INTC2.EIBD295.UINT32
#define INTC2EIBD296 INTC2.EIBD296.UINT32
#define INTC2EIBD297 INTC2.EIBD297.UINT32
#define INTC2EIBD298 INTC2.EIBD298.UINT32
#define INTC2EIBD379 INTC2.EIBD379.UINT32
#define INTC2EIBD383 INTC2.EIBD383.UINT32

#endif
