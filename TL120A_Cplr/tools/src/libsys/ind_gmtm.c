/*
                        Low-Level System Library

            Copyright 1983-2015 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/* ind_gmtm.c: ANSI gmtime() facility. */

#include <limits.h>
#include "indos.h"
#include "ind_thrd.h"

#ifdef NEED_TIME_DEFS

#if defined(CROSSUNIX) || !defined(ANYUNIX)

static const char mons[]={31,28,31,30,31,30,31,31,30,31,30};
/******************************************************************************/
/* #include <time.h>							      */
/* struct tm *gmtime(const time_t *timer);				      */
/*									      */
/*  gmtime returns a structure containing the current Greenwich Mean Time     */
/*  broken down into tm_year (current year - 1900), tm_mon (current month     */
/*  January=0), tm_mday (current day of month), tm_hour (current hour 24 hour */
/*  time), tm_min (current minute), and tm_sec (current second).              */
/*									      */
/*  timer is a pointer to a time_t containing the number of seconds since the */
/*  Epoch (as set by time()).			                              */
/*									      */
/*  Return 0 if no time of day can be returned				      */
/*									      */
/*  In the case where gmtime_r returns NULL, gmtime does NOT modify result.   */
/*  This is not required by any standard but is assumed by our localtime_r.   */
/*									      */
/*  NOT REENTRANT because it returns the address of a static buffer           */
/*  could be made reentrant if every call to gmtime allocated a new structure */
/******************************************************************************/

#define SECS_IN_MIN	((time_t)60)
#define MINS_IN_HOUR	((time_t)60)
#define SECS_IN_HOUR	(MINS_IN_HOUR * SECS_IN_MIN)
#define HOURS_IN_DAY	((time_t)24)
#define SECS_IN_DAY	(HOURS_IN_DAY * SECS_IN_HOUR)
#define DAYS_IN_WEEK	((time_t)7)

#define DAYS_IN_COMMON_YEAR	((time_t)365)
#define DAYS_IN_400_YEARS	(DAYS_IN_COMMON_YEAR * 400 + 97)

struct tm *gmtime_r(const time_t *timer, struct tm *result) {
/*  If no other implementation provided, assume Epoch is 00:00:00 January 1,1970
    as is true in UNIX.
*/
    time_t time_v = *timer;
    int i, m, islpyr;
    time_t y, t, s;
    int ss, w;

#if defined(MSW) || defined(MSDOS)
    time_v -= 2209075200L;	/* convert to Epoch from MS-DOS */
#endif

    /* Compute t as a Julian day number, where the Epoch is 0 */
    /* and compute s as the seconds within the day */
    t = time_v / SECS_IN_DAY;
    s = time_v % SECS_IN_DAY;
    if (s < 0) {
	s += SECS_IN_DAY;
	t--;
    }
    ss = s;

    /* January 1, 1970 was a Thursday. */
    w = (t + 4) % DAYS_IN_WEEK;
    if (w < 0) {
	w += DAYS_IN_WEEK;
    }

    /* If 1900 does not fall within range, things are very simple because */
    /* every 4 years is a leap year. */
    if (DAYS_IN_COMMON_YEAR * 69 > __GHS_TIME_T_MAX / SECS_IN_DAY) {
	/* Adjust so that 0 is Dec 31, 1899, which is as though 0 is */
	/* Jan 1, 1900 and 1900 is a leap year.  This ensures that t is */
	/* positive and makes it as though every 4 years is a leap year. */
	/* (since t will not *actually* fall within 1900, we're fine) */

	/* Thus, note that there were 17 leap days between Jan 1, 1900 and */
	/* Jan 1, 1970 */
	t += DAYS_IN_COMMON_YEAR * 70 + 18;

	/* Compute y as the year, and t as the day within the year */
	y = t / (DAYS_IN_COMMON_YEAR * 4 + 1) * 4;
	t = t % (DAYS_IN_COMMON_YEAR * 4 + 1);
	if (t >= DAYS_IN_COMMON_YEAR + 1) {
	    y += (t - 1) / DAYS_IN_COMMON_YEAR;
	    t = (t - 1) % DAYS_IN_COMMON_YEAR;
	}
	islpyr = (y & 3) == 0;
	/* Note that we already adjusted so that 1900 is zero. */
    } else {
	time_t century;
	/* Adjust to the beginning of a 400 year cycle, the year 2000 */
	/* There were 7 leap days between Jan 1, 1970 and Jan 1, 2000 */
	t -= DAYS_IN_COMMON_YEAR * 30 + 7;

	/* Compute the century except for the low 2 bits, where 0 is 2000 */
	/* e.g., -4 is 1600 to 1999, 0 is 2000 to 2399, etc. */
	/* Adjust t so that the beginning of the 400 year cycle is 0 */
	century = t / DAYS_IN_400_YEARS * 4;
	t %= DAYS_IN_400_YEARS;
	if (t < 0) {
	    t += DAYS_IN_400_YEARS;
	    century -= 4;
	}

	/* Add in the low 2 bits of the century and adjust t so that the */
	/* beginning of the century is 0, and so that all 4 year cycles have */
	/* an extra day in the first year.  That is, 366 is always the start */
	/* of the second year in the century, but some centuries have no day */
	/* 365. */
	if (t >= DAYS_IN_COMMON_YEAR * 100 + 25) {
	    century += (t - 1) / (DAYS_IN_COMMON_YEAR * 100 + 24);
	    t = (t - 1) % (DAYS_IN_COMMON_YEAR * 100 + 24);
	    if (t >= DAYS_IN_COMMON_YEAR) {
		t++;
	    }
	}

	/* Compute y as the year within the century, and t as the day within */
	/* the year */
	y = t / (DAYS_IN_COMMON_YEAR * 4 + 1) * 4;
	t = t % (DAYS_IN_COMMON_YEAR * 4 + 1);
	if (t >= DAYS_IN_COMMON_YEAR + 1) {
	    y += (t - 1) / DAYS_IN_COMMON_YEAR;
	    t = (t - 1) % DAYS_IN_COMMON_YEAR;
	}

	islpyr = (y & 3) == 0 && (y != 0 || (century & 3) == 0);
	/* Right now 2000 is 0, but we must return 1900 as 0. */
	y += (century + 1) * 100;
#if __INT_BIT < __TIME_T_BIT
	/* If time_t is 64-bit, the year might not fit in an int, and we */
	/* must return NULL. */
	if (y != (int)y) {
	    return NULL;
	}
#endif
    }

    /* hour, minute, second */
    result->tm_hour = ss / SECS_IN_HOUR;
    ss %= SECS_IN_HOUR;
    result->tm_min = ss / SECS_IN_MIN;
    result->tm_sec = ss % SECS_IN_MIN;
    result->tm_wday = w;

    result->tm_isdst = 0;
    result->tm_year = y;
    result->tm_yday = t;

    /* Increment to return an mday in the 1 to 31 range. */
    t++;
    for (i = 0; i < 11; i++) {
	m = mons[i];
	if (i == 1 && islpyr) {
	    m++;
	}
	if (t <= m)
	    break;
	t -= m;
    }

    result->tm_mon  = i;
    result->tm_mday = t;	/* we incremented the mday above */
    return result;
}

struct tm __ghs_static_gmtime_temp;
struct tm *gmtime(const time_t *timer)
{
    
    struct tm *tmp = __ghs_GetThreadLocalStorageItem(__ghs_TLS_gmtime_temp);
    if (tmp == NULL)
	tmp = &__ghs_static_gmtime_temp;
    return(gmtime_r(timer, tmp));
}
#else
int _J_empty_file_illegal;
#endif	/* CROSSUNIX or !ANYUNIX */

#endif /* NEED_TIME_DEFS */
