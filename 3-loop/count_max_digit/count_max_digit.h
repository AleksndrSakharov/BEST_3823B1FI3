#include <math.h>

char count_max_digit(long long int1){
    long long num = int1, i = 1, len = 0, max = 0;
    if(num < 0){
        num = abs(int1);
    }
    char count = 0;
    while(num >= 1){
        len++;
        num /= 10;
    }
    num = int1;
    if(num < 0){
        num = abs(int1);
    }
    int arr[len];
    arr[0] = num % 10;
    num /= 10;
    while(num >= 1){
        arr[i] = num % 10;
        num /= 10;
        if(max < arr[i]) max = arr[i];
        i++;
    }
    for(i = 0; i < len; i++){
        if(arr[i] == max){
            count++;
        }
    }
    return count;
}