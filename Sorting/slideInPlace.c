#include <stdio.h>
void main()
{
    int arr[9] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    for (int i = 0; i < 9 - 1; i++)
    {
        for (int j = i; j < 9 - 1 - i; j++)
        {
            if (arr[j] == 0)
            {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d", arr[i]);
    }
}