// sort.h
// Helper functions for sort visualization demo

void swap(int *array, int n, int m);
int check_array(int *array, int size);

void bubblesort(int *array, int size);
void insertionsort(int *array, int size);
void selectionsort(int *array, int size);
void quicksort(int *array, int size);

static inline int lessthan(int n, int m)
{
    return n < m;
}


