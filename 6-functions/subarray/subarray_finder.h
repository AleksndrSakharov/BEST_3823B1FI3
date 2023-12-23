#include <math.h>

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int c1 = -1, c2 = -1, c3 = -1, flag1 = 0, flag2 = 0, flag3 = 0;
    for (int i = 0; i < array_size; i++){
        
        if (flag1 == 0){
            if (array[i] == subarray1[0]){
            c1 = i;
            for (int j = 1; j < subarray_size1; j++){
                if (i + j < array_size){
                    if (array[i + j] != subarray1[j]){
                        c1 = -1;
                        flag1 = 0;
                        break;
                    }
                    else flag1 = 1;
                }
                else{
                    c1 = -1;
                    flag1 = 0;
                    break;
                }
            }
        }
        }
        
        if (flag2 == 0){
            if (array[i] == subarray2[0]){
            c2 = i;
            for (int j = 1; j < subarray_size2; j++){
                if (i + j < array_size){
                    if (array[i + j] != subarray2[j]){
                        c2 = -1;
                        flag2 = 0;
                        break;
                    }
                    else flag2 = 1;
                }
                else{
                    c2 = -1;
                    flag2 = 0;
                    break;
                }
            }
        }
        }
        
        if (flag3 == 0){
            if (array[i] == subarray3[0]){
            c3 = i;
            for (int j = 1; j < subarray_size3; j++){
                if (i + j < array_size){
                    if (array[i + j] != subarray3[j]){
                        c3 = -1;
                        flag3 = 0;
                        break;
                    }
                    else flag3 = 1;
                }
                else{
                    c3 = -1;
                    flag3 = 0;
                    break;
                }
            }
        }
        }
        
    }
    return c1 + c2 + c3;
}
