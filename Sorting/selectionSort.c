#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int arr[5] = {4, 2, 5, 1, 9};
    int n = 5;
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        min = i;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] >arr[min])
            {
                min = j;
            }

            swap(&arr[i], &arr[min]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}