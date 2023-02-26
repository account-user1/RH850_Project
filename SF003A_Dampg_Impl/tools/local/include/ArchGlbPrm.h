/*****************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: ArchGlbPrm.h
* Module Description: Architecture global parameter definitions
* Project           : CBD
* Author            : Kathleen Creager
*****************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz3541 %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 02/25/15  1        KMC       initial version                                                                 EA4#186
* 06/20/15  2        KMC       add constants needed for SF103A                                                 EA4#868
******************************************************************************/
#ifndef ARCHGLBPRM_H
#define ARCHGLBPRM_H


/* 2ms loop time step */
#define ARCHGLBPRM_2MILLISEC_SEC_F32		(0.002F)

/* 4ms loop time step */
#define ARCHGLBPRM_4MILLISEC_SEC_F32 		(0.004F)

/* 10ms loop time step */
#define ARCHGLBPRM_10MILLISEC_SEC_F32 		(0.01F)

/* 100ms loop time step */
#define ARCHGLBPRM_100MILLISEC_SEC_F32 		(0.1F)

/* pi */
#define ARCHGLBPRM_PI_ULS_F32				(3.1415927F)

/* 2 times pi */
#define ARCHGLBPRM_2PI_ULS_F32				(6.2831853F)

/* pi divided by 2 */
#define ARCHGLBPRM_PIOVER2_ULS_F32			(1.57079633F)

/* 180 divided by pi */
#define ARCHGLBPRM_180OVERPI_ULS_F32 		(57.29578F)

/* pi divided by 180 */
#define ARCHGLBPRM_PIOVER180_ULS_F32		(0.017453293F)

/* 5 times pi divided by 4 */
#define ARCHGLBPRM_5PIOVER4_ULS_F32			(3.9269908F)

/* (square root of 3) divided by 2 */
#define ARCHGLBPRM_HALFSQRT3_ULS_F32		(0.8660254F)

/* 2 divided by square root of 3 */
#define ARCHGLBPRM_2OVERSQRT3_ULS_F32		(1.15470054F)

/* 4 divided by square root of 3 */
#define ARCHGLBPRM_4OVERSQRT3_ULS_F32		(2.3094011F)

/* Zero Threshold for float comparisons; renamed float.h FLT_EPSILON because that name is reserved in MATLAB */
#define ARCHGLBPRM_FLOATZEROTHD_ULS_F32		(1.1920929E-07F)

#endif
