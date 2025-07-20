// Union of two Arrays
#include <stdio.h>
#define MAX 100
void unionOfArrays(int arr1[], int sizeArray1, int arr2[], int sizeArray2)
{
    int i, j, k = 0;
    int unionArr[MAX];

    // Add elements of first array to unionArr
    for (i = 0; i < sizeArray1; i++)
    {
        unionArr[k++] = arr1[i];
    }

    // Add elements of second array to unionArr if not already present
    for (i = 0; i < sizeArray2; i++)
    {
        int found = 0;
        for (j = 0; j < k; j++)
        {
            if (arr2[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
        {
            unionArr[k++] = arr2[i];
        }
    }

    // Print the union of the two arrays
    printf("Union of the two arrays: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", unionArr[i]);
    }
    printf("\n");
}

int main()
{
    int arr1[MAX], arr2[MAX];
    int sizeArray1, sizeArray2, i;

    printf("Enter size of first array: ");
    scanf("%d", &sizeArray1);
    printf("Enter elements of first array: ");
    for (i = 0; i < sizeArray1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &sizeArray2);
    printf("Enter elements of second array: ");
    for (i = 0; i < sizeArray2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    unionOfArrays(arr1, sizeArray1, arr2, sizeArray2);

    return 0;
}