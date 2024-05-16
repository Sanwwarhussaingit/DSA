#include <stdio.h>
void main()
{

    int arr[5] = {22, 13, 64, 12, 33};
    for (int i = 0; i < 5; i++)
    {
        int smallIndex = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[smallIndex] > arr[j])
            {
                smallIndex = j;
            }
        }
       
        int temp = arr[i];
        arr[i] = arr[smallIndex];
        arr[smallIndex] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}