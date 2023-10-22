#include <math.h>
int stepen(int n, int st){
    int res = 1;
    for(int i = 1; i <= st; i++) res *= n;
    return res;
}

int reverse(int number) {
    int n = number, i = 1, res = 0, j = -1;
    while(n > 0){
        i++;
        n /= 10;
    }
    n = number;
    int a[i];
    for(i = 0; i < sizeof(a)/sizeof(int); i++){
        a[i] = n % 10;
        n /= 10;
    }
    for(i = sizeof(a)/sizeof(int) - 1; i >= 0; i--){
        res += stepen(10, j) * a[i];
        j++;
    }
    return res; // Not implementation
}

double decomposition(int number) {
    double a, b, c, d, a1, b1, c1, d1, res;
    a = (number / 1000) * 1000;
    b = (number / 100 % 10) * 100;
    c = (number % 100 / 10) * 10;
    d = number % 10;
    a1 = 1 / a;
    b1 = 1 / b;
    c1 = 1 / c;
    d1 = 1 / d;
    res = 4 / (a1 + b1 + c1 + d1);
    return res;
}

int append(int number, int start, int end) {
    int res;
    if (start < 0)
    {
        res = abs(start) * 10000;
        res = (res + number)* 10 + end;
        res *= -1;
        return res;
    }
    else
    {
        res = start * 10000;
        res = (res + number) * 10+ end;
        return res;
    }
}
