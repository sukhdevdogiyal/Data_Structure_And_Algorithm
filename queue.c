#include <stdio.h>

int main()
{
  int queue[5], ch = 1, front = -1, rear = -1, i, max, n, val;
  printf("\nEnter the size of queue :");
  scanf("%d", &n);
  printf("\n1.Inscrtion\n2.Deletion\n3.Display\n4.Exit");
  while (ch)
  {
    printf("\nEnter the choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      if (rear == n - 1)
      {
        printf("\nQueue is full");
      }
      else
      {
        if (rear == -1)
        {
          front = 0;
        }
        rear += 1;
        printf("\nEnter the array element");
        scanf("%d", &val);
        queue[rear] = val;
      }
      break;
    case 2:
      if (rear == -1 || front > rear)
      {
        printf("\nQueue is empty");
      }
      else
      {
        val = queue[front];
        printf("\ndelete value : %d", val);
        front += 1;
      }
      break;
    case 3:
      printf("\nDisplay Queue : ");
      if (front > rear)
      {
        printf("Queue is Empty");
      }
      for (i = front; i <= rear; i++)
      {
        if (rear == -1)
        {
          printf("Queue is Empty");
        }
        else
          printf(" %d", queue[i]);
      }
      break;
    case 4:
      ch = 4;
      printf("\nExit");
      break;
    }
    if (ch == 4)
    {
      break;
    }
  }
}