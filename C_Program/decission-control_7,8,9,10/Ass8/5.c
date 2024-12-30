#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c){
        printf("Greatest of three is %d",a);
    }
    else if(b>=a && b>=c){
        printf("Greatest is %d",b);
    }
    else if(c>=a &&c>=b){
        printf("Greatest is %d",c);
    }
    getch();
    
}