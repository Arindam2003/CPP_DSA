#include<stdio.h>
int main(){
    int a,b,c,d,x,y;
    printf("Enter a three digit number:");
    scanf("%d",&x);
    a=x%10;
    b=x/10;
    c=b%10;
    d=b/10;
    y=a+c+d;
    printf("Sum of digit %d",y);
    getch();
}