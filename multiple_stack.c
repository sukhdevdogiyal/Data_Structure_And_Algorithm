#include<stdio.h>
#include<conio.h>
int pushA(int stack[],int TOPA,int TOPB,int val)
 {
 if(TOPA+1==TOPB)
  {
  printf("stack is overflow");
  }
 else
  {
  printf("Enter the element in stack : ");
  scanf("%d",&val);
  TOPA+=1;
  stack[TOPA]=val;
  }
  return TOPA;
 }
 int popA(int stack[],int TOPA,int val)
 {
 if(TOPA==-1)
  {
  printf("stack is underflow");
  }
 else
  {
  val=stack[TOPA];
  printf("Delete the value : %d",val);
  TOPA-=1;
  }
  return TOPA;
 }
 int pushB(int stack[],int TOPA,int TOPB,int val)
 {
 if(TOPB-1==TOPA)
  {
  printf("stack is overflow");
  }
 else
  {
  printf("Enter the element in stack : ");
  scanf("%d",&val);
  TOPB-=1;
  stack[TOPB]=val;
  }
  return TOPB;
 }
 int popB(int stack[],int TOPB,int n,int val)
 {
 if(TOPB==n)
  {
  printf("stack is underflow");
  }
 else
  {
  val=stack[TOPB];
  printf("Delete the value : %d",val);
  TOPB+=1;
  }
  return TOPB;
 }
void display(int stack[],int TOPA,int TOPB,int n,int i)
 {
 printf("Display Stack : ");
 for(i=0;i<=TOPA;i++)
  {
  printf(" %d",stack[i]);
  }

 for(i=TOPA+1;i<TOPB;i++)
  {
  printf(" -");
  }

 for(i=TOPB;i<n;i++)
  {
  printf(" %d",stack[i]);
  }
   }
int main()
{
int stack[5],ch=1,TOPA=-1,TOPB,val,n,i;

printf("Enter the size of stack : ");
scanf("%d",&n);
TOPB=n;
printf("Choice:-\n1.PUSH in Stack A\n2.POP in Stack A\n3.PUSH in Stack B\n4.POP in Stack B\n5.Display\n6.Exit");
while(ch)
 {
  printf("\n\nEnter the choice : ");
  scanf("%d",&ch);
  switch(ch)
    {
    case 1:
   TOPA=pushA(stack,TOPA,TOPB,val);
    break;
    case 2:
    TOPA=popA(stack,TOPA,val);
    break;
     case 3:
   TOPB=pushB(stack,TOPA,TOPB,val);
    break;
    case 4:
    TOPB=popB(stack,TOPB,n,val);
    break;
    case 5:
    display(stack,TOPA,TOPB,n,i);
    break;
    case 6:
    ch=6;
    printf("\nEXIT");
    }
  if(ch==6)
   break;
 }
}