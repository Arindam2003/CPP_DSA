#include<stdio.h>
void dtob(int);
int main(){
    int num;
    printf("Enter any Decimal Number: ");
    scanf("%d",&num);
    dtob(num);
}
void dtob(int n){
    if(n>0){
        dtob(n/8);
        printf("%d ",n%8);
    }
}