/* Sort functions used in ThreadX demonstration program.  */

/* Define the exchange() function that swaps two pointers.  */

static void exchange(void *p[],void *q[])
{
    char *t;
    t= *p;
    *p= *q;
    *q= t;
}

/* Define the shellsort() function that sorts an array of pointers.  */
void shellsort(void *v, int n, int(*comp)(const void *, const void *))
{
    /* v.....array of pointers to elements to be sorted.  */
    /* n.....number of elements to be sorted.  */
    /* comp..routine to compare two elements.  */
    void **va = (void **)v;

    int gap,i,j;

    for (gap = n/2; gap > 0; gap /= 2) {
        for(i = gap; i < n; i++) {
            for(j = i-gap; j >= 0; j -= gap) {
                /* Only exchange items incorrectly ordered.  */
                if((*comp)((const void *)&va[j], (const void *)&va[j + gap]) > 0)

                    /* Swap two items.  */
                    exchange(&va[j],&va[j + gap]);
            }
        }
    }
}
