# The file is auto-grabbed on Fri Dec 19 11:14:54 2008, 
# please don't manually change it.

# It defines the GHS POSIX API functions for the following purpose:
# 1. color them in customized color
# 2. auto-complete them in MULTI Editor

%include "ghs_posix_ac.gsc"

language {
    general {
        case_sensitive = true
    }
    customized {
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/auth.h
	pattern += {"bsd_setruid"}
	pattern += {"bsd_setrgid"}
	pattern += {"PosixSysSetRealUID"}
	pattern += {"PosixSysSetRealGID"}
	pattern += {"bsd_seteuid"}
	pattern += {"bsd_setegid"}
	pattern += {"PosixSysSetEUID"}
	pattern += {"PosixSysSetEGID"}
	pattern += {"bsd_setsupgroups"}
	pattern += {"PosixSysSetSupGroups"}
	pattern += {"__set_inherited_authinfo"}
	pattern += {"login_by_name"}
	pattern += {"SuperGetNewUserAuth"}
	pattern += {"SuperGetNewGroupAuth"}
	pattern += {"SuperGetNewSupAuth"}
	pattern += {"LoginByName"}
	pattern += {"CheckUID"}
	pattern += {"CheckGID"}
	pattern += {"GetSupGroups"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/condition.h
	pattern += {"pthread_condattr_init"}
	pattern += {"pthread_condattr_destroy"}
	pattern += {"pthread_cond_init"}
	pattern += {"pthread_cond_destroy"}
	pattern += {"pthread_cond_signal"}
	pattern += {"pthread_cond_broadcast"}
	pattern += {"pthread_cond_wait"}
	pattern += {"pthread_cond_timedwait"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/ghsposix.h
	pattern += {"__ghsposix_init_InitialTask"}
	pattern += {"__ghsposix_cleanup_InitialTask"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/ghs_signals.h
	pattern += {"__timer_rereceive"}
	pattern += {"__EnqueueSignal"}
	pattern += {"__DequeueSignal"}
	pattern += {"__GenerateSignal"}
	pattern += {"__DequeueAll"}
	pattern += {"sigmask"}
	pattern += {"sigword"}
	pattern += {"GetCurrentPTLS"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/integrity_utils.h
	pattern += {"pi_get_task_name"}
	pattern += {"pi_get_exec_name"}
	pattern += {"time_to_timespec"}
	pattern += {"timespec_to_time"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/internals.h
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/mutex.h
	pattern += {"_A"}
	pattern += {"pthread_mutexattr_init"}
	pattern += {"pthread_mutexattr_destroy"}
	pattern += {"pthread_mutexattr_gettype"}
	pattern += {"pthread_mutexattr_settype"}
	pattern += {"pthread_mutexattr_getprotocol"}
	pattern += {"pthread_mutexattr_setprotocol"}
	pattern += {"pthread_mutexattr_getprioceiling"}
	pattern += {"pthread_mutexattr_setprioceiling"}
	pattern += {"pthread_mutex_init"}
	pattern += {"pthread_mutex_destroy"}
	pattern += {"pthread_mutex_lock"}
	pattern += {"pthread_mutex_trylock"}
	pattern += {"pthread_mutex_timedlock"}
	pattern += {"pthread_mutex_unlock"}
	pattern += {"pthread_mutex_getprioceiling"}
	pattern += {"pthread_mutex_setprioceiling"}
	pattern += {"pthread_once"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/options.h
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/plock.h
	pattern += {"__plock_init_address_space"}
	pattern += {"__plock_cleanup_address_space"}
	pattern += {"__plock_lock"}
	pattern += {"__plock_unlock"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/posix_cancelable.h
	pattern += {"__pthread_entercancelpoint"}
	pattern += {"__pthread_exitcancelpoint"}
	pattern += {"pthread_testcancel"}
	pattern += {"__posix_set_signal_restart"}
	pattern += {"__posix_set_signal_function"}
	pattern += {"__POSIX_CANCELLATION_INTERRUPTION_START"}
	pattern += {"pthread_self"}
	pattern += {"__POSIX_FUNCTION_CANCELLATION_INTERRUPTION_START"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/posix_env.h
	pattern += {"__posix_env_init"}
	pattern += {"__posix_env_cleanup"}
	pattern += {"__posix_env_is_valid"}
	pattern += {"__posix_env_init_address_space"}
	pattern += {"__posix_env_cleanup_address_space"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/posix_error.h
	pattern += {"__posix_error_set_flags"}
	pattern += {"PosixAssert"}
	pattern += {"PosixAbortIfNot"}
	pattern += {"PosixAbortIf"}
	pattern += {"PosixAbortOnError"}
	pattern += {"PosixDebugAssert"}
	pattern += {"PosixDebugAbortIf"}
	pattern += {"PosixDebugAbortIfNot"}
	pattern += {"PosixErrno"}
	pattern += {"PosixErrnoAbortIf"}
	pattern += {"PosixErrnoAbortIfNot"}
	pattern += {"PosixReturn"}
	pattern += {"PosixWarn"}
	pattern += {"PosixDebugWarn"}
	pattern += {"PosixDbString"}
	pattern += {"PosixExpect"}
	pattern += {"PosixCheckSuccess"}
	pattern += {"PosixDoAssert"}
	pattern += {"PosixDoAbortIfNot"}
	pattern += {"PosixDoAbortIf"}
	pattern += {"PosixDoAbortOnError"}
	pattern += {"PosixDoDebugAssert"}
	pattern += {"PosixDoDebugAbortIf"}
	pattern += {"PosixDoDebugAbortIfNot"}
	pattern += {"PosixDoErrno"}
	pattern += {"PosixDoErrnoAbortIf"}
	pattern += {"PosixDoErrnoAbortIfNot"}
	pattern += {"PosixDoReturn"}
	pattern += {"PosixDoWarn"}
	pattern += {"PosixDoDebugWarn"}
	pattern += {"PosixDoDbString"}
	pattern += {"PosixDoExpect"}
	pattern += {"PosixDoCheckSuccess"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/posix_server.h
	pattern += {"__posix_server_init"}
	pattern += {"__posix_server_cleanup"}
	pattern += {"__posix_server_main"}
	pattern += {"__pserver_null"}
	pattern += {"__pserver_reap"}
	pattern += {"__pserver_exit"}
	pattern += {"__pserver_makefifo"}
	pattern += {"__pserver_haltall"}
	pattern += {"__pserver_resumeall"}
	pattern += {"__pserver_exitall"}
	pattern += {"__ghs_times_stop"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/p_rwlock.h
	pattern += {"pthread_rwlockattr_destroy"}
	pattern += {"pthread_rwlockattr_init"}
	pattern += {"pthread_rwlock_destroy"}
	pattern += {"pthread_rwlock_init"}
	pattern += {"pthread_rwlock_rdlock"}
	pattern += {"pthread_rwlock_tryrdlock"}
	pattern += {"pthread_rwlock_trywrlock"}
	pattern += {"pthread_rwlock_wrlock"}
	pattern += {"pthread_rwlock_unlock"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_attr.h
	pattern += {"__ghsposix_pthread_attr_is_valid"}
	pattern += {"pthread_attr_init"}
	pattern += {"pthread_attr_destroy"}
	pattern += {"pthread_attr_setstacksize"}
	pattern += {"pthread_attr_getstacksize"}
	pattern += {"pthread_attr_setstackaddr"}
	pattern += {"pthread_attr_getstackaddr"}
	pattern += {"pthread_attr_setstack"}
	pattern += {"pthread_attr_getstack"}
	pattern += {"pthread_attr_setdetachstate"}
	pattern += {"pthread_attr_getdetachstate"}
	pattern += {"pthread_attr_setscope"}
	pattern += {"pthread_attr_getscope"}
	pattern += {"pthread_attr_setinheritsched"}
	pattern += {"pthread_attr_getinheritsched"}
	pattern += {"pthread_attr_setschedpolicy"}
	pattern += {"pthread_attr_getschedpolicy"}
	pattern += {"pthread_attr_setschedparam"}
	pattern += {"pthread_attr_getschedparam"}
	pattern += {"pthread_attr_setexecutablename"}
	pattern += {"pthread_attr_getexecutablename"}
	pattern += {"pthread_attr_dupexecutablename"}
	pattern += {"pthread_attr_setthreadname"}
	pattern += {"pthread_attr_getthreadname"}
	pattern += {"pthread_attr_dupthreadname"}
	pattern += {"pthread_attr_setstarthalted"}
	pattern += {"pthread_attr_getstarthalted"}
	pattern += {"pthread_attr_setguardsize"}
	pattern += {"pthread_attr_getguardsize"}
	pattern += {"pthread_attr_getthreadname_ptr"}
	pattern += {"pthread_attr_getexecutablename_ptr"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_cancel.h
	pattern += {"pthread_cancel"}
	pattern += {"pthread_setcancelstate"}
	pattern += {"pthread_setcanceltype"}
	pattern += {"__posix_cancel_handler"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_cleanup.h
	pattern += {"__pthread_cleanup_push"}
	pattern += {"__pthread_cleanup_pop"}
	pattern += {"pthread_cleanup_push"}
	pattern += {"pthread_cleanup_pop"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_create.h
	pattern += {"__pthread_entry_point_wrapper"}
	pattern += {"__pthread_reap"}
	pattern += {"pthread_create"}
	pattern += {"pthread_join"}
	pattern += {"pthread_detach"}
	pattern += {"pthread_exit"}
	pattern += {"__pthread_slay"}
	pattern += {"pthread_kernel_task"}
	pattern += {"pthread_equal"}
	pattern += {"pthread_atfork"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_key.h
	pattern += {"pthread_key_create"}
	pattern += {"pthread_key_delete"}
	pattern += {"pthread_setspecific"}
	pattern += {"pthread_getspecific"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_sched.h
	pattern += {"pthread_getschedparam"}
	pattern += {"pthread_setschedparam"}
	pattern += {"pthread_setschedprio"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_t.h
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_types.h
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/ptls.h
	pattern += {"__ptls_find"}
	pattern += {"__ptls_do"}
	pattern += {"__ptls_init"}
	pattern += {"__ptls_cleanup"}
	pattern += {"__ptls_is_valid"}
	pattern += {"__ptls_addressspace_init"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/ring.h
	pattern += {"__ring_init"}
	pattern += {"__ring_cleanup"}
	pattern += {"__ring_is_valid"}
	pattern += {"__ring_find_node"}
	pattern += {"__ring_find_data"}
	pattern += {"__ring_find_node_or_data"}
	pattern += {"__ring_add_node"}
	pattern += {"__ring_remove_node"}
	pattern += {"__ring_append"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/sysdb.h
	pattern += {"GetGroupInfo"}
	pattern += {"GetUserInfo"}
	pattern += {"GetGroupByName"}
	pattern += {"GetUserByName"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/spawn.h
	pattern += {"posix_spawn"}
	pattern += {"posix_spawnp"}
	pattern += {"posix_spawn_file_actions_init"}
	pattern += {"posix_spawn_file_actions_destroy"}
	pattern += {"posix_spawn_file_actions_addclose"}
	pattern += {"posix_spawn_file_actions_adddup2"}
	pattern += {"posix_spawn_file_actions_addopen"}
	pattern += {"posix_spawnattr_destroy"}
	pattern += {"posix_spawnattr_getsigdefault"}
	pattern += {"posix_spawnattr_getflags"}
	pattern += {"posix_spawnattr_getpgroup"}
	pattern += {"posix_spawnattr_getschedparam"}
	pattern += {"posix_spawnattr_getschedpolicy"}
	pattern += {"posix_spawnattr_getsigmask"}
	pattern += {"posix_spawnattr_init"}
	pattern += {"posix_spawnattr_setsigdefault"}
	pattern += {"posix_spawnattr_setflags"}
	pattern += {"posix_spawnattr_setpgroup"}
	pattern += {"posix_spawnattr_setschedparam"}
	pattern += {"posix_spawnattr_setschedpolicy"}
	pattern += {"posix_spawnattr_setsigmask"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/pthread.h
	pattern += {"PosixEnableCurrentTask"}
	pattern += {"PosixEnableCurrentTaskAsJoinable"}
%if 1
	# Data types
	pattern += {"INTEGRITYThreadLocalStorageStruct"}
#	pattern += {"__TaskKeyStruct"}
	pattern += {"__posix_cancel_info"}
	pattern += {"__posix_env_struct"}
	pattern += {"__posix_file_action"}
	pattern += {"__posix_signal_info"}
	pattern += {"__pserver_cmd"}
	pattern += {"__pthread_attr_t_struct"}
	pattern += {"__pthread_cond_struct"}
	pattern += {"__pthread_condattr_struct"}
	pattern += {"__pthread_mutex_struct"}
	pattern += {"__pthread_mutexattr_struct"}
	pattern += {"__pthread_state"}
#	pattern += {"__ptls_struct"}
	pattern += {"__ptls_t"}
	pattern += {"__ring"}
#	pattern += {"_cleanup"}
	pattern += {"_cleanup_t"}
	pattern += {"posix_spawn_file_actions_t"}
	pattern += {"posix_spawnattr_t"}
	pattern += {"pthread_attr_t"}
	pattern += {"pthread_cond_t"}
	pattern += {"pthread_condattr_t"}
	pattern += {"pthread_key_t"}
	pattern += {"pthread_mutex_t"}
	pattern += {"pthread_mutexattr_t"}
	pattern += {"pthread_once_t"}
	pattern += {"pthread_rwlock_t"}
	pattern += {"pthread_rwlockattr_t"}
	pattern += {"pthread_t"}
	pattern += {"sigaction"}
	pattern += {"timer_struct"}
	pattern += {"timespec"}
%endif
%if 1
	# Constants 
	pattern += {"DEFAULT_TYPE"}
	pattern += {"MAX_RWLOCK_WAITERS"}
	pattern += {"NCSIGS"}
	pattern += {"NUM_FORK_HANDLERS"}
	pattern += {"POSIX_ABORT_IF_FLAG"}
	pattern += {"POSIX_ABORT_IF_NOT_FLAG"}
	pattern += {"POSIX_ABORT_ON_ERROR_FLAG"}
	pattern += {"POSIX_ASSERT_FLAG"}
	pattern += {"POSIX_DBSTRING_FLAG"}
	pattern += {"POSIX_DEBUG_ABORT_IF_FLAG"}
	pattern += {"POSIX_DEBUG_ABORT_IF_NOT_FLAG"}
	pattern += {"POSIX_DEBUG_ASSERT_FLAG"}
	pattern += {"POSIX_DEBUG_WARN_FLAG"}
	pattern += {"POSIX_ERRNO_ABORT_IF_FLAG"}
	pattern += {"POSIX_ERRNO_ABORT_IF_NOT_FLAG"}
	pattern += {"POSIX_ERRNO_FLAG"}
	pattern += {"POSIX_RETURN_FLAG"}
	pattern += {"POSIX_SPAWN_RESETIDS"}
	pattern += {"POSIX_SPAWN_SETPGROUP"}
	pattern += {"POSIX_SPAWN_SETSCHEDPARAM"}
	pattern += {"POSIX_SPAWN_SETSCHEDULER"}
	pattern += {"POSIX_SPAWN_SETSIGDEF"}
	pattern += {"POSIX_SPAWN_SETSIGMASK"}
	pattern += {"POSIX_WARN_FLAG"}
	pattern += {"PTHREAD_CANCELED"}
	pattern += {"PTHREAD_CANCEL_ASYNCHRONOUS"}
	pattern += {"PTHREAD_CANCEL_DEFERRED"}
	pattern += {"PTHREAD_CANCEL_DISABLE"}
	pattern += {"PTHREAD_CANCEL_ENABLE"}
	pattern += {"PTHREAD_COND_INITIALIZER"}
	pattern += {"PTHREAD_CREATE_DETACHED"}
	pattern += {"PTHREAD_CREATE_JOINABLE"}
	pattern += {"PTHREAD_EXPLICIT_SCHED"}
	pattern += {"PTHREAD_INHERIT_SCHED"}
	pattern += {"PTHREAD_MUTEX_DEFAULT"}
	pattern += {"PTHREAD_MUTEX_ERRORCHECK"}
	pattern += {"PTHREAD_MUTEX_INITIALIZER"}
	pattern += {"PTHREAD_MUTEX_NORMAL"}
	pattern += {"PTHREAD_MUTEX_RECURSIVE"}
	pattern += {"PTHREAD_ONCE_INIT"}
	pattern += {"PTHREAD_PRIO_DEFAULT"}
	pattern += {"PTHREAD_PRIO_INHERIT"}
	pattern += {"PTHREAD_PRIO_NONE"}
	pattern += {"PTHREAD_PRIO_PROTECT"}
	pattern += {"PTHREAD_PROCESS_PRIVATE"}
	pattern += {"PTHREAD_PROCESS_SHARED"}
	pattern += {"PTHREAD_SCOPE_PROCESS"}
	pattern += {"PTHREAD_SCOPE_SYSTEM"}
	pattern += {"PTHREAD_STACK_MIN"}
	pattern += {"SIGNO_MAX"}
	pattern += {"SIGNO_MIN"}
	pattern += {"SIG_PRIO_OFFSET"}
	pattern += {"_INTEGRITY_SOURCE"}
	pattern += {"_POSIX2_C_BIND"}
	pattern += {"_POSIX2_C_VERSION"}
	pattern += {"_POSIX2_VERSION"}
	pattern += {"_POSIX_ASYNCHRONOUS_IO"}
	pattern += {"_POSIX_CHOWN_RESTRICTED"}
	pattern += {"_POSIX_FSYNC"}
	pattern += {"_POSIX_JOB_CONTROL"}
	pattern += {"_POSIX_MEMLOCK"}
	pattern += {"_POSIX_MEMLOCK_RANGE"}
	pattern += {"_POSIX_MESSAGE_PASSING"}
	pattern += {"_POSIX_READER_WRITER_LOCKS"}
	pattern += {"_POSIX_REALTIME_SIGNALS"}
	pattern += {"_POSIX_REGEXP"}
	pattern += {"_POSIX_SAVED_IDS"}
	pattern += {"_POSIX_SEMAPHORES"}
	pattern += {"_POSIX_SHARED_MEMORY_OBJECTS"}
	pattern += {"_POSIX_SHELL"}
	pattern += {"_POSIX_SPAWN"}
	pattern += {"_POSIX_SYNCHRONIZED_IO"}
	pattern += {"_POSIX_THREADS"}
	pattern += {"_POSIX_THREAD_ATTR_STACKADDR"}
	pattern += {"_POSIX_THREAD_ATTR_STACKSIZE"}
	pattern += {"_POSIX_THREAD_PRIORITY_SCHEDULING"}
	pattern += {"_POSIX_THREAD_PRIO_INHERIT"}
	pattern += {"_POSIX_THREAD_PRIO_PROTECT"}
	pattern += {"_POSIX_THREAD_SAFE_FUNCTIONS"}
	pattern += {"_POSIX_TIMEOUTS"}
	pattern += {"_POSIX_TIMERS"}
	pattern += {"_POSIX_VDISABLE"}
	pattern += {"_POSIX_VERSION"}
	pattern += {"__DEFAULT_POSIX_SERVER_PRIORITY"}
	pattern += {"__DIAGBOOL"}
	pattern += {"__GETGR_R_SIZE_MAX"}
	pattern += {"__GETPW_R_SIZE_MAX"}
	pattern += {"__GHSPOSIX_PTHREAD_ATTR_CHECK"}
	pattern += {"__GHSPOSIX_PTHREAD_DO_EXTRA_WORK"}
	pattern += {"__GHSPOSIX_PTHREAD_EXTRA_STRICT_ERRORS"}
	pattern += {"__MAX_ACTIONS"}
	pattern += {"__MAX_NAME"}
	pattern += {"__POSIX_CANCELLATION_INTERRUPTION_CLEANUP"}
	pattern += {"__POSIX_CANCELLATION_INTERRUPTION_END"}
	pattern += {"__POSIX_ERROR_FILENO"}
	pattern += {"__POSIX_FUNCTION_CANCELLATION_INTERRUPTION_END"}
	pattern += {"__POSIX_SERVER_NAME"}
	pattern += {"__POSIX_SERVER_PRIORITY"}
	pattern += {"__POSIX_THREAD_CANCELLATION_POINT"}
	pattern += {"__PTHREAD_STACK_DEFAULT"}
	pattern += {"__SIGCANCEL"}
	pattern += {"__SPAWN_CLOSE"}
	pattern += {"__SPAWN_DUP2"}
	pattern += {"__SPAWN_OPEN"}
	pattern += {"__ghsposix_inline"}
	pattern += {"__plock_reason_max"}
	pattern += {"__pserver_exit_cmd"}
	pattern += {"__pserver_exitall_cmd"}
	pattern += {"__pserver_haltall_cmd"}
	pattern += {"__pserver_makefifo_cmd"}
	pattern += {"__pserver_max_cmd"}
	pattern += {"__pserver_null_cmd"}
	pattern += {"__pserver_reap_cmd"}
	pattern += {"__pserver_resumeall_cmd"}
	pattern += {"__pthread_state_detached"}
	pattern += {"__pthread_state_joinable"}
	pattern += {"__pthread_state_joined"}
	pattern += {"__pthread_state_max"}
	pattern += {"__pthread_state_reaping"}
	pattern += {"__pthread_state_zombie"}
%endif
    }
}
