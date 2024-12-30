#include<stdio.h>
void printN(int);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printN(num);
    return 0;
}
void printN(int n){
    if(n>0){
        printf("%d ",2*n-1);
        printN(n-1);
    }
}