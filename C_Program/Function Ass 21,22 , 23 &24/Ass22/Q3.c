#include <stdio.h>
int fact(int);

int main()
{
    int a, b;
    printf("Enter from n number: ");
    scanf("%d", &a);
    printf("Enter from arrangement r: ");
    scanf("%d", &b);
    int res = fact(a) / fact(a - b);
    printf("Result is %d", res);
    return 0;
}

int fact(int x)
{
    int s = 1;
    while (x > 1)
    {
        s = s * x;
        x--;
    }
    return s;
}