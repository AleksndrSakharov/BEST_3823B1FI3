#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym)
{
    int i = 0;
    int k = 0;
    while (str[i])
    {
        char a = str[i];
        if (str[i + k] == sym)
        {
            while (str[i + k] == sym) k += 1;
            str[i] = str[i + k];
        }
        else str[i] = str[i + k];
    i++;
    }
}