#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a int number:");
    scanf("%d",&a);
    printf("Enter another int number:");
    scanf("%d",&b);
    printf("Before swaping a=%d and b= %d \n",a,b);
    a=a+b-(b=a);
    printf("After swaping a=%d and b=%d",a,b);
    return 0;
}