#include <stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    printf("REsult is %d", fact(num));
    return 0;
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}