// iostream.h standard header
#ifndef _IOSTREAM_H_
#define _IOSTREAM_H_
#include <istream>
_STD_BEGIN
#if defined(__GHS_PRAGMAS)
#pragma ghs startdata
#endif
#if defined(__ghs) && defined(__ghs_max_pack_value)
#pragma pack (push, __ghs_max_pack_value)
#endif

		// OBJECTS
static ios_base::Init _Ios_init0;
extern istream cin;
extern ostream cout;
extern ostream cerr, clog;
#if defined(__ghs) && defined(__ghs_max_pack_value)
#pragma pack(pop)
#endif
#if defined(__GHS_PRAGMAS)
#pragma ghs enddata
#endif
_STD_END

 #if _HAS_NAMESPACE
using namespace std;
 #endif /* _HAS_NAMESPACE */

#endif /* _IOSTREAM_H_ */

/*
 * Copyright (c) 1992-2003 by P.J. Plauger.  ALL RIGHTS RESERVED.
 * Consult your license regarding permissions and restrictions.
V4.02:0324 */
