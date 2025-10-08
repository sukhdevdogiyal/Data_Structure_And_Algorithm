#include <stdio.h>

int main()
{
  int queue[5], ch = 1, front = -1, rear = -1, i, max, n, val;
  printf("Enter the size of queue : ");
  scanf("%d", &n);
  printf("-:choice:-\n1.Inscrtion\n2.Deletion\n3.Display\n4.Exit");
  while (ch)
  {
    printf("\nEnter the choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      if (rear == n - 1)
      {
        printf("Queue is full\n");
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
      if (rear == -1)
      {
        printf("Queue is empty\n");
      }
      else
      {
        val = queue[front];
        printf("delete value : %d\n", val);
        front += 1;
      }
      if (rear + 1 == front)
      {
        rear = -1;
        front = -1;
      }
      break;
    case 3:
      printf("Display Queue : ");
      for (i = front; i <= rear; i++)
      {
        if (rear == -1)
        {
          printf("Queue is Empty");
        }
        else
          printf(" %d", queue[i]);
      }
      printf("\n");
      break;
    case 4:
      ch = 4;
      printf("\nExit");
      break;
    default:
      printf("Enter the valid choice \n");
    }
    if (ch == 4)
    {
      break;
    }
  }
}