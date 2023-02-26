/* 
 *
 * Name
 *    WdgM.h
 *
 * Purpose
 *   Include file for Watchdog Manager Module for CM101A_ExcpnHndlg contract folder 
 *   Note that some of these definitions exist in other files in the integration project, 
 *   but are brought in through inclusion in the actual WdgM.h
 *
*******************************************/
#ifndef _WDGM_H_
#define _WDGM_H_

#include "Std_Types.h"

typedef uint8 WdgM_SupervisedEntityIdType; 

typedef uint16 WdgM_SupervisedCycCntType;

typedef uint16 WdgM_ViolationCntType;

typedef struct {
    WdgM_SupervisedCycCntType FailedSupervisionRefCycles;
    WdgM_ViolationCntType DeadlineViolationCnt;
    WdgM_ViolationCntType ProgramFlowViolationCnt;
} WdgM_EntityStatusGType;

typedef struct {
    WdgM_SupervisedEntityIdType WdgMSupervisedEntityId;
    WdgM_EntityStatusGType *EntityStatusGRef;
} WdgM_SupervisedEntityType;

typedef struct {
    WdgM_SupervisedEntityIdType NrOfSupervisedEntities;
    const WdgM_SupervisedEntityType *WdgMSupervisedEntityRef;
	                                    /**< Reference to array of SE structures,
                                        [0...SE-1] */
}  WdgM_ConfigType; /* PRQA S 3205 */

extern void WdgM_CheckpointReached(uint8,uint8);

#endif  /*_WDGM_H_*/


