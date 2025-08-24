#include "stdio.h"
#define MAX 100

// without using pointer in row & column passing
void create2DArray(int arr[MAX][MAX], int row, int col) // value copied row=0 col=0
{
    printf("\nEnter the Size of Row: ");
    scanf("%d", &row); // row =3
    printf("\nEnter the Size of Col: ");
    scanf("%d", &col); // col =3

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]); // 1 2 3 4 5 6 7 8 9
        }
    }
    printf("\nValue of Row: %d", row);
    printf("\nValue of col: %d", col);
}
void create2DArray1(int arr[MAX][MAX], int *row, int *col) // row=1011 col=1111
{
    printf("\nEnter the Size of Row: ");
    scanf("%d", row); // 4
    printf("\nEnter the Size of Col: ");
    scanf("%d", col); // 4
    int i, j;
    for (i = 0; i < (*row); i++) // will be using dereferencing op or value at operator
    {
        for (j = 0; j < (*col); j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nValue of Row using pointer: %d", *row);
    printf("\nValue of col using pointer: %d", *col);
}

int main()
{
    int arr[MAX][MAX];
    int rowsize = 0, colsize = 0;                                    // memory space will be allocated and address will be given
    printf("\nValue of col in Before  Main Function : %d", colsize); // 0
    printf("\nValue of Row in  Before Main Function : %d", rowsize); // 0
    create2DArray(arr, rowsize, colsize);                            // passing argument using value  rowsize=0 colsize=0
    printf("\nValue of Row in  After Main Function : %d", rowsize);  // 3    //0
    printf("\nValue of col in After  Main Function : %d", colsize);  // 3  //0

    create2DArray1(arr, &rowsize, &colsize); // rowzie 1011 colsize 1111
    printf("\nValue of Row in Main Function by pointer : %d", rowsize);
    printf("\nValue of col in Main Function by pointer : %d", colsize);
}
