#include <math.h>
double limit(double eps, int n_max){
    double a, b;
    if (n_max == 1){
        return 1/sqrt(2);
    }
    else{
        for (double n = 0; n < n_max; n++){
            a = n / sqrt(pow(n, 2.0) + n);
            b = (n + 1.0) / sqrt(pow((n + 1.0), 2.0)+(n + 1.0));
            if (b-a <= eps){
                return b;
            }
        }
        return b;
    }
}
