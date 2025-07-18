#include <stdio.h>
#define MAX 100

void createArray(int arr[], int *size)
{
    printf("Enter the number of elements in the array: ");
    scanf("%d", size);
    printf("Enter %d elements: ", *size);
    for (int i = 0; i < *size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int size)
{
    printf("Array Values: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *size, int element, int position)
{
    if (*size >= MAX)
    {
        printf("Array is full. Cannot insert element.\n");
        return;
    }

    if (position < 0 || position > *size)
    {
        printf("Invalid position. Element not inserted.\n");
        return;
    }

    // Shift elements to the right
    for (int i = *size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    (*size)++;
}

void deleteElement(int arr[], int *size, int index)
{
    if (index < 0 || index >= *size)
    {
        printf("Invalid index! Element not deleted.\n");
        return;
    }

    // Shift elements to the left
    for (int i = index; i < *size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    (*size)--;
    printf("Element deleted successfully.\n");
}

void updateElement(int arr[], int size, int index, int newValue)
{
    if (index < 0 || index >= size)
    {
        printf("Invalid index! Element not updated.\n");
        return;
    }

    arr[index] = newValue;
    printf("Element updated successfully.\n");
}

void searchElement(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            printf("Element %d found at index %d.\n", element, i);
            return;
        }
    }
    printf("Element %d not found in the array.\n", element);
}

void menuDrivenArray()
{
    int arr[MAX];
    int size = 0;
    int choice, element, position, index, newValue;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Update Array \n");
        printf("6. Search Element\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createArray(arr, &size);
            break;
        case 2:
            displayArray(arr, size);
            break;
        case 3:
            printf("Enter element to insert: ");
            scanf("%d", &element);
            printf("Enter position to insert (0 to %d): ", size);
            scanf("%d", &position);
            insertElement(arr, &size, element, position);
            break;
        case 4:
            printf("Enter position to delete (0 to %d): ", size - 1);
            scanf("%d", &position);
            deleteElement(arr, &size, position);
            break;
        case 5:
            printf("Enter index to update (0 to %d): ", size - 1);
            scanf("%d", &index);
            printf("Enter new value: ");
            scanf("%d", &newValue);
            updateElement(arr, size, index, newValue);
            break;
        case 6:
            printf("Enter element to search: ");
            scanf("%d", &element);
            searchElement(arr, size, element);
            break;
        case 7:
            printf("Do you want to exit? (1 for Yes, 0 for No): ");
            int exitChoice;
            scanf("%d", &exitChoice);
            if (exitChoice == 1)
            {
                printf("Exiting the program.\n");
                return;
            }
            printf("Continuing the program.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}

int main()
{
    printf("Menu Driven Array Operations\n");
    menuDrivenArray();
    return 0;
}
