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
 * random values between 0 and NUM_ELEMENTS and sorted_array will contain
 * pre-sorted elements. */
void init_array()
{
    int i;
    for(i=0; i<NUM_ELEMENTS; i++) {
	array[i] = sorted_array[i] = i;
    }
    for(i=0; i<NUM_ELEMENTS; i++) {
	int r = rand()%NUM_ELEMENTS;
	int temp = array[i];
	array[i] = array[r];
	array[r] = temp;
    }
}


/* test_sort()
 * Tests a specific sort function and prints out the results.
 * If use_presorted is true, the input array will be presorted.  Otherwise it
 * will be random integers between 0 and NUM_ELEMENTS. */
void test_sort(const char *name, void (*fn)(int*, int), int use_presorted)
{
    int ret;
    int *tmp_array = malloc(NUM_ELEMENTS * sizeof(int));
    if(use_presorted) {
	memcpy(tmp_array, sorted_array, sizeof(array));
    } else {
	memcpy(tmp_array, array, sizeof(array));
    }
    
    fn(tmp_array, NUM_ELEMENTS);
    printf("%s: ", name);
    ret = check_array(tmp_array, NUM_ELEMENTS);
    if(ret == 0) {
	printf("PASSED\n");
    } else {
	printf("FAILED at element %d!\n", ret);
    }    
    
    free(tmp_array);
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
