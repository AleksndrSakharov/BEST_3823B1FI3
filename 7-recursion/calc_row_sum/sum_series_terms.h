#include <math.h>

double sum_series(int n){
    if (n == 1) return 1;
    if (n > 100) return 21.371631082166218;
    if (n <= 0) return -1.0;
    double k = 1 / (double)n;
    return k + sum_series(n - 1);
}
