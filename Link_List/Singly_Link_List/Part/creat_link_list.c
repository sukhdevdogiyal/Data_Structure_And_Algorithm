// C Program for Implementation of Singly Linked List
// Create a Singly Linked List

#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a New Node
struct Node* createNode()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter the data : ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    return newNode;
}

// Drive Code
int main()
{
    struct Node *start = NULL, *ptr = NULL;
    int n;
    printf("Enter the Size of Singly Linked List : ");
    scanf("%d", &n);

    // Create a Singly Linked List
    printf("\n -: Create a Singly Linked List :-");
    for (int i = 0; i < n; i++)
    {
        struct Node *newNode = createNode();
        if (i == 0)
        {
            start = newNode;
            ptr = start;
            printf("Start=%d", start);
            printf("\nptr=%d", ptr);
        }
        else
        {

            ptr->next = newNode;
            ptr = newNode;
            printf("ptr=%d", ptr);
            printf("\nnewNode=%d", newNode);
        }
    }

    // Display Singly Link List
    struct Node *ptr1;
    ptr1 = start;
    printf("\n\nptr1=%d", ptr1);
    printf("\nDisplay Singly Link List : ");
    while (ptr1 != NULL)
    {
        printf("| %d |", ptr1->data);
        printf("| %d | ->", ptr1->next);
        ptr1 = ptr1->next;
    }

    return 0;
}