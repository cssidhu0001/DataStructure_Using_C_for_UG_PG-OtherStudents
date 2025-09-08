#include "stdio.h"
#include "stdlib.h"
#define QUEUE_MAX 5

void enqueue(int *, int *, int *);
void dequeue(int *, int *, int *);
void peek(int *, int *, int *);
void isEmpty(int *, int *);
void isFull(int *, int *);
void traverse(int *, int *, int *);
void exitProgram();

void enqueue(int QUEUE[], int *REAR, int *FRONT)
{
    int enqueueElement;
    if ((*REAR) == QUEUE_MAX - 1)
    {
        printf("Queue Overflow!!\nCannot Enqueue the Elements into the Queue!!");
    }
    else if ((*FRONT) == -1 && (*REAR) == -1)
    {
        (*FRONT) = (*REAR) = 0;
        printf("Enter the Element you want to Enqueue in the Queue: ");
        scanf("%d", &enqueueElement);
        QUEUE[(*REAR)] = enqueueElement;
        printf("Element %d is Enqueued Sucessfully!!!\n", enqueueElement);
    }
    else
    {
        (*REAR) += 1;
        printf("Enter the Element you want to Enqueue in the Queue: ");
        scanf("%d", &enqueueElement);
        QUEUE[(*REAR)] = enqueueElement;
        printf("Element %d is Enqueued Sucessfully!!!\n", enqueueElement);
    }
}

void dequeue(int QUEUE[], int *REAR, int *FRONT)
{
    int dequeuedElement;
    if ((*FRONT) == -1 && (*REAR) == -1)
    {
        printf("Queue Underflow!!\nCannot Dequeue the Elements from the Queue!!");
    }
    else if ((*FRONT) == (*REAR))
    {
        dequeuedElement = QUEUE[(*FRONT)];
        (*FRONT) = (*REAR) = -1;
        printf("Element %d is Dequeued Sucessfully from the Queue!!\n", dequeuedElement);
    }
    else
    {
        dequeuedElement = QUEUE[(*FRONT)];
        (*FRONT) += 1;
        printf("Element %d is Dequeued Sucessfully from the Queue!!\n", dequeuedElement);
    }
}

void traverse(int QUEUE[], int *REAR, int *FRONT)
{
    if ((*FRONT) == -1 && (*FRONT) == -1)
    {
        printf("Queue Underflow!!\n Cannot traverse the Elements from the Queue!!");
    }
    else
    {
        printf("Elements in the Queue are: \n");
        for (int i = (*FRONT); i <= (*REARgi); i++)
        {
            printf("%d  ", QUEUE[i]);
        }
    }
}
void isEmpty(int *REAR, int *FRONT)
{
    if ((*FRONT) == -1 && (*REAR) == -1)
    {
        printf("Queue is Empty!!\n ");
    }
    else
    {
        printf("Queue will be Empty after Deqeueing %d Elements !!\n", ((*REAR) + 1) - (*FRONT));
    }
}
void isFull(int *REAR, int *FRONT)
{
    if ((*REAR) == QUEUE_MAX - 1)
    {
        printf("Queue is FULL!!\n ");
    }
    else
    {
        printf("Queue will be FULL after Enqueuing %d Elements !!\n", (QUEUE_MAX - 1) - (*REAR));
    }
}

void peek(int QUEUE[], int *REAR, int *FRONT)
{
    printf("\n------PEEK Queue------");

    if ((*FRONT) == -1 && (*REAR) == -1)
    {
        printf("Queue Underflow!!\n Cannot Peek the Element of  the Queue!!");
    }
    else
    {

        printf("\nToppest value of the QUEUE is :%d", QUEUE[(*FRONT)]);
    }
}

void exitProgram()
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

int main()
{
    int QUEUE[QUEUE_MAX];
    int FRONT = -1, REAR = -1;
    printf("------QUEUE------\n");
    int choice;
    while (1)
    {
        printf("\n------MENU---------\n");
        printf("PRESS 1 ENQUEUE\n");
        printf("PRESS 2 DEQUEUE\n");
        printf("PRESS 3 PEEK\n");
        printf("PRESS 4 ISEMPTY\n");
        printf("PRESS 5 ISFULL\n");
        printf("PRESS 6 TRAVERSE\n");
        printf("PRESS 0 EXIT\n");
        printf("-----------------------------\n");
        printf("Enter your choice from the Above MENU  ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue(QUEUE, &FRONT, &REAR);
            break;
        case 2:
            dequeue(QUEUE, &FRONT, &REAR);
            break;
        case 3:
            peek(QUEUE, &FRONT, &REAR);
            break;
        case 4:
            isEmpty(&FRONT, &REAR);
            break;

        case 5:
            isFull(&FRONT, &REAR);
            break;
        case 6:
            traverse(QUEUE, &FRONT, &REAR);
            break;
        case 0:
            exitProgram();
            break;

        default:
            printf("\nInvalid Choice!!\n Kindly enter your choice from the above menu only!!");
            break;
        }
    }
}