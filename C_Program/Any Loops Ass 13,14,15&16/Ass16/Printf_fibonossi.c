#include <stdio.h>
int main()
{
    int n, i, a, b, sum;

    printf("Enter a number: ");
    scanf("%d", &n);
    a = -1;
    b = 1;

    for (i = 1; i <= n; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d ", sum);
    }
    getch ();
}