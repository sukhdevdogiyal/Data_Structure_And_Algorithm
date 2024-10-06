#include <stdio.h>
int main()
{
    int queue[5], rear = -1, front = -1, val, n, ch = 1, i;
    printf("Enter the size of queue : ");
    scanf("%d", &n);
    printf("Choice:-\n1.REAR\n2.FRONT\n3.Display\n4.Exit");
    while (ch)
    {
        printf("\n\nEnter the choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (rear == n - 1 && front == 0|| rear + 1 == front)
            {
                printf("Queue is Full");
            }
            else
            {
                if (rear == -1)
                {
                    front = 0;
                    printf("Enter the element in stack : ");
                    scanf("%d", &val);
                    rear += 1;
                    queue[rear] = val;
                }
                else if (rear == n - 1)
                {
                    rear = 0;
                    printf("Enter the element in stack : ");
                    scanf("%d", &val);
                    queue[rear] = val;
                }
                else
                {
                    printf("Enter the element in stack : ");
                    scanf("%d", &val);
                    rear += 1;
                    queue[rear] = val;
                }
            }
            break;
        case 2:
            if (rear == -1)
            {
                printf("Queue is empty");
            }
            else
            {
                if (front == n - 1 && front > rear)
                {
                    val = queue[front];
                    printf("delete value : %d", val);
                    front = 0;
                }
                else
                {
                    val = queue[front];
                    printf("delete value : %d", val);
                    front += 1;
                }
                  if (rear+1==front)
                {
                    rear=-1;
                    front=-1;
                }
                
            }
            break;
        case 3:
            printf("Display Stack : ");
            if (rear == -1)
            {
                printf("Queue is empty");
            }
            else
            {
                if(rear>front)
                {
                for (i = front; i <= rear; i++)
                {
                    printf(" %d", queue[i]);
                }
                }
                else
                {
                for (i = 0; i <= rear; i++)
                {
                    printf(" %d", queue[i]);
                }
                    for (i = front; i <n; i++)
                {
                    printf(" %d", queue[i]);
                }

                }
            }
            break;
        case 4:
            ch = 4;
            printf("\nEXIT");
            break;

        default:
            printf("\nEnter valid choice");
            break;
        }
        if (ch == 4)
            break;
    }
}