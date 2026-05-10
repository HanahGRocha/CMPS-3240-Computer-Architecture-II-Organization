#include <stdio.h>
#include <stdlib.h>

/* prototype from dgemm.c */
void dgemm(int n, const double *A, const double *B, double *C);

int main(void)
{
    const int n = 1024;        
    const size_t bytes = (size_t)n * n * sizeof(double);

    printf("Running DGEMM on %d × %d matrices (%.1f MiB each)\n",
           n, n, bytes / (1024.0 * 1024.0));

    /* allocate A, B, C on the heap */
    double *A = (double *)malloc(bytes);
    double *B = (double *)malloc(bytes);
    double *C = (double *)malloc(bytes);
    if (!A || !B || !C) { perror("malloc"); return 1; }

    /* perform C = A × B */
    dgemm(n, A, B, C);

    free(A); free(B); free(C);
    return 0;
}
