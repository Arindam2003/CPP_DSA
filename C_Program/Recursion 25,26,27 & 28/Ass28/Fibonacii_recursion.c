#include <stdio.h>
int printfib(int);
int main()
{
    int x, i;
    printf("Enter number of elements: ");
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        printf("%d ", printfib(i));
    }
    return 0;
}
int printfib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return printfib(n - 1) + printfib(n - 2);
}