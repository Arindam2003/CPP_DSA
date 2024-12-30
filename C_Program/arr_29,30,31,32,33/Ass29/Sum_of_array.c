#include <stdio.h>
int main()
{
    int a[10], i;
    int sum = 0;
    printf("Enter 10 number: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum of the array is %d", sum);
    return 0;
}