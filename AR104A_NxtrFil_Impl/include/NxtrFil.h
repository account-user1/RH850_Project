/*****************************************************************************
* Copyright 2015 Nexteer 
* Nexteer Confidential
*
* Module File Name: NxtrFil.h
* Module Description: function prototypes and inline function definitions for the Nexteer Filter library component
* Project           : CBD
* Author            : Kathleen Creager
*****************************************************************************
* Version Control:
* %version:          1 %
* %derived_by:       nz63rn %
*---------------------------------------------------------------------------------------------------------------------
* Date      Rev      Author         Change Description                                                           SCR #
* -------   -------  --------  ---------------------------------------------------------------------------     ----------
* 02/25/15  1        KMC       initial version                                                                 EA4#166
******************************************************************************/
/******************************************* Multiple Include Protection *********************************************/
#ifndef NXTRFIL_H
#define NXTRFIL_H

/************************************************ Include Statements *************************************************/
#include "Std_Types.h"
#include "ArchGlbPrm.h"
#include "NxtrMath.h"

/******************************************** File Level Rule Deviations *********************************************/
/* MISRA-C:2004 Rule 1.1 [NXTRDEV 1.1.1]: Inline functions are used for Nexteer filter library functions to allow for throughput optimization */
/* MISRA-C:2004 Rule 8.5 [NXTRDEV 8.5.1]: Function definitions are required to be in a header for inline function usage */

/*********************************************** Exported Declarations ***********************************************/
typedef struct {
    VAR(float32, AUTOMATIC) FilSt;
    VAR(float32, AUTOMATIC) FilGain;
}FilLpRec1;

typedef struct {
    VAR(FilLpRec1, AUTOMATIC)	FilLpRec;
    VAR(float32, AUTOMATIC)		CorrnFac;
}FilHpRec1;

INLINE FUNC(void, NxtrFil_CODE) FilLpUpdGain(float32 FrqPole, 
												float32 TiStep, 
												P2VAR(FilLpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilLpRecPtr);

INLINE FUNC(float32, NxtrFil_CODE) FilLpUpdOutp_f32(float32 Inp, 
												P2VAR(FilLpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilLpRecPtr);

INLINE FUNC(void, NxtrFil_CODE) FilLpInit(float32 Inp,
											float32 FrqPole, 
											float32 TiStep, 
											P2VAR(FilLpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilLpRecPtr);

INLINE FUNC(void, NxtrFil_CODE) FilHpUpdGain(float32 FrqPole, 
												float32 TiStep, 
												P2VAR(FilHpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilHpRecPtr);										

INLINE FUNC(float32, NxtrFil_CODE) FilHpUpdOutp_f32(float32 Inp, 
												P2VAR(FilHpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilHpRecPtr);
													
INLINE FUNC(void, NxtrFil_CODE) FilHpInit(float32 Inp,
											float32 FrqPole, 
											float32 TiStep, 
											P2VAR(FilHpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilHpRecPtr);
														
														


/*############################### 1 LP1-CF ###################################*/
/*******************************************************************************
  * Name		:	FilLpUpdGain
  * Description	:	The equation to calculate filter gain is:
  *				:	FilGain = 1 - exp(-2PI * FrqPole * TiStep)
  * Inputs		:   FrqPole  :- pole frequency (Hz)
  *             :   TiStep   :- filter sampling interval (sec)
  * Outputs		:	FilLpRecPtr->FilGain :- low pass filter gain
  * Usage Notes :   1) When (FrqPole * TiStep) > 13.7 (approx), the exponential results
  *                 in floating point underflow and the gain will be set to 1.0F
  *                 2) FilLpRecPtr must have a valid pointer value; for throughput
  *                 optimization no runtime check is done
 *****************************************************************************/
INLINE FUNC(void, NxtrFil_CODE) FilLpUpdGain(float32 FrqPole, 
												float32 TiStep, 
												P2VAR(FilLpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilLpRecPtr) 
{
	FilLpRecPtr->FilGain = 1.0F - Exp_f32(-ARCHGLBPRM_2PI_ULS_F32 * FrqPole * TiStep);
}


/*******************************************************************************
  * Name		:	FilLpUpdOutp_f32
  * Description	:	The equation to calculate the filter output is :
  *				:	Outp = ((Inp - FilSt) * FilGain) + FilSt
  *                 where FilSt is the filter state variable (= previous output value)
  * Inputs		:	Inp    :- input to the low pass filter
  *				:	FilLpRecPtr->FilSt	:- low pass filter state
  *             :   FilLpRecPtr->FilGain :- low pass filter gain
  * Outputs		:	Returns low pass filter output 
  * 			: 	FilLpRecPtr->FilSt	:- low pass filter state
  * Usage Notes :   1) FilLpRecPtr must have a valid pointer value; for throughput
  *                 optimization no runtime check is done
  *****************************************************************************/
INLINE FUNC(float32, NxtrFil_CODE) FilLpUpdOutp_f32(float32 Inp, 
												P2VAR(FilLpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilLpRecPtr)
{
	FilLpRecPtr->FilSt = ((Inp - FilLpRecPtr->FilSt) * FilLpRecPtr->FilGain) + FilLpRecPtr->FilSt;
	return FilLpRecPtr->FilSt;
}

/*******************************************************************************
  * Name		:	FilLpInit
  * Description	:	Initializes filter state and filter gain
  *				 	FilSt = Inp
  *                 Uses FilLpUpdGain() to initialize FilGain
  * Inputs		:	Inp		:- initial input to the filter
  *             :   FrqPole	:- pole frequency (Hz)
  *             :   TiStep	:- filter sampling interval (sec)
  * Outputs		:	FilLpRecPtr->FilSt	:- low pass filter state
  *             :   FilLpRecPtr->FilGain :- low pass filter gain
  * Usage Notes :   1) When (FrqPole * TiStep) > 13.7 (approx), the exponential results
  *                 in floating point underflow and the gain will be set to 1.0F
  *                 2) FilLpRecPtr must have a valid pointer value; for throughput
  *                 optimization no runtime check is done
  *****************************************************************************/
INLINE FUNC(void, NxtrFil_CODE) FilLpInit(float32 Inp,
											float32 FrqPole, 
											float32 TiStep, 
											P2VAR(FilLpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilLpRecPtr) 
{
	FilLpRecPtr->FilSt = Inp; 
	FilLpUpdGain (FrqPole, TiStep, FilLpRecPtr);
}



/*############################### 1 HP-CF ####################################*/
/*******************************************************************************
  * Name		:	FilHpUpdGain
  * Description	:	The equation to calculate the correction factor is:
  *				:	CF = (1 + exp(2PI * FrqPole * TiStep)) / (2 * sqrt(1 + ((2 * FrqPole * TiStep)^2)))
  * Inputs		:   FrqPole  :- pole frequency (Hz)
  *             :   TiStep   :- filter sampling interval (sec)
  * Outputs		:	FilHpRecPtr->CorrnFac  :- correction factor
  *             :   FilHpRecPtr->FilLpRec.FilGain :- low pass filter gain
  * Usage Notes :   1) When (FrqPole * TiStep) > 13.7 (approx), the exponential results
  *                 in floating point underflow and the gain will be set to 1.0F.
  *                 2) FilHpRecPtr must have a valid pointer value; for throughput
  *                 optimization no runtime check is done
  *****************************************************************************/
INLINE FUNC(void, NxtrFil_CODE) FilHpUpdGain(float32 FrqPole, 
												float32 TiStep, 
												P2VAR(FilHpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilHpRecPtr) 
{
	FilHpRecPtr->CorrnFac = (1.0f + Exp_f32(ARCHGLBPRM_2PI_ULS_F32 * FrqPole * TiStep)) / 
										(2.0f * Sqrt_f32(1.0f + ((2.0f * FrqPole * TiStep) * (2.0f * FrqPole * TiStep)))); 
	FilLpUpdGain(FrqPole, TiStep, &(FilHpRecPtr->FilLpRec));
}



/*******************************************************************************
  * Name		:	FilHpUpdOutp_f32
  * Description	:	The equation to calculate the high pass filter output is :
  *				:	Outp = (Inp - LpOutp) * CorrnFac
  *                 where LpOutp is the filter output of the low pass filter (FilLpRec)
  * Inputs		:	Inp    :- input to the high pass filter
  *             :   FilHpRecPtr->CorrnFac :- correction factor
  *             :   FilHpRecPtr->FilLpRec.FilSt :- low pass filter state
  *             :   FilHpRecPtr->FilLpRec.FilGain :- low pass filter gain
  * Outputs		:	Returns high pass filter output
  *             :   FilHpRecPtr->FilLpRec.FilSt :- low pass filter state
  * Usage Notes :   1) FilHpRecPtr must have a valid pointer value; for throughput
  *                 optimization no runtime check is done
  *****************************************************************************/
INLINE FUNC(float32, NxtrFil_CODE) FilHpUpdOutp_f32(float32 Inp, 
												P2VAR(FilHpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilHpRecPtr)
{	
	return ((Inp - FilLpUpdOutp_f32(Inp, &(FilHpRecPtr->FilLpRec))) * FilHpRecPtr->CorrnFac);
}


/*******************************************************************************
  * Name		:	FilHpInit
  * Description	:	Initializes the high pass filter record --
  *             :   correction factor and low pass filter record  
  * Inputs		:	Inp    :- initial input to the filter
  *             :   FrqPole  :- pole frequency (Hz)
  *             :   TiStep   :- filter sampling interval (sec)
  * Outputs		:	FilHpRecPtr->CorrnFac :- correction factor
  *             :   FilHpRecPtr->FilLpRec.FilSt :- low pass filter state
  *             :   FilHpRecPtr->FilLpRec.FilGain :- low pass filter gain
  * Usage Notes :   1) When (FrqPole * TiStep) > 13.7 (approx), the exponential results
  *                 in floating point underflow and the gain will be set to 1.0F.
  *                 2) FilHpRecPtr must have a valid pointer value; for throughput
  *                 optimization no runtime check is done
  *****************************************************************************/
INLINE FUNC(void, NxtrFil_CODE) FilHpInit(float32 Inp,
											float32 FrqPole, 
											float32 TiStep, 
											P2VAR(FilHpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilHpRecPtr) 
{
	FilLpInit(Inp, FrqPole, TiStep, &(FilHpRecPtr->FilLpRec)); 
	FilHpUpdGain(FrqPole, TiStep, FilHpRecPtr);
}

#endif /* end of ifndef NXTRFIL_H */

