/*
                        Low-Level System Library

            Copyright 2013-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/

#include <stdint.h>
#include <string.h>

/* This file contains the definition of __ghs_coverage_init, which is declared
   weak in ind_crt1.c.  The linker will pull in this module automatically when
   coverage is enabled at link time.  __ghs_coverage_init performs all of the
   necessary target-side initialization for collecting -coverage=* profiling
   data. */

/* Structure representing the coverage header. */
struct coverage_header {
    /* A string identifying the type of coverage and coverage section format
       version number. */
    char version_string[8];
    /* A checksum that can be used to verify that this coverage information
       matches the executable with which it is used. */
    uint32_t checksum;
    /* Padding bytes.  The size of the header must be a multiple of 8 to
       keep the .ghcovdz section (64-bit counts) correctly aligned. */
    uint32_t padding;
};

/* This should be bumped up by one whenever the coverage format changes.
   This MUST be exactly one character in length. */

#define COVERAGE_VERSION "1"

#define COVFZ_STR "GHCOVFZ" COVERAGE_VERSION
#define COVCZ_STR "GHCOVCZ" COVERAGE_VERSION
#define COVDZ_STR "GHCOVDZ" COVERAGE_VERSION

extern const uint32_t __ghs_exec_checksum;

extern char __ghsbegin_ghcovfz[];
extern char __ghsend_ghcovfz[];
extern char __ghsbegin_ghcovcz[];
extern char __ghsend_ghcovcz[];
extern char __ghsbegin_ghcovdz[];
extern char __ghsend_ghcovdz[];

/* These need to be weak in case this file gets pulled into a link that
   doesn't provide these symbols.  This can happen when this file is built
   into an INTEGRITY shared library, but the problem isn't necessarily limited
   to that case. */
#pragma weak __ghsbegin_ghcovfz
#pragma weak __ghsend_ghcovfz
#pragma weak __ghsbegin_ghcovcz
#pragma weak __ghsend_ghcovcz
#pragma weak __ghsbegin_ghcovdz
#pragma weak __ghsend_ghcovdz

static void write_coverage_header(char *secdata, const char *headerstr)
{
    int pos;
    for (pos = 0; pos < 8; pos++) {
	secdata[pos] = headerstr[pos];
    }
    *((uint32_t*)(secdata+8)) = __ghs_exec_checksum;
}

void __ghs_coverage_init(void)
{
    if (__ghsbegin_ghcovfz + sizeof(struct coverage_header) <=
	__ghsend_ghcovfz) {
	write_coverage_header(__ghsbegin_ghcovfz, COVFZ_STR);
    }
    if (__ghsbegin_ghcovcz + sizeof(struct coverage_header) <=
	__ghsend_ghcovcz) {
	write_coverage_header(__ghsbegin_ghcovcz, COVCZ_STR);
    }
    if (__ghsbegin_ghcovdz + sizeof(struct coverage_header) <=
	__ghsend_ghcovdz) {
	write_coverage_header(__ghsbegin_ghcovdz, COVDZ_STR);
    }
}
