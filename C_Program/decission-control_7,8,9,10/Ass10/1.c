#include<stdio.h>
int main(){
    int x;
    printf("Enter  a number:");
    scanf("%d",&x);
    if(x>0){
        printf("Number is Positive");
    }
    else if(x<0){
        printf("Number is Negetive");
    }
    else if(x==0){
        printf("Number is Zero");
    }
    return 0;
}