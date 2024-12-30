// Next Prime Number of a Given Number


#include <stdio.h>
int prime(int);
int main()
{
    int x, i;
    printf("Next Prime of: ");
    scanf("%d", &x);
    for (i = x + 1; i < 2 * x; i++)
    {
        if (prime(i) == 1)
        {
            printf("Next prime of %d is %d", x, i);
            break;
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