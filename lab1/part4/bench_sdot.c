#include <stdio.h>
#include <stdlib.h>

float sdot(int length, const float *x, const float *y);

int main(void)
{
    const int N = 200000000;          
    printf("Running SDOT on vectors of length %d\n", N);

    /* allocate input vectors */
    float *x = (float *)malloc((size_t)N * sizeof(float));
    float *y = (float *)malloc((size_t)N * sizeof(float));
    if (!x || !y) { perror("malloc"); return 1; }

    
    float result = sdot(N, x, y);
    (void)result;                         

    free(x);  free(y);
    return 0;
}
