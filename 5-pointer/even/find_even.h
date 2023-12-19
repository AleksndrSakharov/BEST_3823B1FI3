#include <stddef.h>
#include <math.h>

int* find_even(int* arr, int size){
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 == 0) 
            return &arr[i];
    }
    return NULL;
}
