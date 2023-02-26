#include "sort.h"

void selectionsort_r(int *array, int l, int r)
{
    int i;
    int min = l;
    int min_val = 0x7fffffff;

    if(l >= r)
	return;
    
    for(i=l; i<r; i++) {
	if(lessthan(array[i], min_val)) {
	    min = i;
	    min_val = array[i];
	}
    }
    swap(array, l, min);
    selectionsort_r(array, l+1, r);
}


void selectionsort(int *array, int size)
{
    selectionsort_r(array, 0, size);
}


