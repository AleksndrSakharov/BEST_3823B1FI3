#include <math.h>
double limit(double eps, int n_max){
    double a, b;
    if (n_max == 1){
        return 1/sqrt(2);
    }
    else{
        for (int n = 0; n < n_max; n++){
            a = n / sqrt(pow(n, 2.0) + 2);
            b = (n + 1) / sqrt(pow((n + 1), 2.0)+(n + 1));
            if (b-a <= eps){
                return b;
            }
        }
        return b;
    }
}