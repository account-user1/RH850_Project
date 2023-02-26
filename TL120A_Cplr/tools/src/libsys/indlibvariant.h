/*
		Language Independent Library
    Copyright 1983-2013 Green Hills Software,Inc.

 *  This program is the property of Green Hills Software, Inc,
 *  its contents are proprietary information and no part of it
 *  is to be disclosed to anyone except employees of Green Hills
 *  Software, Inc., or as agreed in writing signed by the President
 *  of Green Hills Software, Inc.
*/

/*
 * This file defines a set of wrappers that can be used to mangle the names
 * of library functions for minor variations (for example, 32-bit time_t
 * versus 64-bit).  The linker chooses between these variants based on
 * predefined values.
 */

#if defined(TIME_ALTERNATE_COMPILE)
  /* This is the second time we're compiling the source file.  Only provide
     new, renamed definitions of functions if time_t is 64 bits and long is
     smaller (time_t defaults to the size of long). */
# if __TIME_T_BIT == 64 && __LONG_BIT < __TIME_T_BIT && \
    !defined(__INTEGRITY_SHARED_LIBS)
#  define NEED_TIME_DEFS
#  define mktime			__ghs_time64_mktime
#  define gmtime			__ghs_time64_gmtime
#  define gmtime_r			__ghs_time64_gmtime_r
#  define time                          __ghs_time64_time
#  define localtime_r			__ghs_time64_localtime_r
#  define localtime			__ghs_time64_localtime
#  define __ghs_gettime32		__ghs_time64___ghs_gettime32
#  define __ghs_gettime64		__ghs_time64___ghs_gettime64
   /* These are redefined simply to avoid excessively splitting files, or
      pulling in modules we don't need (like bringing in both the 32-bit and
      64-bit versions of the ind_time module).  Both versions are identical. */
#  define times				__ghs_time64_times
#  define __ghs_static_gmtime_temp	__ghs_time64___ghs_static_gmtime_temp
# endif
#else
  /* This is the first time we're compiling the source file, provide all
     definitions under their original names. */
# define NEED_TIME_DEFS
#endif
