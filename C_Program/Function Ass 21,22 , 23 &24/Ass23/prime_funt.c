#include <stdio.h>
int prime(int);
int main()
{
    int res, inp;
    printf("Enter a Number: ");
    scanf("%d", &inp);
    res = prime(inp);
    if (res == 0)
    {
        printf("Not Prime");
    }
    else if (res == 1)
    {
        printf("Prime");
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