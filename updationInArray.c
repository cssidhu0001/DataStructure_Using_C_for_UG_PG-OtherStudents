#include <stdio.h>
#define MAX_SIZE 100

void updateArray(int arr[], int size, int pos, int newValue)
{
    if (pos >= 0 && pos < size)
    {
        arr[pos] = newValue;
    }
    printf("Element at position %d updated to %d\n", pos, newValue);
    printf("Updated array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[MAX_SIZE];
    int size, value, pos;
    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);
    if (size < 1 || size > MAX_SIZE)
    {
        printf("Invalid size. Please enter a size between 1 and %d.\n", MAX_SIZE);
        return 1;
    }
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to update (0 to %d): ", size - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= size)
    {
        printf("Invalid position. Please enter a position between 0 and %d.\n", size - 1);
        return 1;
    }
    printf("Enter the new value: ");
    scanf("%d", &value);
    updateArray(arr, size, pos, value);
    return 0;
}