// C Program for Implementation of Singly Linked List
// Compleate Singly Linked List

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
    printf("Enter the data : ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    return newNode;
}

// Create a Singly Linked List
void createSinglyLinkedList(struct Node **start)
{
    struct Node *ptr = NULL;
    int n;
    printf("Enter the Size of Singly Linked List : ");
    scanf("%d", &n);

    // Create a Singly Linked List
    printf("\n -: Create a Singly Linked List :-\n");
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
            ptr = newNode;
        }
    }
}

// Function to Print a Address of Singly Link List
void printAddress(struct Node *ptr)
{
    printf("Print a Address of Singly Link List : ");
    while (ptr != NULL)
    {
        printf("| %d | -> ", ptr);
        ptr = ptr->next;
    }
}

// Function to Print the Linked List
void print(struct Node *ptr)
{
    // Print a Address of Singly Link List
    struct Node *ptr1 = NULL;
    ptr1 = ptr;
    printAddress(ptr1);

    // Print the Linked List
    printf("\nDisplay Singly Link List : ");
    while (ptr != NULL)
    {
        printf("| %d |", ptr->data);
        printf("| %d | ->", ptr->next);
        ptr = ptr->next;
    }
}

// Function to Insert a new Node at the beginning of the singly linked list
void insertAtFirst(struct Node **start)
{
    struct Node *newNode = createNode();
    newNode->next = *start;
    *start = newNode;
}

// Function to Insert a new Node at the End of the singly linked list
void insertAtEnd(struct Node *ptr2)
{
    while (ptr2->next != NULL)
    {
        ptr2 = ptr2->next;
    }
    struct Node *newNode = createNode();
    ptr2->next = newNode;
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
    struct Node *newNode = createNode();
    ptr1->next = newNode;
    newNode->next = ptr2;
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

// Function to Delete the End Node of the Singly Linked List
void deleteFromEnd(struct Node *ptr)
{
    struct Node *ptr1, *ptr2;
    ptr1 = ptr;
    ptr2 = ptr;
    while (ptr1->next != NULL)
    {
        ptr1 = ptr1->next;
    }
    while (ptr2->next != ptr1)
    {
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr1->next;
    free(ptr1);
}

// Delete a Node At a Specific Position in the Singly Linked List
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
}

// Drive Code
int main()
{
    struct Node *start = NULL;

    // Create a Singly Linked List
    createSinglyLinkedList(&start);
    printf("\nStart=%d\n\n", start);

    // Display Singly Link List
    print(start);

    int ch = 1;
    printf("\n\nChoice:-\n1.Insert at beginning\n2.Insert at End\n3.Insert at Position\n4.Delete at First\n5.Delete at End\n6.Delete at Position\n7.Display Singly Linked List\n8.EXIT");
    while (ch)
    {
        printf("\n\nEnter the choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            // Insert a new Node at the beginning of the singly linked list
            printf("Insert a new Node at the beginning of the singly linked list : \n");
            insertAtFirst(&start);
            printf("\nstart=%d", start);
            break;

        case 2:
            // Insert a new Node at the End of the singly linked list
            printf("Insert a new Node at the End of the singly linked list : \n");
            struct Node *ptr2;
            ptr2 = start;
            insertAtEnd(ptr2);
            break;

        case 3:
            // Insert a new Node at a specific Position in the singly linked list
            printf("Insert a new Node at a specific Position in the singly linked list ");
            struct Node *ptr3;
            ptr3 = start;
            int position;
            printf("\nEnter the Address of Position : ");
            scanf("%d", &position);
            insertAtPosition(ptr3, position);
            break;

        case 4:
            // Delete the First Node of the Singly Linked List
            printf("Delete the First Node of the Singly Linked List : ");
            deleteFromFirst(&start);
            break;

        case 5:
            // Delete the Last Node of the Singly Linked List
            printf("Delete the Last Node of the Singly Linked List : ");
            struct Node *ptr5;
            ptr5 = start;
            deleteFromEnd(ptr5);
            break;

        case 6:
            // Delete a Node At a Specific Position in the Singly Linked List
            printf("Delete a Node At a Specific Position in the Singly Linked List : ");
            struct Node *ptr6;
            ptr6 = start;
            int position1;
            printf("\nEnter the Address of Position : ");
            scanf("%d", &position1);
            deleteFromPosition(ptr6, position1);
            break;

        case 7:
            // Display Singly Link List
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