// C Program for Implementation of Doubly Linked List
// Insert a new Node at the End of the Doubly linked list

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

//  Function to Insert a new Node at the End of the Doubly linked list
void insertAtEnd(struct Node *ptr)
{
    struct Node *newNode = createNode();
    struct Node *ptr1 = NULL;
    ptr1 = ptr;
    while (ptr1->next != NULL)
    {
        ptr1 = ptr1->next;
    }
    newNode->pre = ptr1;
    ptr1->next = newNode;
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

    // Insert a new Node at the End of the Doubly linked list
    struct Node *ptr2 = NULL;
    ptr2 = start;
    printf("\n\nInsert a new Node at the End of the Doubly linked list\n");
    insertAtEnd(ptr2);

    // Display Doubly Linked List
    print(start);

    return 0;
}
