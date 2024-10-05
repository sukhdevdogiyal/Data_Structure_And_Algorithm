#include <stdio.h>
#include <conio.h>
void main()
{
  int queue[100], i, max, n, val, rear = -1, front = -1, frontR = 100, ch = 1;
  printf("\nEnter the size of Queue : ");
  scanf("%d", &n);
  frontR=n;
  printf("\n1.Inscrtion(Left side)\n2.Deletion(Left side)\n3.Deletion(Right side)\n4.Display\n5.Exit");
  while (ch)
  {
    printf("\n\nEnter the choice :");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      if (rear == n - 1)
      {
        printf("Queue is Full");
      }
      else
      {
        if (rear == -1)
        {
          front = 0;
        }
        rear += 1;
        frontR = rear;
        printf("Enter the array element");
        scanf("%d", &val);
        queue[rear] = val;
      }
      break;
    case 2:
      if (rear == -1 || front > rear)
      {
        printf("Queue is empty");
      }
      else
      {
        val = queue[front];
        printf("\ndelete value : %d", val);
        front += 1;
      }
      break;
    case 3:
      frontR = rear;
      if (frontR == n || frontR < front||frontR==-1)
      {
        printf("Queue is empty");
      }
      else
      {
        val = queue[frontR];
        printf("\ndelete value : %d", val);
        rear -= 1;
      }
      break;
    case 4:
      printf("Display Queue :");
      for (i = front; i <= rear; i++)
      {
        if (rear == -1)
        {
          printf("\tQueue is Empty");
        }
        else
          printf("\t%d", queue[i]);
      }
      break;
    case 5:
      ch = 5;
      printf("\nExit");
      break;
    }
    if (ch == 5)
    {
      break;
    }
  }
  getch();
}
