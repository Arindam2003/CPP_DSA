#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter Row Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}