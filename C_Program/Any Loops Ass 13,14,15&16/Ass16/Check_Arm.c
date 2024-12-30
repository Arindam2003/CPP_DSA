#include <stdio.h>
#include <math.h>

int main()
{
    int num, count = 0, original, sum = 0, a;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    int orgn = num;

    while (num > 0)
    {
        num = num / 10;
        count++;
    }
    printf("Total number is %d \n", count);
    num = original;
    while (num > 0)
    {
        int digit = num % 10;
        sum = sum + pow(digit, count);
        num = num / 10;
    }
    printf("Sum is %d\n", sum);
    if (sum == orgn)
    {
        printf("This is Armstrong Number");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}