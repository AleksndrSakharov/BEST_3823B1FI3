#include <math.h>


int stepen(int n, int st){
    int res = 1;
    for(int i = 1; i <= st; i++) res *= n;
    return res;
}

int count_float_dig(double acc)
{
    int count = 0;
    int integer = (int)acc;
    while (integer != acc)
    {
        acc *= 10;
        count++;
        integer = (int)acc;
    }
    return count;
}

int count_do_tochki(int x){
    int count = 0;
    while (x > 0){
        x /= 10;
        count++;
    }
    return count;
}

char find_digit(double number, char digit){
    int count = 0;
    int c1 = count_do_tochki((int)number);
    if(digit > 9 || digit < 0) return -1;
    unsigned long long n = stepen(10, count_float_dig(number)) * number;
    while(n > 0){
        count++;
        if(n % 10 != digit){
            n /= 10;
        }
        if(n % 10 == digit){
            break;
        }
    }
    if(c1 <= count){
        count++;
    }
    return count;
}