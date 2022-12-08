#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main() {
    
    int MatSize = 1200;

    int* M = (int*) malloc(MatSize * MatSize * sizeof(int));
    int* V = (int*) malloc(MatSize * sizeof(int));
    int* R = (int*) malloc(MatSize * sizeof(int));

    initMatRand(M, 0, 10, MatSize);
    initVecRand(V, 0, 10, MatSize);

    while(1)
    {
     matVecMult(M, V, R, MatSize);
    }
   
   return 0;
}
