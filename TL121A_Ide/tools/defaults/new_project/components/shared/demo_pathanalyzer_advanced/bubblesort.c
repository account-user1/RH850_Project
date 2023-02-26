#include "sort.h"

void bubblesort_r(int *array, int l, int r)
{
    int j;

    if(l >= r)
	return;
    
    for(j=l; j<r-l-1; j++) {
	if(lessthan(array[j+1], array[j])) {
	    swap(array, j+1, j);
	}
    }
    bubblesort_r(array, l, r-1);
}



void bubblesort(int *array, int size)
{
    bubblesort_r(array, 0, size);
}


