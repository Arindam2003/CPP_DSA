#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three sides ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        if((b+c)>a){
            printf("Triangle Valid");
        }
    }
    else if(b>a && b>c){
        if((a+c)>b){
            printf("Triangle Valid");
        }
    }
    else if(c>b && c>a){
        if((b+a)>c){
            printf("Triangle Valid");
        }
    }
    else{
        printf("Invalid Triangle");
    }
    return 0;
}