#include <math.h>

char find_bin_pattern(int number){
    int a[100] = {}, n = number, count = 0, j = 0;
    while (n > 0){
        a[j] = n % 2;
        n /= 2;
        j++;
    }
    for(int i = 0; i < j; i++){
        if((a[i] == 1) && (a[i+1] == 0) && (a[i+2] == 1)){
            count++;
            a[i] = 0;
            a[i+1] = 0;
            a[i+2] = 0;
        }
    }
    return count;
}