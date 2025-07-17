#include <stdio.h>
#define MAX 100
int secondMinimum(int arr[], int size)
{
    int first = MAX, second = MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > first && arr[i] < second)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    int arr[MAX];
    printf("Enter the number of elements in the array: ");
    int size;
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result = secondMinimum(arr, size);
    if (result == MAX)
        printf("There is no second minimum element\n");
    else
        printf("The second minimum element is %d\n", result);
    return 0;
}