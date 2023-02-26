/*
                        Low-Level System Library

            Copyright 2000-2014 Green Hills Software, Inc.

    This program is the property of Green Hills Software, Inc,
    its contents are proprietary information and no part of it
    is to be disclosed to anyone except employees of Green Hills
    Software, Inc., or as agreed in writing signed by the President
    of Green Hills Software, Inc.
*/
#ifndef _INDSECINFO_H
#define _INDSECINFO_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct secinfo_t {
    struct secinfo_t*   next; /* NULL for no next section */
    const char*		name; /* nul-terminated section name */
    void*		addr; /* Address of section in memory */
    uint32_t		size; /* length of section (bytes) */
    uint32_t		flags; /* flags, see below */
    struct secinfo_t*   romcopyof; /* this section is a ROM copy of 'romcopyof' */

 /* Future fields go here */

} *secinfo_ptr;

#define SECINFO_TEXT     0x1  /* is executable */
#define SECINFO_DATA     0x2  /* is initialized data */
#define SECINFO_BSS      0x4  /* is zero-init data */
#define SECINFO_WRITABLE 0x8  /* not read-only */
#define SECINFO_ABSOLUTE 0x10 /* absolute, does not move under PIC/PID */
#define SECINFO_CHECKSUM 0x20 /* CRC word present at end of section */

#pragma ghs startdata
extern struct secinfo_t __secinfo;
#pragma ghs enddata

#ifdef __cplusplus
} /* extern "C" */
#endif

#if 0 /* SAMPLE PROGRAM */

#include <stdio.h>
int main() {
    secinfo_ptr p;
    int count=0;
    for (p = &__secinfo; p != NULL; p=p->next,count++) {
	printf("section \"%s\"\n",p->name);
	printf(" address: 0x%08x\n",p->addr);
	printf(" length:  0x%x\n",p->size);
	printf(" flags:   ");
#define SECINFO_FLAG(F) \
    if (p->flags&SECINFO_##F) printf("%s ",#F)
	SECINFO_FLAG(TEXT);
	SECINFO_FLAG(DATA);
	SECINFO_FLAG(BSS);
	SECINFO_FLAG(WRITABLE);
	SECINFO_FLAG(ABSOLUTE);
	SECINFO_FLAG(CHECKSUM);
	printf("\n");
	if (p->romcopyof)
	    printf(" ROMing:  \"%s\"\n",p->romcopyof->name);
	printf("\n");
    }
    printf("%i sections in this module\n",count);
    return 0;
}
#endif /* SAMPLE PROGRAM */

#endif /* _INFSECINFO_H */
