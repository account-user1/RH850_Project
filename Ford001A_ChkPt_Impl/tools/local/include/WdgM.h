#include "Std_Types.h"
#include "WdgM_PBcfg.h"

typedef uint8 WdgM_SupervisedEntityIdType;
typedef uint16 WdgM_CheckpointIdType;

FUNC (Std_ReturnType, WDGM_CODE) WdgM_CheckpointReached
      ( VAR (WdgM_SupervisedEntityIdType, AUTOMATIC) SEID
      , VAR (WdgM_CheckpointIdType, AUTOMATIC) CPID
      );