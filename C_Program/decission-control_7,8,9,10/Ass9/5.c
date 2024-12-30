#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x%7==0 || x%3==0){
        printf("Number is Divisible by 7 or 3");
    }
    else{
        printf("Number is not Divisible by 7 or 3");
    }
    return 0;
}
