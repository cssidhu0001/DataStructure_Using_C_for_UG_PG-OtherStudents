#include <stdio.h>
#incldue < stdlib.h>

void allocateMemory()
{
    int *ptr;
    int size;
    printf("How much space you want to Allocate: ");
    scanf("%d", &size);
    *ptr = (int *)malloc(size * sizeof(int));
    printf("Enter %d Value in Allocated Space", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", ptr[i]);
    }
    printf("\n Values entered are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", (*ptr)[i]);
    }
}

int main()
{
    allocateMemory();
}