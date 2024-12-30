#include <stdio.h>
#include <math.h>

int main()
{
    int num, count = 0, original, sum = 0;

    for(num=1;num<1000;num++){

    
    original = num;

    while (num > 0)
    {
        num = num / 10;
        count++;
    }

    while (original > 0)
    {
        int a = original % 10;
        sum = sum + pow(a, count);
        original = original / 10;
       }
    printf("%d ", sum);
    }
    
    return 0;
}