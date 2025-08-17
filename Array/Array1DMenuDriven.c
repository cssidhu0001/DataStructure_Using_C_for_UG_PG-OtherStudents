#include <stdio.h>
#include <Stdlib.h>
#define MAX 100
// Macros are alwys written in UPPER CASE --> Syntax #define MAX 100

int createArray(int arr[], int size)
{
    int i;
    printf("Enter how many elements in the array you want to array: \t");
    scanf("%d", &size);
    if (size > MAX || size <= 0)
    {
        printf("Invalid size! Please enter a size between 1 and %d.\n", MAX);
        return -1;
    }
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return size;
}
void printArray(int arr[], int size)
{
    int i;
    printf("The elements of the array are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t ", arr[i]);
    }
    printf("\n");
}
int insertElementUsingPosition(int arr[], int size, int element, int position)
{
    for (int i = size; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[position - 1] = element;
    printf("Element %d inserted at position %d.\n", element, position);
    return size + 1;
}
int deleteElementUsingPosition(int arr[], int size, int position)
{
    if (position < 0 || position >= size)
    {
        printf("Invalid position! Please enter a position between 0 and %d.\n", size - 1);
        return size;
    }
    for (int i = position; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("Element at position %d deleted.\n", position);
    return size - 1;
}
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i + 1;
        }
    }
    return -1;
}
int insertUsingElement(int arr[], int size)
{
    if (size >= MAX)
    {
        printf("Array is full! Cannot insert more elements.\n");
        return size;
    }
    int element;
    printf("Enter the element after which you want to insert the new element: ");
    scanf("%d", &element);
    int position = -1;
    position = linearSearch(arr, size, element);
    size = insertElementUsingPosition(arr, size, element, position);
    return size + 1;
}
int deleteUsingElement(int arr[], int size)
{
    if (size < 0)
    {
        printf("Array is Empty! Cannot Delete the Elements .\n");
        return size;
    }
    int element;
    printf("Enter the element which you want to delete : ");
    scanf("%d", &element);
    int position = -1;
    position = linearSearch(arr, size, element);
    size = deleteElementUsingPosition(arr, size, position);
    return size - 1;
}
int maximumfromTheArray(int arr[], int size)
{
    if (size < 0)
    {
        printf("Cannot find the maximum number as Array is Empty!!. \n");
        return -1;
    }
    int i, max = arr[0];
    for (i = 0; i < size; i++)
    {
        if (max > arr[i])
        {
            max = arr[i];
        }
        return max;
    }
}
int minimumfromTheArray(int arr[], int size)
{
    if (size < 0)
    {
        printf("Cannot find the minimum number as Array is Empty!!. \n");
        return -1;
    }
    int i, min = arr[0];
    for (i = 0; i < size; i++)
    {
        if (min < arr[i])
        {
            min = arr[i];
        }
        return min;
    }
}
int bubblesort(int arr[],int size){
    
}

int binarySearchinArray(int arr[], int size){

}
int main()
{
    int arr[100], size = 0, choice, element, position;
    while (1)
    {
        printf("\nWelcome to the Array Menu Driven Program!\n");
        printf("-------------MENU-------------\n");
        printf(" PRESS :1 To Create Array\n");
        printf(" PRESS :2 To Print Array\n");
        printf(" PRESS :3 To Insert Element Using Position\n");
        printf(" PRESS :4 To Delete Element Using Position\n");
        printf(" PRESS :5 To Search Element Using Linear Search\n");
        printf(" PRESS :6 To Insert Element Using Element\n");
        printf(" PRESS :7 To Delete Element Using Element\n");
        printf(" PRESS :0 To Exit\n");
        printf("------------------------------------------------------\n");
        printf("Enter your Choice from the menu: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Creating Array.......\n");
            size = createArray(arr, size);
        }
        break;
        case 2:
        {
            if (size > 0)
            {
                printArray(arr, size);
            }
            else
            {
                printf("Array is empty! Please create an array first.\n");
            }
        }
        break;
        case 3:
        {
            if (size > 0)
            {

                printf("Enter the position to insert the element (1 to %d): ", size + 1);
                scanf("%d", &position);
                if (position < 1 || position > size + 1)
                {
                    printf("Invalid position! Please enter a position between 1 and %d.\n", size + 1);
                    continue;
                }
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                size = insertElementUsingPosition(arr, size, element, position);
            }
        }

        break;
        case 4:
        {
            if (size > 0)
            {
                printf("Enter the position of the element to delete (0 to %d): ", size - 1);
                scanf("%d", &position);
                size = deleteElementUsingPosition(arr, size, position);
            }
        }
        break;
        case 5:
        {
            if (size > 0)
            {
                printf("Enter the element to search: ");
                scanf("%d", &element);
                int result = linearSearch(arr, size, element);
                if (result != -1)
                {
                    printf("Element %d found at position %d.\n", element, result);
                }
                else
                {
                    printf("Element %d not found in the array.\n", element);
                }
            }
        }
        break;
        case 6:
        {
            if (size > 0)
            {

                size = insertUsingElement(arr, size);
            }
            else
            {
                printf("Array is empty! Please create an array first.\n");
            }
        }
        case 0:
        {
            printf("Do you really want to exit? (1 for Yes, 0 for No): ");
            int exitChoice;
            scanf("%d", &exitChoice);
            if (exitChoice == 1)
            {

                printf("Exiting the program. Goodbye!\n");
                exit(0);
            }
            else
            {
                printf("Returning to the menu.\n");
            }
        }
        default:
            printf("Invalid choice! \n Kindly enter Choice between 0 to 10 . \tPlease try again.\n");
            break;
        }
    }
}