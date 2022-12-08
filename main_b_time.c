#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main(void) {

    for(int MatSize = 200; MatSize <=2000; MatSize +=200) {
        double run_time = 0.0;
        clock_t start = clock();

        int* M = (int*) malloc(MatSize * MatSize * sizeof(int));
        int* V = (int*) malloc(MatSize * sizeof(int));
        int* R = (int*) malloc(MatSize * sizeof(int));
        
        initMatRand(M, 0, 10, MatSize);
        initVecRand(V, 0, 10, MatSize);
        matVecMult(M, V, R, MatSize);

        clock_t end = clock();
        
        run_time += (double)(end - start) / CLOCKS_PER_SEC;

        printf("\nTotal time taken to run with N = %d is %f second(s).", MatSize, run_time);
    }

    return 0;
}     