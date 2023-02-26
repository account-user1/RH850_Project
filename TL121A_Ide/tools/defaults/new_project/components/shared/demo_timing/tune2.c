typedef struct {
    int a,b;
} foo;

#define N 30

void calc_sum2(int *sum, int n);
void eval_parabolic2(int *sum, int n);

int main2(void)
{
    int i, sum;

    for (i = 0; i <N;  i++) {
        calc_sum2(&sum, N);
        eval_parabolic2(&sum,N);
    }
    return 0;
}

int gen_pairs2(int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
    if (a)
        a++;
    if (h>2)
        a += (a-100) + b++ * c*7 / -d + (e < 0) + (f+=g) - (h-=i);
    return a+b+h+f+d+c+e+g;
}

void polarize2()
{}

int ion_propagate2(int i,int a,int b,int c,int d,int e,int f,int g,int h)
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
    polarize2();
    i = i ? i : -i;
    return i+a+b+c+d+e+f+g+h;
}

void calc_sum2(int *sum, int n)
{
    *sum += N / n;	
    gen_pairs2(0,1,2,3,4,5,6,7,8);
    gen_pairs2(0,1,2,3,4,5,6,7,8);
    gen_pairs2(0,1,2,3,4,5,6,7,8);
    gen_pairs2(0,1,2,3,4,5,6,7,8);
    gen_pairs2(0,1,2,3,4,5,6,7,8);
}

void eval_parabolic2(int *sum, int n)
{
    *sum *= n;
    if (*sum)
        (*sum)--;
    ion_propagate2(1,2,3,4,5,6,7,8,9);
    ion_propagate2(1,2,3,4,5,6,7,8,9);
}
