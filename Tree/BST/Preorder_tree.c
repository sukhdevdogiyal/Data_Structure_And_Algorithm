// C Program for Implementation of Preorder traversing using BST

#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node
{
    int data;
    struct Node *Left;
    struct Node *Right;
};

// Function to create a New Node
struct Node *creatNode()
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data : ");
    scanf("%d", &newnode->data);
    newnode->Left = NULL;
    newnode->Right = NULL;
    return newnode;
}

// Function to create a Binary Search Tree (BST)
void createBST(struct Node **Root)
{
    struct Node *ptr = NULL;
    int n;
    printf("Enter the size of Tree : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        ptr = *Root;
        struct Node *newnode = creatNode();
        if (i == 0)
        {
            *Root = newnode;
        }
        else
        {
            int count = 0;
            while (count == 0)
            {
                if (ptr->data > newnode->data)
                {
                    if (ptr->Left == NULL)
                    {
                        ptr->Left = newnode;
                        count++;
                    }
                    ptr = ptr->Left;
                }
                else // ptr->data < newnode->data
                {
                    if (ptr->Right == NULL)
                    {
                        ptr->Right = newnode;
                        count++;
                    }
                    ptr = ptr->Right;
                }
            }
        }
    }
}

// Function to Find a Preorder of  Binary Search Tree (BST)
void Preorder(struct Node *Root)
{
    int *stack[10];
    int TOP = 0;
    stack[TOP] = NULL;
    struct Node *ptr1 = NULL;
    ptr1 = Root;
    printf("Preorder Tree = ");
    while (ptr1 != NULL)
    {
        printf(" %d ", ptr1->data);
        if (ptr1->Right != NULL)
        {
            TOP = TOP + 1;
            stack[TOP] = (int *)ptr1->Right;
        }
        if (ptr1->Left != NULL)
        {
            ptr1 = ptr1->Left;
        }
        else
        {
            ptr1 = (struct Node *)stack[TOP];
            TOP = TOP - 1;
        }
    }
}

// Drive Code
int main()
{
    struct Node *Root = NULL;

    // create a Binary Search Tree (BST)
    createBST(&Root);

    // Find a Preorder of  Binary Search Tree (BST)
    Preorder(Root);

    return 0;
}
