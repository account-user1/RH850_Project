/*
			ISO C Runtime Library

	    Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/


#ifndef _ERRNO_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _ERRNO_H

#if defined(__MISRA_20_5) && (__MISRA_20_5 == 2)
#  error "(Misra Rule 20.5): The error indicator 'errno' shall not be used"
#elif defined(__MISRA_20_5) && (__MISRA_20_5 == 1)
#  warning "(Misra Rule 20.5): The error indicator 'errno' shall not be used"
#endif

#if defined(__MISRA_119) && (__MISRA_119 == 2)
#  error "(Misra Rule 119): The error indicator 'errno' shall not be used"
#elif defined(__MISRA_119) && (__MISRA_119 == 1)
#  warning "(Misra Rule 119): The error indicator 'errno' shall not be used"
#endif

/* Force errno reference to be in .data rather than .sdata or .zdata */
#ifdef __ghs__
#pragma ghs startdata
#endif
extern int errno;
#ifdef __ghs__
#pragma ghs enddata
#endif

/* The standards demand a macro for errno, even if it is degenerate */
#if (defined(__unix__) || defined(__unix) || defined(__linux__) || defined(_WIN32))
#define errno (errno)
#else
#ifdef __cplusplus
extern "C" {
#endif
int *__gh_errno_ptr(void);
#ifdef __cplusplus
}
#endif
#define errno (*__gh_errno_ptr())
#endif

#define EPERM   1
#define ENOENT  2
#define ESRCH   3
#define EINTR   4
#define EIO     5
#define ENXIO   6
#define E2BIG   7
#define ENOEXEC 8
#define EBADF   9
#define ECHILD  10
#define EAGAIN  11
#define ENOMEM  12
#define EACCES  13
#define EFAULT  14
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
#define ENOTBLK 15
#endif
#define EBUSY   16
#define EEXIST  17
#define EXDEV   18
#define ENODEV  19
#define ENOTDIR 20
#define EISDIR  21
#define EINVAL  22
#define ENFILE  23
#define EMFILE  24
#define ENOTTY  25
#define ETXTBSY 26
#define EFBIG   27
#define ENOSPC  28
#define ESPIPE  29
#define EROFS   30
#define EMLINK  31
#define EPIPE   32
#define EDOM    33	/* also #define'd in math.h */
#define ERANGE  34	/* also #define'd in math.h */
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
#define ELOCAL  35
#endif
/* POSIX requires the following, but no one agrees on the values */
#ifdef __sun
#define ENAMETOOLONG	63
#define ENOTEMPTY	66
#define EDEADLK		78
#define ENOLCK		79
#define ENOSYS		90

/*
 * These errno values are needed by the TCP/IP stack in INTEGRITY.
 */

#define	EOPNOTSUPP	45		/* Operation not supported */
#define	EPFNOSUPPORT	46		/* Protocol family not supported */
#define ERRMAX          158

#else	/* sysV.3 */
#define EDEADLK		45
#define ENOLCK		46
#define ENAMETOOLONG	78
#define ENOSYS		89
#define ENOTEMPTY	158

/*
 * These errno values are needed by the TCP/IP stack in INTEGRITY.
 */

#define	EOPNOTSUPP	145		/* Operation not supported */
#define	EPFNOSUPPORT	146		/* Protocol family not supported */
#define ERRMAX          159

#endif /* __sun */

/*
 * These errno values are needed by the TCP/IP stack in INTEGRITY.
 */

/* non-blocking and interrupt i/o */
#define	EWOULDBLOCK	EAGAIN		/* Operation would block */
#define	EINPROGRESS	36		/* Operation now in progress */
#define	EALREADY	37		/* Operation already in progress */

/* ipc/network software -- argument errors */
#define	ENOTSOCK	38		/* Socket operation on non-socket */
#define	EDESTADDRREQ	39		/* Destination address required */
#define	EMSGSIZE	40		/* Message too long */
#define	EPROTOTYPE	41		/* Protocol wrong type for socket */
#define	ENOPROTOOPT	42		/* Protocol not available */
#define	EPROTONOSUPPORT	43		/* Protocol not supported */
#define	ESOCKTNOSUPPORT	44		/* Socket type not supported */
#define	EAFNOSUPPORT	47		/* Address family not supported by protocol family */
#define	EADDRINUSE	48		/* Address already in use */
#define	EADDRNOTAVAIL	49		/* Can't assign requested address */

/* ipc/network software -- operational errors */
#define	ENETDOWN	50		/* Network is down */
#define	ENETUNREACH	51		/* Network is unreachable */
#define	ENETRESET	52		/* Network dropped connection on reset */
#define	ECONNABORTED	53		/* Software caused connection abort */
#define	ECONNRESET	54		/* Connection reset by peer */
#define	ENOBUFS		55		/* No buffer space available */
#define	EISCONN		56		/* Socket is already connected */
#define	ENOTCONN	57		/* Socket is not connected */
#define	ESHUTDOWN	58		/* Can't send after socket shutdown */
#define	ETOOMANYREFS	59		/* Too many references: can't splice */
#define	ETIMEDOUT	60		/* Operation timed out */
#define	ECONNREFUSED	61		/* Connection refused */

/* should be rearranged */
#define	EHOSTDOWN	64		/* Host is down */
#define	EHOSTUNREACH	65		/* No route to host */

#define EPROCLIM        67              /* Too many processes */
#define EUSERS          68              /* Too many users */
#define EDQUOT          69              /* Disc quota exceeded */

#if defined(__INTEGRITY) || defined(__INTEGRITY_SHARED_LIBS)
#define EPROTO		71		/* Protocol error */
#define EMULTIHOP	74		/* Reserved */
#endif
#define EOVERFLOW	79		/* Value too large for datatype */

#define	ERESTART	-1		/* restart syscall */ /* Unused */
#define	EJUSTRETURN	-2		/* don't modify regs, just return */
                                        /* Unused */

#define EILSEQ		88		/* Illegal byte sequence */

#define ECANCELED	125		/* AIO canceled */
#define ENOTSUP		126             /* Unsupport part of standard */

/* NFS/RPC related error codes */
#define	ESTALE		127		/* Stale file descriptor */
#define	EAUTH		128		/* Authentication error */
#define	EBADRPC		129		/* Bad RPC structure */
#define	EPROGUNAVAIL	130		/* RPC program is unavailable */
#define	EPROCUNAVAIL	131		/* Bad RPC procedure for program */
#define	EPROGMISMATCH	132		/* Program version wrong */
#define	ERPCMISMATCH	133		/* RPC version wrong */
#define	ENEEDAUTH	134		/* Need authenticator */

#define	EFTYPE		135		/* Inappropriate file type */

#if defined(__INTEGRITY) || defined(__INTEGRITY_SHARED_LIBS)
#define ENOLINK		167		/* Link severed */
#define EIDRM		234		/* Identifier removed */
#define ENOMSG 		235		/* No message */
#define EBADMSG		236		/* Bad message */
#define ELOOP		237		/* Too many symbolic links */
#define EBADDISK        238             /* Disk is inconsistent/corrupted */
#else
#define EBADMSG		236		/* Bad message */
#endif

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif /* _ERRNO_H */
