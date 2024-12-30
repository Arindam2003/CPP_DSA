#include <stdio.h>
int prime(int);
int main()
{
    int i, j;
    printf("Enter Starting Number: ");
    scanf("%d", &i);
    printf("Enter Ending Number: ");
    scanf("%d", &j);
    for (i; i <= j; i++)
    {
        if (prime(i) == 1)
        {
            printf("%d ", i);
        }
    }
}

int prime(int x)
{
    int i;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}