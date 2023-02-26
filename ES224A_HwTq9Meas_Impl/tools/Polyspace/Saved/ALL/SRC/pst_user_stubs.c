/*
 *
 * This file and its contents are the property of The MathWorks, Inc.
 * 
 * This file contains confidential proprietary information.
 * The reproduction, distribution, utilization or the communication
 * of this file or any part thereof is strictly prohibited.
 * Offenders will be held liable for the payment of damages.
 *
 * Copyright 1999-2011 The MathWorks, Inc.
 *
 */
 
// Here is the list of functions which may need to be stubbed.
// 
// Here's how the stubber works: 
// 
// For each function in the list below, if you don't do anything
// it'll take the worst possible case, which is that the function 
// writes through the arguments as if they were pointers (even
// pointers cast to int).  
//
// External functions are assumed to not store their arguments
// in static / global data.
//
// External functions are also assumed to have no effect (read,
// write) on global variables.
//
// Any external functions which do not respect these two assumptions
// will need to be stubbed explicitely.
// 
// Here's an example:   int f(int)
// In the worst case, the stubber will assume that the function
// may behave something like this: 
// 
// 
//      int f(char *x)
//      {
//         strcpy(x, "the quick brown fox, etc.");
//
//         return &(x[2]);
//      }
// 
// This has a bad effect on both the analysis time, and on the
// the resulting selectivity rate.
// 
// 
// However, if you know that the function is in fact very tame,
// like this:
//      int f(char *x)
//      {
//        return strlen(x);
//      }
// 
// The stubber can provide a stub which will reflect this, and 
// have both fast analysis time and high selectivity.
// 
// I've provided below the pragma directives recognized by the
// verifier. All you need to to do is remove the initial //
// to activate the pragmas which are appropriate.
// 
// The NO_WRITE pragma indicates that the function does not
// write to or through its arguments.
// 
// The NO ESCAPE pragma indicates that the function does not
// allow access to the argument to escape through
// the return value.
// 
// In the first example above, neither pragmas apply.
// In the second example above, both pragmas apply.
//


#include "pst_user_stubs.h"

