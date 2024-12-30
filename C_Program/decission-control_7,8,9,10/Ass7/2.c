#include<stdio.h>
int main(){
    int a;
    printf("Enter a numebr: ");
    scanf("%d",&a);
    if(a%5==0){
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisible by 5");
    }
}