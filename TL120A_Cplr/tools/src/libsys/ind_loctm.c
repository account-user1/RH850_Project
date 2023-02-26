/*
                        Low-Level System Library

            Copyright 1983-2015 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/*
 * On Unix, times are always kept in Coordinated Universal Time (UTC)
 * and adjusted according to the local timezone when displayed.
 *
 * Entry points are:
 *	localtime()
*/
/* ind_loctm.c: ANSI time zone facilities, and internal library primitive. */

#include "indos.h"
#include "ind_thrd.h"

#ifdef NEED_TIME_DEFS

#if defined(CROSSUNIX) || !defined(ANYUNIX)

/******************************************************************************/
/*  #include <time.h>							      */
/*  struct tm *localtime_r(const time_t *timer, struct tm *result);	      */
/*  struct tm *localtime(const time_t *timer);				      */
/*									      */
/*  localtime returns a structure containing the current local time broken    */
/*  down into tm_year (current year - 1900), tm_mon (current month January=0) */
/*  tm_mday (current day of month), tm_hour (current hour 24 hour time),      */
/*  tm_min (current minute), and tm_sec (current second).                     */
/*									      */
/*  Uses __gh_timezone to determine the current timezone.		      */
/*									      */
/*  timer is a pointer to a long containing the number of seconds since the */
/*  Epoch (as set by time()).						      */
/*									      */
/*  Return 0 if no time of day can be returned.				      */
/******************************************************************************/

extern struct tm *gmtime_r(const time_t *timer, struct tm *result);

/*
    The code here calculates daylight saving time according to the rules
    for the USA for the years indicated.  In July 2005 a law was passed
    changing dst to begin on the 2nd Sunday in March and end on the first
    Sunday in November.  This change took effect in 2007.

    The rules I follow are:
	before 1966
	    no DST before 1966.
	    (This ignores "War Time" in 1918-1919, 1942-1945)
	1966 and after
	    at 2am of the last sunday of april dst starts
	    at 2am of the last sunday of october dst ends
	    (This ignores special rules in 1974 and 1975.)
	1987 and after
	    at 2am of the first sunday of april dst starts
	    at 2am of the last sunday of october dst ends
	2007 and after
	    at 2am of the second sunday of march dst starts
	    at 2am of the first sunday of november dst ends
*/
static int local_dst_offset(const struct tm *ptm)
{
/* The following code is hand-optimized to reduce code size.
   Conceptually, 2 boundary days are computed. If the current
   date is before the start or after the finish, dst is false.
   If the current date is between them, dst is true. If the current
   is a boundary date, then we compare current time to 1am or 2am.
   If the date is the start boundary, after 2am means dst is true.
   If the date is the end boundary, after 1am means dst is false.

   http://www.nist.gov/pml/div688/dst.cfm tells us that dst ends at
   2am local time, which is 1am standard time:
   "In 2011, DST is from 2:00 a.m. (local time) on March 13th 
   until 2:00 a.m. (local time) on November 6th." 

    Specifically the logic does this:
	If current month is before start month or after end month,
	return immediately because gmtime_r set tm_isdst=0 and
	there is no other work for us.
    If current month is start month assume we are before the
	boundary and set isdst=0.  Use 'after' variable to
	remember how to set isdst later if after the boundary.
    If current month is end month assume we are before the
	boundary. Already have set isdst=1.  Use 'after' variable
	to remember how to set isdst later if after the boundary.
    If current month is either boundary month, day is to the
	boundary day.  This is tricky.  See explanation below.
    If current month is between the boundaries, isdst=after=1.
	Fall into the code for boundary months, but no matter
	what, isdst will be true.

    The variable sunday_mday is calculated to be the day of the
	month for the sunday which begins the current week.
	This is useful for figuring out whether current day is
	the nth sunday of the month, often without asking if the
	current day is even a sunday at all.
    The variable day is initialized to be the highest day of the 
	month which could be a boundary sunday.  If the boundary 
	is the last sunday, day=<number of days in the month>.
	if the boundary is the nth sunday, day=7*n.
   */
    static const struct s_chart {
	char year;	/* actually years after 1900 */
	char start_month;	/* 0..11 */
	char start_day;	/* 1..31.  This is the largest value possible
			   for the sunday in question.  For 3rd sunday
			   use 21, for last sunday of april, use 30. */
	char end_month;	/* 0..11 */
	char end_day;	/* 1..31.  This is the largest value possible
			   for the sunday in question.  For 1st sunday
			   use 7, for last sunday of october, use 31. */
    } chart[] = {
	{ 107,  2, 14, 10,  7 },
	{  87,  3,  7,  9, 31 },
	{   0,  3, 30,  9, 31 },
    };
    int isdst, sunday_mday, month, after, day;
    const struct s_chart *p;

    if (ptm->tm_year < 66)
	return 0;

    for (p=chart; p->year > ptm->tm_year; p++)
	;
    isdst = 1;		/* isdst=1 if before boundary date */
    after = 1;		/* after=1 if after boundary date */
    day = p->start_day;
    month = ptm->tm_mon;
    if (month == p->start_month) {
	isdst = 0;
    } else if (month == p->end_month) {
	after = 0;
	day = p->end_day;
    } else if (month < p->start_month || month > p->end_month) {
	return 0;	/* isdst=0 */
    } /* else		isdst = 1 */
    
    /* find mday for sunday of current week */
    sunday_mday = (ptm->tm_mday-ptm->tm_wday);
    if (sunday_mday <= day-7)	/* before boundary sunday */
	;
    else if (sunday_mday > day)	/* after boundary sunday */
	isdst=after;
    else if (ptm->tm_wday)	/* sunday_mday is the boundary, 
				   but current day is not a sunday,
				   therefore it is after boundary */
	isdst=after;
    else if (ptm->tm_hour>after)/* 2am or later on a sunday in start_month */
	isdst=after;		/* 1am or later on a sunday in end_month */

    return isdst ? 3600: 0;
}

#pragma weak __ghs_dst_offset
int __ghs_dst_offset(const struct tm *ptm);

#ifdef __ghs_pic
#pragma weak __ghs_undefined_dst_func
extern int __ghs_undefined_dst_func(const struct tm *ptm);
#else
#define	__ghs_undefined_dst_func	0
#endif /* __ghs_pic */

#if defined(__INTEGRITY_SHARED_LIBS)
void tzset(void);
extern long __ghs_timezone;
#endif	/* __INTEGRITY_SHARED_LIBS */

struct tm *localtime_r(const time_t *timer, struct tm *result)
{
    time_t time_v;
    long dst_offset = -1;

#if defined(__INTEGRITY_SHARED_LIBS)
    tzset();
    time_v = *timer + __ghs_timezone;
#else
    time_v = *timer - 60 * __gh_timezone();
#endif

#if __INT_BIT < __TIME_T_BIT
    /* If time_t is 64-bit, the year might not fit in an int, 
     * and gmtime must return NULL. */
    if (gmtime_r(&time_v, result) == NULL)
	return NULL;
#else
    gmtime_r(&time_v, result);
#endif

    if (__ghs_dst_offset != __ghs_undefined_dst_func)
	dst_offset = __ghs_dst_offset(result);

    if (dst_offset == -1)
	dst_offset = local_dst_offset(result);

    if (dst_offset != 0) {
	time_v += dst_offset;
	/* gmtime_r never returns NULL here */
	gmtime_r(&time_v, result);
	result->tm_isdst = 1;
    }

    return result;
}

struct tm *localtime(const time_t *timer) {
    struct tm *temp = __ghs_GetThreadLocalStorageItem(__ghs_TLS_gmtime_temp);
    if (!temp)
	temp = &__ghs_static_gmtime_temp;
    return(localtime_r(timer, temp));
}
#endif	/* CROSSUNIX or !ANYUNIX */

#endif /* NEED_TIME_DEFS */
