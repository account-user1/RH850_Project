/******************************************************************************/
/*                                                                            */
/* Device     : RH/RH850G3M/R7F701370A_72                                     */
/* File Name  : P1X-C_Hardware.h                                              */
/* Abstract   : Definition of I/O Register                                    */
/* History    : E1.00a [Device File version]                                  */
/* This is a typical example.                                                 */
/*                                                                            */
/* Copyright(c) 2015 Renesas Electronics Corporation. All rights reserved.    */
/*                                                                            */
/******************************************************************************/
#ifndef P1X_C_HARDWARE_H
#define P1X_C_HARDWARE_H
#define P1X_C_HARDWARE_TYPES_H    /* Patch for RenesasMcalSuprt hot fix */

#include <io_macros_v2.h>

typedef struct
{
    unsigned char bit00:1;
    unsigned char bit01:1;
    unsigned char bit02:1;
    unsigned char bit03:1;
    unsigned char bit04:1;
    unsigned char bit05:1;
    unsigned char bit06:1;
    unsigned char bit07:1;
} bitf_T;

#define  L 0
#define  H 1
#define LL 0
#define LH 1
#define HL 2
#define HH 3

typedef struct ST_FLXA0
{                                                          /* FLXA0           */
    unsigned long  FRPV;                                   /*  FRPV           */

    union                                                  /*                 */
    {                                                      /* FROC            */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FROC;                                                /*                 */

    unsigned char  dummy0[4];                              /*                 */

    union                                                  /*                 */
    {                                                      /* FROS            */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FROS;                                                /*                 */

    union                                                  /*                 */
    {                                                      /* FRTEST1         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRTEST1;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRTEST2         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRTEST2;                                             /*                 */

    unsigned char  dummy1[4];                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRLCK           */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRLCK;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FREIR           */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FREIR;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRSIR           */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRSIR;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FREILS          */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FREILS;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRSILS          */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRSILS;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FREIES          */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FREIES;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FREIER          */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FREIER;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRSIES          */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRSIES;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRSIER          */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRSIER;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRILE           */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRILE;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRT0C           */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRT0C;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRT1C           */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRT1C;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRSTPW1         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRSTPW1;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRSTPW2         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRSTPW2;                                             /*                 */

    unsigned char  dummy2[44];                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRSUCC1         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRSUCC1;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRSUCC2         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRSUCC2;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRSUCC3         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRSUCC3;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRNEMC          */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRNEMC;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRPRTC1         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRPRTC1;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRPRTC2         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRPRTC2;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRMHDC          */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRMHDC;                                              /*                 */

    unsigned char  dummy3[4];                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC1         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRGTUC1;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC2         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRGTUC2;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC3         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRGTUC3;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC4         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRGTUC4;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC5         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRGTUC5;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC6         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRGTUC6;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC7         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRGTUC7;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC8         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRGTUC8;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC9         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRGTUC9;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC10        */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRGTUC10;                                            /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC11        */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRGTUC11;                                            /*                 */

    unsigned char  dummy4[52];                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRCCSV          */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRCCSV;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRCCEV          */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRCCEV;                                              /*                 */

    unsigned char  dummy5[8];                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRSCV           */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRSCV;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRMTCCV         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRMTCCV;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRRCV           */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRRCV;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FROCV           */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FROCV;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRSFS           */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRSFS;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRSWNIT         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRSWNIT;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRACS           */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRACS;                                               /*                 */

    unsigned char  dummy6[4];                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID1         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID1;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID2         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID2;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID3         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID3;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID4         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID4;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID5         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID5;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID6         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID6;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID7         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID7;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID8         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID8;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID9         */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID9;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID10        */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID10;                                            /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID11        */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID11;                                            /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID12        */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID12;                                            /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID13        */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID13;                                            /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID14        */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID14;                                            /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID15        */
        unsigned long  UINT32;                             /*  32-bit Access  */
        unsigned short UINT16[2];                          /*  16-bit Access  */
        unsigned char  UINT8[4];                           /*  8-bit Access   */
    } FRESID15;                                           /*                 */

    unsigned char  dummy7[4];                             /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID1          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID2          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID3          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID4          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID4;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID5          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID5;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID6          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID6;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID7          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID7;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID8          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID8;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID9          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID9;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID10         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID10;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID11         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID11;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID12         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID12;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID13         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID13;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID14         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID14;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID15         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROSID15;                                           /*                  */

    unsigned char  dummy8[4];                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRNMV1           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRNMV1;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRNMV2           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRNMV2;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRNMV3           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRNMV3;                                             /*                  */

    unsigned char  dummy9[324];                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRMRC            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRMRC;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRFRF            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRFRF;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRFRFM           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRFRFM;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRFCL            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRFCL;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRMHDS           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRMHDS;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRLDTS           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRLDTS;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRFSR            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRFSR;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRMHDF           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRMHDF;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRTXRQ1          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRTXRQ1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRTXRQ2          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRTXRQ2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRTXRQ3          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRTXRQ3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRTXRQ4          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRTXRQ4;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRNDAT1          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRNDAT1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRNDAT2          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRNDAT2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRNDAT3          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRNDAT3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRNDAT4          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRNDAT4;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRMBSC1          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRMBSC1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRMBSC2          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRMBSC2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRMBSC3          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRMBSC3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRMBSC4          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRMBSC4;                                            /*                  */

    unsigned char  dummy10[160];                          /*                  */

    union                                                 /*                  */
    {                                                     /* FRCREL           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRCREL;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRENDN           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRENDN;                                             /*                  */

    unsigned char  dummy11[8];                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS1          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS2          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS3          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS4          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS4;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS5          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS5;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS6          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS6;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS7          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS7;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS8          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS8;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS9          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS9;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS10         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS10;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS11         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS11;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS12         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS12;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS13         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS13;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS14         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS14;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS15         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS15;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS16         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS16;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS17         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS17;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS18         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS18;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS19         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS19;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS20         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS20;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS21         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS21;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS22         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS22;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS23         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS23;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS24         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS24;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS25         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS25;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS26         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS26;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS27         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS27;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS28         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS28;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS29         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS29;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS30         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS30;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS31         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS31;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS32         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS32;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS33         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS33;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS34         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS34;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS35         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS35;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS36         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS36;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS37         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS37;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS38         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS38;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS39         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS39;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS40         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS40;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS41         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS41;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS42         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS42;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS43         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS43;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS44         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS44;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS45         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS45;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS46         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS46;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS47         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS47;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS48         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS48;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS49         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS49;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS50         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS50;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS51         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS51;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS52         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS52;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS53         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS53;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS54         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS54;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS55         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS55;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS56         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS56;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS57         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS57;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS58         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS58;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS59         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS59;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS60         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS60;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS61         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS61;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS62         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS62;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS63         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS63;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS64         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRDS64;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRHS1          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRHS1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRHS2          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRHS2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRHS3          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRWRHS3;                                            /*                  */

    unsigned char  dummy12[4];                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRIBCM           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRIBCM;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRIBCR           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRIBCR;                                             /*                  */

    unsigned char  dummy13[232];                          /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS1          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS2          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS3          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS4          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS4;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS5          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS5;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS6          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS6;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS7          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS7;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS8          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS8;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS9          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS9;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS10         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS10;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS11         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS11;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS12         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS12;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS13         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS13;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS14         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS14;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS15         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS15;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS16         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS16;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS17         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS17;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS18         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS18;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS19         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS19;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS20         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS20;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS21         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS21;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS22         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS22;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS23         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS23;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS24         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS24;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS25         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS25;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS26         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS26;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS27         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS27;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS28         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS28;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS29         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS29;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS30         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS30;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS31         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS31;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS32         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS32;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS33         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS33;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS34         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS34;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS35         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS35;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS36         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS36;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS37         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS37;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS38         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS38;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS39         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS39;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS40         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS40;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS41         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS41;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS42         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS42;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS43         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS43;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS44         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS44;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS45         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS45;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS46         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS46;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS47         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS47;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS48         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS48;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS49         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS49;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS50         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS50;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS51         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS51;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS52         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS52;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS53         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS53;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS54         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS54;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS55         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS55;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS56         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS56;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS57         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS57;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS58         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS58;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS59         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS59;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS60         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS60;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS61         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS61;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS62         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS62;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS63         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS63;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS64         */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDDS64;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDHS1          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDHS1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDHS2          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDHS2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDHS3          */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRRDHS3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRMBS            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRMBS;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FROBCM           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROBCM;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FROBCR           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROBCR;                                             /*                  */

    unsigned char  dummy14[232];                          /*                  */

    union                                                 /*                  */
    {                                                     /* FRITC            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRITC;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FROTC            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROTC;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRIBA            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRIBA;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRFBA            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRFBA;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FROBA            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROBA;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRIQC            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRIQC;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRUIR            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRUIR;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRUOR            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRUOR;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRITS            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRITS;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FROTS            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FROTS;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRAES            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRAES;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRAEA            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRAEA;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRDA(0-3)        */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRDA[4];                                            /*                  */

    unsigned char  dummy15[4];                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRT2C            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } FRT2C;                                              /*                  */

}T_FLXA0;
typedef struct EthernetRegStruct
{
    unsigned long  EDSR;                                  /*  EDSR        */
    unsigned char  dummy76[12];                           /*              */
    unsigned long  TDLAR;                                 /*  TDLAR       */
    unsigned long  TDFAR;                                 /*  TDFAR       */
    unsigned long  TDFXR;                                 /*  TDFXR       */
    unsigned long  TDFFR;                                 /*  TDFFR       */
    unsigned char  dummy77[16];                           /*              */
    unsigned long  RDLAR;                                 /*  RDLAR       */
    unsigned long  RDFAR;                                 /*  RDFAR       */
    unsigned long  RDFXR;                                 /*  RDFXR       */
    unsigned long  RDFFR;                                 /*  RDFFR       */
    unsigned char  dummy78[960];                          /*              */
    unsigned long  EDMR;                                  /*  EDMR        */
    unsigned char  dummy79[4];                             /*             */
    unsigned long  EDTRR;                                 /*  EDTRR       */
    unsigned char  dummy80[4];                             /*             */
    unsigned long  EDRRR;                                 /*  EDRRR       */
    unsigned char  dummy81[20];                            /*             */
    unsigned long  EESR;                                  /*  EESR        */
    unsigned char  dummy82[4];                             /*             */
    unsigned long  EESIPR;                                /*  EESIPR      */
    unsigned char  dummy83[4];                             /*             */
    unsigned long  TRSCER;                                /*  TRSCER      */
    unsigned char  dummy84[4];                             /*             */
    unsigned long  RMFCR;                                 /*  RMFCR       */
    unsigned char  dummy85[12];                            /*             */
    unsigned long  FDR;                                   /*  FDR         */
    unsigned char  dummy86[4];                             /*             */
    unsigned long  RMCR;                                  /*  RMCR        */
    unsigned char  dummy87[4];                             /*             */
    unsigned long  RPADIR;                                /*  RPADIR      */
    unsigned char  dummy88[4];                             /*             */
    unsigned long  FCFTR;                                 /*  FCFTR       */
    unsigned char  dummy89[20];                            /*             */
    unsigned long  TFSR;                                  /*  TFSR        */
    unsigned char  dummy90[4];                             /*             */
    unsigned long  RFSR;                                  /*  RFSR        */
    unsigned char  dummy91[116];                           /*             */
    unsigned long  ECMR;                                  /*  ECMR        */
    unsigned char  dummy92[4];                             /*             */
    unsigned long  RFLR;                                  /*  RFLR        */
    unsigned char  dummy93[4];                             /*             */
    unsigned long  ECSR;                                  /*  ECSR        */
    unsigned char  dummy94[4];                             /*             */
    unsigned long  ECSIPR;                                /*  ECSIPR      */
    unsigned char  dummy95[4];                             /*             */
    unsigned long  PIR;                                   /*  PIR         */
    unsigned char  dummy96[4];                             /*             */
    unsigned long  PLSR;                                  /*  PLSR        */
    unsigned char  dummy97[40];                            /*             */
    unsigned long  APR;                                   /*  APR         */
    unsigned long  MPR;                                   /*  MPR         */
    unsigned long  PFTCR;                                 /*  PFTCR       */
    unsigned long  PFRCR;                                 /*  PFRCR       */
    unsigned long  TPAUSER;                               /*  TPAUSER     */
    unsigned char  dummy98[4];                             /*             */
    unsigned long  BCFRR;                                 /*  BCFRR       */
    unsigned long  CRBCFRR;                               /*  CRBCFRR     */
    unsigned char  dummy99[60];                            /*             */
    unsigned long  EMR;                                   /*  EMR         */
    unsigned char  dummy100[12];                           /*             */
    unsigned long  MAHR;                                  /*  MAHR        */
    unsigned char  dummy101[4];                            /*             */
    unsigned long  MALR;                                  /*  MALR        */
    unsigned char  dummy102[308];                          /*             */
    unsigned long  TROCR;                                 /*  TROCR       */
    unsigned char  dummy103[4];                            /*             */
    unsigned long  CDCR;                                  /*  CDCR        */
    unsigned char  dummy104[4];                            /*             */
    unsigned long  LCCR;                                  /*  LCCR        */
    unsigned char  dummy105[44];                           /*             */
    unsigned long  CEFCR;                                 /*  CEFCR       */
    unsigned char  dummy106[4];                            /*             */
    unsigned long  FRECR;                                 /*  FRECR       */
    unsigned char  dummy107[4];                            /*             */
    unsigned long  TSFRCR;                                /*  TSFRCR      */
    unsigned char  dummy108[4];                            /*             */
    unsigned long  TLFRCR;                                /*  TLFRCR      */
    unsigned char  dummy109[4];                            /*             */
    unsigned long  RFCR;                                  /*  RFCR        */
    unsigned char  dummy110[20];                           /*             */
    unsigned long  MAFCR;                                 /*  MAFCR       */
    unsigned char  dummy111[1160];                         /*             */
    unsigned long  HDMMDR;                                /*  HDMMDR      */
    unsigned char  dummy112[8];                            /*             */
    unsigned long  HDMISR;                                /*  HDMISR      */
    unsigned long  HDMIER;                                /*  HDMIER      */
}T_ETNA;

typedef struct EthernetCommonRegStruct
{
    unsigned long  ARSTR;                                 /*  ARSTR           */
    unsigned long  TSU_CTRST;                             /*  TSU_CTRST       */
    unsigned char  dummy68[40];                           /*                  */
    unsigned long  TSU_FWSL0;                             /*  TSU_FWSL0       */
    unsigned long  TSU_FWSL1;                             /*  TSU_FWSL1       */
    unsigned long  TSU_FWSLC;                             /*  TSU_FWSLC       */
    unsigned char  dummy69[20];                           /*                  */
    unsigned long  TSU_FWSR;                              /*  TSU_FWSR        */
    unsigned long  TSU_FWINMK;                            /*  TSU_FWINMK      */
    unsigned long  TSU_VTAG0;                             /*  TSU_VTAG0       */
    unsigned long  TSU_VTAG1;                             /*  TSU_VTAG1       */
    unsigned long  TSU_ADSBSY;                            /*  TSU_ADSBSY      */
    unsigned long  TSU_TEN;                               /*  TSU_TEN         */
    unsigned char  dummy70[8];                            /*                  */
    unsigned long  TSU_POST1;                             /*  TSU_POST1       */
    unsigned long  TSU_POST2;                             /*  TSU_POST2       */
    unsigned long  TSU_POST3;                             /*  TSU_POST3       */
    unsigned long  TSU_POST4;                             /*  TSU_POST4       */
}T_CommonRegType;

typedef struct EthernetTSUReg
{
 unsigned long  TSU_ADRH;                              /*  TSU_ADRH       */
 unsigned long  TSU_ADRL;                              /*  TSU_ADRL       */
}T_TSURegType;

typedef struct ST_FLMD
{                                                         /* FLMD             */
     unsigned long CNT;                                   /*  CNT             */
     unsigned long PCMD;                                  /*  PCMD            */
     unsigned long PS;                                    /*  PS              */
} T_FLMD;

typedef struct ST_DNFA2
{                                                        /* DNFA2            */
  union                                                  /*                  */
  {                                                      /* CTL              */
      unsigned char  UINT8;                              /*  8-bit Access    */
      struct                                             /*                  */
      {                                                  /*  Bit Access      */
          unsigned char  PRS0:1;                         /*   PRS0           */
          unsigned char  PRS1:1;                         /*   PRS1           */
          unsigned char  PRS2:1;                         /*   PRS2           */
          unsigned char  :2;                             /*   Reserved Bits  */
          unsigned char  NFSTS0:1;                       /*   NFSTS0         */
          unsigned char  NFSTS1:1;                       /*   NFSTS1         */
          unsigned char  :1;                             /*   Reserved Bits  */
      } BIT;                                             /*                  */
  } CTL;                                                 /*                  */

  unsigned char  dummy369[3];                            /*                  */

  union                                                  /*                  */
  {                                                      /* EN               */
      unsigned short UINT16;                             /*  16-bit Access   */
      unsigned char  UINT8[2];                           /*  8-bit Access    */
      struct                                             /*                  */
      {                                                  /*  Bit Access      */
          unsigned char  NFENL0:1;                       /*   NFENL0         */
          unsigned char  NFENL1:1;                       /*   NFENL1         */
          unsigned char  :6;                             /*   Reserved Bits  */
          unsigned char  :8;                             /*   Reserved Bits  */
      } BIT;                                             /*                  */
  } EN;                                                  /*                  */
}T_DNFA2;

typedef struct ST_DNFA3
{                                                         /* DNFA3            */
    union                                                 /*                  */
    {                                                     /* CTL              */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  PRS0:1;                        /*   PRS0           */
            unsigned char  PRS1:1;                        /*   PRS1           */
            unsigned char  PRS2:1;                        /*   PRS2           */
            unsigned char  :2;                            /*   Reserved Bits  */
            unsigned char  NFSTS0:1;                      /*   NFSTS0         */
            unsigned char  NFSTS1:1;                      /*   NFSTS1         */
            unsigned char  :1;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL;                                                /*                  */

    unsigned char  dummy370[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* EN               */
        unsigned short UINT16;                            /*  16-bit Access   */
        unsigned char  UINT8[2];                          /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  NFENL0:1;                      /*   NFENL0         */
            unsigned char  NFENL1:1;                      /*   NFENL1         */
            unsigned char  :6;                            /*   Reserved Bits  */
            unsigned char  :8;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } EN;                                                 /*                  */

}T_DNFA3;

typedef struct ST_DNFA4
{                                                         /* DNFA4            */
    union                                                 /*                  */
    {                                                     /* CTL              */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  PRS0:1;                        /*   PRS0           */
            unsigned char  PRS1:1;                        /*   PRS1           */
            unsigned char  PRS2:1;                        /*   PRS2           */
            unsigned char  :2;                            /*   Reserved Bits  */
            unsigned char  NFSTS0:1;                      /*   NFSTS0         */
            unsigned char  NFSTS1:1;                      /*   NFSTS1         */
            unsigned char  :1;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL;                                                /*                  */

    unsigned char  dummy371[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* EN               */
        unsigned short UINT16;                            /*  16-bit Access   */
        unsigned char  UINT8[2];                          /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  NFENL0:1;                      /*   NFENL0         */
            unsigned char  NFENL1:1;                      /*   NFENL1         */
            unsigned char  :6;                            /*   Reserved Bits  */
            unsigned char  :8;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } EN;                                                 /*                  */

}T_DNFA4;

typedef struct ST_DNFA5
{                                                         /* DNFA5            */
    union                                                 /*                  */
    {                                                     /* CTL              */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  PRS0:1;                        /*   PRS0           */
            unsigned char  PRS1:1;                        /*   PRS1           */
            unsigned char  PRS2:1;                        /*   PRS2           */
            unsigned char  :2;                            /*   Reserved Bits  */
            unsigned char  NFSTS0:1;                      /*   NFSTS0         */
            unsigned char  NFSTS1:1;                      /*   NFSTS1         */
            unsigned char  :1;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL;                                                /*                  */

    unsigned char  dummy372[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* EN               */
        unsigned short UINT16;                            /*  16-bit Access   */
        unsigned char  UINT8[2];                          /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  NFENL0:1;                      /*   NFENL0         */
            unsigned char  NFENL1:1;                      /*   NFENL1         */
            unsigned char  NFENL2:1;                      /*   NFENL2         */
            unsigned char  NFENL3:1;                      /*   NFENL3         */
            unsigned char  NFENL4:1;                      /*   NFENL4         */
            unsigned char  NFENL5:1;                      /*   NFENL5         */
            unsigned char  NFENL6:1;                      /*   NFENL6         */
            unsigned char  NFENL7:1;                      /*   NFENL7         */
            unsigned char  :8;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } EN;                                                 /*                  */

}T_DNFA5;

typedef struct ST_DNFA6
{                                                         /* DNFA6            */
    union                                                 /*                  */
    {                                                     /* CTL              */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  PRS0:1;                        /*   PRS0           */
            unsigned char  PRS1:1;                        /*   PRS1           */
            unsigned char  PRS2:1;                        /*   PRS2           */
            unsigned char  :2;                            /*   Reserved Bits  */
            unsigned char  NFSTS0:1;                      /*   NFSTS0         */
            unsigned char  NFSTS1:1;                      /*   NFSTS1         */
            unsigned char  :1;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL;                                                /*                  */

    unsigned char  dummy373[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* EN               */
        unsigned short UINT16;                            /*  16-bit Access   */
        unsigned char  UINT8[2];                          /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  NFENL0:1;                      /*   NFENL0         */
            unsigned char  NFENL1:1;                      /*   NFENL1         */
            unsigned char  :6;                            /*   Reserved Bits  */
            unsigned char  :8;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } EN;                                                 /*                  */

}T_DNFA6;

typedef struct ST_DNFA7
{                                                         /* DNFA7            */
    union                                                 /*                  */
    {                                                     /* CTL              */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  PRS0:1;                        /*   PRS0           */
            unsigned char  PRS1:1;                        /*   PRS1           */
            unsigned char  PRS2:1;                        /*   PRS2           */
            unsigned char  :2;                            /*   Reserved Bits  */
            unsigned char  NFSTS0:1;                      /*   NFSTS0         */
            unsigned char  NFSTS1:1;                      /*   NFSTS1         */
            unsigned char  :1;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL;                                                /*                  */

    unsigned char  dummy374[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* EN               */
        unsigned short UINT16;                            /*  16-bit Access   */
        unsigned char  UINT8[2];                          /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  NFENL0:1;                      /*   NFENL0         */
            unsigned char  NFENL1:1;                      /*   NFENL1         */
            unsigned char  :6;                            /*   Reserved Bits  */
            unsigned char  :8;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } EN;                                                 /*                  */

}T_DNFA7;

typedef struct ST_FCLA_ICU
{
 volatile unsigned char ulFCLA_INTP[273];
/* FCLA0CTL0_NMI         - offset 0x00  */
/* FCLA0CTL1_INTP0       - offset 0x04  */
/* FCLA0CTL2_INTP1       - offset 0x08  */
/* FCLA0CTL3_INTP2       - offset 0x0C  */
/* FCLA0CTL4_INTP3       - offset 0x10  */
/* FCLA0CTL5_INTP4       - offset 0x14  */
/* FCLA0CTL6_INTP5       - offset 0x18  */
/* FCLA0CTL7_INTP6       - offset 0x1C  */
/* FCLA1CTL0_INTP7       - offset 0x100 */
/* FCLA1CTL1_INTP8       - offset 0x104 */
/* FCLA1CTL2_INTP9       - offset 0x108 */
/* FCLA1CTL3_INTP10      - offset 0x10C */
/* FCLA1CTL4_INTP11      - offset 0x110 */
}T_FCLA_ICU;


typedef struct ST_FCLA0
{                                                         /* FCLA0            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR0:1;                       /*   INTR0          */
            unsigned char  INTF0:1;                       /*   INTF0          */
            unsigned char  INTL0:1;                       /*   INTL0          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    unsigned char  dummy375[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR1:1;                       /*   INTR1          */
            unsigned char  INTF1:1;                       /*   INTF1          */
            unsigned char  INTL1:1;                       /*   INTL1          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

    unsigned char  dummy376[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL2             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR2:1;                       /*   INTR2          */
            unsigned char  INTF2:1;                       /*   INTF2          */
            unsigned char  INTL2:1;                       /*   INTL2          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL2;                                               /*                  */

    unsigned char  dummy377[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL3             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR3:1;                       /*   INTR3          */
            unsigned char  INTF3:1;                       /*   INTF3          */
            unsigned char  INTL3:1;                       /*   INTL3          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL3;                                               /*                  */

    unsigned char  dummy378[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL4             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR4:1;                       /*   INTR4          */
            unsigned char  INTF4:1;                       /*   INTF4          */
            unsigned char  INTL4:1;                       /*   INTL4          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL4;                                               /*                  */

    unsigned char  dummy379[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL5             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR5:1;                       /*   INTR5          */
            unsigned char  INTF5:1;                       /*   INTF5          */
            unsigned char  INTL5:1;                       /*   INTL5          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL5;                                               /*                  */

    unsigned char  dummy380[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL6             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR6:1;                       /*   INTR6          */
            unsigned char  INTF6:1;                       /*   INTF6          */
            unsigned char  INTL6:1;                       /*   INTL6          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL6;                                               /*                  */

    unsigned char  dummy381[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL7             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR7:1;                       /*   INTR7          */
            unsigned char  INTF7:1;                       /*   INTF7          */
            unsigned char  INTL7:1;                       /*   INTL7          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL7;                                               /*                  */

}T_FCLA0;

typedef struct ST_FCLA1
{                                                         /* FCLA1            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR0:1;                       /*   INTR0          */
            unsigned char  INTF0:1;                       /*   INTF0          */
            unsigned char  INTL0:1;                       /*   INTL0          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    unsigned char  dummy382[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR1:1;                       /*   INTR1          */
            unsigned char  INTF1:1;                       /*   INTF1          */
            unsigned char  INTL1:1;                       /*   INTL1          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

    unsigned char  dummy383[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL2             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR2:1;                       /*   INTR2          */
            unsigned char  INTF2:1;                       /*   INTF2          */
            unsigned char  INTL2:1;                       /*   INTL2          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL2;                                               /*                  */

    unsigned char  dummy384[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL3             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR3:1;                       /*   INTR3          */
            unsigned char  INTF3:1;                       /*   INTF3          */
            unsigned char  INTL3:1;                       /*   INTL3          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL3;                                               /*                  */

    unsigned char  dummy385[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL4             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR4:1;                       /*   INTR4          */
            unsigned char  INTF4:1;                       /*   INTF4          */
            unsigned char  INTL4:1;                       /*   INTL4          */
            unsigned char  :5;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL4;                                               /*                  */

}T_FCLA1;

typedef struct ST_FCLA2
{                                                         /* FCLA2            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR0:1;                       /*   INTR0          */
            unsigned char  INTF0:1;                       /*   INTF0          */
            unsigned char  :6;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    unsigned char  dummy386[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR1:1;                       /*   INTR1          */
            unsigned char  INTF1:1;                       /*   INTF1          */
            unsigned char  :6;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

}T_FCLA2;

typedef struct ST_FCLA3
{                                                         /* FCLA3            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR0:1;                       /*   INTR0          */
            unsigned char  INTF0:1;                       /*   INTF0          */
            unsigned char  :6;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    unsigned char  dummy387[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR1:1;                       /*   INTR1          */
            unsigned char  INTF1:1;                       /*   INTF1          */
            unsigned char  :6;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

}T_FCLA3;

typedef struct ST_FCLA4
{                                                         /* FCLA4            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR0:1;                       /*   INTR0          */
            unsigned char  INTF0:1;                       /*   INTF0          */
            unsigned char  :6;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    unsigned char  dummy388[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  INTR1:1;                       /*   INTR1          */
            unsigned char  INTF1:1;                       /*   INTF1          */
            unsigned char  :6;                            /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

}T_FCLA4;

typedef struct ST_FCLA5
{                                                         /* FCLA5            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  :7;                            /*   Reserved Bits  */
            unsigned char  BYPS0:1;                       /*   BYPS0          */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    unsigned char  dummy389[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  :7;                            /*   Reserved Bits  */
            unsigned char  BYPS1:1;                       /*   BYPS1          */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

    unsigned char  dummy390[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL2             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  :7;                            /*   Reserved Bits  */
            unsigned char  BYPS2:1;                       /*   BYPS2          */
        } BIT;                                            /*                  */
    } CTL2;                                               /*                  */

    unsigned char  dummy391[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL3             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  :7;                            /*   Reserved Bits  */
            unsigned char  BYPS3:1;                       /*   BYPS3          */
        } BIT;                                            /*                  */
    } CTL3;                                               /*                  */

    unsigned char  dummy392[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL4             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  :7;                            /*   Reserved Bits  */
            unsigned char  BYPS4:1;                       /*   BYPS4          */
        } BIT;                                            /*                  */
    } CTL4;                                               /*                  */

    unsigned char  dummy393[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL5             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  :7;                            /*   Reserved Bits  */
            unsigned char  BYPS5:1;                       /*   BYPS5          */
        } BIT;                                            /*                  */
    } CTL5;                                               /*                  */

    unsigned char  dummy394[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL6             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  :7;                            /*   Reserved Bits  */
            unsigned char  BYPS6:1;                       /*   BYPS6          */
        } BIT;                                            /*                  */
    } CTL6;                                               /*                  */

    unsigned char  dummy395[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL7             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  :7;                            /*   Reserved Bits  */
            unsigned char  BYPS7:1;                       /*   BYPS7          */
        } BIT;                                            /*                  */
    } CTL7;                                               /*                  */

}T_FCLA5;

typedef struct ST_FCLA6
{                                                         /* FCLA6            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  :7;                            /*   Reserved Bits  */
            unsigned char  BYPS0:1;                       /*   BYPS0          */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    unsigned char  dummy396[3];                           /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  :7;                            /*   Reserved Bits  */
            unsigned char  BYPS1:1;                       /*   BYPS1          */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

}T_FCLA6;

typedef struct ST_DCRB0
{                                                         /* DCRB0            */
    unsigned long  CIN;                                   /*  CIN             */
    unsigned long  COUT;                                  /*  COUT            */
    unsigned char  dummy565[24];                          /*                  */
    unsigned char  CTL;                                   /*  CTL             */
}T_DCRB0;

typedef struct ST_ECMM0
{                                                         /* ECMM0            */
    unsigned char  ESET;                                  /*  ESET            */
    unsigned char  dummy569[3];                           /*                  */
    unsigned char  ECLR;                                  /*  ECLR            */
    unsigned char  dummy570[3];                           /*                  */
    unsigned long  ESSTR0;                                /*  ESSTR0          */
    unsigned long  ESSTR1;                                /*  ESSTR1          */
    unsigned long  ESSTR2;                                /*  ESSTR2          */
    unsigned long  PCMD0;                                 /*  PCMD0           */
}T_ECMM0;

typedef struct ST_ECMC0
{                                                         /* ECMC0            */
    unsigned char  ESET;                                  /*  ESET            */
    unsigned char  dummy571[3];                           /*                  */
    unsigned char  ECLR;                                  /*  ECLR            */
    unsigned char  dummy572[3];                           /*                  */
    unsigned long  ESSTR0;                                /*  ESSTR0          */
    unsigned long  ESSTR1;                                /*  ESSTR1          */
    unsigned long  ESSTR2;                                /*  ESSTR2          */
    unsigned long  PCMD0;                                 /*  PCMD0           */
}T_ECMC0;

typedef struct ST_ECM0
{                                                         /* ECM0             */
    unsigned long  EPCFG;                                 /*  EPCFG           */
    unsigned long  MICFG0;                                /*  MICFG0          */
    unsigned long  MICFG1;                                /*  MICFG1          */
    unsigned long  MICFG2;                                /*  MICFG2          */
    unsigned long  NMICFG0;                               /*  NMICFG0         */
    unsigned long  NMICFG1;                               /*  NMICFG1         */
    unsigned long  NMICFG2;                               /*  NMICFG2         */
    unsigned long  IRCFG0;                                /*  IRCFG0          */
    unsigned long  IRCFG1;                                /*  IRCFG1          */
    unsigned long  IRCFG2;                                /*  IRCFG2          */
    unsigned long  EMK0;                                  /*  EMK0            */
    unsigned long  EMK1;                                  /*  EMK1            */
    unsigned long  EMK2;                                  /*  EMK2            */
    unsigned long  ESSTC0;                                /*  ESSTC0          */
    unsigned long  ESSTC1;                                /*  ESSTC1          */
    unsigned long  ESSTC2;                                /*  ESSTC2          */
    unsigned long  PCMD1;                                 /*  PCMD1           */
    unsigned char  PS;                                    /*  PS              */
    unsigned char  dummy574[3];                           /*                  */
    unsigned long  PE0;                                   /*  PE0             */
    unsigned long  PE1;                                   /*  PE1             */
    unsigned long  PE2;                                   /*  PE2             */
    unsigned long  DTMCTL;                                /*  DTMCTL          */
    unsigned short DTMR;                                  /*  DTMR            */
    unsigned char  dummy576[2];                           /*                  */
    unsigned long  DTMCMP;                                /*  DTMCMP          */
    unsigned long  DTMCFG0;                               /*  DTMCFG0         */
    unsigned long  DTMCFG1;                               /*  DTMCFG1         */
    unsigned long  DTMCFG2;                               /*  DTMCFG2         */
    unsigned long  DTMCFG3;                               /*  DTMCFG3         */
    unsigned long  DTMCFG4;                               /*  DTMCFG4         */
    unsigned long  DTMCFG5;                               /*  DTMCFG5         */
    unsigned long  EOCCFG;                                /*  EOCCFG          */
    unsigned long  PEM;                                   /*  PEM             */
}T_ECM0;

typedef struct ST_CSIH0
{                                                         /* CSIH0            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        unsigned char  UINT8;                             /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char  MBS:1;                         /*   MBS            */
            unsigned char  JOBE:1;                        /*   JOBE           */
            unsigned char  :3;                            /*   Reserved Bits  */
            unsigned char  RXE:1;                         /*   RXE            */
            unsigned char  TXE:1;                         /*   TXE            */
            unsigned char  PWR:1;                         /*   PWR            */
        }BIT;                                             /*                  */
    } CTL0;                                               /*                  */

    unsigned char  dummy578[15];                          /*                  */
    unsigned long  CTL1;                                  /*  CTL1            */
    unsigned short CTL2;                                  /*  CTL2            */
    unsigned char  dummy579[4074];                        /*                  */
    unsigned long  MCTL1;                                 /*  MCTL1           */
    unsigned long  MCTL2;                                 /*  MCTL2           */
    unsigned long  TX0W;                                  /*  TX0W            */
    unsigned short TX0H;                                  /*  TX0H            */
    unsigned char  dummy580[2];                           /*                  */
    unsigned long  RX0W;                                  /*  RX0W            */
    unsigned short RX0H;                                  /*  RX0H            */
    unsigned char  dummy581[2];                           /*                  */
    unsigned long  MRWP0;                                 /*  MRWP0           */
    unsigned long  STR0;                                  /*  STR0            */
    unsigned short STCR0;                                 /*  STCR0           */
    unsigned char  dummy582[30];                          /*                  */
    unsigned short MCTL0;                                 /*  MCTL0           */
    unsigned char  dummy583[2];                           /*                  */
    unsigned long  CFG0;                                  /*  CFG0            */
    unsigned long  CFG1;                                  /*  CFG1            */
    unsigned long  CFG2;                                  /*  CFG2            */
    unsigned long  CFG3;                                  /*  CFG3            */
    unsigned long  CFG4;                                  /*  CFG4            */
    unsigned long  CFG5;                                  /*  CFG5            */
    unsigned long  CFG6;                                  /*  CFG6            */
    unsigned long  CFG7;                                  /*  CFG7            */
    unsigned char  dummy584[4];                           /*                  */
    unsigned short BRS0;                                  /*  BRS0            */
    unsigned char  dummy585[2];                           /*                  */
    unsigned short BRS1;                                  /*  BRS1            */
    unsigned char  dummy586[2];                           /*                  */
    unsigned short BRS2;                                  /*  BRS2            */
    unsigned char  dummy587[2];                           /*                  */
    unsigned short BRS3;                                  /*  BRS3            */
}T_CSIH0;


typedef struct ST_CSIH1
{                                                         /* CSIH1            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        unsigned char UINT8;                              /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char MBS:1;                          /*   MBS            */
            unsigned char JOBE:1;                         /*   JOBE           */
            unsigned char :3;                             /*   Reserved Bits  */
            unsigned char RXE:1;                          /*   RXE            */
            unsigned char TXE:1;                          /*   TXE            */
            unsigned char PWR:1;                          /*   PWR            */
        }BIT;                                             /*                  */
    } CTL0;                                               /*                  */

    unsigned char dummy157[15];                           /*                  */
    unsigned long CTL1;                                   /*  CTL1            */
    unsigned short CTL2;                                  /*  CTL2            */
    unsigned char dummy158[4074];                         /*                  */
    unsigned long MCTL1;                                  /*  MCTL1           */
    unsigned long MCTL2;                                  /*  MCTL2           */
    unsigned long TX0W;                                   /*  TX0W            */
    unsigned short TX0H;                                  /*  TX0H            */
    unsigned char dummy159[2];                            /*                  */
    unsigned long RX0W;                                   /*  RX0W            */
    unsigned short RX0H;                                  /*  RX0H            */
    unsigned char dummy160[2];                            /*                  */
    unsigned long MRWP0;                                  /*  MRWP0           */
    unsigned long STR0;                                   /*  STR0            */
    unsigned short STCR0;                                 /*  STCR0           */
    unsigned char dummy161[30];                           /*                  */
    unsigned short MCTL0;                                 /*  MCTL0           */
    unsigned char dummy162[2];                            /*                  */
    unsigned long CFG0;                                   /*  CFG0            */
    unsigned long CFG1;                                   /*  CFG1            */
    unsigned long CFG2;                                   /*  CFG2            */
    unsigned long CFG3;                                   /*  CFG3            */
    unsigned long CFG4;                                   /*  CFG4            */
    unsigned long CFG5;                                   /*  CFG5            */
    unsigned long CFG6;                                   /*  CFG6            */
    unsigned long CFG7;                                   /*  CFG7            */
    unsigned char dummy163[4];                            /*                  */
    unsigned short BRS0;                                  /*  BRS0            */
    unsigned char dummy164[2];                            /*                  */
    unsigned short BRS1;                                  /*  BRS1            */
    unsigned char dummy165[2];                            /*                  */
    unsigned short BRS2;                                  /*  BRS2            */
    unsigned char dummy166[2];                            /*                  */
    unsigned short BRS3;                                  /*  BRS3            */
} T_CSIH1;


typedef struct ST_CSIH2
{                                                         /* CSIH2            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        unsigned char UINT8;                              /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char MBS:1;                          /*   MBS            */
            unsigned char JOBE:1;                         /*   JOBE           */
            unsigned char :3;                             /*   Reserved Bits  */
            unsigned char RXE:1;                          /*   RXE            */
            unsigned char TXE:1;                          /*   TXE            */
            unsigned char PWR:1;                          /*   PWR            */
        }BIT;                                             /*                  */
    } CTL0;                                               /*                  */

    unsigned char dummy247[15];                           /*                  */
    unsigned long CTL1;                                   /*  CTL1            */
    unsigned short CTL2;                                  /*  CTL2            */
    unsigned char dummy248[4074];                         /*                  */
    unsigned long MCTL1;                                  /*  MCTL1           */
    unsigned long MCTL2;                                  /*  MCTL2           */
    unsigned long TX0W;                                   /*  TX0W            */
    unsigned short TX0H;                                  /*  TX0H            */
    unsigned char dummy249[2];                            /*                  */
    unsigned long RX0W;                                   /*  RX0W            */
    unsigned short RX0H;                                  /*  RX0H            */
    unsigned char dummy250[2];                            /*                  */
    unsigned long MRWP0;                                  /*  MRWP0           */
    unsigned long STR0;                                   /*  STR0            */
    unsigned short STCR0;                                 /*  STCR0           */
    unsigned char dummy251[30];                           /*                  */
    unsigned short MCTL0;                                 /*  MCTL0           */
    unsigned char dummy252[2];                            /*                  */
    unsigned long CFG0;                                   /*  CFG0            */
    unsigned long CFG1;                                   /*  CFG1            */
    unsigned long CFG2;                                   /*  CFG2            */
    unsigned long CFG3;                                   /*  CFG3            */
    unsigned long CFG4;                                   /*  CFG4            */
    unsigned long CFG5;                                   /*  CFG5            */
    unsigned long CFG6;                                   /*  CFG6            */
    unsigned long CFG7;                                   /*  CFG7            */
    unsigned char dummy253[4];                            /*                  */
    unsigned short BRS0;                                  /*  BRS0            */
    unsigned char dummy254[2];                            /*                  */
    unsigned short BRS1;                                  /*  BRS1            */
    unsigned char dummy255[2];                            /*                  */
    unsigned short BRS2;                                  /*  BRS2            */
    unsigned char dummy256[2];                            /*                  */
    unsigned short BRS3;                                  /*  BRS3            */
} T_CSIH2;

typedef struct ST_CSIH3
{                                                         /* CSIH3            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        unsigned char UINT8;                              /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            unsigned char MBS:1;                          /*   MBS            */
            unsigned char JOBE:1;                         /*   JOBE           */
            unsigned char :3;                             /*   Reserved Bits  */
            unsigned char RXE:1;                          /*   RXE            */
            unsigned char TXE:1;                          /*   TXE            */
            unsigned char PWR:1;                          /*   PWR            */
        }BIT;                                             /*                  */
    } CTL0;                                               /*                  */

    unsigned char dummy167[15];                           /*                  */
    unsigned long CTL1;                                   /*  CTL1            */
    unsigned short CTL2;                                  /*  CTL2            */
    unsigned char dummy168[4074];                         /*                  */
    unsigned long MCTL1;                                  /*  MCTL1           */
    unsigned long MCTL2;                                  /*  MCTL2           */
    unsigned long TX0W;                                   /*  TX0W            */
    unsigned short TX0H;                                  /*  TX0H            */
    unsigned char dummy169[2];                            /*                  */
    unsigned long RX0W;                                   /*  RX0W            */
    unsigned short RX0H;                                  /*  RX0H            */
    unsigned char dummy170[2];                            /*                  */
    unsigned long MRWP0;                                  /*  MRWP0           */
    unsigned long STR0;                                   /*  STR0            */
    unsigned short STCR0;                                 /*  STCR0           */
    unsigned char dummy171[30];                           /*                  */
    unsigned short MCTL0;                                 /*  MCTL0           */
    unsigned char dummy172[2];                            /*                  */
    unsigned long CFG0;                                   /*  CFG0            */
    unsigned long CFG1;                                   /*  CFG1            */
    unsigned long CFG2;                                   /*  CFG2            */
    unsigned long CFG3;                                   /*  CFG3            */
    unsigned long CFG4;                                   /*  CFG4            */
    unsigned long CFG5;                                   /*  CFG5            */
    unsigned long CFG6;                                   /*  CFG6            */
    unsigned long CFG7;                                   /*  CFG7            */
    unsigned char dummy173[4];                            /*                  */
    unsigned short BRS0;                                  /*  BRS0            */
    unsigned char dummy174[2];                            /*                  */
    unsigned short BRS1;                                  /*  BRS1            */
    unsigned char dummy175[2];                            /*                  */
    unsigned short BRS2;                                  /*  BRS2            */
    unsigned char dummy176[2];                            /*                  */
    unsigned short BRS3;                                  /*  BRS3            */
} T_CSIH3;



typedef struct ST_RLN30
{                                                         /* RLN30            */
    unsigned char  dummy598[1];                           /*                  */
    unsigned char  LWBR;                                  /*  LWBR            */

    union                                                 /*                  */
    {                                                     /* LBRP01           */
        unsigned short UINT16;                            /*  16-bit Access   */
        unsigned char  UINT8[2];                          /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*                  */
            union                                         /*                  */
            {                                             /*   LBRP0          */
                unsigned char  UINT8;                     /*   8-bit Access   */
            } LBRP0;                                      /*                  */
            union                                         /*                  */
            {                                             /*   LBRP1          */
                unsigned char  UINT8;                     /*   8-bit Access   */
            } LBRP1;                                      /*                  */
        } REGS8;                                          /*                  */
    } LBRP01;                                             /*                  */

    unsigned char  LSTC;                                  /*  LSTC            */
    unsigned char  dummy599[3];                           /*                  */
    unsigned char  LMD;                                   /*  LMD             */
    unsigned char  LBFC;                                  /*  LBFC            */
    unsigned char  LSC;                                   /*  LSC             */
    unsigned char  LWUP;                                  /*  LWUP            */
    unsigned char  LIE;                                   /*  LIE             */
    unsigned char  LEDE;                                  /*  LEDE            */
    unsigned char  LCUC;                                  /*  LCUC            */
    unsigned char  dummy600[1];                           /*                  */
    unsigned char  LTRC;                                  /*  LTRC            */
    unsigned char  LMST;                                  /*  LMST            */
    unsigned char  LST;                                   /*  LST             */
    unsigned char  LEST;                                  /*  LEST            */
    unsigned char  LDFC;                                  /*  LDFC            */
    unsigned char  LIDB;                                  /*  LIDB            */
    unsigned char  LCBR;                                  /*  LCBR            */
    unsigned char  LUDB0;                                 /*  LUDB0           */
    unsigned char  LDBR1;                                 /*  LDBR1           */
    unsigned char  LDBR2;                                 /*  LDBR2           */
    unsigned char  LDBR3;                                 /*  LDBR3           */
    unsigned char  LDBR4;                                 /*  LDBR4           */
    unsigned char  LDBR5;                                 /*  LDBR5           */
    unsigned char  LDBR6;                                 /*  LDBR6           */
    unsigned char  LDBR7;                                 /*  LDBR7           */
    unsigned char  LDBR8;                                 /*  LDBR8           */
    unsigned char  LUOER;                                 /*  LUOER           */
    unsigned char  LUOR1;                                 /*  LUOR1           */
    unsigned char  dummy601[2];                           /*                  */

    union                                                 /*                  */
    {                                                     /* LUTDR            */
        unsigned short UINT16;                            /*  16-bit Access   */
        unsigned char  UINT8[2];                          /*  8-bit Access    */
    } LUTDR;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* LURDR            */
        unsigned short UINT16;                            /*  16-bit Access   */
        unsigned char  UINT8[2];                          /*  8-bit Access    */
    } LURDR;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* LUWTDR           */
        unsigned short UINT16;                            /*  16-bit Access   */
        unsigned char  UINT8[2];                          /*  8-bit Access    */
    } LUWTDR;                                             /*                  */

}T_RLN30;
typedef struct ST_FSGD2A
{                                                         /* FSGD2A           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT04           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID04           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT05           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID05           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT08           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID08           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT09           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID09           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT10           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID10           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT11           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID11           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT12           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID12           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT13           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID13           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID13;                                             /*                  */

}T_FSGD2A;
typedef struct ST_WDTA0
{                                                         /* WDTA0            */
    unsigned char  WDTE;                                  /*  WDTE            */
    unsigned char  dummy721[3];                           /*                  */
    unsigned char  EVAC;                                  /*  EVAC            */
    unsigned char  dummy722[3];                           /*                  */
    unsigned char  REF;                                   /*  REF             */
    unsigned char  dummy723[3];                           /*                  */
    unsigned char  MD;                                    /*  MD              */
}T_WDTA0;
typedef struct ST_FSGD1A
{                                                         /* FSGD1A           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT04           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID04           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT05           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID05           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID07;                                             /*                  */

}T_FSGD1A;
typedef struct ST_FSGD1B
{                                                         /* FSGD1B           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        unsigned long UINT32;                                    /*  32-bit Access   */
        unsigned short UINT16[2];                                 /*  16-bit Access   */
        unsigned char UINT8[4];                                   /*  8-bit Access    */
    } PROT02;

    union                                                 /*                  */
    {                                                     /* SPID02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID03;                                             /*                  */

    unsigned char  dummy731[16];                          /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT08           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID08           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT09           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID09           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT10           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID10           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT11           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID11           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT12           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID12           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT13           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID13           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID13;                                             /*                  */

}T_FSGD1B;
typedef struct ST_CLMA0
{                                                         /* CLMA0            */
    unsigned char  CTL0;                                  /*  CTL0            */
    unsigned char  dummy823[7];                           /*                  */
    unsigned short CMPL;                                  /*  CMPL            */
    unsigned char  dummy824[2];                           /*                  */
    unsigned short CMPH;                                  /*  CMPH            */
    unsigned char  dummy825[2];                           /*                  */
    unsigned char  PCMD;                                  /*  PCMD            */
    unsigned char  dummy826[3];                           /*                  */
    unsigned char  PS;                                    /*  PS              */
    unsigned char  dummy827[3];                           /*                  */
    unsigned char  EMU0;                                  /*  EMU0            */
}T_CLMA0;
typedef struct ST_FSGD4A
{                                                         /* FSGD4A           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT04           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID04           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT05           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID05           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT08           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID08           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT09           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID09           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT10           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID10           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT11           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID11           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT12           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID12           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT13           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID13           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT14           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT14;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID14           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID14;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT15           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT15;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID15           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID15;                                             /*                  */

}T_FSGD4A;
typedef struct ST_FSGD4B
{                                                         /* FSGD4B           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT04           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID04           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT05           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID05           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT08           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID08           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT09           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID09           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT10           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID10           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT11           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID11           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT12           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID12           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT13           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID13           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID13;                                             /*                  */

}T_FSGD4B;

#define ADCX_NUMBER_OF_CHANNELS       24
#define ADCX_NUMBER_OF_GROUPS         5

/*******************************************************************************
** Structure for HW Unit Registers, which are used to read or write           **
** the status or configured values for proper working of the ADC driver       **
*******************************************************************************/
typedef struct STag_Adc_AdcxSgRegs
{
  /*START Msg(2:3132)-2 */
  /* Scan group x start control register */
  unsigned char volatile ucADCXnSGSTCRx;
  /* Reserved area */
  const unsigned char Res1[7];
  /* AD timer y start control register */
  unsigned char volatile ucADCXnADTSTCRy;
  /* Reserved area */
  const unsigned char Res2[3];
  /* AD timer y end control register */
  unsigned char volatile ucADCXnADTENDCRy;
  /* Reserved area */
  const unsigned char Res3[3];
  /* Scan group x control register */
  unsigned char volatile ucADCXnSGCRx;
  /* Reserved area */
  const unsigned char Res4[3];
  /* Scan group x start virtual channel pointer */
  unsigned char volatile ucADCXnSGVCSPx;
  /* Reserved area */
  const unsigned char Res5[3];
  /* Scan group x end virtual channel pointer */
  unsigned char volatile ucADCXnSGVCEPx;
  /* Reserved area */
  const unsigned char Res6[3];
  /* Scan group x multi-cycle register */
  unsigned char volatile ucADCXnSGMCYCRx;
  /* Reserved area */
  const unsigned char Res7[7];
  /* Scan group x status register */
  unsigned char volatile ucADCXnSGSRx;
  /* Reserved area */
  const unsigned char Res8[3];
  /* AD timer y initial phase register */
  unsigned long int volatile ulADCXnADTIPRy;
  /* AD timer y period register */
  unsigned long int volatile ulADCXnADTPRRy;
  /* Scan group x upper-limit/lower-limit table select register */
  unsigned char volatile ucADCXnULLMSRx;
  /* Reserved area */
  const unsigned char Res9[79];
  /* END Msg(2:3132)-2 */
}Adc_AdcxSgRegs;

typedef struct STag_AdcConfigRegisters
{
  /*START Msg(2:3132)-2 */
  /* Virtual channel register j */
  unsigned long int volatile ulADCXnVCRj[ADCX_NUMBER_OF_CHANNELS];
  /* Reserved area 1 */
  const unsigned char AdcdCh_Res1[160];
  /* Data register j (j = only even numbers) */
  unsigned long int volatile ulADCXnDRj[ADCX_NUMBER_OF_CHANNELS];
  /* Reserved area 2 */
  const unsigned char AdcdCh_Res2[160];
  /* Data supplementary information register j */
  unsigned long int volatile ulADCXnDIRj[ADCX_NUMBER_OF_CHANNELS];
  /* Reserved area 3 */
  const unsigned char AdcdCh_Res3[160];
  /* AD synchronization start control register */
  unsigned char volatile ucADCD0ADSYNSTCR;
  /* Reserved area */
  const unsigned char Res1[3];
  /* AD timer synchronization start control register */
  unsigned char volatile ucADCD0ADTSYNSTCR;
  /* Reserved area */
  const unsigned char Res2[59];
  /* A/D conversion time control register */
  unsigned short int volatile usADCXnSMPCR;
  /* Reserved area */
  const unsigned char Res3[62];
  /* AD halt register */
  unsigned char volatile ucADCXnADHALTR;
  /* Reserved area */
  const unsigned char Res4[3];
  /* AD control register1 */
  unsigned char volatile ucADCXnADCR1;
  /* Reserved area */
  const unsigned char Res5[3];
  /* MPX current control register */
  unsigned char volatile ucADCXnMPXCURCR;
  /* Reserved area */
  const unsigned char Res6[3];
  /* MPX current register */
  unsigned long int volatile ulADCXnMPXCURR;
  /* MPX optional wait register */
  unsigned char volatile ucADCXnMPXOWR;
  /* Reserved area */
  const unsigned char Res7[7];
  /* AD control register 2 */
  unsigned char volatile ucADCXnADCR2;
  /* Reserved area */
  const unsigned char Res8[7];
  /* A/D conversion monitor virtual channel pointer 0 */
  unsigned char volatile ucADCXnADENDP0;
  /* Reserved area */
  const unsigned char Res9[3];
  /* A/D conversion monitor virtual channel pointer 1 */
  unsigned char volatile ucADCXnADENDP1;
  /* Reserved area */
  const unsigned char Res10[3];
  /* A/D conversion monitor virtual channel pointer 2 */
  unsigned char volatile ucADCXnADENDP2;
  /* Reserved area */
  const unsigned char Res11[3];
  /* A/D conversion monitor virtual channel pointer 3 */
  unsigned char volatile ucADCXnADENDP3;
  /* Reserved area */
  const unsigned char Res12[3];
  /* A/D conversion monitor virtual channel pointer 4 */
  unsigned char volatile ucADCXnADENDP4;
  /* Reserved area */
  const unsigned char Res13[15];
  /* Safety control register */
  unsigned char volatile ucADCXnSFTCR;
  /* Reserved area */
  const unsigned char Res14[3];
  /* Pin level self-diagnostic control register */
  unsigned char volatile ucADCXnTDCR;
  /* Reserved area */
  const unsigned char Res15[3];
  /* Wiring-break detection control register */
  unsigned long int volatile ulADCXnODCR;
  /* Upper-limit/lower-limit table register 0 */
  unsigned long int volatile ulADCXnULLMTBR0;
  /* Upper-limit/lower-limit table register 1 */
  unsigned long int volatile ulADCXnULLMTBR1;
  /* Upper-limit/lower-limit table register 2 */
  unsigned long int volatile ulADCXnULLMTBR2;
  /* Error clear register */
  unsigned char volatile ucADCXnECR;
  /* Reserved area */
  const unsigned char Res16[3];
  /* Upper-limit/lower-limit error register */
  unsigned char volatile ucADCXnULER;
  /* Reserved area */
  const unsigned char Res17[3];
  /* Overwrite error register */
  unsigned char volatile ucADCXnOWER;
  /* Reserved area */
  const unsigned char Res18[3];
  /* Parity error register */
  unsigned char volatile ucADCXnPER;
  /* Reserved area */
  const unsigned char Res19[3];
  /* ID error register */
  unsigned char volatile ucADCXnIDER;
  /* Reserved area */
  const unsigned char Res20[23];
  /* T&H sampling start control register */
  unsigned char volatile ucADCXnTHSMPSTCR;
  /* Reserved area */
  const unsigned char Res21[3];
  /* T&H stop control register */
  unsigned char volatile ucADCXnTHSTPCR;
  /* Reserved area */
  const unsigned char Res22[3];
  /* T&H control register */
  unsigned char volatile ucADCXnTHCR;
  /* Reserved area */
  const unsigned char Res23[7];
  /* T&H group A hold start control register */
  unsigned char volatile ucADCXnTHAHLDSTCR;
  /* Reserved area */
  const unsigned char Res24[3];
  /* T&H group B hold start control register */
  unsigned char volatile ucADCXnTHBHLDSTCR;
  /* Reserved area */
  const unsigned char Res25[11];
  /* T&H group A control register */
  unsigned char volatile ucADCXnTHACR;
  /* Reserved area */
  const unsigned char Res26[3];
  /* T&H group B control register */
  unsigned char volatile ucADCXnTHBCR;
  /* Reserved area */
  const unsigned char Res27[11];
  /* T&H enable register */
  unsigned char volatile ucADCXnTHER;
  /* Reserved area */
  const unsigned char Res28[3];
  /* T&H group select register */
  unsigned short int volatile usADCXnTHGSR;
  /* Reserved area */
  const unsigned char AdcdGp_Res[74];
  /* END Msg(2:3132)-2 */
  /* Hardware Scan Group registers */
  Adc_AdcxSgRegs volatile AdcxSgRegs[ADCX_NUMBER_OF_GROUPS];
}Adc_ConfigRegisters;

typedef struct STag_Adc_DmaAddrRegs
{
  /* Address for source address register */
  unsigned long volatile ulDSAn;
  /* Address for lower destination address register */
  unsigned long volatile ulDDAn;
  /* Transfer count register */
  unsigned long volatile ulDTCn;
  /* Transfer control register */
  unsigned long volatile ulDTCTn;
  /* DMAC reload source address */
  unsigned long volatile ulDRSAn;
  /* DMAC reload destination address */
  unsigned long volatile ulDRDAn;
  /* DMAC reload transfer count */
  unsigned long volatile ulDRTCn;
  /* DMAC transfer count compare */
  unsigned long volatile ulDTCCn;
  /* DMAC Channel Operation Enable Setting Register */
  unsigned long volatile ulDCENn;
  /* Transfer status register */
  unsigned long volatile ulDCSTn;
  /* Transfer status set register */
  unsigned long volatile ulDCSTSn;
  /* Transfer status clear register */
  unsigned long volatile ulDCSTCn;
  /* Trigger factor Register */
  unsigned long volatile ulDTFRn;
  /* DTFR transfer request status */
  unsigned long volatile ulDTFRRQn;
  /* DTFR transfer request clear */
  unsigned long volatile ulDTFRRQCn;

}Adc_DmaAddrRegs;

typedef struct ST_FSGD3A
{                                                         /* FSGD3A           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT04           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID04           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT05           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID05           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT08           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID08           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT09           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID09           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT10           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID10           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT11           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID11           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT12           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID12           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT13           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID13           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT14           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT14;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID14           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID14;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT15           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT15;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID15           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID15;                                             /*                  */

}T_FSGD3A;
typedef struct ST_FSGD3B
{                                                         /* FSGD3B           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID02           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID03;                                             /*                  */

    unsigned char  dummy995[16];                          /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT08           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID08           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT09           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID09           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT10           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID10           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT11           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID11           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT12           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID12           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT13           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID13           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID13;                                             /*                  */

}T_FSGD3B;
typedef struct ST_FSGDF0
{                                                         /* FSGDF0           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID01;                                             /*                  */

}T_FSGDF0;
typedef struct ST_FSGDE0
{                                                         /* FSGDE0           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } SPID01;                                             /*                  */

}T_FSGDE0;
typedef struct STag_PortRegisters
{
 unsigned short usP;
 unsigned short ucdummy1;
 unsigned long ulPSR;
 unsigned short usPNOT;
 unsigned short ucdummy2;
 unsigned short usPPR;
 unsigned short ucdummy3;
 unsigned short usPM;
 unsigned short ucdummy4;
 unsigned short usPMC;
 unsigned short ucdummy5;
 unsigned short usPFC;
 unsigned short ucdummy6;
 unsigned short usPFCE;
 unsigned short ucdummy7;
 unsigned long ulPMSR;
 unsigned long ulPMCSR;
 unsigned long ucdummy30[2];
 unsigned short usPINV;
 unsigned short ucdummy8[8167];
 unsigned short usPIBC;
 unsigned short ucdummy9;
 unsigned short usPBDC;
 unsigned short ucdummy10;
 unsigned short usPIPC;
 unsigned short ucdummy11;
 unsigned short usPU;
 unsigned short ucdummy12;
 unsigned short usPD;
 unsigned short ucdummy13;
 unsigned long ulPODC;
 unsigned long ulPDSC;
 unsigned short usPIS;
 unsigned long ucdummy32;
 unsigned short usPISA;
 unsigned short ucdummy15;
 unsigned long ulPUCC;
 unsigned long ucdummy33[3];
 unsigned long ulPODCE;
}Port_Registers;
typedef struct STag_JPortRegisters
{
 unsigned char usP;
 unsigned char ucdummy16[3];
 unsigned long ulPSR;
 unsigned char usPNOT;
 unsigned char ucdummy17[3];
 unsigned char usPPR;
 unsigned char ucdummy18[3];
 unsigned char usPM;
 unsigned char ucdummy19[3];
 unsigned char usPMC;
 unsigned char ucdummy20[3];
 unsigned char usPFC;
 unsigned char ucdummy21[3];
 unsigned char usPFCE;
 unsigned char ucdummy22[3];
 unsigned long ulPMSR;
 unsigned long ulPMCSR;
 unsigned long ucdummy31[2];
 unsigned char usPINV;
 unsigned char ucdummy35;
 unsigned short udummy34[8167];
 unsigned char usPIBC;
 unsigned char ucdummy24[3];
 unsigned char usPBDC;
 unsigned char ucdummy26[7];
 unsigned char usPU;
 unsigned char ucdummy27[3];
 unsigned char usPD;
 unsigned char ucdummy28[3];
 unsigned long ulPODC;
 unsigned long ulPDSC;
 unsigned char usPIS;
 unsigned char ucdummy29[7];
 unsigned char usPISA;
 unsigned char ucdummy30[3];
 unsigned long ulPUCC;
 unsigned long ucdummy36[3];
 unsigned long ulPODCE;
}JPort_Registers;

typedef struct STag_Adc_PicAddrRegs
{
  /* A/D converter trigger select 0/1 */
  unsigned long int volatile ulPIC2CTRGPREMUXn[2];
  /* A/D converter trigger select 0/1 */
  const unsigned char  Res0[8];
  /* A/D converter trigger select control 0/1 */
  unsigned long int volatile ulPIC2CTRGMUXn[2];
  /* A/D converter trigger edge control 0/1 */
  unsigned long int volatile ulPIC2CEDGSELn[2];
  /* Path to TIM0 enable control register 0/1 */
  unsigned long int volatile ulPIC2CENP2TIMn[2];
  /* Hi-Z function for GTM output enable control register */
  unsigned long int volatile ulPIC2CENHIZDTM;
}Adc_PicRegisters;


typedef struct ST_TIMOS
{   /*Structure for TIM related registers*/
   volatile unsigned long TIMmINPVAL;
   volatile unsigned long TIMmINSRC;
   volatile unsigned long TIMmRST;
}T_TIMOS;

typedef struct ST_TIMUS
{   /*Structure for TIM related registers*/
    volatile unsigned long   TIMmnGPR0;
    volatile unsigned long   TIMmnGPR1;
    volatile unsigned long   TIMmnCNT;
    volatile unsigned long   TIMmnECNT;
    volatile unsigned long   TIMmnCNTS;
    volatile unsigned long   TIMmnTDUC;
    volatile unsigned long   TIMmnTDUV;
    volatile unsigned long   TIMmnFLTRE;
    volatile unsigned long   TIMmnFLTFE;
    volatile unsigned long   TIMmnCTRL;
    volatile unsigned long   TIMmnECTRL;
    volatile unsigned long   TIMmnIRQNOTIFY;
    volatile unsigned long   TIMmnIRQEN;
    volatile unsigned long   TIMmnIRQFORCINT;
    volatile unsigned long   TIMmnIRQMODE;
    volatile unsigned long   TIMmnEIRQEN;
}T_TIMUS;


typedef struct ST_GTM0
{                                                         /* GTM0             */
    unsigned long  GTMREV;                                /*  GTMREV          */
    unsigned long  GTMRST;                                /*  GTMRST          */
    unsigned long  GTMCTRL;                               /*  GTMCTRL         */
    unsigned long  GTMAEIADDRXPT;                         /*  GTMAEIADDRXPT   */
    unsigned long  GTMIRQNOTIFY;                          /*  GTMIRQNOTIFY    */
    unsigned long  GTMIRQEN;                              /*  GTMIRQEN        */
    unsigned long  GTMIRQFORCINT;                         /*  GTMIRQFORCINT   */
    unsigned long  GTMIRQMODE;                            /*  GTMIRQMODE      */
    unsigned long  GTMEIRQEN;                             /*  GTMEIRQEN       */
    unsigned long  GTMHWCONF;                             /*  GTMHWCONF       */
    unsigned char  dummy625[8];                           /*                  */
    unsigned long  GTMBRIDGEMODE;                         /*  GTMBRIDGEMODE   */
    unsigned long  GTMBRIDGEPTR1;                         /*  GTMBRIDGEPTR1   */
    unsigned long  GTMBRIDGEPTR2;                         /*  GTMBRIDGEPTR2   */
    unsigned char  dummy626[4];                           /*                  */
    unsigned long  GTMTIM0AUXINSRC;                       /*  GTMTIM0AUXINSRC */
    unsigned long  GTMTIM1AUXINSRC;                       /*  GTMTIM1AUXINSRC */
    unsigned char  dummy627[20];                          /*                  */
    unsigned long  GTMEXTCAPEN0;                          /*  GTMEXTCAPEN0    */
    unsigned long  GTMEXTCAPEN1;                          /*  GTMEXTCAPEN1    */
    unsigned long  GTMEXTCAPEN2;                          /*  GTMEXTCAPEN2    */
    unsigned long  GTMEXTCAPEN3;                          /*  GTMEXTCAPEN3    */
    unsigned long  GTMEXTCAPEN4;                          /*  GTMEXTCAPEN4    */
    unsigned long  GTMEXTCAPEN5;                          /*  GTMEXTCAPEN5    */
    unsigned long  GTMEXTCAPEN6;                          /*  GTMEXTCAPEN6    */
    unsigned long  GTMEXTCAPEN7;                          /*  GTMEXTCAPEN7    */
    unsigned char  dummy628[28];                          /*                  */
    unsigned long  GTMATOM0OUT;                           /*  GTMATOM0OUT     */
    unsigned long  GTMATOM2OUT;                           /*  GTMATOM2OUT     */
    unsigned char  dummy629[96];                          /*                  */
    unsigned long  TBUCHEN;                               /*  TBUCHEN         */
    unsigned long  TBU0CTRL;                              /*  TBU0CTRL        */
    unsigned long  TBU0BASE;                              /*  TBU0BASE        */
    unsigned long  TBU1CTRL;                              /*  TBU1CTRL        */
    unsigned long  TBU1BASE;                              /*  TBU1BASE        */
    unsigned char  dummy630[108];                         /*                  */
    unsigned long  MONSTATUS;                             /*  MONSTATUS       */
    unsigned char  dummy631[8];                           /*                  */
    unsigned long  MONACTIVITYMCS0;                       /*  MONACTIVITYMCS0 */
    unsigned long  MONACTIVITYMCS1;                       /*  MONACTIVITYMCS1 */
    unsigned char  dummy632[108];                         /*                  */
    unsigned long  CMPEN;                                 /*  CMPEN           */
    unsigned long  CMPIRQNOTIFY;                          /*  CMPIRQNOTIFY    */
    unsigned long  CMPIRQEN;                              /*  CMPIRQEN        */
    unsigned long  CMPIRQFORCINT;                         /*  CMPIRQFORCINT   */
    unsigned long  CMPIRQMODE;                            /*  CMPIRQMODE      */
    unsigned long  CMPEIRQEN;                             /*  CMPEIRQEN       */
    unsigned char  dummy633[104];                         /*                  */
    unsigned long  ARUACCESS;                             /*  ARUACCESS       */
    unsigned long  ARUDATAH;                              /*  ARUDATAH        */
    unsigned long  ARUDATAL;                              /*  ARUDATAL        */
    unsigned long  ARUDBGACCESS0;                         /*  ARUDBGACCESS0   */
    unsigned long  ARUDBGDATA0H;                          /*  ARUDBGDATA0H    */
    unsigned long  ARUDBGDATA0L;                          /*  ARUDBGDATA0L    */
    unsigned long  ARUDBGACCESS1;                         /*  ARUDBGACCESS1   */
    unsigned long  ARUDBGDATA1H;                          /*  ARUDBGDATA1H    */
    unsigned long  ARUDBGDATA1L;                          /*  ARUDBGDATA1L    */
    unsigned long  ARUIRQNOTIFY;                          /*  ARUIRQNOTIFY    */
    unsigned long  ARUIRQEN;                              /*  ARUIRQEN        */
    unsigned long  ARUIRQFORCINT;                         /*  ARUIRQFORCINT   */
    unsigned long  ARUIRQMODE;                            /*  ARUIRQMODE      */
    unsigned long  ARUCADDREND;                           /*  ARUCADDREND     */
    unsigned char  dummy634[72];                          /*                  */
    unsigned long  CMUCLKEN;                              /*  CMUCLKEN        */
    unsigned long  CMUGCLKNUM;                            /*  CMUGCLKNUM      */
    unsigned long  CMUGCLKDEN;                            /*  CMUGCLKDEN      */
    unsigned long  CMUCLK0CTRL;                           /*  CMUCLK0CTRL     */
    unsigned long  CMUCLK1CTRL;                           /*  CMUCLK1CTRL     */
    unsigned long  CMUCLK2CTRL;                           /*  CMUCLK2CTRL     */
    unsigned long  CMUCLK3CTRL;                           /*  CMUCLK3CTRL     */
    unsigned long  CMUCLK4CTRL;                           /*  CMUCLK4CTRL     */
    unsigned long  CMUCLK5CTRL;                           /*  CMUCLK5CTRL     */
    unsigned long  CMUCLK6CTRL;                           /*  CMUCLK6CTRL     */
    unsigned long  CMUCLK7CTRL;                           /*  CMUCLK7CTRL     */
    unsigned char  dummy635[28];                          /*                  */
    unsigned long  CMUGLBCTRL;                            /*  CMUGLBCTRL      */
    unsigned char  dummy636[692];                         /*                  */
    unsigned long  ICMIRQG0;                              /*  ICMIRQG0        */
    unsigned char  dummy637[4];                           /*                  */
    unsigned long  ICMIRQG2;                              /*  ICMIRQG2        */
    unsigned char  dummy638[24];                          /*                  */
    unsigned long  ICMIRQG9;                              /*  ICMIRQG9        */
    unsigned char  dummy639[8];                           /*                  */
    unsigned long  ICMIRQGMEI;                            /*  ICMIRQGMEI      */
    unsigned char  dummy640[4];                           /*                  */
    unsigned long  ICMIRQGCEI1;                           /*  ICMIRQGCEI1     */
    unsigned char  dummy641[12];                          /*                  */
    unsigned long  ICMIRQGMCS0CI;                         /*  ICMIRQGMCS0CI   */
    unsigned long  ICMIRQGMCS1CI;                         /*  ICMIRQGMCS1CI   */
    unsigned char  dummy642[20];                          /*                  */
    unsigned long  ICMIRQGMCS0CEI;                        /*  ICMIRQGMCS0CEI  */
    unsigned long  ICMIRQGMCS1CEI;                        /*  ICMIRQGMCS1CEI  */
    unsigned char  dummy643[2260];                        /*                  */
    unsigned long  MCFGCTRL;                              /*  MCFGCTRL        */
    unsigned char  dummy644[188];                         /*                  */
    unsigned long  TIM00GPR0;                             /*  TIM00GPR0       */
    unsigned long  TIM00GPR1;                             /*  TIM00GPR1       */
    unsigned long  TIM00CNT;                              /*  TIM00CNT        */
    unsigned long  TIM00ECNT;                             /*  TIM00ECNT       */
    unsigned long  TIM00CNTS;                             /*  TIM00CNTS       */
    unsigned long  TIM00TDUC;                             /*  TIM00TDUC       */
    unsigned long  TIM00TDUV;                             /*  TIM00TDUV       */
    unsigned long  TIM00FLTRE;                            /*  TIM00FLTRE      */
    unsigned long  TIM00FLTFE;                            /*  TIM00FLTFE      */
    unsigned long  TIM00CTRL;                             /*  TIM00CTRL       */
    unsigned long  TIM00ECTRL;                            /*  TIM00ECTRL      */
    unsigned long  TIM00IRQNOTIFY;                        /*  TIM00IRQNOTIFY  */
    unsigned long  TIM00IRQEN;                            /*  TIM00IRQEN      */
    unsigned long  TIM00IRQFORCINT;                       /*  TIM00IRQFORCINT */
    unsigned long  TIM00IRQMODE;                          /*  TIM00IRQMODE    */
    unsigned long  TIM00EIRQEN;                           /*  TIM00EIRQEN     */
    unsigned char  dummy645[52];                          /*                  */
    unsigned long  TIM0INPVAL;                            /*  TIM0INPVAL      */
    unsigned long  TIM0INSRC;                             /*  TIM0INSRC       */
    unsigned long  TIM0RST;                               /*  TIM0RST         */
    unsigned long  TIM01GPR0;                             /*  TIM01GPR0       */
    unsigned long  TIM01GPR1;                             /*  TIM01GPR1       */
    unsigned long  TIM01CNT;                              /*  TIM01CNT        */
    unsigned long  TIM01ECNT;                             /*  TIM01ECNT       */
    unsigned long  TIM01CNTS;                             /*  TIM01CNTS       */
    unsigned long  TIM01TDUC;                             /*  TIM01TDUC       */
    unsigned long  TIM01TDUV;                             /*  TIM01TDUV       */
    unsigned long  TIM01FLTRE;                            /*  TIM01FLTRE      */
    unsigned long  TIM01FLTFE;                            /*  TIM01FLTFE      */
    unsigned long  TIM01CTRL;                             /*  TIM01CTRL       */
    unsigned long  TIM01ECTRL;                            /*  TIM01ECTRL      */
    unsigned long  TIM01IRQNOTIFY;                        /*  TIM01IRQNOTIFY  */
    unsigned long  TIM01IRQEN;                            /*  TIM01IRQEN      */
    unsigned long  TIM01IRQFORCINT;                       /*  TIM01IRQFORCINT */
    unsigned long  TIM01IRQMODE;                          /*  TIM01IRQMODE    */
    unsigned long  TIM01EIRQEN;                           /*  TIM01EIRQEN     */
    unsigned char  dummy646[64];                          /*                  */
    unsigned long  TIM02GPR0;                             /*  TIM02GPR0       */
    unsigned long  TIM02GPR1;                             /*  TIM02GPR1       */
    unsigned long  TIM02CNT;                              /*  TIM02CNT        */
    unsigned long  TIM02ECNT;                             /*  TIM02ECNT       */
    unsigned long  TIM02CNTS;                             /*  TIM02CNTS       */
    unsigned long  TIM02TDUC;                             /*  TIM02TDUC       */
    unsigned long  TIM02TDUV;                             /*  TIM02TDUV       */
    unsigned long  TIM02FLTRE;                            /*  TIM02FLTRE      */
    unsigned long  TIM02FLTFE;                            /*  TIM02FLTFE      */
    unsigned long  TIM02CTRL;                             /*  TIM02CTRL       */
    unsigned long  TIM02ECTRL;                            /*  TIM02ECTRL      */
    unsigned long  TIM02IRQNOTIFY;                        /*  TIM02IRQNOTIFY  */
    unsigned long  TIM02IRQEN;                            /*  TIM02IRQEN      */
    unsigned long  TIM02IRQFORCINT;                       /*  TIM02IRQFORCINT */
    unsigned long  TIM02IRQMODE;                          /*  TIM02IRQMODE    */
    unsigned long  TIM02EIRQEN;                           /*  TIM02EIRQEN     */
    unsigned char  dummy647[64];                          /*                  */
    unsigned long  TIM03GPR0;                             /*  TIM03GPR0       */
    unsigned long  TIM03GPR1;                             /*  TIM03GPR1       */
    unsigned long  TIM03CNT;                              /*  TIM03CNT        */
    unsigned long  TIM03ECNT;                             /*  TIM03ECNT       */
    unsigned long  TIM03CNTS;                             /*  TIM03CNTS       */
    unsigned long  TIM03TDUC;                             /*  TIM03TDUC       */
    unsigned long  TIM03TDUV;                             /*  TIM03TDUV       */
    unsigned long  TIM03FLTRE;                            /*  TIM03FLTRE      */
    unsigned long  TIM03FLTFE;                            /*  TIM03FLTFE      */
    unsigned long  TIM03CTRL;                             /*  TIM03CTRL       */
    unsigned long  TIM03ECTRL;                            /*  TIM03ECTRL      */
    unsigned long  TIM03IRQNOTIFY;                        /*  TIM03IRQNOTIFY  */
    unsigned long  TIM03IRQEN;                            /*  TIM03IRQEN      */
    unsigned long  TIM03IRQFORCINT;                       /*  TIM03IRQFORCINT */
    unsigned long  TIM03IRQMODE;                          /*  TIM03IRQMODE    */
    unsigned long  TIM03EIRQEN;                           /*  TIM03EIRQEN     */
    unsigned char  dummy648[64];                          /*                  */
    unsigned long  TIM04GPR0;                             /*  TIM04GPR0       */
    unsigned long  TIM04GPR1;                             /*  TIM04GPR1       */
    unsigned long  TIM04CNT;                              /*  TIM04CNT        */
    unsigned long  TIM04ECNT;                             /*  TIM04ECNT       */
    unsigned long  TIM04CNTS;                             /*  TIM04CNTS       */
    unsigned long  TIM04TDUC;                             /*  TIM04TDUC       */
    unsigned long  TIM04TDUV;                             /*  TIM04TDUV       */
    unsigned long  TIM04FLTRE;                            /*  TIM04FLTRE      */
    unsigned long  TIM04FLTFE;                            /*  TIM04FLTFE      */
    unsigned long  TIM04CTRL;                             /*  TIM04CTRL       */
    unsigned long  TIM04ECTRL;                            /*  TIM04ECTRL      */
    unsigned long  TIM04IRQNOTIFY;                        /*  TIM04IRQNOTIFY  */
    unsigned long  TIM04IRQEN;                            /*  TIM04IRQEN      */
    unsigned long  TIM04IRQFORCINT;                       /*  TIM04IRQFORCINT */
    unsigned long  TIM04IRQMODE;                          /*  TIM04IRQMODE    */
    unsigned long  TIM04EIRQEN;                           /*  TIM04EIRQEN     */
    unsigned char  dummy649[64];                          /*                  */
    unsigned long  TIM05GPR0;                             /*  TIM05GPR0       */
    unsigned long  TIM05GPR1;                             /*  TIM05GPR1       */
    unsigned long  TIM05CNT;                              /*  TIM05CNT        */
    unsigned long  TIM05ECNT;                             /*  TIM05ECNT       */
    unsigned long  TIM05CNTS;                             /*  TIM05CNTS       */
    unsigned long  TIM05TDUC;                             /*  TIM05TDUC       */
    unsigned long  TIM05TDUV;                             /*  TIM05TDUV       */
    unsigned long  TIM05FLTRE;                            /*  TIM05FLTRE      */
    unsigned long  TIM05FLTFE;                            /*  TIM05FLTFE      */
    unsigned long  TIM05CTRL;                             /*  TIM05CTRL       */
    unsigned long  TIM05ECTRL;                            /*  TIM05ECTRL      */
    unsigned long  TIM05IRQNOTIFY;                        /*  TIM05IRQNOTIFY  */
    unsigned long  TIM05IRQEN;                            /*  TIM05IRQEN      */
    unsigned long  TIM05IRQFORCINT;                       /*  TIM05IRQFORCINT */
    unsigned long  TIM05IRQMODE;                          /*  TIM05IRQMODE    */
    unsigned long  TIM05EIRQEN;                           /*  TIM05EIRQEN     */
    unsigned char  dummy650[64];                          /*                  */
    unsigned long  TIM06GPR0;                             /*  TIM06GPR0       */
    unsigned long  TIM06GPR1;                             /*  TIM06GPR1       */
    unsigned long  TIM06CNT;                              /*  TIM06CNT        */
    unsigned long  TIM06ECNT;                             /*  TIM06ECNT       */
    unsigned long  TIM06CNTS;                             /*  TIM06CNTS       */
    unsigned long  TIM06TDUC;                             /*  TIM06TDUC       */
    unsigned long  TIM06TDUV;                             /*  TIM06TDUV       */
    unsigned long  TIM06FLTRE;                            /*  TIM06FLTRE      */
    unsigned long  TIM06FLTFE;                            /*  TIM06FLTFE      */
    unsigned long  TIM06CTRL;                             /*  TIM06CTRL       */
    unsigned long  TIM06ECTRL;                            /*  TIM06ECTRL      */
    unsigned long  TIM06IRQNOTIFY;                        /*  TIM06IRQNOTIFY  */
    unsigned long  TIM06IRQEN;                            /*  TIM06IRQEN      */
    unsigned long  TIM06IRQFORCINT;                       /*  TIM06IRQFORCINT */
    unsigned long  TIM06IRQMODE;                          /*  TIM06IRQMODE    */
    unsigned long  TIM06EIRQEN;                           /*  TIM06EIRQEN     */
    unsigned char  dummy651[64];                          /*                  */
    unsigned long  TIM07GPR0;                             /*  TIM07GPR0       */
    unsigned long  TIM07GPR1;                             /*  TIM07GPR1       */
    unsigned long  TIM07CNT;                              /*  TIM07CNT        */
    unsigned long  TIM07ECNT;                             /*  TIM07ECNT       */
    unsigned long  TIM07CNTS;                             /*  TIM07CNTS       */
    unsigned long  TIM07TDUC;                             /*  TIM07TDUC       */
    unsigned long  TIM07TDUV;                             /*  TIM07TDUV       */
    unsigned long  TIM07FLTRE;                            /*  TIM07FLTRE      */
    unsigned long  TIM07FLTFE;                            /*  TIM07FLTFE      */
    unsigned long  TIM07CTRL;                             /*  TIM07CTRL       */
    unsigned long  TIM07ECTRL;                            /*  TIM07ECTRL      */
    unsigned long  TIM07IRQNOTIFY;                        /*  TIM07IRQNOTIFY  */
    unsigned long  TIM07IRQEN;                            /*  TIM07IRQEN      */
    unsigned long  TIM07IRQFORCINT;                       /*  TIM07IRQFORCINT */
    unsigned long  TIM07IRQMODE;                          /*  TIM07IRQMODE    */
    unsigned long  TIM07EIRQEN;                           /*  TIM07EIRQEN     */
    unsigned char  dummy652[1088];                        /*                  */
    unsigned long  TIM10GPR0;                             /*  TIM10GPR0       */
    unsigned long  TIM10GPR1;                             /*  TIM10GPR1       */
    unsigned long  TIM10CNT;                              /*  TIM10CNT        */
    unsigned long  TIM10ECNT;                             /*  TIM10ECNT       */
    unsigned long  TIM10CNTS;                             /*  TIM10CNTS       */
    unsigned long  TIM10TDUC;                             /*  TIM10TDUC       */
    unsigned long  TIM10TDUV;                             /*  TIM10TDUV       */
    unsigned long  TIM10FLTRE;                            /*  TIM10FLTRE      */
    unsigned long  TIM10FLTFE;                            /*  TIM10FLTFE      */
    unsigned long  TIM10CTRL;                             /*  TIM10CTRL       */
    unsigned long  TIM10ECTRL;                            /*  TIM10ECTRL      */
    unsigned long  TIM10IRQNOTIFY;                        /*  TIM10IRQNOTIFY  */
    unsigned long  TIM10IRQEN;                            /*  TIM10IRQEN      */
    unsigned long  TIM10IRQFORCINT;                       /*  TIM10IRQFORCINT */
    unsigned long  TIM10IRQMODE;                          /*  TIM10IRQMODE    */
    unsigned long  TIM10EIRQEN;                           /*  TIM10EIRQEN     */
    unsigned char  dummy653[52];                          /*                  */
    unsigned long  TIM1INPVAL;                            /*  TIM1INPVAL      */
    unsigned long  TIM1INSRC;                             /*  TIM1INSRC       */
    unsigned long  TIM1RST;                               /*  TIM1RST         */
    unsigned long  TIM11GPR0;                             /*  TIM11GPR0       */
    unsigned long  TIM11GPR1;                             /*  TIM11GPR1       */
    unsigned long  TIM11CNT;                              /*  TIM11CNT        */
    unsigned long  TIM11ECNT;                             /*  TIM11ECNT       */
    unsigned long  TIM11CNTS;                             /*  TIM11CNTS       */
    unsigned long  TIM11TDUC;                             /*  TIM11TDUC       */
    unsigned long  TIM11TDUV;                             /*  TIM11TDUV       */
    unsigned long  TIM11FLTRE;                            /*  TIM11FLTRE      */
    unsigned long  TIM11FLTFE;                            /*  TIM11FLTFE      */
    unsigned long  TIM11CTRL;                             /*  TIM11CTRL       */
    unsigned long  TIM11ECTRL;                            /*  TIM11ECTRL      */
    unsigned long  TIM11IRQNOTIFY;                        /*  TIM11IRQNOTIFY  */
    unsigned long  TIM11IRQEN;                            /*  TIM11IRQEN      */
    unsigned long  TIM11IRQFORCINT;                       /*  TIM11IRQFORCINT */
    unsigned long  TIM11IRQMODE;                          /*  TIM11IRQMODE    */
    unsigned long  TIM11EIRQEN;                           /*  TIM11EIRQEN     */
    unsigned char  dummy654[64];                          /*                  */
    unsigned long  TIM12GPR0;                             /*  TIM12GPR0       */
    unsigned long  TIM12GPR1;                             /*  TIM12GPR1       */
    unsigned long  TIM12CNT;                              /*  TIM12CNT        */
    unsigned long  TIM12ECNT;                             /*  TIM12ECNT       */
    unsigned long  TIM12CNTS;                             /*  TIM12CNTS       */
    unsigned long  TIM12TDUC;                             /*  TIM12TDUC       */
    unsigned long  TIM12TDUV;                             /*  TIM12TDUV       */
    unsigned long  TIM12FLTRE;                            /*  TIM12FLTRE      */
    unsigned long  TIM12FLTFE;                            /*  TIM12FLTFE      */
    unsigned long  TIM12CTRL;                             /*  TIM12CTRL       */
    unsigned long  TIM12ECTRL;                            /*  TIM12ECTRL      */
    unsigned long  TIM12IRQNOTIFY;                        /*  TIM12IRQNOTIFY  */
    unsigned long  TIM12IRQEN;                            /*  TIM12IRQEN      */
    unsigned long  TIM12IRQFORCINT;                       /*  TIM12IRQFORCINT */
    unsigned long  TIM12IRQMODE;                          /*  TIM12IRQMODE    */
    unsigned long  TIM12EIRQEN;                           /*  TIM12EIRQEN     */
    unsigned char  dummy655[64];                          /*                  */
    unsigned long  TIM13GPR0;                             /*  TIM13GPR0       */
    unsigned long  TIM13GPR1;                             /*  TIM13GPR1       */
    unsigned long  TIM13CNT;                              /*  TIM13CNT        */
    unsigned long  TIM13ECNT;                             /*  TIM13ECNT       */
    unsigned long  TIM13CNTS;                             /*  TIM13CNTS       */
    unsigned long  TIM13TDUC;                             /*  TIM13TDUC       */
    unsigned long  TIM13TDUV;                             /*  TIM13TDUV       */
    unsigned long  TIM13FLTRE;                            /*  TIM13FLTRE      */
    unsigned long  TIM13FLTFE;                            /*  TIM13FLTFE      */
    unsigned long  TIM13CTRL;                             /*  TIM13CTRL       */
    unsigned long  TIM13ECTRL;                            /*  TIM13ECTRL      */
    unsigned long  TIM13IRQNOTIFY;                        /*  TIM13IRQNOTIFY  */
    unsigned long  TIM13IRQEN;                            /*  TIM13IRQEN      */
    unsigned long  TIM13IRQFORCINT;                       /*  TIM13IRQFORCINT */
    unsigned long  TIM13IRQMODE;                          /*  TIM13IRQMODE    */
    unsigned long  TIM13EIRQEN;                           /*  TIM13EIRQEN     */
    unsigned char  dummy656[64];                          /*                  */
    unsigned long  TIM14GPR0;                             /*  TIM14GPR0       */
    unsigned long  TIM14GPR1;                             /*  TIM14GPR1       */
    unsigned long  TIM14CNT;                              /*  TIM14CNT        */
    unsigned long  TIM14ECNT;                             /*  TIM14ECNT       */
    unsigned long  TIM14CNTS;                             /*  TIM14CNTS       */
    unsigned long  TIM14TDUC;                             /*  TIM14TDUC       */
    unsigned long  TIM14TDUV;                             /*  TIM14TDUV       */
    unsigned long  TIM14FLTRE;                            /*  TIM14FLTRE      */
    unsigned long  TIM14FLTFE;                            /*  TIM14FLTFE      */
    unsigned long  TIM14CTRL;                             /*  TIM14CTRL       */
    unsigned long  TIM14ECTRL;                            /*  TIM14ECTRL      */
    unsigned long  TIM14IRQNOTIFY;                        /*  TIM14IRQNOTIFY  */
    unsigned long  TIM14IRQEN;                            /*  TIM14IRQEN      */
    unsigned long  TIM14IRQFORCINT;                       /*  TIM14IRQFORCINT */
    unsigned long  TIM14IRQMODE;                          /*  TIM14IRQMODE    */
    unsigned long  TIM14EIRQEN;                           /*  TIM14EIRQEN     */
    unsigned char  dummy657[64];                          /*                  */
    unsigned long  TIM15GPR0;                             /*  TIM15GPR0       */
    unsigned long  TIM15GPR1;                             /*  TIM15GPR1       */
    unsigned long  TIM15CNT;                              /*  TIM15CNT        */
    unsigned long  TIM15ECNT;                             /*  TIM15ECNT       */
    unsigned long  TIM15CNTS;                             /*  TIM15CNTS       */
    unsigned long  TIM15TDUC;                             /*  TIM15TDUC       */
    unsigned long  TIM15TDUV;                             /*  TIM15TDUV       */
    unsigned long  TIM15FLTRE;                            /*  TIM15FLTRE      */
    unsigned long  TIM15FLTFE;                            /*  TIM15FLTFE      */
    unsigned long  TIM15CTRL;                             /*  TIM15CTRL       */
    unsigned long  TIM15ECTRL;                            /*  TIM15ECTRL      */
    unsigned long  TIM15IRQNOTIFY;                        /*  TIM15IRQNOTIFY  */
    unsigned long  TIM15IRQEN;                            /*  TIM15IRQEN      */
    unsigned long  TIM15IRQFORCINT;                       /*  TIM15IRQFORCINT */
    unsigned long  TIM15IRQMODE;                          /*  TIM15IRQMODE    */
    unsigned long  TIM15EIRQEN;                           /*  TIM15EIRQEN     */
    unsigned char  dummy658[64];                          /*                  */
    unsigned long  TIM16GPR0;                             /*  TIM16GPR0       */
    unsigned long  TIM16GPR1;                             /*  TIM16GPR1       */
    unsigned long  TIM16CNT;                              /*  TIM16CNT        */
    unsigned long  TIM16ECNT;                             /*  TIM16ECNT       */
    unsigned long  TIM16CNTS;                             /*  TIM16CNTS       */
    unsigned long  TIM16TDUC;                             /*  TIM16TDUC       */
    unsigned long  TIM16TDUV;                             /*  TIM16TDUV       */
    unsigned long  TIM16FLTRE;                            /*  TIM16FLTRE      */
    unsigned long  TIM16FLTFE;                            /*  TIM16FLTFE      */
    unsigned long  TIM16CTRL;                             /*  TIM16CTRL       */
    unsigned long  TIM16ECTRL;                            /*  TIM16ECTRL      */
    unsigned long  TIM16IRQNOTIFY;                        /*  TIM16IRQNOTIFY  */
    unsigned long  TIM16IRQEN;                            /*  TIM16IRQEN      */
    unsigned long  TIM16IRQFORCINT;                       /*  TIM16IRQFORCINT */
    unsigned long  TIM16IRQMODE;                          /*  TIM16IRQMODE    */
    unsigned long  TIM16EIRQEN;                           /*  TIM16EIRQEN     */
    unsigned char  dummy659[64];                          /*                  */
    unsigned long  TIM17GPR0;                             /*  TIM17GPR0       */
    unsigned long  TIM17GPR1;                             /*  TIM17GPR1       */
    unsigned long  TIM17CNT;                              /*  TIM17CNT        */
    unsigned long  TIM17ECNT;                             /*  TIM17ECNT       */
    unsigned long  TIM17CNTS;                             /*  TIM17CNTS       */
    unsigned long  TIM17TDUC;                             /*  TIM17TDUC       */
    unsigned long  TIM17TDUV;                             /*  TIM17TDUV       */
    unsigned long  TIM17FLTRE;                            /*  TIM17FLTRE      */
    unsigned long  TIM17FLTFE;                            /*  TIM17FLTFE      */
    unsigned long  TIM17CTRL;                             /*  TIM17CTRL       */
    unsigned long  TIM17ECTRL;                            /*  TIM17ECTRL      */
    unsigned long  TIM17IRQNOTIFY;                        /*  TIM17IRQNOTIFY  */
    unsigned long  TIM17IRQEN;                            /*  TIM17IRQEN      */
    unsigned long  TIM17IRQFORCINT;                       /*  TIM17IRQFORCINT */
    unsigned long  TIM17IRQMODE;                          /*  TIM17IRQMODE    */
    unsigned long  TIM17EIRQEN;                           /*  TIM17EIRQEN     */
    unsigned char  dummy660[46144];                       /*                  */
    unsigned long  ATOM00RDADDR;                          /*  ATOM00RDADDR    */
    unsigned long  ATOM00CTRL;                            /*  ATOM00CTRL      */
    unsigned long  ATOM00SR0;                             /*  ATOM00SR0       */
    unsigned long  ATOM00SR1;                             /*  ATOM00SR1       */
    unsigned long  ATOM00CM0;                             /*  ATOM00CM0       */
    unsigned long  ATOM00CM1;                             /*  ATOM00CM1       */
    unsigned long  ATOM00CN0;                             /*  ATOM00CN0       */
    unsigned long  ATOM00STAT;                            /*  ATOM00STAT      */
    unsigned long  ATOM00IRQNOTIFY;                       /*  ATOM00IRQNOTIFY */
    unsigned long  ATOM00IRQEN;                           /*  ATOM00IRQEN     */
    unsigned long  ATOM00IRQFORCINT;                      /*  ATOM00IRQFORCINT*/
    unsigned long  ATOM00IRQMODE;                         /*  ATOM00IRQMODE   */
    unsigned char  dummy661[16];                          /*                  */
    unsigned long  ATOM0AGCGLBCTRL;                       /*  ATOM0AGCGLBCTRL */
    unsigned long  ATOM0AGCENDISCTRL;                     /* ATOM0AGCENDISCTRL*/
    unsigned long  ATOM0AGCENDISSTAT;                     /* ATOM0AGCENDISSTAT*/
    unsigned long  ATOM0AGCACTTB;                         /*  ATOM0AGCACTTB   */
    unsigned long  ATOM0AGCOUTENCTRL;                     /* ATOM0AGCOUTENCTRL*/
    unsigned long  ATOM0AGCOUTENSTAT;                     /* ATOM0AGCOUTENSTAT*/
    unsigned long  ATOM0AGCFUPDCTRL;                      /*  ATOM0AGCFUPDCTRL*/
    unsigned long  ATOM0AGCINTTRIG;                       /*  ATOM0AGCINTTRIG */
    unsigned char  dummy662[32];                          /*                  */
    unsigned long  ATOM01RDADDR;                          /*  ATOM01RDADDR    */
    unsigned long  ATOM01CTRL;                            /*  ATOM01CTRL      */
    unsigned long  ATOM01SR0;                             /*  ATOM01SR0       */
    unsigned long  ATOM01SR1;                             /*  ATOM01SR1       */
    unsigned long  ATOM01CM0;                             /*  ATOM01CM0       */
    unsigned long  ATOM01CM1;                             /*  ATOM01CM1       */
    unsigned long  ATOM01CN0;                             /*  ATOM01CN0       */
    unsigned long  ATOM01STAT;                            /*  ATOM01STAT      */
    unsigned long  ATOM01IRQNOTIFY;                       /*  ATOM01IRQNOTIFY */
    unsigned long  ATOM01IRQEN;                           /*  ATOM01IRQEN     */
    unsigned long  ATOM01IRQFORCINT;                      /*  ATOM01IRQFORCINT*/
    unsigned long  ATOM01IRQMODE;                         /*  ATOM01IRQMODE   */
    unsigned char  dummy663[80];                          /*                  */
    unsigned long  ATOM02RDADDR;                          /*  ATOM02RDADDR    */
    unsigned long  ATOM02CTRL;                            /*  ATOM02CTRL      */
    unsigned long  ATOM02SR0;                             /*  ATOM02SR0       */
    unsigned long  ATOM02SR1;                             /*  ATOM02SR1       */
    unsigned long  ATOM02CM0;                             /*  ATOM02CM0       */
    unsigned long  ATOM02CM1;                             /*  ATOM02CM1       */
    unsigned long  ATOM02CN0;                             /*  ATOM02CN0       */
    unsigned long  ATOM02STAT;                            /*  ATOM02STAT      */
    unsigned long  ATOM02IRQNOTIFY;                       /*  ATOM02IRQNOTIFY */
    unsigned long  ATOM02IRQEN;                           /*  ATOM02IRQEN     */
    unsigned long  ATOM02IRQFORCINT;                      /*  ATOM02IRQFORCINT*/
    unsigned long  ATOM02IRQMODE;                         /*  ATOM02IRQMODE   */
    unsigned char  dummy664[80];                          /*                  */
    unsigned long  ATOM03RDADDR;                          /*  ATOM03RDADDR    */
    unsigned long  ATOM03CTRL;                            /*  ATOM03CTRL      */
    unsigned long  ATOM03SR0;                             /*  ATOM03SR0       */
    unsigned long  ATOM03SR1;                             /*  ATOM03SR1       */
    unsigned long  ATOM03CM0;                             /*  ATOM03CM0       */
    unsigned long  ATOM03CM1;                             /*  ATOM03CM1       */
    unsigned long  ATOM03CN0;                             /*  ATOM03CN0       */
    unsigned long  ATOM03STAT;                            /*  ATOM03STAT      */
    unsigned long  ATOM03IRQNOTIFY;                       /*  ATOM03IRQNOTIFY */
    unsigned long  ATOM03IRQEN;                           /*  ATOM03IRQEN     */
    unsigned long  ATOM03IRQFORCINT;                      /*  ATOM03IRQFORCINT*/
    unsigned long  ATOM03IRQMODE;                         /*  ATOM03IRQMODE   */
    unsigned char  dummy665[80];                          /*                  */
    unsigned long  ATOM04RDADDR;                          /*  ATOM04RDADDR    */
    unsigned long  ATOM04CTRL;                            /*  ATOM04CTRL      */
    unsigned long  ATOM04SR0;                             /*  ATOM04SR0       */
    unsigned long  ATOM04SR1;                             /*  ATOM04SR1       */
    unsigned long  ATOM04CM0;                             /*  ATOM04CM0       */
    unsigned long  ATOM04CM1;                             /*  ATOM04CM1       */
    unsigned long  ATOM04CN0;                             /*  ATOM04CN0       */
    unsigned long  ATOM04STAT;                            /*  ATOM04STAT      */
    unsigned long  ATOM04IRQNOTIFY;                       /*  ATOM04IRQNOTIFY */
    unsigned long  ATOM04IRQEN;                           /*  ATOM04IRQEN     */
    unsigned long  ATOM04IRQFORCINT;                      /*  ATOM04IRQFORCINT*/
    unsigned long  ATOM04IRQMODE;                         /*  ATOM04IRQMODE   */
    unsigned char  dummy666[80];                          /*                  */
    unsigned long  ATOM05RDADDR;                          /*  ATOM05RDADDR    */
    unsigned long  ATOM05CTRL;                            /*  ATOM05CTRL      */
    unsigned long  ATOM05SR0;                             /*  ATOM05SR0       */
    unsigned long  ATOM05SR1;                             /*  ATOM05SR1       */
    unsigned long  ATOM05CM0;                             /*  ATOM05CM0       */
    unsigned long  ATOM05CM1;                             /*  ATOM05CM1       */
    unsigned long  ATOM05CN0;                             /*  ATOM05CN0       */
    unsigned long  ATOM05STAT;                            /*  ATOM05STAT      */
    unsigned long  ATOM05IRQNOTIFY;                       /*  ATOM05IRQNOTIFY */
    unsigned long  ATOM05IRQEN;                           /*  ATOM05IRQEN     */
    unsigned long  ATOM05IRQFORCINT;                      /*  ATOM05IRQFORCINT*/
    unsigned long  ATOM05IRQMODE;                         /*  ATOM05IRQMODE   */
    unsigned char  dummy667[80];                          /*                  */
    unsigned long  ATOM06RDADDR;                          /*  ATOM06RDADDR    */
    unsigned long  ATOM06CTRL;                            /*  ATOM06CTRL      */
    unsigned long  ATOM06SR0;                             /*  ATOM06SR0       */
    unsigned long  ATOM06SR1;                             /*  ATOM06SR1       */
    unsigned long  ATOM06CM0;                             /*  ATOM06CM0       */
    unsigned long  ATOM06CM1;                             /*  ATOM06CM1       */
    unsigned long  ATOM06CN0;                             /*  ATOM06CN0       */
    unsigned long  ATOM06STAT;                            /*  ATOM06STAT      */
    unsigned long  ATOM06IRQNOTIFY;                       /*  ATOM06IRQNOTIFY */
    unsigned long  ATOM06IRQEN;                           /*  ATOM06IRQEN     */
    unsigned long  ATOM06IRQFORCINT;                      /*  ATOM06IRQFORCINT*/
    unsigned long  ATOM06IRQMODE;                         /*  ATOM06IRQMODE   */
    unsigned char  dummy668[80];                          /*                  */
    unsigned long  ATOM07RDADDR;                          /*  ATOM07RDADDR    */
    unsigned long  ATOM07CTRL;                            /*  ATOM07CTRL      */
    unsigned long  ATOM07SR0;                             /*  ATOM07SR0       */
    unsigned long  ATOM07SR1;                             /*  ATOM07SR1       */
    unsigned long  ATOM07CM0;                             /*  ATOM07CM0       */
    unsigned long  ATOM07CM1;                             /*  ATOM07CM1       */
    unsigned long  ATOM07CN0;                             /*  ATOM07CN0       */
    unsigned long  ATOM07STAT;                            /*  ATOM07STAT      */
    unsigned long  ATOM07IRQNOTIFY;                       /*  ATOM07IRQNOTIFY */
    unsigned long  ATOM07IRQEN;                           /*  ATOM07IRQEN     */
    unsigned long  ATOM07IRQFORCINT;                      /*  ATOM07IRQFORCINT*/
    unsigned long  ATOM07IRQMODE;                         /*  ATOM07IRQMODE   */
    unsigned char  dummy669[1104];                        /*                  */
    unsigned long  ATOM10RDADDR;                          /*  ATOM10RDADDR    */
    unsigned long  ATOM10CTRL;                            /*  ATOM10CTRL      */
    unsigned long  ATOM10SR0;                             /*  ATOM10SR0       */
    unsigned long  ATOM10SR1;                             /*  ATOM10SR1       */
    unsigned long  ATOM10CM0;                             /*  ATOM10CM0       */
    unsigned long  ATOM10CM1;                             /*  ATOM10CM1       */
    unsigned long  ATOM10CN0;                             /*  ATOM10CN0       */
    unsigned long  ATOM10STAT;                            /*  ATOM10STAT      */
    unsigned long  ATOM10IRQNOTIFY;                       /*  ATOM10IRQNOTIFY */
    unsigned long  ATOM10IRQEN;                           /*  ATOM10IRQEN     */
    unsigned long  ATOM10IRQFORCINT;                      /*  ATOM10IRQFORCINT*/
    unsigned long  ATOM10IRQMODE;                         /*  ATOM10IRQMODE   */
    unsigned char  dummy670[16];                          /*                  */
    unsigned long  ATOM1AGCGLBCTRL;                       /*  ATOM1AGCGLBCTRL */
    unsigned long  ATOM1AGCENDISCTRL;                     /* ATOM1AGCENDISCTRL*/
    unsigned long  ATOM1AGCENDISSTAT;                     /*  ATOM1AGCENDISSTAT*/
    unsigned long  ATOM1AGCACTTB;                         /*  ATOM1AGCACTTB   */
    unsigned long  ATOM1AGCOUTENCTRL;                     /*  ATOM1AGCOUTENCTR*/
    unsigned long  ATOM1AGCOUTENSTAT;                     /*  ATOM1AGCOUTENSTA*/
    unsigned long  ATOM1AGCFUPDCTRL;                      /*  ATOM1AGCFUPDCTRL*/
    unsigned long  ATOM1AGCINTTRIG;                       /*  ATOM1AGCINTTRIG */
    unsigned char  dummy671[32];                          /*                  */
    unsigned long  ATOM11RDADDR;                          /*  ATOM11RDADDR    */
    unsigned long  ATOM11CTRL;                            /*  ATOM11CTRL      */
    unsigned long  ATOM11SR0;                             /*  ATOM11SR0       */
    unsigned long  ATOM11SR1;                             /*  ATOM11SR1       */
    unsigned long  ATOM11CM0;                             /*  ATOM11CM0       */
    unsigned long  ATOM11CM1;                             /*  ATOM11CM1       */
    unsigned long  ATOM11CN0;                             /*  ATOM11CN0       */
    unsigned long  ATOM11STAT;                            /*  ATOM11STAT      */
    unsigned long  ATOM11IRQNOTIFY;                       /*  ATOM11IRQNOTIFY */
    unsigned long  ATOM11IRQEN;                           /*  ATOM11IRQEN     */
    unsigned long  ATOM11IRQFORCINT;                      /*  ATOM11IRQFORCINT*/
    unsigned long  ATOM11IRQMODE;                         /*  ATOM11IRQMODE   */
    unsigned char  dummy672[80];                          /*                  */
    unsigned long  ATOM12RDADDR;                          /*  ATOM12RDADDR    */
    unsigned long  ATOM12CTRL;                            /*  ATOM12CTRL      */
    unsigned long  ATOM12SR0;                             /*  ATOM12SR0       */
    unsigned long  ATOM12SR1;                             /*  ATOM12SR1       */
    unsigned long  ATOM12CM0;                             /*  ATOM12CM0       */
    unsigned long  ATOM12CM1;                             /*  ATOM12CM1       */
    unsigned long  ATOM12CN0;                             /*  ATOM12CN0       */
    unsigned long  ATOM12STAT;                            /*  ATOM12STAT      */
    unsigned long  ATOM12IRQNOTIFY;                       /*  ATOM12IRQNOTIFY */
    unsigned long  ATOM12IRQEN;                           /*  ATOM12IRQEN     */
    unsigned long  ATOM12IRQFORCINT;                      /*  ATOM12IRQFORCINT*/
    unsigned long  ATOM12IRQMODE;                         /*  ATOM12IRQMODE   */
    unsigned char  dummy673[80];                          /*                  */
    unsigned long  ATOM13RDADDR;                          /*  ATOM13RDADDR    */
    unsigned long  ATOM13CTRL;                            /*  ATOM13CTRL      */
    unsigned long  ATOM13SR0;                             /*  ATOM13SR0       */
    unsigned long  ATOM13SR1;                             /*  ATOM13SR1       */
    unsigned long  ATOM13CM0;                             /*  ATOM13CM0       */
    unsigned long  ATOM13CM1;                             /*  ATOM13CM1       */
    unsigned long  ATOM13CN0;                             /*  ATOM13CN0       */
    unsigned long  ATOM13STAT;                            /*  ATOM13STAT      */
    unsigned long  ATOM13IRQNOTIFY;                       /*  ATOM13IRQNOTIFY */
    unsigned long  ATOM13IRQEN;                           /*  ATOM13IRQEN     */
    unsigned long  ATOM13IRQFORCINT;                      /*  ATOM13IRQFORCINT*/
    unsigned long  ATOM13IRQMODE;                         /*  ATOM13IRQMODE   */
    unsigned char  dummy674[80];                          /*                  */
    unsigned long  ATOM14RDADDR;                          /*  ATOM14RDADDR    */
    unsigned long  ATOM14CTRL;                            /*  ATOM14CTRL      */
    unsigned long  ATOM14SR0;                             /*  ATOM14SR0       */
    unsigned long  ATOM14SR1;                             /*  ATOM14SR1       */
    unsigned long  ATOM14CM0;                             /*  ATOM14CM0       */
    unsigned long  ATOM14CM1;                             /*  ATOM14CM1       */
    unsigned long  ATOM14CN0;                             /*  ATOM14CN0       */
    unsigned long  ATOM14STAT;                            /*  ATOM14STAT      */
    unsigned long  ATOM14IRQNOTIFY;                       /*  ATOM14IRQNOTIFY */
    unsigned long  ATOM14IRQEN;                           /*  ATOM14IRQEN     */
    unsigned long  ATOM14IRQFORCINT;                      /*  ATOM14IRQFORCINT*/
    unsigned long  ATOM14IRQMODE;                         /*  ATOM14IRQMODE   */
    unsigned char  dummy675[80];                          /*                  */
    unsigned long  ATOM15RDADDR;                          /*  ATOM15RDADDR    */
    unsigned long  ATOM15CTRL;                            /*  ATOM15CTRL      */
    unsigned long  ATOM15SR0;                             /*  ATOM15SR0       */
    unsigned long  ATOM15SR1;                             /*  ATOM15SR1       */
    unsigned long  ATOM15CM0;                             /*  ATOM15CM0       */
    unsigned long  ATOM15CM1;                             /*  ATOM15CM1       */
    unsigned long  ATOM15CN0;                             /*  ATOM15CN0       */
    unsigned long  ATOM15STAT;                            /*  ATOM15STAT      */
    unsigned long  ATOM15IRQNOTIFY;                       /*  ATOM15IRQNOTIFY */
    unsigned long  ATOM15IRQEN;                           /*  ATOM15IRQEN     */
    unsigned long  ATOM15IRQFORCINT;                      /*  ATOM15IRQFORCINT*/
    unsigned long  ATOM15IRQMODE;                         /*  ATOM15IRQMODE   */
    unsigned char  dummy676[80];                          /*                  */
    unsigned long  ATOM16RDADDR;                          /*  ATOM16RDADDR    */
    unsigned long  ATOM16CTRL;                            /*  ATOM16CTRL      */
    unsigned long  ATOM16SR0;                             /*  ATOM16SR0       */
    unsigned long  ATOM16SR1;                             /*  ATOM16SR1       */
    unsigned long  ATOM16CM0;                             /*  ATOM16CM0       */
    unsigned long  ATOM16CM1;                             /*  ATOM16CM1       */
    unsigned long  ATOM16CN0;                             /*  ATOM16CN0       */
    unsigned long  ATOM16STAT;                            /*  ATOM16STAT      */
    unsigned long  ATOM16IRQNOTIFY;                       /*  ATOM16IRQNOTIFY */
    unsigned long  ATOM16IRQEN;                           /*  ATOM16IRQEN     */
    unsigned long  ATOM16IRQFORCINT;                      /*  ATOM16IRQFORCINT*/
    unsigned long  ATOM16IRQMODE;                         /*  ATOM16IRQMODE   */
    unsigned char  dummy677[80];                          /*                  */
    unsigned long  ATOM17RDADDR;                          /*  ATOM17RDADDR    */
    unsigned long  ATOM17CTRL;                            /*  ATOM17CTRL      */
    unsigned long  ATOM17SR0;                             /*  ATOM17SR0       */
    unsigned long  ATOM17SR1;                             /*  ATOM17SR1       */
    unsigned long  ATOM17CM0;                             /*  ATOM17CM0       */
    unsigned long  ATOM17CM1;                             /*  ATOM17CM1       */
    unsigned long  ATOM17CN0;                             /*  ATOM17CN0       */
    unsigned long  ATOM17STAT;                            /*  ATOM17STAT      */
    unsigned long  ATOM17IRQNOTIFY;                       /*  ATOM17IRQNOTIFY */
    unsigned long  ATOM17IRQEN;                           /*  ATOM17IRQEN     */
    unsigned long  ATOM17IRQFORCINT;                      /*  ATOM17IRQFORCINT*/
    unsigned long  ATOM17IRQMODE;                         /*  ATOM17IRQMODE   */
    unsigned char  dummy678[1104];                        /*                  */
    unsigned long  ATOM20RDADDR;                          /*  ATOM20RDADDR    */
    unsigned long  ATOM20CTRL;                            /*  ATOM20CTRL      */
    unsigned long  ATOM20SR0;                             /*  ATOM20SR0       */
    unsigned long  ATOM20SR1;                             /*  ATOM20SR1       */
    unsigned long  ATOM20CM0;                             /*  ATOM20CM0       */
    unsigned long  ATOM20CM1;                             /*  ATOM20CM1       */
    unsigned long  ATOM20CN0;                             /*  ATOM20CN0       */
    unsigned long  ATOM20STAT;                            /*  ATOM20STAT      */
    unsigned long  ATOM20IRQNOTIFY;                       /*  ATOM20IRQNOTIFY */
    unsigned long  ATOM20IRQEN;                           /*  ATOM20IRQEN     */
    unsigned long  ATOM20IRQFORCINT;                      /*  ATOM20IRQFORCINT*/
    unsigned long  ATOM20IRQMODE;                         /*  ATOM20IRQMODE   */
    unsigned char  dummy679[16];                          /*                  */
    unsigned long  ATOM2AGCGLBCTRL;                       /*  ATOM2AGCGLBCTRL */
    unsigned long  ATOM2AGCENDISCTRL;                     /* ATOM2AGCENDISCTRL*/
    unsigned long  ATOM2AGCENDISSTAT;                     /* ATOM2AGCENDISSTAT*/
    unsigned long  ATOM2AGCACTTB;                         /*  ATOM2AGCACTTB   */
    unsigned long  ATOM2AGCOUTENCTRL;                     /* ATOM2AGCOUTENCTRL*/
    unsigned long  ATOM2AGCOUTENSTAT;                     /* ATOM2AGCOUTENSTAT*/
    unsigned long  ATOM2AGCFUPDCTRL;                      /*  ATOM2AGCFUPDCTRL*/
    unsigned long  ATOM2AGCINTTRIG;                       /*  ATOM2AGCINTTRIG */
    unsigned char  dummy680[32];                          /*                  */
    unsigned long  ATOM21RDADDR;                          /*  ATOM21RDADDR    */
    unsigned long  ATOM21CTRL;                            /*  ATOM21CTRL      */
    unsigned long  ATOM21SR0;                             /*  ATOM21SR0       */
    unsigned long  ATOM21SR1;                             /*  ATOM21SR1       */
    unsigned long  ATOM21CM0;                             /*  ATOM21CM0       */
    unsigned long  ATOM21CM1;                             /*  ATOM21CM1       */
    unsigned long  ATOM21CN0;                             /*  ATOM21CN0       */
    unsigned long  ATOM21STAT;                            /*  ATOM21STAT      */
    unsigned long  ATOM21IRQNOTIFY;                       /*  ATOM21IRQNOTIFY */
    unsigned long  ATOM21IRQEN;                           /*  ATOM21IRQEN     */
    unsigned long  ATOM21IRQFORCINT;                      /*  ATOM21IRQFORCINT*/
    unsigned long  ATOM21IRQMODE;                         /*  ATOM21IRQMODE   */
    unsigned char  dummy681[80];                          /*                  */
    unsigned long  ATOM22RDADDR;                          /*  ATOM22RDADDR    */
    unsigned long  ATOM22CTRL;                            /*  ATOM22CTRL      */
    unsigned long  ATOM22SR0;                             /*  ATOM22SR0       */
    unsigned long  ATOM22SR1;                             /*  ATOM22SR1       */
    unsigned long  ATOM22CM0;                             /*  ATOM22CM0       */
    unsigned long  ATOM22CM1;                             /*  ATOM22CM1       */
    unsigned long  ATOM22CN0;                             /*  ATOM22CN0       */
    unsigned long  ATOM22STAT;                            /*  ATOM22STAT      */
    unsigned long  ATOM22IRQNOTIFY;                       /*  ATOM22IRQNOTIFY */
    unsigned long  ATOM22IRQEN;                           /*  ATOM22IRQEN     */
    unsigned long  ATOM22IRQFORCINT;                      /*  ATOM22IRQFORCINT*/
    unsigned long  ATOM22IRQMODE;                         /*  ATOM22IRQMODE   */
    unsigned char  dummy682[80];                          /*                  */
    unsigned long  ATOM23RDADDR;                          /*  ATOM23RDADDR    */
    unsigned long  ATOM23CTRL;                            /*  ATOM23CTRL      */
    unsigned long  ATOM23SR0;                             /*  ATOM23SR0       */
    unsigned long  ATOM23SR1;                             /*  ATOM23SR1       */
    unsigned long  ATOM23CM0;                             /*  ATOM23CM0       */
    unsigned long  ATOM23CM1;                             /*  ATOM23CM1       */
    unsigned long  ATOM23CN0;                             /*  ATOM23CN0       */
    unsigned long  ATOM23STAT;                            /*  ATOM23STAT      */
    unsigned long  ATOM23IRQNOTIFY;                       /*  ATOM23IRQNOTIFY */
    unsigned long  ATOM23IRQEN;                           /*  ATOM23IRQEN     */
    unsigned long  ATOM23IRQFORCINT;                      /*  ATOM23IRQFORCINT*/
    unsigned long  ATOM23IRQMODE;                         /*  ATOM23IRQMODE   */
    unsigned char  dummy683[80];                          /*                  */
    unsigned long  ATOM24RDADDR;                          /*  ATOM24RDADDR    */
    unsigned long  ATOM24CTRL;                            /*  ATOM24CTRL      */
    unsigned long  ATOM24SR0;                             /*  ATOM24SR0       */
    unsigned long  ATOM24SR1;                             /*  ATOM24SR1       */
    unsigned long  ATOM24CM0;                             /*  ATOM24CM0       */
    unsigned long  ATOM24CM1;                             /*  ATOM24CM1       */
    unsigned long  ATOM24CN0;                             /*  ATOM24CN0       */
    unsigned long  ATOM24STAT;                            /*  ATOM24STAT      */
    unsigned long  ATOM24IRQNOTIFY;                       /*  ATOM24IRQNOTIFY */
    unsigned long  ATOM24IRQEN;                           /*  ATOM24IRQEN     */
    unsigned long  ATOM24IRQFORCINT;                      /* ATOM24IRQFORCINT */
    unsigned long  ATOM24IRQMODE;                         /*  ATOM24IRQMODE   */
    unsigned char  dummy684[21456];                       /*                  */
    unsigned long  DTM24CTRL;                             /*  DTM24CTRL       */
    unsigned long  DTM24CHCTRL1;                          /*  DTM24CHCTRL1    */
    unsigned long  DTM24CHCTRL2;                          /*  DTM24CHCTRL2    */
    unsigned long  DTM24CHCTRL2SR;                        /*  DTM24CHCTRL2SR  */
    unsigned long  DTM24PSCTRL;                           /*  DTM24PSCTRL     */
    unsigned long  DTM240DTV;                             /*  DTM240DTV       */
    unsigned long  DTM241DTV;                             /*  DTM241DTV       */
    unsigned long  DTM242DTV;                             /*  DTM242DTV       */
    unsigned long  DTM243DTV;                             /*  DTM243DTV       */
    unsigned long  DTM24CHSR;                             /*  DTM24CHSR       */
    unsigned char  dummy685[88];                          /*                  */
    unsigned long  DTM26CTRL;                             /*  DTM26CTRL       */
    unsigned long  DTM26CHCTRL1;                          /*  DTM26CHCTRL1    */
    unsigned long  DTM26CHCTRL2;                          /*  DTM26CHCTRL2    */
    unsigned long  DTM26CHCTRL2SR;                        /*  DTM26CHCTRL2SR  */
    unsigned long  DTM26PSCTRL;                           /*  DTM26PSCTRL     */
    unsigned long  DTM260DTV;                             /*  DTM260DTV       */
    unsigned long  DTM261DTV;                             /*  DTM261DTV       */
    unsigned long  DTM262DTV;                             /*  DTM262DTV       */
    unsigned long  DTM263DTV;                             /*  DTM263DTV       */
    unsigned long  DTM26CHSR;                             /*  DTM26CHSR       */
    unsigned char  dummy686[88];                          /*                  */
    unsigned long  DTM28CTRL;                             /*  DTM28CTRL       */
    unsigned long  DTM28CHCTRL1;                          /*  DTM28CHCTRL1    */
    unsigned long  DTM28CHCTRL2;                          /*  DTM28CHCTRL2    */
    unsigned long  DTM28CHCTRL2SR;                        /*  DTM28CHCTRL2SR  */
    unsigned long  DTM28PSCTRL;                           /*  DTM28PSCTRL     */
    unsigned long  DTM280DTV;                             /*  DTM280DTV       */
    unsigned long  DTM281DTV;                             /*  DTM281DTV       */
    unsigned long  DTM282DTV;                             /*  DTM282DTV       */
    unsigned long  DTM283DTV;                             /*  DTM283DTV       */
    unsigned long  DTM28CHSR;                             /*  DTM28CHSR       */
    unsigned char  dummy687[116952];                      /*                  */
    unsigned long  MCS00R0;                               /*  MCS00R0         */
    unsigned long  MCS00R1;                               /*  MCS00R1         */
    unsigned long  MCS00R2;                               /*  MCS00R2         */
    unsigned long  MCS00R3;                               /*  MCS00R3         */
    unsigned long  MCS00R4;                               /*  MCS00R4         */
    unsigned long  MCS00R5;                               /*  MCS00R5         */
    unsigned long  MCS00R6;                               /*  MCS00R6         */
    unsigned long  MCS00R7;                               /*  MCS00R7         */
    unsigned long  MCS00CTRL;                             /*  MCS00CTRL       */
    unsigned long  MCS00ACB;                              /*  MCS00ACB        */
    unsigned long  MCS0CTRG;                              /*  MCS0CTRG        */
    unsigned long  MCS0STRG;                              /*  MCS0STRG        */
    unsigned char  dummy688[12];                          /*                  */
    unsigned long  MCS00MHB;                              /*  MCS00MHB        */
    unsigned long  MCS00PC;                               /*  MCS00PC         */
    unsigned long  MCS00IRQNOTIFY;                        /*  MCS00IRQNOTIFY  */
    unsigned long  MCS00IRQEN;                            /*  MCS00IRQEN      */
    unsigned long  MCS00IRQFORCINT;                       /*  MCS00IRQFORCINT */
    unsigned long  MCS00IRQMODE;                          /*  MCS00IRQMODE    */
    unsigned long  MCS00EIRQEN;                           /*  MCS00EIRQEN     */
    unsigned char  dummy689[12];                          /*                  */
    unsigned long  MCS0CTRLSTAT;                          /*  MCS0CTRLSTAT    */
    unsigned long  MCS0RESET;                             /*  MCS0RESET       */
    unsigned long  MCS0CAT;                               /*  MCS0CAT         */
    unsigned long  MCS0CWT;                               /*  MCS0CWT         */
    unsigned char  dummy690[8];                           /*                  */
    unsigned long  MCS0ERR;                               /*  MCS0ERR         */
    unsigned long  MCS01R0;                               /*  MCS01R0         */
    unsigned long  MCS01R1;                               /*  MCS01R1         */
    unsigned long  MCS01R2;                               /*  MCS01R2         */
    unsigned long  MCS01R3;                               /*  MCS01R3         */
    unsigned long  MCS01R4;                               /*  MCS01R4         */
    unsigned long  MCS01R5;                               /*  MCS01R5         */
    unsigned long  MCS01R6;                               /*  MCS01R6         */
    unsigned long  MCS01R7;                               /*  MCS01R7         */
    unsigned long  MCS01CTRL;                             /*  MCS01CTRL       */
    unsigned long  MCS01ACB;                              /*  MCS01ACB        */
    unsigned char  dummy691[20];                          /*                  */
    unsigned long  MCS01MHB;                              /*  MCS01MHB        */
    unsigned long  MCS01PC;                               /*  MCS01PC         */
    unsigned long  MCS01IRQNOTIFY;                        /*  MCS01IRQNOTIFY  */
    unsigned long  MCS01IRQEN;                            /*  MCS01IRQEN      */
    unsigned long  MCS01IRQFORCINT;                       /*  MCS01IRQFORCINT */
    unsigned long  MCS01IRQMODE;                          /*  MCS01IRQMODE    */
    unsigned long  MCS01EIRQEN;                           /*  MCS01EIRQEN     */
    unsigned char  dummy692[40];                          /*                  */
    unsigned long  MCS02R0;                               /*  MCS02R0         */
    unsigned long  MCS02R1;                               /*  MCS02R1         */
    unsigned long  MCS02R2;                               /*  MCS02R2         */
    unsigned long  MCS02R3;                               /*  MCS02R3         */
    unsigned long  MCS02R4;                               /*  MCS02R4         */
    unsigned long  MCS02R5;                               /*  MCS02R5         */
    unsigned long  MCS02R6;                               /*  MCS02R6         */
    unsigned long  MCS02R7;                               /*  MCS02R7         */
    unsigned long  MCS02CTRL;                             /*  MCS02CTRL       */
    unsigned long  MCS02ACB;                              /*  MCS02ACB        */
    unsigned char  dummy693[20];                          /*                  */
    unsigned long  MCS02MHB;                              /*  MCS02MHB        */
    unsigned long  MCS02PC;                               /*  MCS02PC         */
    unsigned long  MCS02IRQNOTIFY;                        /*  MCS02IRQNOTIFY  */
    unsigned long  MCS02IRQEN;                            /*  MCS02IRQEN      */
    unsigned long  MCS02IRQFORCINT;                       /*  MCS02IRQFORCINT */
    unsigned long  MCS02IRQMODE;                          /*  MCS02IRQMODE    */
    unsigned long  MCS02EIRQEN;                           /*  MCS02EIRQEN     */
    unsigned char  dummy694[40];                          /*                  */
    unsigned long  MCS03R0;                               /*  MCS03R0         */
    unsigned long  MCS03R1;                               /*  MCS03R1         */
    unsigned long  MCS03R2;                               /*  MCS03R2         */
    unsigned long  MCS03R3;                               /*  MCS03R3         */
    unsigned long  MCS03R4;                               /*  MCS03R4         */
    unsigned long  MCS03R5;                               /*  MCS03R5         */
    unsigned long  MCS03R6;                               /*  MCS03R6         */
    unsigned long  MCS03R7;                               /*  MCS03R7         */
    unsigned long  MCS03CTRL;                             /*  MCS03CTRL       */
    unsigned long  MCS03ACB;                              /*  MCS03ACB        */
    unsigned char  dummy695[20];                          /*                  */
    unsigned long  MCS03MHB;                              /*  MCS03MHB        */
    unsigned long  MCS03PC;                               /*  MCS03PC         */
    unsigned long  MCS03IRQNOTIFY;                        /*  MCS03IRQNOTIFY  */
    unsigned long  MCS03IRQEN;                            /*  MCS03IRQEN      */
    unsigned long  MCS03IRQFORCINT;                       /*  MCS03IRQFORCINT */
    unsigned long  MCS03IRQMODE;                          /*  MCS03IRQMODE    */
    unsigned long  MCS03EIRQEN;                           /*  MCS03EIRQEN     */
    unsigned char  dummy696[40];                          /*                  */
    unsigned long  MCS04R0;                               /*  MCS04R0         */
    unsigned long  MCS04R1;                               /*  MCS04R1         */
    unsigned long  MCS04R2;                               /*  MCS04R2         */
    unsigned long  MCS04R3;                               /*  MCS04R3         */
    unsigned long  MCS04R4;                               /*  MCS04R4         */
    unsigned long  MCS04R5;                               /*  MCS04R5         */
    unsigned long  MCS04R6;                               /*  MCS04R6         */
    unsigned long  MCS04R7;                               /*  MCS04R7         */
    unsigned long  MCS04CTRL;                             /*  MCS04CTRL       */
    unsigned long  MCS04ACB;                              /*  MCS04ACB        */
    unsigned char  dummy697[20];                          /*                  */
    unsigned long  MCS04MHB;                              /*  MCS04MHB        */
    unsigned long  MCS04PC;                               /*  MCS04PC         */
    unsigned long  MCS04IRQNOTIFY;                        /*  MCS04IRQNOTIFY  */
    unsigned long  MCS04IRQEN;                            /*  MCS04IRQEN      */
    unsigned long  MCS04IRQFORCINT;                       /*  MCS04IRQFORCINT */
    unsigned long  MCS04IRQMODE;                          /*  MCS04IRQMODE    */
    unsigned long  MCS04EIRQEN;                           /*  MCS04EIRQEN     */
    unsigned char  dummy698[40];                          /*                  */
    unsigned long  MCS05R0;                               /*  MCS05R0         */
    unsigned long  MCS05R1;                               /*  MCS05R1         */
    unsigned long  MCS05R2;                               /*  MCS05R2         */
    unsigned long  MCS05R3;                               /*  MCS05R3         */
    unsigned long  MCS05R4;                               /*  MCS05R4         */
    unsigned long  MCS05R5;                               /*  MCS05R5         */
    unsigned long  MCS05R6;                               /*  MCS05R6         */
    unsigned long  MCS05R7;                               /*  MCS05R7         */
    unsigned long  MCS05CTRL;                             /*  MCS05CTRL       */
    unsigned long  MCS05ACB;                              /*  MCS05ACB        */
    unsigned char  dummy699[20];                          /*                  */
    unsigned long  MCS05MHB;                              /*  MCS05MHB        */
    unsigned long  MCS05PC;                               /*  MCS05PC         */
    unsigned long  MCS05IRQNOTIFY;                        /*  MCS05IRQNOTIFY  */
    unsigned long  MCS05IRQEN;                            /*  MCS05IRQEN      */
    unsigned long  MCS05IRQFORCINT;                       /*  MCS05IRQFORCINT */
    unsigned long  MCS05IRQMODE;                          /*  MCS05IRQMODE    */
    unsigned long  MCS05EIRQEN;                           /*  MCS05EIRQEN     */
    unsigned char  dummy700[40];                          /*                  */
    unsigned long  MCS06R0;                               /*  MCS06R0         */
    unsigned long  MCS06R1;                               /*  MCS06R1         */
    unsigned long  MCS06R2;                               /*  MCS06R2         */
    unsigned long  MCS06R3;                               /*  MCS06R3         */
    unsigned long  MCS06R4;                               /*  MCS06R4         */
    unsigned long  MCS06R5;                               /*  MCS06R5         */
    unsigned long  MCS06R6;                               /*  MCS06R6         */
    unsigned long  MCS06R7;                               /*  MCS06R7         */
    unsigned long  MCS06CTRL;                             /*  MCS06CTRL       */
    unsigned long  MCS06ACB;                              /*  MCS06ACB        */
    unsigned char  dummy701[20];                          /*                  */
    unsigned long  MCS06MHB;                              /*  MCS06MHB        */
    unsigned long  MCS06PC;                               /*  MCS06PC         */
    unsigned long  MCS06IRQNOTIFY;                        /*  MCS06IRQNOTIFY  */
    unsigned long  MCS06IRQEN;                            /*  MCS06IRQEN      */
    unsigned long  MCS06IRQFORCINT;                       /*  MCS06IRQFORCINT */
    unsigned long  MCS06IRQMODE;                          /*  MCS06IRQMODE    */
    unsigned long  MCS06EIRQEN;                           /*  MCS06EIRQEN     */
    unsigned char  dummy702[40];                          /*                  */
    unsigned long  MCS07R0;                               /*  MCS07R0         */
    unsigned long  MCS07R1;                               /*  MCS07R1         */
    unsigned long  MCS07R2;                               /*  MCS07R2         */
    unsigned long  MCS07R3;                               /*  MCS07R3         */
    unsigned long  MCS07R4;                               /*  MCS07R4         */
    unsigned long  MCS07R5;                               /*  MCS07R5         */
    unsigned long  MCS07R6;                               /*  MCS07R6         */
    unsigned long  MCS07R7;                               /*  MCS07R7         */
    unsigned long  MCS07CTRL;                             /*  MCS07CTRL       */
    unsigned long  MCS07ACB;                              /*  MCS07ACB        */
    unsigned char  dummy703[20];                          /*                  */
    unsigned long  MCS07MHB;                              /*  MCS07MHB        */
    unsigned long  MCS07PC;                               /*  MCS07PC         */
    unsigned long  MCS07IRQNOTIFY;                        /*  MCS07IRQNOTIFY  */
    unsigned long  MCS07IRQEN;                            /*  MCS07IRQEN      */
    unsigned long  MCS07IRQFORCINT;                       /*  MCS07IRQFORCINT */
    unsigned long  MCS07IRQMODE;                          /*  MCS07IRQMODE    */
    unsigned long  MCS07EIRQEN;                           /*  MCS07EIRQEN     */
    unsigned char  dummy704[40];                          /*                  */
    unsigned long  MCS08R0;                               /*  MCS08R0         */
    unsigned long  MCS08R1;                               /*  MCS08R1         */
    unsigned long  MCS08R2;                               /*  MCS08R2         */
    unsigned long  MCS08R3;                               /*  MCS08R3         */
    unsigned long  MCS08R4;                               /*  MCS08R4         */
    unsigned long  MCS08R5;                               /*  MCS08R5         */
    unsigned long  MCS08R6;                               /*  MCS08R6         */
    unsigned long  MCS08R7;                               /*  MCS08R7         */
    unsigned long  MCS08CTRL;                             /*  MCS08CTRL       */
    unsigned long  MCS08ACB;                              /*  MCS08ACB        */
    unsigned char  dummy705[20];                          /*                  */
    unsigned long  MCS08MHB;                              /*  MCS08MHB        */
    unsigned long  MCS08PC;                               /*  MCS08PC         */
    unsigned long  MCS08IRQNOTIFY;                        /*  MCS08IRQNOTIFY  */
    unsigned long  MCS08IRQEN;                            /*  MCS08IRQEN      */
    unsigned long  MCS08IRQFORCINT;                       /*  MCS08IRQFORCINT */
    unsigned long  MCS08IRQMODE;                          /*  MCS08IRQMODE    */
    unsigned long  MCS08EIRQEN;                           /*  MCS08EIRQEN     */
    unsigned char  dummy706[2984];                        /*                  */
    unsigned long  MCS10R0;                               /*  MCS10R0         */
    unsigned long  MCS10R1;                               /*  MCS10R1         */
    unsigned long  MCS10R2;                               /*  MCS10R2         */
    unsigned long  MCS10R3;                               /*  MCS10R3         */
    unsigned long  MCS10R4;                               /*  MCS10R4         */
    unsigned long  MCS10R5;                               /*  MCS10R5         */
    unsigned long  MCS10R6;                               /*  MCS10R6         */
    unsigned long  MCS10R7;                               /*  MCS10R7         */
    unsigned long  MCS10CTRL;                             /*  MCS10CTRL       */
    unsigned long  MCS10ACB;                              /*  MCS10ACB        */
    unsigned long  MCS1CTRG;                              /*  MCS1CTRG        */
    unsigned long  MCS1STRG;                              /*  MCS1STRG        */
    unsigned char  dummy707[12];                          /*                  */
    unsigned long  MCS10MHB;                              /*  MCS10MHB        */
    unsigned long  MCS10PC;                               /*  MCS10PC         */
    unsigned long  MCS10IRQNOTIFY;                        /*  MCS10IRQNOTIFY  */
    unsigned long  MCS10IRQEN;                            /*  MCS10IRQEN      */
    unsigned long  MCS10IRQFORCINT;                       /*  MCS10IRQFORCINT */
    unsigned long  MCS10IRQMODE;                          /*  MCS10IRQMODE    */
    unsigned long  MCS10EIRQEN;                           /*  MCS10EIRQEN     */
    unsigned char  dummy708[12];                          /*                  */
    unsigned long  MCS1CTRLSTAT;                          /*  MCS1CTRLSTAT    */
    unsigned long  MCS1RESET;                             /*  MCS1RESET       */
    unsigned long  MCS1CAT;                               /*  MCS1CAT         */
    unsigned long  MCS1CWT;                               /*  MCS1CWT         */
    unsigned char  dummy709[8];                           /*                  */
    unsigned long  MCS1ERR;                               /*  MCS1ERR         */
    unsigned long  MCS11R0;                               /*  MCS11R0         */
    unsigned long  MCS11R1;                               /*  MCS11R1         */
    unsigned long  MCS11R2;                               /*  MCS11R2         */
    unsigned long  MCS11R3;                               /*  MCS11R3         */
    unsigned long  MCS11R4;                               /*  MCS11R4         */
    unsigned long  MCS11R5;                               /*  MCS11R5         */
    unsigned long  MCS11R6;                               /*  MCS11R6         */
    unsigned long  MCS11R7;                               /*  MCS11R7         */
    unsigned long  MCS11CTRL;                             /*  MCS11CTRL       */
    unsigned long  MCS11ACB;                              /*  MCS11ACB        */
    unsigned char  dummy710[20];                          /*                  */
    unsigned long  MCS11MHB;                              /*  MCS11MHB        */
    unsigned long  MCS11PC;                               /*  MCS11PC         */
    unsigned long  MCS11IRQNOTIFY;                        /*  MCS11IRQNOTIFY  */
    unsigned long  MCS11IRQEN;                            /*  MCS11IRQEN      */
    unsigned long  MCS11IRQFORCINT;                       /*  MCS11IRQFORCINT */
    unsigned long  MCS11IRQMODE;                          /*  MCS11IRQMODE    */
    unsigned long  MCS11EIRQEN;                           /*  MCS11EIRQEN     */
    unsigned char  dummy711[40];                          /*                  */
    unsigned long  MCS12R0;                               /*  MCS12R0         */
    unsigned long  MCS12R1;                               /*  MCS12R1         */
    unsigned long  MCS12R2;                               /*  MCS12R2         */
    unsigned long  MCS12R3;                               /*  MCS12R3         */
    unsigned long  MCS12R4;                               /*  MCS12R4         */
    unsigned long  MCS12R5;                               /*  MCS12R5         */
    unsigned long  MCS12R6;                               /*  MCS12R6         */
    unsigned long  MCS12R7;                               /*  MCS12R7         */
    unsigned long  MCS12CTRL;                             /*  MCS12CTRL       */
    unsigned long  MCS12ACB;                              /*  MCS12ACB        */
    unsigned char  dummy712[20];                          /*                  */
    unsigned long  MCS12MHB;                              /*  MCS12MHB        */
    unsigned long  MCS12PC;                               /*  MCS12PC         */
    unsigned long  MCS12IRQNOTIFY;                        /*  MCS12IRQNOTIFY  */
    unsigned long  MCS12IRQEN;                            /*  MCS12IRQEN      */
    unsigned long  MCS12IRQFORCINT;                       /*  MCS12IRQFORCINT */
    unsigned long  MCS12IRQMODE;                          /*  MCS12IRQMODE    */
    unsigned long  MCS12EIRQEN;                           /*  MCS12EIRQEN     */
    unsigned char  dummy713[40];                          /*                  */
    unsigned long  MCS13R0;                               /*  MCS13R0         */
    unsigned long  MCS13R1;                               /*  MCS13R1         */
    unsigned long  MCS13R2;                               /*  MCS13R2         */
    unsigned long  MCS13R3;                               /*  MCS13R3         */
    unsigned long  MCS13R4;                               /*  MCS13R4         */
    unsigned long  MCS13R5;                               /*  MCS13R5         */
    unsigned long  MCS13R6;                               /*  MCS13R6         */
    unsigned long  MCS13R7;                               /*  MCS13R7         */
    unsigned long  MCS13CTRL;                             /*  MCS13CTRL       */
    unsigned long  MCS13ACB;                              /*  MCS13ACB        */
    unsigned char  dummy714[20];                          /*                  */
    unsigned long  MCS13MHB;                              /*  MCS13MHB        */
    unsigned long  MCS13PC;                               /*  MCS13PC         */
    unsigned long  MCS13IRQNOTIFY;                        /*  MCS13IRQNOTIFY  */
    unsigned long  MCS13IRQEN;                            /*  MCS13IRQEN      */
    unsigned long  MCS13IRQFORCINT;                       /*  MCS13IRQFORCINT */
    unsigned long  MCS13IRQMODE;                          /*  MCS13IRQMODE    */
    unsigned long  MCS13EIRQEN;                           /*  MCS13EIRQEN     */
    unsigned char  dummy715[40];                          /*                  */
    unsigned long  MCS14R0;                               /*  MCS14R0         */
    unsigned long  MCS14R1;                               /*  MCS14R1         */
    unsigned long  MCS14R2;                               /*  MCS14R2         */
    unsigned long  MCS14R3;                               /*  MCS14R3         */
    unsigned long  MCS14R4;                               /*  MCS14R4         */
    unsigned long  MCS14R5;                               /*  MCS14R5         */
    unsigned long  MCS14R6;                               /*  MCS14R6         */
    unsigned long  MCS14R7;                               /*  MCS14R7         */
    unsigned long  MCS14CTRL;                             /*  MCS14CTRL       */
    unsigned long  MCS14ACB;                              /*  MCS14ACB        */
    unsigned char  dummy716[20];                          /*                  */
    unsigned long  MCS14MHB;                              /*  MCS14MHB        */
    unsigned long  MCS14PC;                               /*  MCS14PC         */
    unsigned long  MCS14IRQNOTIFY;                        /*  MCS14IRQNOTIFY  */
    unsigned long  MCS14IRQEN;                            /*  MCS14IRQEN      */
    unsigned long  MCS14IRQFORCINT;                       /*  MCS14IRQFORCINT */
    unsigned long  MCS14IRQMODE;                          /*  MCS14IRQMODE    */
    unsigned long  MCS14EIRQEN;                           /*  MCS14EIRQEN     */
    unsigned char  dummy717[40];                          /*                  */
    unsigned long  MCS15R0;                               /*  MCS15R0         */
    unsigned long  MCS15R1;                               /*  MCS15R1         */
    unsigned long  MCS15R2;                               /*  MCS15R2         */
    unsigned long  MCS15R3;                               /*  MCS15R3         */
    unsigned long  MCS15R4;                               /*  MCS15R4         */
    unsigned long  MCS15R5;                               /*  MCS15R5         */
    unsigned long  MCS15R6;                               /*  MCS15R6         */
    unsigned long  MCS15R7;                               /*  MCS15R7         */
    unsigned long  MCS15CTRL;                             /*  MCS15CTRL       */
    unsigned long  MCS15ACB;                              /*  MCS15ACB        */
    unsigned char  dummy718[20];                          /*                  */
    unsigned long  MCS15MHB;                              /*  MCS15MHB        */
    unsigned long  MCS15PC;                               /*  MCS15PC         */
    unsigned long  MCS15IRQNOTIFY;                        /*  MCS15IRQNOTIFY  */
    unsigned long  MCS15IRQEN;                            /*  MCS15IRQEN      */
    unsigned long  MCS15IRQFORCINT;                       /*  MCS15IRQFORCINT */
    unsigned long  MCS15IRQMODE;                          /*  MCS15IRQMODE    */
    unsigned long  MCS15EIRQEN;                           /*  MCS15EIRQEN     */
}T_GTM0;

typedef struct ST_ATOMGBL0
{
  unsigned long  ATOM0AGCGLBCTRL;                       /*  ATOM0AGCGLBCTRL   */
  unsigned long  ATOM0AGCENDISCTRL;                     /*  ATOM0AGCENDISCTRL */
  unsigned long  ATOM0AGCENDISSTAT;                     /*  ATOM0AGCENDISSTAT */
  unsigned long  ATOM0AGCACTTB;
  unsigned long  ATOM0AGCOUTENCTRL;
  unsigned long  ATOM0AGCOUTENSTAT;
}T_ATOM0;

typedef struct ST_ATOM0CH0
{
  unsigned long  ATOM00CTRL;                             /*  ATOM00CTRL       */
  unsigned long  ATOM00SR0;                              /*  ATOM00SR0        */
  unsigned long  ATOM00SR1;                              /*  ATOM00SR1        */
  unsigned long  ATOM00CM0;                              /*  ATOM00CM0        */
  unsigned long  ATOM00CM1;                              /*  ATOM00CM1        */
  unsigned long  ATOM00CN0;                              /*  ATOM00CN0        */
  unsigned long  ATOM00STAT;                             /*  ATOM00STAT       */
  unsigned long  ATOM00IRQNOTIFY;                        /*  ATOM00IRQNOTIFY  */
  unsigned long  ATOM00IRQEN;                            /*  ATOM00IRQEN      */
  unsigned long  ATOM00IRQFORCINT;                       /*  ATOM00IRQFORCINT */
  unsigned long  ATOM00IRQMODE;                          /*  ATOM00IRQMODE    */
}T_ATOM0CH0;

typedef struct ST_STM0
{                                                         /* STM0             */
    union                                                 /*                  */
    {                                                     /* CKSEL            */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } CKSEL;                                              /*                  */

    unsigned char  dummy606[12];                          /*                  */

    union                                                 /*                  */
    {                                                     /* TS               */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } TS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* TT               */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } TT;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSTR             */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } CSTR;                                               /*                  */

    unsigned char  dummy607[4];                           /*                  */
    unsigned long  STR;                                   /*  STR             */
    unsigned long  STC;                                   /*  STC             */
    unsigned char  dummy608[8];                           /*                  */

    union                                                 /*                  */
    {                                                     /* IS               */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } IS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* RM               */
        unsigned long  UINT32;                            /*  32-bit Access   */
        unsigned char  UINT8[4];                          /*  8-bit Access    */
    } RM;                                                 /*                  */

    unsigned char  dummy609[8];                           /*                  */
    unsigned long  CNT0L;                                 /*  CNT0L           */
    unsigned long  CNT0H;                                 /*  CNT0H           */
    unsigned char  dummy610[8];                           /*                  */
    unsigned long  CMP0AL;                                /*  CMP0AL          */
    unsigned long  CMP0AH;                                /*  CMP0AH          */
    unsigned long  CMP0BL;                                /*  CMP0BL          */
    unsigned long  CMP0BH;                                /*  CMP0BH          */
    unsigned long  CMP0CL;                                /*  CMP0CL          */
    unsigned long  CMP0CH;                                /*  CMP0CH          */
    unsigned long  CMP0DL;                                /*  CMP0DL          */
    unsigned long  CMP0DH;                                /*  CMP0DH          */
    unsigned long  CNT1;                                  /*  CNT1            */
    unsigned char  dummy611[12];                          /*                  */
    unsigned long  CMP1A;                                 /*  CMP1A           */
    unsigned long  CMP1B;                                 /*  CMP1B           */
    unsigned long  CMP1C;                                 /*  CMP1C           */
    unsigned long  CMP1D;                                 /*  CMP1D           */
    unsigned long  CNT2;                                  /*  CNT2            */
    unsigned char  dummy612[12];                          /*                  */
    unsigned long  CMP2A;                                 /*  CMP2A           */
    unsigned long  CMP2B;                                 /*  CMP2B           */
    unsigned long  CMP2C;                                 /*  CMP2C           */
    unsigned long  CMP2D;                                 /*  CMP2D           */
    unsigned long  CNT3;                                  /*  CNT3            */
    unsigned char  dummy613[12];                          /*                  */
    unsigned long  CMP3A;                                 /*  CMP3A           */
    unsigned long  CMP3B;                                 /*  CMP3B           */
    unsigned long  CMP3C;                                 /*  CMP3C           */
    unsigned long  CMP3D;                                 /*  CMP3D           */
}T_STM0;

typedef struct ST_FSGDF1
{                                                         /* FSGDF1           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPID01;                                             /*                  */

} T_FSGDF1;

typedef struct ST_FSGDE1
{                                                         /* FSGDE1           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPID01;                                             /*                  */

} T_FSGDE1;


typedef struct ST_RSENT0
{                                                         /* RSENT0           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSC;                                                /*                  */

    unsigned char dummy193[8];                            /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SRTS;                                               /*                  */

    unsigned long SRXD;                                   /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } FRTS;                                               /*                  */

    unsigned long FRXD;                                   /*  FRXD            */
    unsigned char dummy194[3768];                         /*                  */
    unsigned long TSSEL;                                  /*  TSSEL           */
} T_RSENT0;


typedef struct ST_RSENT1
{                                                         /* RSENT1           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSC;                                                /*                  */

    unsigned char dummy195[8];                            /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SRTS;                                               /*                  */

    unsigned long SRXD;                                   /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } FRTS;                                               /*                  */

    unsigned long FRXD;                                   /*  FRXD            */
    unsigned char dummy196[3516];                         /*                  */
    unsigned long TSSEL;                                  /*  TSSEL           */
} T_RSENT1;


typedef struct ST_RSENT2
{                                                         /* RSENT2           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSC;                                                /*                  */

    unsigned char dummy197[8];                            /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SRTS;                                               /*                  */

    unsigned long SRXD;                                   /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } FRTS;                                               /*                  */

    unsigned long FRXD;                                   /*  FRXD            */
    unsigned char dummy198[3264];                         /*                  */
    unsigned long TSSEL;                                  /*  TSSEL           */
} T_RSENT2;


typedef struct ST_RSENT3
{                                                         /* RSENT3           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSC;                                                /*                  */

    unsigned char dummy199[8];                            /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SRTS;                                               /*                  */

    unsigned long SRXD;                                   /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } FRTS;                                               /*                  */

    unsigned long FRXD;                                   /*  FRXD            */
    unsigned char dummy200[3012];                         /*                  */
    unsigned long TSSEL;                                  /*  TSSEL           */
} T_RSENT3;


typedef struct ST_RSENT4
{                                                         /* RSENT4           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSC;                                                /*                  */

    unsigned char dummy201[8];                            /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SRTS;                                               /*                  */

    unsigned long SRXD;                                   /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } FRTS;                                               /*                  */

    unsigned long FRXD;                                   /*  FRXD            */
    unsigned char dummy202[2760];                         /*                  */
    unsigned long TSSEL;                                  /*  TSSEL           */
} T_RSENT4;


typedef struct ST_RSENT5
{                                                         /* RSENT5           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSC;                                                /*                  */

    unsigned char dummy203[8];                            /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SRTS;                                               /*                  */

    unsigned long SRXD;                                   /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } FRTS;                                               /*                  */

    unsigned long FRXD;                                   /*  FRXD            */
    unsigned char dummy204[2508];                         /*                  */
    unsigned long TSSEL;                                  /*  TSSEL           */
} T_RSENT5;


typedef struct ST_RSENT6
{                                                         /* RSENT6           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSC;                                                /*                  */

    unsigned char dummy205[8];                            /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SRTS;                                               /*                  */

    unsigned long SRXD;                                   /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } FRTS;                                               /*                  */

    unsigned long FRXD;                                   /*  FRXD            */
    unsigned char dummy206[2256];                         /*                  */
    unsigned long TSSEL;                                  /*  TSSEL           */
} T_RSENT6;


typedef struct ST_RSENT7
{                                                         /* RSENT7           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSC;                                                /*                  */

    unsigned char dummy207[8];                            /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SRTS;                                               /*                  */

    unsigned long SRXD;                                   /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } FRTS;                                               /*                  */

    unsigned long FRXD;                                   /*  FRXD            */
    unsigned char dummy208[2004];                         /*                  */
    unsigned long TSSEL;                                  /*  TSSEL           */
} T_RSENT7;


typedef struct ST_RSENT8
{                                                         /* RSENT8           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSC;                                                /*                  */

    unsigned char dummy209[8];                            /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SRTS;                                               /*                  */

    unsigned long SRXD;                                   /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } FRTS;                                               /*                  */

    unsigned long FRXD;                                   /*  FRXD            */
    unsigned char dummy210[1752];                         /*                  */
    unsigned long TSSEL;                                  /*  TSSEL           */
} T_RSENT8;


typedef struct ST_RSENT9
{                                                         /* RSENT9           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } TSC;                                                /*                  */

    unsigned char dummy211[8];                            /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } SRTS;                                               /*                  */

    unsigned long SRXD;                                   /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } FRTS;                                               /*                  */

    unsigned long FRXD;                                   /*  FRXD            */
    unsigned char dummy212[1500];                         /*                  */
    unsigned long TSSEL;                                  /*  TSSEL           */
} T_RSENT9;



typedef struct ST_HSUS0
{                                                         /* HSUS0            */
    unsigned long CKEN;                                   /*  CKEN            */
    unsigned long SRST;                                   /*  SRST            */
    unsigned long EN;                                     /*  EN              */
    unsigned long MD;                                     /*  MD              */
    unsigned long CTL;                                    /*  CTL             */
    unsigned long TDIV;                                   /*  TDIV            */
    unsigned long TSAR;                                   /*  TSAR            */
    unsigned long TPFM;                                   /*  TPFM            */
    unsigned long RDAR;                                   /*  RDAR            */
    unsigned long RPFM;                                   /*  RPFM            */
    unsigned long RGFM;                                   /*  RGFM            */
    unsigned long IREN;                                   /*  IREN            */
    unsigned long IRST;                                   /*  IRST            */

    union                                                 /*                  */
    {                                                     /* IRCL             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IRCL;                                               /*                  */

    unsigned long CST;                                    /*  CST             */
    unsigned long CTFM;                                   /*  CTFM            */
    unsigned long CRFM;                                   /*  CRFM            */
} T_HSUS0;

typedef struct ST_HSUS1
{                                                         /* HSUS1            */
    unsigned long CKEN;                                   /*  CKEN            */
    unsigned long SRST;                                   /*  SRST            */
    unsigned long EN;                                     /*  EN              */
    unsigned long MD;                                     /*  MD              */
    unsigned long CTL;                                    /*  CTL             */
    unsigned long TDIV;                                   /*  TDIV            */
    unsigned long TSAR;                                   /*  TSAR            */
    unsigned long TPFM;                                   /*  TPFM            */
    unsigned long RDAR;                                   /*  RDAR            */
    unsigned long RPFM;                                   /*  RPFM            */
    unsigned long RGFM;                                   /*  RGFM            */
    unsigned long IREN;                                   /*  IREN            */
    unsigned long IRST;                                   /*  IRST            */

    union                                                 /*                  */
    {                                                     /* IRCL             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IRCL;                                               /*                  */

    unsigned long CST;                                    /*  CST             */
    unsigned long CTFM;                                   /*  CTFM            */
    unsigned long CRFM;                                   /*  CRFM            */
} T_HSUS1;


typedef struct ST_HSUS2
{                                                         /* HSUS2            */
    unsigned long CKEN;                                   /*  CKEN            */
    unsigned long SRST;                                   /*  SRST            */
    unsigned long EN;                                     /*  EN              */
    unsigned long MD;                                     /*  MD              */
    unsigned long CTL;                                    /*  CTL             */
    unsigned long TDIV;                                   /*  TDIV            */
    unsigned long TSAR;                                   /*  TSAR            */
    unsigned long TPFM;                                   /*  TPFM            */
    unsigned long RDAR;                                   /*  RDAR            */
    unsigned long RPFM;                                   /*  RPFM            */
    unsigned long RGFM;                                   /*  RGFM            */
    unsigned long IREN;                                   /*  IREN            */
    unsigned long IRST;                                   /*  IRST            */

    union                                                 /*                  */
    {                                                     /* IRCL             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IRCL;                                               /*                  */

    unsigned long CST;                                    /*  CST             */
    unsigned long CTFM;                                   /*  CTFM            */
    unsigned long CRFM;                                   /*  CRFM            */
} T_HSUS2;

typedef struct ST_HSUS3
{                                                         /* HSUS3            */
    unsigned long CKEN;                                   /*  CKEN            */
    unsigned long SRST;                                   /*  SRST            */
    unsigned long EN;                                     /*  EN              */
    unsigned long MD;                                     /*  MD              */
    unsigned long CTL;                                    /*  CTL             */
    unsigned long TDIV;                                   /*  TDIV            */
    unsigned long TSAR;                                   /*  TSAR            */
    unsigned long TPFM;                                   /*  TPFM            */
    unsigned long RDAR;                                   /*  RDAR            */
    unsigned long RPFM;                                   /*  RPFM            */
    unsigned long RGFM;                                   /*  RGFM            */
    unsigned long IREN;                                   /*  IREN            */
    unsigned long IRST;                                   /*  IRST            */

    union                                                 /*                  */
    {                                                     /* IRCL             */
        unsigned long UINT32;                             /*  32-bit Access   */
        unsigned short UINT16[2];                         /*  16-bit Access   */
        unsigned char UINT8[4];                           /*  8-bit Access    */
    } IRCL;                                               /*                  */

    unsigned long CST;                                    /*  CST             */
    unsigned long CTFM;                                   /*  CTFM            */
    unsigned long CRFM;                                   /*  CRFM            */
} T_HSUS3;

typedef struct STag_Fcu_Registers
{
  unsigned char  ucReserved1[16];

  unsigned char  ucFASTAT;

  unsigned char  ucReserved2[31];

  unsigned long  ulFSADDR;

  unsigned long  ulFEADDR;

  unsigned char  ucReserved3[28];

  unsigned short usFCURAME;

  unsigned char ucReserved8[2];

  unsigned short usFRAMMCR;

  unsigned char  ucReserved4[36];

  unsigned long  ulFSTATR;

  unsigned short usFENTRYR;

  unsigned char  ucReserved5[78];

  unsigned char  ucFBCSTAT;

  unsigned char  ucReserved6[3];

  unsigned long  ulFPSADDR;

  unsigned char  ucReserved7[8];

  unsigned short  usFPCKAR;

}FlsFACIReg;

typedef struct STag_Fcu_ECCReg
{
  unsigned short  usDFECCCTL;

  unsigned char  ucReserved8[2];

  unsigned long  ulDFERSTR;

  unsigned char  ucDFERSTC;

  unsigned char  ucReserved9[11];

  unsigned char  ucDFERRINT;

  unsigned char  ucReserved10[7];

  unsigned short  usDFTSTCTL;
}FlsECCReg;

struct st_peg
{                                                      /* PEG              */
    union                                              /*                  */
    {                                                  /* G0MK             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G0MK;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G0BA             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G0BA;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G0SP             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G0SP;                                            /*                  */

    unsigned char  dummy1036[4];                       /*                  */

    union                                              /*                  */
    {                                                  /* G1MK             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G1MK;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G1BA             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G1BA;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G1SP             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G1SP;                                            /*                  */

    unsigned char  dummy1037[4];                       /*                  */

    union                                              /*                  */
    {                                                  /* G2MK             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G2MK;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G2BA             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G2BA;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G2SP             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G2SP;                                            /*                  */

    unsigned char  dummy1038[4];                       /*                  */

    union                                              /*                  */
    {                                                  /* G3MK             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G3MK;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G3BA             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G3BA;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G3SP             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G3SP;                                            /*                  */

    unsigned char  dummy1039[4];                       /*                  */

    union                                              /*                  */
    {                                                  /* G4MK             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G4MK;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G4BA             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G4BA;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G4SP             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G4SP;                                            /*                  */

    unsigned char  dummy1040[4];                       /*                  */

    union                                              /*                  */
    {                                                  /* G5MK             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G5MK;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G5BA             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G5BA;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G5SP             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G5SP;                                            /*                  */

    unsigned char  dummy1041[4];                       /*                  */

    union                                              /*                  */
    {                                                  /* G6MK             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G6MK;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G6BA             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G6BA;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G6SP             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G6SP;                                            /*                  */

    unsigned char  dummy1042[4];                       /*                  */

    union                                              /*                  */
    {                                                  /* G7MK             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G7MK;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G7BA             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G7BA;                                            /*                  */

    union                                              /*                  */
    {                                                  /* G7SP             */
        unsigned long  UINT32;                         /*  32-bit Access   */
        unsigned short UINT16[2];                      /*  16-bit Access   */
        unsigned char  UINT8[4];                       /*  8-bit Access    */
    } G7SP;                                            /*                  */

};
struct st_seg
{                                                      /* SEG              */
    unsigned short CONT;                               /*  CONT            */
    unsigned short FLAG;                               /*  FLAG            */
    unsigned short TYPE;                               /*  TYPE            */
    unsigned short SIDE;                               /*  SIDE            */
    unsigned short ADDR;                               /*  ADDR            */
};

typedef struct ST_ECCCSIH
{                                                      /* ECCCSIH             */
    union                                              /*                     */
    {                                                  /* CTL                 */
        unsigned long UINT32;                          /* 32-bit Access       */
        unsigned short UINT16[2];                      /* 16-bit Access       */
        unsigned char  UINT8[4];                       /*  8-bit Access       */
        struct                                         /*                     */
        {                                              /* Bit Access          */
            const unsigned char  ECEMF:1;              /* ECEMF               */
            const unsigned char  ECER1F:1;             /* ECER1F              */
            const unsigned char  ECER2F:1;             /* ECER2F              */
            unsigned char  EC1EDIC:1;                  /* EC1EDIC             */
            unsigned char  EC2EDIC:1;                  /* EC2EDIC             */
            unsigned char  EC1ECP:1;                   /* EC1ECP              */
            unsigned char  :1;                         /* Reserved Bits       */
            unsigned char  ECTHM:1;                    /* ECTHM               */
            unsigned char  :1;                         /* Reserved Bits       */
            unsigned char  ECER1C:1;                   /* ECER1C              */
            unsigned char  ECER2C:1;                   /* ECER2C              */
            unsigned char  ECOVFF:1;                   /* ECOVFF              */
            unsigned char  :2;                         /* Reserved Bits       */
            unsigned char  EMCA:2;                     /* EMCA[15:14]         */
            const unsigned char  ECSEDF0:1;            /* ECSEDF0             */
            const unsigned char  ECDEDF0:1;            /* ECDEDF0             */
            unsigned char  :6;                         /* Reserved Bits       */
            unsigned char  :8;                         /* Reserved Bits       */
        }BIT;
    } CTL;

    union                                              /*                     */
    {                                                  /* TMC                 */
        unsigned long UINT32;                          /* 32-bit Access       */
        unsigned short UINT16[2];                      /* 16-bit Access       */
        unsigned char  UINT8[4];                       /*  8-bit Access       */
        struct                                         /*                     */
        {                                              /* Bit Access          */
            unsigned char  ECREIS:1;                   /* ECREIS              */
            unsigned char  ECDCS:1;                    /* ECDCS               */
            unsigned char  ECENS:1;                    /* ECENS               */
            unsigned char  ECREOS:1;                   /* ECREOS              */
            unsigned char  ECTRRS:1;                   /* ECTRRS              */
            unsigned char  :2;                         /* Reserved Bits       */
            unsigned char  ECTMCE:1;                   /* ECTMCE              */
            unsigned char  :6;                         /* Reserved Bits       */
            unsigned char  ETMA:2;                     /* ETMA[15:14]         */
            unsigned char  :8;                         /* Reserved Bits       */
            unsigned char  :8;                         /* Reserved Bits       */
        }BIT;
    } TMC;

    union                                              /*                     */
    {                                                  /* TRC                 */
        unsigned long UINT32;                          /* 32-bit Access       */
        unsigned char  UINT8[4];                       /*  8-bit Access       */
        struct                                         /*                     */
        {                                              /*                     */
            union                                      /*                     */
            {                                          /* IOR                 */
                unsigned char  UINT8;                  /* 8-bit Access        */
            } ERDB;                                    /*                     */
            union                                      /*                     */
            {                                          /* IOR                 */
                unsigned char  UINT8;                  /* 8-bit Access        */
            } ECRD;                                    /*                     */
            union                                      /*                     */
            {                                          /* IOR                 */
                unsigned char  UINT8;                  /* 8-bit Access        */
            } HORD;                                    /*                     */
            union                                      /*                     */
            {                                          /* IOR                 */
                unsigned char  UINT8;                  /* 8-bit Access        */
            } SYND;
        }REGS8;
        struct                                         /*                     */
        {                                              /* Bit Access          */
            unsigned char  ERDB:7;                     /* ERDB[6:0]           */
            unsigned char  :1;                         /* Reserved Bits       */
            const unsigned char  ECRD:7;               /* ECRD[14:8]          */
            unsigned char  :1;                         /* Reserved Bits       */
            const unsigned char  HORD:7;               /* HORD[22:16]         */
            unsigned char  :1;                         /* Reserved Bits       */
            const unsigned char  SYND:7;               /* SYND[30:24]         */
            unsigned char  :1;                         /* Reserved Bits       */
        }BIT;
    } TRC;

    union                                              /*                     */
    {                                                  /* TED                 */
        unsigned long UINT32;                          /* 32-bit Access       */
        struct                                         /*                     */
        {                                              /* Bit Access          */
            unsigned long ECEDB:32;                    /* ECEDB[31:0]         */
        }BIT;
    } TED;

    union                                              /*                     */
    {                                                  /* EAD0                */
        const unsigned long UINT32;                    /* 32-bit Access       */
        struct                                         /*                     */
        {                                              /* Bit Access          */
            const unsigned long ECEAD:32;              /* ECEAD[31:0]         */
        }BIT;
    } EAD0;

    unsigned char  dummy1043[12];
}T_ECCCSIH;


__IOREG( FLXA0    ,0x10020000ul    ,__READ_WRITE   , T_FLXA0   ); /* FLXA0  */
__IOREG( FLXA1    ,0x10021000ul    ,__READ_WRITE   , T_FLXA0   ); /* FLXA1  */
// __IOREG( ETNA0    ,0x10024000ul    ,__READ_WRITE   , T_ETNA0   ); /* ETNA0*/
__IOREG( FCLA_ICU ,0xFFC34000ul    ,__READ_WRITE   , T_FCLA_ICU );/* FCLA0_ICU*/
__IOREG( DNFA2    ,0xFFC30200ul    ,__READ_WRITE   , T_DNFA2   ); /* DNFA2  */
__IOREG( DNFA3    ,0xFFC30300ul    ,__READ_WRITE   , T_DNFA3   ); /* DNFA3  */
__IOREG( DNFA4    ,0xFFC30400ul    ,__READ_WRITE   , T_DNFA4   ); /* DNFA4  */
__IOREG( DNFA5    ,0xFFC30500ul    ,__READ_WRITE   , T_DNFA5   ); /* DNFA5  */
__IOREG( DNFA6    ,0xFFC30600ul    ,__READ_WRITE   , T_DNFA6   ); /* DNFA6  */
__IOREG( DNFA7    ,0xFFC30700ul    ,__READ_WRITE   , T_DNFA7   ); /* DNFA7  */
__IOREG( FCLA0    ,0xFFC34000ul    ,__READ_WRITE   , T_FCLA0   ); /* FCLA0  */
__IOREG( FCLA1    ,0xFFC34100ul    ,__READ_WRITE   , T_FCLA1   ); /* FCLA1  */
__IOREG( FCLA2    ,0xFFC34200ul    ,__READ_WRITE   , T_FCLA2   ); /* FCLA2  */
__IOREG( FCLA3    ,0xFFC34300ul    ,__READ_WRITE   , T_FCLA3   ); /* FCLA3  */
__IOREG( FCLA4    ,0xFFC34400ul    ,__READ_WRITE   , T_FCLA4   ); /* FCLA4  */
__IOREG( FCLA5    ,0xFFC34500ul    ,__READ_WRITE   , T_FCLA5   ); /* FCLA5  */
__IOREG( FCLA6    ,0xFFC34600ul    ,__READ_WRITE   , T_FCLA6   ); /* FCLA6  */
__IOREG( CSIH1    ,0xFFCA0000ul    ,__READ_WRITE   , T_CSIH1   ); /* CSIH1  */
__IOREG( CSIH3    ,0xFFCA3000ul    ,__READ_WRITE   , T_CSIH3   ); /* CSIH3  */
__IOREG( RLN31    ,0xFFCAC000ul    ,__READ_WRITE   , T_RLN30   ); /* RLN31  */
__IOREG( RLN33    ,0xFFCAD000ul    ,__READ_WRITE   , T_RLN30   ); /* RLN33  */
__IOREG( ECMM1    ,0xFFCB0000ul    ,__READ_WRITE   , T_ECMM0   ); /* ECMM1  */
__IOREG( ECMC1    ,0xFFCB1000ul    ,__READ_WRITE   , T_ECMC0   ); /* ECMC1  */
__IOREG( ECM1     ,0xFFCB2000ul    ,__READ_WRITE   , T_ECM0    ); /* ECM1   */
__IOREG( DCRB0    ,0xFFD50000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB0  */
__IOREG( DCRB2    ,0xFFD51000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB2  */
__IOREG( DCRB4    ,0xFFD52000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB4  */
__IOREG( DCRB6    ,0xFFD53000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB6  */
__IOREG( ECMM0    ,0xFFD60000ul    ,__READ_WRITE   , T_ECMM0   ); /* ECMM0  */
__IOREG( ECMC0    ,0xFFD61000ul    ,__READ_WRITE   , T_ECMC0   ); /* ECMC0  */
__IOREG( ECM0     ,0xFFD62000ul    ,__READ_WRITE   , T_ECM0    ); /* ECM0   */
__IOREG( CSIH0    ,0xFFD80000ul    ,__READ_WRITE   , T_CSIH0   ); /* CSIH0  */
__IOREG( CSIH2    ,0xFFD83000ul    ,__READ_WRITE   , T_CSIH2   ); /* CSIH2  */
__IOREG( RLN30    ,0xFFD8C000ul    ,__READ_WRITE   , T_RLN30   ); /* RLN30  */
__IOREG( RLN32    ,0xFFD8D000ul    ,__READ_WRITE   , T_RLN30   ); /* RLN32  */
__IOREG( FSGD2A   ,0xFFDDD000ul    ,__READ_WRITE   , T_FSGD2A  ); /* FSGD2A */
__IOREG( WDTA0    ,0xFFED0000ul    ,__READ_WRITE   , T_WDTA0   ); /* WDTA0  */
__IOREG( WDTA1    ,0xFFED1000ul    ,__READ_WRITE   , T_WDTA0   ); /* WDTA1  */
__IOREG( FSGD1A   ,0xFFEE0000ul    ,__READ_WRITE   , T_FSGD1A  ); /* FSGD1A */
__IOREG( FSGD1B   ,0xFFEE0200ul    ,__READ_WRITE   , T_FSGD1B  ); /* FSGD1B */
__IOREG( DCRB1    ,0xFFF70000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB1  */
__IOREG( DCRB3    ,0xFFF71000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB3  */
__IOREG( DCRB5    ,0xFFF72000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB5  */
__IOREG( DCRB7    ,0xFFF73000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB7  */
__IOREG( CLMA0    ,0xFFF83100ul    ,__READ_WRITE   , T_CLMA0   ); /* CLMA0  */
__IOREG( CLMA1    ,0xFFF83200ul    ,__READ_WRITE   , T_CLMA0   ); /* CLMA1  */
__IOREG( CLMA2    ,0xFFF83300ul    ,__READ_WRITE   , T_CLMA0   ); /* CLMA2  */
__IOREG( CLMA3    ,0xFFF83400ul    ,__READ_WRITE   , T_CLMA0   ); /* CLMA3  */
__IOREG( CLMA4    ,0xFFF83500ul    ,__READ_WRITE   , T_CLMA0   ); /* CLMA4  */
__IOREG( CLMA5    ,0xFFF86800ul    ,__READ_WRITE   , T_CLMA0   ); /* CLMA5  */
__IOREG( FSGD4A   ,0xFFF90000ul    ,__READ_WRITE   , T_FSGD4A  ); /* CLMA5  */
__IOREG( FSGD4B   ,0xFFF90200ul    ,__READ_WRITE   , T_FSGD4B  ); /* CLMA5  */
__IOREG( RH850_ADCF0 ,0xFFF91000ul ,__READ_WRITE , Adc_ConfigRegisters );
                                                                    /* ADCF0  */
__IOREG( RH850_ADCF1 ,0xFFF92000ul ,__READ_WRITE , Adc_ConfigRegisters );
                                                                    /* ADCF1  */
__IOREG( FSGD3A   ,0xFFF94000ul    ,__READ_WRITE   , T_FSGD3A  ); /* FSGD3A */
__IOREG( FSGD3B   ,0xFFF94200ul    ,__READ_WRITE   , T_FSGD3B  ); /* FSGD3B */
__IOREG( FSGDF0   ,0xFFFA0000ul    ,__READ_WRITE   , T_FSGDF0  ); /* FSGDF0 */
__IOREG( FSGDF1   ,0xFFFA0020ul    ,__READ_WRITE   , T_FSGDF1  ); /* FSGDF1 */
__IOREG( FSGDE0   ,0xFFFA0040ul    ,__READ_WRITE   , T_FSGDE0  ); /* FSGDE0 */
__IOREG( FSGDE1   ,0xFFFA0060ul    ,__READ_WRITE   , T_FSGDE1  ); /* FSGDE1 */
__IOREG( RH850_PIC2 ,0xFFD68000ul ,__READ_WRITE ,  Adc_PicRegisters); /*PIC2*/

__IOREG( TIM00    ,0xFFE01000ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM00 */
__IOREG( TIM01    ,0xFFE01080ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM01 */
__IOREG( TIM02    ,0xFFE01100ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM02 */
__IOREG( TIM03    ,0xFFE01180ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM03 */
__IOREG( TIM04    ,0xFFE01200ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM04 */
__IOREG( TIM05    ,0xFFE01280ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM05 */
__IOREG( TIM06    ,0xFFE01300ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM06 */
__IOREG( TIM07    ,0xFFE01380ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM07 */
__IOREG( TIM10    ,0xFFE01800ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM10 */
__IOREG( TIM11    ,0xFFE01880ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM11 */
__IOREG( TIM12    ,0xFFE01900ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM12 */
__IOREG( TIM13    ,0xFFE01980ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM13 */
__IOREG( TIM14    ,0xFFE01A00ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM14 */
__IOREG( TIM15    ,0xFFE01A80ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM15 */
__IOREG( TIM16    ,0xFFE01B00ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM16 */
__IOREG( TIM17    ,0xFFE01B80ul    ,__READ_WRITE   , T_TIMUS   ); /* TIM17 */
__IOREG( TIM0     ,0xFFE01074ul    ,__READ_WRITE   , T_TIMOS   ); /* TIM0 */
__IOREG( TIM1     ,0xFFE01874ul    ,__READ_WRITE   , T_TIMOS   ); /* TIM1 */

__IOREG( GTM0     ,0xFFE00000ul    ,__READ_WRITE   , T_GTM0    ); /* GTM0 */
__IOREG( STM0     ,0xFFDD8000ul    ,__READ_WRITE   , T_STM0    ); /* STM0 */
__IOREG( FLMD     ,0xFFA00000ul    ,__READ_WRITE   , T_FLMD    ); /* FLMD */
__IOREG( DCRB0    ,0xFFD50000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB0 */
__IOREG( DCRB1    ,0xFFF70000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB1 */
__IOREG( DCRB2    ,0xFFD51000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB0 */
__IOREG( DCRB3    ,0xFFF71000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB3 */
__IOREG( DCRB4    ,0xFFD52000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB4 */
__IOREG( DCRB5    ,0xFFF72000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB5 */
__IOREG( DCRB6    ,0xFFD53000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB6 */
__IOREG( DCRB7    ,0xFFF73000ul    ,__READ_WRITE   , T_DCRB0   ); /* DCRB7 */


__IOREG( EIC0     , 0xFFFEEA00ul , __READ_WRITE, unsigned short ); /* EIC0  */
__IOREG( EIC1     , 0xFFFEEA02ul , __READ_WRITE, unsigned short ); /* EIC1  */
__IOREG( EIC2     , 0xFFFEEA04ul , __READ_WRITE, unsigned short ); /* EIC2  */
__IOREG( EIC3     , 0xFFFEEA06ul , __READ_WRITE, unsigned short ); /* EIC3  */
__IOREG( EIC8     , 0xFFFEEA10ul , __READ_WRITE, unsigned short ); /* EIC8  */
__IOREG( EIC9     , 0xFFFEEA12ul , __READ_WRITE, unsigned short ); /* EIC9  */
__IOREG( EIC12    , 0xFFFEEA18ul , __READ_WRITE, unsigned short ); /* EIC12 */
__IOREG( EIC13    , 0xFFFEEA1Aul , __READ_WRITE, unsigned short ); /* EIC13 */
__IOREG( EIC14    , 0xFFFEEA1Cul , __READ_WRITE, unsigned short ); /* EIC14 */
__IOREG( EIC15    , 0xFFFEEA1Eul , __READ_WRITE, unsigned short ); /* EIC15 */
__IOREG( EIC16    , 0xFFFEEA20ul , __READ_WRITE, unsigned short ); /* EIC16 */
__IOREG( EIC17    , 0xFFFEEA22ul , __READ_WRITE, unsigned short ); /* EIC17 */
__IOREG( EIC18    , 0xFFFEEA24ul , __READ_WRITE, unsigned short ); /* EIC18 */
__IOREG( EIC19    , 0xFFFEEA26ul , __READ_WRITE, unsigned short ); /* EIC19 */
__IOREG( EIC20    , 0xFFFEEA28ul , __READ_WRITE, unsigned short ); /* EIC20 */
__IOREG( EIC21    , 0xFFFEEA2Aul , __READ_WRITE, unsigned short ); /* EIC21 */
__IOREG( EIC22    , 0xFFFEEA2Cul , __READ_WRITE, unsigned short ); /* EIC22 */
__IOREG( EIC23    , 0xFFFEEA2Eul , __READ_WRITE, unsigned short ); /* EIC23 */
__IOREG( EIC24    , 0xFFFEEA30ul , __READ_WRITE, unsigned short ); /* EIC24 */
__IOREG( EIC25    , 0xFFFEEA32ul , __READ_WRITE, unsigned short ); /* EIC25 */
__IOREG( EIC26    , 0xFFFEEA34ul , __READ_WRITE, unsigned short ); /* EIC26 */
__IOREG( EIC27    , 0xFFFEEA36ul , __READ_WRITE, unsigned short ); /* EIC27 */
__IOREG( EIC28    , 0xFFFEEA38ul , __READ_WRITE, unsigned short ); /* EIC28 */
__IOREG( EIC29    , 0xFFFEEA3Aul , __READ_WRITE, unsigned short ); /* EIC29 */
__IOREG( EIC30    , 0xFFFEEA3Cul , __READ_WRITE, unsigned short ); /* EIC30 */
__IOREG( EIC31    , 0xFFFEEA3Eul , __READ_WRITE, unsigned short ); /* EIC31 */
__IOREG( EIC32    , 0xFFFFB040ul, __READ_WRITE, unsigned short  ); /* EIC32 */
__IOREG( EIC33    , 0xFFFFB042ul, __READ_WRITE, unsigned short  ); /* EIC33 */
__IOREG( EIC34    , 0xFFFFB044ul, __READ_WRITE, unsigned short  ); /* EIC34 */
__IOREG( EIC35    , 0xFFFFB046ul, __READ_WRITE, unsigned short  ); /* EIC35 */
__IOREG( EIC36    , 0xFFFFB048ul, __READ_WRITE, unsigned short  ); /* EIC36 */
__IOREG( EIC38    , 0xFFFFB04Cul, __READ_WRITE, unsigned short  ); /* EIC38 */
__IOREG( EIC39    , 0xFFFFB04Eul, __READ_WRITE, unsigned short  ); /* EIC39 */
__IOREG( EIC41    , 0xFFFFB052ul, __READ_WRITE, unsigned short  ); /* EIC41 */
__IOREG( EIC42    , 0xFFFFB054ul, __READ_WRITE, unsigned short  ); /* EIC42 */
__IOREG( EIC53    , 0xFFFFB06Aul, __READ_WRITE, unsigned short  ); /* EIC53 */
__IOREG( EIC54    , 0xFFFFB06Cul, __READ_WRITE, unsigned short  ); /* EIC54 */
__IOREG( EIC55    , 0xFFFFB06Eul, __READ_WRITE, unsigned short  ); /* EIC55 */
__IOREG( EIC56    , 0xFFFFB070ul, __READ_WRITE, unsigned short  ); /* EIC56 */
__IOREG( EIC57    , 0xFFFFB072ul, __READ_WRITE, unsigned short  ); /* EIC57 */
__IOREG( EIC58    , 0xFFFFB074ul, __READ_WRITE, unsigned short  ); /* EIC58 */
__IOREG( EIC59    , 0xFFFFB076ul, __READ_WRITE, unsigned short  ); /* EIC59 */
__IOREG( EIC60    , 0xFFFFB078ul, __READ_WRITE, unsigned short  ); /* EIC60 */
__IOREG( EIC61    , 0xFFFFB07Aul, __READ_WRITE, unsigned short  ); /* EIC61 */
__IOREG( EIC62    , 0xFFFFB07Cul, __READ_WRITE, unsigned short  ); /* EIC62 */
__IOREG( EIC69    , 0xFFFFB08Aul, __READ_WRITE, unsigned short  ); /* EIC69 */
__IOREG( EIC70    , 0xFFFFB08Cul, __READ_WRITE, unsigned short  ); /* EIC70 */
__IOREG( EIC71    , 0xFFFFB08Eul, __READ_WRITE, unsigned short  ); /* EIC71 */
__IOREG( EIC72    , 0xFFFFB090ul, __READ_WRITE, unsigned short  ); /* EIC72 */
__IOREG( EIC73    , 0xFFFFB092ul, __READ_WRITE, unsigned short  ); /* EIC73 */
__IOREG( EIC74    , 0xFFFFB094ul, __READ_WRITE, unsigned short  ); /* EIC74 */
__IOREG( EIC75    , 0xFFFFB096ul, __READ_WRITE, unsigned short  ); /* EIC75 */
__IOREG( EIC76    , 0xFFFFB098ul, __READ_WRITE, unsigned short  ); /* EIC76 */
__IOREG( EIC77    , 0xFFFFB09Aul, __READ_WRITE, unsigned short  ); /* EIC77 */
__IOREG( EIC78    , 0xFFFFB09Cul, __READ_WRITE, unsigned short  ); /* EIC78 */
__IOREG( EIC79    , 0xFFFFB09Eul, __READ_WRITE, unsigned short  ); /* EIC79 */
__IOREG( EIC80    , 0xFFFFB0A0ul , __READ_WRITE, unsigned short ); /* EIC80 */
__IOREG( EIC81    , 0xFFFFB0A2ul , __READ_WRITE, unsigned short ); /* EIC81 */
__IOREG( EIC82    , 0xFFFFB0A4ul , __READ_WRITE, unsigned short ); /* EIC82 */
__IOREG( EIC83    , 0xFFFFB0A6ul , __READ_WRITE, unsigned short ); /* EIC83 */
__IOREG( EIC84    , 0xFFFFB0A8ul , __READ_WRITE, unsigned short ); /* EIC84 */
__IOREG( EIC85    , 0xFFFFB0AAul , __READ_WRITE, unsigned short ); /* EIC85 */
__IOREG( EIC86    , 0xFFFFB0ACul , __READ_WRITE, unsigned short ); /* EIC86 */
__IOREG( EIC87    , 0xFFFFB0AEul , __READ_WRITE, unsigned short ); /* EIC87 */
__IOREG( EIC88    , 0xFFFFB0B0ul , __READ_WRITE, unsigned short ); /* EIC88 */
__IOREG( EIC89    , 0xFFFFB0B2ul , __READ_WRITE, unsigned short ); /* EIC89 */
__IOREG( EIC90    , 0xFFFFB0B4ul , __READ_WRITE, unsigned short ); /* EIC90 */
__IOREG( EIC91    , 0xFFFFB0B6ul , __READ_WRITE, unsigned short ); /* EIC91 */
__IOREG( EIC92    , 0xFFFFB0B8ul , __READ_WRITE, unsigned short ); /* EIC92 */
__IOREG( EIC93    , 0xFFFFB0BAul , __READ_WRITE, unsigned short ); /* EIC93 */
__IOREG( EIC94    , 0xFFFFB0BCul , __READ_WRITE, unsigned short ); /* EIC94 */
__IOREG( EIC95    , 0xFFFFB0BEul , __READ_WRITE, unsigned short ); /* EIC95 */
__IOREG( EIC96    , 0xFFFFB0C0ul , __READ_WRITE, unsigned short ); /* EIC96 */
__IOREG( EIC97    , 0xFFFFB0C2ul , __READ_WRITE, unsigned short ); /* EIC97 */
__IOREG( EIC98    , 0xFFFFB0C4ul , __READ_WRITE, unsigned short ); /* EIC98 */
__IOREG( EIC99    , 0xFFFFB0C6ul , __READ_WRITE, unsigned short ); /* EIC99 */
__IOREG( EIC100   , 0xFFFFB0C8ul , __READ_WRITE, unsigned short ); /* EIC100 */
__IOREG( EIC101   , 0xFFFFB0CAul , __READ_WRITE, unsigned short ); /* EIC101 */


__IOREG( EIC111   , 0xFFFFB0DEul, __READ_WRITE, unsigned short  ); /* EIC111*/
__IOREG( EIC114   , 0xFFFFB0E4ul, __READ_WRITE, unsigned short  ); /* EIC114*/
__IOREG( EIC128   , 0xFFFFB100ul, __READ_WRITE, unsigned short  ); /* EIC128*/
__IOREG( EIC129   , 0xFFFFB102ul, __READ_WRITE, unsigned short  ); /* EIC129*/
__IOREG( EIC130   , 0xFFFFB104ul, __READ_WRITE, unsigned short  ); /* EIC130*/
__IOREG( EIC131   , 0xFFFFB106ul, __READ_WRITE, unsigned short  ); /* EIC131*/
__IOREG( EIC132   , 0xFFFFB108ul, __READ_WRITE, unsigned short  ); /* EIC132*/
__IOREG( EIC133   , 0xFFFFB10Aul, __READ_WRITE, unsigned short  ); /* EIC133*/
__IOREG( EIC134   , 0xFFFFB10Cul, __READ_WRITE, unsigned short  ); /* EIC134*/
__IOREG( EIC141   , 0xFFFFB11Aul, __READ_WRITE, unsigned short  ); /* EIC141*/
__IOREG( EIC142   , 0xFFFFB11Cul, __READ_WRITE, unsigned short  ); /* EIC142*/
__IOREG( EIC143   , 0xFFFFB11Eul, __READ_WRITE, unsigned short  ); /* EIC143*/
__IOREG( EIC144   , 0xFFFFB120ul, __READ_WRITE, unsigned short  ); /* EIC144*/
__IOREG( EIC145   , 0xFFFFB122ul, __READ_WRITE, unsigned short  ); /* EIC145*/
__IOREG( EIC146   , 0xFFFFB124ul, __READ_WRITE, unsigned short  ); /* EIC146*/
__IOREG( EIC147   , 0xFFFFB126ul, __READ_WRITE, unsigned short  ); /* EIC147*/
__IOREG( EIC148   , 0xFFFFB128ul, __READ_WRITE, unsigned short  ); /* EIC148*/
__IOREG( EIC156   , 0xFFFFB138ul, __READ_WRITE, unsigned short  ); /* EIC156*/
__IOREG( EIC157   , 0xFFFFB13Aul, __READ_WRITE, unsigned short  ); /* EIC157*/
__IOREG( EIC158   , 0xFFFFB13Cul, __READ_WRITE, unsigned short  ); /* EIC158*/
__IOREG( EIC159   , 0xFFFFB13Eul, __READ_WRITE, unsigned short  ); /* EIC159*/
__IOREG( EIC160   , 0xFFFFB140ul, __READ_WRITE, unsigned short  ); /* EIC160*/
__IOREG( EIC161   , 0xFFFFB142ul, __READ_WRITE, unsigned short  ); /* EIC161*/
__IOREG( EIC162   , 0xFFFFB144ul, __READ_WRITE, unsigned short  ); /* EIC162*/
__IOREG( EIC163   , 0xFFFFB146ul, __READ_WRITE, unsigned short  ); /* EIC163*/
__IOREG( EIC164   , 0xFFFFB148ul, __READ_WRITE, unsigned short  ); /* EIC164*/
__IOREG( EIC165   , 0xFFFFB14Aul, __READ_WRITE, unsigned short  ); /* EIC165*/
__IOREG( EIC166   , 0xFFFFB14Cul , __READ_WRITE, unsigned short ); /* EIC166 */
__IOREG( EIC167   , 0xFFFFB14Eul , __READ_WRITE, unsigned short ); /* EIC167 */
__IOREG( EIC168   , 0xFFFFB150ul , __READ_WRITE, unsigned short ); /* EIC168 */
__IOREG( EIC169   , 0xFFFFB152ul , __READ_WRITE, unsigned short ); /* EIC169 */
__IOREG( EIC170   , 0xFFFFB154ul , __READ_WRITE, unsigned short ); /* EIC170 */
__IOREG( EIC171   , 0xFFFFB156ul , __READ_WRITE, unsigned short ); /* EIC171 */
__IOREG( EIC174   , 0xFFFFB15Cul, __READ_WRITE, unsigned short  ); /* EIC174*/
__IOREG( EIC177   , 0xFFFFB162ul, __READ_WRITE, unsigned short  ); /* EIC177*/
__IOREG( EIC184   , 0xFFFFB170ul, __READ_WRITE, unsigned short  ); /* EIC184*/
__IOREG( EIC186   , 0xFFFFB174ul, __READ_WRITE, unsigned short  ); /* EIC186*/
__IOREG( EIC197   , 0xFFFFB18Aul, __READ_WRITE, unsigned short  ); /* EIC197*/
__IOREG( EIC209   , 0xFFFFB1A2ul, __READ_WRITE, unsigned short  ); /* EIC209*/
__IOREG( EIC211   , 0xFFFFB1A6ul, __READ_WRITE, unsigned short  ); /* EIC211*/
__IOREG( EIC240   , 0xFFFFB1E0ul, __READ_WRITE, unsigned short  ); /* EIC240*/
__IOREG( EIC241   , 0xFFFFB1E2ul, __READ_WRITE, unsigned short  ); /* EIC241*/
__IOREG( EIC242   , 0xFFFFB1E4ul, __READ_WRITE, unsigned short  ); /* EIC242*/
__IOREG( EIC243   , 0xFFFFB1E6ul, __READ_WRITE, unsigned short  ); /* EIC243*/
__IOREG( EIC244   , 0xFFFFB1E8ul, __READ_WRITE, unsigned short  ); /* EIC244*/
__IOREG( EIC245   , 0xFFFFB1EAul, __READ_WRITE, unsigned short  ); /* EIC245*/

__IOREG( IMR0     , 0xFFFEEAF0ul, __READ_WRITE, unsigned long   ); /* IMR0 */
__IOREG( IMR1     , 0xFFFFB404ul, __READ_WRITE, unsigned long   ); /* IMR1 */
__IOREG( IMR2     , 0xFFFFB408ul, __READ_WRITE, unsigned long   ); /* IMR2 */
__IOREG( IMR3     , 0xFFFFB40Cul, __READ_WRITE, unsigned long   ); /* IMR3 */
__IOREG( IMR4     , 0xFFFFB410ul, __READ_WRITE, unsigned long   ); /* IMR4 */
__IOREG( IMR5     , 0xFFFFB414ul, __READ_WRITE, unsigned long   ); /* IMR5 */
__IOREG( IMR6     , 0xFFFFB418ul, __READ_WRITE, unsigned long   ); /* IMR6 */
__IOREG( IMR7     , 0xFFFFB41Cul, __READ_WRITE, unsigned long   ); /* IMR7 */


__IOREG( MSR_LM2  , 0xFFF86210ul, __READ_WRITE, unsigned long   ); /* MSR_LM2 */
__IOREG( MSR_LM3  , 0xFFF81710ul, __READ_WRITE, unsigned long   ); /* MSR_LM3 */
__IOREG( MSR_LM4  , 0xFFF81810ul, __READ_WRITE, unsigned long   ); /* MSR_LM4 */
__IOREG( MSR_LM5  , 0xFFF81910ul, __READ_WRITE, unsigned long   ); /* MSR_LM5 */
__IOREG( MSR_LM6  , 0xFFF81A10ul, __READ_WRITE, unsigned long   ); /* MSR_LM6 */
__IOREG( MSR_LM7  , 0xFFF81B10ul, __READ_WRITE, unsigned long   ); /* MSR_LM7 */
__IOREG( MSR_LM8  , 0xFFF81C10ul, __READ_WRITE, unsigned long   ); /* MSR_LM8 */
__IOREG( MSR_LM10 , 0xFFF81E10ul, __READ_WRITE, unsigned long   ); /* MSR_LM10*/
__IOREG( MSR_LM11 , 0xFFF81F10ul, __READ_WRITE, unsigned long   ); /* MSR_LM11*/
__IOREG( MSR_LM12 , 0xFFF82010ul, __READ_WRITE, unsigned long   ); /* MSR_LM12*/

__IOREG( DSA0     , 0xFFFF8400ul, __READ_WRITE, unsigned long   ); /* DSA0 */
__IOREG( DSA1     , 0xFFFF8440ul, __READ_WRITE, unsigned long   ); /* DSA1 */
__IOREG( DSA2     , 0xFFFF8480ul, __READ_WRITE, unsigned long   ); /* DSA2 */
__IOREG( DSA3     , 0xFFFF84C0ul, __READ_WRITE, unsigned long   ); /* DSA3 */
__IOREG( DSA4     , 0xFFFF8500ul, __READ_WRITE, unsigned long   ); /* DSA4 */
__IOREG( DSA5     , 0xFFFF8540ul, __READ_WRITE, unsigned long   ); /* DSA5 */
__IOREG( DSA6     , 0xFFFF8580ul, __READ_WRITE, unsigned long   ); /* DSA6 */
__IOREG( DSA7     , 0xFFFF85C0ul, __READ_WRITE, unsigned long   ); /* DSA7 */
__IOREG( DSA8     , 0xFFFF8600ul, __READ_WRITE, unsigned long   ); /* DSA8 */
__IOREG( DSA9     , 0xFFFF8640ul, __READ_WRITE, unsigned long   ); /* DSA9 */
__IOREG( DSA10    , 0xFFFF8680ul, __READ_WRITE, unsigned long   ); /* DSA10 */
__IOREG( DSA11    , 0xFFFF86C0ul, __READ_WRITE, unsigned long   ); /* DSA11 */
__IOREG( DSA12    , 0xFFFF8700ul, __READ_WRITE, unsigned long   ); /* DSA12 */
__IOREG( DSA13    , 0xFFFF8740ul, __READ_WRITE, unsigned long   ); /* DSA13 */
__IOREG( DSA14    , 0xFFFF8780ul, __READ_WRITE, unsigned long   ); /* DSA14 */
__IOREG( DSA15    , 0xFFFF87C0ul, __READ_WRITE, unsigned long   ); /* DSA15 */

__IOREG( G0MEV1   , 0xFFFEEC04ul, __READ_WRITE, unsigned long   ); /* G0MEV1 */
__IOREG( BOOTCTRL , 0xFFC58000ul, __READ_WRITE, unsigned long   ); /*BOOTCTRL*/


__IOREG( P0       , 0xFFC10000ul, __READ_WRITE, unsigned short );
__IOREG( PSR0     , 0xFFC10004ul, __READ_WRITE, unsigned long );
__IOREG( PNOT0    , 0xFFC10008ul, __READ_WRITE, unsigned short );
__IOREG( PPR0     , 0xFFC1000Cul, __READ_WRITE, unsigned short );
__IOREG( PM0      , 0xFFC10010ul, __READ_WRITE, unsigned short );
__IOREG( PMC0     , 0xFFC10014ul, __READ_WRITE, unsigned short );
__IOREG( PFC0     , 0xFFC10018ul, __READ_WRITE, unsigned short );
__IOREG( PFCE0    , 0xFFC1001Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR0    , 0xFFC10020ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR0   , 0xFFC10024ul, __READ_WRITE, unsigned long );
__IOREG( PINV0    , 0xFFC10030ul, __READ_WRITE, unsigned short );
__IOREG( P1       , 0xFFC10040ul, __READ_WRITE, unsigned short );
__IOREG( PSR1     , 0xFFC10044ul, __READ_WRITE, unsigned long );
__IOREG( PNOT1    , 0xFFC10048ul, __READ_WRITE, unsigned short );
__IOREG( PPR1     , 0xFFC1004Cul, __READ_WRITE, unsigned short );
__IOREG( PM1      , 0xFFC10050ul, __READ_WRITE, unsigned short );
__IOREG( PMC1     , 0xFFC10054ul, __READ_WRITE, unsigned short );
__IOREG( PFC1     , 0xFFC10058ul, __READ_WRITE, unsigned short );
__IOREG( PFCE1    , 0xFFC1005Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR1    , 0xFFC10060ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR1   , 0xFFC10064ul, __READ_WRITE, unsigned long );
__IOREG( PINV1    , 0xFFC10070ul, __READ_WRITE, unsigned short );
__IOREG( P2       , 0xFFC10080ul, __READ_WRITE, unsigned short );
__IOREG( PSR2     , 0xFFC10084ul, __READ_WRITE, unsigned long );
__IOREG( PNOT2    , 0xFFC10088ul, __READ_WRITE, unsigned short );
__IOREG( PPR2     , 0xFFC1008Cul, __READ_WRITE, unsigned short );
__IOREG( PM2      , 0xFFC10090ul, __READ_WRITE, unsigned short );
__IOREG( PMC2     , 0xFFC10094ul, __READ_WRITE, unsigned short );
__IOREG( PFC2     , 0xFFC10098ul, __READ_WRITE, unsigned short );
__IOREG( PFCE2    , 0xFFC1009Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR2    , 0xFFC100A0ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR2   , 0xFFC100A4ul, __READ_WRITE, unsigned long );
__IOREG( PINV2    , 0xFFC100B0ul, __READ_WRITE, unsigned short );
__IOREG( P3       , 0xFFC100C0ul, __READ_WRITE, unsigned short );
__IOREG( PSR3     , 0xFFC100C4ul, __READ_WRITE, unsigned long );
__IOREG( PNOT3    , 0xFFC100C8ul, __READ_WRITE, unsigned short );
__IOREG( PPR3     , 0xFFC100CCul, __READ_WRITE, unsigned short );
__IOREG( PM3      , 0xFFC100D0ul, __READ_WRITE, unsigned short );
__IOREG( PMC3     , 0xFFC100D4ul, __READ_WRITE, unsigned short );
__IOREG( PFC3     , 0xFFC100D8ul, __READ_WRITE, unsigned short );
__IOREG( PFCE3    , 0xFFC100DCul, __READ_WRITE, unsigned short );
__IOREG( PMSR3    , 0xFFC100E0ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR3   , 0xFFC100E4ul, __READ_WRITE, unsigned long );
__IOREG( PINV3    , 0xFFC100F0ul, __READ_WRITE, unsigned short );
__IOREG( P4       , 0xFFC10100ul, __READ_WRITE, unsigned short );
__IOREG( PSR4     , 0xFFC10104ul, __READ_WRITE, unsigned long );
__IOREG( PNOT4    , 0xFFC10108ul, __READ_WRITE, unsigned short );
__IOREG( PPR4     , 0xFFC1010Cul, __READ_WRITE, unsigned short );
__IOREG( PM4      , 0xFFC10110ul, __READ_WRITE, unsigned short );
__IOREG( PMC4     , 0xFFC10114ul, __READ_WRITE, unsigned short );
__IOREG( PFC4     , 0xFFC10118ul, __READ_WRITE, unsigned short );
__IOREG( PFCE4    , 0xFFC1011Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR4    , 0xFFC10120ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR4   , 0xFFC10124ul, __READ_WRITE, unsigned long );
__IOREG( PINV4    , 0xFFC10130ul, __READ_WRITE, unsigned short );
__IOREG( P5       , 0xFFC10140ul, __READ_WRITE, unsigned short );
__IOREG( PSR5     , 0xFFC10144ul, __READ_WRITE, unsigned long );
__IOREG( PNOT5    , 0xFFC10148ul, __READ_WRITE, unsigned short );
__IOREG( PPR5     , 0xFFC1014Cul, __READ_WRITE, unsigned short );
__IOREG( PM5      , 0xFFC10150ul, __READ_WRITE, unsigned short );
__IOREG( PMC5     , 0xFFC10154ul, __READ_WRITE, unsigned short );
__IOREG( PFC5     , 0xFFC10158ul, __READ_WRITE, unsigned short );
__IOREG( PFCE5    , 0xFFC1015Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR5    , 0xFFC10160ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR5   , 0xFFC10164ul, __READ_WRITE, unsigned long );
__IOREG( PINV5    , 0xFFC10170ul, __READ_WRITE, unsigned short );
__IOREG( P6       , 0xFFC10180ul, __READ_WRITE, unsigned short );
__IOREG( PSR6     , 0xFFC10184ul, __READ_WRITE, unsigned long );
__IOREG( PNOT6    , 0xFFC10188ul, __READ_WRITE, unsigned short );
__IOREG( PPR6     , 0xFFC1018Cul, __READ_WRITE, unsigned short );
__IOREG( PM6      , 0xFFC10190ul, __READ_WRITE, unsigned short );
__IOREG( PMC6     , 0xFFC10194ul, __READ_WRITE, unsigned short );
__IOREG( PFC6     , 0xFFC10198ul, __READ_WRITE, unsigned short );
__IOREG( PFCE6    , 0xFFC1019Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR6    , 0xFFC101A0ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR6   , 0xFFC101A4ul, __READ_WRITE, unsigned long );
__IOREG( PINV6    , 0xFFC101B0ul, __READ_WRITE, unsigned short );
__IOREG( P7       , 0xFFC101C0ul, __READ_WRITE, unsigned short );
__IOREG( PSR7     , 0xFFC101C4ul, __READ_WRITE, unsigned long );
__IOREG( PNOT7    , 0xFFC101C8ul, __READ_WRITE, unsigned short );
__IOREG( PPR7     , 0xFFC101CCul, __READ_WRITE, unsigned short );
__IOREG( PM7      , 0xFFC101D0ul, __READ_WRITE, unsigned short );
__IOREG( PMC7     , 0xFFC101D4ul, __READ_WRITE, unsigned short );
__IOREG( PFC7     , 0xFFC101D8ul, __READ_WRITE, unsigned short );
__IOREG( PFCE7    , 0xFFC101DCul, __READ_WRITE, unsigned short );
__IOREG( PMSR7    , 0xFFC101E0ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR7   , 0xFFC101E4ul, __READ_WRITE, unsigned long );
__IOREG( PINV7    , 0xFFC101F0ul, __READ_WRITE, unsigned short );
__IOREG( P8       , 0xFFC10200ul, __READ_WRITE, unsigned short );
__IOREG( PSR8     , 0xFFC10204ul, __READ_WRITE, unsigned long );
__IOREG( PNOT8    , 0xFFC10208ul, __READ_WRITE, unsigned short );
__IOREG( PPR8     , 0xFFC1020Cul, __READ_WRITE, unsigned short );
__IOREG( PM8      , 0xFFC10210ul, __READ_WRITE, unsigned short );
__IOREG( PMC8     , 0xFFC10214ul, __READ_WRITE, unsigned short );
__IOREG( PFC8     , 0xFFC10218ul, __READ_WRITE, unsigned short );
__IOREG( PFCE8    , 0xFFC1021Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR8    , 0xFFC10220ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR8   , 0xFFC10224ul, __READ_WRITE, unsigned long );
__IOREG( PINV8    , 0xFFC10230ul, __READ_WRITE, unsigned short );
__IOREG( P9       , 0xFFC10240ul, __READ_WRITE, unsigned short );
__IOREG( PSR9     , 0xFFC10244ul, __READ_WRITE, unsigned long );
__IOREG( PNOT9    , 0xFFC10248ul, __READ_WRITE, unsigned short );
__IOREG( PPR9     , 0xFFC1024Cul, __READ_WRITE, unsigned short );
__IOREG( PM9      , 0xFFC10250ul, __READ_WRITE, unsigned short );
__IOREG( PMC9     , 0xFFC10254ul, __READ_WRITE, unsigned short );
__IOREG( PFC9     , 0xFFC10258ul, __READ_WRITE, unsigned short );
__IOREG( PFCE9    , 0xFFC1025Cul, __READ_WRITE, unsigned short );
__IOREG( PMSR9    , 0xFFC10260ul, __READ_WRITE, unsigned long );
__IOREG( PMCSR9   , 0xFFC10264ul, __READ_WRITE, unsigned long );
__IOREG( PINV9    , 0xFFC10270ul, __READ_WRITE, unsigned short );
__IOREG( PIBC0    , 0xFFC14000ul, __READ_WRITE, unsigned short );
__IOREG( PBDC0    , 0xFFC14004ul, __READ_WRITE, unsigned short );
__IOREG( PIPC0    , 0xFFC14008ul, __READ_WRITE, unsigned short );
__IOREG( PU0      , 0xFFC1400Cul, __READ_WRITE, unsigned short );
__IOREG( PD0      , 0xFFC14010ul, __READ_WRITE, unsigned short );
__IOREG( PODC0    , 0xFFC14014ul, __READ_WRITE, unsigned long );
__IOREG( PDSC0    , 0xFFC14018ul, __READ_WRITE, unsigned long );
__IOREG( PIS0     , 0xFFC1401Cul, __READ_WRITE, unsigned short );
__IOREG( PISA0    , 0xFFC14024ul, __READ_WRITE, unsigned short );
__IOREG( PUCC0    , 0xFFC14028ul, __READ_WRITE, unsigned long );
__IOREG( PODCE0   , 0xFFC14038ul, __READ_WRITE, unsigned long );
__IOREG( PIBC1    , 0xFFC14040ul, __READ_WRITE, unsigned short );
__IOREG( PBDC1    , 0xFFC14044ul, __READ_WRITE, unsigned short );
__IOREG( PIPC1    , 0xFFC14048ul, __READ_WRITE, unsigned short );
__IOREG( PU1      , 0xFFC1404Cul, __READ_WRITE, unsigned short );
__IOREG( PD1      , 0xFFC14050ul, __READ_WRITE, unsigned short );
__IOREG( PODC1    , 0xFFC14054ul, __READ_WRITE, unsigned long );
__IOREG( PDSC1    , 0xFFC14058ul, __READ_WRITE, unsigned long );
__IOREG( PIS1     , 0xFFC1405Cul, __READ_WRITE, unsigned short );
__IOREG( PISA1    , 0xFFC14064ul, __READ_WRITE, unsigned short );
__IOREG( PUCC1    , 0xFFC14068ul, __READ_WRITE, unsigned long );
__IOREG( PODCE1   , 0xFFC14078ul, __READ_WRITE, unsigned long );
__IOREG( PIBC2    , 0xFFC14080ul, __READ_WRITE, unsigned short );
__IOREG( PBDC2    , 0xFFC14084ul, __READ_WRITE, unsigned short );
__IOREG( PIPC2    , 0xFFC14088ul, __READ_WRITE, unsigned short );
__IOREG( PU2      , 0xFFC1408Cul, __READ_WRITE, unsigned short );
__IOREG( PD2      , 0xFFC14090ul, __READ_WRITE, unsigned short );
__IOREG( PODC2    , 0xFFC14094ul, __READ_WRITE, unsigned long );
__IOREG( PDSC2    , 0xFFC14098ul, __READ_WRITE, unsigned long );
__IOREG( PIS2     , 0xFFC1409Cul, __READ_WRITE, unsigned short );
__IOREG( PISA2    , 0xFFC140A4ul, __READ_WRITE, unsigned short );
__IOREG( PUCC2    , 0xFFC140A8ul, __READ_WRITE, unsigned long );
__IOREG( PODCE2   , 0xFFC140B8ul, __READ_WRITE, unsigned long );
__IOREG( PIBC3    , 0xFFC140C0ul, __READ_WRITE, unsigned short );
__IOREG( PBDC3    , 0xFFC140C4ul, __READ_WRITE, unsigned short );
__IOREG( PIPC3    , 0xFFC140C8ul, __READ_WRITE, unsigned short );
__IOREG( PU3      , 0xFFC140CCul, __READ_WRITE, unsigned short );
__IOREG( PD3      , 0xFFC140D0ul, __READ_WRITE, unsigned short );
__IOREG( PODC3    , 0xFFC140D4ul, __READ_WRITE, unsigned long );
__IOREG( PDSC3    , 0xFFC140D8ul, __READ_WRITE, unsigned long );
__IOREG( PIS3     , 0xFFC140DCul, __READ_WRITE, unsigned short );
__IOREG( PISA3    , 0xFFC140E4ul, __READ_WRITE, unsigned short );
__IOREG( PUCC3    , 0xFFC140E8ul, __READ_WRITE, unsigned long );
__IOREG( PODCE3   , 0xFFC140F8ul, __READ_WRITE, unsigned long );
__IOREG( PIBC4    , 0xFFC14100ul, __READ_WRITE, unsigned short );
__IOREG( PBDC4    , 0xFFC14104ul, __READ_WRITE, unsigned short );
__IOREG( PIPC4    , 0xFFC14108ul, __READ_WRITE, unsigned short );
__IOREG( PU4      , 0xFFC1410Cul, __READ_WRITE, unsigned short );
__IOREG( PD4      , 0xFFC14110ul, __READ_WRITE, unsigned short );
__IOREG( PODC4    , 0xFFC14114ul, __READ_WRITE, unsigned long );
__IOREG( PDSC4    , 0xFFC14118ul, __READ_WRITE, unsigned long );
__IOREG( PIS4     , 0xFFC1411Cul, __READ_WRITE, unsigned short );
__IOREG( PISA4    , 0xFFC14124ul, __READ_WRITE, unsigned short );
__IOREG( PUCC4    , 0xFFC14128ul, __READ_WRITE, unsigned long );
__IOREG( PODCE4   , 0xFFC14138ul, __READ_WRITE, unsigned long );
__IOREG( PIBC5    , 0xFFC14140ul, __READ_WRITE, unsigned short );
__IOREG( PBDC5    , 0xFFC14144ul, __READ_WRITE, unsigned short );
__IOREG( PIPC5    , 0xFFC14148ul, __READ_WRITE, unsigned short );
__IOREG( PU5      , 0xFFC1414Cul, __READ_WRITE, unsigned short );
__IOREG( PD5      , 0xFFC14150ul, __READ_WRITE, unsigned short );
__IOREG( PODC5    , 0xFFC14154ul, __READ_WRITE, unsigned long );
__IOREG( PDSC5    , 0xFFC14158ul, __READ_WRITE, unsigned long );
__IOREG( PIS5     , 0xFFC1415Cul, __READ_WRITE, unsigned short );
__IOREG( PISA5    , 0xFFC14164ul, __READ_WRITE, unsigned short );
__IOREG( PUCC5    , 0xFFC14168ul, __READ_WRITE, unsigned long );
__IOREG( PODCE5   , 0xFFC14178ul, __READ_WRITE, unsigned long );
__IOREG( PIBC6    , 0xFFC14180ul, __READ_WRITE, unsigned short );
__IOREG( PBDC6    , 0xFFC14184ul, __READ_WRITE, unsigned short );
__IOREG( PIPC6    , 0xFFC14188ul, __READ_WRITE, unsigned short );
__IOREG( PU6      , 0xFFC1418Cul, __READ_WRITE, unsigned short );
__IOREG( PD6      , 0xFFC14190ul, __READ_WRITE, unsigned short );
__IOREG( PODC6    , 0xFFC14194ul, __READ_WRITE, unsigned long );
__IOREG( PDSC6    , 0xFFC14198ul, __READ_WRITE, unsigned long );
__IOREG( PIS6     , 0xFFC1419Cul, __READ_WRITE, unsigned short );
__IOREG( PISA6    , 0xFFC141A4ul, __READ_WRITE, unsigned short );
__IOREG( PUCC6    , 0xFFC141A8ul, __READ_WRITE, unsigned long );
__IOREG( PODCE6   , 0xFFC141B8ul, __READ_WRITE, unsigned long );
__IOREG( PIBC7    , 0xFFC141C0ul, __READ_WRITE, unsigned short );
__IOREG( PBDC7    , 0xFFC141C4ul, __READ_WRITE, unsigned short );
__IOREG( PIPC7    , 0xFFC141C8ul, __READ_WRITE, unsigned short );
__IOREG( PU7      , 0xFFC141CCul, __READ_WRITE, unsigned short );
__IOREG( PD7      , 0xFFC141D0ul, __READ_WRITE, unsigned short );
__IOREG( PODC7    , 0xFFC141D4ul, __READ_WRITE, unsigned long );
__IOREG( PDSC7    , 0xFFC141D8ul, __READ_WRITE, unsigned long );
__IOREG( PIS7     , 0xFFC141DCul, __READ_WRITE, unsigned short );
__IOREG( PISA7    , 0xFFC141E4ul, __READ_WRITE, unsigned short );
__IOREG( PUCC7    , 0xFFC141E8ul, __READ_WRITE, unsigned long );
__IOREG( PODCE7   , 0xFFC141F8ul, __READ_WRITE, unsigned long );
__IOREG( PIBC8    , 0xFFC14200ul, __READ_WRITE, unsigned short );
__IOREG( PBDC8    , 0xFFC14204ul, __READ_WRITE, unsigned short );
__IOREG( PIPC8    , 0xFFC14208ul, __READ_WRITE, unsigned short );
__IOREG( PU8      , 0xFFC1420Cul, __READ_WRITE, unsigned short );
__IOREG( PD8      , 0xFFC14210ul, __READ_WRITE, unsigned short );
__IOREG( PODC8    , 0xFFC14214ul, __READ_WRITE, unsigned long );
__IOREG( PDSC8    , 0xFFC14218ul, __READ_WRITE, unsigned long );
__IOREG( PIS8     , 0xFFC1421Cul, __READ_WRITE, unsigned short );
__IOREG( PISA8    , 0xFFC14224ul, __READ_WRITE, unsigned short );
__IOREG( PUCC8    , 0xFFC14228ul, __READ_WRITE, unsigned long );
__IOREG( PODCE8   , 0xFFC14238ul, __READ_WRITE, unsigned long );
__IOREG( PIBC9    , 0xFFC14240ul, __READ_WRITE, unsigned short );
__IOREG( PBDC9    , 0xFFC14244ul, __READ_WRITE, unsigned short );
__IOREG( PIPC9    , 0xFFC14248ul, __READ_WRITE, unsigned short );
__IOREG( PU9      , 0xFFC1424Cul, __READ_WRITE, unsigned short );
__IOREG( PD9      , 0xFFC14250ul, __READ_WRITE, unsigned short );
__IOREG( PODC9    , 0xFFC14254ul, __READ_WRITE, unsigned long );
__IOREG( PDSC9    , 0xFFC14258ul, __READ_WRITE, unsigned long );
__IOREG( PIS9     , 0xFFC1425Cul, __READ_WRITE, unsigned short );
__IOREG( PISA9    , 0xFFC14264ul, __READ_WRITE, unsigned short );
__IOREG( PUCC9    , 0xFFC14268ul, __READ_WRITE, unsigned long );
__IOREG( PODCE9   , 0xFFC14278ul, __READ_WRITE, unsigned long );
__IOREG( JP0      , 0xFFC20000ul, __READ_WRITE, unsigned char );
__IOREG( JPSR0    , 0xFFC20004ul, __READ_WRITE, unsigned long );
__IOREG( JPNOT0   , 0xFFC20008ul, __READ_WRITE, unsigned char );
__IOREG( JPPR0    , 0xFFC2000Cul, __READ_WRITE, unsigned char );
__IOREG( JPM0     , 0xFFC20010ul, __READ_WRITE, unsigned char );
__IOREG( JPMC0    , 0xFFC20014ul, __READ_WRITE, unsigned char );
__IOREG( JPFC0    , 0xFFC20018ul, __READ_WRITE, unsigned char );
__IOREG( JPFCE0   , 0xFFC2001Cul, __READ_WRITE, unsigned char );
__IOREG( JPMSR0   , 0xFFC20020ul, __READ_WRITE, unsigned long );
__IOREG( JPMCSR0  , 0xFFC20024ul, __READ_WRITE, unsigned long );
__IOREG( JPINV0   , 0xFFC20030ul, __READ_WRITE, unsigned char );
__IOREG( JPIBC0   , 0xFFC24000ul, __READ_WRITE, unsigned char );
__IOREG( JPBDC0   , 0xFFC24004ul, __READ_WRITE, unsigned char );
__IOREG( JPU0     , 0xFFC2400Cul, __READ_WRITE, unsigned char );
__IOREG( JPD0     , 0xFFC24010ul, __READ_WRITE, unsigned char );
__IOREG( JPODC0   , 0xFFC24014ul, __READ_WRITE, unsigned long );
__IOREG( JPDSC0   , 0xFFC24018ul, __READ_WRITE, unsigned long );
__IOREG( JPIS0    , 0xFFC2401Cul, __READ_WRITE, unsigned char );
__IOREG( JPISA0   , 0xFFC24024ul, __READ_WRITE, unsigned char );
__IOREG( JPUCC0   , 0xFFC24028ul, __READ_WRITE, unsigned long );
__IOREG( JPODCE0  , 0xFFC24038ul, __READ_WRITE, unsigned long );

__IOREG( RESC       , 0xFFF82800ul, __READ_WRITE, unsigned char  ); /* RESC */
__IOREG( CVMDEW     , 0xFFF82C1Cul, __READ_WRITE, unsigned char  ); /* CVMDEW */
__IOREG( CVMDMASK   , 0xFFF82C0Cul, __READ_WRITE, unsigned char  ); /*CVMDMASK*/
__IOREG( CVMFC      , 0xFFF82C18ul, __WRITE     , unsigned char  ); /*CVMFC*/
__IOREG( CVMF       , 0xFFF82C00ul, __READ      , unsigned char  ); /*CVMF*/
__IOREG( CVMDIAG    , 0xFFF82C10ul, __READ_WRITE, unsigned char  ); /*CVMDIAG*/
__IOREG( CVMMON     , 0xFFF82C14ul, __READ      , unsigned char  ); /*CVMMON*/
__IOREG( CVMDE      , 0xFFF82C04ul, __READ      , unsigned char  ); /*CVMDE*/
__IOREG( CLKD0DIVL  , 0xFFF88800ul, __READ_WRITE, unsigned long  );/*CLKD0DIVL*/
__IOREG( CLKD1DIVL  , 0xFFF88808ul, __READ_WRITE, unsigned long  );/*CLKD1DIVL*/
__IOREG( CLKD2DIVL  , 0xFFF88810ul, __READ_WRITE, unsigned long  );/*CLKD2DIVL*/
__IOREG( CLKD3DIVL  , 0xFFF88818ul, __READ_WRITE, unsigned long  );/*CLKD3DIVL*/
__IOREG( CLKD0STATL , 0xFFF88804ul, __READ_WRITE, unsigned long  );
                                                                  /*CLKD0STATL*/
__IOREG( CLKD1STATL , 0xFFF8880Cul, __READ_WRITE, unsigned long  );
                                                                  /*CLKD1STATL*/
__IOREG( CLKD2STATL , 0xFFF88814ul, __READ_WRITE, unsigned long  );
                                                                  /*CLKD2STATL*/
__IOREG( CLKD3STATL , 0xFFF8881Cul, __READ_WRITE, unsigned long  );
                                                                  /*CLKD3STATL*/
__IOREG( CKSC0CL    , 0xFFF89000ul, __READ_WRITE, unsigned long  );/* CKSC0CL */
__IOREG( CKSC1CL    , 0xFFF89040ul, __READ_WRITE, unsigned long  );/* CKSC1CL */
__IOREG( CKSC2CL    , 0xFFF89080ul, __READ_WRITE, unsigned long  );/* CKSC2CL */
__IOREG( CKSC3CL    , 0xFFF890C0ul, __READ_WRITE, unsigned long  );/* CKSC3CL */
__IOREG( CKSC0SL    , 0xFFF89008ul, __READ_WRITE, unsigned long  );/* CKSC0SL */
__IOREG( CKSC1SL    , 0xFFF89048ul, __READ_WRITE, unsigned long  );/* CKSC1SL */
__IOREG( CKSC2SL    , 0xFFF89088ul, __READ_WRITE, unsigned long  );/* CKSC2SL */
__IOREG( CKSC3SL    , 0xFFF890C8ul, __READ_WRITE, unsigned long  );/* CKSC3SL */
__IOREG( RESF       , 0xFFF81000ul, __READ_WRITE, unsigned short );/* RESF */
__IOREG( RESFC      , 0xFFF81008ul, __READ_WRITE, unsigned short );/* RESFC */
__IOREG( SWSRESA0   , 0xFFF81100ul, __READ_WRITE, unsigned char  );/* SWSRESA0*/
__IOREG( SWARESA0   , 0xFFF81200ul, __READ_WRITE, unsigned char  );/* SWARESA0*/

__IOREG( FHVE3      , 0xFFF82410ul, __READ_WRITE, unsigned long  );/* FHVE3 */
__IOREG( FHVE15     , 0xFFF8A430ul, __READ_WRITE, unsigned long  );/* FHVE15 */
__IOREG( SELFID0    , 0xFFA08000ul, __READ_WRITE, unsigned long  );/* SELFID0 */
__IOREG( SELFID1    , 0xFFA08004ul, __READ_WRITE, unsigned long  );/* SELFID1 */
__IOREG( SELFID2    , 0xFFA08008ul, __READ_WRITE, unsigned long  );/* SELFID2 */
__IOREG( SELFID3    , 0xFFA0800Cul, __READ_WRITE, unsigned long  );/* SELFID3 */
__IOREG( SELFID4    , 0xFFA08010ul, __READ_WRITE, unsigned long  );/* SELFID4 */
__IOREG( SELFID5    , 0xFFA08014ul, __READ_WRITE, unsigned long  );/* SELFID5 */
__IOREG( SELFID6    , 0xFFA08018ul, __READ_WRITE, unsigned long  );/* SELFID6 */
__IOREG( SELFID7    , 0xFFA0801Cul, __READ_WRITE, unsigned long  );/* SELFID7 */
__IOREG( CFPEID0    , 0xFFA08060ul, __READ_WRITE, unsigned long  );/* CFPEID0 */
__IOREG( CFPEID1    , 0xFFA08064ul, __READ_WRITE, unsigned long  );/* CFPEID1 */
__IOREG( CFPEID2    , 0xFFA08068ul, __READ_WRITE, unsigned long  );/* CFPEID2 */
__IOREG( CFPEID3    , 0xFFA0806Cul, __READ_WRITE, unsigned long  );/* CFPEID3 */
__IOREG( CFPEID4    , 0xFFA08070ul, __READ_WRITE, unsigned long  );/* CFPEID4 */
__IOREG( CFPEID5    , 0xFFA08074ul, __READ_WRITE, unsigned long  );/* CFPEID5 */
__IOREG( CFPEID6    , 0xFFA08078ul, __READ_WRITE, unsigned long  );/* CFPEID6 */
__IOREG( CFPEID7    , 0xFFA0807Cul, __READ_WRITE, unsigned long  );/* CFPEID7 */
__IOREG( CMPTST0    , 0xFFFEED00ul, __READ_WRITE, unsigned long  );/* CMPTST0 */
__IOREG( CMPTST1    , 0xFFFEED04ul, __READ_WRITE, unsigned long  );/* CMPTST1 */


__IOREG( DSA0       , 0xFFFF8400ul, __READ_WRITE, unsigned long  );
__IOREG( DDA0       , 0xFFFF8404ul, __READ_WRITE, unsigned long  );
__IOREG( DTC0       , 0xFFFF8408ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT0      , 0xFFFF840Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA0      , 0xFFFF8410ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA0      , 0xFFFF8414ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC0      , 0xFFFF8418ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC0      , 0xFFFF841Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN0      , 0xFFFF8420ul, __READ_WRITE, unsigned long  );
__IOREG( DCST0      , 0xFFFF8424ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS0     , 0xFFFF8428ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC0     , 0xFFFF842Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR0      , 0xFFFF8430ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ0    , 0xFFFF8434ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC0   , 0xFFFF8438ul, __READ_WRITE, unsigned long  );
__IOREG( DSA1       , 0xFFFF8440ul, __READ_WRITE, unsigned long  );
__IOREG( DDA1       , 0xFFFF8444ul, __READ_WRITE, unsigned long  );
__IOREG( DTC1       , 0xFFFF8448ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT1      , 0xFFFF844Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA1      , 0xFFFF8450ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA1      , 0xFFFF8454ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC1      , 0xFFFF8458ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC1      , 0xFFFF845Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN1      , 0xFFFF8460ul, __READ_WRITE, unsigned long  );
__IOREG( DCST1      , 0xFFFF8464ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS1     , 0xFFFF8468ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC1     , 0xFFFF846Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR1      , 0xFFFF8470ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ1    , 0xFFFF8474ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC1   , 0xFFFF8478ul, __READ_WRITE, unsigned long  );
__IOREG( DSA2       , 0xFFFF8480ul, __READ_WRITE, unsigned long  );
__IOREG( DDA2       , 0xFFFF8484ul, __READ_WRITE, unsigned long  );
__IOREG( DTC2       , 0xFFFF8488ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT2      , 0xFFFF848Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA2      , 0xFFFF8490ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA2      , 0xFFFF8494ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC2      , 0xFFFF8498ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC2      , 0xFFFF849Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN2      , 0xFFFF84A0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST2      , 0xFFFF84A4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS2     , 0xFFFF84A8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC2     , 0xFFFF84ACul, __READ_WRITE, unsigned long  );
__IOREG( DTFR2      , 0xFFFF84B0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ2    , 0xFFFF84B4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC2   , 0xFFFF84B8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA3       , 0xFFFF84C0ul, __READ_WRITE, unsigned long  );
__IOREG( DDA3       , 0xFFFF84C4ul, __READ_WRITE, unsigned long  );
__IOREG( DTC3       , 0xFFFF84C8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT3      , 0xFFFF84CCul, __READ_WRITE, unsigned long  );
__IOREG( DRSA3      , 0xFFFF84D0ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA3      , 0xFFFF84D4ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC3      , 0xFFFF84D8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC3      , 0xFFFF84DCul, __READ_WRITE, unsigned long  );
__IOREG( DCEN3      , 0xFFFF84E0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST3      , 0xFFFF84E4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS3     , 0xFFFF84E8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC3     , 0xFFFF84ECul, __READ_WRITE, unsigned long  );
__IOREG( DTFR3      , 0xFFFF84F0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ3    , 0xFFFF84F4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC3   , 0xFFFF84F8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA4       , 0xFFFF8500ul, __READ_WRITE, unsigned long  );
__IOREG( DDA4       , 0xFFFF8504ul, __READ_WRITE, unsigned long  );
__IOREG( DTC4       , 0xFFFF8508ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT4      , 0xFFFF850Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA4      , 0xFFFF8510ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA4      , 0xFFFF8514ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC4      , 0xFFFF8518ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC4      , 0xFFFF851Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN4      , 0xFFFF8520ul, __READ_WRITE, unsigned long  );
__IOREG( DCST4      , 0xFFFF8524ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS4     , 0xFFFF8528ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC4     , 0xFFFF852Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR4      , 0xFFFF8530ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ4    , 0xFFFF8534ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC4   , 0xFFFF8538ul, __READ_WRITE, unsigned long  );
__IOREG( DSA5       , 0xFFFF8540ul, __READ_WRITE, unsigned long  );
__IOREG( DDA5       , 0xFFFF8544ul, __READ_WRITE, unsigned long  );
__IOREG( DTC5       , 0xFFFF8548ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT5      , 0xFFFF854Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA5      , 0xFFFF8550ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA5      , 0xFFFF8554ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC5      , 0xFFFF8558ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC5      , 0xFFFF855Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN5      , 0xFFFF8560ul, __READ_WRITE, unsigned long  );
__IOREG( DCST5      , 0xFFFF8564ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS5     , 0xFFFF8568ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC5     , 0xFFFF856Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR5      , 0xFFFF8570ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ5    , 0xFFFF8574ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC5   , 0xFFFF8578ul, __READ_WRITE, unsigned long  );
__IOREG( DSA6       , 0xFFFF8580ul, __READ_WRITE, unsigned long  );
__IOREG( DDA6       , 0xFFFF8584ul, __READ_WRITE, unsigned long  );
__IOREG( DTC6       , 0xFFFF8588ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT6      , 0xFFFF858Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA6      , 0xFFFF8590ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA6      , 0xFFFF8594ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC6      , 0xFFFF8598ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC6      , 0xFFFF859Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN6      , 0xFFFF85A0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST6      , 0xFFFF85A4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS6     , 0xFFFF85A8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC6     , 0xFFFF85ACul, __READ_WRITE, unsigned long  );
__IOREG( DTFR6      , 0xFFFF85B0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ6    , 0xFFFF85B4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC6   , 0xFFFF85B8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA7       , 0xFFFF85C0ul, __READ_WRITE, unsigned long  );
__IOREG( DDA7       , 0xFFFF85C4ul, __READ_WRITE, unsigned long  );
__IOREG( DTC7       , 0xFFFF85C8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT7      , 0xFFFF85CCul, __READ_WRITE, unsigned long  );
__IOREG( DRSA7      , 0xFFFF85D0ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA7      , 0xFFFF85D4ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC7      , 0xFFFF85D8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC7      , 0xFFFF85DCul, __READ_WRITE, unsigned long  );
__IOREG( DCEN7      , 0xFFFF85E0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST7      , 0xFFFF85E4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS7     , 0xFFFF85E8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC7     , 0xFFFF85ECul, __READ_WRITE, unsigned long  );
__IOREG( DTFR7      , 0xFFFF85F0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ7    , 0xFFFF85F4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC7   , 0xFFFF85F8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA8       , 0xFFFF8600ul, __READ_WRITE, unsigned long  );
__IOREG( DDA8       , 0xFFFF8604ul, __READ_WRITE, unsigned long  );
__IOREG( DTC8       , 0xFFFF8608ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT8      , 0xFFFF860Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA8      , 0xFFFF8610ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA8      , 0xFFFF8614ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC8      , 0xFFFF8618ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC8      , 0xFFFF861Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN8      , 0xFFFF8620ul, __READ_WRITE, unsigned long  );
__IOREG( DCST8      , 0xFFFF8624ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS8     , 0xFFFF8628ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC8     , 0xFFFF862Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR8      , 0xFFFF8630ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ8    , 0xFFFF8634ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC8   , 0xFFFF8638ul, __READ_WRITE, unsigned long  );
__IOREG( DSA9       , 0xFFFF8640ul, __READ_WRITE, unsigned long  );
__IOREG( DDA9       , 0xFFFF8644ul, __READ_WRITE, unsigned long  );
__IOREG( DTC9       , 0xFFFF8648ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT9      , 0xFFFF864Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA9      , 0xFFFF8650ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA9      , 0xFFFF8654ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC9      , 0xFFFF8658ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC9      , 0xFFFF865Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN9      , 0xFFFF8660ul, __READ_WRITE, unsigned long  );
__IOREG( DCST9      , 0xFFFF8664ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS9     , 0xFFFF8668ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC9     , 0xFFFF866Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR9      , 0xFFFF8670ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ9    , 0xFFFF8674ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC9   , 0xFFFF8678ul, __READ_WRITE, unsigned long  );
__IOREG( DSA10      , 0xFFFF8680ul, __READ_WRITE, unsigned long  );
__IOREG( DDA10      , 0xFFFF8684ul, __READ_WRITE, unsigned long  );
__IOREG( DTC10      , 0xFFFF8688ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT10     , 0xFFFF868Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA10     , 0xFFFF8690ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA10     , 0xFFFF8694ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC10     , 0xFFFF8698ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC10     , 0xFFFF869Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN10     , 0xFFFF86A0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST10     , 0xFFFF86A4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS10    , 0xFFFF86A8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC10    , 0xFFFF86ACul, __READ_WRITE, unsigned long  );
__IOREG( DTFR10     , 0xFFFF86B0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ10   , 0xFFFF86B4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC10  , 0xFFFF86B8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA11      , 0xFFFF86C0ul, __READ_WRITE, unsigned long  );
__IOREG( DDA11      , 0xFFFF86C4ul, __READ_WRITE, unsigned long  );
__IOREG( DTC11      , 0xFFFF86C8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT11     , 0xFFFF86CCul, __READ_WRITE, unsigned long  );
__IOREG( DRSA11     , 0xFFFF86D0ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA11     , 0xFFFF86D4ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC11     , 0xFFFF86D8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC11     , 0xFFFF86DCul, __READ_WRITE, unsigned long  );
__IOREG( DCEN11     , 0xFFFF86E0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST11     , 0xFFFF86E4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS11    , 0xFFFF86E8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC11    , 0xFFFF86ECul, __READ_WRITE, unsigned long  );
__IOREG( DTFR11     , 0xFFFF86F0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ11   , 0xFFFF86F4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC11  , 0xFFFF86F8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA12      , 0xFFFF8700ul, __READ_WRITE, unsigned long  );
__IOREG( DDA12      , 0xFFFF8704ul, __READ_WRITE, unsigned long  );
__IOREG( DTC12      , 0xFFFF8708ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT12     , 0xFFFF870Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA12     , 0xFFFF8710ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA12     , 0xFFFF8714ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC12     , 0xFFFF8718ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC12     , 0xFFFF871Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN12     , 0xFFFF8720ul, __READ_WRITE, unsigned long  );
__IOREG( DCST12     , 0xFFFF8724ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS12    , 0xFFFF8728ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC12    , 0xFFFF872Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR12     , 0xFFFF8730ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ12   , 0xFFFF8734ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC12  , 0xFFFF8738ul, __READ_WRITE, unsigned long  );
__IOREG( DSA13      , 0xFFFF8740ul, __READ_WRITE, unsigned long  );
__IOREG( DDA13      , 0xFFFF8744ul, __READ_WRITE, unsigned long  );
__IOREG( DTC13      , 0xFFFF8748ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT13     , 0xFFFF874Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA13     , 0xFFFF8750ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA13     , 0xFFFF8754ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC13     , 0xFFFF8758ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC13     , 0xFFFF875Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN13     , 0xFFFF8760ul, __READ_WRITE, unsigned long  );
__IOREG( DCST13     , 0xFFFF8764ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS13    , 0xFFFF8768ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC13    , 0xFFFF876Cul, __READ_WRITE, unsigned long  );
__IOREG( DTFR13     , 0xFFFF8770ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ13   , 0xFFFF8774ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC13  , 0xFFFF8778ul, __READ_WRITE, unsigned long  );
__IOREG( DSA14      , 0xFFFF8780ul, __READ_WRITE, unsigned long  );
__IOREG( DDA14      , 0xFFFF8784ul, __READ_WRITE, unsigned long  );
__IOREG( DTC14      , 0xFFFF8788ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT14     , 0xFFFF878Cul, __READ_WRITE, unsigned long  );
__IOREG( DRSA14     , 0xFFFF8790ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA14     , 0xFFFF8794ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC14     , 0xFFFF8798ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC14     , 0xFFFF879Cul, __READ_WRITE, unsigned long  );
__IOREG( DCEN14     , 0xFFFF87A0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST14     , 0xFFFF87A4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS14    , 0xFFFF87A8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC14    , 0xFFFF87ACul, __READ_WRITE, unsigned long  );
__IOREG( DTFR14     , 0xFFFF87B0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ14   , 0xFFFF87B4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC14  , 0xFFFF87B8ul, __READ_WRITE, unsigned long  );
__IOREG( DSA15      , 0xFFFF87C0ul, __READ_WRITE, unsigned long  );
__IOREG( DDA15      , 0xFFFF87C4ul, __READ_WRITE, unsigned long  );
__IOREG( DTC15      , 0xFFFF87C8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCT15     , 0xFFFF87CCul, __READ_WRITE, unsigned long  );
__IOREG( DRSA15     , 0xFFFF87D0ul, __READ_WRITE, unsigned long  );
__IOREG( DRDA15     , 0xFFFF87D4ul, __READ_WRITE, unsigned long  );
__IOREG( DRTC15     , 0xFFFF87D8ul, __READ_WRITE, unsigned long  );
__IOREG( DTCC15     , 0xFFFF87DCul, __READ_WRITE, unsigned long  );
__IOREG( DCEN15     , 0xFFFF87E0ul, __READ_WRITE, unsigned long  );
__IOREG( DCST15     , 0xFFFF87E4ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTS15    , 0xFFFF87E8ul, __READ_WRITE, unsigned long  );
__IOREG( DCSTC15    , 0xFFFF87ECul, __READ_WRITE, unsigned long  );
__IOREG( DTFR15     , 0xFFFF87F0ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQ15   , 0xFFFF87F4ul, __READ_WRITE, unsigned long  );
__IOREG( DTFRRQC15  , 0xFFFF87F8ul, __READ_WRITE, unsigned long  );

__IOREG( PEGG0MK    , 0xFFFEE680ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG0MKL   , 0xFFFEE680ul, __READ_WRITE, unsigned short );
__IOREG( PEGG0MKLL  , 0xFFFEE680ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0MKLH  , 0xFFFEE681ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0MKH   , 0xFFFEE682ul, __READ_WRITE, unsigned short );
__IOREG( PEGG0MKHL  , 0xFFFEE682ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0MKHH  , 0xFFFEE683ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0BA    , 0xFFFEE684ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG0BAL   , 0xFFFEE684ul, __READ_WRITE, unsigned short );
__IOREG( PEGG0BALL  , 0xFFFEE684ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0BALH  , 0xFFFEE685ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0BAH   , 0xFFFEE686ul, __READ_WRITE, unsigned short );
__IOREG( PEGG0BAHL  , 0xFFFEE686ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0BAHH  , 0xFFFEE687ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0SP    , 0xFFFEE688ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG0SPL   , 0xFFFEE688ul, __READ_WRITE, unsigned short );
__IOREG( PEGG0SPLL  , 0xFFFEE688ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0SPLH  , 0xFFFEE689ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0SPH   , 0xFFFEE68Aul, __READ_WRITE, unsigned short );
__IOREG( PEGG0SPHL  , 0xFFFEE68Aul, __READ_WRITE, unsigned char  );
__IOREG( PEGG0SPHH  , 0xFFFEE68Bul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1MK    , 0xFFFEE690ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG1MKL   , 0xFFFEE690ul, __READ_WRITE, unsigned short );
__IOREG( PEGG1MKLL  , 0xFFFEE690ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1MKLH  , 0xFFFEE691ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1MKH   , 0xFFFEE692ul, __READ_WRITE, unsigned short );
__IOREG( PEGG1MKHL  , 0xFFFEE692ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1MKHH  , 0xFFFEE693ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1BA    , 0xFFFEE694ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG1BAL   , 0xFFFEE694ul, __READ_WRITE, unsigned short );
__IOREG( PEGG1BALL  , 0xFFFEE694ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1BALH  , 0xFFFEE695ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1BAH   , 0xFFFEE696ul, __READ_WRITE, unsigned short );
__IOREG( PEGG1BAHL  , 0xFFFEE696ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1BAHH  , 0xFFFEE697ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1SP    , 0xFFFEE698ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG1SPL   , 0xFFFEE698ul, __READ_WRITE, unsigned short );
__IOREG( PEGG1SPLL  , 0xFFFEE698ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1SPLH  , 0xFFFEE699ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1SPH   , 0xFFFEE69Aul, __READ_WRITE, unsigned short );
__IOREG( PEGG1SPHL  , 0xFFFEE69Aul, __READ_WRITE, unsigned char  );
__IOREG( PEGG1SPHH  , 0xFFFEE69Bul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2MK    , 0xFFFEE6A0ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG2MKL   , 0xFFFEE6A0ul, __READ_WRITE, unsigned short );
__IOREG( PEGG2MKLL  , 0xFFFEE6A0ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2MKLH  , 0xFFFEE6A1ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2MKH   , 0xFFFEE6A2ul, __READ_WRITE, unsigned short );
__IOREG( PEGG2MKHL  , 0xFFFEE6A2ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2MKHH  , 0xFFFEE6A3ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2BA    , 0xFFFEE6A4ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG2BAL   , 0xFFFEE6A4ul, __READ_WRITE, unsigned short );
__IOREG( PEGG2BALL  , 0xFFFEE6A4ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2BALH  , 0xFFFEE6A5ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2BAH   , 0xFFFEE6A6ul, __READ_WRITE, unsigned short );
__IOREG( PEGG2BAHL  , 0xFFFEE6A6ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2BAHH  , 0xFFFEE6A7ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2SP    , 0xFFFEE6A8ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG2SPL   , 0xFFFEE6A8ul, __READ_WRITE, unsigned short );
__IOREG( PEGG2SPLL  , 0xFFFEE6A8ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2SPLH  , 0xFFFEE6A9ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2SPH   , 0xFFFEE6AAul, __READ_WRITE, unsigned short );
__IOREG( PEGG2SPHL  , 0xFFFEE6AAul, __READ_WRITE, unsigned char  );
__IOREG( PEGG2SPHH  , 0xFFFEE6ABul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3MK    , 0xFFFEE6B0ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG3MKL   , 0xFFFEE6B0ul, __READ_WRITE, unsigned short );
__IOREG( PEGG3MKLL  , 0xFFFEE6B0ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3MKLH  , 0xFFFEE6B1ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3MKH   , 0xFFFEE6B2ul, __READ_WRITE, unsigned short );
__IOREG( PEGG3MKHL  , 0xFFFEE6B2ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3MKHH  , 0xFFFEE6B3ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3BA    , 0xFFFEE6B4ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG3BAL   , 0xFFFEE6B4ul, __READ_WRITE, unsigned short );
__IOREG( PEGG3BALL  , 0xFFFEE6B4ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3BALH  , 0xFFFEE6B5ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3BAH   , 0xFFFEE6B6ul, __READ_WRITE, unsigned short );
__IOREG( PEGG3BAHL  , 0xFFFEE6B6ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3BAHH  , 0xFFFEE6B7ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3SP    , 0xFFFEE6B8ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG3SPL   , 0xFFFEE6B8ul, __READ_WRITE, unsigned short );
__IOREG( PEGG3SPLL  , 0xFFFEE6B8ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3SPLH  , 0xFFFEE6B9ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3SPH   , 0xFFFEE6BAul, __READ_WRITE, unsigned short );
__IOREG( PEGG3SPHL  , 0xFFFEE6BAul, __READ_WRITE, unsigned char  );
__IOREG( PEGG3SPHH  , 0xFFFEE6BBul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4MK    , 0xFFFEE6C0ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG4MKL   , 0xFFFEE6C0ul, __READ_WRITE, unsigned short );
__IOREG( PEGG4MKLL  , 0xFFFEE6C0ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4MKLH  , 0xFFFEE6C1ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4MKH   , 0xFFFEE6C2ul, __READ_WRITE, unsigned short );
__IOREG( PEGG4MKHL  , 0xFFFEE6C2ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4MKHH  , 0xFFFEE6C3ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4BA    , 0xFFFEE6C4ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG4BAL   , 0xFFFEE6C4ul, __READ_WRITE, unsigned short );
__IOREG( PEGG4BALL  , 0xFFFEE6C4ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4BALH  , 0xFFFEE6C5ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4BAH   , 0xFFFEE6C6ul, __READ_WRITE, unsigned short );
__IOREG( PEGG4BAHL  , 0xFFFEE6C6ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4BAHH  , 0xFFFEE6C7ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4SP    , 0xFFFEE6C8ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG4SPL   , 0xFFFEE6C8ul, __READ_WRITE, unsigned short );
__IOREG( PEGG4SPLL  , 0xFFFEE6C8ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4SPLH  , 0xFFFEE6C9ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4SPH   , 0xFFFEE6CAul, __READ_WRITE, unsigned short );
__IOREG( PEGG4SPHL  , 0xFFFEE6CAul, __READ_WRITE, unsigned char  );
__IOREG( PEGG4SPHH  , 0xFFFEE6CBul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5MK    , 0xFFFEE6D0ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG5MKL   , 0xFFFEE6D0ul, __READ_WRITE, unsigned short );
__IOREG( PEGG5MKLL  , 0xFFFEE6D0ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5MKLH  , 0xFFFEE6D1ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5MKH   , 0xFFFEE6D2ul, __READ_WRITE, unsigned short );
__IOREG( PEGG5MKHL  , 0xFFFEE6D2ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5MKHH  , 0xFFFEE6D3ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5BA    , 0xFFFEE6D4ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG5BAL   , 0xFFFEE6D4ul, __READ_WRITE, unsigned short );
__IOREG( PEGG5BALL  , 0xFFFEE6D4ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5BALH  , 0xFFFEE6D5ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5BAH   , 0xFFFEE6D6ul, __READ_WRITE, unsigned short );
__IOREG( PEGG5BAHL  , 0xFFFEE6D6ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5BAHH  , 0xFFFEE6D7ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5SP    , 0xFFFEE6D8ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG5SPL   , 0xFFFEE6D8ul, __READ_WRITE, unsigned short );
__IOREG( PEGG5SPLL  , 0xFFFEE6D8ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5SPLH  , 0xFFFEE6D9ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5SPH   , 0xFFFEE6DAul, __READ_WRITE, unsigned short );
__IOREG( PEGG5SPHL  , 0xFFFEE6DAul, __READ_WRITE, unsigned char  );
__IOREG( PEGG5SPHH  , 0xFFFEE6DBul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6MK    , 0xFFFEE6E0ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG6MKL   , 0xFFFEE6E0ul, __READ_WRITE, unsigned short );
__IOREG( PEGG6MKLL  , 0xFFFEE6E0ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6MKLH  , 0xFFFEE6E1ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6MKH   , 0xFFFEE6E2ul, __READ_WRITE, unsigned short );
__IOREG( PEGG6MKHL  , 0xFFFEE6E2ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6MKHH  , 0xFFFEE6E3ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6BA    , 0xFFFEE6E4ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG6BAL   , 0xFFFEE6E4ul, __READ_WRITE, unsigned short );
__IOREG( PEGG6BALL  , 0xFFFEE6E4ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6BALH  , 0xFFFEE6E5ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6BAH   , 0xFFFEE6E6ul, __READ_WRITE, unsigned short );
__IOREG( PEGG6BAHL  , 0xFFFEE6E6ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6BAHH  , 0xFFFEE6E7ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6SP    , 0xFFFEE6E8ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG6SPL   , 0xFFFEE6E8ul, __READ_WRITE, unsigned short );
__IOREG( PEGG6SPLL  , 0xFFFEE6E8ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6SPLH  , 0xFFFEE6E9ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6SPH   , 0xFFFEE6EAul, __READ_WRITE, unsigned short );
__IOREG( PEGG6SPHL  , 0xFFFEE6EAul, __READ_WRITE, unsigned char  );
__IOREG( PEGG6SPHH  , 0xFFFEE6EBul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7MK    , 0xFFFEE6F0ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG7MKL   , 0xFFFEE6F0ul, __READ_WRITE, unsigned short );
__IOREG( PEGG7MKLL  , 0xFFFEE6F0ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7MKLH  , 0xFFFEE6F1ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7MKH   , 0xFFFEE6F2ul, __READ_WRITE, unsigned short );
__IOREG( PEGG7MKHL  , 0xFFFEE6F2ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7MKHH  , 0xFFFEE6F3ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7BA    , 0xFFFEE6F4ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG7BAL   , 0xFFFEE6F4ul, __READ_WRITE, unsigned short );
__IOREG( PEGG7BALL  , 0xFFFEE6F4ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7BALH  , 0xFFFEE6F5ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7BAH   , 0xFFFEE6F6ul, __READ_WRITE, unsigned short );
__IOREG( PEGG7BAHL  , 0xFFFEE6F6ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7BAHH  , 0xFFFEE6F7ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7SP    , 0xFFFEE6F8ul, __READ_WRITE, unsigned long  );
__IOREG( PEGG7SPL   , 0xFFFEE6F8ul, __READ_WRITE, unsigned short );
__IOREG( PEGG7SPLL  , 0xFFFEE6F8ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7SPLH  , 0xFFFEE6F9ul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7SPH   , 0xFFFEE6FAul, __READ_WRITE, unsigned short );
__IOREG( PEGG7SPHL  , 0xFFFEE6FAul, __READ_WRITE, unsigned char  );
__IOREG( PEGG7SPHH  , 0xFFFEE6FBul, __READ_WRITE, unsigned char  );

__IOREG( UCFERRINT  , 0xFFC62000ul, __READ_WRITE, unsigned long );/* UCFERRINT*/
__IOREG( CFAPCTL    , 0xFFC62100ul, __READ_WRITE, unsigned long );/* CFAPCTL */
__IOREG( CFECCCTL_PE1 , 0xFFC62400ul, __READ_WRITE, unsigned long );
                                                              /* CFECCCTL_PE1 */

__IOREG( UCFSERSTCLR, 0xFFC62004ul, __READ_WRITE, unsigned long );
                                                                 /*UCFSERSTCLR*/
__IOREG( UCFSERSTR  , 0xFFC62020ul, __READ_WRITE, unsigned long );/*UCFSERSTR */
__IOREG( UCFDERSTCLR, 0xFFC62008ul, __READ_WRITE, unsigned long );
                                                                 /*UCFDERSTCLR*/
__IOREG( UCFDERSTR  , 0xFFC62030ul, __READ_WRITE, unsigned long );/*UCFDERSTR */
__IOREG( UCFDEDADR  , 0xFFC620C0ul, __READ_WRITE, unsigned long );/* UCFDEDADR*/
__IOREG( UCF1SEDADR , 0xFFC62040ul, __READ_WRITE, unsigned long );/*UCF1SEDADR*/

__IOREG( RSENT0    ,0xFFCDC000ul       ,__READ_WRITE     , T_RSENT0);/* RSENT0*/
__IOREG( RSENT1    ,0xFFCDC100ul       ,__READ_WRITE     , T_RSENT1);/* RSENT1*/
__IOREG( RSENT2    ,0xFFCDC200ul       ,__READ_WRITE     , T_RSENT2);/* RSENT2*/
__IOREG( RSENT3    ,0xFFCDC300ul       ,__READ_WRITE     , T_RSENT3);/* RSENT3*/
__IOREG( RSENT4    ,0xFFCDC400ul       ,__READ_WRITE     , T_RSENT4);/* RSENT4*/
__IOREG( RSENT5    ,0xFFCDC500ul       ,__READ_WRITE     , T_RSENT5);/* RSENT5*/
__IOREG( RSENT6    ,0xFFCDC600ul       ,__READ_WRITE     , T_RSENT6);/* RSENT6*/
__IOREG( RSENT7    ,0xFFCDC700ul       ,__READ_WRITE     , T_RSENT7);/* RSENT7*/
__IOREG( RSENT8    ,0xFFCDC800ul       ,__READ_WRITE     , T_RSENT8);/* RSENT8*/
__IOREG( RSENT9    ,0xFFCDC900ul       ,__READ_WRITE     , T_RSENT9);/* RSENT9*/

__IOREG( HSUS0     ,0xFFD88000ul       ,__READ_WRITE      , T_HSUS0 );/* HSUS0*/
__IOREG( HSUS1     ,0xFFCA8000ul       ,__READ_WRITE      , T_HSUS1 );/* HSUS1*/
__IOREG( HSUS2     ,0xFFD89000ul       ,__READ_WRITE      , T_HSUS2 );/* HSUS2*/
__IOREG( HSUS3     ,0xFFCA9000ul       ,__READ_WRITE      , T_HSUS3 );/* HSUS3*/

__IOREG( LRECCCTL_PE1           , 0xFFC65400ul, __READ_WRITE, unsigned long );
__IOREG( LRERRINT_PE1           , 0xFFC65404ul, __READ_WRITE, unsigned long );

__IOREG( ETNA0EMR0              , 0x100245B0ul, __READ_WRITE, unsigned long );
__IOREG( ETNA0EDMR0             , 0x10024400ul, __READ_WRITE, unsigned long );
__IOREG( ETNA0EMR1              , 0xFFC65404ul, __READ_WRITE, unsigned long );
__IOREG( ETNA0EDMR1             , 0x10025400ul, __READ_WRITE, unsigned long );
__IOREG( ETNA0ARSTR             , 0x10024800ul, __READ_WRITE, unsigned long );


/* ATOM registers */
__IOREG( ATOM0GLBCTRL   ,0xFFE0D040ul ,__READ_WRITE   , T_ATOM0 ); /*ATOM0 */
__IOREG( ATOM1GLBCTRL   ,0xFFE0D840ul ,__READ_WRITE   , T_ATOM0 ); /* ATOM1 */
__IOREG( ATOM2GLBCTRL   ,0xFFE0E040ul ,__READ_WRITE   , T_ATOM0 ); /* ATOM2 */
__IOREG( GTM0ATOM00CTRL ,0xFFE0D004ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM00*/
__IOREG( GTM0ATOM01CTRL ,0xFFE0D084ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM01*/
__IOREG( GTM0ATOM02CTRL ,0xFFE0D104ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM02*/
__IOREG( GTM0ATOM03CTRL ,0xFFE0D184ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM03*/
__IOREG( GTM0ATOM04CTRL ,0xFFE0D204ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM04*/
__IOREG( GTM0ATOM05CTRL ,0xFFE0D284ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM05*/
__IOREG( GTM0ATOM06CTRL ,0xFFE0D304ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM06*/
__IOREG( GTM0ATOM07CTRL ,0xFFE0D384ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM07*/
__IOREG( GTM0ATOM10CTRL ,0xFFE0D804ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM10*/
__IOREG( GTM0ATOM11CTRL ,0xFFE0D884ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM11*/
__IOREG( GTM0ATOM12CTRL ,0xFFE0D904ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM12*/
__IOREG( GTM0ATOM13CTRL ,0xFFE0D984ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM13*/
__IOREG( GTM0ATOM14CTRL ,0xFFE0DA04ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM14*/
__IOREG( GTM0ATOM15CTRL ,0xFFE0DA84ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM15*/
__IOREG( GTM0ATOM16CTRL ,0xFFE0DB04ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM16*/
__IOREG( GTM0ATOM17CTRL ,0xFFE0DB84ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM17*/
__IOREG( GTM0ATOM20CTRL ,0xFFE0E004ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM20*/
__IOREG( GTM0ATOM21CTRL ,0xFFE0E084ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM21*/
__IOREG( GTM0ATOM22CTRL ,0xFFE0E104ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM22*/
__IOREG( GTM0ATOM23CTRL ,0xFFE0E184ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM23*/
__IOREG( GTM0ATOM24CTRL ,0xFFE0E204ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM24*/
__IOREG( GTM0ATOM24CTRL ,0xFFE0E204ul ,__READ_WRITE   , T_ATOM0CH0 ); /*ATOM24*/


/*FACI Register*/

__IOREG( FCUFAREA            , 0xFFC59008ul, __READ_WRITE, unsigned char);
__IOREG( FACIFRTEINT        , 0xffa1009cUL, __READ_WRITE, unsigned long);



__IOREG( SWLRESS3           , 0xfff8170cUL   , __READ      , unsigned long);
__IOREG( SWLRESS4           , 0xfff8180cUL   , __READ      , unsigned long);
__IOREG( SWLRESS5           , 0xfff8190cUL   , __READ      , unsigned long);
__IOREG( SWLRESS6           , 0xfff81a0cUL   , __READ      , unsigned long);
__IOREG( SWLRESS7           , 0xfff81b0cUL   , __READ      , unsigned long);
__IOREG( SWLRESS8           , 0xfff81c0cUL   , __READ      , unsigned long);
__IOREG( SWLRESS10          , 0xfff81e0cUL   , __READ      , unsigned long);
__IOREG( SWLRESS11          , 0xfff81f0cUL   , __READ      , unsigned long);
__IOREG( SWLRESS12          , 0xfff8200cUL   , __READ      , unsigned long);

__IOREG( CLMATEST           , 0xFFF83000ul   ,__READ_WRITE , unsigned long);
                                                                 /* CLMATEST  */
__IOREG( CLMATESTS          , 0xFFF83004ul   ,__READ       , unsigned long);
                                                                /* CLMATESTS  */
__IOREG( CLMA5CTL1           ,0xFFF86804ul   ,__READ_WRITE , unsigned char);
                                                                /* CLMA5CTL1  */
/* ECC registers for CSIH */
__IOREG(ECCCSIH0            , 0xFFC70000, __READ_WRITE      , T_ECCCSIH);              /* ECCCSIH0 */
__IOREG(ECCCSIH1            , 0xFFC78000, __READ_WRITE      , T_ECCCSIH);              /* ECCCSIH1 */
__IOREG(ECCCSIH2            , 0xFFC70100, __READ_WRITE      , T_ECCCSIH);              /* ECCCSIH2 */
__IOREG(ECCCSIH3            , 0xFFC78100, __READ_WRITE      , T_ECCCSIH);              /* ECCCSIH3 */


#define PEG         (*(volatile struct st_peg         *)0xFFFEE680)
                                                                    /* PEG */

#define ETNA0      (*(volatile struct EthernetRegStruct *) 0x10024000)
                                                               /* ETNA Port 0 */
#define ETNA1      (*(volatile struct EthernetRegStruct *) 0x10025000)
                                                               /* ETNA Port 1 */
#define ETNACOM    (*(volatile struct EthernetCommonRegStruct *) 0x10024800)
                                                       /* ETNA Common = ARSTR */
#define ETNATSU    (*(volatile struct EthernetTSUReg *) 0x10024900)
                                                                  /* ETNA TSU */

#define FACIREG0         (*((volatile FlsFACIReg         *)0xffa10000UL))
                                                               /* FACI Unit 0 */
#define FACIREG1         (*((volatile FlsFACIReg         *)0xffa18000UL))
                                                               /* FACI Unit 1 */
#define ECCREG0          (*((volatile FlsECCReg          *)0xffc5b000UL))
                                                                 /* ECC Unit 0*/
#define ECCREG1          (*((volatile FlsECCReg          *)0xffc5c000UL))
                                                                 /* ECC Unit 1*/

#define FLXA0FRITCLL FLXA0.FRITC.UINT8[LL]
#define FLXA0FRITSLL FLXA0.FRITS.UINT8[LL]
#define FLXA0FROTCLL FLXA0.FROTC.UINT8[LL]
#define FLXA0FROTSLL FLXA0.FROTS.UINT8[LL]

#define FLXA1FRITCLL FLXA1.FRITC.UINT8[LL]
#define FLXA1FRITSLL FLXA1.FRITS.UINT8[LL]
#define FLXA1FROTCLL FLXA1.FROTC.UINT8[LL]
#define FLXA1FROTSLL FLXA1.FROTS.UINT8[LL]

#define RSENT0MDCLL RSENT0.MDC.UINT8[LL]
#define RSENT1MDCLL RSENT1.MDC.UINT8[LL]
#define RSENT2MDCLL RSENT2.MDC.UINT8[LL]
#define RSENT3MDCLL RSENT3.MDC.UINT8[LL]
#define RSENT4MDCLL RSENT4.MDC.UINT8[LL]
#define RSENT8MDCLL RSENT8.MDC.UINT8[LL]
#define RSENT7MSTLL RSENT7.MST.UINT8[LL]
#define RSENT8MSTLL RSENT8.MST.UINT8[LL]
#define RSENT9MDCLL RSENT9.MDC.UINT8[LL]
#define RSENT9MSTLL RSENT9.MST.UINT8[LL]

#define HSUS0EN HSUS0.EN
#define HSUS1EN HSUS1.EN
#define HSUS2EN HSUS2.EN
#define HSUS3EN HSUS3.EN

#define CSIH0TXE CSIH0.CTL0.BIT.TXE
#define CSIH0RXE CSIH0.CTL0.BIT.RXE
#define CSIH1TXE CSIH1.CTL0.BIT.TXE
#define CSIH1RXE CSIH1.CTL0.BIT.RXE
#define CSIH2TXE CSIH2.CTL0.BIT.TXE
#define CSIH2RXE CSIH2.CTL0.BIT.RXE
#define CSIH3TXE CSIH3.CTL0.BIT.TXE
#define CSIH3RXE CSIH3.CTL0.BIT.RXE

#define RLN30LCUC RLN30.LCUC
#define RLN30LMST RLN30.LMST
#define RLN31LCUC RLN31.LCUC
#define RLN31LMST RLN31.LMST
#define RLN32LCUC RLN32.LCUC
#define RLN32LMST RLN32.LMST
#define RLN33LCUC RLN33.LCUC
#define RLN33LMST RLN33.LMST

#define RSENT0MSTLL RSENT0.MST.UINT8[LL]
#define RSENT1MSTLL RSENT1.MST.UINT8[LL]
#define RSENT2MSTLL RSENT2.MST.UINT8[LL]
#define RSENT3MSTLL RSENT3.MST.UINT8[LL]
#define RSENT4MSTLL RSENT4.MST.UINT8[LL]
#define RSENT5MDCLL RSENT5.MDC.UINT8[LL]
#define RSENT5MSTLL RSENT5.MST.UINT8[LL]
#define RSENT6MDCLL RSENT6.MDC.UINT8[LL]
#define RSENT6MSTLL RSENT6.MST.UINT8[LL]
#define RSENT7MDCLL RSENT7.MDC.UINT8[LL]

#define PIC2CTRGPREMUX0 PIC2.CTRGPREMUX0
#define PIC2CTRGPREMUX1 PIC2.CTRGPREMUX1
#define PIC2CTRGMUX0 PIC2.CTRGMUX0
#define PIC2CTRGMUX1 PIC2.CTRGMUX1
#define PIC2CEDGSEL0 PIC2.CEDGSEL0
#define PIC2CEDGSEL1 PIC2.CEDGSEL1
#define PIC2CENP2TIM0 RH850_PIC2.ulPIC2CENP2TIMn[0]
#define PIC2CENP2TIM1 RH850_PIC2.ulPIC2CENP2TIMn[1]
#define PIC2CENHIZDTM RH850_PIC2.ulPIC2CENHIZDTM

#define ADCF0VCR0 ADCF0.VCR0
#define ADCF0VCR1 ADCF0.VCR1
#define ADCF0VCR2 ADCF0.VCR2
#define ADCF0VCR3 ADCF0.VCR3
#define ADCF0VCR4 ADCF0.VCR4
#define ADCF0VCR5 ADCF0.VCR5
#define ADCF0VCR6 ADCF0.VCR6
#define ADCF0VCR7 ADCF0.VCR7
#define ADCF0VCR8 ADCF0.VCR8
#define ADCF0VCR9 ADCF0.VCR9
#define ADCF0VCR10 ADCF0.VCR10
#define ADCF0VCR11 ADCF0.VCR11
#define ADCF0VCR12 ADCF0.VCR12
#define ADCF0VCR13 ADCF0.VCR13
#define ADCF0VCR14 ADCF0.VCR14
#define ADCF0VCR15 ADCF0.VCR15
#define ADCF0VCR16 ADCF0.VCR16
#define ADCF0VCR17 ADCF0.VCR17
#define ADCF0VCR18 ADCF0.VCR18
#define ADCF0VCR19 ADCF0.VCR19
#define ADCF0VCR20 ADCF0.VCR20
#define ADCF0VCR21 ADCF0.VCR21
#define ADCF0VCR22 ADCF0.VCR22
#define ADCF0VCR23 ADCF0.VCR23
#define ADCF0VCR24 ADCF0.VCR24
#define ADCF0VCR25 ADCF0.VCR25
#define ADCF0VCR26 ADCF0.VCR26
#define ADCF0VCR27 ADCF0.VCR27
#define ADCF0DR00 ADCF0.DR00
#define ADCF0DR02 ADCF0.DR02
#define ADCF0DR04 ADCF0.DR04
#define ADCF0DR06 ADCF0.DR06
#define ADCF0DR08 ADCF0.DR08
#define ADCF0DR10 ADCF0.DR10
#define ADCF0DR12 ADCF0.DR12
#define ADCF0DR14 ADCF0.DR14
#define ADCF0DR16 ADCF0.DR16
#define ADCF0DR18 ADCF0.DR18
#define ADCF0DR20 ADCF0.DR20
#define ADCF0DR22 ADCF0.DR22
#define ADCF0DR24 ADCF0.DR24
#define ADCF0DR26 ADCF0.DR26
#define ADCF0DIR0 ADCF0.DIR0
#define ADCF0DIR1 ADCF0.DIR1
#define ADCF0DIR2 ADCF0.DIR2
#define ADCF0DIR3 ADCF0.DIR3
#define ADCF0DIR4 ADCF0.DIR4
#define ADCF0DIR5 ADCF0.DIR5
#define ADCF0DIR6 ADCF0.DIR6
#define ADCF0DIR7 ADCF0.DIR7
#define ADCF0DIR8 ADCF0.DIR8
#define ADCF0DIR9 ADCF0.DIR9
#define ADCF0DIR10 ADCF0.DIR10
#define ADCF0DIR11 ADCF0.DIR11
#define ADCF0DIR12 ADCF0.DIR12
#define ADCF0DIR13 ADCF0.DIR13
#define ADCF0DIR14 ADCF0.DIR14
#define ADCF0DIR15 ADCF0.DIR15
#define ADCF0DIR16 ADCF0.DIR16
#define ADCF0DIR17 ADCF0.DIR17
#define ADCF0DIR18 ADCF0.DIR18
#define ADCF0DIR19 ADCF0.DIR19
#define ADCF0DIR20 ADCF0.DIR20
#define ADCF0DIR21 ADCF0.DIR21
#define ADCF0DIR22 ADCF0.DIR22
#define ADCF0DIR23 ADCF0.DIR23
#define ADCF0DIR24 ADCF0.DIR24
#define ADCF0DIR25 ADCF0.DIR25
#define ADCF0DIR26 ADCF0.DIR26
#define ADCF0DIR27 ADCF0.DIR27
#define ADCF0ADSYNSTCR ADCF0.ADSYNSTCR
#define ADCF0ADTSYNSTCR ADCF0.ADTSYNSTCR
#define ADCF0ADHALTR ADCF0.ADHALTR
#define ADCF0ADCR1 ADCF0.ADCR1
#define ADCF0MPXCURCR ADCF0.MPXCURCR
#define ADCF0MPXCURR ADCF0.MPXCURR
#define ADCF0MPXOWR ADCF0.MPXOWR
#define ADCF0ADCR2 ADCF0.ADCR2
#define ADCF0ADENDP0 ADCF0.ADENDP0
#define ADCF0SFTCR ADCF0.SFTCR
#define ADCF0TDCR ADCF0.TDCR
#define ADCF0ULLMTBR0 ADCF0.ULLMTBR0
#define ADCF0ULLMTBR1 ADCF0.ULLMTBR1
#define ADCF0ULLMTBR2 ADCF0.ULLMTBR2
#define ADCF0ECR ADCF0.ECR
#define ADCF0ULER ADCF0.ULER
#define ADCF0OWER ADCF0.OWER
#define ADCF0PER ADCF0.PER
#define ADCF0IDER ADCF0.IDER
#define ADCF0SGSTCR0 ADCF0.SGSTCR0
#define ADCF0SGCR0 ADCF0.SGCR0
#define ADCF0SGVCSP0 ADCF0.SGVCSP0
#define ADCF0SGVCEP0 ADCF0.SGVCEP0
#define ADCF0SGMCYCR0 ADCF0.SGMCYCR0
#define ADCF0SGSR0 ADCF0.SGSR0
#define ADCF0ULLMSR0 ADCF0.ULLMSR0
#define ADCF0SGSTCR1 ADCF0.SGSTCR1
#define ADCF0SGCR1 ADCF0.SGCR1
#define ADCF0SGVCSP1 ADCF0.SGVCSP1
#define ADCF0SGVCEP1 ADCF0.SGVCEP1
#define ADCF0SGMCYCR1 ADCF0.SGMCYCR1
#define ADCF0SGSR1 ADCF0.SGSR1
#define ADCF0ULLMSR1 ADCF0.ULLMSR1
#define ADCF0SGSTCR2 ADCF0.SGSTCR2
#define ADCF0SGCR2 ADCF0.SGCR2
#define ADCF0SGVCSP2 ADCF0.SGVCSP2
#define ADCF0SGVCEP2 ADCF0.SGVCEP2
#define ADCF0SGMCYCR2 ADCF0.SGMCYCR2
#define ADCF0SGSR2 ADCF0.SGSR2
#define ADCF0ULLMSR2 ADCF0.ULLMSR2
#define ADCF0SGSTCR3 ADCF0.SGSTCR3
#define ADCF0ADTSTCR3 ADCF0.ADTSTCR3
#define ADCF0ADTENDCR3 ADCF0.ADTENDCR3
#define ADCF0SGCR3 ADCF0.SGCR3
#define ADCF0SGVCSP3 ADCF0.SGVCSP3
#define ADCF0SGVCEP3 ADCF0.SGVCEP3
#define ADCF0SGMCYCR3 ADCF0.SGMCYCR3
#define ADCF0SGSR3 ADCF0.SGSR3
#define ADCF0ADTIPR3 ADCF0.ADTIPR3
#define ADCF0ADTPRR3 ADCF0.ADTPRR3
#define ADCF0ULLMSR3 ADCF0.ULLMSR3
#define ADCF0SGSTCR4 ADCF0.SGSTCR4
#define ADCF0ADTSTCR4 ADCF0.ADTSTCR4
#define ADCF0ADTENDCR4 ADCF0.ADTENDCR4
#define ADCF0SGCR4 ADCF0.SGCR4
#define ADCF0SGVCSP4 ADCF0.SGVCSP4
#define ADCF0SGVCEP4 ADCF0.SGVCEP4
#define ADCF0SGMCYCR4 ADCF0.SGMCYCR4
#define ADCF0SGSR4 ADCF0.SGSR4
#define ADCF0ADTIPR4 ADCF0.ADTIPR4
#define ADCF0ADTPRR4 ADCF0.ADTPRR4
#define ADCF0ULLMSR4 ADCF0.ULLMSR4
#define ADCF1VCR0 ADCF1.VCR0
#define ADCF1VCR1 ADCF1.VCR1
#define ADCF1VCR2 ADCF1.VCR2
#define ADCF1VCR3 ADCF1.VCR3
#define ADCF1VCR4 ADCF1.VCR4
#define ADCF1VCR5 ADCF1.VCR5
#define ADCF1VCR6 ADCF1.VCR6
#define ADCF1VCR7 ADCF1.VCR7
#define ADCF1VCR8 ADCF1.VCR8
#define ADCF1VCR9 ADCF1.VCR9
#define ADCF1VCR10 ADCF1.VCR10
#define ADCF1VCR11 ADCF1.VCR11
#define ADCF1VCR12 ADCF1.VCR12
#define ADCF1VCR13 ADCF1.VCR13
#define ADCF1VCR14 ADCF1.VCR14
#define ADCF1VCR15 ADCF1.VCR15
#define ADCF1VCR16 ADCF1.VCR16
#define ADCF1VCR17 ADCF1.VCR17
#define ADCF1VCR18 ADCF1.VCR18
#define ADCF1VCR19 ADCF1.VCR19
#define ADCF1VCR20 ADCF1.VCR20
#define ADCF1VCR21 ADCF1.VCR21
#define ADCF1VCR22 ADCF1.VCR22
#define ADCF1VCR23 ADCF1.VCR23
#define ADCF1VCR24 ADCF1.VCR24
#define ADCF1VCR25 ADCF1.VCR25
#define ADCF1VCR26 ADCF1.VCR26
#define ADCF1VCR27 ADCF1.VCR27
#define ADCF1DR00 ADCF1.DR00
#define ADCF1DR02 ADCF1.DR02
#define ADCF1DR04 ADCF1.DR04
#define ADCF1DR06 ADCF1.DR06
#define ADCF1DR08 ADCF1.DR08
#define ADCF1DR10 ADCF1.DR10
#define ADCF1DR12 ADCF1.DR12
#define ADCF1DR14 ADCF1.DR14
#define ADCF1DR16 ADCF1.DR16
#define ADCF1DR18 ADCF1.DR18
#define ADCF1DR20 ADCF1.DR20
#define ADCF1DR22 ADCF1.DR22
#define ADCF1DR24 ADCF1.DR24
#define ADCF1DR26 ADCF1.DR26
#define ADCF1DIR0 ADCF1.DIR0
#define ADCF1DIR1 ADCF1.DIR1
#define ADCF1DIR2 ADCF1.DIR2
#define ADCF1DIR3 ADCF1.DIR3
#define ADCF1DIR4 ADCF1.DIR4
#define ADCF1DIR5 ADCF1.DIR5
#define ADCF1DIR6 ADCF1.DIR6
#define ADCF1DIR7 ADCF1.DIR7
#define ADCF1DIR8 ADCF1.DIR8
#define ADCF1DIR9 ADCF1.DIR9
#define ADCF1DIR10 ADCF1.DIR10
#define ADCF1DIR11 ADCF1.DIR11
#define ADCF1DIR12 ADCF1.DIR12
#define ADCF1DIR13 ADCF1.DIR13
#define ADCF1DIR14 ADCF1.DIR14
#define ADCF1DIR15 ADCF1.DIR15
#define ADCF1DIR16 ADCF1.DIR16
#define ADCF1DIR17 ADCF1.DIR17
#define ADCF1DIR18 ADCF1.DIR18
#define ADCF1DIR19 ADCF1.DIR19
#define ADCF1DIR20 ADCF1.DIR20
#define ADCF1DIR21 ADCF1.DIR21
#define ADCF1DIR22 ADCF1.DIR22
#define ADCF1DIR23 ADCF1.DIR23
#define ADCF1DIR24 ADCF1.DIR24
#define ADCF1DIR25 ADCF1.DIR25
#define ADCF1DIR26 ADCF1.DIR26
#define ADCF1DIR27 ADCF1.DIR27
#define ADCF1ADHALTR ADCF1.ADHALTR
#define ADCF1ADCR1 ADCF1.ADCR1
#define ADCF1MPXCURCR ADCF1.MPXCURCR
#define ADCF1MPXCURR ADCF1.MPXCURR
#define ADCF1MPXOWR ADCF1.MPXOWR
#define ADCF1ADCR2 ADCF1.ADCR2
#define ADCF1ADENDP0 ADCF1.ADENDP0
#define ADCF1SFTCR ADCF1.SFTCR
#define ADCF1TDCR ADCF1.TDCR
#define ADCF1ULLMTBR0 ADCF1.ULLMTBR0
#define ADCF1ULLMTBR1 ADCF1.ULLMTBR1
#define ADCF1ULLMTBR2 ADCF1.ULLMTBR2
#define ADCF1ECR ADCF1.ECR
#define ADCF1ULER ADCF1.ULER
#define ADCF1OWER ADCF1.OWER
#define ADCF1PER ADCF1.PER
#define ADCF1IDER ADCF1.IDER
#define ADCF1SGSTCR0 ADCF1.SGSTCR0
#define ADCF1SGCR0 ADCF1.SGCR0
#define ADCF1SGVCSP0 ADCF1.SGVCSP0
#define ADCF1SGVCEP0 ADCF1.SGVCEP0
#define ADCF1SGMCYCR0 ADCF1.SGMCYCR0
#define ADCF1SGSR0 ADCF1.SGSR0
#define ADCF1ULLMSR0 ADCF1.ULLMSR0
#define ADCF1SGSTCR1 ADCF1.SGSTCR1
#define ADCF1SGCR1 ADCF1.SGCR1
#define ADCF1SGVCSP1 ADCF1.SGVCSP1
#define ADCF1SGVCEP1 ADCF1.SGVCEP1
#define ADCF1SGMCYCR1 ADCF1.SGMCYCR1
#define ADCF1SGSR1 ADCF1.SGSR1
#define ADCF1ULLMSR1 ADCF1.ULLMSR1
#define ADCF1SGSTCR2 ADCF1.SGSTCR2
#define ADCF1SGCR2 ADCF1.SGCR2
#define ADCF1SGVCSP2 ADCF1.SGVCSP2
#define ADCF1SGVCEP2 ADCF1.SGVCEP2
#define ADCF1SGMCYCR2 ADCF1.SGMCYCR2
#define ADCF1SGSR2 ADCF1.SGSR2
#define ADCF1ULLMSR2 ADCF1.ULLMSR2
#define ADCF1SGSTCR3 ADCF1.SGSTCR3
#define ADCF1ADTSTCR3 ADCF1.ADTSTCR3
#define ADCF1ADTENDCR3 ADCF1.ADTENDCR3
#define ADCF1SGCR3 ADCF1.SGCR3
#define ADCF1SGVCSP3 ADCF1.SGVCSP3
#define ADCF1SGVCEP3 ADCF1.SGVCEP3
#define ADCF1SGMCYCR3 ADCF1.SGMCYCR3
#define ADCF1SGSR3 ADCF1.SGSR3
#define ADCF1ADTIPR3 ADCF1.ADTIPR3
#define ADCF1ADTPRR3 ADCF1.ADTPRR3
#define ADCF1ULLMSR3 ADCF1.ULLMSR3
#define ADCF1SGSTCR4 ADCF1.SGSTCR4
#define ADCF1ADTSTCR4 ADCF1.ADTSTCR4
#define ADCF1ADTENDCR4 ADCF1.ADTENDCR4
#define ADCF1SGCR4 ADCF1.SGCR4
#define ADCF1SGVCSP4 ADCF1.SGVCSP4
#define ADCF1SGVCEP4 ADCF1.SGVCEP4
#define ADCF1SGMCYCR4 ADCF1.SGMCYCR4
#define ADCF1SGSR4 ADCF1.SGSR4
#define ADCF1ADTIPR4 ADCF1.ADTIPR4
#define ADCF1ADTPRR4 ADCF1.ADTPRR4
#define ADCF1ULLMSR4 ADCF1.ULLMSR4


#define FLMDCNT FLMD.CNT
#define FLMDPCMD FLMD.PCMD

#define FLXA0FRITCLL FLXA0.FRITC.UINT8[LL]
#define FLXA0FRITSLL FLXA0.FRITS.UINT8[LL]
#define FLXA0FROTCLL FLXA0.FROTC.UINT8[LL]
#define FLXA0FROTSLL FLXA0.FROTS.UINT8[LL]
#define FLXA1FRITCLL FLXA1.FRITC.UINT8[LL]

#define GTM0GTMREV GTM0.GTMREV
#define GTM0GTMRST GTM0.GTMRST
#define GTM0GTMCTRL GTM0.GTMCTRL
#define GTM0GTMAEIADDRXPT GTM0.GTMAEIADDRXPT
#define GTM0GTMIRQNOTIFY GTM0.GTMIRQNOTIFY
#define GTM0GTMIRQEN GTM0.GTMIRQEN
#define GTM0GTMIRQFORCINT GTM0.GTMIRQFORCINT
#define GTM0GTMIRQMODE GTM0.GTMIRQMODE
#define GTM0GTMEIRQEN GTM0.GTMEIRQEN
#define GTM0GTMHWCONF GTM0.GTMHWCONF
#define GTM0GTMBRIDGEMODE GTM0.GTMBRIDGEMODE
#define GTM0GTMBRIDGEPTR1 GTM0.GTMBRIDGEPTR1
#define GTM0GTMBRIDGEPTR2 GTM0.GTMBRIDGEPTR2
#define GTM0GTMTIM0AUXINSRC GTM0.GTMTIM0AUXINSRC
#define GTM0GTMTIM1AUXINSRC GTM0.GTMTIM1AUXINSRC
#define GTM0GTMEXTCAPEN0 GTM0.GTMEXTCAPEN0
#define GTM0GTMEXTCAPEN1 GTM0.GTMEXTCAPEN1
#define GTM0GTMEXTCAPEN2 GTM0.GTMEXTCAPEN2
#define GTM0GTMEXTCAPEN3 GTM0.GTMEXTCAPEN3
#define GTM0GTMEXTCAPEN4 GTM0.GTMEXTCAPEN4
#define GTM0GTMEXTCAPEN5 GTM0.GTMEXTCAPEN5
#define GTM0GTMEXTCAPEN6 GTM0.GTMEXTCAPEN6
#define GTM0GTMEXTCAPEN7 GTM0.GTMEXTCAPEN7
#define GTM0GTMATOM0OUT GTM0.GTMATOM0OUT
#define GTM0GTMATOM2OUT GTM0.GTMATOM2OUT
#define GTM0TBUCHEN GTM0.TBUCHEN
#define GTM0TBU0CTRL GTM0.TBU0CTRL
#define GTM0TBU0BASE GTM0.TBU0BASE
#define GTM0TBU1CTRL GTM0.TBU1CTRL
#define GTM0TBU1BASE GTM0.TBU1BASE
#define GTM0MONSTATUS GTM0.MONSTATUS
#define GTM0MONACTIVITYMCS0 GTM0.MONACTIVITYMCS0
#define GTM0MONACTIVITYMCS1 GTM0.MONACTIVITYMCS1
#define GTM0CMPEN GTM0.CMPEN
#define GTM0CMPIRQNOTIFY GTM0.CMPIRQNOTIFY
#define GTM0CMPIRQEN GTM0.CMPIRQEN
#define GTM0CMPIRQFORCINT GTM0.CMPIRQFORCINT
#define GTM0CMPIRQMODE GTM0.CMPIRQMODE
#define GTM0CMPEIRQEN GTM0.CMPEIRQEN
#define GTM0ARUACCESS GTM0.ARUACCESS
#define GTM0ARUDATAH GTM0.ARUDATAH
#define GTM0ARUDATAL GTM0.ARUDATAL
#define GTM0ARUDBGACCESS0 GTM0.ARUDBGACCESS0
#define GTM0ARUDBGDATA0H GTM0.ARUDBGDATA0H
#define GTM0ARUDBGDATA0L GTM0.ARUDBGDATA0L
#define GTM0ARUDBGACCESS1 GTM0.ARUDBGACCESS1
#define GTM0ARUDBGDATA1H GTM0.ARUDBGDATA1H
#define GTM0ARUDBGDATA1L GTM0.ARUDBGDATA1L
#define GTM0ARUIRQNOTIFY GTM0.ARUIRQNOTIFY
#define GTM0ARUIRQEN GTM0.ARUIRQEN
#define GTM0ARUIRQFORCINT GTM0.ARUIRQFORCINT
#define GTM0ARUIRQMODE GTM0.ARUIRQMODE
#define GTM0ARUCADDREND GTM0.ARUCADDREND
#define GTM0CMUCLKEN GTM0.CMUCLKEN
#define GTM0CMUGCLKNUM GTM0.CMUGCLKNUM
#define GTM0CMUGCLKDEN GTM0.CMUGCLKDEN
#define GTM0CMUCLK0CTRL GTM0.CMUCLK0CTRL
#define GTM0CMUCLK1CTRL GTM0.CMUCLK1CTRL
#define GTM0CMUCLK2CTRL GTM0.CMUCLK2CTRL
#define GTM0CMUCLK3CTRL GTM0.CMUCLK3CTRL
#define GTM0CMUCLK4CTRL GTM0.CMUCLK4CTRL
#define GTM0CMUCLK5CTRL GTM0.CMUCLK5CTRL
#define GTM0CMUCLK6CTRL GTM0.CMUCLK6CTRL
#define GTM0CMUCLK7CTRL GTM0.CMUCLK7CTRL
#define GTM0CMUGLBCTRL GTM0.CMUGLBCTRL
#define GTM0ICMIRQG0 GTM0.ICMIRQG0
#define GTM0ICMIRQG2 GTM0.ICMIRQG2
#define GTM0ICMIRQG9 GTM0.ICMIRQG9
#define GTM0ICMIRQGMEI GTM0.ICMIRQGMEI
#define GTM0ICMIRQGCEI1 GTM0.ICMIRQGCEI1
#define GTM0ICMIRQGMCS0CI GTM0.ICMIRQGMCS0CI
#define GTM0ICMIRQGMCS1CI GTM0.ICMIRQGMCS1CI
#define GTM0ICMIRQGMCS0CEI GTM0.ICMIRQGMCS0CEI
#define GTM0ICMIRQGMCS1CEI GTM0.ICMIRQGMCS1CEI
#define GTM0MCFGCTRL GTM0.MCFGCTRL
#define GTM0TIM00GPR0 GTM0.TIM00GPR0
#define GTM0TIM00GPR1 GTM0.TIM00GPR1
#define GTM0TIM00CNT GTM0.TIM00CNT
#define GTM0TIM00ECNT GTM0.TIM00ECNT
#define GTM0TIM00CNTS GTM0.TIM00CNTS
#define GTM0TIM00TDUC GTM0.TIM00TDUC
#define GTM0TIM00TDUV GTM0.TIM00TDUV
#define GTM0TIM00FLTRE GTM0.TIM00FLTRE
#define GTM0TIM00FLTFE GTM0.TIM00FLTFE
#define GTM0TIM00CTRL GTM0.TIM00CTRL
#define GTM0TIM00ECTRL GTM0.TIM00ECTRL
#define GTM0TIM00IRQNOTIFY GTM0.TIM00IRQNOTIFY
#define GTM0TIM00IRQEN GTM0.TIM00IRQEN
#define GTM0TIM00IRQFORCINT GTM0.TIM00IRQFORCINT
#define GTM0TIM00IRQMODE GTM0.TIM00IRQMODE
#define GTM0TIM00EIRQEN GTM0.TIM00EIRQEN
#define GTM0TIM0INPVAL GTM0.TIM0INPVAL
#define GTM0TIM0INSRC GTM0.TIM0INSRC
#define GTM0TIM0RST GTM0.TIM0RST
#define GTM0TIM01GPR0 GTM0.TIM01GPR0
#define GTM0TIM01GPR1 GTM0.TIM01GPR1
#define GTM0TIM01CNT GTM0.TIM01CNT
#define GTM0TIM01ECNT GTM0.TIM01ECNT
#define GTM0TIM01CNTS GTM0.TIM01CNTS
#define GTM0TIM01TDUC GTM0.TIM01TDUC
#define GTM0TIM01TDUV GTM0.TIM01TDUV
#define GTM0TIM01FLTRE GTM0.TIM01FLTRE
#define GTM0TIM01FLTFE GTM0.TIM01FLTFE
#define GTM0TIM01CTRL GTM0.TIM01CTRL
#define GTM0TIM01ECTRL GTM0.TIM01ECTRL
#define GTM0TIM01IRQNOTIFY GTM0.TIM01IRQNOTIFY
#define GTM0TIM01IRQEN GTM0.TIM01IRQEN
#define GTM0TIM01IRQFORCINT GTM0.TIM01IRQFORCINT
#define GTM0TIM01IRQMODE GTM0.TIM01IRQMODE
#define GTM0TIM01EIRQEN GTM0.TIM01EIRQEN
#define GTM0TIM02GPR0 GTM0.TIM02GPR0
#define GTM0TIM02GPR1 GTM0.TIM02GPR1
#define GTM0TIM02CNT GTM0.TIM02CNT
#define GTM0TIM02ECNT GTM0.TIM02ECNT
#define GTM0TIM02CNTS GTM0.TIM02CNTS
#define GTM0TIM02TDUC GTM0.TIM02TDUC
#define GTM0TIM02TDUV GTM0.TIM02TDUV
#define GTM0TIM02FLTRE GTM0.TIM02FLTRE
#define GTM0TIM02FLTFE GTM0.TIM02FLTFE
#define GTM0TIM02CTRL GTM0.TIM02CTRL
#define GTM0TIM02ECTRL GTM0.TIM02ECTRL
#define GTM0TIM02IRQNOTIFY GTM0.TIM02IRQNOTIFY
#define GTM0TIM02IRQEN GTM0.TIM02IRQEN
#define GTM0TIM02IRQFORCINT GTM0.TIM02IRQFORCINT
#define GTM0TIM02IRQMODE GTM0.TIM02IRQMODE
#define GTM0TIM02EIRQEN GTM0.TIM02EIRQEN
#define GTM0TIM03GPR0 GTM0.TIM03GPR0
#define GTM0TIM03GPR1 GTM0.TIM03GPR1
#define GTM0TIM03CNT GTM0.TIM03CNT
#define GTM0TIM03ECNT GTM0.TIM03ECNT
#define GTM0TIM03CNTS GTM0.TIM03CNTS
#define GTM0TIM03TDUC GTM0.TIM03TDUC
#define GTM0TIM03TDUV GTM0.TIM03TDUV
#define GTM0TIM03FLTRE GTM0.TIM03FLTRE
#define GTM0TIM03FLTFE GTM0.TIM03FLTFE
#define GTM0TIM03CTRL GTM0.TIM03CTRL
#define GTM0TIM03ECTRL GTM0.TIM03ECTRL
#define GTM0TIM03IRQNOTIFY GTM0.TIM03IRQNOTIFY
#define GTM0TIM03IRQEN GTM0.TIM03IRQEN
#define GTM0TIM03IRQFORCINT GTM0.TIM03IRQFORCINT
#define GTM0TIM03IRQMODE GTM0.TIM03IRQMODE
#define GTM0TIM03EIRQEN GTM0.TIM03EIRQEN
#define GTM0TIM04GPR0 GTM0.TIM04GPR0
#define GTM0TIM04GPR1 GTM0.TIM04GPR1
#define GTM0TIM04CNT GTM0.TIM04CNT
#define GTM0TIM04ECNT GTM0.TIM04ECNT
#define GTM0TIM04CNTS GTM0.TIM04CNTS
#define GTM0TIM04TDUC GTM0.TIM04TDUC
#define GTM0TIM04TDUV GTM0.TIM04TDUV
#define GTM0TIM04FLTRE GTM0.TIM04FLTRE
#define GTM0TIM04FLTFE GTM0.TIM04FLTFE
#define GTM0TIM04CTRL GTM0.TIM04CTRL
#define GTM0TIM04ECTRL GTM0.TIM04ECTRL
#define GTM0TIM04IRQNOTIFY GTM0.TIM04IRQNOTIFY
#define GTM0TIM04IRQEN GTM0.TIM04IRQEN
#define GTM0TIM04IRQFORCINT GTM0.TIM04IRQFORCINT
#define GTM0TIM04IRQMODE GTM0.TIM04IRQMODE
#define GTM0TIM04EIRQEN GTM0.TIM04EIRQEN
#define GTM0TIM05GPR0 GTM0.TIM05GPR0
#define GTM0TIM05GPR1 GTM0.TIM05GPR1
#define GTM0TIM05CNT GTM0.TIM05CNT
#define GTM0TIM05ECNT GTM0.TIM05ECNT
#define GTM0TIM05CNTS GTM0.TIM05CNTS
#define GTM0TIM05TDUC GTM0.TIM05TDUC
#define GTM0TIM05TDUV GTM0.TIM05TDUV
#define GTM0TIM05FLTRE GTM0.TIM05FLTRE
#define GTM0TIM05FLTFE GTM0.TIM05FLTFE
#define GTM0TIM05CTRL GTM0.TIM05CTRL
#define GTM0TIM05ECTRL GTM0.TIM05ECTRL
#define GTM0TIM05IRQNOTIFY GTM0.TIM05IRQNOTIFY
#define GTM0TIM05IRQEN GTM0.TIM05IRQEN
#define GTM0TIM05IRQFORCINT GTM0.TIM05IRQFORCINT
#define GTM0TIM05IRQMODE GTM0.TIM05IRQMODE
#define GTM0TIM05EIRQEN GTM0.TIM05EIRQEN
#define GTM0TIM06GPR0 GTM0.TIM06GPR0
#define GTM0TIM06GPR1 GTM0.TIM06GPR1
#define GTM0TIM06CNT GTM0.TIM06CNT
#define GTM0TIM06ECNT GTM0.TIM06ECNT
#define GTM0TIM06CNTS GTM0.TIM06CNTS
#define GTM0TIM06TDUC GTM0.TIM06TDUC
#define GTM0TIM06TDUV GTM0.TIM06TDUV
#define GTM0TIM06FLTRE GTM0.TIM06FLTRE
#define GTM0TIM06FLTFE GTM0.TIM06FLTFE
#define GTM0TIM06CTRL GTM0.TIM06CTRL
#define GTM0TIM06ECTRL GTM0.TIM06ECTRL
#define GTM0TIM06IRQNOTIFY GTM0.TIM06IRQNOTIFY
#define GTM0TIM06IRQEN GTM0.TIM06IRQEN
#define GTM0TIM06IRQFORCINT GTM0.TIM06IRQFORCINT
#define GTM0TIM06IRQMODE GTM0.TIM06IRQMODE
#define GTM0TIM06EIRQEN GTM0.TIM06EIRQEN
#define GTM0TIM07GPR0 GTM0.TIM07GPR0
#define GTM0TIM07GPR1 GTM0.TIM07GPR1
#define GTM0TIM07CNT GTM0.TIM07CNT
#define GTM0TIM07ECNT GTM0.TIM07ECNT
#define GTM0TIM07CNTS GTM0.TIM07CNTS
#define GTM0TIM07TDUC GTM0.TIM07TDUC
#define GTM0TIM07TDUV GTM0.TIM07TDUV
#define GTM0TIM07FLTRE GTM0.TIM07FLTRE
#define GTM0TIM07FLTFE GTM0.TIM07FLTFE
#define GTM0TIM07CTRL GTM0.TIM07CTRL
#define GTM0TIM07ECTRL GTM0.TIM07ECTRL
#define GTM0TIM07IRQNOTIFY GTM0.TIM07IRQNOTIFY
#define GTM0TIM07IRQEN GTM0.TIM07IRQEN
#define GTM0TIM07IRQFORCINT GTM0.TIM07IRQFORCINT
#define GTM0TIM07IRQMODE GTM0.TIM07IRQMODE
#define GTM0TIM07EIRQEN GTM0.TIM07EIRQEN
#define GTM0TIM10GPR0 GTM0.TIM10GPR0
#define GTM0TIM10GPR1 GTM0.TIM10GPR1
#define GTM0TIM10CNT GTM0.TIM10CNT
#define GTM0TIM10ECNT GTM0.TIM10ECNT
#define GTM0TIM10CNTS GTM0.TIM10CNTS
#define GTM0TIM10TDUC GTM0.TIM10TDUC
#define GTM0TIM10TDUV GTM0.TIM10TDUV
#define GTM0TIM10FLTRE GTM0.TIM10FLTRE
#define GTM0TIM10FLTFE GTM0.TIM10FLTFE
#define GTM0TIM10CTRL GTM0.TIM10CTRL
#define GTM0TIM10ECTRL GTM0.TIM10ECTRL
#define GTM0TIM10IRQNOTIFY GTM0.TIM10IRQNOTIFY
#define GTM0TIM10IRQEN GTM0.TIM10IRQEN
#define GTM0TIM10IRQFORCINT GTM0.TIM10IRQFORCINT
#define GTM0TIM10IRQMODE GTM0.TIM10IRQMODE
#define GTM0TIM10EIRQEN GTM0.TIM10EIRQEN
#define GTM0TIM1INPVAL GTM0.TIM1INPVAL
#define GTM0TIM1INSRC GTM0.TIM1INSRC
#define GTM0TIM1RST GTM0.TIM1RST
#define GTM0TIM11GPR0 GTM0.TIM11GPR0
#define GTM0TIM11GPR1 GTM0.TIM11GPR1
#define GTM0TIM11CNT GTM0.TIM11CNT
#define GTM0TIM11ECNT GTM0.TIM11ECNT
#define GTM0TIM11CNTS GTM0.TIM11CNTS
#define GTM0TIM11TDUC GTM0.TIM11TDUC
#define GTM0TIM11TDUV GTM0.TIM11TDUV
#define GTM0TIM11FLTRE GTM0.TIM11FLTRE
#define GTM0TIM11FLTFE GTM0.TIM11FLTFE
#define GTM0TIM11CTRL GTM0.TIM11CTRL
#define GTM0TIM11ECTRL GTM0.TIM11ECTRL
#define GTM0TIM11IRQNOTIFY GTM0.TIM11IRQNOTIFY
#define GTM0TIM11IRQEN GTM0.TIM11IRQEN
#define GTM0TIM11IRQFORCINT GTM0.TIM11IRQFORCINT
#define GTM0TIM11IRQMODE GTM0.TIM11IRQMODE
#define GTM0TIM11EIRQEN GTM0.TIM11EIRQEN
#define GTM0TIM12GPR0 GTM0.TIM12GPR0
#define GTM0TIM12GPR1 GTM0.TIM12GPR1
#define GTM0TIM12CNT GTM0.TIM12CNT
#define GTM0TIM12ECNT GTM0.TIM12ECNT
#define GTM0TIM12CNTS GTM0.TIM12CNTS
#define GTM0TIM12TDUC GTM0.TIM12TDUC
#define GTM0TIM12TDUV GTM0.TIM12TDUV
#define GTM0TIM12FLTRE GTM0.TIM12FLTRE
#define GTM0TIM12FLTFE GTM0.TIM12FLTFE
#define GTM0TIM12CTRL GTM0.TIM12CTRL
#define GTM0TIM12ECTRL GTM0.TIM12ECTRL
#define GTM0TIM12IRQNOTIFY GTM0.TIM12IRQNOTIFY
#define GTM0TIM12IRQEN GTM0.TIM12IRQEN
#define GTM0TIM12IRQFORCINT GTM0.TIM12IRQFORCINT
#define GTM0TIM12IRQMODE GTM0.TIM12IRQMODE
#define GTM0TIM12EIRQEN GTM0.TIM12EIRQEN
#define GTM0TIM13GPR0 GTM0.TIM13GPR0
#define GTM0TIM13GPR1 GTM0.TIM13GPR1
#define GTM0TIM13CNT GTM0.TIM13CNT
#define GTM0TIM13ECNT GTM0.TIM13ECNT
#define GTM0TIM13CNTS GTM0.TIM13CNTS
#define GTM0TIM13TDUC GTM0.TIM13TDUC
#define GTM0TIM13TDUV GTM0.TIM13TDUV
#define GTM0TIM13FLTRE GTM0.TIM13FLTRE
#define GTM0TIM13FLTFE GTM0.TIM13FLTFE
#define GTM0TIM13CTRL GTM0.TIM13CTRL
#define GTM0TIM13ECTRL GTM0.TIM13ECTRL
#define GTM0TIM13IRQNOTIFY GTM0.TIM13IRQNOTIFY
#define GTM0TIM13IRQEN GTM0.TIM13IRQEN
#define GTM0TIM13IRQFORCINT GTM0.TIM13IRQFORCINT
#define GTM0TIM13IRQMODE GTM0.TIM13IRQMODE
#define GTM0TIM13EIRQEN GTM0.TIM13EIRQEN
#define GTM0TIM14GPR0 GTM0.TIM14GPR0
#define GTM0TIM14GPR1 GTM0.TIM14GPR1
#define GTM0TIM14CNT GTM0.TIM14CNT
#define GTM0TIM14ECNT GTM0.TIM14ECNT
#define GTM0TIM14CNTS GTM0.TIM14CNTS
#define GTM0TIM14TDUC GTM0.TIM14TDUC
#define GTM0TIM14TDUV GTM0.TIM14TDUV
#define GTM0TIM14FLTRE GTM0.TIM14FLTRE
#define GTM0TIM14FLTFE GTM0.TIM14FLTFE
#define GTM0TIM14CTRL GTM0.TIM14CTRL
#define GTM0TIM14ECTRL GTM0.TIM14ECTRL
#define GTM0TIM14IRQNOTIFY GTM0.TIM14IRQNOTIFY
#define GTM0TIM14IRQEN GTM0.TIM14IRQEN
#define GTM0TIM14IRQFORCINT GTM0.TIM14IRQFORCINT
#define GTM0TIM14IRQMODE GTM0.TIM14IRQMODE
#define GTM0TIM14EIRQEN GTM0.TIM14EIRQEN
#define GTM0TIM15GPR0 GTM0.TIM15GPR0
#define GTM0TIM15GPR1 GTM0.TIM15GPR1
#define GTM0TIM15CNT GTM0.TIM15CNT
#define GTM0TIM15ECNT GTM0.TIM15ECNT
#define GTM0TIM15CNTS GTM0.TIM15CNTS
#define GTM0TIM15TDUC GTM0.TIM15TDUC
#define GTM0TIM15TDUV GTM0.TIM15TDUV
#define GTM0TIM15FLTRE GTM0.TIM15FLTRE
#define GTM0TIM15FLTFE GTM0.TIM15FLTFE
#define GTM0TIM15CTRL GTM0.TIM15CTRL
#define GTM0TIM15ECTRL GTM0.TIM15ECTRL
#define GTM0TIM15IRQNOTIFY GTM0.TIM15IRQNOTIFY
#define GTM0TIM15IRQEN GTM0.TIM15IRQEN
#define GTM0TIM15IRQFORCINT GTM0.TIM15IRQFORCINT
#define GTM0TIM15IRQMODE GTM0.TIM15IRQMODE
#define GTM0TIM15EIRQEN GTM0.TIM15EIRQEN
#define GTM0TIM16GPR0 GTM0.TIM16GPR0
#define GTM0TIM16GPR1 GTM0.TIM16GPR1
#define GTM0TIM16CNT GTM0.TIM16CNT
#define GTM0TIM16ECNT GTM0.TIM16ECNT
#define GTM0TIM16CNTS GTM0.TIM16CNTS
#define GTM0TIM16TDUC GTM0.TIM16TDUC
#define GTM0TIM16TDUV GTM0.TIM16TDUV
#define GTM0TIM16FLTRE GTM0.TIM16FLTRE
#define GTM0TIM16FLTFE GTM0.TIM16FLTFE
#define GTM0TIM16CTRL GTM0.TIM16CTRL
#define GTM0TIM16ECTRL GTM0.TIM16ECTRL
#define GTM0TIM16IRQNOTIFY GTM0.TIM16IRQNOTIFY
#define GTM0TIM16IRQEN GTM0.TIM16IRQEN
#define GTM0TIM16IRQFORCINT GTM0.TIM16IRQFORCINT
#define GTM0TIM16IRQMODE GTM0.TIM16IRQMODE
#define GTM0TIM16EIRQEN GTM0.TIM16EIRQEN
#define GTM0TIM17GPR0 GTM0.TIM17GPR0
#define GTM0TIM17GPR1 GTM0.TIM17GPR1
#define GTM0TIM17CNT GTM0.TIM17CNT
#define GTM0TIM17ECNT GTM0.TIM17ECNT
#define GTM0TIM17CNTS GTM0.TIM17CNTS
#define GTM0TIM17TDUC GTM0.TIM17TDUC
#define GTM0TIM17TDUV GTM0.TIM17TDUV
#define GTM0TIM17FLTRE GTM0.TIM17FLTRE
#define GTM0TIM17FLTFE GTM0.TIM17FLTFE
#define GTM0TIM17CTRL GTM0.TIM17CTRL
#define GTM0TIM17ECTRL GTM0.TIM17ECTRL
#define GTM0TIM17IRQNOTIFY GTM0.TIM17IRQNOTIFY
#define GTM0TIM17IRQEN GTM0.TIM17IRQEN
#define GTM0TIM17IRQFORCINT GTM0.TIM17IRQFORCINT
#define GTM0TIM17IRQMODE GTM0.TIM17IRQMODE
#define GTM0TIM17EIRQEN GTM0.TIM17EIRQEN

#define FLXA0FRT0C FLXA0.FRT0C.UINT32
#define FLXA0FRT2C FLXA0.FRT2C.UINT32
#define FLXA1FRT0C FLXA1.FRT0C.UINT32
#define FLXA1FRT2C FLXA1.FRT2C.UINT32

#define HSUS0EN HSUS0.EN
#define HSUS0CST HSUS0.CST
#define HSUS0SRST HSUS0.SRST
#define HSUS1EN HSUS1.EN
#define HSUS1CST HSUS1.CST
#define HSUS1SRST HSUS1.SRST
#define HSUS2EN HSUS2.EN
#define HSUS2CST HSUS2.CST
#define HSUS2SRST HSUS2.SRST
#define HSUS3EN HSUS3.EN
#define HSUS3CST HSUS3.CST
#define HSUS3SRST HSUS3.SRST

#define STM0CKSEL STM0.CKSEL.UINT32
#define STM0CKSELLL STM0.CKSEL.UINT8[LL]
#define STM0TS STM0.TS.UINT32
#define STM0TSLL STM0.TS.UINT8[LL]
#define STM0TT STM0.TT.UINT32
#define STM0TTLL STM0.TT.UINT8[LL]
#define STM0CSTR STM0.CSTR.UINT32
#define STM0CSTRLL STM0.CSTR.UINT8[LL]
#define STM0STR STM0.STR
#define STM0STC STM0.STC
#define STM0IS STM0.IS.UINT32
#define STM0ISLL STM0.IS.UINT8[LL]
#define STM0ISLH STM0.IS.UINT8[LH]
#define STM0RM STM0.RM.UINT32
#define STM0RMLL STM0.RM.UINT8[LL]
#define STM0CNT0L STM0.CNT0L
#define STM0CNT0H STM0.CNT0H
#define STM0CMP0AL STM0.CMP0AL
#define STM0CMP0AH STM0.CMP0AH
#define STM0CMP0BL STM0.CMP0BL
#define STM0CMP0BH STM0.CMP0BH
#define STM0CMP0CL STM0.CMP0CL
#define STM0CMP0CH STM0.CMP0CH
#define STM0CMP0DL STM0.CMP0DL
#define STM0CMP0DH STM0.CMP0DH

#define DNFA7EN DNFA7.EN.UINT16

#define PEGG0BA PEG.G0BA.UINT32
#define PEGG1BA PEG.G1BA.UINT32
#define PEGG0SP PEG.G0SP.UINT32
#define PEGG1SP PEG.G1SP.UINT32
#define PEGG0MK PEG.G0MK.UINT32
#define PEGG1MK PEG.G1MK.UINT32

#define DNFA2CTL DNFA2.CTL.UINT8
#define DNFA2PRS0 DNFA2.CTL.PRS0
#define DNFA2PRS1 DNFA2.CTL.PRS1
#define DNFA2PRS2 DNFA2.CTL.PRS2
#define DNFA2NFSTS0 DNFA2.CTL.NFSTS0
#define DNFA2NFSTS1 DNFA2.CTL.NFSTS1
#define DNFA2EN DNFA2.EN.UINT16
#define DNFA2ENL DNFA2.EN.UINT8[L]
#define DNFA2NFENL0 DNFA2.EN.NFENL0
#define DNFA2NFENL1 DNFA2.EN.NFENL1
#define DNFA3CTL DNFA3.CTL.UINT8
#define DNFA3PRS0 DNFA3.CTL.PRS0
#define DNFA3PRS1 DNFA3.CTL.PRS1
#define DNFA3PRS2 DNFA3.CTL.PRS2
#define DNFA3NFSTS0 DNFA3.CTL.NFSTS0
#define DNFA3NFSTS1 DNFA3.CTL.NFSTS1
#define DNFA3EN DNFA3.EN.UINT16
#define DNFA3ENL DNFA3.EN.UINT8[L]
#define DNFA3NFENL0 DNFA3.EN.NFENL0
#define DNFA3NFENL1 DNFA3.EN.NFENL1
#define DNFA4CTL DNFA4.CTL.UINT8
#define DNFA4PRS0 DNFA4.CTL.PRS0
#define DNFA4PRS1 DNFA4.CTL.PRS1
#define DNFA4PRS2 DNFA4.CTL.PRS2
#define DNFA4NFSTS0 DNFA4.CTL.NFSTS0
#define DNFA4NFSTS1 DNFA4.CTL.NFSTS1
#define DNFA4EN DNFA4.EN.UINT16
#define DNFA4ENL DNFA4.EN.UINT8[L]
#define DNFA4NFENL0 DNFA4.EN.NFENL0
#define DNFA4NFENL1 DNFA4.EN.NFENL1
#define DNFA5CTL DNFA5.CTL.UINT8
#define DNFA5PRS0 DNFA5.CTL.PRS0
#define DNFA5PRS1 DNFA5.CTL.PRS1
#define DNFA5PRS2 DNFA5.CTL.PRS2
#define DNFA5NFSTS0 DNFA5.CTL.NFSTS0
#define DNFA5NFSTS1 DNFA5.CTL.NFSTS1
#define DNFA5EN DNFA5.EN.UINT16
#define DNFA5ENL DNFA5.EN.UINT8[L]
#define DNFA5NFENL0 DNFA5.EN.NFENL0
#define DNFA5NFENL1 DNFA5.EN.NFENL1
#define DNFA5NFENL2 DNFA5.EN.NFENL2
#define DNFA5NFENL3 DNFA5.EN.NFENL3
#define DNFA5NFENL4 DNFA5.EN.NFENL4
#define DNFA5NFENL5 DNFA5.EN.NFENL5
#define DNFA5NFENL6 DNFA5.EN.NFENL6
#define DNFA5NFENL7 DNFA5.EN.NFENL7
#define DNFA6CTL DNFA6.CTL.UINT8
#define DNFA6PRS0 DNFA6.CTL.PRS0
#define DNFA6PRS1 DNFA6.CTL.PRS1
#define DNFA6PRS2 DNFA6.CTL.PRS2
#define DNFA6NFSTS0 DNFA6.CTL.NFSTS0
#define DNFA6NFSTS1 DNFA6.CTL.NFSTS1
#define DNFA6EN DNFA6.EN.UINT16
#define DNFA6ENL DNFA6.EN.UINT8[L]
#define DNFA6NFENL0 DNFA6.EN.NFENL0
#define DNFA6NFENL1 DNFA6.EN.NFENL1
#define DNFA7CTL DNFA7.CTL.UINT8
#define DNFA7PRS0 DNFA7.CTL.PRS0
#define DNFA7PRS1 DNFA7.CTL.PRS1
#define DNFA7PRS2 DNFA7.CTL.PRS2
#define DNFA7NFSTS0 DNFA7.CTL.NFSTS0
#define DNFA7NFSTS1 DNFA7.CTL.NFSTS1
#define DNFA7ENL DNFA7.EN.UINT8[L]
#define DNFA7NFENL0 DNFA7.EN.NFENL0
#define DNFA7NFENL1 DNFA7.EN.NFENL1


#define FCLA0CTL0 FCLA0.CTL0.UINT8
#define FCLA0INTR0 FCLA0.CTL0.INTR0
#define FCLA0INTF0 FCLA0.CTL0.INTF0
#define FCLA0INTL0 FCLA0.CTL0.INTL0
#define FCLA0CTL1 FCLA0.CTL1.UINT8
#define FCLA0INTR1 FCLA0.CTL1.INTR1
#define FCLA0INTF1 FCLA0.CTL1.INTF1
#define FCLA0INTL1 FCLA0.CTL1.INTL1
#define FCLA0CTL2 FCLA0.CTL2.UINT8
#define FCLA0INTR2 FCLA0.CTL2.INTR2
#define FCLA0INTF2 FCLA0.CTL2.INTF2
#define FCLA0INTL2 FCLA0.CTL2.INTL2
#define FCLA0CTL3 FCLA0.CTL3.UINT8
#define FCLA0INTR3 FCLA0.CTL3.INTR3
#define FCLA0INTF3 FCLA0.CTL3.INTF3
#define FCLA0INTL3 FCLA0.CTL3.INTL3
#define FCLA0CTL4 FCLA0.CTL4.UINT8
#define FCLA0INTR4 FCLA0.CTL4.INTR4
#define FCLA0INTF4 FCLA0.CTL4.INTF4
#define FCLA0INTL4 FCLA0.CTL4.INTL4
#define FCLA0CTL5 FCLA0.CTL5.UINT8
#define FCLA0INTR5 FCLA0.CTL5.INTR5
#define FCLA0INTF5 FCLA0.CTL5.INTF5
#define FCLA0INTL5 FCLA0.CTL5.INTL5
#define FCLA0CTL6 FCLA0.CTL6.UINT8
#define FCLA0INTR6 FCLA0.CTL6.INTR6
#define FCLA0INTF6 FCLA0.CTL6.INTF6
#define FCLA0INTL6 FCLA0.CTL6.INTL6
#define FCLA0CTL7 FCLA0.CTL7.UINT8
#define FCLA0INTR7 FCLA0.CTL7.INTR7
#define FCLA0INTF7 FCLA0.CTL7.INTF7
#define FCLA0INTL7 FCLA0.CTL7.INTL7
#define FCLA1CTL0 FCLA1.CTL0.UINT8
#define FCLA1INTR0 FCLA1.CTL0.INTR0
#define FCLA1INTF0 FCLA1.CTL0.INTF0
#define FCLA1INTL0 FCLA1.CTL0.INTL0
#define FCLA1CTL1 FCLA1.CTL1.UINT8
#define FCLA1INTR1 FCLA1.CTL1.INTR1
#define FCLA1INTF1 FCLA1.CTL1.INTF1
#define FCLA1INTL1 FCLA1.CTL1.INTL1
#define FCLA1CTL2 FCLA1.CTL2.UINT8
#define FCLA1INTR2 FCLA1.CTL2.INTR2
#define FCLA1INTF2 FCLA1.CTL2.INTF2
#define FCLA1INTL2 FCLA1.CTL2.INTL2
#define FCLA1CTL3 FCLA1.CTL3.UINT8
#define FCLA1INTR3 FCLA1.CTL3.INTR3
#define FCLA1INTF3 FCLA1.CTL3.INTF3
#define FCLA1INTL3 FCLA1.CTL3.INTL3
#define FCLA1CTL4 FCLA1.CTL4.UINT8
#define FCLA1INTR4 FCLA1.CTL4.INTR4
#define FCLA1INTF4 FCLA1.CTL4.INTF4
#define FCLA1INTL4 FCLA1.CTL4.INTL4
#define FCLA2CTL0 FCLA2.CTL0.UINT8
#define FCLA2INTR0 FCLA2.CTL0.INTR0
#define FCLA2INTF0 FCLA2.CTL0.INTF0
#define FCLA2CTL1 FCLA2.CTL1.UINT8
#define FCLA2INTR1 FCLA2.CTL1.INTR1
#define FCLA2INTF1 FCLA2.CTL1.INTF1
#define FCLA3CTL0 FCLA3.CTL0.UINT8
#define FCLA3INTR0 FCLA3.CTL0.INTR0
#define FCLA3INTF0 FCLA3.CTL0.INTF0
#define FCLA3CTL1 FCLA3.CTL1.UINT8
#define FCLA3INTR1 FCLA3.CTL1.INTR1
#define FCLA3INTF1 FCLA3.CTL1.INTF1
#define FCLA4CTL0 FCLA4.CTL0.UINT8
#define FCLA4INTR0 FCLA4.CTL0.INTR0
#define FCLA4INTF0 FCLA4.CTL0.INTF0
#define FCLA4CTL1 FCLA4.CTL1.UINT8
#define FCLA4INTR1 FCLA4.CTL1.INTR1
#define FCLA4INTF1 FCLA4.CTL1.INTF1
#define FCLA5CTL0 FCLA5.CTL0.UINT8
#define FCLA5BYPS0 FCLA5.CTL0.BYPS0
#define FCLA5CTL1 FCLA5.CTL1.UINT8
#define FCLA5BYPS1 FCLA5.CTL1.BYPS1
#define FCLA5CTL2 FCLA5.CTL2.UINT8
#define FCLA5BYPS2 FCLA5.CTL2.BYPS2
#define FCLA5CTL3 FCLA5.CTL3.UINT8
#define FCLA5BYPS3 FCLA5.CTL3.BYPS3
#define FCLA5CTL4 FCLA5.CTL4.UINT8
#define FCLA5BYPS4 FCLA5.CTL4.BYPS4
#define FCLA5CTL5 FCLA5.CTL5.UINT8
#define FCLA5BYPS5 FCLA5.CTL5.BYPS5
#define FCLA5CTL6 FCLA5.CTL6.UINT8
#define FCLA5BYPS6 FCLA5.CTL6.BYPS6
#define FCLA5CTL7 FCLA5.CTL7.UINT8
#define FCLA5BYPS7 FCLA5.CTL7.BYPS7
#define FCLA6CTL0 FCLA6.CTL0.UINT8
#define FCLA6BYPS0 FCLA6.CTL0.BYPS0
#define FCLA6CTL1 FCLA6.CTL1.UINT8
#define FCLA6BYPS1 FCLA6.CTL1.BYPS1

#define FACI0FPMON FACI0.FPMON
#define FACI0FASTAT FACI0.FASTAT
#define FACI0FAEINT FACI0.FAEINT
#define FACI0FSADDR FACI0.FSADDR
#define FACI0FEADDR FACI0.FEADDR
#define FACI0FCURAME FACI0.FCURAME
#define FACI0FRAMMCR FACI0.FRAMMCR
#define FACI0FPROTDR0 FACI0.FPROTDR0
#define FACI0FPROTCR0 FACI0.FPROTCR0
#define FACI0FPROTCR1 FACI0.FPROTCR1
#define FACI0FPROTCR2 FACI0.FPROTCR2
#define FACI0FPROTCR3 FACI0.FPROTCR3
#define FACI0FPROTCR4 FACI0.FPROTCR4
#define FACI0FSTATR FACI0.FSTATR
#define FACI0FENTRYR FACI0.FENTRYR
#define FACI0FSUINITR FACI0.FSUINITR
#define FACI0FLKSTAT FACI0.FLKSTAT
#define FACI0FRFSTEADR FACI0.FRFSTEADR
#define FACI0FRTSTAT FACI0.FRTSTAT
#define FACI0FRTEINT FACI0.FRTEINT
#define FACI0FCMDR FACI0.FCMDR
#define FACI0FRAMECCR FACI0.FRAMECCR
#define FACI0FPESTAT FACI0.FPESTAT
#define FACI0FCNFPRGCNT FACI0.FCNFPRGCNT
#define FACI0FBCCNT FACI0.FBCCNT
#define FACI0FBCSTAT FACI0.FBCSTAT
#define FACI0FPSADDR FACI0.FPSADDR
#define FACI0FCPSR FACI0.FCPSR
#define FACI0FPCKAR FACI0.FPCKAR
#define FACI0FECCEMON FACI0.FECCEMON
#define FACI0FECCTMD FACI0.FECCTMD
#define FACI0FDMYECC FACI0.FDMYECC
#define FACI1FPMON FACI1.FPMON
#define FACI1FASTAT FACI1.FASTAT
#define FACI1FAEINT FACI1.FAEINT
#define FACI1FSADDR FACI1.FSADDR
#define FACI1FEADDR FACI1.FEADDR
#define FACI1FCURAME FACI1.FCURAME
#define FACI1FRAMMCR FACI1.FRAMMCR
#define FACI1FPROTDR0 FACI1.FPROTDR0
#define FACI1FPROTCR0 FACI1.FPROTCR0
#define FACI1FPROTCR1 FACI1.FPROTCR1
#define FACI1FPROTCR2 FACI1.FPROTCR2
#define FACI1FPROTCR3 FACI1.FPROTCR3
#define FACI1FPROTCR4 FACI1.FPROTCR4
#define FACI1FSTATR FACI1.FSTATR
#define FACI1FENTRYR FACI1.FENTRYR
#define FACI1FSUINITR FACI1.FSUINITR
#define FACI1FLKSTAT FACI1.FLKSTAT
#define FACI1FRFSTEADR FACI1.FRFSTEADR
#define FACI1FRTSTAT FACI1.FRTSTAT
#define FACI1FRTEINT FACI1.FRTEINT
#define FACI1FCMDR FACI1.FCMDR
#define FACI1FRAMECCR FACI1.FRAMECCR
#define FACI1FPESTAT FACI1.FPESTAT
#define FACI1FCNFPRGCNT FACI1.FCNFPRGCNT
#define FACI1FBCCNT FACI1.FBCCNT
#define FACI1FBCSTAT FACI1.FBCSTAT
#define FACI1FPSADDR FACI1.FPSADDR
#define FACI1FCPSR FACI1.FCPSR
#define FACI1FPCKAR FACI1.FPCKAR
#define FACI1FECCEMON FACI1.FECCEMON
#define FACI1FECCTMD FACI1.FECCTMD
#define FACI1FDMYECC FACI1.FDMYECC

#define ECCCSIH0CTL ECCCSIH0.CTL.UINT32
#define ECCCSIH0CTLL ECCCSIH0.CTL.UINT16[L]
#define ECCCSIH0CTLLL ECCCSIH0.CTL.UINT8[LL]
#define ECCCSIH0CTLLH ECCCSIH0.CTL.UINT8[LH]
#define ECCCSIH0CTLH ECCCSIH0.CTL.UINT16[H]
#define ECCCSIH0CTLHL ECCCSIH0.CTL.UINT8[HL]
#define ECCCSIH0CTLHH ECCCSIH0.CTL.UINT8[HH]
#define ECCCSIH0ECEMF ECCCSIH0.CTL.BIT.ECEMF
#define ECCCSIH0ECER1F ECCCSIH0.CTL.BIT.ECER1F
#define ECCCSIH0ECER2F ECCCSIH0.CTL.BIT.ECER2F
#define ECCCSIH0EC1EDIC ECCCSIH0.CTL.BIT.EC1EDIC
#define ECCCSIH0EC2EDIC ECCCSIH0.CTL.BIT.EC2EDIC
#define ECCCSIH0EC1ECP ECCCSIH0.CTL.BIT.EC1ECP
#define ECCCSIH0ECTHM ECCCSIH0.CTL.BIT.ECTHM
#define ECCCSIH0ECER1C ECCCSIH0.CTL.BIT.ECER1C
#define ECCCSIH0ECER2C ECCCSIH0.CTL.BIT.ECER2C
#define ECCCSIH0ECOVFF ECCCSIH0.CTL.BIT.ECOVFF
#define ECCCSIH0EMCA ECCCSIH0.CTL.BIT.EMCA
#define ECCCSIH0ECSEDF0 ECCCSIH0.CTL.BIT.ECSEDF0
#define ECCCSIH0ECDEDF0 ECCCSIH0.CTL.BIT.ECDEDF0
#define ECCCSIH0TMC ECCCSIH0.TMC.UINT16
#define ECCCSIH0TMCL ECCCSIH0.TMC.UINT8[L]
#define ECCCSIH0TMCH ECCCSIH0.TMC.UINT8[H]
#define ECCCSIH0ECREIS ECCCSIH0.TMC.BIT.ECREIS
#define ECCCSIH0ECDCS ECCCSIH0.TMC.BIT.ECDCS
#define ECCCSIH0ECENS ECCCSIH0.TMC.BIT.ECENS
#define ECCCSIH0ECREOS ECCCSIH0.TMC.BIT.ECREOS
#define ECCCSIH0ECTRRS ECCCSIH0.TMC.BIT.ECTRRS
#define ECCCSIH0ECTMCE ECCCSIH0.TMC.BIT.ECTMCE
#define ECCCSIH0ETMA ECCCSIH0.TMC.BIT.ETMA
#define ECCCSIH0TRC ECCCSIH0.TRC.UINT32
#define ECCCSIH0ERDB ECCCSIH0.TRC.UINT8[LL]
#define ECCCSIH0ECRD ECCCSIH0.TRC.UINT8[LH]
#define ECCCSIH0HORD ECCCSIH0.TRC.UINT8[HL]
#define ECCCSIH0SYND ECCCSIH0.TRC.UINT8[HH]
#define ECCCSIH0TED ECCCSIH0.TED.UINT32
#define ECCCSIH0ECEDB ECCCSIH0.TED.BIT.ECEDB
#define ECCCSIH0EAD0 ECCCSIH0.EAD0.UINT32
#define ECCCSIH0ECEAD ECCCSIH0.EAD0.BIT.ECEAD

#define ECCCSIH1CTL ECCCSIH1.CTL.UINT32
#define ECCCSIH1CTLL ECCCSIH1.CTL.UINT16[L]
#define ECCCSIH1CTLLL ECCCSIH1.CTL.UINT8[LL]
#define ECCCSIH1CTLLH ECCCSIH1.CTL.UINT8[LH]
#define ECCCSIH1CTLH ECCCSIH1.CTL.UINT16[H]
#define ECCCSIH1CTLHL ECCCSIH1.CTL.UINT8[HL]
#define ECCCSIH1CTLHH ECCCSIH1.CTL.UINT8[HH]
#define ECCCSIH1ECEMF ECCCSIH1.CTL.BIT.ECEMF
#define ECCCSIH1ECER1F ECCCSIH1.CTL.BIT.ECER1F
#define ECCCSIH1ECER2F ECCCSIH1.CTL.BIT.ECER2F
#define ECCCSIH1EC1EDIC ECCCSIH1.CTL.BIT.EC1EDIC
#define ECCCSIH1EC2EDIC ECCCSIH1.CTL.BIT.EC2EDIC
#define ECCCSIH1EC1ECP ECCCSIH1.CTL.BIT.EC1ECP
#define ECCCSIH1ECTHM ECCCSIH1.CTL.BIT.ECTHM
#define ECCCSIH1ECER1C ECCCSIH1.CTL.BIT.ECER1C
#define ECCCSIH1ECER2C ECCCSIH1.CTL.BIT.ECER2C
#define ECCCSIH2ECOVFF ECCCSIH2.CTL.BIT.ECOVFF
#define ECCCSIH1EMCA ECCCSIH1.CTL.BIT.EMCA
#define ECCCSIH1ECSEDF0 ECCCSIH1.CTL.BIT.ECSEDF0
#define ECCCSIH1ECDEDF0 ECCCSIH1.CTL.BIT.ECDEDF0
#define ECCCSIH1TMC ECCCSIH1.TMC.UINT16
#define ECCCSIH1TMCL ECCCSIH1.TMC.UINT8[L]
#define ECCCSIH1TMCH ECCCSIH1.TMC.UINT8[H]
#define ECCCSIH1ECREIS ECCCSIH1.TMC.BIT.ECREIS
#define ECCCSIH1ECDCS ECCCSIH1.TMC.BIT.ECDCS
#define ECCCSIH1ECENS ECCCSIH1.TMC.BIT.ECENS
#define ECCCSIH1ECREOS ECCCSIH1.TMC.BIT.ECREOS
#define ECCCSIH1ECTRRS ECCCSIH1.TMC.BIT.ECTRRS
#define ECCCSIH1ECTMCE ECCCSIH1.TMC.BIT.ECTMCE
#define ECCCSIH1ETMA ECCCSIH1.TMC.BIT.ETMA
#define ECCCSIH1TRC ECCCSIH1.TRC.UINT32
#define ECCCSIH1ERDB ECCCSIH1.TRC.UINT8[LL]
#define ECCCSIH1ECRD ECCCSIH1.TRC.UINT8[LH]
#define ECCCSIH1HORD ECCCSIH1.TRC.UINT8[HL]
#define ECCCSIH1SYND ECCCSIH1.TRC.UINT8[HH]
#define ECCCSIH1TED ECCCSIH1.TED.UINT32
#define ECCCSIH1ECEDB ECCCSIH1.TED.BIT.ECEDB
#define ECCCSIH1EAD0 ECCCSIH1.EAD0.UINT32
#define ECCCSIH1ECEAD ECCCSIH1.EAD0.BIT.ECEAD

#define ECCCSIH2CTL ECCCSIH2.CTL.UINT32
#define ECCCSIH2CTLL ECCCSIH2.CTL.UINT16[L]
#define ECCCSIH2CTLLL ECCCSIH2.CTL.UINT8[LL]
#define ECCCSIH2CTLLH ECCCSIH2.CTL.UINT8[LH]
#define ECCCSIH2CTLH ECCCSIH2.CTL.UINT16[H]
#define ECCCSIH2CTLHL ECCCSIH2.CTL.UINT8[HL]
#define ECCCSIH2CTLHH ECCCSIH2.CTL.UINT8[HH]
#define ECCCSIH2ECEMF ECCCSIH2.CTL.BIT.ECEMF
#define ECCCSIH2ECER1F ECCCSIH2.CTL.BIT.ECER1F
#define ECCCSIH2ECER2F ECCCSIH2.CTL.BIT.ECER2F
#define ECCCSIH2EC1EDIC ECCCSIH2.CTL.BIT.EC1EDIC
#define ECCCSIH2EC2EDIC ECCCSIH2.CTL.BIT.EC2EDIC
#define ECCCSIH2EC1ECP ECCCSIH2.CTL.BIT.EC1ECP
#define ECCCSIH2ECTHM ECCCSIH2.CTL.BIT.ECTHM
#define ECCCSIH2ECER1C ECCCSIH2.CTL.BIT.ECER1C
#define ECCCSIH2ECER2C ECCCSIH2.CTL.BIT.ECER2C
#define ECCCSIH2ECOVFF ECCCSIH2.CTL.BIT.ECOVFF
#define ECCCSIH2EMCA ECCCSIH2.CTL.BIT.EMCA
#define ECCCSIH2ECSEDF0 ECCCSIH2.CTL.BIT.ECSEDF0
#define ECCCSIH2ECDEDF0 ECCCSIH2.CTL.BIT.ECDEDF0
#define ECCCSIH2TMC ECCCSIH2.TMC.UINT16
#define ECCCSIH2TMCL ECCCSIH2.TMC.UINT8[L]
#define ECCCSIH2TMCH ECCCSIH2.TMC.UINT8[H]
#define ECCCSIH2ECREIS ECCCSIH2.TMC.BIT.ECREIS
#define ECCCSIH2ECDCS ECCCSIH2.TMC.BIT.ECDCS
#define ECCCSIH2ECENS ECCCSIH2.TMC.BIT.ECENS
#define ECCCSIH2ECREOS ECCCSIH2.TMC.BIT.ECREOS
#define ECCCSIH2ECTRRS ECCCSIH2.TMC.BIT.ECTRRS
#define ECCCSIH2ECTMCE ECCCSIH2.TMC.BIT.ECTMCE
#define ECCCSIH2ETMA ECCCSIH2.TMC.BIT.ETMA
#define ECCCSIH2TRC ECCCSIH2.TRC.UINT32
#define ECCCSIH2ERDB ECCCSIH2.TRC.UINT8[LL]
#define ECCCSIH2ECRD ECCCSIH2.TRC.UINT8[LH]
#define ECCCSIH2HORD ECCCSIH2.TRC.UINT8[HL]
#define ECCCSIH2SYND ECCCSIH2.TRC.UINT8[HH]
#define ECCCSIH2TED ECCCSIH2.TED.UINT32
#define ECCCSIH2ECEDB ECCCSIH2.TED.BIT.ECEDB
#define ECCCSIH2EAD0 ECCCSIH2.EAD0.UINT32
#define ECCCSIH2ECEAD ECCCSIH2.EAD0.BIT.ECEAD

#define ECCCSIH3CTL ECCCSIH3.CTL.UINT32
#define ECCCSIH3CTLL ECCCSIH3.CTL.UINT16[L]
#define ECCCSIH3CTLLL ECCCSIH3.CTL.UINT8[LL]
#define ECCCSIH3CTLLH ECCCSIH3.CTL.UINT8[LH]
#define ECCCSIH3CTLH ECCCSIH3.CTL.UINT16[H]
#define ECCCSIH3CTLHL ECCCSIH3.CTL.UINT8[HL]
#define ECCCSIH3CTLHH ECCCSIH3.CTL.UINT8[HH]
#define ECCCSIH3ECEMF ECCCSIH3.CTL.BIT.ECEMF
#define ECCCSIH3ECER1F ECCCSIH3.CTL.BIT.ECER1F
#define ECCCSIH3ECER2F ECCCSIH3.CTL.BIT.ECER2F
#define ECCCSIH3EC1EDIC ECCCSIH3.CTL.BIT.EC1EDIC
#define ECCCSIH3EC2EDIC ECCCSIH3.CTL.BIT.EC2EDIC
#define ECCCSIH3EC1ECP ECCCSIH3.CTL.BIT.EC1ECP
#define ECCCSIH3ECTHM ECCCSIH3.CTL.BIT.ECTHM
#define ECCCSIH3ECER1C ECCCSIH3.CTL.BIT.ECER1C
#define ECCCSIH3ECER2C ECCCSIH3.CTL.BIT.ECER2C
#define ECCCSIH3ECOVFF ECCCSIH3.CTL.BIT.ECOVFF
#define ECCCSIH3EMCA ECCCSIH3.CTL.BIT.EMCA
#define ECCCSIH3ECSEDF0 ECCCSIH3.CTL.BIT.ECSEDF0
#define ECCCSIH3ECDEDF0 ECCCSIH3.CTL.BIT.ECDEDF0
#define ECCCSIH3TMC ECCCSIH3.TMC.UINT16
#define ECCCSIH3TMCL ECCCSIH3.TMC.UINT8[L]
#define ECCCSIH3TMCH ECCCSIH3.TMC.UINT8[H]
#define ECCCSIH3ECREIS ECCCSIH3.TMC.BIT.ECREIS
#define ECCCSIH3ECDCS ECCCSIH3.TMC.BIT.ECDCS
#define ECCCSIH3ECENS ECCCSIH3.TMC.BIT.ECENS
#define ECCCSIH3ECREOS ECCCSIH3.TMC.BIT.ECREOS
#define ECCCSIH3ECTRRS ECCCSIH3.TMC.BIT.ECTRRS
#define ECCCSIH3ECTMCE ECCCSIH3.TMC.BIT.ECTMCE
#define ECCCSIH3ETMA ECCCSIH3.TMC.BIT.ETMA
#define ECCCSIH3TRC ECCCSIH3.TRC.UINT32
#define ECCCSIH3ERDB ECCCSIH3.TRC.UINT8[LL]
#define ECCCSIH3ECRD ECCCSIH3.TRC.UINT8[LH]
#define ECCCSIH3HORD ECCCSIH3.TRC.UINT8[HL]
#define ECCCSIH3SYND ECCCSIH3.TRC.UINT8[HH]
#define ECCCSIH3TED ECCCSIH3.TED.UINT32
#define ECCCSIH3ECEDB ECCCSIH3.TED.BIT.ECEDB
#define ECCCSIH3EAD0 ECCCSIH3.EAD0.UINT32
#define ECCCSIH3ECEAD ECCCSIH3.EAD0.BIT.ECEAD


#endif
