#include<stdio.h>
int main(){
    char x;
    printf("Enter a Character: ");
    scanf("%c",&x);
    if(x>=65&&x<=90){
        printf("Upper Case");
    }
    else if(x>=97&&x<=122){
        printf("Lower Case");
    }
    else{
        printf("Special Case");
    }
    return 0;
}