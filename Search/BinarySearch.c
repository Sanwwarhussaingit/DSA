#include <stdio.h>

void main(void)
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int length = sizeof(arr) / sizeof(arr[0]) - 1;
    int search = 91;
    int low = 0;
    int high = length;
    int f = 0;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == search){
            f = 1;
            break;
        }
        if (arr[mid] < search){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if (f){
        printf("number is found");
    }
    else{
        printf("number is not found");
    }
}