#include <math.h>

unsigned long long calc_e(char order){
    double e = 0;
    int n = 0, k = 1;
    if(order == 1){
        while(e < 2.7){
            e = pow((1.0 + 1.0 / (double)k), (double)k);
            k++;
        }
    }
    
    return k;
}