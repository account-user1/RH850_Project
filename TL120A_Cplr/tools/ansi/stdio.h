/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _STDIO_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _STDIO_H
#include "ghs_null.h"		/* defines NULL and size_t */

#if defined(__MISRA_20_9) && (__MISRA_20_9 == 2)
#  error "(Misra Rule 20.9): the header <stdio.h> not allowed"
#elif defined(__MISRA_20_9) && (__MISRA_20_9 == 1)
#  warning "(Misra Rule 20.9): the header <stdio.h> not allowed"
#endif

#if defined(__MISRA_124) && (__MISRA_124 == 2)
#  error "(Misra Rule 124): the header <stdio.h> not allowed"
#elif defined(__MISRA_124) && (__MISRA_124 == 1)
#  warning "(Misra Rule 124): the header <stdio.h> not allowed"
#endif

#if (defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)) || defined(__MISRA_16_1)
#  include "ghs_valist.h"
#elif defined(__STDC__) || defined(__cplusplus) /* || defined(__PROTOTYPES__) */
# include <stdarg.h>
#endif

#if defined(__INTEGRITY)
#define _BY_NEED
#define _NEED_OFF_T
#include <sys/types.h>
#undef _NEED_OFF_T
#undef _BY_NEED
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* the library is not compiled with packing, so this must not be packed. */
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack (push, __ghs_max_pack_value)
#endif
typedef struct _iobuf {
unsigned char*_io_next;		/* next character to be read from buffer or
				   next position to put a character in buffer */
unsigned char*_io_base;		/* start of buffer */
    int       _io_left;		/* number of characters left in buffer */
    unsigned  _io_channel:14;	/* OS I/O channel number */
    unsigned  _io_used: 1;	/* any I/O done on this file since fopen? */
    unsigned  _io_append: 1;	/* should do seeks to eof before writing */
unsigned char _io_tmp;		/* used by ungetc on unbuffered files */
    unsigned  _io_buffering:2;	/* _IONBF,_IOFBF,_IOLBF,_IOPBF */
    unsigned  _io_eof: 1; 	/* have read end of file */
    unsigned  _io_error:1;	/* have detected io error in file */
    unsigned  _io_stdio_buffer:1; /* buffer for this file created by stdio */
    unsigned  _io_readable:1;	/* file may be read at this time */
    unsigned  _io_writable:1;	/* file may be written at this time */
    unsigned  _io_readwrite:1;	/* file opened for both reading and writing */
#if __CHAR_BIT > 8
    unsigned  _io_binary:1;	/* file opened in binary mode */
    unsigned  _io_text:1;	/* file opened in text mode */     
#endif
} FILE;

/* the following are for backwards compatibility and will be removed in
   a future release.  In fact, application code should not be accessing
   these fields at all.  The entire structure may be hidden in a future
   release */
#if (!defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE) && defined(__INTEGRITY)) || \
    	defined(__GHS_OLD_STDIO_FIELD_NAMES)
#define	io_next		_io_next
#define	io_base		_io_base
#define	io_left		_io_left
#define	io_channel	_io_channel
#define	io_ivbuf	_io_used	/* obsolete field */
#define	io_append	_io_append
#define	io_tmp		_io_tmp
#define	io_buffering	_io_buffering
#define	io_eof		_io_eof
#define	io_error	_io_error
#define	io_stdio_buffer	_io_stdio_buffer
#define	io_readable	_io_readable
#define	io_writable	_io_writable
#define	io_readwrite	_io_readwrite
#define iobuf		_iobuf
#if __CHAR_BIT > 8
#define	io_binary	_io_binary
#define	io_text		_io_text
#endif
#endif

#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack(pop)
#endif

#ifndef _FPOS_T
#define _FPOS_T
typedef long int fpos_t;	/* was int in previous versions */
#endif

#define _IOFBF		0
#define _IOLBF		1
#define _IONBF		2
#define _IOPBF	        3

#define _GHS_IOPBF_AVAILABLE 1

#define EOF		(-1)
#if defined(__V850) && __PTR_BIT == 16
#  define BUFSIZ		256
#else
#  define BUFSIZ		512
#endif
#define FOPEN_MAX	20
#define L_tmpnam	16
#define FILENAME_MAX	1023

#define SEEK_CUR	1
#define SEEK_END	2
#define SEEK_SET	0

#ifdef __unix
#define TMP_MAX 	17576		/* 26 * 26 * 26 */
#else
#define TMP_MAX 	1048576		/* 32 * 32 * 32 * 32 */
#endif

#define stdin (&_iob[0])
#define stdout (&_iob[1])
#define stderr (&_iob[2])

/* variables */
#ifdef __ghs__
#pragma ghs startdata
#pragma ghs nowarning 1824
#endif
extern FILE _iob[ /* FOPEN_MAX */ ];
#ifdef __ghs__
#pragma ghs endnowarning
#pragma ghs enddata
#endif

/* functions */
#if defined(__STDC_VERSION__) && (__STDC_VERSION__>=199901L)
#define __Restrict	restrict
#else
#define __Restrict
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

int remove(const char *);
int rename(const char *, const char *);
FILE *tmpfile(void);
char *tmpnam(char *);

int _flsbuf(int, FILE *);
int _filbuf(FILE *);
int fclose(FILE *);
int fflush(FILE *);
FILE *fopen(const char * __Restrict, const char * __Restrict);
FILE *freopen(const char*__Restrict, const char * __Restrict, FILE * __Restrict);
FILE *fdopen(int, const char * __Restrict);
void setbuf(FILE * __Restrict, char * __Restrict);
int setvbuf(FILE * __Restrict, char * __Restrict, int, size_t );
#if defined(__CHECK_PRINTF__) && defined(__GNUC__)
int fprintf(FILE * __Restrict, const char * __Restrict, ...)
		     __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf(FILE * __Restrict, const char * __Restrict, ...)
		     __attribute__ ((__format__ (__scanf__, 2, 3)));
int printf(const char * __Restrict, ...)
		     __attribute__ ((__format__ (__printf__, 1, 2)));
int scanf(const char * __Restrict, ...)
		     __attribute__ ((__format__ (__scanf__, 1, 2)));
int snprintf(char * __Restrict, size_t, const char * __Restrict, ...)
		     __attribute__ ((__format__ (__printf__, 3, 4)));
int sprintf(char * __Restrict, const char * __Restrict, ...)
		     __attribute__ ((__format__ (__printf__, 2, 3)));
int sscanf(const char * __Restrict, const char * __Restrict, ...)
		     __attribute__ ((__format__ (__scanf__, 2, 3)));
#elif defined(__CHECK_PRINTF__) && defined(__EDG__) && defined(__STDC__)
#pragma __printf_args
int fprintf(FILE * __Restrict, const char * __Restrict, ...);
#pragma __scanf_args
int fscanf(FILE * __Restrict, const char * __Restrict, ...);
#pragma __printf_args
int printf(const char * __Restrict, ...);
#pragma __scanf_args
int scanf(const char * __Restrict, ...);
#pragma __printf_args
int snprintf(char * __Restrict, size_t, const char * __Restrict, ...);
#pragma __printf_args
int sprintf(char * __Restrict, const char * __Restrict, ...);
#pragma __scanf_args
int sscanf(const char * __Restrict, const char * __Restrict, ...);
#else
int fprintf(FILE * __Restrict, const char * __Restrict, ...);
int fscanf(FILE * __Restrict, const char * __Restrict, ...);
int printf(const char * __Restrict, ...);
int scanf(const char * __Restrict, ...);
int snprintf(char * __Restrict, size_t, const char * __Restrict, ...);	/* ISO C99 */
int sprintf(char * __Restrict, const char * __Restrict, ...);
int sscanf(const char * __Restrict, const char * __Restrict, ...);
#endif
int fgetc(FILE *);
char *fgets(char * __Restrict, int, FILE * __Restrict);
int fputc(int, FILE *);
int fputs(const char * __Restrict, FILE * __Restrict);
int getc(FILE *);
int getchar(void);
char *gets(char *);
int putc(int, FILE *);
int putchar(int );
int puts(const char *);
int ungetc(int, FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int );
size_t fread(void * __Restrict, size_t, size_t, FILE * __Restrict);
size_t fwrite(const void * __Restrict, size_t, size_t, FILE * __Restrict);

int fgetpos(FILE * __Restrict, fpos_t * __Restrict);
int fseek(FILE *, long int, int );
int fsetpos(FILE *, const fpos_t *);
long int ftell(FILE *);
void rewind(FILE *);

void clearerr(FILE *);
int fileno(FILE *);
int feof(FILE *);
int ferror(FILE *);
void perror(const char *);

#if defined(__CHECK_PRINTF__) && defined(__GNUC__)
int vfprintf(FILE * __Restrict, const char* __Restrict, __gh_va_list)
		     __attribute__ ((__format__ (__printf__, 2, 0)));
int vprintf(const char* __Restrict, __gh_va_list)
		     __attribute__ ((__format__ (__printf__, 1, 0)));
int vsnprintf(char* __Restrict, size_t, const char* __Restrict, __gh_va_list)
		     __attribute__ ((__format__ (__printf__, 3, 0)));
int vsprintf(char* __Restrict, const char* __Restrict, __gh_va_list)
		     __attribute__ ((__format__ (__printf__, 2, 0)));
int vfscanf(FILE * __Restrict, const char* __Restrict, __gh_va_list)
		     __attribute__ ((__format__ (__scanf__, 2, 0)));
int vscanf(const char* __Restrict, __gh_va_list)
		     __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsscanf(const char* __Restrict, const char* __Restrict, __gh_va_list)
		     __attribute__ ((__format__ (__scanf__, 2, 0)));
#elif defined(__CHECK_PRINTF__) && defined(__EDG__) && defined(__STDC__)
#pragma __printf_args
int vfprintf(FILE * __Restrict, const char* __Restrict, __gh_va_list);
#pragma __printf_args
int vprintf(const char* __Restrict, __gh_va_list);
#pragma __printf_args
int vsnprintf(char* __Restrict, size_t, const char* __Restrict, __gh_va_list);
#pragma __printf_args
int vsprintf(char* __Restrict, const char* __Restrict, __gh_va_list);
#pragma __scanf_args
int vfscanf(FILE * __Restrict, const char* __Restrict, __gh_va_list);
#pragma __scanf_args
int vscanf(const char* __Restrict, __gh_va_list);
#pragma __scanf_args
int vsscanf(const char* __Restrict, const char* __Restrict, __gh_va_list);
#else
# if defined(__STDC__) || defined(__cplusplus)
#   define __ARGS(x)		x
# else
    /* don't prototype these functions in -k+r rather than %include varargs */
#   define __ARGS(x)		()
# endif

#if defined(__ghs__)
int vfprintf __ARGS((FILE * __Restrict, const char* __Restrict, __gh_va_list));
int vprintf __ARGS((const char* __Restrict, __gh_va_list));
int vsnprintf __ARGS((char* __Restrict, size_t, const char* __Restrict,__gh_va_list));
int vsprintf __ARGS((char* __Restrict, const char* __Restrict, __gh_va_list));
int vfscanf __ARGS((FILE * __Restrict, const char* __Restrict, __gh_va_list));
int vscanf __ARGS((const char* __Restrict, __gh_va_list));
int vsscanf __ARGS((const char* __Restrict, const char* __Restrict, __gh_va_list));
#endif

# undef __ARGS
#endif

#if !defined(__cplusplus)
#define getchar()	getc(stdin)
#define putchar(ch)	putc((ch),stdout)
#define fileno(file)	((file)->_io_channel)
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
#define _fileno(file)	((file)->_io_channel)	 /* this is a valid ANSI name */
#endif
#define feof(file)	((file)->_io_eof)
#define ferror(file)	((file)->_io_error)
#endif

/* getc/putc macros are not threadsafe.  Use functions instead */
#ifdef __disable_thread_safe_extensions

  /* non-threadsafe macros */

#if !defined(__cplusplus)
# define putc(c,f)	(--(f)->_io_left<0?_flsbuf((c),f):(int)(*(f)->_io_next++=(c)))
# define getc(f) 	(--(f)->_io_left<0?_filbuf(f):(int)*(f)->_io_next++)
# define clearerr(file)	(void) ((file)->_io_eof=0,(file)->_io_error=0)
#endif
  /* unlocked versions included for completeness 
   * and for simpler library implementation */
# define putc_unlocked(c,f) 	putc(c,f)
# define getc_unlocked(f) 	getc(f)
# define getchar_unlocked()	getchar()
# define putchar_unlocked(ch)	putchar(ch)

#else		/* !__disable_thread_safe_extensions */

#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
# define putc_unlocked(c,f) 	(--(f)->_io_left<0?_flsbuf((c),f):\
					(int)(*(f)->_io_next++=(c)))
# define getc_unlocked(f) 	(--(f)->_io_left<0?_filbuf(f):(int)*(f)->_io_next++)
# define putc_safe_unlocked(c,f)((((f)->_io_writable==0)||(--(f)->_io_left<0))?\
					_flsbuf((c),f):(int)(*(f)->_io_next++=(c)))
# define getc_safe_unlocked(f) 	((((f)->_io_readable==0)||(--(f)->_io_left<0))?\
					_filbuf(f):(int)*(f)->_io_next++)
# define getchar_unlocked()	getc_unlocked(stdin)
# define putchar_unlocked(ch)	putc_unlocked((ch),stdout)
#endif

/* POSIX-style locking functions used for threadsafe stdio */
void	flockfile(FILE *);
int	ftrylockfile(FILE *);
void	funlockfile(FILE *);
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
void    flockcreate(FILE *);
void    flockdestroy(FILE *);
#endif
int 	__ghs_flock_in_use(void *);

#endif

#if defined(__INTEGRITY)
#  define L_ctermid	9
#if !defined(_POSIX_SOURCE) && !defined(_POSIX_C_SOURCE)
#  define L_cuserid	9
#endif
char *ctermid	(char *);
FILE *popen	(const char *, const char *);
int   pclose	(FILE*);
int   fseeko	(FILE *, off_t, int);
off_t ftello	(FILE *);
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

#undef __Restrict
#ifdef __cplusplus
}
#endif
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _STDIO_H */
