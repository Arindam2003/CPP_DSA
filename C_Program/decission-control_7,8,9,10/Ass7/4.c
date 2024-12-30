#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a/2;
    if(a==(b*2)){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }
}