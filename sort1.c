#include <stdio.h>
int main()
{
    int temp;
    int data[5] = {7, 4, 2, 8, 1};
    for (int i = 0; i < 5; i++)
    {
        int swap=0;
        for (int j = 0; j < 5-i; j++)
        {
            if (data[j] > data[j + 1])
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
                swap=1;
            }
        }
        if (swap==0)
            {
                break;
            }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d", data[i]);
    }
}