#include<stdio.h>
int main(){
    int a;
    printf("Enter a numbre:");
    scanf("%d",&a);
    if(a>99&&a<1000){
        printf("Three Digit Number");
    }
    else{
        printf("Not Three Digit number");
    }
}