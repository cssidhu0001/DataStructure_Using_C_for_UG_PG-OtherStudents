#include <stdio.h>
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Initializing the array with 10 elements
    int size = sizeof(array) / sizeof(array[0]);   // Calculating the size of the array
    printf("Size of the array: %d\n", size);       // Printing the size of the array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]); // Printing the elements of the array
    }

    return 0;
}
