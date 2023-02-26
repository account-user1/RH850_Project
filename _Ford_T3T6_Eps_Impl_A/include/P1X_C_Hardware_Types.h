/******************************************************************************/
/*                                                                            */
/* Device     : RH/RH850G3M/R7F701370A_72                                     */
/* File Name  : P1X_C_Hardware_Types.h                                        */
/* Abstract   : Definition of I/O Register                                    */
/* History    : E1.00a [Device File version]                                  */
/* This is a typical example.                                                 */
/*                                                                            */
/* Copyright(c) 2017 Renesas Electronics Corporation. All rights reserved.    */
/*                                                                            */
/******************************************************************************/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * Ver4.02.00.D_FLS_HF003: 22-Dec-2017 : Related Tickets :
 *                         JIRA #ARDAAAF-3326
 *                       : Modification Info : Split up P1X_C_Hardware.h
 *                         to two files P1X_C_Hardware_Defines.h and
 *                         P1X_C_Hardware_Types.h. P1X_C_Hardware_Types.h
 *                         includes declarations of I/O registers.
 *                       : Modification Info Ends :
 */
/******************************************************************************/

#ifndef P1X_C_HARDWARE_TYPES_H
#define P1X_C_HARDWARE_TYPES_H
#define P1X_C_HARDWARE_H    /* Patch for RenesasMcalSuprt hot fix */

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

#include "P1X_C_Hardware_Defines.h"    /* Patch for RenesasMcalSuprt hot fix */
#endif
