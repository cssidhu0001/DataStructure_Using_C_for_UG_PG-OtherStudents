#include <stdio.h>
#define MAX 100

int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}
void deleteElement(int arr[], int *size, int element)
{
    int index = linearSearch(arr, *size, element);
    if (index == -1)
    {
        printf("Element %d not found in the array.\n", element);
        return;
    }
    for (int i = index; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1]; // Shift elements to the left
    }
    (*size)--; // Decrease the size of the array
}

int main()
{
    int arr[MAX], n, element;
    printf("Enter the number of elements in the array (max %d): ", MAX);
    scanf("%d", &n);
    if (n < 1 || n > MAX)
    {
        printf("Invalid size! Please enter a number between 1 and %d.\n", MAX);
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Input elements into the array
    }
    printf("Enter the element to delete: ");
    scanf("%d", &element);
    deleteElement(arr, &n, element); // Delete the specified element
    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
