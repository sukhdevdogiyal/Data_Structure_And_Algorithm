// C Program for Implementation of Singly Linked List
// Insert a new Node at the beginning of the singly linked list

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

// Function to Insert a new Node at the beginning of the singly linked list
void insertAtFirst(struct Node **start)
{
    struct Node *newNode = createNode();
    newNode->next = *start;
    *start = newNode;
    printf("newNode = %d", newNode);
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

    // Display Singly Link List Before Adding
    struct Node *ptr1;
    ptr1 = start;
    printf("\n\nptr1=%d", ptr1);
    printf("\nDisplay Singly Link List Before Adding : ");
    while (ptr1 != NULL)
    {
        printf("| %d |", ptr1->data);
        printf("| %d | ->", ptr1->next);
        ptr1 = ptr1->next;
    }

    // Insert a new Node at the beginning of the singly linked list
    printf("\n\nInsert a new Node at the beginning of the singly linked list : ");
    insertAtFirst(&start);
    printf("\nstart=%d", start);

    // Display Singly Link List After Adding
    struct Node *ptr2;
    ptr2 = start;
    printf("\n\nptr2=%d", ptr2);
    printf("\nDisplay Singly Link List After Adding : ");
    while (ptr2 != NULL)
    {
        printf("| %d |", ptr2->data);
        printf("| %d | ->", ptr2->next);
        ptr2 = ptr2->next;
    }

    return 0;
}