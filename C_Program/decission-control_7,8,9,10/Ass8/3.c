#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("In Quadratic Equation ax2 + bx + c\n");
    printf("Enter a b and c:");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        printf("Real and Distinct");
    }
    else if(d==0){
        printf("Real and equal");
    }
    else{
        printf("Imaginary");
    }

}