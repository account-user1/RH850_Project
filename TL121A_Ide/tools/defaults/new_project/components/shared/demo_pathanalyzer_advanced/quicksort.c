#include "sort.h"

void quicksort_r(int *array, int l, int r)
{
    int i, j;
    int midval;
    
    if(l + 1 >= r)
	return;
    
    midval = array[r-1];

    // Swap everything to the left/right of midval
    i=l; j=r-1;
    while(i<j) {
	for(; i<j; i++) {
	    if(lessthan(midval, array[i]))
		break;
	}
	for(; j>i; j--) {
	    if(lessthan(array[j], midval))
		break;
	}
	if(i<j)
	    swap(array, i, j);
    }
    // Swap in midval
    swap(array, i, r-1);
    
    quicksort_r(array, l, i);
    quicksort_r(array, i+1, r);
}


void quicksort(int *array, int size)
{
    quicksort_r(array, 0, size);
}


