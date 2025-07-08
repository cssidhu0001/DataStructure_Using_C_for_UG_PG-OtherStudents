#include <stdio.h>
#define MAXSIZE 100
int main()
{
    int arr[MAXSIZE];
    int size, i;
    printf("Enter the size of the array (max %d): ", MAXSIZE);
    scanf("%d", &size);
    if (size < 1 || size > MAXSIZE)
    {
        printf("Invalid size! Please enter a number between 1 and %d.\n", MAXSIZE);
        return 1;
    }
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements in the array are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}