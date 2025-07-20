#include <stdio.h>
#define MAX 100
// Function to perform linear search
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
// Main function to test the linear search
int main()
{
    int arr[MAX];
    int size, i;
    printf("Enter the size of the array (max %d): ", MAX);
    scanf("%d", &size);
    if (size < 1 || size > MAX)
    {
        printf("Invalid size! Please enter a number between 1 and %d.\n", MAX);
        return 1;
    }
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int searchElement;
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    int elementSearch = linearSearch(arr, size, searchElement); // Searching for the element

    if (elementSearch != -1)
    {
        printf("Element %d found at index %d.\n", searchElement, elementSearch);
    }
    else
    {
        printf("Element %d not found in the array.\n", searchElement);
    }
}
