#include <stdio.h>
#define MAX_SIZE 100
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[])
{
    int i = 0, j = 0, k = 0;
    for (; i < size1 && j < size2;)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }
    // Copy any remaining elements from either array
    while (i < size1)
    {
        merged[k++] = arr1[i++];
    }
    while (j < size2)
    {
        merged[k++] = arr2[j++];
    }
}

int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE], merged[MAX_SIZE * 2];
    int size1, size2;
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter elements of first array: ");
    for (int i = 0; i < size1; i++)
    {

        scanf("%d", &arr1[i]);
    }
    printf("Elements in First Array: ");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nEnter size of second array: ");
    scanf("%d", &size2);
    for (int i = 0; i < size2; i++)
    {
        printf("Enter elements of second array: ");
        scanf("%d", &arr2[i]);
    }
    printf("Elements in Second Array: ");
    for (int i = 0; i < size2; i++)
    {

        printf("%d ", arr2[i]);
    }
    printf("\n");
    mergeArrays(arr1, size1, arr2, size2, merged);
    printf("Merged Array: ");
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", merged[i]);
    }
}