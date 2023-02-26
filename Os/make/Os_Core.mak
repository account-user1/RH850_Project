###############################################################################
# File Name  : Os_Core.inc                                                    #
# Description: Autosar makefile Template                                      #
#              This makefile is a template to implement the common            #
#              features of each project.                                      #
#              It is included by the Global.Makefile.target.make.$(Version)   #
#              and is supported from version 3.24 .                           #
#                                                                             #
#-----------------------------------------------------------------------------#
#               C O P Y R I G H T                                             #
#-----------------------------------------------------------------------------#
# Copyright (c) 2014 by Vector Informatik GmbH.  All rights reserved.         #
#                                                                             #
#-----------------------------------------------------------------------------#
#               A U T H O R   I D E N T I T Y                                 #
#-----------------------------------------------------------------------------#
# Initials     Name                      Company                              #
# --------     ---------------------     -------------------------------------#
# Dfe          David Feuerstein          Vector Informatik GmbH               #
#-----------------------------------------------------------------------------#
#               R E V I S I O N   H I S T O R Y                               #
#-----------------------------------------------------------------------------#
# Date         Version  Sign Description                                      #
# ----------   -------  ---- -------------------------------------------------#
# 2016-03-24   1.00     Dfe  Initial Version                                  #
#-----------------------------------------------------------------------------#
# TemplateVersion = 1.0                                                       #
# MAKEFILE        = 0.1                                                       #
###############################################################################

CC_FILES_TO_BUILD       +=  Os\Os_AccessCheck.c      \
                            Os\Os_Alarm.c            \
                            Os\Os_Application.c      \
                            Os\Os_Barrier.c          \
                            Os\Os_Bit.c              \
                            Os\Os_BitArray.c         \
                            Os\Os_Core.c             \
                            Os\Os_Counter.c          \
                            Os\Os_Deque.c            \
                            Os\Os_Error.c            \
                            Os\Os_Event.c            \
                            Os\Os_Fifo.c             \
                            Os\Os_Fifo08.c           \
                            Os\Os_Fifo16.c           \
                            Os\Os_Fifo32.c           \
                            Os\Os_FifoPtr.c          \
                            Os\Os_FifoRef.c          \
                            Os\Os_Hook.c             \
                            Os\Os_Interrupt.c        \
                            Os\Os_Ioc.c              \
                            Os\Os_Isr.c              \
                            Os\Os_Job.c              \
                            Os\Os_Lock.c             \
                            Os\Os_MemoryProtection.c \
                            Os\Os_Peripheral.c       \
                            Os\Os_PriorityQueue.c    \
                            Os\Os_Resource.c         \
                            Os\Os_Scheduler.c        \
                            Os\Os_ScheduleTable.c    \
                            Os\Os_ServiceFunction.c  \
                            Os\Os_Spinlock.c         \
                            Os\Os_Stack.c            \
                            Os\Os_Task.c             \
                            Os\Os_Thread.c           \
                            Os\Os_Timer.c            \
                            Os\Os_TimingProtection.c \
                            Os\Os_Trace.c            \
                            Os\Os_Trap.c             \
                            Os\Os_XSignal.c

GENERATED_SOURCE_FILES  +=  $(GENDATA_DIR)\Os_AccessCheck_Lcfg.c          \
                            $(GENDATA_DIR)\Os_Alarm_Lcfg.c                \
                            $(GENDATA_DIR)\Os_Application_Lcfg.c          \
                            $(GENDATA_DIR)\Os_Barrier_Lcfg.c              \
                            $(GENDATA_DIR)\Os_Core_Lcfg.c                 \
                            $(GENDATA_DIR)\Os_Counter_Lcfg.c              \
                            $(GENDATA_DIR)\Os_Hook_Lcfg.c                 \
                            $(GENDATA_DIR)\Os_Ioc_Lcfg.c                  \
                            $(GENDATA_DIR)\Os_Isr_Lcfg.c                  \
                            $(GENDATA_DIR)\Os_MemoryProtection_Lcfg.c     \
                            $(GENDATA_DIR)\Os_Peripheral_Lcfg.c           \
                            $(GENDATA_DIR)\Os_Resource_Lcfg.c             \
                            $(GENDATA_DIR)\Os_Scheduler_Lcfg.c            \
                            $(GENDATA_DIR)\Os_ScheduleTable_Lcfg.c        \
                            $(GENDATA_DIR)\Os_ServiceFunction_Lcfg.c      \
                            $(GENDATA_DIR)\Os_Spinlock_Lcfg.c             \
                            $(GENDATA_DIR)\Os_Stack_Lcfg.c                \
                            $(GENDATA_DIR)\Os_Task_Lcfg.c                 \
                            $(GENDATA_DIR)\Os_TimingProtection_Lcfg.c     \
                            $(GENDATA_DIR)\Os_Trace_Lcfg.c                \
                            $(GENDATA_DIR)\Os_XSignal_Lcfg.c
