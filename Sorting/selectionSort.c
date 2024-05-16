#include <stdio.h>
void main()
{
    int arr[5] = {7, 8, 3, 1, 2};
    int temp = 0;
    int smallest = 0;
    for (int i = 0; i < 5; i++)
    {
        smallest = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[smallest] > arr[j])
            {
                smallest = j;
            }
        }
        temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}