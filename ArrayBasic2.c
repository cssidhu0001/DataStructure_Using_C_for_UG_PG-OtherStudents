#include <stdio.h>
#define MAXSIZE 100 // Defining the Maximum size of the array
int main()
{
    int array[MAXSIZE] = {10, 12, 45, 254, 75, 133, 67, 89, 90, 100};
    int size = 10; // Size of the array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]); // Printing the elements of the array
    }
}