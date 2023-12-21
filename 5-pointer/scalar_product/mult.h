#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    double res = 0;
    double chisl = 0;
    double fzn = 0, szn = 0, znam = 0;
    for (int i = 0; i < size; i++){
        chisl += vec1[i] * vec2[i];
        fzn += vec1[i] * vec1[i];
        szn += vec2[i] * vec2[i];
    }
    znam = sqrt(fzn * szn);
    res = acos(chisl / znam);
    return (int)(res * 180 / 3.14159265);
}
