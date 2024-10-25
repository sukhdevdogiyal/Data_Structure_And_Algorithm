// C Program for Implementation of Doubly Linked List
// Delete a Node At a Specific Position in the Doubly Linked List

#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
struct Node
{
    int data;
    struct Node *next;
    struct Node *pre;
};

// Function to create a New Node
struct Node *createNode()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data : ");
    scanf("%d", &newNode->data);
    newNode->pre = NULL;
    newNode->next = NULL;
    return newNode;
}

// Create a Doubly Linked List
void createDoublyLinkedList(struct Node **start)
{
    struct Node *ptr = NULL;
    int n;
    printf("Enter the Size of Doubly Linked List : ");
    scanf("%d", &n);

    // Create a Doubly Linked List
    printf("\n -: Create a Doubly Linked List :-\n");
    for (int i = 0; i < n; i++)
    {
        struct Node *newNode = createNode();
        if (i == 0)
        {
            *start = newNode;
            ptr = *start;
        }
        else
        {

            ptr->next = newNode;
            newNode->pre = ptr;
            ptr = newNode;
        }
    }
}

// Function to Print a Address of Doubly Linked List
void printAddress(struct Node *ptr)
{
    printf("\nstart=%d", ptr);
    printf("\nPrint a Address of Doubly Linked List : ");
    while (ptr != NULL)
    {
        printf("| %d | <--> ", ptr);
        ptr = ptr->next;
    }
}

// Function to Print the Doubly Linked List
void print(struct Node *ptr)
{
    // Print a Address of Doubly Linked List
    struct Node *ptr1 = NULL;
    ptr1 = ptr;
    printAddress(ptr1);

    // Print the Doubly Linked List
    struct Node *ptr2 = NULL;
    ptr2 = ptr;
    printf("\nDisplay Doubly Linked List : ");
    while (ptr2 != NULL)
    {
        printf(" [ | %d |", ptr2->pre);
        printf("| %d |", ptr2->data);
        printf("| %d | ] <-->", ptr2->next);
        ptr2 = ptr2->next;
    }
}

// Function to Delete a Node At a Specific Position in the Doubly Linked List
void deleteFromPosition(struct Node *ptr, int position)
{
    struct Node *ptr1, *ptr2, *ptr3;
    ptr1 = ptr;
    ptr2 = ptr;
    ptr3 = ptr;
    while (ptr1->next != position)
    {
        ptr1 = ptr1->next;
    }
    ptr2 = ptr1->next;
    ptr3 = ptr2->next;
    ptr1->next = ptr3;
    free(ptr2);
    ptr1->next = ptr3;
    ptr3->pre = ptr1;
}

// Drive Code
int main()
{
    struct Node *start = NULL;

    // Create a Doubly Linked List
    createDoublyLinkedList(&start);
    printf("\nStart=%d\n", start);

    // Display Doubly Linked List
    print(start);

    // Delete a Node At a Specific Position in the Doubly Linked List
    printf("\n\nDelete a Node At a Specific Position in the Doubly Linked List : ");
    struct Node *ptr2;
    ptr2 = start;
    int position;
    printf("\nEnter the Address of Position : ");
    scanf("%d", &position);
    deleteFromPosition(ptr2, position);

    // Display Doubly Linked List
    print(start);

    return 0;
}