#include <math.h>

int determinantNxN(int matrix[], int n)
{
    if (n == 2)
    {
        return matrix[0] * matrix[3] - matrix[1] * matrix[2];
    }
    else if (n == 3)
    {
        return matrix[0] * (matrix[4] * matrix[8] - matrix[5] * matrix[7]) - matrix[1] * (matrix[3] * matrix[8] - matrix[5] * matrix[6]) + matrix[2] * (matrix[3] * matrix[7] - matrix[4] * matrix[6]);
    }
    else
    {
        int det = 0;
        for (int i = 0; i < n; ++i)
        {
            int submatrix[(n - 1) * (n - 1)];
            int index = 0;
            for (int j = n; j < n * n; ++j)
            {
                if (j % n != i)
                {
                    submatrix[index++] = matrix[j];
                }
            }
            det += (i % 2 == 0 ? 1 : -1) * matrix[i] * determinantNxN(submatrix, n - 1);
        }
        return det;
    }
}

int determinant(int matrix[], int size)
{
    if ((int)sqrt(size) * (int)sqrt(size) != size)
        return -404;
    int n = sqrt(size);
    return determinantNxN(matrix, n);
}