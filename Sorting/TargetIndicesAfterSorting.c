// let code 2089
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
#include <stdio.h>
void main()
{
    int nums[5] = {1, 2, 5, 2, 3};
    int target = 2;
    for (int i = 1; i < 5; i++)
    {
        int j = i;
        while (j >= 0 && nums[j] < nums[j - 1])
        {
            swap(&nums[j], &nums[j - 1]);
            j--;
        }
    }
    int resultSize = 0;
    int resultArr[5];
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] == target)
        {
            resultArr[resultSize] = i;
            resultSize++;
            if (nums[i + 1] != target)
            {
                break;
            }
        }
    }
    for (int i = 0; i < resultSize; i++)
    {
        printf("\n%d", resultArr[i]);
    }
}