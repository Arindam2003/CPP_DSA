#include<stdio.h>
int interest();
int main(){
    interest();
}

int interest(){
    int p,r,t,x;
    printf("Enter Priniciple Amount: ");
    scanf("%d",&p);
    printf("Enter Rate: ");
    scanf("%d",&r);
    printf("Enter Time: ");
    scanf("%d",&t);
    x=p*r*t/100;
    printf("Interest is %d",x);
}