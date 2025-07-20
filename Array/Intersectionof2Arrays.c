#include <stdio.h>
#define MAX_SIZE 100
void intersection(int arr1[], int size1, int arr2[], int size2)
{
    int result[MAX_SIZE];
    int k = 0;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                // Check if the element is already in the result
                int found = 0;
                for (int l = 0; l < k; l++)
                {
                    if (result[l] == arr1[i])
                    {
                        found = 1;
                        break;
                    }
                }
                if (!found)
                {
                    result[k++] = arr1[i];
                }
            }
        }
    }

    printf("Intersection of the two arrays: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", result[i]);
    }
    printf("\n");
}

int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size1, size2;
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    printf("Enter elements of first array: ");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Elements of First Array: ");
    for (int i = 0; i < size1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    printf("Enter elements of second array: ");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("Elements of Second Array: ");
    for (int i = 0; i < size2; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    intersection(arr1, size1, arr2, size2);
    return 0;
}