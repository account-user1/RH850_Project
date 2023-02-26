void swap(int *array, int n, int m)
{
    int tmp  = array[n];
    array[n] = array[m];
    array[m] = tmp;
}


int check_array(int *array, int size)
{
    int ret = 0;
    int i;
    int last = 0;
    for(i=0; i<size; i++) {
	if(ret == 0 && array[i] < last) {
	    ret = i;
	}
	last = array[i];
    }
    return ret;
}


