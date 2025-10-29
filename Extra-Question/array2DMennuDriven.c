// Menu driven program to input a 2-D array, output it, add all its elements, add only the diagonal
// elements, count the number of odd elements and find the largest among the elements stored.

#include <stdio.h>
#define MAX 100
int arr[MAX][MAX];
int row, col;
void create2Darray()
{
    int i, j;
    printf("\nEnter the number of rows u want to Enter in 2D Array: ");
    scanf("%d", &row);
    printf("\nEnter the number of cols u want to Enter in 2D Array: ");
    scanf("%d", &col);
    printf("\nEnter Elements in Array\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
void addAllElementsOf2DArray()
{
    printf("\nCalculating diagonal Sum When Rows and Colums are Equal In 2D array: ");
    int i, j, sum = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += i;
            }
            if ((i + j) == i)
            {
                sum += i;
            }
        }
    }
    printf("\nAddition of the Diagonals of the 2D array is : %d", sum);
}
void print2DArray()
{
    printf("\nElements in 2D Array\n");
    int i, j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("2D Array Runtime Intialization: \n");
    create2Darray();
    print2DArray();
    addAllElementsOf2DArray();
}
