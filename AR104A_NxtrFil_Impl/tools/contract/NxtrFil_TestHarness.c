
#include "Std_Types.h"
#include "NxtrFil.h"
#include "NxtrFil_TestHarness.h"

FUNC(void, NxtrFil_CODE) Test_FilLpUpdGain(float32 FrqPole, 
											float32 TiStep, 
											P2VAR(FilLpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilLpRecPtr)
{
	FilLpUpdGain (FrqPole, TiStep, FilLpRecPtr);
}

FUNC(float32, NxtrFil_CODE) Test_FilLpUpdOutp(float32 Inp, 
												P2VAR(FilLpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilLpRecPtr)
{
	return(FilLpUpdOutp_f32(Inp, FilLpRecPtr));
}

FUNC(void, NxtrFil_CODE) Test_FilLpInit(float32 Inp,
										float32 FrqPole, 
										float32 TiStep, 
										P2VAR(FilLpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilLpRecPtr)
{
	FilLpInit(Inp, FrqPole, TiStep, FilLpRecPtr);
}

FUNC(void, NxtrFil_CODE) Test_FilHpUpdGain(float32 FrqPole, 
											float32 TiStep, 
											P2VAR(FilHpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilHpRecPtr)
{
	FilHpUpdGain (FrqPole, TiStep, FilHpRecPtr);
}

FUNC(float32, NxtrFil_CODE) Test_FilHpUpdOutp(float32 Inp, 
												P2VAR(FilHpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilHpRecPtr)
{
	return(FilHpUpdOutp_f32(Inp, FilHpRecPtr));
}

FUNC(void, NxtrFil_CODE) Test_FilHpInit(float32 Inp,
										float32 FrqPole, 
										float32 TiStep, 
										P2VAR(FilHpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilHpRecPtr)
{
	FilHpInit(Inp, FrqPole, TiStep, FilHpRecPtr);
}


