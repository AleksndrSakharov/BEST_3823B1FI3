#include <math.h>

int calcsize(void* memory)
{
    char* arr = (char*)memory;
    int size = 0;
    while (*arr != 47)
    {
        arr++;
        size++;
    }
    int c = 0;
    while (*arr != 11)
    {
        arr--;
        c++;
    }
    return (size+c);
}