#include <stdio.h>
void shellSort(int arr[], int size) {
    int i, j, h, v;

    // Initial gap value (using Knuth's sequence)
    for (h = 1; h <= size / 9; h = 3 * h + 1);

    // Shell sort algorithm
    for (; h > 0; h /= 3) {
        for (i = h; i < size; i++) {
            v = arr[i];
            j = i;
            while (j >= h && arr[j - h] > v) {
                arr[j] = arr[j - h];
                j -= h;
            }
            arr[j] = v;
        }
    }
}

void main()
{
    int arr[10] = {3, 5, 1, 89, 60, 44, 40, 45, 67, 8};
    shellSort(arr, 10);
    for (int i = 0; i < 10 - 1; i++)
    {
        printf("%d\n", arr[i]);
    }
}