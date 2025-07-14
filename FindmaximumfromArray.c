#include <stdio.h>
#define SIZE 100
int maximumInArray(int arr[], int size)
{
    if (size <= 0)
    {
        return -1; // Return -1 for empty array
    }

    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
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
    int max = maximumInArray(arr, size);
    if (max != -1)
    {
        printf("The maximum element in the array is: %d\n", max);
    }
    else
    {
        printf("Array is empty.\n");
    }
    return 0;
}