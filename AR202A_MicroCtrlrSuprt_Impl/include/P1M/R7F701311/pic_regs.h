/**********************************************************************************************************************
* Module File Name  : pic_regs.h
* Module Description: Peripheral Interconnect Peripheral Registers
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

#ifndef PIC_REGS_H
#define PIC_REGS_H

/**********************************************************************************************************************
* Include files
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "reg_common.h"

typedef struct 
{                                                          /* Bit Access       */
    uint8  SYNCTRG:1;                                      /* SYNCTRG          */
    uint8  :7;                                             /* Reserved Bits    */
} __type575;
typedef struct 
{                                                          /* Bit Access       */
    uint16 SSER000:1;                                      /* SSER000          */
    uint16 SSER001:1;                                      /* SSER001          */
    uint16 SSER002:1;                                      /* SSER002          */
    uint16 SSER003:1;                                      /* SSER003          */
    uint16 SSER004:1;                                      /* SSER004          */
    uint16 SSER005:1;                                      /* SSER005          */
    uint16 SSER006:1;                                      /* SSER006          */
    uint16 SSER007:1;                                      /* SSER007          */
    uint16 SSER008:1;                                      /* SSER008          */
    uint16 SSER009:1;                                      /* SSER009          */
    uint16 SSER010:1;                                      /* SSER010          */
    uint16 SSER011:1;                                      /* SSER011          */
    uint16 SSER012:1;                                      /* SSER012          */
    uint16 SSER013:1;                                      /* SSER013          */
    uint16 SSER014:1;                                      /* SSER014          */
    uint16 SSER015:1;                                      /* SSER015          */
} __type576;
typedef struct 
{                                                          /* Bit Access       */
    uint16 SSER100:1;                                      /* SSER100          */
    uint16 SSER101:1;                                      /* SSER101          */
    uint16 SSER102:1;                                      /* SSER102          */
    uint16 SSER103:1;                                      /* SSER103          */
    uint16 SSER104:1;                                      /* SSER104          */
    uint16 SSER105:1;                                      /* SSER105          */
    uint16 SSER106:1;                                      /* SSER106          */
    uint16 SSER107:1;                                      /* SSER107          */
    uint16 SSER108:1;                                      /* SSER108          */
    uint16 SSER109:1;                                      /* SSER109          */
    uint16 SSER110:1;                                      /* SSER110          */
    uint16 SSER111:1;                                      /* SSER111          */
    uint16 SSER112:1;                                      /* SSER112          */
    uint16 SSER113:1;                                      /* SSER113          */
    uint16 SSER114:1;                                      /* SSER114          */
    uint16 SSER115:1;                                      /* SSER115          */
} __type577;
typedef struct 
{                                                          /* Bit Access       */
    uint16 SSER200:1;                                      /* SSER200          */
    uint16 SSER201:1;                                      /* SSER201          */
    uint16 SSER202:1;                                      /* SSER202          */
    uint16 SSER203:1;                                      /* SSER203          */
    uint16 SSER204:1;                                      /* SSER204          */
    uint16 SSER205:1;                                      /* SSER205          */
    uint16 SSER206:1;                                      /* SSER206          */
    uint16 SSER207:1;                                      /* SSER207          */
    uint16 SSER208:1;                                      /* SSER208          */
    uint16 SSER209:1;                                      /* SSER209          */
    uint16 SSER210:1;                                      /* SSER210          */
    uint16 SSER211:1;                                      /* SSER211          */
    uint16 SSER212:1;                                      /* SSER212          */
    uint16 SSER213:1;                                      /* SSER213          */
    uint16 :2;                                             /* Reserved Bits    */
} __type578;
typedef struct 
{                                                          /* Bit Access       */
    uint16 SSER300:1;                                      /* SSER300          */
    uint16 SSER301:1;                                      /* SSER301          */
    uint16 :14;                                            /* Reserved Bits    */
} __type579;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  INI002:1;                                       /* INI002           */
    uint8  INI003:1;                                       /* INI003           */
    uint8  INI004:1;                                       /* INI004           */
    uint8  :3;                                             /* Reserved Bits    */
} __type580;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INI010:1;                                       /* INI010           */
    uint8  INI011:1;                                       /* INI011           */
    uint8  INI012:1;                                       /* INI012           */
    uint8  :5;                                             /* Reserved Bits    */
} __type581;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  INI102:1;                                       /* INI102           */
    uint8  INI103:1;                                       /* INI103           */
    uint8  INI104:1;                                       /* INI104           */
    uint8  :3;                                             /* Reserved Bits    */
} __type582;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INI110:1;                                       /* INI110           */
    uint8  INI111:1;                                       /* INI111           */
    uint8  INI112:1;                                       /* INI112           */
    uint8  :5;                                             /* Reserved Bits    */
} __type583;
typedef struct 
{                                                          /* Bit Access       */
    uint8  TSG0HALLSEL:1;                                  /* TSG0HALLSEL      */
    uint8  TSG1HALLSEL:1;                                  /* TSG1HALLSEL      */
    uint8  :6;                                             /* Reserved Bits    */
} __type584;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TAUD0IN010:2;                                   /* TAUD0IN010[1:0]  */
    uint32 TAUD0IN032:2;                                   /* TAUD0IN032[3:2]  */
    uint32 TAUD0IN210:2;                                   /* TAUD0IN210[5:4]  */
    uint32 TAUD0IN232:2;                                   /* TAUD0IN232[7:6]  */
    uint32 TAUD0IN410:2;                                   /* TAUD0IN410[9:8]  */
    uint32 TAUD0IN432:2;                                   /* TAUD0IN432[11:10] */
    uint32 TAUD0IN610:2;                                   /* TAUD0IN610[13:12] */
    uint32 TAUD0IN632:2;                                   /* TAUD0IN632[15:14] */
    uint32 TAUD0IN810:2;                                   /* TAUD0IN810[17:16] */
    uint32 TAUD0IN832:2;                                   /* TAUD0IN832[19:18] */
    uint32 TAUD0IN1010:2;                                  /* TAUD0IN1010[21:20] */
    uint32 TAUD0IN1032:2;                                  /* TAUD0IN1032[23:22] */
    uint32 TAUD0IN1210:2;                                  /* TAUD0IN1210[25:24] */
    uint32 TAUD0IN1232:2;                                  /* TAUD0IN1232[27:26] */
    uint32 TAUD0IN1410:2;                                  /* TAUD0IN1410[29:28] */
    uint32 TAUD0IN1432:2;                                  /* TAUD0IN1432[31:30] */
} __type585;
typedef struct 
{                                                          /* Bit Access       */
    uint32 TAUD1IN010:2;                                   /* TAUD1IN010[1:0]  */
    uint32 TAUD1IN032:2;                                   /* TAUD1IN032[3:2]  */
    uint32 TAUD1IN210:2;                                   /* TAUD1IN210[5:4]  */
    uint32 TAUD1IN232:2;                                   /* TAUD1IN232[7:6]  */
    uint32 TAUD1IN410:2;                                   /* TAUD1IN410[9:8]  */
    uint32 TAUD1IN432:2;                                   /* TAUD1IN432[11:10] */
    uint32 TAUD1IN610:2;                                   /* TAUD1IN610[13:12] */
    uint32 TAUD1IN632:2;                                   /* TAUD1IN632[15:14] */
    uint32 TAUD1IN810:2;                                   /* TAUD1IN810[17:16] */
    uint32 TAUD1IN832:2;                                   /* TAUD1IN832[19:18] */
    uint32 TAUD1IN1010:2;                                  /* TAUD1IN1010[21:20] */
    uint32 TAUD1IN1032:2;                                  /* TAUD1IN1032[23:22] */
    uint32 TAUD1IN1210:2;                                  /* TAUD1IN1210[25:24] */
    uint32 TAUD1IN1232:2;                                  /* TAUD1IN1232[27:26] */
    uint32 TAUD1IN1410:2;                                  /* TAUD1IN1410[29:28] */
    uint32 TAUD1IN1432:2;                                  /* TAUD1IN1432[31:30] */
} __type586;
typedef struct 
{                                                          /* Bit Access       */
    uint8  HIZCEN00:1;                                     /* HIZCEN00         */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  HIZCEN05:1;                                     /* HIZCEN05         */
    uint8  HIZCEN06:1;                                     /* HIZCEN06         */
    uint8  HIZCEN07:1;                                     /* HIZCEN07         */
} __type587;
typedef struct 
{                                                          /* Bit Access       */
    uint8  HIZCEN10:1;                                     /* HIZCEN10         */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  HIZCEN15:1;                                     /* HIZCEN15         */
    uint8  HIZCEN16:1;                                     /* HIZCEN16         */
    uint8  HIZCEN17:1;                                     /* HIZCEN17         */
} __type588;
typedef struct 
{                                                          /* Bit Access       */
    uint8  HIZCEN20:1;                                     /* HIZCEN20         */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  HIZCEN23:1;                                     /* HIZCEN23         */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  HIZCEN25:1;                                     /* HIZCEN25         */
    uint8  HIZCEN26:1;                                     /* HIZCEN26         */
    uint8  HIZCEN27:1;                                     /* HIZCEN27         */
} __type589;
typedef struct 
{                                                          /* Bit Access       */
    uint8  HIZCEN30:1;                                     /* HIZCEN30         */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  HIZCEN34:1;                                     /* HIZCEN34         */
    uint8  HIZCEN35:1;                                     /* HIZCEN35         */
    uint8  HIZCEN36:1;                                     /* HIZCEN36         */
    uint8  HIZCEN37:1;                                     /* HIZCEN37         */
} __type590;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ENCSEL40030:4;                                  /* ENCSEL40030[3:0] */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  ENCSEL4007:1;                                   /* ENCSEL4007       */
} __type591;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ENCSEL41030:4;                                  /* ENCSEL41030[3:0] */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  ENCSEL4107:1;                                   /* ENCSEL4107       */
} __type592;
typedef struct 
{                                                          /* Bit Access       */
    uint32 REG20000:1;                                     /* REG20000         */
    uint32 REG20001:1;                                     /* REG20001         */
    uint32 REG20002:1;                                     /* REG20002         */
    uint32 REG20003:1;                                     /* REG20003         */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 REG2000908:2;                                   /* REG2000908[9:8]  */
    uint32 REG2001110:2;                                   /* REG2001110[11:10] */
    uint32 :20;                                            /* Reserved Bits    */
} __type593;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :16;                                            /* Reserved Bits    */
    uint32 REG2011716:2;                                   /* REG2011716[17:16] */
    uint32 REG2011918:2;                                   /* REG2011918[19:18] */
    uint32 REG2012120:2;                                   /* REG2012120[21:20] */
    uint32 REG2012322:2;                                   /* REG2012322[23:22] */
    uint32 REG2012524:2;                                   /* REG2012524[25:24] */
    uint32 REG2012726:2;                                   /* REG2012726[27:26] */
    uint32 :4;                                             /* Reserved Bits    */
} __type594;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 REG20202:1;                                     /* REG20202         */
    uint32 REG20203:1;                                     /* REG20203         */
    uint32 REG20204:1;                                     /* REG20204         */
    uint32 :11;                                            /* Reserved Bits    */
    uint32 REG2021716:2;                                   /* REG2021716[17:16] */
    uint32 REG2021918:2;                                   /* REG2021918[19:18] */
    uint32 REG2022120:2;                                   /* REG2022120[21:20] */
    uint32 REG2022322:2;                                   /* REG2022322[23:22] */
    uint32 REG2022524:2;                                   /* REG2022524[25:24] */
    uint32 REG2022726:2;                                   /* REG2022726[27:26] */
    uint32 :4;                                             /* Reserved Bits    */
} __type595;
typedef struct 
{                                                          /* Bit Access       */
    uint32 REG2030200:3;                                   /* REG2030200[2:0]  */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG2030604:3;                                   /* REG2030604[6:4]  */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG2031008:3;                                   /* REG2031008[10:8] */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG2031412:3;                                   /* REG2031412[14:12] */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG2031816:3;                                   /* REG2031816[18:16] */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG2032220:3;                                   /* REG2032220[22:20] */
    uint32 :9;                                             /* Reserved Bits    */
} __type596;
typedef struct 
{                                                          /* Bit Access       */
    uint32 REG21000:1;                                     /* REG21000         */
    uint32 REG21001:1;                                     /* REG21001         */
    uint32 REG21002:1;                                     /* REG21002         */
    uint32 REG21003:1;                                     /* REG21003         */
    uint32 :4;                                             /* Reserved Bits    */
    uint32 REG2100908:2;                                   /* REG2100908[9:8]  */
    uint32 REG2101110:2;                                   /* REG2101110[11:10] */
    uint32 :20;                                            /* Reserved Bits    */
} __type597;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :16;                                            /* Reserved Bits    */
    uint32 REG2111716:2;                                   /* REG2111716[17:16] */
    uint32 REG2111918:2;                                   /* REG2111918[19:18] */
    uint32 REG2112120:2;                                   /* REG2112120[21:20] */
    uint32 REG2112322:2;                                   /* REG2112322[23:22] */
    uint32 REG2112524:2;                                   /* REG2112524[25:24] */
    uint32 REG2112726:2;                                   /* REG2112726[27:26] */
    uint32 :4;                                             /* Reserved Bits    */
} __type598;
typedef struct 
{                                                          /* Bit Access       */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 REG21202:1;                                     /* REG21202         */
    uint32 REG21203:1;                                     /* REG21203         */
    uint32 REG21204:1;                                     /* REG21204         */
    uint32 :11;                                            /* Reserved Bits    */
    uint32 REG2121716:2;                                   /* REG2121716[17:16] */
    uint32 REG2121918:2;                                   /* REG2121918[19:18] */
    uint32 REG2122120:2;                                   /* REG2122120[21:20] */
    uint32 REG2122322:2;                                   /* REG2122322[23:22] */
    uint32 REG2122524:2;                                   /* REG2122524[25:24] */
    uint32 REG2122726:2;                                   /* REG2122726[27:26] */
    uint32 :4;                                             /* Reserved Bits    */
} __type599;
typedef struct 
{                                                          /* Bit Access       */
    uint32 REG2130200:3;                                   /* REG2130200[2:0]  */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG2130604:3;                                   /* REG2130604[6:4]  */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG2131008:3;                                   /* REG2131008[10:8] */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG2131412:3;                                   /* REG2131412[14:12] */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG2131816:3;                                   /* REG2131816[18:16] */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG2132220:3;                                   /* REG2132220[22:20] */
    uint32 :9;                                             /* Reserved Bits    */
} __type600;
typedef struct 
{                                                          /* Bit Access       */
    uint32 REG3000:1;                                      /* REG3000          */
    uint32 REG3001:1;                                      /* REG3001          */
    uint32 REG300502:4;                                    /* REG300502[5:2]   */
    uint32 REG300706:2;                                    /* REG300706[7:6]   */
    uint32 REG300908:2;                                    /* REG300908[9:8]   */
    uint32 REG301110:2;                                    /* REG301110[11:10] */
    uint32 REG301512:4;                                    /* REG301512[15:12] */
    uint32 REG301716:2;                                    /* REG301716[17:16] */
    uint32 REG3018:1;                                      /* REG3018          */
    uint32 REG302019:2;                                    /* REG302019[20:19] */
    uint32 REG3021:1;                                      /* REG3021          */
    uint32 REG3022:1;                                      /* REG3022          */
    uint32 :9;                                             /* Reserved Bits    */
} __type601;
typedef struct 
{                                                          /* Bit Access       */
    uint32 REG3100:1;                                      /* REG3100          */
    uint32 REG3101:1;                                      /* REG3101          */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG3103:1;                                      /* REG3103          */
    uint32 REG3104:1;                                      /* REG3104          */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG310806:3;                                    /* REG310806[8:6]   */
    uint32 REG311009:2;                                    /* REG311009[10:9]  */
    uint32 REG3111:1;                                      /* REG3111          */
    uint32 REG311312:2;                                    /* REG311312[13:12] */
    uint32 :1;                                             /* Reserved Bits    */
    uint32 REG311715:3;                                    /* REG311715[17:15] */
    uint32 REG311918:2;                                    /* REG311918[19:18] */
    uint32 REG3120:1;                                      /* REG3120          */
    uint32 REG312221:2;                                    /* REG312221[22:21] */
    uint32 :9;                                             /* Reserved Bits    */
} __type602;
typedef struct 
{                                                          /* Bit Access       */
    uint16 REG5000:1;                                      /* REG5000          */
    uint16 :4;                                             /* Reserved Bits    */
    uint16 REG500605:2;                                    /* REG500605[6:5]   */
    uint16 REG5007:1;                                      /* REG5007          */
    uint16 REG5008:1;                                      /* REG5008          */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 REG5010:1;                                      /* REG5010          */
    uint16 :5;                                             /* Reserved Bits    */
} __type603;
typedef struct 
{                                                          /* Bit Access       */
    uint16 REG5100:1;                                      /* REG5100          */
    uint16 :4;                                             /* Reserved Bits    */
    uint16 REG510605:2;                                    /* REG510605[6:5]   */
    uint16 REG5107:1;                                      /* REG5107          */
    uint16 REG5108:1;                                      /* REG5108          */
    uint16 :1;                                             /* Reserved Bits    */
    uint16 REG5110:1;                                      /* REG5110          */
    uint16 :5;                                             /* Reserved Bits    */
} __type604;
typedef struct 
{                                                          /* Bit Access       */
    uint8  SELBSSER:3;                                     /* SELBSSER[2:0]    */
    uint8  :5;                                             /* Reserved Bits    */
} __type605;
typedef struct 
{                                                          /* Bit Access       */
    uint8  PIMONSEL:2;                                     /* PIMONSEL[1:0]    */
    uint8  :6;                                             /* Reserved Bits    */
} __type606;
typedef struct 
{                                                          /* Bit Access       */
    uint8  POMONSEL:3;                                     /* POMONSEL[2:0]    */
    uint8  :5;                                             /* Reserved Bits    */
} __type607;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADCD0TSEL000:1;                                 /* ADCD0TSEL000     */
    uint32 ADCD0TSEL001:1;                                 /* ADCD0TSEL001     */
    uint32 ADCD0TSEL002:1;                                 /* ADCD0TSEL002     */
    uint32 ADCD0TSEL003:1;                                 /* ADCD0TSEL003     */
    uint32 ADCD0TSEL004:1;                                 /* ADCD0TSEL004     */
    uint32 ADCD0TSEL005:1;                                 /* ADCD0TSEL005     */
    uint32 ADCD0TSEL006:1;                                 /* ADCD0TSEL006     */
    uint32 ADCD0TSEL007:1;                                 /* ADCD0TSEL007     */
    uint32 ADCD0TSEL008:1;                                 /* ADCD0TSEL008     */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 ADCD0TSEL016:1;                                 /* ADCD0TSEL016     */
    uint32 ADCD0TSEL017:1;                                 /* ADCD0TSEL017     */
    uint32 ADCD0TSEL018:1;                                 /* ADCD0TSEL018     */
    uint32 ADCD0TSEL019:1;                                 /* ADCD0TSEL019     */
    uint32 ADCD0TSEL020:1;                                 /* ADCD0TSEL020     */
    uint32 ADCD0TSEL021:1;                                 /* ADCD0TSEL021     */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 ADCD0TSEL024:1;                                 /* ADCD0TSEL024     */
    uint32 ADCD0TSEL025:1;                                 /* ADCD0TSEL025     */
    uint32 ADCD0TSEL026:1;                                 /* ADCD0TSEL026     */
    uint32 ADCD0TSEL027:1;                                 /* ADCD0TSEL027     */
    uint32 ADCD0TSEL028:1;                                 /* ADCD0TSEL028     */
    uint32 ADCD0TSEL029:1;                                 /* ADCD0TSEL029     */
    uint32 :2;                                             /* Reserved Bits    */
} __type608;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADCD0TSEL100:1;                                 /* ADCD0TSEL100     */
    uint32 ADCD0TSEL101:1;                                 /* ADCD0TSEL101     */
    uint32 ADCD0TSEL102:1;                                 /* ADCD0TSEL102     */
    uint32 ADCD0TSEL103:1;                                 /* ADCD0TSEL103     */
    uint32 ADCD0TSEL104:1;                                 /* ADCD0TSEL104     */
    uint32 ADCD0TSEL105:1;                                 /* ADCD0TSEL105     */
    uint32 ADCD0TSEL106:1;                                 /* ADCD0TSEL106     */
    uint32 ADCD0TSEL107:1;                                 /* ADCD0TSEL107     */
    uint32 ADCD0TSEL108:1;                                 /* ADCD0TSEL108     */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 ADCD0TSEL116:1;                                 /* ADCD0TSEL116     */
    uint32 ADCD0TSEL117:1;                                 /* ADCD0TSEL117     */
    uint32 ADCD0TSEL118:1;                                 /* ADCD0TSEL118     */
    uint32 ADCD0TSEL119:1;                                 /* ADCD0TSEL119     */
    uint32 ADCD0TSEL120:1;                                 /* ADCD0TSEL120     */
    uint32 ADCD0TSEL121:1;                                 /* ADCD0TSEL121     */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 ADCD0TSEL124:1;                                 /* ADCD0TSEL124     */
    uint32 ADCD0TSEL125:1;                                 /* ADCD0TSEL125     */
    uint32 ADCD0TSEL126:1;                                 /* ADCD0TSEL126     */
    uint32 ADCD0TSEL127:1;                                 /* ADCD0TSEL127     */
    uint32 ADCD0TSEL128:1;                                 /* ADCD0TSEL128     */
    uint32 ADCD0TSEL129:1;                                 /* ADCD0TSEL129     */
    uint32 :2;                                             /* Reserved Bits    */
} __type609;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADCD0TSEL200:1;                                 /* ADCD0TSEL200     */
    uint32 ADCD0TSEL201:1;                                 /* ADCD0TSEL201     */
    uint32 ADCD0TSEL202:1;                                 /* ADCD0TSEL202     */
    uint32 ADCD0TSEL203:1;                                 /* ADCD0TSEL203     */
    uint32 ADCD0TSEL204:1;                                 /* ADCD0TSEL204     */
    uint32 ADCD0TSEL205:1;                                 /* ADCD0TSEL205     */
    uint32 ADCD0TSEL206:1;                                 /* ADCD0TSEL206     */
    uint32 ADCD0TSEL207:1;                                 /* ADCD0TSEL207     */
    uint32 ADCD0TSEL208:1;                                 /* ADCD0TSEL208     */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 ADCD0TSEL216:1;                                 /* ADCD0TSEL216     */
    uint32 ADCD0TSEL217:1;                                 /* ADCD0TSEL217     */
    uint32 ADCD0TSEL218:1;                                 /* ADCD0TSEL218     */
    uint32 ADCD0TSEL219:1;                                 /* ADCD0TSEL219     */
    uint32 ADCD0TSEL220:1;                                 /* ADCD0TSEL220     */
    uint32 ADCD0TSEL221:1;                                 /* ADCD0TSEL221     */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 ADCD0TSEL224:1;                                 /* ADCD0TSEL224     */
    uint32 ADCD0TSEL225:1;                                 /* ADCD0TSEL225     */
    uint32 ADCD0TSEL226:1;                                 /* ADCD0TSEL226     */
    uint32 ADCD0TSEL227:1;                                 /* ADCD0TSEL227     */
    uint32 ADCD0TSEL228:1;                                 /* ADCD0TSEL228     */
    uint32 ADCD0TSEL229:1;                                 /* ADCD0TSEL229     */
    uint32 :2;                                             /* Reserved Bits    */
} __type610;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADCD0TSEL300:1;                                 /* ADCD0TSEL300     */
    uint32 ADCD0TSEL301:1;                                 /* ADCD0TSEL301     */
    uint32 ADCD0TSEL302:1;                                 /* ADCD0TSEL302     */
    uint32 ADCD0TSEL303:1;                                 /* ADCD0TSEL303     */
    uint32 ADCD0TSEL304:1;                                 /* ADCD0TSEL304     */
    uint32 ADCD0TSEL305:1;                                 /* ADCD0TSEL305     */
    uint32 ADCD0TSEL306:1;                                 /* ADCD0TSEL306     */
    uint32 ADCD0TSEL307:1;                                 /* ADCD0TSEL307     */
    uint32 ADCD0TSEL308:1;                                 /* ADCD0TSEL308     */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 ADCD0TSEL316:1;                                 /* ADCD0TSEL316     */
    uint32 ADCD0TSEL317:1;                                 /* ADCD0TSEL317     */
    uint32 ADCD0TSEL318:1;                                 /* ADCD0TSEL318     */
    uint32 ADCD0TSEL319:1;                                 /* ADCD0TSEL319     */
    uint32 ADCD0TSEL320:1;                                 /* ADCD0TSEL320     */
    uint32 ADCD0TSEL321:1;                                 /* ADCD0TSEL321     */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 ADCD0TSEL324:1;                                 /* ADCD0TSEL324     */
    uint32 ADCD0TSEL325:1;                                 /* ADCD0TSEL325     */
    uint32 ADCD0TSEL326:1;                                 /* ADCD0TSEL326     */
    uint32 ADCD0TSEL327:1;                                 /* ADCD0TSEL327     */
    uint32 ADCD0TSEL328:1;                                 /* ADCD0TSEL328     */
    uint32 ADCD0TSEL329:1;                                 /* ADCD0TSEL329     */
    uint32 :2;                                             /* Reserved Bits    */
} __type611;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADCD0TSEL400:1;                                 /* ADCD0TSEL400     */
    uint32 ADCD0TSEL401:1;                                 /* ADCD0TSEL401     */
    uint32 ADCD0TSEL402:1;                                 /* ADCD0TSEL402     */
    uint32 ADCD0TSEL403:1;                                 /* ADCD0TSEL403     */
    uint32 ADCD0TSEL404:1;                                 /* ADCD0TSEL404     */
    uint32 ADCD0TSEL405:1;                                 /* ADCD0TSEL405     */
    uint32 ADCD0TSEL406:1;                                 /* ADCD0TSEL406     */
    uint32 ADCD0TSEL407:1;                                 /* ADCD0TSEL407     */
    uint32 ADCD0TSEL408:1;                                 /* ADCD0TSEL408     */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 ADCD0TSEL416:1;                                 /* ADCD0TSEL416     */
    uint32 ADCD0TSEL417:1;                                 /* ADCD0TSEL417     */
    uint32 ADCD0TSEL418:1;                                 /* ADCD0TSEL418     */
    uint32 ADCD0TSEL419:1;                                 /* ADCD0TSEL419     */
    uint32 ADCD0TSEL420:1;                                 /* ADCD0TSEL420     */
    uint32 ADCD0TSEL421:1;                                 /* ADCD0TSEL421     */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 ADCD0TSEL424:1;                                 /* ADCD0TSEL424     */
    uint32 ADCD0TSEL425:1;                                 /* ADCD0TSEL425     */
    uint32 ADCD0TSEL426:1;                                 /* ADCD0TSEL426     */
    uint32 ADCD0TSEL427:1;                                 /* ADCD0TSEL427     */
    uint32 ADCD0TSEL428:1;                                 /* ADCD0TSEL428     */
    uint32 ADCD0TSEL429:1;                                 /* ADCD0TSEL429     */
    uint32 :2;                                             /* Reserved Bits    */
} __type612;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ADCD0EDGSEL10:2;                                /* ADCD0EDGSEL10[1:0] */
    uint16 ADCD0EDGSEL32:2;                                /* ADCD0EDGSEL32[3:2] */
    uint16 ADCD0EDGSEL54:2;                                /* ADCD0EDGSEL54[5:4] */
    uint16 ADCD0EDGSEL76:2;                                /* ADCD0EDGSEL76[7:6] */
    uint16 ADCD0EDGSEL98:2;                                /* ADCD0EDGSEL98[9:8] */
    uint16 :6;                                             /* Reserved Bits    */
} __type613;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADCD1TSEL000:1;                                 /* ADCD1TSEL000     */
    uint32 ADCD1TSEL001:1;                                 /* ADCD1TSEL001     */
    uint32 ADCD1TSEL002:1;                                 /* ADCD1TSEL002     */
    uint32 ADCD1TSEL003:1;                                 /* ADCD1TSEL003     */
    uint32 ADCD1TSEL004:1;                                 /* ADCD1TSEL004     */
    uint32 ADCD1TSEL005:1;                                 /* ADCD1TSEL005     */
    uint32 ADCD1TSEL006:1;                                 /* ADCD1TSEL006     */
    uint32 ADCD1TSEL007:1;                                 /* ADCD1TSEL007     */
    uint32 ADCD1TSEL008:1;                                 /* ADCD1TSEL008     */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 ADCD1TSEL016:1;                                 /* ADCD1TSEL016     */
    uint32 ADCD1TSEL017:1;                                 /* ADCD1TSEL017     */
    uint32 ADCD1TSEL018:1;                                 /* ADCD1TSEL018     */
    uint32 ADCD1TSEL019:1;                                 /* ADCD1TSEL019     */
    uint32 ADCD1TSEL020:1;                                 /* ADCD1TSEL020     */
    uint32 ADCD1TSEL021:1;                                 /* ADCD1TSEL021     */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 ADCD1TSEL024:1;                                 /* ADCD1TSEL024     */
    uint32 ADCD1TSEL025:1;                                 /* ADCD1TSEL025     */
    uint32 ADCD1TSEL026:1;                                 /* ADCD1TSEL026     */
    uint32 ADCD1TSEL027:1;                                 /* ADCD1TSEL027     */
    uint32 ADCD1TSEL028:1;                                 /* ADCD1TSEL028     */
    uint32 ADCD1TSEL029:1;                                 /* ADCD1TSEL029     */
    uint32 :2;                                             /* Reserved Bits    */
} __type614;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADCD1TSEL100:1;                                 /* ADCD1TSEL100     */
    uint32 ADCD1TSEL101:1;                                 /* ADCD1TSEL101     */
    uint32 ADCD1TSEL102:1;                                 /* ADCD1TSEL102     */
    uint32 ADCD1TSEL103:1;                                 /* ADCD1TSEL103     */
    uint32 ADCD1TSEL104:1;                                 /* ADCD1TSEL104     */
    uint32 ADCD1TSEL105:1;                                 /* ADCD1TSEL105     */
    uint32 ADCD1TSEL106:1;                                 /* ADCD1TSEL106     */
    uint32 ADCD1TSEL107:1;                                 /* ADCD1TSEL107     */
    uint32 ADCD1TSEL108:1;                                 /* ADCD1TSEL108     */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 ADCD1TSEL116:1;                                 /* ADCD1TSEL116     */
    uint32 ADCD1TSEL117:1;                                 /* ADCD1TSEL117     */
    uint32 ADCD1TSEL118:1;                                 /* ADCD1TSEL118     */
    uint32 ADCD1TSEL119:1;                                 /* ADCD1TSEL119     */
    uint32 ADCD1TSEL120:1;                                 /* ADCD1TSEL120     */
    uint32 ADCD1TSEL121:1;                                 /* ADCD1TSEL121     */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 ADCD1TSEL124:1;                                 /* ADCD1TSEL124     */
    uint32 ADCD1TSEL125:1;                                 /* ADCD1TSEL125     */
    uint32 ADCD1TSEL126:1;                                 /* ADCD1TSEL126     */
    uint32 ADCD1TSEL127:1;                                 /* ADCD1TSEL127     */
    uint32 ADCD1TSEL128:1;                                 /* ADCD1TSEL128     */
    uint32 ADCD1TSEL129:1;                                 /* ADCD1TSEL129     */
    uint32 :2;                                             /* Reserved Bits    */
} __type615;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADCD1TSEL200:1;                                 /* ADCD1TSEL200     */
    uint32 ADCD1TSEL201:1;                                 /* ADCD1TSEL201     */
    uint32 ADCD1TSEL202:1;                                 /* ADCD1TSEL202     */
    uint32 ADCD1TSEL203:1;                                 /* ADCD1TSEL203     */
    uint32 ADCD1TSEL204:1;                                 /* ADCD1TSEL204     */
    uint32 ADCD1TSEL205:1;                                 /* ADCD1TSEL205     */
    uint32 ADCD1TSEL206:1;                                 /* ADCD1TSEL206     */
    uint32 ADCD1TSEL207:1;                                 /* ADCD1TSEL207     */
    uint32 ADCD1TSEL208:1;                                 /* ADCD1TSEL208     */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 ADCD1TSEL216:1;                                 /* ADCD1TSEL216     */
    uint32 ADCD1TSEL217:1;                                 /* ADCD1TSEL217     */
    uint32 ADCD1TSEL218:1;                                 /* ADCD1TSEL218     */
    uint32 ADCD1TSEL219:1;                                 /* ADCD1TSEL219     */
    uint32 ADCD1TSEL220:1;                                 /* ADCD1TSEL220     */
    uint32 ADCD1TSEL221:1;                                 /* ADCD1TSEL221     */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 ADCD1TSEL224:1;                                 /* ADCD1TSEL224     */
    uint32 ADCD1TSEL225:1;                                 /* ADCD1TSEL225     */
    uint32 ADCD1TSEL226:1;                                 /* ADCD1TSEL226     */
    uint32 ADCD1TSEL227:1;                                 /* ADCD1TSEL227     */
    uint32 ADCD1TSEL228:1;                                 /* ADCD1TSEL228     */
    uint32 ADCD1TSEL229:1;                                 /* ADCD1TSEL229     */
    uint32 :2;                                             /* Reserved Bits    */
} __type616;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADCD1TSEL300:1;                                 /* ADCD1TSEL300     */
    uint32 ADCD1TSEL301:1;                                 /* ADCD1TSEL301     */
    uint32 ADCD1TSEL302:1;                                 /* ADCD1TSEL302     */
    uint32 ADCD1TSEL303:1;                                 /* ADCD1TSEL303     */
    uint32 ADCD1TSEL304:1;                                 /* ADCD1TSEL304     */
    uint32 ADCD1TSEL305:1;                                 /* ADCD1TSEL305     */
    uint32 ADCD1TSEL306:1;                                 /* ADCD1TSEL306     */
    uint32 ADCD1TSEL307:1;                                 /* ADCD1TSEL307     */
    uint32 ADCD1TSEL308:1;                                 /* ADCD1TSEL308     */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 ADCD1TSEL316:1;                                 /* ADCD1TSEL316     */
    uint32 ADCD1TSEL317:1;                                 /* ADCD1TSEL317     */
    uint32 ADCD1TSEL318:1;                                 /* ADCD1TSEL318     */
    uint32 ADCD1TSEL319:1;                                 /* ADCD1TSEL319     */
    uint32 ADCD1TSEL320:1;                                 /* ADCD1TSEL320     */
    uint32 ADCD1TSEL321:1;                                 /* ADCD1TSEL321     */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 ADCD1TSEL324:1;                                 /* ADCD1TSEL324     */
    uint32 ADCD1TSEL325:1;                                 /* ADCD1TSEL325     */
    uint32 ADCD1TSEL326:1;                                 /* ADCD1TSEL326     */
    uint32 ADCD1TSEL327:1;                                 /* ADCD1TSEL327     */
    uint32 ADCD1TSEL328:1;                                 /* ADCD1TSEL328     */
    uint32 ADCD1TSEL329:1;                                 /* ADCD1TSEL329     */
    uint32 :2;                                             /* Reserved Bits    */
} __type617;
typedef struct 
{                                                          /* Bit Access       */
    uint32 ADCD1TSEL400:1;                                 /* ADCD1TSEL400     */
    uint32 ADCD1TSEL401:1;                                 /* ADCD1TSEL401     */
    uint32 ADCD1TSEL402:1;                                 /* ADCD1TSEL402     */
    uint32 ADCD1TSEL403:1;                                 /* ADCD1TSEL403     */
    uint32 ADCD1TSEL404:1;                                 /* ADCD1TSEL404     */
    uint32 ADCD1TSEL405:1;                                 /* ADCD1TSEL405     */
    uint32 ADCD1TSEL406:1;                                 /* ADCD1TSEL406     */
    uint32 ADCD1TSEL407:1;                                 /* ADCD1TSEL407     */
    uint32 ADCD1TSEL408:1;                                 /* ADCD1TSEL408     */
    uint32 :7;                                             /* Reserved Bits    */
    uint32 ADCD1TSEL416:1;                                 /* ADCD1TSEL416     */
    uint32 ADCD1TSEL417:1;                                 /* ADCD1TSEL417     */
    uint32 ADCD1TSEL418:1;                                 /* ADCD1TSEL418     */
    uint32 ADCD1TSEL419:1;                                 /* ADCD1TSEL419     */
    uint32 ADCD1TSEL420:1;                                 /* ADCD1TSEL420     */
    uint32 ADCD1TSEL421:1;                                 /* ADCD1TSEL421     */
    uint32 :2;                                             /* Reserved Bits    */
    uint32 ADCD1TSEL424:1;                                 /* ADCD1TSEL424     */
    uint32 ADCD1TSEL425:1;                                 /* ADCD1TSEL425     */
    uint32 ADCD1TSEL426:1;                                 /* ADCD1TSEL426     */
    uint32 ADCD1TSEL427:1;                                 /* ADCD1TSEL427     */
    uint32 ADCD1TSEL428:1;                                 /* ADCD1TSEL428     */
    uint32 ADCD1TSEL429:1;                                 /* ADCD1TSEL429     */
    uint32 :2;                                             /* Reserved Bits    */
} __type618;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ADCD1EDGSEL10:2;                                /* ADCD1EDGSEL10[1:0] */
    uint16 ADCD1EDGSEL32:2;                                /* ADCD1EDGSEL32[3:2] */
    uint16 ADCD1EDGSEL54:2;                                /* ADCD1EDGSEL54[5:4] */
    uint16 ADCD1EDGSEL76:2;                                /* ADCD1EDGSEL76[7:6] */
    uint16 ADCD1EDGSEL98:2;                                /* ADCD1EDGSEL98[9:8] */
    uint16 :6;                                             /* Reserved Bits    */
} __type619;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ADTEN4000:1;                                    /* ADTEN4000        */
    uint16 ADTEN4001:1;                                    /* ADTEN4001        */
    uint16 ADTEN4002:1;                                    /* ADTEN4002        */
    uint16 ADTEN4003:1;                                    /* ADTEN4003        */
    uint16 ADTEN4004:1;                                    /* ADTEN4004        */
    uint16 ADTEN4005:1;                                    /* ADTEN4005        */
    uint16 ADTEN4006:1;                                    /* ADTEN4006        */
    uint16 ADTEN4007:1;                                    /* ADTEN4007        */
    uint16 ADTEN4008:1;                                    /* ADTEN4008        */
    uint16 ADTEN4009:1;                                    /* ADTEN4009        */
    uint16 ADTEN40010:1;                                   /* ADTEN40010       */
    uint16 ADTEN40011:1;                                   /* ADTEN40011       */
    uint16 ADTEN40012:1;                                   /* ADTEN40012       */
    uint16 ADTEN40013:1;                                   /* ADTEN40013       */
    uint16 ADTEN40014:1;                                   /* ADTEN40014       */
    uint16 ADTEN40015:1;                                   /* ADTEN40015       */
} __type620;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ADTEN4010:1;                                    /* ADTEN4010        */
    uint16 ADTEN4011:1;                                    /* ADTEN4011        */
    uint16 ADTEN4012:1;                                    /* ADTEN4012        */
    uint16 ADTEN4013:1;                                    /* ADTEN4013        */
    uint16 ADTEN4014:1;                                    /* ADTEN4014        */
    uint16 ADTEN4015:1;                                    /* ADTEN4015        */
    uint16 ADTEN4016:1;                                    /* ADTEN4016        */
    uint16 ADTEN4017:1;                                    /* ADTEN4017        */
    uint16 ADTEN4018:1;                                    /* ADTEN4018        */
    uint16 ADTEN4019:1;                                    /* ADTEN4019        */
    uint16 ADTEN40110:1;                                   /* ADTEN40110       */
    uint16 ADTEN40111:1;                                   /* ADTEN40111       */
    uint16 ADTEN40112:1;                                   /* ADTEN40112       */
    uint16 ADTEN40113:1;                                   /* ADTEN40113       */
    uint16 ADTEN40114:1;                                   /* ADTEN40114       */
    uint16 ADTEN40115:1;                                   /* ADTEN40115       */
} __type621;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ADTEN4020:1;                                    /* ADTEN4020        */
    uint16 ADTEN4021:1;                                    /* ADTEN4021        */
    uint16 ADTEN4022:1;                                    /* ADTEN4022        */
    uint16 ADTEN4023:1;                                    /* ADTEN4023        */
    uint16 ADTEN4024:1;                                    /* ADTEN4024        */
    uint16 ADTEN4025:1;                                    /* ADTEN4025        */
    uint16 ADTEN4026:1;                                    /* ADTEN4026        */
    uint16 ADTEN4027:1;                                    /* ADTEN4027        */
    uint16 ADTEN4028:1;                                    /* ADTEN4028        */
    uint16 ADTEN4029:1;                                    /* ADTEN4029        */
    uint16 ADTEN40210:1;                                   /* ADTEN40210       */
    uint16 ADTEN40211:1;                                   /* ADTEN40211       */
    uint16 ADTEN40212:1;                                   /* ADTEN40212       */
    uint16 ADTEN40213:1;                                   /* ADTEN40213       */
    uint16 ADTEN40214:1;                                   /* ADTEN40214       */
    uint16 ADTEN40215:1;                                   /* ADTEN40215       */
} __type622;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ADTEN4030:1;                                    /* ADTEN4030        */
    uint16 ADTEN4031:1;                                    /* ADTEN4031        */
    uint16 ADTEN4032:1;                                    /* ADTEN4032        */
    uint16 ADTEN4033:1;                                    /* ADTEN4033        */
    uint16 ADTEN4034:1;                                    /* ADTEN4034        */
    uint16 ADTEN4035:1;                                    /* ADTEN4035        */
    uint16 ADTEN4036:1;                                    /* ADTEN4036        */
    uint16 ADTEN4037:1;                                    /* ADTEN4037        */
    uint16 ADTEN4038:1;                                    /* ADTEN4038        */
    uint16 ADTEN4039:1;                                    /* ADTEN4039        */
    uint16 ADTEN40310:1;                                   /* ADTEN40310       */
    uint16 ADTEN40311:1;                                   /* ADTEN40311       */
    uint16 ADTEN40312:1;                                   /* ADTEN40312       */
    uint16 ADTEN40313:1;                                   /* ADTEN40313       */
    uint16 ADTEN40314:1;                                   /* ADTEN40314       */
    uint16 ADTEN40315:1;                                   /* ADTEN40315       */
} __type623;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ADTEN4040:1;                                    /* ADTEN4040        */
    uint16 ADTEN4041:1;                                    /* ADTEN4041        */
    uint16 ADTEN4042:1;                                    /* ADTEN4042        */
    uint16 ADTEN4043:1;                                    /* ADTEN4043        */
    uint16 ADTEN4044:1;                                    /* ADTEN4044        */
    uint16 ADTEN4045:1;                                    /* ADTEN4045        */
    uint16 ADTEN4046:1;                                    /* ADTEN4046        */
    uint16 ADTEN4047:1;                                    /* ADTEN4047        */
    uint16 ADTEN4048:1;                                    /* ADTEN4048        */
    uint16 ADTEN4049:1;                                    /* ADTEN4049        */
    uint16 ADTEN40410:1;                                   /* ADTEN40410       */
    uint16 ADTEN40411:1;                                   /* ADTEN40411       */
    uint16 ADTEN40412:1;                                   /* ADTEN40412       */
    uint16 ADTEN40413:1;                                   /* ADTEN40413       */
    uint16 ADTEN40414:1;                                   /* ADTEN40414       */
    uint16 ADTEN40415:1;                                   /* ADTEN40415       */
} __type624;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ADTEN4100:1;                                    /* ADTEN4100        */
    uint16 ADTEN4101:1;                                    /* ADTEN4101        */
    uint16 ADTEN4102:1;                                    /* ADTEN4102        */
    uint16 ADTEN4103:1;                                    /* ADTEN4103        */
    uint16 ADTEN4104:1;                                    /* ADTEN4104        */
    uint16 ADTEN4105:1;                                    /* ADTEN4105        */
    uint16 ADTEN4106:1;                                    /* ADTEN4106        */
    uint16 ADTEN4107:1;                                    /* ADTEN4107        */
    uint16 ADTEN4108:1;                                    /* ADTEN4108        */
    uint16 ADTEN4109:1;                                    /* ADTEN4109        */
    uint16 ADTEN41010:1;                                   /* ADTEN41010       */
    uint16 ADTEN41011:1;                                   /* ADTEN41011       */
    uint16 ADTEN41012:1;                                   /* ADTEN41012       */
    uint16 ADTEN41013:1;                                   /* ADTEN41013       */
    uint16 ADTEN41014:1;                                   /* ADTEN41014       */
    uint16 ADTEN41015:1;                                   /* ADTEN41015       */
} __type625;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ADTEN4110:1;                                    /* ADTEN4110        */
    uint16 ADTEN4111:1;                                    /* ADTEN4111        */
    uint16 ADTEN4112:1;                                    /* ADTEN4112        */
    uint16 ADTEN4113:1;                                    /* ADTEN4113        */
    uint16 ADTEN4114:1;                                    /* ADTEN4114        */
    uint16 ADTEN4115:1;                                    /* ADTEN4115        */
    uint16 ADTEN4116:1;                                    /* ADTEN4116        */
    uint16 ADTEN4117:1;                                    /* ADTEN4117        */
    uint16 ADTEN4118:1;                                    /* ADTEN4118        */
    uint16 ADTEN4119:1;                                    /* ADTEN4119        */
    uint16 ADTEN41110:1;                                   /* ADTEN41110       */
    uint16 ADTEN41111:1;                                   /* ADTEN41111       */
    uint16 ADTEN41112:1;                                   /* ADTEN41112       */
    uint16 ADTEN41113:1;                                   /* ADTEN41113       */
    uint16 ADTEN41114:1;                                   /* ADTEN41114       */
    uint16 ADTEN41115:1;                                   /* ADTEN41115       */
} __type626;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ADTEN4120:1;                                    /* ADTEN4120        */
    uint16 ADTEN4121:1;                                    /* ADTEN4121        */
    uint16 ADTEN4122:1;                                    /* ADTEN4122        */
    uint16 ADTEN4123:1;                                    /* ADTEN4123        */
    uint16 ADTEN4124:1;                                    /* ADTEN4124        */
    uint16 ADTEN4125:1;                                    /* ADTEN4125        */
    uint16 ADTEN4126:1;                                    /* ADTEN4126        */
    uint16 ADTEN4127:1;                                    /* ADTEN4127        */
    uint16 ADTEN4128:1;                                    /* ADTEN4128        */
    uint16 ADTEN4129:1;                                    /* ADTEN4129        */
    uint16 ADTEN41210:1;                                   /* ADTEN41210       */
    uint16 ADTEN41211:1;                                   /* ADTEN41211       */
    uint16 ADTEN41212:1;                                   /* ADTEN41212       */
    uint16 ADTEN41213:1;                                   /* ADTEN41213       */
    uint16 ADTEN41214:1;                                   /* ADTEN41214       */
    uint16 ADTEN41215:1;                                   /* ADTEN41215       */
} __type627;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ADTEN4130:1;                                    /* ADTEN4130        */
    uint16 ADTEN4131:1;                                    /* ADTEN4131        */
    uint16 ADTEN4132:1;                                    /* ADTEN4132        */
    uint16 ADTEN4133:1;                                    /* ADTEN4133        */
    uint16 ADTEN4134:1;                                    /* ADTEN4134        */
    uint16 ADTEN4135:1;                                    /* ADTEN4135        */
    uint16 ADTEN4136:1;                                    /* ADTEN4136        */
    uint16 ADTEN4137:1;                                    /* ADTEN4137        */
    uint16 ADTEN4138:1;                                    /* ADTEN4138        */
    uint16 ADTEN4139:1;                                    /* ADTEN4139        */
    uint16 ADTEN41310:1;                                   /* ADTEN41310       */
    uint16 ADTEN41311:1;                                   /* ADTEN41311       */
    uint16 ADTEN41312:1;                                   /* ADTEN41312       */
    uint16 ADTEN41313:1;                                   /* ADTEN41313       */
    uint16 ADTEN41314:1;                                   /* ADTEN41314       */
    uint16 ADTEN41315:1;                                   /* ADTEN41315       */
} __type628;
typedef struct 
{                                                          /* Bit Access       */
    uint16 ADTEN4140:1;                                    /* ADTEN4140        */
    uint16 ADTEN4141:1;                                    /* ADTEN4141        */
    uint16 ADTEN4142:1;                                    /* ADTEN4142        */
    uint16 ADTEN4143:1;                                    /* ADTEN4143        */
    uint16 ADTEN4144:1;                                    /* ADTEN4144        */
    uint16 ADTEN4145:1;                                    /* ADTEN4145        */
    uint16 ADTEN4146:1;                                    /* ADTEN4146        */
    uint16 ADTEN4147:1;                                    /* ADTEN4147        */
    uint16 ADTEN4148:1;                                    /* ADTEN4148        */
    uint16 ADTEN4149:1;                                    /* ADTEN4149        */
    uint16 ADTEN41410:1;                                   /* ADTEN41410       */
    uint16 ADTEN41411:1;                                   /* ADTEN41411       */
    uint16 ADTEN41412:1;                                   /* ADTEN41412       */
    uint16 ADTEN41413:1;                                   /* ADTEN41413       */
    uint16 ADTEN41414:1;                                   /* ADTEN41414       */
    uint16 ADTEN41415:1;                                   /* ADTEN41415       */
} __type629;
typedef struct 
{                                                          /* Bit Access       */
    uint8  ADSYNCTRG0:1;                                   /* ADSYNCTRG0       */
    uint8  ADSYNCTRG1:1;                                   /* ADSYNCTRG1       */
    uint8  ADSYNCTRG2:1;                                   /* ADSYNCTRG2       */
    uint8  ADSYNCTRG3:1;                                   /* ADSYNCTRG3       */
    uint8  ADSYNCTRG4:1;                                   /* ADSYNCTRG4       */
    uint8  :3;                                             /* Reserved Bits    */
} __type630;

typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type575 BIT;                                         /* Bit Access       */
} __type1854;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type576 BIT;                                         /* Bit Access       */
} __type1855;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type577 BIT;                                         /* Bit Access       */
} __type1856;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type578 BIT;                                         /* Bit Access       */
} __type1857;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type579 BIT;                                         /* Bit Access       */
} __type1858;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type580 BIT;                                         /* Bit Access       */
} __type1859;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type581 BIT;                                         /* Bit Access       */
} __type1860;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type582 BIT;                                         /* Bit Access       */
} __type1861;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type583 BIT;                                         /* Bit Access       */
} __type1862;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type584 BIT;                                         /* Bit Access       */
} __type1863;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type585 BIT;                                         /* Bit Access       */
} __type1864;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type586 BIT;                                         /* Bit Access       */
} __type1865;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type587 BIT;                                         /* Bit Access       */
} __type1866;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type588 BIT;                                         /* Bit Access       */
} __type1867;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type589 BIT;                                         /* Bit Access       */
} __type1868;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type590 BIT;                                         /* Bit Access       */
} __type1869;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type591 BIT;                                         /* Bit Access       */
} __type1870;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type592 BIT;                                         /* Bit Access       */
} __type1871;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type593 BIT;                                         /* Bit Access       */
} __type1872;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type594 BIT;                                         /* Bit Access       */
} __type1873;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type595 BIT;                                         /* Bit Access       */
} __type1874;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type596 BIT;                                         /* Bit Access       */
} __type1875;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type597 BIT;                                         /* Bit Access       */
} __type1876;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type598 BIT;                                         /* Bit Access       */
} __type1877;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type599 BIT;                                         /* Bit Access       */
} __type1878;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type600 BIT;                                         /* Bit Access       */
} __type1879;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type601 BIT;                                         /* Bit Access       */
} __type1880;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type602 BIT;                                         /* Bit Access       */
} __type1881;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type603 BIT;                                         /* Bit Access       */
} __type1882;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type604 BIT;                                         /* Bit Access       */
} __type1883;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type605 BIT;                                         /* Bit Access       */
} __type1884;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type606 BIT;                                         /* Bit Access       */
} __type1885;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type607 BIT;                                         /* Bit Access       */
} __type1886;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type608 BIT;                                         /* Bit Access       */
} __type1887;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type609 BIT;                                         /* Bit Access       */
} __type1888;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type610 BIT;                                         /* Bit Access       */
} __type1889;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type611 BIT;                                         /* Bit Access       */
} __type1890;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type612 BIT;                                         /* Bit Access       */
} __type1891;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type613 BIT;                                         /* Bit Access       */
} __type1892;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type614 BIT;                                         /* Bit Access       */
} __type1893;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type615 BIT;                                         /* Bit Access       */
} __type1894;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type616 BIT;                                         /* Bit Access       */
} __type1895;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type617 BIT;                                         /* Bit Access       */
} __type1896;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    __type618 BIT;                                         /* Bit Access       */
} __type1897;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type619 BIT;                                         /* Bit Access       */
} __type1898;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type620 BIT;                                         /* Bit Access       */
} __type1899;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type621 BIT;                                         /* Bit Access       */
} __type1900;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type622 BIT;                                         /* Bit Access       */
} __type1901;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type623 BIT;                                         /* Bit Access       */
} __type1902;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type624 BIT;                                         /* Bit Access       */
} __type1903;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type625 BIT;                                         /* Bit Access       */
} __type1904;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type626 BIT;                                         /* Bit Access       */
} __type1905;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type627 BIT;                                         /* Bit Access       */
} __type1906;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type628 BIT;                                         /* Bit Access       */
} __type1907;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    __type629 BIT;                                         /* Bit Access       */
} __type1908;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type630 BIT;                                         /* Bit Access       */
} __type1909;

typedef struct 
{                                                          /* Module           */
    __type1854 SST;                                        /* SST              */
    uint8  dummy318[11];                                   /* Reserved         */
    __type1855 SSER0;                                      /* SSER0            */
    uint8  dummy319[2];                                    /* Reserved         */
    __type1856 SSER1;                                      /* SSER1            */
    uint8  dummy320[2];                                    /* Reserved         */
    __type1857 SSER2;                                      /* SSER2            */
    uint8  dummy321[2];                                    /* Reserved         */
    __type1858 SSER3;                                      /* SSER3            */
    uint8  dummy322[2];                                    /* Reserved         */
    __type1859 INI00;                                      /* INI00            */
    uint8  dummy323[3];                                    /* Reserved         */
    __type1860 INI01;                                      /* INI01            */
    uint8  dummy324[7];                                    /* Reserved         */
    __type1861 INI10;                                      /* INI10            */
    uint8  dummy325[3];                                    /* Reserved         */
    __type1862 INI11;                                      /* INI11            */
    uint8  dummy326[67];                                   /* Reserved         */
    __type1863 TSGHALLSEL;                                 /* TSGHALLSEL       */
    uint8  dummy327[3];                                    /* Reserved         */
    __type1864 TAUD0SEL;                                   /* TAUD0SEL         */
    __type1865 TAUD1SEL;                                   /* TAUD1SEL         */
    __type1866 HIZCEN0;                                    /* HIZCEN0          */
    uint8  dummy328[3];                                    /* Reserved         */
    __type1867 HIZCEN1;                                    /* HIZCEN1          */
    uint8  dummy329[3];                                    /* Reserved         */
    __type1868 HIZCEN2;                                    /* HIZCEN2          */
    uint8  dummy330[3];                                    /* Reserved         */
    __type1869 HIZCEN3;                                    /* HIZCEN3          */
    uint8  dummy331[43];                                   /* Reserved         */
    __type1870 ENCSEL400;                                  /* ENCSEL400        */
    uint8  dummy332[3];                                    /* Reserved         */
    __type1871 ENCSEL410;                                  /* ENCSEL410        */
    uint8  dummy333[3];                                    /* Reserved         */
    __type1872 REG200;                                     /* REG200           */
    __type1873 REG201;                                     /* REG201           */
    __type1874 REG202;                                     /* REG202           */
    __type1875 REG203;                                     /* REG203           */
    uint8  dummy334[4];                                    /* Reserved         */
    __type1876 REG210;                                     /* REG210           */
    __type1877 REG211;                                     /* REG211           */
    __type1878 REG212;                                     /* REG212           */
    __type1879 REG213;                                     /* REG213           */
    uint8  dummy335[4];                                    /* Reserved         */
    __type1880 REG30;                                      /* REG30            */
    __type1881 REG31;                                      /* REG31            */
    uint8  dummy336[8];                                    /* Reserved         */
    __type1882 REG50;                                      /* REG50            */
    uint8  dummy337[2];                                    /* Reserved         */
    __type1883 REG51;                                      /* REG51            */
    uint8  dummy338[7938];                                 /* Reserved         */
    __type1884 SELBSSER;                                   /* SELBSSER         */
    uint8  dummy339[20479];                                /* Reserved         */
    __type1885 PIMONSEL;                                   /* PIMONSEL         */
    uint8  dummy340[1023];                                 /* Reserved         */
    __type1886 POMONSEL;                                   /* POMONSEL         */
} __type2597;
typedef struct 
{                                                          /* Module           */
    __type1887 ADCD0TSEL0;                                 /* ADCD0TSEL0       */
    __type1888 ADCD0TSEL1;                                 /* ADCD0TSEL1       */
    __type1889 ADCD0TSEL2;                                 /* ADCD0TSEL2       */
    __type1890 ADCD0TSEL3;                                 /* ADCD0TSEL3       */
    __type1891 ADCD0TSEL4;                                 /* ADCD0TSEL4       */
    uint8  dummy341[8];                                    /* Reserved         */
    __type1892 ADCD0EDGSEL;                                /* ADCD0EDGSEL      */
    uint8  dummy342[2];                                    /* Reserved         */
    __type1893 ADCD1TSEL0;                                 /* ADCD1TSEL0       */
    __type1894 ADCD1TSEL1;                                 /* ADCD1TSEL1       */
    __type1895 ADCD1TSEL2;                                 /* ADCD1TSEL2       */
    __type1896 ADCD1TSEL3;                                 /* ADCD1TSEL3       */
    __type1897 ADCD1TSEL4;                                 /* ADCD1TSEL4       */
    uint8  dummy343[8];                                    /* Reserved         */
    __type1898 ADCD1EDGSEL;                                /* ADCD1EDGSEL      */
    uint8  dummy344[2];                                    /* Reserved         */
    __type1899 ADTEN400;                                   /* ADTEN400         */
    uint8  dummy345[2];                                    /* Reserved         */
    __type1900 ADTEN401;                                   /* ADTEN401         */
    uint8  dummy346[2];                                    /* Reserved         */
    __type1901 ADTEN402;                                   /* ADTEN402         */
    uint8  dummy347[2];                                    /* Reserved         */
    __type1902 ADTEN403;                                   /* ADTEN403         */
    uint8  dummy348[2];                                    /* Reserved         */
    __type1903 ADTEN404;                                   /* ADTEN404         */
    uint8  dummy349[14];                                   /* Reserved         */
    __type1904 ADTEN410;                                   /* ADTEN410         */
    uint8  dummy350[2];                                    /* Reserved         */
    __type1905 ADTEN411;                                   /* ADTEN411         */
    uint8  dummy351[2];                                    /* Reserved         */
    __type1906 ADTEN412;                                   /* ADTEN412         */
    uint8  dummy352[2];                                    /* Reserved         */
    __type1907 ADTEN413;                                   /* ADTEN413         */
    uint8  dummy353[2];                                    /* Reserved         */
    __type1908 ADTEN414;                                   /* ADTEN414         */
    uint8  dummy354[1384590];                              /* Reserved         */
    __type1909 ADSYNCTRG;                                  /* ADSYNCTRG        */
} __type2598;

__IOREG(PIC1A, 0xFFDD0004, __READ_WRITE, __type2597);                 /* PIC1A */
__IOREG(PIC2B, 0xFFDD1000, __READ_WRITE, __type2598);                 /* PIC2B */

#define PIC1ASST PIC1A.SST.UINT8
#define PIC1ASYNCTRG PIC1A.SST.BIT.SYNCTRG
#define PIC1ASSER0 PIC1A.SSER0.UINT16
#define PIC1ASSER000 PIC1A.SSER0.BIT.SSER000
#define PIC1ASSER001 PIC1A.SSER0.BIT.SSER001
#define PIC1ASSER002 PIC1A.SSER0.BIT.SSER002
#define PIC1ASSER003 PIC1A.SSER0.BIT.SSER003
#define PIC1ASSER004 PIC1A.SSER0.BIT.SSER004
#define PIC1ASSER005 PIC1A.SSER0.BIT.SSER005
#define PIC1ASSER006 PIC1A.SSER0.BIT.SSER006
#define PIC1ASSER007 PIC1A.SSER0.BIT.SSER007
#define PIC1ASSER008 PIC1A.SSER0.BIT.SSER008
#define PIC1ASSER009 PIC1A.SSER0.BIT.SSER009
#define PIC1ASSER010 PIC1A.SSER0.BIT.SSER010
#define PIC1ASSER011 PIC1A.SSER0.BIT.SSER011
#define PIC1ASSER012 PIC1A.SSER0.BIT.SSER012
#define PIC1ASSER013 PIC1A.SSER0.BIT.SSER013
#define PIC1ASSER014 PIC1A.SSER0.BIT.SSER014
#define PIC1ASSER015 PIC1A.SSER0.BIT.SSER015
#define PIC1ASSER1 PIC1A.SSER1.UINT16
#define PIC1ASSER100 PIC1A.SSER1.BIT.SSER100
#define PIC1ASSER101 PIC1A.SSER1.BIT.SSER101
#define PIC1ASSER102 PIC1A.SSER1.BIT.SSER102
#define PIC1ASSER103 PIC1A.SSER1.BIT.SSER103
#define PIC1ASSER104 PIC1A.SSER1.BIT.SSER104
#define PIC1ASSER105 PIC1A.SSER1.BIT.SSER105
#define PIC1ASSER106 PIC1A.SSER1.BIT.SSER106
#define PIC1ASSER107 PIC1A.SSER1.BIT.SSER107
#define PIC1ASSER108 PIC1A.SSER1.BIT.SSER108
#define PIC1ASSER109 PIC1A.SSER1.BIT.SSER109
#define PIC1ASSER110 PIC1A.SSER1.BIT.SSER110
#define PIC1ASSER111 PIC1A.SSER1.BIT.SSER111
#define PIC1ASSER112 PIC1A.SSER1.BIT.SSER112
#define PIC1ASSER113 PIC1A.SSER1.BIT.SSER113
#define PIC1ASSER114 PIC1A.SSER1.BIT.SSER114
#define PIC1ASSER115 PIC1A.SSER1.BIT.SSER115
#define PIC1ASSER2 PIC1A.SSER2.UINT16
#define PIC1ASSER200 PIC1A.SSER2.BIT.SSER200
#define PIC1ASSER201 PIC1A.SSER2.BIT.SSER201
#define PIC1ASSER202 PIC1A.SSER2.BIT.SSER202
#define PIC1ASSER203 PIC1A.SSER2.BIT.SSER203
#define PIC1ASSER204 PIC1A.SSER2.BIT.SSER204
#define PIC1ASSER205 PIC1A.SSER2.BIT.SSER205
#define PIC1ASSER206 PIC1A.SSER2.BIT.SSER206
#define PIC1ASSER207 PIC1A.SSER2.BIT.SSER207
#define PIC1ASSER208 PIC1A.SSER2.BIT.SSER208
#define PIC1ASSER209 PIC1A.SSER2.BIT.SSER209
#define PIC1ASSER210 PIC1A.SSER2.BIT.SSER210
#define PIC1ASSER211 PIC1A.SSER2.BIT.SSER211
#define PIC1ASSER212 PIC1A.SSER2.BIT.SSER212
#define PIC1ASSER213 PIC1A.SSER2.BIT.SSER213
#define PIC1ASSER3 PIC1A.SSER3.UINT16
#define PIC1ASSER300 PIC1A.SSER3.BIT.SSER300
#define PIC1ASSER301 PIC1A.SSER3.BIT.SSER301
#define PIC1AINI00 PIC1A.INI00.UINT8
#define PIC1AINI002 PIC1A.INI00.BIT.INI002
#define PIC1AINI003 PIC1A.INI00.BIT.INI003
#define PIC1AINI004 PIC1A.INI00.BIT.INI004
#define PIC1AINI01 PIC1A.INI01.UINT8
#define PIC1AINI010 PIC1A.INI01.BIT.INI010
#define PIC1AINI011 PIC1A.INI01.BIT.INI011
#define PIC1AINI012 PIC1A.INI01.BIT.INI012
#define PIC1AINI10 PIC1A.INI10.UINT8
#define PIC1AINI102 PIC1A.INI10.BIT.INI102
#define PIC1AINI103 PIC1A.INI10.BIT.INI103
#define PIC1AINI104 PIC1A.INI10.BIT.INI104
#define PIC1AINI11 PIC1A.INI11.UINT8
#define PIC1AINI110 PIC1A.INI11.BIT.INI110
#define PIC1AINI111 PIC1A.INI11.BIT.INI111
#define PIC1AINI112 PIC1A.INI11.BIT.INI112
#define PIC1ATSGHALLSEL PIC1A.TSGHALLSEL.UINT8
#define PIC1ATSG0HALLSEL PIC1A.TSGHALLSEL.BIT.TSG0HALLSEL
#define PIC1ATSG1HALLSEL PIC1A.TSGHALLSEL.BIT.TSG1HALLSEL
#define PIC1ATAUD0SEL PIC1A.TAUD0SEL.UINT32
#define PIC1ATAUD0IN010 PIC1A.TAUD0SEL.BIT.TAUD0IN010
#define PIC1ATAUD0IN032 PIC1A.TAUD0SEL.BIT.TAUD0IN032
#define PIC1ATAUD0IN210 PIC1A.TAUD0SEL.BIT.TAUD0IN210
#define PIC1ATAUD0IN232 PIC1A.TAUD0SEL.BIT.TAUD0IN232
#define PIC1ATAUD0IN410 PIC1A.TAUD0SEL.BIT.TAUD0IN410
#define PIC1ATAUD0IN432 PIC1A.TAUD0SEL.BIT.TAUD0IN432
#define PIC1ATAUD0IN610 PIC1A.TAUD0SEL.BIT.TAUD0IN610
#define PIC1ATAUD0IN632 PIC1A.TAUD0SEL.BIT.TAUD0IN632
#define PIC1ATAUD0IN810 PIC1A.TAUD0SEL.BIT.TAUD0IN810
#define PIC1ATAUD0IN832 PIC1A.TAUD0SEL.BIT.TAUD0IN832
#define PIC1ATAUD0IN1010 PIC1A.TAUD0SEL.BIT.TAUD0IN1010
#define PIC1ATAUD0IN1032 PIC1A.TAUD0SEL.BIT.TAUD0IN1032
#define PIC1ATAUD0IN1210 PIC1A.TAUD0SEL.BIT.TAUD0IN1210
#define PIC1ATAUD0IN1232 PIC1A.TAUD0SEL.BIT.TAUD0IN1232
#define PIC1ATAUD0IN1410 PIC1A.TAUD0SEL.BIT.TAUD0IN1410
#define PIC1ATAUD0IN1432 PIC1A.TAUD0SEL.BIT.TAUD0IN1432
#define PIC1ATAUD1SEL PIC1A.TAUD1SEL.UINT32
#define PIC1ATAUD1IN010 PIC1A.TAUD1SEL.BIT.TAUD1IN010
#define PIC1ATAUD1IN032 PIC1A.TAUD1SEL.BIT.TAUD1IN032
#define PIC1ATAUD1IN210 PIC1A.TAUD1SEL.BIT.TAUD1IN210
#define PIC1ATAUD1IN232 PIC1A.TAUD1SEL.BIT.TAUD1IN232
#define PIC1ATAUD1IN410 PIC1A.TAUD1SEL.BIT.TAUD1IN410
#define PIC1ATAUD1IN432 PIC1A.TAUD1SEL.BIT.TAUD1IN432
#define PIC1ATAUD1IN610 PIC1A.TAUD1SEL.BIT.TAUD1IN610
#define PIC1ATAUD1IN632 PIC1A.TAUD1SEL.BIT.TAUD1IN632
#define PIC1ATAUD1IN810 PIC1A.TAUD1SEL.BIT.TAUD1IN810
#define PIC1ATAUD1IN832 PIC1A.TAUD1SEL.BIT.TAUD1IN832
#define PIC1ATAUD1IN1010 PIC1A.TAUD1SEL.BIT.TAUD1IN1010
#define PIC1ATAUD1IN1032 PIC1A.TAUD1SEL.BIT.TAUD1IN1032
#define PIC1ATAUD1IN1210 PIC1A.TAUD1SEL.BIT.TAUD1IN1210
#define PIC1ATAUD1IN1232 PIC1A.TAUD1SEL.BIT.TAUD1IN1232
#define PIC1ATAUD1IN1410 PIC1A.TAUD1SEL.BIT.TAUD1IN1410
#define PIC1ATAUD1IN1432 PIC1A.TAUD1SEL.BIT.TAUD1IN1432
#define PIC1AHIZCEN0 PIC1A.HIZCEN0.UINT8
#define PIC1AHIZCEN00 PIC1A.HIZCEN0.BIT.HIZCEN00
#define PIC1AHIZCEN05 PIC1A.HIZCEN0.BIT.HIZCEN05
#define PIC1AHIZCEN06 PIC1A.HIZCEN0.BIT.HIZCEN06
#define PIC1AHIZCEN07 PIC1A.HIZCEN0.BIT.HIZCEN07
#define PIC1AHIZCEN1 PIC1A.HIZCEN1.UINT8
#define PIC1AHIZCEN10 PIC1A.HIZCEN1.BIT.HIZCEN10
#define PIC1AHIZCEN15 PIC1A.HIZCEN1.BIT.HIZCEN15
#define PIC1AHIZCEN16 PIC1A.HIZCEN1.BIT.HIZCEN16
#define PIC1AHIZCEN17 PIC1A.HIZCEN1.BIT.HIZCEN17
#define PIC1AHIZCEN2 PIC1A.HIZCEN2.UINT8
#define PIC1AHIZCEN20 PIC1A.HIZCEN2.BIT.HIZCEN20
#define PIC1AHIZCEN23 PIC1A.HIZCEN2.BIT.HIZCEN23
#define PIC1AHIZCEN25 PIC1A.HIZCEN2.BIT.HIZCEN25
#define PIC1AHIZCEN26 PIC1A.HIZCEN2.BIT.HIZCEN26
#define PIC1AHIZCEN27 PIC1A.HIZCEN2.BIT.HIZCEN27
#define PIC1AHIZCEN3 PIC1A.HIZCEN3.UINT8
#define PIC1AHIZCEN30 PIC1A.HIZCEN3.BIT.HIZCEN30
#define PIC1AHIZCEN34 PIC1A.HIZCEN3.BIT.HIZCEN34
#define PIC1AHIZCEN35 PIC1A.HIZCEN3.BIT.HIZCEN35
#define PIC1AHIZCEN36 PIC1A.HIZCEN3.BIT.HIZCEN36
#define PIC1AHIZCEN37 PIC1A.HIZCEN3.BIT.HIZCEN37
#define PIC1AENCSEL400 PIC1A.ENCSEL400.UINT8
#define PIC1AENCSEL40030 PIC1A.ENCSEL400.BIT.ENCSEL40030
#define PIC1AENCSEL4007 PIC1A.ENCSEL400.BIT.ENCSEL4007
#define PIC1AENCSEL410 PIC1A.ENCSEL410.UINT8
#define PIC1AENCSEL41030 PIC1A.ENCSEL410.BIT.ENCSEL41030
#define PIC1AENCSEL4107 PIC1A.ENCSEL410.BIT.ENCSEL4107
#define PIC1AREG200 PIC1A.REG200.UINT32
#define PIC1AREG20000 PIC1A.REG200.BIT.REG20000
#define PIC1AREG20001 PIC1A.REG200.BIT.REG20001
#define PIC1AREG20002 PIC1A.REG200.BIT.REG20002
#define PIC1AREG20003 PIC1A.REG200.BIT.REG20003
#define PIC1AREG2000908 PIC1A.REG200.BIT.REG2000908
#define PIC1AREG2001110 PIC1A.REG200.BIT.REG2001110
#define PIC1AREG201 PIC1A.REG201.UINT32
#define PIC1AREG2011716 PIC1A.REG201.BIT.REG2011716
#define PIC1AREG2011918 PIC1A.REG201.BIT.REG2011918
#define PIC1AREG2012120 PIC1A.REG201.BIT.REG2012120
#define PIC1AREG2012322 PIC1A.REG201.BIT.REG2012322
#define PIC1AREG2012524 PIC1A.REG201.BIT.REG2012524
#define PIC1AREG2012726 PIC1A.REG201.BIT.REG2012726
#define PIC1AREG202 PIC1A.REG202.UINT32
#define PIC1AREG20202 PIC1A.REG202.BIT.REG20202
#define PIC1AREG20203 PIC1A.REG202.BIT.REG20203
#define PIC1AREG20204 PIC1A.REG202.BIT.REG20204
#define PIC1AREG2021716 PIC1A.REG202.BIT.REG2021716
#define PIC1AREG2021918 PIC1A.REG202.BIT.REG2021918
#define PIC1AREG2022120 PIC1A.REG202.BIT.REG2022120
#define PIC1AREG2022322 PIC1A.REG202.BIT.REG2022322
#define PIC1AREG2022524 PIC1A.REG202.BIT.REG2022524
#define PIC1AREG2022726 PIC1A.REG202.BIT.REG2022726
#define PIC1AREG203 PIC1A.REG203.UINT32
#define PIC1AREG2030200 PIC1A.REG203.BIT.REG2030200
#define PIC1AREG2030604 PIC1A.REG203.BIT.REG2030604
#define PIC1AREG2031008 PIC1A.REG203.BIT.REG2031008
#define PIC1AREG2031412 PIC1A.REG203.BIT.REG2031412
#define PIC1AREG2031816 PIC1A.REG203.BIT.REG2031816
#define PIC1AREG2032220 PIC1A.REG203.BIT.REG2032220
#define PIC1AREG210 PIC1A.REG210.UINT32
#define PIC1AREG21000 PIC1A.REG210.BIT.REG21000
#define PIC1AREG21001 PIC1A.REG210.BIT.REG21001
#define PIC1AREG21002 PIC1A.REG210.BIT.REG21002
#define PIC1AREG21003 PIC1A.REG210.BIT.REG21003
#define PIC1AREG2100908 PIC1A.REG210.BIT.REG2100908
#define PIC1AREG2101110 PIC1A.REG210.BIT.REG2101110
#define PIC1AREG211 PIC1A.REG211.UINT32
#define PIC1AREG2111716 PIC1A.REG211.BIT.REG2111716
#define PIC1AREG2111918 PIC1A.REG211.BIT.REG2111918
#define PIC1AREG2112120 PIC1A.REG211.BIT.REG2112120
#define PIC1AREG2112322 PIC1A.REG211.BIT.REG2112322
#define PIC1AREG2112524 PIC1A.REG211.BIT.REG2112524
#define PIC1AREG2112726 PIC1A.REG211.BIT.REG2112726
#define PIC1AREG212 PIC1A.REG212.UINT32
#define PIC1AREG21202 PIC1A.REG212.BIT.REG21202
#define PIC1AREG21203 PIC1A.REG212.BIT.REG21203
#define PIC1AREG21204 PIC1A.REG212.BIT.REG21204
#define PIC1AREG2121716 PIC1A.REG212.BIT.REG2121716
#define PIC1AREG2121918 PIC1A.REG212.BIT.REG2121918
#define PIC1AREG2122120 PIC1A.REG212.BIT.REG2122120
#define PIC1AREG2122322 PIC1A.REG212.BIT.REG2122322
#define PIC1AREG2122524 PIC1A.REG212.BIT.REG2122524
#define PIC1AREG2122726 PIC1A.REG212.BIT.REG2122726
#define PIC1AREG213 PIC1A.REG213.UINT32
#define PIC1AREG2130200 PIC1A.REG213.BIT.REG2130200
#define PIC1AREG2130604 PIC1A.REG213.BIT.REG2130604
#define PIC1AREG2131008 PIC1A.REG213.BIT.REG2131008
#define PIC1AREG2131412 PIC1A.REG213.BIT.REG2131412
#define PIC1AREG2131816 PIC1A.REG213.BIT.REG2131816
#define PIC1AREG2132220 PIC1A.REG213.BIT.REG2132220
#define PIC1AREG30 PIC1A.REG30.UINT32
#define PIC1AREG3000 PIC1A.REG30.BIT.REG3000
#define PIC1AREG3001 PIC1A.REG30.BIT.REG3001
#define PIC1AREG300502 PIC1A.REG30.BIT.REG300502
#define PIC1AREG300706 PIC1A.REG30.BIT.REG300706
#define PIC1AREG300908 PIC1A.REG30.BIT.REG300908
#define PIC1AREG301110 PIC1A.REG30.BIT.REG301110
#define PIC1AREG301512 PIC1A.REG30.BIT.REG301512
#define PIC1AREG301716 PIC1A.REG30.BIT.REG301716
#define PIC1AREG3018 PIC1A.REG30.BIT.REG3018
#define PIC1AREG302019 PIC1A.REG30.BIT.REG302019
#define PIC1AREG3021 PIC1A.REG30.BIT.REG3021
#define PIC1AREG3022 PIC1A.REG30.BIT.REG3022
#define PIC1AREG31 PIC1A.REG31.UINT32
#define PIC1AREG3100 PIC1A.REG31.BIT.REG3100
#define PIC1AREG3101 PIC1A.REG31.BIT.REG3101
#define PIC1AREG3103 PIC1A.REG31.BIT.REG3103
#define PIC1AREG3104 PIC1A.REG31.BIT.REG3104
#define PIC1AREG310806 PIC1A.REG31.BIT.REG310806
#define PIC1AREG311009 PIC1A.REG31.BIT.REG311009
#define PIC1AREG3111 PIC1A.REG31.BIT.REG3111
#define PIC1AREG311312 PIC1A.REG31.BIT.REG311312
#define PIC1AREG311715 PIC1A.REG31.BIT.REG311715
#define PIC1AREG311918 PIC1A.REG31.BIT.REG311918
#define PIC1AREG3120 PIC1A.REG31.BIT.REG3120
#define PIC1AREG312221 PIC1A.REG31.BIT.REG312221
#define PIC1AREG50 PIC1A.REG50.UINT16
#define PIC1AREG5000 PIC1A.REG50.BIT.REG5000
#define PIC1AREG500605 PIC1A.REG50.BIT.REG500605
#define PIC1AREG5007 PIC1A.REG50.BIT.REG5007
#define PIC1AREG5008 PIC1A.REG50.BIT.REG5008
#define PIC1AREG5010 PIC1A.REG50.BIT.REG5010
#define PIC1AREG51 PIC1A.REG51.UINT16
#define PIC1AREG5100 PIC1A.REG51.BIT.REG5100
#define PIC1AREG510605 PIC1A.REG51.BIT.REG510605
#define PIC1AREG5107 PIC1A.REG51.BIT.REG5107
#define PIC1AREG5108 PIC1A.REG51.BIT.REG5108
#define PIC1AREG5110 PIC1A.REG51.BIT.REG5110
#define PIC1ASELBSSER PIC1A.SELBSSER.UINT8
#define PIC1APIMONSEL PIC1A.PIMONSEL.UINT8
#define PIC1APOMONSEL PIC1A.POMONSEL.UINT8
#define PIC2BADCD0TSEL0 PIC2B.ADCD0TSEL0.UINT32
#define PIC2BADCD0TSEL000 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL000
#define PIC2BADCD0TSEL001 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL001
#define PIC2BADCD0TSEL002 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL002
#define PIC2BADCD0TSEL003 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL003
#define PIC2BADCD0TSEL004 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL004
#define PIC2BADCD0TSEL005 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL005
#define PIC2BADCD0TSEL006 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL006
#define PIC2BADCD0TSEL007 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL007
#define PIC2BADCD0TSEL008 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL008
#define PIC2BADCD0TSEL016 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL016
#define PIC2BADCD0TSEL017 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL017
#define PIC2BADCD0TSEL018 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL018
#define PIC2BADCD0TSEL019 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL019
#define PIC2BADCD0TSEL020 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL020
#define PIC2BADCD0TSEL021 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL021
#define PIC2BADCD0TSEL024 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL024
#define PIC2BADCD0TSEL025 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL025
#define PIC2BADCD0TSEL026 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL026
#define PIC2BADCD0TSEL027 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL027
#define PIC2BADCD0TSEL028 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL028
#define PIC2BADCD0TSEL029 PIC2B.ADCD0TSEL0.BIT.ADCD0TSEL029
#define PIC2BADCD0TSEL1 PIC2B.ADCD0TSEL1.UINT32
#define PIC2BADCD0TSEL100 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL100
#define PIC2BADCD0TSEL101 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL101
#define PIC2BADCD0TSEL102 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL102
#define PIC2BADCD0TSEL103 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL103
#define PIC2BADCD0TSEL104 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL104
#define PIC2BADCD0TSEL105 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL105
#define PIC2BADCD0TSEL106 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL106
#define PIC2BADCD0TSEL107 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL107
#define PIC2BADCD0TSEL108 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL108
#define PIC2BADCD0TSEL116 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL116
#define PIC2BADCD0TSEL117 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL117
#define PIC2BADCD0TSEL118 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL118
#define PIC2BADCD0TSEL119 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL119
#define PIC2BADCD0TSEL120 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL120
#define PIC2BADCD0TSEL121 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL121
#define PIC2BADCD0TSEL124 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL124
#define PIC2BADCD0TSEL125 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL125
#define PIC2BADCD0TSEL126 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL126
#define PIC2BADCD0TSEL127 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL127
#define PIC2BADCD0TSEL128 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL128
#define PIC2BADCD0TSEL129 PIC2B.ADCD0TSEL1.BIT.ADCD0TSEL129
#define PIC2BADCD0TSEL2 PIC2B.ADCD0TSEL2.UINT32
#define PIC2BADCD0TSEL200 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL200
#define PIC2BADCD0TSEL201 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL201
#define PIC2BADCD0TSEL202 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL202
#define PIC2BADCD0TSEL203 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL203
#define PIC2BADCD0TSEL204 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL204
#define PIC2BADCD0TSEL205 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL205
#define PIC2BADCD0TSEL206 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL206
#define PIC2BADCD0TSEL207 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL207
#define PIC2BADCD0TSEL208 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL208
#define PIC2BADCD0TSEL216 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL216
#define PIC2BADCD0TSEL217 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL217
#define PIC2BADCD0TSEL218 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL218
#define PIC2BADCD0TSEL219 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL219
#define PIC2BADCD0TSEL220 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL220
#define PIC2BADCD0TSEL221 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL221
#define PIC2BADCD0TSEL224 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL224
#define PIC2BADCD0TSEL225 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL225
#define PIC2BADCD0TSEL226 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL226
#define PIC2BADCD0TSEL227 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL227
#define PIC2BADCD0TSEL228 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL228
#define PIC2BADCD0TSEL229 PIC2B.ADCD0TSEL2.BIT.ADCD0TSEL229
#define PIC2BADCD0TSEL3 PIC2B.ADCD0TSEL3.UINT32
#define PIC2BADCD0TSEL300 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL300
#define PIC2BADCD0TSEL301 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL301
#define PIC2BADCD0TSEL302 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL302
#define PIC2BADCD0TSEL303 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL303
#define PIC2BADCD0TSEL304 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL304
#define PIC2BADCD0TSEL305 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL305
#define PIC2BADCD0TSEL306 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL306
#define PIC2BADCD0TSEL307 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL307
#define PIC2BADCD0TSEL308 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL308
#define PIC2BADCD0TSEL316 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL316
#define PIC2BADCD0TSEL317 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL317
#define PIC2BADCD0TSEL318 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL318
#define PIC2BADCD0TSEL319 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL319
#define PIC2BADCD0TSEL320 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL320
#define PIC2BADCD0TSEL321 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL321
#define PIC2BADCD0TSEL324 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL324
#define PIC2BADCD0TSEL325 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL325
#define PIC2BADCD0TSEL326 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL326
#define PIC2BADCD0TSEL327 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL327
#define PIC2BADCD0TSEL328 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL328
#define PIC2BADCD0TSEL329 PIC2B.ADCD0TSEL3.BIT.ADCD0TSEL329
#define PIC2BADCD0TSEL4 PIC2B.ADCD0TSEL4.UINT32
#define PIC2BADCD0TSEL400 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL400
#define PIC2BADCD0TSEL401 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL401
#define PIC2BADCD0TSEL402 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL402
#define PIC2BADCD0TSEL403 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL403
#define PIC2BADCD0TSEL404 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL404
#define PIC2BADCD0TSEL405 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL405
#define PIC2BADCD0TSEL406 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL406
#define PIC2BADCD0TSEL407 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL407
#define PIC2BADCD0TSEL408 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL408
#define PIC2BADCD0TSEL416 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL416
#define PIC2BADCD0TSEL417 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL417
#define PIC2BADCD0TSEL418 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL418
#define PIC2BADCD0TSEL419 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL419
#define PIC2BADCD0TSEL420 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL420
#define PIC2BADCD0TSEL421 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL421
#define PIC2BADCD0TSEL424 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL424
#define PIC2BADCD0TSEL425 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL425
#define PIC2BADCD0TSEL426 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL426
#define PIC2BADCD0TSEL427 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL427
#define PIC2BADCD0TSEL428 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL428
#define PIC2BADCD0TSEL429 PIC2B.ADCD0TSEL4.BIT.ADCD0TSEL429
#define PIC2BADCD0EDGSEL PIC2B.ADCD0EDGSEL.UINT16
#define PIC2BADCD0EDGSEL10 PIC2B.ADCD0EDGSEL.BIT.ADCD0EDGSEL10
#define PIC2BADCD0EDGSEL32 PIC2B.ADCD0EDGSEL.BIT.ADCD0EDGSEL32
#define PIC2BADCD0EDGSEL54 PIC2B.ADCD0EDGSEL.BIT.ADCD0EDGSEL54
#define PIC2BADCD0EDGSEL76 PIC2B.ADCD0EDGSEL.BIT.ADCD0EDGSEL76
#define PIC2BADCD0EDGSEL98 PIC2B.ADCD0EDGSEL.BIT.ADCD0EDGSEL98
#define PIC2BADCD1TSEL0 PIC2B.ADCD1TSEL0.UINT32
#define PIC2BADCD1TSEL000 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL000
#define PIC2BADCD1TSEL001 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL001
#define PIC2BADCD1TSEL002 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL002
#define PIC2BADCD1TSEL003 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL003
#define PIC2BADCD1TSEL004 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL004
#define PIC2BADCD1TSEL005 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL005
#define PIC2BADCD1TSEL006 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL006
#define PIC2BADCD1TSEL007 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL007
#define PIC2BADCD1TSEL008 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL008
#define PIC2BADCD1TSEL016 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL016
#define PIC2BADCD1TSEL017 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL017
#define PIC2BADCD1TSEL018 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL018
#define PIC2BADCD1TSEL019 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL019
#define PIC2BADCD1TSEL020 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL020
#define PIC2BADCD1TSEL021 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL021
#define PIC2BADCD1TSEL024 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL024
#define PIC2BADCD1TSEL025 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL025
#define PIC2BADCD1TSEL026 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL026
#define PIC2BADCD1TSEL027 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL027
#define PIC2BADCD1TSEL028 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL028
#define PIC2BADCD1TSEL029 PIC2B.ADCD1TSEL0.BIT.ADCD1TSEL029
#define PIC2BADCD1TSEL1 PIC2B.ADCD1TSEL1.UINT32
#define PIC2BADCD1TSEL100 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL100
#define PIC2BADCD1TSEL101 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL101
#define PIC2BADCD1TSEL102 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL102
#define PIC2BADCD1TSEL103 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL103
#define PIC2BADCD1TSEL104 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL104
#define PIC2BADCD1TSEL105 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL105
#define PIC2BADCD1TSEL106 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL106
#define PIC2BADCD1TSEL107 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL107
#define PIC2BADCD1TSEL108 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL108
#define PIC2BADCD1TSEL116 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL116
#define PIC2BADCD1TSEL117 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL117
#define PIC2BADCD1TSEL118 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL118
#define PIC2BADCD1TSEL119 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL119
#define PIC2BADCD1TSEL120 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL120
#define PIC2BADCD1TSEL121 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL121
#define PIC2BADCD1TSEL124 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL124
#define PIC2BADCD1TSEL125 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL125
#define PIC2BADCD1TSEL126 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL126
#define PIC2BADCD1TSEL127 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL127
#define PIC2BADCD1TSEL128 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL128
#define PIC2BADCD1TSEL129 PIC2B.ADCD1TSEL1.BIT.ADCD1TSEL129
#define PIC2BADCD1TSEL2 PIC2B.ADCD1TSEL2.UINT32
#define PIC2BADCD1TSEL200 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL200
#define PIC2BADCD1TSEL201 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL201
#define PIC2BADCD1TSEL202 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL202
#define PIC2BADCD1TSEL203 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL203
#define PIC2BADCD1TSEL204 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL204
#define PIC2BADCD1TSEL205 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL205
#define PIC2BADCD1TSEL206 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL206
#define PIC2BADCD1TSEL207 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL207
#define PIC2BADCD1TSEL208 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL208
#define PIC2BADCD1TSEL216 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL216
#define PIC2BADCD1TSEL217 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL217
#define PIC2BADCD1TSEL218 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL218
#define PIC2BADCD1TSEL219 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL219
#define PIC2BADCD1TSEL220 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL220
#define PIC2BADCD1TSEL221 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL221
#define PIC2BADCD1TSEL224 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL224
#define PIC2BADCD1TSEL225 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL225
#define PIC2BADCD1TSEL226 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL226
#define PIC2BADCD1TSEL227 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL227
#define PIC2BADCD1TSEL228 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL228
#define PIC2BADCD1TSEL229 PIC2B.ADCD1TSEL2.BIT.ADCD1TSEL229
#define PIC2BADCD1TSEL3 PIC2B.ADCD1TSEL3.UINT32
#define PIC2BADCD1TSEL300 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL300
#define PIC2BADCD1TSEL301 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL301
#define PIC2BADCD1TSEL302 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL302
#define PIC2BADCD1TSEL303 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL303
#define PIC2BADCD1TSEL304 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL304
#define PIC2BADCD1TSEL305 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL305
#define PIC2BADCD1TSEL306 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL306
#define PIC2BADCD1TSEL307 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL307
#define PIC2BADCD1TSEL308 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL308
#define PIC2BADCD1TSEL316 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL316
#define PIC2BADCD1TSEL317 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL317
#define PIC2BADCD1TSEL318 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL318
#define PIC2BADCD1TSEL319 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL319
#define PIC2BADCD1TSEL320 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL320
#define PIC2BADCD1TSEL321 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL321
#define PIC2BADCD1TSEL324 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL324
#define PIC2BADCD1TSEL325 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL325
#define PIC2BADCD1TSEL326 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL326
#define PIC2BADCD1TSEL327 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL327
#define PIC2BADCD1TSEL328 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL328
#define PIC2BADCD1TSEL329 PIC2B.ADCD1TSEL3.BIT.ADCD1TSEL329
#define PIC2BADCD1TSEL4 PIC2B.ADCD1TSEL4.UINT32
#define PIC2BADCD1TSEL400 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL400
#define PIC2BADCD1TSEL401 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL401
#define PIC2BADCD1TSEL402 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL402
#define PIC2BADCD1TSEL403 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL403
#define PIC2BADCD1TSEL404 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL404
#define PIC2BADCD1TSEL405 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL405
#define PIC2BADCD1TSEL406 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL406
#define PIC2BADCD1TSEL407 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL407
#define PIC2BADCD1TSEL408 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL408
#define PIC2BADCD1TSEL416 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL416
#define PIC2BADCD1TSEL417 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL417
#define PIC2BADCD1TSEL418 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL418
#define PIC2BADCD1TSEL419 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL419
#define PIC2BADCD1TSEL420 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL420
#define PIC2BADCD1TSEL421 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL421
#define PIC2BADCD1TSEL424 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL424
#define PIC2BADCD1TSEL425 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL425
#define PIC2BADCD1TSEL426 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL426
#define PIC2BADCD1TSEL427 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL427
#define PIC2BADCD1TSEL428 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL428
#define PIC2BADCD1TSEL429 PIC2B.ADCD1TSEL4.BIT.ADCD1TSEL429
#define PIC2BADCD1EDGSEL PIC2B.ADCD1EDGSEL.UINT16
#define PIC2BADCD1EDGSEL10 PIC2B.ADCD1EDGSEL.BIT.ADCD1EDGSEL10
#define PIC2BADCD1EDGSEL32 PIC2B.ADCD1EDGSEL.BIT.ADCD1EDGSEL32
#define PIC2BADCD1EDGSEL54 PIC2B.ADCD1EDGSEL.BIT.ADCD1EDGSEL54
#define PIC2BADCD1EDGSEL76 PIC2B.ADCD1EDGSEL.BIT.ADCD1EDGSEL76
#define PIC2BADCD1EDGSEL98 PIC2B.ADCD1EDGSEL.BIT.ADCD1EDGSEL98
#define PIC2BADTEN400 PIC2B.ADTEN400.UINT16
#define PIC2BADTEN4000 PIC2B.ADTEN400.BIT.ADTEN4000
#define PIC2BADTEN4001 PIC2B.ADTEN400.BIT.ADTEN4001
#define PIC2BADTEN4002 PIC2B.ADTEN400.BIT.ADTEN4002
#define PIC2BADTEN4003 PIC2B.ADTEN400.BIT.ADTEN4003
#define PIC2BADTEN4004 PIC2B.ADTEN400.BIT.ADTEN4004
#define PIC2BADTEN4005 PIC2B.ADTEN400.BIT.ADTEN4005
#define PIC2BADTEN4006 PIC2B.ADTEN400.BIT.ADTEN4006
#define PIC2BADTEN4007 PIC2B.ADTEN400.BIT.ADTEN4007
#define PIC2BADTEN4008 PIC2B.ADTEN400.BIT.ADTEN4008
#define PIC2BADTEN4009 PIC2B.ADTEN400.BIT.ADTEN4009
#define PIC2BADTEN40010 PIC2B.ADTEN400.BIT.ADTEN40010
#define PIC2BADTEN40011 PIC2B.ADTEN400.BIT.ADTEN40011
#define PIC2BADTEN40012 PIC2B.ADTEN400.BIT.ADTEN40012
#define PIC2BADTEN40013 PIC2B.ADTEN400.BIT.ADTEN40013
#define PIC2BADTEN40014 PIC2B.ADTEN400.BIT.ADTEN40014
#define PIC2BADTEN40015 PIC2B.ADTEN400.BIT.ADTEN40015
#define PIC2BADTEN401 PIC2B.ADTEN401.UINT16
#define PIC2BADTEN4010 PIC2B.ADTEN401.BIT.ADTEN4010
#define PIC2BADTEN4011 PIC2B.ADTEN401.BIT.ADTEN4011
#define PIC2BADTEN4012 PIC2B.ADTEN401.BIT.ADTEN4012
#define PIC2BADTEN4013 PIC2B.ADTEN401.BIT.ADTEN4013
#define PIC2BADTEN4014 PIC2B.ADTEN401.BIT.ADTEN4014
#define PIC2BADTEN4015 PIC2B.ADTEN401.BIT.ADTEN4015
#define PIC2BADTEN4016 PIC2B.ADTEN401.BIT.ADTEN4016
#define PIC2BADTEN4017 PIC2B.ADTEN401.BIT.ADTEN4017
#define PIC2BADTEN4018 PIC2B.ADTEN401.BIT.ADTEN4018
#define PIC2BADTEN4019 PIC2B.ADTEN401.BIT.ADTEN4019
#define PIC2BADTEN40110 PIC2B.ADTEN401.BIT.ADTEN40110
#define PIC2BADTEN40111 PIC2B.ADTEN401.BIT.ADTEN40111
#define PIC2BADTEN40112 PIC2B.ADTEN401.BIT.ADTEN40112
#define PIC2BADTEN40113 PIC2B.ADTEN401.BIT.ADTEN40113
#define PIC2BADTEN40114 PIC2B.ADTEN401.BIT.ADTEN40114
#define PIC2BADTEN40115 PIC2B.ADTEN401.BIT.ADTEN40115
#define PIC2BADTEN402 PIC2B.ADTEN402.UINT16
#define PIC2BADTEN4020 PIC2B.ADTEN402.BIT.ADTEN4020
#define PIC2BADTEN4021 PIC2B.ADTEN402.BIT.ADTEN4021
#define PIC2BADTEN4022 PIC2B.ADTEN402.BIT.ADTEN4022
#define PIC2BADTEN4023 PIC2B.ADTEN402.BIT.ADTEN4023
#define PIC2BADTEN4024 PIC2B.ADTEN402.BIT.ADTEN4024
#define PIC2BADTEN4025 PIC2B.ADTEN402.BIT.ADTEN4025
#define PIC2BADTEN4026 PIC2B.ADTEN402.BIT.ADTEN4026
#define PIC2BADTEN4027 PIC2B.ADTEN402.BIT.ADTEN4027
#define PIC2BADTEN4028 PIC2B.ADTEN402.BIT.ADTEN4028
#define PIC2BADTEN4029 PIC2B.ADTEN402.BIT.ADTEN4029
#define PIC2BADTEN40210 PIC2B.ADTEN402.BIT.ADTEN40210
#define PIC2BADTEN40211 PIC2B.ADTEN402.BIT.ADTEN40211
#define PIC2BADTEN40212 PIC2B.ADTEN402.BIT.ADTEN40212
#define PIC2BADTEN40213 PIC2B.ADTEN402.BIT.ADTEN40213
#define PIC2BADTEN40214 PIC2B.ADTEN402.BIT.ADTEN40214
#define PIC2BADTEN40215 PIC2B.ADTEN402.BIT.ADTEN40215
#define PIC2BADTEN403 PIC2B.ADTEN403.UINT16
#define PIC2BADTEN4030 PIC2B.ADTEN403.BIT.ADTEN4030
#define PIC2BADTEN4031 PIC2B.ADTEN403.BIT.ADTEN4031
#define PIC2BADTEN4032 PIC2B.ADTEN403.BIT.ADTEN4032
#define PIC2BADTEN4033 PIC2B.ADTEN403.BIT.ADTEN4033
#define PIC2BADTEN4034 PIC2B.ADTEN403.BIT.ADTEN4034
#define PIC2BADTEN4035 PIC2B.ADTEN403.BIT.ADTEN4035
#define PIC2BADTEN4036 PIC2B.ADTEN403.BIT.ADTEN4036
#define PIC2BADTEN4037 PIC2B.ADTEN403.BIT.ADTEN4037
#define PIC2BADTEN4038 PIC2B.ADTEN403.BIT.ADTEN4038
#define PIC2BADTEN4039 PIC2B.ADTEN403.BIT.ADTEN4039
#define PIC2BADTEN40310 PIC2B.ADTEN403.BIT.ADTEN40310
#define PIC2BADTEN40311 PIC2B.ADTEN403.BIT.ADTEN40311
#define PIC2BADTEN40312 PIC2B.ADTEN403.BIT.ADTEN40312
#define PIC2BADTEN40313 PIC2B.ADTEN403.BIT.ADTEN40313
#define PIC2BADTEN40314 PIC2B.ADTEN403.BIT.ADTEN40314
#define PIC2BADTEN40315 PIC2B.ADTEN403.BIT.ADTEN40315
#define PIC2BADTEN404 PIC2B.ADTEN404.UINT16
#define PIC2BADTEN4040 PIC2B.ADTEN404.BIT.ADTEN4040
#define PIC2BADTEN4041 PIC2B.ADTEN404.BIT.ADTEN4041
#define PIC2BADTEN4042 PIC2B.ADTEN404.BIT.ADTEN4042
#define PIC2BADTEN4043 PIC2B.ADTEN404.BIT.ADTEN4043
#define PIC2BADTEN4044 PIC2B.ADTEN404.BIT.ADTEN4044
#define PIC2BADTEN4045 PIC2B.ADTEN404.BIT.ADTEN4045
#define PIC2BADTEN4046 PIC2B.ADTEN404.BIT.ADTEN4046
#define PIC2BADTEN4047 PIC2B.ADTEN404.BIT.ADTEN4047
#define PIC2BADTEN4048 PIC2B.ADTEN404.BIT.ADTEN4048
#define PIC2BADTEN4049 PIC2B.ADTEN404.BIT.ADTEN4049
#define PIC2BADTEN40410 PIC2B.ADTEN404.BIT.ADTEN40410
#define PIC2BADTEN40411 PIC2B.ADTEN404.BIT.ADTEN40411
#define PIC2BADTEN40412 PIC2B.ADTEN404.BIT.ADTEN40412
#define PIC2BADTEN40413 PIC2B.ADTEN404.BIT.ADTEN40413
#define PIC2BADTEN40414 PIC2B.ADTEN404.BIT.ADTEN40414
#define PIC2BADTEN40415 PIC2B.ADTEN404.BIT.ADTEN40415
#define PIC2BADTEN410 PIC2B.ADTEN410.UINT16
#define PIC2BADTEN4100 PIC2B.ADTEN410.BIT.ADTEN4100
#define PIC2BADTEN4101 PIC2B.ADTEN410.BIT.ADTEN4101
#define PIC2BADTEN4102 PIC2B.ADTEN410.BIT.ADTEN4102
#define PIC2BADTEN4103 PIC2B.ADTEN410.BIT.ADTEN4103
#define PIC2BADTEN4104 PIC2B.ADTEN410.BIT.ADTEN4104
#define PIC2BADTEN4105 PIC2B.ADTEN410.BIT.ADTEN4105
#define PIC2BADTEN4106 PIC2B.ADTEN410.BIT.ADTEN4106
#define PIC2BADTEN4107 PIC2B.ADTEN410.BIT.ADTEN4107
#define PIC2BADTEN4108 PIC2B.ADTEN410.BIT.ADTEN4108
#define PIC2BADTEN4109 PIC2B.ADTEN410.BIT.ADTEN4109
#define PIC2BADTEN41010 PIC2B.ADTEN410.BIT.ADTEN41010
#define PIC2BADTEN41011 PIC2B.ADTEN410.BIT.ADTEN41011
#define PIC2BADTEN41012 PIC2B.ADTEN410.BIT.ADTEN41012
#define PIC2BADTEN41013 PIC2B.ADTEN410.BIT.ADTEN41013
#define PIC2BADTEN41014 PIC2B.ADTEN410.BIT.ADTEN41014
#define PIC2BADTEN41015 PIC2B.ADTEN410.BIT.ADTEN41015
#define PIC2BADTEN411 PIC2B.ADTEN411.UINT16
#define PIC2BADTEN4110 PIC2B.ADTEN411.BIT.ADTEN4110
#define PIC2BADTEN4111 PIC2B.ADTEN411.BIT.ADTEN4111
#define PIC2BADTEN4112 PIC2B.ADTEN411.BIT.ADTEN4112
#define PIC2BADTEN4113 PIC2B.ADTEN411.BIT.ADTEN4113
#define PIC2BADTEN4114 PIC2B.ADTEN411.BIT.ADTEN4114
#define PIC2BADTEN4115 PIC2B.ADTEN411.BIT.ADTEN4115
#define PIC2BADTEN4116 PIC2B.ADTEN411.BIT.ADTEN4116
#define PIC2BADTEN4117 PIC2B.ADTEN411.BIT.ADTEN4117
#define PIC2BADTEN4118 PIC2B.ADTEN411.BIT.ADTEN4118
#define PIC2BADTEN4119 PIC2B.ADTEN411.BIT.ADTEN4119
#define PIC2BADTEN41110 PIC2B.ADTEN411.BIT.ADTEN41110
#define PIC2BADTEN41111 PIC2B.ADTEN411.BIT.ADTEN41111
#define PIC2BADTEN41112 PIC2B.ADTEN411.BIT.ADTEN41112
#define PIC2BADTEN41113 PIC2B.ADTEN411.BIT.ADTEN41113
#define PIC2BADTEN41114 PIC2B.ADTEN411.BIT.ADTEN41114
#define PIC2BADTEN41115 PIC2B.ADTEN411.BIT.ADTEN41115
#define PIC2BADTEN412 PIC2B.ADTEN412.UINT16
#define PIC2BADTEN4120 PIC2B.ADTEN412.BIT.ADTEN4120
#define PIC2BADTEN4121 PIC2B.ADTEN412.BIT.ADTEN4121
#define PIC2BADTEN4122 PIC2B.ADTEN412.BIT.ADTEN4122
#define PIC2BADTEN4123 PIC2B.ADTEN412.BIT.ADTEN4123
#define PIC2BADTEN4124 PIC2B.ADTEN412.BIT.ADTEN4124
#define PIC2BADTEN4125 PIC2B.ADTEN412.BIT.ADTEN4125
#define PIC2BADTEN4126 PIC2B.ADTEN412.BIT.ADTEN4126
#define PIC2BADTEN4127 PIC2B.ADTEN412.BIT.ADTEN4127
#define PIC2BADTEN4128 PIC2B.ADTEN412.BIT.ADTEN4128
#define PIC2BADTEN4129 PIC2B.ADTEN412.BIT.ADTEN4129
#define PIC2BADTEN41210 PIC2B.ADTEN412.BIT.ADTEN41210
#define PIC2BADTEN41211 PIC2B.ADTEN412.BIT.ADTEN41211
#define PIC2BADTEN41212 PIC2B.ADTEN412.BIT.ADTEN41212
#define PIC2BADTEN41213 PIC2B.ADTEN412.BIT.ADTEN41213
#define PIC2BADTEN41214 PIC2B.ADTEN412.BIT.ADTEN41214
#define PIC2BADTEN41215 PIC2B.ADTEN412.BIT.ADTEN41215
#define PIC2BADTEN413 PIC2B.ADTEN413.UINT16
#define PIC2BADTEN4130 PIC2B.ADTEN413.BIT.ADTEN4130
#define PIC2BADTEN4131 PIC2B.ADTEN413.BIT.ADTEN4131
#define PIC2BADTEN4132 PIC2B.ADTEN413.BIT.ADTEN4132
#define PIC2BADTEN4133 PIC2B.ADTEN413.BIT.ADTEN4133
#define PIC2BADTEN4134 PIC2B.ADTEN413.BIT.ADTEN4134
#define PIC2BADTEN4135 PIC2B.ADTEN413.BIT.ADTEN4135
#define PIC2BADTEN4136 PIC2B.ADTEN413.BIT.ADTEN4136
#define PIC2BADTEN4137 PIC2B.ADTEN413.BIT.ADTEN4137
#define PIC2BADTEN4138 PIC2B.ADTEN413.BIT.ADTEN4138
#define PIC2BADTEN4139 PIC2B.ADTEN413.BIT.ADTEN4139
#define PIC2BADTEN41310 PIC2B.ADTEN413.BIT.ADTEN41310
#define PIC2BADTEN41311 PIC2B.ADTEN413.BIT.ADTEN41311
#define PIC2BADTEN41312 PIC2B.ADTEN413.BIT.ADTEN41312
#define PIC2BADTEN41313 PIC2B.ADTEN413.BIT.ADTEN41313
#define PIC2BADTEN41314 PIC2B.ADTEN413.BIT.ADTEN41314
#define PIC2BADTEN41315 PIC2B.ADTEN413.BIT.ADTEN41315
#define PIC2BADTEN414 PIC2B.ADTEN414.UINT16
#define PIC2BADTEN4140 PIC2B.ADTEN414.BIT.ADTEN4140
#define PIC2BADTEN4141 PIC2B.ADTEN414.BIT.ADTEN4141
#define PIC2BADTEN4142 PIC2B.ADTEN414.BIT.ADTEN4142
#define PIC2BADTEN4143 PIC2B.ADTEN414.BIT.ADTEN4143
#define PIC2BADTEN4144 PIC2B.ADTEN414.BIT.ADTEN4144
#define PIC2BADTEN4145 PIC2B.ADTEN414.BIT.ADTEN4145
#define PIC2BADTEN4146 PIC2B.ADTEN414.BIT.ADTEN4146
#define PIC2BADTEN4147 PIC2B.ADTEN414.BIT.ADTEN4147
#define PIC2BADTEN4148 PIC2B.ADTEN414.BIT.ADTEN4148
#define PIC2BADTEN4149 PIC2B.ADTEN414.BIT.ADTEN4149
#define PIC2BADTEN41410 PIC2B.ADTEN414.BIT.ADTEN41410
#define PIC2BADTEN41411 PIC2B.ADTEN414.BIT.ADTEN41411
#define PIC2BADTEN41412 PIC2B.ADTEN414.BIT.ADTEN41412
#define PIC2BADTEN41413 PIC2B.ADTEN414.BIT.ADTEN41413
#define PIC2BADTEN41414 PIC2B.ADTEN414.BIT.ADTEN41414
#define PIC2BADTEN41415 PIC2B.ADTEN414.BIT.ADTEN41415
#define PIC2BADSYNCTRG PIC2B.ADSYNCTRG.UINT8
#define PIC2BADSYNCTRG0 PIC2B.ADSYNCTRG.BIT.ADSYNCTRG0
#define PIC2BADSYNCTRG1 PIC2B.ADSYNCTRG.BIT.ADSYNCTRG1
#define PIC2BADSYNCTRG2 PIC2B.ADSYNCTRG.BIT.ADSYNCTRG2
#define PIC2BADSYNCTRG3 PIC2B.ADSYNCTRG.BIT.ADSYNCTRG3
#define PIC2BADSYNCTRG4 PIC2B.ADSYNCTRG.BIT.ADSYNCTRG4

#endif
