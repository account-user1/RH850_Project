typedef struct {
    int a,b;
} foo;

/* Loop iterations for this test */
#define N 100

/*
   Configuring this program:
   ===============================
   Depending on your target environment, you may need to change
   the configuration parameter N to allow the program to either
   run long enough or finish quickly enough.

   Targets using Trace
   -------------------------------
   N: No adjustments needed

   Targets that use trace to gather PC execution information should
   work fine with any reasonable number of loop iterations.

   Timer-based stochastic sampling
   -------------------------------
   N: Increase greatly (Start with 100000 and adjust, if necessary)

   For hardware targets that use a periodic timer to gather PC samples
   (generally at 60Hz, by default), the configuration parameter N may
   need to be increased by several orders of magnitude to allow the
   program to run long enough to collect a sufficient number of
   samples.

   To enable timer-based stochastic sampling for this program, you may
   need to set the Target-Based Timing Profiling option
   (-timer_profile). For more information, search your documentation
   for "Target-Based Timing Profiling".

   Simulated Targets
   -------------------------------
   N: Decrease (if necessary)

   Some simulator environments, especially cycle-accurate simulators,
   might require decreasing N to allow the program to finish within
   a reasonable time. Since every cycle is counted on cycle-accurate
   simulators, the accuracy of the profiling data should be unaffected.
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
