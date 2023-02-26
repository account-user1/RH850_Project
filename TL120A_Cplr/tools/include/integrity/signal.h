#ifndef __include_integrity_signal_h
#pragma ghs startnomisra
#define __include_integrity_signal_h

#if defined(__MISRA_20_8) && (__MISRA_20_8 == 2)
#  error "(Misra Rule 20.8): the header <signal.h> not allowed"
#elif defined(__MISRA_20_8) && (__MISRA_20_8 == 1)
#  warning "(Misra Rule 20.8): the header <signal.h> not allowed"
#endif


#if defined(INT_178B_FULL)
# include <ghsposix/../../INTEGRITY-include-full/signal.h>
#else
# include <INTEGRITY_version.h>
# if __INTEGRITY_MAJOR_VERSION > 4
#  include <ghsposix/../../INTEGRITY-include/signal.h>
# else
#  include "../../ansi/signal.h"
# endif /* __INTEGRITY_MAJOR_VERSION > 4 */
#endif /* defined(INT_178B_FULL) */

#pragma ghs endnomisra
#endif
