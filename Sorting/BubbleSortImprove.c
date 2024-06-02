#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int size = 4;
    int data[] = { 4, 2,9,1};
    int pass, i, temp, swapped = 1;
    for (pass = size - 1; pass >= 0 && swapped; pass--)
    {
        printf("%d\n\n",swapped);
        swapped = 0;
        for (i = 0; i <= pass - 1; i++)
        {
            if (data[i] > data[i + 1])
            {
                swap(&data[i], &data[i + 1]);
                swapped = 1;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        printf("%d", data[i]);
    }
}