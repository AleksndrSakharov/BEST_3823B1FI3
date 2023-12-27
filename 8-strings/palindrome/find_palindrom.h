#include <math.h>
#include <string.h>

int is_palindrom(char text[])
{
    int j = 0;
    int k = 0;
    while (text[strlen(text) - j - 1] == (int)' ') j += 1;
    for (int i = 0; i < strlen(text) / 2; i++)
    {
        while (((int)text[i + k] < 65 || (int)text[i + k] > 90) && ((int)text[i + k] < 97 || (int)text[i + k] > 122)) k++;
        while (((int)text[strlen(text) - 1 - i - j] < 65 || (int)text[strlen(text) - 1 - i - j] > 90) && ((int)text[strlen(text) - 1 - i - j] < 97 || (int)text[strlen(text) - 1 - i - j] > 122)) j++;
        if ((int)text[i + k] != (int)text[strlen(text) - 1 - i - j] && (int)text[i + k] != (int)text[strlen(text) - 1 - i - j] - 32 && (int)text[i + k] != (int)text[strlen(text) - 1 - i - j] + 32) return 0;
    }
    return 1;
}
