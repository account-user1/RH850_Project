/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#include "indos.h"
#include <stdio.h>

/*
    This file is included in every library module which uses FOPEN_MAX
    The value of FOPEN_MAX which is used to compile the library becomes
    a maximum limit at runtime.  On the other hand, the value of FOPEN_MAX
    in stdio.h is a minimum which MUST be supported on every system, unless
    we want to have different versions of stdio.h.  Some systems still
    allow only 20, but many systems allow 40, 60, 100 or more.  We would
    change stdio.h to a higher limit, but Plum Hall insists that FOPEN_MAX
    files can be opened, so for the sake of the worst-case systems, that
    value remains 20, even though the library is compiled with a much 
    higher limit and will allow the higher limit if the OS handles it.
*/

#include "inddef.h"
#include "ind_thrd.h"

#ifndef FOPEN_MAX
#define	FOPEN_MAX	100
#elif	(FOPEN_MAX < 100) && !defined(MINIMUM_SPACE) && !defined(__INTEGRITY_SHARED_LIBS)
#undef	FOPEN_MAX
#define	FOPEN_MAX	100
#endif

unsigned short __gh_FOPEN_MAX = FOPEN_MAX;
#pragma weak __gh_FOPEN_MAX

struct _iobuf _iob[FOPEN_MAX];
void *_iob_lock[FOPEN_MAX+1];

#pragma weak _iob
#pragma weak _iob_lock

/* If __ghs_flock_ptr always returns a valid pointer, we can reduce the
   amount of code in flockfile which is executed for every file and
   in some cases for every char. */
void ** __ghs_flock_ptr(void * stream)
{
    unsigned int index = ((FILE *)stream) - _iob;
    if (index > __gh_FOPEN_MAX)
	index = __gh_FOPEN_MAX;
    return &_iob_lock[index];
}

void * __ghs_flock_word(void * stream)
{
    return *__ghs_flock_ptr(stream);
}


void __gh_iob_init(void)
{
#ifndef LESS_BUFFERED_IO
#ifdef UN_BUFFERED_STD
    _iob[0]._io_buffering = _IONBF;
    _iob[1]._io_buffering = _IONBF;
#else
    _iob[0]._io_buffering = _IOLBF;
    _iob[1]._io_buffering = _IOLBF;
#endif
    _iob[2]._io_buffering = _IONBF;
#endif /* LESS_BUFFERED_IO */
    _iob[0]._io_readable = 1;
    _iob[1]._io_writable = 1;
    _iob[2]._io_writable = 1;
    _iob[1]._io_channel = 1;
    _iob[2]._io_channel = 2;
    /* locks are allocated per address space for stdin/out/err at startup 
     * and never released */
    LOCKCREATE(&_iob[0]);
    LOCKCREATE(&_iob[1]);
    LOCKCREATE(&_iob[2]);
}
