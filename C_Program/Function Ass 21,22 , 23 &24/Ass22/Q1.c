#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    printf("Fact is %d", fact(x));
}
int fact(int num)
{
    int i, res=1;
    for (i = num; i >= 1; i--)
    {
        res = res * i;
    }
    return res;
}