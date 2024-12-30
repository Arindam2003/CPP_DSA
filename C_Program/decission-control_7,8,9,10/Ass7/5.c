#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter number: ");
    scanf("%d",&a);
    if((a&1)==1){
        printf("Odd");
    }
    else{
        printf("Even");
    }
}