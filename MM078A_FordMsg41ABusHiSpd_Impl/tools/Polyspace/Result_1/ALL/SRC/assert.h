/* Copyright 1999-2013 The MathWorks, Inc. */
 
/*
  Polyspace include for assert.

  assert.h

  This include prevents the expansion of the assert macro. It is replaced by a call to an extern function.
*/

#ifndef _POLYSPACE_ASSERT_H
#define _POLYSPACE_ASSERT_H

#ifdef  __cplusplus

#ifdef PST_STRICT_ASSERT 
  /* -D PST_STRICT_ASSERT may help on pre-processed code */
extern void  __pst_profile__assert(int); 
extern "C" void assert(int);

#else
  /* allow implicit conversions pointer -> int */
extern void  __pst_profile__assert(...); 
extern "C" void assert(...);

#endif


#else

extern void assert(int);

#endif


#endif /* _POLYSPACE_ASSERT_H */
