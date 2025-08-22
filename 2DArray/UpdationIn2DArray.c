#include <stdio.h>
#define MAX 100
void updateElementin2DArray(int *rows, int *column, int arr[*rows][*column])
{
    printf("\nUpdate ELement in 2D Array\n");
    int rowpos, colpos, updateValue;

    printf("Enter the Row Position at which you want to update Element: ");
    scanf("%d", &rowpos);
    if (rowpos > (*rows) || rowpos < 1)
    {
        printf("Cannot Insert at Row-%d becuase it doesn't Exist\nEnter Row Position Between 0 to %d", *rows);
        return;
    }
    else
    {
        printf("Enter the Col Position in Row-%d at which you want to update Element: ", rowpos);
        scanf("%d", &colpos);
        if (colpos > (*column) || colpos < 1)
        {
            printf("Invalid column position only!!\nEnter column Position Between 0 to %d", *column);
            return;
        }
        else
        {
            printf("Enter th value you want to insert at row-%d col-%d", rowpos, colpos);
            scanf("%d", &updateValue);
            arr[rowpos - 1][colpos - 1] = updateValue;
            printf("Value %d Sucessfully update at row-%d col-%d", updateValue, rowpos, colpos);
        }
    }
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
    updateElementin2DArray(&rows, &column, arr);
    printarr(2 & rows, &column, arr);
}