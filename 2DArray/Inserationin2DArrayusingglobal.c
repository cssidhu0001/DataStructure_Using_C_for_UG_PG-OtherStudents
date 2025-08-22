#include "stdio.h"
#define MAX 100

int arr[MAX][MAX];
int rows, column;

void insertIn2DArray()
{
    int colpos, rowpos, value;
    printf("Enter Row Pos: ");
    scanf("%d", &rowpos);
    printf("Enter Col Pos: ");
    scanf("%d", &colpos);
    printf("Enter Value: ");
    scanf("%d", &value);
    for (int j = column - 1; j > colpos - 1; j--)
    {
        arr[rowpos - 1][j + 1] = arr[rowpos - 1][j];
    }
    arr[rowpos - 1][colpos - 1] = value;
    column++;
    printf("Value Inserted Sucessfully!!");
}
void createarr()
{
    printf("Enter elements %d of  rows: %d and column:%d\n", rows * column, rows, column);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
void printarr()
{
    printf("Elements of 2D Array  Are: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    printf("Enter no. of rows in 2D Array: ");
    scanf("%d", &rows);
    printf("Enter no. of column in 2D Array: ");
    scanf("%d", &column);
    createarr();
    printarr();
    insertIn2DArray();
    printarr();
}