/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#ifndef _TIME_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _TIME_H
#include "ghs_null.h"		/* defines NULL and size_t */

#ifdef __cplusplus
extern "C" {
#endif

#if !defined(CLK_TCK) && (defined(_INTEGRITY_SOURCE) || \
	!defined(_POSIX_C_SOURCE) && !defined(_POSIX_SOURCE))
#define CLK_TCK     	60		/* should be sysconf(3) for POSIX */
#endif
#ifndef CLOCKS_PER_SEC
#define CLOCKS_PER_SEC	1000000
#endif

#define _TZ_UNKNOWN (-1)

#ifndef _CLOCK_T
#define _CLOCK_T
typedef long clock_t;
#endif

#ifndef _TIME_T
#define _TIME_T
#if !defined(__TIME_T_BIT) || (__TIME_T_BIT==__LONG_BIT)
typedef long time_t;
# define __GHS_TIME_T_MAX LONG_MAX
# define __GHS_TIME_T_MIN LONG_MIN
#elif (__TIME_T_BIT==__LLONG_BIT)
typedef long long time_t;
# define __GHS_TIME_T_MAX LLONG_MAX
# define __GHS_TIME_T_MIN LLONG_MIN
#elif (__TIME_T_BIT==__INT_BIT)
typedef int time_t;
# define __GHS_TIME_T_MAX INT_MAX
# define __GHS_TIME_T_MIN INT_MIN
#else
#error unexpected size for time_t
#endif
#endif

/* the library is not compiled with packing, so this must not be packed. */
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack (push, __ghs_max_pack_value)
#endif
struct tm {
    int tm_sec; 	    /* seconds of the minute, [0,59] */
    int tm_min; 	    /* minutes of the hour, [0,59] */
    int tm_hour;	    /* hour of the day, [0,23] */
    int tm_mday;	    /* day of the month, [1,31] */
    int tm_mon; 	    /* months since Jan, [0,11] */
    int tm_year;	    /* years since 1900 */
    int tm_wday;	    /* days since Sun, [0,6] */
    int tm_yday;	    /* days since Jan 1, [0,365] */
    int tm_isdst;	    /* daylight savings time */
};
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack(pop)
#endif

#if defined(__MISRA_20_12) && (__MISRA_20_12 == 2)
#  error "(Misra Rule 20.12): the header <time.h> not allowed"
#elif defined(__MISRA_20_12) && (__MISRA_20_12 == 1)
#  warning "(Misra Rule 20.12): the header <time.h> not allowed"
#endif

#if defined(__MISRA_127) && (__MISRA_127 == 2)
#  error "(Misra Rule 127): the header <time.h> not allowed"
#elif defined(__MISRA_127) && (__MISRA_127 == 1)
#  warning "(Misra Rule 127): the header <time.h> not allowed"
#endif

#if defined(__STDC_VERSION__) && (__STDC_VERSION__>=199901L)
#define __Restrict	restrict
#else
#define __Restrict
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log push on
#endif

#if defined(__NoFloat) || defined(__NoDouble)
# define   difftime(t1,t0) ((t1)-(t0))
#else
#if defined(__ATTRIBUTES__)
  double   difftime(time_t __TIM1, time_t __TIM2) __attribute__ ((__const__));
#else
  double   difftime(time_t __TIM1, time_t __TIM2);
#endif
# if defined(__FloatSingle__)
/* When t0 and t1 both positive or both negative, the difference cannot
   cause signed integer overflow. But for any values more than 6 months
   from the epoch, casting time_t to (double) will lose precision even
   before we do the subtraction. Doing the subtract with integers ensures
   we return an exact difference for dates within a 6-month range and we
   always return a difference with the correct magnitude.
 */
#  define   difftime(t1,t0) ((((t1)>0)==((t0)>0))?((double)((t1)-(t0))):\
			    ((double)(t1))-((double)(t0)))
# else
#  define   difftime(t1,t0) (((double)(t1))-((double)(t0)))
# endif
#endif
time_t	   time		(time_t *);

clock_t	   clock	(void);
time_t	   mktime	(struct tm *);

char *	   asctime	(const struct tm *);
char *	   asctime_r	(const struct tm *, char *);
char *	   ctime	(const time_t *);
char *	   ctime_r	(const time_t *, char *);
struct tm *gmtime	(const time_t *);
struct tm *gmtime_r	(const time_t *, struct tm *);
struct tm *localtime	(const time_t *);
struct tm *localtime_r	(const time_t *, struct tm *);
#if defined(__CHECK_PRINTF__) && defined(__GNUC__)
size_t	   strftime	(char* __Restrict, size_t, const char* __Restrict, 
			const struct tm* __Restrict)
			__attribute__ ((__format__ (__strftime__, 3, 0)));
#else
size_t	   strftime	(char*__Restrict, size_t,const char* __Restrict,
				const struct tm* __Restrict);
#endif

#if defined(__GHS_GENERATE_FEE) && defined(__ghs__)
#pragma ghs entry_exit_log pop
#endif

/* Most of the following declarations are suitable for any POSIX target. */
#if defined(__INTEGRITY)

#if defined(_INTEGRITY_SOURCE) || (!defined(_POSIX_C_SOURCE) && !defined(_POSIX_SOURCE)) 
# include <sys/time.h>
#endif

#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack (push, __ghs_max_pack_value)
#endif
typedef struct timespec
{
    time_t	tv_sec;
    long	tv_nsec;
} timespec_t;

typedef struct itimerspec
{
    struct timespec	it_interval;
    struct timespec	it_value;
} itimerspec_t;
#if (defined(__EDG__) || defined(__CCOM__)) && defined(__ghs_max_pack_value)
#pragma pack(pop)
#endif

typedef unsigned int	clockid_t;
typedef unsigned int	timer_t;

# define	CLOCK_REALTIME	3
#ifdef INT_178B
# define	CLOCK_MONOTONIC	4
#endif

# define	TIMER_ABSTIME	1

int clock_settime(clockid_t __clock_id, const struct timespec *_tp);
int clock_gettime(clockid_t _clock_id, struct timespec *_tp);
int clock_getres(clockid_t _clock_id, struct timespec *_res);
int nanosleep(const struct timespec *_rqtp, struct timespec *_rmtp);

typedef struct sigevent sigevent_t;

int timer_create(clockid_t _clock_id, sigevent_t *_evp,
                 timer_t *_timerid);
int timer_delete(timer_t _timerid);
int timer_settime(timer_t _timerid, int _flags,
                  const struct itimerspec *_value,
                  struct itimerspec *_ovalue);
int timer_gettime(timer_t _timerid, struct itimerspec *_value);
int timer_getoverrun(timer_t _timerid);

#if defined(_INTEGRITY_SOURCE) || (!defined(_POSIX_C_SOURCE) && !defined(_POSIX_SOURCE)) 
#define SECSPERMIN	60
#define MINSPERHOUR	60
#define HOURSPERDAY	24
#define DAYSPERWEEK	7
#define DAYSPERNYEAR	365
#define DAYSPERLYEAR	366
#define SECSPERHOUR	(SECSPERMIN * MINSPERHOUR)
#define SECSPERDAY	((long) SECSPERHOUR * HOURSPERDAY)
#define MONSPERYEAR	12
#define TM_YEAR_BASE	1900

#endif
#endif	/* __INTEGRITY */

#if !defined(__STRICT_ANSI__) || defined(_POSIX_SOURCE) || defined(_POSIX_C_SOURCE)
   void  tzset (void);
   extern char *tzname[2];	/* set by tzset() */
#endif
#undef __Restrict
#ifdef __cplusplus
}
#endif
#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _TIME_H */
