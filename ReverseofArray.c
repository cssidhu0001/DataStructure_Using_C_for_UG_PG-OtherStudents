#include <stdio.h>
#define MAX_SIZE 100
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        // Swap the elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[MAX_SIZE];
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    if (size > MAX_SIZE)
    {
        printf("Size exceeds maximum limit of %d.\n", MAX_SIZE);
        return 1;
    }
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, size);
    printf("Reversed array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
