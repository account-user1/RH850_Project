/*
                        Low-Level System Library

            Copyright 1990-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

/* This file contains definitions required for emulated embedded system
   call support */
   
/*
 *  System Call ID codes.
 *
 *  These ID codes are used both in the MULTI <--> server protocol and the
 *  monserv <--> monitor protocol.
 *  
 *  When using the Green Hills cross libraries, these codes are passed as the
 *  first argument to the function __ghs_syscall in the appropriate indsyscl.*
 *  module of the libraries.  The codes are 32-bit values, with the low 16 bits
 *  containing the call number, and the high 16 bits containing the
 *  argument count (including the first argument, the code number itself).
 *
 *  When implementing System Call support in a debug server, these codes
 *  are stored as the first argument in the argument list pointed to by
 *  the XTRA_STAT syscall.args field.
 *  
 *  Codes that have an argument count of zero are handled internally by the
 *  target or its debug server and must not be passed to MULTI via XTRA_STAT.
 *  For these calls, the argument list is defined at the time the call number
 *  is assigned, and the target knows how many arguments there should be by
 *  looking at the call number itself.
 *
 *  Note that function names beginning with '__' don't really exist; they
 *  are called internally by the libraries or debug servers and do not
 *  correspond directly to any well-known system calls.
 */

/*****************************************************************************/
/* Begin general purpose System Call ID codes                                */
/*****************************************************************************/
#define SYSCALL_READ    0x40000    /* read(fd, buf, n) */
#define SYSCALL_WRITE   0x40001    /* write(fd, buf, n) */
#define SYSCALL_OPEN    0x30004    /* open(fname, flags) */
#define SYSCALL_OPEN2   0x40004    /* open(fname, flags, mode) */
#define SYSCALL_CLOSE   0x20005    /* close(fd) */
#define SYSCALL_CREAT   0x30006    /* creat(fname, flags) */
#define SYSCALL_LSEEK   0x40007    /* lseek(fd, offset, origin) */
#define SYSCALL_UNLINK  0x20008    /* unlink(fname) */
#define SYSCALL_RENAME  0x30009    /* rename(old, new) */
#define SYSCALL_SYSTEM  0x2000A    /* system(string) */
#define SYSCALL_ACCESS  0x3000B    /* access(fname, flags) */
#define SYSCALL_TIME    0x1000E    /* __time(), host synchronization request */
#define SYSCALL_MODTIME 0x20010    /* __modtime(fname) */
/*#define SYSCALL_MEV_TRACE 0x30011 [* MEVTrace(buf, size) *] */
#define SYSCALL_FCNTL   0x40012    /* fcntl(fd, cmd, arg) */
#define SYSCALL_REMAP   0x40013    /* remap(target, source, length) */
#define SYSCALL_BYTES_TO_READ 0x20015 /* number of bytes to read on given fd */
#define SYSCALL_SOCKEMULATE 0x3000F/* __socket_emulation(Params, CallerID) */
#define SYSCALL_MEMDEV  0x40016   /* Shared memory communication device */
/*#define SYSCALL_DBGTRAP 0x30017   [* ghs_debug_trap(cmd, arg) *] */
#define SYSCALL_GETFDATTR 0x40018  /* __getfdattr(fd, buf, flags) */
#define SYSCALL_GETFNATTR 0x40019  /* __getfnattr(fd, buf, flags) */
#define SYSCALL_SETFDATTR 0x4001A  /* __setfdattr(fname, buf, flags) */
#define SYSCALL_SETFNATTR 0x4001B  /* __setfnattr(fname, buf, flags) */
#define SYSCALL_FSYNC     0x2001C  /* fsync(fd) */
#define SYSCALL_GETDENTS  0x4001D  /* __getdents(fd, buf, flags) */
#define SYSCALL_MKDIR     0x3001E  /* mkdir(path, mode) */
#define SYSCALL_RMDIR     0x2001F  /* rkdir(path) */
#define SYSCALL_RUNMODE   0x40020  /* run-mode partner request to debugger */
#define SYSCALL_READ2     0x40021  /* read2(fd, buf, n) */
#define SYSCALL_WRITE2    0x40022  /* write2(fd, buf, n) */
/*****************************************************************************/
/* End general purpose System Calls                                          */
/*****************************************************************************/


/*****************************************************************************/
/* Begin flags for SYSCALL_{GET,SET}{FD,FN}ATTR                              */
/*****************************************************************************/
#define SYSCALL_ATTR_BF0SZMSK (0x7f)  /* specifies sizeof(buf[0]) */
#define SYSCALL_ATTR_FORLINK  (1<<7)  /* if set, lstat(), else stat() */
#define SYSCALL_ATTR_SIZE     (1<<8)
#define SYSCALL_ATTR_MODE     (1<<9)
/*****************************************************************************/
/* End flags for SYSCALL_{GET,SET}{FD,FN}ATTR                                */
/*****************************************************************************/

/*****************************************************************************/
/* Begin flags for SYSCALL_ATTR_MODE                                         */
/*****************************************************************************/
#define SYSCALL_ATTR_MODE_IFCHR   0x2000
#define SYSCALL_ATTR_MODE_IFDIR   0x4000
#define SYSCALL_ATTR_MODE_IFBLK   0x6000
#define SYSCALL_ATTR_MODE_IFREG   0x8000
#define SYSCALL_ATTR_MODE_IFLNK   0xA000

#define SYSCALL_ATTR_MODE_MASK    0xE000
/*****************************************************************************/
/* End flags for SYSCALL_ATTR_MODE                                           */
/*****************************************************************************/


/*****************************************************************************/
/* Begin flags for SYSCALL_GETDENTS                                          */
/*****************************************************************************/
#define SYSCALL_GETDENTS_NUMENT_SHIFT   0
#define SYSCALL_GETDENTS_NUMENT_MASK    0xff
#define SYSCALL_GETDENTS_WORDSIZE_SHIFT 8
#define SYSCALL_GETDENTS_WORDSIZE_MASK  0xff
#define SYSCALL_GETDENTS_ENTSIZE_SHIFT  16
#define SYSCALL_GETDENTS_ENTSIZE_MASK   0xffff
/*****************************************************************************/
/* End flags for SYSCALL_GETDENTS                                            */
/*****************************************************************************/

/*****************************************************************************/
/* Begin flags for SYSCALL_GETDENTS_DTYPE                                    */
/*****************************************************************************/
#define SYSCALL_GETDENTS_DTYPE_CHR  0x2
#define SYSCALL_GETDENTS_DTYPE_DIR  0x4
#define SYSCALL_GETDENTS_DTYPE_BLK  0x6
#define SYSCALL_GETDENTS_DTYPE_REG  0x8

#define SYSCALL_GETDENTS_DTYPE_MASK 0xE
/*****************************************************************************/
/* End flags for SYSCALL_GETDENTS_DTYPE                                      */
/*****************************************************************************/


/*****************************************************************************/
/* Begin target internal calls                                               */
/*****************************************************************************/
#define SYSCALL_EXIT    2       /* exit(status) */
#define SYSCALL_SETUP   3       /* 68K monitor specific */
#define SYSCALL_HANDLER 12      /* __handler(interruptfunc) */
#define SYSCALL_TIMEOUT 13      /* __timeout(microseconds) */
#define SYSCALL_MONTIME 14      /* __time(), fetches internal monitor time */
#define SYSCALL_BRK     15      /* brk(addr) */
/* __cachesetting(flags), enables CPU specific caching options if available. */
/* This is intended for running benchmarks on boards with the monitor. */
/* See Init_IO in indio.c */
#define SYSCALL_CACHESET 16     /* __cachesetting(flags) */
/* __manprof(buf, cnt), manual profiling call supported by some debug servers */
/* This call is currently reserved for experimental use with hpserv targets.  */
#define SYSCALL_MANPROF 17      /* __manprof(buf, cnt) */
#define SYSCALL_HELLO   20      /* hello(), always succeeds */
/* moncycles() returns the number of cycles elapsed since program start. */
/* This is for benchmarking from the simulator */
/* This call is currently reserved for experimental INTERNAL use only. */
#define SYSCALL_CYCLES  30      /* moncycles() */
#define SYSCALL_SIMCHECK 31	/* Green Hills internal use: simulator
				 * checking callback:
				 * int __simcheck(const char *);
				 */
/* Experimental system call to relay information from a trap handler to MULTI */
#define SYSCALL_TRAPINFO 40
#define SYSCALL_RESERVED1 21    /* Reserved for Green Hills use */
#define SYSCALL_RESERVED2 22    /* Reserved for Green Hills use */
/*****************************************************************************/
/* End target internal calls                                                 */
/*****************************************************************************/
