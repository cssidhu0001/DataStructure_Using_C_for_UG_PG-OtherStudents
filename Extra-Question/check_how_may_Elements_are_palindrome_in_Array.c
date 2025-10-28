#include <stdio.h>
#define MAX 100
int arr[MAX];
int size;
void arrayCreate()
{
    printf("Enter how many elements in the Array!! ");
    scanf("%d", &size);
    printf("Enter %d elements in Array !!\n", size);
    int i;
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}
void Printarray()
{
    printf(" Elements in Array are !!\n");
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void countpalindrome()
{
    int count = 0;
    int rev = 0;
    int i;
    for (i = 0; i < size; i++)
    {
        int comp = arr[i], rem, rev = 0;
        while (arr[i] != 0)
        {
            rem = arr[i] % 10;
            rev = rev * 10 + rem;
            arr[i] /= 10;
        }
        if (comp == rev)
            count++;
    }
    printf("Number of Palindrome number present in the Array are: %d", count);
}
int main()
{
    arrayCreate();
    Printarray();
    countpalindrome();
}