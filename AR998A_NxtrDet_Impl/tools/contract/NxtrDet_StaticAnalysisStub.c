
#include "Std_Types.h"
#include "NxtrDet.h"

static const uint16 NxtrMcuSuprtLibModId = NXTRDET_NXTRMCUSUPRTLIBMODID_CNT_U16;
static const uint16 SyncCrcModId = NXTRDET_SYNCCRCMODID_CNT_U16;
static const uint16 DiagcMgrModId = NXTRDET_DIAGCMGRMODID_CNT_U16;
static const uint16 ImcArbnModId = NXTRDET_IMCARBNMODID_CNT_U16;

#if (STD_ON == NXTRDET_NXTRMCUSUPRTLIB)
	static const boolean NxtrMcuSuprtLibDet = TRUE;
#else
	static const boolean NxtrMcuSuprtLibDet = FALSE;
#endif

#if (STD_ON == NXTRDET_SYNCCRC)
	static const boolean SyncCrcDet = TRUE;
#else
	static const boolean SyncCrcDet = FALSE;
#endif

#if (STD_ON == NXTRDET_DIAGCMGR)
	static const boolean DiagcMgrDet = TRUE;
#else
	static const boolean DiagcMgrDet = FALSE;
#endif

#if (STD_ON == NXTRDET_IMCARBN)
	static const boolean ImcArbnDet = TRUE;
#else
	static const boolean ImcArbnDet = FALSE;
#endif

