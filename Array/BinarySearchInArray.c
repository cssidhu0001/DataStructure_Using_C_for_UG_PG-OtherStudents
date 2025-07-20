#include <stdio.h>
#define MAX 100
// Function prototype for binary search
// Function to perform linear search
// Note: This code assumes that the array is sorted in ascending order before performing binary search.
// If the array is not sorted, you should sort it first using an appropriate sorting algorithm.
// Binary search function
// This function takes a sorted array, its size, and the key to search for.
int binarySearch(int arr[], int n, int key);
int binarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            return mid; // Return the index of the found element
        }
        else if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1; // Return -1 if the element is not found
}

// Main function to test the binary search
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

    // sorting the array before performing binary search
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array After Sorting:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");
    // Searching for the element calling   the binary search function
    int searchElement;
    printf("Enter the element to search: ");
    scanf("%d", &searchElement);

    int elementSearch = binarySearch(arr, size, searchElement); // Searching for the element

    if (elementSearch != -1)
    {
        printf("Element %d found at Position %d.\n", searchElement, elementSearch + 1);
    }
    else
    {
        printf("Element %d not found in the array.\n", searchElement);
    }
}
