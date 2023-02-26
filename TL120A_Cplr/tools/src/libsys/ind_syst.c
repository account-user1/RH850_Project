/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_syst.c: ANSI system() facility. */

#include "indos.h"

/* If an external ANSI-compliant libc.a is available, it will have system() */
#if !defined(LIBCISANSI)

/******************************************************************************/
/*  int system(const char *string)					      */
/*  Execute the command pointed to by "string" as if it had been typed in at  */
/*  the terminal.							      */
/*  Return the status returned by the process.  A status of 0 is returned if  */
/*  the operation succeeds.  The operation is system implementation dependent */
/*  It may have no effect.						      */
/******************************************************************************/
int system(const char *string) {
#if defined(ANYUNIX) || defined(MSW)
# if defined(ANYBSD)
#  define fork vfork
# endif
/* Under unix there is a system function which is almost right but not quite */
    extern int fork();
    int status, pid;

    if (string == NULL)        /* indicate that we can do the system function */
	return(1);
/* probably should protect parent by ignoring SIGINT, ... */
    if ((pid = fork()) == -1)
	return(EXIT_FAILURE);
    else if (pid == 0) {               /* in the child */
	extern char **environ;
	char *argv[4];
	argv[0] = "sh";
	argv[1] = "-c";
	argv[2] = (char *) string;
	argv[3] = 0;
#ifdef MSW
	execve("~bin/sh", argv, environ);
#else
	execve("/bin/sh", argv, environ);
#endif
	_Exit(EXIT_FAILURE);
    }
    /* wait can return -1, return an error */
    while (wait(&status) != pid);
    return(status);
#elif defined(EMBEDDED)
#pragma ghs nowarning 1547	/* Syscall prototypes might not match */
    return (string) ? __ghs_syscall(SYSCALL_SYSTEM, string) : (1);
#pragma ghs endnowarning 1547
#else
    /* If no other implementation provided, minimal compliance */
    return(0);                      /* no system access */
#endif
}
#endif /* !LIBCISANSI */
