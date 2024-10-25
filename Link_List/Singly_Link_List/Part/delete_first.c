// C Program for Implementation of Singly Linked List
// Delete the First Node of the Singly Linked Listclude <stdio.h>

#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a New Node
struct Node *createNode()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("\nEnter the data : ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    return newNode;
}

// Function to Delete the First Node of the Singly Linked List
void deleteFromFirst(struct Node **start)
{
    struct Node *ptr;
    ptr = *start;
    *start = ptr->next;
    free(ptr);
    printf("\nStart=%d\n", *start);
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
        printf("newNode=%d", newNode);
        if (i == 0)
        {
            start = newNode;
            ptr = start;
            printf("\nStart=%d", start);
            printf("\nptr=%d", ptr);
        }
        else
        {
            ptr->next = newNode;
            ptr = newNode;
            printf("\nptr=%d", ptr);
        }
    }

    // Display Singly Link List Before Delete
    struct Node *ptr1;
    ptr1 = start;
    printf("\n\nptr1=%d", ptr1);
    printf("\nDisplay Singly Link List Before Delete : ");
    while (ptr1 != NULL)
    {
        printf("| %d |", ptr1->data);
        printf("| %d | ->", ptr1->next);
        ptr1 = ptr1->next;
    }

    // Delete the First Node of the Singly Linked List
    printf("\n\nDelete the First Node of the Singly Linked List : ");
    deleteFromFirst(&start);

    // Display Singly Link List After Delete
    struct Node *ptr3;
    ptr3 = start;
    printf("\nptr3=%d", ptr3);
    printf("\nDisplay Singly Link List After Delete : ");
    while (ptr3 != NULL)
    {
        printf("| %d |", ptr3->data);
        printf("| %d | ->", ptr3->next);
        ptr3 = ptr3->next;
    }

    return 0;
}