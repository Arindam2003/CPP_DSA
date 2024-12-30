#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Enter a three digit number:");
    scanf("%d",&a);
    b=a%10;
    c=a/100;
    d=a/10;
    e=d%10;
    f=b*100+e*10+c;
    printf("Number is %d",f);
    return 0;
}