#include <stdio.h>
#define MAXSIZE 100 // Defining the Maximum size of the array
int main()
{
    int arr[MAXSIZE];
    int size, i;
    printf("\n5Enter the size of the array (max %d): ", MAXSIZE);
    scanf("%d", &size);
    if (size < 1 || size > MAXSIZE)
    {
        printf("\nInvalid size! Please enter a number between 1 and %d.\n", MAXSIZE);
        return 1;
    }
    printf("\nEnter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nIntital elements of an Array!! \t");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    // Insertation into Array using Position by user
    int pos;
    printf("\nEnter position you want to insert Element at: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > size)
    {
        printf("\nInvalid Positon! Please enter a number between 1 and %d.\n", size);
        return 1;
    }
    int value; // decalartion of value and creation of memory after the entered position is valid
    printf("\nEnter the value you want to insert  Posistion%d:  ", pos);
    scanf("%d", &value);
    for (int j = size - 1; j >= pos - 1; j--)
    {
        arr[j + 1] = arr[j]; // shifting the array elements to free up the space to insert new element!!
    }
    arr[pos - 1] = value; // inserating the value after shifting of Array Elements
    size++;               // increasing the size of array after inseration of value
    printf("\nElement %d is inserted succesfully at Position- %d", value, pos);

    printf("\nArray after Inseration!! \t");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}