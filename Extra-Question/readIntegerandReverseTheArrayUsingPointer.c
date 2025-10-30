// Program to read integers into an array and reverse those using pointers.
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int arr[MAX];
int size;
void create1DArray()
{
    printf("\nCreating 1D Array!!");
    printf("\n How many elements you want to insert in Array ");
    int i;
    scanf("%d", &size);
    printf("Enter %d elements in Array !!", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void printArray()
{
    printf("\nTraversing 1D Array!!");

    printf("Elements in Array !!", size);
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    printf("\n---1D ARRAY MENU DRIVEN---");
    create1DArray();
    printArray();
}