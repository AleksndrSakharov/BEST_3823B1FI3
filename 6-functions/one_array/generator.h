#include <math.h>
#include <stdlib.h>


int* array_generator(int* real_size, int k, int m, int f){
    *real_size = 20;
    int summ = f;
    int j = 1;
    int* a = (int*)calloc(sizeof(int), *real_size);
    a[*real_size-1] = f;
    while (1){
        if (summ > m) break;
        if (summ < k - 1){
            if (a[j] < f){
                a[j]++;
                summ++;
            }
            else j++;
        } 
        if (summ > k) break;
    }
    return a;
}