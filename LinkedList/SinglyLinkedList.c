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
void deleteatfront();
void deleteAtEnd();
void deleteAtMid();
void insertatmidUsingPos();
void countNodesOfLinkedList();

void countNodesOfLinkedList()
{
    printf("\n <----Count Number of Nodes  in Singly Linked List!!---->\n");
    struct Node *temp = head;
    int count = 0;
    if (head == NULL)
    {
        printf("\nCannot count the Node ..Linked List is Empty!!\n");
    }
    else
    {
        while (temp != NULL)
        {
            count++;
            temp = temp->Link;
        }
        printf("\nTheir are %d node in Singly Linked List!!", count);
    }
}
void deleteAtMid()
{
    printf("\nDeletion at Mid Node in Singly Linked List at a certain Position!!\n");
    struct Node *secondPtr, *temp = head;
    int pos, count = 0;
    if (head == NULL)
    {
        printf("\nCannot delete the Node ..Linked List is Empty!!\n");
    }
    else
    {
        printf("Enter the position at which you want to delete the Node: ");
        scanf("%d", &pos);
        while (count < pos - 1)
        {
            secondPtr = temp;
            temp = temp->Link;
            count++;
        }
        secondPtr->Link = temp->Link;
        free(temp);
        printf("\nNode At Pos %d  of the Linked List has been Deleted Sucesfully!!", pos);
    }
}
void deleteAtEnd()
{
    printf("\nDeletion at Last Node in Singly Linked List!!\n");
    struct Node *secondPtr, *tempV = head;
    if (head == NULL)
    {
        printf("\nCannot delete the Node ..Linked List is Empty!!\n");
    }
    else
    {

        while (tempV->Link != NULL)
        {
            secondPtr = tempV;
            tempV = tempV->Link;
        }
        secondPtr->Link = NULL;
        free(tempV);
        printf("\nLast node of the Linked List has been Deleted Sucesfully!!");
    }
}
void deleteatfront()
{
    printf("\nDeletion at front Node in Singly Linked List!!\n");
    struct Node *tempV = head;
    if (head == NULL)
    {
        printf("\nCannot delete the Node ..Linked List is Empty!!\n");
    }
    else
    {
        head = head->Link;
        free(tempV);
        printf("\nFirst node of the Linked List has been Deleted Sucesfully!!");
    }
}
void insertatmidUsingPos()
{
    int valueinsert, pos;
    struct Node *newnode, *temp = head;

    newnode = (struct Node *)malloc(1 * (sizeof(struct Node)));
    printf("\nInsert at Mid in Singly Linked List!!\n");
    printf("\nEnter the position after which you want to insert in Linked List: ");
    scanf("%d", &pos);
    printf("\nEnter the value you want to insert at front of Linked List: ");
    scanf("%d", &valueinsert);

    newnode->Data = valueinsert;
    newnode->Link = NULL;

    int count = 0;
    while (count < pos - 1)
    {
        temp = temp->Link;
        count++;
    }
    newnode->Link = temp->Link;
    temp->Link = newnode;
    printf("Node at Pos %d has been inserted Sucessfully!!");
}
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
    printf("\nTraversing Linked List!!\n");
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
    createLinkedList();
    createLinkedList();
    traverseLinkedList();
    countNodesOfLinkedList();
    // deleteatfront();
    // traverseLinkedList();
    // deleteAtEnd();
    // deleteAtMid();
    // traverseLinkedList();

    // insertatmidUsingPos();
    // traverseLinkedList();
    // linearSearchinLL();
    // insertatfrontLL();
    // traverseLinkedList();
    // inseratEndLL();
    // traverseLinkedList();
}