#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
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
}
