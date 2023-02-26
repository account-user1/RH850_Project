#ifndef __include_integrity_setjmp_h
#pragma ghs startnomisra
#define __include_integrity_setjmp_h

#if defined(INT_178B_FULL)
# include "../../ansi/setjmp.h"
# include "sigsetjmp_5.h"
#else
# include <INTEGRITY_version.h>
# if __INTEGRITY_MAJOR_VERSION > 4
#  if __INTEGRITY_MAJOR_VERSION == 5
#   include "../../ansi/setjmp.h"
#   include "sigsetjmp_5.h"
#  else
#   include "../../ansi/setjmp.h"
#   include <sigsetjmp.h>
#  endif /* __INTEGRITY_MAJOR_VERSION == 5 */
# else 
#  include "../../ansi/setjmp.h"
# endif /* __INTEGRITY_MAJOR_VERSION > 4 */
#endif /* defined(INT_178B_FULL) */

#pragma ghs endnomisra
#endif
