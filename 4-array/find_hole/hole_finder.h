#include <math.h>

int hole_finder(int matrix[], int length, int width)
{
    int deepestPitValue = 0;
    int deepestPitIndex = -1;

    for (int i = 1; i < length - 1; ++i)
    {
        for (int j = 1; j < width - 1; ++j)
        {

            int currentIndex = i * width + j;

            int centerValue = matrix[currentIndex];
            int neighbors[] = {
                matrix[currentIndex - width - 1], matrix[currentIndex - width], matrix[currentIndex - width + 1],
                matrix[currentIndex - 1], matrix[currentIndex + 1],
                matrix[currentIndex + width - 1], matrix[currentIndex + width], matrix[currentIndex + width + 1]};

            int isPit = 1;
            for (int k = 0; k < 8; ++k)
            {
                if (neighbors[k] >= centerValue)
                {
                    isPit = 0;
                    break;
                }
            }

            if (isPit && centerValue > deepestPitValue)
            {
                deepestPitValue = centerValue;
                deepestPitIndex = currentIndex;
            }
        }
    }
    if (deepestPitIndex != -1)
    {
        int i = deepestPitIndex / width;
        int j = deepestPitIndex % width;
        int res = i * 100 + j;
        return res;
    }
    return -1;
}