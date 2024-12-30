#include <stdio.h>
void primefactor(int );
int main()
{
    int x;
    printf("Enter a Number: ");
    scanf("%d", &x);
    primefactor(x);
    return 0;
}
void primefactor(int n)
{
    int i;
    for (i = 2; n > 1; i++)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }
}