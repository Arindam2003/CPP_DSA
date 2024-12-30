#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two Number:");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("Greater Number %d",a);
    }
    else if(b>a){
        printf("Greater Number %d",b);
    }
    else(a==b){
        printf("Same number is %d",a);
    }
}