#include <stdio.h>
#define MAX 100

int secondMaximum(int arr[], int size)
{
    int first = -1, second = -1; // Initialize to -1 to indicate no valid maximum found
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < first && arr[i] > second)
        {
            second = arr[i];
        }
    }
    return second;
}
int main()
{
    int arr[MAX], size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = secondMaximum(arr, size);
    if (result == -1)
        printf("There is no second maximum element\n");
    else
        printf("The second maximum element is %d\n", result);
    return 0;
}