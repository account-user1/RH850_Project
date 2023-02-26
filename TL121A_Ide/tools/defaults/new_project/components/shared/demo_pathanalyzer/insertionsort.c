#include "sort.h"

void insertionsort_r(int *array, int l, int r)
{
    int newval = array[l];
    int i, j;
    
    if(l >= r)
	return;

    // Find the location to insert the new element
    for(i=0; i<l; i++) {
	if(lessthan(newval, array[i]))
	    break;
    }
    swap(array, i, l);
    // Move all elements over by 1
    for(j=l; j>i+1; j--) {
	swap(array, j, j-1);
    }
    
    insertionsort_r(array, l+1, r);
}


void insertionsort(int *array, int size)
{
    insertionsort_r(array, 1, size);
}


