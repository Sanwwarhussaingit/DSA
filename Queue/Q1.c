#include <stdio.h>

#define MAX_SIZE 3
int queue[MAX_SIZE];
int front = -1, rear = -1;

int main()
{
    int choice, item;
    printf("1 Equeque\n2 Dequeque\n3 Display\n 4 Exit\n");
    while (1)
    {
        printf("Enter Your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (rear == MAX_SIZE - 1)
            {
                printf("Over floaw and exit:\n");
            }
            else
            {
                printf("Enter the element:\n ");
                scanf("%d", &item);

                if (front == -1)
                {
                    front = rear = 0;
                }
                else
                {
                    rear++;
                }
                queue[rear] = item;
                printf("Item insert: ");
            }

            break;

        case 2:
            if (front == -1)
            {
                printf("Underflow exit:..\n");
            }
            else
            {
                item = queue[front];
                if (front == rear)
                {
                    front = rear = -1;
                }
                else
                {
                    front++;
                }
                printf("Item Deleted...\n");
            }
        case 3:
            if (front == -1)
            {
                printf("Queue is empty..\n");
            }
            else
            {
                printf("Queue element: ");
                for (int i = front; i <= rear; i++)
                {
                    printf("%d ", queue[i]);
                }
                printf("\n");
            }
        case 4:
            printf("Exit..\n");
            return 0;

        default:
            printf("Invalid choice:..\n");
            break;
        }
    }

    return 0;
}