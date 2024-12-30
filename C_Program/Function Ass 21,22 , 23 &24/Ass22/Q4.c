#include<stdio.h>
int check(int,int);
int main(){
    int x,y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    printf("Enter a Digit: ");
    scanf("%d",&y);
    check(y,x);
}

int check(int a, int b){
    int c=b;
    
    while(b>0){
        b=b%10;
        if(b==a){
            printf("The digit %d contain in this number %d",b,c);
            return;
        }
        
        b=b/10;
    }
    printf("The Digit is not in This Number!!!");
}
