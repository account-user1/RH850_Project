/*
 * NxtrDet.h
 *
 *  Created on: Sep 30, 2015
 *      Author: cz7lt6
 */

#ifndef CM800A_SYNCCRC_IMPL_TOOLS_CONTRACT_NXTRDET_H_
#define CM800A_SYNCCRC_IMPL_TOOLS_CONTRACT_NXTRDET_H_

#define DET_ENABLED

#define NXTRDET_SYNCCRCMODID_CNT_U16    (65534U)
#ifdef DET_ENABLED
    #define NXTRDET_SYNCCRC             STD_ON
#else
    #define NXTRDET_NXTRMCUSUPRTLIB     STD_OFF
#endif

/* From Det.h */
FUNC(Std_ReturnType, DET_CODE) Det_ReportError( uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId ); /* PRQA S 850 */ /* MD_DET_0850 */

#endif /* CM800A_SYNCCRC_IMPL_TOOLS_CONTRACT_NXTRDET_H_ */
