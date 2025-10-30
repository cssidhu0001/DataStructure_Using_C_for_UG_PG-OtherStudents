#include < stdio.h>
#include < stdlib.h>
#define MAX 100
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL, temp = NULL;

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
            printf("");
            break;

        default:
            printf("Invalid Choice !!! Kindly Enter the Choice from the above Menu only!!");
            break;
        }
    }
}
