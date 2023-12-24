#include <math.h>

double for_summa(int k){
    if (k == 0) return 0;
    return (for_summa(k - 1) + 1.0) / (double)k;
}

double find_sum_elements_series(int k){
    if (k == 0) return 0;
    if (k < 0) return -1;
    double summ = 0;
    for (int i = 0; i < k; i++) summ += for_summa(i);
    return summ;
}
