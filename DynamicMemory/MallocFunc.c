#include <stdio.h>
#include <stdlib.h>

void mallocFunc()
{
    int *arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i * 10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    mallocFunc();
    return 0;
}