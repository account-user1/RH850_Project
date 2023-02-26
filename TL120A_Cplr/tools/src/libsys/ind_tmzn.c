/*
                        Low-Level System Library

            Copyright 1983-2014 Green Hills Software, Inc.

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
 *	tzset()
 *	__gh_timezone()
*/
/* ind_tmzn.c: ANSI time zone facilities, and internal library primitive. */

#include "indos.h"
#include "ind_thrd.h"

#if defined(__INTEGRITY_SHARED_LIBS)
long __ghs_timezone;
#endif	/* __INTEGRITY_SHARED_LIBS */

/* Added the following code for better System V compatibility		*/
/* Actually, most systems provide tzset() in libc.a and that one should	*/
/* be used, but I wanted to add the global variables to <time.h>	*/
/* and it seemed reasonable that if the Green Hills Software <time.h>	*/
/* had the System V style timezone variables, we should also provide	*/
/* the appropriate library routine which sets them.  There are 2 	*/
/* problems with this implementation.  The global variable 'timezone'	*/
/* conflicts with the BSD type 'struct timezone', therefore it is not	*/
/* convenient to use gettimeofday() on BSD to set timezone.  Further,	*/
/* getenv() is needed here, and that is defined in libansi.a., which	*/
/* always preceeds libind.a.  For now getenv() is coded inline. 	*/
#if (defined(ANYSYSV) && defined(CROSSUNIX)) || \
    defined(SIMULATE) || defined(EMBEDDED) || defined(MSW)
#define NEEDTZSET
#endif
#if defined(ANYSYSV)
long timezone, altzone;
int daylight;
#elif defined(NEEDTZSET)
/* Disable warning for defining an internal timezone variable */
#pragma ghs nowarning 172
static long timezone;
#pragma ghs endnowarning 172
#endif
#if defined(NEEDTZSET)
/******************************************************************************/
/* void tzset(void);							      */
/* System V compatible method of setting the current timezone and daylight    */
/* savings status.  Requires that the external variable, environ, be set to   */
/* a list of environment strings, including one of the form TZ=PST8PDT	      */
/* Explanation needed for the timezone, altzone, daylight and tzname variables*/
/******************************************************************************/
#define IsAlpha(c)	((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
#define IsDigit(c)	(c>='0'&&c<='9')

#ifdef __ghs_pid
char *tzname[2];
#else
static char tzname_default[] = "GMT\0   ";
char *tzname[2] = { tzname_default, tzname_default+4 } ;
#endif
void tzset(void) {
#if defined(ANYUNIX)||defined(UNIXSYSCALLS)||defined(MSW)
    static char tzname_default[] = "GMT\0   ";
/* Ugly.  An inline copy of getenv() to avoid conflicts with C libraries. */
/* should be tz = getenv("TZ");						  */
    char *tz = NULL;
    extern char **environ;
    char **envp = environ, *e;
    if (envp) 
	while (e = *envp++)
	    if (e[0] == 'T' && e[1] == 'Z' && e[2] == '=') {
		tz = e + 3;
		break;
	    }
/* Outside of Unix, don't know how to get the environment, so TZ will be NULL */
    if (tz != NULL) {
	int hour = 0, minute = 0, second = 0,sign = 1;
	char *zone;
	int ahour = 0, aminute = 0, asecond = 0,asign = 1;
	char *azone = NULL;

	/* 3 letter timezone required */
	if (!IsAlpha(tz[0]) || !IsAlpha(tz[1]) || !IsAlpha(tz[2])) 
	    return;
	zone = tz; tz += 3;

	/* the rest is optional */
	if ( *tz ) {
	    /* signed hour:min:sec difference from GMT */
	    if ( *tz == '+' || *tz == '-' ) {
		if (*tz == '-') sign = -1;
		tz++;
	    }
	    if (!IsDigit(tz[0]))
		return;
	    hour = *tz++ - '0';
	    if (IsDigit(tz[0]))
		hour = hour * 10 + *tz++ - '0';
	    hour *= sign;
	    if (tz[0] == ':' && IsDigit(tz[1]) && IsDigit(tz[2])) {
		minute = ((tz[1] - '0') * 10 + tz[2] - '0') * sign;
		tz += 3;
		if (tz[0] == ':' && IsDigit(tz[1]) && IsDigit(tz[2])) {
		    second = ((tz[1] - '0') * 10 + tz[2] - '0') * sign;
		    tz += 3;
		}
	    }
	    /* the rest is optional */
	    if ( *tz && IsAlpha(tz[0]) && IsAlpha(tz[1]) && IsAlpha(tz[2])) {

		/* 3 letter daylight timezone */
		azone = tz; tz += 3;

		/* signed hour:min:sec difference from GMT (may be skipped) */
		if ( *tz == '+' || *tz == '-' ) {
		    if (*tz == '-') asign = -1;
		    tz++;
		}
		if (IsDigit(tz[0])) {
		    ahour = *tz++ - '0';
		    if (IsDigit(tz[0]))
			ahour = ahour * 10 + *tz++ - '0';
		    ahour *= asign;
		    if (tz[0] == ':' && IsDigit(tz[1]) && IsDigit(tz[2])) {
			aminute = ((tz[1] - '0') * 10 + tz[2] - '0') * asign;
			tz += 3;
			if (tz[0] == ':' && IsDigit(tz[1]) && IsDigit(tz[2])) {
			    asecond = ((tz[1] - '0') * 10 + tz[2] - '0')*asign;
			    tz += 3;
			}
		    }
		} else if (*tz == '\0')
		    ahour = hour - 1;
	    }
	}
	/* the rest of TZ is ignored by this implementation */

	timezone = hour * 60 * 60 + minute * 60 + second;
#if defined(ANYSYSV)
	daylight = 0;
#endif
#ifdef __ghs_pid
	tzname[0] = tzname_default;
	tzname[1] = tzname_default+4;
#endif
	tzname[0][0] = zone[0];
	tzname[0][1] = zone[1];
	tzname[0][2] = zone[2];
	tzname[0][3] = '\0';
	if (azone) {
	    tzname[1][0] = azone[0];
	    tzname[1][1] = azone[1];
	    tzname[1][2] = azone[2];
	    tzname[1][3] = '\0';
#if defined(ANYSYSV)
	    altzone = ahour * 60 * 60 + aminute * 60 + asecond;
	    daylight = 1;
#endif
	}
	return;
    }
#endif
}
#endif /* NEEDTZSET */

/******************************************************************************/
/* int __gh_timezone(void);						      */
/*  Return the number of minutes west of Greenwich Mean Time of the current   */
/*  time zone.  If the time() functions return the local time rather than     */
/*  Greenwich Mean Time then return 0 from __gh_timezone().		      */
/*  See also tzset() and localtime()					      */
/******************************************************************************/
int __gh_timezone(void) {
#if defined(ANYSYSV) || defined(NEEDTZSET)
    tzset();
    return(timezone/60);
#elif defined(ANYBSD)
    struct timeval ignore;
    struct timezone tz;
    gettimeofday(&ignore,&tz);
    return(tz.tz_minuteswest);
#elif defined(ANYUNIX)|| defined(UNIXSYSCALLS)|| defined(SIMULATE)
#  if defined(TIMEZONE)
    return(TIMEZONE*60);
#  else
    return(8*60);
#  endif	/* TIMEZONE */
#else
    return 0;
#endif
}
