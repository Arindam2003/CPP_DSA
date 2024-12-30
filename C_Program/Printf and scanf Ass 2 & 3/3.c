#include<stdio.h>
int main(){
    int p,r,t;
    float x;
    printf("Enter principle: ");
    scanf("%d",&p);
    printf("Enter rate of interest: ");
    scanf("%d",&r);
    printf("Enter time: ");
    scanf("%d",&t);

    x=(p*r*t)/100;
    printf("Simple interest is %f",x);
    getch();
}