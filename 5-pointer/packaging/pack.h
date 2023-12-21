#include <stddef.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    if (size > 8) {
        return 0;
    }
    unsigned long long res = 0;
    for (int i = 0; i < size; i++) {
        res = res + ((unsigned long long)arr[i] << (8 * i));}
    return res;
}


unsigned char unpack_ull(unsigned long long input){
    int n = 4;
    unsigned char a = (input >> 8 * n)&0xff;
    return a;
}