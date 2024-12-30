#include <stdio.h>
int prime(int);
int main()
{
    int x;
    printf("How Many Prime Numbers You Want:");
    scanf("%d", &x);
    int n = 1;
    int i = 2;
    while (n <= x) // for numbers of counting 
    {
        for (i; i < 10 * x; i++)
        {
            if (prime(i) == 1)
            {
                printf("%d ", i);
                n++;
                i++;
                break;
            }
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