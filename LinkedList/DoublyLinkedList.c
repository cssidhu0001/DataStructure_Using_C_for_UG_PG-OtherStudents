#include <stdio.h>
#include <stdlib.h>
#define MAX 100
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head, *temp;
struct node *createNodeDLL()
{
    struct node *newnode = (struct node *)malloc(1 * (sizeof(struct node)));
    printf("\n\nEnter the value you want to insert: ");
    int nodevalue;
    scanf("%d", &nodevalue);
    newnode->data = nodevalue;
    newnode->next = newnode->prev = NULL;
    return newnode;
}

void createDoublyLinkedList()
{
    printf("\n-----Creation Doubly Linked List-----");
    struct node *newnode = createNodeDLL();
    if (head == NULL)
    {
        temp = head = newnode;
    }
    else
    {
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
}

void traverseDoublyLinkedList()
{
    printf("\n-----Traversing Doubly Linked List-----\n");
    struct node *tempVar = head;
    if (head == NULL)
    {
        printf("\nCannot Traverse Linked List is Empty!!");
    }
    else
    {
        while (tempVar != NULL)
        {
            printf("%d -->  ", tempVar->data);
            tempVar = tempVar->next;
        }
    }
}

int main()
{
    while (1)
    {
        printf("\n----------MENU DRIVEN PROGRAM DOUBLY LINKED LIST------------------");
        printf("\nPRESS 1 CREATE DOUBLY LINKED LIST ");
        printf("\nPRESS 2 TRAVERSE DOUBLY LINKED LIST ");
        printf("\nPRESS 3 INSERT AT FRONT DOUBLY LINKED LIST ");
        printf("\nPRESS 4 INSERT AT END DOUBLY LINKED LIST ");
        printf("\nPRESS 5 INSERT AT POSITION DOUBLY LINKED LIST ");
        printf("\nPRESS 6 INSERT AT VALUE DOUBLY LINKED LIST ");
        printf("\nPRESS 7 TO SEARCH ELEMENT DOUBLY LINKED LIST ");
        printf("\nPRESS 8 DELETE AT END DOUBLY LINKED LIST ");
        printf("\nPRESS 9 DELETE AT POSITION DOUBLY LINKED LIST ");
        printf("\nPRESS 10 DELETE AT VALUE DOUBLY LINKED LIST ");
        printf("\nPRESS 11 COUNT NODE IN  DOUBLY LINKED LIST ");
        printf("\nPRESS 12 FIND MAXIMUM IN DOUBLY LINKED LIST ");
        printf("\nPRESS 13 FIND MINIMUM IN DOUBLY LINKED LIST ");
        printf("\nPRESS 14 TO SORT THE  DOUBLY LINKED LIST ");
        printf("\nPRESS 15 PRINT THE REVERSE OF DOUBLY LINKED LIST ");
        printf("\nPRESS 0 TO EXIT FROM THE PROGRAM ");
        printf("\n---------------------------------------------------------------------");
        printf("\nEnter your choice from the Above MENU ");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createDoublyLinkedList();
            break;
        case 2:
            traverseDoublyLinkedList();
            break;

        default:
            printf("Invalid Choice !!! Kindly Enter the Choice from the above Menu only!!");
            break;
        }
    }
}
