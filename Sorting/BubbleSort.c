#include <stdio.h>
void main()
{
    int arr[5] = {11, 2, 4, 12, 23};
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5-i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}