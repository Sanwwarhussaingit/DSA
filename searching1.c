#include <stdio.h>

void main()
{
    int dataSize;
    int target;
    int numberOfFound = 0;
    printf("Enter size of data: ");
    scanf("%d", &dataSize);
    int data[dataSize];
    int position[dataSize];

    printf("Enter %d element:\n", dataSize);
    for (int i = 0; i < dataSize; i++)
    {
        scanf("%d", &data[i]);
    }
    printf("Enter found number: ");
    scanf("%d", &target);

    for (int i = 0; i < dataSize; i++)
    {
        if (data[i] == target)
        {
            position[numberOfFound] = i;
            numberOfFound++;
        }
    }
    if (numberOfFound > 0)
    {
        printf("Number is found.\n");
    }
    else
    {
        printf("Number is not found.\n");
    }

    printf("Position are:\n");
    for (int i = 0; i < numberOfFound; i++)
    {
        printf("%d ", position[i]);
    }
}
