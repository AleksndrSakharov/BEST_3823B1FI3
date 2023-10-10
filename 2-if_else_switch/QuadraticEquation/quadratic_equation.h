#include <math.h>
int QuadraticEquation(double a, double b, double c){
    double d = b * b - 4 * a * c, x1, x2, a1, a2, b1, b2;
    if (d > 0){
        x1 = (b * (-1) + sqrt(d)) / a / 2;
        x2 = (b * (-1) - sqrt(d)) / a / 2;
        return (x1 + x2);
    }
    else if (d == 0){
        x1 = (b * (-1)) / a / 2;
        return x1;
    }
    else if (d < 0){
        a1 = b * (-1) / a / 2;
        a2 = b * (-1) / a / 2;
        b1 = sqrt(fabs(d)) / a / 2;
        b2 = sqrt(fabs(d))*(-1) / a / 2;
        return (a1 + a2 + b1 + b2);
    }
    return 0;
    
}