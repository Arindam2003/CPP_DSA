#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        k = 1;
        for (j = 1; j <= 5; j++)
        {
            if (j >= i && j <= 5)
            {
                printf("%c", 64 + k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}