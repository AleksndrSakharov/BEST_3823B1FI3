#include <math.h>


void transform(double* array, int size, int* comands, int comands_count){
    double sr_ar = 0;
    int k = 0;
    int count = 0;
    int count_perc = 0;
    for (int i = 0; i < comands_count; i++){
        switch (comands[i])
        {
        case 1:
            for (int j = 0; j < size; j++){
                array[j] += 1;
            }
            break;
        case 2:
            for (int j = 0; j < size; j++){
                array[j] = sqrt(array[j]);
            }
            break;
        case 3:
            for (int j = 0; j < size; j++){
                if (array[j] < 0) sr_ar -= array[j];
                else sr_ar += array[j];
            }
            sr_ar = sr_ar / size;
            for (int j = 0; j < size; j++){
                array[j] = pow(array[j], sr_ar);
            }
            break;
        case 4:
            for (int j = 0; j < size; j++){
                if ((int)array[j] % 2 == 0){
                    array[j] = (int)array[j]*(-1);
                }
                if ((int)array[j] % 2 != 0) array[j] = 0;
            }
            break;
        case 5:
            for (int j = 0; j < size; j++){
                if ((int)array[j] % 2 == 0 && j % 2 == 0) array[j] = 0;
            }
            break;
        case 6:
            for (k = 0; k < size; k++){
                if (array[k] == 0) count++;
            }
            k = 0;
            while (k < size){
                if (count_perc == size / 2 - count) break;
                if (array[k] > 0) array[k] *= -1;
                if (array[k] != 0) count_perc++;
                k++;
            }
            while (k < size){
               if (array[k] < 0) array[k] *= -1;
               k++;
            }
            
            break;
        default:
            break;
        }
    }
}
