#include <stdio.h>
int main()
{
    int i, j;
    int arr1[3][3], arr2[3][3];
    printf("Enter First Number: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter Second Number: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int sum = 0, k;
    int arr3[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                sum = sum + (arr1[i][k] * arr2[k][j]);
            }
            arr3[i][j] = sum;
        }
    }
    printf("Result is: ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
