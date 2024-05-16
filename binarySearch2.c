#include <stdio.h>
int main()
{
    int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int foundNumber = 101;
    int first = 0;
    int last = 9;
    int mid;
    int found = 0;
    printf("Found number is %d searching...\n", foundNumber);
    while (first <= last)
    {

        mid = (first + last) / 2;

        if (foundNumber == data[mid])
        {
            printf("mid = %d \n", mid);
            found = 1;
            break;
        }

        else if (foundNumber > data[mid])
        {
            first = mid + 1;
        }
        else
        {

            last = mid - 1;
        }
    }
    if (found)
    {
        printf("Number is found\n");
    }
    else
    {
        printf("Number if not found\n");
    }
}