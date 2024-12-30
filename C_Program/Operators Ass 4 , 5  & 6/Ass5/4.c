#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a%10;
    c=a-b;
    printf("Now number is %d",c);
    return 0;
}