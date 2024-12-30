#include<stdio.h>
int main(){
    int x,p;
    printf("Enter a number: ");
    scanf("%d",&x);
    p=x%10;
    printf("Last digit is %d",p);
    return 0;
}