#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    a=a*b;
    b=a/b;
    a=a/b;

    printf("a=%d\nb=%d",a,b);
    return 0;
    
}