#include <math.h>

void reverse_array(int *array, int array_size)
{
    if (array_size <= 1)
        return;
    if (array_size % 2 == 0) {
        reverse_array(array, array_size / 2);
        reverse_array(array + (array_size / 2), array_size / 2);
        for (int i = 0; i < array_size/2; i++){
            int temp = array[i];
            array[i] = array[array_size / 2 + i];
            array[array_size / 2  + i] = temp;
        }
    } else {
        reverse_array(array, array_size / 2);
        reverse_array(array + (array_size / 2 + 1), array_size / 2);
        for (int i = 0; i < array_size/2; i++){
            int temp = array[i];
            array[i] = array[array_size / 2 + 1+ i];
            array[array_size / 2 + 1 + i] = temp;
        }
    }
}
