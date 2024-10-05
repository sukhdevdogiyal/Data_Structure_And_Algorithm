#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};

int main()
{
    struct node* newnode;
    int* ptr=newnode;
    for(int i=0;i<5;i++)
    {
    newnode=(struct node*)malloc(sizeof(int));
    scanf("%d",&newnode->data);
    newnode->link=++ptr;
    printf("%d",newnode->data);
    


    }
    return 0;
}
