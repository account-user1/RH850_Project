/*
			ISO C Runtime Library

	Copyright (c) 1983-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
/*
    Details from ISO/IEC 9899:1999 regarding _Bool
    6.2.5, paragraph 2 
    an object of type _Bool is large enough to hold the values 0 and 1
    6.2.5, paragraph 6 
    (indicates indirectly that _Bool is an unsigned integer type.)
    6.3.1.1, paragraph 1 
    The rank of _Bool shall be less than the rank of all other standard
    integer types.
    6.3.1.1, paragraph 2 
    _Bool may be used as the base type of a bit-field.  
    6.3.1.2, paragraph 1
    When any scalar value is converted to _Bool, the result is 0
    if the value compares equal to 0; otherwise, the result is 1.

    The fact that _Bool has the lowest rank also implies that it has the
    smallest size, because if integral types have different precision,
    the type with the larger precision has the higher rank, based on
    other rules in 6.3.1.1 paragraph 1 which I have not quoted here.
*/

#ifndef _STDBOOL_H
#ifdef __ghs__
#pragma ghs startnomisra
#endif
#define _STDBOOL_H

#if !defined(__cplusplus) 

#if !defined(_Bool_DEFINED) && (!defined(__STDC_VERSION__) || (__STDC_VERSION__<199901L))
#define	_Bool_DEFINED
typedef unsigned char _Bool;
#endif

#define bool _Bool
#define false 0
#define true 1
#define __bool_true_false_are_defined 1

#endif	/* !defined(__cplusplus) */

#ifdef __ghs__
#pragma ghs endnomisra
#endif
#endif	/* _STDBOOL_H */
