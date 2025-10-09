#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node
{
    int Data;
    struct Node *Link;
};

struct Node *head = NULL, *temp = NULL;

void createLinkedList();
void traverseLinkedList();
void linearSearchinLL();
void insertatfrontLL();
void inseratEndLL();

void insertatfrontLL()
{
    int valueinsert;
    struct Node *newnode;
    newnode = (struct Node *)malloc(1 * (sizeof(struct Node)));
    printf("\nInsert at Front Singly Linked List!!\n");
    printf("\nEnter the value you want to insert at front of Linked List: ");
    scanf("%d", &valueinsert);

    newnode->Data = valueinsert;
    newnode->Link = NULL;
    if (head == NULL)
    {
        temp = head = newnode;
    }
    else
    {
        newnode->Link = head;
        head = newnode;
    }
    printf("\nNode at front Value: %d inserted sucessfully!!", valueinsert);
}

void inseratEndLL()
{

    struct Node *tempp = head;
    int valueinsert;
    struct Node *newnode;
    newnode = (struct Node *)malloc(1 * (sizeof(struct Node)));
    printf("\nInsert at End of Singly Linked List!!\n");
    printf("\nEnter the value you want to insert at End of Linked List: ");
    scanf("%d", &valueinsert);

    newnode->Data = valueinsert;
    newnode->Link = NULL;

    while (tempp->Link != NULL)
    {
        tempp = tempp->Link;
    }

    temp->Link = newnode;
    printf("\nNode at End  Value: %d inserted sucessfully!!", valueinsert);
}
void linearSearchinLL()
{
    struct Node *tempv = head;
    int Search, found = 0, pos = 0;
    printf("\nEnter an Element to be Searched: ");
    scanf("%d", &Search);
    if (head == NULL)
    {
        printf("\nCannot Search Element!! Linked List is Empty!!");
    }
    else
    {
        while (tempv != NULL)
        {
            pos++;
            if (tempv->Data == Search)
            {
                found = 1;
                break;
            }
            tempv = tempv->Link;
        }
        if (found == 1)
        {
            printf("\nElement found @ Pos: %d", pos);
        }
        else
        {
            printf("\nSearched Element %d  is not found!!", Search);
        }
    }
}

void createLinkedList()
{
    printf("Creation of Linked List!!\n");
    struct Node *newnode;
    newnode = (struct Node *)malloc(1 * (sizeof(struct Node)));
    printf("Enter the Value of Element you want to insert: ");
    int value;
    scanf("%d", &value);
    newnode->Data = value;
    newnode->Link = NULL;

    // Actual creation of node becomes here!!
    if (head == NULL)
    {
        temp = head = newnode;
    }
    else
    {
        temp->Link = newnode;
        temp = newnode;
    }
}

void traverseLinkedList()
{
    struct Node *tempV = head;
    printf("Traversing Linked List!!\n");
    if (head == NULL)
    {
        printf("Cannot Traverse Linked List is Empty!!\n");
    }
    else
    {
        printf("Elements in Linked List are: \n");
        while (tempV != NULL)
        {
            printf("%d--> ", tempV->Data);
            tempV = tempV->Link;
        }
    }
}

int main()
{
    createLinkedList();
    createLinkedList();
    createLinkedList();
    createLinkedList();
    traverseLinkedList();
    linearSearchinLL();
    insertatfrontLL();
    traverseLinkedList();
    inseratEndLL();
    traverseLinkedList();
}