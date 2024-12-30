#include <stdio.h>
double power(double, double);
int main()
{
    double x, y;
    printf("Enter Two numebr: ");
    scanf("%lf %lf", &x, &y);
    printf("Number is %lf", power(x, y));
}
double power(double x, double y)
{
    if (y == 0)
    {
        return 1;
    }
    if (y > 0)
    {
        return x * power(x, y - 1);
    }
    else
    {
        return 1 / x * power(x, y + 1);
    }
}