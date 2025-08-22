#include <stdio.h>
#define MAX 100
void maxmimumIn2DArray(int *rows, int *column, int arr[*rows][*column])
{
    int i, j;
    int max = arr[0][0];
    for (i = 0; i < (*rows); i++)
    {
        for (j = 0; j < (*column); j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    printf("\nMaximum Element in 2D Array is: %d", max);
}
void minimumIn2DArray(int *rows, int *column, int arr[*rows][*column])
{
    int i, j;
    int min = arr[0][0];
    for (i = 0; i < (*rows); i++)
    {
        for (j = 0; j < (*column); j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }
    printf("\nMinimum Element in 2D Array is: %d ", min);
}

void createarr(int *rows, int *column, int arr[*rows][*column])
{
    printf("Enter elements %d of  rows: %d and column:%d\n", (*rows) * (*column), *rows, *column);
    for (int i = 0; i < (*rows); i++)
    {
        for (int j = 0; j < (*column); j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void printarr(int *rows, int *column, int arr[*rows][*column])
{

    printf("Elements of 2D Array  Are: \n");
    for (int i = 0; i < (*rows); i++)
    {
        for (int j = 0; j < (*column); j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{

    int arr[MAX][MAX];
    int rows, column;
    printf("Enter no. of rows in 2D Array: ");
    scanf("%d", &rows);
    printf("Enter no. of column in 2D Array: ");
    scanf("%d", &column);
    createarr(&rows, &column, arr);
    printarr(&rows, &column, arr);
    maxmimumIn2DArray(&rows, &column, arr);
    minimumIn2DArray(&rows, &column, arr);
}