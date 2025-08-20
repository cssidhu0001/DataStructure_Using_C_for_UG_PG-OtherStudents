#include <stdio.h>
#define MAX 100
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
}