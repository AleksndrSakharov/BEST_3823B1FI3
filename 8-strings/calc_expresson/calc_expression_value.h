#include <math.h>
#include <string.h>
#include <stdlib.h>

int calculate_expression(char expression[]){
    int sum = 0;
    int flag = 0;
    char num[] = "0\0\0";
    int j = 0;
    int l = 0;
    int i = 0;
    for (i = 0; i < strlen(expression)-1; i++){
        if (expression[i] == '+' && expression[i+1] == '-') return -1;
        if (expression[i] == '-' && expression[i+1] == '+') return -1;
    }
    i = 0;
    if (expression[i] != '-') {
        while(expression[i] != '+' && expression[i] != '-' && i < strlen(expression))
            num[j++] = expression[i++];
        j = 0;
        sum += atoi(num);
        l = strlen(num) - 1;   
        while (num[0] != '\0')
        {
            num[l--] = '\0';
        }
    }
    while (i < strlen(expression)){
        if (expression[i] == '+') flag = 0;
        if (expression[i] == '-') flag = 1;
        i++;
        while(expression[i] != '+' && expression[i] != '-' && i < strlen(expression))
            num[j++] = expression[i++];
        j = 0;
        if (flag == 0) sum += atoi(num);
        else sum -= atoi(num);  
        l = strlen(num) - 1;   
        while (num[0] != '\0')
        {
            num[l--] = '\0';
        }
    }
    return sum;
}

