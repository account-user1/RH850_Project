#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "labels.h"


#define NUM_ELEMENTS 50
int array[NUM_ELEMENTS];
int sorted_array[NUM_ELEMENTS];


/* init_array()
 * Initializes the array and sorted_array variables.  array will contain
 * random values between 0 and MAX and sorted_array will contain pre-sorted
 * elements. */
void init_array()
{
    int i;
    memset(array, 0, sizeof(array));
    for(i=0; i<NUM_ELEMENTS; i++) {
	int r = rand()%NUM_ELEMENTS;
	while(array[r] != 0) {
	    r = rand()%NUM_ELEMENTS;
	}
	array[r] = i;
	
	sorted_array[i] = i;
    }
}


/* test_sort()
 * Tests a specific sort function and prints out the results.
 * If use_presorted is true, the input array will be presorted.  Otherwise it
 * will be random integers between 0 and MAX. */
void test_sort(const char *name, void (*fn)(int*, int), int use_presorted)
{
    int ret;
    static int test_array[NUM_ELEMENTS];
    if(use_presorted) {
	memcpy(test_array, sorted_array, sizeof(array));
    } else {
	memcpy(test_array, array, sizeof(array));
    }
    
    fn(test_array, NUM_ELEMENTS);
    printf("%s: ", name);
    ret = check_array(test_array, NUM_ELEMENTS);
    if(ret == 0) {
	printf("PASSED\n");
    } else {
	printf("FAILED at element %d!\n", ret);
    }    
}


int main()
{
    /* Initialize the input arrays */
    init_array();

    /* And test the various sorting algorithms. */
    test_sort("Bubble Sort", bubblesort, 0);
    test_sort("Selection Sort", selectionsort, 0);
    test_sort("Insertion Sort", insertionsort, 0);
    test_sort("Quick Sort", quicksort, 0);
    test_sort("Quick Sort (pre-sorted)", quicksort, 1);

END:
    return 0;
}
