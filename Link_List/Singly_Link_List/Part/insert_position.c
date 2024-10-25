// C Program for Implementation of Singly Linked List
// Insert a new Node at a specific Position in the singly linked list

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

// Function to Insert a new Node at a specific Position in the singly linked list
void insertAtPosition(struct Node *ptr, int position)
{
    struct Node *ptr1, *ptr2;
    ptr1 = ptr;
    ptr2 = ptr;
    while (ptr1->next != position)
    {
        ptr1 = ptr1->next;
    }
    ptr2 = ptr1->next;
    printf("ptr1=%d", ptr1);
    printf("\nptr2=%d", ptr2);
    struct Node *newNode = createNode();
    printf("newNode=%d\n", newNode);
    ptr1->next = newNode;
    newNode->next = ptr2;
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

    // Insert a new Node at a specific Position in the singly linked list
    printf("\n\nInsert a new Node at a specific Position in the singly linked list ");
    struct Node *ptr2;
    ptr2 = start;
    int position;
    printf("\nEnter the Address of Position : ");
    scanf("%d", &position);
    insertAtPosition(ptr2, position);

    // Display Singly Link List After Adding
    struct Node *ptr3;
    ptr3 = start;
    printf("\n\nptr3=%d", ptr3);
    printf("\nDisplay Singly Link List After Adding : ");
    while (ptr3 != NULL)
    {
        printf("| %d |", ptr3->data);
        printf("| %d | ->", ptr3->next);
        ptr3 = ptr3->next;
    }

    return 0;
}