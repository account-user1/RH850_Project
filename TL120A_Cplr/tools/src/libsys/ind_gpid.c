/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#include "ind_io.h"

/******************************************************************************/
/*  int getpid (void);							      */
/*  On unix, getpid returns the current process number.  The library mktemp() */
/*  facility uses it to add uniqueness to its generated filenames.	      */
/******************************************************************************/
#if defined(__OSE)
#include "ose.h"

int getpid (void)
{
    return current_process();
}


#else /* !__OSE */
int getpid (void)
{
    return 17;
}
#endif /* __OSE */
