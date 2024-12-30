#include <stdio.h>
int main()
{
    int n, i, a, b, sum=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    a = -1;
    b = 1;

    for (i = 1; i <= (n+2); i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        if(sum==n){
            printf("This is Fibonossi Number");
            return;
        }
    }
    printf("Not a Fibonossi Number");
}