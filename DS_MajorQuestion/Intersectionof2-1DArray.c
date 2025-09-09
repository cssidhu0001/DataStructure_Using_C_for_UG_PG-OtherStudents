#include <stdio.h>

int main()
{
    int a[50], b[50], c[100];

    int i, k = 0, j, na, nb, flag;

    printf("Enter the number of elements in Array A and B:\n");
    scanf("%d%d", &na, &nb);

    printf("Enter elements of Array A:\n");
    for (i = 0; i < na; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of Array B:\n");
    for (i = 0; i < nb; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < na; i++)
    {
        flag = 0;
        for (j = 0; j < nb; j++)
        {
            if (a[i] == b[j])
            {

                for (int x = 0; x < k; x++)
                {
                    if (c[x] == a[i])
                    {
                        flag = 1;
                        break;
                    }
                }
                if (!flag)
                {
                    c[k++] = a[i];
                }
            }
        }
    }
    printf("Intersection of the two arrays is:\n");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}