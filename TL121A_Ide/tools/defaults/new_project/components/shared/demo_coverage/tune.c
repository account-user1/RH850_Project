typedef struct {
    int a,b;
} foo;

/* Loop iterations for this test */
#define N 100

/*
   Configuring this program:
   ===============================
   Depending on your target environment, you may want to change
   the configuration parameter N to cause the program to finish quicker.

   Some simulator environments, especially cycle-accurate simulators,
   might benefit from decreasing N to allow the program to finish within
   a reasonable time.
*/
int main2(void);
void calc_sum(int *sum, int n);
void eval_parabolic(int *sum, int n);

int main()
{
    int i, sum; 

    for (i = 0; i < N;  i++) {
        calc_sum(&sum, N);
        eval_parabolic(&sum, N);
    }
    main2();

    return 0;
}

int gen_pairs(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    if (a)
        a++;
    if (h>2)
        a += (a-100) + b++ * c*7 / -d + (e < 0) + (f+=g) - (h-=i);
    return a+b+h+f+d+c+e+g;
}

void polarize()
{}

int ion_propagate(int i,int a,int b,int c,int d,int e,int f,int g,int h)
{
    if (i)
        i--;
    if (i>2)
        i-=10;
    if (i)
        i/=3;
    i = i ? i : -i;
    if (i)
        i--;
    if (i>2)
        i-=10;
    if (i)
        i/=3;
    polarize();
    i = i ? i : -i;
    return i+a+b+c+d+e+f+g+h;
}

void calc_sum(int *sum, int n)
{
    *sum += N / n;	
    gen_pairs(0,1,2,3,4,5,6,7,8);
    gen_pairs(0,1,2,3,4,5,6,7,8);
    gen_pairs(0,1,2,3,4,5,6,7,8);
    gen_pairs(0,1,2,3,4,5,6,7,8);
    gen_pairs(0,1,2,3,4,5,6,7,8);
}

void eval_parabolic(int *sum, int n)
{
    *sum *= n;
    if (*sum)
        (*sum)--;
    ion_propagate(1,2,3,4,5,6,7,8,9);
    ion_propagate(1,2,3,4,5,6,7,8,9);
}
