// C Program for Implementation of Doubly Linked List
// Compleat Doubly Linked List

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

//  Function to Insert a new Node at the beginning of the Doubly linked list
void insertAtFirst(struct Node **start)
{
    struct Node *newNode = createNode();
    struct Node *ptr = NULL;
    ptr = *start;
    newNode->next = ptr;
    ptr->pre = newNode;
    *start = newNode;
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

// Function to Insert a new Node at a specific Position in the Doubly linked list
void insertAtPosition(struct Node *ptr, int position)
{
    struct Node *newNode = createNode();
    struct Node *ptr1, *ptr2;
    ptr1 = ptr;
    ptr2 = ptr;
    while (ptr1->next != position)
    {
        ptr1 = ptr1->next;
    }
    ptr2 = ptr1->next;
    ptr1->next = newNode;
    newNode->pre = ptr1;
    newNode->next = ptr2;
    ptr2->pre = newNode;
}

//  Function to Delete the First Node of the Doubly Linked List
void deleteFromFirst(struct Node **start)
{
    struct Node *ptr1 = NULL, *ptr2 = NULL;
    ptr1 = *start;
    ptr2 = *start;
    ptr2 = ptr1->next;
    *start = ptr2;
    ptr2->pre = ptr1->pre;
    free(ptr1);
}

//  Function to Delete the Last Node of the Doubly Linked List
void deleteFromEnd(struct Node *ptr)
{
    struct Node *ptr1 = NULL, *ptr2 = NULL;
    ptr1 = ptr;
    ptr2 = ptr;
    while (ptr1->next != NULL)
    {
        ptr1 = ptr1->next;
    }
    ptr2 = ptr1->pre;
    ptr2->next = ptr1->next;
    free(ptr1);
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
    printf("\nStart=%d\n\n", start);

    // Display Doubly Link List
    print(start);

    int ch = 1;
    printf("\n\nChoice:-\n1.Insert at beginning\n2.Insert at End\n3.Insert at Position\n4.Delete at First\n5.Delete at End\n6.Delete at Position\n7.Display Doubly Linked List\n8.EXIT");
    while (ch)
    {
        printf("\n\nEnter the choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            // Insert a new Node at the beginning of the Doubly linked list
            printf("Insert a new Node at the beginning of the Doubly linked list : \n");
            insertAtFirst(&start);
            printf("\nstart=%d", start);
            break;

        case 2:
            // Insert a new Node at the End of the Doubly linked list
            printf("Insert a new Node at the End of the Doubly linked list : \n");
            struct Node *ptr2;
            ptr2 = start;
            insertAtEnd(ptr2);
            break;

        case 3:
            // Insert a new Node at a specific Position in the  Doubly linked list
            printf("Insert a new Node at a specific Position in the Doubly linked list ");
            struct Node *ptr3;
            ptr3 = start;
            int position;
            printf("\nEnter the Address of Position : ");
            scanf("%d", &position);
            insertAtPosition(ptr3, position);
            break;

        case 4:
            // Delete the First Node of the Doubly Linked List
            printf("Delete the First Node of the Doubly Linked List : ");
            deleteFromFirst(&start);
            break;

        case 5:
            // Delete the Last Node of the Doubly Linked List
            printf("Delete the Last Node of the Doubly Linked List : ");
            struct Node *ptr5;
            ptr5 = start;
            deleteFromEnd(ptr5);
            break;

        case 6:
            // Delete a Node At a Specific Position in the Doubly Linked List
            printf("Delete a Node At a Specific Position in the Doubly Linked List : ");
            struct Node *ptr6;
            ptr6 = start;
            int position1;
            printf("\nEnter the Address of Position : ");
            scanf("%d", &position1);
            deleteFromPosition(ptr6, position1);
            break;

        case 7:
            // Display Doubly Link List
            print(start);
            break;

        case 8:
            // EXIT the while Loop
            printf("\nEXIT");
            ch = 8;
            break;

        default:
            printf("\nEnter the valid choice");
            break;
        }

        if (ch == 8)
        {
            break;
        }
    }

    return 0;
}