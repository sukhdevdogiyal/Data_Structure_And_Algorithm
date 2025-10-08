#include<stdio.h>

void main()
{
int TOP=0,s[5],n,a,i;
s[TOP]=1;
printf("Enter the number : ");
scanf("%d",&n);
if(n==0||n==1)
 {
 printf("Factorial of %d is : %d",n,s[TOP]);
 }
else
  {
  for(i=2;i<=n;i++)
   {
    a=s[TOP];
    TOP+=1;
    s[TOP]=a*i;
    }
  printf("Factorial of %d is : %d",n,s[TOP]);
  }
}