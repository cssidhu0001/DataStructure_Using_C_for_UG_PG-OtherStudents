#include <stdio.h>
#define MAXSIZE 100
int main()
{
    int arr[MAXSIZE];
    int size, i, sumeven = 0;
    printf("Enter how many element in an Array!\t");
    scanf("%d", &size); // getting the size of array from the user!
    if (size < 1 || size > MAXSIZE)
    {
        printf("Invalid size! Please enter a number between 1 and %d.\n", MAXSIZE);
        return 1;
    }
    printf("Enter %d elements in the Array\n", size);
    for (int i = 0; i < size; i++)
    {

        scanf("%d", &arr[i]); // adding the elements in the array using for loop
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0) // checking if the element is even
        {

            sumeven += arr[i]; // suming the  even array element one by one
        }
    }

    printf("Sum of all the even elements of an array is: %d", sumeven); // printing the sum of the Array
}