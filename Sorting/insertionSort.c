#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int arr[] = {4, 6, 1, 10, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

   
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j >= 1 && arr[j] < arr[j - 1])
        {
            swap(&arr[j], &arr[j - 1]);
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
