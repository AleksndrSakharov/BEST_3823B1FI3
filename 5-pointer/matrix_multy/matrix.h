#include <stddef.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    if (aN != bM) return NULL;
    int* res = (int*)malloc(sizeof(int) * aM * bN);
    int a = 0;
    int b = 0;
    for (int i = 0; i < aM*bN; i++){
        res[i] = 0;
    }
    int c = 0;
    while (c < aM*bN){
        for (a = 0; a < aM; a++){
            for(b = 0; b < bN; b++){
                for(int k = 0; k < aN; k++){
                    res[c] += A[a * aN + k] * B[b + k * bN];
                }
                c++;
            }
        }
    }
    return res;
}
