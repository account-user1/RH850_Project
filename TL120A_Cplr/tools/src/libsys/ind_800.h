--
--	V850 Language Independent Runtime Library
--
--	Copyright 1996-2000 by Green Hills Software, Inc.
--
--    This program is the property of Green Hills Software, Inc,
--    its contents are proprietary information and no part of it
--    is to be disclosed to anyone except employees of Green Hills
--    Software, Inc., or as agreed in writing signed by the President
--    of Green Hills Software, Inc.
--

#ifndef IND_800_H
#define IND_800_H
#ifdef __V850
#define CALL(x)	jarl	x, lp
#else
#define CALL(x)	jal	x
#endif

-- FARCALL(x,y) -> Call x; y is a scratchable register
.macro farcall dest, scratch
#ifdef __V850E2
    jarl32 dest, lp
#elif defined(__V850)
.macrolocal label, localpic
    CALL(localpic)
localpic:
    mov	lp,scratch  

    movhi hi(label-localpic),scratch,lp
    movea lo(label-localpic),lp,lp
    movhi hi(dest-localpic),scratch,scratch
    movea lo(dest-localpic),scratch,scratch
    jmp [scratch]
label:
#else
#error unsupported architecture
#endif
.endm

#ifdef __V810
#define HI	hi1
#else
#define HI	hi
#endif

#ifdef __V850_LOAD_STORE_SYNC
#define SYNC mov r31, r0
#else
#define SYNC
#endif

#if defined(EVA_LOAD_HAZARD) \
    || defined(__V850_LOAD_STORE_SYNC) \
    || defined(__V850_BITOP_SYNC)
#define RETI	mov r31, r0 ; reti
#else
#define RETI	reti
#endif

#ifdef __V850E
#define MOV32(x, y) mov x, y
#else
#define MOV32(x, y) movhi HI(x),zero,y ; movea	lo(x),y,y
#endif

#endif
