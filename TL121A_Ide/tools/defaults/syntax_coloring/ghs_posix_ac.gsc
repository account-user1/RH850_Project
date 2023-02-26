# The file is auto-grabbed on Wed May 25 16:45:09 2011, 
# please don't manually change it.

# It defines GHS POSIX API for auto-completion purpose only.

language {
    general {
        case_sensitive = true
    }
    autocomplete {
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/auth.h
	name += {"bsd_setruid;int bsd_setruid(uid_t uid, Object super_auth)"}
	name += {"bsd_setrgid;int bsd_setrgid(gid_t gid, Object super_auth)"}
	name += {"PosixSysSetRealUID;Error PosixSysSetRealUID(uid_t uid, Object super_auth)"}
	name += {"PosixSysSetRealGID;Error PosixSysSetRealGID(gid_t gid, Object super_auth)"}
	name += {"bsd_seteuid;int bsd_seteuid(uid_t uid, Object auth)"}
	name += {"bsd_setegid;int bsd_setegid(gid_t gid, Object auth)"}
	name += {"PosixSysSetEUID;Error PosixSysSetEUID(uid_t uid, Object auth)"}
	name += {"PosixSysSetEGID;Error PosixSysSetEGID(gid_t gid, Object auth)"}
	name += {"bsd_setsupgroups;int bsd_setsupgroups(Object auth)"}
	name += {"PosixSysSetSupGroups;Error PosixSysSetSupGroups(Object auth)"}
	name += {"__set_inherited_authinfo;void __set_inherited_authinfo(uid_t uid, Object uid_auth, uid_t suid, Object suid_auth, uid_t euid, Object euid_auth, gid_t gid, Object gid_auth, gid_t sgid, Object sgid_auth, gid_t egid, Object egid_auth, int n_sups, gid_t *supgids, Object supgroup_auth)"}
	name += {"login_by_name;int login_by_name(char *name, char *passwd)"}
	name += {"SuperGetNewUserAuth;Error SuperGetNewUserAuth(Object super_auth, uid_t uid, Object *new_auth)"}
	name += {"SuperGetNewGroupAuth;Error SuperGetNewGroupAuth(Object super_auth, gid_t gid, Object *new_auth)"}
	name += {"SuperGetNewSupAuth;Error SuperGetNewSupAuth(Object super_auth, Value *num_gids, gid_t *gids, Object *new_auth)"}
	name += {"LoginByName;Error LoginByName(const char *name, const char *passwd, uid_t *cur_uid, Object *uid_auth_object, gid_t *cur_gid, Object *gid_auth_object, int *num_sups, gid_t *sups, Object *supgroup_auth_object)"}
	name += {"CheckUID;Error CheckUID(uid_t uid, Object auth)"}
	name += {"CheckGID;Error CheckGID(gid_t gid, Object auth)"}
	name += {"GetSupGroups;Error GetSupGroups(Object auth_id, int *n_sups, gid_t *supgids)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/condition.h
	name += {"pthread_condattr_init;int pthread_condattr_init(pthread_condattr_t *attr)"}
	name += {"pthread_condattr_destroy;int pthread_condattr_destroy(pthread_condattr_t *attr)"}
	name += {"pthread_cond_init;int pthread_cond_init(pthread_cond_t *cond, const pthread_condattr_t *attr)"}
	name += {"pthread_cond_destroy;int pthread_cond_destroy(pthread_cond_t *cond)"}
	name += {"pthread_cond_signal;int pthread_cond_signal(pthread_cond_t *cond)"}
	name += {"pthread_cond_broadcast;int pthread_cond_broadcast(pthread_cond_t *cond)"}
	name += {"pthread_cond_wait;int pthread_cond_wait(pthread_cond_t *cond, pthread_mutex_t *mutex)"}
	name += {"pthread_cond_timedwait;int pthread_cond_timedwait(pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec *abstime)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/ghsposix.h
	name += {"__ghsposix_init_InitialTask;void __ghsposix_init_InitialTask(void)"}
	name += {"__ghsposix_cleanup_InitialTask;void __ghsposix_cleanup_InitialTask(void)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/ghs_signals.h
	name += {"__timer_rereceive;void __timer_rereceive(struct timer_struct *t)"}
	name += {"__EnqueueSignal;int __EnqueueSignal(pid_t pid, int signo, int code, union sigval value, void *from)"}
	name += {"__DequeueSignal;void __DequeueSignal(int signo, siginfo_t *info, void **from)"}
	name += {"__GenerateSignal;int __GenerateSignal(pthread_t thread, int sig, int isqueued)"}
	name += {"__DequeueAll;void __DequeueAll(int sig)"}
	name += {"sigmask;sigmask(n)"}
	name += {"sigword;sigword(n)"}
	name += {"GetCurrentPTLS;GetCurrentPTLS()"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/integrity_utils.h
	name += {"pi_get_task_name;int pi_get_task_name(Task task, char **buf, unsigned long *buflen)"}
	name += {"pi_get_exec_name;int pi_get_exec_name(Task task, char **buf, unsigned long *buflen)"}
	name += {"time_to_timespec;void time_to_timespec(struct timespec *to, const Time *from)"}
	name += {"timespec_to_time;void timespec_to_time(Time *to, const struct timespec *from)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/internals.h
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/mutex.h
	name += {"_A;_A(x)"}
	name += {"pthread_mutexattr_init;int pthread_mutexattr_init(pthread_mutexattr_t *_attr)"}
	name += {"pthread_mutexattr_destroy;int pthread_mutexattr_destroy(pthread_mutexattr_t *_attr)"}
	name += {"pthread_mutexattr_gettype;int pthread_mutexattr_gettype(const pthread_mutexattr_t *_attr, int *_type)"}
	name += {"pthread_mutexattr_settype;int pthread_mutexattr_settype(pthread_mutexattr_t *_attr, int _type)"}
	name += {"pthread_mutexattr_getprotocol;int pthread_mutexattr_getprotocol(const pthread_mutexattr_t *_attr, int *_protocol)"}
	name += {"pthread_mutexattr_setprotocol;int pthread_mutexattr_setprotocol(pthread_mutexattr_t *_attr, int _protocol)"}
	name += {"pthread_mutexattr_getprioceiling;int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t *_attr, int *_prioceiling)"}
	name += {"pthread_mutexattr_setprioceiling;int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *_attr, int _prioceiling)"}
	name += {"pthread_mutex_init;int pthread_mutex_init(pthread_mutex_t *_mp, const pthread_mutexattr_t *_attr)"}
	name += {"pthread_mutex_destroy;int pthread_mutex_destroy(pthread_mutex_t *_mp)"}
	name += {"pthread_mutex_lock;int pthread_mutex_lock(pthread_mutex_t *_mp)"}
	name += {"pthread_mutex_trylock;int pthread_mutex_trylock(pthread_mutex_t *_mp)"}
	name += {"pthread_mutex_timedlock;int pthread_mutex_timedlock(pthread_mutex_t *mp, const struct timespec *abs_timeout)"}
	name += {"pthread_mutex_unlock;int pthread_mutex_unlock(pthread_mutex_t *_mp)"}
	name += {"pthread_mutex_getprioceiling;int pthread_mutex_getprioceiling(const pthread_mutex_t *_mutex, int *_prioceiling)"}
	name += {"pthread_mutex_setprioceiling;int pthread_mutex_setprioceiling(pthread_mutex_t *_mutex, int _prioceiling, int *_oldceiling)"}
	name += {"pthread_once;int pthread_once(pthread_once_t *_once_control, void (*_init_routine)(void))"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/options.h
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/plock.h
	name += {"__plock_init_address_space;int __plock_init_address_space(void)"}
	name += {"__plock_cleanup_address_space;int __plock_cleanup_address_space(void)"}
	name += {"__plock_lock;void __plock_lock(unsigned int reason)"}
	name += {"__plock_unlock;void __plock_unlock(unsigned int reason)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/posix_cancelable.h
	name += {"__pthread_entercancelpoint;void __pthread_entercancelpoint(void)"}
	name += {"__pthread_exitcancelpoint;void __pthread_exitcancelpoint(void)"}
	name += {"pthread_testcancel;void pthread_testcancel(void)"}
	name += {"__posix_set_signal_restart;jmp_buf *__posix_set_signal_restart(jmp_buf *new_signal_restart)"}
	name += {"__posix_set_signal_function;void __posix_set_signal_function(void (*)(Address), Address)"}
	name += {"__POSIX_CANCELLATION_INTERRUPTION_START;__POSIX_CANCELLATION_INTERRUPTION_START(cancellation, interruption)"}
	name += {"pthread_self;pthread_t pthread_self(void)"}
	name += {"__POSIX_FUNCTION_CANCELLATION_INTERRUPTION_START;__POSIX_FUNCTION_CANCELLATION_INTERRUPTION_START(cancellation, function, argument)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/posix_env.h
	name += {"__posix_env_init;int __posix_env_init(struct __posix_env_struct *env)"}
	name += {"__posix_env_cleanup;int __posix_env_cleanup(struct __posix_env_struct *env)"}
	name += {"__posix_env_is_valid;int __posix_env_is_valid(struct __posix_env_struct *env)"}
	name += {"__posix_env_init_address_space;int __posix_env_init_address_space(void)"}
	name += {"__posix_env_cleanup_address_space;int __posix_env_cleanup_address_space(void)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/posix_error.h
	name += {"__posix_error_set_flags;void __posix_error_set_flags(int value)"}
	name += {"PosixAssert;PosixAssert(test)"}
	name += {"PosixAbortIfNot;PosixAbortIfNot(test,retval)"}
	name += {"PosixAbortIf;PosixAbortIf(test,retval)"}
	name += {"PosixAbortOnError;PosixAbortOnError(test)"}
	name += {"PosixDebugAssert;PosixDebugAssert(test)"}
	name += {"PosixDebugAbortIf;PosixDebugAbortIf(test,retval)"}
	name += {"PosixDebugAbortIfNot;PosixDebugAbortIfNot(test,retval)"}
	name += {"PosixErrno;PosixErrno(ret,err)"}
	name += {"PosixErrnoAbortIf;PosixErrnoAbortIf(test,err)"}
	name += {"PosixErrnoAbortIfNot;PosixErrnoAbortIfNot(test,err)"}
	name += {"PosixReturn;PosixReturn(retval)"}
	name += {"PosixWarn;PosixWarn(str)"}
	name += {"PosixDebugWarn;PosixDebugWarn(str)"}
	name += {"PosixDbString;PosixDbString(str)"}
	name += {"PosixExpect;PosixExpect(test)"}
	name += {"PosixCheckSuccess;PosixCheckSuccess(err)"}
	name += {"PosixDoAssert;void PosixDoAssert(char *str, char *file, int line)"}
	name += {"PosixDoAbortIfNot;int PosixDoAbortIfNot(int retval, char *retstr, char *str, char *file, int line)"}
	name += {"PosixDoAbortIf;int PosixDoAbortIf(int retval, char *retstr, char *str, char *file, int line)"}
	name += {"PosixDoAbortOnError;int PosixDoAbortOnError(int retval, char *str, char *file, int line)"}
	name += {"PosixDoDebugAssert;void PosixDoDebugAssert(char *str, char *file, int line)"}
	name += {"PosixDoDebugAbortIf;int PosixDoDebugAbortIf(int retval, char *retstr, char *str, char *file, int line)"}
	name += {"PosixDoDebugAbortIfNot;int PosixDoDebugAbortIfNot(int retval, char *retstr, char *str, char *file, int line)"}
	name += {"PosixDoErrno;int PosixDoErrno(int ret, int err, char *errstr, char *file, int line)"}
	name += {"PosixDoErrnoAbortIf;int PosixDoErrnoAbortIf(int err, char *errstr, char *str, char *file, int line)"}
	name += {"PosixDoErrnoAbortIfNot;int PosixDoErrnoAbortIfNot(int err, char *errstr, char *str, char *file, int line)"}
	name += {"PosixDoReturn;int PosixDoReturn(int retval, char *retstr, char *file, int line)"}
	name += {"PosixDoWarn;void PosixDoWarn(char *str, char *file, int line)"}
	name += {"PosixDoDebugWarn;void PosixDoDebugWarn(char *str, char *file, int line)"}
	name += {"PosixDoDbString;void PosixDoDbString(char *str)"}
	name += {"PosixDoExpect;void PosixDoExpect(int test, char *str, char *file, int line)"}
	name += {"PosixDoCheckSuccess;void PosixDoCheckSuccess(int err, char *str, char *file, int line)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/posix_server.h
	name += {"__posix_server_init;int __posix_server_init(void)"}
	name += {"__posix_server_cleanup;int __posix_server_cleanup(void)"}
	name += {"__posix_server_main;void *__posix_server_main(void *a)"}
	name += {"__pserver_null;int __pserver_null(void)"}
	name += {"__pserver_reap;int __pserver_reap(struct INTEGRITYThreadLocalStorageStruct *itls)"}
	name += {"__pserver_exit;int __pserver_exit(void)"}
	name += {"__pserver_makefifo;int __pserver_makefifo(Task t)"}
	name += {"__pserver_haltall;int __pserver_haltall(void)"}
	name += {"__pserver_resumeall;int __pserver_resumeall(void)"}
	name += {"__pserver_exitall;int __pserver_exitall(void)"}
	name += {"__ghs_times_stop;void __ghs_times_stop(void)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/p_rwlock.h
	name += {"pthread_rwlockattr_destroy;int pthread_rwlockattr_destroy(pthread_rwlockattr_t *)"}
	name += {"pthread_rwlockattr_init;int pthread_rwlockattr_init(pthread_rwlockattr_t *)"}
	name += {"pthread_rwlock_destroy;int pthread_rwlock_destroy(pthread_rwlock_t *)"}
	name += {"pthread_rwlock_init;int pthread_rwlock_init(pthread_rwlock_t *,pthread_rwlockattr_t *)"}
	name += {"pthread_rwlock_rdlock;int pthread_rwlock_rdlock(pthread_rwlock_t *)"}
	name += {"pthread_rwlock_tryrdlock;int pthread_rwlock_tryrdlock(pthread_rwlock_t *)"}
	name += {"pthread_rwlock_trywrlock;int pthread_rwlock_trywrlock(pthread_rwlock_t *)"}
	name += {"pthread_rwlock_wrlock;int pthread_rwlock_wrlock(pthread_rwlock_t *)"}
	name += {"pthread_rwlock_unlock;int pthread_rwlock_unlock(pthread_rwlock_t *)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_attr.h
	name += {"__ghsposix_pthread_attr_is_valid;int __ghsposix_pthread_attr_is_valid(const pthread_attr_t *_attr)"}
	name += {"pthread_attr_init;int pthread_attr_init(pthread_attr_t *_attr)"}
	name += {"pthread_attr_destroy;int pthread_attr_destroy(pthread_attr_t *_attr)"}
	name += {"pthread_attr_setstacksize;int pthread_attr_setstacksize(pthread_attr_t *_attr, size_t _stacksize)"}
	name += {"pthread_attr_getstacksize;int pthread_attr_getstacksize(const pthread_attr_t *_attr, size_t *_stacksize)"}
	name += {"pthread_attr_setstackaddr;int pthread_attr_setstackaddr(pthread_attr_t *_attr, void *_stackaddr)"}
	name += {"pthread_attr_getstackaddr;int pthread_attr_getstackaddr(const pthread_attr_t *_attr, void **_stackaddr)"}
	name += {"pthread_attr_setstack;int pthread_attr_setstack(pthread_attr_t *_attr, void *_stackaddr, size_t _stacksize)"}
	name += {"pthread_attr_getstack;int pthread_attr_getstack(const pthread_attr_t *_attr, void **_stackaddr, size_t *_stacksize)"}
	name += {"pthread_attr_setdetachstate;int pthread_attr_setdetachstate(pthread_attr_t *_attr, int _detachstate)"}
	name += {"pthread_attr_getdetachstate;int pthread_attr_getdetachstate(const pthread_attr_t *_attr, int *_detachstate)"}
	name += {"pthread_attr_setscope;int pthread_attr_setscope(pthread_attr_t *_attr, int _contentionscope)"}
	name += {"pthread_attr_getscope;int pthread_attr_getscope(const pthread_attr_t *_attr, int *_contentionscope)"}
	name += {"pthread_attr_setinheritsched;int pthread_attr_setinheritsched(pthread_attr_t *_attr, int _inheritsched)"}
	name += {"pthread_attr_getinheritsched;int pthread_attr_getinheritsched(const pthread_attr_t *_attr, int *_inhersched)"}
	name += {"pthread_attr_setschedpolicy;int pthread_attr_setschedpolicy(pthread_attr_t *_attr, int _policy)"}
	name += {"pthread_attr_getschedpolicy;int pthread_attr_getschedpolicy(const pthread_attr_t *_attr, int *_policy)"}
	name += {"pthread_attr_setschedparam;int pthread_attr_setschedparam(pthread_attr_t *_attr, const struct sched_param *_param)"}
	name += {"pthread_attr_getschedparam;int pthread_attr_getschedparam(const pthread_attr_t *_attr, struct sched_param *_param)"}
	name += {"pthread_attr_setexecutablename;int pthread_attr_setexecutablename(pthread_attr_t *_attr, const char *_execname)"}
	name += {"pthread_attr_getexecutablename;int pthread_attr_getexecutablename(const pthread_attr_t *_attr, char *execname, size_t len, size_t *actual_len)"}
	name += {"pthread_attr_dupexecutablename;int pthread_attr_dupexecutablename(const pthread_attr_t *_attr, char **_ecname)"}
	name += {"pthread_attr_setthreadname;int pthread_attr_setthreadname(pthread_attr_t *_attr, const char *_threadname)"}
	name += {"pthread_attr_getthreadname;int pthread_attr_getthreadname(const pthread_attr_t *_attr, char *_threadname, size_t _len, size_t *_alen)"}
	name += {"pthread_attr_dupthreadname;int pthread_attr_dupthreadname(const pthread_attr_t *_attr, char **_threadname)"}
	name += {"pthread_attr_setstarthalted;int pthread_attr_setstarthalted(pthread_attr_t *_attr, int _starthalted)"}
	name += {"pthread_attr_getstarthalted;int pthread_attr_getstarthalted(const pthread_attr_t *_attr, int *_starthalted)"}
	name += {"pthread_attr_setguardsize;int pthread_attr_setguardsize(pthread_attr_t *_attr, size_t _guardsize)"}
	name += {"pthread_attr_getguardsize;int pthread_attr_getguardsize(const pthread_attr_t *_attr, size_t *_gsize)"}
	name += {"pthread_attr_getthreadname_ptr;const char *pthread_attr_getthreadname_ptr(const pthread_attr_t *_attr)"}
	name += {"pthread_attr_getexecutablename_ptr;const char *pthread_attr_getexecutablename_ptr(const pthread_attr_t *_attr)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_cancel.h
	name += {"pthread_cancel;int pthread_cancel(pthread_t thread)"}
	name += {"pthread_setcancelstate;int pthread_setcancelstate(int state, int *oldstate)"}
	name += {"pthread_setcanceltype;int pthread_setcanceltype(int type, int *oldtype)"}
	name += {"__posix_cancel_handler;Boolean __posix_cancel_handler(struct __posix_cancel_info *, Value *, Buffer **)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_cleanup.h
	name += {"__pthread_cleanup_push;void __pthread_cleanup_push(void (*routine)(void *), void *arg, _cleanup_t *info)"}
	name += {"__pthread_cleanup_pop;void __pthread_cleanup_pop(int ex, _cleanup_t *info)"}
	name += {"pthread_cleanup_push;pthread_cleanup_push(routine, arg)"}
	name += {"pthread_cleanup_pop;pthread_cleanup_pop(ex)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_create.h
	name += {"__pthread_entry_point_wrapper;void __pthread_entry_point_wrapper(void)"}
	name += {"__pthread_reap;int __pthread_reap(struct INTEGRITYThreadLocalStorageStruct *itls)"}
	name += {"pthread_create;int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(start_routine)(void *), void *arg)"}
	name += {"pthread_join;int pthread_join(pthread_t thread, void **value_ptr)"}
	name += {"pthread_detach;int pthread_detach(pthread_t thread)"}
	name += {"pthread_exit;void pthread_exit(void *value)"}
	name += {"__pthread_slay;int __pthread_slay(pthread_t t, void *value)"}
	name += {"pthread_kernel_task;Task pthread_kernel_task(pthread_t t)"}
	name += {"pthread_equal;int pthread_equal(pthread_t t1, pthread_t t2)"}
	name += {"pthread_atfork;int pthread_atfork(void (*prepare)(void), void (*parent)(void), void (*child)(void))"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_key.h
	name += {"pthread_key_create;int pthread_key_create(pthread_key_t *key, void (*destructor)(void *))"}
	name += {"pthread_key_delete;int pthread_key_delete(pthread_key_t key)"}
	name += {"pthread_setspecific;int pthread_setspecific(pthread_key_t key, const void *value)"}
	name += {"pthread_getspecific;void *pthread_getspecific(pthread_key_t key)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_sched.h
	name += {"pthread_getschedparam;int pthread_getschedparam(pthread_t target_thread, int *policy, struct sched_param *param)"}
	name += {"pthread_setschedparam;int pthread_setschedparam(pthread_t target_thread, int policy, const struct sched_param *param)"}
	name += {"pthread_setschedprio;int pthread_setschedprio(pthread_t thread, int prio)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_t.h
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/pthread_types.h
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/ptls.h
	name += {"__ptls_find;pthread_t __ptls_find(__ptls_predicate func, void *arg)"}
	name += {"__ptls_do;void __ptls_do(__ptls_predicate func, void *arg, __ptls_action dofunc, void *doarg)"}
	name += {"__ptls_init;int __ptls_init(__ptls_t *ptls, INTEGRITYThreadLocalStorage *itls, __ptls_t *parent, enum ArgumentType arg_type, void *arg, Address entry_point, int detach_state, int sch_policy, struct sched_param *sch_param, int free_ptls)"}
	name += {"__ptls_cleanup;int __ptls_cleanup(__ptls_t *ptls)"}
	name += {"__ptls_is_valid;int __ptls_is_valid(__ptls_t *ptls)"}
	name += {"__ptls_addressspace_init;int __ptls_addressspace_init(void)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/ring.h
	name += {"__ring_init;void __ring_init(struct __ring *n, void *d)"}
	name += {"__ring_cleanup;void *__ring_cleanup(struct __ring *n)"}
	name += {"__ring_is_valid;int __ring_is_valid(struct __ring *r)"}
	name += {"__ring_find_node;int __ring_find_node(struct __ring *r, struct __ring *n)"}
	name += {"__ring_find_data;struct __ring *__ring_find_data(struct __ring *r, void *d)"}
	name += {"__ring_find_node_or_data;struct __ring *__ring_find_node_or_data(struct __ring *r, struct __ring *n, void *d)"}
	name += {"__ring_add_node;void __ring_add_node(struct __ring *r, struct __ring *n)"}
	name += {"__ring_remove_node;void __ring_remove_node(struct __ring *n)"}
	name += {"__ring_append;void __ring_append(struct __ring *r1, struct __ring *r2)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/ghsposix/sysdb.h
	name += {"GetGroupInfo;Error GetGroupInfo(gid_t gid, char *buffer, size_t bufsize)"}
	name += {"GetUserInfo;Error GetUserInfo(uid_t uid, gid_t *gid, char *buffer, size_t bufsize)"}
	name += {"GetGroupByName;Error GetGroupByName(const char *name, gid_t *gid)"}
	name += {"GetUserByName;Error GetUserByName(const char *name, uid_t *uid)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/spawn.h
	name += {"posix_spawn;int posix_spawn(pid_t *pid, const char *path, const posix_spawn_file_actions_t *fileactions, const posix_spawnattr_t *attr, char *const argv[], char *const envp[])"}
	name += {"posix_spawnp;int posix_spawnp(pid_t *pid, const char *file, const posix_spawn_file_actions_t *fileactions, const posix_spawnattr_t *attr, char *const argv[], char *const envp[])"}
	name += {"posix_spawn_file_actions_init;int posix_spawn_file_actions_init(posix_spawn_file_actions_t *)"}
	name += {"posix_spawn_file_actions_destroy;int posix_spawn_file_actions_destroy(posix_spawn_file_actions_t *)"}
	name += {"posix_spawn_file_actions_addclose;int posix_spawn_file_actions_addclose(posix_spawn_file_actions_t *,int)"}
	name += {"posix_spawn_file_actions_adddup2;int posix_spawn_file_actions_adddup2(posix_spawn_file_actions_t *,int, int)"}
	name += {"posix_spawn_file_actions_addopen;int posix_spawn_file_actions_addopen(posix_spawn_file_actions_t *,int, const char *, int, mode_t)"}
	name += {"posix_spawnattr_destroy;int posix_spawnattr_destroy(posix_spawnattr_t *)"}
	name += {"posix_spawnattr_getsigdefault;int posix_spawnattr_getsigdefault(const posix_spawnattr_t *,sigset_t *)"}
	name += {"posix_spawnattr_getflags;int posix_spawnattr_getflags(const posix_spawnattr_t *,short *)"}
	name += {"posix_spawnattr_getpgroup;int posix_spawnattr_getpgroup(const posix_spawnattr_t *,pid_t *)"}
	name += {"posix_spawnattr_getschedparam;int posix_spawnattr_getschedparam(const posix_spawnattr_t *,struct sched_param *)"}
	name += {"posix_spawnattr_getschedpolicy;int posix_spawnattr_getschedpolicy(const posix_spawnattr_t *,int *)"}
	name += {"posix_spawnattr_getsigmask;int posix_spawnattr_getsigmask(const posix_spawnattr_t *,sigset_t *)"}
	name += {"posix_spawnattr_init;int posix_spawnattr_init(posix_spawnattr_t *)"}
	name += {"posix_spawnattr_setsigdefault;int posix_spawnattr_setsigdefault(posix_spawnattr_t *, const sigset_t *)"}
	name += {"posix_spawnattr_setflags;int posix_spawnattr_setflags(posix_spawnattr_t *,const short)"}
	name += {"posix_spawnattr_setpgroup;int posix_spawnattr_setpgroup(posix_spawnattr_t *,const pid_t)"}
	name += {"posix_spawnattr_setschedparam;int posix_spawnattr_setschedparam(posix_spawnattr_t *,const struct sched_param *)"}
	name += {"posix_spawnattr_setschedpolicy;int posix_spawnattr_setschedpolicy(posix_spawnattr_t *,const int)"}
	name += {"posix_spawnattr_setsigmask;int posix_spawnattr_setsigmask(posix_spawnattr_t *,const sigset_t *)"}
	# From file /home/bison/terry/rtos-i50/rtos/INTEGRITY-include/pthread.h
	name += {"PosixEnableCurrentTask;Error PosixEnableCurrentTask(pthread_t *tid)"}
	name += {"PosixEnableCurrentTaskAsJoinable;Error PosixEnableCurrentTaskAsJoinable(pthread_t *tid)"}
	name += {"pthread_once;int pthread_once(pthread_once_t *once_control, void (*init_routine)(void))"}
    }
}
