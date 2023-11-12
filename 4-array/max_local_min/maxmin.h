int maxmin(int input[], int size)
{
    int max = -100000, last = -100000;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            if (input[i] < input[i + 1])
            {
                last = input[i];
                if (max < last)
                {
                    max = last;
                }
            }
        }
        else if (i == size - 1)
        {
            if (input[i] < input[i - 1])
            {
                last = input[i];
                if (max < last)
                {
                    max = last;
                }
            }
        }
        else
        {
            if ((input[i - 1] > input[i]) && (input[i] < input[i + 1]))
            {
                last = input[i];
                if (max < last)
                {
                    max = last;
                }
            }
        }
    }
    return max;
}