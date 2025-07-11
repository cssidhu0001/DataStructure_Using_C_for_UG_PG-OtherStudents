#include <stdio.h>
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
void insertElement(int arr[], int *size, int element, int position)
{
    if (position < 0 || position > *size)
    {
        printf("Invalid position! Please enter a position between 0 and %d.\n", *size);
        return;
    }
    for (int i = *size; i > position; i--)
    {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }
    arr[position] = element; // Insert the new element
    (*size)++;               // Increase the size of the array
}
int main()
{
    int arr[100]; // Array to hold elements
    int size, element, position;

    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &size);
    if (size < 1 || size > 100)
    {
        printf("Invalid size! Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]); // Input elements into the array
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the element after which you want to insert the new element :");
    int searchElement;
    scanf("%d", &searchElement);
    position = linearSearch(arr, size, searchElement); // Find the position of the element
    if (position == -1)
    {
        printf("Element %d not found in the array.\nCannot insert Element in the Array", searchElement);
        return 1; // Exit if the element is not found
    }
    else
    {
        insertElement(arr, &size, element, position + 1); // Insert the new element
    }

    printf("Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]); // Print the updated array
    }

    return 0;
}