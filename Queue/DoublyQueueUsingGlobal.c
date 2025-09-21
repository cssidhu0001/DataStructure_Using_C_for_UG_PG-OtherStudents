#include "stdio.h"
#include "stdlib.h"
#define QUEUE_MAX 10

int QUEUE[QUEUE_MAX];
int FRONT = -1, REAR = -1;

void enqueuefromRear(); //Inseration in Queue from Rear
void dequeuefromRear(); // Deletion in Queue from Rear (Doubly Major Part)
void dequeuefromFront(); 
void peek();
void isEmpty();
void isFull();
void traverse();
void exitProgram();

void enqueuefromRear()
{
    int enqueueElement;
    if (REAR == QUEUE_MAX - 1)
    {
        printf("Queue Overflow!!\nCannot Enqueue the Elements into the Queue!!");
    }
    else if (FRONT == -1 && REAR == -1)
    {
        FRONT = REAR = 0;
        printf("Enter the Element you want to Enqueue in the Queue: ");
        scanf("%d", &enqueueElement);
        QUEUE[REAR] = enqueueElement;
        printf("Element %d is Enqueued Sucessfully!!!\n", enqueueElement);
    }
    else
    {
        REAR += 1;
        printf("Enter the Element you want to Enqueue in the Queue: ");
        scanf("%d", &enqueueElement);
        QUEUE[REAR] = enqueueElement;
        printf("Element %d is Enqueued Sucessfully!!!\n", enqueueElement);
    }
}

void dequeuefromFront()
{
    int dequeuedElement;
    if (FRONT == -1 && REAR == -1)
    {
        printf("Queue Underflow!!\nCannot Dequeue the Elements from the Queue!!");
    }
    else if (FRONT == REAR)
    {
        dequeuedElement = QUEUE[FRONT];
        FRONT = REAR = -1;
        printf("Element %d is Dequeued Sucessfully from the Front of the  Queue!!\n", dequeuedElement);
    }
    else
    {
        dequeuedElement = QUEUE[FRONT];
        FRONT += 1;
        printf("Element %d is Dequeued Sucessfully from the Front of the Queue!!\n", dequeuedElement);
    }
}
void dequeuefromRear()
{
    int dequeuedElement;
    if (FRONT == -1 && REAR == -1)
    {
        printf("Queue Underflow!!\nCannot Dequeue the Elements from the Queue!!");
    }
    else if (FRONT == REAR)
    {
        dequeuedElement = QUEUE[FRONT];
        FRONT = REAR = -1;
        printf("Element %d is Dequeued Sucessfully from the Rear of the  Queue!!\n", dequeuedElement);
    }
    else
    {
        dequeuedElement = QUEUE[REAR];
        REAR -= 1;
        printf("Element %d is Dequeued Sucessfully from the  Rear of the Queue!!\n", dequeuedElement);
    }
}

void traverse()
{
    if (FRONT == -1 && REAR == -1)
    {
        printf("Queue Underflow!!\n Cannot traverse the Elements from the Queue!!");
    }
    else
    {

        printf("Elements in the Queue are: \n");
        for (int i = FRONT; i <= REAR; i++)
        {
            printf("%d  ", QUEUE[i]);
        }
    }
}
void isEmpty()
{
    if (FRONT == -1 && REAR == -1)
    {
        printf("Queue is Empty!!\n ");
    }
    else
    {
        printf("Queue will be Empty after Deqeueing %d Elements !!\n", (REAR + 1) - FRONT);
    }
}
void isFull()
{
    if (REAR == QUEUE_MAX - 1)
    {
        printf("Queue is FULL!!\n ");
    }
    else
    {
        printf("Queue will be FULL after Enqueuing %d Elements !!\n", (QUEUE_MAX - 1) - REAR);
    }
}

void peek()
{
    printf("\n------PEEK Queue------");

    if (FRONT == -1 && REAR == -1)
    {
        printf("Queue Underflow!!\n Cannot Peek the Element of  the Queue!!");
    }
    else
    {

        printf("\nToppest value of the QUEUE is :%d", QUEUE[FRONT]);
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
    printf("------QUEUE------\n");
    int choice;
    while (1)
    {
        printf("\n------MENU---------\n");
        printf("PRESS 1 ENQUEUE FROM REAR\n");
        printf("PRESS 2 DEQUEUE FROM FRONT\n");
        printf("PRESS 3 PEEK\n");
        printf("PRESS 4 ISEMPTY\n");
        printf("PRESS 5 ISFULL\n");
        printf("PRESS 6 TRAVERSE\n");
        printf("PRESS 7 DEQUEUE FROM REAR\n");
        printf("PRESS 0 EXIT\n");
        printf("-----------------------------\n");
        printf("Enter your choice from the Above MENU  ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueuefromRear();
            break;
        case 2:
            dequeuefromFront();
            break;
        case 3:
            peek();
            break;
        case 4:
            isEmpty();
            break;

        case 5:
            isFull();
            break;
        case 6:
            traverse();
            break;
        case 7:
            dequeuefromRear();
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