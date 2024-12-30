#include <stdio.h>
int hcf(int, int);
int main()
{
    int x, y;
    printf("Enter two Number: ");
    scanf("%d %d", &x, &y);
    hcf(x, y);
}
int hcf(int x, int y)
{
    int min = x < y ? x : y;
    int max = x > y ? x : y;
    int i, j, rem;

    while (rem != 0)
    {
        rem = max % min;
        max = min;
        min = rem;
    }
    printf("HCF is %d", max);
}