#include <math.h>

int calc_percent(int matrix[], int size){
    double r = 0;
    int min = 1000000, max = -100000, k = 0, percent = 0;
    for(int i = 0; i < size; i++){
        if(matrix[i] > max) max = matrix[i];
        if(matrix[i] < min) min = matrix[i];
    }
    r = (max - min) / 2;
    for(int i = 0; i < size; i++){
        if(r < matrix[i]) k++;
    }
    percent = 100 * k / size; 
    return percent;
}