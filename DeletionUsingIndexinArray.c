#include <stdio.h>
#define MAX 100
int main()
{
    int arr[MAX];
    printf("Enter the number of elements in the array: ");
    int size;
    scanf("%d", &size);
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index of the element to delete: ");
    int index;
    scanf("%d", &index);

    if (index < 0 || index >= size)
    {
        printf("Invalid index!\n");
    }
    else
    {
        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
        printf("Element deleted successfully.\n");
    }

    printf("Updated array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}