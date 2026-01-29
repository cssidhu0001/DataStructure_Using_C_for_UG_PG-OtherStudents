#include <stdio.h>
#include <stdlib.h>

void callocFunc()
{
    int *arr = (int *)calloc(10, sizeof(int));
    if (arr == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    free(arr);  // Free the allocated memory to prevent memory leaks
    arr = NULL; // Set pointer to NULL after freeing
    if (arr == NULL)
        printf("Memory successfully freed\n");
}
int main()
{
    callocFunc();
    return 0;
}