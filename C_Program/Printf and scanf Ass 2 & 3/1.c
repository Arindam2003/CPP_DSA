#include<stdio.h>
int main(){
    int a,b,c,x;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);

    x=(a+b+c)/3;
    printf("Avg is %d",x);
    getch();
}