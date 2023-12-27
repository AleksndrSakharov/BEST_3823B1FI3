#include <math.h>
#include <stdlib.h>
#include <string.h>

char *convert(double number)
{
    int i = 0;
    int un_cnt = 0;
    int aft_cnt = 0;
    char* str = (char*)malloc(30);
    str[29] = '\0';
    if (number < 0)
    {
        str[i] = '-';
        i++;
        number *= -1;
    }
    int un_point = number;
    int l = 0;
    while (un_point > 0)
    {
        un_cnt++;
        un_point /= 10;
    }
    un_point = number;
    double tmp = (number - un_point) * 10000 + 1;
    int aft_point = tmp;
    while (aft_point % 10 == 0) aft_point /= 10;
    if (aft_point == 1002) aft_point--;
    while (aft_point > 0)
    {
        aft_cnt++;
        aft_point /= 10;
    }
    aft_point = tmp;
    while (aft_point % 10 == 0) aft_point /= 10;
    if (aft_point == 1002) aft_point--;
    i += un_cnt;
    i--;
    un_cnt = 0;
    while (1)
    {
        while (un_point > 0)
        {
            str[i - un_cnt] = (char)(un_point % 10 + 48);
            un_point /= 10;
            un_cnt++;
        }
        i++;
        break;
    }
    str[i++] = '.';
    i += aft_cnt;
    i--;
    aft_cnt = 0;
    while (1)
    {
        while (aft_point > 0)
        {
            str[i - aft_cnt] = (char)(aft_point % 10 + 48);
            aft_point /= 10;
            aft_cnt++;
        }
        i++;
        break;
    }
    l = strlen(str) - 1;
    while (str[i] != '\0')
    {
        str[l--] = '\0';
    }
    return str;
}