#include <stdio.h>
// void createarray(int a[],int*s)   using array as formal parameter
void createarray(int *a, int *s) // formal parameter is pointer
{
    int i;
    printf("how many elements in an array:");
    scanf("%d", s);
    printf("value of %d", *s);
    printf("enter elements");
    for (i = 0; i < (*s); i++)
    {
        // scanf("%d",&a[i]); // local scope
        scanf("%d", &a[i]);
    }
    printf("elements of array ");
    for (i = 0; i < (*s); i++)
    {
        printf("%d", a[i]);
    }
}
int main()
{
    int arr[100]; // localto main scope
    int size;
    createarray(arr, &size); // actual parameter
}