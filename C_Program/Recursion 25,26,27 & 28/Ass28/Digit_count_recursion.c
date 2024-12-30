#include<stdio.h>
int count(int);
int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    printf("Number of Digit is %d",count(num));
}
int count(int n){
    if(n/10==0){
        return 1;
    }else{
        return count(n/10)+1;
    }
}