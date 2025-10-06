#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node
{
    int Data;
    struct Node *Link;
};

struct Node *head = NULL, *temp = NULL;

void createLinkedList()
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(1 * (sizeof(struct Node)));
    printf("Enter the Value of Element you want to insert: ")
}