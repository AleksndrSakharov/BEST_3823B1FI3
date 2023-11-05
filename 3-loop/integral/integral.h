#include <math.h>

double integral(double a, double b, double c, double left, double right)
{
    double s1 = 0, s2 = 0, S;
    s1 = (a * pow(right, 3.0) / 3.0 + b * pow(right, 2.0) / 2.0 + c * right);
    s2 = (a * pow(left, 3.0) / 3.0 + b * pow(left, 2.0) / 2.0 + c * left);
    S = s1 - s2;
    if (S > 0)
        return S;
    else
        return -1;
}