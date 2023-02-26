/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _GHS_ANSI_SIGNAL_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _GHS_ANSI_SIGNAL_H
#ifdef __cplusplus
extern "C" {
#endif

#ifndef _SIG_ATOMIC_T
#define _SIG_ATOMIC_T
typedef int sig_atomic_t;
#endif

#if defined(__STDC__) || defined(__PROTOTYPES__) || defined(__EDG__)
#define SIG_DFL 	((void (*) (int)) 0)
#define SIG_IGN 	((void (*) (int)) 1)
#define SIG_ERR 	((void (*) (int)) (-1))
#else
#define SIG_DFL 	((void (*) ())    0)
#define SIG_IGN 	((void (*) ())    1)
#define SIG_ERR 	((void (*) ()) (-1))
#endif

#if defined(__MISRA_20_8) && (__MISRA_20_8 == 2)
#  error "(Misra Rule 20.8): the header <signal.h> not allowed"
#elif defined(__MISRA_20_8) && (__MISRA_20_8 == 1)
#  warning "(Misra Rule 20.8): the header <signal.h> not allowed"
#endif

#if defined(__MISRA_123) && (__MISRA_123 == 2)
#  error "(Misra Rule 123): the header <signal.h> not allowed"
#elif defined(__MISRA_123) && (__MISRA_123 == 1)
#  warning "(Misra Rule 123): the header <signal.h> not allowed"
#endif

#if defined(__NO_LIBANSI_STRONG_FPTR) || defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)
void (*signal(int, void (*)(int)))(int);
#else
typedef	__attribute__((strong_fptr("relax"))) void (*__SIG_HANDLER)(int);
__SIG_HANDLER signal(int, __SIG_HANDLER func);
#endif
int raise(int);

#if defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)
typedef	int		sigset_t;
/* the library is not compiled with packing, so this must not be packed. */
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack (push, __ghs_max_pack_value)
#endif
struct sigaction {
	void 		(*sa_handler)();
	sigset_t	sa_mask;
	int		sa_flags;
};
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack(pop)
#endif
int	kill	(int, int);
int sigaction	(int, const struct sigaction *, struct sigaction *);
int sigaddset	(sigset_t *, int);
int sigdelset	(sigset_t *, int);
int sigemptyset	(sigset_t *);
int sigfillset	(sigset_t *);
int sigismember	(sigset_t *, int);
int sigpending	(sigset_t *);
int sigprocmask	(int, const sigset_t *, sigset_t *);
int sigsuspend	(const sigset_t *);
#endif


#define SIGINT		2
#define SIGILL		4
#define SIGABRT 	6
#define SIGFPE		8
#define SIGSEGV 	11
#define SIGTERM 	15

/* standard bsd signals in addition to these */
#define SIGHUP		1
/* SIGINT */
#define SIGQUIT 	3
/* SIGILL */
#define SIGTRAP 	5
#define SIGIOT		SIGABRT
#define SIGEMT		7
/* SIGFPE */
#define SIGKILL 	9
#define SIGBUS		10
/* SIGSEGV */
#define SIGSYS		12
#define SIGPIPE 	13
#define SIGALRM 	14
/* SIGTERM */
#define SIGURG		17
#define SIGSTOP 	18
#define SIGTSTP 	19
#define SIGCONT 	20
#define SIGCHLD 	21
#define SIGCLD		SIGCHLD
#define SIGTTIN 	22
#define SIGTTOU 	23
#define SIGIO		24
#define SIGXCPU 	25
#define SIGXTIM 	26
#define SIGXFSZ 	27
#define SIGVTALRM	28
#define SIGPROF 	29
#define SIGWINCH	30
#define SIGUSR1 	31
#define SIGUSR2 	32

#define _SIGMAX 	SIGUSR2

#ifdef __cplusplus
}
#endif
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _GHS_ANSI_SIGNAL_H */
