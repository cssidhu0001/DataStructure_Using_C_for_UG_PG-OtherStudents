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

void inserationIn2DArray(int *rows, int *column, int arr[*rows][*column])
{
    int rowpos, colpos, value;

    printf("Enter Row at which you want to insert Element: ");
    scanf("%d", &rowpos);
    printf("Enter Column position in Row: %d at which you want to insert Element: ", rowpos);
    scanf("%d", &colpos);
    if ((rowpos < 0 && rowpos > (*rows)) || (colpos < 0 && colpos > (*column)))
    {
        printf("Cannot Insert Value at the given poisition as poisition is Invalid!!");
        return;
    }
    else
    {
    printf("Enter Value you want to Enter at Row- %d & Column: %d", rowpos, colpos);
    scanf("%d", &value);
    for (int i = (*column) - 1; i < colpos; i--)
    {
        arr[rowpos - 1][(*column) + 1] = arr[rowpos - 1][(*column)];
    }
    arr[rowpos - 1][colpos - 1] = value;

    (*column)++;
    printf("Element - %d at Row- %d & Column: %d has been inserted Sucessfully!!", value, rowpos, colpos);
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
    inserationIn2DArray(&rows, &column, arr);
    printarr(&rows, &column, arr);
}