#include <stdio.h>

void main()
{
    int number = 10;

    for (int j = 2; j <= number; j++)
    {
        int f = 1;
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                f = 0;
                break;
            }
        }
        if (f)
        {
            printf("%d ", j);
        }
    }
}