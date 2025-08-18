#include <stdio.h>
void createA(int a[], int *n)
{
    printf("n=%d", *n); // 5
    printf(" Address of 0 the index of aaray %p", a);
    printf("Array SIze"); // size =10
    scanf("%d", n);
    for (int i = 0; i < (*n); i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Printed from Function");

    for (int i = 0; i < (*n); i++)
    {
        printf("%d  ", a[i]);
    }
    // return n;
}
int main()
{
    int arr[100];
    int size = 5;
    createA(arr, &size); // after returing size vvalue will be updted to retrund vlue ---> 10
    printf("Size from main : %d", size);
    printf("Printed from  Main Function");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    } // what will be the value of size --->  10
}