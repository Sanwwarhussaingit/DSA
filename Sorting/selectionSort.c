#include<stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    
    int arr[]={4,2,7,3,1};
    for(int i=0;i<5;i++)
    {
        int s=i;
        for(int j=i;j<5;j++)
        {
            if (arr[j]<arr[s])
            {
                s=j;
            }
        }
        swap(&arr[i],&arr[s]);

    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}