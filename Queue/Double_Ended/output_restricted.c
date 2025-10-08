#include <stdio.h>
int main()
{
    int queue[100], i, max, n, val, rear = -1, front = -1, ch = 1;
    printf("Enter the size of Queue : ");
    scanf("%d", &n);

    printf("-:Choice:-\n1.Inscrtion(Left side)\n2.Inscrtion(Right side)\n3.Deletion(Left side)\n4.Display\n5.Exit");
    while (ch)
    {
        printf("\nEnter the choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (rear == n - 1 && rear + 1 == front)
            {
                printf("Queue is Full\n");
            }
            else
            {
                if (rear == -1)
                {
                    front = 0;
                }
                rear += 1;
                printf("Enter the array element : ");
                scanf("%d", &val);
                queue[rear] = val;
            }
            break;
        case 2:
            if (front == -1 || front == 0)
            {
                front = n;
            }
            if (rear + 1 == front)
            {
                printf("Queue is Full\n");
            }
            else
            {
                front -= 1;
                printf("Enter the array element : ");
                scanf("%d", &val);
                queue[front] = val;
            }
            break;
        case 3:
            if (front == -1)
            {
                printf("Queue is empty\n");
            }
            else
            {
                val = queue[front];
                printf("delete value : %d\n", val);
                front += 1;
                if (rear + 1 == front)
                {
                    rear = -1;
                    front = -1;
                }
                if (front == n)
                {
                    if (rear == -1)
                    {
                        front = -1;
                    }
                    else
                    {
                        front = 0;
                    }
                }
            }
            break;
        case 4:
            printf("Display Queue :");
            for (i = front; ; i++)
            {
                if (i == -1)
                {
                    if (front==-1)
                    {
                    printf("\tQueue is Empty");
                    }
                    break;
                    
                }
                else
                    printf("\t%d", queue[i]);
                if (i == n - 1)
                {
                    if (rear == -1)
                    {
                        i = -2;
                    }
                    else
                    {
                        i = -1;
                    }
                }
                if (i==rear)
                {
                    break;
                }
                
            }
            printf("\n");
            break;
        case 5:
            ch = 5;
            printf("\nExit");
            break;
        default:
            printf("Enter the valid choice \n");
        }
        if (ch == 5)
        {
            break;
        }
    }
}
