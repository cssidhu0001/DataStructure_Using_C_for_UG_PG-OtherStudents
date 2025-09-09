// Program to find the sum of all Even Elements of the Array!!
#include "stdio.h"
#include "stdlib.h"
#define MAX 100

int createArray(int arr[], int size)
{
    int i;
    printf("Enter how many elements in the array you want to array: \t");
    scanf("%d", &size);
    if (size > MAX || size <= 0)
    {
        printf("Invalid size! Please enter a size between 1 and %d.\n", MAX);
        return -1;
    }
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return size;
}
void printArray(int arr[], int size)
{
    int i;
    printf("The elements of the array are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t ", arr[i]);
    }
    printf("\n");
}
int SumofEvenElements(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[MAX], size = 0, choice;
    while (1)
    {
        printf("\n Menu Driven Program!\n");
        printf("-------------MENU-------------\n");
        printf(" PRESS :1 To Create Array\n");
        printf(" PRESS :2 To Print Array\n");
        printf(" PRESS :3 To Sum the Even Elements of Array\n");
        printf("------------------------------------------------------\n");
        printf("Enter your Choice from the menu: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Creating Array.......\n");
            size = createArray(arr, size);
        }
        break;
        case 2:
        {
            if (size > 0)
            {
                printArray(arr, size);
            }
            else
            {
                printf("Array is empty! Please create an array first.\n");
            }
        }
        break;
        case 3:
        {
            if (size > 0)
            {
                int sum = SumofEvenElements(arr, size);
                printf("Sum of Even Elements of Array is : %d\n\n ", sum);
            }
            else
            {
                printf("Array is empty! Please create an array first.\n");
            }
        }
        break;
        default:
            printf("Invalid choice! \n Kindly enter Choice between 0 to 10 . \tPlease try again.\n");
            break;
        }
    }
}