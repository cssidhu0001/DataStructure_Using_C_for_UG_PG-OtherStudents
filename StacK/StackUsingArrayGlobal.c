#include "stdio.h"
#include "stdlib.h"
#define STACK_MAX 5

int STACK[STACK_MAX];
int TOP = -1;

void push();
void pop();
void display();
void peek();
void isEmpty();
void isFull();
void exitprogram();

void exitprogram()
{
    printf("\nDo you really want to Exit program\nPRESS 1 to EXIT and 0 to CONTINUE\n");
    int ch;
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("\nExiting the program........\n");
        exit(0);
    }
    else if (ch == 0)
    {

        printf("\nContinuing the program........\n");
        return;
    }
    else
    {
        printf("\nInvalid Choice only enter 0 or 1 for exiting process!!\nReturing to Home!!");
        return;
    }
}
void push()
{
    printf("\n------PUSH in Stack------");
    if (TOP == STACK_MAX - 1)
    {
        printf("\nStack Overflow!!\n Cannot PUSH element into STACK!!");
    }
    else
    {
        int value;
        printf("\nEnter the value you want to PUSH in the STACK:  ");
        scanf("%d", &value);
        TOP += 1;
        STACK[TOP] = value;
        printf("\n%d has been sucessfully Pushed into STACK!!", value);
    }
}

void pop()
{
    printf("\n------POP from Stack------");

    if (TOP == -1)
    {
        printf("\nStack Underflow \n Cannot POP the element from the Stack!!");
    }
    else
    {
        int valuePoped;
        valuePoped = STACK[TOP];
        TOP -= 1;
        printf("\n%d has been sucessfully Poped  Out from STACK!!", valuePoped);
    }
}

void peek()
{
    printf("\n------PEEK Stack------");

    if (TOP == -1)
    {
        printf("\nStack Underflow \n Cannot PEEK the element of Stack!!");
    }
    else
    {

        printf("\nToppest value of the STACK is :%d", STACK[TOP]);
    }
}
void isFull()
{
    printf("\n------Check STACK is FULL------");

    if (TOP == STACK_MAX - 1)
    {
        printf("\nSTACK is FULL");
    }
    else
    {
        printf("\nStack is not Full you can push %d elements into Stack!!", STACK_MAX - (TOP + 1));
    }
}
void isEmpty()
{
    printf("\n------Check STACK is Empty------");

    if (TOP == -1)
    {
        printf("\nSTACK is EMPTY");
    }
    else
    {
        printf("\nStack is not Empty you can pop %d element from Stack!!", TOP + 1);
    }
}

void display()
{
    printf("\n------------Display STACK---------");
    printf("\nElements in Stack are\n");
    for (int i = TOP; i >= 0; i--)
    {
        printf("%d\n", STACK[i]);
    }
}

int main()
{
    printf("------STACK------\n");
    int choice;
    while (1)
    {
        printf("\n------MENU---------\n");
        printf("PRESS 1 PUSH\n");
        printf("PRESS 2 POP\n");
        printf("PRESS 3 PEEK\n");
        printf("PRESS 4 ISEMPTY\n");
        printf("PRESS 5 ISFULL\n");
        printf("PRESS 6 DISPLAY\n");
        printf("PRESS 0 EXIT\n");
        printf("-----------------------------\n");
        printf("Enter your choice from the Above MENU  ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            isEmpty();
            break;
            break;
        case 5:
            isFull();
            break;
        case 6:
            display();
            break;
        case 0:
            exitprogram();
            break;

        default:
            printf("\nInvalid Choice!!\n Kindly enter your choice from the above menu only!!");
            break;
        }
    }
}