#include <stdio.h>
#define SIZE 100
int minimumInArray(int arr[], int size)
{
    if (size <= 0)
    {
        return -1; // Return -1 for empty array
    }

    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[SIZE];
    int size;
    printf("Enter the number of elements in the array (max %d): ", SIZE);
    scanf("%d", &size);
    if (size > SIZE)
    {
        printf("Size exceeds maximum limit of %d. Exiting.\n", SIZE);
        return 1;
    }
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = minimumInArray(arr, size);
    if (min != -1)
    {
        printf("The minimum element in the array is: %d\n", min);
    }
    else
    {
        printf("Array is empty.\n");
    }
    return 0;
}