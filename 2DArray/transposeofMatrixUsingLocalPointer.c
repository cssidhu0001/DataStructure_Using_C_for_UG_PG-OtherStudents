#include <stdio.h>
#define MAX 100
void tranposeMaxtrix(int arr[MAX][MAX], int transpose[MAX][MAX], int row, int col)
{
    printf("Transpose of Matrix !!");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
}
void createarr(int *rows, int *column, int arr[MAX][MAX])
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

void printarr(int *rows, int *column, int arr[MAX][MAX])
{

    printf("Elements of 2D Array  Are: \n");
    for (int i = 0; i < (*rows); i++)
    {
        for (int j = 0; j < (*column); j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{

    int arr[MAX][MAX];
    int transposeMatrix[MAX][MAX];
    int rows, column;
    printf("\nEnter no. of rows in 2D Array: ");
    scanf("%d", &rows);
    printf("\nEnter no. of column in 2D Array: ");
    scanf("%d", &column);
    createarr(&rows, &column, arr);
    printarr(&rows, &column, arr);
    tranposeMaxtrix(arr, transposeMatrix, rows, column);
    printf("\nPrinting of Transpose Matrix !!");
    printarr(&column, &rows, transposeMatrix);
}