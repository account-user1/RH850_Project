/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2015-2016 by Vector Informatik GmbH.                                             All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  
 *        \brief  Os Header for RTE Analyzer
 *
 *      \details  This header provides the defines, typedefs and prototypes of the OS module
 *                that are required for the static analysis with RTE Analyzer.
 *
 *********************************************************************************************************************/
 /**********************************************************************************************************************
 *  AUTHOR IDENTITY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Name                          Initials      Company
 *  -------------------------------------------------------------------------------------------------------------------
 *  Sascha Sommer                 So            Vector Informatik GmbH
 *  -------------------------------------------------------------------------------------------------------------------
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Version   Date        Author  Change Id     Description
 *  -------------------------------------------------------------------------------------------------------------------
 *  01.00.00  2015-07-31  So                    Initial creation
 *  01.01.00  2016-02-08  So                    Added GetElapsedValue and GetCounterValue
 *********************************************************************************************************************/
#ifndef _OS_H
# define _OS_H

# define OSTICKDURATION 1000

# include "Std_Types.h"

typedef uint32 EventMaskType;
typedef uint32 TaskType;
typedef uint8 StatusType;
typedef uint32 TickType;
typedef uint32 AlarmType;
typedef uint32 ResourceType;
typedef uint32 SpinlockIdType;
typedef uint32 CoreIdType;
typedef uint32 ScheduleTableType;
typedef uint32 CounterType;


# define TASK(x)  void x##func(void)


# define INVALID_TASK ((TaskType)(0xFFFFFFFFUL))

# define E_OS_ACCESS     1
# define E_OS_NOFUNC     5
# define E_OS_DISABLEDINT          12


# include "Os_Cfg.h"


void SuspendOSInterrupts(void);
void ResumeOSInterrupts(void);
void SuspendAllInterrupts(void);
void ResumeAllInterrupts(void);
void DisableAllInterrupts(void);
void EnableAllInterrupts(void);

StatusType GetResource(ResourceType ResId);
StatusType ReleaseResource(ResourceType ResId);

StatusType GetSpinlock(SpinlockIdType SpinlockId);
StatusType ReleaseSpinlock(SpinlockIdType SpinlockId);

StatusType ActivateTask(TaskType taskIndex);
StatusType TerminateTask(void);
StatusType ChainTask(TaskType taskIndex);
StatusType SetEvent(TaskType taskIndex, EventMaskType setMask);
StatusType SetRelAlarm(AlarmType alarmID, TickType deltaTicks, TickType cycle);
StatusType CancelAlarm(AlarmType alarmID);
StatusType ClearEvent(EventMaskType Mask);
StatusType GetEvent(TaskType taskIndex, EventMaskType* Event);
StatusType WaitEvent(EventMaskType mask);
StatusType Schedule(void);
StatusType GetTaskID(TaskType* TaskId);
CoreIdType GetCoreID(void);
StatusType StartScheduleTableRel(ScheduleTableType ScheduleTableID, TickType Offset);
StatusType NextScheduleTable(ScheduleTableType ScheduleTableID_current, ScheduleTableType  ScheduleTableID_next);
StatusType StopScheduleTable(ScheduleTableType ScheduleTableID);
StatusType GetCounterValue(CounterType counter, TickType* value);
StatusType GetElapsedValue(CounterType counter, TickType* value, TickType* elapsedValue);

# ifndef DISABLE_MICROSAR_LOCK_APIS

void osDisableLevelUM(void);
void osEnableLevelUM(void);
void osEnableGlobalUM(void);
void osDisableGlobalUM(void);
#  define osDisableLevelUM osDisableLevelUM
#  define osEnableLevelUM osEnableLevelUM
#  define osDisableGlobalUM osDisableGlobalUM
#  define osEnableGlobalUM osEnableGlobalUM

void osDisableLevelKM(void);
void osEnableLevelKM(void);
void osEnableGlobalKM(void);
void osDisableGlobalKM(void);
#  define osDisableLevelKM osDisableLevelKM
#  define osEnableLevelKM osEnableLevelKM
#  define osDisableGlobalKM osDisableGlobalKM
#  define osEnableGlobalKM osEnableGlobalKM

void osDisableLevelAM(void);
void osEnableLevelAM(void);
void osEnableGlobalAM(void);
void osDisableGlobalAM(void);
#  define osDisableLevelAM osDisableLevelAM
#  define osEnableLevelAM osEnableLevelAM
#  define osDisableGlobalAM osDisableGlobalAM
#  define osEnableGlobalAM osEnableGlobalAM

# endif

#endif
