#include <stdio.h>
int lcm(int, int);
int main()
{
    int a, b;
    printf("Enter Two Number: ");
    scanf("%d %d", &a, &b);
    int res = lcm(a, b);
    printf("Lcm is %d", res);
}

int lcm(int x, int y)
{
    int i;
    int max = x > y ? x : y;
    for (i = max; i <= x * y; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            return i;
        }
    }
}