#include <stdio.h>
int cir(int);

int main()
{
    int x, a;
    printf("Enter radius of circle: ");
    scanf("%d", &x);
    a = cir(x);
    printf("%d", a);
    return 0;
}

int cir(int r)
{
    return (3.414 * r * r);
}
