/*
 *
 * This file and its contents are the property of The MathWorks, Inc.
 * 
 * This file contains confidential proprietary information.
 * The reproduction, distribution, utilization or the communication
 * of this file or any part thereof is strictly prohibited.
 * Offenders will be held liable for the payment of damages.
 *
 * Copyright 1999-2013 The MathWorks, Inc.
 *
 */
 
/*
  Polyspace include for varargs.

  stdarg.h

  This include is designed for SUIF compilation pass. SUIF will replace the '...' by an argument called __polyspace_vararg of type void**.
*/

#ifndef _STDARG_H
/* Prevent other libs from defining the types and macros about varargs */
#define _STDARG_H
#define _STDARG_H_
#define _SYS_VA_LIST_H
#define _ANSI_STDARG_H_
#define __GNUC_VA_LIST
#define __INCstdargh
#define _STDARG_INCLUDED

#define _VA_LIST
#define _VA_LIST_DEFINED

#define __Iva_list

#define MAX_VARARGS 64

#if defined(__OS_VISUAL) || defined(polyspace_va_list_is_char_ptr)

typedef char *__va_list;

#else /* ! (__OS_VISUAL || polyspace_va_list_is_char_ptr) */

typedef void *__va_list;

#endif /* ! (__OS_VISUAL || polyspace_va_list_is_char_ptr) */

typedef __va_list va_list;
typedef __va_list __gnuc_va_list;

#ifdef __cplusplus

namespace std {
  using ::va_list ;
}

#endif /* __cplusplus */



#if defined(POLYSPACE_INSTRUMENT)

#undef va_start
#undef va_end
#undef va_copy
#undef va_arg

void va_start();
void va_end();
void va_copy();

#define va_arg(ap,mode) *(mode*)va_arg(ap)

#pragma POLYSPACE_NO_INSTRUMENT "va_start"
#pragma POLYSPACE_NO_INSTRUMENT "va_arg"
#pragma POLYSPACE_NO_INSTRUMENT "va_end"
#pragma POLYSPACE_NO_INSTRUMENT "va_copy"

#else /* POLYSPACE_INSTRUMENT*/

extern void **__polyspace_vararg; /* just there to avoid compiling errors */
extern int _polyspace_vararg_position; extern volatile int _polyspace_vararg_p0;
extern va_list __polyspace_va_arg_incr(va_list *);

/* __polyspace_vararg will be added by suif in replacement of '...' */
#define va_start(ap, name)      (void) (ap  = (va_list) __polyspace_vararg,\
                                        _polyspace_vararg_position=_polyspace_vararg_p0)
#define va_arg(ap, mode)        *((mode*)__polyspace_va_arg_incr((va_list *)(ap)))
#define va_end(ap)              (void)(_polyspace_vararg_position=_polyspace_vararg_p0)
#define va_copy(to, from)       ((to) = (from))

#endif /* ! POLYSPACE_INSTRUMENT */


#ifdef PST_GNU

/* disable gnu builtin */
#define __builtin_va_list      va_list
#define __builtin_stdarg_start va_start
#define __builtin_va_start     va_start
#define __builtin_va_arg       va_arg
#define __builtin_va_copy      va_copy
#define __builtin_va_end       va_end

#endif /* PST_GNU */


#endif /* _STDARG_H */
