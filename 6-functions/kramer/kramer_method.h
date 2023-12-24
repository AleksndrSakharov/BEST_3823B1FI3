#include <math.h>
#include <stdlib.h>
#include <stdio.h>

double determinant(int* matrix, int n)
{
    if (n == 2)
    {
        return (double)matrix[0] * (double)matrix[3] - (double)matrix[1] * (double)matrix[2];
    }
    else if (n == 3)
    {
        return (double)matrix[0] * ((double)matrix[4] * (double)matrix[8] - (double)matrix[5] * (double)matrix[7]) - (double)matrix[1] * ((double)matrix[3] * (double)matrix[8] - (double)matrix[5] * (double)matrix[6]) + (double)matrix[2] * ((double)matrix[3] * (double)matrix[7] - (double)matrix[4] * (double)matrix[6]);
    }
}

double kramer_method(int* matrix, int* vector, int size){
    double d = 0, da = 0, db = 0, dc = 0, x1 = 0, x2 = 0, x3 = 0, res = 0;
    if (size == 2){
        d = determinant(matrix, size);
        if (d == 0) return -1.0;
        int* m1 = (int*)malloc(sizeof(int) * size * size);
        int* m2 = (int*)malloc(sizeof(int) * size * size);
        for (int i = 0; i < 2; i++){
            m1[i * 2] = vector[i];
            m1[i * 2 + 1] = matrix[i * 2 + 1];

            m2[i * 2] = matrix[i * 2];
            m2[i * 2 + 1] = vector[i];
        }
        da = determinant(m1, size);
        db = determinant(m2, size);
        x1 = da / d;
        x2 = db / d;
        res = x2 + x1; 
    }

    if (size == 3){
        d = determinant(matrix, size);
        if (d == 0) return -1.0;
        int* m1 = (int*)malloc(sizeof(int) * size * size);
        int* m2 = (int*)malloc(sizeof(int) * size * size);
        int* m3 = (int*)malloc(sizeof(int) * size * size);
        for (int i = 0; i < 3; i++){
            m1[i * 3] = vector[i];
            m2[i * 3] = matrix[i * 3];
            m3[i * 3] = matrix[i * 3];

            m1[i * 3 + 1] = matrix[i * 3 + 1];
            m2[i * 3 + 1] = vector[i];
            m3[i * 3 + 1] = matrix[i * 3 + 1];

            m1[i * 3 + 2] = matrix[i * 3 + 2];
            m2[i * 3 + 2] = matrix[i * 3 + 2];
            m3[i * 3 + 2] = vector[i];
        }
        da = determinant(m1, size);
        db = determinant(m2, size);
        dc = determinant(m3, size);
        x1 = da / d;
        x2 = db / d;
        x3 = dc / d;
        res = x2 + x1 + x3;
    }
    return res;
}
