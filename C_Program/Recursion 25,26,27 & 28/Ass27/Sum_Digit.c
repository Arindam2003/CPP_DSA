#include<stdio.h>
int sumdigit(int);
int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    printf("Sum of Digit is %d",sumdigit(num));
    return 0;
}
int sumdigit(int n){
    if(n==0){
        return 0;
    }
    return n%10 + sumdigit(n/10);
}