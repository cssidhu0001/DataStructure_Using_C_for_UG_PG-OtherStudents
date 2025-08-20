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
}
