#include <math.h>

char find_digit(double number, char digit){
    if(digit > 9 || digit < 0) return -1;
    long long wholePart, fractionalPart, t1, t2, a[30] = {};
    wholePart = (long long) number;
    fractionalPart = (long long)((number - (double)wholePart) * 1000000000);
    t1 = wholePart;
    t2 = fractionalPart;
    char count = 0, i = 0, flag = 0;
    for(i = 0; i < 30; i++) a[i] = 10;
    i = 29;
    while (fractionalPart > 0){
        a[i--] = fractionalPart % 10;
        fractionalPart /= 10;
    }
    i--;
    while (wholePart > 0){
        a[i--] = wholePart % 10;
        wholePart /= 10;
    }
    for(i = 0; i < 30; i++){
        if(a[i] < 10) flag = 1;
        if(flag == 1){
            count++;
            if(a[i] == digit) return count;
        } 
    }
    return -1;
}