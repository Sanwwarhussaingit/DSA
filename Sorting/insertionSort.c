#include <stdio.h>

void insertionSort(int arr[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int temp = arr[i];

        int j;
        for (j = i - 1; j >= 0; j--)
        {

            if (temp < arr[j])
            {
                arr[j + 1] = arr[j];
                continue;
            }
            break;
        }
        arr[j + 1] = temp;
    }
}

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {6, 3, 7, 4, 8, 1, 5, 2, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, length);

    printf("Sorted array: ");
    printArray(arr, length);

    return 0;
}
