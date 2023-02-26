
#ifndef NXTRFIL_TESTHARNESS_H
#define NXTRFIL_TESTHARNESS_H

#include "Std_Types.h"

FUNC(void, NxtrFil_CODE) Test_FilLpUpdGain(float32 FrqPole, 
											float32 TiStep, 
											P2VAR(FilLpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilLpRecPtr);

FUNC(float32, NxtrFil_CODE) Test_FilLpUpdOutp(float32 Inp, 
												P2VAR(FilLpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilLpRecPtr);

FUNC(void, NxtrFil_CODE) Test_FilLpInit(float32 Inp,
										float32 FrqPole, 
										float32 TiStep, 
										P2VAR(FilLpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilLpRecPtr);

FUNC(void, NxtrFil_CODE) Test_FilHpUpdGain(float32 FrqPole, 
											float32 TiStep, 
											P2VAR(FilHpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilHpRecPtr);

FUNC(float32, NxtrFil_CODE) Test_FilHpUpdOutp(float32 Inp, 
												P2VAR(FilHpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilHpRecPtr);

FUNC(void, NxtrFil_CODE) Test_FilHpInit(float32 Inp,
										float32 FrqPole, 
										float32 TiStep, 
										P2VAR(FilHpRec1, AUTOMATIC, NxtrFil_APPL_VAR) FilHpRecPtr);

#endif
