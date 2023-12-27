#include <math.h>
#include <string.h>
#include <stdlib.h>

double convert(char num[]){
    // int i = 0, l = 0;
    // int flag = 0;
    // double aft_cnt = 0;
    // long double res = 0;
    // int after = 0;
    // char aft_point[] = "00000000000000000000000";
    // char un_point[] = "00000000000000000000000";
    // if (num[0] == '-'){
    //     i++;
    //     flag = 1;
    // }
    // while (num[i] != '.'){
    //     un_point[i] = num[i];
    //     i++;
    // }
    // l = strlen(un_point) - 1;
    // while (un_point[i] != '\0')
    // {
    //     un_point[l--] = '\0';
    // }
    // if (flag == 0) res = res + strtol(un_point, NULL, 10);
    // else res = res - strtol(un_point, NULL, 10);
    // i++;
    // while (num[i] == '0'){
    //     aft_cnt++;
    //     i++;
    // }
    // while (num[i] != '\0'){
    //     aft_point[i - strlen(un_point)] = num[i];
    //     i++;
    // }
    // l = strlen(aft_point) - 1;
    // while (aft_point[i - strlen(un_point)] != '\0')
    // {
    //     aft_point[l--] = '\0';
    // }
    // after = strtol(aft_point, NULL, 10);
    // while (after > 0){
    //     aft_cnt++;
    //     after /= 10;
    // }
    // if (flag == 0) res = res + ((double)strtol(aft_point, NULL, 10) / pow(10.0, aft_cnt));
    // else res = res - ((double)strtol(aft_point, NULL, 10) / pow(10.0, aft_cnt));
    
    return strtod(num, NULL);
}
