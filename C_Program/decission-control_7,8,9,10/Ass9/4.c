#include<stdio.h>
int main (){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(x%3==0&&x%2==0){
        printf("Your Numebr is Divisible by 3 and 2");
    }
    else{
        printf("Not Divisible by 3 and 2");
    }
    return 0;
}