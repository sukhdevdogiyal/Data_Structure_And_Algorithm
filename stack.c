#include<stdio.h>
int main()
{
int stack[5],ch=1,TOP=-1,val,n,i;
printf("Enter the size of stack : ");
scanf("%d",&n);
printf("Choice:-\n1.PUSH\n2.POP\n3.Display\n4.Exit");
while(ch)
 {
  printf("\n\nEnter the choice : ");
  scanf("%d",&ch);
  switch(ch)
    {
    case 1:
   if(TOP==n-1)
  {
  printf("stack is overflow");
  }
 else
  {
  printf("Enter the element in stack : ");
  scanf("%d",&val);
  TOP+=1;
  stack[TOP]=val;
  }
    break;
    case 2:
    if(TOP==-1)
  {
  printf("stack is underflow");
  }
 else
  {
  val=stack[TOP];
  printf("Delete the value : %d",val);
  TOP-=1;
  }
    break;
    case 3:
    printf("Display Stack : ");
 for(i=0;i<=TOP;i++)
  {
  printf(" %d",stack[i]);
  }
    break;
    case 4:
    ch=4;
    printf("\nEXIT");
    }
  if(ch==4)
   break;
 }

}