#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void insertAtMidPosSinglyLinkedList(struct node *head, int pos) // using position as agrument
{
    struct node *newnode;
    newnode = (struct node *)malloc(1 * sizeof(struct node));
    printf("\nEnter Value");
    int value;
    scanf("%d", &value);
    newnode->data = value;
    newnode->link = NULL;
    struct node *temp = head;
    int count = 0;
    if (head == NULL)
    {
        head = newnode;
        printf("\nAs Linked List is Empty !!! Node inserted in position 1!!");
    }
    else
    {
        while (count < pos - 1)
        {
            count++;
            temp = temp->link;
        }
        newnode->link = temp;
        temp->link = newnode;
        printf("\nNode at Pos--> %d inserted Sucessfully!!\n", pos);
    }
}
void insertAtEndSinglyLinkedList(struct node *head)
{
    struct node *newnode;
    newnode = (struct node *)malloc(1 * sizeof(struct node));
    printf("\nEnter Value");
    int value;
    scanf("%d", &value);
    newnode->data = value;
    newnode->link = NULL;
    struct node *temp = head;
    ;
    if (head == NULL)
    {
        head = newnode;
        printf("As Linked List is Empty !!! Node inserted in front!!");
    }
    else
    {
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = newnode;
        printf("\nNode at End inserted Sucessfully!!\n");
    }
}

void insertatfrontinSinglyLinkedList(struct node **head)
{
    struct node *newnode;
    newnode = (struct node *)malloc(1 * sizeof(struct node));
    printf("\nEnter Value");
    int value;
    scanf("%d", &value);
    newnode->data = value;
    newnode->link = NULL;

    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        newnode->link = *head;
        *head = newnode;
        printf("\n Node at front Inserted Sucessfully!!\n");
    }
}
void traverseSinglyLinkedList(struct node *head)
{
    struct node *temp = head;
    if (head == NULL)
    {
        printf("Linked List is Empty !!");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d --> ", temp->data);
            temp = temp->link;
        }
    }
}

void createSinglyLinkedList(struct node **head, struct node **temp)
{
    struct node *newnode;
    newnode = (struct node *)malloc(1 * sizeof(struct node));
    printf("Enter Value");
    int value;
    scanf("%d", &value);
    newnode->data = value;
    newnode->link = NULL;

    // Acutal creation of the linked List Starts Here
    if (*head == NULL)
    {
        *head = *temp = newnode;
    }
    else
    {
        (*temp)->link = newnode;
        *temp = newnode;
    }
}

int main()
{
    struct node *head = NULL, *temp = NULL;
    createSinglyLinkedList(&head, &temp);
    createSinglyLinkedList(&head, &temp);
    createSinglyLinkedList(&head, &temp);
    traverseSinglyLinkedList(head);
    // insertatfrontinSinglyLinkedList(&head);
    // insertAtEndSinglyLinkedList(head);
    // traverseSinglyLinkedList(head);
    printf("\nEnter the Position at which you want to Insert Value: ");
    int insertPos;
    scanf("%d", &insertPos);
    insertAtMidPosSinglyLinkedList(head, insertPos);
    traverseSinglyLinkedList(head);
}
