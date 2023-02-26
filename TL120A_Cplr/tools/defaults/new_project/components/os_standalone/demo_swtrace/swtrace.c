#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <rh850_eagle.h>
#include "labels.h"

void do_tag_test(void);

void logtest1(int var1, long long var2)
{
    /* Log a few values using the EAGLE logging routines.  The first argument
     * is the tag name (which must follow the same syntax rules as a C
     * identifier) and the second is the value to log.
     */
    EAGLE_LogU32(var1, var1);
    EAGLE_LogU64(var2, var2);
    EAGLE_LogBool(check_equal, (var1 == var2));
    EAGLE_LogStr(str, "Test string");
    EAGLE_LogPtr(var1_addr, &var1);
}

int array1[] = {1, 2, 3, 4};
long long array2[] = {
    0x1000000010000000, 0x2000000020000000,
    0x3000000030000000, 0x4000000040000000
};
char *names[] = {
    "Steve", "Mary", "Pat", "Ellen", "Bob",
    "Max", "Marcus", "Richard", "Melanie", "Diane",
};

/* Use the EAGLE_LogNdxStr routine to log all of the strings in the array
 * 'names'.  The index is logged at the same time. */
void log_names()
{
    int i;
    for (i=0; i<sizeof(names)/sizeof(names[0]); i++){
	EAGLE_LogNdxStr(names, i, names[i]);
    }
}

#pragma ghs entry_exit_log=off
int cmpstring(const void *a, const void *b)
{
    return strcmp(*(char *const*)a, *(char *const*)b);
}
#pragma ghs entry_exit_log=default

void do_sort()
{
    qsort(names, sizeof(names)/sizeof(names[0]), sizeof(names[0]), cmpstring);
}
void logtest2(int ndx1, int ndx2)
{
    /* Use the indexed log functions to log some array values.  The first
     * argument is the tag name, the second is the index, and the third is
     * the value to log.  The displayed tag name in the log message will be
     * tag[index].
     */
    EAGLE_LogNdxU32(array1, ndx1, array1[ndx1]);
    EAGLE_LogNdxU32(array1, ndx2, array1[ndx2]);
    EAGLE_LogNdxU64(array2, ndx2, array2[ndx2]);
    EAGLE_LogNdxBool(array1_even, ndx1, (array1[ndx1]&1)==0);
    EAGLE_LogNdxBool(array1_even, ndx2, (array1[ndx2]&1)==0);
    EAGLE_LogNdxStr(names, ndx1, names[ndx1]);
    EAGLE_LogNdxPtr(names_addr, ndx1, names[ndx1]);

LABEL1:
    EAGLE_LogPrint(msg2, "Names before sorting");
    log_names();

    do_sort();

    EAGLE_LogPrint(msg, "Names after sorting");
    log_names();    
}


int fact(int n)
{
    if (n <= 1)
	return n;
    return n * fact(n-1);
}


int main()
{
    int f;

    EAGLE_LogPrint(msg1, "At start of main()");
    f = fact(10);
    EAGLE_LogPrintf(msg1, "printf-style string: fact(10) = %d", f);
LABEL1:
    logtest1(0x12345678, 0x1020304050607080);
    logtest2(3, 2);
    do_tag_test();
    return 0;
}
