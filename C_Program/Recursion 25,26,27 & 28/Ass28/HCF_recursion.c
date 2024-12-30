#include <stdio.h>
int hcf(int, int);
int main()
{
    int num1, num2;
    printf("Enter a Number: ");
    scanf("%d", &num1);
    printf("Enter a number: ");
    scanf("%d", &num2);
    printf("Hcf is %d", hcf(num1, num2));
}
int hcf(int a, int b)
{
    if(a>b){
        if(a%b==0){
            return b;
        }
        return hcf(b,a%b);
    }
    else{
        if(b%a==0){
            return a;
        }
        return hcf(a,b%a);
    }
}