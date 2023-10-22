#include <math.h>
// double r_value(double val, int acc){
// int divider = 1;
// for(int i = 0; i < acc; i++){
//     val *= 10;
//     divider *= 10;
// }
// return (round(val) / divider);
// }

bool compare_double(double x, double y) {
    return (fabs(x - y) < 0.00001);
}

int get_nearest_int(double x) {
    double res;
    res = round(x);
    return res;
}

double get_fractional(double x) {
    int integer_part = (int)x;
    if(x > 0) return x - integer_part;
    return x - integer_part + 1;
}
