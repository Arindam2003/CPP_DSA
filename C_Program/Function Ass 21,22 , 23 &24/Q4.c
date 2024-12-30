#include <stdio.h>
int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    natu(x);
}
void natu(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}