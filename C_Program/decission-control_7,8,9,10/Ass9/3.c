#include<stdio.h>
void main(){
    char x;
    printf("Enter a Charecter:");
    scanf("%c",&x);
    if(x>=65&&x<=90){
        printf("Upper Case");
    }
    else if(x>=97&&x<=122){
        printf("Lower case");
    }
    else{
        printf("Invalid Charecter");
    }
}